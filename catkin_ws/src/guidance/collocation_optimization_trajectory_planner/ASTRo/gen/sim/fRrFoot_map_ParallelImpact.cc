/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:18 GMT+02:00
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
  double t11334;
  double t2914;
  double t3551;
  double t12253;
  double t20365;
  double t20469;
  double t20473;
  double t20364;
  double t20475;
  double t20363;
  double t20483;
  double t20362;
  double t4975;
  double t16152;
  double t18997;
  double t20345;
  double t20474;
  double t20487;
  double t20488;
  double t20496;
  double t20492;
  double t20493;
  double t20494;
  double t20491;
  double t20497;
  double t20498;
  double t20499;
  double t20518;
  double t20520;
  double t20521;
  double t20524;
  double t20526;
  double t20527;
  double t20528;
  double t20530;
  double t20531;
  double t20532;
  double t20533;
  double t20534;
  double t20535;
  double t20536;
  double t20540;
  double t20541;
  double t20522;
  double t20523;
  double t20537;
  double t20538;
  double t20545;
  double t20546;
  double t20547;
  double t20548;
  double t20549;
  double t20550;
  double t20551;
  double t20553;
  double t20554;
  double t20555;
  double t20539;
  double t20542;
  double t20543;
  double t20505;
  double t20506;
  double t20507;
  double t20508;
  double t20509;
  double t20510;
  double t20511;
  double t20512;
  double t20513;
  double t20552;
  double t20557;
  double t20558;
  double t20560;
  double t20562;
  double t20563;
  double t20567;
  double t20568;
  double t20569;
  double t20515;
  double t20516;
  double t20517;
  double t20544;
  double t20570;
  double t20361;
  double t20489;
  double t20490;
  double t20572;
  double t20573;
  double t20574;
  double t20606;
  double t20611;
  double t20617;
  double t20621;
  double t20648;
  double t20653;
  t11334 = Cos(var1[16]);
  t2914 = Cos(var1[17]);
  t3551 = Sin(var1[16]);
  t12253 = Sin(var1[17]);
  t20365 = -1.*t11334*t2914;
  t20469 = -1.*t3551*t12253;
  t20473 = t20365 + t20469;
  t20364 = Cos(var1[5]);
  t20475 = Sin(var1[15]);
  t20363 = Cos(var1[15]);
  t20483 = Sin(var1[5]);
  t20362 = Cos(var1[4]);
  t4975 = -1.*t2914*t3551;
  t16152 = t11334*t12253;
  t18997 = t4975 + t16152;
  t20345 = Sin(var1[4]);
  t20474 = t20363*t20364*t20473;
  t20487 = -1.*t20475*t20473*t20483;
  t20488 = t20474 + t20487;
  t20496 = Sin(var1[3]);
  t20492 = t20364*t20475*t20473;
  t20493 = t20363*t20473*t20483;
  t20494 = t20492 + t20493;
  t20491 = Cos(var1[3]);
  t20497 = t20362*t18997;
  t20498 = -1.*t20345*t20488;
  t20499 = t20497 + t20498;
  t20518 = -1.*t20363;
  t20520 = 1. + t20518;
  t20521 = -0.15121*t20520;
  t20524 = -1.*t11334;
  t20526 = 1. + t20524;
  t20527 = -0.28121*t20526;
  t20528 = -1.*t2914;
  t20530 = 1. + t20528;
  t20531 = -0.50321*t20530;
  t20532 = -0.19821*t2914;
  t20533 = t20531 + t20532;
  t20534 = t11334*t20533;
  t20535 = 0.305*t3551*t12253;
  t20536 = t20527 + t20534 + t20535;
  t20540 = t20363*t20536;
  t20541 = t20521 + t20540;
  t20522 = -0.15121*t20363;
  t20523 = 0.15121*t20475;
  t20537 = t20475*t20536;
  t20538 = t20521 + t20522 + t20523 + t20537;
  t20545 = t20364*t20475;
  t20546 = t20363*t20483;
  t20547 = t20545 + t20546;
  t20548 = 0.28121*t3551;
  t20549 = t20533*t3551;
  t20550 = -0.305*t11334*t12253;
  t20551 = t20548 + t20549 + t20550;
  t20553 = t20364*t20541;
  t20554 = -1.*t20538*t20483;
  t20555 = t20553 + t20554;
  t20539 = t20364*t20538;
  t20542 = t20541*t20483;
  t20543 = t20539 + t20542;
  t20505 = t11334*t2914;
  t20506 = t3551*t12253;
  t20507 = t20505 + t20506;
  t20508 = t20507*t20345;
  t20509 = t20363*t20364*t18997;
  t20510 = -1.*t20475*t18997*t20483;
  t20511 = t20509 + t20510;
  t20512 = t20362*t20511;
  t20513 = t20508 + t20512;
  t20552 = t20551*t20345;
  t20557 = t20362*t20555;
  t20558 = t20552 + t20557;
  t20560 = t20362*t20551;
  t20562 = -1.*t20345*t20555;
  t20563 = t20560 + t20562;
  t20567 = t20364*t20475*t18997;
  t20568 = t20363*t18997*t20483;
  t20569 = t20567 + t20568;
  t20515 = -1.*t20363*t20364;
  t20516 = t20475*t20483;
  t20517 = t20515 + t20516;
  t20544 = -1.*t20517*t20543;
  t20570 = t20569*t20543;
  t20361 = t18997*t20345;
  t20489 = t20362*t20488;
  t20490 = t20361 + t20489;
  t20572 = t20362*t20507;
  t20573 = -1.*t20345*t20511;
  t20574 = t20572 + t20573;
  t20606 = -1.*t20569*t20543;
  t20611 = t20494*t20543;
  t20617 = -1.*t20551*t20507;
  t20621 = t20551*t18997;
  t20648 = t20517*t20543;
  t20653 = -1.*t20494*t20543;
  p_output1[0]=t20490;
  p_output1[1]=t20491*t20494 - 1.*t20496*t20499;
  p_output1[2]=t20494*t20496 + t20491*t20499;
  p_output1[3]=t20513*(t20544 - 1.*t20362*t20547*t20558 + t20345*t20547*t20563) + t20362*t20547*(t20513*t20558 + t20570 + t20563*t20574);
  p_output1[4]=(t20544 - 1.*t20547*t20555)*t20569 + t20517*(t20507*t20551 + t20511*t20555 + t20570);
  p_output1[5]=t20507*(t20363*t20538 - 1.*t20475*t20541);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t20473 - 0.15121*t20507;
  p_output1[16]=0.28121*t12253 + t12253*t20533 - 0.305*t12253*t2914;
  p_output1[17]=0;
  p_output1[18]=t20362*t20547;
  p_output1[19]=t20491*t20517 + t20345*t20496*t20547;
  p_output1[20]=t20496*t20517 - 1.*t20345*t20491*t20547;
  p_output1[21]=t20490*(-1.*t20513*t20558 - 1.*t20563*t20574 + t20606) + t20513*(t20490*t20558 + t20499*t20563 + t20611);
  p_output1[22]=t20494*(-1.*t20511*t20555 + t20606 + t20617) + t20569*(t20488*t20555 + t20611 + t20621);
  p_output1[23]=t18997*(-1.*t18997*t20475*t20538 - 1.*t18997*t20363*t20541 + t20617) + t20507*(t20473*t20475*t20538 + t20363*t20473*t20541 + t20621);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t18997*(-1.*t18997*t20536 + t20617) + t20507*(t20473*t20536 + t20621);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t20513;
  p_output1[37]=t20491*t20569 - 1.*t20496*t20574;
  p_output1[38]=t20496*t20569 + t20491*t20574;
  p_output1[39]=t20490*(t20362*t20547*t20558 - 1.*t20345*t20547*t20563 + t20648) + t20362*t20547*(-1.*t20490*t20558 - 1.*t20499*t20563 + t20653);
  p_output1[40]=t20494*(t20547*t20555 + t20648) + t20517*(-1.*t18997*t20551 - 1.*t20488*t20555 + t20653);
  p_output1[41]=t18997*(-1.*t20363*t20538 + t20475*t20541);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.305*Power(t12253,2) + 0.28121*t2914 + t20533*t2914;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
