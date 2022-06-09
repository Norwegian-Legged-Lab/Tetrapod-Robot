/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:57 GMT+02:00
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
  double t3167;
  double t3252;
  double t5826;
  double t9038;
  double t9079;
  double t9131;
  double t9135;
  double t9155;
  double t9146;
  double t9144;
  double t9156;
  double t9158;
  double t9163;
  double t9143;
  double t2919;
  double t2930;
  double t9151;
  double t9167;
  double t9168;
  double t9178;
  double t9173;
  double t9175;
  double t9176;
  double t9172;
  double t9179;
  double t9181;
  double t9182;
  double t9243;
  double t9245;
  double t9246;
  double t9248;
  double t9250;
  double t9251;
  double t9252;
  double t9253;
  double t9254;
  double t9242;
  double t9247;
  double t9255;
  double t9257;
  double t9238;
  double t9239;
  double t9240;
  double t9241;
  double t9258;
  double t9259;
  double t9260;
  double t9262;
  double t9263;
  double t9264;
  double t9265;
  double t9266;
  double t9267;
  double t9268;
  double t9270;
  double t9272;
  double t9274;
  double t9275;
  double t9280;
  double t9281;
  double t9282;
  double t9288;
  double t9290;
  double t9291;
  double t9296;
  double t9297;
  double t9298;
  double t9284;
  double t9285;
  double t9286;
  double t9295;
  double t9299;
  double t9300;
  double t9301;
  double t9302;
  double t9303;
  double t9271;
  double t9276;
  double t9277;
  double t9292;
  double t9305;
  double t9306;
  double t9307;
  double t9308;
  double t9319;
  double t9322;
  double t9234;
  double t9235;
  double t9236;
  double t9137;
  double t9169;
  double t9171;
  double t9310;
  double t9311;
  double t9312;
  double t9349;
  double t9354;
  double t9364;
  double t9360;
  double t9374;
  double t9369;
  double t9393;
  double t9396;
  double t9403;
  double t9406;
  t3167 = Cos(var1[8]);
  t3252 = Sin(var1[7]);
  t5826 = t3167*t3252;
  t9038 = Cos(var1[7]);
  t9079 = Sin(var1[8]);
  t9131 = -1.*t9038*t9079;
  t9135 = t5826 + t9131;
  t9155 = Cos(var1[5]);
  t9146 = Sin(var1[6]);
  t9144 = Sin(var1[5]);
  t9156 = t9038*t3167;
  t9158 = t3252*t9079;
  t9163 = t9156 + t9158;
  t9143 = Cos(var1[4]);
  t2919 = Cos(var1[6]);
  t2930 = Sin(var1[4]);
  t9151 = t9144*t9146*t9135;
  t9167 = t9155*t9163;
  t9168 = t9151 + t9167;
  t9178 = Sin(var1[3]);
  t9173 = -1.*t9155*t9146*t9135;
  t9175 = t9144*t9163;
  t9176 = t9173 + t9175;
  t9172 = Cos(var1[3]);
  t9179 = t9143*t2919*t9135;
  t9181 = -1.*t2930*t9168;
  t9182 = t9179 + t9181;
  t9243 = -0.0641*t3167;
  t9245 = -0.28*t9079;
  t9246 = t9243 + t9245;
  t9248 = -1.*t3167;
  t9250 = 1. + t9248;
  t9251 = 0.075*t9250;
  t9252 = 0.355*t3167;
  t9253 = -0.0641*t9079;
  t9254 = t9251 + t9252 + t9253;
  t9242 = -0.325*t3252;
  t9247 = t9038*t9246;
  t9255 = t3252*t9254;
  t9257 = t9242 + t9247 + t9255;
  t9238 = -1.*t2919;
  t9239 = 1. + t9238;
  t9240 = 0.1575*t9239;
  t9241 = 0.2255*t2919;
  t9258 = -1.*t9146*t9257;
  t9259 = t9240 + t9241 + t9258;
  t9260 = -1.*t9144*t9259;
  t9262 = -1.*t9038;
  t9263 = 1. + t9262;
  t9264 = 0.325*t9263;
  t9265 = -1.*t3252*t9246;
  t9266 = t9038*t9254;
  t9267 = t9264 + t9265 + t9266;
  t9268 = t9155*t9267;
  t9270 = t9260 + t9268;
  t9272 = 0.068*t9146;
  t9274 = t2919*t9257;
  t9275 = t9272 + t9274;
  t9280 = -1.*t9143*t2919*t9144;
  t9281 = t2930*t9146;
  t9282 = t9280 + t9281;
  t9288 = t9155*t9259;
  t9290 = t9144*t9267;
  t9291 = t9288 + t9290;
  t9296 = -1.*t3167*t3252;
  t9297 = t9038*t9079;
  t9298 = t9296 + t9297;
  t9284 = t9143*t9270;
  t9285 = t2930*t9275;
  t9286 = t9284 + t9285;
  t9295 = t2919*t2930*t9163;
  t9299 = t9155*t9298;
  t9300 = t9144*t9146*t9163;
  t9301 = t9299 + t9300;
  t9302 = t9143*t9301;
  t9303 = t9295 + t9302;
  t9271 = -1.*t2930*t9270;
  t9276 = t9143*t9275;
  t9277 = t9271 + t9276;
  t9292 = -1.*t9155*t2919*t9291;
  t9305 = t9144*t9298;
  t9306 = -1.*t9155*t9146*t9163;
  t9307 = t9305 + t9306;
  t9308 = t9291*t9307;
  t9319 = -1.*t9146*t9275;
  t9322 = t2919*t9275*t9163;
  t9234 = t2919*t2930*t9144;
  t9235 = t9143*t9146;
  t9236 = t9234 + t9235;
  t9137 = t2919*t2930*t9135;
  t9169 = t9143*t9168;
  t9171 = t9137 + t9169;
  t9310 = t9143*t2919*t9163;
  t9311 = -1.*t2930*t9301;
  t9312 = t9310 + t9311;
  t9349 = t9291*t9176;
  t9354 = -1.*t9291*t9307;
  t9364 = -1.*t2919*t9275*t9163;
  t9360 = t2919*t9275*t9135;
  t9374 = t9267*t9163;
  t9369 = -1.*t9267*t9298;
  t9393 = t9155*t2919*t9291;
  t9396 = -1.*t9291*t9176;
  t9403 = t9146*t9275;
  t9406 = -1.*t2919*t9275*t9135;
  p_output1[0]=t9171;
  p_output1[1]=t9172*t9176 - 1.*t9178*t9182;
  p_output1[2]=t9176*t9178 + t9172*t9182;
  p_output1[3]=(-1.*t9236*t9277 - 1.*t9282*t9286 + t9292)*t9303 + t9282*(t9286*t9303 + t9308 + t9277*t9312);
  p_output1[4]=t9307*(t2919*t9144*t9270 + t9292 + t9319) + t2919*t9155*(t9270*t9301 + t9308 + t9322);
  p_output1[5]=t2919*t9163*(-1.*t2919*t9259 + t9319) + t9146*(-1.*t9146*t9163*t9259 + t9267*t9298 + t9322);
  p_output1[6]=-0.1575*t9135 - 0.2255*t9298;
  p_output1[7]=0.325*t9079 - 1.*t3167*t9246 - 1.*t9079*t9254;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9282;
  p_output1[19]=t2919*t9155*t9172 - 1.*t9178*t9236;
  p_output1[20]=t2919*t9155*t9178 + t9172*t9236;
  p_output1[21]=t9303*(t9182*t9277 + t9171*t9286 + t9349) + t9171*(-1.*t9286*t9303 - 1.*t9277*t9312 + t9354);
  p_output1[22]=t9307*(t9168*t9270 + t9349 + t9360) + t9176*(-1.*t9270*t9301 + t9354 + t9364);
  p_output1[23]=t2919*t9135*(t9146*t9163*t9259 + t9364 + t9369) + t2919*t9163*(-1.*t9135*t9146*t9259 + t9360 + t9374);
  p_output1[24]=t9163*(-1.*t9163*t9257 + t9369) + t9298*(t9135*t9257 + t9374);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9303;
  p_output1[37]=t9172*t9307 - 1.*t9178*t9312;
  p_output1[38]=t9178*t9307 + t9172*t9312;
  p_output1[39]=t9171*(t9236*t9277 + t9282*t9286 + t9393) + t9282*(-1.*t9182*t9277 - 1.*t9171*t9286 + t9396);
  p_output1[40]=t9176*(-1.*t2919*t9144*t9270 + t9393 + t9403) + t2919*t9155*(-1.*t9168*t9270 + t9396 + t9406);
  p_output1[41]=t2919*t9135*(t2919*t9259 + t9403) + t9146*(t9135*t9146*t9259 - 1.*t9163*t9267 + t9406);
  p_output1[42]=0.068*t9163;
  p_output1[43]=-0.325*t3167 - 1.*t9079*t9246 + t3167*t9254;
  p_output1[44]=-0.28;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
