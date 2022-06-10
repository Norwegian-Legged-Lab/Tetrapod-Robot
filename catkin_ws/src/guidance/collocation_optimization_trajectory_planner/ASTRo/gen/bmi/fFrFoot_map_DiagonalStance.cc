/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:24 GMT+02:00
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
  double t3240;
  double t2757;
  double t2839;
  double t3516;
  double t4021;
  double t4022;
  double t4061;
  double t4009;
  double t4120;
  double t4007;
  double t4316;
  double t3992;
  double t3226;
  double t3594;
  double t3623;
  double t3930;
  double t4098;
  double t4474;
  double t4486;
  double t4676;
  double t4547;
  double t4553;
  double t4644;
  double t4534;
  double t4695;
  double t4725;
  double t4735;
  double t4887;
  double t4902;
  double t4903;
  double t4954;
  double t4955;
  double t4973;
  double t4975;
  double t4979;
  double t4984;
  double t4998;
  double t5011;
  double t5013;
  double t5019;
  double t5020;
  double t5023;
  double t5026;
  double t5050;
  double t5053;
  double t5054;
  double t4961;
  double t4963;
  double t4964;
  double t5034;
  double t5036;
  double t5062;
  double t5087;
  double t5088;
  double t5093;
  double t5097;
  double t5103;
  double t5104;
  double t5141;
  double t5142;
  double t5143;
  double t5046;
  double t5058;
  double t5059;
  double t4865;
  double t4908;
  double t4918;
  double t4920;
  double t4926;
  double t4944;
  double t5125;
  double t5147;
  double t5148;
  double t5154;
  double t5158;
  double t5175;
  double t5270;
  double t5279;
  double t5289;
  double t4945;
  double t4947;
  double t4948;
  double t5061;
  double t5293;
  double t3954;
  double t4514;
  double t4524;
  double t5315;
  double t5362;
  double t5427;
  double t5973;
  double t6129;
  double t6243;
  double t6251;
  double t6769;
  double t7345;
  t3240 = Cos(var1[13]);
  t2757 = Cos(var1[14]);
  t2839 = Sin(var1[13]);
  t3516 = Sin(var1[14]);
  t4021 = t3240*t2757;
  t4022 = t2839*t3516;
  t4061 = t4021 + t4022;
  t4009 = Cos(var1[5]);
  t4120 = Sin(var1[12]);
  t4007 = Cos(var1[12]);
  t4316 = Sin(var1[5]);
  t3992 = Cos(var1[4]);
  t3226 = -1.*t2757*t2839;
  t3594 = t3240*t3516;
  t3623 = t3226 + t3594;
  t3930 = Sin(var1[4]);
  t4098 = t4007*t4009*t4061;
  t4474 = -1.*t4120*t4061*t4316;
  t4486 = t4098 + t4474;
  t4676 = Sin(var1[3]);
  t4547 = t4009*t4120*t4061;
  t4553 = t4007*t4061*t4316;
  t4644 = t4547 + t4553;
  t4534 = Cos(var1[3]);
  t4695 = t3992*t3623;
  t4725 = -1.*t3930*t4486;
  t4735 = t4695 + t4725;
  t4887 = t2757*t2839;
  t4902 = -1.*t3240*t3516;
  t4903 = t4887 + t4902;
  t4954 = -1.*t4007;
  t4955 = 1. + t4954;
  t4973 = -1.*t3240;
  t4975 = 1. + t4973;
  t4979 = 0.28121*t4975;
  t4984 = -1.*t2757;
  t4998 = 1. + t4984;
  t5011 = 0.50321*t4998;
  t5013 = 0.19821*t2757;
  t5019 = t5011 + t5013;
  t5020 = t3240*t5019;
  t5023 = -0.305*t2839*t3516;
  t5026 = t4979 + t5020 + t5023;
  t5050 = 0.15121*t4955;
  t5053 = t4007*t5026;
  t5054 = t5050 + t5053;
  t4961 = -0.15121*t4955;
  t4963 = -0.15121*t4007;
  t4964 = -0.15121*t4120;
  t5034 = t4120*t5026;
  t5036 = t4961 + t4963 + t4964 + t5034;
  t5062 = -1.*t4009*t4120;
  t5087 = -1.*t4007*t4316;
  t5088 = t5062 + t5087;
  t5093 = 0.28121*t2839;
  t5097 = -1.*t5019*t2839;
  t5103 = -0.305*t3240*t3516;
  t5104 = t5093 + t5097 + t5103;
  t5141 = t4009*t5054;
  t5142 = -1.*t5036*t4316;
  t5143 = t5141 + t5142;
  t5046 = t4009*t5036;
  t5058 = t5054*t4316;
  t5059 = t5046 + t5058;
  t4865 = t4061*t3930;
  t4908 = t4007*t4009*t4903;
  t4918 = -1.*t4120*t4903*t4316;
  t4920 = t4908 + t4918;
  t4926 = t3992*t4920;
  t4944 = t4865 + t4926;
  t5125 = t5104*t3930;
  t5147 = t3992*t5143;
  t5148 = t5125 + t5147;
  t5154 = t3992*t5104;
  t5158 = -1.*t3930*t5143;
  t5175 = t5154 + t5158;
  t5270 = t4009*t4120*t4903;
  t5279 = t4007*t4903*t4316;
  t5289 = t5270 + t5279;
  t4945 = t4007*t4009;
  t4947 = -1.*t4120*t4316;
  t4948 = t4945 + t4947;
  t5061 = -1.*t4948*t5059;
  t5293 = t5289*t5059;
  t3954 = t3623*t3930;
  t4514 = t3992*t4486;
  t4524 = t3954 + t4514;
  t5315 = t3992*t4061;
  t5362 = -1.*t3930*t4920;
  t5427 = t5315 + t5362;
  t5973 = -1.*t5289*t5059;
  t6129 = t4644*t5059;
  t6243 = -1.*t5104*t4061;
  t6251 = t5104*t3623;
  t6769 = t4948*t5059;
  t7345 = -1.*t4644*t5059;
  p_output1[0]=t4524;
  p_output1[1]=t4534*t4644 - 1.*t4676*t4735;
  p_output1[2]=t4644*t4676 + t4534*t4735;
  p_output1[3]=t4944*(t5061 - 1.*t3992*t5088*t5148 + t3930*t5088*t5175) + t3992*t5088*(t4944*t5148 + t5293 + t5175*t5427);
  p_output1[4]=(t5061 - 1.*t5088*t5143)*t5289 + t4948*(t4061*t5104 + t4920*t5143 + t5293);
  p_output1[5]=t4061*(-1.*t4007*t5036 + t4120*t5054);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3516 - 0.305*t2757*t3516 - 1.*t3516*t5019;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3992*t5088;
  p_output1[19]=t4534*t4948 + t3930*t4676*t5088;
  p_output1[20]=t4676*t4948 - 1.*t3930*t4534*t5088;
  p_output1[21]=t4524*(-1.*t4944*t5148 - 1.*t5175*t5427 + t5973) + t4944*(t4524*t5148 + t4735*t5175 + t6129);
  p_output1[22]=t4644*(-1.*t4920*t5143 + t5973 + t6243) + t5289*(t4486*t5143 + t6129 + t6251);
  p_output1[23]=t3623*(-1.*t4120*t4903*t5036 - 1.*t4007*t4903*t5054 + t6243) + t4061*(t4061*t4120*t5036 + t4007*t4061*t5054 + t6251);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t3623*(-1.*t4903*t5026 + t6243) + t4061*(t4061*t5026 + t6251);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t4944;
  p_output1[37]=t4534*t5289 - 1.*t4676*t5427;
  p_output1[38]=t4676*t5289 + t4534*t5427;
  p_output1[39]=t4524*(t3992*t5088*t5148 - 1.*t3930*t5088*t5175 + t6769) + t3992*t5088*(-1.*t4524*t5148 - 1.*t4735*t5175 + t7345);
  p_output1[40]=t4644*(t5088*t5143 + t6769) + t4948*(-1.*t3623*t5104 - 1.*t4486*t5143 + t7345);
  p_output1[41]=t3623*(t4007*t5036 - 1.*t4120*t5054);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t3623 - 0.15121*t4903;
  p_output1[49]=0.28121*t2757 + 0.305*Power(t3516,2) - 1.*t2757*t5019;
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

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
