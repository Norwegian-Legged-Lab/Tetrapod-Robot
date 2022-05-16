/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:31 GMT+02:00
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
  double t1635;
  double t1020;
  double t1106;
  double t1713;
  double t16191;
  double t18450;
  double t23827;
  double t16181;
  double t34266;
  double t15480;
  double t39406;
  double t12341;
  double t1628;
  double t2219;
  double t3439;
  double t909;
  double t33174;
  double t39687;
  double t39914;
  double t40162;
  double t40157;
  double t40158;
  double t40159;
  double t40156;
  double t40163;
  double t40164;
  double t40165;
  double t40288;
  double t40456;
  double t40540;
  double t41238;
  double t41243;
  double t41270;
  double t41288;
  double t41301;
  double t41309;
  double t41333;
  double t41341;
  double t41352;
  double t41393;
  double t41396;
  double t41404;
  double t41528;
  double t42035;
  double t42330;
  double t42841;
  double t43226;
  double t43242;
  double t43320;
  double t43401;
  double t44201;
  double t44317;
  double t44342;
  double t44344;
  double t44345;
  double t44428;
  double t44429;
  double t44444;
  double t44445;
  double t44448;
  double t43140;
  double t43703;
  double t43728;
  double t40179;
  double t40640;
  double t40646;
  double t40720;
  double t41018;
  double t41039;
  double t44431;
  double t44450;
  double t44511;
  double t44513;
  double t44514;
  double t44517;
  double t44531;
  double t44532;
  double t44537;
  double t41047;
  double t41109;
  double t41228;
  double t43745;
  double t44538;
  double t3795;
  double t39935;
  double t40138;
  double t44550;
  double t44551;
  double t44554;
  double t44955;
  double t45004;
  double t45058;
  double t45082;
  double t45355;
  double t45436;
  t1635 = Cos(var1[7]);
  t1020 = Cos(var1[8]);
  t1106 = Sin(var1[7]);
  t1713 = Sin(var1[8]);
  t16191 = t1635*t1020;
  t18450 = t1106*t1713;
  t23827 = t16191 + t18450;
  t16181 = Cos(var1[6]);
  t34266 = Sin(var1[5]);
  t15480 = Cos(var1[5]);
  t39406 = Sin(var1[6]);
  t12341 = Cos(var1[4]);
  t1628 = -1.*t1020*t1106;
  t2219 = t1635*t1713;
  t3439 = t1628 + t2219;
  t909 = Sin(var1[4]);
  t33174 = t15480*t16181*t23827;
  t39687 = -1.*t34266*t39406*t23827;
  t39914 = t33174 + t39687;
  t40162 = Sin(var1[3]);
  t40157 = t16181*t34266*t23827;
  t40158 = t15480*t39406*t23827;
  t40159 = t40157 + t40158;
  t40156 = Cos(var1[3]);
  t40163 = t12341*t3439;
  t40164 = -1.*t909*t39914;
  t40165 = t40163 + t40164;
  t40288 = t1020*t1106;
  t40456 = -1.*t1635*t1713;
  t40540 = t40288 + t40456;
  t41238 = -1.*t16181;
  t41243 = 1. + t41238;
  t41270 = 0.15121*t41243;
  t41288 = -1.*t1635;
  t41301 = 1. + t41288;
  t41309 = 0.28121*t41301;
  t41333 = -1.*t1020;
  t41341 = 1. + t41333;
  t41352 = 0.50321*t41341;
  t41393 = 0.23321*t1020;
  t41396 = t41352 + t41393;
  t41404 = t1635*t41396;
  t41528 = -0.27*t1106*t1713;
  t42035 = t41309 + t41404 + t41528;
  t42330 = t16181*t42035;
  t42841 = t41270 + t42330;
  t43226 = 0.15121*t16181;
  t43242 = -0.15121*t39406;
  t43320 = t39406*t42035;
  t43401 = t41270 + t43226 + t43242 + t43320;
  t44201 = -1.*t16181*t34266;
  t44317 = -1.*t15480*t39406;
  t44342 = t44201 + t44317;
  t44344 = 0.28121*t1106;
  t44345 = -1.*t41396*t1106;
  t44428 = -0.27*t1635*t1713;
  t44429 = t44344 + t44345 + t44428;
  t44444 = t15480*t42841;
  t44445 = -1.*t34266*t43401;
  t44448 = t44444 + t44445;
  t43140 = t34266*t42841;
  t43703 = t15480*t43401;
  t43728 = t43140 + t43703;
  t40179 = t909*t23827;
  t40640 = t15480*t16181*t40540;
  t40646 = -1.*t34266*t39406*t40540;
  t40720 = t40640 + t40646;
  t41018 = t12341*t40720;
  t41039 = t40179 + t41018;
  t44431 = t909*t44429;
  t44450 = t12341*t44448;
  t44511 = t44431 + t44450;
  t44513 = t12341*t44429;
  t44514 = -1.*t909*t44448;
  t44517 = t44513 + t44514;
  t44531 = t16181*t34266*t40540;
  t44532 = t15480*t39406*t40540;
  t44537 = t44531 + t44532;
  t41047 = t15480*t16181;
  t41109 = -1.*t34266*t39406;
  t41228 = t41047 + t41109;
  t43745 = -1.*t41228*t43728;
  t44538 = t44537*t43728;
  t3795 = t909*t3439;
  t39935 = t12341*t39914;
  t40138 = t3795 + t39935;
  t44550 = t12341*t23827;
  t44551 = -1.*t909*t40720;
  t44554 = t44550 + t44551;
  t44955 = -1.*t44537*t43728;
  t45004 = t40159*t43728;
  t45058 = -1.*t44429*t23827;
  t45082 = t44429*t3439;
  t45355 = t41228*t43728;
  t45436 = -1.*t40159*t43728;
  p_output1[0]=t40138;
  p_output1[1]=t40156*t40159 - 1.*t40162*t40165;
  p_output1[2]=t40159*t40162 + t40156*t40165;
  p_output1[3]=t12341*t44342*(t41039*t44511 + t44538 + t44517*t44554) + t41039*(t43745 - 1.*t12341*t44342*t44511 + t44342*t44517*t909);
  p_output1[4]=(t43745 - 1.*t44342*t44448)*t44537 + t41228*(t23827*t44429 + t40720*t44448 + t44538);
  p_output1[5]=t23827*(t39406*t42841 - 1.*t16181*t43401);
  p_output1[6]=0;
  p_output1[7]=0.28121*t1713 - 0.27*t1020*t1713 - 1.*t1713*t41396;
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
  p_output1[18]=t12341*t44342;
  p_output1[19]=t40156*t41228 + t40162*t44342*t909;
  p_output1[20]=t40162*t41228 - 1.*t40156*t44342*t909;
  p_output1[21]=t40138*(-1.*t41039*t44511 - 1.*t44517*t44554 + t44955) + t41039*(t40138*t44511 + t40165*t44517 + t45004);
  p_output1[22]=t40159*(-1.*t40720*t44448 + t44955 + t45058) + t44537*(t39914*t44448 + t45004 + t45082);
  p_output1[23]=t3439*(-1.*t16181*t40540*t42841 - 1.*t39406*t40540*t43401 + t45058) + t23827*(t16181*t23827*t42841 + t23827*t39406*t43401 + t45082);
  p_output1[24]=-0.15121 + t3439*(-1.*t40540*t42035 + t45058) + t23827*(t23827*t42035 + t45082);
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
  p_output1[36]=t41039;
  p_output1[37]=t40156*t44537 - 1.*t40162*t44554;
  p_output1[38]=t40162*t44537 + t40156*t44554;
  p_output1[39]=t12341*t44342*(-1.*t40138*t44511 - 1.*t40165*t44517 + t45436) + t40138*(t12341*t44342*t44511 + t45355 - 1.*t44342*t44517*t909);
  p_output1[40]=t40159*(t44342*t44448 + t45355) + t41228*(-1.*t3439*t44429 - 1.*t39914*t44448 + t45436);
  p_output1[41]=t3439*(-1.*t39406*t42841 + t16181*t43401);
  p_output1[42]=0.15121*t3439 + 0.15121*t40540;
  p_output1[43]=0.28121*t1020 + 0.27*Power(t1713,2) - 1.*t1020*t41396;
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
