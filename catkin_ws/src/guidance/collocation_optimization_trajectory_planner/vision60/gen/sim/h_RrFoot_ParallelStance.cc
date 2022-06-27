/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:44 GMT+02:00
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
  double t269;
  double t306;
  double t330;
  double t337;
  double t379;
  double t299;
  double t403;
  double t251;
  double t404;
  double t466;
  double t474;
  double t484;
  double t526;
  double t545;
  double t554;
  double t561;
  double t596;
  double t632;
  double t648;
  double t266;
  double t268;
  double t746;
  double t358;
  double t359;
  double t769;
  double t852;
  double t853;
  double t858;
  double t762;
  double t843;
  double t849;
  double t8685;
  double t9284;
  double t9927;
  double t591;
  double t594;
  double t10776;
  double t11207;
  double t11666;
  double t11820;
  double t12150;
  double t13104;
  double t22285;
  double t22286;
  double t22292;
  double t14298;
  double t17744;
  double t22218;
  double t22303;
  double t22305;
  double t22306;
  double t22309;
  double t22319;
  double t22328;
  double t22334;
  double t22339;
  double t22340;
  t269 = Cos(var1[4]);
  t306 = Sin(var1[15]);
  t330 = Sin(var1[4]);
  t337 = Cos(var1[15]);
  t379 = Sin(var1[5]);
  t299 = Cos(var1[5]);
  t403 = Sin(var1[16]);
  t251 = Cos(var1[16]);
  t404 = t337*t330;
  t466 = t269*t306*t379;
  t474 = t404 + t466;
  t484 = Sin(var1[17]);
  t526 = -1.*t269*t299*t403;
  t545 = t251*t474;
  t554 = t526 + t545;
  t561 = Cos(var1[17]);
  t596 = t251*t269*t299;
  t632 = t403*t474;
  t648 = t596 + t632;
  t266 = -1.*t251;
  t268 = 1. + t266;
  t746 = Sin(var1[3]);
  t358 = -1.*t337;
  t359 = 1. + t358;
  t769 = Cos(var1[3]);
  t852 = t769*t299;
  t853 = -1.*t746*t330*t379;
  t858 = t852 + t853;
  t762 = t299*t746*t330;
  t843 = t769*t379;
  t849 = t762 + t843;
  t8685 = -1.*t337*t269*t746;
  t9284 = -1.*t306*t858;
  t9927 = t8685 + t9284;
  t591 = -1.*t561;
  t594 = 1. + t591;
  t10776 = -1.*t403*t849;
  t11207 = t251*t9927;
  t11666 = t10776 + t11207;
  t11820 = t251*t849;
  t12150 = t403*t9927;
  t13104 = t11820 + t12150;
  t22285 = t299*t746;
  t22286 = t769*t330*t379;
  t22292 = t22285 + t22286;
  t14298 = -1.*t769*t299*t330;
  t17744 = t746*t379;
  t22218 = t14298 + t17744;
  t22303 = t337*t769*t269;
  t22305 = -1.*t306*t22292;
  t22306 = t22303 + t22305;
  t22309 = -1.*t403*t22218;
  t22319 = t251*t22306;
  t22328 = t22309 + t22319;
  t22334 = t251*t22218;
  t22339 = t403*t22306;
  t22340 = t22334 + t22339;
  p_output1[0]=-0.325*t268*t269*t299 + 0.1575*t306*t330 + 0.1575*t269*t359*t379 - 0.2255*(t306*t330 - 1.*t269*t337*t379) + 0.325*t403*t474 - 0.575*t484*t554 - 0.575*t594*t648 - 0.0641*(t554*t561 + t484*t648) - 0.295*(-1.*t484*t554 + t561*t648) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.575*t11666*t484 - 0.0641*(t13104*t484 + t11666*t561) - 0.295*(-1.*t11666*t484 + t13104*t561) - 0.575*t13104*t594 - 0.1575*t269*t306*t746 - 0.325*t268*t849 - 0.1575*t359*t858 - 0.2255*(-1.*t269*t306*t746 + t337*t858) + 0.325*t403*t9927 + var1[1] - 1.*var2[1];
  p_output1[2]=-0.325*t22218*t268 - 0.1575*t22292*t359 + 0.325*t22306*t403 - 0.575*t22328*t484 - 0.0641*(t22340*t484 + t22328*t561) - 0.295*(-1.*t22328*t484 + t22340*t561) - 0.575*t22340*t594 + 0.1575*t269*t306*t769 - 0.2255*(t22292*t337 + t269*t306*t769) + var1[2] - 1.*var2[2];
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

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
