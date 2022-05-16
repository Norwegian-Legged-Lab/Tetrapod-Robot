/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:56 GMT+02:00
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
  double t23960;
  double t41362;
  double t27057;
  double t53848;
  double t53856;
  double t53847;
  double t53857;
  double t27532;
  double t53884;
  double t53899;
  double t53908;
  double t50393;
  double t53877;
  double t53932;
  double t53935;
  double t53937;
  double t28306;
  double t53339;
  double t53772;
  double t54128;
  double t54126;
  double t53850;
  double t53858;
  double t53863;
  double t53911;
  double t53913;
  double t53918;
  double t53939;
  double t53943;
  double t53949;
  double t54130;
  double t54135;
  double t54136;
  double t54159;
  double t54163;
  double t54165;
  double t54171;
  double t54173;
  double t54175;
  double t54194;
  double t54197;
  double t54199;
  double t54208;
  double t54209;
  double t54210;
  double t53882;
  double t53920;
  double t53923;
  double t54244;
  double t54246;
  double t54247;
  double t54251;
  double t54252;
  double t54253;
  double t54255;
  double t54256;
  double t54257;
  double t54258;
  double t54259;
  double t54264;
  double t54266;
  double t54267;
  double t54271;
  double t54273;
  double t54248;
  double t54249;
  double t54268;
  double t54269;
  double t54282;
  double t54287;
  double t54288;
  double t54289;
  double t54291;
  double t54294;
  double t54298;
  double t54270;
  double t54274;
  double t54275;
  double t54290;
  double t54300;
  double t54301;
  double t54309;
  double t54312;
  double t54315;
  double t53930;
  double t53954;
  double t53956;
  double t54276;
  double t54322;
  double t54336;
  double t54345;
  double t54357;
  double t54366;
  double t54534;
  double t54556;
  t23960 = Cos(var1[4]);
  t41362 = Cos(var1[15]);
  t27057 = Cos(var1[5]);
  t53848 = Cos(var1[17]);
  t53856 = Sin(var1[16]);
  t53847 = Cos(var1[16]);
  t53857 = Sin(var1[17]);
  t27532 = Sin(var1[15]);
  t53884 = -1.*t53848*t53856;
  t53899 = t53847*t53857;
  t53908 = t53884 + t53899;
  t50393 = Sin(var1[5]);
  t53877 = Sin(var1[4]);
  t53932 = -1.*t53847*t53848;
  t53935 = -1.*t53856*t53857;
  t53937 = t53932 + t53935;
  t28306 = t27057*t27532;
  t53339 = t41362*t50393;
  t53772 = t28306 + t53339;
  t54128 = Cos(var1[3]);
  t54126 = Sin(var1[3]);
  t53850 = t53847*t53848;
  t53858 = t53856*t53857;
  t53863 = t53850 + t53858;
  t53911 = t41362*t27057*t53908;
  t53913 = -1.*t27532*t53908*t50393;
  t53918 = t53911 + t53913;
  t53939 = t41362*t27057*t53937;
  t53943 = -1.*t27532*t53937*t50393;
  t53949 = t53939 + t53943;
  t54130 = -1.*t41362*t27057;
  t54135 = t27532*t50393;
  t54136 = t54130 + t54135;
  t54159 = t27057*t27532*t53908;
  t54163 = t41362*t53908*t50393;
  t54165 = t54159 + t54163;
  t54171 = t23960*t53863;
  t54173 = -1.*t53877*t53918;
  t54175 = t54171 + t54173;
  t54194 = t27057*t27532*t53937;
  t54197 = t41362*t53937*t50393;
  t54199 = t54194 + t54197;
  t54208 = t23960*t53908;
  t54209 = -1.*t53877*t53949;
  t54210 = t54208 + t54209;
  t53882 = t53863*t53877;
  t53920 = t23960*t53918;
  t53923 = t53882 + t53920;
  t54244 = -1.*t41362;
  t54246 = 1. + t54244;
  t54247 = -0.15121*t54246;
  t54251 = -1.*t53847;
  t54252 = 1. + t54251;
  t54253 = -0.28121*t54252;
  t54255 = -1.*t53848;
  t54256 = 1. + t54255;
  t54257 = -0.50321*t54256;
  t54258 = -0.23321*t53848;
  t54259 = t54257 + t54258;
  t54264 = t53847*t54259;
  t54266 = 0.27*t53856*t53857;
  t54267 = t54253 + t54264 + t54266;
  t54271 = t41362*t54267;
  t54273 = t54247 + t54271;
  t54248 = -0.15121*t41362;
  t54249 = 0.15121*t27532;
  t54268 = t27532*t54267;
  t54269 = t54247 + t54248 + t54249 + t54268;
  t54282 = 0.28121*t53856;
  t54287 = t54259*t53856;
  t54288 = -0.27*t53847*t53857;
  t54289 = t54282 + t54287 + t54288;
  t54291 = t27057*t54273;
  t54294 = -1.*t54269*t50393;
  t54298 = t54291 + t54294;
  t54270 = t27057*t54269;
  t54274 = t54273*t50393;
  t54275 = t54270 + t54274;
  t54290 = t54289*t53877;
  t54300 = t23960*t54298;
  t54301 = t54290 + t54300;
  t54309 = t23960*t54289;
  t54312 = -1.*t53877*t54298;
  t54315 = t54309 + t54312;
  t53930 = t53908*t53877;
  t53954 = t23960*t53949;
  t53956 = t53930 + t53954;
  t54276 = -1.*t54136*t54275;
  t54322 = t54165*t54275;
  t54336 = t54136*t54275;
  t54345 = -1.*t54199*t54275;
  t54357 = -1.*t54165*t54275;
  t54366 = t54199*t54275;
  t54534 = -1.*t54289*t53863;
  t54556 = t54289*t53908;
  p_output1[0]=t53956*var2[0] + t23960*t53772*var2[1] + t53923*var2[2];
  p_output1[1]=(t54128*t54199 - 1.*t54126*t54210)*var2[0] + (t53772*t53877*t54126 + t54128*t54136)*var2[1] + (t54128*t54165 - 1.*t54126*t54175)*var2[2];
  p_output1[2]=(t54126*t54199 + t54128*t54210)*var2[0] + (-1.*t53772*t53877*t54128 + t54126*t54136)*var2[1] + (t54126*t54165 + t54128*t54175)*var2[2];
  p_output1[3]=(t53923*(t54276 - 1.*t23960*t53772*t54301 + t53772*t53877*t54315) + t23960*t53772*(t53923*t54301 + t54175*t54315 + t54322))*var2[0] + (t53956*(-1.*t53923*t54301 - 1.*t54175*t54315 + t54357) + t53923*(t53956*t54301 + t54210*t54315 + t54366))*var2[1] + (t53956*(t23960*t53772*t54301 - 1.*t53772*t53877*t54315 + t54336) + t23960*t53772*(-1.*t53956*t54301 - 1.*t54210*t54315 + t54345))*var2[2];
  p_output1[4]=(t54165*(t54276 - 1.*t53772*t54298) + t54136*(t53863*t54289 + t53918*t54298 + t54322))*var2[0] + (t54199*(-1.*t53918*t54298 + t54357 + t54534) + t54165*(t53949*t54298 + t54366 + t54556))*var2[1] + (t54199*(t53772*t54298 + t54336) + t54136*(-1.*t53908*t54289 - 1.*t53949*t54298 + t54345))*var2[2];
  p_output1[5]=t53863*(t41362*t54269 - 1.*t27532*t54273)*var2[0] + (t53908*(-1.*t27532*t53908*t54269 - 1.*t41362*t53908*t54273 + t54534) + t53863*(t27532*t53937*t54269 + t41362*t53937*t54273 + t54556))*var2[1] + t53908*(-1.*t41362*t54269 + t27532*t54273)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t53863 - 0.15121*t53937)*var2[0] + (-0.15121 + t53908*(-1.*t53908*t54267 + t54534) + t53863*(t53937*t54267 + t54556))*var2[1];
  p_output1[16]=(0.28121*t53857 - 0.27*t53848*t53857 + t53857*t54259)*var2[0] + (0.28121*t53848 + 0.27*Power(t53857,2) + t53848*t54259)*var2[2];
  p_output1[17]=-0.27*var2[2];
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

#include "fRrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
