/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:35 GMT+02:00
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
  double t56;
  double t22286;
  double t6325;
  double t23035;
  double t23082;
  double t23008;
  double t23140;
  double t6761;
  double t23265;
  double t23277;
  double t23283;
  double t22879;
  double t23206;
  double t23308;
  double t23311;
  double t23313;
  double t10984;
  double t22965;
  double t22966;
  double t23668;
  double t23650;
  double t23053;
  double t23142;
  double t23165;
  double t23293;
  double t23296;
  double t23298;
  double t23318;
  double t23323;
  double t23345;
  double t23670;
  double t23675;
  double t23681;
  double t23783;
  double t23819;
  double t23829;
  double t23850;
  double t23871;
  double t23886;
  double t23951;
  double t23975;
  double t23979;
  double t23998;
  double t23999;
  double t24000;
  double t23245;
  double t23299;
  double t23300;
  double t24195;
  double t24197;
  double t24217;
  double t24227;
  double t24229;
  double t24231;
  double t24235;
  double t24240;
  double t24247;
  double t24248;
  double t24251;
  double t24252;
  double t24253;
  double t24255;
  double t24279;
  double t24288;
  double t24219;
  double t24225;
  double t24257;
  double t24261;
  double t24297;
  double t24299;
  double t24309;
  double t24310;
  double t24313;
  double t24314;
  double t24315;
  double t24266;
  double t24289;
  double t24293;
  double t24312;
  double t24316;
  double t24320;
  double t24323;
  double t24325;
  double t24333;
  double t23306;
  double t23571;
  double t23628;
  double t24296;
  double t24365;
  double t24416;
  double t24437;
  double t24452;
  double t24463;
  double t24571;
  double t24586;
  t56 = Cos(var1[4]);
  t22286 = Cos(var1[15]);
  t6325 = Cos(var1[5]);
  t23035 = Cos(var1[17]);
  t23082 = Sin(var1[16]);
  t23008 = Cos(var1[16]);
  t23140 = Sin(var1[17]);
  t6761 = Sin(var1[15]);
  t23265 = -1.*t23035*t23082;
  t23277 = t23008*t23140;
  t23283 = t23265 + t23277;
  t22879 = Sin(var1[5]);
  t23206 = Sin(var1[4]);
  t23308 = -1.*t23008*t23035;
  t23311 = -1.*t23082*t23140;
  t23313 = t23308 + t23311;
  t10984 = t6325*t6761;
  t22965 = t22286*t22879;
  t22966 = t10984 + t22965;
  t23668 = Cos(var1[3]);
  t23650 = Sin(var1[3]);
  t23053 = t23008*t23035;
  t23142 = t23082*t23140;
  t23165 = t23053 + t23142;
  t23293 = t22286*t6325*t23283;
  t23296 = -1.*t6761*t23283*t22879;
  t23298 = t23293 + t23296;
  t23318 = t22286*t6325*t23313;
  t23323 = -1.*t6761*t23313*t22879;
  t23345 = t23318 + t23323;
  t23670 = -1.*t22286*t6325;
  t23675 = t6761*t22879;
  t23681 = t23670 + t23675;
  t23783 = t6325*t6761*t23283;
  t23819 = t22286*t23283*t22879;
  t23829 = t23783 + t23819;
  t23850 = t56*t23165;
  t23871 = -1.*t23206*t23298;
  t23886 = t23850 + t23871;
  t23951 = t6325*t6761*t23313;
  t23975 = t22286*t23313*t22879;
  t23979 = t23951 + t23975;
  t23998 = t56*t23283;
  t23999 = -1.*t23206*t23345;
  t24000 = t23998 + t23999;
  t23245 = t23165*t23206;
  t23299 = t56*t23298;
  t23300 = t23245 + t23299;
  t24195 = -1.*t22286;
  t24197 = 1. + t24195;
  t24217 = -0.15121*t24197;
  t24227 = -1.*t23008;
  t24229 = 1. + t24227;
  t24231 = -0.28121*t24229;
  t24235 = -1.*t23035;
  t24240 = 1. + t24235;
  t24247 = -0.50321*t24240;
  t24248 = -0.19821*t23035;
  t24251 = t24247 + t24248;
  t24252 = t23008*t24251;
  t24253 = 0.305*t23082*t23140;
  t24255 = t24231 + t24252 + t24253;
  t24279 = t22286*t24255;
  t24288 = t24217 + t24279;
  t24219 = -0.15121*t22286;
  t24225 = 0.15121*t6761;
  t24257 = t6761*t24255;
  t24261 = t24217 + t24219 + t24225 + t24257;
  t24297 = 0.28121*t23082;
  t24299 = t24251*t23082;
  t24309 = -0.305*t23008*t23140;
  t24310 = t24297 + t24299 + t24309;
  t24313 = t6325*t24288;
  t24314 = -1.*t24261*t22879;
  t24315 = t24313 + t24314;
  t24266 = t6325*t24261;
  t24289 = t24288*t22879;
  t24293 = t24266 + t24289;
  t24312 = t24310*t23206;
  t24316 = t56*t24315;
  t24320 = t24312 + t24316;
  t24323 = t56*t24310;
  t24325 = -1.*t23206*t24315;
  t24333 = t24323 + t24325;
  t23306 = t23283*t23206;
  t23571 = t56*t23345;
  t23628 = t23306 + t23571;
  t24296 = -1.*t23681*t24293;
  t24365 = t23829*t24293;
  t24416 = t23681*t24293;
  t24437 = -1.*t23979*t24293;
  t24452 = -1.*t23829*t24293;
  t24463 = t23979*t24293;
  t24571 = -1.*t24310*t23165;
  t24586 = t24310*t23283;
  p_output1[0]=t23628*var2[0] + t22966*t56*var2[1] + t23300*var2[2];
  p_output1[1]=(t23668*t23979 - 1.*t23650*t24000)*var2[0] + (t22966*t23206*t23650 + t23668*t23681)*var2[1] + (t23668*t23829 - 1.*t23650*t23886)*var2[2];
  p_output1[2]=(t23650*t23979 + t23668*t24000)*var2[0] + (-1.*t22966*t23206*t23668 + t23650*t23681)*var2[1] + (t23650*t23829 + t23668*t23886)*var2[2];
  p_output1[3]=(t22966*(t23300*t24320 + t23886*t24333 + t24365)*t56 + t23300*(t24296 + t22966*t23206*t24333 - 1.*t22966*t24320*t56))*var2[0] + (t23628*(-1.*t23300*t24320 - 1.*t23886*t24333 + t24452) + t23300*(t23628*t24320 + t24000*t24333 + t24463))*var2[1] + (t22966*(-1.*t23628*t24320 - 1.*t24000*t24333 + t24437)*t56 + t23628*(-1.*t22966*t23206*t24333 + t24416 + t22966*t24320*t56))*var2[2];
  p_output1[4]=(t23829*(t24296 - 1.*t22966*t24315) + t23681*(t23165*t24310 + t23298*t24315 + t24365))*var2[0] + (t23979*(-1.*t23298*t24315 + t24452 + t24571) + t23829*(t23345*t24315 + t24463 + t24586))*var2[1] + (t23979*(t22966*t24315 + t24416) + t23681*(-1.*t23283*t24310 - 1.*t23345*t24315 + t24437))*var2[2];
  p_output1[5]=t23165*(t22286*t24261 - 1.*t24288*t6761)*var2[0] + (t23283*(-1.*t22286*t23283*t24288 + t24571 - 1.*t23283*t24261*t6761) + t23165*(t22286*t23313*t24288 + t24586 + t23313*t24261*t6761))*var2[1] + t23283*(-1.*t22286*t24261 + t24288*t6761)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t23165 - 0.15121*t23313)*var2[0] + (-0.15121 + t23283*(-1.*t23283*t24255 + t24571) + t23165*(t23313*t24255 + t24586))*var2[1];
  p_output1[16]=(0.28121*t23140 - 0.305*t23035*t23140 + t23140*t24251)*var2[0] + (0.28121*t23035 + 0.305*Power(t23140,2) + t23035*t24251)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
