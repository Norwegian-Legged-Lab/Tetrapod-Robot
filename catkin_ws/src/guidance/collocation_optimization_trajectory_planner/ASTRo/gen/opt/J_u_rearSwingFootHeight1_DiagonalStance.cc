/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:39 GMT+02:00
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
  double t11040;
  double t11573;
  double t11580;
  double t11612;
  double t11613;
  double t11614;
  double t11801;
  double t11784;
  double t11787;
  double t11802;
  double t11799;
  double t11813;
  double t11833;
  double t11839;
  double t11840;
  double t11841;
  double t9588;
  double t11029;
  double t11849;
  double t11853;
  double t11854;
  double t11856;
  double t11858;
  double t11869;
  double t11870;
  double t11871;
  double t11873;
  double t11874;
  double t11875;
  double t11876;
  double t11615;
  double t11616;
  double t11836;
  double t11838;
  double t11850;
  double t11851;
  double t11859;
  double t11868;
  double t12091;
  double t12203;
  double t12220;
  double t12280;
  double t12295;
  double t12299;
  double t12307;
  double t12308;
  double t12310;
  double t12379;
  double t12380;
  double t12381;
  double t12383;
  double t12384;
  double t12385;
  double t12392;
  double t12395;
  double t12396;
  double t12451;
  double t12455;
  double t12456;
  double t12494;
  double t12495;
  double t12401;
  double t12511;
  double t12512;
  double t12513;
  double t12515;
  double t12519;
  double t12523;
  double t12556;
  double t12558;
  double t12571;
  double t12623;
  double t12625;
  double t12637;
  t11040 = Sin(var1[3]);
  t11573 = Cos(var1[15]);
  t11580 = -1.*t11573;
  t11612 = 1. + t11580;
  t11613 = -0.15121*t11612;
  t11614 = Sin(var1[15]);
  t11801 = Cos(var1[3]);
  t11784 = Cos(var1[5]);
  t11787 = Sin(var1[4]);
  t11802 = Sin(var1[5]);
  t11799 = t11784*t11040*t11787;
  t11813 = t11801*t11802;
  t11833 = t11799 + t11813;
  t11839 = t11801*t11784;
  t11840 = -1.*t11040*t11787*t11802;
  t11841 = t11839 + t11840;
  t9588 = Cos(var1[4]);
  t11029 = Sin(var1[16]);
  t11849 = Cos(var1[16]);
  t11853 = t11573*t11833;
  t11854 = t11614*t11841;
  t11856 = t11853 + t11854;
  t11858 = Cos(var1[17]);
  t11869 = -1.*t9588*t11029*t11040;
  t11870 = t11849*t11856;
  t11871 = t11869 + t11870;
  t11873 = Sin(var1[17]);
  t11874 = -1.*t11849*t9588*t11040;
  t11875 = -1.*t11029*t11856;
  t11876 = t11874 + t11875;
  t11615 = -0.15121*t11614;
  t11616 = t11613 + t11615;
  t11836 = 0.15121*t11614;
  t11838 = t11613 + t11836;
  t11850 = -1.*t11849;
  t11851 = 1. + t11850;
  t11859 = -1.*t11858;
  t11868 = 1. + t11859;
  t12091 = -1.*t11573*t11801*t9588*t11784;
  t12203 = t11801*t9588*t11614*t11802;
  t12220 = t12091 + t12203;
  t12280 = -1.*t11801*t11029*t11787;
  t12295 = t11849*t12220;
  t12299 = t12280 + t12295;
  t12307 = -1.*t11849*t11801*t11787;
  t12308 = -1.*t11029*t12220;
  t12310 = t12307 + t12308;
  t12379 = t11801*t11784*t11787;
  t12380 = -1.*t11040*t11802;
  t12381 = t12379 + t12380;
  t12383 = t11784*t11040;
  t12384 = t11801*t11787*t11802;
  t12385 = t12383 + t12384;
  t12392 = t11614*t12381;
  t12395 = t11573*t12385;
  t12396 = t12392 + t12395;
  t12451 = -1.*t11801*t11784*t11787;
  t12455 = t11040*t11802;
  t12456 = t12451 + t12455;
  t12494 = -1.*t11614*t12456;
  t12495 = t12494 + t12395;
  t12401 = -1.*t11614*t12385;
  t12511 = t11573*t12456;
  t12512 = t11614*t12385;
  t12513 = t12511 + t12512;
  t12515 = -1.*t11801*t9588*t11029;
  t12519 = -1.*t11849*t12513;
  t12523 = t12515 + t12519;
  t12556 = t11849*t11801*t9588;
  t12558 = -1.*t11029*t12513;
  t12571 = t12556 + t12558;
  t12623 = t11801*t9588*t11029;
  t12625 = t11849*t12513;
  t12637 = t12623 + t12625;
  p_output1[0]=1.;
  p_output1[1]=t11616*t11833 + t11838*t11841 - 0.15121*(-1.*t11614*t11833 + t11573*t11841) - 0.28121*t11851*t11856 - 0.50321*t11868*t11871 - 0.50321*t11873*t11876 - 0.19821*(t11858*t11871 - 1.*t11873*t11876) - 0.28121*t11029*t11040*t9588;
  p_output1[2]=-0.28121*t11029*t11787*t11801 - 0.28121*t11851*t12220 - 0.50321*t11868*t12299 - 0.50321*t11873*t12310 - 0.19821*(t11858*t12299 - 1.*t11873*t12310) - 1.*t11616*t11784*t11801*t9588 + t11801*t11802*t11838*t9588 - 0.15121*(t11614*t11784*t11801*t9588 + t11573*t11801*t11802*t9588);
  p_output1[3]=t11838*t12381 + t11616*t12385 - 0.28121*t11851*t12396 - 0.50321*t11849*t11868*t12396 + 0.50321*t11029*t11873*t12396 - 0.19821*(t11849*t11858*t12396 + t11029*t11873*t12396) - 0.15121*(t11573*t12381 + t12401);
  p_output1[4]=(0.15121*t11573 + t11615)*t12385 + (-0.15121*t11573 + t11615)*t12456 - 0.15121*(t12401 - 1.*t11573*t12456) - 0.28121*t11851*t12495 - 0.50321*t11849*t11868*t12495 + 0.50321*t11029*t11873*t12495 - 0.19821*(t11849*t11858*t12495 + t11029*t11873*t12495);
  p_output1[5]=-0.28121*t11029*t12513 - 0.50321*t11873*t12523 - 0.50321*t11868*t12571 - 0.19821*(-1.*t11873*t12523 + t11858*t12571) + 0.28121*t11801*t11849*t9588;
  p_output1[6]=-0.50321*t11858*t12571 - 0.50321*t11873*t12637 - 0.19821*(-1.*t11858*t12571 - 1.*t11873*t12637);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void J_u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
