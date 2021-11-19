/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:49 GMT+01:00
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
  double t484;
  double t57;
  double t74;
  double t158;
  double t193;
  double t285;
  double t349;
  double t531;
  double t689;
  double t843;
  double t1061;
  double t58;
  double t1380;
  double t1206;
  double t1782;
  double t1786;
  double t1794;
  double t1867;
  double t1873;
  double t1892;
  double t1939;
  double t1943;
  double t1954;
  double t1961;
  double t2182;
  double t1991;
  double t2033;
  double t2045;
  double t2102;
  double t2133;
  double t2135;
  double t2221;
  double t2223;
  double t2261;
  double t2279;
  double t2397;
  double t2403;
  double t2405;
  double t2406;
  double t2407;
  double t2415;
  double t461;
  double t820;
  double t847;
  double t1117;
  double t1160;
  double t194;
  double t407;
  double t2668;
  double t1285;
  double t1289;
  double t2703;
  double t1618;
  double t1619;
  double t1659;
  double t1711;
  double t1776;
  double t2686;
  double t2707;
  double t2744;
  double t2787;
  double t2795;
  double t2798;
  double t1823;
  double t1844;
  double t1847;
  double t1958;
  double t1963;
  double t1974;
  double t2816;
  double t2820;
  double t2828;
  double t2843;
  double t2846;
  double t2850;
  double t2155;
  double t2165;
  double t2184;
  double t2192;
  double t2212;
  double t2295;
  double t2306;
  double t2323;
  double t2336;
  double t2356;
  double t2862;
  double t2867;
  double t2877;
  double t2880;
  double t2887;
  double t2892;
  double t2901;
  double t2902;
  double t2441;
  double t2442;
  double t2906;
  double t2907;
  double t2908;
  double t2910;
  double t2503;
  double t2511;
  double t3075;
  double t3076;
  double t3078;
  double t3082;
  double t3084;
  double t3093;
  double t3108;
  double t3109;
  double t3110;
  double t3125;
  double t3140;
  double t3145;
  double t3158;
  double t3159;
  double t3160;
  double t3163;
  double t3169;
  double t3175;
  double t3177;
  double t3183;
  double t3187;
  double t3194;
  double t3195;
  double t3201;
  t484 = Cos(var1[10]);
  t57 = Cos(var1[4]);
  t74 = Cos(var1[9]);
  t158 = -1.*t74;
  t193 = 1. + t158;
  t285 = Sin(var1[9]);
  t349 = -0.15121*t285;
  t531 = -1.*t484;
  t689 = 1. + t531;
  t843 = -1. + t484;
  t1061 = Sin(var1[10]);
  t58 = Cos(var1[5]);
  t1380 = Sin(var1[5]);
  t1206 = Sin(var1[4]);
  t1782 = -1.*t57*t58*t285;
  t1786 = -1.*t74*t57*t1380;
  t1794 = t1782 + t1786;
  t1867 = t74*t57*t58;
  t1873 = -1.*t57*t285*t1380;
  t1892 = t1867 + t1873;
  t1939 = Cos(var1[11]);
  t1943 = -1.*t1939;
  t1954 = 1. + t1943;
  t1961 = Sin(var1[11]);
  t2182 = -1. + t1939;
  t1991 = t1061*t1206;
  t2033 = -4.e-6*t1061*t1794;
  t2045 = -1.000000000016*t689;
  t2102 = 1. + t2045;
  t2133 = t2102*t1892;
  t2135 = t1991 + t2033 + t2133;
  t2221 = t484*t1206;
  t2223 = 4.e-6*t689*t1794;
  t2261 = -1.*t1061*t1892;
  t2279 = t2221 + t2223 + t2261;
  t2397 = 4.e-6*t689*t1206;
  t2403 = 1.6e-11*t843;
  t2405 = 1. + t2403;
  t2406 = t2405*t1794;
  t2407 = 4.e-6*t1061*t1892;
  t2415 = t2397 + t2406 + t2407;
  t461 = -4.9936e-13*var1[10];
  t820 = -0.038749*t689;
  t847 = 6.19984e-13*t843;
  t1117 = -0.281210000004*t1061;
  t1160 = t461 + t820 + t847 + t1117;
  t194 = 0.15121*t193;
  t407 = t194 + t349;
  t2668 = Sin(var1[3]);
  t1285 = -0.15121*t193;
  t1289 = t1285 + t349;
  t2703 = Cos(var1[3]);
  t1618 = -1.2484e-7*var1[10];
  t1619 = 2.479936e-18*t689;
  t1659 = -1.54996e-7*t843;
  t1711 = 1.124840000016e-6*t1061;
  t1776 = t1618 + t1619 + t1659 + t1711;
  t2686 = t58*t2668*t1206;
  t2707 = t2703*t1380;
  t2744 = t2686 + t2707;
  t2787 = t2703*t58;
  t2795 = -1.*t2668*t1206*t1380;
  t2798 = t2787 + t2795;
  t1823 = 0.281210000008499*t689;
  t1844 = -0.03874900000062*t1061;
  t1847 = t1823 + t1844;
  t1958 = 0.50315000001605*t1954;
  t1963 = -0.0398890000006382*t1961;
  t1974 = t1958 + t1963;
  t2816 = -1.*t285*t2744;
  t2820 = t74*t2798;
  t2828 = t2816 + t2820;
  t2843 = t74*t2744;
  t2846 = t285*t2798;
  t2850 = t2843 + t2846;
  t2155 = -5.04e-14*var1[11];
  t2165 = -0.039889*t1954;
  t2184 = 6.38224e-13*t2182;
  t2192 = -0.503150000008*t1961;
  t2212 = t2155 + t2165 + t2184 + t2192;
  t2295 = -1.26e-8*var1[11];
  t2306 = 2.552896e-18*t1954;
  t2323 = -1.59556e-7*t2182;
  t2336 = 2.012600000032e-6*t1961;
  t2356 = t2295 + t2306 + t2323 + t2336;
  t2862 = -1.*t57*t1061*t2668;
  t2867 = -4.e-6*t1061*t2828;
  t2877 = t2102*t2850;
  t2880 = t2862 + t2867 + t2877;
  t2887 = -1.*t484*t57*t2668;
  t2892 = 4.e-6*t689*t2828;
  t2901 = -1.*t1061*t2850;
  t2902 = t2887 + t2892 + t2901;
  t2441 = 1.6e-11*t2182;
  t2442 = 1. + t2441;
  t2906 = -4.e-6*t689*t57*t2668;
  t2907 = t2405*t2828;
  t2908 = 4.e-6*t1061*t2850;
  t2910 = t2906 + t2907 + t2908;
  t2503 = -1.000000000016*t1954;
  t2511 = 1. + t2503;
  t3075 = -1.*t2703*t58*t1206;
  t3076 = t2668*t1380;
  t3078 = t3075 + t3076;
  t3082 = t58*t2668;
  t3084 = t2703*t1206*t1380;
  t3093 = t3082 + t3084;
  t3108 = -1.*t285*t3078;
  t3109 = t74*t3093;
  t3110 = t3108 + t3109;
  t3125 = t74*t3078;
  t3140 = t285*t3093;
  t3145 = t3125 + t3140;
  t3158 = t2703*t57*t1061;
  t3159 = -4.e-6*t1061*t3110;
  t3160 = t2102*t3145;
  t3163 = t3158 + t3159 + t3160;
  t3169 = t484*t2703*t57;
  t3175 = 4.e-6*t689*t3110;
  t3177 = -1.*t1061*t3145;
  t3183 = t3169 + t3175 + t3177;
  t3187 = 4.e-6*t689*t2703*t57;
  t3194 = t2405*t3110;
  t3195 = 4.e-6*t1061*t3145;
  t3201 = t3187 + t3194 + t3195;
  p_output1[0]=t1160*t1206 + t1776*t1794 + t1847*t1892 + t1974*t2135 + t2212*t2279 + t2356*t2415 - 0.041195*(-1.*t1961*t2135 + t1939*t2279 + 4.e-6*t1954*t2415) - 0.14871*(4.e-6*t1961*t2135 + 4.e-6*t1954*t2279 + t2415*t2442) + 0.803147*(t1961*t2279 - 4.e-6*t1961*t2415 + t2135*t2511) - 1.*t1289*t1380*t57 + t407*t57*t58 + var1[0] - 1.*var2[0];
  p_output1[1]=t1289*t2798 + t1776*t2828 + t1847*t2850 + t1974*t2880 + t2212*t2902 + t2356*t2910 - 0.041195*(-1.*t1961*t2880 + t1939*t2902 + 4.e-6*t1954*t2910) + 0.803147*(t2511*t2880 + t1961*t2902 - 4.e-6*t1961*t2910) - 0.14871*(4.e-6*t1961*t2880 + 4.e-6*t1954*t2902 + t2442*t2910) + t2744*t407 - 1.*t1160*t2668*t57 + var1[1] - 1.*var2[1];
  p_output1[2]=t1289*t3093 + t1776*t3110 + t1847*t3145 + t1974*t3163 + t2212*t3183 + t2356*t3201 - 0.041195*(-1.*t1961*t3163 + t1939*t3183 + 4.e-6*t1954*t3201) + 0.803147*(t2511*t3163 + t1961*t3183 - 4.e-6*t1961*t3201) - 0.14871*(4.e-6*t1961*t3163 + 4.e-6*t1954*t3183 + t2442*t3201) + t3078*t407 + t1160*t2703*t57 + var1[2] - 1.*var2[2];
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
