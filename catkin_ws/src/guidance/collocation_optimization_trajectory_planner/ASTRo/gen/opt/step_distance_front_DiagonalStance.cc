/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:47:34 GMT+02:00
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
  double t789;
  double t850;
  double t851;
  double t852;
  double t854;
  double t870;
  double t844;
  double t891;
  double t886;
  double t887;
  double t897;
  double t909;
  double t910;
  double t911;
  double t913;
  double t922;
  double t926;
  double t927;
  double t929;
  double t931;
  double t932;
  double t933;
  double t940;
  double t944;
  double t945;
  double t946;
  double t949;
  double t960;
  double t972;
  double t973;
  double t974;
  double t976;
  double t981;
  double t984;
  double t985;
  double t986;
  double t988;
  double t989;
  double t990;
  double t991;
  double t853;
  double t880;
  double t998;
  double t889;
  double t890;
  double t1001;
  double t1000;
  double t1002;
  double t1003;
  double t1005;
  double t1006;
  double t1007;
  double t901;
  double t905;
  double t914;
  double t918;
  double t1013;
  double t1014;
  double t1015;
  double t1017;
  double t1018;
  double t1019;
  double t1021;
  double t1022;
  double t1023;
  double t950;
  double t951;
  double t953;
  double t954;
  double t964;
  double t968;
  double t982;
  double t983;
  double t1035;
  double t1036;
  double t1037;
  double t1040;
  double t1041;
  double t1042;
  double t1044;
  double t1045;
  double t1046;
  t789 = Cos(var1[4]);
  t850 = Cos(var1[12]);
  t851 = -1.*t850;
  t852 = 1. + t851;
  t854 = Sin(var1[12]);
  t870 = -0.15121*t854;
  t844 = Cos(var1[5]);
  t891 = Sin(var1[5]);
  t886 = Sin(var1[13]);
  t887 = Sin(var1[4]);
  t897 = Cos(var1[13]);
  t909 = t850*t789*t844;
  t910 = -1.*t789*t854*t891;
  t911 = t909 + t910;
  t913 = Cos(var1[14]);
  t922 = -1.*t886*t887;
  t926 = t897*t911;
  t927 = t922 + t926;
  t929 = Sin(var1[14]);
  t931 = t897*t887;
  t932 = t886*t911;
  t933 = t931 + t932;
  t940 = Cos(var1[6]);
  t944 = -1.*t940;
  t945 = 1. + t944;
  t946 = 0.15121*t945;
  t949 = Sin(var1[6]);
  t960 = Cos(var1[7]);
  t972 = t789*t844*t940;
  t973 = -1.*t789*t891*t949;
  t974 = t972 + t973;
  t976 = Sin(var1[7]);
  t981 = Cos(var1[8]);
  t984 = t960*t974;
  t985 = -1.*t887*t976;
  t986 = t984 + t985;
  t988 = t960*t887;
  t989 = t974*t976;
  t990 = t988 + t989;
  t991 = Sin(var1[8]);
  t853 = 0.15121*t852;
  t880 = t853 + t870;
  t998 = Sin(var1[3]);
  t889 = -0.15121*t852;
  t890 = t889 + t870;
  t1001 = Cos(var1[3]);
  t1000 = t844*t998*t887;
  t1002 = t1001*t891;
  t1003 = t1000 + t1002;
  t1005 = t1001*t844;
  t1006 = -1.*t998*t887*t891;
  t1007 = t1005 + t1006;
  t901 = -1.*t897;
  t905 = 1. + t901;
  t914 = -1.*t913;
  t918 = 1. + t914;
  t1013 = t850*t1003;
  t1014 = t854*t1007;
  t1015 = t1013 + t1014;
  t1017 = t789*t886*t998;
  t1018 = t897*t1015;
  t1019 = t1017 + t1018;
  t1021 = -1.*t897*t789*t998;
  t1022 = t886*t1015;
  t1023 = t1021 + t1022;
  t950 = -0.15121*t949;
  t951 = t946 + t950;
  t953 = 0.15121*t949;
  t954 = t946 + t953;
  t964 = -1.*t960;
  t968 = 1. + t964;
  t982 = -1.*t981;
  t983 = 1. + t982;
  t1035 = t940*t1003;
  t1036 = t1007*t949;
  t1037 = t1035 + t1036;
  t1040 = t960*t1037;
  t1041 = t789*t998*t976;
  t1042 = t1040 + t1041;
  t1044 = -1.*t789*t960*t998;
  t1045 = t1037*t976;
  t1046 = t1044 + t1045;
  p_output1[0]=-1.*t789*t844*t880 - 0.28121*t886*t887 + t789*t890*t891 + 0.15121*(-1.*t789*t844*t854 - 1.*t789*t850*t891) - 0.28121*t905*t911 - 0.50321*t918*t927 + 0.50321*t929*t933 - 0.19821*(t913*t927 + t929*t933) + 0.15121*(-1.*t789*t891*t940 - 1.*t789*t844*t949) - 1.*t789*t891*t951 + t789*t844*t954 + 0.28121*t968*t974 + 0.28121*t887*t976 + 0.50321*t983*t986 - 0.50321*t990*t991 + 0.19821*(t981*t986 + t990*t991);
  p_output1[1]=0.15121*(t1007*t850 - 1.*t1003*t854) - 1.*t1003*t880 - 1.*t1007*t890 - 0.28121*t1015*t905 - 0.50321*t1019*t918 + 0.50321*t1023*t929 - 0.19821*(t1019*t913 + t1023*t929) + 0.15121*(t1007*t940 - 1.*t1003*t949) + t1007*t951 + t1003*t954 + 0.28121*t1037*t968 + 0.50321*t1042*t983 - 0.50321*t1046*t991 + 0.19821*(t1042*t981 + t1046*t991) + 0.28121*t789*t886*t998 - 0.28121*t789*t976*t998;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_front_DiagonalStance.hh"

namespace DiagonalStance
{

void step_distance_front_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
