/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:36 GMT+02:00
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
  double t5900;
  double t5854;
  double t5898;
  double t5902;
  double t5976;
  double t5977;
  double t5978;
  double t5975;
  double t5980;
  double t5971;
  double t5981;
  double t5966;
  double t5899;
  double t5903;
  double t5960;
  double t5964;
  double t5979;
  double t5982;
  double t5983;
  double t5991;
  double t5987;
  double t5988;
  double t5989;
  double t5986;
  double t5992;
  double t5993;
  double t5994;
  double t6015;
  double t6016;
  double t6021;
  double t6022;
  double t6023;
  double t6024;
  double t6025;
  double t6026;
  double t6027;
  double t6028;
  double t6029;
  double t6030;
  double t6031;
  double t6035;
  double t6036;
  double t6037;
  double t6018;
  double t6019;
  double t6020;
  double t6032;
  double t6033;
  double t6041;
  double t6042;
  double t6043;
  double t6045;
  double t6046;
  double t6047;
  double t6048;
  double t6051;
  double t6052;
  double t6053;
  double t6034;
  double t6038;
  double t6039;
  double t6000;
  double t6001;
  double t6003;
  double t6004;
  double t6005;
  double t6006;
  double t6008;
  double t6009;
  double t6010;
  double t6050;
  double t6054;
  double t6055;
  double t6057;
  double t6058;
  double t6059;
  double t6063;
  double t6064;
  double t6065;
  double t6011;
  double t6012;
  double t6014;
  double t6040;
  double t6066;
  double t5965;
  double t5984;
  double t5985;
  double t6068;
  double t6069;
  double t6070;
  double t6101;
  double t6106;
  double t6112;
  double t6116;
  double t6143;
  double t6148;
  t5900 = Cos(var1[10]);
  t5854 = Cos(var1[11]);
  t5898 = Sin(var1[10]);
  t5902 = Sin(var1[11]);
  t5976 = -1.*t5900*t5854;
  t5977 = -1.*t5898*t5902;
  t5978 = t5976 + t5977;
  t5975 = Cos(var1[5]);
  t5980 = Sin(var1[9]);
  t5971 = Cos(var1[9]);
  t5981 = Sin(var1[5]);
  t5966 = Cos(var1[4]);
  t5899 = -1.*t5854*t5898;
  t5903 = t5900*t5902;
  t5960 = t5899 + t5903;
  t5964 = Sin(var1[4]);
  t5979 = t5971*t5975*t5978;
  t5982 = -1.*t5980*t5978*t5981;
  t5983 = t5979 + t5982;
  t5991 = Sin(var1[3]);
  t5987 = t5975*t5980*t5978;
  t5988 = t5971*t5978*t5981;
  t5989 = t5987 + t5988;
  t5986 = Cos(var1[3]);
  t5992 = t5966*t5960;
  t5993 = -1.*t5964*t5983;
  t5994 = t5992 + t5993;
  t6015 = -1.*t5971;
  t6016 = 1. + t6015;
  t6021 = -1.*t5900;
  t6022 = 1. + t6021;
  t6023 = -0.28121*t6022;
  t6024 = -1.*t5854;
  t6025 = 1. + t6024;
  t6026 = -0.50321*t6025;
  t6027 = -0.19821*t5854;
  t6028 = t6026 + t6027;
  t6029 = t5900*t6028;
  t6030 = 0.305*t5898*t5902;
  t6031 = t6023 + t6029 + t6030;
  t6035 = -0.15121*t6016;
  t6036 = t5971*t6031;
  t6037 = t6035 + t6036;
  t6018 = 0.15121*t6016;
  t6019 = 0.15121*t5971;
  t6020 = 0.15121*t5980;
  t6032 = t5980*t6031;
  t6033 = t6018 + t6019 + t6020 + t6032;
  t6041 = t5975*t5980;
  t6042 = t5971*t5981;
  t6043 = t6041 + t6042;
  t6045 = 0.28121*t5898;
  t6046 = t6028*t5898;
  t6047 = -0.305*t5900*t5902;
  t6048 = t6045 + t6046 + t6047;
  t6051 = t5975*t6037;
  t6052 = -1.*t6033*t5981;
  t6053 = t6051 + t6052;
  t6034 = t5975*t6033;
  t6038 = t6037*t5981;
  t6039 = t6034 + t6038;
  t6000 = t5900*t5854;
  t6001 = t5898*t5902;
  t6003 = t6000 + t6001;
  t6004 = t6003*t5964;
  t6005 = t5971*t5975*t5960;
  t6006 = -1.*t5980*t5960*t5981;
  t6008 = t6005 + t6006;
  t6009 = t5966*t6008;
  t6010 = t6004 + t6009;
  t6050 = t6048*t5964;
  t6054 = t5966*t6053;
  t6055 = t6050 + t6054;
  t6057 = t5966*t6048;
  t6058 = -1.*t5964*t6053;
  t6059 = t6057 + t6058;
  t6063 = t5975*t5980*t5960;
  t6064 = t5971*t5960*t5981;
  t6065 = t6063 + t6064;
  t6011 = -1.*t5971*t5975;
  t6012 = t5980*t5981;
  t6014 = t6011 + t6012;
  t6040 = -1.*t6014*t6039;
  t6066 = t6065*t6039;
  t5965 = t5960*t5964;
  t5984 = t5966*t5983;
  t5985 = t5965 + t5984;
  t6068 = t5966*t6003;
  t6069 = -1.*t5964*t6008;
  t6070 = t6068 + t6069;
  t6101 = -1.*t6065*t6039;
  t6106 = t5989*t6039;
  t6112 = -1.*t6048*t6003;
  t6116 = t6048*t5960;
  t6143 = t6014*t6039;
  t6148 = -1.*t5989*t6039;
  p_output1[0]=t5985;
  p_output1[1]=t5986*t5989 - 1.*t5991*t5994;
  p_output1[2]=t5989*t5991 + t5986*t5994;
  p_output1[3]=t6010*(t6040 - 1.*t5966*t6043*t6055 + t5964*t6043*t6059) + t5966*t6043*(t6010*t6055 + t6066 + t6059*t6070);
  p_output1[4]=(t6040 - 1.*t6043*t6053)*t6065 + t6014*(t6003*t6048 + t6008*t6053 + t6066);
  p_output1[5]=t6003*(t5971*t6033 - 1.*t5980*t6037);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t5978 + 0.15121*t6003;
  p_output1[10]=0.28121*t5902 - 0.305*t5854*t5902 + t5902*t6028;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5966*t6043;
  p_output1[19]=t5986*t6014 + t5964*t5991*t6043;
  p_output1[20]=t5991*t6014 - 1.*t5964*t5986*t6043;
  p_output1[21]=t5985*(-1.*t6010*t6055 - 1.*t6059*t6070 + t6101) + t6010*(t5985*t6055 + t5994*t6059 + t6106);
  p_output1[22]=t5989*(-1.*t6008*t6053 + t6101 + t6112) + t6065*(t5983*t6053 + t6106 + t6116);
  p_output1[23]=t5960*(-1.*t5960*t5980*t6033 - 1.*t5960*t5971*t6037 + t6112) + t6003*(t5978*t5980*t6033 + t5971*t5978*t6037 + t6116);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t5960*(-1.*t5960*t6031 + t6112) + t6003*(t5978*t6031 + t6116);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6010;
  p_output1[37]=t5986*t6065 - 1.*t5991*t6070;
  p_output1[38]=t5991*t6065 + t5986*t6070;
  p_output1[39]=t5985*(t5966*t6043*t6055 - 1.*t5964*t6043*t6059 + t6143) + t5966*t6043*(-1.*t5985*t6055 - 1.*t5994*t6059 + t6148);
  p_output1[40]=t5989*(t6043*t6053 + t6143) + t6014*(-1.*t5960*t6048 - 1.*t5983*t6053 + t6148);
  p_output1[41]=t5960*(-1.*t5971*t6033 + t5980*t6037);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t5854 + 0.305*Power(t5902,2) + t5854*t6028;
  p_output1[47]=-0.305;
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

#include "fRlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
