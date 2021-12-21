/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:15:16 GMT+01:00
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
  double t70;
  double t76;
  double t79;
  double t91;
  double t20;
  double t42;
  double t46;
  double t49;
  double t53;
  double t55;
  double t90;
  double t21;
  double t184;
  double t112;
  double t210;
  double t373;
  double t379;
  double t381;
  double t395;
  double t296;
  double t155;
  double t319;
  double t267;
  double t271;
  double t273;
  double t342;
  double t346;
  double t351;
  double t413;
  double t196;
  double t462;
  double t213;
  double t529;
  double t393;
  double t590;
  double t604;
  double t99;
  double t436;
  double t440;
  double t451;
  double t467;
  double t471;
  double t482;
  double t488;
  double t499;
  double t513;
  double t709;
  double t607;
  double t622;
  double t626;
  double t634;
  double t658;
  double t668;
  double t673;
  double t675;
  double t768;
  double t780;
  double t785;
  double t794;
  double t798;
  double t810;
  double t814;
  double t821;
  double t414;
  double t840;
  double t401;
  double t964;
  double t545;
  double t849;
  double t856;
  double t530;
  double t65;
  double t88;
  double t103;
  double t109;
  double t115;
  double t121;
  double t144;
  double t52;
  double t56;
  double t1015;
  double t167;
  double t172;
  double t1020;
  double t188;
  double t189;
  double t203;
  double t208;
  double t226;
  double t245;
  double t246;
  double t1019;
  double t1023;
  double t1026;
  double t1033;
  double t1035;
  double t1046;
  double t288;
  double t289;
  double t306;
  double t314;
  double t322;
  double t328;
  double t341;
  double t372;
  double t387;
  double t408;
  double t411;
  double t423;
  double t425;
  double t427;
  double t1063;
  double t1075;
  double t1092;
  double t1112;
  double t1113;
  double t1123;
  double t520;
  double t523;
  double t537;
  double t543;
  double t559;
  double t566;
  double t567;
  double t689;
  double t703;
  double t712;
  double t721;
  double t733;
  double t754;
  double t762;
  double t841;
  double t1131;
  double t1132;
  double t1137;
  double t1142;
  double t881;
  double t1150;
  double t1162;
  double t1180;
  double t1189;
  double t898;
  double t903;
  double t1194;
  double t1209;
  double t1213;
  double t1228;
  double t944;
  double t954;
  double t965;
  double t977;
  double t994;
  double t999;
  double t1000;
  double t1003;
  double t1725;
  double t1742;
  double t1758;
  double t1813;
  double t1820;
  double t1868;
  double t1898;
  double t1901;
  double t1941;
  double t1965;
  double t1996;
  double t1999;
  double t2043;
  double t2051;
  double t2064;
  double t2068;
  double t2147;
  double t2157;
  double t2166;
  double t2169;
  double t2212;
  double t2226;
  double t2261;
  double t2267;
  t70 = Cos(var1[13]);
  t76 = -1.*t70;
  t79 = 1. + t76;
  t91 = Sin(var1[13]);
  t20 = Cos(var1[4]);
  t42 = Cos(var1[12]);
  t46 = -1.*t42;
  t49 = 1. + t46;
  t53 = Sin(var1[12]);
  t55 = 0.15121*t53;
  t90 = 4.e-6*t79;
  t21 = Cos(var1[5]);
  t184 = Sin(var1[5]);
  t112 = -2.8e-11*t79;
  t210 = 7.e-6*t79;
  t373 = Cos(var1[14]);
  t379 = -1.*t373;
  t381 = 1. + t379;
  t395 = Sin(var1[14]);
  t296 = -1.*t91;
  t155 = Sin(var1[4]);
  t319 = -4.e-6*t91;
  t267 = -1.*t20*t21*t53;
  t271 = -1.*t42*t20*t184;
  t273 = t267 + t271;
  t342 = t42*t20*t21;
  t346 = -1.*t20*t53*t184;
  t351 = t342 + t346;
  t413 = 7.e-6*t381;
  t196 = -7.e-6*t91;
  t462 = -7.e-6*t79;
  t213 = 4.e-6*t91;
  t529 = 4.e-6*t381;
  t393 = -2.8e-11*t381;
  t590 = -1. + t70;
  t604 = 4.e-6*t590;
  t99 = 7.e-6*t91;
  t436 = 2.8e-11*t79;
  t440 = t436 + t296;
  t451 = t440*t155;
  t467 = t462 + t319;
  t471 = t467*t273;
  t482 = -1.000000000016*t79;
  t488 = 1. + t482;
  t499 = t488*t351;
  t513 = t451 + t471 + t499;
  t709 = 7.e-6*t395;
  t607 = t604 + t196;
  t622 = t607*t155;
  t626 = -6.5e-11*t79;
  t634 = 1. + t626;
  t658 = t634*t273;
  t668 = t462 + t213;
  t673 = t668*t351;
  t675 = t622 + t658 + t673;
  t768 = -1.000000000049*t79;
  t780 = 1. + t768;
  t785 = t780*t155;
  t794 = t604 + t99;
  t798 = t794*t273;
  t810 = t436 + t91;
  t814 = t810*t351;
  t821 = t785 + t798 + t814;
  t414 = -4.e-6*t395;
  t840 = 2.8e-11*t381;
  t401 = -1.*t395;
  t964 = -7.e-6*t381;
  t545 = 4.e-6*t395;
  t849 = -1. + t373;
  t856 = 4.e-6*t849;
  t530 = -7.e-6*t395;
  t65 = 5.856279999999999e-13*var1[13];
  t88 = -0.0387489999948987*t79;
  t103 = t90 + t99;
  t109 = -2.123459e-6*t103;
  t115 = t112 + t91;
  t121 = -0.281209000004*t115;
  t144 = t65 + t88 + t109 + t121;
  t52 = -0.15121*t49;
  t56 = t52 + t55;
  t1015 = Sin(var1[3]);
  t167 = 0.15121*t49;
  t172 = t167 + t55;
  t1020 = Cos(var1[3]);
  t188 = -1.4640699999999997e-7*var1[13];
  t189 = -1.38024835e-16*t79;
  t203 = t90 + t196;
  t208 = -0.038748999993*t203;
  t226 = t210 + t213;
  t245 = -0.281209000004*t226;
  t246 = t188 + t189 + t208 + t245;
  t1019 = t21*t1015*t155;
  t1023 = t1020*t184;
  t1026 = t1019 + t1023;
  t1033 = t1020*t21;
  t1035 = -1.*t1015*t155*t184;
  t1046 = t1033 + t1035;
  t288 = 1.0248489999999998e-12*var1[13];
  t289 = -0.28120900000849935*t79;
  t306 = t112 + t296;
  t314 = -0.038748999993*t306;
  t322 = t210 + t319;
  t328 = -2.123459e-6*t322;
  t341 = t288 + t289 + t314 + t328;
  t372 = 1.8190549999999993e-12*var1[14];
  t387 = -0.5031490000160505*t381;
  t408 = t393 + t401;
  t411 = -0.038922999986*t408;
  t423 = t413 + t414;
  t425 = -3.6777349999999994e-6*t423;
  t427 = t372 + t387 + t411 + t425;
  t1063 = -1.*t53*t1026;
  t1075 = t42*t1046;
  t1092 = t1063 + t1075;
  t1112 = t42*t1026;
  t1113 = t53*t1046;
  t1123 = t1112 + t1113;
  t520 = -2.598649999999999e-7*var1[14];
  t523 = -2.3905277499999995e-16*t381;
  t537 = t529 + t530;
  t543 = -0.038922999986*t537;
  t559 = t413 + t545;
  t566 = -0.503149000008*t559;
  t567 = t520 + t523 + t543 + t566;
  t689 = 1.0394599999999997e-12*var1[14];
  t703 = -0.03892299998790722*t381;
  t712 = t529 + t709;
  t721 = -3.6777349999999994e-6*t712;
  t733 = t393 + t395;
  t754 = -0.503149000008*t733;
  t762 = t689 + t703 + t721 + t754;
  t841 = t840 + t395;
  t1131 = -1.*t20*t440*t1015;
  t1132 = t467*t1092;
  t1137 = t488*t1123;
  t1142 = t1131 + t1132 + t1137;
  t881 = t856 + t709;
  t1150 = -1.*t20*t607*t1015;
  t1162 = t634*t1092;
  t1180 = t668*t1123;
  t1189 = t1150 + t1162 + t1180;
  t898 = -1.000000000049*t381;
  t903 = 1. + t898;
  t1194 = -1.*t780*t20*t1015;
  t1209 = t794*t1092;
  t1213 = t810*t1123;
  t1228 = t1194 + t1209 + t1213;
  t944 = -1.000000000016*t381;
  t954 = 1. + t944;
  t965 = t964 + t414;
  t977 = t840 + t401;
  t994 = t964 + t545;
  t999 = -6.5e-11*t381;
  t1000 = 1. + t999;
  t1003 = t856 + t530;
  t1725 = -1.*t1020*t21*t155;
  t1742 = t1015*t184;
  t1758 = t1725 + t1742;
  t1813 = t21*t1015;
  t1820 = t1020*t155*t184;
  t1868 = t1813 + t1820;
  t1898 = -1.*t53*t1758;
  t1901 = t42*t1868;
  t1941 = t1898 + t1901;
  t1965 = t42*t1758;
  t1996 = t53*t1868;
  t1999 = t1965 + t1996;
  t2043 = t1020*t20*t440;
  t2051 = t467*t1941;
  t2064 = t488*t1999;
  t2068 = t2043 + t2051 + t2064;
  t2147 = t1020*t20*t607;
  t2157 = t634*t1941;
  t2166 = t668*t1999;
  t2169 = t2147 + t2157 + t2166;
  t2212 = t780*t1020*t20;
  t2226 = t794*t1941;
  t2261 = t810*t1999;
  t2267 = t2212 + t2226 + t2261;
  p_output1[0]=t144*t155 - 1.*t172*t184*t20 + t246*t273 + t341*t351 + t427*t513 + t20*t21*t56 + t567*t675 + t762*t821 - 0.038924*(t513*t841 + t675*t881 + t821*t903) - 0.80315*(t513*t954 + t675*t965 + t821*t977) + 0.148705*(t1000*t675 + t1003*t821 + t513*t994) + var1[0] - 1.*var2[0];
  p_output1[1]=t1046*t172 - 1.*t1015*t144*t20 + t1092*t246 + t1123*t341 + t1142*t427 + t1026*t56 + t1189*t567 + t1228*t762 - 0.038924*(t1142*t841 + t1189*t881 + t1228*t903) - 0.80315*(t1142*t954 + t1189*t965 + t1228*t977) + 0.148705*(t1000*t1189 + t1003*t1228 + t1142*t994) + var1[1] - 1.*var2[1];
  p_output1[2]=t172*t1868 + t1020*t144*t20 + t1941*t246 + t1999*t341 + t2068*t427 + t1758*t56 + t2169*t567 + t2267*t762 - 0.038924*(t2068*t841 + t2169*t881 + t2267*t903) - 0.80315*(t2068*t954 + t2169*t965 + t2267*t977) + 0.148705*(t1000*t2169 + t1003*t2267 + t2068*t994) + var1[2] - 1.*var2[2];
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "h_RlFoot_ParallelStance2.hh"

namespace ParallelStance2
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
