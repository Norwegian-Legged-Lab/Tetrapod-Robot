#ifndef xml_utils_h
#define xml_utils_h

#include "xercesc/util/PlatformUtils.hpp"
#include "visualization_utils/color_interp.h"
#include "xercesc/dom/DOM.hpp"
#include "pugixml.hpp"

#include<string>
#include<Eigen/Core>

XERCES_CPP_NAMESPACE_USE

void dummyExample();

std::string getFootstepSDFString(Eigen::MatrixX3d footsteps);

std::string getFootstepSDFStringPugi(Eigen::MatrixX3d footsteps);
#endif