/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:18 GMT+02:00
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
  double t6338;
  double t6334;
  double t6335;
  double t6339;
  double t6336;
  double t6400;
  double t6407;
  double t6419;
  double t6426;
  double t6420;
  double t6421;
  double t6422;
  double t6427;
  double t6285;
  double t6414;
  double t6408;
  double t6425;
  double t6429;
  double t6430;
  double t6438;
  double t6434;
  double t6435;
  double t6436;
  double t6433;
  double t6439;
  double t6440;
  double t6441;
  double t6463;
  double t6464;
  double t6466;
  double t6468;
  double t6470;
  double t6471;
  double t6472;
  double t6473;
  double t6475;
  double t6462;
  double t6467;
  double t6476;
  double t6477;
  double t6482;
  double t6483;
  double t6484;
  double t6485;
  double t6486;
  double t6487;
  double t6457;
  double t6458;
  double t6460;
  double t6461;
  double t6478;
  double t6480;
  double t6494;
  double t6495;
  double t6497;
  double t6499;
  double t6500;
  double t6502;
  double t6491;
  double t6492;
  double t6493;
  double t6481;
  double t6488;
  double t6489;
  double t6448;
  double t6449;
  double t6450;
  double t6498;
  double t6503;
  double t6504;
  double t6447;
  double t6451;
  double t6452;
  double t6453;
  double t6455;
  double t6456;
  double t6510;
  double t6512;
  double t6513;
  double t6517;
  double t6518;
  double t6519;
  double t6490;
  double t6520;
  double t6529;
  double t6533;
  double t6506;
  double t6508;
  double t6509;
  double t6409;
  double t6431;
  double t6432;
  double t6522;
  double t6523;
  double t6524;
  double t6559;
  double t6564;
  double t6574;
  double t6570;
  double t6584;
  double t6579;
  double t6601;
  double t6606;
  double t6612;
  double t6616;
  t6338 = Cos(var1[10]);
  t6334 = Cos(var1[11]);
  t6335 = Sin(var1[10]);
  t6339 = Sin(var1[11]);
  t6336 = t6334*t6335;
  t6400 = -1.*t6338*t6339;
  t6407 = t6336 + t6400;
  t6419 = Cos(var1[5]);
  t6426 = Sin(var1[9]);
  t6420 = t6338*t6334;
  t6421 = t6335*t6339;
  t6422 = t6420 + t6421;
  t6427 = Sin(var1[5]);
  t6285 = Cos(var1[9]);
  t6414 = Cos(var1[4]);
  t6408 = Sin(var1[4]);
  t6425 = t6419*t6422;
  t6429 = t6426*t6407*t6427;
  t6430 = t6425 + t6429;
  t6438 = Sin(var1[3]);
  t6434 = -1.*t6419*t6426*t6407;
  t6435 = t6422*t6427;
  t6436 = t6434 + t6435;
  t6433 = Cos(var1[3]);
  t6439 = t6285*t6414*t6407;
  t6440 = -1.*t6408*t6430;
  t6441 = t6439 + t6440;
  t6463 = -0.0641*t6334;
  t6464 = -0.28*t6339;
  t6466 = t6463 + t6464;
  t6468 = -1.*t6334;
  t6470 = 1. + t6468;
  t6471 = -0.575*t6470;
  t6472 = -0.295*t6334;
  t6473 = -0.0641*t6339;
  t6475 = t6471 + t6472 + t6473;
  t6462 = 0.325*t6335;
  t6467 = t6338*t6466;
  t6476 = t6335*t6475;
  t6477 = t6462 + t6467 + t6476;
  t6482 = -1.*t6338;
  t6483 = 1. + t6482;
  t6484 = -0.325*t6483;
  t6485 = -1.*t6335*t6466;
  t6486 = t6338*t6475;
  t6487 = t6484 + t6485 + t6486;
  t6457 = -1.*t6285;
  t6458 = 1. + t6457;
  t6460 = 0.1575*t6458;
  t6461 = 0.2255*t6285;
  t6478 = -1.*t6426*t6477;
  t6480 = t6460 + t6461 + t6478;
  t6494 = 0.068*t6426;
  t6495 = t6285*t6477;
  t6497 = t6494 + t6495;
  t6499 = t6419*t6487;
  t6500 = -1.*t6480*t6427;
  t6502 = t6499 + t6500;
  t6491 = t6426*t6408;
  t6492 = -1.*t6285*t6414*t6427;
  t6493 = t6491 + t6492;
  t6481 = t6419*t6480;
  t6488 = t6487*t6427;
  t6489 = t6481 + t6488;
  t6448 = -1.*t6334*t6335;
  t6449 = t6338*t6339;
  t6450 = t6448 + t6449;
  t6498 = t6497*t6408;
  t6503 = t6414*t6502;
  t6504 = t6498 + t6503;
  t6447 = t6285*t6422*t6408;
  t6451 = t6419*t6450;
  t6452 = t6426*t6422*t6427;
  t6453 = t6451 + t6452;
  t6455 = t6414*t6453;
  t6456 = t6447 + t6455;
  t6510 = t6414*t6497;
  t6512 = -1.*t6408*t6502;
  t6513 = t6510 + t6512;
  t6517 = -1.*t6419*t6426*t6422;
  t6518 = t6450*t6427;
  t6519 = t6517 + t6518;
  t6490 = -1.*t6285*t6419*t6489;
  t6520 = t6489*t6519;
  t6529 = -1.*t6426*t6497;
  t6533 = t6285*t6497*t6422;
  t6506 = t6414*t6426;
  t6508 = t6285*t6408*t6427;
  t6509 = t6506 + t6508;
  t6409 = t6285*t6407*t6408;
  t6431 = t6414*t6430;
  t6432 = t6409 + t6431;
  t6522 = t6285*t6414*t6422;
  t6523 = -1.*t6408*t6453;
  t6524 = t6522 + t6523;
  t6559 = t6489*t6436;
  t6564 = -1.*t6489*t6519;
  t6574 = -1.*t6285*t6497*t6422;
  t6570 = t6285*t6497*t6407;
  t6584 = t6487*t6422;
  t6579 = -1.*t6487*t6450;
  t6601 = t6285*t6419*t6489;
  t6606 = -1.*t6489*t6436;
  t6612 = t6426*t6497;
  t6616 = -1.*t6285*t6497*t6407;
  p_output1[0]=t6432;
  p_output1[1]=t6433*t6436 - 1.*t6438*t6441;
  p_output1[2]=t6436*t6438 + t6433*t6441;
  p_output1[3]=t6456*(t6490 - 1.*t6493*t6504 - 1.*t6509*t6513) + t6493*(t6456*t6504 + t6520 + t6513*t6524);
  p_output1[4]=t6519*(t6490 + t6285*t6427*t6502 + t6529) + t6285*t6419*(t6453*t6502 + t6520 + t6533);
  p_output1[5]=t6285*t6422*(-1.*t6285*t6480 + t6529) + t6426*(-1.*t6422*t6426*t6480 + t6450*t6487 + t6533);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t6407 - 0.2255*t6450;
  p_output1[10]=-0.325*t6339 - 1.*t6334*t6466 - 1.*t6339*t6475;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t6493;
  p_output1[19]=t6285*t6419*t6433 - 1.*t6438*t6509;
  p_output1[20]=t6285*t6419*t6438 + t6433*t6509;
  p_output1[21]=t6456*(t6432*t6504 + t6441*t6513 + t6559) + t6432*(-1.*t6456*t6504 - 1.*t6513*t6524 + t6564);
  p_output1[22]=t6519*(t6430*t6502 + t6559 + t6570) + t6436*(-1.*t6453*t6502 + t6564 + t6574);
  p_output1[23]=t6285*t6407*(t6422*t6426*t6480 + t6574 + t6579) + t6285*t6422*(-1.*t6407*t6426*t6480 + t6570 + t6584);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t6422*(-1.*t6422*t6477 + t6579) + t6450*(t6407*t6477 + t6584);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6456;
  p_output1[37]=t6433*t6519 - 1.*t6438*t6524;
  p_output1[38]=t6438*t6519 + t6433*t6524;
  p_output1[39]=t6432*(t6493*t6504 + t6509*t6513 + t6601) + t6493*(-1.*t6432*t6504 - 1.*t6441*t6513 + t6606);
  p_output1[40]=t6436*(-1.*t6285*t6427*t6502 + t6601 + t6612) + t6285*t6419*(-1.*t6430*t6502 + t6606 + t6616);
  p_output1[41]=t6285*t6407*(t6285*t6480 + t6612) + t6426*(t6407*t6426*t6480 - 1.*t6422*t6487 + t6616);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t6422;
  p_output1[46]=0.325*t6334 - 1.*t6339*t6466 + t6334*t6475;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
