/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:59 GMT+02:00
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
  double t71;
  double t962;
  double t835;
  double t991;
  double t1012;
  double t985;
  double t1022;
  double t954;
  double t1045;
  double t1047;
  double t1050;
  double t964;
  double t1042;
  double t995;
  double t1032;
  double t1041;
  double t958;
  double t965;
  double t975;
  double t1107;
  double t1099;
  double t1053;
  double t1058;
  double t1059;
  double t1066;
  double t1075;
  double t1076;
  double t1078;
  double t1079;
  double t1087;
  double t1108;
  double t1112;
  double t1113;
  double t1121;
  double t1122;
  double t1123;
  double t1137;
  double t1138;
  double t1139;
  double t1150;
  double t1151;
  double t1152;
  double t1154;
  double t1155;
  double t1156;
  double t1044;
  double t1060;
  double t1061;
  double t2330;
  double t2345;
  double t2986;
  double t3145;
  double t3146;
  double t3148;
  double t3213;
  double t3237;
  double t3341;
  double t3347;
  double t3517;
  double t3523;
  double t56902;
  double t56927;
  double t56929;
  double t57021;
  double t2438;
  double t2971;
  double t2979;
  double t56920;
  double t56921;
  double t57032;
  double t57036;
  double t57037;
  double t57039;
  double t57041;
  double t57042;
  double t57043;
  double t56922;
  double t57025;
  double t57026;
  double t57040;
  double t57044;
  double t57045;
  double t57047;
  double t57048;
  double t57049;
  double t1077;
  double t1091;
  double t1092;
  double t57027;
  double t57054;
  double t57062;
  double t57070;
  double t57081;
  double t57089;
  double t57120;
  double t57126;
  t71 = Cos(var1[4]);
  t962 = Cos(var1[12]);
  t835 = Cos(var1[5]);
  t991 = Cos(var1[14]);
  t1012 = Sin(var1[13]);
  t985 = Cos(var1[13]);
  t1022 = Sin(var1[14]);
  t954 = Sin(var1[12]);
  t1045 = t991*t1012;
  t1047 = -1.*t985*t1022;
  t1050 = t1045 + t1047;
  t964 = Sin(var1[5]);
  t1042 = Sin(var1[4]);
  t995 = t985*t991;
  t1032 = t1012*t1022;
  t1041 = t995 + t1032;
  t958 = -1.*t835*t954;
  t965 = -1.*t962*t964;
  t975 = t958 + t965;
  t1107 = Cos(var1[3]);
  t1099 = Sin(var1[3]);
  t1053 = t962*t835*t1050;
  t1058 = -1.*t954*t1050*t964;
  t1059 = t1053 + t1058;
  t1066 = -1.*t991*t1012;
  t1075 = t985*t1022;
  t1076 = t1066 + t1075;
  t1078 = t962*t835*t1041;
  t1079 = -1.*t954*t1041*t964;
  t1087 = t1078 + t1079;
  t1108 = t962*t835;
  t1112 = -1.*t954*t964;
  t1113 = t1108 + t1112;
  t1121 = t835*t954*t1050;
  t1122 = t962*t1050*t964;
  t1123 = t1121 + t1122;
  t1137 = t71*t1041;
  t1138 = -1.*t1042*t1059;
  t1139 = t1137 + t1138;
  t1150 = t835*t954*t1041;
  t1151 = t962*t1041*t964;
  t1152 = t1150 + t1151;
  t1154 = t71*t1076;
  t1155 = -1.*t1042*t1087;
  t1156 = t1154 + t1155;
  t1044 = t1041*t1042;
  t1060 = t71*t1059;
  t1061 = t1044 + t1060;
  t2330 = -1.*t962;
  t2345 = 1. + t2330;
  t2986 = -1.*t985;
  t3145 = 1. + t2986;
  t3146 = 0.28121*t3145;
  t3148 = -1.*t991;
  t3213 = 1. + t3148;
  t3237 = 0.50321*t3213;
  t3341 = 0.19821*t991;
  t3347 = t3237 + t3341;
  t3517 = t985*t3347;
  t3523 = -0.305*t1012*t1022;
  t56902 = t3146 + t3517 + t3523;
  t56927 = 0.15121*t2345;
  t56929 = t962*t56902;
  t57021 = t56927 + t56929;
  t2438 = -0.15121*t2345;
  t2971 = -0.15121*t962;
  t2979 = -0.15121*t954;
  t56920 = t954*t56902;
  t56921 = t2438 + t2971 + t2979 + t56920;
  t57032 = 0.28121*t1012;
  t57036 = -1.*t3347*t1012;
  t57037 = -0.305*t985*t1022;
  t57039 = t57032 + t57036 + t57037;
  t57041 = t835*t57021;
  t57042 = -1.*t56921*t964;
  t57043 = t57041 + t57042;
  t56922 = t835*t56921;
  t57025 = t57021*t964;
  t57026 = t56922 + t57025;
  t57040 = t57039*t1042;
  t57044 = t71*t57043;
  t57045 = t57040 + t57044;
  t57047 = t71*t57039;
  t57048 = -1.*t1042*t57043;
  t57049 = t57047 + t57048;
  t1077 = t1076*t1042;
  t1091 = t71*t1087;
  t1092 = t1077 + t1091;
  t57027 = -1.*t1113*t57026;
  t57054 = t1123*t57026;
  t57062 = t1113*t57026;
  t57070 = -1.*t1152*t57026;
  t57081 = -1.*t1123*t57026;
  t57089 = t1152*t57026;
  t57120 = -1.*t57039*t1041;
  t57126 = t57039*t1076;
  p_output1[0]=t1092*var2[0] + t71*t975*var2[1] + t1061*var2[2];
  p_output1[1]=(t1107*t1152 - 1.*t1099*t1156)*var2[0] + (t1107*t1113 + t1042*t1099*t975)*var2[1] + (t1107*t1123 - 1.*t1099*t1139)*var2[2];
  p_output1[2]=(t1099*t1152 + t1107*t1156)*var2[0] + (t1099*t1113 - 1.*t1042*t1107*t975)*var2[1] + (t1099*t1123 + t1107*t1139)*var2[2];
  p_output1[3]=((t1061*t57045 + t1139*t57049 + t57054)*t71*t975 + t1061*(t57027 + t1042*t57049*t975 - 1.*t57045*t71*t975))*var2[0] + (t1092*(-1.*t1061*t57045 - 1.*t1139*t57049 + t57081) + t1061*(t1092*t57045 + t1156*t57049 + t57089))*var2[1] + ((-1.*t1092*t57045 - 1.*t1156*t57049 + t57070)*t71*t975 + t1092*(t57062 - 1.*t1042*t57049*t975 + t57045*t71*t975))*var2[2];
  p_output1[4]=(t1113*(t1041*t57039 + t1059*t57043 + t57054) + t1123*(t57027 - 1.*t57043*t975))*var2[0] + (t1152*(-1.*t1059*t57043 + t57081 + t57120) + t1123*(t1087*t57043 + t57089 + t57126))*var2[1] + (t1113*(-1.*t1076*t57039 - 1.*t1087*t57043 + t57070) + t1152*(t57062 + t57043*t975))*var2[2];
  p_output1[5]=t1041*(t57021*t954 - 1.*t56921*t962)*var2[0] + (t1041*(t57126 + t1041*t56921*t954 + t1041*t57021*t962) + t1076*(t57120 - 1.*t1050*t56921*t954 - 1.*t1050*t57021*t962))*var2[1] + t1076*(-1.*t57021*t954 + t56921*t962)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t1076*(-1.*t1050*t56902 + t57120) + t1041*(t1041*t56902 + t57126))*var2[1] + (-0.15121*t1050 - 0.15121*t1076)*var2[2];
  p_output1[13]=(0.28121*t1022 - 1.*t1022*t3347 - 0.305*t1022*t991)*var2[0] + (0.305*Power(t1022,2) + 0.28121*t991 - 1.*t3347*t991)*var2[2];
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
