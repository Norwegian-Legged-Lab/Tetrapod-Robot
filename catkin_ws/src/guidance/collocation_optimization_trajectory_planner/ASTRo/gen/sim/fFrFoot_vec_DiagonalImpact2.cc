/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:58 GMT+02:00
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
  double t6290;
  double t13093;
  double t6703;
  double t17816;
  double t17874;
  double t17815;
  double t17878;
  double t6710;
  double t17890;
  double t17891;
  double t17892;
  double t14608;
  double t17885;
  double t17817;
  double t17879;
  double t17880;
  double t11702;
  double t17808;
  double t17813;
  double t17912;
  double t17910;
  double t17893;
  double t17894;
  double t17895;
  double t17899;
  double t17900;
  double t17901;
  double t17903;
  double t17904;
  double t17905;
  double t17913;
  double t17914;
  double t17915;
  double t17920;
  double t17921;
  double t17922;
  double t17925;
  double t17926;
  double t17927;
  double t17932;
  double t17933;
  double t17935;
  double t17937;
  double t17938;
  double t17939;
  double t17889;
  double t17896;
  double t17897;
  double t17957;
  double t17958;
  double t17963;
  double t17964;
  double t17965;
  double t17967;
  double t17968;
  double t17969;
  double t17970;
  double t17971;
  double t17972;
  double t17973;
  double t17974;
  double t17978;
  double t17979;
  double t17980;
  double t17959;
  double t17960;
  double t17962;
  double t17975;
  double t17976;
  double t17984;
  double t17985;
  double t17986;
  double t17987;
  double t17989;
  double t17990;
  double t17991;
  double t17977;
  double t17981;
  double t17982;
  double t17988;
  double t17992;
  double t17993;
  double t17995;
  double t17996;
  double t17997;
  double t17902;
  double t17906;
  double t17907;
  double t17983;
  double t18001;
  double t18008;
  double t18013;
  double t18020;
  double t18025;
  double t18051;
  double t18055;
  t6290 = Cos(var1[4]);
  t13093 = Cos(var1[12]);
  t6703 = Cos(var1[5]);
  t17816 = Cos(var1[14]);
  t17874 = Sin(var1[13]);
  t17815 = Cos(var1[13]);
  t17878 = Sin(var1[14]);
  t6710 = Sin(var1[12]);
  t17890 = t17816*t17874;
  t17891 = -1.*t17815*t17878;
  t17892 = t17890 + t17891;
  t14608 = Sin(var1[5]);
  t17885 = Sin(var1[4]);
  t17817 = t17815*t17816;
  t17879 = t17874*t17878;
  t17880 = t17817 + t17879;
  t11702 = -1.*t6703*t6710;
  t17808 = -1.*t13093*t14608;
  t17813 = t11702 + t17808;
  t17912 = Cos(var1[3]);
  t17910 = Sin(var1[3]);
  t17893 = t13093*t6703*t17892;
  t17894 = -1.*t6710*t17892*t14608;
  t17895 = t17893 + t17894;
  t17899 = -1.*t17816*t17874;
  t17900 = t17815*t17878;
  t17901 = t17899 + t17900;
  t17903 = t13093*t6703*t17880;
  t17904 = -1.*t6710*t17880*t14608;
  t17905 = t17903 + t17904;
  t17913 = t13093*t6703;
  t17914 = -1.*t6710*t14608;
  t17915 = t17913 + t17914;
  t17920 = t6703*t6710*t17892;
  t17921 = t13093*t17892*t14608;
  t17922 = t17920 + t17921;
  t17925 = t6290*t17880;
  t17926 = -1.*t17885*t17895;
  t17927 = t17925 + t17926;
  t17932 = t6703*t6710*t17880;
  t17933 = t13093*t17880*t14608;
  t17935 = t17932 + t17933;
  t17937 = t6290*t17901;
  t17938 = -1.*t17885*t17905;
  t17939 = t17937 + t17938;
  t17889 = t17880*t17885;
  t17896 = t6290*t17895;
  t17897 = t17889 + t17896;
  t17957 = -1.*t13093;
  t17958 = 1. + t17957;
  t17963 = -1.*t17815;
  t17964 = 1. + t17963;
  t17965 = 0.28121*t17964;
  t17967 = -1.*t17816;
  t17968 = 1. + t17967;
  t17969 = 0.50321*t17968;
  t17970 = 0.23321*t17816;
  t17971 = t17969 + t17970;
  t17972 = t17815*t17971;
  t17973 = -0.27*t17874*t17878;
  t17974 = t17965 + t17972 + t17973;
  t17978 = 0.15121*t17958;
  t17979 = t13093*t17974;
  t17980 = t17978 + t17979;
  t17959 = -0.15121*t17958;
  t17960 = -0.15121*t13093;
  t17962 = -0.15121*t6710;
  t17975 = t6710*t17974;
  t17976 = t17959 + t17960 + t17962 + t17975;
  t17984 = 0.28121*t17874;
  t17985 = -1.*t17971*t17874;
  t17986 = -0.27*t17815*t17878;
  t17987 = t17984 + t17985 + t17986;
  t17989 = t6703*t17980;
  t17990 = -1.*t17976*t14608;
  t17991 = t17989 + t17990;
  t17977 = t6703*t17976;
  t17981 = t17980*t14608;
  t17982 = t17977 + t17981;
  t17988 = t17987*t17885;
  t17992 = t6290*t17991;
  t17993 = t17988 + t17992;
  t17995 = t6290*t17987;
  t17996 = -1.*t17885*t17991;
  t17997 = t17995 + t17996;
  t17902 = t17901*t17885;
  t17906 = t6290*t17905;
  t17907 = t17902 + t17906;
  t17983 = -1.*t17915*t17982;
  t18001 = t17922*t17982;
  t18008 = t17915*t17982;
  t18013 = -1.*t17935*t17982;
  t18020 = -1.*t17922*t17982;
  t18025 = t17935*t17982;
  t18051 = -1.*t17987*t17880;
  t18055 = t17987*t17901;
  p_output1[0]=t17907*var2[0] + t17813*t6290*var2[1] + t17897*var2[2];
  p_output1[1]=(t17912*t17935 - 1.*t17910*t17939)*var2[0] + (t17813*t17885*t17910 + t17912*t17915)*var2[1] + (t17912*t17922 - 1.*t17910*t17927)*var2[2];
  p_output1[2]=(t17910*t17935 + t17912*t17939)*var2[0] + (-1.*t17813*t17885*t17912 + t17910*t17915)*var2[1] + (t17910*t17922 + t17912*t17927)*var2[2];
  p_output1[3]=(t17813*(t17897*t17993 + t17927*t17997 + t18001)*t6290 + t17897*(t17983 + t17813*t17885*t17997 - 1.*t17813*t17993*t6290))*var2[0] + (t17907*(-1.*t17897*t17993 - 1.*t17927*t17997 + t18020) + t17897*(t17907*t17993 + t17939*t17997 + t18025))*var2[1] + (t17813*(-1.*t17907*t17993 - 1.*t17939*t17997 + t18013)*t6290 + t17907*(-1.*t17813*t17885*t17997 + t18008 + t17813*t17993*t6290))*var2[2];
  p_output1[4]=(t17922*(t17983 - 1.*t17813*t17991) + t17915*(t17880*t17987 + t17895*t17991 + t18001))*var2[0] + (t17935*(-1.*t17895*t17991 + t18020 + t18051) + t17922*(t17905*t17991 + t18025 + t18055))*var2[1] + (t17935*(t17813*t17991 + t18008) + t17915*(-1.*t17901*t17987 - 1.*t17905*t17991 + t18013))*var2[2];
  p_output1[5]=t17880*(-1.*t13093*t17976 + t17980*t6710)*var2[0] + (t17880*(t13093*t17880*t17980 + t18055 + t17880*t17976*t6710) + t17901*(-1.*t13093*t17892*t17980 + t18051 - 1.*t17892*t17976*t6710))*var2[1] + t17901*(t13093*t17976 - 1.*t17980*t6710)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t17901*(-1.*t17892*t17974 + t18051) + t17880*(t17880*t17974 + t18055))*var2[1] + (-0.15121*t17892 - 0.15121*t17901)*var2[2];
  p_output1[13]=(0.28121*t17878 - 0.27*t17816*t17878 - 1.*t17878*t17971)*var2[0] + (0.28121*t17816 + 0.27*Power(t17878,2) - 1.*t17816*t17971)*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
