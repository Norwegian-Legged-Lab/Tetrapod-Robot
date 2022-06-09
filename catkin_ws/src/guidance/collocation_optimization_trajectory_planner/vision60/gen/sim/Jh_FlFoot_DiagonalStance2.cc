/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:05 GMT+02:00
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
  double t5787;
  double t5799;
  double t5800;
  double t5801;
  double t5802;
  double t5804;
  double t5811;
  double t5905;
  double t5623;
  double t5906;
  double t5774;
  double t5907;
  double t5911;
  double t5912;
  double t5915;
  double t5909;
  double t5908;
  double t5916;
  double t5920;
  double t5963;
  double t5970;
  double t5939;
  double t5940;
  double t5949;
  double t5953;
  double t5959;
  double t5960;
  double t5965;
  double t5966;
  double t5967;
  double t5971;
  double t5975;
  double t5981;
  double t5985;
  double t5986;
  double t5990;
  double t6004;
  double t6005;
  double t6006;
  double t6008;
  double t6009;
  double t6010;
  double t6027;
  double t6028;
  double t6029;
  double t6031;
  double t6032;
  double t6033;
  double t6034;
  double t6035;
  double t6036;
  double t6026;
  double t6030;
  double t6037;
  double t6038;
  double t5935;
  double t5936;
  double t5937;
  double t6022;
  double t6023;
  double t6024;
  double t6025;
  double t6039;
  double t6040;
  double t6041;
  double t6042;
  double t6043;
  double t6044;
  double t6045;
  double t6046;
  double t6047;
  double t6048;
  double t6049;
  double t6051;
  double t6052;
  double t6053;
  double t5938;
  double t5961;
  double t5962;
  double t6061;
  double t6062;
  double t6063;
  double t6057;
  double t6058;
  double t6059;
  double t6050;
  double t6054;
  double t6055;
  double t5890;
  double t5922;
  double t5930;
  double t6064;
  double t6067;
  double t6073;
  double t6078;
  double t6086;
  double t6089;
  double t6096;
  double t6099;
  double t6108;
  double t6104;
  double t6114;
  double t6117;
  double t6135;
  double t6130;
  t5787 = Cos(var1[8]);
  t5799 = Sin(var1[7]);
  t5800 = t5787*t5799;
  t5801 = Cos(var1[7]);
  t5802 = Sin(var1[8]);
  t5804 = -1.*t5801*t5802;
  t5811 = t5800 + t5804;
  t5905 = Cos(var1[4]);
  t5623 = Cos(var1[6]);
  t5906 = Sin(var1[5]);
  t5774 = Sin(var1[4]);
  t5907 = Sin(var1[6]);
  t5911 = t5801*t5787;
  t5912 = t5799*t5802;
  t5915 = t5911 + t5912;
  t5909 = Cos(var1[5]);
  t5908 = t5906*t5907*t5811;
  t5916 = t5909*t5915;
  t5920 = t5908 + t5916;
  t5963 = Cos(var1[3]);
  t5970 = Sin(var1[3]);
  t5939 = -1.*t5787*t5799;
  t5940 = t5801*t5802;
  t5949 = t5939 + t5940;
  t5953 = t5909*t5949;
  t5959 = t5906*t5907*t5915;
  t5960 = t5953 + t5959;
  t5965 = -1.*t5909*t5907*t5811;
  t5966 = t5906*t5915;
  t5967 = t5965 + t5966;
  t5971 = t5905*t5623*t5811;
  t5975 = -1.*t5774*t5920;
  t5981 = t5971 + t5975;
  t5985 = t5623*t5774*t5906;
  t5986 = t5905*t5907;
  t5990 = t5985 + t5986;
  t6004 = t5906*t5949;
  t6005 = -1.*t5909*t5907*t5915;
  t6006 = t6004 + t6005;
  t6008 = t5905*t5623*t5915;
  t6009 = -1.*t5774*t5960;
  t6010 = t6008 + t6009;
  t6027 = -0.0641*t5787;
  t6028 = -0.28*t5802;
  t6029 = t6027 + t6028;
  t6031 = -1.*t5787;
  t6032 = 1. + t6031;
  t6033 = 0.075*t6032;
  t6034 = 0.355*t5787;
  t6035 = -0.0641*t5802;
  t6036 = t6033 + t6034 + t6035;
  t6026 = -0.325*t5799;
  t6030 = t5801*t6029;
  t6037 = t5799*t6036;
  t6038 = t6026 + t6030 + t6037;
  t5935 = -1.*t5905*t5623*t5906;
  t5936 = t5774*t5907;
  t5937 = t5935 + t5936;
  t6022 = -1.*t5623;
  t6023 = 1. + t6022;
  t6024 = 0.1575*t6023;
  t6025 = 0.2255*t5623;
  t6039 = -1.*t5907*t6038;
  t6040 = t6024 + t6025 + t6039;
  t6041 = -1.*t5906*t6040;
  t6042 = -1.*t5801;
  t6043 = 1. + t6042;
  t6044 = 0.325*t6043;
  t6045 = -1.*t5799*t6029;
  t6046 = t5801*t6036;
  t6047 = t6044 + t6045 + t6046;
  t6048 = t5909*t6047;
  t6049 = t6041 + t6048;
  t6051 = 0.068*t5907;
  t6052 = t5623*t6038;
  t6053 = t6051 + t6052;
  t5938 = t5623*t5774*t5915;
  t5961 = t5905*t5960;
  t5962 = t5938 + t5961;
  t6061 = t5909*t6040;
  t6062 = t5906*t6047;
  t6063 = t6061 + t6062;
  t6057 = t5905*t6049;
  t6058 = t5774*t6053;
  t6059 = t6057 + t6058;
  t6050 = -1.*t5774*t6049;
  t6054 = t5905*t6053;
  t6055 = t6050 + t6054;
  t5890 = t5623*t5774*t5811;
  t5922 = t5905*t5920;
  t5930 = t5890 + t5922;
  t6064 = -1.*t5909*t5623*t6063;
  t6067 = t6063*t6006;
  t6073 = t6063*t5967;
  t6078 = -1.*t6063*t6006;
  t6086 = t5909*t5623*t6063;
  t6089 = -1.*t6063*t5967;
  t6096 = -1.*t5907*t6053;
  t6099 = t5623*t6053*t5915;
  t6108 = -1.*t5623*t6053*t5915;
  t6104 = t5623*t6053*t5811;
  t6114 = t5907*t6053;
  t6117 = -1.*t5623*t6053*t5811;
  t6135 = t6047*t5915;
  t6130 = -1.*t6047*t5949;
  p_output1[0]=t5930;
  p_output1[1]=t5937;
  p_output1[2]=t5962;
  p_output1[3]=t5963*t5967 - 1.*t5970*t5981;
  p_output1[4]=t5623*t5909*t5963 - 1.*t5970*t5990;
  p_output1[5]=t5963*t6006 - 1.*t5970*t6010;
  p_output1[6]=t5967*t5970 + t5963*t5981;
  p_output1[7]=t5623*t5909*t5970 + t5963*t5990;
  p_output1[8]=t5970*t6006 + t5963*t6010;
  p_output1[9]=t5962*(-1.*t5990*t6055 - 1.*t5937*t6059 + t6064) + t5937*(t6010*t6055 + t5962*t6059 + t6067);
  p_output1[10]=t5962*(t5981*t6055 + t5930*t6059 + t6073) + t5930*(-1.*t6010*t6055 - 1.*t5962*t6059 + t6078);
  p_output1[11]=t5930*(t5990*t6055 + t5937*t6059 + t6086) + t5937*(-1.*t5981*t6055 - 1.*t5930*t6059 + t6089);
  p_output1[12]=t6006*(t5623*t5906*t6049 + t6064 + t6096) + t5623*t5909*(t5960*t6049 + t6067 + t6099);
  p_output1[13]=t6006*(t5920*t6049 + t6073 + t6104) + t5967*(-1.*t5960*t6049 + t6078 + t6108);
  p_output1[14]=t5967*(-1.*t5623*t5906*t6049 + t6086 + t6114) + t5623*t5909*(-1.*t5920*t6049 + t6089 + t6117);
  p_output1[15]=t5623*t5915*(-1.*t5623*t6040 + t6096) + t5907*(-1.*t5907*t5915*t6040 + t5949*t6047 + t6099);
  p_output1[16]=t5623*t5811*(t5907*t5915*t6040 + t6108 + t6130) + t5623*t5915*(-1.*t5811*t5907*t6040 + t6104 + t6135);
  p_output1[17]=t5623*t5811*(t5623*t6040 + t6114) + t5907*(t5811*t5907*t6040 - 1.*t5915*t6047 + t6117);
  p_output1[18]=-0.1575*t5811 - 0.2255*t5949;
  p_output1[19]=t5915*(-1.*t5915*t6038 + t6130) + t5949*(t5811*t6038 + t6135);
  p_output1[20]=0.068*t5915;
  p_output1[21]=0.325*t5802 - 1.*t5787*t6029 - 1.*t5802*t6036;
  p_output1[22]=0;
  p_output1[23]=-0.325*t5787 - 1.*t5802*t6029 + t5787*t6036;
  p_output1[24]=-0.0641;
  p_output1[25]=0;
  p_output1[26]=-0.28;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
