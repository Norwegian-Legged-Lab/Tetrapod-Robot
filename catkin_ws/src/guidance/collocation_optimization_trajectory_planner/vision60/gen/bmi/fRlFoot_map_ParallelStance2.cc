/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:35 GMT+02:00
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
  double t3473;
  double t3131;
  double t3465;
  double t3537;
  double t3469;
  double t3538;
  double t3657;
  double t5149;
  double t5215;
  double t5150;
  double t5188;
  double t5211;
  double t5219;
  double t3099;
  double t5138;
  double t5127;
  double t5212;
  double t7873;
  double t7882;
  double t8034;
  double t7896;
  double t7992;
  double t8013;
  double t7889;
  double t8041;
  double t8047;
  double t8048;
  double t8083;
  double t8084;
  double t8085;
  double t8088;
  double t8089;
  double t8090;
  double t8091;
  double t8092;
  double t8093;
  double t8082;
  double t8087;
  double t8094;
  double t8096;
  double t8105;
  double t8106;
  double t8109;
  double t8110;
  double t8111;
  double t8115;
  double t8078;
  double t8079;
  double t8080;
  double t8081;
  double t8097;
  double t8098;
  double t8130;
  double t8131;
  double t8132;
  double t8135;
  double t8136;
  double t8143;
  double t8123;
  double t8124;
  double t8125;
  double t8099;
  double t8116;
  double t8120;
  double t8070;
  double t8071;
  double t8072;
  double t8133;
  double t8144;
  double t8147;
  double t8068;
  double t8073;
  double t8074;
  double t8075;
  double t8076;
  double t8077;
  double t8164;
  double t8168;
  double t8180;
  double t8187;
  double t8188;
  double t8189;
  double t8122;
  double t8199;
  double t8222;
  double t8231;
  double t8153;
  double t8154;
  double t8155;
  double t5134;
  double t7885;
  double t7886;
  double t8205;
  double t8206;
  double t8212;
  double t8284;
  double t8292;
  double t8310;
  double t8306;
  double t8322;
  double t8315;
  double t8341;
  double t8346;
  double t8356;
  double t8362;
  t3473 = Cos(var1[10]);
  t3131 = Cos(var1[11]);
  t3465 = Sin(var1[10]);
  t3537 = Sin(var1[11]);
  t3469 = t3131*t3465;
  t3538 = -1.*t3473*t3537;
  t3657 = t3469 + t3538;
  t5149 = Cos(var1[5]);
  t5215 = Sin(var1[9]);
  t5150 = t3473*t3131;
  t5188 = t3465*t3537;
  t5211 = t5150 + t5188;
  t5219 = Sin(var1[5]);
  t3099 = Cos(var1[9]);
  t5138 = Cos(var1[4]);
  t5127 = Sin(var1[4]);
  t5212 = t5149*t5211;
  t7873 = t5215*t3657*t5219;
  t7882 = t5212 + t7873;
  t8034 = Sin(var1[3]);
  t7896 = -1.*t5149*t5215*t3657;
  t7992 = t5211*t5219;
  t8013 = t7896 + t7992;
  t7889 = Cos(var1[3]);
  t8041 = t3099*t5138*t3657;
  t8047 = -1.*t5127*t7882;
  t8048 = t8041 + t8047;
  t8083 = -0.0641*t3131;
  t8084 = -0.28*t3537;
  t8085 = t8083 + t8084;
  t8088 = -1.*t3131;
  t8089 = 1. + t8088;
  t8090 = -0.575*t8089;
  t8091 = -0.295*t3131;
  t8092 = -0.0641*t3537;
  t8093 = t8090 + t8091 + t8092;
  t8082 = 0.325*t3465;
  t8087 = t3473*t8085;
  t8094 = t3465*t8093;
  t8096 = t8082 + t8087 + t8094;
  t8105 = -1.*t3473;
  t8106 = 1. + t8105;
  t8109 = -0.325*t8106;
  t8110 = -1.*t3465*t8085;
  t8111 = t3473*t8093;
  t8115 = t8109 + t8110 + t8111;
  t8078 = -1.*t3099;
  t8079 = 1. + t8078;
  t8080 = 0.1575*t8079;
  t8081 = 0.2255*t3099;
  t8097 = -1.*t5215*t8096;
  t8098 = t8080 + t8081 + t8097;
  t8130 = 0.068*t5215;
  t8131 = t3099*t8096;
  t8132 = t8130 + t8131;
  t8135 = t5149*t8115;
  t8136 = -1.*t8098*t5219;
  t8143 = t8135 + t8136;
  t8123 = t5215*t5127;
  t8124 = -1.*t3099*t5138*t5219;
  t8125 = t8123 + t8124;
  t8099 = t5149*t8098;
  t8116 = t8115*t5219;
  t8120 = t8099 + t8116;
  t8070 = -1.*t3131*t3465;
  t8071 = t3473*t3537;
  t8072 = t8070 + t8071;
  t8133 = t8132*t5127;
  t8144 = t5138*t8143;
  t8147 = t8133 + t8144;
  t8068 = t3099*t5211*t5127;
  t8073 = t5149*t8072;
  t8074 = t5215*t5211*t5219;
  t8075 = t8073 + t8074;
  t8076 = t5138*t8075;
  t8077 = t8068 + t8076;
  t8164 = t5138*t8132;
  t8168 = -1.*t5127*t8143;
  t8180 = t8164 + t8168;
  t8187 = -1.*t5149*t5215*t5211;
  t8188 = t8072*t5219;
  t8189 = t8187 + t8188;
  t8122 = -1.*t3099*t5149*t8120;
  t8199 = t8120*t8189;
  t8222 = -1.*t5215*t8132;
  t8231 = t3099*t8132*t5211;
  t8153 = t5138*t5215;
  t8154 = t3099*t5127*t5219;
  t8155 = t8153 + t8154;
  t5134 = t3099*t3657*t5127;
  t7885 = t5138*t7882;
  t7886 = t5134 + t7885;
  t8205 = t3099*t5138*t5211;
  t8206 = -1.*t5127*t8075;
  t8212 = t8205 + t8206;
  t8284 = t8120*t8013;
  t8292 = -1.*t8120*t8189;
  t8310 = -1.*t3099*t8132*t5211;
  t8306 = t3099*t8132*t3657;
  t8322 = t8115*t5211;
  t8315 = -1.*t8115*t8072;
  t8341 = t3099*t5149*t8120;
  t8346 = -1.*t8120*t8013;
  t8356 = t5215*t8132;
  t8362 = -1.*t3099*t8132*t3657;
  p_output1[0]=t7886;
  p_output1[1]=t7889*t8013 - 1.*t8034*t8048;
  p_output1[2]=t8013*t8034 + t7889*t8048;
  p_output1[3]=t8077*(t8122 - 1.*t8125*t8147 - 1.*t8155*t8180) + t8125*(t8077*t8147 + t8199 + t8180*t8212);
  p_output1[4]=t8189*(t8122 + t3099*t5219*t8143 + t8222) + t3099*t5149*(t8075*t8143 + t8199 + t8231);
  p_output1[5]=t3099*t5211*(-1.*t3099*t8098 + t8222) + t5215*(-1.*t5211*t5215*t8098 + t8072*t8115 + t8231);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t3657 - 0.2255*t8072;
  p_output1[10]=-0.325*t3537 - 1.*t3131*t8085 - 1.*t3537*t8093;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t8125;
  p_output1[19]=t3099*t5149*t7889 - 1.*t8034*t8155;
  p_output1[20]=t3099*t5149*t8034 + t7889*t8155;
  p_output1[21]=t8077*(t7886*t8147 + t8048*t8180 + t8284) + t7886*(-1.*t8077*t8147 - 1.*t8180*t8212 + t8292);
  p_output1[22]=t8189*(t7882*t8143 + t8284 + t8306) + t8013*(-1.*t8075*t8143 + t8292 + t8310);
  p_output1[23]=t3099*t3657*(t5211*t5215*t8098 + t8310 + t8315) + t3099*t5211*(-1.*t3657*t5215*t8098 + t8306 + t8322);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t5211*(-1.*t5211*t8096 + t8315) + t8072*(t3657*t8096 + t8322);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8077;
  p_output1[37]=t7889*t8189 - 1.*t8034*t8212;
  p_output1[38]=t8034*t8189 + t7889*t8212;
  p_output1[39]=t7886*(t8125*t8147 + t8155*t8180 + t8341) + t8125*(-1.*t7886*t8147 - 1.*t8048*t8180 + t8346);
  p_output1[40]=t8013*(-1.*t3099*t5219*t8143 + t8341 + t8356) + t3099*t5149*(-1.*t7882*t8143 + t8346 + t8362);
  p_output1[41]=t3099*t3657*(t3099*t8098 + t8356) + t5215*(t3657*t5215*t8098 - 1.*t5211*t8115 + t8362);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t5211;
  p_output1[46]=0.325*t3131 - 1.*t3537*t8085 + t3131*t8093;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
