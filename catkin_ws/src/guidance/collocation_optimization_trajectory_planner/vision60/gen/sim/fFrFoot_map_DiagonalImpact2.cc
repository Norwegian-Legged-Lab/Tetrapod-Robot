/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:48 GMT+02:00
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
  double t4947;
  double t4921;
  double t4925;
  double t5121;
  double t4942;
  double t5122;
  double t5125;
  double t5749;
  double t9513;
  double t9414;
  double t9454;
  double t9509;
  double t9519;
  double t4915;
  double t5154;
  double t5143;
  double t9510;
  double t9520;
  double t9521;
  double t9545;
  double t9533;
  double t9538;
  double t9542;
  double t9531;
  double t9546;
  double t9548;
  double t9549;
  double t9617;
  double t9618;
  double t9620;
  double t9622;
  double t9623;
  double t9625;
  double t9626;
  double t9627;
  double t9628;
  double t9616;
  double t9621;
  double t9629;
  double t9630;
  double t9635;
  double t9637;
  double t9638;
  double t9639;
  double t9640;
  double t9641;
  double t9611;
  double t9613;
  double t9614;
  double t9615;
  double t9632;
  double t9633;
  double t9650;
  double t9651;
  double t9652;
  double t9655;
  double t9656;
  double t9657;
  double t9646;
  double t9647;
  double t9649;
  double t9634;
  double t9642;
  double t9643;
  double t9558;
  double t9559;
  double t9560;
  double t9653;
  double t9659;
  double t9660;
  double t9556;
  double t9561;
  double t9562;
  double t9605;
  double t9609;
  double t9610;
  double t9666;
  double t9667;
  double t9669;
  double t9673;
  double t9674;
  double t9675;
  double t9645;
  double t9676;
  double t9685;
  double t9689;
  double t9662;
  double t9663;
  double t9665;
  double t5148;
  double t9526;
  double t9530;
  double t9678;
  double t9679;
  double t9680;
  double t9717;
  double t9722;
  double t9732;
  double t9728;
  double t9742;
  double t9737;
  double t9759;
  double t9764;
  double t9770;
  double t9774;
  t4947 = Cos(var1[13]);
  t4921 = Cos(var1[14]);
  t4925 = Sin(var1[13]);
  t5121 = Sin(var1[14]);
  t4942 = t4921*t4925;
  t5122 = -1.*t4947*t5121;
  t5125 = t4942 + t5122;
  t5749 = Cos(var1[5]);
  t9513 = Sin(var1[12]);
  t9414 = t4947*t4921;
  t9454 = t4925*t5121;
  t9509 = t9414 + t9454;
  t9519 = Sin(var1[5]);
  t4915 = Cos(var1[12]);
  t5154 = Cos(var1[4]);
  t5143 = Sin(var1[4]);
  t9510 = t5749*t9509;
  t9520 = t9513*t5125*t9519;
  t9521 = t9510 + t9520;
  t9545 = Sin(var1[3]);
  t9533 = -1.*t5749*t9513*t5125;
  t9538 = t9509*t9519;
  t9542 = t9533 + t9538;
  t9531 = Cos(var1[3]);
  t9546 = t4915*t5154*t5125;
  t9548 = -1.*t5143*t9521;
  t9549 = t9546 + t9548;
  t9617 = -0.0641*t4921;
  t9618 = -0.28*t5121;
  t9620 = t9617 + t9618;
  t9622 = -1.*t4921;
  t9623 = 1. + t9622;
  t9625 = 0.075*t9623;
  t9626 = 0.355*t4921;
  t9627 = -0.0641*t5121;
  t9628 = t9625 + t9626 + t9627;
  t9616 = -0.325*t4925;
  t9621 = t4947*t9620;
  t9629 = t4925*t9628;
  t9630 = t9616 + t9621 + t9629;
  t9635 = -1.*t4947;
  t9637 = 1. + t9635;
  t9638 = 0.325*t9637;
  t9639 = -1.*t4925*t9620;
  t9640 = t4947*t9628;
  t9641 = t9638 + t9639 + t9640;
  t9611 = -1.*t4915;
  t9613 = 1. + t9611;
  t9614 = -0.1575*t9613;
  t9615 = -0.2255*t4915;
  t9632 = -1.*t9513*t9630;
  t9633 = t9614 + t9615 + t9632;
  t9650 = -0.068*t9513;
  t9651 = t4915*t9630;
  t9652 = t9650 + t9651;
  t9655 = t5749*t9641;
  t9656 = -1.*t9633*t9519;
  t9657 = t9655 + t9656;
  t9646 = t9513*t5143;
  t9647 = -1.*t4915*t5154*t9519;
  t9649 = t9646 + t9647;
  t9634 = t5749*t9633;
  t9642 = t9641*t9519;
  t9643 = t9634 + t9642;
  t9558 = -1.*t4921*t4925;
  t9559 = t4947*t5121;
  t9560 = t9558 + t9559;
  t9653 = t9652*t5143;
  t9659 = t5154*t9657;
  t9660 = t9653 + t9659;
  t9556 = t4915*t9509*t5143;
  t9561 = t5749*t9560;
  t9562 = t9513*t9509*t9519;
  t9605 = t9561 + t9562;
  t9609 = t5154*t9605;
  t9610 = t9556 + t9609;
  t9666 = t5154*t9652;
  t9667 = -1.*t5143*t9657;
  t9669 = t9666 + t9667;
  t9673 = -1.*t5749*t9513*t9509;
  t9674 = t9560*t9519;
  t9675 = t9673 + t9674;
  t9645 = -1.*t4915*t5749*t9643;
  t9676 = t9643*t9675;
  t9685 = -1.*t9513*t9652;
  t9689 = t4915*t9652*t9509;
  t9662 = t5154*t9513;
  t9663 = t4915*t5143*t9519;
  t9665 = t9662 + t9663;
  t5148 = t4915*t5125*t5143;
  t9526 = t5154*t9521;
  t9530 = t5148 + t9526;
  t9678 = t4915*t5154*t9509;
  t9679 = -1.*t5143*t9605;
  t9680 = t9678 + t9679;
  t9717 = t9643*t9542;
  t9722 = -1.*t9643*t9675;
  t9732 = -1.*t4915*t9652*t9509;
  t9728 = t4915*t9652*t5125;
  t9742 = t9641*t9509;
  t9737 = -1.*t9641*t9560;
  t9759 = t4915*t5749*t9643;
  t9764 = -1.*t9643*t9542;
  t9770 = t9513*t9652;
  t9774 = -1.*t4915*t9652*t5125;
  p_output1[0]=t9530;
  p_output1[1]=t9531*t9542 - 1.*t9545*t9549;
  p_output1[2]=t9542*t9545 + t9531*t9549;
  p_output1[3]=t9610*(t9645 - 1.*t9649*t9660 - 1.*t9665*t9669) + t9649*(t9610*t9660 + t9676 + t9669*t9680);
  p_output1[4]=t9675*(t9645 + t4915*t9519*t9657 + t9685) + t4915*t5749*(t9605*t9657 + t9676 + t9689);
  p_output1[5]=t4915*t9509*(-1.*t4915*t9633 + t9685) + t9513*(-1.*t9509*t9513*t9633 + t9560*t9641 + t9689);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t5125 + 0.2255*t9560;
  p_output1[13]=0.325*t5121 - 1.*t4921*t9620 - 1.*t5121*t9628;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9649;
  p_output1[19]=t4915*t5749*t9531 - 1.*t9545*t9665;
  p_output1[20]=t4915*t5749*t9545 + t9531*t9665;
  p_output1[21]=t9610*(t9530*t9660 + t9549*t9669 + t9717) + t9530*(-1.*t9610*t9660 - 1.*t9669*t9680 + t9722);
  p_output1[22]=t9675*(t9521*t9657 + t9717 + t9728) + t9542*(-1.*t9605*t9657 + t9722 + t9732);
  p_output1[23]=t4915*t5125*(t9509*t9513*t9633 + t9732 + t9737) + t4915*t9509*(-1.*t5125*t9513*t9633 + t9728 + t9742);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t9509*(-1.*t9509*t9630 + t9737) + t9560*(t5125*t9630 + t9742);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9610;
  p_output1[37]=t9531*t9675 - 1.*t9545*t9680;
  p_output1[38]=t9545*t9675 + t9531*t9680;
  p_output1[39]=t9530*(t9649*t9660 + t9665*t9669 + t9759) + t9649*(-1.*t9530*t9660 - 1.*t9549*t9669 + t9764);
  p_output1[40]=t9542*(-1.*t4915*t9519*t9657 + t9759 + t9770) + t4915*t5749*(-1.*t9521*t9657 + t9764 + t9774);
  p_output1[41]=t4915*t5125*(t4915*t9633 + t9770) + t9513*(t5125*t9513*t9633 - 1.*t9509*t9641 + t9774);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t9509;
  p_output1[49]=-0.325*t4921 - 1.*t5121*t9620 + t4921*t9628;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
