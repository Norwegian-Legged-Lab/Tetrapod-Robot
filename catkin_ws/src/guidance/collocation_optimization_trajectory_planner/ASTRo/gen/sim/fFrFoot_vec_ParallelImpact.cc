/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:19 GMT+02:00
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
  double t2196;
  double t8824;
  double t2984;
  double t17682;
  double t17813;
  double t15294;
  double t17815;
  double t3348;
  double t17878;
  double t17879;
  double t17884;
  double t10165;
  double t17873;
  double t17806;
  double t17816;
  double t17817;
  double t3349;
  double t11241;
  double t12002;
  double t17909;
  double t17907;
  double t17889;
  double t17891;
  double t17892;
  double t17896;
  double t17897;
  double t17898;
  double t17900;
  double t17901;
  double t17902;
  double t17910;
  double t17911;
  double t17912;
  double t17916;
  double t17917;
  double t17919;
  double t17922;
  double t17923;
  double t17924;
  double t17929;
  double t17930;
  double t17931;
  double t17934;
  double t17935;
  double t17937;
  double t17877;
  double t17893;
  double t17894;
  double t17956;
  double t17957;
  double t17961;
  double t17962;
  double t17965;
  double t17967;
  double t17968;
  double t17969;
  double t17970;
  double t17972;
  double t17973;
  double t17974;
  double t17975;
  double t17979;
  double t17981;
  double t17983;
  double t17958;
  double t17959;
  double t17960;
  double t17976;
  double t17977;
  double t17987;
  double t17989;
  double t17990;
  double t17991;
  double t17993;
  double t17995;
  double t17996;
  double t17978;
  double t17984;
  double t17985;
  double t17992;
  double t17997;
  double t17998;
  double t18002;
  double t18003;
  double t18004;
  double t17899;
  double t17903;
  double t17904;
  double t17986;
  double t18008;
  double t18020;
  double t18031;
  double t18042;
  double t18047;
  double t18077;
  double t18081;
  t2196 = Cos(var1[4]);
  t8824 = Cos(var1[12]);
  t2984 = Cos(var1[5]);
  t17682 = Cos(var1[14]);
  t17813 = Sin(var1[13]);
  t15294 = Cos(var1[13]);
  t17815 = Sin(var1[14]);
  t3348 = Sin(var1[12]);
  t17878 = t17682*t17813;
  t17879 = -1.*t15294*t17815;
  t17884 = t17878 + t17879;
  t10165 = Sin(var1[5]);
  t17873 = Sin(var1[4]);
  t17806 = t15294*t17682;
  t17816 = t17813*t17815;
  t17817 = t17806 + t17816;
  t3349 = -1.*t2984*t3348;
  t11241 = -1.*t8824*t10165;
  t12002 = t3349 + t11241;
  t17909 = Cos(var1[3]);
  t17907 = Sin(var1[3]);
  t17889 = t8824*t2984*t17884;
  t17891 = -1.*t3348*t17884*t10165;
  t17892 = t17889 + t17891;
  t17896 = -1.*t17682*t17813;
  t17897 = t15294*t17815;
  t17898 = t17896 + t17897;
  t17900 = t8824*t2984*t17817;
  t17901 = -1.*t3348*t17817*t10165;
  t17902 = t17900 + t17901;
  t17910 = t8824*t2984;
  t17911 = -1.*t3348*t10165;
  t17912 = t17910 + t17911;
  t17916 = t2984*t3348*t17884;
  t17917 = t8824*t17884*t10165;
  t17919 = t17916 + t17917;
  t17922 = t2196*t17817;
  t17923 = -1.*t17873*t17892;
  t17924 = t17922 + t17923;
  t17929 = t2984*t3348*t17817;
  t17930 = t8824*t17817*t10165;
  t17931 = t17929 + t17930;
  t17934 = t2196*t17898;
  t17935 = -1.*t17873*t17902;
  t17937 = t17934 + t17935;
  t17877 = t17817*t17873;
  t17893 = t2196*t17892;
  t17894 = t17877 + t17893;
  t17956 = -1.*t8824;
  t17957 = 1. + t17956;
  t17961 = -1.*t15294;
  t17962 = 1. + t17961;
  t17965 = 0.28121*t17962;
  t17967 = -1.*t17682;
  t17968 = 1. + t17967;
  t17969 = 0.50321*t17968;
  t17970 = 0.19821*t17682;
  t17972 = t17969 + t17970;
  t17973 = t15294*t17972;
  t17974 = -0.305*t17813*t17815;
  t17975 = t17965 + t17973 + t17974;
  t17979 = 0.15121*t17957;
  t17981 = t8824*t17975;
  t17983 = t17979 + t17981;
  t17958 = -0.15121*t17957;
  t17959 = -0.15121*t8824;
  t17960 = -0.15121*t3348;
  t17976 = t3348*t17975;
  t17977 = t17958 + t17959 + t17960 + t17976;
  t17987 = 0.28121*t17813;
  t17989 = -1.*t17972*t17813;
  t17990 = -0.305*t15294*t17815;
  t17991 = t17987 + t17989 + t17990;
  t17993 = t2984*t17983;
  t17995 = -1.*t17977*t10165;
  t17996 = t17993 + t17995;
  t17978 = t2984*t17977;
  t17984 = t17983*t10165;
  t17985 = t17978 + t17984;
  t17992 = t17991*t17873;
  t17997 = t2196*t17996;
  t17998 = t17992 + t17997;
  t18002 = t2196*t17991;
  t18003 = -1.*t17873*t17996;
  t18004 = t18002 + t18003;
  t17899 = t17898*t17873;
  t17903 = t2196*t17902;
  t17904 = t17899 + t17903;
  t17986 = -1.*t17912*t17985;
  t18008 = t17919*t17985;
  t18020 = t17912*t17985;
  t18031 = -1.*t17931*t17985;
  t18042 = -1.*t17919*t17985;
  t18047 = t17931*t17985;
  t18077 = -1.*t17991*t17817;
  t18081 = t17991*t17898;
  p_output1[0]=t17904*var2[0] + t12002*t2196*var2[1] + t17894*var2[2];
  p_output1[1]=(t17909*t17931 - 1.*t17907*t17937)*var2[0] + (t12002*t17873*t17907 + t17909*t17912)*var2[1] + (t17909*t17919 - 1.*t17907*t17924)*var2[2];
  p_output1[2]=(t17907*t17931 + t17909*t17937)*var2[0] + (-1.*t12002*t17873*t17909 + t17907*t17912)*var2[1] + (t17907*t17919 + t17909*t17924)*var2[2];
  p_output1[3]=(t12002*(t17894*t17998 + t17924*t18004 + t18008)*t2196 + t17894*(t17986 + t12002*t17873*t18004 - 1.*t12002*t17998*t2196))*var2[0] + (t17904*(-1.*t17894*t17998 - 1.*t17924*t18004 + t18042) + t17894*(t17904*t17998 + t17937*t18004 + t18047))*var2[1] + (t12002*(-1.*t17904*t17998 - 1.*t17937*t18004 + t18031)*t2196 + t17904*(-1.*t12002*t17873*t18004 + t18020 + t12002*t17998*t2196))*var2[2];
  p_output1[4]=(t17919*(t17986 - 1.*t12002*t17996) + t17912*(t17817*t17991 + t17892*t17996 + t18008))*var2[0] + (t17931*(-1.*t17892*t17996 + t18042 + t18077) + t17919*(t17902*t17996 + t18047 + t18081))*var2[1] + (t17931*(t12002*t17996 + t18020) + t17912*(-1.*t17898*t17991 - 1.*t17902*t17996 + t18031))*var2[2];
  p_output1[5]=t17817*(t17983*t3348 - 1.*t17977*t8824)*var2[0] + (t17817*(t18081 + t17817*t17977*t3348 + t17817*t17983*t8824) + t17898*(t18077 - 1.*t17884*t17977*t3348 - 1.*t17884*t17983*t8824))*var2[1] + t17898*(-1.*t17983*t3348 + t17977*t8824)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t17898*(-1.*t17884*t17975 + t18077) + t17817*(t17817*t17975 + t18081))*var2[1] + (-0.15121*t17884 - 0.15121*t17898)*var2[2];
  p_output1[13]=(0.28121*t17815 - 0.305*t17682*t17815 - 1.*t17815*t17972)*var2[0] + (0.28121*t17682 + 0.305*Power(t17815,2) - 1.*t17682*t17972)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
