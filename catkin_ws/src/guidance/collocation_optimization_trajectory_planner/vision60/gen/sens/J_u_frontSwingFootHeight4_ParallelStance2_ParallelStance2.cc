/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:26:52 GMT+02:00
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
  double t1591;
  double t2309;
  double t1927;
  double t1938;
  double t2318;
  double t1009;
  double t1179;
  double t2453;
  double t2463;
  double t3120;
  double t3132;
  double t3215;
  double t1962;
  double t2328;
  double t2330;
  double t1598;
  double t3216;
  double t3217;
  double t3656;
  double t3667;
  double t3674;
  double t3675;
  double t3676;
  double t3693;
  double t3723;
  double t3738;
  double t3739;
  double t1599;
  double t1860;
  double t2461;
  double t2462;
  double t4306;
  double t4338;
  double t4802;
  double t3705;
  double t3711;
  double t4810;
  double t4811;
  double t4822;
  double t4832;
  double t4833;
  double t4834;
  double t5108;
  double t5109;
  double t5114;
  double t5147;
  double t5155;
  double t5156;
  double t5161;
  double t5165;
  double t5168;
  double t5391;
  double t5405;
  double t5406;
  double t5519;
  double t5522;
  double t5524;
  double t5544;
  double t5649;
  double t5766;
  double t5873;
  double t5874;
  double t5888;
  double t5906;
  double t5907;
  double t5911;
  double t5915;
  double t5916;
  double t5922;
  double t6223;
  double t6250;
  double t6251;
  t1591 = Sin(var1[3]);
  t2309 = Cos(var1[3]);
  t1927 = Cos(var1[5]);
  t1938 = Sin(var1[4]);
  t2318 = Sin(var1[5]);
  t1009 = Cos(var1[4]);
  t1179 = Sin(var1[12]);
  t2453 = Cos(var1[12]);
  t2463 = t2309*t1927;
  t3120 = -1.*t1591*t1938*t2318;
  t3132 = t2463 + t3120;
  t3215 = Sin(var1[13]);
  t1962 = t1927*t1591*t1938;
  t2328 = t2309*t2318;
  t2330 = t1962 + t2328;
  t1598 = Cos(var1[13]);
  t3216 = -1.*t2453*t1009*t1591;
  t3217 = -1.*t1179*t3132;
  t3656 = t3216 + t3217;
  t3667 = Sin(var1[14]);
  t3674 = -1.*t3215*t2330;
  t3675 = t1598*t3656;
  t3676 = t3674 + t3675;
  t3693 = Cos(var1[14]);
  t3723 = t1598*t2330;
  t3738 = t3215*t3656;
  t3739 = t3723 + t3738;
  t1599 = -1.*t1598;
  t1860 = 1. + t1599;
  t2461 = -1.*t2453;
  t2462 = 1. + t2461;
  t4306 = -1.*t2453*t2309*t1938;
  t4338 = -1.*t2309*t1009*t1179*t2318;
  t4802 = t4306 + t4338;
  t3705 = -1.*t3693;
  t3711 = 1. + t3705;
  t4810 = t2309*t1009*t1927*t3215;
  t4811 = t1598*t4802;
  t4822 = t4810 + t4811;
  t4832 = -1.*t1598*t2309*t1009*t1927;
  t4833 = t3215*t4802;
  t4834 = t4832 + t4833;
  t5108 = t2309*t1927*t1938;
  t5109 = -1.*t1591*t2318;
  t5114 = t5108 + t5109;
  t5147 = t1927*t1591;
  t5155 = t2309*t1938*t2318;
  t5156 = t5147 + t5155;
  t5161 = -1.*t1179*t3215*t5114;
  t5165 = t1598*t5156;
  t5168 = t5161 + t5165;
  t5391 = -1.*t1598*t1179*t5114;
  t5405 = -1.*t3215*t5156;
  t5406 = t5391 + t5405;
  t5519 = -1.*t2309*t1009*t1179;
  t5522 = -1.*t2453*t5156;
  t5524 = t5519 + t5522;
  t5544 = t2453*t2309*t1009;
  t5649 = -1.*t1179*t5156;
  t5766 = t5544 + t5649;
  t5873 = -1.*t2309*t1927*t1938;
  t5874 = t1591*t2318;
  t5888 = t5873 + t5874;
  t5906 = -1.*t3215*t5888;
  t5907 = t1598*t5766;
  t5911 = t5906 + t5907;
  t5915 = -1.*t1598*t5888;
  t5916 = -1.*t3215*t5766;
  t5922 = t5915 + t5916;
  t6223 = t1598*t5888;
  t6250 = t3215*t5766;
  t6251 = t6223 + t6250;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t1009*t1179*t1591 + 0.325*t1860*t2330 - 0.1575*t2462*t3132 - 0.2255*(-1.*t1009*t1179*t1591 + t2453*t3132) - 0.325*t3215*t3656 + 0.075*t3667*t3676 + 0.075*t3711*t3739 - 0.0641*(t3676*t3693 + t3667*t3739) + 0.355*(-1.*t3667*t3676 + t3693*t3739);
  p_output1[2]=-0.325*t1009*t1860*t1927*t2309 - 0.1575*t1179*t1938*t2309 - 0.2255*(-1.*t1179*t1938*t2309 + t1009*t2309*t2318*t2453) - 0.1575*t1009*t2309*t2318*t2462 - 0.325*t3215*t4802 + 0.075*t3667*t4822 + 0.075*t3711*t4834 - 0.0641*(t3693*t4822 + t3667*t4834) + 0.355*(-1.*t3667*t4822 + t3693*t4834);
  p_output1[3]=-0.2255*t2453*t5114 - 0.1575*t2462*t5114 + 0.325*t1179*t3215*t5114 + 0.325*t1860*t5156 + 0.075*t3711*t5168 + 0.075*t3667*t5406 + 0.355*(t3693*t5168 - 1.*t3667*t5406) - 0.0641*(t3667*t5168 + t3693*t5406);
  p_output1[4]=0.1575*t1009*t2309*t2453 - 0.1575*t1179*t5156 - 0.325*t3215*t5524 + 0.075*t1598*t3667*t5524 + 0.075*t3215*t3711*t5524 - 0.0641*(t3215*t3667*t5524 + t1598*t3693*t5524) + 0.355*(-1.*t1598*t3667*t5524 + t3215*t3693*t5524) - 0.2255*t5766;
  p_output1[5]=-0.325*t1598*t5766 + 0.325*t3215*t5888 + 0.075*t3711*t5911 + 0.075*t3667*t5922 + 0.355*(t3693*t5911 - 1.*t3667*t5922) - 0.0641*(t3667*t5911 + t3693*t5922);
  p_output1[6]=0.075*t3693*t5911 + 0.075*t3667*t6251 + 0.355*(-1.*t3693*t5911 - 1.*t3667*t6251) - 0.0641*(-1.*t3667*t5911 + t3693*t6251);
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

#include "J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
