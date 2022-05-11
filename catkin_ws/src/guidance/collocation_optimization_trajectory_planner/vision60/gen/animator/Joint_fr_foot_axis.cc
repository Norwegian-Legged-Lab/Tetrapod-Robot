/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 15:18:35 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t703;
  double t903;
  double t942;
  double t929;
  double t936;
  double t1121;
  double t1251;
  double t1322;
  double t1424;
  double t837;
  double t940;
  double t1126;
  double t1137;
  double t1592;
  double t1594;
  double t1708;
  double t1851;
  double t1876;
  double t1881;
  double t156;
  double t189;
  double t244;
  double t446;
  double t795;
  double t864;
  double t889;
  double t898;
  double t1150;
  double t1431;
  double t1521;
  double t1709;
  double t1734;
  double t1976;
  double t2063;
  double t2069;
  double t2088;
  double t2210;
  double t2225;
  double t2240;
  double t2249;
  double t2366;
  double t2375;
  double t2380;
  double t2395;
  double t2396;
  double t2411;
  double t2414;
  double t2432;
  double t659;
  double t663;
  double t1793;
  double t2271;
  double t2276;
  double t2308;
  double t2436;
  double t2443;
  double t2460;
  double t2484;
  double t2489;
  double t2500;
  double t2503;
  double t2506;
  double t2536;
  double t2542;
  double t2578;
  double t2599;
  double t2611;
  double t2614;
  double t2618;
  double t2619;
  double t2621;
  double t2622;
  double t2628;
  double t2633;
  double t348;
  double t387;
  double t2679;
  double t2700;
  double t2691;
  double t2704;
  double t2708;
  double t2717;
  double t2722;
  double t2727;
  double t2712;
  double t2753;
  double t2758;
  double t2802;
  double t2831;
  double t2839;
  double t2685;
  double t2787;
  double t2860;
  double t2894;
  double t2931;
  double t2938;
  double t2943;
  double t2990;
  double t3067;
  double t3111;
  double t3143;
  double t3157;
  double t2587;
  double t2597;
  double t2922;
  double t3002;
  double t3168;
  double t3180;
  double t2642;
  double t2647;
  double t3183;
  double t3204;
  double t3210;
  double t3215;
  double t2652;
  double t2656;
  double t3226;
  double t3331;
  double t3334;
  double t3406;
  double t4053;
  double t4068;
  double t4080;
  double t4137;
  double t4158;
  double t4197;
  double t4132;
  double t4253;
  double t4305;
  double t4367;
  double t4419;
  double t4432;
  double t4052;
  double t4337;
  double t4525;
  double t4545;
  double t4619;
  double t4623;
  double t4650;
  double t4713;
  double t4770;
  double t4781;
  double t4807;
  double t4839;
  double t4577;
  double t4723;
  double t4937;
  double t4956;
  double t5028;
  double t5085;
  double t5139;
  double t5183;
  double t5253;
  double t5261;
  double t5272;
  double t5279;
  t703 = Sin(var1[10]);
  t903 = Cos(var1[4]);
  t942 = Cos(var1[9]);
  t929 = Cos(var1[5]);
  t936 = Sin(var1[9]);
  t1121 = Sin(var1[5]);
  t1251 = Cos(var1[10]);
  t1322 = -1.*t1251;
  t1424 = 1. + t1322;
  t837 = Sin(var1[4]);
  t940 = -1.*t903*t929*t936;
  t1126 = -1.*t942*t903*t1121;
  t1137 = t940 + t1126;
  t1592 = t942*t903*t929;
  t1594 = -1.*t903*t936*t1121;
  t1708 = t1592 + t1594;
  t1851 = Cos(var1[11]);
  t1876 = -1.*t1851;
  t1881 = 1. + t1876;
  t156 = Cos(var1[19]);
  t189 = -1.*t156;
  t244 = 1. + t189;
  t446 = Sin(var1[11]);
  t795 = 0. + t703;
  t864 = t795*t837;
  t889 = -4.e-6*t703;
  t898 = 0. + t889;
  t1150 = t898*t1137;
  t1431 = -1.000000000016*t1424;
  t1521 = 1. + t1431;
  t1709 = t1521*t1708;
  t1734 = t864 + t1150 + t1709;
  t1976 = -1.*t1424;
  t2063 = 1. + t1976;
  t2069 = t2063*t837;
  t2088 = 4.e-6*t1424*t1137;
  t2210 = -1.*t703;
  t2225 = 0. + t2210;
  t2240 = t2225*t1708;
  t2249 = t2069 + t2088 + t2240;
  t2366 = 4.e-6*t1424*t837;
  t2375 = -1.6e-11*t1424;
  t2380 = 1. + t2375;
  t2395 = t2380*t1137;
  t2396 = 4.e-6*t703;
  t2411 = 0. + t2396;
  t2414 = t2411*t1708;
  t2432 = t2366 + t2395 + t2414;
  t659 = 4.e-6*t446;
  t663 = 0. + t659;
  t1793 = t663*t1734;
  t2271 = 4.e-6*t1881*t2249;
  t2276 = -1.6e-11*t1881;
  t2308 = 1. + t2276;
  t2436 = t2308*t2432;
  t2443 = t1793 + t2271 + t2436;
  t2460 = -1.*t446;
  t2484 = 0. + t2460;
  t2489 = t2484*t1734;
  t2500 = -1.*t1881;
  t2503 = 1. + t2500;
  t2506 = t2503*t2249;
  t2536 = 4.e-6*t1881*t2432;
  t2542 = t2489 + t2506 + t2536;
  t2578 = Sin(var1[19]);
  t2599 = -1.000000000016*t1881;
  t2611 = 1. + t2599;
  t2614 = t2611*t1734;
  t2618 = 0. + t446;
  t2619 = t2618*t2249;
  t2621 = -4.e-6*t446;
  t2622 = 0. + t2621;
  t2628 = t2622*t2432;
  t2633 = t2614 + t2619 + t2628;
  t348 = -1.6e-11*t244;
  t387 = 1. + t348;
  t2679 = Sin(var1[3]);
  t2700 = Cos(var1[3]);
  t2691 = t929*t2679*t837;
  t2704 = t2700*t1121;
  t2708 = t2691 + t2704;
  t2717 = t2700*t929;
  t2722 = -1.*t2679*t837*t1121;
  t2727 = t2717 + t2722;
  t2712 = -1.*t936*t2708;
  t2753 = t942*t2727;
  t2758 = t2712 + t2753;
  t2802 = t942*t2708;
  t2831 = t936*t2727;
  t2839 = t2802 + t2831;
  t2685 = -1.*t903*t795*t2679;
  t2787 = t898*t2758;
  t2860 = t1521*t2839;
  t2894 = t2685 + t2787 + t2860;
  t2931 = -1.*t2063*t903*t2679;
  t2938 = 4.e-6*t1424*t2758;
  t2943 = t2225*t2839;
  t2990 = t2931 + t2938 + t2943;
  t3067 = -4.e-6*t1424*t903*t2679;
  t3111 = t2380*t2758;
  t3143 = t2411*t2839;
  t3157 = t3067 + t3111 + t3143;
  t2587 = 4.e-6*t2578;
  t2597 = 0. + t2587;
  t2922 = t663*t2894;
  t3002 = 4.e-6*t1881*t2990;
  t3168 = t2308*t3157;
  t3180 = t2922 + t3002 + t3168;
  t2642 = -1.*t244;
  t2647 = 1. + t2642;
  t3183 = t2484*t2894;
  t3204 = t2503*t2990;
  t3210 = 4.e-6*t1881*t3157;
  t3215 = t3183 + t3204 + t3210;
  t2652 = -1.*t2578;
  t2656 = 0. + t2652;
  t3226 = t2611*t2894;
  t3331 = t2618*t2990;
  t3334 = t2622*t3157;
  t3406 = t3226 + t3331 + t3334;
  t4053 = -1.*t2700*t929*t837;
  t4068 = t2679*t1121;
  t4080 = t4053 + t4068;
  t4137 = t929*t2679;
  t4158 = t2700*t837*t1121;
  t4197 = t4137 + t4158;
  t4132 = -1.*t936*t4080;
  t4253 = t942*t4197;
  t4305 = t4132 + t4253;
  t4367 = t942*t4080;
  t4419 = t936*t4197;
  t4432 = t4367 + t4419;
  t4052 = t2700*t903*t795;
  t4337 = t898*t4305;
  t4525 = t1521*t4432;
  t4545 = t4052 + t4337 + t4525;
  t4619 = t2063*t2700*t903;
  t4623 = 4.e-6*t1424*t4305;
  t4650 = t2225*t4432;
  t4713 = t4619 + t4623 + t4650;
  t4770 = 4.e-6*t1424*t2700*t903;
  t4781 = t2380*t4305;
  t4807 = t2411*t4432;
  t4839 = t4770 + t4781 + t4807;
  t4577 = t663*t4545;
  t4723 = 4.e-6*t1881*t4713;
  t4937 = t2308*t4839;
  t4956 = t4577 + t4723 + t4937;
  t5028 = t2484*t4545;
  t5085 = t2503*t4713;
  t5139 = 4.e-6*t1881*t4839;
  t5183 = t5028 + t5085 + t5139;
  t5253 = t2611*t4545;
  t5261 = t2618*t4713;
  t5272 = t2622*t4839;
  t5279 = t5253 + t5261 + t5272;
  p_output1[0]=-4.e-6*t244*t2542 - 1.*t2597*t2633 - 4.e-6*(4.e-6*t244*t2443 + t2542*t2647 + t2633*t2656) - 1.*t2443*t387;
  p_output1[1]=-4.e-6*t244*t3215 - 1.*t2597*t3406 - 4.e-6*(4.e-6*t244*t3180 + t2647*t3215 + t2656*t3406) - 1.*t3180*t387;
  p_output1[2]=-1.*t387*t4956 - 4.e-6*t244*t5183 - 1.*t2597*t5279 - 4.e-6*(4.e-6*t244*t4956 + t2647*t5183 + t2656*t5279);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fr_foot_axis.hh"

namespace SymFunction
{

void Joint_fr_foot_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
