/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:28 GMT+02:00
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
  double t2219;
  double t2472;
  double t2224;
  double t3883;
  double t3888;
  double t3874;
  double t3920;
  double t2262;
  double t3030;
  double t40379;
  double t40465;
  double t40558;
  double t3795;
  double t3885;
  double t19495;
  double t40140;
  double t2333;
  double t3093;
  double t3439;
  double t41061;
  double t41054;
  double t40669;
  double t40692;
  double t40720;
  double t40991;
  double t40992;
  double t40995;
  double t41016;
  double t41018;
  double t41032;
  double t41063;
  double t41064;
  double t41066;
  double t41079;
  double t41085;
  double t41086;
  double t41089;
  double t41090;
  double t41091;
  double t41098;
  double t41100;
  double t41101;
  double t41105;
  double t41106;
  double t41109;
  double t40193;
  double t40740;
  double t40748;
  double t41156;
  double t41195;
  double t41196;
  double t41214;
  double t41228;
  double t41229;
  double t41231;
  double t41232;
  double t41246;
  double t41247;
  double t41248;
  double t41249;
  double t41258;
  double t41259;
  double t41262;
  double t41270;
  double t41273;
  double t41274;
  double t41276;
  double t41278;
  double t41283;
  double t41285;
  double t41286;
  double t41288;
  double t41296;
  double t41297;
  double t41306;
  double t41271;
  double t41279;
  double t41281;
  double t41289;
  double t41307;
  double t41309;
  double t41321;
  double t41328;
  double t41333;
  double t41015;
  double t41037;
  double t41039;
  double t41282;
  double t41345;
  double t41396;
  double t41404;
  double t41513;
  double t41648;
  double t44222;
  double t46771;
  t2219 = Cos(var1[4]);
  t2472 = Cos(var1[5]);
  t2224 = Cos(var1[6]);
  t3883 = Cos(var1[8]);
  t3888 = Sin(var1[7]);
  t3874 = Cos(var1[7]);
  t3920 = Sin(var1[8]);
  t2262 = Sin(var1[5]);
  t3030 = Sin(var1[6]);
  t40379 = t3883*t3888;
  t40465 = -1.*t3874*t3920;
  t40558 = t40379 + t40465;
  t3795 = Sin(var1[4]);
  t3885 = t3874*t3883;
  t19495 = t3888*t3920;
  t40140 = t3885 + t19495;
  t2333 = -1.*t2224*t2262;
  t3093 = -1.*t2472*t3030;
  t3439 = t2333 + t3093;
  t41061 = Cos(var1[3]);
  t41054 = Sin(var1[3]);
  t40669 = t2472*t2224*t40558;
  t40692 = -1.*t2262*t3030*t40558;
  t40720 = t40669 + t40692;
  t40991 = -1.*t3883*t3888;
  t40992 = t3874*t3920;
  t40995 = t40991 + t40992;
  t41016 = t2472*t2224*t40140;
  t41018 = -1.*t2262*t3030*t40140;
  t41032 = t41016 + t41018;
  t41063 = t2472*t2224;
  t41064 = -1.*t2262*t3030;
  t41066 = t41063 + t41064;
  t41079 = t2224*t2262*t40558;
  t41085 = t2472*t3030*t40558;
  t41086 = t41079 + t41085;
  t41089 = t2219*t40140;
  t41090 = -1.*t3795*t40720;
  t41091 = t41089 + t41090;
  t41098 = t2224*t2262*t40140;
  t41100 = t2472*t3030*t40140;
  t41101 = t41098 + t41100;
  t41105 = t2219*t40995;
  t41106 = -1.*t3795*t41032;
  t41109 = t41105 + t41106;
  t40193 = t3795*t40140;
  t40740 = t2219*t40720;
  t40748 = t40193 + t40740;
  t41156 = -1.*t2224;
  t41195 = 1. + t41156;
  t41196 = 0.15121*t41195;
  t41214 = -1.*t3874;
  t41228 = 1. + t41214;
  t41229 = 0.28121*t41228;
  t41231 = -1.*t3883;
  t41232 = 1. + t41231;
  t41246 = 0.50321*t41232;
  t41247 = 0.23321*t3883;
  t41248 = t41246 + t41247;
  t41249 = t3874*t41248;
  t41258 = -0.27*t3888*t3920;
  t41259 = t41229 + t41249 + t41258;
  t41262 = t2224*t41259;
  t41270 = t41196 + t41262;
  t41273 = 0.15121*t2224;
  t41274 = -0.15121*t3030;
  t41276 = t3030*t41259;
  t41278 = t41196 + t41273 + t41274 + t41276;
  t41283 = 0.28121*t3888;
  t41285 = -1.*t41248*t3888;
  t41286 = -0.27*t3874*t3920;
  t41288 = t41283 + t41285 + t41286;
  t41296 = t2472*t41270;
  t41297 = -1.*t2262*t41278;
  t41306 = t41296 + t41297;
  t41271 = t2262*t41270;
  t41279 = t2472*t41278;
  t41281 = t41271 + t41279;
  t41289 = t3795*t41288;
  t41307 = t2219*t41306;
  t41309 = t41289 + t41307;
  t41321 = t2219*t41288;
  t41328 = -1.*t3795*t41306;
  t41333 = t41321 + t41328;
  t41015 = t3795*t40995;
  t41037 = t2219*t41032;
  t41039 = t41015 + t41037;
  t41282 = -1.*t41066*t41281;
  t41345 = t41086*t41281;
  t41396 = t41066*t41281;
  t41404 = -1.*t41101*t41281;
  t41513 = -1.*t41086*t41281;
  t41648 = t41101*t41281;
  t44222 = -1.*t41288*t40140;
  t46771 = t41288*t40995;
  p_output1[0]=t41039*var2[0] + t2219*t3439*var2[1] + t40748*var2[2];
  p_output1[1]=(t41061*t41101 - 1.*t41054*t41109)*var2[0] + (t3439*t3795*t41054 + t41061*t41066)*var2[1] + (t41061*t41086 - 1.*t41054*t41091)*var2[2];
  p_output1[2]=(t41054*t41101 + t41061*t41109)*var2[0] + (-1.*t3439*t3795*t41061 + t41054*t41066)*var2[1] + (t41054*t41086 + t41061*t41091)*var2[2];
  p_output1[3]=(t40748*(t41282 - 1.*t2219*t3439*t41309 + t3439*t3795*t41333) + t2219*t3439*(t40748*t41309 + t41091*t41333 + t41345))*var2[0] + (t41039*(-1.*t40748*t41309 - 1.*t41091*t41333 + t41513) + t40748*(t41039*t41309 + t41109*t41333 + t41648))*var2[1] + (t41039*(t2219*t3439*t41309 - 1.*t3439*t3795*t41333 + t41396) + t2219*t3439*(-1.*t41039*t41309 - 1.*t41109*t41333 + t41404))*var2[2];
  p_output1[4]=(t41086*(t41282 - 1.*t3439*t41306) + t41066*(t40140*t41288 + t40720*t41306 + t41345))*var2[0] + (t41101*(-1.*t40720*t41306 + t41513 + t44222) + t41086*(t41032*t41306 + t41648 + t46771))*var2[1] + (t41101*(t3439*t41306 + t41396) + t41066*(-1.*t40995*t41288 - 1.*t41032*t41306 + t41404))*var2[2];
  p_output1[5]=t40140*(t3030*t41270 - 1.*t2224*t41278)*var2[0] + (t40995*(-1.*t2224*t40558*t41270 - 1.*t3030*t40558*t41278 + t44222) + t40140*(t2224*t40140*t41270 + t3030*t40140*t41278 + t46771))*var2[1] + t40995*(-1.*t3030*t41270 + t2224*t41278)*var2[2];
  p_output1[6]=(-0.15121 + t40995*(-1.*t40558*t41259 + t44222) + t40140*(t40140*t41259 + t46771))*var2[1] + (0.15121*t40558 + 0.15121*t40995)*var2[2];
  p_output1[7]=(0.28121*t3920 - 0.27*t3883*t3920 - 1.*t3920*t41248)*var2[0] + (0.28121*t3883 + 0.27*Power(t3920,2) - 1.*t3883*t41248)*var2[2];
  p_output1[8]=-0.27*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
