/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:50 GMT+02:00
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
  double t21386;
  double t25817;
  double t25501;
  double t26446;
  double t26453;
  double t26435;
  double t26457;
  double t25553;
  double t26725;
  double t26728;
  double t26734;
  double t25833;
  double t26707;
  double t26812;
  double t26814;
  double t26931;
  double t25816;
  double t25853;
  double t25855;
  double t27091;
  double t27082;
  double t26447;
  double t26464;
  double t26465;
  double t26735;
  double t26773;
  double t26788;
  double t26988;
  double t27006;
  double t27007;
  double t27092;
  double t27099;
  double t27110;
  double t27145;
  double t27162;
  double t27177;
  double t27194;
  double t27251;
  double t27252;
  double t28037;
  double t28074;
  double t28079;
  double t28119;
  double t28149;
  double t28151;
  double t26708;
  double t26789;
  double t26793;
  double t29851;
  double t36914;
  double t37463;
  double t37492;
  double t37737;
  double t39349;
  double t43235;
  double t43942;
  double t50417;
  double t50511;
  double t50917;
  double t50950;
  double t50954;
  double t51068;
  double t51073;
  double t51081;
  double t36973;
  double t37048;
  double t37070;
  double t51028;
  double t51064;
  double t51132;
  double t51147;
  double t51151;
  double t51160;
  double t51170;
  double t51171;
  double t51172;
  double t51065;
  double t51109;
  double t51110;
  double t51168;
  double t51173;
  double t51181;
  double t51191;
  double t51199;
  double t51200;
  double t26802;
  double t27020;
  double t27065;
  double t51116;
  double t51219;
  double t51331;
  double t51346;
  double t51425;
  double t51553;
  double t51649;
  double t51662;
  t21386 = Cos(var1[4]);
  t25817 = Cos(var1[9]);
  t25501 = Cos(var1[5]);
  t26446 = Cos(var1[11]);
  t26453 = Sin(var1[10]);
  t26435 = Cos(var1[10]);
  t26457 = Sin(var1[11]);
  t25553 = Sin(var1[9]);
  t26725 = -1.*t26446*t26453;
  t26728 = t26435*t26457;
  t26734 = t26725 + t26728;
  t25833 = Sin(var1[5]);
  t26707 = Sin(var1[4]);
  t26812 = -1.*t26435*t26446;
  t26814 = -1.*t26453*t26457;
  t26931 = t26812 + t26814;
  t25816 = t25501*t25553;
  t25853 = t25817*t25833;
  t25855 = t25816 + t25853;
  t27091 = Cos(var1[3]);
  t27082 = Sin(var1[3]);
  t26447 = t26435*t26446;
  t26464 = t26453*t26457;
  t26465 = t26447 + t26464;
  t26735 = t25817*t25501*t26734;
  t26773 = -1.*t25553*t26734*t25833;
  t26788 = t26735 + t26773;
  t26988 = t25817*t25501*t26931;
  t27006 = -1.*t25553*t26931*t25833;
  t27007 = t26988 + t27006;
  t27092 = -1.*t25817*t25501;
  t27099 = t25553*t25833;
  t27110 = t27092 + t27099;
  t27145 = t25501*t25553*t26734;
  t27162 = t25817*t26734*t25833;
  t27177 = t27145 + t27162;
  t27194 = t21386*t26465;
  t27251 = -1.*t26707*t26788;
  t27252 = t27194 + t27251;
  t28037 = t25501*t25553*t26931;
  t28074 = t25817*t26931*t25833;
  t28079 = t28037 + t28074;
  t28119 = t21386*t26734;
  t28149 = -1.*t26707*t27007;
  t28151 = t28119 + t28149;
  t26708 = t26465*t26707;
  t26789 = t21386*t26788;
  t26793 = t26708 + t26789;
  t29851 = -1.*t25817;
  t36914 = 1. + t29851;
  t37463 = -1.*t26435;
  t37492 = 1. + t37463;
  t37737 = -0.28121*t37492;
  t39349 = -1.*t26446;
  t43235 = 1. + t39349;
  t43942 = -0.50321*t43235;
  t50417 = -0.23321*t26446;
  t50511 = t43942 + t50417;
  t50917 = t26435*t50511;
  t50950 = 0.27*t26453*t26457;
  t50954 = t37737 + t50917 + t50950;
  t51068 = -0.15121*t36914;
  t51073 = t25817*t50954;
  t51081 = t51068 + t51073;
  t36973 = 0.15121*t36914;
  t37048 = 0.15121*t25817;
  t37070 = 0.15121*t25553;
  t51028 = t25553*t50954;
  t51064 = t36973 + t37048 + t37070 + t51028;
  t51132 = 0.28121*t26453;
  t51147 = t50511*t26453;
  t51151 = -0.27*t26435*t26457;
  t51160 = t51132 + t51147 + t51151;
  t51170 = t25501*t51081;
  t51171 = -1.*t51064*t25833;
  t51172 = t51170 + t51171;
  t51065 = t25501*t51064;
  t51109 = t51081*t25833;
  t51110 = t51065 + t51109;
  t51168 = t51160*t26707;
  t51173 = t21386*t51172;
  t51181 = t51168 + t51173;
  t51191 = t21386*t51160;
  t51199 = -1.*t26707*t51172;
  t51200 = t51191 + t51199;
  t26802 = t26734*t26707;
  t27020 = t21386*t27007;
  t27065 = t26802 + t27020;
  t51116 = -1.*t27110*t51110;
  t51219 = t27177*t51110;
  t51331 = t27110*t51110;
  t51346 = -1.*t28079*t51110;
  t51425 = -1.*t27177*t51110;
  t51553 = t28079*t51110;
  t51649 = -1.*t51160*t26465;
  t51662 = t51160*t26734;
  p_output1[0]=t27065*var2[0] + t21386*t25855*var2[1] + t26793*var2[2];
  p_output1[1]=(t27091*t28079 - 1.*t27082*t28151)*var2[0] + (t25855*t26707*t27082 + t27091*t27110)*var2[1] + (t27091*t27177 - 1.*t27082*t27252)*var2[2];
  p_output1[2]=(t27082*t28079 + t27091*t28151)*var2[0] + (-1.*t25855*t26707*t27091 + t27082*t27110)*var2[1] + (t27082*t27177 + t27091*t27252)*var2[2];
  p_output1[3]=(t26793*(t51116 - 1.*t21386*t25855*t51181 + t25855*t26707*t51200) + t21386*t25855*(t26793*t51181 + t27252*t51200 + t51219))*var2[0] + (t27065*(-1.*t26793*t51181 - 1.*t27252*t51200 + t51425) + t26793*(t27065*t51181 + t28151*t51200 + t51553))*var2[1] + (t27065*(t21386*t25855*t51181 - 1.*t25855*t26707*t51200 + t51331) + t21386*t25855*(-1.*t27065*t51181 - 1.*t28151*t51200 + t51346))*var2[2];
  p_output1[4]=(t27177*(t51116 - 1.*t25855*t51172) + t27110*(t26465*t51160 + t26788*t51172 + t51219))*var2[0] + (t28079*(-1.*t26788*t51172 + t51425 + t51649) + t27177*(t27007*t51172 + t51553 + t51662))*var2[1] + (t28079*(t25855*t51172 + t51331) + t27110*(-1.*t26734*t51160 - 1.*t27007*t51172 + t51346))*var2[2];
  p_output1[5]=t26465*(t25817*t51064 - 1.*t25553*t51081)*var2[0] + (t26734*(-1.*t25553*t26734*t51064 - 1.*t25817*t26734*t51081 + t51649) + t26465*(t25553*t26931*t51064 + t25817*t26931*t51081 + t51662))*var2[1] + t26734*(-1.*t25817*t51064 + t25553*t51081)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t26465 + 0.15121*t26931)*var2[0] + (-0.15121 + t26734*(-1.*t26734*t50954 + t51649) + t26465*(t26931*t50954 + t51662))*var2[1];
  p_output1[10]=(0.28121*t26457 - 0.27*t26446*t26457 + t26457*t50511)*var2[0] + (0.28121*t26446 + 0.27*Power(t26457,2) + t26446*t50511)*var2[2];
  p_output1[11]=-0.27*var2[2];
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
