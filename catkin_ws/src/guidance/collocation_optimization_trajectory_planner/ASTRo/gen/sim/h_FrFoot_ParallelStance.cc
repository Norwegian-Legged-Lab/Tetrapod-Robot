/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:31 GMT+02:00
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
  double t1577;
  double t1604;
  double t2039;
  double t4392;
  double t19560;
  double t19569;
  double t1585;
  double t40197;
  double t40175;
  double t40181;
  double t40228;
  double t40233;
  double t40236;
  double t40237;
  double t40260;
  double t40271;
  double t40276;
  double t40290;
  double t40315;
  double t40318;
  double t40319;
  double t40474;
  double t19556;
  double t19578;
  double t40532;
  double t40194;
  double t40195;
  double t40539;
  double t40538;
  double t40550;
  double t40552;
  double t40564;
  double t40567;
  double t40570;
  double t40231;
  double t40232;
  double t40261;
  double t40266;
  double t40589;
  double t40591;
  double t40592;
  double t40594;
  double t40595;
  double t40596;
  double t40598;
  double t40599;
  double t40600;
  double t40610;
  double t40611;
  double t40612;
  double t40615;
  double t40616;
  double t40617;
  double t40625;
  double t40626;
  double t40627;
  double t40630;
  double t40633;
  double t40634;
  double t40639;
  double t40651;
  double t40653;
  t1577 = Cos(var1[4]);
  t1604 = Cos(var1[12]);
  t2039 = -1.*t1604;
  t4392 = 1. + t2039;
  t19560 = Sin(var1[12]);
  t19569 = -0.15121*t19560;
  t1585 = Cos(var1[5]);
  t40197 = Sin(var1[5]);
  t40175 = Sin(var1[13]);
  t40181 = Sin(var1[4]);
  t40228 = Cos(var1[13]);
  t40233 = t1604*t1577*t1585;
  t40236 = -1.*t1577*t19560*t40197;
  t40237 = t40233 + t40236;
  t40260 = Cos(var1[14]);
  t40271 = -1.*t40175*t40181;
  t40276 = t40228*t40237;
  t40290 = t40271 + t40276;
  t40315 = Sin(var1[14]);
  t40318 = t40228*t40181;
  t40319 = t40175*t40237;
  t40474 = t40318 + t40319;
  t19556 = 0.15121*t4392;
  t19578 = t19556 + t19569;
  t40532 = Sin(var1[3]);
  t40194 = -0.15121*t4392;
  t40195 = t40194 + t19569;
  t40539 = Cos(var1[3]);
  t40538 = t1585*t40532*t40181;
  t40550 = t40539*t40197;
  t40552 = t40538 + t40550;
  t40564 = t40539*t1585;
  t40567 = -1.*t40532*t40181*t40197;
  t40570 = t40564 + t40567;
  t40231 = -1.*t40228;
  t40232 = 1. + t40231;
  t40261 = -1.*t40260;
  t40266 = 1. + t40261;
  t40589 = t1604*t40552;
  t40591 = t19560*t40570;
  t40592 = t40589 + t40591;
  t40594 = t1577*t40175*t40532;
  t40595 = t40228*t40592;
  t40596 = t40594 + t40595;
  t40598 = -1.*t40228*t1577*t40532;
  t40599 = t40175*t40592;
  t40600 = t40598 + t40599;
  t40610 = -1.*t40539*t1585*t40181;
  t40611 = t40532*t40197;
  t40612 = t40610 + t40611;
  t40615 = t1585*t40532;
  t40616 = t40539*t40181*t40197;
  t40617 = t40615 + t40616;
  t40625 = t1604*t40612;
  t40626 = t19560*t40617;
  t40627 = t40625 + t40626;
  t40630 = -1.*t40539*t1577*t40175;
  t40633 = t40228*t40627;
  t40634 = t40630 + t40633;
  t40639 = t40228*t40539*t1577;
  t40651 = t40175*t40627;
  t40653 = t40639 + t40651;
  p_output1[0]=t1577*t1585*t19578 + 0.28121*t40175*t40181 - 1.*t1577*t40195*t40197 - 0.15121*(-1.*t1577*t1585*t19560 - 1.*t1577*t1604*t40197) + 0.28121*t40232*t40237 + 0.50321*t40266*t40290 - 0.50321*t40315*t40474 + 0.23321*(t40260*t40290 + t40315*t40474) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t1577*t40175*t40532 + t19578*t40552 + t40195*t40570 - 0.15121*(-1.*t19560*t40552 + t1604*t40570) + 0.28121*t40232*t40592 + 0.50321*t40266*t40596 - 0.50321*t40315*t40600 + 0.23321*(t40260*t40596 + t40315*t40600) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t1577*t40175*t40539 + t19578*t40612 + t40195*t40617 - 0.15121*(-1.*t19560*t40612 + t1604*t40617) + 0.28121*t40232*t40627 + 0.50321*t40266*t40634 - 0.50321*t40315*t40653 + 0.23321*(t40260*t40634 + t40315*t40653) + var1[2] - 1.*var2[2];
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
