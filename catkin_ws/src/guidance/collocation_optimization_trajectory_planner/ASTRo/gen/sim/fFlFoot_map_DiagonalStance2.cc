/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:24 GMT+02:00
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
  double t4023;
  double t3908;
  double t3926;
  double t5545;
  double t6318;
  double t6355;
  double t6786;
  double t6285;
  double t7447;
  double t6271;
  double t7535;
  double t6253;
  double t4017;
  double t6144;
  double t6185;
  double t3898;
  double t6794;
  double t7625;
  double t7710;
  double t7913;
  double t7746;
  double t7782;
  double t7814;
  double t7731;
  double t7921;
  double t7924;
  double t7927;
  double t7978;
  double t7984;
  double t7990;
  double t8104;
  double t8111;
  double t8153;
  double t8164;
  double t8186;
  double t8239;
  double t8246;
  double t8330;
  double t8332;
  double t8334;
  double t8335;
  double t8337;
  double t8342;
  double t8348;
  double t8350;
  double t8363;
  double t8395;
  double t8410;
  double t8414;
  double t8416;
  double t9648;
  double t9711;
  double t9722;
  double t9724;
  double t9729;
  double t9732;
  double t9733;
  double t9760;
  double t9765;
  double t9766;
  double t8375;
  double t8439;
  double t8444;
  double t7976;
  double t7991;
  double t7996;
  double t7997;
  double t8000;
  double t8001;
  double t9734;
  double t9774;
  double t9776;
  double t9781;
  double t9782;
  double t9784;
  double t9796;
  double t9802;
  double t9808;
  double t8024;
  double t8029;
  double t8045;
  double t8446;
  double t9809;
  double t6226;
  double t7717;
  double t7719;
  double t9857;
  double t9861;
  double t9888;
  double t15266;
  double t15281;
  double t15320;
  double t15330;
  double t15398;
  double t15420;
  t4023 = Cos(var1[7]);
  t3908 = Cos(var1[8]);
  t3926 = Sin(var1[7]);
  t5545 = Sin(var1[8]);
  t6318 = t4023*t3908;
  t6355 = t3926*t5545;
  t6786 = t6318 + t6355;
  t6285 = Cos(var1[6]);
  t7447 = Sin(var1[5]);
  t6271 = Cos(var1[5]);
  t7535 = Sin(var1[6]);
  t6253 = Cos(var1[4]);
  t4017 = -1.*t3908*t3926;
  t6144 = t4023*t5545;
  t6185 = t4017 + t6144;
  t3898 = Sin(var1[4]);
  t6794 = t6271*t6285*t6786;
  t7625 = -1.*t7447*t7535*t6786;
  t7710 = t6794 + t7625;
  t7913 = Sin(var1[3]);
  t7746 = t6285*t7447*t6786;
  t7782 = t6271*t7535*t6786;
  t7814 = t7746 + t7782;
  t7731 = Cos(var1[3]);
  t7921 = t6253*t6185;
  t7924 = -1.*t3898*t7710;
  t7927 = t7921 + t7924;
  t7978 = t3908*t3926;
  t7984 = -1.*t4023*t5545;
  t7990 = t7978 + t7984;
  t8104 = -1.*t6285;
  t8111 = 1. + t8104;
  t8153 = 0.15121*t8111;
  t8164 = -1.*t4023;
  t8186 = 1. + t8164;
  t8239 = 0.28121*t8186;
  t8246 = -1.*t3908;
  t8330 = 1. + t8246;
  t8332 = 0.50321*t8330;
  t8334 = 0.23321*t3908;
  t8335 = t8332 + t8334;
  t8337 = t4023*t8335;
  t8342 = -0.27*t3926*t5545;
  t8348 = t8239 + t8337 + t8342;
  t8350 = t6285*t8348;
  t8363 = t8153 + t8350;
  t8395 = 0.15121*t6285;
  t8410 = -0.15121*t7535;
  t8414 = t7535*t8348;
  t8416 = t8153 + t8395 + t8410 + t8414;
  t9648 = -1.*t6285*t7447;
  t9711 = -1.*t6271*t7535;
  t9722 = t9648 + t9711;
  t9724 = 0.28121*t3926;
  t9729 = -1.*t8335*t3926;
  t9732 = -0.27*t4023*t5545;
  t9733 = t9724 + t9729 + t9732;
  t9760 = t6271*t8363;
  t9765 = -1.*t7447*t8416;
  t9766 = t9760 + t9765;
  t8375 = t7447*t8363;
  t8439 = t6271*t8416;
  t8444 = t8375 + t8439;
  t7976 = t3898*t6786;
  t7991 = t6271*t6285*t7990;
  t7996 = -1.*t7447*t7535*t7990;
  t7997 = t7991 + t7996;
  t8000 = t6253*t7997;
  t8001 = t7976 + t8000;
  t9734 = t3898*t9733;
  t9774 = t6253*t9766;
  t9776 = t9734 + t9774;
  t9781 = t6253*t9733;
  t9782 = -1.*t3898*t9766;
  t9784 = t9781 + t9782;
  t9796 = t6285*t7447*t7990;
  t9802 = t6271*t7535*t7990;
  t9808 = t9796 + t9802;
  t8024 = t6271*t6285;
  t8029 = -1.*t7447*t7535;
  t8045 = t8024 + t8029;
  t8446 = -1.*t8045*t8444;
  t9809 = t9808*t8444;
  t6226 = t3898*t6185;
  t7717 = t6253*t7710;
  t7719 = t6226 + t7717;
  t9857 = t6253*t6786;
  t9861 = -1.*t3898*t7997;
  t9888 = t9857 + t9861;
  t15266 = -1.*t9808*t8444;
  t15281 = t7814*t8444;
  t15320 = -1.*t9733*t6786;
  t15330 = t9733*t6185;
  t15398 = t8045*t8444;
  t15420 = -1.*t7814*t8444;
  p_output1[0]=t7719;
  p_output1[1]=t7731*t7814 - 1.*t7913*t7927;
  p_output1[2]=t7814*t7913 + t7731*t7927;
  p_output1[3]=t8001*(t8446 - 1.*t6253*t9722*t9776 + t3898*t9722*t9784) + t6253*t9722*(t8001*t9776 + t9809 + t9784*t9888);
  p_output1[4]=(t8446 - 1.*t9722*t9766)*t9808 + t8045*(t6786*t9733 + t7997*t9766 + t9809);
  p_output1[5]=t6786*(t7535*t8363 - 1.*t6285*t8416);
  p_output1[6]=0;
  p_output1[7]=0.28121*t5545 - 0.27*t3908*t5545 - 1.*t5545*t8335;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t6253*t9722;
  p_output1[19]=t7731*t8045 + t3898*t7913*t9722;
  p_output1[20]=t7913*t8045 - 1.*t3898*t7731*t9722;
  p_output1[21]=t8001*(t15281 + t7719*t9776 + t7927*t9784) + t7719*(t15266 - 1.*t8001*t9776 - 1.*t9784*t9888);
  p_output1[22]=t7814*(t15266 + t15320 - 1.*t7997*t9766) + (t15281 + t15330 + t7710*t9766)*t9808;
  p_output1[23]=t6786*(t15330 + t6285*t6786*t8363 + t6786*t7535*t8416) + t6185*(t15320 - 1.*t6285*t7990*t8363 - 1.*t7535*t7990*t8416);
  p_output1[24]=-0.15121 + t6786*(t15330 + t6786*t8348) + t6185*(t15320 - 1.*t7990*t8348);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8001;
  p_output1[37]=t7731*t9808 - 1.*t7913*t9888;
  p_output1[38]=t7913*t9808 + t7731*t9888;
  p_output1[39]=t6253*t9722*(t15420 - 1.*t7719*t9776 - 1.*t7927*t9784) + t7719*(t15398 + t6253*t9722*t9776 - 1.*t3898*t9722*t9784);
  p_output1[40]=t8045*(t15420 - 1.*t6185*t9733 - 1.*t7710*t9766) + t7814*(t15398 + t9722*t9766);
  p_output1[41]=t6185*(-1.*t7535*t8363 + t6285*t8416);
  p_output1[42]=0.15121*t6185 + 0.15121*t7990;
  p_output1[43]=0.28121*t3908 + 0.27*Power(t5545,2) - 1.*t3908*t8335;
  p_output1[44]=-0.27;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
