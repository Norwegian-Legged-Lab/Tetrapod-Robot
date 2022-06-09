/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:30 GMT+02:00
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
  double t2959;
  double t9577;
  double t3002;
  double t9592;
  double t9598;
  double t9587;
  double t9600;
  double t9483;
  double t9612;
  double t9613;
  double t9614;
  double t9578;
  double t9610;
  double t9622;
  double t9623;
  double t9624;
  double t9567;
  double t9580;
  double t9585;
  double t9675;
  double t9673;
  double t9597;
  double t9605;
  double t9609;
  double t9615;
  double t9616;
  double t9617;
  double t9625;
  double t9663;
  double t9667;
  double t9676;
  double t9678;
  double t9679;
  double t9684;
  double t9685;
  double t9686;
  double t9688;
  double t9690;
  double t9691;
  double t9696;
  double t9697;
  double t9698;
  double t9700;
  double t9701;
  double t9702;
  double t9611;
  double t9618;
  double t9619;
  double t9721;
  double t9722;
  double t9727;
  double t9728;
  double t9729;
  double t9730;
  double t9731;
  double t9732;
  double t9733;
  double t9734;
  double t9735;
  double t9736;
  double t9737;
  double t9741;
  double t9742;
  double t9743;
  double t9723;
  double t9725;
  double t9726;
  double t9738;
  double t9739;
  double t9747;
  double t9748;
  double t9749;
  double t9750;
  double t9752;
  double t9753;
  double t9754;
  double t9740;
  double t9744;
  double t9745;
  double t9751;
  double t9755;
  double t9756;
  double t9758;
  double t9759;
  double t9760;
  double t9621;
  double t9668;
  double t9669;
  double t9746;
  double t9764;
  double t9771;
  double t9776;
  double t9783;
  double t9788;
  double t9814;
  double t9818;
  t2959 = Cos(var1[4]);
  t9577 = Cos(var1[9]);
  t3002 = Cos(var1[5]);
  t9592 = Cos(var1[11]);
  t9598 = Sin(var1[10]);
  t9587 = Cos(var1[10]);
  t9600 = Sin(var1[11]);
  t9483 = Sin(var1[9]);
  t9612 = -1.*t9592*t9598;
  t9613 = t9587*t9600;
  t9614 = t9612 + t9613;
  t9578 = Sin(var1[5]);
  t9610 = Sin(var1[4]);
  t9622 = -1.*t9587*t9592;
  t9623 = -1.*t9598*t9600;
  t9624 = t9622 + t9623;
  t9567 = t3002*t9483;
  t9580 = t9577*t9578;
  t9585 = t9567 + t9580;
  t9675 = Cos(var1[3]);
  t9673 = Sin(var1[3]);
  t9597 = t9587*t9592;
  t9605 = t9598*t9600;
  t9609 = t9597 + t9605;
  t9615 = t9577*t3002*t9614;
  t9616 = -1.*t9483*t9614*t9578;
  t9617 = t9615 + t9616;
  t9625 = t9577*t3002*t9624;
  t9663 = -1.*t9483*t9624*t9578;
  t9667 = t9625 + t9663;
  t9676 = -1.*t9577*t3002;
  t9678 = t9483*t9578;
  t9679 = t9676 + t9678;
  t9684 = t3002*t9483*t9614;
  t9685 = t9577*t9614*t9578;
  t9686 = t9684 + t9685;
  t9688 = t2959*t9609;
  t9690 = -1.*t9610*t9617;
  t9691 = t9688 + t9690;
  t9696 = t3002*t9483*t9624;
  t9697 = t9577*t9624*t9578;
  t9698 = t9696 + t9697;
  t9700 = t2959*t9614;
  t9701 = -1.*t9610*t9667;
  t9702 = t9700 + t9701;
  t9611 = t9609*t9610;
  t9618 = t2959*t9617;
  t9619 = t9611 + t9618;
  t9721 = -1.*t9577;
  t9722 = 1. + t9721;
  t9727 = -1.*t9587;
  t9728 = 1. + t9727;
  t9729 = -0.28121*t9728;
  t9730 = -1.*t9592;
  t9731 = 1. + t9730;
  t9732 = -0.50321*t9731;
  t9733 = -0.19821*t9592;
  t9734 = t9732 + t9733;
  t9735 = t9587*t9734;
  t9736 = 0.305*t9598*t9600;
  t9737 = t9729 + t9735 + t9736;
  t9741 = -0.15121*t9722;
  t9742 = t9577*t9737;
  t9743 = t9741 + t9742;
  t9723 = 0.15121*t9722;
  t9725 = 0.15121*t9577;
  t9726 = 0.15121*t9483;
  t9738 = t9483*t9737;
  t9739 = t9723 + t9725 + t9726 + t9738;
  t9747 = 0.28121*t9598;
  t9748 = t9734*t9598;
  t9749 = -0.305*t9587*t9600;
  t9750 = t9747 + t9748 + t9749;
  t9752 = t3002*t9743;
  t9753 = -1.*t9739*t9578;
  t9754 = t9752 + t9753;
  t9740 = t3002*t9739;
  t9744 = t9743*t9578;
  t9745 = t9740 + t9744;
  t9751 = t9750*t9610;
  t9755 = t2959*t9754;
  t9756 = t9751 + t9755;
  t9758 = t2959*t9750;
  t9759 = -1.*t9610*t9754;
  t9760 = t9758 + t9759;
  t9621 = t9614*t9610;
  t9668 = t2959*t9667;
  t9669 = t9621 + t9668;
  t9746 = -1.*t9679*t9745;
  t9764 = t9686*t9745;
  t9771 = t9679*t9745;
  t9776 = -1.*t9698*t9745;
  t9783 = -1.*t9686*t9745;
  t9788 = t9698*t9745;
  t9814 = -1.*t9750*t9609;
  t9818 = t9750*t9614;
  p_output1[0]=t9669*var2[0] + t2959*t9585*var2[1] + t9619*var2[2];
  p_output1[1]=(t9675*t9698 - 1.*t9673*t9702)*var2[0] + (t9585*t9610*t9673 + t9675*t9679)*var2[1] + (t9675*t9686 - 1.*t9673*t9691)*var2[2];
  p_output1[2]=(t9673*t9698 + t9675*t9702)*var2[0] + (-1.*t9585*t9610*t9675 + t9673*t9679)*var2[1] + (t9673*t9686 + t9675*t9691)*var2[2];
  p_output1[3]=(t9619*(t9746 - 1.*t2959*t9585*t9756 + t9585*t9610*t9760) + t2959*t9585*(t9619*t9756 + t9691*t9760 + t9764))*var2[0] + (t9669*(-1.*t9619*t9756 - 1.*t9691*t9760 + t9783) + t9619*(t9669*t9756 + t9702*t9760 + t9788))*var2[1] + (t9669*(t2959*t9585*t9756 - 1.*t9585*t9610*t9760 + t9771) + t2959*t9585*(-1.*t9669*t9756 - 1.*t9702*t9760 + t9776))*var2[2];
  p_output1[4]=(t9686*(t9746 - 1.*t9585*t9754) + t9679*(t9609*t9750 + t9617*t9754 + t9764))*var2[0] + (t9698*(-1.*t9617*t9754 + t9783 + t9814) + t9686*(t9667*t9754 + t9788 + t9818))*var2[1] + (t9698*(t9585*t9754 + t9771) + t9679*(-1.*t9614*t9750 - 1.*t9667*t9754 + t9776))*var2[2];
  p_output1[5]=t9609*(t9577*t9739 - 1.*t9483*t9743)*var2[0] + (t9614*(-1.*t9483*t9614*t9739 - 1.*t9577*t9614*t9743 + t9814) + t9609*(t9483*t9624*t9739 + t9577*t9624*t9743 + t9818))*var2[1] + t9614*(-1.*t9577*t9739 + t9483*t9743)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t9609 + 0.15121*t9624)*var2[0] + (-0.15121 + t9614*(-1.*t9614*t9737 + t9814) + t9609*(t9624*t9737 + t9818))*var2[1];
  p_output1[10]=(0.28121*t9600 - 0.305*t9592*t9600 + t9600*t9734)*var2[0] + (0.28121*t9592 + 0.305*Power(t9600,2) + t9592*t9734)*var2[2];
  p_output1[11]=-0.305*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
