/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:43 GMT+02:00
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
  double t2764;
  double t407;
  double t1692;
  double t2784;
  double t5527;
  double t5680;
  double t5809;
  double t4738;
  double t5497;
  double t7794;
  double t5166;
  double t7843;
  double t3175;
  double t20339;
  double t20912;
  double t21277;
  double t2361;
  double t3121;
  double t3123;
  double t5823;
  double t7952;
  double t9143;
  double t23339;
  double t15680;
  double t15701;
  double t15749;
  double t21676;
  double t21291;
  double t21332;
  double t21341;
  double t21680;
  double t21774;
  double t22776;
  double t27537;
  double t28046;
  double t28048;
  double t28217;
  double t38181;
  double t38998;
  double t39299;
  double t39327;
  double t39336;
  double t39399;
  double t39507;
  double t39543;
  double t19520;
  double t21365;
  double t21526;
  double t40385;
  double t40491;
  double t40623;
  double t40664;
  double t40692;
  double t40740;
  double t40991;
  double t41015;
  double t41016;
  double t41037;
  double t41044;
  double t41046;
  double t41050;
  double t41074;
  double t41075;
  double t41089;
  double t40585;
  double t40590;
  double t40622;
  double t41053;
  double t41060;
  double t41102;
  double t41106;
  double t41108;
  double t41141;
  double t41151;
  double t41152;
  double t41187;
  double t41063;
  double t41096;
  double t41099;
  double t41150;
  double t41188;
  double t41193;
  double t41206;
  double t41207;
  double t41211;
  double t3595;
  double t14950;
  double t15257;
  double t41100;
  double t41233;
  double t41246;
  double t41272;
  double t41294;
  double t41320;
  double t41390;
  double t41410;
  t2764 = Cos(var1[13]);
  t407 = Cos(var1[14]);
  t1692 = Sin(var1[13]);
  t2784 = Sin(var1[14]);
  t5527 = t2764*t407;
  t5680 = t1692*t2784;
  t5809 = t5527 + t5680;
  t4738 = Cos(var1[4]);
  t5497 = Cos(var1[5]);
  t7794 = Sin(var1[12]);
  t5166 = Cos(var1[12]);
  t7843 = Sin(var1[5]);
  t3175 = Sin(var1[4]);
  t20339 = t407*t1692;
  t20912 = -1.*t2764*t2784;
  t21277 = t20339 + t20912;
  t2361 = -1.*t407*t1692;
  t3121 = t2764*t2784;
  t3123 = t2361 + t3121;
  t5823 = t5166*t5497*t5809;
  t7952 = -1.*t7794*t5809*t7843;
  t9143 = t5823 + t7952;
  t23339 = Sin(var1[3]);
  t15680 = -1.*t5497*t7794;
  t15701 = -1.*t5166*t7843;
  t15749 = t15680 + t15701;
  t21676 = Cos(var1[3]);
  t21291 = t5166*t5497*t21277;
  t21332 = -1.*t7794*t21277*t7843;
  t21341 = t21291 + t21332;
  t21680 = t5497*t7794*t5809;
  t21774 = t5166*t5809*t7843;
  t22776 = t21680 + t21774;
  t27537 = t4738*t3123;
  t28046 = -1.*t3175*t9143;
  t28048 = t27537 + t28046;
  t28217 = t5166*t5497;
  t38181 = -1.*t7794*t7843;
  t38998 = t28217 + t38181;
  t39299 = t5497*t7794*t21277;
  t39327 = t5166*t21277*t7843;
  t39336 = t39299 + t39327;
  t39399 = t4738*t5809;
  t39507 = -1.*t3175*t21341;
  t39543 = t39399 + t39507;
  t19520 = t5809*t3175;
  t21365 = t4738*t21341;
  t21526 = t19520 + t21365;
  t40385 = -1.*t5166;
  t40491 = 1. + t40385;
  t40623 = -1.*t2764;
  t40664 = 1. + t40623;
  t40692 = 0.28121*t40664;
  t40740 = -1.*t407;
  t40991 = 1. + t40740;
  t41015 = 0.50321*t40991;
  t41016 = 0.23321*t407;
  t41037 = t41015 + t41016;
  t41044 = t2764*t41037;
  t41046 = -0.27*t1692*t2784;
  t41050 = t40692 + t41044 + t41046;
  t41074 = 0.15121*t40491;
  t41075 = t5166*t41050;
  t41089 = t41074 + t41075;
  t40585 = -0.15121*t40491;
  t40590 = -0.15121*t5166;
  t40622 = -0.15121*t7794;
  t41053 = t7794*t41050;
  t41060 = t40585 + t40590 + t40622 + t41053;
  t41102 = 0.28121*t1692;
  t41106 = -1.*t41037*t1692;
  t41108 = -0.27*t2764*t2784;
  t41141 = t41102 + t41106 + t41108;
  t41151 = t5497*t41089;
  t41152 = -1.*t41060*t7843;
  t41187 = t41151 + t41152;
  t41063 = t5497*t41060;
  t41096 = t41089*t7843;
  t41099 = t41063 + t41096;
  t41150 = t41141*t3175;
  t41188 = t4738*t41187;
  t41193 = t41150 + t41188;
  t41206 = t4738*t41141;
  t41207 = -1.*t3175*t41187;
  t41211 = t41206 + t41207;
  t3595 = t3123*t3175;
  t14950 = t4738*t9143;
  t15257 = t3595 + t14950;
  t41100 = -1.*t38998*t41099;
  t41233 = t39336*t41099;
  t41246 = -1.*t39336*t41099;
  t41272 = t22776*t41099;
  t41294 = t38998*t41099;
  t41320 = -1.*t22776*t41099;
  t41390 = -1.*t41141*t5809;
  t41410 = t41141*t3123;
  p_output1[0]=t15257;
  p_output1[1]=t15749*t4738;
  p_output1[2]=t21526;
  p_output1[3]=t21676*t22776 - 1.*t23339*t28048;
  p_output1[4]=t15749*t23339*t3175 + t21676*t38998;
  p_output1[5]=t21676*t39336 - 1.*t23339*t39543;
  p_output1[6]=t22776*t23339 + t21676*t28048;
  p_output1[7]=-1.*t15749*t21676*t3175 + t23339*t38998;
  p_output1[8]=t23339*t39336 + t21676*t39543;
  p_output1[9]=t15749*(t21526*t41193 + t39543*t41211 + t41233)*t4738 + t21526*(t41100 + t15749*t3175*t41211 - 1.*t15749*t41193*t4738);
  p_output1[10]=t15257*(-1.*t21526*t41193 - 1.*t39543*t41211 + t41246) + t21526*(t15257*t41193 + t28048*t41211 + t41272);
  p_output1[11]=t15749*(-1.*t15257*t41193 - 1.*t28048*t41211 + t41320)*t4738 + t15257*(-1.*t15749*t3175*t41211 + t41294 + t15749*t41193*t4738);
  p_output1[12]=t39336*(t41100 - 1.*t15749*t41187) + t38998*(t21341*t41187 + t41233 + t41141*t5809);
  p_output1[13]=t22776*(-1.*t21341*t41187 + t41246 + t41390) + t39336*(t41272 + t41410 + t41187*t9143);
  p_output1[14]=t22776*(t15749*t41187 + t41294) + t38998*(-1.*t3123*t41141 + t41320 - 1.*t41187*t9143);
  p_output1[15]=t5809*(-1.*t41060*t5166 + t41089*t7794);
  p_output1[16]=t3123*(t41390 - 1.*t21277*t41089*t5166 - 1.*t21277*t41060*t7794) + t5809*(t41410 + t41089*t5166*t5809 + t41060*t5809*t7794);
  p_output1[17]=t3123*(t41060*t5166 - 1.*t41089*t7794);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=-0.15121 + t3123*(-1.*t21277*t41050 + t41390) + t5809*(t41410 + t41050*t5809);
  p_output1[38]=-0.15121*t21277 - 0.15121*t3123;
  p_output1[39]=0.28121*t2784 - 0.27*t2784*t407 - 1.*t2784*t41037;
  p_output1[40]=0;
  p_output1[41]=0.27*Power(t2784,2) + 0.28121*t407 - 1.*t407*t41037;
  p_output1[42]=0;
  p_output1[43]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
