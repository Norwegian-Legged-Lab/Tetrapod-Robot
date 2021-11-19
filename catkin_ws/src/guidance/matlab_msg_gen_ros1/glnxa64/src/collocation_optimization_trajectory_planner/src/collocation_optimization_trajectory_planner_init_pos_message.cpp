// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for collocation_optimization_trajectory_planner/init_pos
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
#include "collocation_optimization_trajectory_planner/init_pos.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class COLLOCATION_OPTIMIZATION_TRAJECTORY_PLANNER_EXPORT collocation_optimization_trajectory_planner_msg_init_pos_common : public MATLABROSMsgInterface<collocation_optimization_trajectory_planner::init_pos> {
  public:
    virtual ~collocation_optimization_trajectory_planner_msg_init_pos_common(){}
    virtual void copy_from_struct(collocation_optimization_trajectory_planner::init_pos* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const collocation_optimization_trajectory_planner::init_pos* msg, MultiLibLoader loader, size_t size = 1);
};
  void collocation_optimization_trajectory_planner_msg_init_pos_common::copy_from_struct(collocation_optimization_trajectory_planner::init_pos* msg, const matlab::data::Struct& arr,
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
        //fl_set
        const matlab::data::TypedArray<bool> fl_set_arr = arr["FlSet"];
        msg->fl_set = fl_set_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FlSet' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FlSet' is wrong type; expected a logical.");
    }
    try {
        //fr_set
        const matlab::data::TypedArray<bool> fr_set_arr = arr["FrSet"];
        msg->fr_set = fr_set_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FrSet' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FrSet' is wrong type; expected a logical.");
    }
    try {
        //rl_set
        const matlab::data::TypedArray<bool> rl_set_arr = arr["RlSet"];
        msg->rl_set = rl_set_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RlSet' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RlSet' is wrong type; expected a logical.");
    }
    try {
        //rr_set
        const matlab::data::TypedArray<bool> rr_set_arr = arr["RrSet"];
        msg->rr_set = rr_set_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RrSet' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RrSet' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T collocation_optimization_trajectory_planner_msg_init_pos_common::get_arr(MDFactory_T& factory, const collocation_optimization_trajectory_planner::init_pos* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","FlPos","FrPos","RlPos","RrPos","FlSet","FrSet","RlSet","RrSet"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("collocation_optimization_trajectory_planner/init_pos");
    // fl_pos
    auto currentElement_fl_pos = (msg + ctr)->fl_pos;
    outArray[ctr]["FlPos"] = factory.createArray<collocation_optimization_trajectory_planner::init_pos::_fl_pos_type::const_iterator, double>({currentElement_fl_pos.size(),1}, currentElement_fl_pos.begin(), currentElement_fl_pos.end());
    // fr_pos
    auto currentElement_fr_pos = (msg + ctr)->fr_pos;
    outArray[ctr]["FrPos"] = factory.createArray<collocation_optimization_trajectory_planner::init_pos::_fr_pos_type::const_iterator, double>({currentElement_fr_pos.size(),1}, currentElement_fr_pos.begin(), currentElement_fr_pos.end());
    // rl_pos
    auto currentElement_rl_pos = (msg + ctr)->rl_pos;
    outArray[ctr]["RlPos"] = factory.createArray<collocation_optimization_trajectory_planner::init_pos::_rl_pos_type::const_iterator, double>({currentElement_rl_pos.size(),1}, currentElement_rl_pos.begin(), currentElement_rl_pos.end());
    // rr_pos
    auto currentElement_rr_pos = (msg + ctr)->rr_pos;
    outArray[ctr]["RrPos"] = factory.createArray<collocation_optimization_trajectory_planner::init_pos::_rr_pos_type::const_iterator, double>({currentElement_rr_pos.size(),1}, currentElement_rr_pos.begin(), currentElement_rr_pos.end());
    // fl_set
    auto currentElement_fl_set = (msg + ctr)->fl_set;
    outArray[ctr]["FlSet"] = factory.createScalar(static_cast<bool>(currentElement_fl_set));
    // fr_set
    auto currentElement_fr_set = (msg + ctr)->fr_set;
    outArray[ctr]["FrSet"] = factory.createScalar(static_cast<bool>(currentElement_fr_set));
    // rl_set
    auto currentElement_rl_set = (msg + ctr)->rl_set;
    outArray[ctr]["RlSet"] = factory.createScalar(static_cast<bool>(currentElement_rl_set));
    // rr_set
    auto currentElement_rr_set = (msg + ctr)->rr_set;
    outArray[ctr]["RrSet"] = factory.createScalar(static_cast<bool>(currentElement_rr_set));
    }
    return std::move(outArray);
  } 
class COLLOCATION_OPTIMIZATION_TRAJECTORY_PLANNER_EXPORT collocation_optimization_trajectory_planner_init_pos_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~collocation_optimization_trajectory_planner_init_pos_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          collocation_optimization_trajectory_planner_init_pos_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<collocation_optimization_trajectory_planner::init_pos,collocation_optimization_trajectory_planner_msg_init_pos_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         collocation_optimization_trajectory_planner_init_pos_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<collocation_optimization_trajectory_planner::init_pos,collocation_optimization_trajectory_planner::init_pos::ConstPtr,collocation_optimization_trajectory_planner_msg_init_pos_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(collocation_optimization_trajectory_planner_msg_init_pos_common, MATLABROSMsgInterface<collocation_optimization_trajectory_planner::init_pos>)
CLASS_LOADER_REGISTER_CLASS(collocation_optimization_trajectory_planner_init_pos_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1