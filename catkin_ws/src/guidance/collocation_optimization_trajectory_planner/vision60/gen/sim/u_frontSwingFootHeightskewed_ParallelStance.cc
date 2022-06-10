/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:06:53 GMT+02:00
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
  double t40624;
  double t40913;
  double t40608;
  double t40630;
  double t41159;
  double t41501;
  double t41880;
  double t41886;
  double t41891;
  double t41896;
  double t41897;
  double t40074;
  double t40691;
  double t41182;
  double t41323;
  double t41910;
  double t41912;
  double t41913;
  double t41915;
  double t41926;
  double t41937;
  double t41938;
  double t41945;
  double t41950;
  double t41951;
  double t41975;
  double t41977;
  double t40286;
  double t40287;
  double t41503;
  double t41775;
  double t42008;
  double t42009;
  double t42011;
  double t41932;
  double t41933;
  double t42001;
  double t42004;
  double t42005;
  double t44496;
  double t44497;
  double t44498;
  double t44506;
  double t44513;
  double t44515;
  double t44520;
  double t44524;
  double t44527;
  double t44693;
  double t44694;
  double t44695;
  double t44703;
  double t44704;
  double t44708;
  double t44711;
  double t44713;
  double t44714;
  t40624 = Cos(var1[5]);
  t40913 = Sin(var1[3]);
  t40608 = Cos(var1[3]);
  t40630 = Sin(var1[4]);
  t41159 = Sin(var1[5]);
  t41501 = Cos(var1[6]);
  t41880 = t40624*t40913;
  t41886 = t40608*t40630*t41159;
  t41891 = t41880 + t41886;
  t41896 = Cos(var1[4]);
  t41897 = Sin(var1[6]);
  t40074 = Cos(var1[7]);
  t40691 = -1.*t40608*t40624*t40630;
  t41182 = t40913*t41159;
  t41323 = t40691 + t41182;
  t41910 = t40608*t41896*t41501;
  t41912 = -1.*t41891*t41897;
  t41913 = t41910 + t41912;
  t41915 = Sin(var1[7]);
  t41926 = Cos(var1[8]);
  t41937 = t40074*t41323;
  t41938 = t41913*t41915;
  t41945 = t41937 + t41938;
  t41950 = t40074*t41913;
  t41951 = -1.*t41323*t41915;
  t41975 = t41950 + t41951;
  t41977 = Sin(var1[8]);
  t40286 = -1.*t40074;
  t40287 = 1. + t40286;
  t41503 = -1.*t41501;
  t41775 = 1. + t41503;
  t42008 = t40608*t40624;
  t42009 = -1.*t40913*t40630*t41159;
  t42011 = t42008 + t42009;
  t41932 = -1.*t41926;
  t41933 = 1. + t41932;
  t42001 = t40624*t40913*t40630;
  t42004 = t40608*t41159;
  t42005 = t42001 + t42004;
  t44496 = -1.*t41896*t41501*t40913;
  t44497 = -1.*t42011*t41897;
  t44498 = t44496 + t44497;
  t44506 = t40074*t42005;
  t44513 = t44498*t41915;
  t44515 = t44506 + t44513;
  t44520 = t40074*t44498;
  t44524 = -1.*t42005*t41915;
  t44527 = t44520 + t44524;
  t44693 = t41501*t40630;
  t44694 = t41896*t41159*t41897;
  t44695 = t44693 + t44694;
  t44703 = t41896*t40624*t40074;
  t44704 = t44695*t41915;
  t44708 = t44703 + t44704;
  t44711 = t40074*t44695;
  t44713 = -1.*t41896*t40624*t41915;
  t44714 = t44711 + t44713;
  p_output1[0]=0.325*t40287*t41323 + 0.1575*t41775*t41891 - 0.1575*t40608*t41896*t41897 + 0.2255*(t41501*t41891 + t40608*t41896*t41897) - 0.325*t41913*t41915 + 0.075*t41933*t41945 + 0.075*t41975*t41977 - 0.0641*(t41926*t41975 + t41945*t41977) + 0.355*(t41926*t41945 - 1.*t41975*t41977) + var1[2] - 0.5*(0.1575*t40913*t41896*t41897 + 0.325*t40287*t42005 + 0.1575*t41775*t42011 + 0.2255*(-1.*t40913*t41896*t41897 + t41501*t42011) - 0.325*t41915*t44498 + 0.075*t41933*t44515 + 0.075*t41977*t44527 - 0.0641*(t41977*t44515 + t41926*t44527) + 0.355*(t41926*t44515 - 1.*t41977*t44527) + var1[1])*var3[0]*(1. + Tanh((0.325*t40287*t40624*t41896 - 0.1575*t41159*t41775*t41896 - 0.1575*t40630*t41897 + 0.2255*(-1.*t41159*t41501*t41896 + t40630*t41897) - 0.325*t41915*t44695 + 0.075*t41933*t44708 + 0.075*t41977*t44714 - 0.0641*(t41977*t44708 + t41926*t44714) + 0.355*(t41926*t44708 - 1.*t41977*t44714) + var1[0] - 1.*var2[0])*var4[0]));
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
