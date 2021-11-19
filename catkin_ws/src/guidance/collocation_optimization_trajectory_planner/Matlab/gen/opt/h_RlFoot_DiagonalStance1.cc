/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:27:06 GMT+01:00
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
  double t241;
  double t242;
  double t266;
  double t327;
  double t13;
  double t32;
  double t43;
  double t46;
  double t104;
  double t124;
  double t282;
  double t14;
  double t390;
  double t354;
  double t440;
  double t564;
  double t570;
  double t574;
  double t589;
  double t499;
  double t378;
  double t507;
  double t459;
  double t481;
  double t482;
  double t527;
  double t530;
  double t531;
  double t609;
  double t416;
  double t640;
  double t441;
  double t691;
  double t588;
  double t710;
  double t713;
  double t331;
  double t622;
  double t623;
  double t626;
  double t641;
  double t664;
  double t673;
  double t675;
  double t681;
  double t684;
  double t803;
  double t723;
  double t728;
  double t732;
  double t752;
  double t753;
  double t767;
  double t772;
  double t779;
  double t831;
  double t832;
  double t835;
  double t838;
  double t856;
  double t857;
  double t868;
  double t869;
  double t613;
  double t877;
  double t594;
  double t955;
  double t703;
  double t887;
  double t890;
  double t695;
  double t204;
  double t270;
  double t336;
  double t347;
  double t356;
  double t360;
  double t372;
  double t94;
  double t159;
  double t1040;
  double t383;
  double t385;
  double t1060;
  double t399;
  double t408;
  double t422;
  double t428;
  double t443;
  double t446;
  double t447;
  double t1056;
  double t1069;
  double t1089;
  double t1098;
  double t1115;
  double t1121;
  double t490;
  double t492;
  double t502;
  double t506;
  double t512;
  double t517;
  double t523;
  double t544;
  double t576;
  double t596;
  double t604;
  double t615;
  double t620;
  double t621;
  double t1131;
  double t1134;
  double t1142;
  double t1159;
  double t1166;
  double t1169;
  double t686;
  double t688;
  double t699;
  double t700;
  double t705;
  double t706;
  double t707;
  double t786;
  double t802;
  double t812;
  double t813;
  double t814;
  double t818;
  double t822;
  double t879;
  double t1178;
  double t1181;
  double t1190;
  double t1203;
  double t891;
  double t1211;
  double t1213;
  double t1222;
  double t1223;
  double t916;
  double t928;
  double t1225;
  double t1230;
  double t1237;
  double t1241;
  double t944;
  double t949;
  double t958;
  double t972;
  double t994;
  double t1006;
  double t1008;
  double t1019;
  double t1329;
  double t1330;
  double t1338;
  double t1348;
  double t1349;
  double t1350;
  double t1360;
  double t1372;
  double t1373;
  double t1377;
  double t1384;
  double t1391;
  double t1396;
  double t1413;
  double t1418;
  double t1421;
  double t1432;
  double t1437;
  double t1442;
  double t1446;
  double t1460;
  double t1461;
  double t1464;
  double t1481;
  t241 = Cos(var1[13]);
  t242 = -1.*t241;
  t266 = 1. + t242;
  t327 = Sin(var1[13]);
  t13 = Cos(var1[4]);
  t32 = Cos(var1[12]);
  t43 = -1.*t32;
  t46 = 1. + t43;
  t104 = Sin(var1[12]);
  t124 = 0.15121*t104;
  t282 = 4.e-6*t266;
  t14 = Cos(var1[5]);
  t390 = Sin(var1[5]);
  t354 = -2.8e-11*t266;
  t440 = 7.e-6*t266;
  t564 = Cos(var1[14]);
  t570 = -1.*t564;
  t574 = 1. + t570;
  t589 = Sin(var1[14]);
  t499 = -1.*t327;
  t378 = Sin(var1[4]);
  t507 = -4.e-6*t327;
  t459 = -1.*t13*t14*t104;
  t481 = -1.*t32*t13*t390;
  t482 = t459 + t481;
  t527 = t32*t13*t14;
  t530 = -1.*t13*t104*t390;
  t531 = t527 + t530;
  t609 = 7.e-6*t574;
  t416 = -7.e-6*t327;
  t640 = -7.e-6*t266;
  t441 = 4.e-6*t327;
  t691 = 4.e-6*t574;
  t588 = -2.8e-11*t574;
  t710 = -1. + t241;
  t713 = 4.e-6*t710;
  t331 = 7.e-6*t327;
  t622 = 2.8e-11*t266;
  t623 = t622 + t499;
  t626 = t623*t378;
  t641 = t640 + t507;
  t664 = t641*t482;
  t673 = -1.000000000016*t266;
  t675 = 1. + t673;
  t681 = t675*t531;
  t684 = t626 + t664 + t681;
  t803 = 7.e-6*t589;
  t723 = t713 + t416;
  t728 = t723*t378;
  t732 = -6.5e-11*t266;
  t752 = 1. + t732;
  t753 = t752*t482;
  t767 = t640 + t441;
  t772 = t767*t531;
  t779 = t728 + t753 + t772;
  t831 = -1.000000000049*t266;
  t832 = 1. + t831;
  t835 = t832*t378;
  t838 = t713 + t331;
  t856 = t838*t482;
  t857 = t622 + t327;
  t868 = t857*t531;
  t869 = t835 + t856 + t868;
  t613 = -4.e-6*t589;
  t877 = 2.8e-11*t574;
  t594 = -1.*t589;
  t955 = -7.e-6*t574;
  t703 = 4.e-6*t589;
  t887 = -1. + t564;
  t890 = 4.e-6*t887;
  t695 = -7.e-6*t589;
  t204 = 5.856279999999999e-13*var1[13];
  t270 = -0.0387489999948987*t266;
  t336 = t282 + t331;
  t347 = -2.123459e-6*t336;
  t356 = t354 + t327;
  t360 = -0.281209000004*t356;
  t372 = t204 + t270 + t347 + t360;
  t94 = -0.15121*t46;
  t159 = t94 + t124;
  t1040 = Sin(var1[3]);
  t383 = 0.15121*t46;
  t385 = t383 + t124;
  t1060 = Cos(var1[3]);
  t399 = -1.4640699999999997e-7*var1[13];
  t408 = -1.38024835e-16*t266;
  t422 = t282 + t416;
  t428 = -0.038748999993*t422;
  t443 = t440 + t441;
  t446 = -0.281209000004*t443;
  t447 = t399 + t408 + t428 + t446;
  t1056 = t14*t1040*t378;
  t1069 = t1060*t390;
  t1089 = t1056 + t1069;
  t1098 = t1060*t14;
  t1115 = -1.*t1040*t378*t390;
  t1121 = t1098 + t1115;
  t490 = 1.0248489999999998e-12*var1[13];
  t492 = -0.28120900000849935*t266;
  t502 = t354 + t499;
  t506 = -0.038748999993*t502;
  t512 = t440 + t507;
  t517 = -2.123459e-6*t512;
  t523 = t490 + t492 + t506 + t517;
  t544 = 1.8190549999999993e-12*var1[14];
  t576 = -0.5031490000160505*t574;
  t596 = t588 + t594;
  t604 = -0.038922999986*t596;
  t615 = t609 + t613;
  t620 = -3.6777349999999994e-6*t615;
  t621 = t544 + t576 + t604 + t620;
  t1131 = -1.*t104*t1089;
  t1134 = t32*t1121;
  t1142 = t1131 + t1134;
  t1159 = t32*t1089;
  t1166 = t104*t1121;
  t1169 = t1159 + t1166;
  t686 = -2.598649999999999e-7*var1[14];
  t688 = -2.3905277499999995e-16*t574;
  t699 = t691 + t695;
  t700 = -0.038922999986*t699;
  t705 = t609 + t703;
  t706 = -0.503149000008*t705;
  t707 = t686 + t688 + t700 + t706;
  t786 = 1.0394599999999997e-12*var1[14];
  t802 = -0.03892299998790722*t574;
  t812 = t691 + t803;
  t813 = -3.6777349999999994e-6*t812;
  t814 = t588 + t589;
  t818 = -0.503149000008*t814;
  t822 = t786 + t802 + t813 + t818;
  t879 = t877 + t589;
  t1178 = -1.*t13*t623*t1040;
  t1181 = t641*t1142;
  t1190 = t675*t1169;
  t1203 = t1178 + t1181 + t1190;
  t891 = t890 + t803;
  t1211 = -1.*t13*t723*t1040;
  t1213 = t752*t1142;
  t1222 = t767*t1169;
  t1223 = t1211 + t1213 + t1222;
  t916 = -1.000000000049*t574;
  t928 = 1. + t916;
  t1225 = -1.*t832*t13*t1040;
  t1230 = t838*t1142;
  t1237 = t857*t1169;
  t1241 = t1225 + t1230 + t1237;
  t944 = -1.000000000016*t574;
  t949 = 1. + t944;
  t958 = t955 + t613;
  t972 = t877 + t594;
  t994 = t955 + t703;
  t1006 = -6.5e-11*t574;
  t1008 = 1. + t1006;
  t1019 = t890 + t695;
  t1329 = -1.*t1060*t14*t378;
  t1330 = t1040*t390;
  t1338 = t1329 + t1330;
  t1348 = t14*t1040;
  t1349 = t1060*t378*t390;
  t1350 = t1348 + t1349;
  t1360 = -1.*t104*t1338;
  t1372 = t32*t1350;
  t1373 = t1360 + t1372;
  t1377 = t32*t1338;
  t1384 = t104*t1350;
  t1391 = t1377 + t1384;
  t1396 = t1060*t13*t623;
  t1413 = t641*t1373;
  t1418 = t675*t1391;
  t1421 = t1396 + t1413 + t1418;
  t1432 = t1060*t13*t723;
  t1437 = t752*t1373;
  t1442 = t767*t1391;
  t1446 = t1432 + t1437 + t1442;
  t1460 = t832*t1060*t13;
  t1461 = t838*t1373;
  t1464 = t857*t1391;
  t1481 = t1460 + t1461 + t1464;
  p_output1[0]=t13*t14*t159 + t372*t378 - 1.*t13*t385*t390 + t447*t482 + t523*t531 + t621*t684 + t707*t779 + t822*t869 - 0.038924*(t684*t879 + t779*t891 + t869*t928) - 0.80315*(t684*t949 + t779*t958 + t869*t972) + 0.148705*(t1008*t779 + t1019*t869 + t684*t994) + var1[0] - 1.*var2[0];
  p_output1[1]=t1089*t159 - 1.*t1040*t13*t372 + t1121*t385 + t1142*t447 + t1169*t523 + t1203*t621 + t1223*t707 + t1241*t822 - 0.038924*(t1203*t879 + t1223*t891 + t1241*t928) - 0.80315*(t1203*t949 + t1223*t958 + t1241*t972) + 0.148705*(t1008*t1223 + t1019*t1241 + t1203*t994) + var1[1] - 1.*var2[1];
  p_output1[2]=t1338*t159 + t1060*t13*t372 + t1350*t385 + t1373*t447 + t1391*t523 + t1421*t621 + t1446*t707 + t1481*t822 - 0.038924*(t1421*t879 + t1446*t891 + t1481*t928) - 0.80315*(t1421*t949 + t1446*t958 + t1481*t972) + 0.148705*(t1008*t1446 + t1019*t1481 + t1421*t994) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance1.hh"

namespace DiagonalStance1
{

void h_RlFoot_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
