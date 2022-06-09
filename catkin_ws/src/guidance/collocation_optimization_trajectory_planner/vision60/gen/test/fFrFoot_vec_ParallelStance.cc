/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:40 GMT+02:00
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
  double t9793;
  double t6476;
  double t10053;
  double t18521;
  double t17877;
  double t17982;
  double t22710;
  double t6380;
  double t18472;
  double t22719;
  double t22724;
  double t11208;
  double t27422;
  double t29343;
  double t29353;
  double t23733;
  double t29531;
  double t29535;
  double t29354;
  double t29355;
  double t29356;
  double t29464;
  double t29491;
  double t29505;
  double t29507;
  double t29512;
  double t29516;
  double t29537;
  double t29539;
  double t29540;
  double t29548;
  double t29549;
  double t29552;
  double t29554;
  double t29555;
  double t29557;
  double t29572;
  double t29576;
  double t29580;
  double t29582;
  double t29587;
  double t29588;
  double t23534;
  double t29359;
  double t29444;
  double t29631;
  double t29632;
  double t29634;
  double t29637;
  double t29638;
  double t29639;
  double t29642;
  double t29643;
  double t29644;
  double t8815;
  double t15990;
  double t17700;
  double t29630;
  double t29636;
  double t29645;
  double t29646;
  double t29651;
  double t29653;
  double t29654;
  double t29655;
  double t29656;
  double t29657;
  double t29625;
  double t29627;
  double t29628;
  double t29629;
  double t29648;
  double t29649;
  double t29663;
  double t29664;
  double t29667;
  double t29670;
  double t29672;
  double t29673;
  double t29650;
  double t29659;
  double t29660;
  double t29668;
  double t29674;
  double t29676;
  double t29679;
  double t29682;
  double t29683;
  double t29459;
  double t29518;
  double t29522;
  double t29661;
  double t29687;
  double t29694;
  double t29701;
  double t29710;
  double t29715;
  double t29756;
  double t29763;
  double t29723;
  double t29727;
  double t29750;
  double t29737;
  double t29821;
  double t29812;
  t9793 = Cos(var1[12]);
  t6476 = Sin(var1[4]);
  t10053 = Cos(var1[4]);
  t18521 = Cos(var1[13]);
  t17877 = Cos(var1[14]);
  t17982 = Sin(var1[13]);
  t22710 = Sin(var1[14]);
  t6380 = Sin(var1[12]);
  t18472 = t17877*t17982;
  t22719 = -1.*t18521*t22710;
  t22724 = t18472 + t22719;
  t11208 = Sin(var1[5]);
  t27422 = t18521*t17877;
  t29343 = t17982*t22710;
  t29353 = t27422 + t29343;
  t23733 = Cos(var1[5]);
  t29531 = Cos(var1[3]);
  t29535 = Sin(var1[3]);
  t29354 = t23733*t29353;
  t29355 = t6380*t22724*t11208;
  t29356 = t29354 + t29355;
  t29464 = -1.*t17877*t17982;
  t29491 = t18521*t22710;
  t29505 = t29464 + t29491;
  t29507 = t23733*t29505;
  t29512 = t6380*t29353*t11208;
  t29516 = t29507 + t29512;
  t29537 = t10053*t6380;
  t29539 = t9793*t6476*t11208;
  t29540 = t29537 + t29539;
  t29548 = -1.*t23733*t6380*t22724;
  t29549 = t29353*t11208;
  t29552 = t29548 + t29549;
  t29554 = t9793*t10053*t22724;
  t29555 = -1.*t6476*t29356;
  t29557 = t29554 + t29555;
  t29572 = -1.*t23733*t6380*t29353;
  t29576 = t29505*t11208;
  t29580 = t29572 + t29576;
  t29582 = t9793*t10053*t29353;
  t29587 = -1.*t6476*t29516;
  t29588 = t29582 + t29587;
  t23534 = t9793*t22724*t6476;
  t29359 = t10053*t29356;
  t29444 = t23534 + t29359;
  t29631 = -0.0641*t17877;
  t29632 = -0.28*t22710;
  t29634 = t29631 + t29632;
  t29637 = -1.*t17877;
  t29638 = 1. + t29637;
  t29639 = 0.075*t29638;
  t29642 = 0.355*t17877;
  t29643 = -0.0641*t22710;
  t29644 = t29639 + t29642 + t29643;
  t8815 = t6380*t6476;
  t15990 = -1.*t9793*t10053*t11208;
  t17700 = t8815 + t15990;
  t29630 = -0.325*t17982;
  t29636 = t18521*t29634;
  t29645 = t17982*t29644;
  t29646 = t29630 + t29636 + t29645;
  t29651 = -1.*t18521;
  t29653 = 1. + t29651;
  t29654 = 0.325*t29653;
  t29655 = -1.*t17982*t29634;
  t29656 = t18521*t29644;
  t29657 = t29654 + t29655 + t29656;
  t29625 = -1.*t9793;
  t29627 = 1. + t29625;
  t29628 = -0.1575*t29627;
  t29629 = -0.2255*t9793;
  t29648 = -1.*t6380*t29646;
  t29649 = t29628 + t29629 + t29648;
  t29663 = -0.068*t6380;
  t29664 = t9793*t29646;
  t29667 = t29663 + t29664;
  t29670 = t23733*t29657;
  t29672 = -1.*t29649*t11208;
  t29673 = t29670 + t29672;
  t29650 = t23733*t29649;
  t29659 = t29657*t11208;
  t29660 = t29650 + t29659;
  t29668 = t29667*t6476;
  t29674 = t10053*t29673;
  t29676 = t29668 + t29674;
  t29679 = t10053*t29667;
  t29682 = -1.*t6476*t29673;
  t29683 = t29679 + t29682;
  t29459 = t9793*t29353*t6476;
  t29518 = t10053*t29516;
  t29522 = t29459 + t29518;
  t29661 = t9793*t23733*t29660;
  t29687 = -1.*t29660*t29552;
  t29694 = t29660*t29552;
  t29701 = -1.*t29660*t29580;
  t29710 = -1.*t9793*t23733*t29660;
  t29715 = t29660*t29580;
  t29756 = -1.*t6380*t29667;
  t29763 = t9793*t29667*t29353;
  t29723 = t6380*t29667;
  t29727 = -1.*t9793*t29667*t22724;
  t29750 = -1.*t9793*t29667*t29353;
  t29737 = t9793*t29667*t22724;
  t29821 = t29657*t29353;
  t29812 = -1.*t29657*t29505;
  p_output1[0]=t29444*var2[0] + t17700*var2[1] + t29522*var2[2];
  p_output1[1]=(t29531*t29552 - 1.*t29535*t29557)*var2[0] + (-1.*t29535*t29540 + t23733*t29531*t9793)*var2[1] + (t29531*t29580 - 1.*t29535*t29588)*var2[2];
  p_output1[2]=(t29535*t29552 + t29531*t29557)*var2[0] + (t29531*t29540 + t23733*t29535*t9793)*var2[1] + (t29535*t29580 + t29531*t29588)*var2[2];
  p_output1[3]=(t29522*(-1.*t17700*t29676 - 1.*t29540*t29683 + t29710) + t17700*(t29522*t29676 + t29588*t29683 + t29715))*var2[0] + (t29522*(t29444*t29676 + t29557*t29683 + t29694) + t29444*(-1.*t29522*t29676 - 1.*t29588*t29683 + t29701))*var2[1] + (t29444*(t29661 + t17700*t29676 + t29540*t29683) + t17700*(-1.*t29444*t29676 - 1.*t29557*t29683 + t29687))*var2[2];
  p_output1[4]=(t23733*(t29516*t29673 + t29715 + t29763)*t9793 + t29580*(t29710 + t29756 + t11208*t29673*t9793))*var2[0] + (t29580*(t29356*t29673 + t29694 + t29737) + t29552*(-1.*t29516*t29673 + t29701 + t29750))*var2[1] + (t23733*(-1.*t29356*t29673 + t29687 + t29727)*t9793 + t29552*(t29661 + t29723 - 1.*t11208*t29673*t9793))*var2[2];
  p_output1[5]=(t6380*(t29505*t29657 + t29763 - 1.*t29353*t29649*t6380) + t29353*t9793*(t29756 - 1.*t29649*t9793))*var2[0] + (t29353*(t29737 + t29821 - 1.*t22724*t29649*t6380)*t9793 + t22724*(t29750 + t29812 + t29353*t29649*t6380)*t9793)*var2[1] + (t6380*(-1.*t29353*t29657 + t29727 + t22724*t29649*t6380) + t22724*t9793*(t29723 + t29649*t9793))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t22724 + 0.2255*t29505)*var2[0] + (t29353*(-1.*t29353*t29646 + t29812) + t29505*(t22724*t29646 + t29821))*var2[1] - 0.068*t29353*var2[2];
  p_output1[13]=(0.325*t22710 - 1.*t17877*t29634 - 1.*t22710*t29644)*var2[0] + (-0.325*t17877 - 1.*t22710*t29634 + t17877*t29644)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
