/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:32 GMT+01:00
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
  double t156;
  double t34;
  double t63;
  double t65;
  double t81;
  double t96;
  double t99;
  double t160;
  double t162;
  double t167;
  double t172;
  double t47;
  double t252;
  double t239;
  double t311;
  double t316;
  double t320;
  double t337;
  double t339;
  double t362;
  double t366;
  double t369;
  double t370;
  double t422;
  double t508;
  double t449;
  double t454;
  double t458;
  double t487;
  double t492;
  double t500;
  double t526;
  double t527;
  double t543;
  double t556;
  double t586;
  double t596;
  double t597;
  double t601;
  double t603;
  double t609;
  double t144;
  double t163;
  double t171;
  double t211;
  double t233;
  double t87;
  double t109;
  double t726;
  double t243;
  double t246;
  double t742;
  double t256;
  double t276;
  double t277;
  double t287;
  double t302;
  double t734;
  double t744;
  double t745;
  double t753;
  double t763;
  double t774;
  double t329;
  double t332;
  double t333;
  double t420;
  double t430;
  double t437;
  double t789;
  double t805;
  double t806;
  double t825;
  double t832;
  double t833;
  double t506;
  double t507;
  double t511;
  double t514;
  double t524;
  double t568;
  double t572;
  double t577;
  double t581;
  double t583;
  double t843;
  double t848;
  double t852;
  double t859;
  double t867;
  double t881;
  double t882;
  double t888;
  double t618;
  double t622;
  double t892;
  double t896;
  double t900;
  double t914;
  double t671;
  double t674;
  double t1021;
  double t1024;
  double t1045;
  double t1064;
  double t1083;
  double t1095;
  double t1102;
  double t1107;
  double t1113;
  double t1116;
  double t1129;
  double t1130;
  double t1135;
  double t1140;
  double t1141;
  double t1160;
  double t1169;
  double t1190;
  double t1191;
  double t1194;
  double t1201;
  double t1203;
  double t1205;
  double t1206;
  t156 = Cos(var1[10]);
  t34 = Cos(var1[4]);
  t63 = Cos(var1[9]);
  t65 = -1.*t63;
  t81 = 1. + t65;
  t96 = Sin(var1[9]);
  t99 = -0.15121*t96;
  t160 = -1.*t156;
  t162 = 1. + t160;
  t167 = -1. + t156;
  t172 = Sin(var1[10]);
  t47 = Cos(var1[5]);
  t252 = Sin(var1[5]);
  t239 = Sin(var1[4]);
  t311 = -1.*t34*t47*t96;
  t316 = -1.*t63*t34*t252;
  t320 = t311 + t316;
  t337 = t63*t34*t47;
  t339 = -1.*t34*t96*t252;
  t362 = t337 + t339;
  t366 = Cos(var1[11]);
  t369 = -1.*t366;
  t370 = 1. + t369;
  t422 = Sin(var1[11]);
  t508 = -1. + t366;
  t449 = t172*t239;
  t454 = -4.e-6*t172*t320;
  t458 = -1.000000000016*t162;
  t487 = 1. + t458;
  t492 = t487*t362;
  t500 = t449 + t454 + t492;
  t526 = t156*t239;
  t527 = 4.e-6*t162*t320;
  t543 = -1.*t172*t362;
  t556 = t526 + t527 + t543;
  t586 = 4.e-6*t162*t239;
  t596 = 1.6e-11*t167;
  t597 = 1. + t596;
  t601 = t597*t320;
  t603 = 4.e-6*t172*t362;
  t609 = t586 + t601 + t603;
  t144 = -4.9936e-13*var1[10];
  t163 = -0.038749*t162;
  t171 = 6.19984e-13*t167;
  t211 = -0.281210000004*t172;
  t233 = t144 + t163 + t171 + t211;
  t87 = 0.15121*t81;
  t109 = t87 + t99;
  t726 = Sin(var1[3]);
  t243 = -0.15121*t81;
  t246 = t243 + t99;
  t742 = Cos(var1[3]);
  t256 = -1.2484e-7*var1[10];
  t276 = 2.479936e-18*t162;
  t277 = -1.54996e-7*t167;
  t287 = 1.124840000016e-6*t172;
  t302 = t256 + t276 + t277 + t287;
  t734 = t47*t726*t239;
  t744 = t742*t252;
  t745 = t734 + t744;
  t753 = t742*t47;
  t763 = -1.*t726*t239*t252;
  t774 = t753 + t763;
  t329 = 0.281210000008499*t162;
  t332 = -0.03874900000062*t172;
  t333 = t329 + t332;
  t420 = 0.50315000001605*t370;
  t430 = -0.0398890000006382*t422;
  t437 = t420 + t430;
  t789 = -1.*t96*t745;
  t805 = t63*t774;
  t806 = t789 + t805;
  t825 = t63*t745;
  t832 = t96*t774;
  t833 = t825 + t832;
  t506 = -5.04e-14*var1[11];
  t507 = -0.039889*t370;
  t511 = 6.38224e-13*t508;
  t514 = -0.503150000008*t422;
  t524 = t506 + t507 + t511 + t514;
  t568 = -1.26e-8*var1[11];
  t572 = 2.552896e-18*t370;
  t577 = -1.59556e-7*t508;
  t581 = 2.012600000032e-6*t422;
  t583 = t568 + t572 + t577 + t581;
  t843 = -1.*t34*t172*t726;
  t848 = -4.e-6*t172*t806;
  t852 = t487*t833;
  t859 = t843 + t848 + t852;
  t867 = -1.*t156*t34*t726;
  t881 = 4.e-6*t162*t806;
  t882 = -1.*t172*t833;
  t888 = t867 + t881 + t882;
  t618 = 1.6e-11*t508;
  t622 = 1. + t618;
  t892 = -4.e-6*t162*t34*t726;
  t896 = t597*t806;
  t900 = 4.e-6*t172*t833;
  t914 = t892 + t896 + t900;
  t671 = -1.000000000016*t370;
  t674 = 1. + t671;
  t1021 = -1.*t742*t47*t239;
  t1024 = t726*t252;
  t1045 = t1021 + t1024;
  t1064 = t47*t726;
  t1083 = t742*t239*t252;
  t1095 = t1064 + t1083;
  t1102 = -1.*t96*t1045;
  t1107 = t63*t1095;
  t1113 = t1102 + t1107;
  t1116 = t63*t1045;
  t1129 = t96*t1095;
  t1130 = t1116 + t1129;
  t1135 = t742*t34*t172;
  t1140 = -4.e-6*t172*t1113;
  t1141 = t487*t1130;
  t1160 = t1135 + t1140 + t1141;
  t1169 = t156*t742*t34;
  t1190 = 4.e-6*t162*t1113;
  t1191 = -1.*t172*t1130;
  t1194 = t1169 + t1190 + t1191;
  t1201 = 4.e-6*t162*t742*t34;
  t1203 = t597*t1113;
  t1205 = 4.e-6*t172*t1130;
  t1206 = t1201 + t1203 + t1205;
  p_output1[0]=t233*t239 + t302*t320 - 1.*t246*t252*t34 + t333*t362 + t109*t34*t47 + t437*t500 + t524*t556 + t583*t609 - 0.041195*(-1.*t422*t500 + t366*t556 + 4.e-6*t370*t609) - 0.14871*(4.e-6*t422*t500 + 4.e-6*t370*t556 + t609*t622) + 0.803147*(t422*t556 - 4.e-6*t422*t609 + t500*t674) + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*t233*t34*t726 + t109*t745 + t246*t774 + t302*t806 + t333*t833 + t437*t859 + t524*t888 + t583*t914 - 0.041195*(-1.*t422*t859 + t366*t888 + 4.e-6*t370*t914) + 0.803147*(t674*t859 + t422*t888 - 4.e-6*t422*t914) - 0.14871*(4.e-6*t422*t859 + 4.e-6*t370*t888 + t622*t914) + var1[1] - 1.*var2[1];
  p_output1[2]=t1045*t109 + t1095*t246 + t1113*t302 + t1130*t333 - 0.041195*(t1194*t366 + 4.e-6*t1206*t370 - 1.*t1160*t422) + t1160*t437 + t1194*t524 + t1206*t583 - 0.14871*(4.e-6*t1194*t370 + 4.e-6*t1160*t422 + t1206*t622) + 0.803147*(t1194*t422 - 4.e-6*t1206*t422 + t1160*t674) + t233*t34*t742 + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
