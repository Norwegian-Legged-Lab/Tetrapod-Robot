/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:50:01 GMT+02:00
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
  double t9651;
  double t9645;
  double t9649;
  double t9653;
  double t9650;
  double t9699;
  double t9707;
  double t9732;
  double t9740;
  double t9734;
  double t9735;
  double t9736;
  double t9741;
  double t9598;
  double t9728;
  double t9713;
  double t9737;
  double t9743;
  double t9744;
  double t9752;
  double t9748;
  double t9749;
  double t9750;
  double t9747;
  double t9753;
  double t9754;
  double t9755;
  double t9777;
  double t9778;
  double t9780;
  double t9782;
  double t9784;
  double t9785;
  double t9786;
  double t9787;
  double t9789;
  double t9776;
  double t9781;
  double t9790;
  double t9791;
  double t9796;
  double t9797;
  double t9798;
  double t9799;
  double t9800;
  double t9801;
  double t9771;
  double t9772;
  double t9774;
  double t9775;
  double t9792;
  double t9794;
  double t9808;
  double t9809;
  double t9810;
  double t9813;
  double t9814;
  double t9816;
  double t9805;
  double t9806;
  double t9807;
  double t9795;
  double t9802;
  double t9803;
  double t9762;
  double t9763;
  double t9764;
  double t9811;
  double t9817;
  double t9818;
  double t9761;
  double t9765;
  double t9766;
  double t9767;
  double t9769;
  double t9770;
  double t9824;
  double t9826;
  double t9827;
  double t9831;
  double t9832;
  double t9833;
  double t9804;
  double t9834;
  double t9843;
  double t9847;
  double t9820;
  double t9821;
  double t9823;
  double t9723;
  double t9745;
  double t9746;
  double t9836;
  double t9837;
  double t9838;
  double t9873;
  double t9878;
  double t9888;
  double t9884;
  double t9898;
  double t9893;
  double t9915;
  double t9920;
  double t9926;
  double t9930;
  t9651 = Cos(var1[10]);
  t9645 = Cos(var1[11]);
  t9649 = Sin(var1[10]);
  t9653 = Sin(var1[11]);
  t9650 = t9645*t9649;
  t9699 = -1.*t9651*t9653;
  t9707 = t9650 + t9699;
  t9732 = Cos(var1[5]);
  t9740 = Sin(var1[9]);
  t9734 = t9651*t9645;
  t9735 = t9649*t9653;
  t9736 = t9734 + t9735;
  t9741 = Sin(var1[5]);
  t9598 = Cos(var1[9]);
  t9728 = Cos(var1[4]);
  t9713 = Sin(var1[4]);
  t9737 = t9732*t9736;
  t9743 = t9740*t9707*t9741;
  t9744 = t9737 + t9743;
  t9752 = Sin(var1[3]);
  t9748 = -1.*t9732*t9740*t9707;
  t9749 = t9736*t9741;
  t9750 = t9748 + t9749;
  t9747 = Cos(var1[3]);
  t9753 = t9598*t9728*t9707;
  t9754 = -1.*t9713*t9744;
  t9755 = t9753 + t9754;
  t9777 = -0.0641*t9645;
  t9778 = -0.28*t9653;
  t9780 = t9777 + t9778;
  t9782 = -1.*t9645;
  t9784 = 1. + t9782;
  t9785 = -0.575*t9784;
  t9786 = -0.295*t9645;
  t9787 = -0.0641*t9653;
  t9789 = t9785 + t9786 + t9787;
  t9776 = 0.325*t9649;
  t9781 = t9651*t9780;
  t9790 = t9649*t9789;
  t9791 = t9776 + t9781 + t9790;
  t9796 = -1.*t9651;
  t9797 = 1. + t9796;
  t9798 = -0.325*t9797;
  t9799 = -1.*t9649*t9780;
  t9800 = t9651*t9789;
  t9801 = t9798 + t9799 + t9800;
  t9771 = -1.*t9598;
  t9772 = 1. + t9771;
  t9774 = 0.1575*t9772;
  t9775 = 0.2255*t9598;
  t9792 = -1.*t9740*t9791;
  t9794 = t9774 + t9775 + t9792;
  t9808 = 0.068*t9740;
  t9809 = t9598*t9791;
  t9810 = t9808 + t9809;
  t9813 = t9732*t9801;
  t9814 = -1.*t9794*t9741;
  t9816 = t9813 + t9814;
  t9805 = t9740*t9713;
  t9806 = -1.*t9598*t9728*t9741;
  t9807 = t9805 + t9806;
  t9795 = t9732*t9794;
  t9802 = t9801*t9741;
  t9803 = t9795 + t9802;
  t9762 = -1.*t9645*t9649;
  t9763 = t9651*t9653;
  t9764 = t9762 + t9763;
  t9811 = t9810*t9713;
  t9817 = t9728*t9816;
  t9818 = t9811 + t9817;
  t9761 = t9598*t9736*t9713;
  t9765 = t9732*t9764;
  t9766 = t9740*t9736*t9741;
  t9767 = t9765 + t9766;
  t9769 = t9728*t9767;
  t9770 = t9761 + t9769;
  t9824 = t9728*t9810;
  t9826 = -1.*t9713*t9816;
  t9827 = t9824 + t9826;
  t9831 = -1.*t9732*t9740*t9736;
  t9832 = t9764*t9741;
  t9833 = t9831 + t9832;
  t9804 = -1.*t9598*t9732*t9803;
  t9834 = t9803*t9833;
  t9843 = -1.*t9740*t9810;
  t9847 = t9598*t9810*t9736;
  t9820 = t9728*t9740;
  t9821 = t9598*t9713*t9741;
  t9823 = t9820 + t9821;
  t9723 = t9598*t9707*t9713;
  t9745 = t9728*t9744;
  t9746 = t9723 + t9745;
  t9836 = t9598*t9728*t9736;
  t9837 = -1.*t9713*t9767;
  t9838 = t9836 + t9837;
  t9873 = t9803*t9750;
  t9878 = -1.*t9803*t9833;
  t9888 = -1.*t9598*t9810*t9736;
  t9884 = t9598*t9810*t9707;
  t9898 = t9801*t9736;
  t9893 = -1.*t9801*t9764;
  t9915 = t9598*t9732*t9803;
  t9920 = -1.*t9803*t9750;
  t9926 = t9740*t9810;
  t9930 = -1.*t9598*t9810*t9707;
  p_output1[0]=t9746;
  p_output1[1]=t9747*t9750 - 1.*t9752*t9755;
  p_output1[2]=t9750*t9752 + t9747*t9755;
  p_output1[3]=t9770*(t9804 - 1.*t9807*t9818 - 1.*t9823*t9827) + t9807*(t9770*t9818 + t9834 + t9827*t9838);
  p_output1[4]=t9833*(t9804 + t9598*t9741*t9816 + t9843) + t9598*t9732*(t9767*t9816 + t9834 + t9847);
  p_output1[5]=t9598*t9736*(-1.*t9598*t9794 + t9843) + t9740*(-1.*t9736*t9740*t9794 + t9764*t9801 + t9847);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t9707 - 0.2255*t9764;
  p_output1[10]=-0.325*t9653 - 1.*t9645*t9780 - 1.*t9653*t9789;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9807;
  p_output1[19]=t9598*t9732*t9747 - 1.*t9752*t9823;
  p_output1[20]=t9598*t9732*t9752 + t9747*t9823;
  p_output1[21]=t9770*(t9746*t9818 + t9755*t9827 + t9873) + t9746*(-1.*t9770*t9818 - 1.*t9827*t9838 + t9878);
  p_output1[22]=t9833*(t9744*t9816 + t9873 + t9884) + t9750*(-1.*t9767*t9816 + t9878 + t9888);
  p_output1[23]=t9598*t9707*(t9736*t9740*t9794 + t9888 + t9893) + t9598*t9736*(-1.*t9707*t9740*t9794 + t9884 + t9898);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t9736*(-1.*t9736*t9791 + t9893) + t9764*(t9707*t9791 + t9898);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9770;
  p_output1[37]=t9747*t9833 - 1.*t9752*t9838;
  p_output1[38]=t9752*t9833 + t9747*t9838;
  p_output1[39]=t9746*(t9807*t9818 + t9823*t9827 + t9915) + t9807*(-1.*t9746*t9818 - 1.*t9755*t9827 + t9920);
  p_output1[40]=t9750*(-1.*t9598*t9741*t9816 + t9915 + t9926) + t9598*t9732*(-1.*t9744*t9816 + t9920 + t9930);
  p_output1[41]=t9598*t9707*(t9598*t9794 + t9926) + t9740*(t9707*t9740*t9794 - 1.*t9736*t9801 + t9930);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t9736;
  p_output1[46]=0.325*t9645 - 1.*t9653*t9780 + t9645*t9789;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
