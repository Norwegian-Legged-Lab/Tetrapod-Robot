/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:43 GMT+02:00
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
  double t409;
  double t100;
  double t126;
  double t903;
  double t2606;
  double t2713;
  double t2901;
  double t2189;
  double t3676;
  double t2178;
  double t4905;
  double t1836;
  double t389;
  double t914;
  double t1006;
  double t1271;
  double t2902;
  double t5010;
  double t5120;
  double t5972;
  double t5928;
  double t5931;
  double t5932;
  double t5909;
  double t5976;
  double t5978;
  double t5987;
  double t6065;
  double t6066;
  double t6067;
  double t6071;
  double t6073;
  double t6075;
  double t6078;
  double t6085;
  double t6094;
  double t6102;
  double t6104;
  double t6105;
  double t6108;
  double t6120;
  double t6131;
  double t6135;
  double t6069;
  double t6070;
  double t6123;
  double t6125;
  double t6150;
  double t6153;
  double t6155;
  double t6156;
  double t6162;
  double t6165;
  double t6174;
  double t6176;
  double t6178;
  double t6179;
  double t6130;
  double t6137;
  double t6139;
  double t6008;
  double t6009;
  double t6012;
  double t6013;
  double t6015;
  double t6016;
  double t6020;
  double t6033;
  double t6034;
  double t6175;
  double t6183;
  double t6187;
  double t6189;
  double t6190;
  double t6196;
  double t6221;
  double t6222;
  double t6223;
  double t6046;
  double t6053;
  double t6054;
  double t6147;
  double t6234;
  double t1412;
  double t5130;
  double t5168;
  double t6249;
  double t6250;
  double t6252;
  double t6362;
  double t6446;
  double t6465;
  double t6480;
  double t6538;
  double t6554;
  t409 = Cos(var1[16]);
  t100 = Cos(var1[17]);
  t126 = Sin(var1[16]);
  t903 = Sin(var1[17]);
  t2606 = -1.*t409*t100;
  t2713 = -1.*t126*t903;
  t2901 = t2606 + t2713;
  t2189 = Cos(var1[5]);
  t3676 = Sin(var1[15]);
  t2178 = Cos(var1[15]);
  t4905 = Sin(var1[5]);
  t1836 = Cos(var1[4]);
  t389 = -1.*t100*t126;
  t914 = t409*t903;
  t1006 = t389 + t914;
  t1271 = Sin(var1[4]);
  t2902 = t2178*t2189*t2901;
  t5010 = -1.*t3676*t2901*t4905;
  t5120 = t2902 + t5010;
  t5972 = Sin(var1[3]);
  t5928 = t2189*t3676*t2901;
  t5931 = t2178*t2901*t4905;
  t5932 = t5928 + t5931;
  t5909 = Cos(var1[3]);
  t5976 = t1836*t1006;
  t5978 = -1.*t1271*t5120;
  t5987 = t5976 + t5978;
  t6065 = -1.*t2178;
  t6066 = 1. + t6065;
  t6067 = -0.15121*t6066;
  t6071 = -1.*t409;
  t6073 = 1. + t6071;
  t6075 = -0.28121*t6073;
  t6078 = -1.*t100;
  t6085 = 1. + t6078;
  t6094 = -0.50321*t6085;
  t6102 = -0.19821*t100;
  t6104 = t6094 + t6102;
  t6105 = t409*t6104;
  t6108 = 0.305*t126*t903;
  t6120 = t6075 + t6105 + t6108;
  t6131 = t2178*t6120;
  t6135 = t6067 + t6131;
  t6069 = -0.15121*t2178;
  t6070 = 0.15121*t3676;
  t6123 = t3676*t6120;
  t6125 = t6067 + t6069 + t6070 + t6123;
  t6150 = t2189*t3676;
  t6153 = t2178*t4905;
  t6155 = t6150 + t6153;
  t6156 = 0.28121*t126;
  t6162 = t6104*t126;
  t6165 = -0.305*t409*t903;
  t6174 = t6156 + t6162 + t6165;
  t6176 = t2189*t6135;
  t6178 = -1.*t6125*t4905;
  t6179 = t6176 + t6178;
  t6130 = t2189*t6125;
  t6137 = t6135*t4905;
  t6139 = t6130 + t6137;
  t6008 = t409*t100;
  t6009 = t126*t903;
  t6012 = t6008 + t6009;
  t6013 = t6012*t1271;
  t6015 = t2178*t2189*t1006;
  t6016 = -1.*t3676*t1006*t4905;
  t6020 = t6015 + t6016;
  t6033 = t1836*t6020;
  t6034 = t6013 + t6033;
  t6175 = t6174*t1271;
  t6183 = t1836*t6179;
  t6187 = t6175 + t6183;
  t6189 = t1836*t6174;
  t6190 = -1.*t1271*t6179;
  t6196 = t6189 + t6190;
  t6221 = t2189*t3676*t1006;
  t6222 = t2178*t1006*t4905;
  t6223 = t6221 + t6222;
  t6046 = -1.*t2178*t2189;
  t6053 = t3676*t4905;
  t6054 = t6046 + t6053;
  t6147 = -1.*t6054*t6139;
  t6234 = t6223*t6139;
  t1412 = t1006*t1271;
  t5130 = t1836*t5120;
  t5168 = t1412 + t5130;
  t6249 = t1836*t6012;
  t6250 = -1.*t1271*t6020;
  t6252 = t6249 + t6250;
  t6362 = -1.*t6223*t6139;
  t6446 = t5932*t6139;
  t6465 = -1.*t6174*t6012;
  t6480 = t6174*t1006;
  t6538 = t6054*t6139;
  t6554 = -1.*t5932*t6139;
  p_output1[0]=t5168;
  p_output1[1]=t5909*t5932 - 1.*t5972*t5987;
  p_output1[2]=t5932*t5972 + t5909*t5987;
  p_output1[3]=t6034*(t6147 - 1.*t1836*t6155*t6187 + t1271*t6155*t6196) + t1836*t6155*(t6034*t6187 + t6234 + t6196*t6252);
  p_output1[4]=(t6147 - 1.*t6155*t6179)*t6223 + t6054*(t6012*t6174 + t6020*t6179 + t6234);
  p_output1[5]=t6012*(t2178*t6125 - 1.*t3676*t6135);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t2901 - 0.15121*t6012;
  p_output1[16]=0.28121*t903 - 0.305*t100*t903 + t6104*t903;
  p_output1[17]=0;
  p_output1[18]=t1836*t6155;
  p_output1[19]=t5909*t6054 + t1271*t5972*t6155;
  p_output1[20]=t5972*t6054 - 1.*t1271*t5909*t6155;
  p_output1[21]=t5168*(-1.*t6034*t6187 - 1.*t6196*t6252 + t6362) + t6034*(t5168*t6187 + t5987*t6196 + t6446);
  p_output1[22]=t5932*(-1.*t6020*t6179 + t6362 + t6465) + t6223*(t5120*t6179 + t6446 + t6480);
  p_output1[23]=t1006*(-1.*t1006*t3676*t6125 - 1.*t1006*t2178*t6135 + t6465) + t6012*(t2901*t3676*t6125 + t2178*t2901*t6135 + t6480);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t1006*(-1.*t1006*t6120 + t6465) + t6012*(t2901*t6120 + t6480);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6034;
  p_output1[37]=t5909*t6223 - 1.*t5972*t6252;
  p_output1[38]=t5972*t6223 + t5909*t6252;
  p_output1[39]=t5168*(t1836*t6155*t6187 - 1.*t1271*t6155*t6196 + t6538) + t1836*t6155*(-1.*t5168*t6187 - 1.*t5987*t6196 + t6554);
  p_output1[40]=t5932*(t6155*t6179 + t6538) + t6054*(-1.*t1006*t6174 - 1.*t5120*t6179 + t6554);
  p_output1[41]=t1006*(-1.*t2178*t6125 + t3676*t6135);
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
  p_output1[52]=0.28121*t100 + t100*t6104 + 0.305*Power(t903,2);
  p_output1[53]=-0.305;
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
