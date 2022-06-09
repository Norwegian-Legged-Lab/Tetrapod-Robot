/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:44 GMT+02:00
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
  double t3102;
  double t2749;
  double t3103;
  double t5071;
  double t3488;
  double t4612;
  double t5173;
  double t2422;
  double t4780;
  double t5208;
  double t5209;
  double t3114;
  double t5340;
  double t5348;
  double t5350;
  double t5243;
  double t9071;
  double t9073;
  double t5371;
  double t5389;
  double t5393;
  double t9050;
  double t9056;
  double t9060;
  double t9061;
  double t9063;
  double t9064;
  double t9074;
  double t9075;
  double t9076;
  double t9133;
  double t9135;
  double t9136;
  double t9138;
  double t9139;
  double t9141;
  double t9147;
  double t9149;
  double t9151;
  double t9154;
  double t9155;
  double t9156;
  double t5240;
  double t5406;
  double t5481;
  double t9185;
  double t9186;
  double t9187;
  double t9189;
  double t9190;
  double t9192;
  double t9193;
  double t9195;
  double t9196;
  double t3081;
  double t3133;
  double t3155;
  double t9183;
  double t9188;
  double t9197;
  double t9198;
  double t9202;
  double t9203;
  double t9204;
  double t9205;
  double t9206;
  double t9207;
  double t9178;
  double t9179;
  double t9181;
  double t9182;
  double t9199;
  double t9200;
  double t9211;
  double t9212;
  double t9213;
  double t9215;
  double t9216;
  double t9217;
  double t9201;
  double t9208;
  double t9209;
  double t9214;
  double t9218;
  double t9220;
  double t9222;
  double t9223;
  double t9225;
  double t9031;
  double t9066;
  double t9067;
  double t9210;
  double t9229;
  double t9236;
  double t9241;
  double t9248;
  double t9253;
  double t9281;
  double t9285;
  double t9261;
  double t9265;
  double t9275;
  double t9271;
  double t9315;
  double t9310;
  t3102 = Cos(var1[15]);
  t2749 = Sin(var1[4]);
  t3103 = Cos(var1[4]);
  t5071 = Cos(var1[16]);
  t3488 = Cos(var1[17]);
  t4612 = Sin(var1[16]);
  t5173 = Sin(var1[17]);
  t2422 = Sin(var1[15]);
  t4780 = t3488*t4612;
  t5208 = -1.*t5071*t5173;
  t5209 = t4780 + t5208;
  t3114 = Sin(var1[5]);
  t5340 = t5071*t3488;
  t5348 = t4612*t5173;
  t5350 = t5340 + t5348;
  t5243 = Cos(var1[5]);
  t9071 = Cos(var1[3]);
  t9073 = Sin(var1[3]);
  t5371 = t5243*t5350;
  t5389 = t2422*t5209*t3114;
  t5393 = t5371 + t5389;
  t9050 = -1.*t3488*t4612;
  t9056 = t5071*t5173;
  t9060 = t9050 + t9056;
  t9061 = t5243*t9060;
  t9063 = t2422*t5350*t3114;
  t9064 = t9061 + t9063;
  t9074 = t3103*t2422;
  t9075 = t3102*t2749*t3114;
  t9076 = t9074 + t9075;
  t9133 = -1.*t5243*t2422*t5209;
  t9135 = t5350*t3114;
  t9136 = t9133 + t9135;
  t9138 = t3102*t3103*t5209;
  t9139 = -1.*t2749*t5393;
  t9141 = t9138 + t9139;
  t9147 = -1.*t5243*t2422*t5350;
  t9149 = t9060*t3114;
  t9151 = t9147 + t9149;
  t9154 = t3102*t3103*t5350;
  t9155 = -1.*t2749*t9064;
  t9156 = t9154 + t9155;
  t5240 = t3102*t5209*t2749;
  t5406 = t3103*t5393;
  t5481 = t5240 + t5406;
  t9185 = -0.0641*t3488;
  t9186 = -0.28*t5173;
  t9187 = t9185 + t9186;
  t9189 = -1.*t3488;
  t9190 = 1. + t9189;
  t9192 = -0.575*t9190;
  t9193 = -0.295*t3488;
  t9195 = -0.0641*t5173;
  t9196 = t9192 + t9193 + t9195;
  t3081 = t2422*t2749;
  t3133 = -1.*t3102*t3103*t3114;
  t3155 = t3081 + t3133;
  t9183 = 0.325*t4612;
  t9188 = t5071*t9187;
  t9197 = t4612*t9196;
  t9198 = t9183 + t9188 + t9197;
  t9202 = -1.*t5071;
  t9203 = 1. + t9202;
  t9204 = -0.325*t9203;
  t9205 = -1.*t4612*t9187;
  t9206 = t5071*t9196;
  t9207 = t9204 + t9205 + t9206;
  t9178 = -1.*t3102;
  t9179 = 1. + t9178;
  t9181 = -0.1575*t9179;
  t9182 = -0.2255*t3102;
  t9199 = -1.*t2422*t9198;
  t9200 = t9181 + t9182 + t9199;
  t9211 = -0.068*t2422;
  t9212 = t3102*t9198;
  t9213 = t9211 + t9212;
  t9215 = t5243*t9207;
  t9216 = -1.*t9200*t3114;
  t9217 = t9215 + t9216;
  t9201 = t5243*t9200;
  t9208 = t9207*t3114;
  t9209 = t9201 + t9208;
  t9214 = t9213*t2749;
  t9218 = t3103*t9217;
  t9220 = t9214 + t9218;
  t9222 = t3103*t9213;
  t9223 = -1.*t2749*t9217;
  t9225 = t9222 + t9223;
  t9031 = t3102*t5350*t2749;
  t9066 = t3103*t9064;
  t9067 = t9031 + t9066;
  t9210 = t3102*t5243*t9209;
  t9229 = -1.*t9209*t9136;
  t9236 = t9209*t9136;
  t9241 = -1.*t9209*t9151;
  t9248 = -1.*t3102*t5243*t9209;
  t9253 = t9209*t9151;
  t9281 = -1.*t2422*t9213;
  t9285 = t3102*t9213*t5350;
  t9261 = t2422*t9213;
  t9265 = -1.*t3102*t9213*t5209;
  t9275 = -1.*t3102*t9213*t5350;
  t9271 = t3102*t9213*t5209;
  t9315 = t9207*t5350;
  t9310 = -1.*t9207*t9060;
  p_output1[0]=t5481*var2[0] + t3155*var2[1] + t9067*var2[2];
  p_output1[1]=(t9071*t9136 - 1.*t9073*t9141)*var2[0] + (t3102*t5243*t9071 - 1.*t9073*t9076)*var2[1] + (t9071*t9151 - 1.*t9073*t9156)*var2[2];
  p_output1[2]=(t9073*t9136 + t9071*t9141)*var2[0] + (t3102*t5243*t9073 + t9071*t9076)*var2[1] + (t9073*t9151 + t9071*t9156)*var2[2];
  p_output1[3]=(t9067*(-1.*t3155*t9220 - 1.*t9076*t9225 + t9248) + t3155*(t9067*t9220 + t9156*t9225 + t9253))*var2[0] + (t9067*(t5481*t9220 + t9141*t9225 + t9236) + t5481*(-1.*t9067*t9220 - 1.*t9156*t9225 + t9241))*var2[1] + (t5481*(t9210 + t3155*t9220 + t9076*t9225) + t3155*(-1.*t5481*t9220 - 1.*t9141*t9225 + t9229))*var2[2];
  p_output1[4]=(t9151*(t3102*t3114*t9217 + t9248 + t9281) + t3102*t5243*(t9064*t9217 + t9253 + t9285))*var2[0] + (t9151*(t5393*t9217 + t9236 + t9271) + t9136*(-1.*t9064*t9217 + t9241 + t9275))*var2[1] + (t9136*(t9210 - 1.*t3102*t3114*t9217 + t9261) + t3102*t5243*(-1.*t5393*t9217 + t9229 + t9265))*var2[2];
  p_output1[5]=(t3102*t5350*(-1.*t3102*t9200 + t9281) + t2422*(-1.*t2422*t5350*t9200 + t9060*t9207 + t9285))*var2[0] + (t3102*t5209*(t2422*t5350*t9200 + t9275 + t9310) + t3102*t5350*(-1.*t2422*t5209*t9200 + t9271 + t9315))*var2[1] + (t3102*t5209*(t3102*t9200 + t9261) + t2422*(t2422*t5209*t9200 - 1.*t5350*t9207 + t9265))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t5209 + 0.2255*t9060)*var2[0] + (t5350*(-1.*t5350*t9198 + t9310) + t9060*(t5209*t9198 + t9315))*var2[1] - 0.068*t5350*var2[2];
  p_output1[16]=(-0.325*t5173 - 1.*t3488*t9187 - 1.*t5173*t9196)*var2[0] + (0.325*t3488 - 1.*t5173*t9187 + t3488*t9196)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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
