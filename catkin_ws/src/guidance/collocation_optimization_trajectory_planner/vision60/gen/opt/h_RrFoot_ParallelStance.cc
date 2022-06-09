/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:47 GMT+02:00
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
  double t12888;
  double t12993;
  double t13001;
  double t13006;
  double t13347;
  double t12984;
  double t13526;
  double t12236;
  double t13540;
  double t13542;
  double t13550;
  double t13567;
  double t13616;
  double t13618;
  double t13622;
  double t13628;
  double t13637;
  double t13638;
  double t13639;
  double t12754;
  double t12830;
  double t18816;
  double t13010;
  double t13013;
  double t18826;
  double t18887;
  double t18888;
  double t18892;
  double t18819;
  double t18880;
  double t18884;
  double t18933;
  double t18934;
  double t18935;
  double t13635;
  double t13636;
  double t18937;
  double t18938;
  double t18941;
  double t18943;
  double t18949;
  double t18953;
  double t19392;
  double t19394;
  double t19398;
  double t19138;
  double t19155;
  double t19251;
  double t19404;
  double t19405;
  double t19406;
  double t19412;
  double t19415;
  double t19416;
  double t19419;
  double t19426;
  double t19429;
  t12888 = Cos(var1[4]);
  t12993 = Sin(var1[15]);
  t13001 = Sin(var1[4]);
  t13006 = Cos(var1[15]);
  t13347 = Sin(var1[5]);
  t12984 = Cos(var1[5]);
  t13526 = Sin(var1[16]);
  t12236 = Cos(var1[16]);
  t13540 = t13006*t13001;
  t13542 = t12888*t12993*t13347;
  t13550 = t13540 + t13542;
  t13567 = Sin(var1[17]);
  t13616 = -1.*t12888*t12984*t13526;
  t13618 = t12236*t13550;
  t13622 = t13616 + t13618;
  t13628 = Cos(var1[17]);
  t13637 = t12236*t12888*t12984;
  t13638 = t13526*t13550;
  t13639 = t13637 + t13638;
  t12754 = -1.*t12236;
  t12830 = 1. + t12754;
  t18816 = Sin(var1[3]);
  t13010 = -1.*t13006;
  t13013 = 1. + t13010;
  t18826 = Cos(var1[3]);
  t18887 = t18826*t12984;
  t18888 = -1.*t18816*t13001*t13347;
  t18892 = t18887 + t18888;
  t18819 = t12984*t18816*t13001;
  t18880 = t18826*t13347;
  t18884 = t18819 + t18880;
  t18933 = -1.*t13006*t12888*t18816;
  t18934 = -1.*t12993*t18892;
  t18935 = t18933 + t18934;
  t13635 = -1.*t13628;
  t13636 = 1. + t13635;
  t18937 = -1.*t13526*t18884;
  t18938 = t12236*t18935;
  t18941 = t18937 + t18938;
  t18943 = t12236*t18884;
  t18949 = t13526*t18935;
  t18953 = t18943 + t18949;
  t19392 = t12984*t18816;
  t19394 = t18826*t13001*t13347;
  t19398 = t19392 + t19394;
  t19138 = -1.*t18826*t12984*t13001;
  t19155 = t18816*t13347;
  t19251 = t19138 + t19155;
  t19404 = t13006*t18826*t12888;
  t19405 = -1.*t12993*t19398;
  t19406 = t19404 + t19405;
  t19412 = -1.*t13526*t19251;
  t19415 = t12236*t19406;
  t19416 = t19412 + t19415;
  t19419 = t12236*t19251;
  t19426 = t13526*t19406;
  t19429 = t19419 + t19426;
  p_output1[0]=-0.325*t12830*t12888*t12984 + 0.1575*t12993*t13001 + 0.1575*t12888*t13013*t13347 - 0.2255*(t12993*t13001 - 1.*t12888*t13006*t13347) + 0.325*t13526*t13550 - 0.575*t13567*t13622 - 0.575*t13636*t13639 - 0.0641*(t13622*t13628 + t13567*t13639) - 0.295*(-1.*t13567*t13622 + t13628*t13639) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t12888*t12993*t18816 - 0.325*t12830*t18884 - 0.1575*t13013*t18892 - 0.2255*(-1.*t12888*t12993*t18816 + t13006*t18892) + 0.325*t13526*t18935 - 0.575*t13567*t18941 - 0.575*t13636*t18953 - 0.0641*(t13628*t18941 + t13567*t18953) - 0.295*(-1.*t13567*t18941 + t13628*t18953) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t12888*t12993*t18826 - 0.325*t12830*t19251 - 0.1575*t13013*t19398 - 0.2255*(t12888*t12993*t18826 + t13006*t19398) + 0.325*t13526*t19406 - 0.575*t13567*t19416 - 0.575*t13636*t19429 - 0.0641*(t13628*t19416 + t13567*t19429) - 0.295*(-1.*t13567*t19416 + t13628*t19429) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
