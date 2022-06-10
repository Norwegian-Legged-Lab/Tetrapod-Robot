/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:02:53 GMT+02:00
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
  double t26803;
  double t20185;
  double t29602;
  double t26757;
  double t29666;
  double t32582;
  double t32761;
  double t35259;
  double t35335;
  double t35937;
  double t26771;
  double t29689;
  double t30060;
  double t36991;
  double t37037;
  double t37039;
  double t37066;
  double t37083;
  double t37093;
  double t37094;
  double t37195;
  double t37197;
  double t37233;
  double t37843;
  double t37876;
  double t37893;
  double t38587;
  double t38791;
  double t38803;
  double t38829;
  double t35946;
  double t35947;
  double t37042;
  double t37044;
  double t41624;
  double t41905;
  double t41925;
  double t42256;
  double t42355;
  double t42357;
  double t37078;
  double t37080;
  double t37307;
  double t37840;
  double t52054;
  double t54717;
  double t55962;
  double t56399;
  double t56424;
  double t56781;
  double t57002;
  double t57003;
  double t57133;
  double t57866;
  double t57876;
  double t57877;
  double t57887;
  double t57906;
  double t57944;
  double t57964;
  double t58036;
  double t58039;
  t26803 = Cos(var1[3]);
  t20185 = Cos(var1[5]);
  t29602 = Sin(var1[4]);
  t26757 = Sin(var1[3]);
  t29666 = Sin(var1[5]);
  t32582 = Cos(var1[6]);
  t32761 = -1.*t32582;
  t35259 = 1. + t32761;
  t35335 = 0.15121*t35259;
  t35937 = Sin(var1[6]);
  t26771 = t20185*t26757;
  t29689 = t26803*t29602*t29666;
  t30060 = t26771 + t29689;
  t36991 = -1.*t26803*t20185*t29602;
  t37037 = t26757*t29666;
  t37039 = t36991 + t37037;
  t37066 = Cos(var1[7]);
  t37083 = t32582*t37039;
  t37093 = t30060*t35937;
  t37094 = t37083 + t37093;
  t37195 = Cos(var1[4]);
  t37197 = Sin(var1[7]);
  t37233 = Cos(var1[8]);
  t37843 = t37066*t37094;
  t37876 = -1.*t26803*t37195*t37197;
  t37893 = t37843 + t37876;
  t38587 = t26803*t37195*t37066;
  t38791 = t37094*t37197;
  t38803 = t38587 + t38791;
  t38829 = Sin(var1[8]);
  t35946 = -0.15121*t35937;
  t35947 = t35335 + t35946;
  t37042 = 0.15121*t35937;
  t37044 = t35335 + t37042;
  t41624 = t26803*t20185;
  t41905 = -1.*t26757*t29602*t29666;
  t41925 = t41624 + t41905;
  t42256 = t20185*t26757*t29602;
  t42355 = t26803*t29666;
  t42357 = t42256 + t42355;
  t37078 = -1.*t37066;
  t37080 = 1. + t37078;
  t37307 = -1.*t37233;
  t37840 = 1. + t37307;
  t52054 = t32582*t42357;
  t54717 = t41925*t35937;
  t55962 = t52054 + t54717;
  t56399 = t37066*t55962;
  t56424 = t37195*t26757*t37197;
  t56781 = t56399 + t56424;
  t57002 = -1.*t37195*t37066*t26757;
  t57003 = t55962*t37197;
  t57133 = t57002 + t57003;
  t57866 = t37195*t20185*t32582;
  t57876 = -1.*t37195*t29666*t35937;
  t57877 = t57866 + t57876;
  t57887 = t37066*t57877;
  t57906 = -1.*t29602*t37197;
  t57944 = t57887 + t57906;
  t57964 = t37066*t29602;
  t58036 = t57877*t37197;
  t58039 = t57964 + t58036;
  p_output1[0]=t30060*t35947 + 0.15121*(t30060*t32582 - 1.*t35937*t37039) + t37039*t37044 + 0.28121*t37080*t37094 + 0.28121*t26803*t37195*t37197 + 0.50321*t37840*t37893 - 0.50321*t38803*t38829 + 0.19821*(t37233*t37893 + t38803*t38829) + var1[2] - 0.5*(-0.28121*t26757*t37195*t37197 + t35947*t41925 + t37044*t42357 + 0.15121*(t32582*t41925 - 1.*t35937*t42357) + 0.28121*t37080*t55962 + 0.50321*t37840*t56781 - 0.50321*t38829*t57133 + 0.19821*(t37233*t56781 + t38829*t57133) + var1[1])*var3[0]*(1. + Tanh((-1.*t29666*t35947*t37195 + t20185*t37044*t37195 + 0.15121*(-1.*t29666*t32582*t37195 - 1.*t20185*t35937*t37195) + 0.28121*t29602*t37197 + 0.28121*t37080*t57877 + 0.50321*t37840*t57944 - 0.50321*t38829*t58039 + 0.19821*(t37233*t57944 + t38829*t58039) + var1[0] - 1.*var2[0])*var4[0]));
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

#include "u_frontSwingFootHeightskewed_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeightskewed_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
