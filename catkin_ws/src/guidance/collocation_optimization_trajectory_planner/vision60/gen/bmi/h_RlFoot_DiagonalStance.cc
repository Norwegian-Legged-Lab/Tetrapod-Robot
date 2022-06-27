/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 14:27:15 GMT+02:00
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
  double t1813;
  double t1847;
  double t1854;
  double t1873;
  double t1920;
  double t1821;
  double t2032;
  double t1679;
  double t2043;
  double t2053;
  double t2061;
  double t2068;
  double t2070;
  double t2072;
  double t2078;
  double t2087;
  double t2101;
  double t2102;
  double t2110;
  double t1705;
  double t1743;
  double t2276;
  double t1911;
  double t1918;
  double t2294;
  double t2567;
  double t2621;
  double t2622;
  double t2292;
  double t2319;
  double t2345;
  double t3015;
  double t3017;
  double t3029;
  double t2089;
  double t2097;
  double t3161;
  double t3162;
  double t3165;
  double t3658;
  double t4167;
  double t4201;
  double t7323;
  double t7510;
  double t7513;
  double t7294;
  double t7302;
  double t7307;
  double t8859;
  double t8884;
  double t8898;
  double t11718;
  double t14997;
  double t15007;
  double t15121;
  double t15133;
  double t17011;
  t1813 = Cos(var1[4]);
  t1847 = Sin(var1[9]);
  t1854 = Sin(var1[4]);
  t1873 = Cos(var1[9]);
  t1920 = Sin(var1[5]);
  t1821 = Cos(var1[5]);
  t2032 = Sin(var1[10]);
  t1679 = Cos(var1[10]);
  t2043 = t1873*t1854;
  t2053 = t1813*t1847*t1920;
  t2061 = t2043 + t2053;
  t2068 = Sin(var1[11]);
  t2070 = -1.*t1813*t1821*t2032;
  t2072 = t1679*t2061;
  t2078 = t2070 + t2072;
  t2087 = Cos(var1[11]);
  t2101 = t1679*t1813*t1821;
  t2102 = t2032*t2061;
  t2110 = t2101 + t2102;
  t1705 = -1.*t1679;
  t1743 = 1. + t1705;
  t2276 = Sin(var1[3]);
  t1911 = -1.*t1873;
  t1918 = 1. + t1911;
  t2294 = Cos(var1[3]);
  t2567 = t2294*t1821;
  t2621 = -1.*t2276*t1854*t1920;
  t2622 = t2567 + t2621;
  t2292 = t1821*t2276*t1854;
  t2319 = t2294*t1920;
  t2345 = t2292 + t2319;
  t3015 = -1.*t1873*t1813*t2276;
  t3017 = -1.*t1847*t2622;
  t3029 = t3015 + t3017;
  t2089 = -1.*t2087;
  t2097 = 1. + t2089;
  t3161 = -1.*t2032*t2345;
  t3162 = t1679*t3029;
  t3165 = t3161 + t3162;
  t3658 = t1679*t2345;
  t4167 = t2032*t3029;
  t4201 = t3658 + t4167;
  t7323 = t1821*t2276;
  t7510 = t2294*t1854*t1920;
  t7513 = t7323 + t7510;
  t7294 = -1.*t2294*t1821*t1854;
  t7302 = t2276*t1920;
  t7307 = t7294 + t7302;
  t8859 = t1873*t2294*t1813;
  t8884 = -1.*t1847*t7513;
  t8898 = t8859 + t8884;
  t11718 = -1.*t2032*t7307;
  t14997 = t1679*t8898;
  t15007 = t11718 + t14997;
  t15121 = t1679*t7307;
  t15133 = t2032*t8898;
  t17011 = t15121 + t15133;
  p_output1[0]=-0.325*t1743*t1813*t1821 - 0.1575*t1847*t1854 - 0.1575*t1813*t1918*t1920 + 0.2255*(t1847*t1854 - 1.*t1813*t1873*t1920) + 0.325*t2032*t2061 - 0.575*t2068*t2078 - 0.575*t2097*t2110 - 0.0641*(t2078*t2087 + t2068*t2110) - 0.295*(-1.*t2068*t2078 + t2087*t2110) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t1813*t1847*t2276 - 0.325*t1743*t2345 + 0.1575*t1918*t2622 + 0.2255*(-1.*t1813*t1847*t2276 + t1873*t2622) + 0.325*t2032*t3029 - 0.575*t2068*t3165 - 0.575*t2097*t4201 - 0.0641*(t2087*t3165 + t2068*t4201) - 0.295*(-1.*t2068*t3165 + t2087*t4201) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.575*t15007*t2068 - 0.0641*(t17011*t2068 + t15007*t2087) - 0.295*(-1.*t15007*t2068 + t17011*t2087) - 0.575*t17011*t2097 - 0.1575*t1813*t1847*t2294 - 0.325*t1743*t7307 + 0.1575*t1918*t7513 + 0.2255*(t1813*t1847*t2294 + t1873*t7513) + 0.325*t2032*t8898 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
