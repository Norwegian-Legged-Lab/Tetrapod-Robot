/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:59 GMT+02:00
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
  double t18458;
  double t21753;
  double t26425;
  double t34471;
  double t37635;
  double t39938;
  double t18460;
  double t52440;
  double t41069;
  double t41248;
  double t53616;
  double t53656;
  double t53657;
  double t53658;
  double t53674;
  double t53681;
  double t53682;
  double t53808;
  double t53894;
  double t53926;
  double t53967;
  double t53968;
  double t35915;
  double t41043;
  double t54299;
  double t41599;
  double t52380;
  double t54439;
  double t54436;
  double t54492;
  double t54499;
  double t54509;
  double t54511;
  double t54513;
  double t53641;
  double t53649;
  double t53676;
  double t53678;
  double t54579;
  double t54622;
  double t54628;
  double t54829;
  double t54923;
  double t55990;
  double t56413;
  double t56419;
  double t56420;
  double t56435;
  double t56436;
  double t56439;
  double t56442;
  double t56444;
  double t56446;
  double t56454;
  double t56620;
  double t56621;
  double t56627;
  double t56628;
  double t56630;
  double t56636;
  double t56638;
  double t56639;
  t18458 = Cos(var1[4]);
  t21753 = Cos(var1[12]);
  t26425 = -1.*t21753;
  t34471 = 1. + t26425;
  t37635 = Sin(var1[12]);
  t39938 = -0.15121*t37635;
  t18460 = Cos(var1[5]);
  t52440 = Sin(var1[5]);
  t41069 = Sin(var1[13]);
  t41248 = Sin(var1[4]);
  t53616 = Cos(var1[13]);
  t53656 = t21753*t18458*t18460;
  t53657 = -1.*t18458*t37635*t52440;
  t53658 = t53656 + t53657;
  t53674 = Cos(var1[14]);
  t53681 = -1.*t41069*t41248;
  t53682 = t53616*t53658;
  t53808 = t53681 + t53682;
  t53894 = Sin(var1[14]);
  t53926 = t53616*t41248;
  t53967 = t41069*t53658;
  t53968 = t53926 + t53967;
  t35915 = 0.15121*t34471;
  t41043 = t35915 + t39938;
  t54299 = Sin(var1[3]);
  t41599 = -0.15121*t34471;
  t52380 = t41599 + t39938;
  t54439 = Cos(var1[3]);
  t54436 = t18460*t54299*t41248;
  t54492 = t54439*t52440;
  t54499 = t54436 + t54492;
  t54509 = t54439*t18460;
  t54511 = -1.*t54299*t41248*t52440;
  t54513 = t54509 + t54511;
  t53641 = -1.*t53616;
  t53649 = 1. + t53641;
  t53676 = -1.*t53674;
  t53678 = 1. + t53676;
  t54579 = t21753*t54499;
  t54622 = t37635*t54513;
  t54628 = t54579 + t54622;
  t54829 = t18458*t41069*t54299;
  t54923 = t53616*t54628;
  t55990 = t54829 + t54923;
  t56413 = -1.*t53616*t18458*t54299;
  t56419 = t41069*t54628;
  t56420 = t56413 + t56419;
  t56435 = -1.*t54439*t18460*t41248;
  t56436 = t54299*t52440;
  t56439 = t56435 + t56436;
  t56442 = t18460*t54299;
  t56444 = t54439*t41248*t52440;
  t56446 = t56442 + t56444;
  t56454 = t21753*t56439;
  t56620 = t37635*t56446;
  t56621 = t56454 + t56620;
  t56627 = -1.*t54439*t18458*t41069;
  t56628 = t53616*t56621;
  t56630 = t56627 + t56628;
  t56636 = t53616*t54439*t18458;
  t56638 = t41069*t56621;
  t56639 = t56636 + t56638;
  p_output1[0]=t18458*t18460*t41043 + 0.28121*t41069*t41248 - 1.*t18458*t52380*t52440 - 0.15121*(-1.*t18458*t18460*t37635 - 1.*t18458*t21753*t52440) + 0.28121*t53649*t53658 + 0.50321*t53678*t53808 - 0.50321*t53894*t53968 + 0.23321*(t53674*t53808 + t53894*t53968) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t18458*t41069*t54299 + t41043*t54499 + t52380*t54513 - 0.15121*(-1.*t37635*t54499 + t21753*t54513) + 0.28121*t53649*t54628 + 0.50321*t53678*t55990 - 0.50321*t53894*t56420 + 0.23321*(t53674*t55990 + t53894*t56420) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t18458*t41069*t54439 + t41043*t56439 + t52380*t56446 - 0.15121*(-1.*t37635*t56439 + t21753*t56446) + 0.28121*t53649*t56621 + 0.50321*t53678*t56630 - 0.50321*t53894*t56639 + 0.23321*(t53674*t56630 + t53894*t56639) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
