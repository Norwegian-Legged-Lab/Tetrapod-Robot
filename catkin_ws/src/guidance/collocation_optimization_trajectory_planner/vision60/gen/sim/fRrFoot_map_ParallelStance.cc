/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:24 GMT+02:00
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
  double t4185;
  double t2240;
  double t3982;
  double t4211;
  double t4091;
  double t4226;
  double t4306;
  double t4809;
  double t4865;
  double t4814;
  double t4816;
  double t4844;
  double t4866;
  double t322;
  double t4783;
  double t4338;
  double t4864;
  double t4867;
  double t4882;
  double t4900;
  double t4896;
  double t4897;
  double t4898;
  double t4895;
  double t4901;
  double t4902;
  double t4903;
  double t4980;
  double t4985;
  double t4986;
  double t4994;
  double t5002;
  double t5005;
  double t5012;
  double t5017;
  double t5023;
  double t4978;
  double t4990;
  double t5024;
  double t5025;
  double t5039;
  double t5040;
  double t5042;
  double t5043;
  double t5044;
  double t5045;
  double t4963;
  double t4964;
  double t4972;
  double t4973;
  double t5029;
  double t5035;
  double t5059;
  double t5060;
  double t5062;
  double t5066;
  double t5068;
  double t5073;
  double t5049;
  double t5050;
  double t5053;
  double t5037;
  double t5046;
  double t5047;
  double t4938;
  double t4943;
  double t4944;
  double t5065;
  double t5074;
  double t5077;
  double t4934;
  double t4946;
  double t4947;
  double t4949;
  double t4961;
  double t4962;
  double t5090;
  double t5097;
  double t5102;
  double t5113;
  double t5115;
  double t5116;
  double t5048;
  double t5118;
  double t5127;
  double t5131;
  double t5081;
  double t5084;
  double t5086;
  double t4602;
  double t4884;
  double t4887;
  double t5120;
  double t5121;
  double t5122;
  double t5222;
  double t5238;
  double t5258;
  double t5253;
  double t5323;
  double t5293;
  double t5370;
  double t5380;
  double t5393;
  double t5415;
  t4185 = Cos(var1[16]);
  t2240 = Cos(var1[17]);
  t3982 = Sin(var1[16]);
  t4211 = Sin(var1[17]);
  t4091 = t2240*t3982;
  t4226 = -1.*t4185*t4211;
  t4306 = t4091 + t4226;
  t4809 = Cos(var1[5]);
  t4865 = Sin(var1[15]);
  t4814 = t4185*t2240;
  t4816 = t3982*t4211;
  t4844 = t4814 + t4816;
  t4866 = Sin(var1[5]);
  t322 = Cos(var1[15]);
  t4783 = Cos(var1[4]);
  t4338 = Sin(var1[4]);
  t4864 = t4809*t4844;
  t4867 = t4865*t4306*t4866;
  t4882 = t4864 + t4867;
  t4900 = Sin(var1[3]);
  t4896 = -1.*t4809*t4865*t4306;
  t4897 = t4844*t4866;
  t4898 = t4896 + t4897;
  t4895 = Cos(var1[3]);
  t4901 = t322*t4783*t4306;
  t4902 = -1.*t4338*t4882;
  t4903 = t4901 + t4902;
  t4980 = -0.0641*t2240;
  t4985 = -0.28*t4211;
  t4986 = t4980 + t4985;
  t4994 = -1.*t2240;
  t5002 = 1. + t4994;
  t5005 = -0.575*t5002;
  t5012 = -0.295*t2240;
  t5017 = -0.0641*t4211;
  t5023 = t5005 + t5012 + t5017;
  t4978 = 0.325*t3982;
  t4990 = t4185*t4986;
  t5024 = t3982*t5023;
  t5025 = t4978 + t4990 + t5024;
  t5039 = -1.*t4185;
  t5040 = 1. + t5039;
  t5042 = -0.325*t5040;
  t5043 = -1.*t3982*t4986;
  t5044 = t4185*t5023;
  t5045 = t5042 + t5043 + t5044;
  t4963 = -1.*t322;
  t4964 = 1. + t4963;
  t4972 = -0.1575*t4964;
  t4973 = -0.2255*t322;
  t5029 = -1.*t4865*t5025;
  t5035 = t4972 + t4973 + t5029;
  t5059 = -0.068*t4865;
  t5060 = t322*t5025;
  t5062 = t5059 + t5060;
  t5066 = t4809*t5045;
  t5068 = -1.*t5035*t4866;
  t5073 = t5066 + t5068;
  t5049 = t4865*t4338;
  t5050 = -1.*t322*t4783*t4866;
  t5053 = t5049 + t5050;
  t5037 = t4809*t5035;
  t5046 = t5045*t4866;
  t5047 = t5037 + t5046;
  t4938 = -1.*t2240*t3982;
  t4943 = t4185*t4211;
  t4944 = t4938 + t4943;
  t5065 = t5062*t4338;
  t5074 = t4783*t5073;
  t5077 = t5065 + t5074;
  t4934 = t322*t4844*t4338;
  t4946 = t4809*t4944;
  t4947 = t4865*t4844*t4866;
  t4949 = t4946 + t4947;
  t4961 = t4783*t4949;
  t4962 = t4934 + t4961;
  t5090 = t4783*t5062;
  t5097 = -1.*t4338*t5073;
  t5102 = t5090 + t5097;
  t5113 = -1.*t4809*t4865*t4844;
  t5115 = t4944*t4866;
  t5116 = t5113 + t5115;
  t5048 = -1.*t322*t4809*t5047;
  t5118 = t5047*t5116;
  t5127 = -1.*t4865*t5062;
  t5131 = t322*t5062*t4844;
  t5081 = t4783*t4865;
  t5084 = t322*t4338*t4866;
  t5086 = t5081 + t5084;
  t4602 = t322*t4306*t4338;
  t4884 = t4783*t4882;
  t4887 = t4602 + t4884;
  t5120 = t322*t4783*t4844;
  t5121 = -1.*t4338*t4949;
  t5122 = t5120 + t5121;
  t5222 = t5047*t4898;
  t5238 = -1.*t5047*t5116;
  t5258 = -1.*t322*t5062*t4844;
  t5253 = t322*t5062*t4306;
  t5323 = t5045*t4844;
  t5293 = -1.*t5045*t4944;
  t5370 = t322*t4809*t5047;
  t5380 = -1.*t5047*t4898;
  t5393 = t4865*t5062;
  t5415 = -1.*t322*t5062*t4306;
  p_output1[0]=t4887;
  p_output1[1]=t4895*t4898 - 1.*t4900*t4903;
  p_output1[2]=t4898*t4900 + t4895*t4903;
  p_output1[3]=t4962*(t5048 - 1.*t5053*t5077 - 1.*t5086*t5102) + t5053*(t4962*t5077 + t5118 + t5102*t5122);
  p_output1[4]=t5116*(t5048 + t322*t4866*t5073 + t5127) + t322*t4809*(t4949*t5073 + t5118 + t5131);
  p_output1[5]=t322*t4844*(-1.*t322*t5035 + t5127) + t4865*(-1.*t4844*t4865*t5035 + t4944*t5045 + t5131);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t4306 + 0.2255*t4944;
  p_output1[16]=-0.325*t4211 - 1.*t2240*t4986 - 1.*t4211*t5023;
  p_output1[17]=-0.0641;
  p_output1[18]=t5053;
  p_output1[19]=t322*t4809*t4895 - 1.*t4900*t5086;
  p_output1[20]=t322*t4809*t4900 + t4895*t5086;
  p_output1[21]=t4962*(t4887*t5077 + t4903*t5102 + t5222) + t4887*(-1.*t4962*t5077 - 1.*t5102*t5122 + t5238);
  p_output1[22]=t5116*(t4882*t5073 + t5222 + t5253) + t4898*(-1.*t4949*t5073 + t5238 + t5258);
  p_output1[23]=t322*t4306*(t4844*t4865*t5035 + t5258 + t5293) + t322*t4844*(-1.*t4306*t4865*t5035 + t5253 + t5323);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t4844*(-1.*t4844*t5025 + t5293) + t4944*(t4306*t5025 + t5323);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t4962;
  p_output1[37]=t4895*t5116 - 1.*t4900*t5122;
  p_output1[38]=t4900*t5116 + t4895*t5122;
  p_output1[39]=t4887*(t5053*t5077 + t5086*t5102 + t5370) + t5053*(-1.*t4887*t5077 - 1.*t4903*t5102 + t5380);
  p_output1[40]=t4898*(-1.*t322*t4866*t5073 + t5370 + t5393) + t322*t4809*(-1.*t4882*t5073 + t5380 + t5415);
  p_output1[41]=t322*t4306*(t322*t5035 + t5393) + t4865*(t4306*t4865*t5035 - 1.*t4844*t5045 + t5415);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t4844;
  p_output1[52]=0.325*t2240 - 1.*t4211*t4986 + t2240*t5023;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
