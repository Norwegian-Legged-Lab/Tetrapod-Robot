#ifndef CONVEX_MPC_CONTROLLER__VISIBILITY_CONTROL_H_
#define CONVEX_MPC_CONTROLLER__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define CONVEX_MPC_CONTROLLER_EXPORT __attribute__ ((dllexport))
    #define CONVEX_MPC_CONTROLLER_IMPORT __attribute__ ((dllimport))
  #else
    #define CONVEX_MPC_CONTROLLER_EXPORT __declspec(dllexport)
    #define CONVEX_MPC_CONTROLLER_IMPORT __declspec(dllimport)
  #endif
  #ifdef CONVEX_MPC_CONTROLLER_BUILDING_LIBRARY
    #define CONVEX_MPC_CONTROLLER_PUBLIC CONVEX_MPC_CONTROLLER_EXPORT
  #else
    #define CONVEX_MPC_CONTROLLER_PUBLIC CONVEX_MPC_CONTROLLER_IMPORT
  #endif
  #define CONVEX_MPC_CONTROLLER_PUBLIC_TYPE CONVEX_MPC_CONTROLLER_PUBLIC
  #define CONVEX_MPC_CONTROLLER_LOCAL
#else
  #define CONVEX_MPC_CONTROLLER_EXPORT __attribute__ ((visibility("default")))
  #define CONVEX_MPC_CONTROLLER_IMPORT
  #if __GNUC__ >= 4
    #define CONVEX_MPC_CONTROLLER_PUBLIC __attribute__ ((visibility("default")))
    #define CONVEX_MPC_CONTROLLER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define CONVEX_MPC_CONTROLLER_PUBLIC
    #define CONVEX_MPC_CONTROLLER_LOCAL
  #endif
  #define CONVEX_MPC_CONTROLLER_PUBLIC_TYPE
#endif
#endif  // CONVEX_MPC_CONTROLLER__VISIBILITY_CONTROL_H_
// Generated 21-Nov-2021 21:18:34
// Copyright 2019-2020 The MathWorks, Inc.
