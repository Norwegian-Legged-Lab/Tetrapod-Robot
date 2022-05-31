/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:21 GMT+02:00
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
  double t937;
  double t957;
  double t958;
  double t959;
  double t996;
  double t1011;
  double t956;
  double t1052;
  double t1028;
  double t1029;
  double t1078;
  double t1128;
  double t1132;
  double t1133;
  double t1135;
  double t1143;
  double t1144;
  double t1145;
  double t1148;
  double t1152;
  double t1154;
  double t1155;
  double t975;
  double t1026;
  double t1174;
  double t1049;
  double t1050;
  double t1180;
  double t1179;
  double t1181;
  double t1183;
  double t1190;
  double t1194;
  double t1214;
  double t1079;
  double t1124;
  double t1137;
  double t1142;
  double t1233;
  double t1234;
  double t1245;
  double t1254;
  double t1259;
  double t1260;
  double t1263;
  double t1264;
  double t1265;
  double t1286;
  double t3671;
  double t3675;
  double t20523;
  double t23816;
  double t26909;
  double t29955;
  double t30060;
  double t30061;
  double t30407;
  double t30478;
  double t30508;
  double t30957;
  double t30961;
  double t31007;
  t937 = Cos(var1[4]);
  t957 = Cos(var1[12]);
  t958 = -1.*t957;
  t959 = 1. + t958;
  t996 = Sin(var1[12]);
  t1011 = -0.15121*t996;
  t956 = Cos(var1[5]);
  t1052 = Sin(var1[5]);
  t1028 = Sin(var1[13]);
  t1029 = Sin(var1[4]);
  t1078 = Cos(var1[13]);
  t1128 = t957*t937*t956;
  t1132 = -1.*t937*t996*t1052;
  t1133 = t1128 + t1132;
  t1135 = Cos(var1[14]);
  t1143 = -1.*t1028*t1029;
  t1144 = t1078*t1133;
  t1145 = t1143 + t1144;
  t1148 = Sin(var1[14]);
  t1152 = t1078*t1029;
  t1154 = t1028*t1133;
  t1155 = t1152 + t1154;
  t975 = 0.15121*t959;
  t1026 = t975 + t1011;
  t1174 = Sin(var1[3]);
  t1049 = -0.15121*t959;
  t1050 = t1049 + t1011;
  t1180 = Cos(var1[3]);
  t1179 = t956*t1174*t1029;
  t1181 = t1180*t1052;
  t1183 = t1179 + t1181;
  t1190 = t1180*t956;
  t1194 = -1.*t1174*t1029*t1052;
  t1214 = t1190 + t1194;
  t1079 = -1.*t1078;
  t1124 = 1. + t1079;
  t1137 = -1.*t1135;
  t1142 = 1. + t1137;
  t1233 = t957*t1183;
  t1234 = t996*t1214;
  t1245 = t1233 + t1234;
  t1254 = t937*t1028*t1174;
  t1259 = t1078*t1245;
  t1260 = t1254 + t1259;
  t1263 = -1.*t1078*t937*t1174;
  t1264 = t1028*t1245;
  t1265 = t1263 + t1264;
  t1286 = -1.*t1180*t956*t1029;
  t3671 = t1174*t1052;
  t3675 = t1286 + t3671;
  t20523 = t956*t1174;
  t23816 = t1180*t1029*t1052;
  t26909 = t20523 + t23816;
  t29955 = t957*t3675;
  t30060 = t996*t26909;
  t30061 = t29955 + t30060;
  t30407 = -1.*t1180*t937*t1028;
  t30478 = t1078*t30061;
  t30508 = t30407 + t30478;
  t30957 = t1078*t1180*t937;
  t30961 = t1028*t30061;
  t31007 = t30957 + t30961;
  p_output1[0]=0.28121*t1028*t1029 + 0.28121*t1124*t1133 + 0.50321*t1142*t1145 - 0.50321*t1148*t1155 + 0.19821*(t1135*t1145 + t1148*t1155) - 1.*t1050*t1052*t937 + t1026*t937*t956 - 0.15121*(-1.*t1052*t937*t957 - 1.*t937*t956*t996) + var1[0] - 1.*var2[0];
  p_output1[1]=t1026*t1183 + t1050*t1214 + 0.28121*t1124*t1245 + 0.50321*t1142*t1260 - 0.50321*t1148*t1265 + 0.19821*(t1135*t1260 + t1148*t1265) - 0.28121*t1028*t1174*t937 - 0.15121*(t1214*t957 - 1.*t1183*t996) + var1[1] - 1.*var2[1];
  p_output1[2]=t1050*t26909 + 0.28121*t1124*t30061 + 0.50321*t1142*t30508 - 0.50321*t1148*t31007 + 0.19821*(t1135*t30508 + t1148*t31007) + t1026*t3675 + 0.28121*t1028*t1180*t937 - 0.15121*(t26909*t957 - 1.*t3675*t996) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
