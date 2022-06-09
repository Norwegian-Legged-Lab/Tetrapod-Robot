/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:39 GMT+02:00
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
  double t8466;
  double t5422;
  double t5642;
  double t8468;
  double t8456;
  double t8472;
  double t8535;
  double t8622;
  double t8646;
  double t8623;
  double t8640;
  double t8644;
  double t8650;
  double t3437;
  double t8621;
  double t8540;
  double t8645;
  double t8658;
  double t8659;
  double t8675;
  double t8671;
  double t8672;
  double t8673;
  double t8667;
  double t8676;
  double t8677;
  double t8678;
  double t8706;
  double t8707;
  double t8708;
  double t8710;
  double t8713;
  double t8715;
  double t8716;
  double t8719;
  double t8720;
  double t8704;
  double t8709;
  double t8721;
  double t8722;
  double t8727;
  double t8729;
  double t8730;
  double t8731;
  double t8732;
  double t8733;
  double t8699;
  double t8701;
  double t8702;
  double t8703;
  double t8724;
  double t8725;
  double t8740;
  double t8741;
  double t8742;
  double t8744;
  double t8746;
  double t8748;
  double t8737;
  double t8738;
  double t8739;
  double t8726;
  double t8734;
  double t8735;
  double t8687;
  double t8690;
  double t8692;
  double t8743;
  double t8750;
  double t8751;
  double t8686;
  double t8694;
  double t8695;
  double t8696;
  double t8697;
  double t8698;
  double t8757;
  double t8759;
  double t8760;
  double t8766;
  double t8767;
  double t8769;
  double t8736;
  double t8770;
  double t8780;
  double t8784;
  double t8754;
  double t8755;
  double t8756;
  double t8608;
  double t8660;
  double t8663;
  double t8773;
  double t8774;
  double t8775;
  double t8810;
  double t8815;
  double t8825;
  double t8821;
  double t8835;
  double t8830;
  double t8852;
  double t8857;
  double t8863;
  double t8867;
  t8466 = Cos(var1[16]);
  t5422 = Cos(var1[17]);
  t5642 = Sin(var1[16]);
  t8468 = Sin(var1[17]);
  t8456 = t5422*t5642;
  t8472 = -1.*t8466*t8468;
  t8535 = t8456 + t8472;
  t8622 = Cos(var1[5]);
  t8646 = Sin(var1[15]);
  t8623 = t8466*t5422;
  t8640 = t5642*t8468;
  t8644 = t8623 + t8640;
  t8650 = Sin(var1[5]);
  t3437 = Cos(var1[15]);
  t8621 = Cos(var1[4]);
  t8540 = Sin(var1[4]);
  t8645 = t8622*t8644;
  t8658 = t8646*t8535*t8650;
  t8659 = t8645 + t8658;
  t8675 = Sin(var1[3]);
  t8671 = -1.*t8622*t8646*t8535;
  t8672 = t8644*t8650;
  t8673 = t8671 + t8672;
  t8667 = Cos(var1[3]);
  t8676 = t3437*t8621*t8535;
  t8677 = -1.*t8540*t8659;
  t8678 = t8676 + t8677;
  t8706 = -0.0641*t5422;
  t8707 = -0.28*t8468;
  t8708 = t8706 + t8707;
  t8710 = -1.*t5422;
  t8713 = 1. + t8710;
  t8715 = -0.575*t8713;
  t8716 = -0.295*t5422;
  t8719 = -0.0641*t8468;
  t8720 = t8715 + t8716 + t8719;
  t8704 = 0.325*t5642;
  t8709 = t8466*t8708;
  t8721 = t5642*t8720;
  t8722 = t8704 + t8709 + t8721;
  t8727 = -1.*t8466;
  t8729 = 1. + t8727;
  t8730 = -0.325*t8729;
  t8731 = -1.*t5642*t8708;
  t8732 = t8466*t8720;
  t8733 = t8730 + t8731 + t8732;
  t8699 = -1.*t3437;
  t8701 = 1. + t8699;
  t8702 = -0.1575*t8701;
  t8703 = -0.2255*t3437;
  t8724 = -1.*t8646*t8722;
  t8725 = t8702 + t8703 + t8724;
  t8740 = -0.068*t8646;
  t8741 = t3437*t8722;
  t8742 = t8740 + t8741;
  t8744 = t8622*t8733;
  t8746 = -1.*t8725*t8650;
  t8748 = t8744 + t8746;
  t8737 = t8646*t8540;
  t8738 = -1.*t3437*t8621*t8650;
  t8739 = t8737 + t8738;
  t8726 = t8622*t8725;
  t8734 = t8733*t8650;
  t8735 = t8726 + t8734;
  t8687 = -1.*t5422*t5642;
  t8690 = t8466*t8468;
  t8692 = t8687 + t8690;
  t8743 = t8742*t8540;
  t8750 = t8621*t8748;
  t8751 = t8743 + t8750;
  t8686 = t3437*t8644*t8540;
  t8694 = t8622*t8692;
  t8695 = t8646*t8644*t8650;
  t8696 = t8694 + t8695;
  t8697 = t8621*t8696;
  t8698 = t8686 + t8697;
  t8757 = t8621*t8742;
  t8759 = -1.*t8540*t8748;
  t8760 = t8757 + t8759;
  t8766 = -1.*t8622*t8646*t8644;
  t8767 = t8692*t8650;
  t8769 = t8766 + t8767;
  t8736 = -1.*t3437*t8622*t8735;
  t8770 = t8735*t8769;
  t8780 = -1.*t8646*t8742;
  t8784 = t3437*t8742*t8644;
  t8754 = t8621*t8646;
  t8755 = t3437*t8540*t8650;
  t8756 = t8754 + t8755;
  t8608 = t3437*t8535*t8540;
  t8660 = t8621*t8659;
  t8663 = t8608 + t8660;
  t8773 = t3437*t8621*t8644;
  t8774 = -1.*t8540*t8696;
  t8775 = t8773 + t8774;
  t8810 = t8735*t8673;
  t8815 = -1.*t8735*t8769;
  t8825 = -1.*t3437*t8742*t8644;
  t8821 = t3437*t8742*t8535;
  t8835 = t8733*t8644;
  t8830 = -1.*t8733*t8692;
  t8852 = t3437*t8622*t8735;
  t8857 = -1.*t8735*t8673;
  t8863 = t8646*t8742;
  t8867 = -1.*t3437*t8742*t8535;
  p_output1[0]=t8663;
  p_output1[1]=t8667*t8673 - 1.*t8675*t8678;
  p_output1[2]=t8673*t8675 + t8667*t8678;
  p_output1[3]=t8698*(t8736 - 1.*t8739*t8751 - 1.*t8756*t8760) + t8739*(t8698*t8751 + t8770 + t8760*t8775);
  p_output1[4]=t8769*(t8736 + t3437*t8650*t8748 + t8780) + t3437*t8622*(t8696*t8748 + t8770 + t8784);
  p_output1[5]=t3437*t8644*(-1.*t3437*t8725 + t8780) + t8646*(-1.*t8644*t8646*t8725 + t8692*t8733 + t8784);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t8535 + 0.2255*t8692;
  p_output1[16]=-0.325*t8468 - 1.*t5422*t8708 - 1.*t8468*t8720;
  p_output1[17]=-0.0641;
  p_output1[18]=t8739;
  p_output1[19]=t3437*t8622*t8667 - 1.*t8675*t8756;
  p_output1[20]=t3437*t8622*t8675 + t8667*t8756;
  p_output1[21]=t8698*(t8663*t8751 + t8678*t8760 + t8810) + t8663*(-1.*t8698*t8751 - 1.*t8760*t8775 + t8815);
  p_output1[22]=t8769*(t8659*t8748 + t8810 + t8821) + t8673*(-1.*t8696*t8748 + t8815 + t8825);
  p_output1[23]=t3437*t8535*(t8644*t8646*t8725 + t8825 + t8830) + t3437*t8644*(-1.*t8535*t8646*t8725 + t8821 + t8835);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t8644*(-1.*t8644*t8722 + t8830) + t8692*(t8535*t8722 + t8835);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8698;
  p_output1[37]=t8667*t8769 - 1.*t8675*t8775;
  p_output1[38]=t8675*t8769 + t8667*t8775;
  p_output1[39]=t8663*(t8739*t8751 + t8756*t8760 + t8852) + t8739*(-1.*t8663*t8751 - 1.*t8678*t8760 + t8857);
  p_output1[40]=t8673*(-1.*t3437*t8650*t8748 + t8852 + t8863) + t3437*t8622*(-1.*t8659*t8748 + t8857 + t8867);
  p_output1[41]=t3437*t8535*(t3437*t8725 + t8863) + t8646*(t8535*t8646*t8725 - 1.*t8644*t8733 + t8867);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t8644;
  p_output1[52]=0.325*t5422 - 1.*t8468*t8708 + t5422*t8720;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
