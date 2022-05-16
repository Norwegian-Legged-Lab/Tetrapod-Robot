/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 21:24:56 GMT+01:00
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
  double t6;
  double t11;
  double t12;
  double t13;
  double t14;
  double t15;
  double t3;
  double t4;
  double t5;
  double t7;
  double t8;
  double t9;
  double t10;
  double t19;
  double t27;
  double t28;
  double t29;
  double t31;
  double t42;
  double t43;
  double t44;
  double t50;
  double t23;
  double t24;
  double t25;
  double t35;
  double t36;
  double t37;
  double t58;
  double t59;
  double t60;
  double t62;
  double t51;
  double t52;
  double t53;
  double t54;
  double t55;
  double t56;
  double t85;
  double t76;
  double t77;
  double t78;
  double t79;
  double t66;
  double t67;
  double t68;
  double t69;
  double t70;
  double t71;
  double t16;
  double t17;
  double t20;
  double t21;
  double t106;
  double t107;
  double t108;
  double t26;
  double t30;
  double t32;
  double t33;
  double t38;
  double t39;
  double t40;
  double t45;
  double t46;
  double t47;
  double t48;
  double t119;
  double t120;
  double t121;
  double t111;
  double t112;
  double t113;
  double t115;
  double t116;
  double t117;
  double t57;
  double t61;
  double t63;
  double t64;
  double t72;
  double t73;
  double t74;
  double t80;
  double t81;
  double t82;
  double t83;
  double t86;
  double t87;
  double t123;
  double t124;
  double t125;
  double t126;
  double t133;
  double t134;
  double t135;
  double t136;
  double t128;
  double t129;
  double t130;
  double t131;
  double t98;
  double t99;
  double t156;
  double t157;
  double t158;
  double t160;
  double t161;
  double t162;
  double t165;
  double t166;
  double t167;
  double t168;
  double t175;
  double t176;
  double t177;
  double t178;
  double t170;
  double t171;
  double t172;
  double t173;
  t6 = Cos(var1[5]);
  t11 = Cos(var1[6]);
  t12 = -1.*t11;
  t13 = 1. + t12;
  t14 = 0.15121*t13;
  t15 = Sin(var1[6]);
  t3 = Cos(var1[3]);
  t4 = Sin(var1[5]);
  t5 = -1.*t3*t4;
  t7 = Sin(var1[4]);
  t8 = Sin(var1[3]);
  t9 = t6*t7*t8;
  t10 = t5 + t9;
  t19 = Cos(var1[4]);
  t27 = Cos(var1[7]);
  t28 = -1.*t27;
  t29 = 1. + t28;
  t31 = Sin(var1[7]);
  t42 = t6*t3*t7;
  t43 = t4*t8;
  t44 = t42 + t43;
  t50 = -1. + t27;
  t23 = t11*t10;
  t24 = -1.*t6*t19*t15;
  t25 = t23 + t24;
  t35 = t6*t19*t11;
  t36 = t10*t15;
  t37 = t35 + t36;
  t58 = Cos(var1[8]);
  t59 = -1.*t58;
  t60 = 1. + t59;
  t62 = Sin(var1[8]);
  t51 = 4.e-6*t50*t44;
  t52 = 1.6e-11*t50;
  t53 = 1. + t52;
  t54 = t53*t25;
  t55 = 4.e-6*t37*t31;
  t56 = t51 + t54 + t55;
  t85 = -1. + t58;
  t76 = t27*t44;
  t77 = 4.e-6*t50*t25;
  t78 = t37*t31;
  t79 = t76 + t77 + t78;
  t66 = -1.000000000016*t29;
  t67 = 1. + t66;
  t68 = t67*t37;
  t69 = -1.*t44*t31;
  t70 = -4.e-6*t25*t31;
  t71 = t68 + t69 + t70;
  t16 = -0.15121*t15;
  t17 = t14 + t16;
  t20 = 0.15121*t15;
  t21 = t14 + t20;
  t106 = t6*t3;
  t107 = t4*t7*t8;
  t108 = t106 + t107;
  t26 = -1.2484e-7*var1[7];
  t30 = -1.5499600000248e-7*t29;
  t32 = 1.124840000016e-6*t31;
  t33 = t26 + t30 + t32;
  t38 = 0.281210000008499*t29;
  t39 = 0.03874900000062*t31;
  t40 = t38 + t39;
  t45 = 4.9936e-13*var1[7];
  t46 = -0.03874900000062*t29;
  t47 = 0.281210000004*t31;
  t48 = t45 + t46 + t47;
  t119 = t3*t4*t7;
  t120 = -1.*t6*t8;
  t121 = t119 + t120;
  t111 = t11*t108;
  t112 = -1.*t19*t4*t15;
  t113 = t111 + t112;
  t115 = t19*t11*t4;
  t116 = t108*t15;
  t117 = t115 + t116;
  t57 = -1.284e-8*var1[8];
  t61 = -1.5499600000248e-7*t60;
  t63 = 2.012840000032e-6*t62;
  t64 = t57 + t61 + t63;
  t72 = 0.503210000016051*t60;
  t73 = 0.03874900000062*t62;
  t74 = t72 + t73;
  t80 = 5.136e-14*var1[8];
  t81 = -0.03874900000062*t60;
  t82 = 0.503210000008*t62;
  t83 = t80 + t81 + t82;
  t86 = 1.6e-11*t85;
  t87 = 1. + t86;
  t123 = 4.e-6*t50*t121;
  t124 = t53*t113;
  t125 = 4.e-6*t117*t31;
  t126 = t123 + t124 + t125;
  t133 = t27*t121;
  t134 = 4.e-6*t50*t113;
  t135 = t117*t31;
  t136 = t133 + t134 + t135;
  t128 = t67*t117;
  t129 = -1.*t121*t31;
  t130 = -4.e-6*t113*t31;
  t131 = t128 + t129 + t130;
  t98 = -1.000000000016*t60;
  t99 = 1. + t98;
  t156 = t19*t11*t8;
  t157 = t7*t15;
  t158 = t156 + t157;
  t160 = -1.*t11*t7;
  t161 = t19*t8*t15;
  t162 = t160 + t161;
  t165 = 4.e-6*t19*t3*t50;
  t166 = t53*t158;
  t167 = 4.e-6*t162*t31;
  t168 = t165 + t166 + t167;
  t175 = t19*t3*t27;
  t176 = 4.e-6*t50*t158;
  t177 = t162*t31;
  t178 = t175 + t176 + t177;
  t170 = t67*t162;
  t171 = -1.*t19*t3*t31;
  t172 = -4.e-6*t158*t31;
  t173 = t170 + t171 + t172;
  p_output1[0]=t10*t17 + t25*t33 + t37*t40 + t44*t48 + t19*t21*t6 + t56*t64 + t71*t74 + t79*t83 - 0.03875*(t62*t71 + t58*t79 + 4.e-6*t56*t85) + 0.14871*(4.e-6*t62*t71 + 4.e-6*t79*t85 + t56*t87) + 0.80321*(-4.e-6*t56*t62 - 1.*t62*t79 + t71*t99) + var1[0];
  p_output1[1]=t108*t17 + t113*t33 + t19*t21*t4 + t117*t40 + t121*t48 + t126*t64 + t131*t74 + t136*t83 - 0.03875*(t136*t58 + t131*t62 + 4.e-6*t126*t85) + 0.14871*(4.e-6*t131*t62 + 4.e-6*t136*t85 + t126*t87) + 0.80321*(-4.e-6*t126*t62 - 1.*t136*t62 + t131*t99) + var1[1];
  p_output1[2]=t158*t33 + t162*t40 + t19*t3*t48 + t168*t64 - 1.*t21*t7 + t173*t74 + t17*t19*t8 + t178*t83 - 0.03875*(t178*t58 + t173*t62 + 4.e-6*t168*t85) + 0.14871*(4.e-6*t173*t62 + 4.e-6*t178*t85 + t168*t87) + 0.80321*(-4.e-6*t168*t62 - 1.*t178*t62 + t173*t99) + var1[2];
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "pos_fl.hh"

namespace SymFunction
{

void pos_fl_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
