/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:31 GMT+02:00
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
  double t6988;
  double t7059;
  double t6971;
  double t6993;
  double t7061;
  double t7101;
  double t7148;
  double t7172;
  double t7206;
  double t7208;
  double t7213;
  double t7220;
  double t7234;
  double t7236;
  double t7240;
  double t7225;
  double t7314;
  double t7322;
  double t7222;
  double t7243;
  double t7248;
  double t7261;
  double t7274;
  double t7282;
  double t7284;
  double t7288;
  double t7290;
  double t7333;
  double t10212;
  double t10224;
  double t10228;
  double t10345;
  double t10359;
  double t10370;
  double t10376;
  double t10382;
  double t10390;
  double t10391;
  double t10392;
  double t10400;
  double t10402;
  double t10404;
  double t10485;
  double t10486;
  double t10487;
  double t10491;
  double t10493;
  double t10495;
  double t10496;
  double t10500;
  double t10503;
  double t10482;
  double t10490;
  double t10504;
  double t10508;
  double t7035;
  double t7071;
  double t7078;
  double t10467;
  double t10468;
  double t10469;
  double t10470;
  double t10511;
  double t10513;
  double t10515;
  double t10520;
  double t10524;
  double t10525;
  double t10526;
  double t10528;
  double t10538;
  double t10540;
  double t10542;
  double t10544;
  double t10545;
  double t10549;
  double t7221;
  double t7253;
  double t7255;
  double t10572;
  double t10574;
  double t10575;
  double t10565;
  double t10568;
  double t10569;
  double t10543;
  double t10550;
  double t10551;
  double t7257;
  double t7300;
  double t7302;
  double t10576;
  double t10586;
  double t10604;
  double t10611;
  double t10624;
  double t10627;
  double t10678;
  double t10681;
  double t10645;
  double t10652;
  double t10664;
  double t10659;
  double t10734;
  double t10726;
  t6988 = Cos(var1[6]);
  t7059 = Sin(var1[4]);
  t6971 = Cos(var1[4]);
  t6993 = Sin(var1[5]);
  t7061 = Sin(var1[6]);
  t7101 = Cos(var1[8]);
  t7148 = Sin(var1[7]);
  t7172 = t7101*t7148;
  t7206 = Cos(var1[7]);
  t7208 = Sin(var1[8]);
  t7213 = -1.*t7206*t7208;
  t7220 = t7172 + t7213;
  t7234 = t7206*t7101;
  t7236 = t7148*t7208;
  t7240 = t7234 + t7236;
  t7225 = Cos(var1[5]);
  t7314 = Cos(var1[3]);
  t7322 = Sin(var1[3]);
  t7222 = t6993*t7061*t7220;
  t7243 = t7225*t7240;
  t7248 = t7222 + t7243;
  t7261 = -1.*t7101*t7148;
  t7274 = t7206*t7208;
  t7282 = t7261 + t7274;
  t7284 = t7225*t7282;
  t7288 = t6993*t7061*t7240;
  t7290 = t7284 + t7288;
  t7333 = t6988*t7059*t6993;
  t10212 = t6971*t7061;
  t10224 = t7333 + t10212;
  t10228 = -1.*t7225*t7061*t7220;
  t10345 = t6993*t7240;
  t10359 = t10228 + t10345;
  t10370 = t6971*t6988*t7220;
  t10376 = -1.*t7059*t7248;
  t10382 = t10370 + t10376;
  t10390 = t6993*t7282;
  t10391 = -1.*t7225*t7061*t7240;
  t10392 = t10390 + t10391;
  t10400 = t6971*t6988*t7240;
  t10402 = -1.*t7059*t7290;
  t10404 = t10400 + t10402;
  t10485 = -0.0641*t7101;
  t10486 = -0.28*t7208;
  t10487 = t10485 + t10486;
  t10491 = -1.*t7101;
  t10493 = 1. + t10491;
  t10495 = 0.075*t10493;
  t10496 = 0.355*t7101;
  t10500 = -0.0641*t7208;
  t10503 = t10495 + t10496 + t10500;
  t10482 = -0.325*t7148;
  t10490 = t7206*t10487;
  t10504 = t7148*t10503;
  t10508 = t10482 + t10490 + t10504;
  t7035 = -1.*t6971*t6988*t6993;
  t7071 = t7059*t7061;
  t7078 = t7035 + t7071;
  t10467 = -1.*t6988;
  t10468 = 1. + t10467;
  t10469 = 0.1575*t10468;
  t10470 = 0.2255*t6988;
  t10511 = -1.*t7061*t10508;
  t10513 = t10469 + t10470 + t10511;
  t10515 = -1.*t6993*t10513;
  t10520 = -1.*t7206;
  t10524 = 1. + t10520;
  t10525 = 0.325*t10524;
  t10526 = -1.*t7148*t10487;
  t10528 = t7206*t10503;
  t10538 = t10525 + t10526 + t10528;
  t10540 = t7225*t10538;
  t10542 = t10515 + t10540;
  t10544 = 0.068*t7061;
  t10545 = t6988*t10508;
  t10549 = t10544 + t10545;
  t7221 = t6988*t7059*t7220;
  t7253 = t6971*t7248;
  t7255 = t7221 + t7253;
  t10572 = t7225*t10513;
  t10574 = t6993*t10538;
  t10575 = t10572 + t10574;
  t10565 = t6971*t10542;
  t10568 = t7059*t10549;
  t10569 = t10565 + t10568;
  t10543 = -1.*t7059*t10542;
  t10550 = t6971*t10549;
  t10551 = t10543 + t10550;
  t7257 = t6988*t7059*t7240;
  t7300 = t6971*t7290;
  t7302 = t7257 + t7300;
  t10576 = t7225*t6988*t10575;
  t10586 = -1.*t10575*t10359;
  t10604 = t10575*t10359;
  t10611 = -1.*t10575*t10392;
  t10624 = -1.*t7225*t6988*t10575;
  t10627 = t10575*t10392;
  t10678 = -1.*t7061*t10549;
  t10681 = t6988*t10549*t7240;
  t10645 = t7061*t10549;
  t10652 = -1.*t6988*t10549*t7220;
  t10664 = -1.*t6988*t10549*t7240;
  t10659 = t6988*t10549*t7220;
  t10734 = t10538*t7240;
  t10726 = -1.*t10538*t7282;
  p_output1[0]=t7255*var2[0] + t7078*var2[1] + t7302*var2[2];
  p_output1[1]=(t10359*t7314 - 1.*t10382*t7322)*var2[0] + (t6988*t7225*t7314 - 1.*t10224*t7322)*var2[1] + (t10392*t7314 - 1.*t10404*t7322)*var2[2];
  p_output1[2]=(t10382*t7314 + t10359*t7322)*var2[0] + (t10224*t7314 + t6988*t7225*t7322)*var2[1] + (t10404*t7314 + t10392*t7322)*var2[2];
  p_output1[3]=((-1.*t10224*t10551 + t10624 - 1.*t10569*t7078)*t7302 + t7078*(t10404*t10551 + t10627 + t10569*t7302))*var2[0] + ((t10382*t10551 + t10604 + t10569*t7255)*t7302 + t7255*(-1.*t10404*t10551 + t10611 - 1.*t10569*t7302))*var2[1] + ((t10224*t10551 + t10576 + t10569*t7078)*t7255 + t7078*(-1.*t10382*t10551 + t10586 - 1.*t10569*t7255))*var2[2];
  p_output1[4]=(t10392*(t10624 + t10678 + t10542*t6988*t6993) + t6988*t7225*(t10627 + t10681 + t10542*t7290))*var2[0] + (t10392*(t10604 + t10659 + t10542*t7248) + t10359*(t10611 + t10664 - 1.*t10542*t7290))*var2[1] + (t10359*(t10576 + t10645 - 1.*t10542*t6988*t6993) + t6988*t7225*(t10586 + t10652 - 1.*t10542*t7248))*var2[2];
  p_output1[5]=(t6988*(t10678 - 1.*t10513*t6988)*t7240 + t7061*(t10681 - 1.*t10513*t7061*t7240 + t10538*t7282))*var2[0] + (t6988*(t10659 + t10734 - 1.*t10513*t7061*t7220)*t7240 + t6988*t7220*(t10664 + t10726 + t10513*t7061*t7240))*var2[1] + (t6988*(t10645 + t10513*t6988)*t7220 + t7061*(t10652 + t10513*t7061*t7220 - 1.*t10538*t7240))*var2[2];
  p_output1[6]=(-0.1575*t7220 - 0.2255*t7282)*var2[0] + (t7240*(t10726 - 1.*t10508*t7240) + (t10734 + t10508*t7220)*t7282)*var2[1] + 0.068*t7240*var2[2];
  p_output1[7]=(-1.*t10487*t7101 + 0.325*t7208 - 1.*t10503*t7208)*var2[0] + (-0.325*t7101 + t10503*t7101 - 1.*t10487*t7208)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
