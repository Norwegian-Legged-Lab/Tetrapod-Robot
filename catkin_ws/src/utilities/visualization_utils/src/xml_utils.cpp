#include "visualization_utils/xml_utils.h"
#include<iostream>
#include<sstream>

using p_el = DOMElement*;
using p_text = DOMText*;
using p_doc = DOMDocument*;
using p_impl = DOMImplementation*;

void safeSetAttribute(p_el pElem, std::string key, std::string val)
{
    std::cout << "beginning safeSetAttribute" << std::endl;
    XMLCh* xmlchKey = XMLString::transcode(key.c_str());
    XMLCh* xmlchVal = XMLString::transcode(val.c_str());

    pElem->setAttribute(xmlchKey, xmlchVal);

    XMLString::release(&xmlchKey);
    XMLString::release(&xmlchVal);
}

void safeSetTextContent(p_el pElem, std::string textContent)
{
    std::cout << "beginning safeSetTextContent" << std::endl;
    XMLCh* xmlchText = XMLString::transcode(textContent.c_str());

    pElem->setTextContent(xmlchText);

    XMLString::release(&xmlchText);
    std::cout << "safeSetTextContent finished" << std::endl << std::endl;
}

std::string safeTranscode(XMLCh* xmlstring)
{
    std::cout << "beginning safeTranscode" << std::endl;
    char* cString = XMLString::transcode(xmlstring);
    
    std::string s(cString);

    XMLString::release(&cString);

    std::cout << "safeTranscode finished" << std::endl << std::endl;
    return s;
}

p_el safeCreateElement(p_doc pParent, std::string name)
{
    std::cout << "beginning safeCreateElement" << std::endl;
    XMLCh* xmlchName = XMLString::transcode(name.c_str());

    p_el pChild = pParent->createElement(xmlchName);

    XMLString::release(&xmlchName);

    std::cout << "safeCreateElement finished" << std::endl << std::endl;
    return pChild;
}

void dummyExample()
{
    XMLPlatformUtils::Initialize();
    XMLPlatformUtils::Terminate();
}

