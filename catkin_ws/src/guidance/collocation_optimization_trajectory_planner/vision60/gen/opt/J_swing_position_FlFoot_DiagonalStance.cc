/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:25 GMT+02:00
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
  double t5111;
  double t4795;
  double t4859;
  double t5050;
  double t5112;
  double t5348;
  double t5455;
  double t5516;
  double t5517;
  double t5533;
  double t5536;
  double t4059;
  double t5081;
  double t5126;
  double t5127;
  double t5583;
  double t5594;
  double t5645;
  double t5663;
  double t6027;
  double t6116;
  double t6117;
  double t6118;
  double t6140;
  double t6142;
  double t6143;
  double t6163;
  double t4322;
  double t4773;
  double t5350;
  double t5387;
  double t6028;
  double t6111;
  double t6254;
  double t6256;
  double t6259;
  double t6272;
  double t6294;
  double t6299;
  double t6322;
  double t6323;
  double t6325;
  double t6430;
  double t6433;
  double t6449;
  double t6471;
  double t6478;
  double t6481;
  double t6533;
  double t6535;
  double t6540;
  double t6549;
  double t6551;
  double t6552;
  double t6650;
  double t6663;
  double t6665;
  double t6620;
  double t6623;
  double t6639;
  double t6733;
  double t6734;
  double t6736;
  double t6755;
  double t6766;
  double t6767;
  double t6740;
  double t6746;
  double t6748;
  double t6799;
  double t6800;
  double t6801;
  t5111 = Cos(var1[3]);
  t4795 = Cos(var1[5]);
  t4859 = Sin(var1[3]);
  t5050 = Sin(var1[4]);
  t5112 = Sin(var1[5]);
  t5348 = Cos(var1[6]);
  t5455 = t5111*t4795;
  t5516 = -1.*t4859*t5050*t5112;
  t5517 = t5455 + t5516;
  t5533 = Cos(var1[4]);
  t5536 = Sin(var1[6]);
  t4059 = Cos(var1[7]);
  t5081 = t4795*t4859*t5050;
  t5126 = t5111*t5112;
  t5127 = t5081 + t5126;
  t5583 = -1.*t5533*t5348*t4859;
  t5594 = -1.*t5517*t5536;
  t5645 = t5583 + t5594;
  t5663 = Sin(var1[7]);
  t6027 = Cos(var1[8]);
  t6116 = t4059*t5127;
  t6117 = t5645*t5663;
  t6118 = t6116 + t6117;
  t6140 = t4059*t5645;
  t6142 = -1.*t5127*t5663;
  t6143 = t6140 + t6142;
  t6163 = Sin(var1[8]);
  t4322 = -1.*t4059;
  t4773 = 1. + t4322;
  t5350 = -1.*t5348;
  t5387 = 1. + t5350;
  t6028 = -1.*t6027;
  t6111 = 1. + t6028;
  t6254 = -1.*t5111*t5348*t5050;
  t6256 = -1.*t5111*t5533*t5112*t5536;
  t6259 = t6254 + t6256;
  t6272 = -1.*t5111*t5533*t4795*t4059;
  t6294 = t6259*t5663;
  t6299 = t6272 + t6294;
  t6322 = t4059*t6259;
  t6323 = t5111*t5533*t4795*t5663;
  t6325 = t6322 + t6323;
  t6430 = t5111*t4795*t5050;
  t6433 = -1.*t4859*t5112;
  t6449 = t6430 + t6433;
  t6471 = t4795*t4859;
  t6478 = t5111*t5050*t5112;
  t6481 = t6471 + t6478;
  t6533 = t4059*t6481;
  t6535 = -1.*t6449*t5536*t5663;
  t6540 = t6533 + t6535;
  t6549 = -1.*t4059*t6449*t5536;
  t6551 = -1.*t6481*t5663;
  t6552 = t6549 + t6551;
  t6650 = -1.*t5348*t6481;
  t6663 = -1.*t5111*t5533*t5536;
  t6665 = t6650 + t6663;
  t6620 = t5111*t5533*t5348;
  t6623 = -1.*t6481*t5536;
  t6639 = t6620 + t6623;
  t6733 = -1.*t5111*t4795*t5050;
  t6734 = t4859*t5112;
  t6736 = t6733 + t6734;
  t6755 = -1.*t4059*t6736;
  t6766 = -1.*t6639*t5663;
  t6767 = t6755 + t6766;
  t6740 = t4059*t6639;
  t6746 = -1.*t6736*t5663;
  t6748 = t6740 + t6746;
  t6799 = t4059*t6736;
  t6800 = t6639*t5663;
  t6801 = t6799 + t6800;
  p_output1[0]=1.;
  p_output1[1]=0.325*t4773*t5127 + 0.1575*t5387*t5517 + 0.1575*t4859*t5533*t5536 + 0.2255*(t5348*t5517 - 1.*t4859*t5533*t5536) - 0.325*t5645*t5663 + 0.075*t6111*t6118 + 0.075*t6143*t6163 - 0.0641*(t6027*t6143 + t6118*t6163) + 0.355*(t6027*t6118 - 1.*t6143*t6163);
  p_output1[2]=-0.325*t4773*t4795*t5111*t5533 + 0.1575*t5111*t5112*t5387*t5533 + 0.1575*t5050*t5111*t5536 + 0.2255*(t5111*t5112*t5348*t5533 - 1.*t5050*t5111*t5536) - 0.325*t5663*t6259 + 0.075*t6111*t6299 + 0.075*t6163*t6325 - 0.0641*(t6163*t6299 + t6027*t6325) + 0.355*(t6027*t6299 - 1.*t6163*t6325);
  p_output1[3]=0.2255*t5348*t6449 + 0.1575*t5387*t6449 + 0.325*t5536*t5663*t6449 + 0.325*t4773*t6481 + 0.075*t6111*t6540 + 0.075*t6163*t6552 - 0.0641*(t6163*t6540 + t6027*t6552) + 0.355*(t6027*t6540 - 1.*t6163*t6552);
  p_output1[4]=-0.1575*t5111*t5348*t5533 + 0.1575*t5536*t6481 + 0.2255*t6639 - 0.325*t5663*t6665 + 0.075*t5663*t6111*t6665 + 0.075*t4059*t6163*t6665 + 0.355*(t5663*t6027*t6665 - 1.*t4059*t6163*t6665) - 0.0641*(t4059*t6027*t6665 + t5663*t6163*t6665);
  p_output1[5]=-0.325*t4059*t6639 + 0.325*t5663*t6736 + 0.075*t6111*t6748 + 0.075*t6163*t6767 - 0.0641*(t6163*t6748 + t6027*t6767) + 0.355*(t6027*t6748 - 1.*t6163*t6767);
  p_output1[6]=0.075*t6027*t6748 + 0.075*t6163*t6801 - 0.0641*(-1.*t6163*t6748 + t6027*t6801) + 0.355*(-1.*t6027*t6748 - 1.*t6163*t6801);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
