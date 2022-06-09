/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:43 GMT+02:00
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
  double t3357;
  double t3254;
  double t3379;
  double t8074;
  double t7910;
  double t7957;
  double t8079;
  double t3246;
  double t8070;
  double t8081;
  double t8086;
  double t3400;
  double t8095;
  double t8097;
  double t8098;
  double t8094;
  double t8230;
  double t8233;
  double t8100;
  double t8101;
  double t8102;
  double t8203;
  double t8204;
  double t8207;
  double t8208;
  double t8209;
  double t8218;
  double t8234;
  double t8254;
  double t8255;
  double t8261;
  double t8268;
  double t8269;
  double t8272;
  double t8273;
  double t8274;
  double t23661;
  double t29960;
  double t29972;
  double t29975;
  double t29976;
  double t29977;
  double t8092;
  double t8104;
  double t8193;
  double t30095;
  double t30096;
  double t30097;
  double t30099;
  double t30100;
  double t30101;
  double t30102;
  double t30103;
  double t30104;
  double t3307;
  double t3427;
  double t3448;
  double t30094;
  double t30098;
  double t30105;
  double t30106;
  double t30111;
  double t30112;
  double t30113;
  double t30114;
  double t30116;
  double t30117;
  double t30090;
  double t30091;
  double t30092;
  double t30093;
  double t30107;
  double t30108;
  double t30122;
  double t30123;
  double t30124;
  double t30127;
  double t30128;
  double t30129;
  double t30109;
  double t30118;
  double t30119;
  double t30126;
  double t30131;
  double t30132;
  double t30134;
  double t30136;
  double t30137;
  double t8199;
  double t8222;
  double t8224;
  double t30120;
  double t30141;
  double t30148;
  double t30154;
  double t30162;
  double t30169;
  double t30197;
  double t30201;
  double t30177;
  double t30181;
  double t30191;
  double t30187;
  double t30231;
  double t30226;
  t3357 = Cos(var1[12]);
  t3254 = Sin(var1[4]);
  t3379 = Cos(var1[4]);
  t8074 = Cos(var1[13]);
  t7910 = Cos(var1[14]);
  t7957 = Sin(var1[13]);
  t8079 = Sin(var1[14]);
  t3246 = Sin(var1[12]);
  t8070 = t7910*t7957;
  t8081 = -1.*t8074*t8079;
  t8086 = t8070 + t8081;
  t3400 = Sin(var1[5]);
  t8095 = t8074*t7910;
  t8097 = t7957*t8079;
  t8098 = t8095 + t8097;
  t8094 = Cos(var1[5]);
  t8230 = Cos(var1[3]);
  t8233 = Sin(var1[3]);
  t8100 = t8094*t8098;
  t8101 = t3246*t8086*t3400;
  t8102 = t8100 + t8101;
  t8203 = -1.*t7910*t7957;
  t8204 = t8074*t8079;
  t8207 = t8203 + t8204;
  t8208 = t8094*t8207;
  t8209 = t3246*t8098*t3400;
  t8218 = t8208 + t8209;
  t8234 = t3379*t3246;
  t8254 = t3357*t3254*t3400;
  t8255 = t8234 + t8254;
  t8261 = -1.*t8094*t3246*t8086;
  t8268 = t8098*t3400;
  t8269 = t8261 + t8268;
  t8272 = t3357*t3379*t8086;
  t8273 = -1.*t3254*t8102;
  t8274 = t8272 + t8273;
  t23661 = -1.*t8094*t3246*t8098;
  t29960 = t8207*t3400;
  t29972 = t23661 + t29960;
  t29975 = t3357*t3379*t8098;
  t29976 = -1.*t3254*t8218;
  t29977 = t29975 + t29976;
  t8092 = t3357*t8086*t3254;
  t8104 = t3379*t8102;
  t8193 = t8092 + t8104;
  t30095 = -0.0641*t7910;
  t30096 = -0.28*t8079;
  t30097 = t30095 + t30096;
  t30099 = -1.*t7910;
  t30100 = 1. + t30099;
  t30101 = 0.075*t30100;
  t30102 = 0.355*t7910;
  t30103 = -0.0641*t8079;
  t30104 = t30101 + t30102 + t30103;
  t3307 = t3246*t3254;
  t3427 = -1.*t3357*t3379*t3400;
  t3448 = t3307 + t3427;
  t30094 = -0.325*t7957;
  t30098 = t8074*t30097;
  t30105 = t7957*t30104;
  t30106 = t30094 + t30098 + t30105;
  t30111 = -1.*t8074;
  t30112 = 1. + t30111;
  t30113 = 0.325*t30112;
  t30114 = -1.*t7957*t30097;
  t30116 = t8074*t30104;
  t30117 = t30113 + t30114 + t30116;
  t30090 = -1.*t3357;
  t30091 = 1. + t30090;
  t30092 = -0.1575*t30091;
  t30093 = -0.2255*t3357;
  t30107 = -1.*t3246*t30106;
  t30108 = t30092 + t30093 + t30107;
  t30122 = -0.068*t3246;
  t30123 = t3357*t30106;
  t30124 = t30122 + t30123;
  t30127 = t8094*t30117;
  t30128 = -1.*t30108*t3400;
  t30129 = t30127 + t30128;
  t30109 = t8094*t30108;
  t30118 = t30117*t3400;
  t30119 = t30109 + t30118;
  t30126 = t30124*t3254;
  t30131 = t3379*t30129;
  t30132 = t30126 + t30131;
  t30134 = t3379*t30124;
  t30136 = -1.*t3254*t30129;
  t30137 = t30134 + t30136;
  t8199 = t3357*t8098*t3254;
  t8222 = t3379*t8218;
  t8224 = t8199 + t8222;
  t30120 = t3357*t8094*t30119;
  t30141 = -1.*t30119*t8269;
  t30148 = t30119*t8269;
  t30154 = -1.*t30119*t29972;
  t30162 = -1.*t3357*t8094*t30119;
  t30169 = t30119*t29972;
  t30197 = -1.*t3246*t30124;
  t30201 = t3357*t30124*t8098;
  t30177 = t3246*t30124;
  t30181 = -1.*t3357*t30124*t8086;
  t30191 = -1.*t3357*t30124*t8098;
  t30187 = t3357*t30124*t8086;
  t30231 = t30117*t8098;
  t30226 = -1.*t30117*t8207;
  p_output1[0]=t8193*var2[0] + t3448*var2[1] + t8224*var2[2];
  p_output1[1]=(t8230*t8269 - 1.*t8233*t8274)*var2[0] + (t3357*t8094*t8230 - 1.*t8233*t8255)*var2[1] + (t29972*t8230 - 1.*t29977*t8233)*var2[2];
  p_output1[2]=(t8233*t8269 + t8230*t8274)*var2[0] + (t3357*t8094*t8233 + t8230*t8255)*var2[1] + (t29977*t8230 + t29972*t8233)*var2[2];
  p_output1[3]=(t3448*(t29977*t30137 + t30169 + t30132*t8224) + t8224*(t30162 - 1.*t30132*t3448 - 1.*t30137*t8255))*var2[0] + (t8193*(-1.*t29977*t30137 + t30154 - 1.*t30132*t8224) + t8224*(t30148 + t30132*t8193 + t30137*t8274))*var2[1] + (t8193*(t30120 + t30132*t3448 + t30137*t8255) + t3448*(t30141 - 1.*t30132*t8193 - 1.*t30137*t8274))*var2[2];
  p_output1[4]=(t29972*(t30162 + t30197 + t30129*t3357*t3400) + t3357*t8094*(t30169 + t30201 + t30129*t8218))*var2[0] + (t29972*(t30148 + t30187 + t30129*t8102) + (t30154 + t30191 - 1.*t30129*t8218)*t8269)*var2[1] + (t3357*t8094*(t30141 + t30181 - 1.*t30129*t8102) + (t30120 + t30177 - 1.*t30129*t3357*t3400)*t8269)*var2[2];
  p_output1[5]=(t3357*(t30197 - 1.*t30108*t3357)*t8098 + t3246*(t30201 - 1.*t30108*t3246*t8098 + t30117*t8207))*var2[0] + (t3357*(t30187 + t30231 - 1.*t30108*t3246*t8086)*t8098 + t3357*t8086*(t30191 + t30226 + t30108*t3246*t8098))*var2[1] + (t3357*(t30177 + t30108*t3357)*t8086 + t3246*(t30181 + t30108*t3246*t8086 - 1.*t30117*t8098))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t8086 + 0.2255*t8207)*var2[0] + (t8098*(t30226 - 1.*t30106*t8098) + (t30231 + t30106*t8086)*t8207)*var2[1] - 0.068*t8098*var2[2];
  p_output1[13]=(-1.*t30097*t7910 + 0.325*t8079 - 1.*t30104*t8079)*var2[0] + (-0.325*t7910 + t30104*t7910 - 1.*t30097*t8079)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
