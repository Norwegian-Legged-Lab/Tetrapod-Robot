/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:32 GMT+02:00
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
  double t1607;
  double t1637;
  double t1664;
  double t1714;
  double t1794;
  double t1630;
  double t1810;
  double t1195;
  double t1823;
  double t1826;
  double t1827;
  double t1849;
  double t1869;
  double t1871;
  double t1873;
  double t1880;
  double t2241;
  double t2249;
  double t2274;
  double t1595;
  double t1596;
  double t2856;
  double t1716;
  double t1735;
  double t2957;
  double t3128;
  double t3180;
  double t3196;
  double t2950;
  double t2966;
  double t3104;
  double t3574;
  double t3606;
  double t3632;
  double t2151;
  double t2239;
  double t3681;
  double t3701;
  double t3715;
  double t3826;
  double t3829;
  double t3839;
  double t4041;
  double t4042;
  double t4056;
  double t4003;
  double t4007;
  double t4027;
  double t4134;
  double t4140;
  double t4196;
  double t4201;
  double t4234;
  double t4259;
  double t4267;
  double t4274;
  double t4276;
  t1607 = Cos(var1[4]);
  t1637 = Sin(var1[12]);
  t1664 = Sin(var1[4]);
  t1714 = Cos(var1[12]);
  t1794 = Sin(var1[5]);
  t1630 = Cos(var1[5]);
  t1810 = Sin(var1[13]);
  t1195 = Cos(var1[13]);
  t1823 = t1714*t1664;
  t1826 = t1607*t1637*t1794;
  t1827 = t1823 + t1826;
  t1849 = Sin(var1[14]);
  t1869 = -1.*t1607*t1630*t1810;
  t1871 = t1195*t1827;
  t1873 = t1869 + t1871;
  t1880 = Cos(var1[14]);
  t2241 = t1195*t1607*t1630;
  t2249 = t1810*t1827;
  t2274 = t2241 + t2249;
  t1595 = -1.*t1195;
  t1596 = 1. + t1595;
  t2856 = Sin(var1[3]);
  t1716 = -1.*t1714;
  t1735 = 1. + t1716;
  t2957 = Cos(var1[3]);
  t3128 = t2957*t1630;
  t3180 = -1.*t2856*t1664*t1794;
  t3196 = t3128 + t3180;
  t2950 = t1630*t2856*t1664;
  t2966 = t2957*t1794;
  t3104 = t2950 + t2966;
  t3574 = -1.*t1714*t1607*t2856;
  t3606 = -1.*t1637*t3196;
  t3632 = t3574 + t3606;
  t2151 = -1.*t1880;
  t2239 = 1. + t2151;
  t3681 = -1.*t1810*t3104;
  t3701 = t1195*t3632;
  t3715 = t3681 + t3701;
  t3826 = t1195*t3104;
  t3829 = t1810*t3632;
  t3839 = t3826 + t3829;
  t4041 = t1630*t2856;
  t4042 = t2957*t1664*t1794;
  t4056 = t4041 + t4042;
  t4003 = -1.*t2957*t1630*t1664;
  t4007 = t2856*t1794;
  t4027 = t4003 + t4007;
  t4134 = t1714*t2957*t1607;
  t4140 = -1.*t1637*t4056;
  t4196 = t4134 + t4140;
  t4201 = -1.*t1810*t4027;
  t4234 = t1195*t4196;
  t4259 = t4201 + t4234;
  t4267 = t1195*t4027;
  t4274 = t1810*t4196;
  t4276 = t4267 + t4274;
  p_output1[0]=0.325*t1596*t1607*t1630 + 0.1575*t1637*t1664 + 0.1575*t1607*t1735*t1794 - 0.2255*(t1637*t1664 - 1.*t1607*t1714*t1794) - 0.325*t1810*t1827 + 0.075*t1849*t1873 + 0.075*t2239*t2274 - 0.0641*(t1873*t1880 + t1849*t2274) + 0.355*(-1.*t1849*t1873 + t1880*t2274) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t1607*t1637*t2856 + 0.325*t1596*t3104 - 0.1575*t1735*t3196 - 0.2255*(-1.*t1607*t1637*t2856 + t1714*t3196) - 0.325*t1810*t3632 + 0.075*t1849*t3715 + 0.075*t2239*t3839 - 0.0641*(t1880*t3715 + t1849*t3839) + 0.355*(-1.*t1849*t3715 + t1880*t3839) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t1607*t1637*t2957 + 0.325*t1596*t4027 - 0.1575*t1735*t4056 - 0.2255*(t1607*t1637*t2957 + t1714*t4056) - 0.325*t1810*t4196 + 0.075*t1849*t4259 + 0.075*t2239*t4276 - 0.0641*(t1880*t4259 + t1849*t4276) + 0.355*(-1.*t1849*t4259 + t1880*t4276) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
