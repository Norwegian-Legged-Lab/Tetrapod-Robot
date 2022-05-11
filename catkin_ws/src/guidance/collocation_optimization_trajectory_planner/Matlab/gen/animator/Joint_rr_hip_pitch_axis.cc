/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:09 GMT+01:00
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
  double t132;
  double t133;
  double t157;
  double t373;
  double t270;
  double t390;
  double t377;
  double t381;
  double t397;
  double t298;
  double t402;
  double t386;
  double t399;
  double t400;
  double t405;
  double t406;
  double t418;
  double t192;
  double t448;
  double t271;
  double t297;
  double t369;
  double t371;
  double t502;
  double t509;
  double t403;
  double t404;
  double t507;
  double t512;
  double t513;
  double t516;
  double t517;
  double t518;
  double t449;
  double t451;
  double t452;
  double t515;
  double t519;
  double t520;
  double t454;
  double t455;
  double t522;
  double t523;
  double t524;
  double t481;
  double t486;
  double t488;
  double t489;
  double t492;
  double t493;
  double t556;
  double t560;
  double t561;
  double t566;
  double t567;
  double t568;
  double t565;
  double t569;
  double t570;
  double t576;
  double t577;
  double t579;
  t132 = Cos(var1[16]);
  t133 = -1.*t132;
  t157 = 1. + t133;
  t373 = Cos(var1[4]);
  t270 = Sin(var1[16]);
  t390 = Cos(var1[15]);
  t377 = Cos(var1[5]);
  t381 = Sin(var1[15]);
  t397 = Sin(var1[5]);
  t298 = Sin(var1[4]);
  t402 = -7.e-6*t157;
  t386 = -1.*t373*t377*t381;
  t399 = -1.*t390*t373*t397;
  t400 = t386 + t399;
  t405 = t390*t373*t377;
  t406 = -1.*t373*t381*t397;
  t418 = t405 + t406;
  t192 = 4.e-6*t157;
  t448 = -2.7999999999999997e-11*t157;
  t271 = 7.e-6*t270;
  t297 = t192 + t271;
  t369 = -6.5e-11*t157;
  t371 = 1. + t369;
  t502 = Sin(var1[3]);
  t509 = Cos(var1[3]);
  t403 = 4.e-6*t270;
  t404 = t402 + t403;
  t507 = t377*t502*t298;
  t512 = t509*t397;
  t513 = t507 + t512;
  t516 = t509*t377;
  t517 = -1.*t502*t298*t397;
  t518 = t516 + t517;
  t449 = t448 + t270;
  t451 = -4.e-6*t270;
  t452 = t402 + t451;
  t515 = -1.*t381*t513;
  t519 = t390*t518;
  t520 = t515 + t519;
  t454 = -1.000000000016*t157;
  t455 = 1. + t454;
  t522 = t390*t513;
  t523 = t381*t518;
  t524 = t522 + t523;
  t481 = -1.000000000049*t157;
  t486 = 1. + t481;
  t488 = -7.e-6*t270;
  t489 = t192 + t488;
  t492 = -1.*t270;
  t493 = t448 + t492;
  t556 = -1.*t509*t377*t298;
  t560 = t502*t397;
  t561 = t556 + t560;
  t566 = t377*t502;
  t567 = t509*t298*t397;
  t568 = t566 + t567;
  t565 = -1.*t381*t561;
  t569 = t390*t568;
  t570 = t565 + t569;
  t576 = t390*t561;
  t577 = t381*t568;
  t579 = t576 + t577;
  p_output1[0]=-1.*t297*t298 - 1.*t371*t400 - 1.*t404*t418 + 7.e-6*(t298*t449 + t400*t452 + t418*t455) - 4.e-6*(t298*t486 + t400*t489 + t418*t493);
  p_output1[1]=t297*t373*t502 - 1.*t371*t520 - 1.*t404*t524 + 7.e-6*(-1.*t373*t449*t502 + t452*t520 + t455*t524) - 4.e-6*(-1.*t373*t486*t502 + t489*t520 + t493*t524);
  p_output1[2]=-1.*t297*t373*t509 - 1.*t371*t570 - 1.*t404*t579 + 7.e-6*(t373*t449*t509 + t452*t570 + t455*t579) - 4.e-6*(t373*t486*t509 + t489*t570 + t493*t579);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_rr_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_rr_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
