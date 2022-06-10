/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:46 GMT+02:00
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
  double t14;
  double t8157;
  double t873;
  double t25850;
  double t25852;
  double t25849;
  double t26011;
  double t3069;
  double t11851;
  double t26066;
  double t26076;
  double t26078;
  double t25848;
  double t25851;
  double t26024;
  double t26028;
  double t4498;
  double t11863;
  double t12733;
  double t26117;
  double t26113;
  double t26080;
  double t26081;
  double t26082;
  double t26089;
  double t26091;
  double t26092;
  double t26095;
  double t26098;
  double t26099;
  double t26118;
  double t26119;
  double t26122;
  double t26127;
  double t26128;
  double t26134;
  double t26137;
  double t26138;
  double t26141;
  double t26149;
  double t26154;
  double t26155;
  double t26173;
  double t26174;
  double t26175;
  double t26029;
  double t26083;
  double t26085;
  double t26220;
  double t26221;
  double t26228;
  double t26229;
  double t26230;
  double t26232;
  double t26238;
  double t26239;
  double t26243;
  double t26246;
  double t26257;
  double t26262;
  double t26267;
  double t26280;
  double t26283;
  double t26286;
  double t26319;
  double t26325;
  double t26338;
  double t26342;
  double t26387;
  double t26388;
  double t26391;
  double t26394;
  double t26403;
  double t26404;
  double t26409;
  double t26309;
  double t26352;
  double t26367;
  double t26400;
  double t26414;
  double t26416;
  double t26419;
  double t26422;
  double t26427;
  double t26094;
  double t26103;
  double t26104;
  double t26384;
  double t26433;
  double t26440;
  double t26446;
  double t26461;
  double t26482;
  double t26517;
  double t26522;
  t14 = Cos(var1[4]);
  t8157 = Cos(var1[5]);
  t873 = Cos(var1[6]);
  t25850 = Cos(var1[8]);
  t25852 = Sin(var1[7]);
  t25849 = Cos(var1[7]);
  t26011 = Sin(var1[8]);
  t3069 = Sin(var1[5]);
  t11851 = Sin(var1[6]);
  t26066 = t25850*t25852;
  t26076 = -1.*t25849*t26011;
  t26078 = t26066 + t26076;
  t25848 = Sin(var1[4]);
  t25851 = t25849*t25850;
  t26024 = t25852*t26011;
  t26028 = t25851 + t26024;
  t4498 = -1.*t873*t3069;
  t11863 = -1.*t8157*t11851;
  t12733 = t4498 + t11863;
  t26117 = Cos(var1[3]);
  t26113 = Sin(var1[3]);
  t26080 = t8157*t873*t26078;
  t26081 = -1.*t3069*t11851*t26078;
  t26082 = t26080 + t26081;
  t26089 = -1.*t25850*t25852;
  t26091 = t25849*t26011;
  t26092 = t26089 + t26091;
  t26095 = t8157*t873*t26028;
  t26098 = -1.*t3069*t11851*t26028;
  t26099 = t26095 + t26098;
  t26118 = t8157*t873;
  t26119 = -1.*t3069*t11851;
  t26122 = t26118 + t26119;
  t26127 = t873*t3069*t26078;
  t26128 = t8157*t11851*t26078;
  t26134 = t26127 + t26128;
  t26137 = t14*t26028;
  t26138 = -1.*t25848*t26082;
  t26141 = t26137 + t26138;
  t26149 = t873*t3069*t26028;
  t26154 = t8157*t11851*t26028;
  t26155 = t26149 + t26154;
  t26173 = t14*t26092;
  t26174 = -1.*t25848*t26099;
  t26175 = t26173 + t26174;
  t26029 = t25848*t26028;
  t26083 = t14*t26082;
  t26085 = t26029 + t26083;
  t26220 = -1.*t873;
  t26221 = 1. + t26220;
  t26228 = 0.15121*t26221;
  t26229 = -1.*t25849;
  t26230 = 1. + t26229;
  t26232 = 0.28121*t26230;
  t26238 = -1.*t25850;
  t26239 = 1. + t26238;
  t26243 = 0.50321*t26239;
  t26246 = 0.19821*t25850;
  t26257 = t26243 + t26246;
  t26262 = t25849*t26257;
  t26267 = -0.305*t25852*t26011;
  t26280 = t26232 + t26262 + t26267;
  t26283 = t873*t26280;
  t26286 = t26228 + t26283;
  t26319 = 0.15121*t873;
  t26325 = -0.15121*t11851;
  t26338 = t11851*t26280;
  t26342 = t26228 + t26319 + t26325 + t26338;
  t26387 = 0.28121*t25852;
  t26388 = -1.*t26257*t25852;
  t26391 = -0.305*t25849*t26011;
  t26394 = t26387 + t26388 + t26391;
  t26403 = t8157*t26286;
  t26404 = -1.*t3069*t26342;
  t26409 = t26403 + t26404;
  t26309 = t3069*t26286;
  t26352 = t8157*t26342;
  t26367 = t26309 + t26352;
  t26400 = t25848*t26394;
  t26414 = t14*t26409;
  t26416 = t26400 + t26414;
  t26419 = t14*t26394;
  t26422 = -1.*t25848*t26409;
  t26427 = t26419 + t26422;
  t26094 = t25848*t26092;
  t26103 = t14*t26099;
  t26104 = t26094 + t26103;
  t26384 = -1.*t26122*t26367;
  t26433 = t26134*t26367;
  t26440 = t26122*t26367;
  t26446 = -1.*t26155*t26367;
  t26461 = -1.*t26134*t26367;
  t26482 = t26155*t26367;
  t26517 = -1.*t26394*t26028;
  t26522 = t26394*t26092;
  p_output1[0]=t26104*var2[0] + t12733*t14*var2[1] + t26085*var2[2];
  p_output1[1]=(t26117*t26155 - 1.*t26113*t26175)*var2[0] + (t12733*t25848*t26113 + t26117*t26122)*var2[1] + (t26117*t26134 - 1.*t26113*t26141)*var2[2];
  p_output1[2]=(t26113*t26155 + t26117*t26175)*var2[0] + (-1.*t12733*t25848*t26117 + t26113*t26122)*var2[1] + (t26113*t26134 + t26117*t26141)*var2[2];
  p_output1[3]=(t26085*(t26384 - 1.*t12733*t14*t26416 + t12733*t25848*t26427) + t12733*t14*(t26085*t26416 + t26141*t26427 + t26433))*var2[0] + (t26104*(-1.*t26085*t26416 - 1.*t26141*t26427 + t26461) + t26085*(t26104*t26416 + t26175*t26427 + t26482))*var2[1] + (t26104*(t12733*t14*t26416 - 1.*t12733*t25848*t26427 + t26440) + t12733*t14*(-1.*t26104*t26416 - 1.*t26175*t26427 + t26446))*var2[2];
  p_output1[4]=(t26134*(t26384 - 1.*t12733*t26409) + t26122*(t26028*t26394 + t26082*t26409 + t26433))*var2[0] + (t26155*(-1.*t26082*t26409 + t26461 + t26517) + t26134*(t26099*t26409 + t26482 + t26522))*var2[1] + (t26155*(t12733*t26409 + t26440) + t26122*(-1.*t26092*t26394 - 1.*t26099*t26409 + t26446))*var2[2];
  p_output1[5]=t26028*(t11851*t26286 - 1.*t26342*t873)*var2[0] + (t26028*(t11851*t26028*t26342 + t26522 + t26028*t26286*t873) + t26092*(-1.*t11851*t26078*t26342 + t26517 - 1.*t26078*t26286*t873))*var2[1] + t26092*(-1.*t11851*t26286 + t26342*t873)*var2[2];
  p_output1[6]=(-0.15121 + t26092*(-1.*t26078*t26280 + t26517) + t26028*(t26028*t26280 + t26522))*var2[1] + (0.15121*t26078 + 0.15121*t26092)*var2[2];
  p_output1[7]=(0.28121*t26011 - 0.305*t25850*t26011 - 1.*t26011*t26257)*var2[0] + (0.28121*t25850 + 0.305*Power(t26011,2) - 1.*t25850*t26257)*var2[2];
  p_output1[8]=-0.305*var2[2];
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
