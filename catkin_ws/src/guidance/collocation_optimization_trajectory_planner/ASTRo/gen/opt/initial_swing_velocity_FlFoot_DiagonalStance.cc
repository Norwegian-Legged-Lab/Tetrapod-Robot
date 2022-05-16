/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:31 GMT+02:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t274;
  double t1059;
  double t1233;
  double t1437;
  double t1482;
  double t1484;
  double t1601;
  double t932;
  double t2581;
  double t3303;
  double t3586;
  double t3616;
  double t3672;
  double t3972;
  double t4152;
  double t2256;
  double t2616;
  double t2701;
  double t3639;
  double t3686;
  double t3909;
  double t3913;
  double t3919;
  double t3941;
  double t3942;
  double t3956;
  double t4208;
  double t4226;
  double t4274;
  double t4293;
  double t4315;
  double t4832;
  double t4840;
  double t4949;
  double t4792;
  double t4824;
  double t4951;
  double t5004;
  double t5264;
  double t5279;
  double t5285;
  double t5895;
  double t6089;
  double t6279;
  double t1485;
  double t1510;
  double t2405;
  double t9942;
  double t10034;
  double t10081;
  double t10303;
  double t13212;
  double t15252;
  double t18809;
  double t19460;
  double t22248;
  double t24543;
  double t24420;
  double t27631;
  double t28370;
  double t29595;
  double t24531;
  double t24604;
  double t27603;
  double t29821;
  double t29822;
  double t29840;
  double t4370;
  double t4404;
  double t4485;
  double t4535;
  double t31617;
  double t32849;
  double t34227;
  double t34252;
  double t34291;
  double t30137;
  double t35027;
  double t35038;
  double t35052;
  double t35026;
  double t35066;
  double t35074;
  double t35097;
  double t35162;
  double t35213;
  double t35462;
  double t35470;
  double t35471;
  double t35496;
  double t35497;
  double t35498;
  double t35501;
  double t36036;
  double t36039;
  double t36067;
  double t36082;
  double t36108;
  double t36369;
  double t36373;
  double t36377;
  double t36381;
  double t36425;
  double t36653;
  double t36796;
  double t36798;
  double t36818;
  double t36887;
  double t36914;
  double t36973;
  double t37048;
  double t37050;
  double t37070;
  double t37722;
  double t37737;
  double t37751;
  double t37775;
  double t37779;
  double t37789;
  double t38024;
  double t38029;
  double t38033;
  double t38040;
  double t38054;
  double t37825;
  double t38164;
  double t38173;
  double t38174;
  double t38156;
  double t38176;
  double t38183;
  double t38191;
  double t38192;
  double t38202;
  double t38264;
  double t38265;
  double t38294;
  double t38299;
  double t38301;
  double t38308;
  double t38312;
  double t38315;
  double t38318;
  double t38320;
  double t38323;
  t274 = Cos(var1[4]);
  t1059 = Cos(var1[6]);
  t1233 = -1.*t1059;
  t1437 = 1. + t1233;
  t1482 = 0.15121*t1437;
  t1484 = Sin(var1[6]);
  t1601 = Sin(var1[5]);
  t932 = Cos(var1[5]);
  t2581 = Cos(var1[7]);
  t3303 = -1.*t274*t1059*t1601;
  t3586 = -1.*t274*t932*t1484;
  t3616 = t3303 + t3586;
  t3672 = Cos(var1[8]);
  t3972 = Sin(var1[7]);
  t4152 = Sin(var1[8]);
  t2256 = 0.15121*t1484;
  t2616 = -1.*t2581;
  t2701 = 1. + t2616;
  t3639 = 0.28121*t2701*t3616;
  t3686 = -1.*t3672;
  t3909 = 1. + t3686;
  t3913 = 0.50321*t2581*t3909*t3616;
  t3919 = -1.*t274*t932*t1059;
  t3941 = t274*t1601*t1484;
  t3942 = t3919 + t3941;
  t3956 = 0.15121*t3942;
  t4208 = -0.50321*t3616*t3972*t4152;
  t4226 = t2581*t3672*t3616;
  t4274 = t3616*t3972*t4152;
  t4293 = t4226 + t4274;
  t4315 = 0.23321*t4293;
  t4832 = t274*t932*t1059;
  t4840 = -1.*t274*t1601*t1484;
  t4949 = t4832 + t4840;
  t4792 = Sin(var1[4]);
  t4824 = t2581*t4792;
  t4951 = t4949*t3972;
  t5004 = t4824 + t4951;
  t5264 = t2581*t4949;
  t5279 = -1.*t4792*t3972;
  t5285 = t5264 + t5279;
  t5895 = -1.*t2581*t4792;
  t6089 = -1.*t4949*t3972;
  t6279 = t5895 + t6089;
  t1485 = -0.15121*t1484;
  t1510 = t1482 + t1485;
  t2405 = t1482 + t2256;
  t9942 = -1.*t932*t1059*t4792;
  t10034 = t4792*t1601*t1484;
  t10081 = t9942 + t10034;
  t10303 = t2581*t10081;
  t13212 = -1.*t274*t3972;
  t15252 = t10303 + t13212;
  t18809 = t274*t2581;
  t19460 = t10081*t3972;
  t22248 = t18809 + t19460;
  t24543 = Cos(var1[3]);
  t24420 = Sin(var1[3]);
  t27631 = t24543*t932;
  t28370 = -1.*t24420*t4792*t1601;
  t29595 = t27631 + t28370;
  t24531 = -1.*t932*t24420*t4792;
  t24604 = -1.*t24543*t1601;
  t27603 = t24531 + t24604;
  t29821 = t1059*t29595;
  t29822 = t27603*t1484;
  t29840 = t29821 + t29822;
  t4370 = -0.15121*t1059;
  t4404 = t4370 + t2256;
  t4485 = 0.15121*t1059;
  t4535 = t4485 + t2256;
  t31617 = t932*t24420*t4792;
  t32849 = t24543*t1601;
  t34227 = t31617 + t32849;
  t34252 = -1.*t34227*t1484;
  t34291 = t29821 + t34252;
  t30137 = -1.*t29595*t1484;
  t35027 = t1059*t34227;
  t35038 = t29595*t1484;
  t35052 = t35027 + t35038;
  t35026 = -1.*t274*t2581*t24420;
  t35066 = t35052*t3972;
  t35074 = t35026 + t35066;
  t35097 = t2581*t35052;
  t35162 = t274*t24420*t3972;
  t35213 = t35097 + t35162;
  t35462 = t274*t2581*t24420;
  t35470 = -1.*t35052*t3972;
  t35471 = t35462 + t35470;
  t35496 = t274*t932*t1059*t24420;
  t35497 = -1.*t274*t24420*t1601*t1484;
  t35498 = t35496 + t35497;
  t35501 = t2581*t35498;
  t36036 = -1.*t24420*t4792*t3972;
  t36039 = t35501 + t36036;
  t36067 = t2581*t24420*t4792;
  t36082 = t35498*t3972;
  t36108 = t36067 + t36082;
  t36369 = -1.*t932*t24420;
  t36373 = -1.*t24543*t4792*t1601;
  t36377 = t36369 + t36373;
  t36381 = t24543*t932*t4792;
  t36425 = -1.*t24420*t1601;
  t36653 = t36381 + t36425;
  t36796 = t1059*t36653;
  t36798 = t36377*t1484;
  t36818 = t36796 + t36798;
  t36887 = t2581*t36818;
  t36914 = t24543*t274*t3972;
  t36973 = t36887 + t36914;
  t37048 = -1.*t24543*t274*t2581;
  t37050 = t36818*t3972;
  t37070 = t37048 + t37050;
  t37722 = t932*t24420;
  t37737 = t24543*t4792*t1601;
  t37751 = t37722 + t37737;
  t37775 = t1059*t37751;
  t37779 = t36653*t1484;
  t37789 = t37775 + t37779;
  t38024 = -1.*t24543*t932*t4792;
  t38029 = t24420*t1601;
  t38033 = t38024 + t38029;
  t38040 = -1.*t38033*t1484;
  t38054 = t37775 + t38040;
  t37825 = -1.*t37751*t1484;
  t38164 = t1059*t38033;
  t38173 = t37751*t1484;
  t38174 = t38164 + t38173;
  t38156 = t24543*t274*t2581;
  t38176 = t38174*t3972;
  t38183 = t38156 + t38176;
  t38191 = t2581*t38174;
  t38192 = -1.*t24543*t274*t3972;
  t38202 = t38191 + t38192;
  t38264 = -1.*t38174*t3972;
  t38265 = t37048 + t38264;
  t38294 = -1.*t24543*t274*t932*t1059;
  t38299 = t24543*t274*t1601*t1484;
  t38301 = t38294 + t38299;
  t38308 = t2581*t38301;
  t38312 = t24543*t4792*t3972;
  t38315 = t38308 + t38312;
  t38318 = -1.*t24543*t2581*t4792;
  t38320 = t38301*t3972;
  t38323 = t38318 + t38320;
  p_output1[0]=var2[0] + (0.28121*t10081*t2701 + 0.50321*t15252*t3909 + 0.28121*t274*t3972 - 0.50321*t22248*t4152 + 0.23321*(t15252*t3672 + t22248*t4152) + t1510*t1601*t4792 - 1.*t2405*t4792*t932 + 0.15121*(t1059*t1601*t4792 + t1484*t4792*t932))*var2[4] + (-1.*t1601*t2405*t274 + t3639 + t3913 + t3956 + t4208 + t4315 - 1.*t1510*t274*t932)*var2[5] + (t3639 + t3913 + t3956 + t4208 + t4315 - 1.*t1601*t274*t4404 + t274*t4535*t932)*var2[6] + (0.28121*t2581*t4792 + 0.28121*t3972*t4949 - 0.50321*t4152*t5285 + 0.50321*t3909*t6279 + 0.23321*(t4152*t5285 + t3672*t6279))*var2[7] + (-0.50321*t3672*t5004 + 0.50321*t4152*t5285 + 0.23321*(t3672*t5004 - 1.*t4152*t5285))*var2[8];
  p_output1[1]=var2[1] + (t1510*t36377 + t2405*t36653 + 0.15121*(t1059*t36377 - 1.*t1484*t36653) + 0.28121*t2701*t36818 + 0.50321*t36973*t3909 - 0.28121*t24543*t274*t3972 - 0.50321*t37070*t4152 + 0.23321*(t3672*t36973 + t37070*t4152))*var2[3] + (-1.*t1510*t1601*t24420*t274 + 0.28121*t2701*t35498 + 0.50321*t36039*t3909 - 0.50321*t36108*t4152 + 0.23321*(t36039*t3672 + t36108*t4152) + 0.28121*t24420*t3972*t4792 + t2405*t24420*t274*t932 + 0.15121*(-1.*t1059*t1601*t24420*t274 - 1.*t1484*t24420*t274*t932))*var2[4] + (t1510*t27603 + t2405*t29595 + 0.28121*t2701*t29840 + 0.15121*(t1059*t27603 + t30137) + 0.50321*t2581*t29840*t3909 - 0.50321*t29840*t3972*t4152 + 0.23321*(t2581*t29840*t3672 + t29840*t3972*t4152))*var2[5] + (0.15121*(t30137 - 1.*t1059*t34227) + 0.28121*t2701*t34291 + 0.50321*t2581*t34291*t3909 - 0.50321*t34291*t3972*t4152 + 0.23321*(t2581*t34291*t3672 + t34291*t3972*t4152) + t29595*t4404 + t34227*t4535)*var2[6] + (-0.28121*t24420*t2581*t274 + 0.50321*t35471*t3909 + 0.28121*t35052*t3972 - 0.50321*t35213*t4152 + 0.23321*(t35471*t3672 + t35213*t4152))*var2[7] + (-0.50321*t35074*t3672 + 0.50321*t35213*t4152 + 0.23321*(t35074*t3672 - 1.*t35213*t4152))*var2[8];
  p_output1[2]=var2[2] + (t1510*t29595 + t2405*t34227 + 0.15121*t34291 + 0.28121*t2701*t35052 + 0.50321*t35213*t3909 - 0.28121*t24420*t274*t3972 - 0.50321*t35074*t4152 + 0.23321*(t35213*t3672 + t35074*t4152))*var2[3] + (t1510*t1601*t24543*t274 + 0.28121*t2701*t38301 + 0.50321*t38315*t3909 - 0.50321*t38323*t4152 + 0.23321*(t3672*t38315 + t38323*t4152) - 0.28121*t24543*t3972*t4792 - 1.*t2405*t24543*t274*t932 + 0.15121*(t1059*t1601*t24543*t274 + t1484*t24543*t274*t932))*var2[4] + (t1510*t36653 + t2405*t37751 + 0.28121*t2701*t37789 + 0.15121*(t36796 + t37825) + 0.50321*t2581*t37789*t3909 - 0.50321*t37789*t3972*t4152 + 0.23321*(t2581*t3672*t37789 + t37789*t3972*t4152))*var2[5] + (0.15121*(t37825 - 1.*t1059*t38033) + 0.28121*t2701*t38054 + 0.50321*t2581*t38054*t3909 - 0.50321*t38054*t3972*t4152 + 0.23321*(t2581*t3672*t38054 + t38054*t3972*t4152) + t37751*t4404 + t38033*t4535)*var2[6] + (0.28121*t24543*t2581*t274 + 0.50321*t38265*t3909 + 0.28121*t38174*t3972 - 0.50321*t38202*t4152 + 0.23321*(t3672*t38265 + t38202*t4152))*var2[7] + (-0.50321*t3672*t38183 + 0.50321*t38202*t4152 + 0.23321*(t3672*t38183 - 1.*t38202*t4152))*var2[8];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "initial_swing_velocity_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void initial_swing_velocity_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
