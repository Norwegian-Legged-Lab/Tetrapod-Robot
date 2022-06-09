/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:13 GMT+02:00
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
  double t3844;
  double t10469;
  double t5942;
  double t10692;
  double t10902;
  double t10691;
  double t11437;
  double t9325;
  double t11800;
  double t11812;
  double t11820;
  double t10553;
  double t11617;
  double t13378;
  double t13470;
  double t15015;
  double t9359;
  double t10554;
  double t10640;
  double t15040;
  double t15036;
  double t10696;
  double t11559;
  double t11611;
  double t11825;
  double t11827;
  double t11832;
  double t15020;
  double t15022;
  double t15025;
  double t15043;
  double t15045;
  double t15047;
  double t15054;
  double t15056;
  double t15059;
  double t15063;
  double t15064;
  double t15065;
  double t15141;
  double t15143;
  double t15155;
  double t15166;
  double t15170;
  double t15184;
  double t11798;
  double t11872;
  double t12448;
  double t15252;
  double t15257;
  double t15258;
  double t15264;
  double t15265;
  double t15266;
  double t15267;
  double t15269;
  double t15272;
  double t15273;
  double t15274;
  double t15275;
  double t15277;
  double t15280;
  double t15352;
  double t15358;
  double t15259;
  double t15262;
  double t15310;
  double t15348;
  double t15389;
  double t15391;
  double t15394;
  double t15396;
  double t15399;
  double t15401;
  double t15402;
  double t15349;
  double t15381;
  double t15385;
  double t15397;
  double t15404;
  double t15408;
  double t15411;
  double t15413;
  double t15415;
  double t13289;
  double t15029;
  double t15030;
  double t15387;
  double t15446;
  double t15457;
  double t15465;
  double t15477;
  double t15527;
  double t15667;
  double t15673;
  t3844 = Cos(var1[4]);
  t10469 = Cos(var1[15]);
  t5942 = Cos(var1[5]);
  t10692 = Cos(var1[17]);
  t10902 = Sin(var1[16]);
  t10691 = Cos(var1[16]);
  t11437 = Sin(var1[17]);
  t9325 = Sin(var1[15]);
  t11800 = -1.*t10692*t10902;
  t11812 = t10691*t11437;
  t11820 = t11800 + t11812;
  t10553 = Sin(var1[5]);
  t11617 = Sin(var1[4]);
  t13378 = -1.*t10691*t10692;
  t13470 = -1.*t10902*t11437;
  t15015 = t13378 + t13470;
  t9359 = t5942*t9325;
  t10554 = t10469*t10553;
  t10640 = t9359 + t10554;
  t15040 = Cos(var1[3]);
  t15036 = Sin(var1[3]);
  t10696 = t10691*t10692;
  t11559 = t10902*t11437;
  t11611 = t10696 + t11559;
  t11825 = t10469*t5942*t11820;
  t11827 = -1.*t9325*t11820*t10553;
  t11832 = t11825 + t11827;
  t15020 = t10469*t5942*t15015;
  t15022 = -1.*t9325*t15015*t10553;
  t15025 = t15020 + t15022;
  t15043 = -1.*t10469*t5942;
  t15045 = t9325*t10553;
  t15047 = t15043 + t15045;
  t15054 = t5942*t9325*t11820;
  t15056 = t10469*t11820*t10553;
  t15059 = t15054 + t15056;
  t15063 = t3844*t11611;
  t15064 = -1.*t11617*t11832;
  t15065 = t15063 + t15064;
  t15141 = t5942*t9325*t15015;
  t15143 = t10469*t15015*t10553;
  t15155 = t15141 + t15143;
  t15166 = t3844*t11820;
  t15170 = -1.*t11617*t15025;
  t15184 = t15166 + t15170;
  t11798 = t11611*t11617;
  t11872 = t3844*t11832;
  t12448 = t11798 + t11872;
  t15252 = -1.*t10469;
  t15257 = 1. + t15252;
  t15258 = -0.15121*t15257;
  t15264 = -1.*t10691;
  t15265 = 1. + t15264;
  t15266 = -0.28121*t15265;
  t15267 = -1.*t10692;
  t15269 = 1. + t15267;
  t15272 = -0.50321*t15269;
  t15273 = -0.19821*t10692;
  t15274 = t15272 + t15273;
  t15275 = t10691*t15274;
  t15277 = 0.305*t10902*t11437;
  t15280 = t15266 + t15275 + t15277;
  t15352 = t10469*t15280;
  t15358 = t15258 + t15352;
  t15259 = -0.15121*t10469;
  t15262 = 0.15121*t9325;
  t15310 = t9325*t15280;
  t15348 = t15258 + t15259 + t15262 + t15310;
  t15389 = 0.28121*t10902;
  t15391 = t15274*t10902;
  t15394 = -0.305*t10691*t11437;
  t15396 = t15389 + t15391 + t15394;
  t15399 = t5942*t15358;
  t15401 = -1.*t15348*t10553;
  t15402 = t15399 + t15401;
  t15349 = t5942*t15348;
  t15381 = t15358*t10553;
  t15385 = t15349 + t15381;
  t15397 = t15396*t11617;
  t15404 = t3844*t15402;
  t15408 = t15397 + t15404;
  t15411 = t3844*t15396;
  t15413 = -1.*t11617*t15402;
  t15415 = t15411 + t15413;
  t13289 = t11820*t11617;
  t15029 = t3844*t15025;
  t15030 = t13289 + t15029;
  t15387 = -1.*t15047*t15385;
  t15446 = t15059*t15385;
  t15457 = t15047*t15385;
  t15465 = -1.*t15155*t15385;
  t15477 = -1.*t15059*t15385;
  t15527 = t15155*t15385;
  t15667 = -1.*t15396*t11611;
  t15673 = t15396*t11820;
  p_output1[0]=t15030*var2[0] + t10640*t3844*var2[1] + t12448*var2[2];
  p_output1[1]=(t15040*t15155 - 1.*t15036*t15184)*var2[0] + (t10640*t11617*t15036 + t15040*t15047)*var2[1] + (t15040*t15059 - 1.*t15036*t15065)*var2[2];
  p_output1[2]=(t15036*t15155 + t15040*t15184)*var2[0] + (-1.*t10640*t11617*t15040 + t15036*t15047)*var2[1] + (t15036*t15059 + t15040*t15065)*var2[2];
  p_output1[3]=(t10640*(t12448*t15408 + t15065*t15415 + t15446)*t3844 + t12448*(t15387 + t10640*t11617*t15415 - 1.*t10640*t15408*t3844))*var2[0] + (t15030*(-1.*t12448*t15408 - 1.*t15065*t15415 + t15477) + t12448*(t15030*t15408 + t15184*t15415 + t15527))*var2[1] + (t10640*(-1.*t15030*t15408 - 1.*t15184*t15415 + t15465)*t3844 + t15030*(-1.*t10640*t11617*t15415 + t15457 + t10640*t15408*t3844))*var2[2];
  p_output1[4]=(t15059*(t15387 - 1.*t10640*t15402) + t15047*(t11611*t15396 + t11832*t15402 + t15446))*var2[0] + (t15155*(-1.*t11832*t15402 + t15477 + t15667) + t15059*(t15025*t15402 + t15527 + t15673))*var2[1] + (t15155*(t10640*t15402 + t15457) + t15047*(-1.*t11820*t15396 - 1.*t15025*t15402 + t15465))*var2[2];
  p_output1[5]=t11611*(t10469*t15348 - 1.*t15358*t9325)*var2[0] + (t11820*(-1.*t10469*t11820*t15358 + t15667 - 1.*t11820*t15348*t9325) + t11611*(t10469*t15015*t15358 + t15673 + t15015*t15348*t9325))*var2[1] + t11820*(-1.*t10469*t15348 + t15358*t9325)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t11611 - 0.15121*t15015)*var2[0] + (-0.15121 + t11820*(-1.*t11820*t15280 + t15667) + t11611*(t15015*t15280 + t15673))*var2[1];
  p_output1[16]=(0.28121*t11437 - 0.305*t10692*t11437 + t11437*t15274)*var2[0] + (0.28121*t10692 + 0.305*Power(t11437,2) + t10692*t15274)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
