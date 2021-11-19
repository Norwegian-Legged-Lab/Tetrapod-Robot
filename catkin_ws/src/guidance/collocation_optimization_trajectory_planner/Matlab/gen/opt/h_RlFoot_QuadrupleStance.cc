/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:59 GMT+01:00
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
  double t80;
  double t84;
  double t85;
  double t98;
  double t13;
  double t43;
  double t51;
  double t52;
  double t70;
  double t71;
  double t96;
  double t40;
  double t169;
  double t126;
  double t194;
  double t315;
  double t316;
  double t337;
  double t348;
  double t264;
  double t147;
  double t279;
  double t230;
  double t243;
  double t245;
  double t285;
  double t291;
  double t293;
  double t363;
  double t189;
  double t416;
  double t198;
  double t490;
  double t347;
  double t536;
  double t543;
  double t100;
  double t392;
  double t409;
  double t413;
  double t419;
  double t424;
  double t426;
  double t440;
  double t444;
  double t449;
  double t646;
  double t548;
  double t552;
  double t555;
  double t586;
  double t592;
  double t601;
  double t618;
  double t626;
  double t681;
  double t682;
  double t683;
  double t686;
  double t695;
  double t697;
  double t707;
  double t718;
  double t365;
  double t743;
  double t349;
  double t826;
  double t517;
  double t764;
  double t765;
  double t499;
  double t79;
  double t87;
  double t110;
  double t111;
  double t129;
  double t130;
  double t136;
  double t69;
  double t72;
  double t931;
  double t158;
  double t164;
  double t950;
  double t176;
  double t178;
  double t190;
  double t193;
  double t208;
  double t212;
  double t224;
  double t947;
  double t956;
  double t959;
  double t979;
  double t990;
  double t1002;
  double t262;
  double t263;
  double t269;
  double t271;
  double t280;
  double t283;
  double t284;
  double t313;
  double t340;
  double t351;
  double t352;
  double t377;
  double t378;
  double t384;
  double t1007;
  double t1016;
  double t1023;
  double t1060;
  double t1069;
  double t1070;
  double t471;
  double t473;
  double t507;
  double t514;
  double t525;
  double t528;
  double t530;
  double t634;
  double t635;
  double t648;
  double t662;
  double t668;
  double t670;
  double t675;
  double t748;
  double t1080;
  double t1096;
  double t1100;
  double t1103;
  double t769;
  double t1122;
  double t1132;
  double t1134;
  double t1143;
  double t777;
  double t790;
  double t1165;
  double t1170;
  double t1183;
  double t1189;
  double t810;
  double t814;
  double t827;
  double t836;
  double t859;
  double t864;
  double t872;
  double t891;
  double t1388;
  double t1403;
  double t1405;
  double t1423;
  double t1437;
  double t1439;
  double t1506;
  double t1508;
  double t1509;
  double t1526;
  double t1529;
  double t1539;
  double t1557;
  double t1568;
  double t1570;
  double t1572;
  double t1578;
  double t1580;
  double t1586;
  double t1589;
  double t1595;
  double t1611;
  double t1617;
  double t1618;
  t80 = Cos(var1[13]);
  t84 = -1.*t80;
  t85 = 1. + t84;
  t98 = Sin(var1[13]);
  t13 = Cos(var1[4]);
  t43 = Cos(var1[12]);
  t51 = -1.*t43;
  t52 = 1. + t51;
  t70 = Sin(var1[12]);
  t71 = 0.15121*t70;
  t96 = 4.e-6*t85;
  t40 = Cos(var1[5]);
  t169 = Sin(var1[5]);
  t126 = -2.8e-11*t85;
  t194 = 7.e-6*t85;
  t315 = Cos(var1[14]);
  t316 = -1.*t315;
  t337 = 1. + t316;
  t348 = Sin(var1[14]);
  t264 = -1.*t98;
  t147 = Sin(var1[4]);
  t279 = -4.e-6*t98;
  t230 = -1.*t13*t40*t70;
  t243 = -1.*t43*t13*t169;
  t245 = t230 + t243;
  t285 = t43*t13*t40;
  t291 = -1.*t13*t70*t169;
  t293 = t285 + t291;
  t363 = 7.e-6*t337;
  t189 = -7.e-6*t98;
  t416 = -7.e-6*t85;
  t198 = 4.e-6*t98;
  t490 = 4.e-6*t337;
  t347 = -2.8e-11*t337;
  t536 = -1. + t80;
  t543 = 4.e-6*t536;
  t100 = 7.e-6*t98;
  t392 = 2.8e-11*t85;
  t409 = t392 + t264;
  t413 = t409*t147;
  t419 = t416 + t279;
  t424 = t419*t245;
  t426 = -1.000000000016*t85;
  t440 = 1. + t426;
  t444 = t440*t293;
  t449 = t413 + t424 + t444;
  t646 = 7.e-6*t348;
  t548 = t543 + t189;
  t552 = t548*t147;
  t555 = -6.5e-11*t85;
  t586 = 1. + t555;
  t592 = t586*t245;
  t601 = t416 + t198;
  t618 = t601*t293;
  t626 = t552 + t592 + t618;
  t681 = -1.000000000049*t85;
  t682 = 1. + t681;
  t683 = t682*t147;
  t686 = t543 + t100;
  t695 = t686*t245;
  t697 = t392 + t98;
  t707 = t697*t293;
  t718 = t683 + t695 + t707;
  t365 = -4.e-6*t348;
  t743 = 2.8e-11*t337;
  t349 = -1.*t348;
  t826 = -7.e-6*t337;
  t517 = 4.e-6*t348;
  t764 = -1. + t315;
  t765 = 4.e-6*t764;
  t499 = -7.e-6*t348;
  t79 = 5.856279999999999e-13*var1[13];
  t87 = -0.0387489999948987*t85;
  t110 = t96 + t100;
  t111 = -2.123459e-6*t110;
  t129 = t126 + t98;
  t130 = -0.281209000004*t129;
  t136 = t79 + t87 + t111 + t130;
  t69 = -0.15121*t52;
  t72 = t69 + t71;
  t931 = Sin(var1[3]);
  t158 = 0.15121*t52;
  t164 = t158 + t71;
  t950 = Cos(var1[3]);
  t176 = -1.4640699999999997e-7*var1[13];
  t178 = -1.38024835e-16*t85;
  t190 = t96 + t189;
  t193 = -0.038748999993*t190;
  t208 = t194 + t198;
  t212 = -0.281209000004*t208;
  t224 = t176 + t178 + t193 + t212;
  t947 = t40*t931*t147;
  t956 = t950*t169;
  t959 = t947 + t956;
  t979 = t950*t40;
  t990 = -1.*t931*t147*t169;
  t1002 = t979 + t990;
  t262 = 1.0248489999999998e-12*var1[13];
  t263 = -0.28120900000849935*t85;
  t269 = t126 + t264;
  t271 = -0.038748999993*t269;
  t280 = t194 + t279;
  t283 = -2.123459e-6*t280;
  t284 = t262 + t263 + t271 + t283;
  t313 = 1.8190549999999993e-12*var1[14];
  t340 = -0.5031490000160505*t337;
  t351 = t347 + t349;
  t352 = -0.038922999986*t351;
  t377 = t363 + t365;
  t378 = -3.6777349999999994e-6*t377;
  t384 = t313 + t340 + t352 + t378;
  t1007 = -1.*t70*t959;
  t1016 = t43*t1002;
  t1023 = t1007 + t1016;
  t1060 = t43*t959;
  t1069 = t70*t1002;
  t1070 = t1060 + t1069;
  t471 = -2.598649999999999e-7*var1[14];
  t473 = -2.3905277499999995e-16*t337;
  t507 = t490 + t499;
  t514 = -0.038922999986*t507;
  t525 = t363 + t517;
  t528 = -0.503149000008*t525;
  t530 = t471 + t473 + t514 + t528;
  t634 = 1.0394599999999997e-12*var1[14];
  t635 = -0.03892299998790722*t337;
  t648 = t490 + t646;
  t662 = -3.6777349999999994e-6*t648;
  t668 = t347 + t348;
  t670 = -0.503149000008*t668;
  t675 = t634 + t635 + t662 + t670;
  t748 = t743 + t348;
  t1080 = -1.*t13*t409*t931;
  t1096 = t419*t1023;
  t1100 = t440*t1070;
  t1103 = t1080 + t1096 + t1100;
  t769 = t765 + t646;
  t1122 = -1.*t13*t548*t931;
  t1132 = t586*t1023;
  t1134 = t601*t1070;
  t1143 = t1122 + t1132 + t1134;
  t777 = -1.000000000049*t337;
  t790 = 1. + t777;
  t1165 = -1.*t682*t13*t931;
  t1170 = t686*t1023;
  t1183 = t697*t1070;
  t1189 = t1165 + t1170 + t1183;
  t810 = -1.000000000016*t337;
  t814 = 1. + t810;
  t827 = t826 + t365;
  t836 = t743 + t349;
  t859 = t826 + t517;
  t864 = -6.5e-11*t337;
  t872 = 1. + t864;
  t891 = t765 + t499;
  t1388 = -1.*t950*t40*t147;
  t1403 = t931*t169;
  t1405 = t1388 + t1403;
  t1423 = t40*t931;
  t1437 = t950*t147*t169;
  t1439 = t1423 + t1437;
  t1506 = -1.*t70*t1405;
  t1508 = t43*t1439;
  t1509 = t1506 + t1508;
  t1526 = t43*t1405;
  t1529 = t70*t1439;
  t1539 = t1526 + t1529;
  t1557 = t950*t13*t409;
  t1568 = t419*t1509;
  t1570 = t440*t1539;
  t1572 = t1557 + t1568 + t1570;
  t1578 = t950*t13*t548;
  t1580 = t586*t1509;
  t1586 = t601*t1539;
  t1589 = t1578 + t1580 + t1586;
  t1595 = t682*t950*t13;
  t1611 = t686*t1509;
  t1617 = t697*t1539;
  t1618 = t1595 + t1611 + t1617;
  p_output1[0]=t136*t147 - 1.*t13*t164*t169 + t224*t245 + t284*t293 + t384*t449 + t530*t626 + t675*t718 + t13*t40*t72 - 0.038924*(t449*t748 + t626*t769 + t718*t790) - 0.80315*(t449*t814 + t626*t827 + t718*t836) + 0.148705*(t449*t859 + t626*t872 + t718*t891) + var1[0] - 1.*var2[0];
  p_output1[1]=t1002*t164 + t1023*t224 + t1070*t284 + t1103*t384 + t1143*t530 + t1189*t675 - 0.038924*(t1103*t748 + t1143*t769 + t1189*t790) - 0.80315*(t1103*t814 + t1143*t827 + t1189*t836) + 0.148705*(t1103*t859 + t1143*t872 + t1189*t891) - 1.*t13*t136*t931 + t72*t959 + var1[1] - 1.*var2[1];
  p_output1[2]=t1439*t164 + t1509*t224 + t1539*t284 + t1572*t384 + t1589*t530 + t1618*t675 + t1405*t72 - 0.038924*(t1572*t748 + t1589*t769 + t1618*t790) - 0.80315*(t1572*t814 + t1589*t827 + t1618*t836) + 0.148705*(t1572*t859 + t1589*t872 + t1618*t891) + t13*t136*t950 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void h_RlFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
