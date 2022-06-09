/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:10 GMT+02:00
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
  double t2946;
  double t2500;
  double t2912;
  double t3195;
  double t2917;
  double t3224;
  double t3266;
  double t3455;
  double t9247;
  double t9188;
  double t9218;
  double t9245;
  double t9252;
  double t2090;
  double t3415;
  double t3298;
  double t9246;
  double t9269;
  double t9272;
  double t9349;
  double t9308;
  double t9309;
  double t9319;
  double t9303;
  double t9371;
  double t9398;
  double t11264;
  double t11909;
  double t11916;
  double t11928;
  double t11959;
  double t11960;
  double t11968;
  double t11981;
  double t11982;
  double t11984;
  double t11892;
  double t11930;
  double t11987;
  double t11989;
  double t12037;
  double t12039;
  double t12043;
  double t12044;
  double t12047;
  double t12048;
  double t11871;
  double t11873;
  double t11875;
  double t11876;
  double t11998;
  double t11999;
  double t12286;
  double t12344;
  double t12354;
  double t12514;
  double t12533;
  double t12551;
  double t12189;
  double t12273;
  double t12275;
  double t12004;
  double t12051;
  double t12166;
  double t11779;
  double t11781;
  double t11782;
  double t12363;
  double t12558;
  double t12561;
  double t11767;
  double t11845;
  double t11853;
  double t11854;
  double t11855;
  double t11870;
  double t13560;
  double t13658;
  double t14072;
  double t14385;
  double t15107;
  double t15573;
  double t12185;
  double t16266;
  double t18588;
  double t18627;
  double t12657;
  double t12667;
  double t13554;
  double t3398;
  double t9274;
  double t9286;
  double t18345;
  double t18410;
  double t18453;
  double t19264;
  double t19308;
  double t19400;
  double t19350;
  double t19448;
  double t19437;
  double t19576;
  double t19639;
  double t19656;
  double t19684;
  t2946 = Cos(var1[13]);
  t2500 = Cos(var1[14]);
  t2912 = Sin(var1[13]);
  t3195 = Sin(var1[14]);
  t2917 = t2500*t2912;
  t3224 = -1.*t2946*t3195;
  t3266 = t2917 + t3224;
  t3455 = Cos(var1[5]);
  t9247 = Sin(var1[12]);
  t9188 = t2946*t2500;
  t9218 = t2912*t3195;
  t9245 = t9188 + t9218;
  t9252 = Sin(var1[5]);
  t2090 = Cos(var1[12]);
  t3415 = Cos(var1[4]);
  t3298 = Sin(var1[4]);
  t9246 = t3455*t9245;
  t9269 = t9247*t3266*t9252;
  t9272 = t9246 + t9269;
  t9349 = Sin(var1[3]);
  t9308 = -1.*t3455*t9247*t3266;
  t9309 = t9245*t9252;
  t9319 = t9308 + t9309;
  t9303 = Cos(var1[3]);
  t9371 = t2090*t3415*t3266;
  t9398 = -1.*t3298*t9272;
  t11264 = t9371 + t9398;
  t11909 = -0.0641*t2500;
  t11916 = -0.28*t3195;
  t11928 = t11909 + t11916;
  t11959 = -1.*t2500;
  t11960 = 1. + t11959;
  t11968 = 0.075*t11960;
  t11981 = 0.355*t2500;
  t11982 = -0.0641*t3195;
  t11984 = t11968 + t11981 + t11982;
  t11892 = -0.325*t2912;
  t11930 = t2946*t11928;
  t11987 = t2912*t11984;
  t11989 = t11892 + t11930 + t11987;
  t12037 = -1.*t2946;
  t12039 = 1. + t12037;
  t12043 = 0.325*t12039;
  t12044 = -1.*t2912*t11928;
  t12047 = t2946*t11984;
  t12048 = t12043 + t12044 + t12047;
  t11871 = -1.*t2090;
  t11873 = 1. + t11871;
  t11875 = -0.1575*t11873;
  t11876 = -0.2255*t2090;
  t11998 = -1.*t9247*t11989;
  t11999 = t11875 + t11876 + t11998;
  t12286 = -0.068*t9247;
  t12344 = t2090*t11989;
  t12354 = t12286 + t12344;
  t12514 = t3455*t12048;
  t12533 = -1.*t11999*t9252;
  t12551 = t12514 + t12533;
  t12189 = t9247*t3298;
  t12273 = -1.*t2090*t3415*t9252;
  t12275 = t12189 + t12273;
  t12004 = t3455*t11999;
  t12051 = t12048*t9252;
  t12166 = t12004 + t12051;
  t11779 = -1.*t2500*t2912;
  t11781 = t2946*t3195;
  t11782 = t11779 + t11781;
  t12363 = t12354*t3298;
  t12558 = t3415*t12551;
  t12561 = t12363 + t12558;
  t11767 = t2090*t9245*t3298;
  t11845 = t3455*t11782;
  t11853 = t9247*t9245*t9252;
  t11854 = t11845 + t11853;
  t11855 = t3415*t11854;
  t11870 = t11767 + t11855;
  t13560 = t3415*t12354;
  t13658 = -1.*t3298*t12551;
  t14072 = t13560 + t13658;
  t14385 = -1.*t3455*t9247*t9245;
  t15107 = t11782*t9252;
  t15573 = t14385 + t15107;
  t12185 = -1.*t2090*t3455*t12166;
  t16266 = t12166*t15573;
  t18588 = -1.*t9247*t12354;
  t18627 = t2090*t12354*t9245;
  t12657 = t3415*t9247;
  t12667 = t2090*t3298*t9252;
  t13554 = t12657 + t12667;
  t3398 = t2090*t3266*t3298;
  t9274 = t3415*t9272;
  t9286 = t3398 + t9274;
  t18345 = t2090*t3415*t9245;
  t18410 = -1.*t3298*t11854;
  t18453 = t18345 + t18410;
  t19264 = t12166*t9319;
  t19308 = -1.*t12166*t15573;
  t19400 = -1.*t2090*t12354*t9245;
  t19350 = t2090*t12354*t3266;
  t19448 = t12048*t9245;
  t19437 = -1.*t12048*t11782;
  t19576 = t2090*t3455*t12166;
  t19639 = -1.*t12166*t9319;
  t19656 = t9247*t12354;
  t19684 = -1.*t2090*t12354*t3266;
  p_output1[0]=t9286;
  p_output1[1]=t9303*t9319 - 1.*t11264*t9349;
  p_output1[2]=t11264*t9303 + t9319*t9349;
  p_output1[3]=t11870*(t12185 - 1.*t12275*t12561 - 1.*t13554*t14072) + t12275*(t11870*t12561 + t16266 + t14072*t18453);
  p_output1[4]=(t11854*t12551 + t16266 + t18627)*t2090*t3455 + t15573*(t12185 + t18588 + t12551*t2090*t9252);
  p_output1[5]=t2090*(t18588 - 1.*t11999*t2090)*t9245 + t9247*(t11782*t12048 + t18627 - 1.*t11999*t9245*t9247);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.2255*t11782 + 0.1575*t3266;
  p_output1[13]=-1.*t11928*t2500 + 0.325*t3195 - 1.*t11984*t3195;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t12275;
  p_output1[19]=t2090*t3455*t9303 - 1.*t13554*t9349;
  p_output1[20]=t13554*t9303 + t2090*t3455*t9349;
  p_output1[21]=(-1.*t11870*t12561 - 1.*t14072*t18453 + t19308)*t9286 + t11870*(t11264*t14072 + t19264 + t12561*t9286);
  p_output1[22]=t15573*(t19264 + t19350 + t12551*t9272) + (-1.*t11854*t12551 + t19308 + t19400)*t9319;
  p_output1[23]=t2090*t9245*(t19350 + t19448 - 1.*t11999*t3266*t9247) + t2090*t3266*(t19400 + t19437 + t11999*t9245*t9247);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t11782*(t19448 + t11989*t3266) + t9245*(t19437 - 1.*t11989*t9245);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t11870;
  p_output1[37]=t15573*t9303 - 1.*t18453*t9349;
  p_output1[38]=t18453*t9303 + t15573*t9349;
  p_output1[39]=(t12275*t12561 + t13554*t14072 + t19576)*t9286 + t12275*(-1.*t11264*t14072 + t19639 - 1.*t12561*t9286);
  p_output1[40]=t2090*t3455*(t19639 + t19684 - 1.*t12551*t9272) + (t19576 + t19656 - 1.*t12551*t2090*t9252)*t9319;
  p_output1[41]=t2090*(t19656 + t11999*t2090)*t3266 + t9247*(t19684 - 1.*t12048*t9245 + t11999*t3266*t9247);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t9245;
  p_output1[49]=-0.325*t2500 + t11984*t2500 - 1.*t11928*t3195;
  p_output1[50]=-0.28;
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
