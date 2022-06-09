/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:53 GMT+02:00
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
  double t8292;
  double t8302;
  double t1947;
  double t8300;
  double t8303;
  double t8468;
  double t8469;
  double t8477;
  double t8481;
  double t8482;
  double t8483;
  double t8486;
  double t8494;
  double t8498;
  double t8502;
  double t8492;
  double t8521;
  double t8525;
  double t8489;
  double t8503;
  double t8504;
  double t8509;
  double t8510;
  double t8511;
  double t8512;
  double t8513;
  double t8514;
  double t8526;
  double t8527;
  double t8528;
  double t8533;
  double t8535;
  double t8536;
  double t8538;
  double t8539;
  double t8541;
  double t8546;
  double t8549;
  double t8550;
  double t8555;
  double t8556;
  double t8559;
  double t8591;
  double t8592;
  double t8593;
  double t8596;
  double t8597;
  double t8599;
  double t8600;
  double t8601;
  double t8602;
  double t8590;
  double t8595;
  double t8603;
  double t8604;
  double t8301;
  double t8304;
  double t8438;
  double t8583;
  double t8584;
  double t8586;
  double t8589;
  double t8605;
  double t8606;
  double t8607;
  double t8608;
  double t8609;
  double t8613;
  double t8614;
  double t8615;
  double t8616;
  double t8617;
  double t8619;
  double t8625;
  double t8631;
  double t8632;
  double t8488;
  double t8505;
  double t8506;
  double t8640;
  double t8641;
  double t8645;
  double t8636;
  double t8637;
  double t8638;
  double t8624;
  double t8633;
  double t8634;
  double t8508;
  double t8516;
  double t8518;
  double t8646;
  double t8656;
  double t8671;
  double t8682;
  double t8694;
  double t8701;
  double t8739;
  double t8742;
  double t8714;
  double t8717;
  double t8729;
  double t8725;
  double t8773;
  double t8768;
  t8292 = Cos(var1[6]);
  t8302 = Sin(var1[4]);
  t1947 = Cos(var1[4]);
  t8300 = Sin(var1[5]);
  t8303 = Sin(var1[6]);
  t8468 = Cos(var1[8]);
  t8469 = Sin(var1[7]);
  t8477 = t8468*t8469;
  t8481 = Cos(var1[7]);
  t8482 = Sin(var1[8]);
  t8483 = -1.*t8481*t8482;
  t8486 = t8477 + t8483;
  t8494 = t8481*t8468;
  t8498 = t8469*t8482;
  t8502 = t8494 + t8498;
  t8492 = Cos(var1[5]);
  t8521 = Cos(var1[3]);
  t8525 = Sin(var1[3]);
  t8489 = t8300*t8303*t8486;
  t8503 = t8492*t8502;
  t8504 = t8489 + t8503;
  t8509 = -1.*t8468*t8469;
  t8510 = t8481*t8482;
  t8511 = t8509 + t8510;
  t8512 = t8492*t8511;
  t8513 = t8300*t8303*t8502;
  t8514 = t8512 + t8513;
  t8526 = t8292*t8302*t8300;
  t8527 = t1947*t8303;
  t8528 = t8526 + t8527;
  t8533 = -1.*t8492*t8303*t8486;
  t8535 = t8300*t8502;
  t8536 = t8533 + t8535;
  t8538 = t1947*t8292*t8486;
  t8539 = -1.*t8302*t8504;
  t8541 = t8538 + t8539;
  t8546 = t8300*t8511;
  t8549 = -1.*t8492*t8303*t8502;
  t8550 = t8546 + t8549;
  t8555 = t1947*t8292*t8502;
  t8556 = -1.*t8302*t8514;
  t8559 = t8555 + t8556;
  t8591 = -0.0641*t8468;
  t8592 = -0.28*t8482;
  t8593 = t8591 + t8592;
  t8596 = -1.*t8468;
  t8597 = 1. + t8596;
  t8599 = 0.075*t8597;
  t8600 = 0.355*t8468;
  t8601 = -0.0641*t8482;
  t8602 = t8599 + t8600 + t8601;
  t8590 = -0.325*t8469;
  t8595 = t8481*t8593;
  t8603 = t8469*t8602;
  t8604 = t8590 + t8595 + t8603;
  t8301 = -1.*t1947*t8292*t8300;
  t8304 = t8302*t8303;
  t8438 = t8301 + t8304;
  t8583 = -1.*t8292;
  t8584 = 1. + t8583;
  t8586 = 0.1575*t8584;
  t8589 = 0.2255*t8292;
  t8605 = -1.*t8303*t8604;
  t8606 = t8586 + t8589 + t8605;
  t8607 = -1.*t8300*t8606;
  t8608 = -1.*t8481;
  t8609 = 1. + t8608;
  t8613 = 0.325*t8609;
  t8614 = -1.*t8469*t8593;
  t8615 = t8481*t8602;
  t8616 = t8613 + t8614 + t8615;
  t8617 = t8492*t8616;
  t8619 = t8607 + t8617;
  t8625 = 0.068*t8303;
  t8631 = t8292*t8604;
  t8632 = t8625 + t8631;
  t8488 = t8292*t8302*t8486;
  t8505 = t1947*t8504;
  t8506 = t8488 + t8505;
  t8640 = t8492*t8606;
  t8641 = t8300*t8616;
  t8645 = t8640 + t8641;
  t8636 = t1947*t8619;
  t8637 = t8302*t8632;
  t8638 = t8636 + t8637;
  t8624 = -1.*t8302*t8619;
  t8633 = t1947*t8632;
  t8634 = t8624 + t8633;
  t8508 = t8292*t8302*t8502;
  t8516 = t1947*t8514;
  t8518 = t8508 + t8516;
  t8646 = t8492*t8292*t8645;
  t8656 = -1.*t8645*t8536;
  t8671 = t8645*t8536;
  t8682 = -1.*t8645*t8550;
  t8694 = -1.*t8492*t8292*t8645;
  t8701 = t8645*t8550;
  t8739 = -1.*t8303*t8632;
  t8742 = t8292*t8632*t8502;
  t8714 = t8303*t8632;
  t8717 = -1.*t8292*t8632*t8486;
  t8729 = -1.*t8292*t8632*t8502;
  t8725 = t8292*t8632*t8486;
  t8773 = t8616*t8502;
  t8768 = -1.*t8616*t8511;
  p_output1[0]=t8506*var2[0] + t8438*var2[1] + t8518*var2[2];
  p_output1[1]=(t8521*t8536 - 1.*t8525*t8541)*var2[0] + (t8292*t8492*t8521 - 1.*t8525*t8528)*var2[1] + (t8521*t8550 - 1.*t8525*t8559)*var2[2];
  p_output1[2]=(t8525*t8536 + t8521*t8541)*var2[0] + (t8292*t8492*t8525 + t8521*t8528)*var2[1] + (t8525*t8550 + t8521*t8559)*var2[2];
  p_output1[3]=(t8518*(-1.*t8528*t8634 - 1.*t8438*t8638 + t8694) + t8438*(t8559*t8634 + t8518*t8638 + t8701))*var2[0] + (t8518*(t8541*t8634 + t8506*t8638 + t8671) + t8506*(-1.*t8559*t8634 - 1.*t8518*t8638 + t8682))*var2[1] + (t8506*(t8528*t8634 + t8438*t8638 + t8646) + t8438*(-1.*t8541*t8634 - 1.*t8506*t8638 + t8656))*var2[2];
  p_output1[4]=(t8550*(t8292*t8300*t8619 + t8694 + t8739) + t8292*t8492*(t8514*t8619 + t8701 + t8742))*var2[0] + (t8550*(t8504*t8619 + t8671 + t8725) + t8536*(-1.*t8514*t8619 + t8682 + t8729))*var2[1] + (t8536*(-1.*t8292*t8300*t8619 + t8646 + t8714) + t8292*t8492*(-1.*t8504*t8619 + t8656 + t8717))*var2[2];
  p_output1[5]=(t8292*t8502*(-1.*t8292*t8606 + t8739) + t8303*(-1.*t8303*t8502*t8606 + t8511*t8616 + t8742))*var2[0] + (t8292*t8486*(t8303*t8502*t8606 + t8729 + t8768) + t8292*t8502*(-1.*t8303*t8486*t8606 + t8725 + t8773))*var2[1] + (t8292*t8486*(t8292*t8606 + t8714) + t8303*(t8303*t8486*t8606 - 1.*t8502*t8616 + t8717))*var2[2];
  p_output1[6]=(-0.1575*t8486 - 0.2255*t8511)*var2[0] + (t8502*(-1.*t8502*t8604 + t8768) + t8511*(t8486*t8604 + t8773))*var2[1] + 0.068*t8502*var2[2];
  p_output1[7]=(0.325*t8482 - 1.*t8468*t8593 - 1.*t8482*t8602)*var2[0] + (-0.325*t8468 - 1.*t8482*t8593 + t8468*t8602)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
