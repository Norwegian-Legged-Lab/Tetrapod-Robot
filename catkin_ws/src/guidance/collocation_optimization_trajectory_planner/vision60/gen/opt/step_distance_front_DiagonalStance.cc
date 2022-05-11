/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:06 GMT+02:00
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
  double t11134;
  double t11204;
  double t12282;
  double t11255;
  double t12147;
  double t12277;
  double t12473;
  double t3498;
  double t12501;
  double t12518;
  double t12539;
  double t12556;
  double t12561;
  double t12596;
  double t12627;
  double t12730;
  double t12786;
  double t12809;
  double t12828;
  double t12284;
  double t13135;
  double t11206;
  double t13156;
  double t13157;
  double t13164;
  double t13186;
  double t13192;
  double t13216;
  double t13217;
  double t13218;
  double t13302;
  double t13316;
  double t13317;
  double t13330;
  double t4065;
  double t10821;
  double t13417;
  double t11208;
  double t11210;
  double t13439;
  double t13443;
  double t13444;
  double t13453;
  double t12279;
  double t12281;
  double t12285;
  double t12286;
  double t13523;
  double t13524;
  double t13525;
  double t13532;
  double t13533;
  double t13536;
  double t12731;
  double t12760;
  double t13541;
  double t13542;
  double t13546;
  double t13549;
  double t13551;
  double t13552;
  double t13209;
  double t13215;
  double t13676;
  double t13677;
  double t13690;
  double t13695;
  double t13700;
  double t13701;
  double t13708;
  double t13710;
  double t13711;
  t11134 = Cos(var1[4]);
  t11204 = Cos(var1[5]);
  t12282 = Sin(var1[5]);
  t11255 = Sin(var1[12]);
  t12147 = Sin(var1[4]);
  t12277 = Cos(var1[12]);
  t12473 = Sin(var1[13]);
  t3498 = Cos(var1[13]);
  t12501 = t12277*t12147;
  t12518 = t11134*t11255*t12282;
  t12539 = t12501 + t12518;
  t12556 = Sin(var1[14]);
  t12561 = -1.*t11134*t11204*t12473;
  t12596 = t3498*t12539;
  t12627 = t12561 + t12596;
  t12730 = Cos(var1[14]);
  t12786 = t3498*t11134*t11204;
  t12809 = t12473*t12539;
  t12828 = t12786 + t12809;
  t12284 = Cos(var1[6]);
  t13135 = Sin(var1[6]);
  t11206 = Cos(var1[7]);
  t13156 = t12284*t12147;
  t13157 = t11134*t12282*t13135;
  t13164 = t13156 + t13157;
  t13186 = Sin(var1[7]);
  t13192 = Cos(var1[8]);
  t13216 = t11134*t11204*t11206;
  t13217 = t13164*t13186;
  t13218 = t13216 + t13217;
  t13302 = t11206*t13164;
  t13316 = -1.*t11134*t11204*t13186;
  t13317 = t13302 + t13316;
  t13330 = Sin(var1[8]);
  t4065 = -1.*t3498;
  t10821 = 1. + t4065;
  t13417 = Sin(var1[3]);
  t11208 = -1.*t11206;
  t11210 = 1. + t11208;
  t13439 = t11204*t13417*t12147;
  t13443 = Cos(var1[3]);
  t13444 = t13443*t12282;
  t13453 = t13439 + t13444;
  t12279 = -1.*t12277;
  t12281 = 1. + t12279;
  t12285 = -1.*t12284;
  t12286 = 1. + t12285;
  t13523 = t13443*t11204;
  t13524 = -1.*t13417*t12147*t12282;
  t13525 = t13523 + t13524;
  t13532 = -1.*t12277*t11134*t13417;
  t13533 = -1.*t11255*t13525;
  t13536 = t13532 + t13533;
  t12731 = -1.*t12730;
  t12760 = 1. + t12731;
  t13541 = -1.*t12473*t13453;
  t13542 = t3498*t13536;
  t13546 = t13541 + t13542;
  t13549 = t3498*t13453;
  t13551 = t12473*t13536;
  t13552 = t13549 + t13551;
  t13209 = -1.*t13192;
  t13215 = 1. + t13209;
  t13676 = -1.*t11134*t12284*t13417;
  t13677 = -1.*t13525*t13135;
  t13690 = t13676 + t13677;
  t13695 = t11206*t13453;
  t13700 = t13690*t13186;
  t13701 = t13695 + t13700;
  t13708 = t11206*t13690;
  t13710 = -1.*t13453*t13186;
  t13711 = t13708 + t13710;
  p_output1[0]=-0.325*t10821*t11134*t11204 + 0.325*t11134*t11204*t11210 - 0.1575*t11255*t12147 - 0.1575*t11134*t12281*t12282 + 0.2255*(t11255*t12147 - 1.*t11134*t12277*t12282) - 0.1575*t11134*t12282*t12286 + 0.325*t12473*t12539 - 0.075*t12556*t12627 - 0.075*t12760*t12828 + 0.0641*(t12627*t12730 + t12556*t12828) - 0.355*(-1.*t12556*t12627 + t12730*t12828) - 0.1575*t12147*t13135 + 0.2255*(-1.*t11134*t12282*t12284 + t12147*t13135) - 0.325*t13164*t13186 + 0.075*t13215*t13218 + 0.075*t13317*t13330 - 0.0641*(t13192*t13317 + t13218*t13330) + 0.355*(t13192*t13218 - 1.*t13317*t13330);
  p_output1[1]=0.1575*t11134*t11255*t13417 + 0.1575*t11134*t13135*t13417 - 0.325*t10821*t13453 + 0.325*t11210*t13453 + 0.1575*t12281*t13525 + 0.1575*t12286*t13525 + 0.2255*(-1.*t11134*t11255*t13417 + t12277*t13525) + 0.2255*(-1.*t11134*t13135*t13417 + t12284*t13525) + 0.325*t12473*t13536 - 0.075*t12556*t13546 - 0.075*t12760*t13552 + 0.0641*(t12730*t13546 + t12556*t13552) - 0.355*(-1.*t12556*t13546 + t12730*t13552) - 0.325*t13186*t13690 + 0.075*t13215*t13701 + 0.075*t13330*t13711 - 0.0641*(t13330*t13701 + t13192*t13711) + 0.355*(t13192*t13701 - 1.*t13330*t13711);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_front_DiagonalStance.hh"

namespace DiagonalStance
{

void step_distance_front_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
