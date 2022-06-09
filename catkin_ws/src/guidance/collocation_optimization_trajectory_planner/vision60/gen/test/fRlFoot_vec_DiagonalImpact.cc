/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:47 GMT+02:00
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
  double t24223;
  double t7670;
  double t27382;
  double t30423;
  double t30347;
  double t30348;
  double t30430;
  double t7568;
  double t30407;
  double t30432;
  double t30433;
  double t27634;
  double t30443;
  double t30444;
  double t30445;
  double t30442;
  double t30513;
  double t30516;
  double t30446;
  double t30447;
  double t30448;
  double t30453;
  double t30454;
  double t30455;
  double t30456;
  double t30457;
  double t30458;
  double t30517;
  double t30519;
  double t30520;
  double t30525;
  double t30527;
  double t30528;
  double t30530;
  double t30531;
  double t30532;
  double t30537;
  double t30539;
  double t30540;
  double t30542;
  double t30543;
  double t30544;
  double t30438;
  double t30449;
  double t30450;
  double t30573;
  double t30574;
  double t30575;
  double t30577;
  double t30578;
  double t30579;
  double t30580;
  double t30581;
  double t30582;
  double t17571;
  double t27668;
  double t27674;
  double t30572;
  double t30576;
  double t30583;
  double t30584;
  double t30588;
  double t30589;
  double t30590;
  double t30591;
  double t30592;
  double t30593;
  double t30567;
  double t30568;
  double t30569;
  double t30571;
  double t30585;
  double t30586;
  double t30598;
  double t30599;
  double t30601;
  double t30603;
  double t30604;
  double t30605;
  double t30587;
  double t30594;
  double t30596;
  double t30602;
  double t30606;
  double t30607;
  double t30609;
  double t30610;
  double t30611;
  double t30452;
  double t30504;
  double t30509;
  double t30597;
  double t30615;
  double t30622;
  double t30627;
  double t30634;
  double t30639;
  double t30667;
  double t30671;
  double t30647;
  double t30651;
  double t30661;
  double t30657;
  double t30701;
  double t30696;
  t24223 = Cos(var1[9]);
  t7670 = Sin(var1[4]);
  t27382 = Cos(var1[4]);
  t30423 = Cos(var1[10]);
  t30347 = Cos(var1[11]);
  t30348 = Sin(var1[10]);
  t30430 = Sin(var1[11]);
  t7568 = Sin(var1[9]);
  t30407 = t30347*t30348;
  t30432 = -1.*t30423*t30430;
  t30433 = t30407 + t30432;
  t27634 = Sin(var1[5]);
  t30443 = t30423*t30347;
  t30444 = t30348*t30430;
  t30445 = t30443 + t30444;
  t30442 = Cos(var1[5]);
  t30513 = Cos(var1[3]);
  t30516 = Sin(var1[3]);
  t30446 = t30442*t30445;
  t30447 = t7568*t30433*t27634;
  t30448 = t30446 + t30447;
  t30453 = -1.*t30347*t30348;
  t30454 = t30423*t30430;
  t30455 = t30453 + t30454;
  t30456 = t30442*t30455;
  t30457 = t7568*t30445*t27634;
  t30458 = t30456 + t30457;
  t30517 = t27382*t7568;
  t30519 = t24223*t7670*t27634;
  t30520 = t30517 + t30519;
  t30525 = -1.*t30442*t7568*t30433;
  t30527 = t30445*t27634;
  t30528 = t30525 + t30527;
  t30530 = t24223*t27382*t30433;
  t30531 = -1.*t7670*t30448;
  t30532 = t30530 + t30531;
  t30537 = -1.*t30442*t7568*t30445;
  t30539 = t30455*t27634;
  t30540 = t30537 + t30539;
  t30542 = t24223*t27382*t30445;
  t30543 = -1.*t7670*t30458;
  t30544 = t30542 + t30543;
  t30438 = t24223*t30433*t7670;
  t30449 = t27382*t30448;
  t30450 = t30438 + t30449;
  t30573 = -0.0641*t30347;
  t30574 = -0.28*t30430;
  t30575 = t30573 + t30574;
  t30577 = -1.*t30347;
  t30578 = 1. + t30577;
  t30579 = -0.575*t30578;
  t30580 = -0.295*t30347;
  t30581 = -0.0641*t30430;
  t30582 = t30579 + t30580 + t30581;
  t17571 = t7568*t7670;
  t27668 = -1.*t24223*t27382*t27634;
  t27674 = t17571 + t27668;
  t30572 = 0.325*t30348;
  t30576 = t30423*t30575;
  t30583 = t30348*t30582;
  t30584 = t30572 + t30576 + t30583;
  t30588 = -1.*t30423;
  t30589 = 1. + t30588;
  t30590 = -0.325*t30589;
  t30591 = -1.*t30348*t30575;
  t30592 = t30423*t30582;
  t30593 = t30590 + t30591 + t30592;
  t30567 = -1.*t24223;
  t30568 = 1. + t30567;
  t30569 = 0.1575*t30568;
  t30571 = 0.2255*t24223;
  t30585 = -1.*t7568*t30584;
  t30586 = t30569 + t30571 + t30585;
  t30598 = 0.068*t7568;
  t30599 = t24223*t30584;
  t30601 = t30598 + t30599;
  t30603 = t30442*t30593;
  t30604 = -1.*t30586*t27634;
  t30605 = t30603 + t30604;
  t30587 = t30442*t30586;
  t30594 = t30593*t27634;
  t30596 = t30587 + t30594;
  t30602 = t30601*t7670;
  t30606 = t27382*t30605;
  t30607 = t30602 + t30606;
  t30609 = t27382*t30601;
  t30610 = -1.*t7670*t30605;
  t30611 = t30609 + t30610;
  t30452 = t24223*t30445*t7670;
  t30504 = t27382*t30458;
  t30509 = t30452 + t30504;
  t30597 = t24223*t30442*t30596;
  t30615 = -1.*t30596*t30528;
  t30622 = t30596*t30528;
  t30627 = -1.*t30596*t30540;
  t30634 = -1.*t24223*t30442*t30596;
  t30639 = t30596*t30540;
  t30667 = -1.*t7568*t30601;
  t30671 = t24223*t30601*t30445;
  t30647 = t7568*t30601;
  t30651 = -1.*t24223*t30601*t30433;
  t30661 = -1.*t24223*t30601*t30445;
  t30657 = t24223*t30601*t30433;
  t30701 = t30593*t30445;
  t30696 = -1.*t30593*t30455;
  p_output1[0]=t30450*var2[0] + t27674*var2[1] + t30509*var2[2];
  p_output1[1]=(t30513*t30528 - 1.*t30516*t30532)*var2[0] + (t24223*t30442*t30513 - 1.*t30516*t30520)*var2[1] + (t30513*t30540 - 1.*t30516*t30544)*var2[2];
  p_output1[2]=(t30516*t30528 + t30513*t30532)*var2[0] + (t24223*t30442*t30516 + t30513*t30520)*var2[1] + (t30516*t30540 + t30513*t30544)*var2[2];
  p_output1[3]=(t30509*(-1.*t27674*t30607 - 1.*t30520*t30611 + t30634) + t27674*(t30509*t30607 + t30544*t30611 + t30639))*var2[0] + (t30509*(t30450*t30607 + t30532*t30611 + t30622) + t30450*(-1.*t30509*t30607 - 1.*t30544*t30611 + t30627))*var2[1] + (t30450*(t30597 + t27674*t30607 + t30520*t30611) + t27674*(-1.*t30450*t30607 - 1.*t30532*t30611 + t30615))*var2[2];
  p_output1[4]=(t30540*(t24223*t27634*t30605 + t30634 + t30667) + t24223*t30442*(t30458*t30605 + t30639 + t30671))*var2[0] + (t30540*(t30448*t30605 + t30622 + t30657) + t30528*(-1.*t30458*t30605 + t30627 + t30661))*var2[1] + (t30528*(t30597 - 1.*t24223*t27634*t30605 + t30647) + t24223*t30442*(-1.*t30448*t30605 + t30615 + t30651))*var2[2];
  p_output1[5]=(t24223*t30445*(-1.*t24223*t30586 + t30667) + t7568*(t30455*t30593 + t30671 - 1.*t30445*t30586*t7568))*var2[0] + (t24223*t30445*(t30657 + t30701 - 1.*t30433*t30586*t7568) + t24223*t30433*(t30661 + t30696 + t30445*t30586*t7568))*var2[1] + (t24223*t30433*(t24223*t30586 + t30647) + t7568*(-1.*t30445*t30593 + t30651 + t30433*t30586*t7568))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t30433 - 0.2255*t30455)*var2[0] + (t30445*(-1.*t30445*t30584 + t30696) + t30455*(t30433*t30584 + t30701))*var2[1] + 0.068*t30445*var2[2];
  p_output1[10]=(-0.325*t30430 - 1.*t30347*t30575 - 1.*t30430*t30582)*var2[0] + (0.325*t30347 - 1.*t30430*t30575 + t30347*t30582)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
