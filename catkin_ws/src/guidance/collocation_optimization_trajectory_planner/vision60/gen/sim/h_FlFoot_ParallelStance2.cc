/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:19 GMT+02:00
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
  double t23883;
  double t24085;
  double t24112;
  double t24114;
  double t24123;
  double t23939;
  double t24058;
  double t24143;
  double t24145;
  double t24146;
  double t24150;
  double t24153;
  double t24157;
  double t24158;
  double t24159;
  double t24215;
  double t24219;
  double t24220;
  double t24221;
  double t24066;
  double t24069;
  double t24086;
  double t24094;
  double t24242;
  double t24240;
  double t24247;
  double t24248;
  double t24249;
  double t24154;
  double t24155;
  double t24241;
  double t24243;
  double t24244;
  double t24257;
  double t24262;
  double t24263;
  double t24267;
  double t24272;
  double t24273;
  double t24280;
  double t24282;
  double t24283;
  double t24323;
  double t24327;
  double t24328;
  double t24313;
  double t24314;
  double t24315;
  double t24338;
  double t24339;
  double t24340;
  double t24342;
  double t24343;
  double t24345;
  double t24350;
  double t24353;
  double t24355;
  t23883 = Cos(var1[4]);
  t24085 = Cos(var1[6]);
  t24112 = Sin(var1[5]);
  t24114 = Sin(var1[4]);
  t24123 = Sin(var1[6]);
  t23939 = Cos(var1[5]);
  t24058 = Cos(var1[7]);
  t24143 = t24085*t24114;
  t24145 = t23883*t24112*t24123;
  t24146 = t24143 + t24145;
  t24150 = Sin(var1[7]);
  t24153 = Cos(var1[8]);
  t24157 = t23883*t23939*t24058;
  t24158 = t24146*t24150;
  t24159 = t24157 + t24158;
  t24215 = t24058*t24146;
  t24219 = -1.*t23883*t23939*t24150;
  t24220 = t24215 + t24219;
  t24221 = Sin(var1[8]);
  t24066 = -1.*t24058;
  t24069 = 1. + t24066;
  t24086 = -1.*t24085;
  t24094 = 1. + t24086;
  t24242 = Cos(var1[3]);
  t24240 = Sin(var1[3]);
  t24247 = t24242*t23939;
  t24248 = -1.*t24240*t24114*t24112;
  t24249 = t24247 + t24248;
  t24154 = -1.*t24153;
  t24155 = 1. + t24154;
  t24241 = t23939*t24240*t24114;
  t24243 = t24242*t24112;
  t24244 = t24241 + t24243;
  t24257 = -1.*t23883*t24085*t24240;
  t24262 = -1.*t24249*t24123;
  t24263 = t24257 + t24262;
  t24267 = t24058*t24244;
  t24272 = t24263*t24150;
  t24273 = t24267 + t24272;
  t24280 = t24058*t24263;
  t24282 = -1.*t24244*t24150;
  t24283 = t24280 + t24282;
  t24323 = t23939*t24240;
  t24327 = t24242*t24114*t24112;
  t24328 = t24323 + t24327;
  t24313 = -1.*t24242*t23939*t24114;
  t24314 = t24240*t24112;
  t24315 = t24313 + t24314;
  t24338 = t24242*t23883*t24085;
  t24339 = -1.*t24328*t24123;
  t24340 = t24338 + t24339;
  t24342 = t24058*t24315;
  t24343 = t24340*t24150;
  t24345 = t24342 + t24343;
  t24350 = t24058*t24340;
  t24353 = -1.*t24315*t24150;
  t24355 = t24350 + t24353;
  p_output1[0]=0.325*t23883*t23939*t24069 - 0.1575*t23883*t24094*t24112 - 0.1575*t24114*t24123 + 0.2255*(-1.*t23883*t24085*t24112 + t24114*t24123) - 0.325*t24146*t24150 + 0.075*t24155*t24159 + 0.075*t24220*t24221 - 0.0641*(t24153*t24220 + t24159*t24221) + 0.355*(t24153*t24159 - 1.*t24220*t24221) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t23883*t24123*t24240 + 0.325*t24069*t24244 + 0.1575*t24094*t24249 + 0.2255*(-1.*t23883*t24123*t24240 + t24085*t24249) - 0.325*t24150*t24263 + 0.075*t24155*t24273 + 0.075*t24221*t24283 - 0.0641*(t24221*t24273 + t24153*t24283) + 0.355*(t24153*t24273 - 1.*t24221*t24283) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t23883*t24123*t24242 + 0.325*t24069*t24315 + 0.1575*t24094*t24328 + 0.2255*(t23883*t24123*t24242 + t24085*t24328) - 0.325*t24150*t24340 + 0.075*t24155*t24345 + 0.075*t24221*t24355 - 0.0641*(t24221*t24345 + t24153*t24355) + 0.355*(t24153*t24345 - 1.*t24221*t24355) + var1[2] - 1.*var2[2];
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
