/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:30 GMT+02:00
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
  double t17340;
  double t16910;
  double t18373;
  double t18554;
  double t18567;
  double t18568;
  double t18569;
  double t18751;
  double t17347;
  double t17423;
  double t17740;
  double t17753;
  double t17779;
  double t18762;
  double t18772;
  double t18778;
  double t18746;
  double t18779;
  double t18781;
  double t18782;
  double t18783;
  double t18784;
  double t18788;
  double t18545;
  double t18560;
  double t18565;
  double t18891;
  double t18972;
  double t18886;
  double t18842;
  double t18846;
  double t18849;
  double t18866;
  double t18960;
  double t18981;
  double t18982;
  double t19015;
  double t18995;
  double t18998;
  double t18999;
  double t18993;
  double t19021;
  double t19023;
  double t19024;
  double t18792;
  double t18793;
  double t18795;
  double t18797;
  double t18789;
  double t18790;
  double t19072;
  double t19075;
  double t19081;
  double t19057;
  double t19059;
  double t19067;
  double t19092;
  double t19093;
  double t19094;
  double t19114;
  double t19115;
  double t19116;
  double t19136;
  double t19137;
  double t19138;
  double t19101;
  double t19102;
  double t19105;
  double t19110;
  double t19120;
  double t19121;
  double t19122;
  double t19123;
  double t19132;
  double t19148;
  double t19149;
  double t19150;
  double t19151;
  double t19152;
  double t19154;
  double t19156;
  double t19158;
  double t19159;
  double t19215;
  double t19179;
  double t18871;
  double t18983;
  double t18986;
  double t19335;
  double t19165;
  double t19166;
  double t19167;
  double t19433;
  double t19612;
  double t19620;
  t17340 = Cos(var1[17]);
  t16910 = Sin(var1[17]);
  t18373 = Cos(var1[16]);
  t18554 = Sin(var1[16]);
  t18567 = t18373*t17340;
  t18568 = t18554*t16910;
  t18569 = t18567 + t18568;
  t18751 = Cos(var1[15]);
  t17347 = -1.*t17340;
  t17423 = 1. + t17347;
  t17740 = -0.50321*t17423;
  t17753 = -0.19821*t17340;
  t17779 = t17740 + t17753;
  t18762 = -1.*t18751;
  t18772 = 1. + t18762;
  t18778 = -0.15121*t18772;
  t18746 = Sin(var1[15]);
  t18779 = -1.*t18373;
  t18781 = 1. + t18779;
  t18782 = -0.28121*t18781;
  t18783 = t18373*t17779;
  t18784 = 0.305*t18554*t16910;
  t18788 = t18782 + t18783 + t18784;
  t18545 = -1.*t18373*t17340;
  t18560 = -1.*t18554*t16910;
  t18565 = t18545 + t18560;
  t18891 = Cos(var1[5]);
  t18972 = Sin(var1[5]);
  t18886 = Cos(var1[4]);
  t18842 = -1.*t17340*t18554;
  t18846 = t18373*t16910;
  t18849 = t18842 + t18846;
  t18866 = Sin(var1[4]);
  t18960 = t18751*t18891*t18565;
  t18981 = -1.*t18746*t18565*t18972;
  t18982 = t18960 + t18981;
  t19015 = Cos(var1[3]);
  t18995 = t18891*t18746*t18565;
  t18998 = t18751*t18565*t18972;
  t18999 = t18995 + t18998;
  t18993 = Sin(var1[3]);
  t19021 = t18886*t18849;
  t19023 = -1.*t18866*t18982;
  t19024 = t19021 + t19023;
  t18792 = -0.15121*t18751;
  t18793 = 0.15121*t18746;
  t18795 = t18746*t18788;
  t18797 = t18778 + t18792 + t18793 + t18795;
  t18789 = t18751*t18788;
  t18790 = t18778 + t18789;
  t19072 = -1.*t18751*t18891;
  t19075 = t18746*t18972;
  t19081 = t19072 + t19075;
  t19057 = t18891*t18746*t18849;
  t19059 = t18751*t18849*t18972;
  t19067 = t19057 + t19059;
  t19092 = t18891*t18797;
  t19093 = t18790*t18972;
  t19094 = t19092 + t19093;
  t19114 = t18891*t18790;
  t19115 = -1.*t18797*t18972;
  t19116 = t19114 + t19115;
  t19136 = t18751*t18891*t18849;
  t19137 = -1.*t18746*t18849*t18972;
  t19138 = t19136 + t19137;
  t19101 = -1.*t19081*t19094;
  t19102 = t18891*t18746;
  t19105 = t18751*t18972;
  t19110 = t19102 + t19105;
  t19120 = 0.28121*t18554;
  t19121 = t17779*t18554;
  t19122 = -0.305*t18373*t16910;
  t19123 = t19120 + t19121 + t19122;
  t19132 = t19067*t19094;
  t19148 = t18569*t18866;
  t19149 = t18886*t19138;
  t19150 = t19148 + t19149;
  t19151 = t19123*t18866;
  t19152 = t18886*t19116;
  t19154 = t19151 + t19152;
  t19156 = t18886*t19123;
  t19158 = -1.*t18866*t19116;
  t19159 = t19156 + t19158;
  t19215 = -1.*t19123*t18569;
  t19179 = t19123*t18849;
  t18871 = t18849*t18866;
  t18983 = t18886*t18982;
  t18986 = t18871 + t18983;
  t19335 = -1.*t19067*t19094;
  t19165 = t18886*t18569;
  t19166 = -1.*t18866*t19138;
  t19167 = t19165 + t19166;
  t19433 = t18999*t19094;
  t19612 = t19081*t19094;
  t19620 = -1.*t18999*t19094;
  p_output1[0]=t18986*var2[0] + (t18999*t19015 - 1.*t18993*t19024)*var2[1] + (t18993*t18999 + t19015*t19024)*var2[2] + (t19150*(t19101 - 1.*t18886*t19110*t19154 + t18866*t19110*t19159) + t18886*t19110*(t19132 + t19150*t19154 + t19159*t19167))*var2[3] + (t19067*(t19101 - 1.*t19110*t19116) + t19081*(t18569*t19123 + t19132 + t19116*t19138))*var2[4] + t18569*(-1.*t18746*t18790 + t18751*t18797)*var2[5] + (-0.15121*t18565 - 0.15121*t18569)*var2[15] + (0.28121*t16910 - 0.305*t16910*t17340 + t16910*t17779)*var2[16];
  p_output1[1]=t18886*t19110*var2[0] + (t19015*t19081 + t18866*t18993*t19110)*var2[1] + (t18993*t19081 - 1.*t18866*t19015*t19110)*var2[2] + (t18986*(-1.*t19150*t19154 - 1.*t19159*t19167 + t19335) + t19150*(t18986*t19154 + t19024*t19159 + t19433))*var2[3] + (t18999*(-1.*t19116*t19138 + t19215 + t19335) + t19067*(t18982*t19116 + t19179 + t19433))*var2[4] + (t18569*(t18565*t18751*t18790 + t18565*t18746*t18797 + t19179) + t18849*(-1.*t18751*t18790*t18849 - 1.*t18746*t18797*t18849 + t19215))*var2[5] + (-0.15121 + t18569*(t18565*t18788 + t19179) + t18849*(-1.*t18788*t18849 + t19215))*var2[15];
  p_output1[2]=t19150*var2[0] + (t19015*t19067 - 1.*t18993*t19167)*var2[1] + (t18993*t19067 + t19015*t19167)*var2[2] + (t18986*(t18886*t19110*t19154 - 1.*t18866*t19110*t19159 + t19612) + t18886*t19110*(-1.*t18986*t19154 - 1.*t19024*t19159 + t19620))*var2[3] + (t18999*(t19110*t19116 + t19612) + t19081*(-1.*t18982*t19116 - 1.*t18849*t19123 + t19620))*var2[4] + (t18746*t18790 - 1.*t18751*t18797)*t18849*var2[5] + (0.305*Power(t16910,2) + 0.28121*t17340 + t17340*t17779)*var2[16] - 0.305*var2[17];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
