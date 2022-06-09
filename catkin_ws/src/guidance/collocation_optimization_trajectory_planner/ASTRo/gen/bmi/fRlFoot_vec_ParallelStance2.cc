/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:18 GMT+02:00
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
  double t3767;
  double t5701;
  double t3841;
  double t8020;
  double t8030;
  double t8019;
  double t8031;
  double t3924;
  double t8055;
  double t8071;
  double t8075;
  double t5826;
  double t8043;
  double t8097;
  double t8098;
  double t8099;
  double t4128;
  double t5946;
  double t7979;
  double t8172;
  double t8170;
  double t8022;
  double t8033;
  double t8037;
  double t8076;
  double t8088;
  double t8089;
  double t8100;
  double t8104;
  double t8108;
  double t8174;
  double t8175;
  double t8176;
  double t8181;
  double t8182;
  double t8183;
  double t8186;
  double t8187;
  double t8188;
  double t8196;
  double t8197;
  double t8198;
  double t8202;
  double t8203;
  double t8204;
  double t8044;
  double t8090;
  double t8091;
  double t8224;
  double t8225;
  double t8230;
  double t8231;
  double t8232;
  double t8234;
  double t8235;
  double t8236;
  double t8237;
  double t8238;
  double t8239;
  double t8240;
  double t8241;
  double t8254;
  double t8258;
  double t8259;
  double t8226;
  double t8227;
  double t8228;
  double t8242;
  double t8252;
  double t8271;
  double t8272;
  double t8273;
  double t8274;
  double t8282;
  double t8283;
  double t8284;
  double t8253;
  double t8263;
  double t8265;
  double t8278;
  double t8288;
  double t8289;
  double t8291;
  double t8295;
  double t8296;
  double t8096;
  double t8109;
  double t8110;
  double t8270;
  double t8300;
  double t8309;
  double t8315;
  double t8322;
  double t8327;
  double t8356;
  double t8360;
  t3767 = Cos(var1[4]);
  t5701 = Cos(var1[9]);
  t3841 = Cos(var1[5]);
  t8020 = Cos(var1[11]);
  t8030 = Sin(var1[10]);
  t8019 = Cos(var1[10]);
  t8031 = Sin(var1[11]);
  t3924 = Sin(var1[9]);
  t8055 = -1.*t8020*t8030;
  t8071 = t8019*t8031;
  t8075 = t8055 + t8071;
  t5826 = Sin(var1[5]);
  t8043 = Sin(var1[4]);
  t8097 = -1.*t8019*t8020;
  t8098 = -1.*t8030*t8031;
  t8099 = t8097 + t8098;
  t4128 = t3841*t3924;
  t5946 = t5701*t5826;
  t7979 = t4128 + t5946;
  t8172 = Cos(var1[3]);
  t8170 = Sin(var1[3]);
  t8022 = t8019*t8020;
  t8033 = t8030*t8031;
  t8037 = t8022 + t8033;
  t8076 = t5701*t3841*t8075;
  t8088 = -1.*t3924*t8075*t5826;
  t8089 = t8076 + t8088;
  t8100 = t5701*t3841*t8099;
  t8104 = -1.*t3924*t8099*t5826;
  t8108 = t8100 + t8104;
  t8174 = -1.*t5701*t3841;
  t8175 = t3924*t5826;
  t8176 = t8174 + t8175;
  t8181 = t3841*t3924*t8075;
  t8182 = t5701*t8075*t5826;
  t8183 = t8181 + t8182;
  t8186 = t3767*t8037;
  t8187 = -1.*t8043*t8089;
  t8188 = t8186 + t8187;
  t8196 = t3841*t3924*t8099;
  t8197 = t5701*t8099*t5826;
  t8198 = t8196 + t8197;
  t8202 = t3767*t8075;
  t8203 = -1.*t8043*t8108;
  t8204 = t8202 + t8203;
  t8044 = t8037*t8043;
  t8090 = t3767*t8089;
  t8091 = t8044 + t8090;
  t8224 = -1.*t5701;
  t8225 = 1. + t8224;
  t8230 = -1.*t8019;
  t8231 = 1. + t8230;
  t8232 = -0.28121*t8231;
  t8234 = -1.*t8020;
  t8235 = 1. + t8234;
  t8236 = -0.50321*t8235;
  t8237 = -0.19821*t8020;
  t8238 = t8236 + t8237;
  t8239 = t8019*t8238;
  t8240 = 0.305*t8030*t8031;
  t8241 = t8232 + t8239 + t8240;
  t8254 = -0.15121*t8225;
  t8258 = t5701*t8241;
  t8259 = t8254 + t8258;
  t8226 = 0.15121*t8225;
  t8227 = 0.15121*t5701;
  t8228 = 0.15121*t3924;
  t8242 = t3924*t8241;
  t8252 = t8226 + t8227 + t8228 + t8242;
  t8271 = 0.28121*t8030;
  t8272 = t8238*t8030;
  t8273 = -0.305*t8019*t8031;
  t8274 = t8271 + t8272 + t8273;
  t8282 = t3841*t8259;
  t8283 = -1.*t8252*t5826;
  t8284 = t8282 + t8283;
  t8253 = t3841*t8252;
  t8263 = t8259*t5826;
  t8265 = t8253 + t8263;
  t8278 = t8274*t8043;
  t8288 = t3767*t8284;
  t8289 = t8278 + t8288;
  t8291 = t3767*t8274;
  t8295 = -1.*t8043*t8284;
  t8296 = t8291 + t8295;
  t8096 = t8075*t8043;
  t8109 = t3767*t8108;
  t8110 = t8096 + t8109;
  t8270 = -1.*t8176*t8265;
  t8300 = t8183*t8265;
  t8309 = t8176*t8265;
  t8315 = -1.*t8198*t8265;
  t8322 = -1.*t8183*t8265;
  t8327 = t8198*t8265;
  t8356 = -1.*t8274*t8037;
  t8360 = t8274*t8075;
  p_output1[0]=t8110*var2[0] + t3767*t7979*var2[1] + t8091*var2[2];
  p_output1[1]=(t8172*t8198 - 1.*t8170*t8204)*var2[0] + (t7979*t8043*t8170 + t8172*t8176)*var2[1] + (t8172*t8183 - 1.*t8170*t8188)*var2[2];
  p_output1[2]=(t8170*t8198 + t8172*t8204)*var2[0] + (-1.*t7979*t8043*t8172 + t8170*t8176)*var2[1] + (t8170*t8183 + t8172*t8188)*var2[2];
  p_output1[3]=(t8091*(t8270 - 1.*t3767*t7979*t8289 + t7979*t8043*t8296) + t3767*t7979*(t8091*t8289 + t8188*t8296 + t8300))*var2[0] + (t8110*(-1.*t8091*t8289 - 1.*t8188*t8296 + t8322) + t8091*(t8110*t8289 + t8204*t8296 + t8327))*var2[1] + (t8110*(t3767*t7979*t8289 - 1.*t7979*t8043*t8296 + t8309) + t3767*t7979*(-1.*t8110*t8289 - 1.*t8204*t8296 + t8315))*var2[2];
  p_output1[4]=(t8183*(t8270 - 1.*t7979*t8284) + t8176*(t8037*t8274 + t8089*t8284 + t8300))*var2[0] + (t8198*(-1.*t8089*t8284 + t8322 + t8356) + t8183*(t8108*t8284 + t8327 + t8360))*var2[1] + (t8198*(t7979*t8284 + t8309) + t8176*(-1.*t8075*t8274 - 1.*t8108*t8284 + t8315))*var2[2];
  p_output1[5]=t8037*(t5701*t8252 - 1.*t3924*t8259)*var2[0] + (t8075*(-1.*t3924*t8075*t8252 - 1.*t5701*t8075*t8259 + t8356) + t8037*(t3924*t8099*t8252 + t5701*t8099*t8259 + t8360))*var2[1] + t8075*(-1.*t5701*t8252 + t3924*t8259)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t8037 + 0.15121*t8099)*var2[0] + (-0.15121 + t8075*(-1.*t8075*t8241 + t8356) + t8037*(t8099*t8241 + t8360))*var2[1];
  p_output1[10]=(0.28121*t8031 - 0.305*t8020*t8031 + t8031*t8238)*var2[0] + (0.28121*t8020 + 0.305*Power(t8031,2) + t8020*t8238)*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
