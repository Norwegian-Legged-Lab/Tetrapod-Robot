/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:57 GMT+02:00
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
  double t6250;
  double t6135;
  double t6159;
  double t6258;
  double t6279;
  double t6280;
  double t6284;
  double t6271;
  double t6291;
  double t6270;
  double t6295;
  double t6269;
  double t6235;
  double t6259;
  double t6267;
  double t3909;
  double t6290;
  double t6300;
  double t6305;
  double t6337;
  double t6319;
  double t6323;
  double t6324;
  double t6318;
  double t6338;
  double t6342;
  double t6371;
  double t6395;
  double t6399;
  double t6403;
  double t6417;
  double t6427;
  double t6431;
  double t6432;
  double t6437;
  double t6442;
  double t6443;
  double t6449;
  double t6450;
  double t6451;
  double t6452;
  double t6455;
  double t6456;
  double t6457;
  double t6458;
  double t6461;
  double t6465;
  double t6466;
  double t6467;
  double t6480;
  double t6490;
  double t6491;
  double t6496;
  double t6497;
  double t6499;
  double t6500;
  double t6503;
  double t6505;
  double t6506;
  double t6509;
  double t6462;
  double t6484;
  double t6485;
  double t6394;
  double t6406;
  double t6407;
  double t6408;
  double t6409;
  double t6412;
  double t6504;
  double t6510;
  double t6512;
  double t6514;
  double t6515;
  double t6518;
  double t6525;
  double t6529;
  double t6534;
  double t6413;
  double t6415;
  double t6416;
  double t6486;
  double t6535;
  double t6268;
  double t6306;
  double t6317;
  double t6538;
  double t6539;
  double t6540;
  double t6569;
  double t6575;
  double t6581;
  double t6585;
  double t6614;
  double t6641;
  t6250 = Cos(var1[7]);
  t6135 = Cos(var1[8]);
  t6159 = Sin(var1[7]);
  t6258 = Sin(var1[8]);
  t6279 = t6250*t6135;
  t6280 = t6159*t6258;
  t6284 = t6279 + t6280;
  t6271 = Cos(var1[6]);
  t6291 = Sin(var1[5]);
  t6270 = Cos(var1[5]);
  t6295 = Sin(var1[6]);
  t6269 = Cos(var1[4]);
  t6235 = -1.*t6135*t6159;
  t6259 = t6250*t6258;
  t6267 = t6235 + t6259;
  t3909 = Sin(var1[4]);
  t6290 = t6270*t6271*t6284;
  t6300 = -1.*t6291*t6295*t6284;
  t6305 = t6290 + t6300;
  t6337 = Sin(var1[3]);
  t6319 = t6271*t6291*t6284;
  t6323 = t6270*t6295*t6284;
  t6324 = t6319 + t6323;
  t6318 = Cos(var1[3]);
  t6338 = t6269*t6267;
  t6342 = -1.*t3909*t6305;
  t6371 = t6338 + t6342;
  t6395 = t6135*t6159;
  t6399 = -1.*t6250*t6258;
  t6403 = t6395 + t6399;
  t6417 = -1.*t6271;
  t6427 = 1. + t6417;
  t6431 = 0.15121*t6427;
  t6432 = -1.*t6250;
  t6437 = 1. + t6432;
  t6442 = 0.28121*t6437;
  t6443 = -1.*t6135;
  t6449 = 1. + t6443;
  t6450 = 0.50321*t6449;
  t6451 = 0.19821*t6135;
  t6452 = t6450 + t6451;
  t6455 = t6250*t6452;
  t6456 = -0.305*t6159*t6258;
  t6457 = t6442 + t6455 + t6456;
  t6458 = t6271*t6457;
  t6461 = t6431 + t6458;
  t6465 = 0.15121*t6271;
  t6466 = -0.15121*t6295;
  t6467 = t6295*t6457;
  t6480 = t6431 + t6465 + t6466 + t6467;
  t6490 = -1.*t6271*t6291;
  t6491 = -1.*t6270*t6295;
  t6496 = t6490 + t6491;
  t6497 = 0.28121*t6159;
  t6499 = -1.*t6452*t6159;
  t6500 = -0.305*t6250*t6258;
  t6503 = t6497 + t6499 + t6500;
  t6505 = t6270*t6461;
  t6506 = -1.*t6291*t6480;
  t6509 = t6505 + t6506;
  t6462 = t6291*t6461;
  t6484 = t6270*t6480;
  t6485 = t6462 + t6484;
  t6394 = t3909*t6284;
  t6406 = t6270*t6271*t6403;
  t6407 = -1.*t6291*t6295*t6403;
  t6408 = t6406 + t6407;
  t6409 = t6269*t6408;
  t6412 = t6394 + t6409;
  t6504 = t3909*t6503;
  t6510 = t6269*t6509;
  t6512 = t6504 + t6510;
  t6514 = t6269*t6503;
  t6515 = -1.*t3909*t6509;
  t6518 = t6514 + t6515;
  t6525 = t6271*t6291*t6403;
  t6529 = t6270*t6295*t6403;
  t6534 = t6525 + t6529;
  t6413 = t6270*t6271;
  t6415 = -1.*t6291*t6295;
  t6416 = t6413 + t6415;
  t6486 = -1.*t6416*t6485;
  t6535 = t6534*t6485;
  t6268 = t3909*t6267;
  t6306 = t6269*t6305;
  t6317 = t6268 + t6306;
  t6538 = t6269*t6284;
  t6539 = -1.*t3909*t6408;
  t6540 = t6538 + t6539;
  t6569 = -1.*t6534*t6485;
  t6575 = t6324*t6485;
  t6581 = -1.*t6503*t6284;
  t6585 = t6503*t6267;
  t6614 = t6416*t6485;
  t6641 = -1.*t6324*t6485;
  p_output1[0]=t6317;
  p_output1[1]=t6318*t6324 - 1.*t6337*t6371;
  p_output1[2]=t6324*t6337 + t6318*t6371;
  p_output1[3]=t6412*(t6486 - 1.*t6269*t6496*t6512 + t3909*t6496*t6518) + t6269*t6496*(t6412*t6512 + t6535 + t6518*t6540);
  p_output1[4]=(t6486 - 1.*t6496*t6509)*t6534 + t6416*(t6284*t6503 + t6408*t6509 + t6535);
  p_output1[5]=t6284*(t6295*t6461 - 1.*t6271*t6480);
  p_output1[6]=0;
  p_output1[7]=0.28121*t6258 - 0.305*t6135*t6258 - 1.*t6258*t6452;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t6269*t6496;
  p_output1[19]=t6318*t6416 + t3909*t6337*t6496;
  p_output1[20]=t6337*t6416 - 1.*t3909*t6318*t6496;
  p_output1[21]=t6317*(-1.*t6412*t6512 - 1.*t6518*t6540 + t6569) + t6412*(t6317*t6512 + t6371*t6518 + t6575);
  p_output1[22]=t6324*(-1.*t6408*t6509 + t6569 + t6581) + t6534*(t6305*t6509 + t6575 + t6585);
  p_output1[23]=t6267*(-1.*t6271*t6403*t6461 - 1.*t6295*t6403*t6480 + t6581) + t6284*(t6271*t6284*t6461 + t6284*t6295*t6480 + t6585);
  p_output1[24]=-0.15121 + t6267*(-1.*t6403*t6457 + t6581) + t6284*(t6284*t6457 + t6585);
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
  p_output1[36]=t6412;
  p_output1[37]=t6318*t6534 - 1.*t6337*t6540;
  p_output1[38]=t6337*t6534 + t6318*t6540;
  p_output1[39]=t6317*(t6269*t6496*t6512 - 1.*t3909*t6496*t6518 + t6614) + t6269*t6496*(-1.*t6317*t6512 - 1.*t6371*t6518 + t6641);
  p_output1[40]=t6324*(t6496*t6509 + t6614) + t6416*(-1.*t6267*t6503 - 1.*t6305*t6509 + t6641);
  p_output1[41]=t6267*(-1.*t6295*t6461 + t6271*t6480);
  p_output1[42]=0.15121*t6267 + 0.15121*t6403;
  p_output1[43]=0.28121*t6135 + 0.305*Power(t6258,2) - 1.*t6135*t6452;
  p_output1[44]=-0.305;
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

#include "fFlFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
