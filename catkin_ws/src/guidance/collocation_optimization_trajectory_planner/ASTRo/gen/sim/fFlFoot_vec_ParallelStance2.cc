/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:19 GMT+02:00
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
  double t4371;
  double t16376;
  double t4384;
  double t18029;
  double t18280;
  double t18027;
  double t18330;
  double t5056;
  double t16384;
  double t18372;
  double t18373;
  double t18375;
  double t17997;
  double t18209;
  double t18351;
  double t18362;
  double t15856;
  double t16394;
  double t16419;
  double t18550;
  double t18510;
  double t18380;
  double t18381;
  double t18382;
  double t18424;
  double t18442;
  double t18443;
  double t18447;
  double t18479;
  double t18481;
  double t18563;
  double t18568;
  double t18571;
  double t18657;
  double t18663;
  double t18664;
  double t18670;
  double t18671;
  double t18677;
  double t18758;
  double t18784;
  double t18785;
  double t18788;
  double t18800;
  double t18802;
  double t18364;
  double t18395;
  double t18396;
  double t19054;
  double t19061;
  double t19064;
  double t19068;
  double t19076;
  double t19109;
  double t19110;
  double t19113;
  double t19119;
  double t19137;
  double t19138;
  double t19140;
  double t19141;
  double t19157;
  double t19158;
  double t19160;
  double t19187;
  double t19191;
  double t19192;
  double t19193;
  double t19237;
  double t19247;
  double t19248;
  double t19249;
  double t19265;
  double t19267;
  double t19274;
  double t19164;
  double t19233;
  double t19234;
  double t19254;
  double t19276;
  double t19278;
  double t19287;
  double t19290;
  double t19303;
  double t18444;
  double t18493;
  double t18499;
  double t19235;
  double t19321;
  double t19344;
  double t19361;
  double t19452;
  double t19480;
  double t20075;
  double t20115;
  t4371 = Cos(var1[4]);
  t16376 = Cos(var1[5]);
  t4384 = Cos(var1[6]);
  t18029 = Cos(var1[8]);
  t18280 = Sin(var1[7]);
  t18027 = Cos(var1[7]);
  t18330 = Sin(var1[8]);
  t5056 = Sin(var1[5]);
  t16384 = Sin(var1[6]);
  t18372 = t18029*t18280;
  t18373 = -1.*t18027*t18330;
  t18375 = t18372 + t18373;
  t17997 = Sin(var1[4]);
  t18209 = t18027*t18029;
  t18351 = t18280*t18330;
  t18362 = t18209 + t18351;
  t15856 = -1.*t4384*t5056;
  t16394 = -1.*t16376*t16384;
  t16419 = t15856 + t16394;
  t18550 = Cos(var1[3]);
  t18510 = Sin(var1[3]);
  t18380 = t16376*t4384*t18375;
  t18381 = -1.*t5056*t16384*t18375;
  t18382 = t18380 + t18381;
  t18424 = -1.*t18029*t18280;
  t18442 = t18027*t18330;
  t18443 = t18424 + t18442;
  t18447 = t16376*t4384*t18362;
  t18479 = -1.*t5056*t16384*t18362;
  t18481 = t18447 + t18479;
  t18563 = t16376*t4384;
  t18568 = -1.*t5056*t16384;
  t18571 = t18563 + t18568;
  t18657 = t4384*t5056*t18375;
  t18663 = t16376*t16384*t18375;
  t18664 = t18657 + t18663;
  t18670 = t4371*t18362;
  t18671 = -1.*t17997*t18382;
  t18677 = t18670 + t18671;
  t18758 = t4384*t5056*t18362;
  t18784 = t16376*t16384*t18362;
  t18785 = t18758 + t18784;
  t18788 = t4371*t18443;
  t18800 = -1.*t17997*t18481;
  t18802 = t18788 + t18800;
  t18364 = t17997*t18362;
  t18395 = t4371*t18382;
  t18396 = t18364 + t18395;
  t19054 = -1.*t4384;
  t19061 = 1. + t19054;
  t19064 = 0.15121*t19061;
  t19068 = -1.*t18027;
  t19076 = 1. + t19068;
  t19109 = 0.28121*t19076;
  t19110 = -1.*t18029;
  t19113 = 1. + t19110;
  t19119 = 0.50321*t19113;
  t19137 = 0.23321*t18029;
  t19138 = t19119 + t19137;
  t19140 = t18027*t19138;
  t19141 = -0.27*t18280*t18330;
  t19157 = t19109 + t19140 + t19141;
  t19158 = t4384*t19157;
  t19160 = t19064 + t19158;
  t19187 = 0.15121*t4384;
  t19191 = -0.15121*t16384;
  t19192 = t16384*t19157;
  t19193 = t19064 + t19187 + t19191 + t19192;
  t19237 = 0.28121*t18280;
  t19247 = -1.*t19138*t18280;
  t19248 = -0.27*t18027*t18330;
  t19249 = t19237 + t19247 + t19248;
  t19265 = t16376*t19160;
  t19267 = -1.*t5056*t19193;
  t19274 = t19265 + t19267;
  t19164 = t5056*t19160;
  t19233 = t16376*t19193;
  t19234 = t19164 + t19233;
  t19254 = t17997*t19249;
  t19276 = t4371*t19274;
  t19278 = t19254 + t19276;
  t19287 = t4371*t19249;
  t19290 = -1.*t17997*t19274;
  t19303 = t19287 + t19290;
  t18444 = t17997*t18443;
  t18493 = t4371*t18481;
  t18499 = t18444 + t18493;
  t19235 = -1.*t18571*t19234;
  t19321 = t18664*t19234;
  t19344 = t18571*t19234;
  t19361 = -1.*t18785*t19234;
  t19452 = -1.*t18664*t19234;
  t19480 = t18785*t19234;
  t20075 = -1.*t19249*t18362;
  t20115 = t19249*t18443;
  p_output1[0]=t18499*var2[0] + t16419*t4371*var2[1] + t18396*var2[2];
  p_output1[1]=(t18550*t18785 - 1.*t18510*t18802)*var2[0] + (t16419*t17997*t18510 + t18550*t18571)*var2[1] + (t18550*t18664 - 1.*t18510*t18677)*var2[2];
  p_output1[2]=(t18510*t18785 + t18550*t18802)*var2[0] + (-1.*t16419*t17997*t18550 + t18510*t18571)*var2[1] + (t18510*t18664 + t18550*t18677)*var2[2];
  p_output1[3]=(t16419*(t18396*t19278 + t18677*t19303 + t19321)*t4371 + t18396*(t19235 + t16419*t17997*t19303 - 1.*t16419*t19278*t4371))*var2[0] + (t18499*(-1.*t18396*t19278 - 1.*t18677*t19303 + t19452) + t18396*(t18499*t19278 + t18802*t19303 + t19480))*var2[1] + (t16419*(-1.*t18499*t19278 - 1.*t18802*t19303 + t19361)*t4371 + t18499*(-1.*t16419*t17997*t19303 + t19344 + t16419*t19278*t4371))*var2[2];
  p_output1[4]=(t18664*(t19235 - 1.*t16419*t19274) + t18571*(t18362*t19249 + t18382*t19274 + t19321))*var2[0] + (t18785*(-1.*t18382*t19274 + t19452 + t20075) + t18664*(t18481*t19274 + t19480 + t20115))*var2[1] + (t18785*(t16419*t19274 + t19344) + t18571*(-1.*t18443*t19249 - 1.*t18481*t19274 + t19361))*var2[2];
  p_output1[5]=t18362*(t16384*t19160 - 1.*t19193*t4384)*var2[0] + (t18362*(t16384*t18362*t19193 + t20115 + t18362*t19160*t4384) + t18443*(-1.*t16384*t18375*t19193 + t20075 - 1.*t18375*t19160*t4384))*var2[1] + t18443*(-1.*t16384*t19160 + t19193*t4384)*var2[2];
  p_output1[6]=(-0.15121 + t18443*(-1.*t18375*t19157 + t20075) + t18362*(t18362*t19157 + t20115))*var2[1] + (0.15121*t18375 + 0.15121*t18443)*var2[2];
  p_output1[7]=(0.28121*t18330 - 0.27*t18029*t18330 - 1.*t18330*t19138)*var2[0] + (0.28121*t18029 + 0.27*Power(t18330,2) - 1.*t18029*t19138)*var2[2];
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
