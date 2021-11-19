// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for collocation_optimization_trajectory_planner/solveMpcResponse
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
#include "collocation_optimization_trajectory_planner/solveMpcResponse.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
COMMON_FW_DECLARE(collocation_optimization_trajectory_planner_msg_inputs_common, collocation_optimization_trajectory_planner::inputs)
COMMON_FW_DECLARE(collocation_optimization_trajectory_planner_msg_states_common, collocation_optimization_trajectory_planner::states)
class COLLOCATION_OPTIMIZATION_TRAJECTORY_PLANNER_EXPORT collocation_optimization_trajectory_planner_msg_solveMpcResponse_common : public MATLABROSMsgInterface<collocation_optimization_trajectory_planner::solveMpcResponse> {
  public:
    virtual ~collocation_optimization_trajectory_planner_msg_solveMpcResponse_common(){}
    virtual void copy_from_struct(collocation_optimization_trajectory_planner::solveMpcResponse* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const collocation_optimization_trajectory_planner::solveMpcResponse* msg, MultiLibLoader loader, size_t size = 1);
};
  void collocation_optimization_trajectory_planner_msg_solveMpcResponse_common::copy_from_struct(collocation_optimization_trajectory_planner::solveMpcResponse* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //t
        const matlab::data::TypedArray<double> t_arr = arr["T"];
        size_t nelem = t_arr.getNumberOfElements();
        	msg->t.resize(nelem);
        	std::copy(t_arr.begin(), t_arr.begin()+nelem, msg->t.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'T' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'T' is wrong type; expected a double.");
    }
    try {
        //states
        const matlab::data::StructArray states_arr = arr["States"];
        static collocation_optimization_trajectory_planner_msg_states_common obj_states;
        obj_states.copy_from_struct(&msg->states,states_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'States' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'States' is wrong type; expected a struct.");
    }
    try {
        //inputs
        const matlab::data::StructArray inputs_arr = arr["Inputs"];
        static collocation_optimization_trajectory_planner_msg_inputs_common obj_inputs;
        obj_inputs.copy_from_struct(&msg->inputs,inputs_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Inputs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Inputs' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T collocation_optimization_trajectory_planner_msg_solveMpcResponse_common::get_arr(MDFactory_T& factory, const collocation_optimization_trajectory_planner::solveMpcResponse* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","T","States","Inputs"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("collocation_optimization_trajectory_planner/solveMpcResponse");
    // t
    auto currentElement_t = (msg + ctr)->t;
    outArray[ctr]["T"] = factory.createArray<collocation_optimization_trajectory_planner::solveMpcResponse::_t_type::const_iterator, double>({currentElement_t.size(),1}, currentElement_t.begin(), currentElement_t.end());
    // states
    auto currentElement_states = (msg + ctr)->states;
    static collocation_optimization_trajectory_planner_msg_states_common obj_states;
    outArray[ctr]["States"] = obj_states.get_arr(factory, &currentElement_states, loader);
    // inputs
    auto currentElement_inputs = (msg + ctr)->inputs;
    static collocation_optimization_trajectory_planner_msg_inputs_common obj_inputs;
    outArray[ctr]["Inputs"] = obj_inputs.get_arr(factory, &currentElement_inputs, loader);
    }
    return std::move(outArray);
  } 
class COLLOCATION_OPTIMIZATION_TRAJECTORY_PLANNER_EXPORT collocation_optimization_trajectory_planner_solveMpcResponse_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~collocation_optimization_trajectory_planner_solveMpcResponse_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          collocation_optimization_trajectory_planner_solveMpcResponse_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<collocation_optimization_trajectory_planner::solveMpcResponse,collocation_optimization_trajectory_planner_msg_solveMpcResponse_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         collocation_optimization_trajectory_planner_solveMpcResponse_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<collocation_optimization_trajectory_planner::solveMpcResponse,collocation_optimization_trajectory_planner::solveMpcResponse::ConstPtr,collocation_optimization_trajectory_planner_msg_solveMpcResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(collocation_optimization_trajectory_planner_msg_solveMpcResponse_common, MATLABROSMsgInterface<collocation_optimization_trajectory_planner::solveMpcResponse>)
CLASS_LOADER_REGISTER_CLASS(collocation_optimization_trajectory_planner_solveMpcResponse_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1