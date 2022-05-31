/*
 * Automatically Generated from Mathematica.
 * Fri 27 May 2022 16:03:42 GMT+02:00
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
  double t6150;
  double t6158;
  double t6155;
  double t6227;
  double t6232;
  double t6222;
  double t6233;
  double t6156;
  double t6238;
  double t6239;
  double t6240;
  double t6159;
  double t6236;
  double t6231;
  double t6234;
  double t6235;
  double t6157;
  double t6216;
  double t6220;
  double t6260;
  double t6258;
  double t6241;
  double t6242;
  double t6243;
  double t6247;
  double t6248;
  double t6249;
  double t6251;
  double t6252;
  double t6253;
  double t6262;
  double t6263;
  double t6264;
  double t6269;
  double t6270;
  double t6271;
  double t6274;
  double t6275;
  double t6277;
  double t6281;
  double t6282;
  double t6283;
  double t6285;
  double t6286;
  double t6287;
  double t6237;
  double t6244;
  double t6245;
  double t6306;
  double t6307;
  double t6312;
  double t6313;
  double t6314;
  double t6315;
  double t6316;
  double t6317;
  double t6318;
  double t6319;
  double t6320;
  double t6321;
  double t6322;
  double t6326;
  double t6327;
  double t6328;
  double t6309;
  double t6310;
  double t6311;
  double t6323;
  double t6324;
  double t6332;
  double t6333;
  double t6334;
  double t6335;
  double t6337;
  double t6338;
  double t6339;
  double t6325;
  double t6329;
  double t6330;
  double t6336;
  double t6340;
  double t6341;
  double t6343;
  double t6344;
  double t6345;
  double t6250;
  double t6254;
  double t6255;
  double t6331;
  double t6349;
  double t6356;
  double t6361;
  double t6368;
  double t6373;
  double t6399;
  double t6403;
  t6150 = Cos(var1[4]);
  t6158 = Cos(var1[12]);
  t6155 = Cos(var1[5]);
  t6227 = Cos(var1[14]);
  t6232 = Sin(var1[13]);
  t6222 = Cos(var1[13]);
  t6233 = Sin(var1[14]);
  t6156 = Sin(var1[12]);
  t6238 = t6227*t6232;
  t6239 = -1.*t6222*t6233;
  t6240 = t6238 + t6239;
  t6159 = Sin(var1[5]);
  t6236 = Sin(var1[4]);
  t6231 = t6222*t6227;
  t6234 = t6232*t6233;
  t6235 = t6231 + t6234;
  t6157 = -1.*t6155*t6156;
  t6216 = -1.*t6158*t6159;
  t6220 = t6157 + t6216;
  t6260 = Cos(var1[3]);
  t6258 = Sin(var1[3]);
  t6241 = t6158*t6155*t6240;
  t6242 = -1.*t6156*t6240*t6159;
  t6243 = t6241 + t6242;
  t6247 = -1.*t6227*t6232;
  t6248 = t6222*t6233;
  t6249 = t6247 + t6248;
  t6251 = t6158*t6155*t6235;
  t6252 = -1.*t6156*t6235*t6159;
  t6253 = t6251 + t6252;
  t6262 = t6158*t6155;
  t6263 = -1.*t6156*t6159;
  t6264 = t6262 + t6263;
  t6269 = t6155*t6156*t6240;
  t6270 = t6158*t6240*t6159;
  t6271 = t6269 + t6270;
  t6274 = t6150*t6235;
  t6275 = -1.*t6236*t6243;
  t6277 = t6274 + t6275;
  t6281 = t6155*t6156*t6235;
  t6282 = t6158*t6235*t6159;
  t6283 = t6281 + t6282;
  t6285 = t6150*t6249;
  t6286 = -1.*t6236*t6253;
  t6287 = t6285 + t6286;
  t6237 = t6235*t6236;
  t6244 = t6150*t6243;
  t6245 = t6237 + t6244;
  t6306 = -1.*t6158;
  t6307 = 1. + t6306;
  t6312 = -1.*t6222;
  t6313 = 1. + t6312;
  t6314 = 0.28121*t6313;
  t6315 = -1.*t6227;
  t6316 = 1. + t6315;
  t6317 = 0.50321*t6316;
  t6318 = 0.19821*t6227;
  t6319 = t6317 + t6318;
  t6320 = t6222*t6319;
  t6321 = -0.305*t6232*t6233;
  t6322 = t6314 + t6320 + t6321;
  t6326 = 0.15121*t6307;
  t6327 = t6158*t6322;
  t6328 = t6326 + t6327;
  t6309 = -0.15121*t6307;
  t6310 = -0.15121*t6158;
  t6311 = -0.15121*t6156;
  t6323 = t6156*t6322;
  t6324 = t6309 + t6310 + t6311 + t6323;
  t6332 = 0.28121*t6232;
  t6333 = -1.*t6319*t6232;
  t6334 = -0.305*t6222*t6233;
  t6335 = t6332 + t6333 + t6334;
  t6337 = t6155*t6328;
  t6338 = -1.*t6324*t6159;
  t6339 = t6337 + t6338;
  t6325 = t6155*t6324;
  t6329 = t6328*t6159;
  t6330 = t6325 + t6329;
  t6336 = t6335*t6236;
  t6340 = t6150*t6339;
  t6341 = t6336 + t6340;
  t6343 = t6150*t6335;
  t6344 = -1.*t6236*t6339;
  t6345 = t6343 + t6344;
  t6250 = t6249*t6236;
  t6254 = t6150*t6253;
  t6255 = t6250 + t6254;
  t6331 = -1.*t6264*t6330;
  t6349 = t6271*t6330;
  t6356 = t6264*t6330;
  t6361 = -1.*t6283*t6330;
  t6368 = -1.*t6271*t6330;
  t6373 = t6283*t6330;
  t6399 = -1.*t6335*t6235;
  t6403 = t6335*t6249;
  p_output1[0]=t6255*var2[0] + t6150*t6220*var2[1] + t6245*var2[2];
  p_output1[1]=(t6260*t6283 - 1.*t6258*t6287)*var2[0] + (t6220*t6236*t6258 + t6260*t6264)*var2[1] + (t6260*t6271 - 1.*t6258*t6277)*var2[2];
  p_output1[2]=(t6258*t6283 + t6260*t6287)*var2[0] + (-1.*t6220*t6236*t6260 + t6258*t6264)*var2[1] + (t6258*t6271 + t6260*t6277)*var2[2];
  p_output1[3]=(t6245*(t6331 - 1.*t6150*t6220*t6341 + t6220*t6236*t6345) + t6150*t6220*(t6245*t6341 + t6277*t6345 + t6349))*var2[0] + (t6255*(-1.*t6245*t6341 - 1.*t6277*t6345 + t6368) + t6245*(t6255*t6341 + t6287*t6345 + t6373))*var2[1] + (t6255*(t6150*t6220*t6341 - 1.*t6220*t6236*t6345 + t6356) + t6150*t6220*(-1.*t6255*t6341 - 1.*t6287*t6345 + t6361))*var2[2];
  p_output1[4]=(t6271*(t6331 - 1.*t6220*t6339) + t6264*(t6235*t6335 + t6243*t6339 + t6349))*var2[0] + (t6283*(-1.*t6243*t6339 + t6368 + t6399) + t6271*(t6253*t6339 + t6373 + t6403))*var2[1] + (t6283*(t6220*t6339 + t6356) + t6264*(-1.*t6249*t6335 - 1.*t6253*t6339 + t6361))*var2[2];
  p_output1[5]=t6235*(-1.*t6158*t6324 + t6156*t6328)*var2[0] + (t6249*(-1.*t6156*t6240*t6324 - 1.*t6158*t6240*t6328 + t6399) + t6235*(t6156*t6235*t6324 + t6158*t6235*t6328 + t6403))*var2[1] + t6249*(t6158*t6324 - 1.*t6156*t6328)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t6249*(-1.*t6240*t6322 + t6399) + t6235*(t6235*t6322 + t6403))*var2[1] + (-0.15121*t6240 - 0.15121*t6249)*var2[2];
  p_output1[13]=(0.28121*t6233 - 0.305*t6227*t6233 - 1.*t6233*t6319)*var2[0] + (0.28121*t6227 + 0.305*Power(t6233,2) - 1.*t6227*t6319)*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
