/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:31:21 GMT+01:00
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
  double t240;
  double t298;
  double t323;
  double t350;
  double t448;
  double t487;
  double t495;
  double t526;
  double t569;
  double t577;
  double t641;
  double t614;
  double t617;
  double t642;
  double t349;
  double t620;
  double t650;
  double t651;
  double t664;
  double t667;
  double t670;
  double t372;
  double t695;
  double t886;
  double t902;
  double t903;
  double t915;
  double t143;
  double t785;
  double t822;
  double t744;
  double t747;
  double t763;
  double t855;
  double t858;
  double t865;
  double t924;
  double t680;
  double t971;
  double t699;
  double t1111;
  double t913;
  double t1216;
  double t1236;
  double t363;
  double t954;
  double t959;
  double t961;
  double t975;
  double t978;
  double t987;
  double t1009;
  double t1039;
  double t1046;
  double t1328;
  double t1241;
  double t1257;
  double t1258;
  double t1262;
  double t1265;
  double t1266;
  double t1272;
  double t1280;
  double t1367;
  double t1373;
  double t1374;
  double t1378;
  double t1379;
  double t1380;
  double t1386;
  double t1389;
  double t936;
  double t1395;
  double t918;
  double t1573;
  double t1167;
  double t1433;
  double t1463;
  double t1130;
  double t554;
  double t597;
  double t206;
  double t324;
  double t365;
  double t371;
  double t403;
  double t417;
  double t430;
  double t656;
  double t657;
  double t676;
  double t679;
  double t681;
  double t692;
  double t707;
  double t710;
  double t728;
  double t774;
  double t776;
  double t798;
  double t821;
  double t829;
  double t836;
  double t837;
  double t881;
  double t908;
  double t919;
  double t921;
  double t941;
  double t949;
  double t950;
  double t1901;
  double t1908;
  double t1913;
  double t1937;
  double t1942;
  double t1944;
  double t1053;
  double t1108;
  double t1133;
  double t1161;
  double t1173;
  double t1183;
  double t1188;
  double t1325;
  double t1327;
  double t1340;
  double t1351;
  double t1352;
  double t1359;
  double t1360;
  double t1408;
  double t2015;
  double t2062;
  double t2065;
  double t2073;
  double t1470;
  double t2101;
  double t2129;
  double t2135;
  double t2144;
  double t1474;
  double t1483;
  double t2177;
  double t2199;
  double t2211;
  double t2216;
  double t1546;
  double t1550;
  double t1586;
  double t1609;
  double t1675;
  double t1709;
  double t1719;
  double t1743;
  double t2406;
  double t2435;
  double t2436;
  double t2443;
  double t2452;
  double t2457;
  double t2474;
  double t2484;
  double t2492;
  double t2499;
  double t2505;
  double t2507;
  double t2521;
  double t2528;
  double t2558;
  double t2575;
  double t2617;
  double t2627;
  double t2688;
  double t2697;
  double t2705;
  double t2900;
  double t2913;
  double t2920;
  double t2924;
  double t2972;
  double t3009;
  double t3112;
  double t3114;
  double t3163;
  double t3172;
  double t3201;
  double t3216;
  double t3223;
  double t3226;
  double t3239;
  double t3240;
  double t3246;
  double t3365;
  double t3402;
  double t3420;
  double t3468;
  double t3472;
  double t3473;
  double t3372;
  double t3562;
  double t3453;
  double t3483;
  double t3491;
  double t3499;
  double t3508;
  double t3535;
  double t3546;
  double t3551;
  double t3553;
  double t3557;
  double t3568;
  double t3569;
  double t3573;
  double t3582;
  double t3592;
  double t3595;
  double t3596;
  double t3599;
  double t3603;
  double t3704;
  double t3729;
  double t3720;
  double t3721;
  double t3722;
  double t3723;
  double t3742;
  double t3744;
  double t3745;
  double t3747;
  double t3725;
  double t3789;
  double t3795;
  double t3801;
  double t3802;
  double t3708;
  double t3854;
  double t3761;
  t240 = Cos(var1[13]);
  t298 = -1.*t240;
  t323 = 1. + t298;
  t350 = Sin(var1[13]);
  t448 = Sin(var1[3]);
  t487 = Cos(var1[12]);
  t495 = -1.*t487;
  t526 = 1. + t495;
  t569 = Sin(var1[12]);
  t577 = 0.15121*t569;
  t641 = Cos(var1[3]);
  t614 = Cos(var1[5]);
  t617 = Sin(var1[4]);
  t642 = Sin(var1[5]);
  t349 = 4.e-6*t323;
  t620 = t614*t448*t617;
  t650 = t641*t642;
  t651 = t620 + t650;
  t664 = t641*t614;
  t667 = -1.*t448*t617*t642;
  t670 = t664 + t667;
  t372 = -2.8e-11*t323;
  t695 = 7.e-6*t323;
  t886 = Cos(var1[14]);
  t902 = -1.*t886;
  t903 = 1. + t902;
  t915 = Sin(var1[14]);
  t143 = Cos(var1[4]);
  t785 = -1.*t350;
  t822 = -4.e-6*t350;
  t744 = -1.*t569*t651;
  t747 = t487*t670;
  t763 = t744 + t747;
  t855 = t487*t651;
  t858 = t569*t670;
  t865 = t855 + t858;
  t924 = 7.e-6*t903;
  t680 = -7.e-6*t350;
  t971 = -7.e-6*t323;
  t699 = 4.e-6*t350;
  t1111 = 4.e-6*t903;
  t913 = -2.8e-11*t903;
  t1216 = -1. + t240;
  t1236 = 4.e-6*t1216;
  t363 = 7.e-6*t350;
  t954 = 2.8e-11*t323;
  t959 = t954 + t785;
  t961 = -1.*t143*t959*t448;
  t975 = t971 + t822;
  t978 = t975*t763;
  t987 = -1.000000000016*t323;
  t1009 = 1. + t987;
  t1039 = t1009*t865;
  t1046 = t961 + t978 + t1039;
  t1328 = 7.e-6*t915;
  t1241 = t1236 + t680;
  t1257 = -1.*t143*t1241*t448;
  t1258 = -6.5e-11*t323;
  t1262 = 1. + t1258;
  t1265 = t1262*t763;
  t1266 = t971 + t699;
  t1272 = t1266*t865;
  t1280 = t1257 + t1265 + t1272;
  t1367 = -1.000000000049*t323;
  t1373 = 1. + t1367;
  t1374 = -1.*t1373*t143*t448;
  t1378 = t1236 + t363;
  t1379 = t1378*t763;
  t1380 = t954 + t350;
  t1386 = t1380*t865;
  t1389 = t1374 + t1379 + t1386;
  t936 = -4.e-6*t915;
  t1395 = 2.8e-11*t903;
  t918 = -1.*t915;
  t1573 = -7.e-6*t903;
  t1167 = 4.e-6*t915;
  t1433 = -1. + t886;
  t1463 = 4.e-6*t1433;
  t1130 = -7.e-6*t915;
  t554 = -0.15121*t526;
  t597 = t554 + t577;
  t206 = 5.856279999999999e-13*var1[13];
  t324 = -0.0387489999948987*t323;
  t365 = t349 + t363;
  t371 = -2.123459e-6*t365;
  t403 = t372 + t350;
  t417 = -0.281209000004*t403;
  t430 = t206 + t324 + t371 + t417;
  t656 = 0.15121*t526;
  t657 = t656 + t577;
  t676 = -1.4640699999999997e-7*var1[13];
  t679 = -1.38024835e-16*t323;
  t681 = t349 + t680;
  t692 = -0.038748999993*t681;
  t707 = t695 + t699;
  t710 = -0.281209000004*t707;
  t728 = t676 + t679 + t692 + t710;
  t774 = 1.0248489999999998e-12*var1[13];
  t776 = -0.28120900000849935*t323;
  t798 = t372 + t785;
  t821 = -0.038748999993*t798;
  t829 = t695 + t822;
  t836 = -2.123459e-6*t829;
  t837 = t774 + t776 + t821 + t836;
  t881 = 1.8190549999999993e-12*var1[14];
  t908 = -0.5031490000160505*t903;
  t919 = t913 + t918;
  t921 = -0.038922999986*t919;
  t941 = t924 + t936;
  t949 = -3.6777349999999994e-6*t941;
  t950 = t881 + t908 + t921 + t949;
  t1901 = t641*t143*t614*t569;
  t1908 = t487*t641*t143*t642;
  t1913 = t1901 + t1908;
  t1937 = -1.*t487*t641*t143*t614;
  t1942 = t641*t143*t569*t642;
  t1944 = t1937 + t1942;
  t1053 = -2.598649999999999e-7*var1[14];
  t1108 = -2.3905277499999995e-16*t903;
  t1133 = t1111 + t1130;
  t1161 = -0.038922999986*t1133;
  t1173 = t924 + t1167;
  t1183 = -0.503149000008*t1173;
  t1188 = t1053 + t1108 + t1161 + t1183;
  t1325 = 1.0394599999999997e-12*var1[14];
  t1327 = -0.03892299998790722*t903;
  t1340 = t1111 + t1328;
  t1351 = -3.6777349999999994e-6*t1340;
  t1352 = t913 + t915;
  t1359 = -0.503149000008*t1352;
  t1360 = t1325 + t1327 + t1351 + t1359;
  t1408 = t1395 + t915;
  t2015 = -1.*t641*t959*t617;
  t2062 = t975*t1913;
  t2065 = t1009*t1944;
  t2073 = t2015 + t2062 + t2065;
  t1470 = t1463 + t1328;
  t2101 = -1.*t641*t1241*t617;
  t2129 = t1262*t1913;
  t2135 = t1266*t1944;
  t2144 = t2101 + t2129 + t2135;
  t1474 = -1.000000000049*t903;
  t1483 = 1. + t1474;
  t2177 = -1.*t1373*t641*t617;
  t2199 = t1378*t1913;
  t2211 = t1380*t1944;
  t2216 = t2177 + t2199 + t2211;
  t1546 = -1.000000000016*t903;
  t1550 = 1. + t1546;
  t1586 = t1573 + t936;
  t1609 = t1395 + t918;
  t1675 = t1573 + t1167;
  t1709 = -6.5e-11*t903;
  t1719 = 1. + t1709;
  t1743 = t1463 + t1130;
  t2406 = t641*t614*t617;
  t2435 = -1.*t448*t642;
  t2436 = t2406 + t2435;
  t2443 = t614*t448;
  t2452 = t641*t617*t642;
  t2457 = t2443 + t2452;
  t2474 = t569*t2436;
  t2484 = t487*t2457;
  t2492 = t2474 + t2484;
  t2499 = t487*t2436;
  t2505 = -1.*t569*t2457;
  t2507 = t2499 + t2505;
  t2521 = t1266*t2492;
  t2528 = t1262*t2507;
  t2558 = t2521 + t2528;
  t2575 = t1009*t2492;
  t2617 = t975*t2507;
  t2627 = t2575 + t2617;
  t2688 = t1380*t2492;
  t2697 = t1378*t2507;
  t2705 = t2688 + t2697;
  t2900 = 0.15121*t487;
  t2913 = -1.*t641*t614*t617;
  t2920 = t448*t642;
  t2924 = t2913 + t2920;
  t2972 = -1.*t569*t2924;
  t3009 = t2972 + t2484;
  t3112 = -1.*t487*t2924;
  t3114 = t3112 + t2505;
  t3163 = t1266*t3009;
  t3172 = t1262*t3114;
  t3201 = t3163 + t3172;
  t3216 = t1009*t3009;
  t3223 = t975*t3114;
  t3226 = t3216 + t3223;
  t3239 = t1380*t3009;
  t3240 = t1378*t3114;
  t3246 = t3239 + t3240;
  t3365 = -2.8e-11*t350;
  t3402 = -7.e-6*t240;
  t3420 = 4.e-6*t240;
  t3468 = t487*t2924;
  t3472 = t569*t2457;
  t3473 = t3468 + t3472;
  t3372 = 7.e-6*t240;
  t3562 = 2.8e-11*t350;
  t3453 = -4.e-6*t240;
  t3483 = t3402 + t822;
  t3491 = t641*t143*t3483;
  t3499 = -6.5e-11*t350*t3009;
  t3508 = t3420 + t680;
  t3535 = t3508*t3473;
  t3546 = t3491 + t3499 + t3535;
  t3551 = -1.000000000049*t641*t143*t350;
  t3553 = t3372 + t822;
  t3557 = t3553*t3009;
  t3568 = t240 + t3562;
  t3569 = t3568*t3473;
  t3573 = t3551 + t3557 + t3569;
  t3582 = t298 + t3562;
  t3592 = t641*t143*t3582;
  t3595 = t3453 + t680;
  t3596 = t3595*t3009;
  t3599 = -1.000000000016*t350*t3473;
  t3603 = t3592 + t3596 + t3599;
  t3704 = -2.8e-11*t915;
  t3729 = 4.e-6*t886;
  t3720 = t641*t143*t959;
  t3721 = t975*t3009;
  t3722 = t1009*t3473;
  t3723 = t3720 + t3721 + t3722;
  t3742 = t641*t143*t1241;
  t3744 = t1262*t3009;
  t3745 = t1266*t3473;
  t3747 = t3742 + t3744 + t3745;
  t3725 = -7.e-6*t886;
  t3789 = t1373*t641*t143;
  t3795 = t1378*t3009;
  t3801 = t1380*t3473;
  t3802 = t3789 + t3795 + t3801;
  t3708 = -4.e-6*t886;
  t3854 = 2.8e-11*t915;
  t3761 = 7.e-6*t886;
  p_output1[0]=1.;
  p_output1[1]=t1188*t1280 + t1360*t1389 - 0.038924*(t1046*t1408 + t1280*t1470 + t1389*t1483) - 0.80315*(t1046*t1550 + t1280*t1586 + t1389*t1609) + 0.148705*(t1046*t1675 + t1280*t1719 + t1389*t1743) - 1.*t143*t430*t448 + t597*t651 + t657*t670 + t728*t763 + t837*t865 + t1046*t950;
  p_output1[2]=t1188*t2144 + t1360*t2216 - 0.038924*(t1408*t2073 + t1470*t2144 + t1483*t2216) - 0.80315*(t1550*t2073 + t1586*t2144 + t1609*t2216) + 0.148705*(t1675*t2073 + t1719*t2144 + t1743*t2216) - 1.*t143*t597*t614*t641 - 1.*t430*t617*t641 + t143*t641*t642*t657 + t1913*t728 + t1944*t837 + t2073*t950;
  p_output1[3]=t1188*t2558 + t1360*t2705 - 0.038924*(t1470*t2558 + t1408*t2627 + t1483*t2705) - 0.80315*(t1586*t2558 + t1550*t2627 + t1609*t2705) + 0.148705*(t1719*t2558 + t1675*t2627 + t1743*t2705) + t2457*t597 + t2436*t657 + t2507*t728 + t2492*t837 + t2627*t950;
  p_output1[4]=t1188*t3201 + t1360*t3246 - 0.038924*(t1470*t3201 + t1408*t3226 + t1483*t3246) - 0.80315*(t1586*t3201 + t1550*t3226 + t1609*t3246) + 0.148705*(t1719*t3201 + t1675*t3226 + t1743*t3246) + t2924*(t2900 - 0.15121*t569) + t2457*(t2900 + t577) + t3114*t728 + t3009*t837 + t3226*t950;
  p_output1[5]=t1188*t3546 + t1360*t3573 - 0.038924*(t1470*t3546 + t1483*t3573 + t1408*t3603) - 0.80315*(t1586*t3546 + t1609*t3573 + t1550*t3603) + 0.148705*(t1719*t3546 + t1743*t3573 + t1675*t3603) + t3473*(1.0248489999999998e-12 - 0.038748999993*(t298 + t3365) - 0.28120900000849935*t350 - 2.123459e-6*(t3453 + t363)) + t143*t641*(5.856279999999999e-13 - 0.281209000004*(t240 + t3365) - 0.0387489999948987*t350 - 2.123459e-6*(t3372 + t699)) + t3009*(-1.4640699999999997e-7 - 1.38024835e-16*t350 - 0.281209000004*(t3420 + t363) - 0.038748999993*(t3402 + t699)) + t3603*t950;
  p_output1[6]=t3723*(1.8190549999999993e-12 - 3.6777349999999994e-6*(t1328 + t3708) - 0.038922999986*(t3704 + t902) - 0.5031490000160505*t915) + t3802*(1.0394599999999997e-12 - 3.6777349999999994e-6*(t1167 + t3761) - 0.503149000008*(t3704 + t886) - 0.03892299998790722*t915) + t3747*(-2.598649999999999e-7 - 0.038922999986*(t1167 + t3725) - 0.503149000008*(t1328 + t3729) - 2.3905277499999995e-16*t915) - 0.80315*((t1130 + t3708)*t3747 + t3802*(t3854 + t902) - 1.000000000016*t3723*t915) + 0.148705*(t3723*(t1130 + t3729) - 6.5e-11*t3747*t915 + t3802*(t3725 + t936)) - 0.038924*(t3723*(t3854 + t886) - 1.000000000049*t3802*t915 + t3747*(t3761 + t936));
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

#include "J_u_rearSwingFootHeight2_DiagonalStance2.hh"

namespace DiagonalStance2
{

void J_u_rearSwingFootHeight2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
