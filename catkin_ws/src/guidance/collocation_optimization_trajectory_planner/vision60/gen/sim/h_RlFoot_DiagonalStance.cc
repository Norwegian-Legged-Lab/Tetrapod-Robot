/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:25 GMT+02:00
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
  double t179;
  double t420;
  double t436;
  double t465;
  double t698;
  double t216;
  double t728;
  double t114;
  double t734;
  double t738;
  double t739;
  double t741;
  double t742;
  double t744;
  double t745;
  double t768;
  double t779;
  double t780;
  double t789;
  double t128;
  double t133;
  double t963;
  double t537;
  double t539;
  double t1005;
  double t1037;
  double t1038;
  double t1039;
  double t986;
  double t1018;
  double t1034;
  double t1062;
  double t1064;
  double t1066;
  double t769;
  double t771;
  double t1075;
  double t1076;
  double t1077;
  double t1082;
  double t1093;
  double t1094;
  double t1149;
  double t1154;
  double t1159;
  double t1139;
  double t1141;
  double t1143;
  double t1178;
  double t1179;
  double t1188;
  double t1213;
  double t1214;
  double t1219;
  double t1236;
  double t1241;
  double t1247;
  t179 = Cos(var1[4]);
  t420 = Sin(var1[9]);
  t436 = Sin(var1[4]);
  t465 = Cos(var1[9]);
  t698 = Sin(var1[5]);
  t216 = Cos(var1[5]);
  t728 = Sin(var1[10]);
  t114 = Cos(var1[10]);
  t734 = t465*t436;
  t738 = t179*t420*t698;
  t739 = t734 + t738;
  t741 = Sin(var1[11]);
  t742 = -1.*t179*t216*t728;
  t744 = t114*t739;
  t745 = t742 + t744;
  t768 = Cos(var1[11]);
  t779 = t114*t179*t216;
  t780 = t728*t739;
  t789 = t779 + t780;
  t128 = -1.*t114;
  t133 = 1. + t128;
  t963 = Sin(var1[3]);
  t537 = -1.*t465;
  t539 = 1. + t537;
  t1005 = Cos(var1[3]);
  t1037 = t1005*t216;
  t1038 = -1.*t963*t436*t698;
  t1039 = t1037 + t1038;
  t986 = t216*t963*t436;
  t1018 = t1005*t698;
  t1034 = t986 + t1018;
  t1062 = -1.*t465*t179*t963;
  t1064 = -1.*t420*t1039;
  t1066 = t1062 + t1064;
  t769 = -1.*t768;
  t771 = 1. + t769;
  t1075 = -1.*t728*t1034;
  t1076 = t114*t1066;
  t1077 = t1075 + t1076;
  t1082 = t114*t1034;
  t1093 = t728*t1066;
  t1094 = t1082 + t1093;
  t1149 = t216*t963;
  t1154 = t1005*t436*t698;
  t1159 = t1149 + t1154;
  t1139 = -1.*t1005*t216*t436;
  t1141 = t963*t698;
  t1143 = t1139 + t1141;
  t1178 = t465*t1005*t179;
  t1179 = -1.*t420*t1159;
  t1188 = t1178 + t1179;
  t1213 = -1.*t728*t1143;
  t1214 = t114*t1188;
  t1219 = t1213 + t1214;
  t1236 = t114*t1143;
  t1241 = t728*t1188;
  t1247 = t1236 + t1241;
  p_output1[0]=-0.325*t133*t179*t216 - 0.1575*t420*t436 - 0.1575*t179*t539*t698 + 0.2255*(t420*t436 - 1.*t179*t465*t698) + 0.325*t728*t739 - 0.575*t741*t745 - 0.575*t771*t789 - 0.0641*(t745*t768 + t741*t789) - 0.295*(-1.*t741*t745 + t768*t789) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.325*t1034*t133 + 0.1575*t1039*t539 + 0.325*t1066*t728 - 0.575*t1077*t741 - 0.0641*(t1094*t741 + t1077*t768) - 0.295*(-1.*t1077*t741 + t1094*t768) - 0.575*t1094*t771 + 0.1575*t179*t420*t963 + 0.2255*(t1039*t465 - 1.*t179*t420*t963) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.325*t1143*t133 - 0.1575*t1005*t179*t420 + 0.2255*(t1005*t179*t420 + t1159*t465) + 0.1575*t1159*t539 + 0.325*t1188*t728 - 0.575*t1219*t741 - 0.0641*(t1247*t741 + t1219*t768) - 0.295*(-1.*t1219*t741 + t1247*t768) - 0.575*t1247*t771 + var1[2] - 1.*var2[2];
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
