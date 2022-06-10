/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:09:59 GMT+02:00
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
  double t5314;
  double t48133;
  double t48141;
  double t48136;
  double t48145;
  double t18640;
  double t37886;
  double t48158;
  double t48161;
  double t48163;
  double t48164;
  double t48190;
  double t48138;
  double t48147;
  double t48152;
  double t48121;
  double t48191;
  double t48192;
  double t48194;
  double t48196;
  double t48197;
  double t48198;
  double t48200;
  double t48202;
  double t48206;
  double t48207;
  double t48208;
  double t48125;
  double t48126;
  double t48159;
  double t48160;
  double t48228;
  double t48229;
  double t48230;
  double t48204;
  double t48205;
  double t48234;
  double t48241;
  double t48246;
  double t48258;
  double t48267;
  double t48270;
  double t51607;
  double t51614;
  double t51701;
  double t50983;
  double t51019;
  double t51029;
  double t51877;
  double t51884;
  double t51889;
  double t52157;
  double t52203;
  double t52212;
  double t52228;
  double t52237;
  double t52240;
  double t48218;
  double t48219;
  double t48220;
  double t48221;
  double t48222;
  double t48224;
  double t48225;
  double t48226;
  double t48231;
  double t48255;
  double t48276;
  double t48280;
  double t48287;
  double t48290;
  double t48315;
  double t48320;
  double t48480;
  double t48495;
  double t49108;
  double t49526;
  t5314 = Cos(var1[3]);
  t48133 = Cos(var1[5]);
  t48141 = Sin(var1[3]);
  t48136 = Sin(var1[4]);
  t48145 = Sin(var1[5]);
  t18640 = Cos(var1[4]);
  t37886 = Sin(var1[9]);
  t48158 = Cos(var1[9]);
  t48161 = t48133*t48141;
  t48163 = t5314*t48136*t48145;
  t48164 = t48161 + t48163;
  t48190 = Sin(var1[10]);
  t48138 = -1.*t5314*t48133*t48136;
  t48147 = t48141*t48145;
  t48152 = t48138 + t48147;
  t48121 = Cos(var1[10]);
  t48191 = t48158*t5314*t18640;
  t48192 = -1.*t37886*t48164;
  t48194 = t48191 + t48192;
  t48196 = Sin(var1[11]);
  t48197 = -1.*t48190*t48152;
  t48198 = t48121*t48194;
  t48200 = t48197 + t48198;
  t48202 = Cos(var1[11]);
  t48206 = t48121*t48152;
  t48207 = t48190*t48194;
  t48208 = t48206 + t48207;
  t48125 = -1.*t48121;
  t48126 = 1. + t48125;
  t48159 = -1.*t48158;
  t48160 = 1. + t48159;
  t48228 = t48158*t48136;
  t48229 = t18640*t37886*t48145;
  t48230 = t48228 + t48229;
  t48204 = -1.*t48202;
  t48205 = 1. + t48204;
  t48234 = -1.*t18640*t48133*t48190;
  t48241 = t48121*t48230;
  t48246 = t48234 + t48241;
  t48258 = t48121*t18640*t48133;
  t48267 = t48190*t48230;
  t48270 = t48258 + t48267;
  t51607 = t5314*t48133;
  t51614 = -1.*t48141*t48136*t48145;
  t51701 = t51607 + t51614;
  t50983 = t48133*t48141*t48136;
  t51019 = t5314*t48145;
  t51029 = t50983 + t51019;
  t51877 = -1.*t48158*t18640*t48141;
  t51884 = -1.*t37886*t51701;
  t51889 = t51877 + t51884;
  t52157 = -1.*t48190*t51029;
  t52203 = t48121*t51889;
  t52212 = t52157 + t52203;
  t52228 = t48121*t51029;
  t52237 = t48190*t51889;
  t52240 = t52228 + t52237;
  t48218 = -1.*var2[0];
  t48219 = -0.325*t48126*t18640*t48133;
  t48220 = -0.1575*t37886*t48136;
  t48221 = -0.1575*t48160*t18640*t48145;
  t48222 = t37886*t48136;
  t48224 = -1.*t48158*t18640*t48145;
  t48225 = t48222 + t48224;
  t48226 = 0.2255*t48225;
  t48231 = 0.325*t48190*t48230;
  t48255 = -0.575*t48196*t48246;
  t48276 = -0.575*t48205*t48270;
  t48280 = -1.*t48196*t48246;
  t48287 = t48202*t48270;
  t48290 = t48280 + t48287;
  t48315 = -0.295*t48290;
  t48320 = t48202*t48246;
  t48480 = t48196*t48270;
  t48495 = t48320 + t48480;
  t49108 = -0.0641*t48495;
  t49526 = t48218 + var1[0] + t48219 + t48220 + t48221 + t48226 + t48231 + t48255 + t48276 + t48315 + t49108;
  p_output1[0]=-0.325*t48126*t48152 + 0.1575*t48160*t48164 + 0.325*t48190*t48194 - 0.575*t48196*t48200 - 0.575*t48205*t48208 - 0.0641*(t48200*t48202 + t48196*t48208) - 0.295*(-1.*t48196*t48200 + t48202*t48208) - 0.1575*t18640*t37886*t5314 + 0.2255*(t48158*t48164 + t18640*t37886*t5314) + var1[2] - 0.5*t49526*(0.1575*t18640*t37886*t48141 - 0.325*t48126*t51029 + 0.1575*t48160*t51701 + 0.2255*(-1.*t18640*t37886*t48141 + t48158*t51701) + 0.325*t48190*t51889 - 0.575*t48196*t52212 - 0.575*t48205*t52240 - 0.0641*(t48202*t52212 + t48196*t52240) - 0.295*(-1.*t48196*t52212 + t48202*t52240) + var1[1])*var3[0]*(1. + Tanh(t49526*var4[0]));
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

#include "u_rearSwingFootHeighttwisted_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeighttwisted_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
