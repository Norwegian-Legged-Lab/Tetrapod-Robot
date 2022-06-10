/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:43 GMT+02:00
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
  double t608;
  double t211;
  double t507;
  double t615;
  double t1754;
  double t2230;
  double t2359;
  double t1389;
  double t2498;
  double t1237;
  double t2500;
  double t1226;
  double t508;
  double t1165;
  double t1176;
  double t1219;
  double t2383;
  double t2502;
  double t2506;
  double t2983;
  double t2521;
  double t2539;
  double t2696;
  double t2517;
  double t2998;
  double t3289;
  double t3932;
  double t5227;
  double t5240;
  double t5253;
  double t5572;
  double t5596;
  double t5657;
  double t5670;
  double t5677;
  double t5680;
  double t5682;
  double t5690;
  double t5691;
  double t5692;
  double t5703;
  double t5706;
  double t5707;
  double t5717;
  double t5718;
  double t5860;
  double t5602;
  double t5624;
  double t5640;
  double t5708;
  double t5709;
  double t5882;
  double t5883;
  double t5885;
  double t5886;
  double t5887;
  double t5888;
  double t5892;
  double t5897;
  double t5898;
  double t5901;
  double t5716;
  double t5875;
  double t5879;
  double t5222;
  double t5255;
  double t5256;
  double t5327;
  double t5402;
  double t5404;
  double t5896;
  double t5907;
  double t5908;
  double t5910;
  double t5911;
  double t5916;
  double t5933;
  double t5936;
  double t5937;
  double t5406;
  double t5514;
  double t5533;
  double t5880;
  double t5938;
  double t1222;
  double t2507;
  double t2514;
  double t5943;
  double t5946;
  double t5971;
  double t6072;
  double t6087;
  double t6119;
  double t6128;
  double t6215;
  double t6239;
  t608 = Cos(var1[13]);
  t211 = Cos(var1[14]);
  t507 = Sin(var1[13]);
  t615 = Sin(var1[14]);
  t1754 = t608*t211;
  t2230 = t507*t615;
  t2359 = t1754 + t2230;
  t1389 = Cos(var1[5]);
  t2498 = Sin(var1[12]);
  t1237 = Cos(var1[12]);
  t2500 = Sin(var1[5]);
  t1226 = Cos(var1[4]);
  t508 = -1.*t211*t507;
  t1165 = t608*t615;
  t1176 = t508 + t1165;
  t1219 = Sin(var1[4]);
  t2383 = t1237*t1389*t2359;
  t2502 = -1.*t2498*t2359*t2500;
  t2506 = t2383 + t2502;
  t2983 = Sin(var1[3]);
  t2521 = t1389*t2498*t2359;
  t2539 = t1237*t2359*t2500;
  t2696 = t2521 + t2539;
  t2517 = Cos(var1[3]);
  t2998 = t1226*t1176;
  t3289 = -1.*t1219*t2506;
  t3932 = t2998 + t3289;
  t5227 = t211*t507;
  t5240 = -1.*t608*t615;
  t5253 = t5227 + t5240;
  t5572 = -1.*t1237;
  t5596 = 1. + t5572;
  t5657 = -1.*t608;
  t5670 = 1. + t5657;
  t5677 = 0.28121*t5670;
  t5680 = -1.*t211;
  t5682 = 1. + t5680;
  t5690 = 0.50321*t5682;
  t5691 = 0.19821*t211;
  t5692 = t5690 + t5691;
  t5703 = t608*t5692;
  t5706 = -0.305*t507*t615;
  t5707 = t5677 + t5703 + t5706;
  t5717 = 0.15121*t5596;
  t5718 = t1237*t5707;
  t5860 = t5717 + t5718;
  t5602 = -0.15121*t5596;
  t5624 = -0.15121*t1237;
  t5640 = -0.15121*t2498;
  t5708 = t2498*t5707;
  t5709 = t5602 + t5624 + t5640 + t5708;
  t5882 = -1.*t1389*t2498;
  t5883 = -1.*t1237*t2500;
  t5885 = t5882 + t5883;
  t5886 = 0.28121*t507;
  t5887 = -1.*t5692*t507;
  t5888 = -0.305*t608*t615;
  t5892 = t5886 + t5887 + t5888;
  t5897 = t1389*t5860;
  t5898 = -1.*t5709*t2500;
  t5901 = t5897 + t5898;
  t5716 = t1389*t5709;
  t5875 = t5860*t2500;
  t5879 = t5716 + t5875;
  t5222 = t2359*t1219;
  t5255 = t1237*t1389*t5253;
  t5256 = -1.*t2498*t5253*t2500;
  t5327 = t5255 + t5256;
  t5402 = t1226*t5327;
  t5404 = t5222 + t5402;
  t5896 = t5892*t1219;
  t5907 = t1226*t5901;
  t5908 = t5896 + t5907;
  t5910 = t1226*t5892;
  t5911 = -1.*t1219*t5901;
  t5916 = t5910 + t5911;
  t5933 = t1389*t2498*t5253;
  t5936 = t1237*t5253*t2500;
  t5937 = t5933 + t5936;
  t5406 = t1237*t1389;
  t5514 = -1.*t2498*t2500;
  t5533 = t5406 + t5514;
  t5880 = -1.*t5533*t5879;
  t5938 = t5937*t5879;
  t1222 = t1176*t1219;
  t2507 = t1226*t2506;
  t2514 = t1222 + t2507;
  t5943 = t1226*t2359;
  t5946 = -1.*t1219*t5327;
  t5971 = t5943 + t5946;
  t6072 = -1.*t5937*t5879;
  t6087 = t2696*t5879;
  t6119 = -1.*t5892*t2359;
  t6128 = t5892*t1176;
  t6215 = t5533*t5879;
  t6239 = -1.*t2696*t5879;
  p_output1[0]=t2514;
  p_output1[1]=t2517*t2696 - 1.*t2983*t3932;
  p_output1[2]=t2696*t2983 + t2517*t3932;
  p_output1[3]=t5404*(t5880 - 1.*t1226*t5885*t5908 + t1219*t5885*t5916) + t1226*t5885*(t5404*t5908 + t5938 + t5916*t5971);
  p_output1[4]=(t5880 - 1.*t5885*t5901)*t5937 + t5533*(t2359*t5892 + t5327*t5901 + t5938);
  p_output1[5]=t2359*(-1.*t1237*t5709 + t2498*t5860);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t615 - 0.305*t211*t615 - 1.*t5692*t615;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1226*t5885;
  p_output1[19]=t2517*t5533 + t1219*t2983*t5885;
  p_output1[20]=t2983*t5533 - 1.*t1219*t2517*t5885;
  p_output1[21]=t2514*(-1.*t5404*t5908 - 1.*t5916*t5971 + t6072) + t5404*(t2514*t5908 + t3932*t5916 + t6087);
  p_output1[22]=t2696*(-1.*t5327*t5901 + t6072 + t6119) + t5937*(t2506*t5901 + t6087 + t6128);
  p_output1[23]=t1176*(-1.*t2498*t5253*t5709 - 1.*t1237*t5253*t5860 + t6119) + t2359*(t2359*t2498*t5709 + t1237*t2359*t5860 + t6128);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t1176*(-1.*t5253*t5707 + t6119) + t2359*(t2359*t5707 + t6128);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5404;
  p_output1[37]=t2517*t5937 - 1.*t2983*t5971;
  p_output1[38]=t2983*t5937 + t2517*t5971;
  p_output1[39]=t2514*(t1226*t5885*t5908 - 1.*t1219*t5885*t5916 + t6215) + t1226*t5885*(-1.*t2514*t5908 - 1.*t3932*t5916 + t6239);
  p_output1[40]=t2696*(t5885*t5901 + t6215) + t5533*(-1.*t1176*t5892 - 1.*t2506*t5901 + t6239);
  p_output1[41]=t1176*(t1237*t5709 - 1.*t2498*t5860);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t1176 - 0.15121*t5253;
  p_output1[49]=0.28121*t211 - 1.*t211*t5692 + 0.305*Power(t615,2);
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
