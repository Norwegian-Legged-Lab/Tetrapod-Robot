/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:20 GMT+02:00
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
  double t5039;
  double t5496;
  double t3468;
  double t5480;
  double t5578;
  double t6673;
  double t6674;
  double t6675;
  double t6705;
  double t6715;
  double t6716;
  double t6720;
  double t6736;
  double t6743;
  double t6749;
  double t6731;
  double t6773;
  double t6775;
  double t6726;
  double t6751;
  double t6755;
  double t6760;
  double t6761;
  double t6762;
  double t6763;
  double t6765;
  double t6766;
  double t6776;
  double t6777;
  double t6778;
  double t6783;
  double t6784;
  double t6786;
  double t6788;
  double t6789;
  double t6791;
  double t6806;
  double t6808;
  double t6810;
  double t6813;
  double t6814;
  double t6816;
  double t6861;
  double t6862;
  double t6863;
  double t6874;
  double t6878;
  double t6882;
  double t6888;
  double t6889;
  double t6891;
  double t6859;
  double t6871;
  double t6892;
  double t6893;
  double t5494;
  double t5651;
  double t5653;
  double t6839;
  double t6840;
  double t6841;
  double t6842;
  double t6894;
  double t6895;
  double t6896;
  double t6900;
  double t6904;
  double t6905;
  double t6906;
  double t6907;
  double t6908;
  double t6909;
  double t6910;
  double t6912;
  double t6915;
  double t6923;
  double t6721;
  double t6756;
  double t6757;
  double t6941;
  double t6942;
  double t6943;
  double t6935;
  double t6936;
  double t6937;
  double t6911;
  double t6927;
  double t6931;
  double t6759;
  double t6767;
  double t6770;
  double t6945;
  double t6956;
  double t6963;
  double t6972;
  double t6994;
  double t7006;
  double t7048;
  double t7051;
  double t7018;
  double t7021;
  double t7041;
  double t7033;
  double t7087;
  double t7080;
  t5039 = Cos(var1[6]);
  t5496 = Sin(var1[4]);
  t3468 = Cos(var1[4]);
  t5480 = Sin(var1[5]);
  t5578 = Sin(var1[6]);
  t6673 = Cos(var1[8]);
  t6674 = Sin(var1[7]);
  t6675 = t6673*t6674;
  t6705 = Cos(var1[7]);
  t6715 = Sin(var1[8]);
  t6716 = -1.*t6705*t6715;
  t6720 = t6675 + t6716;
  t6736 = t6705*t6673;
  t6743 = t6674*t6715;
  t6749 = t6736 + t6743;
  t6731 = Cos(var1[5]);
  t6773 = Cos(var1[3]);
  t6775 = Sin(var1[3]);
  t6726 = t5480*t5578*t6720;
  t6751 = t6731*t6749;
  t6755 = t6726 + t6751;
  t6760 = -1.*t6673*t6674;
  t6761 = t6705*t6715;
  t6762 = t6760 + t6761;
  t6763 = t6731*t6762;
  t6765 = t5480*t5578*t6749;
  t6766 = t6763 + t6765;
  t6776 = t5039*t5496*t5480;
  t6777 = t3468*t5578;
  t6778 = t6776 + t6777;
  t6783 = -1.*t6731*t5578*t6720;
  t6784 = t5480*t6749;
  t6786 = t6783 + t6784;
  t6788 = t3468*t5039*t6720;
  t6789 = -1.*t5496*t6755;
  t6791 = t6788 + t6789;
  t6806 = t5480*t6762;
  t6808 = -1.*t6731*t5578*t6749;
  t6810 = t6806 + t6808;
  t6813 = t3468*t5039*t6749;
  t6814 = -1.*t5496*t6766;
  t6816 = t6813 + t6814;
  t6861 = -0.0641*t6673;
  t6862 = -0.28*t6715;
  t6863 = t6861 + t6862;
  t6874 = -1.*t6673;
  t6878 = 1. + t6874;
  t6882 = 0.075*t6878;
  t6888 = 0.355*t6673;
  t6889 = -0.0641*t6715;
  t6891 = t6882 + t6888 + t6889;
  t6859 = -0.325*t6674;
  t6871 = t6705*t6863;
  t6892 = t6674*t6891;
  t6893 = t6859 + t6871 + t6892;
  t5494 = -1.*t3468*t5039*t5480;
  t5651 = t5496*t5578;
  t5653 = t5494 + t5651;
  t6839 = -1.*t5039;
  t6840 = 1. + t6839;
  t6841 = 0.1575*t6840;
  t6842 = 0.2255*t5039;
  t6894 = -1.*t5578*t6893;
  t6895 = t6841 + t6842 + t6894;
  t6896 = -1.*t5480*t6895;
  t6900 = -1.*t6705;
  t6904 = 1. + t6900;
  t6905 = 0.325*t6904;
  t6906 = -1.*t6674*t6863;
  t6907 = t6705*t6891;
  t6908 = t6905 + t6906 + t6907;
  t6909 = t6731*t6908;
  t6910 = t6896 + t6909;
  t6912 = 0.068*t5578;
  t6915 = t5039*t6893;
  t6923 = t6912 + t6915;
  t6721 = t5039*t5496*t6720;
  t6756 = t3468*t6755;
  t6757 = t6721 + t6756;
  t6941 = t6731*t6895;
  t6942 = t5480*t6908;
  t6943 = t6941 + t6942;
  t6935 = t3468*t6910;
  t6936 = t5496*t6923;
  t6937 = t6935 + t6936;
  t6911 = -1.*t5496*t6910;
  t6927 = t3468*t6923;
  t6931 = t6911 + t6927;
  t6759 = t5039*t5496*t6749;
  t6767 = t3468*t6766;
  t6770 = t6759 + t6767;
  t6945 = t6731*t5039*t6943;
  t6956 = -1.*t6943*t6786;
  t6963 = t6943*t6786;
  t6972 = -1.*t6943*t6810;
  t6994 = -1.*t6731*t5039*t6943;
  t7006 = t6943*t6810;
  t7048 = -1.*t5578*t6923;
  t7051 = t5039*t6923*t6749;
  t7018 = t5578*t6923;
  t7021 = -1.*t5039*t6923*t6720;
  t7041 = -1.*t5039*t6923*t6749;
  t7033 = t5039*t6923*t6720;
  t7087 = t6908*t6749;
  t7080 = -1.*t6908*t6762;
  p_output1[0]=t6757*var2[0] + t5653*var2[1] + t6770*var2[2];
  p_output1[1]=(t6773*t6786 - 1.*t6775*t6791)*var2[0] + (t5039*t6731*t6773 - 1.*t6775*t6778)*var2[1] + (t6773*t6810 - 1.*t6775*t6816)*var2[2];
  p_output1[2]=(t6775*t6786 + t6773*t6791)*var2[0] + (t5039*t6731*t6775 + t6773*t6778)*var2[1] + (t6775*t6810 + t6773*t6816)*var2[2];
  p_output1[3]=(t6770*(-1.*t6778*t6931 - 1.*t5653*t6937 + t6994) + t5653*(t6816*t6931 + t6770*t6937 + t7006))*var2[0] + (t6770*(t6791*t6931 + t6757*t6937 + t6963) + t6757*(-1.*t6816*t6931 - 1.*t6770*t6937 + t6972))*var2[1] + (t6757*(t6778*t6931 + t5653*t6937 + t6945) + t5653*(-1.*t6791*t6931 - 1.*t6757*t6937 + t6956))*var2[2];
  p_output1[4]=(t6810*(t5039*t5480*t6910 + t6994 + t7048) + t5039*t6731*(t6766*t6910 + t7006 + t7051))*var2[0] + (t6810*(t6755*t6910 + t6963 + t7033) + t6786*(-1.*t6766*t6910 + t6972 + t7041))*var2[1] + (t6786*(-1.*t5039*t5480*t6910 + t6945 + t7018) + t5039*t6731*(-1.*t6755*t6910 + t6956 + t7021))*var2[2];
  p_output1[5]=(t5039*t6749*(-1.*t5039*t6895 + t7048) + t5578*(-1.*t5578*t6749*t6895 + t6762*t6908 + t7051))*var2[0] + (t5039*t6720*(t5578*t6749*t6895 + t7041 + t7080) + t5039*t6749*(-1.*t5578*t6720*t6895 + t7033 + t7087))*var2[1] + (t5039*t6720*(t5039*t6895 + t7018) + t5578*(t5578*t6720*t6895 - 1.*t6749*t6908 + t7021))*var2[2];
  p_output1[6]=(-0.1575*t6720 - 0.2255*t6762)*var2[0] + (t6749*(-1.*t6749*t6893 + t7080) + t6762*(t6720*t6893 + t7087))*var2[1] + 0.068*t6749*var2[2];
  p_output1[7]=(0.325*t6715 - 1.*t6673*t6863 - 1.*t6715*t6891)*var2[0] + (-0.325*t6673 - 1.*t6715*t6863 + t6673*t6891)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
