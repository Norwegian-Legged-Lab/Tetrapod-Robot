/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:52 GMT+02:00
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
  double t5912;
  double t11272;
  double t7472;
  double t26722;
  double t26989;
  double t26720;
  double t27009;
  double t8174;
  double t27056;
  double t27058;
  double t27062;
  double t11827;
  double t27038;
  double t26723;
  double t27011;
  double t27023;
  double t9308;
  double t26712;
  double t26718;
  double t27106;
  double t27101;
  double t27064;
  double t27067;
  double t27074;
  double t27081;
  double t27083;
  double t27085;
  double t27089;
  double t27090;
  double t27091;
  double t27107;
  double t27109;
  double t27115;
  double t27126;
  double t27128;
  double t27129;
  double t27132;
  double t27133;
  double t27135;
  double t27142;
  double t27143;
  double t27146;
  double t27149;
  double t27150;
  double t27152;
  double t27054;
  double t27075;
  double t27078;
  double t27173;
  double t27174;
  double t27180;
  double t27181;
  double t27182;
  double t27185;
  double t27186;
  double t27191;
  double t27192;
  double t27194;
  double t27195;
  double t27201;
  double t27205;
  double t27211;
  double t27216;
  double t27217;
  double t27175;
  double t27176;
  double t27179;
  double t27206;
  double t27208;
  double t27227;
  double t27235;
  double t27256;
  double t27265;
  double t27272;
  double t27274;
  double t27277;
  double t27210;
  double t27219;
  double t27220;
  double t27268;
  double t27291;
  double t27297;
  double t27306;
  double t27314;
  double t27318;
  double t27088;
  double t27093;
  double t27097;
  double t27223;
  double t27337;
  double t27418;
  double t27424;
  double t27433;
  double t27439;
  double t27494;
  double t27515;
  t5912 = Cos(var1[4]);
  t11272 = Cos(var1[12]);
  t7472 = Cos(var1[5]);
  t26722 = Cos(var1[14]);
  t26989 = Sin(var1[13]);
  t26720 = Cos(var1[13]);
  t27009 = Sin(var1[14]);
  t8174 = Sin(var1[12]);
  t27056 = t26722*t26989;
  t27058 = -1.*t26720*t27009;
  t27062 = t27056 + t27058;
  t11827 = Sin(var1[5]);
  t27038 = Sin(var1[4]);
  t26723 = t26720*t26722;
  t27011 = t26989*t27009;
  t27023 = t26723 + t27011;
  t9308 = -1.*t7472*t8174;
  t26712 = -1.*t11272*t11827;
  t26718 = t9308 + t26712;
  t27106 = Cos(var1[3]);
  t27101 = Sin(var1[3]);
  t27064 = t11272*t7472*t27062;
  t27067 = -1.*t8174*t27062*t11827;
  t27074 = t27064 + t27067;
  t27081 = -1.*t26722*t26989;
  t27083 = t26720*t27009;
  t27085 = t27081 + t27083;
  t27089 = t11272*t7472*t27023;
  t27090 = -1.*t8174*t27023*t11827;
  t27091 = t27089 + t27090;
  t27107 = t11272*t7472;
  t27109 = -1.*t8174*t11827;
  t27115 = t27107 + t27109;
  t27126 = t7472*t8174*t27062;
  t27128 = t11272*t27062*t11827;
  t27129 = t27126 + t27128;
  t27132 = t5912*t27023;
  t27133 = -1.*t27038*t27074;
  t27135 = t27132 + t27133;
  t27142 = t7472*t8174*t27023;
  t27143 = t11272*t27023*t11827;
  t27146 = t27142 + t27143;
  t27149 = t5912*t27085;
  t27150 = -1.*t27038*t27091;
  t27152 = t27149 + t27150;
  t27054 = t27023*t27038;
  t27075 = t5912*t27074;
  t27078 = t27054 + t27075;
  t27173 = -1.*t11272;
  t27174 = 1. + t27173;
  t27180 = -1.*t26720;
  t27181 = 1. + t27180;
  t27182 = 0.28121*t27181;
  t27185 = -1.*t26722;
  t27186 = 1. + t27185;
  t27191 = 0.50321*t27186;
  t27192 = 0.19821*t26722;
  t27194 = t27191 + t27192;
  t27195 = t26720*t27194;
  t27201 = -0.305*t26989*t27009;
  t27205 = t27182 + t27195 + t27201;
  t27211 = 0.15121*t27174;
  t27216 = t11272*t27205;
  t27217 = t27211 + t27216;
  t27175 = -0.15121*t27174;
  t27176 = -0.15121*t11272;
  t27179 = -0.15121*t8174;
  t27206 = t8174*t27205;
  t27208 = t27175 + t27176 + t27179 + t27206;
  t27227 = 0.28121*t26989;
  t27235 = -1.*t27194*t26989;
  t27256 = -0.305*t26720*t27009;
  t27265 = t27227 + t27235 + t27256;
  t27272 = t7472*t27217;
  t27274 = -1.*t27208*t11827;
  t27277 = t27272 + t27274;
  t27210 = t7472*t27208;
  t27219 = t27217*t11827;
  t27220 = t27210 + t27219;
  t27268 = t27265*t27038;
  t27291 = t5912*t27277;
  t27297 = t27268 + t27291;
  t27306 = t5912*t27265;
  t27314 = -1.*t27038*t27277;
  t27318 = t27306 + t27314;
  t27088 = t27085*t27038;
  t27093 = t5912*t27091;
  t27097 = t27088 + t27093;
  t27223 = -1.*t27115*t27220;
  t27337 = t27129*t27220;
  t27418 = t27115*t27220;
  t27424 = -1.*t27146*t27220;
  t27433 = -1.*t27129*t27220;
  t27439 = t27146*t27220;
  t27494 = -1.*t27265*t27023;
  t27515 = t27265*t27085;
  p_output1[0]=t27097*var2[0] + t26718*t5912*var2[1] + t27078*var2[2];
  p_output1[1]=(t27106*t27146 - 1.*t27101*t27152)*var2[0] + (t26718*t27038*t27101 + t27106*t27115)*var2[1] + (t27106*t27129 - 1.*t27101*t27135)*var2[2];
  p_output1[2]=(t27101*t27146 + t27106*t27152)*var2[0] + (-1.*t26718*t27038*t27106 + t27101*t27115)*var2[1] + (t27101*t27129 + t27106*t27135)*var2[2];
  p_output1[3]=(t26718*(t27078*t27297 + t27135*t27318 + t27337)*t5912 + t27078*(t27223 + t26718*t27038*t27318 - 1.*t26718*t27297*t5912))*var2[0] + (t27097*(-1.*t27078*t27297 - 1.*t27135*t27318 + t27433) + t27078*(t27097*t27297 + t27152*t27318 + t27439))*var2[1] + (t26718*(-1.*t27097*t27297 - 1.*t27152*t27318 + t27424)*t5912 + t27097*(-1.*t26718*t27038*t27318 + t27418 + t26718*t27297*t5912))*var2[2];
  p_output1[4]=(t27129*(t27223 - 1.*t26718*t27277) + t27115*(t27023*t27265 + t27074*t27277 + t27337))*var2[0] + (t27146*(-1.*t27074*t27277 + t27433 + t27494) + t27129*(t27091*t27277 + t27439 + t27515))*var2[1] + (t27146*(t26718*t27277 + t27418) + t27115*(-1.*t27085*t27265 - 1.*t27091*t27277 + t27424))*var2[2];
  p_output1[5]=t27023*(-1.*t11272*t27208 + t27217*t8174)*var2[0] + (t27023*(t11272*t27023*t27217 + t27515 + t27023*t27208*t8174) + t27085*(-1.*t11272*t27062*t27217 + t27494 - 1.*t27062*t27208*t8174))*var2[1] + t27085*(t11272*t27208 - 1.*t27217*t8174)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t27085*(-1.*t27062*t27205 + t27494) + t27023*(t27023*t27205 + t27515))*var2[1] + (-0.15121*t27062 - 0.15121*t27085)*var2[2];
  p_output1[13]=(0.28121*t27009 - 0.305*t26722*t27009 - 1.*t27009*t27194)*var2[0] + (0.28121*t26722 + 0.305*Power(t27009,2) - 1.*t26722*t27194)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
