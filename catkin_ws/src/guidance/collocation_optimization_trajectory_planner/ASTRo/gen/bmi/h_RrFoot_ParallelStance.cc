/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:23 GMT+02:00
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
  double t1806;
  double t1829;
  double t1847;
  double t1854;
  double t1862;
  double t2002;
  double t1809;
  double t2896;
  double t2509;
  double t2670;
  double t4170;
  double t4433;
  double t4503;
  double t4510;
  double t4619;
  double t4663;
  double t4677;
  double t4687;
  double t4815;
  double t5035;
  double t5086;
  double t5091;
  double t2031;
  double t2226;
  double t6009;
  double t2883;
  double t2890;
  double t6680;
  double t6561;
  double t6753;
  double t6785;
  double t6913;
  double t6996;
  double t6997;
  double t4301;
  double t4394;
  double t4623;
  double t4662;
  double t7276;
  double t7293;
  double t7294;
  double t7391;
  double t7439;
  double t7447;
  double t7519;
  double t8080;
  double t8256;
  double t9333;
  double t9374;
  double t9498;
  double t9636;
  double t9692;
  double t9910;
  double t10361;
  double t10399;
  double t10420;
  double t10443;
  double t10446;
  double t10452;
  double t10500;
  double t10544;
  double t10620;
  t1806 = Cos(var1[4]);
  t1829 = Cos(var1[15]);
  t1847 = -1.*t1829;
  t1854 = 1. + t1847;
  t1862 = -0.15121*t1854;
  t2002 = Sin(var1[15]);
  t1809 = Cos(var1[5]);
  t2896 = Sin(var1[5]);
  t2509 = Sin(var1[16]);
  t2670 = Sin(var1[4]);
  t4170 = Cos(var1[16]);
  t4433 = t1829*t1806*t1809;
  t4503 = -1.*t1806*t2002*t2896;
  t4510 = t4433 + t4503;
  t4619 = Cos(var1[17]);
  t4663 = t2509*t2670;
  t4677 = t4170*t4510;
  t4687 = t4663 + t4677;
  t4815 = Sin(var1[17]);
  t5035 = t4170*t2670;
  t5086 = -1.*t2509*t4510;
  t5091 = t5035 + t5086;
  t2031 = -0.15121*t2002;
  t2226 = t1862 + t2031;
  t6009 = Sin(var1[3]);
  t2883 = 0.15121*t2002;
  t2890 = t1862 + t2883;
  t6680 = Cos(var1[3]);
  t6561 = t1809*t6009*t2670;
  t6753 = t6680*t2896;
  t6785 = t6561 + t6753;
  t6913 = t6680*t1809;
  t6996 = -1.*t6009*t2670*t2896;
  t6997 = t6913 + t6996;
  t4301 = -1.*t4170;
  t4394 = 1. + t4301;
  t4623 = -1.*t4619;
  t4662 = 1. + t4623;
  t7276 = t1829*t6785;
  t7293 = t2002*t6997;
  t7294 = t7276 + t7293;
  t7391 = -1.*t1806*t2509*t6009;
  t7439 = t4170*t7294;
  t7447 = t7391 + t7439;
  t7519 = -1.*t4170*t1806*t6009;
  t8080 = -1.*t2509*t7294;
  t8256 = t7519 + t8080;
  t9333 = -1.*t6680*t1809*t2670;
  t9374 = t6009*t2896;
  t9498 = t9333 + t9374;
  t9636 = t1809*t6009;
  t9692 = t6680*t2670*t2896;
  t9910 = t9636 + t9692;
  t10361 = t1829*t9498;
  t10399 = t2002*t9910;
  t10420 = t10361 + t10399;
  t10443 = t6680*t1806*t2509;
  t10446 = t4170*t10420;
  t10452 = t10443 + t10446;
  t10500 = t4170*t6680*t1806;
  t10544 = -1.*t2509*t10420;
  t10620 = t10500 + t10544;
  p_output1[0]=t1806*t1809*t2226 + 0.28121*t2509*t2670 - 1.*t1806*t2890*t2896 - 0.15121*(-1.*t1806*t1809*t2002 - 1.*t1806*t1829*t2896) - 0.28121*t4394*t4510 - 0.50321*t4662*t4687 - 0.50321*t4815*t5091 - 0.19821*(t4619*t4687 - 1.*t4815*t5091) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t1806*t2509*t6009 + t2226*t6785 + t2890*t6997 - 0.15121*(-1.*t2002*t6785 + t1829*t6997) - 0.28121*t4394*t7294 - 0.50321*t4662*t7447 - 0.50321*t4815*t8256 - 0.19821*(t4619*t7447 - 1.*t4815*t8256) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.28121*t10420*t4394 - 0.50321*t10452*t4662 - 0.50321*t10620*t4815 - 0.19821*(t10452*t4619 - 1.*t10620*t4815) + 0.28121*t1806*t2509*t6680 + t2226*t9498 + t2890*t9910 - 0.15121*(-1.*t2002*t9498 + t1829*t9910) + var1[2] - 1.*var2[2];
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
