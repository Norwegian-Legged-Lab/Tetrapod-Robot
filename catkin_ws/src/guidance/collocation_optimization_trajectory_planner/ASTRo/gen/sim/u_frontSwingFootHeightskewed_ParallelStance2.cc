/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:03:40 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4119;
  double t5442;
  double t5570;
  double t5588;
  double t6118;
  double t6431;
  double t6474;
  double t6533;
  double t6491;
  double t6549;
  double t6526;
  double t6550;
  double t6559;
  double t6585;
  double t6586;
  double t6625;
  double t4297;
  double t4706;
  double t6739;
  double t6799;
  double t6823;
  double t6827;
  double t6847;
  double t6935;
  double t6937;
  double t6938;
  double t6989;
  double t7021;
  double t7024;
  double t7050;
  double t5591;
  double t6462;
  double t6569;
  double t6583;
  double t7099;
  double t7250;
  double t9567;
  double t10241;
  double t10292;
  double t10295;
  double t6796;
  double t6797;
  double t6848;
  double t6853;
  double t10695;
  double t10699;
  double t10700;
  double t10718;
  double t10720;
  double t10721;
  double t10727;
  double t10728;
  double t10737;
  double t14055;
  double t14186;
  double t14237;
  double t14696;
  double t14944;
  double t15026;
  double t15109;
  double t15116;
  double t15117;
  t4119 = Cos(var1[3]);
  t5442 = Cos(var1[12]);
  t5570 = -1.*t5442;
  t5588 = 1. + t5570;
  t6118 = Sin(var1[12]);
  t6431 = -0.15121*t6118;
  t6474 = Cos(var1[5]);
  t6533 = Sin(var1[3]);
  t6491 = Sin(var1[4]);
  t6549 = Sin(var1[5]);
  t6526 = -1.*t4119*t6474*t6491;
  t6550 = t6533*t6549;
  t6559 = t6526 + t6550;
  t6585 = t6474*t6533;
  t6586 = t4119*t6491*t6549;
  t6625 = t6585 + t6586;
  t4297 = Cos(var1[4]);
  t4706 = Sin(var1[13]);
  t6739 = Cos(var1[13]);
  t6799 = t5442*t6559;
  t6823 = t6118*t6625;
  t6827 = t6799 + t6823;
  t6847 = Cos(var1[14]);
  t6935 = -1.*t4119*t4297*t4706;
  t6937 = t6739*t6827;
  t6938 = t6935 + t6937;
  t6989 = Sin(var1[14]);
  t7021 = t6739*t4119*t4297;
  t7024 = t4706*t6827;
  t7050 = t7021 + t7024;
  t5591 = 0.15121*t5588;
  t6462 = t5591 + t6431;
  t6569 = -0.15121*t5588;
  t6583 = t6569 + t6431;
  t7099 = t6474*t6533*t6491;
  t7250 = t4119*t6549;
  t9567 = t7099 + t7250;
  t10241 = t4119*t6474;
  t10292 = -1.*t6533*t6491*t6549;
  t10295 = t10241 + t10292;
  t6796 = -1.*t6739;
  t6797 = 1. + t6796;
  t6848 = -1.*t6847;
  t6853 = 1. + t6848;
  t10695 = t5442*t9567;
  t10699 = t6118*t10295;
  t10700 = t10695 + t10699;
  t10718 = t4297*t4706*t6533;
  t10720 = t6739*t10700;
  t10721 = t10718 + t10720;
  t10727 = -1.*t6739*t4297*t6533;
  t10728 = t4706*t10700;
  t10737 = t10727 + t10728;
  t14055 = t5442*t4297*t6474;
  t14186 = -1.*t4297*t6118*t6549;
  t14237 = t14055 + t14186;
  t14696 = -1.*t4706*t6491;
  t14944 = t6739*t14237;
  t15026 = t14696 + t14944;
  t15109 = t6739*t6491;
  t15116 = t4706*t14237;
  t15117 = t15109 + t15116;
  p_output1[0]=0.28121*t4119*t4297*t4706 + t6462*t6559 + t6583*t6625 - 0.15121*(-1.*t6118*t6559 + t5442*t6625) + 0.28121*t6797*t6827 + 0.50321*t6853*t6938 - 0.50321*t6989*t7050 + 0.19821*(t6847*t6938 + t6989*t7050) + var1[2] - 0.5*(-0.28121*t4297*t4706*t6533 + t10295*t6583 + 0.28121*t10700*t6797 + 0.50321*t10721*t6853 - 0.50321*t10737*t6989 + 0.19821*(t10721*t6847 + t10737*t6989) + t6462*t9567 - 0.15121*(t10295*t5442 - 1.*t6118*t9567) + var1[1])*var3[0]*(1. + Tanh((t4297*t6462*t6474 + 0.28121*t4706*t6491 - 0.15121*(-1.*t4297*t6118*t6474 - 1.*t4297*t5442*t6549) - 1.*t4297*t6549*t6583 + 0.28121*t14237*t6797 + 0.50321*t15026*t6853 - 0.50321*t15117*t6989 + 0.19821*(t15026*t6847 + t15117*t6989) + var1[0] - 1.*var2[0])*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_frontSwingFootHeightskewed_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeightskewed_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
