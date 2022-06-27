/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:15 GMT+02:00
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
  double t5904;
  double t5897;
  double t5901;
  double t5905;
  double t5902;
  double t5975;
  double t5984;
  double t5997;
  double t6006;
  double t5999;
  double t6000;
  double t6002;
  double t6007;
  double t5816;
  double t5991;
  double t5985;
  double t6005;
  double t6009;
  double t6010;
  double t6018;
  double t6014;
  double t6015;
  double t6016;
  double t6013;
  double t6019;
  double t6020;
  double t6021;
  double t6043;
  double t6044;
  double t6046;
  double t6048;
  double t6050;
  double t6051;
  double t6052;
  double t6053;
  double t6055;
  double t6042;
  double t6047;
  double t6056;
  double t6057;
  double t6062;
  double t6063;
  double t6064;
  double t6065;
  double t6066;
  double t6067;
  double t6037;
  double t6038;
  double t6040;
  double t6041;
  double t6058;
  double t6060;
  double t6074;
  double t6075;
  double t6077;
  double t6079;
  double t6080;
  double t6082;
  double t6071;
  double t6072;
  double t6073;
  double t6061;
  double t6068;
  double t6069;
  double t6028;
  double t6029;
  double t6030;
  double t6078;
  double t6083;
  double t6084;
  double t6027;
  double t6031;
  double t6032;
  double t6033;
  double t6035;
  double t6036;
  double t6090;
  double t6092;
  double t6093;
  double t6097;
  double t6098;
  double t6099;
  double t6070;
  double t6100;
  double t6109;
  double t6113;
  double t6086;
  double t6088;
  double t6089;
  double t5986;
  double t6011;
  double t6012;
  double t6102;
  double t6103;
  double t6104;
  double t6139;
  double t6144;
  double t6154;
  double t6150;
  double t6164;
  double t6159;
  double t6181;
  double t6186;
  double t6192;
  double t6196;
  t5904 = Cos(var1[16]);
  t5897 = Cos(var1[17]);
  t5901 = Sin(var1[16]);
  t5905 = Sin(var1[17]);
  t5902 = t5897*t5901;
  t5975 = -1.*t5904*t5905;
  t5984 = t5902 + t5975;
  t5997 = Cos(var1[5]);
  t6006 = Sin(var1[15]);
  t5999 = t5904*t5897;
  t6000 = t5901*t5905;
  t6002 = t5999 + t6000;
  t6007 = Sin(var1[5]);
  t5816 = Cos(var1[15]);
  t5991 = Cos(var1[4]);
  t5985 = Sin(var1[4]);
  t6005 = t5997*t6002;
  t6009 = t6006*t5984*t6007;
  t6010 = t6005 + t6009;
  t6018 = Sin(var1[3]);
  t6014 = -1.*t5997*t6006*t5984;
  t6015 = t6002*t6007;
  t6016 = t6014 + t6015;
  t6013 = Cos(var1[3]);
  t6019 = t5816*t5991*t5984;
  t6020 = -1.*t5985*t6010;
  t6021 = t6019 + t6020;
  t6043 = -0.0641*t5897;
  t6044 = -0.28*t5905;
  t6046 = t6043 + t6044;
  t6048 = -1.*t5897;
  t6050 = 1. + t6048;
  t6051 = -0.575*t6050;
  t6052 = -0.295*t5897;
  t6053 = -0.0641*t5905;
  t6055 = t6051 + t6052 + t6053;
  t6042 = 0.325*t5901;
  t6047 = t5904*t6046;
  t6056 = t5901*t6055;
  t6057 = t6042 + t6047 + t6056;
  t6062 = -1.*t5904;
  t6063 = 1. + t6062;
  t6064 = -0.325*t6063;
  t6065 = -1.*t5901*t6046;
  t6066 = t5904*t6055;
  t6067 = t6064 + t6065 + t6066;
  t6037 = -1.*t5816;
  t6038 = 1. + t6037;
  t6040 = -0.1575*t6038;
  t6041 = -0.2255*t5816;
  t6058 = -1.*t6006*t6057;
  t6060 = t6040 + t6041 + t6058;
  t6074 = -0.068*t6006;
  t6075 = t5816*t6057;
  t6077 = t6074 + t6075;
  t6079 = t5997*t6067;
  t6080 = -1.*t6060*t6007;
  t6082 = t6079 + t6080;
  t6071 = t6006*t5985;
  t6072 = -1.*t5816*t5991*t6007;
  t6073 = t6071 + t6072;
  t6061 = t5997*t6060;
  t6068 = t6067*t6007;
  t6069 = t6061 + t6068;
  t6028 = -1.*t5897*t5901;
  t6029 = t5904*t5905;
  t6030 = t6028 + t6029;
  t6078 = t6077*t5985;
  t6083 = t5991*t6082;
  t6084 = t6078 + t6083;
  t6027 = t5816*t6002*t5985;
  t6031 = t5997*t6030;
  t6032 = t6006*t6002*t6007;
  t6033 = t6031 + t6032;
  t6035 = t5991*t6033;
  t6036 = t6027 + t6035;
  t6090 = t5991*t6077;
  t6092 = -1.*t5985*t6082;
  t6093 = t6090 + t6092;
  t6097 = -1.*t5997*t6006*t6002;
  t6098 = t6030*t6007;
  t6099 = t6097 + t6098;
  t6070 = -1.*t5816*t5997*t6069;
  t6100 = t6069*t6099;
  t6109 = -1.*t6006*t6077;
  t6113 = t5816*t6077*t6002;
  t6086 = t5991*t6006;
  t6088 = t5816*t5985*t6007;
  t6089 = t6086 + t6088;
  t5986 = t5816*t5984*t5985;
  t6011 = t5991*t6010;
  t6012 = t5986 + t6011;
  t6102 = t5816*t5991*t6002;
  t6103 = -1.*t5985*t6033;
  t6104 = t6102 + t6103;
  t6139 = t6069*t6016;
  t6144 = -1.*t6069*t6099;
  t6154 = -1.*t5816*t6077*t6002;
  t6150 = t5816*t6077*t5984;
  t6164 = t6067*t6002;
  t6159 = -1.*t6067*t6030;
  t6181 = t5816*t5997*t6069;
  t6186 = -1.*t6069*t6016;
  t6192 = t6006*t6077;
  t6196 = -1.*t5816*t6077*t5984;
  p_output1[0]=t6012;
  p_output1[1]=t6013*t6016 - 1.*t6018*t6021;
  p_output1[2]=t6016*t6018 + t6013*t6021;
  p_output1[3]=t6036*(t6070 - 1.*t6073*t6084 - 1.*t6089*t6093) + t6073*(t6036*t6084 + t6100 + t6093*t6104);
  p_output1[4]=t6099*(t6070 + t5816*t6007*t6082 + t6109) + t5816*t5997*(t6033*t6082 + t6100 + t6113);
  p_output1[5]=t5816*t6002*(-1.*t5816*t6060 + t6109) + t6006*(-1.*t6002*t6006*t6060 + t6030*t6067 + t6113);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t5984 + 0.2255*t6030;
  p_output1[16]=-0.325*t5905 - 1.*t5897*t6046 - 1.*t5905*t6055;
  p_output1[17]=-0.0641;
  p_output1[18]=t6073;
  p_output1[19]=t5816*t5997*t6013 - 1.*t6018*t6089;
  p_output1[20]=t5816*t5997*t6018 + t6013*t6089;
  p_output1[21]=t6036*(t6012*t6084 + t6021*t6093 + t6139) + t6012*(-1.*t6036*t6084 - 1.*t6093*t6104 + t6144);
  p_output1[22]=t6099*(t6010*t6082 + t6139 + t6150) + t6016*(-1.*t6033*t6082 + t6144 + t6154);
  p_output1[23]=t5816*t5984*(t6002*t6006*t6060 + t6154 + t6159) + t5816*t6002*(-1.*t5984*t6006*t6060 + t6150 + t6164);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t6002*(-1.*t6002*t6057 + t6159) + t6030*(t5984*t6057 + t6164);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6036;
  p_output1[37]=t6013*t6099 - 1.*t6018*t6104;
  p_output1[38]=t6018*t6099 + t6013*t6104;
  p_output1[39]=t6012*(t6073*t6084 + t6089*t6093 + t6181) + t6073*(-1.*t6012*t6084 - 1.*t6021*t6093 + t6186);
  p_output1[40]=t6016*(-1.*t5816*t6007*t6082 + t6181 + t6192) + t5816*t5997*(-1.*t6010*t6082 + t6186 + t6196);
  p_output1[41]=t5816*t5984*(t5816*t6060 + t6192) + t6006*(t5984*t6006*t6060 - 1.*t6002*t6067 + t6196);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t6002;
  p_output1[52]=0.325*t5897 - 1.*t5905*t6046 + t5897*t6055;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
