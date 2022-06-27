/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:42:45 GMT+02:00
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
  double t4051;
  double t4089;
  double t4113;
  double t4114;
  double t4117;
  double t5615;
  double t6192;
  double t5793;
  double t5796;
  double t6193;
  double t5800;
  double t6195;
  double t6204;
  double t6225;
  double t6226;
  double t6227;
  double t3977;
  double t3996;
  double t6241;
  double t6283;
  double t6284;
  double t6287;
  double t6293;
  double t6326;
  double t6328;
  double t6341;
  double t6425;
  double t6449;
  double t6497;
  double t6515;
  double t5689;
  double t5704;
  double t6214;
  double t6216;
  double t6278;
  double t6282;
  double t6294;
  double t6306;
  double t6639;
  double t6643;
  double t6647;
  double t6655;
  double t6656;
  double t6660;
  double t6668;
  double t6672;
  double t6676;
  double t6784;
  double t6795;
  double t6821;
  double t6841;
  double t6855;
  double t6912;
  double t6961;
  double t7007;
  double t7018;
  double t7249;
  double t7253;
  double t7254;
  double t7290;
  double t7291;
  double t7087;
  double t7397;
  double t7401;
  double t7402;
  double t7424;
  double t7428;
  double t7429;
  double t7434;
  double t7436;
  double t7452;
  double t7469;
  double t7495;
  double t7499;
  t4051 = Sin(var1[3]);
  t4089 = Cos(var1[15]);
  t4113 = -1.*t4089;
  t4114 = 1. + t4113;
  t4117 = -0.15121*t4114;
  t5615 = Sin(var1[15]);
  t6192 = Cos(var1[3]);
  t5793 = Cos(var1[5]);
  t5796 = Sin(var1[4]);
  t6193 = Sin(var1[5]);
  t5800 = t5793*t4051*t5796;
  t6195 = t6192*t6193;
  t6204 = t5800 + t6195;
  t6225 = t6192*t5793;
  t6226 = -1.*t4051*t5796*t6193;
  t6227 = t6225 + t6226;
  t3977 = Cos(var1[4]);
  t3996 = Sin(var1[16]);
  t6241 = Cos(var1[16]);
  t6283 = t4089*t6204;
  t6284 = t5615*t6227;
  t6287 = t6283 + t6284;
  t6293 = Cos(var1[17]);
  t6326 = -1.*t3977*t3996*t4051;
  t6328 = t6241*t6287;
  t6341 = t6326 + t6328;
  t6425 = Sin(var1[17]);
  t6449 = -1.*t6241*t3977*t4051;
  t6497 = -1.*t3996*t6287;
  t6515 = t6449 + t6497;
  t5689 = -0.15121*t5615;
  t5704 = t4117 + t5689;
  t6214 = 0.15121*t5615;
  t6216 = t4117 + t6214;
  t6278 = -1.*t6241;
  t6282 = 1. + t6278;
  t6294 = -1.*t6293;
  t6306 = 1. + t6294;
  t6639 = -1.*t4089*t6192*t3977*t5793;
  t6643 = t6192*t3977*t5615*t6193;
  t6647 = t6639 + t6643;
  t6655 = -1.*t6192*t3996*t5796;
  t6656 = t6241*t6647;
  t6660 = t6655 + t6656;
  t6668 = -1.*t6241*t6192*t5796;
  t6672 = -1.*t3996*t6647;
  t6676 = t6668 + t6672;
  t6784 = t6192*t5793*t5796;
  t6795 = -1.*t4051*t6193;
  t6821 = t6784 + t6795;
  t6841 = t5793*t4051;
  t6855 = t6192*t5796*t6193;
  t6912 = t6841 + t6855;
  t6961 = t5615*t6821;
  t7007 = t4089*t6912;
  t7018 = t6961 + t7007;
  t7249 = -1.*t6192*t5793*t5796;
  t7253 = t4051*t6193;
  t7254 = t7249 + t7253;
  t7290 = -1.*t5615*t7254;
  t7291 = t7290 + t7007;
  t7087 = -1.*t5615*t6912;
  t7397 = t4089*t7254;
  t7401 = t5615*t6912;
  t7402 = t7397 + t7401;
  t7424 = -1.*t6192*t3977*t3996;
  t7428 = -1.*t6241*t7402;
  t7429 = t7424 + t7428;
  t7434 = t6241*t6192*t3977;
  t7436 = -1.*t3996*t7402;
  t7452 = t7434 + t7436;
  t7469 = t6192*t3977*t3996;
  t7495 = t6241*t7402;
  t7499 = t7469 + t7495;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t3977*t3996*t4051 + t5704*t6204 + t6216*t6227 - 0.15121*(-1.*t5615*t6204 + t4089*t6227) - 0.28121*t6282*t6287 - 0.50321*t6306*t6341 - 0.50321*t6425*t6515 - 0.19821*(t6293*t6341 - 1.*t6425*t6515);
  p_output1[2]=-1.*t3977*t5704*t5793*t6192 - 0.28121*t3996*t5796*t6192 - 0.15121*(t3977*t5615*t5793*t6192 + t3977*t4089*t6192*t6193) + t3977*t6192*t6193*t6216 - 0.28121*t6282*t6647 - 0.50321*t6306*t6660 - 0.50321*t6425*t6676 - 0.19821*(t6293*t6660 - 1.*t6425*t6676);
  p_output1[3]=t6216*t6821 + t5704*t6912 - 0.28121*t6282*t7018 - 0.50321*t6241*t6306*t7018 + 0.50321*t3996*t6425*t7018 - 0.19821*(t6241*t6293*t7018 + t3996*t6425*t7018) - 0.15121*(t4089*t6821 + t7087);
  p_output1[4]=(0.15121*t4089 + t5689)*t6912 + (-0.15121*t4089 + t5689)*t7254 - 0.15121*(t7087 - 1.*t4089*t7254) - 0.28121*t6282*t7291 - 0.50321*t6241*t6306*t7291 + 0.50321*t3996*t6425*t7291 - 0.19821*(t6241*t6293*t7291 + t3996*t6425*t7291);
  p_output1[5]=0.28121*t3977*t6192*t6241 - 0.28121*t3996*t7402 - 0.50321*t6425*t7429 - 0.50321*t6306*t7452 - 0.19821*(-1.*t6425*t7429 + t6293*t7452);
  p_output1[6]=-0.50321*t6293*t7452 - 0.50321*t6425*t7499 - 0.19821*(-1.*t6293*t7452 - 1.*t6425*t7499);
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

#include "J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
