/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:44 GMT+02:00
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
  double t48;
  double t1391;
  double t139;
  double t2206;
  double t5939;
  double t1817;
  double t5988;
  double t1311;
  double t6188;
  double t6198;
  double t6211;
  double t1392;
  double t5999;
  double t2389;
  double t5994;
  double t5997;
  double t1324;
  double t1400;
  double t1632;
  double t6282;
  double t6274;
  double t6214;
  double t6248;
  double t6253;
  double t6258;
  double t6259;
  double t6260;
  double t6262;
  double t6263;
  double t6265;
  double t6290;
  double t6291;
  double t6292;
  double t6310;
  double t6315;
  double t6319;
  double t6335;
  double t6340;
  double t6383;
  double t6448;
  double t6451;
  double t6452;
  double t6464;
  double t6470;
  double t6471;
  double t6003;
  double t6255;
  double t6256;
  double t6519;
  double t6520;
  double t6525;
  double t6528;
  double t6532;
  double t6535;
  double t6536;
  double t6539;
  double t6540;
  double t6545;
  double t6552;
  double t6560;
  double t6561;
  double t6565;
  double t6566;
  double t6567;
  double t6521;
  double t6522;
  double t6524;
  double t6562;
  double t6563;
  double t6577;
  double t6578;
  double t6582;
  double t6587;
  double t6589;
  double t6590;
  double t6596;
  double t6564;
  double t6570;
  double t6571;
  double t6588;
  double t6600;
  double t6602;
  double t6604;
  double t6612;
  double t6614;
  double t6261;
  double t6270;
  double t6271;
  double t6575;
  double t6621;
  double t6645;
  double t6667;
  double t6681;
  double t6687;
  double t6733;
  double t6749;
  t48 = Cos(var1[4]);
  t1391 = Cos(var1[12]);
  t139 = Cos(var1[5]);
  t2206 = Cos(var1[14]);
  t5939 = Sin(var1[13]);
  t1817 = Cos(var1[13]);
  t5988 = Sin(var1[14]);
  t1311 = Sin(var1[12]);
  t6188 = t2206*t5939;
  t6198 = -1.*t1817*t5988;
  t6211 = t6188 + t6198;
  t1392 = Sin(var1[5]);
  t5999 = Sin(var1[4]);
  t2389 = t1817*t2206;
  t5994 = t5939*t5988;
  t5997 = t2389 + t5994;
  t1324 = -1.*t139*t1311;
  t1400 = -1.*t1391*t1392;
  t1632 = t1324 + t1400;
  t6282 = Cos(var1[3]);
  t6274 = Sin(var1[3]);
  t6214 = t1391*t139*t6211;
  t6248 = -1.*t1311*t6211*t1392;
  t6253 = t6214 + t6248;
  t6258 = -1.*t2206*t5939;
  t6259 = t1817*t5988;
  t6260 = t6258 + t6259;
  t6262 = t1391*t139*t5997;
  t6263 = -1.*t1311*t5997*t1392;
  t6265 = t6262 + t6263;
  t6290 = t1391*t139;
  t6291 = -1.*t1311*t1392;
  t6292 = t6290 + t6291;
  t6310 = t139*t1311*t6211;
  t6315 = t1391*t6211*t1392;
  t6319 = t6310 + t6315;
  t6335 = t48*t5997;
  t6340 = -1.*t5999*t6253;
  t6383 = t6335 + t6340;
  t6448 = t139*t1311*t5997;
  t6451 = t1391*t5997*t1392;
  t6452 = t6448 + t6451;
  t6464 = t48*t6260;
  t6470 = -1.*t5999*t6265;
  t6471 = t6464 + t6470;
  t6003 = t5997*t5999;
  t6255 = t48*t6253;
  t6256 = t6003 + t6255;
  t6519 = -1.*t1391;
  t6520 = 1. + t6519;
  t6525 = -1.*t1817;
  t6528 = 1. + t6525;
  t6532 = 0.28121*t6528;
  t6535 = -1.*t2206;
  t6536 = 1. + t6535;
  t6539 = 0.50321*t6536;
  t6540 = 0.19821*t2206;
  t6545 = t6539 + t6540;
  t6552 = t1817*t6545;
  t6560 = -0.305*t5939*t5988;
  t6561 = t6532 + t6552 + t6560;
  t6565 = 0.15121*t6520;
  t6566 = t1391*t6561;
  t6567 = t6565 + t6566;
  t6521 = -0.15121*t6520;
  t6522 = -0.15121*t1391;
  t6524 = -0.15121*t1311;
  t6562 = t1311*t6561;
  t6563 = t6521 + t6522 + t6524 + t6562;
  t6577 = 0.28121*t5939;
  t6578 = -1.*t6545*t5939;
  t6582 = -0.305*t1817*t5988;
  t6587 = t6577 + t6578 + t6582;
  t6589 = t139*t6567;
  t6590 = -1.*t6563*t1392;
  t6596 = t6589 + t6590;
  t6564 = t139*t6563;
  t6570 = t6567*t1392;
  t6571 = t6564 + t6570;
  t6588 = t6587*t5999;
  t6600 = t48*t6596;
  t6602 = t6588 + t6600;
  t6604 = t48*t6587;
  t6612 = -1.*t5999*t6596;
  t6614 = t6604 + t6612;
  t6261 = t6260*t5999;
  t6270 = t48*t6265;
  t6271 = t6261 + t6270;
  t6575 = -1.*t6292*t6571;
  t6621 = t6319*t6571;
  t6645 = t6292*t6571;
  t6667 = -1.*t6452*t6571;
  t6681 = -1.*t6319*t6571;
  t6687 = t6452*t6571;
  t6733 = -1.*t6587*t5997;
  t6749 = t6587*t6260;
  p_output1[0]=t6271*var2[0] + t1632*t48*var2[1] + t6256*var2[2];
  p_output1[1]=(t6282*t6452 - 1.*t6274*t6471)*var2[0] + (t1632*t5999*t6274 + t6282*t6292)*var2[1] + (t6282*t6319 - 1.*t6274*t6383)*var2[2];
  p_output1[2]=(t6274*t6452 + t6282*t6471)*var2[0] + (-1.*t1632*t5999*t6282 + t6274*t6292)*var2[1] + (t6274*t6319 + t6282*t6383)*var2[2];
  p_output1[3]=(t6256*(t6575 - 1.*t1632*t48*t6602 + t1632*t5999*t6614) + t1632*t48*(t6256*t6602 + t6383*t6614 + t6621))*var2[0] + (t6271*(-1.*t6256*t6602 - 1.*t6383*t6614 + t6681) + t6256*(t6271*t6602 + t6471*t6614 + t6687))*var2[1] + (t6271*(t1632*t48*t6602 - 1.*t1632*t5999*t6614 + t6645) + t1632*t48*(-1.*t6271*t6602 - 1.*t6471*t6614 + t6667))*var2[2];
  p_output1[4]=(t6319*(t6575 - 1.*t1632*t6596) + t6292*(t5997*t6587 + t6253*t6596 + t6621))*var2[0] + (t6452*(-1.*t6253*t6596 + t6681 + t6733) + t6319*(t6265*t6596 + t6687 + t6749))*var2[1] + (t6452*(t1632*t6596 + t6645) + t6292*(-1.*t6260*t6587 - 1.*t6265*t6596 + t6667))*var2[2];
  p_output1[5]=t5997*(-1.*t1391*t6563 + t1311*t6567)*var2[0] + (t6260*(-1.*t1311*t6211*t6563 - 1.*t1391*t6211*t6567 + t6733) + t5997*(t1311*t5997*t6563 + t1391*t5997*t6567 + t6749))*var2[1] + t6260*(t1391*t6563 - 1.*t1311*t6567)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t6260*(-1.*t6211*t6561 + t6733) + t5997*(t5997*t6561 + t6749))*var2[1] + (-0.15121*t6211 - 0.15121*t6260)*var2[2];
  p_output1[13]=(0.28121*t5988 - 0.305*t2206*t5988 - 1.*t5988*t6545)*var2[0] + (0.28121*t2206 + 0.305*Power(t5988,2) - 1.*t2206*t6545)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
