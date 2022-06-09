/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:29 GMT+02:00
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
  double t2594;
  double t4548;
  double t3655;
  double t9485;
  double t9543;
  double t9484;
  double t9547;
  double t3657;
  double t9559;
  double t9560;
  double t9561;
  double t4788;
  double t9554;
  double t9486;
  double t9548;
  double t9549;
  double t3992;
  double t9477;
  double t9482;
  double t9581;
  double t9579;
  double t9562;
  double t9563;
  double t9564;
  double t9568;
  double t9569;
  double t9570;
  double t9572;
  double t9573;
  double t9574;
  double t9582;
  double t9583;
  double t9584;
  double t9589;
  double t9590;
  double t9591;
  double t9594;
  double t9595;
  double t9596;
  double t9601;
  double t9602;
  double t9604;
  double t9606;
  double t9607;
  double t9608;
  double t9558;
  double t9565;
  double t9566;
  double t9626;
  double t9627;
  double t9632;
  double t9633;
  double t9634;
  double t9636;
  double t9637;
  double t9638;
  double t9639;
  double t9640;
  double t9641;
  double t9642;
  double t9643;
  double t9647;
  double t9648;
  double t9649;
  double t9628;
  double t9629;
  double t9631;
  double t9644;
  double t9645;
  double t9653;
  double t9654;
  double t9655;
  double t9656;
  double t9658;
  double t9659;
  double t9660;
  double t9646;
  double t9650;
  double t9651;
  double t9657;
  double t9661;
  double t9662;
  double t9664;
  double t9665;
  double t9666;
  double t9571;
  double t9575;
  double t9576;
  double t9652;
  double t9670;
  double t9677;
  double t9682;
  double t9689;
  double t9694;
  double t9720;
  double t9724;
  t2594 = Cos(var1[4]);
  t4548 = Cos(var1[12]);
  t3655 = Cos(var1[5]);
  t9485 = Cos(var1[14]);
  t9543 = Sin(var1[13]);
  t9484 = Cos(var1[13]);
  t9547 = Sin(var1[14]);
  t3657 = Sin(var1[12]);
  t9559 = t9485*t9543;
  t9560 = -1.*t9484*t9547;
  t9561 = t9559 + t9560;
  t4788 = Sin(var1[5]);
  t9554 = Sin(var1[4]);
  t9486 = t9484*t9485;
  t9548 = t9543*t9547;
  t9549 = t9486 + t9548;
  t3992 = -1.*t3655*t3657;
  t9477 = -1.*t4548*t4788;
  t9482 = t3992 + t9477;
  t9581 = Cos(var1[3]);
  t9579 = Sin(var1[3]);
  t9562 = t4548*t3655*t9561;
  t9563 = -1.*t3657*t9561*t4788;
  t9564 = t9562 + t9563;
  t9568 = -1.*t9485*t9543;
  t9569 = t9484*t9547;
  t9570 = t9568 + t9569;
  t9572 = t4548*t3655*t9549;
  t9573 = -1.*t3657*t9549*t4788;
  t9574 = t9572 + t9573;
  t9582 = t4548*t3655;
  t9583 = -1.*t3657*t4788;
  t9584 = t9582 + t9583;
  t9589 = t3655*t3657*t9561;
  t9590 = t4548*t9561*t4788;
  t9591 = t9589 + t9590;
  t9594 = t2594*t9549;
  t9595 = -1.*t9554*t9564;
  t9596 = t9594 + t9595;
  t9601 = t3655*t3657*t9549;
  t9602 = t4548*t9549*t4788;
  t9604 = t9601 + t9602;
  t9606 = t2594*t9570;
  t9607 = -1.*t9554*t9574;
  t9608 = t9606 + t9607;
  t9558 = t9549*t9554;
  t9565 = t2594*t9564;
  t9566 = t9558 + t9565;
  t9626 = -1.*t4548;
  t9627 = 1. + t9626;
  t9632 = -1.*t9484;
  t9633 = 1. + t9632;
  t9634 = 0.28121*t9633;
  t9636 = -1.*t9485;
  t9637 = 1. + t9636;
  t9638 = 0.50321*t9637;
  t9639 = 0.19821*t9485;
  t9640 = t9638 + t9639;
  t9641 = t9484*t9640;
  t9642 = -0.305*t9543*t9547;
  t9643 = t9634 + t9641 + t9642;
  t9647 = 0.15121*t9627;
  t9648 = t4548*t9643;
  t9649 = t9647 + t9648;
  t9628 = -0.15121*t9627;
  t9629 = -0.15121*t4548;
  t9631 = -0.15121*t3657;
  t9644 = t3657*t9643;
  t9645 = t9628 + t9629 + t9631 + t9644;
  t9653 = 0.28121*t9543;
  t9654 = -1.*t9640*t9543;
  t9655 = -0.305*t9484*t9547;
  t9656 = t9653 + t9654 + t9655;
  t9658 = t3655*t9649;
  t9659 = -1.*t9645*t4788;
  t9660 = t9658 + t9659;
  t9646 = t3655*t9645;
  t9650 = t9649*t4788;
  t9651 = t9646 + t9650;
  t9657 = t9656*t9554;
  t9661 = t2594*t9660;
  t9662 = t9657 + t9661;
  t9664 = t2594*t9656;
  t9665 = -1.*t9554*t9660;
  t9666 = t9664 + t9665;
  t9571 = t9570*t9554;
  t9575 = t2594*t9574;
  t9576 = t9571 + t9575;
  t9652 = -1.*t9584*t9651;
  t9670 = t9591*t9651;
  t9677 = t9584*t9651;
  t9682 = -1.*t9604*t9651;
  t9689 = -1.*t9591*t9651;
  t9694 = t9604*t9651;
  t9720 = -1.*t9656*t9549;
  t9724 = t9656*t9570;
  p_output1[0]=t9576*var2[0] + t2594*t9482*var2[1] + t9566*var2[2];
  p_output1[1]=(t9581*t9604 - 1.*t9579*t9608)*var2[0] + (t9482*t9554*t9579 + t9581*t9584)*var2[1] + (t9581*t9591 - 1.*t9579*t9596)*var2[2];
  p_output1[2]=(t9579*t9604 + t9581*t9608)*var2[0] + (-1.*t9482*t9554*t9581 + t9579*t9584)*var2[1] + (t9579*t9591 + t9581*t9596)*var2[2];
  p_output1[3]=(t9566*(t9652 - 1.*t2594*t9482*t9662 + t9482*t9554*t9666) + t2594*t9482*(t9566*t9662 + t9596*t9666 + t9670))*var2[0] + (t9576*(-1.*t9566*t9662 - 1.*t9596*t9666 + t9689) + t9566*(t9576*t9662 + t9608*t9666 + t9694))*var2[1] + (t9576*(t2594*t9482*t9662 - 1.*t9482*t9554*t9666 + t9677) + t2594*t9482*(-1.*t9576*t9662 - 1.*t9608*t9666 + t9682))*var2[2];
  p_output1[4]=(t9591*(t9652 - 1.*t9482*t9660) + t9584*(t9549*t9656 + t9564*t9660 + t9670))*var2[0] + (t9604*(-1.*t9564*t9660 + t9689 + t9720) + t9591*(t9574*t9660 + t9694 + t9724))*var2[1] + (t9604*(t9482*t9660 + t9677) + t9584*(-1.*t9570*t9656 - 1.*t9574*t9660 + t9682))*var2[2];
  p_output1[5]=t9549*(-1.*t4548*t9645 + t3657*t9649)*var2[0] + (t9570*(-1.*t3657*t9561*t9645 - 1.*t4548*t9561*t9649 + t9720) + t9549*(t3657*t9549*t9645 + t4548*t9549*t9649 + t9724))*var2[1] + t9570*(t4548*t9645 - 1.*t3657*t9649)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t9570*(-1.*t9561*t9643 + t9720) + t9549*(t9549*t9643 + t9724))*var2[1] + (-0.15121*t9561 - 0.15121*t9570)*var2[2];
  p_output1[13]=(0.28121*t9547 - 0.305*t9485*t9547 - 1.*t9547*t9640)*var2[0] + (0.28121*t9485 + 0.305*Power(t9547,2) - 1.*t9485*t9640)*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
