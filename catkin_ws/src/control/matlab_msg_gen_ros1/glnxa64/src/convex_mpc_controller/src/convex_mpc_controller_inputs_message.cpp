// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for convex_mpc_controller/inputs
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "ros/ros.h"
#include "convex_mpc_controller/inputs.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
COMMON_FW_DECLARE(convex_mpc_controller_msg_foot_input_common, convex_mpc_controller::foot_input)
class CONVEX_MPC_CONTROLLER_EXPORT convex_mpc_controller_msg_inputs_common : public MATLABROSMsgInterface<convex_mpc_controller::inputs> {
  public:
    virtual ~convex_mpc_controller_msg_inputs_common(){}
    virtual void copy_from_struct(convex_mpc_controller::inputs* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const convex_mpc_controller::inputs* msg, MultiLibLoader loader, size_t size = 1);
};
  void convex_mpc_controller_msg_inputs_common::copy_from_struct(convex_mpc_controller::inputs* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //fl
        const matlab::data::StructArray fl_arr = arr["Fl"];
        static convex_mpc_controller_msg_foot_input_common obj_fl;
        obj_fl.copy_from_struct(&msg->fl,fl_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Fl' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Fl' is wrong type; expected a struct.");
    }
    try {
        //fr
        const matlab::data::StructArray fr_arr = arr["Fr"];
        static convex_mpc_controller_msg_foot_input_common obj_fr;
        obj_fr.copy_from_struct(&msg->fr,fr_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Fr' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Fr' is wrong type; expected a struct.");
    }
    try {
        //rl
        const matlab::data::StructArray rl_arr = arr["Rl"];
        static convex_mpc_controller_msg_foot_input_common obj_rl;
        obj_rl.copy_from_struct(&msg->rl,rl_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Rl' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Rl' is wrong type; expected a struct.");
    }
    try {
        //rr
        const matlab::data::StructArray rr_arr = arr["Rr"];
        static convex_mpc_controller_msg_foot_input_common obj_rr;
        obj_rr.copy_from_struct(&msg->rr,rr_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Rr' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Rr' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T convex_mpc_controller_msg_inputs_common::get_arr(MDFactory_T& factory, const convex_mpc_controller::inputs* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Fl","Fr","Rl","Rr"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("convex_mpc_controller/inputs");
    // fl
    auto currentElement_fl = (msg + ctr)->fl;
    static convex_mpc_controller_msg_foot_input_common obj_fl;
    outArray[ctr]["Fl"] = obj_fl.get_arr(factory, &currentElement_fl, loader);
    // fr
    auto currentElement_fr = (msg + ctr)->fr;
    static convex_mpc_controller_msg_foot_input_common obj_fr;
    outArray[ctr]["Fr"] = obj_fr.get_arr(factory, &currentElement_fr, loader);
    // rl
    auto currentElement_rl = (msg + ctr)->rl;
    static convex_mpc_controller_msg_foot_input_common obj_rl;
    outArray[ctr]["Rl"] = obj_rl.get_arr(factory, &currentElement_rl, loader);
    // rr
    auto currentElement_rr = (msg + ctr)->rr;
    static convex_mpc_controller_msg_foot_input_common obj_rr;
    outArray[ctr]["Rr"] = obj_rr.get_arr(factory, &currentElement_rr, loader);
    }
    return std::move(outArray);
  } 
class CONVEX_MPC_CONTROLLER_EXPORT convex_mpc_controller_inputs_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~convex_mpc_controller_inputs_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          convex_mpc_controller_inputs_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<convex_mpc_controller::inputs,convex_mpc_controller_msg_inputs_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         convex_mpc_controller_inputs_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<convex_mpc_controller::inputs,convex_mpc_controller::inputs::ConstPtr,convex_mpc_controller_msg_inputs_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(convex_mpc_controller_msg_inputs_common, MATLABROSMsgInterface<convex_mpc_controller::inputs>)
CLASS_LOADER_REGISTER_CLASS(convex_mpc_controller_inputs_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1