std::string getFootstepSDFStringPugi(Eigen::MatrixX3d footsteps)
{
    std::cout << "entered pugi xml" << std::endl;
    int n_steps = footsteps.rows();

    pugi::xml_document doc;
    
    pugi::xml_node declarationNode = doc.append_child(pugi::node_declaration);

    declarationNode.append_attribute("version") = "1.0";

    declarationNode.append_attribute("encoding") = "ISO-8859-1";

    declarationNode.append_attribute("standalone") = "yes";

    pugi::xml_node sdf = doc.append_child("sdf");

    sdf.append_attribute("version") = "1.7";

    pugi::xml_node model = sdf.append_child("model");

    model.append_attribute("name") = "footsteps";

    pugi::xml_node elem_static = model.append_child("static");

    elem_static.text().set("1");

    pugi::xml_node pose = model.append_child("pose");

    pose.text().set("0 0 0 0 0 0");

    Eigen::Vector3d yellow(1, 1, 0);

    Eigen::Vector3d green(0, 1, 0);

    Eigen::Matrix3Xd colors = interpolateColors(yellow, green, n_steps);

    Eigen::Vector3d c;

    Eigen::Vector3d step;

    std::string footstep_name;

    std::string color_string;

    std::string pose_string;

    pugi::xml_node footstep_model;

    pugi::xml_node link;

    /*
    pugi::xml_node inertial;

    pugi::xml_node mass;

    pugi::xml_node value;

    pugi::xml_node ixx;

    pugi::xml_node ixy;

    pugi::xml_node ixz;

    pugi::xml_node iyy;

    pugi::xml_node iyz;

    pugi::xml_node izz;

    pugi::xml_node inertia;
    */
    pugi::xml_node visual;

    pugi::xml_node geometry;

    pugi::xml_node cylinder;

    pugi::xml_node radius;

    pugi::xml_node length;

    pugi::xml_node material;

    pugi::xml_node ambient;

    pugi::xml_node diffuse;

    pugi::xml_node specular;

    pugi::xml_node emissive;

    for (int i = 0; i < n_steps; ++i)
    {
        c = colors.col(i);
        step = footsteps.row(i).transpose();
        
        footstep_name = "footstep " + std::to_string(i);
        color_string = std::to_string(c(0)) + " " + std::to_string(c(1)) + " " + std::to_string(c(2)) + " 1";
        pose_string = std::to_string(step(0)) + " " + std::to_string(step(1)) + " " + std::to_string(step(2)) + " 0 0 0";
        
        footstep_model = model.append_child("model");
        footstep_model.append_attribute("name") = footstep_name.c_str();

        elem_static = footstep_model.append_child("static");
        elem_static.text().set("1");

        link = footstep_model.append_child("link");
        link.append_attribute("name") = "footstep_link";
        /*

        inertial = link.append_child("inertial");

        mass = inertial.append_child("mass");
        value = mass.append_child("value");
        value.text().set("1.0");

        inertia = inertial.append_child("inertia");
        ixx = inertia.append_child("ixx");
        ixx.text().set("1.0");

        ixy = inertia.append_child("ixy");
        ixy.text().set("1.0");

        ixz = inertia.append_child("ixz");
        ixz.text().set("1.0");

        iyy = inertia.append_child("iyy");
        iyy.text().set("1.0");

        iyz = inertia.append_child("iyz");
        iyz.text().set("1.0");

        izz = inertia.append_child("izz");
        izz.text().set("1.0");
        */
        pose = link.append_child("pose");
        pose.text().set(pose_string.c_str());
        
        visual = link.append_child("visual");
        visual.append_attribute("name") = "footstep_visual";

        geometry = visual.append_child("geometry");
        cylinder = geometry.append_child("cylinder");

        radius = cylinder.append_child("radius");
        radius.text().set("0.02");

        length = cylinder.append_child("length");
        length.text().set("0.01");

        material = visual.append_child("material");

        ambient = material.append_child("ambient");
        ambient.text().set(color_string.c_str());
        
        diffuse = material.append_child("diffuse");
        diffuse.text().set(color_string.c_str());

        specular = material.append_child("specular");
        specular.text().set("0.1 0.1 0.1 1");

        emissive = material.append_child("emissive");
        emissive.text().set(color_string.c_str());
    }

    std::stringstream ss;

    doc.print(ss);

    return ss.str();
}

