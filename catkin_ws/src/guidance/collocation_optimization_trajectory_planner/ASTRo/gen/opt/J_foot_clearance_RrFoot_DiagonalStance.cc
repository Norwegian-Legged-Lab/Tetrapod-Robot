/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:08 GMT+02:00
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
  double t2538;
  double t2849;
  double t2869;
  double t3054;
  double t3116;
  double t3389;
  double t4628;
  double t3406;
  double t3462;
  double t5367;
  double t4505;
  double t5613;
  double t5771;
  double t5880;
  double t5892;
  double t5942;
  double t1793;
  double t2536;
  double t6783;
  double t6794;
  double t6801;
  double t6806;
  double t7236;
  double t7769;
  double t7886;
  double t7939;
  double t7977;
  double t8021;
  double t8028;
  double t8056;
  double t3390;
  double t3395;
  double t5824;
  double t5871;
  double t6785;
  double t6790;
  double t7249;
  double t7400;
  double t8727;
  double t8876;
  double t8893;
  double t9018;
  double t9087;
  double t9199;
  double t9217;
  double t9220;
  double t9221;
  double t9251;
  double t9252;
  double t9253;
  double t9260;
  double t9262;
  double t9263;
  double t9267;
  double t9268;
  double t9269;
  double t9501;
  double t9505;
  double t9552;
  double t9759;
  double t9826;
  double t9291;
  double t10344;
  double t10345;
  double t10348;
  double t10350;
  double t10353;
  double t10359;
  double t10373;
  double t10380;
  double t10383;
  double t10985;
  double t10986;
  double t10987;
  t2538 = Sin(var1[3]);
  t2849 = Cos(var1[15]);
  t2869 = -1.*t2849;
  t3054 = 1. + t2869;
  t3116 = -0.15121*t3054;
  t3389 = Sin(var1[15]);
  t4628 = Cos(var1[3]);
  t3406 = Cos(var1[5]);
  t3462 = Sin(var1[4]);
  t5367 = Sin(var1[5]);
  t4505 = t3406*t2538*t3462;
  t5613 = t4628*t5367;
  t5771 = t4505 + t5613;
  t5880 = t4628*t3406;
  t5892 = -1.*t2538*t3462*t5367;
  t5942 = t5880 + t5892;
  t1793 = Cos(var1[4]);
  t2536 = Sin(var1[16]);
  t6783 = Cos(var1[16]);
  t6794 = t2849*t5771;
  t6801 = t3389*t5942;
  t6806 = t6794 + t6801;
  t7236 = Cos(var1[17]);
  t7769 = -1.*t1793*t2536*t2538;
  t7886 = t6783*t6806;
  t7939 = t7769 + t7886;
  t7977 = Sin(var1[17]);
  t8021 = -1.*t6783*t1793*t2538;
  t8028 = -1.*t2536*t6806;
  t8056 = t8021 + t8028;
  t3390 = -0.15121*t3389;
  t3395 = t3116 + t3390;
  t5824 = 0.15121*t3389;
  t5871 = t3116 + t5824;
  t6785 = -1.*t6783;
  t6790 = 1. + t6785;
  t7249 = -1.*t7236;
  t7400 = 1. + t7249;
  t8727 = -1.*t2849*t4628*t1793*t3406;
  t8876 = t4628*t1793*t3389*t5367;
  t8893 = t8727 + t8876;
  t9018 = -1.*t4628*t2536*t3462;
  t9087 = t6783*t8893;
  t9199 = t9018 + t9087;
  t9217 = -1.*t6783*t4628*t3462;
  t9220 = -1.*t2536*t8893;
  t9221 = t9217 + t9220;
  t9251 = t4628*t3406*t3462;
  t9252 = -1.*t2538*t5367;
  t9253 = t9251 + t9252;
  t9260 = t3406*t2538;
  t9262 = t4628*t3462*t5367;
  t9263 = t9260 + t9262;
  t9267 = t3389*t9253;
  t9268 = t2849*t9263;
  t9269 = t9267 + t9268;
  t9501 = -1.*t4628*t3406*t3462;
  t9505 = t2538*t5367;
  t9552 = t9501 + t9505;
  t9759 = -1.*t3389*t9552;
  t9826 = t9759 + t9268;
  t9291 = -1.*t3389*t9263;
  t10344 = t2849*t9552;
  t10345 = t3389*t9263;
  t10348 = t10344 + t10345;
  t10350 = -1.*t4628*t1793*t2536;
  t10353 = -1.*t6783*t10348;
  t10359 = t10350 + t10353;
  t10373 = t6783*t4628*t1793;
  t10380 = -1.*t2536*t10348;
  t10383 = t10373 + t10380;
  t10985 = t4628*t1793*t2536;
  t10986 = t6783*t10348;
  t10987 = t10985 + t10986;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t1793*t2536*t2538 + t3395*t5771 + t5871*t5942 - 0.15121*(-1.*t3389*t5771 + t2849*t5942) - 0.28121*t6790*t6806 - 0.50321*t7400*t7939 - 0.50321*t7977*t8056 - 0.19821*(t7236*t7939 - 1.*t7977*t8056);
  p_output1[2]=-1.*t1793*t3395*t3406*t4628 - 0.28121*t2536*t3462*t4628 - 0.15121*(t1793*t3389*t3406*t4628 + t1793*t2849*t4628*t5367) + t1793*t4628*t5367*t5871 - 0.28121*t6790*t8893 - 0.50321*t7400*t9199 - 0.50321*t7977*t9221 - 0.19821*(t7236*t9199 - 1.*t7977*t9221);
  p_output1[3]=t5871*t9253 + t3395*t9263 - 0.28121*t6790*t9269 - 0.50321*t6783*t7400*t9269 + 0.50321*t2536*t7977*t9269 - 0.19821*(t6783*t7236*t9269 + t2536*t7977*t9269) - 0.15121*(t2849*t9253 + t9291);
  p_output1[4]=(0.15121*t2849 + t3390)*t9263 + (-0.15121*t2849 + t3390)*t9552 - 0.15121*(t9291 - 1.*t2849*t9552) - 0.28121*t6790*t9826 - 0.50321*t6783*t7400*t9826 + 0.50321*t2536*t7977*t9826 - 0.19821*(t6783*t7236*t9826 + t2536*t7977*t9826);
  p_output1[5]=-0.28121*t10348*t2536 + 0.28121*t1793*t4628*t6783 - 0.50321*t10383*t7400 - 0.50321*t10359*t7977 - 0.19821*(t10383*t7236 - 1.*t10359*t7977);
  p_output1[6]=-0.50321*t10383*t7236 - 0.50321*t10987*t7977 - 0.19821*(-1.*t10383*t7236 - 1.*t10987*t7977);
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

#include "J_foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
