/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:10:24 GMT+01:00
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
  double t493;
  double t527;
  double t549;
  double t611;
  double t866;
  double t945;
  double t949;
  double t954;
  double t956;
  double t999;
  double t1204;
  double t1154;
  double t1171;
  double t1212;
  double t666;
  double t790;
  double t1190;
  double t1233;
  double t1252;
  double t1334;
  double t1348;
  double t1353;
  double t1420;
  double t584;
  double t1952;
  double t1960;
  double t2004;
  double t2039;
  double t242;
  double t1757;
  double t1693;
  double t1701;
  double t1705;
  double t1807;
  double t1821;
  double t1846;
  double t2166;
  double t792;
  double t2279;
  double t613;
  double t2038;
  double t2587;
  double t2623;
  double t2701;
  double t1617;
  double t2382;
  double t1445;
  double t2891;
  double t2328;
  double t2332;
  double t2386;
  double t2410;
  double t2416;
  double t2455;
  double t2484;
  double t2504;
  double t2929;
  double t2695;
  double t2696;
  double t2698;
  double t2704;
  double t2735;
  double t2767;
  double t2770;
  double t2813;
  double t3020;
  double t3031;
  double t3053;
  double t3057;
  double t3076;
  double t3113;
  double t3118;
  double t3134;
  double t2547;
  double t3178;
  double t2642;
  double t3279;
  double t3146;
  double t2041;
  double t1010;
  double t1051;
  double t367;
  double t574;
  double t619;
  double t646;
  double t824;
  double t828;
  double t848;
  double t1304;
  double t1320;
  double t1361;
  double t1368;
  double t1446;
  double t1482;
  double t1648;
  double t1670;
  double t1691;
  double t1732;
  double t1743;
  double t1764;
  double t1776;
  double t1778;
  double t1798;
  double t1806;
  double t1944;
  double t2021;
  double t2120;
  double t2125;
  double t2184;
  double t2273;
  double t2274;
  double t3456;
  double t3509;
  double t3526;
  double t3573;
  double t3583;
  double t3593;
  double t2540;
  double t2544;
  double t2560;
  double t2571;
  double t2648;
  double t2651;
  double t2681;
  double t2829;
  double t2888;
  double t2918;
  double t2922;
  double t2935;
  double t2962;
  double t2963;
  double t3175;
  double t3638;
  double t3649;
  double t3698;
  double t3727;
  double t3184;
  double t3755;
  double t3780;
  double t3825;
  double t3863;
  double t3212;
  double t3225;
  double t3904;
  double t3917;
  double t3919;
  double t3926;
  double t3288;
  double t3319;
  double t3360;
  double t3362;
  double t3391;
  double t3398;
  double t3402;
  double t3412;
  double t4175;
  double t4176;
  double t4177;
  double t4185;
  double t4195;
  double t4200;
  double t4207;
  double t4224;
  double t4244;
  double t4289;
  double t4322;
  double t4329;
  double t4423;
  double t4432;
  double t4434;
  double t4590;
  double t4592;
  double t4676;
  double t4680;
  double t4692;
  double t4734;
  double t5020;
  double t5023;
  double t5032;
  double t5215;
  double t5255;
  double t5283;
  double t5288;
  double t5307;
  double t5309;
  double t5320;
  double t5356;
  double t5365;
  double t5397;
  double t5442;
  double t5452;
  double t5455;
  double t5558;
  double t5607;
  double t5676;
  double t5811;
  double t5816;
  double t5819;
  double t5554;
  double t5874;
  double t5779;
  double t5833;
  double t5842;
  double t5846;
  double t5849;
  double t5852;
  double t5853;
  double t5868;
  double t5869;
  double t5870;
  double t5875;
  double t5878;
  double t5886;
  double t5895;
  double t5896;
  double t5897;
  double t5902;
  double t5913;
  double t5951;
  double t6111;
  double t6140;
  double t6141;
  double t6142;
  double t6144;
  double t6155;
  double t6156;
  double t6157;
  double t6158;
  double t6132;
  double t6214;
  double t6215;
  double t6216;
  double t6218;
  double t6226;
  double t6146;
  double t6174;
  double t6170;
  t493 = Cos(var1[16]);
  t527 = -1.*t493;
  t549 = 1. + t527;
  t611 = Sin(var1[16]);
  t866 = Sin(var1[3]);
  t945 = Cos(var1[15]);
  t949 = -1.*t945;
  t954 = 1. + t949;
  t956 = -0.15121*t954;
  t999 = Sin(var1[15]);
  t1204 = Cos(var1[3]);
  t1154 = Cos(var1[5]);
  t1171 = Sin(var1[4]);
  t1212 = Sin(var1[5]);
  t666 = -1. + t493;
  t790 = 4.e-6*t666;
  t1190 = t1154*t866*t1171;
  t1233 = t1204*t1212;
  t1252 = t1190 + t1233;
  t1334 = t1204*t1154;
  t1348 = -1.*t866*t1171*t1212;
  t1353 = t1334 + t1348;
  t1420 = 7.e-6*t549;
  t584 = 2.8e-11*t549;
  t1952 = Cos(var1[17]);
  t1960 = -1.*t1952;
  t2004 = 1. + t1960;
  t2039 = Sin(var1[17]);
  t242 = Cos(var1[4]);
  t1757 = -4.e-6*t611;
  t1693 = -1.*t999*t1252;
  t1701 = t945*t1353;
  t1705 = t1693 + t1701;
  t1807 = t945*t1252;
  t1821 = t999*t1353;
  t1846 = t1807 + t1821;
  t2166 = 2.8e-11*t2004;
  t792 = -7.e-6*t611;
  t2279 = -2.8e-11*t549;
  t613 = -1.*t611;
  t2038 = 7.e-6*t2004;
  t2587 = -1. + t1952;
  t2623 = 4.e-6*t2587;
  t2701 = 4.e-6*t549;
  t1617 = 7.e-6*t611;
  t2382 = -7.e-6*t549;
  t1445 = 4.e-6*t611;
  t2891 = 4.e-6*t2039;
  t2328 = t2279 + t611;
  t2332 = -1.*t242*t2328*t866;
  t2386 = t2382 + t1757;
  t2410 = t2386*t1705;
  t2416 = -1.000000000016*t549;
  t2455 = 1. + t2416;
  t2484 = t2455*t1846;
  t2504 = t2332 + t2410 + t2484;
  t2929 = 7.e-6*t2039;
  t2695 = -1.000000000049*t549;
  t2696 = 1. + t2695;
  t2698 = -1.*t2696*t242*t866;
  t2704 = t2701 + t792;
  t2735 = t2704*t1705;
  t2767 = t2279 + t613;
  t2770 = t2767*t1846;
  t2813 = t2698 + t2735 + t2770;
  t3020 = t2701 + t1617;
  t3031 = -1.*t242*t3020*t866;
  t3053 = -6.5e-11*t549;
  t3057 = 1. + t3053;
  t3076 = t3057*t1705;
  t3113 = t2382 + t1445;
  t3118 = t3113*t1846;
  t3134 = t3031 + t3076 + t3118;
  t2547 = -1.*t2039;
  t3178 = 4.e-6*t2004;
  t2642 = -7.e-6*t2039;
  t3279 = -2.8e-11*t2004;
  t3146 = -7.e-6*t2004;
  t2041 = -4.e-6*t2039;
  t1010 = -0.15121*t999;
  t1051 = t956 + t1010;
  t367 = 1.5843479999999999e-12*var1[16];
  t574 = -0.03874900000889869*t549;
  t619 = t584 + t613;
  t646 = -0.281211000004*t619;
  t824 = t790 + t792;
  t828 = -1.8134809999999998e-6*t824;
  t848 = t367 + t574 + t646 + t828;
  t1304 = 0.15121*t999;
  t1320 = t956 + t1304;
  t1361 = 3.9608699999999997e-7*var1[16];
  t1368 = -1.1787626499999999e-16*t549;
  t1446 = t1420 + t1445;
  t1482 = -0.281211000004*t1446;
  t1648 = t790 + t1617;
  t1670 = -0.038749000006999997*t1648;
  t1691 = t1361 + t1368 + t1482 + t1670;
  t1732 = -2.7726089999999997e-12*var1[16];
  t1743 = -0.2812110000084994*t549;
  t1764 = t1420 + t1757;
  t1776 = -1.8134809999999998e-6*t1764;
  t1778 = t584 + t611;
  t1798 = -0.038749000006999997*t1778;
  t1806 = t1732 + t1743 + t1776 + t1798;
  t1944 = -1.9784030000000015e-12*var1[17];
  t2021 = -0.5031510000160505*t2004;
  t2120 = t2038 + t2041;
  t2125 = -3.367757e-6*t2120;
  t2184 = t2166 + t2039;
  t2273 = -0.038575000014*t2184;
  t2274 = t1944 + t2021 + t2125 + t2273;
  t3456 = t1204*t242*t1154*t999;
  t3509 = t945*t1204*t242*t1212;
  t3526 = t3456 + t3509;
  t3573 = -1.*t945*t1204*t242*t1154;
  t3583 = t1204*t242*t999*t1212;
  t3593 = t3573 + t3583;
  t2540 = 1.1305160000000008e-12*var1[17];
  t2544 = -0.03857500001589017*t2004;
  t2560 = t2166 + t2547;
  t2571 = -0.5031510000080001*t2560;
  t2648 = t2623 + t2642;
  t2651 = -3.367757e-6*t2648;
  t2681 = t2540 + t2544 + t2571 + t2651;
  t2829 = 2.826290000000002e-7*var1[17];
  t2888 = -2.18904205e-16*t2004;
  t2918 = t2038 + t2891;
  t2922 = -0.5031510000080001*t2918;
  t2935 = t2623 + t2929;
  t2962 = -0.038575000014*t2935;
  t2963 = t2829 + t2888 + t2922 + t2962;
  t3175 = t3146 + t2891;
  t3638 = -1.*t1204*t2328*t1171;
  t3649 = t2386*t3526;
  t3698 = t2455*t3593;
  t3727 = t3638 + t3649 + t3698;
  t3184 = t3178 + t2929;
  t3755 = -1.*t2696*t1204*t1171;
  t3780 = t2704*t3526;
  t3825 = t2767*t3593;
  t3863 = t3755 + t3780 + t3825;
  t3212 = -6.5e-11*t2004;
  t3225 = 1. + t3212;
  t3904 = -1.*t1204*t3020*t1171;
  t3917 = t3057*t3526;
  t3919 = t3113*t3593;
  t3926 = t3904 + t3917 + t3919;
  t3288 = t3279 + t2547;
  t3319 = -1.000000000049*t2004;
  t3360 = 1. + t3319;
  t3362 = t3178 + t2642;
  t3391 = -1.000000000016*t2004;
  t3398 = 1. + t3391;
  t3402 = t3279 + t2039;
  t3412 = t3146 + t2041;
  t4175 = t1204*t1154*t1171;
  t4176 = -1.*t866*t1212;
  t4177 = t4175 + t4176;
  t4185 = t1154*t866;
  t4195 = t1204*t1171*t1212;
  t4200 = t4185 + t4195;
  t4207 = t999*t4177;
  t4224 = t945*t4200;
  t4244 = t4207 + t4224;
  t4289 = t945*t4177;
  t4322 = -1.*t999*t4200;
  t4329 = t4289 + t4322;
  t4423 = t3113*t4244;
  t4432 = t3057*t4329;
  t4434 = t4423 + t4432;
  t4590 = t2767*t4244;
  t4592 = t2704*t4329;
  t4676 = t4590 + t4592;
  t4680 = t2455*t4244;
  t4692 = t2386*t4329;
  t4734 = t4680 + t4692;
  t5020 = -1.*t1204*t1154*t1171;
  t5023 = t866*t1212;
  t5032 = t5020 + t5023;
  t5215 = -1.*t999*t5032;
  t5255 = t5215 + t4224;
  t5283 = -1.*t945*t5032;
  t5288 = t5283 + t4322;
  t5307 = t3113*t5255;
  t5309 = t3057*t5288;
  t5320 = t5307 + t5309;
  t5356 = t2767*t5255;
  t5365 = t2704*t5288;
  t5397 = t5356 + t5365;
  t5442 = t2455*t5255;
  t5452 = t2386*t5288;
  t5455 = t5442 + t5452;
  t5558 = 2.8e-11*t611;
  t5607 = 7.e-6*t493;
  t5676 = 4.e-6*t493;
  t5811 = t945*t5032;
  t5816 = t999*t4200;
  t5819 = t5811 + t5816;
  t5554 = -7.e-6*t493;
  t5874 = -2.8e-11*t611;
  t5779 = -4.e-6*t493;
  t5833 = t5607 + t1445;
  t5842 = t1204*t242*t5833;
  t5846 = -6.5e-11*t611*t5255;
  t5849 = t5676 + t792;
  t5852 = t5849*t5819;
  t5853 = t5842 + t5846 + t5852;
  t5868 = -1.000000000049*t1204*t242*t611;
  t5869 = t5554 + t1445;
  t5870 = t5869*t5255;
  t5875 = t527 + t5874;
  t5878 = t5875*t5819;
  t5886 = t5868 + t5870 + t5878;
  t5895 = t493 + t5874;
  t5896 = t1204*t242*t5895;
  t5897 = t5779 + t792;
  t5902 = t5897*t5255;
  t5913 = -1.000000000016*t611*t5819;
  t5951 = t5896 + t5902 + t5913;
  t6111 = 2.8e-11*t2039;
  t6140 = t1204*t242*t2328;
  t6141 = t2386*t5255;
  t6142 = t2455*t5819;
  t6144 = t6140 + t6141 + t6142;
  t6155 = t2696*t1204*t242;
  t6156 = t2704*t5255;
  t6157 = t2767*t5819;
  t6158 = t6155 + t6156 + t6157;
  t6132 = -4.e-6*t1952;
  t6214 = t1204*t242*t3020;
  t6215 = t3057*t5255;
  t6216 = t3113*t5819;
  t6218 = t6214 + t6215 + t6216;
  t6226 = -2.8e-11*t2039;
  t6146 = -7.e-6*t1952;
  t6174 = 4.e-6*t1952;
  t6170 = 7.e-6*t1952;
  p_output1[0]=1.;
  p_output1[1]=t1051*t1252 + t1320*t1353 + t1691*t1705 + t1806*t1846 + t2274*t2504 + t2681*t2813 + t2963*t3134 - 0.148715*(t2504*t3175 + t2813*t3184 + t3134*t3225) - 0.038576*(t2504*t3288 + t2813*t3360 + t3134*t3362) - 0.80315*(t2504*t3398 + t2813*t3402 + t3134*t3412) - 1.*t242*t848*t866;
  p_output1[2]=-1.*t1051*t1154*t1204*t242 + t1204*t1212*t1320*t242 + t1691*t3526 + t1806*t3593 + t2274*t3727 + t2681*t3863 + t2963*t3926 - 0.148715*(t3175*t3727 + t3184*t3863 + t3225*t3926) - 0.038576*(t3288*t3727 + t3360*t3863 + t3362*t3926) - 0.80315*(t3398*t3727 + t3402*t3863 + t3412*t3926) - 1.*t1171*t1204*t848;
  p_output1[3]=t1320*t4177 + t1051*t4200 + t1806*t4244 + t1691*t4329 + t2963*t4434 + t2681*t4676 + t2274*t4734 - 0.148715*(t3225*t4434 + t3184*t4676 + t3175*t4734) - 0.038576*(t3362*t4434 + t3360*t4676 + t3288*t4734) - 0.80315*(t3412*t4434 + t3402*t4676 + t3398*t4734);
  p_output1[4]=t1806*t5255 + t1691*t5288 + t2963*t5320 + t2681*t5397 + t2274*t5455 - 0.148715*(t3225*t5320 + t3184*t5397 + t3175*t5455) - 0.038576*(t3362*t5320 + t3360*t5397 + t3288*t5455) - 0.80315*(t3412*t5320 + t3402*t5397 + t3398*t5455) + t5032*(t1010 - 0.15121*t945) + t4200*(t1010 + 0.15121*t945);
  p_output1[5]=t2963*t5853 + t2681*t5886 + t2274*t5951 - 0.148715*(t3225*t5853 + t3184*t5886 + t3175*t5951) - 0.038576*(t3362*t5853 + t3360*t5886 + t3288*t5951) - 0.80315*(t3412*t5853 + t3402*t5886 + t3398*t5951) + t5819*(-2.7726089999999997e-12 - 0.038749000006999997*(t493 + t5558) - 1.8134809999999998e-6*(t1617 + t5779) - 0.2812110000084994*t611) + t1204*t242*(1.5843479999999999e-12 - 1.8134809999999998e-6*(t1757 + t5554) - 0.281211000004*(t527 + t5558) - 0.03874900000889869*t611) + t5255*(3.9608699999999997e-7 - 0.038749000006999997*(t1757 + t5607) - 0.281211000004*(t1617 + t5676) - 1.1787626499999999e-16*t611);
  p_output1[6]=(-1.9784030000000015e-12 - 0.5031510000160505*t2039 - 0.038575000014*(t1952 + t6111) - 3.367757e-6*(t2929 + t6132))*t6144 + (1.1305160000000008e-12 - 0.03857500001589017*t2039 - 0.5031510000080001*(t1960 + t6111) - 3.367757e-6*(t2041 + t6146))*t6158 + (2.826290000000002e-7 - 2.18904205e-16*t2039 - 0.038575000014*(t2041 + t6170) - 0.5031510000080001*(t2929 + t6174))*t6218 - 0.148715*(t6158*(t2891 + t6170) + t6144*(t2642 + t6174) - 6.5e-11*t2039*t6218) - 0.80315*(-1.000000000016*t2039*t6144 + (t2642 + t6132)*t6218 + t6158*(t1952 + t6226)) - 0.038576*(-1.000000000049*t2039*t6158 + (t2891 + t6146)*t6218 + t6144*(t1960 + t6226));
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
