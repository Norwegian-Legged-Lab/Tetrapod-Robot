/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:23 GMT+02:00
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
  double t17;
  double t24;
  double t57;
  double t59;
  double t78;
  double t77;
  double t23;
  double t25;
  double t26;
  double t39;
  double t48;
  double t49;
  double t50;
  double t52;
  double t53;
  double t80;
  double t81;
  double t82;
  double t83;
  double t67;
  double t72;
  double t73;
  double t79;
  double t88;
  double t89;
  double t103;
  double t104;
  double t105;
  double t94;
  double t95;
  double t97;
  double t98;
  double t99;
  double t100;
  double t58;
  double t60;
  double t62;
  double t135;
  double t137;
  double t134;
  double t132;
  double t136;
  double t138;
  double t139;
  double t166;
  double t155;
  double t156;
  double t157;
  double t153;
  double t170;
  double t171;
  double t172;
  double t90;
  double t111;
  double t116;
  double t117;
  double t118;
  double t119;
  double t120;
  double t122;
  double t192;
  double t197;
  double t202;
  double t181;
  double t182;
  double t183;
  double t184;
  double t185;
  double t187;
  double t207;
  double t209;
  double t210;
  double t203;
  double t233;
  double t234;
  double t235;
  double t206;
  double t236;
  double t237;
  double t238;
  double t223;
  double t227;
  double t231;
  double t245;
  double t249;
  double t250;
  double t284;
  double t273;
  double t240;
  double t241;
  double t242;
  double t281;
  double t277;
  double t313;
  double t133;
  double t140;
  double t143;
  double t316;
  double t258;
  double t259;
  double t260;
  double t358;
  double t362;
  double t373;
  double t380;
  t17 = Cos(var1[14]);
  t24 = Sin(var1[14]);
  t57 = Sin(var1[13]);
  t59 = Cos(var1[13]);
  t78 = Sin(var1[12]);
  t77 = Cos(var1[12]);
  t23 = -0.0641*t17;
  t25 = -0.28*t24;
  t26 = t23 + t25;
  t39 = -1.*t17;
  t48 = 1. + t39;
  t49 = 0.075*t48;
  t50 = 0.355*t17;
  t52 = -0.0641*t24;
  t53 = t49 + t50 + t52;
  t80 = -0.325*t57;
  t81 = t59*t26;
  t82 = t57*t53;
  t83 = t80 + t81 + t82;
  t67 = -1.*t17*t57;
  t72 = t59*t24;
  t73 = t67 + t72;
  t79 = -0.068*t78;
  t88 = t77*t83;
  t89 = t79 + t88;
  t103 = t59*t17;
  t104 = t57*t24;
  t105 = t103 + t104;
  t94 = -1.*t77;
  t95 = 1. + t94;
  t97 = -0.1575*t95;
  t98 = -0.2255*t77;
  t99 = -1.*t78*t83;
  t100 = t97 + t98 + t99;
  t58 = t17*t57;
  t60 = -1.*t59*t24;
  t62 = t58 + t60;
  t135 = Cos(var1[5]);
  t137 = Sin(var1[5]);
  t134 = Cos(var1[4]);
  t132 = Sin(var1[4]);
  t136 = t135*t105;
  t138 = t78*t62*t137;
  t139 = t136 + t138;
  t166 = Cos(var1[3]);
  t155 = -1.*t135*t78*t62;
  t156 = t105*t137;
  t157 = t155 + t156;
  t153 = Sin(var1[3]);
  t170 = t77*t134*t62;
  t171 = -1.*t132*t139;
  t172 = t170 + t171;
  t90 = -1.*t78*t89;
  t111 = -1.*t59;
  t116 = 1. + t111;
  t117 = 0.325*t116;
  t118 = -1.*t57*t26;
  t119 = t59*t53;
  t120 = t117 + t118 + t119;
  t122 = t77*t89*t105;
  t192 = t135*t100;
  t197 = t120*t137;
  t202 = t192 + t197;
  t181 = -1.*t135*t78*t105;
  t182 = t73*t137;
  t183 = t181 + t182;
  t184 = t135*t120;
  t185 = -1.*t100*t137;
  t187 = t184 + t185;
  t207 = t135*t73;
  t209 = t78*t105*t137;
  t210 = t207 + t209;
  t203 = -1.*t77*t135*t202;
  t233 = t78*t132;
  t234 = -1.*t77*t134*t137;
  t235 = t233 + t234;
  t206 = t202*t183;
  t236 = t89*t132;
  t237 = t134*t187;
  t238 = t236 + t237;
  t223 = t77*t105*t132;
  t227 = t134*t210;
  t231 = t223 + t227;
  t245 = t134*t89;
  t249 = -1.*t132*t187;
  t250 = t245 + t249;
  t284 = t120*t105;
  t273 = -1.*t120*t73;
  t240 = t134*t78;
  t241 = t77*t132*t137;
  t242 = t240 + t241;
  t281 = t77*t89*t62;
  t277 = -1.*t77*t89*t105;
  t313 = t202*t157;
  t133 = t77*t62*t132;
  t140 = t134*t139;
  t143 = t133 + t140;
  t316 = -1.*t202*t183;
  t258 = t77*t134*t105;
  t259 = -1.*t132*t210;
  t260 = t258 + t259;
  t358 = t78*t89;
  t362 = -1.*t77*t89*t62;
  t373 = t77*t135*t202;
  t380 = -1.*t202*t157;
  p_output1[0]=t143*var2[0] + (t157*t166 - 1.*t153*t172)*var2[1] + (t153*t157 + t166*t172)*var2[2] + (t231*(t203 - 1.*t235*t238 - 1.*t242*t250) + t235*(t206 + t231*t238 + t250*t260))*var2[3] + (t135*(t122 + t206 + t187*t210)*t77 + t183*(t203 + t137*t187*t77 + t90))*var2[4] + (t78*(t122 + t120*t73 - 1.*t100*t105*t78) + t105*t77*(-1.*t100*t77 + t90))*var2[5] + (0.1575*t62 + 0.2255*t73)*var2[12] + (0.325*t24 - 1.*t17*t26 - 1.*t24*t53)*var2[13] - 0.0641*var2[14];
  p_output1[1]=t235*var2[0] + (-1.*t153*t242 + t135*t166*t77)*var2[1] + (t166*t242 + t135*t153*t77)*var2[2] + (t231*(t143*t238 + t172*t250 + t313) + t143*(-1.*t231*t238 - 1.*t250*t260 + t316))*var2[3] + (t183*(t139*t187 + t281 + t313) + t157*(-1.*t187*t210 + t277 + t316))*var2[4] + (t62*t77*(t273 + t277 + t100*t105*t78) + t105*t77*(t281 + t284 - 1.*t100*t62*t78))*var2[5] + (t105*(t273 - 1.*t105*t83) + t73*(t284 + t62*t83))*var2[12];
  p_output1[2]=t231*var2[0] + (t166*t183 - 1.*t153*t260)*var2[1] + (t153*t183 + t166*t260)*var2[2] + (t143*(t235*t238 + t242*t250 + t373) + t235*(-1.*t143*t238 - 1.*t172*t250 + t380))*var2[3] + (t135*(-1.*t139*t187 + t362 + t380)*t77 + t157*(t358 + t373 - 1.*t137*t187*t77))*var2[4] + (t62*t77*(t358 + t100*t77) + t78*(-1.*t105*t120 + t362 + t100*t62*t78))*var2[5] - 0.068*t105*var2[12] + (-0.325*t17 - 1.*t24*t26 + t17*t53)*var2[13] - 0.28*var2[14];
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

#include "dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
