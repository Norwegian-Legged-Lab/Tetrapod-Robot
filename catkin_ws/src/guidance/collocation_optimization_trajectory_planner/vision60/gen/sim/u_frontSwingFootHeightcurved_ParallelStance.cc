/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:08:29 GMT+02:00
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
  double t32563;
  double t36310;
  double t26511;
  double t33540;
  double t36312;
  double t37187;
  double t37247;
  double t37253;
  double t37255;
  double t37300;
  double t37307;
  double t4769;
  double t36090;
  double t36938;
  double t37101;
  double t37326;
  double t37371;
  double t37372;
  double t37570;
  double t37577;
  double t37675;
  double t37723;
  double t37728;
  double t37854;
  double t37869;
  double t37870;
  double t37873;
  double t25280;
  double t25404;
  double t37199;
  double t37235;
  double t37622;
  double t37652;
  double t38051;
  double t38066;
  double t38067;
  double t38096;
  double t38099;
  double t38100;
  double t38105;
  double t38113;
  double t38119;
  double t37907;
  double t37919;
  double t37922;
  double t37923;
  double t37925;
  double t37926;
  double t37927;
  double t37995;
  double t38068;
  double t38101;
  double t38128;
  double t38130;
  double t38163;
  double t38311;
  double t38343;
  double t38344;
  double t38367;
  double t38456;
  double t38458;
  double t38460;
  t32563 = Cos(var1[5]);
  t36310 = Sin(var1[3]);
  t26511 = Cos(var1[3]);
  t33540 = Sin(var1[4]);
  t36312 = Sin(var1[5]);
  t37187 = Cos(var1[6]);
  t37247 = t32563*t36310;
  t37253 = t26511*t33540*t36312;
  t37255 = t37247 + t37253;
  t37300 = Cos(var1[4]);
  t37307 = Sin(var1[6]);
  t4769 = Cos(var1[7]);
  t36090 = -1.*t26511*t32563*t33540;
  t36938 = t36310*t36312;
  t37101 = t36090 + t36938;
  t37326 = t26511*t37300*t37187;
  t37371 = -1.*t37255*t37307;
  t37372 = t37326 + t37371;
  t37570 = Sin(var1[7]);
  t37577 = Cos(var1[8]);
  t37675 = t4769*t37101;
  t37723 = t37372*t37570;
  t37728 = t37675 + t37723;
  t37854 = t4769*t37372;
  t37869 = -1.*t37101*t37570;
  t37870 = t37854 + t37869;
  t37873 = Sin(var1[8]);
  t25280 = -1.*t4769;
  t25404 = 1. + t25280;
  t37199 = -1.*t37187;
  t37235 = 1. + t37199;
  t37622 = -1.*t37577;
  t37652 = 1. + t37622;
  t38051 = t37187*t33540;
  t38066 = t37300*t36312*t37307;
  t38067 = t38051 + t38066;
  t38096 = t37300*t32563*t4769;
  t38099 = t38067*t37570;
  t38100 = t38096 + t38099;
  t38105 = t4769*t38067;
  t38113 = -1.*t37300*t32563*t37570;
  t38119 = t38105 + t38113;
  t37907 = -1.*var2[0];
  t37919 = 0.325*t37300*t32563*t25404;
  t37922 = -0.1575*t37300*t37235*t36312;
  t37923 = -0.1575*t33540*t37307;
  t37925 = -1.*t37300*t37187*t36312;
  t37926 = t33540*t37307;
  t37927 = t37925 + t37926;
  t37995 = 0.2255*t37927;
  t38068 = -0.325*t38067*t37570;
  t38101 = 0.075*t37652*t38100;
  t38128 = 0.075*t38119*t37873;
  t38130 = t37577*t38100;
  t38163 = -1.*t38119*t37873;
  t38311 = t38130 + t38163;
  t38343 = 0.355*t38311;
  t38344 = t37577*t38119;
  t38367 = t38100*t37873;
  t38456 = t38344 + t38367;
  t38458 = -0.0641*t38456;
  t38460 = t37907 + var1[0] + t37919 + t37922 + t37923 + t37995 + t38068 + t38101 + t38128 + t38343 + t38458;
  p_output1[0]=0.325*t25404*t37101 + 0.1575*t37235*t37255 - 0.1575*t26511*t37300*t37307 + 0.2255*(t37187*t37255 + t26511*t37300*t37307) - 0.325*t37372*t37570 + 0.075*t37652*t37728 + 0.075*t37870*t37873 - 0.0641*(t37577*t37870 + t37728*t37873) + 0.355*(t37577*t37728 - 1.*t37870*t37873) + var1[2] - 0.25*Power(t38460,2)*var3[0]*(1. + Tanh(t38460*var4[0]));
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

#include "u_frontSwingFootHeightcurved_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeightcurved_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
