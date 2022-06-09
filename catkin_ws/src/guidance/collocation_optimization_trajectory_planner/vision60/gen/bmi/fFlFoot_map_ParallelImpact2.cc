/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:50:00 GMT+02:00
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
  double t9494;
  double t9550;
  double t9551;
  double t9553;
  double t9560;
  double t9561;
  double t9562;
  double t9584;
  double t9574;
  double t9573;
  double t9585;
  double t9586;
  double t9587;
  double t9572;
  double t5648;
  double t9463;
  double t9578;
  double t9588;
  double t9590;
  double t9599;
  double t9595;
  double t9596;
  double t9597;
  double t9594;
  double t9601;
  double t9602;
  double t9604;
  double t9663;
  double t9665;
  double t9666;
  double t9668;
  double t9669;
  double t9670;
  double t9672;
  double t9673;
  double t9674;
  double t9662;
  double t9667;
  double t9675;
  double t9677;
  double t9657;
  double t9658;
  double t9660;
  double t9661;
  double t9678;
  double t9679;
  double t9680;
  double t9681;
  double t9682;
  double t9683;
  double t9685;
  double t9686;
  double t9687;
  double t9689;
  double t9690;
  double t9692;
  double t9693;
  double t9695;
  double t9700;
  double t9701;
  double t9702;
  double t9709;
  double t9710;
  double t9711;
  double t9715;
  double t9716;
  double t9717;
  double t9703;
  double t9705;
  double t9706;
  double t9714;
  double t9718;
  double t9719;
  double t9720;
  double t9721;
  double t9722;
  double t9691;
  double t9696;
  double t9697;
  double t9712;
  double t9724;
  double t9725;
  double t9726;
  double t9727;
  double t9739;
  double t9742;
  double t9654;
  double t9655;
  double t9656;
  double t9566;
  double t9591;
  double t9592;
  double t9729;
  double t9730;
  double t9731;
  double t9768;
  double t9773;
  double t9783;
  double t9779;
  double t9793;
  double t9788;
  double t9812;
  double t9815;
  double t9822;
  double t9825;
  t9494 = Cos(var1[8]);
  t9550 = Sin(var1[7]);
  t9551 = t9494*t9550;
  t9553 = Cos(var1[7]);
  t9560 = Sin(var1[8]);
  t9561 = -1.*t9553*t9560;
  t9562 = t9551 + t9561;
  t9584 = Cos(var1[5]);
  t9574 = Sin(var1[6]);
  t9573 = Sin(var1[5]);
  t9585 = t9553*t9494;
  t9586 = t9550*t9560;
  t9587 = t9585 + t9586;
  t9572 = Cos(var1[4]);
  t5648 = Cos(var1[6]);
  t9463 = Sin(var1[4]);
  t9578 = t9573*t9574*t9562;
  t9588 = t9584*t9587;
  t9590 = t9578 + t9588;
  t9599 = Sin(var1[3]);
  t9595 = -1.*t9584*t9574*t9562;
  t9596 = t9573*t9587;
  t9597 = t9595 + t9596;
  t9594 = Cos(var1[3]);
  t9601 = t9572*t5648*t9562;
  t9602 = -1.*t9463*t9590;
  t9604 = t9601 + t9602;
  t9663 = -0.0641*t9494;
  t9665 = -0.28*t9560;
  t9666 = t9663 + t9665;
  t9668 = -1.*t9494;
  t9669 = 1. + t9668;
  t9670 = 0.075*t9669;
  t9672 = 0.355*t9494;
  t9673 = -0.0641*t9560;
  t9674 = t9670 + t9672 + t9673;
  t9662 = -0.325*t9550;
  t9667 = t9553*t9666;
  t9675 = t9550*t9674;
  t9677 = t9662 + t9667 + t9675;
  t9657 = -1.*t5648;
  t9658 = 1. + t9657;
  t9660 = 0.1575*t9658;
  t9661 = 0.2255*t5648;
  t9678 = -1.*t9574*t9677;
  t9679 = t9660 + t9661 + t9678;
  t9680 = -1.*t9573*t9679;
  t9681 = -1.*t9553;
  t9682 = 1. + t9681;
  t9683 = 0.325*t9682;
  t9685 = -1.*t9550*t9666;
  t9686 = t9553*t9674;
  t9687 = t9683 + t9685 + t9686;
  t9689 = t9584*t9687;
  t9690 = t9680 + t9689;
  t9692 = 0.068*t9574;
  t9693 = t5648*t9677;
  t9695 = t9692 + t9693;
  t9700 = -1.*t9572*t5648*t9573;
  t9701 = t9463*t9574;
  t9702 = t9700 + t9701;
  t9709 = t9584*t9679;
  t9710 = t9573*t9687;
  t9711 = t9709 + t9710;
  t9715 = -1.*t9494*t9550;
  t9716 = t9553*t9560;
  t9717 = t9715 + t9716;
  t9703 = t9572*t9690;
  t9705 = t9463*t9695;
  t9706 = t9703 + t9705;
  t9714 = t5648*t9463*t9587;
  t9718 = t9584*t9717;
  t9719 = t9573*t9574*t9587;
  t9720 = t9718 + t9719;
  t9721 = t9572*t9720;
  t9722 = t9714 + t9721;
  t9691 = -1.*t9463*t9690;
  t9696 = t9572*t9695;
  t9697 = t9691 + t9696;
  t9712 = -1.*t9584*t5648*t9711;
  t9724 = t9573*t9717;
  t9725 = -1.*t9584*t9574*t9587;
  t9726 = t9724 + t9725;
  t9727 = t9711*t9726;
  t9739 = -1.*t9574*t9695;
  t9742 = t5648*t9695*t9587;
  t9654 = t5648*t9463*t9573;
  t9655 = t9572*t9574;
  t9656 = t9654 + t9655;
  t9566 = t5648*t9463*t9562;
  t9591 = t9572*t9590;
  t9592 = t9566 + t9591;
  t9729 = t9572*t5648*t9587;
  t9730 = -1.*t9463*t9720;
  t9731 = t9729 + t9730;
  t9768 = t9711*t9597;
  t9773 = -1.*t9711*t9726;
  t9783 = -1.*t5648*t9695*t9587;
  t9779 = t5648*t9695*t9562;
  t9793 = t9687*t9587;
  t9788 = -1.*t9687*t9717;
  t9812 = t9584*t5648*t9711;
  t9815 = -1.*t9711*t9597;
  t9822 = t9574*t9695;
  t9825 = -1.*t5648*t9695*t9562;
  p_output1[0]=t9592;
  p_output1[1]=t9594*t9597 - 1.*t9599*t9604;
  p_output1[2]=t9597*t9599 + t9594*t9604;
  p_output1[3]=(-1.*t9656*t9697 - 1.*t9702*t9706 + t9712)*t9722 + t9702*(t9706*t9722 + t9727 + t9697*t9731);
  p_output1[4]=t9726*(t5648*t9573*t9690 + t9712 + t9739) + t5648*t9584*(t9690*t9720 + t9727 + t9742);
  p_output1[5]=t5648*t9587*(-1.*t5648*t9679 + t9739) + t9574*(-1.*t9574*t9587*t9679 + t9687*t9717 + t9742);
  p_output1[6]=-0.1575*t9562 - 0.2255*t9717;
  p_output1[7]=0.325*t9560 - 1.*t9494*t9666 - 1.*t9560*t9674;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9702;
  p_output1[19]=t5648*t9584*t9594 - 1.*t9599*t9656;
  p_output1[20]=t5648*t9584*t9599 + t9594*t9656;
  p_output1[21]=t9722*(t9604*t9697 + t9592*t9706 + t9768) + t9592*(-1.*t9706*t9722 - 1.*t9697*t9731 + t9773);
  p_output1[22]=t9726*(t9590*t9690 + t9768 + t9779) + t9597*(-1.*t9690*t9720 + t9773 + t9783);
  p_output1[23]=t5648*t9562*(t9574*t9587*t9679 + t9783 + t9788) + t5648*t9587*(-1.*t9562*t9574*t9679 + t9779 + t9793);
  p_output1[24]=t9587*(-1.*t9587*t9677 + t9788) + t9717*(t9562*t9677 + t9793);
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
  p_output1[36]=t9722;
  p_output1[37]=t9594*t9726 - 1.*t9599*t9731;
  p_output1[38]=t9599*t9726 + t9594*t9731;
  p_output1[39]=t9592*(t9656*t9697 + t9702*t9706 + t9812) + t9702*(-1.*t9604*t9697 - 1.*t9592*t9706 + t9815);
  p_output1[40]=t9597*(-1.*t5648*t9573*t9690 + t9812 + t9822) + t5648*t9584*(-1.*t9590*t9690 + t9815 + t9825);
  p_output1[41]=t5648*t9562*(t5648*t9679 + t9822) + t9574*(t9562*t9574*t9679 - 1.*t9587*t9687 + t9825);
  p_output1[42]=0.068*t9587;
  p_output1[43]=-0.325*t9494 - 1.*t9560*t9666 + t9494*t9674;
  p_output1[44]=-0.28;
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

#include "fFlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
