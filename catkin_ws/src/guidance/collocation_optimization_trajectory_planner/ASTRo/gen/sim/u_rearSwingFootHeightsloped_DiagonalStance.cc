/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 12:57:10 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t268;
  double t1685;
  double t1762;
  double t1768;
  double t1784;
  double t1786;
  double t1793;
  double t1798;
  double t1795;
  double t1800;
  double t1796;
  double t1844;
  double t1845;
  double t1857;
  double t1864;
  double t1867;
  double t1529;
  double t1565;
  double t1887;
  double t1913;
  double t1916;
  double t1917;
  double t1920;
  double t2892;
  double t2903;
  double t2917;
  double t3175;
  double t3267;
  double t4277;
  double t4337;
  double t1789;
  double t1792;
  double t1851;
  double t1856;
  double t1888;
  double t1899;
  double t1922;
  double t1924;
  double t6326;
  double t6460;
  double t6463;
  double t6514;
  double t6553;
  double t6557;
  double t6694;
  double t6810;
  double t6979;
  double t5067;
  double t5126;
  double t5127;
  double t5392;
  double t5436;
  double t5550;
  double t5922;
  double t6064;
  double t6506;
  double t6558;
  double t7186;
  double t7363;
  double t7599;
  double t7618;
  double t7657;
  double t8203;
  t268 = Cos(var1[3]);
  t1685 = Cos(var1[15]);
  t1762 = -1.*t1685;
  t1768 = 1. + t1762;
  t1784 = -0.15121*t1768;
  t1786 = Sin(var1[15]);
  t1793 = Cos(var1[5]);
  t1798 = Sin(var1[3]);
  t1795 = Sin(var1[4]);
  t1800 = Sin(var1[5]);
  t1796 = -1.*t268*t1793*t1795;
  t1844 = t1798*t1800;
  t1845 = t1796 + t1844;
  t1857 = t1793*t1798;
  t1864 = t268*t1795*t1800;
  t1867 = t1857 + t1864;
  t1529 = Cos(var1[4]);
  t1565 = Sin(var1[16]);
  t1887 = Cos(var1[16]);
  t1913 = t1685*t1845;
  t1916 = t1786*t1867;
  t1917 = t1913 + t1916;
  t1920 = Cos(var1[17]);
  t2892 = t268*t1529*t1565;
  t2903 = t1887*t1917;
  t2917 = t2892 + t2903;
  t3175 = Sin(var1[17]);
  t3267 = t1887*t268*t1529;
  t4277 = -1.*t1565*t1917;
  t4337 = t3267 + t4277;
  t1789 = -0.15121*t1786;
  t1792 = t1784 + t1789;
  t1851 = 0.15121*t1786;
  t1856 = t1784 + t1851;
  t1888 = -1.*t1887;
  t1899 = 1. + t1888;
  t1922 = -1.*t1920;
  t1924 = 1. + t1922;
  t6326 = t1685*t1529*t1793;
  t6460 = -1.*t1529*t1786*t1800;
  t6463 = t6326 + t6460;
  t6514 = t1565*t1795;
  t6553 = t1887*t6463;
  t6557 = t6514 + t6553;
  t6694 = t1887*t1795;
  t6810 = -1.*t1565*t6463;
  t6979 = t6694 + t6810;
  t5067 = -1.*var2[0];
  t5126 = t1529*t1793*t1792;
  t5127 = 0.28121*t1565*t1795;
  t5392 = -1.*t1529*t1856*t1800;
  t5436 = -1.*t1529*t1793*t1786;
  t5550 = -1.*t1685*t1529*t1800;
  t5922 = t5436 + t5550;
  t6064 = -0.15121*t5922;
  t6506 = -0.28121*t1899*t6463;
  t6558 = -0.50321*t1924*t6557;
  t7186 = -0.50321*t3175*t6979;
  t7363 = t1920*t6557;
  t7599 = -1.*t3175*t6979;
  t7618 = t7363 + t7599;
  t7657 = -0.19821*t7618;
  t8203 = t5067 + var1[0] + t5126 + t5127 + t5392 + t6064 + t6506 + t6558 + t7186 + t7657;
  p_output1[0]=t1792*t1845 + t1856*t1867 - 0.15121*(-1.*t1786*t1845 + t1685*t1867) - 0.28121*t1899*t1917 + 0.28121*t1529*t1565*t268 - 0.50321*t1924*t2917 - 0.50321*t3175*t4337 - 0.19821*(t1920*t2917 - 1.*t3175*t4337) + var1[2] - 0.5*t8203*var3[0]*(1. + Tanh(t8203*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeightsloped_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightsloped_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
