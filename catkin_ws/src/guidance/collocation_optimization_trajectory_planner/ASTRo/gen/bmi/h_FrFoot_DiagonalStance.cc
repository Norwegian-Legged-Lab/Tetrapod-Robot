/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:03 GMT+02:00
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
  double t65;
  double t78;
  double t83;
  double t90;
  double t100;
  double t105;
  double t75;
  double t152;
  double t134;
  double t141;
  double t192;
  double t204;
  double t621;
  double t1851;
  double t2711;
  double t2893;
  double t3062;
  double t3289;
  double t3365;
  double t3391;
  double t3457;
  double t3459;
  double t98;
  double t108;
  double t4565;
  double t147;
  double t151;
  double t4603;
  double t4579;
  double t4635;
  double t4653;
  double t4793;
  double t4895;
  double t5046;
  double t195;
  double t196;
  double t2788;
  double t2833;
  double t5117;
  double t5121;
  double t5266;
  double t5337;
  double t5338;
  double t5340;
  double t5351;
  double t5352;
  double t5399;
  double t5507;
  double t5509;
  double t5510;
  double t5538;
  double t5540;
  double t5544;
  double t5567;
  double t5570;
  double t5574;
  double t5585;
  double t5590;
  double t5591;
  double t5597;
  double t5598;
  double t5604;
  t65 = Cos(var1[4]);
  t78 = Cos(var1[12]);
  t83 = -1.*t78;
  t90 = 1. + t83;
  t100 = Sin(var1[12]);
  t105 = -0.15121*t100;
  t75 = Cos(var1[5]);
  t152 = Sin(var1[5]);
  t134 = Sin(var1[13]);
  t141 = Sin(var1[4]);
  t192 = Cos(var1[13]);
  t204 = t78*t65*t75;
  t621 = -1.*t65*t100*t152;
  t1851 = t204 + t621;
  t2711 = Cos(var1[14]);
  t2893 = -1.*t134*t141;
  t3062 = t192*t1851;
  t3289 = t2893 + t3062;
  t3365 = Sin(var1[14]);
  t3391 = t192*t141;
  t3457 = t134*t1851;
  t3459 = t3391 + t3457;
  t98 = 0.15121*t90;
  t108 = t98 + t105;
  t4565 = Sin(var1[3]);
  t147 = -0.15121*t90;
  t151 = t147 + t105;
  t4603 = Cos(var1[3]);
  t4579 = t75*t4565*t141;
  t4635 = t4603*t152;
  t4653 = t4579 + t4635;
  t4793 = t4603*t75;
  t4895 = -1.*t4565*t141*t152;
  t5046 = t4793 + t4895;
  t195 = -1.*t192;
  t196 = 1. + t195;
  t2788 = -1.*t2711;
  t2833 = 1. + t2788;
  t5117 = t78*t4653;
  t5121 = t100*t5046;
  t5266 = t5117 + t5121;
  t5337 = t65*t134*t4565;
  t5338 = t192*t5266;
  t5340 = t5337 + t5338;
  t5351 = -1.*t192*t65*t4565;
  t5352 = t134*t5266;
  t5399 = t5351 + t5352;
  t5507 = -1.*t4603*t75*t141;
  t5509 = t4565*t152;
  t5510 = t5507 + t5509;
  t5538 = t75*t4565;
  t5540 = t4603*t141*t152;
  t5544 = t5538 + t5540;
  t5567 = t78*t5510;
  t5570 = t100*t5544;
  t5574 = t5567 + t5570;
  t5585 = -1.*t4603*t65*t134;
  t5590 = t192*t5574;
  t5591 = t5585 + t5590;
  t5597 = t192*t4603*t65;
  t5598 = t134*t5574;
  t5604 = t5597 + t5598;
  p_output1[0]=0.28121*t134*t141 + 0.28121*t1851*t196 + 0.50321*t2833*t3289 - 0.50321*t3365*t3459 + 0.19821*(t2711*t3289 + t3365*t3459) - 1.*t151*t152*t65 + t108*t65*t75 - 0.15121*(-1.*t100*t65*t75 - 1.*t152*t65*t78) + var1[0] - 1.*var2[0];
  p_output1[1]=t108*t4653 + t151*t5046 + 0.28121*t196*t5266 + 0.50321*t2833*t5340 - 0.50321*t3365*t5399 + 0.19821*(t2711*t5340 + t3365*t5399) - 0.28121*t134*t4565*t65 - 0.15121*(-1.*t100*t4653 + t5046*t78) + var1[1] - 1.*var2[1];
  p_output1[2]=t108*t5510 + t151*t5544 + 0.28121*t196*t5574 + 0.50321*t2833*t5591 - 0.50321*t3365*t5604 + 0.19821*(t2711*t5591 + t3365*t5604) + 0.28121*t134*t4603*t65 - 0.15121*(-1.*t100*t5510 + t5544*t78) + var1[2] - 1.*var2[2];
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