std::string getFootstepSDFString(Eigen::MatrixX3d footsteps)
{
    std::cout << "getFootstepSDFString: about to initialize" << std::endl;
    XMLPlatformUtils::Initialize();
    std::cout << "right after initialization" << std::endl;

    p_impl p_DOMImplementation = nullptr;

    XMLCh* core = XMLString::transcode("core");

    p_DOMImplementation = DOMImplementationRegistry::getDOMImplementation(core);
    std::cout << "right after registration" << std::endl;

    XMLString::release(&core);
    
    p_doc p_DOMDocument = nullptr;

    XMLCh* sdf = XMLString::transcode("sdf");

    p_DOMDocument = p_DOMImplementation->createDocument(0, sdf, 0);

    XMLString::release(&sdf);

    p_el pRoot = p_DOMDocument->getDocumentElement();

    safeSetAttribute(pRoot, "version", "1.7");

    int n_steps = footsteps.rows();
    
    p_el pModel = safeCreateElement(p_DOMDocument, "model");
    
    pRoot->appendChild(pModel);

    safeSetAttribute(pModel, "name", "footsteps");

    p_el pStatic = safeCreateElement(p_DOMDocument, "static");

    pModel->appendChild(pStatic);

    safeSetTextContent(pStatic, "1");

    p_el pPose = safeCreateElement(p_DOMDocument, "pose");

    pModel->appendChild(pPose);

    safeSetTextContent(pPose, "0 0 0 0 0 0");

    Eigen::Vector3d yellow(1, 1, 0);

    Eigen::Vector3d green(0, 1, 0);

    Eigen::Matrix3Xd colors = interpolateColors(yellow, green, n_steps);

    Eigen::Vector3d c;

    Eigen::Vector3d step;

    p_el pFootstep;

    p_el pLink;

    p_el pVisual;

    p_el pGeometry;

    p_el pCylinder;

    p_el pRadius;

    p_el pLength;

    p_el pMaterial;

    p_el pAmbient;

    p_el pDiffuse;

    p_el pSpecular;

    p_el pEmissive;

    std::string footstep_name;

    std::string color_string;

    std::string pose_string;
    std::cout << "xml:right before for loop" << std::endl;
    for (int i = 0; i < n_steps; ++i)
    {
        c = colors.col(i);

        step = footsteps.row(i).transpose();

        pFootstep = safeCreateElement(p_DOMDocument, "model");

        pModel->appendChild(pFootstep);

        footstep_name = "footstep " + std::to_string(i);

        safeSetAttribute(pFootstep, "name", footstep_name);

        pStatic = safeCreateElement(p_DOMDocument, "static");

        pFootstep->appendChild(pStatic);

        safeSetTextContent(pStatic, "1");

        color_string = std::to_string(c(0)) + " " + std::to_string(c(1)) + " " + std::to_string(c(2)) + " 1";

        pLink = safeCreateElement(p_DOMDocument, "link");

        pFootstep->appendChild(pLink);

        safeSetAttribute(pLink, "name", "footstep_link");

        pPose = safeCreateElement(p_DOMDocument, "pose");

        pLink->appendChild(pPose);

        pose_string = std::to_string(step(0)) + " " + std::to_string(step(1)) + " " + std::to_string(step(2)) + " 0 0 0";

        safeSetTextContent(pPose, pose_string);

        pVisual = safeCreateElement(p_DOMDocument, "visual");

        pLink->appendChild(pVisual);

        safeSetAttribute(pVisual, "name", "footstep_visual");

        pGeometry = safeCreateElement(p_DOMDocument, "geometry");

        pVisual->appendChild(pGeometry);

        pCylinder = safeCreateElement(p_DOMDocument, "cylinder");

        pGeometry->appendChild(pCylinder);

        pRadius = safeCreateElement(p_DOMDocument, "radius");

        pCylinder->appendChild(pRadius);

        safeSetTextContent(pRadius, "0.02");

        pLength = safeCreateElement(p_DOMDocument, "length");

        pCylinder->appendChild(pLength);

        safeSetTextContent(pLength, "0.01");

        pMaterial = safeCreateElement(p_DOMDocument, "material");

        pVisual->appendChild(pMaterial);

        pAmbient = safeCreateElement(p_DOMDocument, "ambient");

        pMaterial->appendChild(pAmbient);

        safeSetTextContent(pAmbient, color_string);
        
        pDiffuse = safeCreateElement(p_DOMDocument, "diffuse");

        pMaterial->appendChild(pDiffuse);

        safeSetTextContent(pDiffuse, color_string);

        pSpecular = safeCreateElement(p_DOMDocument, "specular");

        pMaterial->appendChild(pSpecular);

        safeSetTextContent(pSpecular, "0.1 0.1 0.1 1");

        pEmissive = safeCreateElement(p_DOMDocument, "emissive");

        pMaterial->appendChild(pEmissive);

        safeSetTextContent(pEmissive, color_string);
    }
    std::cout << "right after for loop" << std::endl;

    DOMLSSerializer* p_LSSerializer = nullptr;

    p_LSSerializer = p_DOMImplementation->createLSSerializer();

    std::string res = XMLString::transcode(p_LSSerializer->writeToString(p_DOMDocument));

    p_DOMDocument->release();

    p_LSSerializer->release();

    XMLPlatformUtils::Terminate();

    return res;
}