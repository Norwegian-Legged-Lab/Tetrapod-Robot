/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:54 GMT+02:00
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
  double t8519;
  double t8466;
  double t8520;
  double t8545;
  double t8537;
  double t8542;
  double t8554;
  double t3208;
  double t8543;
  double t8561;
  double t8564;
  double t8524;
  double t8567;
  double t8568;
  double t8569;
  double t8566;
  double t8665;
  double t8667;
  double t8570;
  double t8571;
  double t8572;
  double t8577;
  double t8579;
  double t8582;
  double t8635;
  double t8639;
  double t8650;
  double t8675;
  double t8679;
  double t8680;
  double t8688;
  double t8689;
  double t8690;
  double t8692;
  double t8693;
  double t8695;
  double t8705;
  double t8707;
  double t8708;
  double t8710;
  double t8713;
  double t8715;
  double t8565;
  double t8573;
  double t8574;
  double t8748;
  double t8749;
  double t8750;
  double t8752;
  double t8753;
  double t8754;
  double t8755;
  double t8756;
  double t8757;
  double t8507;
  double t8530;
  double t8531;
  double t8747;
  double t8751;
  double t8759;
  double t8760;
  double t8764;
  double t8765;
  double t8766;
  double t8767;
  double t8769;
  double t8770;
  double t8743;
  double t8744;
  double t8745;
  double t8746;
  double t8761;
  double t8762;
  double t8775;
  double t8776;
  double t8778;
  double t8780;
  double t8782;
  double t8783;
  double t8763;
  double t8771;
  double t8772;
  double t8779;
  double t8784;
  double t8785;
  double t8787;
  double t8788;
  double t8789;
  double t8576;
  double t8655;
  double t8661;
  double t8774;
  double t8793;
  double t8803;
  double t8808;
  double t8821;
  double t8838;
  double t8880;
  double t8886;
  double t8849;
  double t8858;
  double t8874;
  double t8870;
  double t8923;
  double t8918;
  t8519 = Cos(var1[9]);
  t8466 = Sin(var1[4]);
  t8520 = Cos(var1[4]);
  t8545 = Cos(var1[10]);
  t8537 = Cos(var1[11]);
  t8542 = Sin(var1[10]);
  t8554 = Sin(var1[11]);
  t3208 = Sin(var1[9]);
  t8543 = t8537*t8542;
  t8561 = -1.*t8545*t8554;
  t8564 = t8543 + t8561;
  t8524 = Sin(var1[5]);
  t8567 = t8545*t8537;
  t8568 = t8542*t8554;
  t8569 = t8567 + t8568;
  t8566 = Cos(var1[5]);
  t8665 = Cos(var1[3]);
  t8667 = Sin(var1[3]);
  t8570 = t8566*t8569;
  t8571 = t3208*t8564*t8524;
  t8572 = t8570 + t8571;
  t8577 = -1.*t8537*t8542;
  t8579 = t8545*t8554;
  t8582 = t8577 + t8579;
  t8635 = t8566*t8582;
  t8639 = t3208*t8569*t8524;
  t8650 = t8635 + t8639;
  t8675 = t8520*t3208;
  t8679 = t8519*t8466*t8524;
  t8680 = t8675 + t8679;
  t8688 = -1.*t8566*t3208*t8564;
  t8689 = t8569*t8524;
  t8690 = t8688 + t8689;
  t8692 = t8519*t8520*t8564;
  t8693 = -1.*t8466*t8572;
  t8695 = t8692 + t8693;
  t8705 = -1.*t8566*t3208*t8569;
  t8707 = t8582*t8524;
  t8708 = t8705 + t8707;
  t8710 = t8519*t8520*t8569;
  t8713 = -1.*t8466*t8650;
  t8715 = t8710 + t8713;
  t8565 = t8519*t8564*t8466;
  t8573 = t8520*t8572;
  t8574 = t8565 + t8573;
  t8748 = -0.0641*t8537;
  t8749 = -0.28*t8554;
  t8750 = t8748 + t8749;
  t8752 = -1.*t8537;
  t8753 = 1. + t8752;
  t8754 = -0.575*t8753;
  t8755 = -0.295*t8537;
  t8756 = -0.0641*t8554;
  t8757 = t8754 + t8755 + t8756;
  t8507 = t3208*t8466;
  t8530 = -1.*t8519*t8520*t8524;
  t8531 = t8507 + t8530;
  t8747 = 0.325*t8542;
  t8751 = t8545*t8750;
  t8759 = t8542*t8757;
  t8760 = t8747 + t8751 + t8759;
  t8764 = -1.*t8545;
  t8765 = 1. + t8764;
  t8766 = -0.325*t8765;
  t8767 = -1.*t8542*t8750;
  t8769 = t8545*t8757;
  t8770 = t8766 + t8767 + t8769;
  t8743 = -1.*t8519;
  t8744 = 1. + t8743;
  t8745 = 0.1575*t8744;
  t8746 = 0.2255*t8519;
  t8761 = -1.*t3208*t8760;
  t8762 = t8745 + t8746 + t8761;
  t8775 = 0.068*t3208;
  t8776 = t8519*t8760;
  t8778 = t8775 + t8776;
  t8780 = t8566*t8770;
  t8782 = -1.*t8762*t8524;
  t8783 = t8780 + t8782;
  t8763 = t8566*t8762;
  t8771 = t8770*t8524;
  t8772 = t8763 + t8771;
  t8779 = t8778*t8466;
  t8784 = t8520*t8783;
  t8785 = t8779 + t8784;
  t8787 = t8520*t8778;
  t8788 = -1.*t8466*t8783;
  t8789 = t8787 + t8788;
  t8576 = t8519*t8569*t8466;
  t8655 = t8520*t8650;
  t8661 = t8576 + t8655;
  t8774 = t8519*t8566*t8772;
  t8793 = -1.*t8772*t8690;
  t8803 = t8772*t8690;
  t8808 = -1.*t8772*t8708;
  t8821 = -1.*t8519*t8566*t8772;
  t8838 = t8772*t8708;
  t8880 = -1.*t3208*t8778;
  t8886 = t8519*t8778*t8569;
  t8849 = t3208*t8778;
  t8858 = -1.*t8519*t8778*t8564;
  t8874 = -1.*t8519*t8778*t8569;
  t8870 = t8519*t8778*t8564;
  t8923 = t8770*t8569;
  t8918 = -1.*t8770*t8582;
  p_output1[0]=t8574*var2[0] + t8531*var2[1] + t8661*var2[2];
  p_output1[1]=(t8665*t8690 - 1.*t8667*t8695)*var2[0] + (t8519*t8566*t8665 - 1.*t8667*t8680)*var2[1] + (t8665*t8708 - 1.*t8667*t8715)*var2[2];
  p_output1[2]=(t8667*t8690 + t8665*t8695)*var2[0] + (t8519*t8566*t8667 + t8665*t8680)*var2[1] + (t8667*t8708 + t8665*t8715)*var2[2];
  p_output1[3]=(t8661*(-1.*t8531*t8785 - 1.*t8680*t8789 + t8821) + t8531*(t8661*t8785 + t8715*t8789 + t8838))*var2[0] + (t8661*(t8574*t8785 + t8695*t8789 + t8803) + t8574*(-1.*t8661*t8785 - 1.*t8715*t8789 + t8808))*var2[1] + (t8574*(t8774 + t8531*t8785 + t8680*t8789) + t8531*(-1.*t8574*t8785 - 1.*t8695*t8789 + t8793))*var2[2];
  p_output1[4]=(t8708*(t8519*t8524*t8783 + t8821 + t8880) + t8519*t8566*(t8650*t8783 + t8838 + t8886))*var2[0] + (t8708*(t8572*t8783 + t8803 + t8870) + t8690*(-1.*t8650*t8783 + t8808 + t8874))*var2[1] + (t8690*(t8774 - 1.*t8519*t8524*t8783 + t8849) + t8519*t8566*(-1.*t8572*t8783 + t8793 + t8858))*var2[2];
  p_output1[5]=(t8519*t8569*(-1.*t8519*t8762 + t8880) + t3208*(-1.*t3208*t8569*t8762 + t8582*t8770 + t8886))*var2[0] + (t8519*t8564*(t3208*t8569*t8762 + t8874 + t8918) + t8519*t8569*(-1.*t3208*t8564*t8762 + t8870 + t8923))*var2[1] + (t8519*t8564*(t8519*t8762 + t8849) + t3208*(t3208*t8564*t8762 - 1.*t8569*t8770 + t8858))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t8564 - 0.2255*t8582)*var2[0] + (t8569*(-1.*t8569*t8760 + t8918) + t8582*(t8564*t8760 + t8923))*var2[1] + 0.068*t8569*var2[2];
  p_output1[10]=(-0.325*t8554 - 1.*t8537*t8750 - 1.*t8554*t8757)*var2[0] + (0.325*t8537 - 1.*t8554*t8750 + t8537*t8757)*var2[2];
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
