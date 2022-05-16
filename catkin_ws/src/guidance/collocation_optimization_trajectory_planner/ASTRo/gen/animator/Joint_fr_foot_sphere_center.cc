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
  double t434;
  double t204;
  double t228;
  double t264;
  double t265;
  double t278;
  double t295;
  double t453;
  double t492;
  double t524;
  double t567;
  double t214;
  double t824;
  double t672;
  double t964;
  double t1039;
  double t1045;
  double t1150;
  double t1198;
  double t1244;
  double t1256;
  double t1319;
  double t1338;
  double t1387;
  double t1678;
  double t2092;
  double t1431;
  double t1435;
  double t1438;
  double t1439;
  double t1521;
  double t1587;
  double t1709;
  double t1716;
  double t1717;
  double t1721;
  double t1880;
  double t1961;
  double t1968;
  double t1976;
  double t2002;
  double t2016;
  double t2146;
  double t2204;
  double t2213;
  double t2230;
  double t2277;
  double t2307;
  double t2331;
  double t2349;
  double t2375;
  double t2376;
  double t2526;
  double t2536;
  double t2566;
  double t2581;
  double t2719;
  double t2745;
  double t2753;
  double t2758;
  double t2770;
  double t2773;
  double t431;
  double t514;
  double t541;
  double t577;
  double t669;
  double t272;
  double t348;
  double t3203;
  double t782;
  double t820;
  double t3211;
  double t845;
  double t851;
  double t893;
  double t914;
  double t929;
  double t3210;
  double t3215;
  double t3218;
  double t3226;
  double t3257;
  double t3331;
  double t1131;
  double t1134;
  double t1137;
  double t1367;
  double t1420;
  double t1424;
  double t3546;
  double t3603;
  double t3645;
  double t3685;
  double t3692;
  double t3734;
  double t1598;
  double t1609;
  double t1679;
  double t1701;
  double t1708;
  double t1744;
  double t1839;
  double t1861;
  double t1875;
  double t1876;
  double t2069;
  double t2210;
  double t2225;
  double t2240;
  double t2249;
  double t3937;
  double t3940;
  double t3947;
  double t4057;
  double t4148;
  double t4151;
  double t4170;
  double t4196;
  double t4231;
  double t4253;
  double t4276;
  double t4406;
  double t2396;
  double t2411;
  double t2414;
  double t2452;
  double t2460;
  double t2619;
  double t2621;
  double t2691;
  double t4422;
  double t4438;
  double t4525;
  double t4576;
  double t4588;
  double t4619;
  double t4655;
  double t4680;
  double t2836;
  double t2837;
  double t4723;
  double t4807;
  double t4854;
  double t4872;
  double t3034;
  double t3066;
  double t5390;
  double t5397;
  double t5418;
  double t5440;
  double t5442;
  double t5443;
  double t5473;
  double t5475;
  double t5480;
  double t5498;
  double t5501;
  double t5503;
  double t5506;
  double t5513;
  double t5514;
  double t5519;
  double t5523;
  double t5525;
  double t5527;
  double t5529;
  double t5533;
  double t5534;
  double t5535;
  double t5537;
  double t5539;
  double t5541;
  double t5543;
  double t5545;
  double t5557;
  double t5558;
  double t5563;
  double t5568;
  double t5571;
  double t5572;
  double t5577;
  double t5578;
  t434 = Cos(var1[10]);
  t204 = Cos(var1[4]);
  t228 = Cos(var1[9]);
  t264 = -1.*t228;
  t265 = 1. + t264;
  t278 = Sin(var1[9]);
  t295 = -0.15121*t278;
  t453 = -1.*t434;
  t492 = 1. + t453;
  t524 = -1. + t434;
  t567 = Sin(var1[10]);
  t214 = Cos(var1[5]);
  t824 = Sin(var1[5]);
  t672 = Sin(var1[4]);
  t964 = -1.*t204*t214*t278;
  t1039 = -1.*t228*t204*t824;
  t1045 = t964 + t1039;
  t1150 = t228*t204*t214;
  t1198 = -1.*t204*t278*t824;
  t1244 = t1150 + t1198;
  t1256 = Cos(var1[11]);
  t1319 = -1.*t1256;
  t1338 = 1. + t1319;
  t1387 = Sin(var1[11]);
  t1678 = -1. + t1256;
  t2092 = Cos(var1[19]);
  t1431 = t567*t672;
  t1435 = -4.e-6*t567*t1045;
  t1438 = -1.000000000016*t492;
  t1439 = 1. + t1438;
  t1521 = t1439*t1244;
  t1587 = t1431 + t1435 + t1521;
  t1709 = t434*t672;
  t1716 = 4.e-6*t492*t1045;
  t1717 = -1.*t567*t1244;
  t1721 = t1709 + t1716 + t1717;
  t1880 = 4.e-6*t492*t672;
  t1961 = 1.6e-11*t524;
  t1968 = 1. + t1961;
  t1976 = t1968*t1045;
  t2002 = 4.e-6*t567*t1244;
  t2016 = t1880 + t1976 + t2002;
  t2146 = -1.*t2092;
  t2204 = 1. + t2146;
  t2213 = -1. + t2092;
  t2230 = Sin(var1[19]);
  t2277 = 4.e-6*t1387*t1587;
  t2307 = 4.e-6*t1338*t1721;
  t2331 = 1.6e-11*t1678;
  t2349 = 1. + t2331;
  t2375 = t2349*t2016;
  t2376 = t2277 + t2307 + t2375;
  t2526 = -1.*t1387*t1587;
  t2536 = t1256*t1721;
  t2566 = 4.e-6*t1338*t2016;
  t2581 = t2526 + t2536 + t2566;
  t2719 = -1.000000000016*t1338;
  t2745 = 1. + t2719;
  t2753 = t2745*t1587;
  t2758 = t1387*t1721;
  t2770 = -4.e-6*t1387*t2016;
  t2773 = t2753 + t2758 + t2770;
  t431 = -4.9936e-13*var1[10];
  t514 = -0.038749*t492;
  t541 = 6.19984e-13*t524;
  t577 = -0.281210000004*t567;
  t669 = t431 + t514 + t541 + t577;
  t272 = 0.15121*t265;
  t348 = t272 + t295;
  t3203 = Sin(var1[3]);
  t782 = -0.15121*t265;
  t820 = t782 + t295;
  t3211 = Cos(var1[3]);
  t845 = -1.2484e-7*var1[10];
  t851 = 2.479936e-18*t492;
  t893 = -1.54996e-7*t524;
  t914 = 1.124840000016e-6*t567;
  t929 = t845 + t851 + t893 + t914;
  t3210 = t214*t3203*t672;
  t3215 = t3211*t824;
  t3218 = t3210 + t3215;
  t3226 = t3211*t214;
  t3257 = -1.*t3203*t672*t824;
  t3331 = t3226 + t3257;
  t1131 = 0.281210000008499*t492;
  t1134 = -0.03874900000062*t567;
  t1137 = t1131 + t1134;
  t1367 = 0.50315000001605*t1338;
  t1420 = -0.0398890000006382*t1387;
  t1424 = t1367 + t1420;
  t3546 = -1.*t278*t3218;
  t3603 = t228*t3331;
  t3645 = t3546 + t3603;
  t3685 = t228*t3218;
  t3692 = t278*t3331;
  t3734 = t3685 + t3692;
  t1598 = -5.04e-14*var1[11];
  t1609 = -0.039889*t1338;
  t1679 = 6.38224e-13*t1678;
  t1701 = -0.503150000008*t1387;
  t1708 = t1598 + t1609 + t1679 + t1701;
  t1744 = -1.26e-8*var1[11];
  t1839 = 2.552896e-18*t1338;
  t1861 = -1.59556e-7*t1678;
  t1875 = 2.012600000032e-6*t1387;
  t1876 = t1744 + t1839 + t1861 + t1875;
  t2069 = -2.1258799999999997e-7*var1[19];
  t2210 = 2.63648e-18*t2204;
  t2225 = -1.6478e-7*t2213;
  t2240 = 3.2125880000479997e-6*t2230;
  t2249 = t2069 + t2210 + t2225 + t2240;
  t3937 = -1.*t204*t567*t3203;
  t3940 = -4.e-6*t567*t3645;
  t3947 = t1439*t3734;
  t4057 = t3937 + t3940 + t3947;
  t4148 = -1.*t434*t204*t3203;
  t4151 = 4.e-6*t492*t3645;
  t4170 = -1.*t567*t3734;
  t4196 = t4148 + t4151 + t4170;
  t4231 = -4.e-6*t492*t204*t3203;
  t4253 = t1968*t3645;
  t4276 = 4.e-6*t567*t3734;
  t4406 = t4231 + t4253 + t4276;
  t2396 = -8.503519999999998e-13*var1[19];
  t2411 = -0.041195*t2204;
  t2414 = 6.591199999999999e-13*t2213;
  t2452 = -0.803147000012*t2230;
  t2460 = t2396 + t2411 + t2414 + t2452;
  t2619 = 0.8031470000248504*t2204;
  t2621 = -0.04119500000065912*t2230;
  t2691 = 0. + t2619 + t2621;
  t4422 = 4.e-6*t1387*t4057;
  t4438 = 4.e-6*t1338*t4196;
  t4525 = t2349*t4406;
  t4576 = t4422 + t4438 + t4525;
  t4588 = -1.*t1387*t4057;
  t4619 = t1256*t4196;
  t4655 = 4.e-6*t1338*t4406;
  t4680 = t4588 + t4619 + t4655;
  t2836 = -1.000000000016*t2204;
  t2837 = 1. + t2836;
  t4723 = t2745*t4057;
  t4807 = t1387*t4196;
  t4854 = -4.e-6*t1387*t4406;
  t4872 = t4723 + t4807 + t4854;
  t3034 = 1.6e-11*t2213;
  t3066 = 1. + t3034;
  t5390 = -1.*t3211*t214*t672;
  t5397 = t3203*t824;
  t5418 = t5390 + t5397;
  t5440 = t214*t3203;
  t5442 = t3211*t672*t824;
  t5443 = t5440 + t5442;
  t5473 = -1.*t278*t5418;
  t5475 = t228*t5443;
  t5480 = t5473 + t5475;
  t5498 = t228*t5418;
  t5501 = t278*t5443;
  t5503 = t5498 + t5501;
  t5506 = t3211*t204*t567;
  t5513 = -4.e-6*t567*t5480;
  t5514 = t1439*t5503;
  t5519 = t5506 + t5513 + t5514;
  t5523 = t434*t3211*t204;
  t5525 = 4.e-6*t492*t5480;
  t5527 = -1.*t567*t5503;
  t5529 = t5523 + t5525 + t5527;
  t5533 = 4.e-6*t492*t3211*t204;
  t5534 = t1968*t5480;
  t5535 = 4.e-6*t567*t5503;
  t5537 = t5533 + t5534 + t5535;
  t5539 = 4.e-6*t1387*t5519;
  t5541 = 4.e-6*t1338*t5529;
  t5543 = t2349*t5537;
  t5545 = t5539 + t5541 + t5543;
  t5557 = -1.*t1387*t5519;
  t5558 = t1256*t5529;
  t5563 = 4.e-6*t1338*t5537;
  t5568 = t5557 + t5558 + t5563;
  t5571 = t2745*t5519;
  t5572 = t1387*t5529;
  t5577 = -4.e-6*t1387*t5537;
  t5578 = t5571 + t5572 + t5577;
  p_output1[0]=t1137*t1244 + t1424*t1587 + t1708*t1721 + t1876*t2016 + t2249*t2376 + t2460*t2581 + t2691*t2773 - 0.041195*(4.e-6*t2204*t2376 + t2092*t2581 - 1.*t2230*t2773) + 0.803147*(-4.e-6*t2230*t2376 + t2230*t2581 + t2773*t2837) - 0.14871*(4.e-6*t2204*t2581 + 4.e-6*t2230*t2773 + t2376*t3066) + t204*t214*t348 + t669*t672 - 1.*t204*t820*t824 + t1045*t929 + var1[0];
  p_output1[1]=t3218*t348 + t1137*t3734 + t1424*t4057 + t1708*t4196 + t1876*t4406 + t2249*t4576 + t2460*t4680 + t2691*t4872 - 0.041195*(4.e-6*t2204*t4576 + t2092*t4680 - 1.*t2230*t4872) - 0.14871*(t3066*t4576 + 4.e-6*t2204*t4680 + 4.e-6*t2230*t4872) + 0.803147*(-4.e-6*t2230*t4576 + t2230*t4680 + t2837*t4872) - 1.*t204*t3203*t669 + t3331*t820 + t3645*t929 + var1[1];
  p_output1[2]=t348*t5418 + t1137*t5503 + t1424*t5519 + t1708*t5529 + t1876*t5537 + t2249*t5545 + t2460*t5568 + t2691*t5578 - 0.041195*(4.e-6*t2204*t5545 + t2092*t5568 - 1.*t2230*t5578) - 0.14871*(t3066*t5545 + 4.e-6*t2204*t5568 + 4.e-6*t2230*t5578) + 0.803147*(-4.e-6*t2230*t5545 + t2230*t5568 + t2837*t5578) + t204*t3211*t669 + t5443*t820 + t5480*t929 + var1[2];
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

#include "Joint_fr_foot_sphere_center.hh"

namespace SymFunction
{

void Joint_fr_foot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
