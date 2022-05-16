/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:04 GMT+02:00
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
  double t4408;
  double t51637;
  double t53461;
  double t53497;
  double t53501;
  double t53577;
  double t5160;
  double t53597;
  double t53621;
  double t53624;
  double t53625;
  double t53626;
  double t53629;
  double t53633;
  double t53635;
  double t53638;
  double t53680;
  double t53684;
  double t53686;
  double t53697;
  double t53698;
  double t53699;
  double t53586;
  double t53587;
  double t53722;
  double t53720;
  double t53604;
  double t53605;
  double t53721;
  double t53726;
  double t53730;
  double t53734;
  double t53737;
  double t53738;
  double t53622;
  double t53623;
  double t53636;
  double t53637;
  double t53748;
  double t53749;
  double t53750;
  double t53753;
  double t53755;
  double t53756;
  double t53759;
  double t53761;
  double t53762;
  double t53770;
  double t53771;
  double t53773;
  double t53775;
  double t53777;
  double t53778;
  double t53784;
  double t53786;
  double t53788;
  double t53794;
  double t53796;
  double t53797;
  double t53800;
  double t53802;
  double t53803;
  t4408 = Cos(var1[4]);
  t51637 = Cos(var1[6]);
  t53461 = -1.*t51637;
  t53497 = 1. + t53461;
  t53501 = 0.15121*t53497;
  t53577 = Sin(var1[6]);
  t5160 = Sin(var1[5]);
  t53597 = Cos(var1[5]);
  t53621 = Cos(var1[7]);
  t53624 = t4408*t53597*t51637;
  t53625 = -1.*t4408*t5160*t53577;
  t53626 = t53624 + t53625;
  t53629 = Sin(var1[4]);
  t53633 = Sin(var1[7]);
  t53635 = Cos(var1[8]);
  t53638 = t53621*t53626;
  t53680 = -1.*t53629*t53633;
  t53684 = t53638 + t53680;
  t53686 = t53621*t53629;
  t53697 = t53626*t53633;
  t53698 = t53686 + t53697;
  t53699 = Sin(var1[8]);
  t53586 = -0.15121*t53577;
  t53587 = t53501 + t53586;
  t53722 = Sin(var1[3]);
  t53720 = Cos(var1[3]);
  t53604 = 0.15121*t53577;
  t53605 = t53501 + t53604;
  t53721 = t53720*t53597;
  t53726 = -1.*t53722*t53629*t5160;
  t53730 = t53721 + t53726;
  t53734 = t53597*t53722*t53629;
  t53737 = t53720*t5160;
  t53738 = t53734 + t53737;
  t53622 = -1.*t53621;
  t53623 = 1. + t53622;
  t53636 = -1.*t53635;
  t53637 = 1. + t53636;
  t53748 = t51637*t53738;
  t53749 = t53730*t53577;
  t53750 = t53748 + t53749;
  t53753 = t53621*t53750;
  t53755 = t4408*t53722*t53633;
  t53756 = t53753 + t53755;
  t53759 = -1.*t4408*t53621*t53722;
  t53761 = t53750*t53633;
  t53762 = t53759 + t53761;
  t53770 = t53597*t53722;
  t53771 = t53720*t53629*t5160;
  t53773 = t53770 + t53771;
  t53775 = -1.*t53720*t53597*t53629;
  t53777 = t53722*t5160;
  t53778 = t53775 + t53777;
  t53784 = t51637*t53778;
  t53786 = t53773*t53577;
  t53788 = t53784 + t53786;
  t53794 = t53621*t53788;
  t53796 = -1.*t53720*t4408*t53633;
  t53797 = t53794 + t53796;
  t53800 = t53720*t4408*t53621;
  t53802 = t53788*t53633;
  t53803 = t53800 + t53802;
  p_output1[0]=-1.*t4408*t5160*t53587 + 0.15121*(-1.*t4408*t5160*t51637 - 1.*t4408*t53577*t53597) + t4408*t53597*t53605 + 0.28121*t53623*t53626 + 0.28121*t53629*t53633 + 0.50321*t53637*t53684 - 0.50321*t53698*t53699 + 0.23321*(t53635*t53684 + t53698*t53699) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t4408*t53633*t53722 + t53587*t53730 + t53605*t53738 + 0.15121*(t51637*t53730 - 1.*t53577*t53738) + 0.28121*t53623*t53750 + 0.50321*t53637*t53756 - 0.50321*t53699*t53762 + 0.23321*(t53635*t53756 + t53699*t53762) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t4408*t53633*t53720 + t53587*t53773 + t53605*t53778 + 0.15121*(t51637*t53773 - 1.*t53577*t53778) + 0.28121*t53623*t53788 + 0.50321*t53637*t53797 - 0.50321*t53699*t53803 + 0.23321*(t53635*t53797 + t53699*t53803) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
