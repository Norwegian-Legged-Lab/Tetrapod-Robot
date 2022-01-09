// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for convex_mpc_controller/init_pos
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
#include "convex_mpc_controller/init_pos.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class CONVEX_MPC_CONTROLLER_EXPORT convex_mpc_controller_msg_init_pos_common : public MATLABROSMsgInterface<convex_mpc_controller::init_pos> {
  public:
    virtual ~convex_mpc_controller_msg_init_pos_common(){}
    virtual void copy_from_struct(convex_mpc_controller::init_pos* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const convex_mpc_controller::init_pos* msg, MultiLibLoader loader, size_t size = 1);
};
  void convex_mpc_controller_msg_init_pos_common::copy_from_struct(convex_mpc_controller::init_pos* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //fl_pos
        const matlab::data::TypedArray<double> fl_pos_arr = arr["FlPos"];
        size_t nelem = 3;
        	std::copy(fl_pos_arr.begin(), fl_pos_arr.begin()+nelem, msg->fl_pos.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FlPos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FlPos' is wrong type; expected a double.");
    }
    try {
        //fr_pos
        const matlab::data::TypedArray<double> fr_pos_arr = arr["FrPos"];
        size_t nelem = 3;
        	std::copy(fr_pos_arr.begin(), fr_pos_arr.begin()+nelem, msg->fr_pos.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FrPos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FrPos' is wrong type; expected a double.");
    }
    try {
        //rl_pos
        const matlab::data::TypedArray<double> rl_pos_arr = arr["RlPos"];
        size_t nelem = 3;
        	std::copy(rl_pos_arr.begin(), rl_pos_arr.begin()+nelem, msg->rl_pos.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RlPos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RlPos' is wrong type; expected a double.");
    }
    try {
        //rr_pos
        const matlab::data::TypedArray<double> rr_pos_arr = arr["RrPos"];
        size_t nelem = 3;
        	std::copy(rr_pos_arr.begin(), rr_pos_arr.begin()+nelem, msg->rr_pos.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RrPos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RrPos' is wrong type; expected a double.");
    }
    try {
        //contact_state
        const matlab::data::TypedArray<bool> contact_state_arr = arr["ContactState"];
        size_t nelem = 4;
        	std::copy(contact_state_arr.begin(), contact_state_arr.begin()+nelem, msg->contact_state.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ContactState' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ContactState' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T convex_mpc_controller_msg_init_pos_common::get_arr(MDFactory_T& factory, const convex_mpc_controller::init_pos* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","FlPos","FrPos","RlPos","RrPos","ContactState"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("convex_mpc_controller/init_pos");
    // fl_pos
    auto currentElement_fl_pos = (msg + ctr)->fl_pos;
    outArray[ctr]["FlPos"] = factory.createArray<convex_mpc_controller::init_pos::_fl_pos_type::const_iterator, double>({currentElement_fl_pos.size(),1}, currentElement_fl_pos.begin(), currentElement_fl_pos.end());
    // fr_pos
    auto currentElement_fr_pos = (msg + ctr)->fr_pos;
    outArray[ctr]["FrPos"] = factory.createArray<convex_mpc_controller::init_pos::_fr_pos_type::const_iterator, double>({currentElement_fr_pos.size(),1}, currentElement_fr_pos.begin(), currentElement_fr_pos.end());
    // rl_pos
    auto currentElement_rl_pos = (msg + ctr)->rl_pos;
    outArray[ctr]["RlPos"] = factory.createArray<convex_mpc_controller::init_pos::_rl_pos_type::const_iterator, double>({currentElement_rl_pos.size(),1}, currentElement_rl_pos.begin(), currentElement_rl_pos.end());
    // rr_pos
    auto currentElement_rr_pos = (msg + ctr)->rr_pos;
    outArray[ctr]["RrPos"] = factory.createArray<convex_mpc_controller::init_pos::_rr_pos_type::const_iterator, double>({currentElement_rr_pos.size(),1}, currentElement_rr_pos.begin(), currentElement_rr_pos.end());
    // contact_state
    auto currentElement_contact_state = (msg + ctr)->contact_state;
    auto contact_state_bool = std::vector<bool>(std::begin(currentElement_contact_state),std::end(currentElement_contact_state));
    outArray[ctr]["ContactState"] = factory.createArray<std::vector<bool>::const_iterator, bool>({contact_state_bool.size(),1}, contact_state_bool.begin(), contact_state_bool.end());
    }
    return std::move(outArray);
  } 
class CONVEX_MPC_CONTROLLER_EXPORT convex_mpc_controller_init_pos_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~convex_mpc_controller_init_pos_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          convex_mpc_controller_init_pos_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<convex_mpc_controller::init_pos,convex_mpc_controller_msg_init_pos_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         convex_mpc_controller_init_pos_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<convex_mpc_controller::init_pos,convex_mpc_controller::init_pos::ConstPtr,convex_mpc_controller_msg_init_pos_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(convex_mpc_controller_msg_init_pos_common, MATLABROSMsgInterface<convex_mpc_controller::init_pos>)
CLASS_LOADER_REGISTER_CLASS(convex_mpc_controller_init_pos_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1