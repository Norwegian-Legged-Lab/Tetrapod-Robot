/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:51 GMT+02:00
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
  double t26853;
  double t26845;
  double t26854;
  double t26936;
  double t26924;
  double t26925;
  double t26937;
  double t8094;
  double t26932;
  double t26938;
  double t26939;
  double t26855;
  double t26943;
  double t26945;
  double t26946;
  double t26942;
  double t26964;
  double t26966;
  double t26947;
  double t26948;
  double t26949;
  double t26954;
  double t26955;
  double t26956;
  double t26957;
  double t26958;
  double t26959;
  double t26967;
  double t26968;
  double t26969;
  double t26974;
  double t26976;
  double t26977;
  double t26979;
  double t26980;
  double t26982;
  double t26987;
  double t26988;
  double t26989;
  double t26992;
  double t26993;
  double t26994;
  double t26941;
  double t26950;
  double t26951;
  double t27020;
  double t27021;
  double t27022;
  double t27025;
  double t27026;
  double t27028;
  double t27029;
  double t27030;
  double t27031;
  double t26852;
  double t26857;
  double t26914;
  double t27019;
  double t27024;
  double t27032;
  double t27033;
  double t27037;
  double t27038;
  double t27039;
  double t27040;
  double t27041;
  double t27042;
  double t27014;
  double t27015;
  double t27016;
  double t27018;
  double t27034;
  double t27035;
  double t27046;
  double t27047;
  double t27048;
  double t27050;
  double t27051;
  double t27052;
  double t27036;
  double t27043;
  double t27044;
  double t27049;
  double t27053;
  double t27054;
  double t27056;
  double t27057;
  double t27058;
  double t26953;
  double t26960;
  double t26961;
  double t27045;
  double t27062;
  double t27069;
  double t27074;
  double t27081;
  double t27086;
  double t27114;
  double t27118;
  double t27094;
  double t27098;
  double t27108;
  double t27104;
  double t27148;
  double t27143;
  t26853 = Cos(var1[12]);
  t26845 = Sin(var1[4]);
  t26854 = Cos(var1[4]);
  t26936 = Cos(var1[13]);
  t26924 = Cos(var1[14]);
  t26925 = Sin(var1[13]);
  t26937 = Sin(var1[14]);
  t8094 = Sin(var1[12]);
  t26932 = t26924*t26925;
  t26938 = -1.*t26936*t26937;
  t26939 = t26932 + t26938;
  t26855 = Sin(var1[5]);
  t26943 = t26936*t26924;
  t26945 = t26925*t26937;
  t26946 = t26943 + t26945;
  t26942 = Cos(var1[5]);
  t26964 = Cos(var1[3]);
  t26966 = Sin(var1[3]);
  t26947 = t26942*t26946;
  t26948 = t8094*t26939*t26855;
  t26949 = t26947 + t26948;
  t26954 = -1.*t26924*t26925;
  t26955 = t26936*t26937;
  t26956 = t26954 + t26955;
  t26957 = t26942*t26956;
  t26958 = t8094*t26946*t26855;
  t26959 = t26957 + t26958;
  t26967 = t26854*t8094;
  t26968 = t26853*t26845*t26855;
  t26969 = t26967 + t26968;
  t26974 = -1.*t26942*t8094*t26939;
  t26976 = t26946*t26855;
  t26977 = t26974 + t26976;
  t26979 = t26853*t26854*t26939;
  t26980 = -1.*t26845*t26949;
  t26982 = t26979 + t26980;
  t26987 = -1.*t26942*t8094*t26946;
  t26988 = t26956*t26855;
  t26989 = t26987 + t26988;
  t26992 = t26853*t26854*t26946;
  t26993 = -1.*t26845*t26959;
  t26994 = t26992 + t26993;
  t26941 = t26853*t26939*t26845;
  t26950 = t26854*t26949;
  t26951 = t26941 + t26950;
  t27020 = -0.0641*t26924;
  t27021 = -0.28*t26937;
  t27022 = t27020 + t27021;
  t27025 = -1.*t26924;
  t27026 = 1. + t27025;
  t27028 = 0.075*t27026;
  t27029 = 0.355*t26924;
  t27030 = -0.0641*t26937;
  t27031 = t27028 + t27029 + t27030;
  t26852 = t8094*t26845;
  t26857 = -1.*t26853*t26854*t26855;
  t26914 = t26852 + t26857;
  t27019 = -0.325*t26925;
  t27024 = t26936*t27022;
  t27032 = t26925*t27031;
  t27033 = t27019 + t27024 + t27032;
  t27037 = -1.*t26936;
  t27038 = 1. + t27037;
  t27039 = 0.325*t27038;
  t27040 = -1.*t26925*t27022;
  t27041 = t26936*t27031;
  t27042 = t27039 + t27040 + t27041;
  t27014 = -1.*t26853;
  t27015 = 1. + t27014;
  t27016 = -0.1575*t27015;
  t27018 = -0.2255*t26853;
  t27034 = -1.*t8094*t27033;
  t27035 = t27016 + t27018 + t27034;
  t27046 = -0.068*t8094;
  t27047 = t26853*t27033;
  t27048 = t27046 + t27047;
  t27050 = t26942*t27042;
  t27051 = -1.*t27035*t26855;
  t27052 = t27050 + t27051;
  t27036 = t26942*t27035;
  t27043 = t27042*t26855;
  t27044 = t27036 + t27043;
  t27049 = t27048*t26845;
  t27053 = t26854*t27052;
  t27054 = t27049 + t27053;
  t27056 = t26854*t27048;
  t27057 = -1.*t26845*t27052;
  t27058 = t27056 + t27057;
  t26953 = t26853*t26946*t26845;
  t26960 = t26854*t26959;
  t26961 = t26953 + t26960;
  t27045 = t26853*t26942*t27044;
  t27062 = -1.*t27044*t26977;
  t27069 = t27044*t26977;
  t27074 = -1.*t27044*t26989;
  t27081 = -1.*t26853*t26942*t27044;
  t27086 = t27044*t26989;
  t27114 = -1.*t8094*t27048;
  t27118 = t26853*t27048*t26946;
  t27094 = t8094*t27048;
  t27098 = -1.*t26853*t27048*t26939;
  t27108 = -1.*t26853*t27048*t26946;
  t27104 = t26853*t27048*t26939;
  t27148 = t27042*t26946;
  t27143 = -1.*t27042*t26956;
  p_output1[0]=t26951*var2[0] + t26914*var2[1] + t26961*var2[2];
  p_output1[1]=(t26964*t26977 - 1.*t26966*t26982)*var2[0] + (t26853*t26942*t26964 - 1.*t26966*t26969)*var2[1] + (t26964*t26989 - 1.*t26966*t26994)*var2[2];
  p_output1[2]=(t26966*t26977 + t26964*t26982)*var2[0] + (t26853*t26942*t26966 + t26964*t26969)*var2[1] + (t26966*t26989 + t26964*t26994)*var2[2];
  p_output1[3]=(t26961*(-1.*t26914*t27054 - 1.*t26969*t27058 + t27081) + t26914*(t26961*t27054 + t26994*t27058 + t27086))*var2[0] + (t26961*(t26951*t27054 + t26982*t27058 + t27069) + t26951*(-1.*t26961*t27054 - 1.*t26994*t27058 + t27074))*var2[1] + (t26951*(t27045 + t26914*t27054 + t26969*t27058) + t26914*(-1.*t26951*t27054 - 1.*t26982*t27058 + t27062))*var2[2];
  p_output1[4]=(t26989*(t26853*t26855*t27052 + t27081 + t27114) + t26853*t26942*(t26959*t27052 + t27086 + t27118))*var2[0] + (t26989*(t26949*t27052 + t27069 + t27104) + t26977*(-1.*t26959*t27052 + t27074 + t27108))*var2[1] + (t26977*(t27045 - 1.*t26853*t26855*t27052 + t27094) + t26853*t26942*(-1.*t26949*t27052 + t27062 + t27098))*var2[2];
  p_output1[5]=(t26853*t26946*(-1.*t26853*t27035 + t27114) + t8094*(t26956*t27042 + t27118 - 1.*t26946*t27035*t8094))*var2[0] + (t26853*t26946*(t27104 + t27148 - 1.*t26939*t27035*t8094) + t26853*t26939*(t27108 + t27143 + t26946*t27035*t8094))*var2[1] + (t26853*t26939*(t26853*t27035 + t27094) + t8094*(-1.*t26946*t27042 + t27098 + t26939*t27035*t8094))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t26939 + 0.2255*t26956)*var2[0] + (t26946*(-1.*t26946*t27033 + t27143) + t26956*(t26939*t27033 + t27148))*var2[1] - 0.068*t26946*var2[2];
  p_output1[13]=(0.325*t26937 - 1.*t26924*t27022 - 1.*t26937*t27031)*var2[0] + (-0.325*t26924 - 1.*t26937*t27022 + t26924*t27031)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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
