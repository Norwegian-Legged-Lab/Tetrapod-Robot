/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:19 GMT+02:00
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
  double t3233;
  double t20500;
  double t13722;
  double t20564;
  double t20566;
  double t20559;
  double t20571;
  double t13726;
  double t20579;
  double t20580;
  double t20581;
  double t20501;
  double t20577;
  double t20565;
  double t20575;
  double t20576;
  double t20495;
  double t20502;
  double t20503;
  double t20602;
  double t20600;
  double t20582;
  double t20583;
  double t20584;
  double t20588;
  double t20590;
  double t20591;
  double t20593;
  double t20594;
  double t20595;
  double t20603;
  double t20604;
  double t20605;
  double t20610;
  double t20612;
  double t20613;
  double t20615;
  double t20616;
  double t20618;
  double t20623;
  double t20624;
  double t20625;
  double t20627;
  double t20628;
  double t20629;
  double t20578;
  double t20585;
  double t20586;
  double t20647;
  double t20649;
  double t20654;
  double t20655;
  double t20656;
  double t20657;
  double t20658;
  double t20659;
  double t20660;
  double t20661;
  double t20662;
  double t20663;
  double t20664;
  double t20668;
  double t20669;
  double t20670;
  double t20650;
  double t20651;
  double t20652;
  double t20665;
  double t20666;
  double t20674;
  double t20675;
  double t20676;
  double t20677;
  double t20679;
  double t20680;
  double t20681;
  double t20667;
  double t20671;
  double t20672;
  double t20678;
  double t20682;
  double t20683;
  double t20685;
  double t20686;
  double t20687;
  double t20592;
  double t20596;
  double t20597;
  double t20673;
  double t20691;
  double t20698;
  double t20703;
  double t20710;
  double t20715;
  double t20741;
  double t20745;
  t3233 = Cos(var1[4]);
  t20500 = Cos(var1[12]);
  t13722 = Cos(var1[5]);
  t20564 = Cos(var1[14]);
  t20566 = Sin(var1[13]);
  t20559 = Cos(var1[13]);
  t20571 = Sin(var1[14]);
  t13726 = Sin(var1[12]);
  t20579 = t20564*t20566;
  t20580 = -1.*t20559*t20571;
  t20581 = t20579 + t20580;
  t20501 = Sin(var1[5]);
  t20577 = Sin(var1[4]);
  t20565 = t20559*t20564;
  t20575 = t20566*t20571;
  t20576 = t20565 + t20575;
  t20495 = -1.*t13722*t13726;
  t20502 = -1.*t20500*t20501;
  t20503 = t20495 + t20502;
  t20602 = Cos(var1[3]);
  t20600 = Sin(var1[3]);
  t20582 = t20500*t13722*t20581;
  t20583 = -1.*t13726*t20581*t20501;
  t20584 = t20582 + t20583;
  t20588 = -1.*t20564*t20566;
  t20590 = t20559*t20571;
  t20591 = t20588 + t20590;
  t20593 = t20500*t13722*t20576;
  t20594 = -1.*t13726*t20576*t20501;
  t20595 = t20593 + t20594;
  t20603 = t20500*t13722;
  t20604 = -1.*t13726*t20501;
  t20605 = t20603 + t20604;
  t20610 = t13722*t13726*t20581;
  t20612 = t20500*t20581*t20501;
  t20613 = t20610 + t20612;
  t20615 = t3233*t20576;
  t20616 = -1.*t20577*t20584;
  t20618 = t20615 + t20616;
  t20623 = t13722*t13726*t20576;
  t20624 = t20500*t20576*t20501;
  t20625 = t20623 + t20624;
  t20627 = t3233*t20591;
  t20628 = -1.*t20577*t20595;
  t20629 = t20627 + t20628;
  t20578 = t20576*t20577;
  t20585 = t3233*t20584;
  t20586 = t20578 + t20585;
  t20647 = -1.*t20500;
  t20649 = 1. + t20647;
  t20654 = -1.*t20559;
  t20655 = 1. + t20654;
  t20656 = 0.28121*t20655;
  t20657 = -1.*t20564;
  t20658 = 1. + t20657;
  t20659 = 0.50321*t20658;
  t20660 = 0.19821*t20564;
  t20661 = t20659 + t20660;
  t20662 = t20559*t20661;
  t20663 = -0.305*t20566*t20571;
  t20664 = t20656 + t20662 + t20663;
  t20668 = 0.15121*t20649;
  t20669 = t20500*t20664;
  t20670 = t20668 + t20669;
  t20650 = -0.15121*t20649;
  t20651 = -0.15121*t20500;
  t20652 = -0.15121*t13726;
  t20665 = t13726*t20664;
  t20666 = t20650 + t20651 + t20652 + t20665;
  t20674 = 0.28121*t20566;
  t20675 = -1.*t20661*t20566;
  t20676 = -0.305*t20559*t20571;
  t20677 = t20674 + t20675 + t20676;
  t20679 = t13722*t20670;
  t20680 = -1.*t20666*t20501;
  t20681 = t20679 + t20680;
  t20667 = t13722*t20666;
  t20671 = t20670*t20501;
  t20672 = t20667 + t20671;
  t20678 = t20677*t20577;
  t20682 = t3233*t20681;
  t20683 = t20678 + t20682;
  t20685 = t3233*t20677;
  t20686 = -1.*t20577*t20681;
  t20687 = t20685 + t20686;
  t20592 = t20591*t20577;
  t20596 = t3233*t20595;
  t20597 = t20592 + t20596;
  t20673 = -1.*t20605*t20672;
  t20691 = t20613*t20672;
  t20698 = t20605*t20672;
  t20703 = -1.*t20625*t20672;
  t20710 = -1.*t20613*t20672;
  t20715 = t20625*t20672;
  t20741 = -1.*t20677*t20576;
  t20745 = t20677*t20591;
  p_output1[0]=t20597*var2[0] + t20503*t3233*var2[1] + t20586*var2[2];
  p_output1[1]=(t20602*t20625 - 1.*t20600*t20629)*var2[0] + (t20503*t20577*t20600 + t20602*t20605)*var2[1] + (t20602*t20613 - 1.*t20600*t20618)*var2[2];
  p_output1[2]=(t20600*t20625 + t20602*t20629)*var2[0] + (-1.*t20503*t20577*t20602 + t20600*t20605)*var2[1] + (t20600*t20613 + t20602*t20618)*var2[2];
  p_output1[3]=(t20503*(t20586*t20683 + t20618*t20687 + t20691)*t3233 + t20586*(t20673 + t20503*t20577*t20687 - 1.*t20503*t20683*t3233))*var2[0] + (t20597*(-1.*t20586*t20683 - 1.*t20618*t20687 + t20710) + t20586*(t20597*t20683 + t20629*t20687 + t20715))*var2[1] + (t20503*(-1.*t20597*t20683 - 1.*t20629*t20687 + t20703)*t3233 + t20597*(-1.*t20503*t20577*t20687 + t20698 + t20503*t20683*t3233))*var2[2];
  p_output1[4]=(t20613*(t20673 - 1.*t20503*t20681) + t20605*(t20576*t20677 + t20584*t20681 + t20691))*var2[0] + (t20625*(-1.*t20584*t20681 + t20710 + t20741) + t20613*(t20595*t20681 + t20715 + t20745))*var2[1] + (t20625*(t20503*t20681 + t20698) + t20605*(-1.*t20591*t20677 - 1.*t20595*t20681 + t20703))*var2[2];
  p_output1[5]=t20576*(-1.*t20500*t20666 + t13726*t20670)*var2[0] + (t20591*(-1.*t13726*t20581*t20666 - 1.*t20500*t20581*t20670 + t20741) + t20576*(t13726*t20576*t20666 + t20500*t20576*t20670 + t20745))*var2[1] + t20591*(t20500*t20666 - 1.*t13726*t20670)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t20591*(-1.*t20581*t20664 + t20741) + t20576*(t20576*t20664 + t20745))*var2[1] + (-0.15121*t20581 - 0.15121*t20591)*var2[2];
  p_output1[13]=(0.28121*t20571 - 0.305*t20564*t20571 - 1.*t20571*t20661)*var2[0] + (0.28121*t20564 + 0.305*Power(t20571,2) - 1.*t20564*t20661)*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
