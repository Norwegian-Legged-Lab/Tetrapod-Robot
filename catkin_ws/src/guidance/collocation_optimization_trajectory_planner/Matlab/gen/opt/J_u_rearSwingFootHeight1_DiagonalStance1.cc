/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:51 GMT+01:00
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
  double t211;
  double t271;
  double t272;
  double t318;
  double t641;
  double t661;
  double t669;
  double t675;
  double t680;
  double t698;
  double t816;
  double t783;
  double t801;
  double t822;
  double t439;
  double t481;
  double t807;
  double t827;
  double t829;
  double t854;
  double t862;
  double t863;
  double t898;
  double t304;
  double t1359;
  double t1363;
  double t1364;
  double t1395;
  double t95;
  double t1151;
  double t1036;
  double t1039;
  double t1065;
  double t1272;
  double t1277;
  double t1293;
  double t1477;
  double t567;
  double t1580;
  double t323;
  double t1373;
  double t1885;
  double t1939;
  double t2058;
  double t966;
  double t1660;
  double t900;
  double t2206;
  double t1603;
  double t1652;
  double t1666;
  double t1668;
  double t1711;
  double t1750;
  double t1764;
  double t1787;
  double t2238;
  double t2009;
  double t2044;
  double t2049;
  double t2068;
  double t2073;
  double t2074;
  double t2097;
  double t2148;
  double t2288;
  double t2306;
  double t2325;
  double t2339;
  double t2341;
  double t2348;
  double t2354;
  double t2362;
  double t1831;
  double t2466;
  double t1944;
  double t2555;
  double t2387;
  double t1424;
  double t726;
  double t730;
  double t171;
  double t301;
  double t427;
  double t433;
  double t581;
  double t592;
  double t617;
  double t846;
  double t848;
  double t879;
  double t893;
  double t918;
  double t941;
  double t976;
  double t1015;
  double t1016;
  double t1137;
  double t1143;
  double t1198;
  double t1209;
  double t1217;
  double t1218;
  double t1264;
  double t1356;
  double t1367;
  double t1444;
  double t1448;
  double t1515;
  double t1526;
  double t1574;
  double t2761;
  double t2792;
  double t2823;
  double t2828;
  double t2830;
  double t2840;
  double t1812;
  double t1814;
  double t1840;
  double t1861;
  double t1965;
  double t1966;
  double t1997;
  double t2184;
  double t2185;
  double t2213;
  double t2220;
  double t2246;
  double t2253;
  double t2272;
  double t2404;
  double t2857;
  double t2859;
  double t2872;
  double t2884;
  double t2480;
  double t2907;
  double t2916;
  double t2921;
  double t2922;
  double t2512;
  double t2520;
  double t2939;
  double t2957;
  double t2968;
  double t2980;
  double t2562;
  double t2578;
  double t2618;
  double t2637;
  double t2645;
  double t2655;
  double t2659;
  double t2672;
  double t3278;
  double t3282;
  double t3294;
  double t3336;
  double t3337;
  double t3452;
  double t3460;
  double t3472;
  double t3473;
  double t3516;
  double t3539;
  double t3543;
  double t3556;
  double t3574;
  double t3577;
  double t3610;
  double t3626;
  double t3683;
  double t3719;
  double t3739;
  double t3747;
  double t4285;
  double t4291;
  double t4293;
  double t4306;
  double t4331;
  double t4383;
  double t4412;
  double t4419;
  double t4449;
  double t4460;
  double t4514;
  double t4560;
  double t4580;
  double t4599;
  double t4609;
  double t4620;
  double t4786;
  double t4802;
  double t4806;
  double t4998;
  double t4999;
  double t5002;
  double t4779;
  double t5049;
  double t4862;
  double t5013;
  double t5019;
  double t5025;
  double t5031;
  double t5036;
  double t5037;
  double t5042;
  double t5047;
  double t5048;
  double t5055;
  double t5061;
  double t5071;
  double t5076;
  double t5078;
  double t5081;
  double t5085;
  double t5087;
  double t5088;
  double t5161;
  double t5184;
  double t5189;
  double t5191;
  double t5193;
  double t5226;
  double t5227;
  double t5228;
  double t5231;
  double t5173;
  double t5254;
  double t5255;
  double t5256;
  double t5259;
  double t5265;
  double t5197;
  double t5247;
  double t5236;
  t211 = Cos(var1[16]);
  t271 = -1.*t211;
  t272 = 1. + t271;
  t318 = Sin(var1[16]);
  t641 = Sin(var1[3]);
  t661 = Cos(var1[15]);
  t669 = -1.*t661;
  t675 = 1. + t669;
  t680 = -0.15121*t675;
  t698 = Sin(var1[15]);
  t816 = Cos(var1[3]);
  t783 = Cos(var1[5]);
  t801 = Sin(var1[4]);
  t822 = Sin(var1[5]);
  t439 = -1. + t211;
  t481 = 4.e-6*t439;
  t807 = t783*t641*t801;
  t827 = t816*t822;
  t829 = t807 + t827;
  t854 = t816*t783;
  t862 = -1.*t641*t801*t822;
  t863 = t854 + t862;
  t898 = 7.e-6*t272;
  t304 = 2.8e-11*t272;
  t1359 = Cos(var1[17]);
  t1363 = -1.*t1359;
  t1364 = 1. + t1363;
  t1395 = Sin(var1[17]);
  t95 = Cos(var1[4]);
  t1151 = -4.e-6*t318;
  t1036 = -1.*t698*t829;
  t1039 = t661*t863;
  t1065 = t1036 + t1039;
  t1272 = t661*t829;
  t1277 = t698*t863;
  t1293 = t1272 + t1277;
  t1477 = 2.8e-11*t1364;
  t567 = -7.e-6*t318;
  t1580 = -2.8e-11*t272;
  t323 = -1.*t318;
  t1373 = 7.e-6*t1364;
  t1885 = -1. + t1359;
  t1939 = 4.e-6*t1885;
  t2058 = 4.e-6*t272;
  t966 = 7.e-6*t318;
  t1660 = -7.e-6*t272;
  t900 = 4.e-6*t318;
  t2206 = 4.e-6*t1395;
  t1603 = t1580 + t318;
  t1652 = -1.*t95*t1603*t641;
  t1666 = t1660 + t1151;
  t1668 = t1666*t1065;
  t1711 = -1.000000000016*t272;
  t1750 = 1. + t1711;
  t1764 = t1750*t1293;
  t1787 = t1652 + t1668 + t1764;
  t2238 = 7.e-6*t1395;
  t2009 = -1.000000000049*t272;
  t2044 = 1. + t2009;
  t2049 = -1.*t2044*t95*t641;
  t2068 = t2058 + t567;
  t2073 = t2068*t1065;
  t2074 = t1580 + t323;
  t2097 = t2074*t1293;
  t2148 = t2049 + t2073 + t2097;
  t2288 = t2058 + t966;
  t2306 = -1.*t95*t2288*t641;
  t2325 = -6.5e-11*t272;
  t2339 = 1. + t2325;
  t2341 = t2339*t1065;
  t2348 = t1660 + t900;
  t2354 = t2348*t1293;
  t2362 = t2306 + t2341 + t2354;
  t1831 = -1.*t1395;
  t2466 = 4.e-6*t1364;
  t1944 = -7.e-6*t1395;
  t2555 = -2.8e-11*t1364;
  t2387 = -7.e-6*t1364;
  t1424 = -4.e-6*t1395;
  t726 = -0.15121*t698;
  t730 = t680 + t726;
  t171 = 1.5843479999999999e-12*var1[16];
  t301 = -0.03874900000889869*t272;
  t427 = t304 + t323;
  t433 = -0.281211000004*t427;
  t581 = t481 + t567;
  t592 = -1.8134809999999998e-6*t581;
  t617 = t171 + t301 + t433 + t592;
  t846 = 0.15121*t698;
  t848 = t680 + t846;
  t879 = 3.9608699999999997e-7*var1[16];
  t893 = -1.1787626499999999e-16*t272;
  t918 = t898 + t900;
  t941 = -0.281211000004*t918;
  t976 = t481 + t966;
  t1015 = -0.038749000006999997*t976;
  t1016 = t879 + t893 + t941 + t1015;
  t1137 = -2.7726089999999997e-12*var1[16];
  t1143 = -0.2812110000084994*t272;
  t1198 = t898 + t1151;
  t1209 = -1.8134809999999998e-6*t1198;
  t1217 = t304 + t318;
  t1218 = -0.038749000006999997*t1217;
  t1264 = t1137 + t1143 + t1209 + t1218;
  t1356 = -1.9784030000000015e-12*var1[17];
  t1367 = -0.5031510000160505*t1364;
  t1444 = t1373 + t1424;
  t1448 = -3.367757e-6*t1444;
  t1515 = t1477 + t1395;
  t1526 = -0.038575000014*t1515;
  t1574 = t1356 + t1367 + t1448 + t1526;
  t2761 = t816*t95*t783*t698;
  t2792 = t661*t816*t95*t822;
  t2823 = t2761 + t2792;
  t2828 = -1.*t661*t816*t95*t783;
  t2830 = t816*t95*t698*t822;
  t2840 = t2828 + t2830;
  t1812 = 1.1305160000000008e-12*var1[17];
  t1814 = -0.03857500001589017*t1364;
  t1840 = t1477 + t1831;
  t1861 = -0.5031510000080001*t1840;
  t1965 = t1939 + t1944;
  t1966 = -3.367757e-6*t1965;
  t1997 = t1812 + t1814 + t1861 + t1966;
  t2184 = 2.826290000000002e-7*var1[17];
  t2185 = -2.18904205e-16*t1364;
  t2213 = t1373 + t2206;
  t2220 = -0.5031510000080001*t2213;
  t2246 = t1939 + t2238;
  t2253 = -0.038575000014*t2246;
  t2272 = t2184 + t2185 + t2220 + t2253;
  t2404 = t2387 + t2206;
  t2857 = -1.*t816*t1603*t801;
  t2859 = t1666*t2823;
  t2872 = t1750*t2840;
  t2884 = t2857 + t2859 + t2872;
  t2480 = t2466 + t2238;
  t2907 = -1.*t2044*t816*t801;
  t2916 = t2068*t2823;
  t2921 = t2074*t2840;
  t2922 = t2907 + t2916 + t2921;
  t2512 = -6.5e-11*t1364;
  t2520 = 1. + t2512;
  t2939 = -1.*t816*t2288*t801;
  t2957 = t2339*t2823;
  t2968 = t2348*t2840;
  t2980 = t2939 + t2957 + t2968;
  t2562 = t2555 + t1831;
  t2578 = -1.000000000049*t1364;
  t2618 = 1. + t2578;
  t2637 = t2466 + t1944;
  t2645 = -1.000000000016*t1364;
  t2655 = 1. + t2645;
  t2659 = t2555 + t1395;
  t2672 = t2387 + t1424;
  t3278 = t816*t783*t801;
  t3282 = -1.*t641*t822;
  t3294 = t3278 + t3282;
  t3336 = t783*t641;
  t3337 = t816*t801*t822;
  t3452 = t3336 + t3337;
  t3460 = t698*t3294;
  t3472 = t661*t3452;
  t3473 = t3460 + t3472;
  t3516 = t661*t3294;
  t3539 = -1.*t698*t3452;
  t3543 = t3516 + t3539;
  t3556 = t2348*t3473;
  t3574 = t2339*t3543;
  t3577 = t3556 + t3574;
  t3610 = t2074*t3473;
  t3626 = t2068*t3543;
  t3683 = t3610 + t3626;
  t3719 = t1750*t3473;
  t3739 = t1666*t3543;
  t3747 = t3719 + t3739;
  t4285 = -1.*t816*t783*t801;
  t4291 = t641*t822;
  t4293 = t4285 + t4291;
  t4306 = -1.*t698*t4293;
  t4331 = t4306 + t3472;
  t4383 = -1.*t661*t4293;
  t4412 = t4383 + t3539;
  t4419 = t2348*t4331;
  t4449 = t2339*t4412;
  t4460 = t4419 + t4449;
  t4514 = t2074*t4331;
  t4560 = t2068*t4412;
  t4580 = t4514 + t4560;
  t4599 = t1750*t4331;
  t4609 = t1666*t4412;
  t4620 = t4599 + t4609;
  t4786 = 2.8e-11*t318;
  t4802 = 7.e-6*t211;
  t4806 = 4.e-6*t211;
  t4998 = t661*t4293;
  t4999 = t698*t3452;
  t5002 = t4998 + t4999;
  t4779 = -7.e-6*t211;
  t5049 = -2.8e-11*t318;
  t4862 = -4.e-6*t211;
  t5013 = t4802 + t900;
  t5019 = t816*t95*t5013;
  t5025 = -6.5e-11*t318*t4331;
  t5031 = t4806 + t567;
  t5036 = t5031*t5002;
  t5037 = t5019 + t5025 + t5036;
  t5042 = -1.000000000049*t816*t95*t318;
  t5047 = t4779 + t900;
  t5048 = t5047*t4331;
  t5055 = t271 + t5049;
  t5061 = t5055*t5002;
  t5071 = t5042 + t5048 + t5061;
  t5076 = t211 + t5049;
  t5078 = t816*t95*t5076;
  t5081 = t4862 + t567;
  t5085 = t5081*t4331;
  t5087 = -1.000000000016*t318*t5002;
  t5088 = t5078 + t5085 + t5087;
  t5161 = 2.8e-11*t1395;
  t5184 = t816*t95*t1603;
  t5189 = t1666*t4331;
  t5191 = t1750*t5002;
  t5193 = t5184 + t5189 + t5191;
  t5226 = t2044*t816*t95;
  t5227 = t2068*t4331;
  t5228 = t2074*t5002;
  t5231 = t5226 + t5227 + t5228;
  t5173 = -4.e-6*t1359;
  t5254 = t816*t95*t2288;
  t5255 = t2339*t4331;
  t5256 = t2348*t5002;
  t5259 = t5254 + t5255 + t5256;
  t5265 = -2.8e-11*t1395;
  t5197 = -7.e-6*t1359;
  t5247 = 4.e-6*t1359;
  t5236 = 7.e-6*t1359;
  p_output1[0]=1.;
  p_output1[1]=t1016*t1065 + t1264*t1293 + t1574*t1787 + t1997*t2148 + t2272*t2362 - 0.148715*(t1787*t2404 + t2148*t2480 + t2362*t2520) - 0.038576*(t1787*t2562 + t2148*t2618 + t2362*t2637) - 0.80315*(t1787*t2655 + t2148*t2659 + t2362*t2672) + t730*t829 + t848*t863 - 1.*t617*t641*t95;
  p_output1[2]=t1016*t2823 + t1264*t2840 + t1574*t2884 + t1997*t2922 + t2272*t2980 - 0.148715*(t2404*t2884 + t2480*t2922 + t2520*t2980) - 0.038576*(t2562*t2884 + t2618*t2922 + t2637*t2980) - 0.80315*(t2655*t2884 + t2659*t2922 + t2672*t2980) - 1.*t617*t801*t816 - 1.*t730*t783*t816*t95 + t816*t822*t848*t95;
  p_output1[3]=t1264*t3473 + t1016*t3543 + t2272*t3577 + t1997*t3683 + t1574*t3747 - 0.148715*(t2520*t3577 + t2480*t3683 + t2404*t3747) - 0.038576*(t2637*t3577 + t2618*t3683 + t2562*t3747) - 0.80315*(t2672*t3577 + t2659*t3683 + t2655*t3747) + t3452*t730 + t3294*t848;
  p_output1[4]=t1264*t4331 + t1016*t4412 + t2272*t4460 + t1997*t4580 + t1574*t4620 - 0.148715*(t2520*t4460 + t2480*t4580 + t2404*t4620) - 0.038576*(t2637*t4460 + t2618*t4580 + t2562*t4620) - 0.80315*(t2672*t4460 + t2659*t4580 + t2655*t4620) + t4293*(-0.15121*t661 + t726) + t3452*(0.15121*t661 + t726);
  p_output1[5]=t2272*t5037 + t1997*t5071 + t1574*t5088 - 0.148715*(t2520*t5037 + t2480*t5071 + t2404*t5088) - 0.038576*(t2637*t5037 + t2618*t5071 + t2562*t5088) - 0.80315*(t2672*t5037 + t2659*t5071 + t2655*t5088) + (1.5843479999999999e-12 - 0.03874900000889869*t318 - 1.8134809999999998e-6*(t1151 + t4779) - 0.281211000004*(t271 + t4786))*t816*t95 + t4331*(3.9608699999999997e-7 - 1.1787626499999999e-16*t318 - 0.038749000006999997*(t1151 + t4802) - 0.281211000004*(t4806 + t966)) + t5002*(-2.7726089999999997e-12 - 0.2812110000084994*t318 - 0.038749000006999997*(t211 + t4786) - 1.8134809999999998e-6*(t4862 + t966));
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t1395 - 0.038575000014*(t1359 + t5161) - 3.367757e-6*(t2238 + t5173))*t5193 + (1.1305160000000008e-12 - 0.03857500001589017*t1395 - 0.5031510000080001*(t1363 + t5161) - 3.367757e-6*(t1424 + t5197))*t5231 + (2.826290000000002e-7 - 2.18904205e-16*t1395 - 0.038575000014*(t1424 + t5236) - 0.5031510000080001*(t2238 + t5247))*t5259 - 0.148715*(t5231*(t2206 + t5236) + t5193*(t1944 + t5247) - 6.5e-11*t1395*t5259) - 0.80315*(-1.000000000016*t1395*t5193 + (t1944 + t5173)*t5259 + t5231*(t1359 + t5265)) - 0.038576*(-1.000000000049*t1395*t5231 + (t2206 + t5197)*t5259 + t5193*(t1363 + t5265));
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_rearSwingFootHeight1_DiagonalStance1.hh"

namespace DiagonalStance1
{

void J_u_rearSwingFootHeight1_DiagonalStance1_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
