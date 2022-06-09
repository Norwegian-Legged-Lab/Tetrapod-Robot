/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:08:16 GMT+02:00
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
static void output1(double *p_output1,const double *var1)
{
  double t18655;
  double t18693;
  double t18690;
  double t18691;
  double t18819;
  double t18633;
  double t18654;
  double t19524;
  double t19659;
  double t19683;
  double t19697;
  double t19736;
  double t18692;
  double t18934;
  double t18938;
  double t18684;
  double t19738;
  double t19752;
  double t19800;
  double t19857;
  double t19867;
  double t19869;
  double t19881;
  double t19927;
  double t19960;
  double t19964;
  double t19975;
  double t18685;
  double t18689;
  double t19648;
  double t19653;
  double t20207;
  double t20210;
  double t20211;
  double t19942;
  double t19958;
  double t20219;
  double t20225;
  double t20226;
  double t20243;
  double t20250;
  double t20253;
  double t20312;
  double t20314;
  double t20316;
  double t20321;
  double t20322;
  double t20323;
  double t20338;
  double t20340;
  double t20341;
  double t20346;
  double t20347;
  double t20351;
  double t20423;
  double t20425;
  double t20434;
  double t20449;
  double t20450;
  double t20453;
  double t20515;
  double t20525;
  double t20535;
  double t20561;
  double t20569;
  double t20580;
  double t20600;
  double t20610;
  double t20620;
  double t20846;
  double t20850;
  double t20890;
  t18655 = Sin(var1[3]);
  t18693 = Cos(var1[3]);
  t18690 = Cos(var1[5]);
  t18691 = Sin(var1[4]);
  t18819 = Sin(var1[5]);
  t18633 = Cos(var1[4]);
  t18654 = Sin(var1[9]);
  t19524 = Cos(var1[9]);
  t19659 = t18693*t18690;
  t19683 = -1.*t18655*t18691*t18819;
  t19697 = t19659 + t19683;
  t19736 = Sin(var1[10]);
  t18692 = t18690*t18655*t18691;
  t18934 = t18693*t18819;
  t18938 = t18692 + t18934;
  t18684 = Cos(var1[10]);
  t19738 = -1.*t19524*t18633*t18655;
  t19752 = -1.*t18654*t19697;
  t19800 = t19738 + t19752;
  t19857 = Sin(var1[11]);
  t19867 = -1.*t19736*t18938;
  t19869 = t18684*t19800;
  t19881 = t19867 + t19869;
  t19927 = Cos(var1[11]);
  t19960 = t18684*t18938;
  t19964 = t19736*t19800;
  t19975 = t19960 + t19964;
  t18685 = -1.*t18684;
  t18689 = 1. + t18685;
  t19648 = -1.*t19524;
  t19653 = 1. + t19648;
  t20207 = -1.*t19524*t18693*t18691;
  t20210 = -1.*t18693*t18633*t18654*t18819;
  t20211 = t20207 + t20210;
  t19942 = -1.*t19927;
  t19958 = 1. + t19942;
  t20219 = t18693*t18633*t18690*t19736;
  t20225 = t18684*t20211;
  t20226 = t20219 + t20225;
  t20243 = -1.*t18684*t18693*t18633*t18690;
  t20250 = t19736*t20211;
  t20253 = t20243 + t20250;
  t20312 = t18693*t18690*t18691;
  t20314 = -1.*t18655*t18819;
  t20316 = t20312 + t20314;
  t20321 = t18690*t18655;
  t20322 = t18693*t18691*t18819;
  t20323 = t20321 + t20322;
  t20338 = -1.*t18654*t19736*t20316;
  t20340 = t18684*t20323;
  t20341 = t20338 + t20340;
  t20346 = -1.*t18684*t18654*t20316;
  t20347 = -1.*t19736*t20323;
  t20351 = t20346 + t20347;
  t20423 = -1.*t18693*t18633*t18654;
  t20425 = -1.*t19524*t20323;
  t20434 = t20423 + t20425;
  t20449 = t19524*t18693*t18633;
  t20450 = -1.*t18654*t20323;
  t20453 = t20449 + t20450;
  t20515 = -1.*t18693*t18690*t18691;
  t20525 = t18655*t18819;
  t20535 = t20515 + t20525;
  t20561 = -1.*t19736*t20535;
  t20569 = t18684*t20453;
  t20580 = t20561 + t20569;
  t20600 = -1.*t18684*t20535;
  t20610 = -1.*t19736*t20453;
  t20620 = t20600 + t20610;
  t20846 = t18684*t20535;
  t20850 = t19736*t20453;
  t20890 = t20846 + t20850;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t18633*t18654*t18655 - 0.325*t18689*t18938 + 0.1575*t19653*t19697 + 0.2255*(-1.*t18633*t18654*t18655 + t19524*t19697) + 0.325*t19736*t19800 - 0.575*t19857*t19881 - 0.575*t19958*t19975 - 0.0641*(t19881*t19927 + t19857*t19975) - 0.295*(-1.*t19857*t19881 + t19927*t19975);
  p_output1[2]=0.325*t18633*t18689*t18690*t18693 + 0.1575*t18654*t18691*t18693 + 0.2255*(-1.*t18654*t18691*t18693 + t18633*t18693*t18819*t19524) + 0.1575*t18633*t18693*t18819*t19653 + 0.325*t19736*t20211 - 0.575*t19857*t20226 - 0.575*t19958*t20253 - 0.0641*(t19927*t20226 + t19857*t20253) - 0.295*(-1.*t19857*t20226 + t19927*t20253);
  p_output1[3]=0.2255*t19524*t20316 + 0.1575*t19653*t20316 - 0.325*t18654*t19736*t20316 - 0.325*t18689*t20323 - 0.575*t19958*t20341 - 0.575*t19857*t20351 - 0.295*(t19927*t20341 - 1.*t19857*t20351) - 0.0641*(t19857*t20341 + t19927*t20351);
  p_output1[4]=-0.1575*t18633*t18693*t19524 + 0.1575*t18654*t20323 + 0.325*t19736*t20434 - 0.575*t18684*t19857*t20434 - 0.575*t19736*t19958*t20434 - 0.0641*(t19736*t19857*t20434 + t18684*t19927*t20434) - 0.295*(-1.*t18684*t19857*t20434 + t19736*t19927*t20434) + 0.2255*t20453;
  p_output1[5]=0.325*t18684*t20453 - 0.325*t19736*t20535 - 0.575*t19958*t20580 - 0.575*t19857*t20620 - 0.295*(t19927*t20580 - 1.*t19857*t20620) - 0.0641*(t19857*t20580 + t19927*t20620);
  p_output1[6]=-0.575*t19927*t20580 - 0.575*t19857*t20890 - 0.295*(-1.*t19927*t20580 - 1.*t19857*t20890) - 0.0641*(-1.*t19857*t20580 + t19927*t20890);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
