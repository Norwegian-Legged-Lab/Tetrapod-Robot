/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:00 GMT+02:00
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
  double t6742;
  double t6852;
  double t6853;
  double t6858;
  double t6868;
  double t6869;
  double t6774;
  double t6884;
  double t6898;
  double t6901;
  double t6902;
  double t6904;
  double t6906;
  double t6907;
  double t6912;
  double t6955;
  double t6956;
  double t6957;
  double t6960;
  double t6961;
  double t6962;
  double t6963;
  double t6870;
  double t6876;
  double t6975;
  double t6973;
  double t6885;
  double t6889;
  double t6974;
  double t6976;
  double t6978;
  double t6980;
  double t6981;
  double t6983;
  double t6899;
  double t6900;
  double t6913;
  double t6950;
  double t6989;
  double t6990;
  double t6991;
  double t6994;
  double t6995;
  double t6996;
  double t6998;
  double t6999;
  double t7000;
  double t7009;
  double t7010;
  double t7011;
  double t7014;
  double t7015;
  double t7016;
  double t7022;
  double t7023;
  double t7024;
  double t7027;
  double t7028;
  double t7029;
  double t7031;
  double t7032;
  double t7033;
  t6742 = Cos(var1[4]);
  t6852 = Cos(var1[6]);
  t6853 = -1.*t6852;
  t6858 = 1. + t6853;
  t6868 = 0.15121*t6858;
  t6869 = Sin(var1[6]);
  t6774 = Sin(var1[5]);
  t6884 = Cos(var1[5]);
  t6898 = Cos(var1[7]);
  t6901 = t6742*t6884*t6852;
  t6902 = -1.*t6742*t6774*t6869;
  t6904 = t6901 + t6902;
  t6906 = Sin(var1[4]);
  t6907 = Sin(var1[7]);
  t6912 = Cos(var1[8]);
  t6955 = t6898*t6904;
  t6956 = -1.*t6906*t6907;
  t6957 = t6955 + t6956;
  t6960 = t6898*t6906;
  t6961 = t6904*t6907;
  t6962 = t6960 + t6961;
  t6963 = Sin(var1[8]);
  t6870 = -0.15121*t6869;
  t6876 = t6868 + t6870;
  t6975 = Sin(var1[3]);
  t6973 = Cos(var1[3]);
  t6885 = 0.15121*t6869;
  t6889 = t6868 + t6885;
  t6974 = t6973*t6884;
  t6976 = -1.*t6975*t6906*t6774;
  t6978 = t6974 + t6976;
  t6980 = t6884*t6975*t6906;
  t6981 = t6973*t6774;
  t6983 = t6980 + t6981;
  t6899 = -1.*t6898;
  t6900 = 1. + t6899;
  t6913 = -1.*t6912;
  t6950 = 1. + t6913;
  t6989 = t6852*t6983;
  t6990 = t6978*t6869;
  t6991 = t6989 + t6990;
  t6994 = t6898*t6991;
  t6995 = t6742*t6975*t6907;
  t6996 = t6994 + t6995;
  t6998 = -1.*t6742*t6898*t6975;
  t6999 = t6991*t6907;
  t7000 = t6998 + t6999;
  t7009 = t6884*t6975;
  t7010 = t6973*t6906*t6774;
  t7011 = t7009 + t7010;
  t7014 = -1.*t6973*t6884*t6906;
  t7015 = t6975*t6774;
  t7016 = t7014 + t7015;
  t7022 = t6852*t7016;
  t7023 = t7011*t6869;
  t7024 = t7022 + t7023;
  t7027 = t6898*t7024;
  t7028 = -1.*t6973*t6742*t6907;
  t7029 = t7027 + t7028;
  t7031 = t6973*t6742*t6898;
  t7032 = t7024*t6907;
  t7033 = t7031 + t7032;
  p_output1[0]=-1.*t6742*t6774*t6876 + 0.15121*(-1.*t6742*t6774*t6852 - 1.*t6742*t6869*t6884) + t6742*t6884*t6889 + 0.28121*t6900*t6904 + 0.28121*t6906*t6907 + 0.50321*t6950*t6957 - 0.50321*t6962*t6963 + 0.19821*(t6912*t6957 + t6962*t6963) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t6742*t6907*t6975 + t6876*t6978 + t6889*t6983 + 0.15121*(t6852*t6978 - 1.*t6869*t6983) + 0.28121*t6900*t6991 + 0.50321*t6950*t6996 - 0.50321*t6963*t7000 + 0.19821*(t6912*t6996 + t6963*t7000) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t6742*t6907*t6973 + t6876*t7011 + t6889*t7016 + 0.15121*(t6852*t7011 - 1.*t6869*t7016) + 0.28121*t6900*t7024 + 0.50321*t6950*t7029 - 0.50321*t6963*t7033 + 0.19821*(t6912*t7029 + t6963*t7033) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
