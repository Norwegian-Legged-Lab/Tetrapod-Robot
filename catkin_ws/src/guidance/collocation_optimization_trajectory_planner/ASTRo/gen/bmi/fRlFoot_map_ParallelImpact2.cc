/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:25 GMT+02:00
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
  double t8980;
  double t2874;
  double t4081;
  double t9017;
  double t9091;
  double t9095;
  double t9096;
  double t9086;
  double t9098;
  double t9085;
  double t9099;
  double t9084;
  double t8975;
  double t9021;
  double t9022;
  double t9023;
  double t9097;
  double t9100;
  double t9101;
  double t9109;
  double t9105;
  double t9106;
  double t9107;
  double t9104;
  double t9110;
  double t9111;
  double t9112;
  double t9132;
  double t9134;
  double t9139;
  double t9140;
  double t9141;
  double t9142;
  double t9143;
  double t9144;
  double t9145;
  double t9146;
  double t9147;
  double t9148;
  double t9149;
  double t9153;
  double t9154;
  double t9155;
  double t9135;
  double t9136;
  double t9138;
  double t9150;
  double t9151;
  double t9159;
  double t9160;
  double t9161;
  double t9162;
  double t9163;
  double t9165;
  double t9166;
  double t9168;
  double t9170;
  double t9171;
  double t9152;
  double t9156;
  double t9157;
  double t9118;
  double t9119;
  double t9120;
  double t9121;
  double t9123;
  double t9124;
  double t9125;
  double t9126;
  double t9128;
  double t9167;
  double t9172;
  double t9173;
  double t9175;
  double t9176;
  double t9177;
  double t9181;
  double t9182;
  double t9183;
  double t9129;
  double t9130;
  double t9131;
  double t9158;
  double t9184;
  double t9080;
  double t9102;
  double t9103;
  double t9186;
  double t9187;
  double t9188;
  double t9219;
  double t9224;
  double t9230;
  double t9234;
  double t9261;
  double t9266;
  t8980 = Cos(var1[10]);
  t2874 = Cos(var1[11]);
  t4081 = Sin(var1[10]);
  t9017 = Sin(var1[11]);
  t9091 = -1.*t8980*t2874;
  t9095 = -1.*t4081*t9017;
  t9096 = t9091 + t9095;
  t9086 = Cos(var1[5]);
  t9098 = Sin(var1[9]);
  t9085 = Cos(var1[9]);
  t9099 = Sin(var1[5]);
  t9084 = Cos(var1[4]);
  t8975 = -1.*t2874*t4081;
  t9021 = t8980*t9017;
  t9022 = t8975 + t9021;
  t9023 = Sin(var1[4]);
  t9097 = t9085*t9086*t9096;
  t9100 = -1.*t9098*t9096*t9099;
  t9101 = t9097 + t9100;
  t9109 = Sin(var1[3]);
  t9105 = t9086*t9098*t9096;
  t9106 = t9085*t9096*t9099;
  t9107 = t9105 + t9106;
  t9104 = Cos(var1[3]);
  t9110 = t9084*t9022;
  t9111 = -1.*t9023*t9101;
  t9112 = t9110 + t9111;
  t9132 = -1.*t9085;
  t9134 = 1. + t9132;
  t9139 = -1.*t8980;
  t9140 = 1. + t9139;
  t9141 = -0.28121*t9140;
  t9142 = -1.*t2874;
  t9143 = 1. + t9142;
  t9144 = -0.50321*t9143;
  t9145 = -0.19821*t2874;
  t9146 = t9144 + t9145;
  t9147 = t8980*t9146;
  t9148 = 0.305*t4081*t9017;
  t9149 = t9141 + t9147 + t9148;
  t9153 = -0.15121*t9134;
  t9154 = t9085*t9149;
  t9155 = t9153 + t9154;
  t9135 = 0.15121*t9134;
  t9136 = 0.15121*t9085;
  t9138 = 0.15121*t9098;
  t9150 = t9098*t9149;
  t9151 = t9135 + t9136 + t9138 + t9150;
  t9159 = t9086*t9098;
  t9160 = t9085*t9099;
  t9161 = t9159 + t9160;
  t9162 = 0.28121*t4081;
  t9163 = t9146*t4081;
  t9165 = -0.305*t8980*t9017;
  t9166 = t9162 + t9163 + t9165;
  t9168 = t9086*t9155;
  t9170 = -1.*t9151*t9099;
  t9171 = t9168 + t9170;
  t9152 = t9086*t9151;
  t9156 = t9155*t9099;
  t9157 = t9152 + t9156;
  t9118 = t8980*t2874;
  t9119 = t4081*t9017;
  t9120 = t9118 + t9119;
  t9121 = t9120*t9023;
  t9123 = t9085*t9086*t9022;
  t9124 = -1.*t9098*t9022*t9099;
  t9125 = t9123 + t9124;
  t9126 = t9084*t9125;
  t9128 = t9121 + t9126;
  t9167 = t9166*t9023;
  t9172 = t9084*t9171;
  t9173 = t9167 + t9172;
  t9175 = t9084*t9166;
  t9176 = -1.*t9023*t9171;
  t9177 = t9175 + t9176;
  t9181 = t9086*t9098*t9022;
  t9182 = t9085*t9022*t9099;
  t9183 = t9181 + t9182;
  t9129 = -1.*t9085*t9086;
  t9130 = t9098*t9099;
  t9131 = t9129 + t9130;
  t9158 = -1.*t9131*t9157;
  t9184 = t9183*t9157;
  t9080 = t9022*t9023;
  t9102 = t9084*t9101;
  t9103 = t9080 + t9102;
  t9186 = t9084*t9120;
  t9187 = -1.*t9023*t9125;
  t9188 = t9186 + t9187;
  t9219 = -1.*t9183*t9157;
  t9224 = t9107*t9157;
  t9230 = -1.*t9166*t9120;
  t9234 = t9166*t9022;
  t9261 = t9131*t9157;
  t9266 = -1.*t9107*t9157;
  p_output1[0]=t9103;
  p_output1[1]=t9104*t9107 - 1.*t9109*t9112;
  p_output1[2]=t9107*t9109 + t9104*t9112;
  p_output1[3]=t9128*(t9158 - 1.*t9084*t9161*t9173 + t9023*t9161*t9177) + t9084*t9161*(t9128*t9173 + t9184 + t9177*t9188);
  p_output1[4]=(t9158 - 1.*t9161*t9171)*t9183 + t9131*(t9120*t9166 + t9125*t9171 + t9184);
  p_output1[5]=t9120*(t9085*t9151 - 1.*t9098*t9155);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t9096 + 0.15121*t9120;
  p_output1[10]=0.28121*t9017 - 0.305*t2874*t9017 + t9017*t9146;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9084*t9161;
  p_output1[19]=t9104*t9131 + t9023*t9109*t9161;
  p_output1[20]=t9109*t9131 - 1.*t9023*t9104*t9161;
  p_output1[21]=t9103*(-1.*t9128*t9173 - 1.*t9177*t9188 + t9219) + t9128*(t9103*t9173 + t9112*t9177 + t9224);
  p_output1[22]=t9107*(-1.*t9125*t9171 + t9219 + t9230) + t9183*(t9101*t9171 + t9224 + t9234);
  p_output1[23]=t9022*(-1.*t9022*t9098*t9151 - 1.*t9022*t9085*t9155 + t9230) + t9120*(t9096*t9098*t9151 + t9085*t9096*t9155 + t9234);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t9022*(-1.*t9022*t9149 + t9230) + t9120*(t9096*t9149 + t9234);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t9128;
  p_output1[37]=t9104*t9183 - 1.*t9109*t9188;
  p_output1[38]=t9109*t9183 + t9104*t9188;
  p_output1[39]=t9103*(t9084*t9161*t9173 - 1.*t9023*t9161*t9177 + t9261) + t9084*t9161*(-1.*t9103*t9173 - 1.*t9112*t9177 + t9266);
  p_output1[40]=t9107*(t9161*t9171 + t9261) + t9131*(-1.*t9022*t9166 - 1.*t9101*t9171 + t9266);
  p_output1[41]=t9022*(-1.*t9085*t9151 + t9098*t9155);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t2874 + 0.305*Power(t9017,2) + t2874*t9146;
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

#include "fRlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
