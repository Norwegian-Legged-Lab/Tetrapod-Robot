// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for collocation_optimization_trajectory_planner/foot_input
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
#include "collocation_optimization_trajectory_planner/foot_input.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class COLLOCATION_OPTIMIZATION_TRAJECTORY_PLANNER_EXPORT collocation_optimization_trajectory_planner_msg_foot_input_common : public MATLABROSMsgInterface<collocation_optimization_trajectory_planner::foot_input> {
  public:
    virtual ~collocation_optimization_trajectory_planner_msg_foot_input_common(){}
    virtual void copy_from_struct(collocation_optimization_trajectory_planner::foot_input* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const collocation_optimization_trajectory_planner::foot_input* msg, MultiLibLoader loader, size_t size = 1);
};
  void collocation_optimization_trajectory_planner_msg_foot_input_common::copy_from_struct(collocation_optimization_trajectory_planner::foot_input* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //stance_indices
        const matlab::data::TypedArray<bool> stance_indices_arr = arr["StanceIndices"];
        size_t nelem = stance_indices_arr.getNumberOfElements();
        	msg->stance_indices.resize(nelem);
        	std::copy(stance_indices_arr.begin(), stance_indices_arr.begin()+nelem, msg->stance_indices.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StanceIndices' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StanceIndices' is wrong type; expected a logical.");
    }
    try {
        //d_stance_indices
        const matlab::data::TypedArray<bool> d_stance_indices_arr = arr["DStanceIndices"];
        size_t nelem = d_stance_indices_arr.getNumberOfElements();
        	msg->d_stance_indices.resize(nelem);
        	std::copy(d_stance_indices_arr.begin(), d_stance_indices_arr.begin()+nelem, msg->d_stance_indices.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'DStanceIndices' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'DStanceIndices' is wrong type; expected a logical.");
    }
    try {
        //forces
        const matlab::data::StructArray forces_arr = arr["Forces"];
        static auto msgClassPtr_forces = loader->createInstance<MATLABROSMsgInterface<std_msgs::Float64MultiArray>>("std_msgs_msg_Float64MultiArray_common");
        msgClassPtr_forces->copy_from_struct(&msg->forces,forces_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Forces' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Forces' is wrong type; expected a struct.");
    }
    try {
        //stance_vectors
        const matlab::data::StructArray stance_vectors_arr = arr["StanceVectors"];
        static auto msgClassPtr_stance_vectors = loader->createInstance<MATLABROSMsgInterface<std_msgs::Float64MultiArray>>("std_msgs_msg_Float64MultiArray_common");
        msgClassPtr_stance_vectors->copy_from_struct(&msg->stance_vectors,stance_vectors_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StanceVectors' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StanceVectors' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T collocation_optimization_trajectory_planner_msg_foot_input_common::get_arr(MDFactory_T& factory, const collocation_optimization_trajectory_planner::foot_input* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","StanceIndices","DStanceIndices","Forces","StanceVectors"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("collocation_optimization_trajectory_planner/foot_input");
    // stance_indices
    auto currentElement_stance_indices = (msg + ctr)->stance_indices;
    auto stance_indices_bool = std::vector<bool>(std::begin(currentElement_stance_indices),std::end(currentElement_stance_indices));
    outArray[ctr]["StanceIndices"] = factory.createArray<std::vector<bool>::const_iterator, bool>({stance_indices_bool.size(),1}, stance_indices_bool.begin(), stance_indices_bool.end());
    // d_stance_indices
    auto currentElement_d_stance_indices = (msg + ctr)->d_stance_indices;
    auto d_stance_indices_bool = std::vector<bool>(std::begin(currentElement_d_stance_indices),std::end(currentElement_d_stance_indices));
    outArray[ctr]["DStanceIndices"] = factory.createArray<std::vector<bool>::const_iterator, bool>({d_stance_indices_bool.size(),1}, d_stance_indices_bool.begin(), d_stance_indices_bool.end());
    // forces
    auto currentElement_forces = (msg + ctr)->forces;
    static auto msgClassPtr_forces = loader->createInstance<MATLABROSMsgInterface<std_msgs::Float64MultiArray>>("std_msgs_msg_Float64MultiArray_common");
    outArray[ctr]["Forces"] = msgClassPtr_forces->get_arr(factory, &currentElement_forces, loader);
    // stance_vectors
    auto currentElement_stance_vectors = (msg + ctr)->stance_vectors;
    static auto msgClassPtr_stance_vectors = loader->createInstance<MATLABROSMsgInterface<std_msgs::Float64MultiArray>>("std_msgs_msg_Float64MultiArray_common");
    outArray[ctr]["StanceVectors"] = msgClassPtr_stance_vectors->get_arr(factory, &currentElement_stance_vectors, loader);
    }
    return std::move(outArray);
  } 
class COLLOCATION_OPTIMIZATION_TRAJECTORY_PLANNER_EXPORT collocation_optimization_trajectory_planner_foot_input_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~collocation_optimization_trajectory_planner_foot_input_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          collocation_optimization_trajectory_planner_foot_input_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<collocation_optimization_trajectory_planner::foot_input,collocation_optimization_trajectory_planner_msg_foot_input_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         collocation_optimization_trajectory_planner_foot_input_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<collocation_optimization_trajectory_planner::foot_input,collocation_optimization_trajectory_planner::foot_input::ConstPtr,collocation_optimization_trajectory_planner_msg_foot_input_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(collocation_optimization_trajectory_planner_msg_foot_input_common, MATLABROSMsgInterface<collocation_optimization_trajectory_planner::foot_input>)
CLASS_LOADER_REGISTER_CLASS(collocation_optimization_trajectory_planner_foot_input_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1