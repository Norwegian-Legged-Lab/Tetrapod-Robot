/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:17 GMT+02:00
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
  double t6133;
  double t6122;
  double t6135;
  double t6161;
  double t6153;
  double t6155;
  double t6166;
  double t6095;
  double t6156;
  double t6167;
  double t6168;
  double t6141;
  double t6171;
  double t6172;
  double t6173;
  double t6170;
  double t6237;
  double t6240;
  double t6174;
  double t6175;
  double t6176;
  double t6182;
  double t6183;
  double t6225;
  double t6229;
  double t6230;
  double t6231;
  double t6241;
  double t6242;
  double t6243;
  double t6248;
  double t6249;
  double t6250;
  double t6253;
  double t6254;
  double t6255;
  double t6260;
  double t6261;
  double t6262;
  double t6265;
  double t6266;
  double t6267;
  double t6169;
  double t6177;
  double t6178;
  double t6295;
  double t6296;
  double t6297;
  double t6299;
  double t6300;
  double t6301;
  double t6302;
  double t6303;
  double t6304;
  double t6132;
  double t6142;
  double t6143;
  double t6294;
  double t6298;
  double t6305;
  double t6306;
  double t6310;
  double t6311;
  double t6312;
  double t6314;
  double t6315;
  double t6316;
  double t6290;
  double t6291;
  double t6292;
  double t6293;
  double t6307;
  double t6308;
  double t6321;
  double t6322;
  double t6323;
  double t6325;
  double t6326;
  double t6327;
  double t6309;
  double t6317;
  double t6319;
  double t6324;
  double t6328;
  double t6329;
  double t6331;
  double t6332;
  double t6333;
  double t6180;
  double t6233;
  double t6234;
  double t6320;
  double t6337;
  double t6344;
  double t6349;
  double t6356;
  double t6361;
  double t6389;
  double t6393;
  double t6369;
  double t6373;
  double t6383;
  double t6379;
  double t6423;
  double t6418;
  t6133 = Cos(var1[15]);
  t6122 = Sin(var1[4]);
  t6135 = Cos(var1[4]);
  t6161 = Cos(var1[16]);
  t6153 = Cos(var1[17]);
  t6155 = Sin(var1[16]);
  t6166 = Sin(var1[17]);
  t6095 = Sin(var1[15]);
  t6156 = t6153*t6155;
  t6167 = -1.*t6161*t6166;
  t6168 = t6156 + t6167;
  t6141 = Sin(var1[5]);
  t6171 = t6161*t6153;
  t6172 = t6155*t6166;
  t6173 = t6171 + t6172;
  t6170 = Cos(var1[5]);
  t6237 = Cos(var1[3]);
  t6240 = Sin(var1[3]);
  t6174 = t6170*t6173;
  t6175 = t6095*t6168*t6141;
  t6176 = t6174 + t6175;
  t6182 = -1.*t6153*t6155;
  t6183 = t6161*t6166;
  t6225 = t6182 + t6183;
  t6229 = t6170*t6225;
  t6230 = t6095*t6173*t6141;
  t6231 = t6229 + t6230;
  t6241 = t6135*t6095;
  t6242 = t6133*t6122*t6141;
  t6243 = t6241 + t6242;
  t6248 = -1.*t6170*t6095*t6168;
  t6249 = t6173*t6141;
  t6250 = t6248 + t6249;
  t6253 = t6133*t6135*t6168;
  t6254 = -1.*t6122*t6176;
  t6255 = t6253 + t6254;
  t6260 = -1.*t6170*t6095*t6173;
  t6261 = t6225*t6141;
  t6262 = t6260 + t6261;
  t6265 = t6133*t6135*t6173;
  t6266 = -1.*t6122*t6231;
  t6267 = t6265 + t6266;
  t6169 = t6133*t6168*t6122;
  t6177 = t6135*t6176;
  t6178 = t6169 + t6177;
  t6295 = -0.0641*t6153;
  t6296 = -0.28*t6166;
  t6297 = t6295 + t6296;
  t6299 = -1.*t6153;
  t6300 = 1. + t6299;
  t6301 = -0.575*t6300;
  t6302 = -0.295*t6153;
  t6303 = -0.0641*t6166;
  t6304 = t6301 + t6302 + t6303;
  t6132 = t6095*t6122;
  t6142 = -1.*t6133*t6135*t6141;
  t6143 = t6132 + t6142;
  t6294 = 0.325*t6155;
  t6298 = t6161*t6297;
  t6305 = t6155*t6304;
  t6306 = t6294 + t6298 + t6305;
  t6310 = -1.*t6161;
  t6311 = 1. + t6310;
  t6312 = -0.325*t6311;
  t6314 = -1.*t6155*t6297;
  t6315 = t6161*t6304;
  t6316 = t6312 + t6314 + t6315;
  t6290 = -1.*t6133;
  t6291 = 1. + t6290;
  t6292 = -0.1575*t6291;
  t6293 = -0.2255*t6133;
  t6307 = -1.*t6095*t6306;
  t6308 = t6292 + t6293 + t6307;
  t6321 = -0.068*t6095;
  t6322 = t6133*t6306;
  t6323 = t6321 + t6322;
  t6325 = t6170*t6316;
  t6326 = -1.*t6308*t6141;
  t6327 = t6325 + t6326;
  t6309 = t6170*t6308;
  t6317 = t6316*t6141;
  t6319 = t6309 + t6317;
  t6324 = t6323*t6122;
  t6328 = t6135*t6327;
  t6329 = t6324 + t6328;
  t6331 = t6135*t6323;
  t6332 = -1.*t6122*t6327;
  t6333 = t6331 + t6332;
  t6180 = t6133*t6173*t6122;
  t6233 = t6135*t6231;
  t6234 = t6180 + t6233;
  t6320 = t6133*t6170*t6319;
  t6337 = -1.*t6319*t6250;
  t6344 = t6319*t6250;
  t6349 = -1.*t6319*t6262;
  t6356 = -1.*t6133*t6170*t6319;
  t6361 = t6319*t6262;
  t6389 = -1.*t6095*t6323;
  t6393 = t6133*t6323*t6173;
  t6369 = t6095*t6323;
  t6373 = -1.*t6133*t6323*t6168;
  t6383 = -1.*t6133*t6323*t6173;
  t6379 = t6133*t6323*t6168;
  t6423 = t6316*t6173;
  t6418 = -1.*t6316*t6225;
  p_output1[0]=t6178*var2[0] + t6143*var2[1] + t6234*var2[2];
  p_output1[1]=(t6237*t6250 - 1.*t6240*t6255)*var2[0] + (t6133*t6170*t6237 - 1.*t6240*t6243)*var2[1] + (t6237*t6262 - 1.*t6240*t6267)*var2[2];
  p_output1[2]=(t6240*t6250 + t6237*t6255)*var2[0] + (t6133*t6170*t6240 + t6237*t6243)*var2[1] + (t6240*t6262 + t6237*t6267)*var2[2];
  p_output1[3]=(t6234*(-1.*t6143*t6329 - 1.*t6243*t6333 + t6356) + t6143*(t6234*t6329 + t6267*t6333 + t6361))*var2[0] + (t6234*(t6178*t6329 + t6255*t6333 + t6344) + t6178*(-1.*t6234*t6329 - 1.*t6267*t6333 + t6349))*var2[1] + (t6178*(t6320 + t6143*t6329 + t6243*t6333) + t6143*(-1.*t6178*t6329 - 1.*t6255*t6333 + t6337))*var2[2];
  p_output1[4]=(t6262*(t6133*t6141*t6327 + t6356 + t6389) + t6133*t6170*(t6231*t6327 + t6361 + t6393))*var2[0] + (t6262*(t6176*t6327 + t6344 + t6379) + t6250*(-1.*t6231*t6327 + t6349 + t6383))*var2[1] + (t6250*(t6320 - 1.*t6133*t6141*t6327 + t6369) + t6133*t6170*(-1.*t6176*t6327 + t6337 + t6373))*var2[2];
  p_output1[5]=(t6133*t6173*(-1.*t6133*t6308 + t6389) + t6095*(-1.*t6095*t6173*t6308 + t6225*t6316 + t6393))*var2[0] + (t6133*t6168*(t6095*t6173*t6308 + t6383 + t6418) + t6133*t6173*(-1.*t6095*t6168*t6308 + t6379 + t6423))*var2[1] + (t6133*t6168*(t6133*t6308 + t6369) + t6095*(t6095*t6168*t6308 - 1.*t6173*t6316 + t6373))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t6168 + 0.2255*t6225)*var2[0] + (t6173*(-1.*t6173*t6306 + t6418) + t6225*(t6168*t6306 + t6423))*var2[1] - 0.068*t6173*var2[2];
  p_output1[16]=(-0.325*t6166 - 1.*t6153*t6297 - 1.*t6166*t6304)*var2[0] + (0.325*t6153 - 1.*t6166*t6297 + t6153*t6304)*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
