/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:51 GMT+02:00
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
  double t27047;
  double t14270;
  double t26424;
  double t27055;
  double t27573;
  double t27575;
  double t27576;
  double t27193;
  double t28158;
  double t27143;
  double t28168;
  double t27130;
  double t26798;
  double t27073;
  double t27076;
  double t27083;
  double t28099;
  double t28169;
  double t28254;
  double t28663;
  double t28544;
  double t28549;
  double t28564;
  double t28525;
  double t28665;
  double t28720;
  double t28737;
  double t51218;
  double t51250;
  double t51288;
  double t51348;
  double t51349;
  double t51423;
  double t51476;
  double t51534;
  double t51542;
  double t51550;
  double t51564;
  double t51588;
  double t51590;
  double t51594;
  double t51602;
  double t51608;
  double t51629;
  double t51630;
  double t51631;
  double t51369;
  double t51374;
  double t51381;
  double t51612;
  double t51627;
  double t51636;
  double t51638;
  double t51639;
  double t51640;
  double t51642;
  double t51643;
  double t51644;
  double t51646;
  double t51647;
  double t51648;
  double t51628;
  double t51632;
  double t51634;
  double t51213;
  double t51311;
  double t51317;
  double t51318;
  double t51326;
  double t51332;
  double t51645;
  double t51653;
  double t51656;
  double t51664;
  double t51665;
  double t51666;
  double t51671;
  double t51672;
  double t51674;
  double t51334;
  double t51335;
  double t51337;
  double t51635;
  double t51677;
  double t27128;
  double t28264;
  double t28282;
  double t51682;
  double t51683;
  double t51684;
  double t51739;
  double t51749;
  double t51766;
  double t51784;
  double t51895;
  double t51901;
  t27047 = Cos(var1[13]);
  t14270 = Cos(var1[14]);
  t26424 = Sin(var1[13]);
  t27055 = Sin(var1[14]);
  t27573 = t27047*t14270;
  t27575 = t26424*t27055;
  t27576 = t27573 + t27575;
  t27193 = Cos(var1[5]);
  t28158 = Sin(var1[12]);
  t27143 = Cos(var1[12]);
  t28168 = Sin(var1[5]);
  t27130 = Cos(var1[4]);
  t26798 = -1.*t14270*t26424;
  t27073 = t27047*t27055;
  t27076 = t26798 + t27073;
  t27083 = Sin(var1[4]);
  t28099 = t27143*t27193*t27576;
  t28169 = -1.*t28158*t27576*t28168;
  t28254 = t28099 + t28169;
  t28663 = Sin(var1[3]);
  t28544 = t27193*t28158*t27576;
  t28549 = t27143*t27576*t28168;
  t28564 = t28544 + t28549;
  t28525 = Cos(var1[3]);
  t28665 = t27130*t27076;
  t28720 = -1.*t27083*t28254;
  t28737 = t28665 + t28720;
  t51218 = t14270*t26424;
  t51250 = -1.*t27047*t27055;
  t51288 = t51218 + t51250;
  t51348 = -1.*t27143;
  t51349 = 1. + t51348;
  t51423 = -1.*t27047;
  t51476 = 1. + t51423;
  t51534 = 0.28121*t51476;
  t51542 = -1.*t14270;
  t51550 = 1. + t51542;
  t51564 = 0.50321*t51550;
  t51588 = 0.23321*t14270;
  t51590 = t51564 + t51588;
  t51594 = t27047*t51590;
  t51602 = -0.27*t26424*t27055;
  t51608 = t51534 + t51594 + t51602;
  t51629 = 0.15121*t51349;
  t51630 = t27143*t51608;
  t51631 = t51629 + t51630;
  t51369 = -0.15121*t51349;
  t51374 = -0.15121*t27143;
  t51381 = -0.15121*t28158;
  t51612 = t28158*t51608;
  t51627 = t51369 + t51374 + t51381 + t51612;
  t51636 = -1.*t27193*t28158;
  t51638 = -1.*t27143*t28168;
  t51639 = t51636 + t51638;
  t51640 = 0.28121*t26424;
  t51642 = -1.*t51590*t26424;
  t51643 = -0.27*t27047*t27055;
  t51644 = t51640 + t51642 + t51643;
  t51646 = t27193*t51631;
  t51647 = -1.*t51627*t28168;
  t51648 = t51646 + t51647;
  t51628 = t27193*t51627;
  t51632 = t51631*t28168;
  t51634 = t51628 + t51632;
  t51213 = t27576*t27083;
  t51311 = t27143*t27193*t51288;
  t51317 = -1.*t28158*t51288*t28168;
  t51318 = t51311 + t51317;
  t51326 = t27130*t51318;
  t51332 = t51213 + t51326;
  t51645 = t51644*t27083;
  t51653 = t27130*t51648;
  t51656 = t51645 + t51653;
  t51664 = t27130*t51644;
  t51665 = -1.*t27083*t51648;
  t51666 = t51664 + t51665;
  t51671 = t27193*t28158*t51288;
  t51672 = t27143*t51288*t28168;
  t51674 = t51671 + t51672;
  t51334 = t27143*t27193;
  t51335 = -1.*t28158*t28168;
  t51337 = t51334 + t51335;
  t51635 = -1.*t51337*t51634;
  t51677 = t51674*t51634;
  t27128 = t27076*t27083;
  t28264 = t27130*t28254;
  t28282 = t27128 + t28264;
  t51682 = t27130*t27576;
  t51683 = -1.*t27083*t51318;
  t51684 = t51682 + t51683;
  t51739 = -1.*t51674*t51634;
  t51749 = t28564*t51634;
  t51766 = -1.*t51644*t27576;
  t51784 = t51644*t27076;
  t51895 = t51337*t51634;
  t51901 = -1.*t28564*t51634;
  p_output1[0]=t28282;
  p_output1[1]=t28525*t28564 - 1.*t28663*t28737;
  p_output1[2]=t28564*t28663 + t28525*t28737;
  p_output1[3]=t51332*(t51635 - 1.*t27130*t51639*t51656 + t27083*t51639*t51666) + t27130*t51639*(t51332*t51656 + t51677 + t51666*t51684);
  p_output1[4]=(t51635 - 1.*t51639*t51648)*t51674 + t51337*(t27576*t51644 + t51318*t51648 + t51677);
  p_output1[5]=t27576*(-1.*t27143*t51627 + t28158*t51631);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t27055 - 0.27*t14270*t27055 - 1.*t27055*t51590;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t27130*t51639;
  p_output1[19]=t28525*t51337 + t27083*t28663*t51639;
  p_output1[20]=t28663*t51337 - 1.*t27083*t28525*t51639;
  p_output1[21]=t28282*(-1.*t51332*t51656 - 1.*t51666*t51684 + t51739) + t51332*(t28282*t51656 + t28737*t51666 + t51749);
  p_output1[22]=t28564*(-1.*t51318*t51648 + t51739 + t51766) + t51674*(t28254*t51648 + t51749 + t51784);
  p_output1[23]=t27076*(-1.*t28158*t51288*t51627 - 1.*t27143*t51288*t51631 + t51766) + t27576*(t27576*t28158*t51627 + t27143*t27576*t51631 + t51784);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t27076*(-1.*t51288*t51608 + t51766) + t27576*(t27576*t51608 + t51784);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t51332;
  p_output1[37]=t28525*t51674 - 1.*t28663*t51684;
  p_output1[38]=t28663*t51674 + t28525*t51684;
  p_output1[39]=t28282*(t27130*t51639*t51656 - 1.*t27083*t51639*t51666 + t51895) + t27130*t51639*(-1.*t28282*t51656 - 1.*t28737*t51666 + t51901);
  p_output1[40]=t28564*(t51639*t51648 + t51895) + t51337*(-1.*t27076*t51644 - 1.*t28254*t51648 + t51901);
  p_output1[41]=t27076*(t27143*t51627 - 1.*t28158*t51631);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t27076 - 0.15121*t51288;
  p_output1[49]=0.28121*t14270 + 0.27*Power(t27055,2) - 1.*t14270*t51590;
  p_output1[50]=-0.27;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
