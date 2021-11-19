// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for collocation_optimization_trajectory_planner/solveMpcRequest
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
#include "collocation_optimization_trajectory_planner/solveMpcRequest.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
COMMON_FW_DECLARE(collocation_optimization_trajectory_planner_msg_init_pos_common, collocation_optimization_trajectory_planner::init_pos)
class COLLOCATION_OPTIMIZATION_TRAJECTORY_PLANNER_EXPORT collocation_optimization_trajectory_planner_msg_solveMpcRequest_common : public MATLABROSMsgInterface<collocation_optimization_trajectory_planner::solveMpcRequest> {
  public:
    virtual ~collocation_optimization_trajectory_planner_msg_solveMpcRequest_common(){}
    virtual void copy_from_struct(collocation_optimization_trajectory_planner::solveMpcRequest* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const collocation_optimization_trajectory_planner::solveMpcRequest* msg, MultiLibLoader loader, size_t size = 1);
};
  void collocation_optimization_trajectory_planner_msg_solveMpcRequest_common::copy_from_struct(collocation_optimization_trajectory_planner::solveMpcRequest* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //x0
        const matlab::data::TypedArray<double> x0_arr = arr["X0"];
        size_t nelem = 12;
        	std::copy(x0_arr.begin(), x0_arr.begin()+nelem, msg->x0.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'X0' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'X0' is wrong type; expected a double.");
    }
    try {
        //t0
        const matlab::data::TypedArray<double> t0_arr = arr["T0"];
        msg->t0 = t0_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'T0' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'T0' is wrong type; expected a double.");
    }
    try {
        //init_stance_pos
        const matlab::data::StructArray init_stance_pos_arr = arr["InitStancePos"];
        static collocation_optimization_trajectory_planner_msg_init_pos_common obj_init_stance_pos;
        obj_init_stance_pos.copy_from_struct(&msg->init_stance_pos,init_stance_pos_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'InitStancePos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'InitStancePos' is wrong type; expected a struct.");
    }
    try {
        //vel_des
        const matlab::data::TypedArray<double> vel_des_arr = arr["VelDes"];
        size_t nelem = 2;
        	std::copy(vel_des_arr.begin(), vel_des_arr.begin()+nelem, msg->vel_des.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'VelDes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'VelDes' is wrong type; expected a double.");
    }
    try {
        //yaw_rate_des
        const matlab::data::TypedArray<double> yaw_rate_des_arr = arr["YawRateDes"];
        msg->yaw_rate_des = yaw_rate_des_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'YawRateDes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'YawRateDes' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T collocation_optimization_trajectory_planner_msg_solveMpcRequest_common::get_arr(MDFactory_T& factory, const collocation_optimization_trajectory_planner::solveMpcRequest* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","X0","T0","InitStancePos","VelDes","YawRateDes"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("collocation_optimization_trajectory_planner/solveMpcRequest");
    // x0
    auto currentElement_x0 = (msg + ctr)->x0;
    outArray[ctr]["X0"] = factory.createArray<collocation_optimization_trajectory_planner::solveMpcRequest::_x0_type::const_iterator, double>({currentElement_x0.size(),1}, currentElement_x0.begin(), currentElement_x0.end());
    // t0
    auto currentElement_t0 = (msg + ctr)->t0;
    outArray[ctr]["T0"] = factory.createScalar(currentElement_t0);
    // init_stance_pos
    auto currentElement_init_stance_pos = (msg + ctr)->init_stance_pos;
    static collocation_optimization_trajectory_planner_msg_init_pos_common obj_init_stance_pos;
    outArray[ctr]["InitStancePos"] = obj_init_stance_pos.get_arr(factory, &currentElement_init_stance_pos, loader);
    // vel_des
    auto currentElement_vel_des = (msg + ctr)->vel_des;
    outArray[ctr]["VelDes"] = factory.createArray<collocation_optimization_trajectory_planner::solveMpcRequest::_vel_des_type::const_iterator, double>({currentElement_vel_des.size(),1}, currentElement_vel_des.begin(), currentElement_vel_des.end());
    // yaw_rate_des
    auto currentElement_yaw_rate_des = (msg + ctr)->yaw_rate_des;
    outArray[ctr]["YawRateDes"] = factory.createScalar(currentElement_yaw_rate_des);
    }
    return std::move(outArray);
  } 
class COLLOCATION_OPTIMIZATION_TRAJECTORY_PLANNER_EXPORT collocation_optimization_trajectory_planner_solveMpcRequest_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~collocation_optimization_trajectory_planner_solveMpcRequest_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          collocation_optimization_trajectory_planner_solveMpcRequest_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<collocation_optimization_trajectory_planner::solveMpcRequest,collocation_optimization_trajectory_planner_msg_solveMpcRequest_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         collocation_optimization_trajectory_planner_solveMpcRequest_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<collocation_optimization_trajectory_planner::solveMpcRequest,collocation_optimization_trajectory_planner::solveMpcRequest::ConstPtr,collocation_optimization_trajectory_planner_msg_solveMpcRequest_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(collocation_optimization_trajectory_planner_msg_solveMpcRequest_common, MATLABROSMsgInterface<collocation_optimization_trajectory_planner::solveMpcRequest>)
CLASS_LOADER_REGISTER_CLASS(collocation_optimization_trajectory_planner_solveMpcRequest_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1