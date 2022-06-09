/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:23 GMT+02:00
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
  double t5790;
  double t5802;
  double t5803;
  double t5804;
  double t5805;
  double t5807;
  double t5815;
  double t5908;
  double t5626;
  double t5909;
  double t5777;
  double t5910;
  double t5914;
  double t5917;
  double t5918;
  double t5912;
  double t5911;
  double t5919;
  double t5924;
  double t5966;
  double t5973;
  double t5942;
  double t5944;
  double t5952;
  double t5956;
  double t5962;
  double t5963;
  double t5968;
  double t5969;
  double t5970;
  double t5974;
  double t5978;
  double t5984;
  double t5988;
  double t5989;
  double t5993;
  double t6007;
  double t6008;
  double t6009;
  double t6011;
  double t6012;
  double t6013;
  double t6030;
  double t6031;
  double t6032;
  double t6034;
  double t6035;
  double t6036;
  double t6037;
  double t6038;
  double t6039;
  double t6029;
  double t6033;
  double t6040;
  double t6041;
  double t5938;
  double t5939;
  double t5940;
  double t6025;
  double t6026;
  double t6027;
  double t6028;
  double t6042;
  double t6043;
  double t6044;
  double t6045;
  double t6046;
  double t6047;
  double t6048;
  double t6049;
  double t6050;
  double t6051;
  double t6052;
  double t6054;
  double t6055;
  double t6056;
  double t5941;
  double t5964;
  double t5965;
  double t6064;
  double t6065;
  double t6066;
  double t6060;
  double t6061;
  double t6062;
  double t6053;
  double t6057;
  double t6058;
  double t5893;
  double t5926;
  double t5933;
  double t6067;
  double t6070;
  double t6076;
  double t6081;
  double t6089;
  double t6092;
  double t6099;
  double t6102;
  double t6111;
  double t6107;
  double t6117;
  double t6120;
  double t6138;
  double t6133;
  t5790 = Cos(var1[8]);
  t5802 = Sin(var1[7]);
  t5803 = t5790*t5802;
  t5804 = Cos(var1[7]);
  t5805 = Sin(var1[8]);
  t5807 = -1.*t5804*t5805;
  t5815 = t5803 + t5807;
  t5908 = Cos(var1[4]);
  t5626 = Cos(var1[6]);
  t5909 = Sin(var1[5]);
  t5777 = Sin(var1[4]);
  t5910 = Sin(var1[6]);
  t5914 = t5804*t5790;
  t5917 = t5802*t5805;
  t5918 = t5914 + t5917;
  t5912 = Cos(var1[5]);
  t5911 = t5909*t5910*t5815;
  t5919 = t5912*t5918;
  t5924 = t5911 + t5919;
  t5966 = Cos(var1[3]);
  t5973 = Sin(var1[3]);
  t5942 = -1.*t5790*t5802;
  t5944 = t5804*t5805;
  t5952 = t5942 + t5944;
  t5956 = t5912*t5952;
  t5962 = t5909*t5910*t5918;
  t5963 = t5956 + t5962;
  t5968 = -1.*t5912*t5910*t5815;
  t5969 = t5909*t5918;
  t5970 = t5968 + t5969;
  t5974 = t5908*t5626*t5815;
  t5978 = -1.*t5777*t5924;
  t5984 = t5974 + t5978;
  t5988 = t5626*t5777*t5909;
  t5989 = t5908*t5910;
  t5993 = t5988 + t5989;
  t6007 = t5909*t5952;
  t6008 = -1.*t5912*t5910*t5918;
  t6009 = t6007 + t6008;
  t6011 = t5908*t5626*t5918;
  t6012 = -1.*t5777*t5963;
  t6013 = t6011 + t6012;
  t6030 = -0.0641*t5790;
  t6031 = -0.28*t5805;
  t6032 = t6030 + t6031;
  t6034 = -1.*t5790;
  t6035 = 1. + t6034;
  t6036 = 0.075*t6035;
  t6037 = 0.355*t5790;
  t6038 = -0.0641*t5805;
  t6039 = t6036 + t6037 + t6038;
  t6029 = -0.325*t5802;
  t6033 = t5804*t6032;
  t6040 = t5802*t6039;
  t6041 = t6029 + t6033 + t6040;
  t5938 = -1.*t5908*t5626*t5909;
  t5939 = t5777*t5910;
  t5940 = t5938 + t5939;
  t6025 = -1.*t5626;
  t6026 = 1. + t6025;
  t6027 = 0.1575*t6026;
  t6028 = 0.2255*t5626;
  t6042 = -1.*t5910*t6041;
  t6043 = t6027 + t6028 + t6042;
  t6044 = -1.*t5909*t6043;
  t6045 = -1.*t5804;
  t6046 = 1. + t6045;
  t6047 = 0.325*t6046;
  t6048 = -1.*t5802*t6032;
  t6049 = t5804*t6039;
  t6050 = t6047 + t6048 + t6049;
  t6051 = t5912*t6050;
  t6052 = t6044 + t6051;
  t6054 = 0.068*t5910;
  t6055 = t5626*t6041;
  t6056 = t6054 + t6055;
  t5941 = t5626*t5777*t5918;
  t5964 = t5908*t5963;
  t5965 = t5941 + t5964;
  t6064 = t5912*t6043;
  t6065 = t5909*t6050;
  t6066 = t6064 + t6065;
  t6060 = t5908*t6052;
  t6061 = t5777*t6056;
  t6062 = t6060 + t6061;
  t6053 = -1.*t5777*t6052;
  t6057 = t5908*t6056;
  t6058 = t6053 + t6057;
  t5893 = t5626*t5777*t5815;
  t5926 = t5908*t5924;
  t5933 = t5893 + t5926;
  t6067 = -1.*t5912*t5626*t6066;
  t6070 = t6066*t6009;
  t6076 = t6066*t5970;
  t6081 = -1.*t6066*t6009;
  t6089 = t5912*t5626*t6066;
  t6092 = -1.*t6066*t5970;
  t6099 = -1.*t5910*t6056;
  t6102 = t5626*t6056*t5918;
  t6111 = -1.*t5626*t6056*t5918;
  t6107 = t5626*t6056*t5815;
  t6117 = t5910*t6056;
  t6120 = -1.*t5626*t6056*t5815;
  t6138 = t6050*t5918;
  t6133 = -1.*t6050*t5952;
  p_output1[0]=t5933;
  p_output1[1]=t5940;
  p_output1[2]=t5965;
  p_output1[3]=t5966*t5970 - 1.*t5973*t5984;
  p_output1[4]=t5626*t5912*t5966 - 1.*t5973*t5993;
  p_output1[5]=t5966*t6009 - 1.*t5973*t6013;
  p_output1[6]=t5970*t5973 + t5966*t5984;
  p_output1[7]=t5626*t5912*t5973 + t5966*t5993;
  p_output1[8]=t5973*t6009 + t5966*t6013;
  p_output1[9]=t5965*(-1.*t5993*t6058 - 1.*t5940*t6062 + t6067) + t5940*(t6013*t6058 + t5965*t6062 + t6070);
  p_output1[10]=t5965*(t5984*t6058 + t5933*t6062 + t6076) + t5933*(-1.*t6013*t6058 - 1.*t5965*t6062 + t6081);
  p_output1[11]=t5933*(t5993*t6058 + t5940*t6062 + t6089) + t5940*(-1.*t5984*t6058 - 1.*t5933*t6062 + t6092);
  p_output1[12]=t6009*(t5626*t5909*t6052 + t6067 + t6099) + t5626*t5912*(t5963*t6052 + t6070 + t6102);
  p_output1[13]=t6009*(t5924*t6052 + t6076 + t6107) + t5970*(-1.*t5963*t6052 + t6081 + t6111);
  p_output1[14]=t5970*(-1.*t5626*t5909*t6052 + t6089 + t6117) + t5626*t5912*(-1.*t5924*t6052 + t6092 + t6120);
  p_output1[15]=t5626*t5918*(-1.*t5626*t6043 + t6099) + t5910*(-1.*t5910*t5918*t6043 + t5952*t6050 + t6102);
  p_output1[16]=t5626*t5815*(t5910*t5918*t6043 + t6111 + t6133) + t5626*t5918*(-1.*t5815*t5910*t6043 + t6107 + t6138);
  p_output1[17]=t5626*t5815*(t5626*t6043 + t6117) + t5910*(t5815*t5910*t6043 - 1.*t5918*t6050 + t6120);
  p_output1[18]=-0.1575*t5815 - 0.2255*t5952;
  p_output1[19]=t5918*(-1.*t5918*t6041 + t6133) + t5952*(t5815*t6041 + t6138);
  p_output1[20]=0.068*t5918;
  p_output1[21]=0.325*t5805 - 1.*t5790*t6032 - 1.*t5805*t6039;
  p_output1[22]=0;
  p_output1[23]=-0.325*t5790 - 1.*t5805*t6032 + t5790*t6039;
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
