/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:56 GMT+02:00
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
  double t13009;
  double t12397;
  double t12398;
  double t13028;
  double t14023;
  double t14256;
  double t14624;
  double t13270;
  double t17582;
  double t13263;
  double t17602;
  double t13114;
  double t12771;
  double t13087;
  double t13096;
  double t13098;
  double t14629;
  double t17603;
  double t17605;
  double t17668;
  double t17656;
  double t17660;
  double t17662;
  double t17651;
  double t17672;
  double t17674;
  double t17675;
  double t17683;
  double t17684;
  double t17685;
  double t17734;
  double t17736;
  double t17740;
  double t17741;
  double t17743;
  double t17744;
  double t17745;
  double t17746;
  double t17748;
  double t17749;
  double t17750;
  double t17751;
  double t17752;
  double t17757;
  double t17758;
  double t17760;
  double t17737;
  double t17738;
  double t17739;
  double t17753;
  double t17755;
  double t17764;
  double t17765;
  double t17766;
  double t17767;
  double t17768;
  double t17769;
  double t17770;
  double t17772;
  double t17773;
  double t17774;
  double t17756;
  double t17761;
  double t17762;
  double t17682;
  double t17686;
  double t17687;
  double t17688;
  double t17689;
  double t17690;
  double t17771;
  double t17775;
  double t17776;
  double t17778;
  double t17779;
  double t17780;
  double t17784;
  double t17786;
  double t17787;
  double t17728;
  double t17732;
  double t17733;
  double t17763;
  double t17788;
  double t13100;
  double t17610;
  double t17647;
  double t17791;
  double t17792;
  double t17793;
  double t17821;
  double t17826;
  double t17832;
  double t17836;
  double t17863;
  double t17868;
  t13009 = Cos(var1[13]);
  t12397 = Cos(var1[14]);
  t12398 = Sin(var1[13]);
  t13028 = Sin(var1[14]);
  t14023 = t13009*t12397;
  t14256 = t12398*t13028;
  t14624 = t14023 + t14256;
  t13270 = Cos(var1[5]);
  t17582 = Sin(var1[12]);
  t13263 = Cos(var1[12]);
  t17602 = Sin(var1[5]);
  t13114 = Cos(var1[4]);
  t12771 = -1.*t12397*t12398;
  t13087 = t13009*t13028;
  t13096 = t12771 + t13087;
  t13098 = Sin(var1[4]);
  t14629 = t13263*t13270*t14624;
  t17603 = -1.*t17582*t14624*t17602;
  t17605 = t14629 + t17603;
  t17668 = Sin(var1[3]);
  t17656 = t13270*t17582*t14624;
  t17660 = t13263*t14624*t17602;
  t17662 = t17656 + t17660;
  t17651 = Cos(var1[3]);
  t17672 = t13114*t13096;
  t17674 = -1.*t13098*t17605;
  t17675 = t17672 + t17674;
  t17683 = t12397*t12398;
  t17684 = -1.*t13009*t13028;
  t17685 = t17683 + t17684;
  t17734 = -1.*t13263;
  t17736 = 1. + t17734;
  t17740 = -1.*t13009;
  t17741 = 1. + t17740;
  t17743 = 0.28121*t17741;
  t17744 = -1.*t12397;
  t17745 = 1. + t17744;
  t17746 = 0.50321*t17745;
  t17748 = 0.23321*t12397;
  t17749 = t17746 + t17748;
  t17750 = t13009*t17749;
  t17751 = -0.27*t12398*t13028;
  t17752 = t17743 + t17750 + t17751;
  t17757 = 0.15121*t17736;
  t17758 = t13263*t17752;
  t17760 = t17757 + t17758;
  t17737 = -0.15121*t17736;
  t17738 = -0.15121*t13263;
  t17739 = -0.15121*t17582;
  t17753 = t17582*t17752;
  t17755 = t17737 + t17738 + t17739 + t17753;
  t17764 = -1.*t13270*t17582;
  t17765 = -1.*t13263*t17602;
  t17766 = t17764 + t17765;
  t17767 = 0.28121*t12398;
  t17768 = -1.*t17749*t12398;
  t17769 = -0.27*t13009*t13028;
  t17770 = t17767 + t17768 + t17769;
  t17772 = t13270*t17760;
  t17773 = -1.*t17755*t17602;
  t17774 = t17772 + t17773;
  t17756 = t13270*t17755;
  t17761 = t17760*t17602;
  t17762 = t17756 + t17761;
  t17682 = t14624*t13098;
  t17686 = t13263*t13270*t17685;
  t17687 = -1.*t17582*t17685*t17602;
  t17688 = t17686 + t17687;
  t17689 = t13114*t17688;
  t17690 = t17682 + t17689;
  t17771 = t17770*t13098;
  t17775 = t13114*t17774;
  t17776 = t17771 + t17775;
  t17778 = t13114*t17770;
  t17779 = -1.*t13098*t17774;
  t17780 = t17778 + t17779;
  t17784 = t13270*t17582*t17685;
  t17786 = t13263*t17685*t17602;
  t17787 = t17784 + t17786;
  t17728 = t13263*t13270;
  t17732 = -1.*t17582*t17602;
  t17733 = t17728 + t17732;
  t17763 = -1.*t17733*t17762;
  t17788 = t17787*t17762;
  t13100 = t13096*t13098;
  t17610 = t13114*t17605;
  t17647 = t13100 + t17610;
  t17791 = t13114*t14624;
  t17792 = -1.*t13098*t17688;
  t17793 = t17791 + t17792;
  t17821 = -1.*t17787*t17762;
  t17826 = t17662*t17762;
  t17832 = -1.*t17770*t14624;
  t17836 = t17770*t13096;
  t17863 = t17733*t17762;
  t17868 = -1.*t17662*t17762;
  p_output1[0]=t17647;
  p_output1[1]=t17651*t17662 - 1.*t17668*t17675;
  p_output1[2]=t17662*t17668 + t17651*t17675;
  p_output1[3]=t17690*(t17763 - 1.*t13114*t17766*t17776 + t13098*t17766*t17780) + t13114*t17766*(t17690*t17776 + t17788 + t17780*t17793);
  p_output1[4]=(t17763 - 1.*t17766*t17774)*t17787 + t17733*(t14624*t17770 + t17688*t17774 + t17788);
  p_output1[5]=t14624*(-1.*t13263*t17755 + t17582*t17760);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t13028 - 0.27*t12397*t13028 - 1.*t13028*t17749;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t13114*t17766;
  p_output1[19]=t17651*t17733 + t13098*t17668*t17766;
  p_output1[20]=t17668*t17733 - 1.*t13098*t17651*t17766;
  p_output1[21]=t17647*(-1.*t17690*t17776 - 1.*t17780*t17793 + t17821) + t17690*(t17647*t17776 + t17675*t17780 + t17826);
  p_output1[22]=t17662*(-1.*t17688*t17774 + t17821 + t17832) + t17787*(t17605*t17774 + t17826 + t17836);
  p_output1[23]=t13096*(-1.*t17582*t17685*t17755 - 1.*t13263*t17685*t17760 + t17832) + t14624*(t14624*t17582*t17755 + t13263*t14624*t17760 + t17836);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t13096*(-1.*t17685*t17752 + t17832) + t14624*(t14624*t17752 + t17836);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t17690;
  p_output1[37]=t17651*t17787 - 1.*t17668*t17793;
  p_output1[38]=t17668*t17787 + t17651*t17793;
  p_output1[39]=t17647*(t13114*t17766*t17776 - 1.*t13098*t17766*t17780 + t17863) + t13114*t17766*(-1.*t17647*t17776 - 1.*t17675*t17780 + t17868);
  p_output1[40]=t17662*(t17766*t17774 + t17863) + t17733*(-1.*t13096*t17770 - 1.*t17605*t17774 + t17868);
  p_output1[41]=t13096*(t13263*t17755 - 1.*t17582*t17760);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t13096 - 0.15121*t17685;
  p_output1[49]=0.28121*t12397 + 0.27*Power(t13028,2) - 1.*t12397*t17749;
  p_output1[50]=-0.27;
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
