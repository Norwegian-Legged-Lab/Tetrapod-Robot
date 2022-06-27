/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:31 GMT+02:00
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
  double t5244;
  double t5291;
  double t5275;
  double t5314;
  double t5319;
  double t5313;
  double t5323;
  double t5285;
  double t5328;
  double t5329;
  double t5330;
  double t5298;
  double t5326;
  double t5348;
  double t5349;
  double t5412;
  double t5289;
  double t5300;
  double t5301;
  double t5427;
  double t5424;
  double t5315;
  double t5324;
  double t5325;
  double t5331;
  double t5332;
  double t5333;
  double t5416;
  double t5417;
  double t5418;
  double t5429;
  double t5430;
  double t5431;
  double t5438;
  double t5439;
  double t5440;
  double t5443;
  double t5444;
  double t5445;
  double t5450;
  double t5451;
  double t5452;
  double t5454;
  double t5455;
  double t5456;
  double t5327;
  double t5334;
  double t5335;
  double t5476;
  double t5479;
  double t5480;
  double t5483;
  double t5484;
  double t5485;
  double t5486;
  double t5487;
  double t5488;
  double t5489;
  double t5490;
  double t5491;
  double t5492;
  double t5493;
  double t5497;
  double t5498;
  double t5481;
  double t5482;
  double t5494;
  double t5495;
  double t5502;
  double t5503;
  double t5504;
  double t5505;
  double t5507;
  double t5508;
  double t5509;
  double t5496;
  double t5499;
  double t5500;
  double t5506;
  double t5510;
  double t5511;
  double t5513;
  double t5514;
  double t5515;
  double t5337;
  double t5420;
  double t5421;
  double t5501;
  double t5519;
  double t5526;
  double t5531;
  double t5538;
  double t5543;
  double t5569;
  double t5573;
  t5244 = Cos(var1[4]);
  t5291 = Cos(var1[15]);
  t5275 = Cos(var1[5]);
  t5314 = Cos(var1[17]);
  t5319 = Sin(var1[16]);
  t5313 = Cos(var1[16]);
  t5323 = Sin(var1[17]);
  t5285 = Sin(var1[15]);
  t5328 = -1.*t5314*t5319;
  t5329 = t5313*t5323;
  t5330 = t5328 + t5329;
  t5298 = Sin(var1[5]);
  t5326 = Sin(var1[4]);
  t5348 = -1.*t5313*t5314;
  t5349 = -1.*t5319*t5323;
  t5412 = t5348 + t5349;
  t5289 = t5275*t5285;
  t5300 = t5291*t5298;
  t5301 = t5289 + t5300;
  t5427 = Cos(var1[3]);
  t5424 = Sin(var1[3]);
  t5315 = t5313*t5314;
  t5324 = t5319*t5323;
  t5325 = t5315 + t5324;
  t5331 = t5291*t5275*t5330;
  t5332 = -1.*t5285*t5330*t5298;
  t5333 = t5331 + t5332;
  t5416 = t5291*t5275*t5412;
  t5417 = -1.*t5285*t5412*t5298;
  t5418 = t5416 + t5417;
  t5429 = -1.*t5291*t5275;
  t5430 = t5285*t5298;
  t5431 = t5429 + t5430;
  t5438 = t5275*t5285*t5330;
  t5439 = t5291*t5330*t5298;
  t5440 = t5438 + t5439;
  t5443 = t5244*t5325;
  t5444 = -1.*t5326*t5333;
  t5445 = t5443 + t5444;
  t5450 = t5275*t5285*t5412;
  t5451 = t5291*t5412*t5298;
  t5452 = t5450 + t5451;
  t5454 = t5244*t5330;
  t5455 = -1.*t5326*t5418;
  t5456 = t5454 + t5455;
  t5327 = t5325*t5326;
  t5334 = t5244*t5333;
  t5335 = t5327 + t5334;
  t5476 = -1.*t5291;
  t5479 = 1. + t5476;
  t5480 = -0.15121*t5479;
  t5483 = -1.*t5313;
  t5484 = 1. + t5483;
  t5485 = -0.28121*t5484;
  t5486 = -1.*t5314;
  t5487 = 1. + t5486;
  t5488 = -0.50321*t5487;
  t5489 = -0.19821*t5314;
  t5490 = t5488 + t5489;
  t5491 = t5313*t5490;
  t5492 = 0.305*t5319*t5323;
  t5493 = t5485 + t5491 + t5492;
  t5497 = t5291*t5493;
  t5498 = t5480 + t5497;
  t5481 = -0.15121*t5291;
  t5482 = 0.15121*t5285;
  t5494 = t5285*t5493;
  t5495 = t5480 + t5481 + t5482 + t5494;
  t5502 = 0.28121*t5319;
  t5503 = t5490*t5319;
  t5504 = -0.305*t5313*t5323;
  t5505 = t5502 + t5503 + t5504;
  t5507 = t5275*t5498;
  t5508 = -1.*t5495*t5298;
  t5509 = t5507 + t5508;
  t5496 = t5275*t5495;
  t5499 = t5498*t5298;
  t5500 = t5496 + t5499;
  t5506 = t5505*t5326;
  t5510 = t5244*t5509;
  t5511 = t5506 + t5510;
  t5513 = t5244*t5505;
  t5514 = -1.*t5326*t5509;
  t5515 = t5513 + t5514;
  t5337 = t5330*t5326;
  t5420 = t5244*t5418;
  t5421 = t5337 + t5420;
  t5501 = -1.*t5431*t5500;
  t5519 = t5440*t5500;
  t5526 = t5431*t5500;
  t5531 = -1.*t5452*t5500;
  t5538 = -1.*t5440*t5500;
  t5543 = t5452*t5500;
  t5569 = -1.*t5505*t5325;
  t5573 = t5505*t5330;
  p_output1[0]=t5421*var2[0] + t5244*t5301*var2[1] + t5335*var2[2];
  p_output1[1]=(t5427*t5452 - 1.*t5424*t5456)*var2[0] + (t5301*t5326*t5424 + t5427*t5431)*var2[1] + (t5427*t5440 - 1.*t5424*t5445)*var2[2];
  p_output1[2]=(t5424*t5452 + t5427*t5456)*var2[0] + (-1.*t5301*t5326*t5427 + t5424*t5431)*var2[1] + (t5424*t5440 + t5427*t5445)*var2[2];
  p_output1[3]=(t5335*(t5501 - 1.*t5244*t5301*t5511 + t5301*t5326*t5515) + t5244*t5301*(t5335*t5511 + t5445*t5515 + t5519))*var2[0] + (t5421*(-1.*t5335*t5511 - 1.*t5445*t5515 + t5538) + t5335*(t5421*t5511 + t5456*t5515 + t5543))*var2[1] + (t5421*(t5244*t5301*t5511 - 1.*t5301*t5326*t5515 + t5526) + t5244*t5301*(-1.*t5421*t5511 - 1.*t5456*t5515 + t5531))*var2[2];
  p_output1[4]=(t5440*(t5501 - 1.*t5301*t5509) + t5431*(t5325*t5505 + t5333*t5509 + t5519))*var2[0] + (t5452*(-1.*t5333*t5509 + t5538 + t5569) + t5440*(t5418*t5509 + t5543 + t5573))*var2[1] + (t5452*(t5301*t5509 + t5526) + t5431*(-1.*t5330*t5505 - 1.*t5418*t5509 + t5531))*var2[2];
  p_output1[5]=t5325*(t5291*t5495 - 1.*t5285*t5498)*var2[0] + (t5330*(-1.*t5285*t5330*t5495 - 1.*t5291*t5330*t5498 + t5569) + t5325*(t5285*t5412*t5495 + t5291*t5412*t5498 + t5573))*var2[1] + t5330*(-1.*t5291*t5495 + t5285*t5498)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t5325 - 0.15121*t5412)*var2[0] + (-0.15121 + t5330*(-1.*t5330*t5493 + t5569) + t5325*(t5412*t5493 + t5573))*var2[1];
  p_output1[16]=(0.28121*t5323 - 0.305*t5314*t5323 + t5323*t5490)*var2[0] + (0.28121*t5314 + 0.305*Power(t5323,2) + t5314*t5490)*var2[2];
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

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
