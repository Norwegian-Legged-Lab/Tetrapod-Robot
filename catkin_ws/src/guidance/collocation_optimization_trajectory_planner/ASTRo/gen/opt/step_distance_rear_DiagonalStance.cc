/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:47:36 GMT+02:00
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
  double t892;
  double t937;
  double t1053;
  double t956;
  double t957;
  double t958;
  double t975;
  double t996;
  double t1026;
  double t1027;
  double t1028;
  double t1029;
  double t1043;
  double t1076;
  double t1052;
  double t1124;
  double t1133;
  double t1134;
  double t1135;
  double t1062;
  double t1137;
  double t1144;
  double t1145;
  double t1146;
  double t1148;
  double t1155;
  double t1156;
  double t1160;
  double t1168;
  double t1169;
  double t1170;
  double t1171;
  double t1173;
  double t1179;
  double t1180;
  double t1181;
  double t1183;
  double t1185;
  double t1190;
  double t1194;
  double t1214;
  double t959;
  double t1011;
  double t1049;
  double t1050;
  double t1217;
  double t1218;
  double t1219;
  double t1220;
  double t1074;
  double t1075;
  double t1078;
  double t1079;
  double t1229;
  double t1233;
  double t1234;
  double t1128;
  double t1132;
  double t1142;
  double t1143;
  double t1152;
  double t1154;
  double t1245;
  double t1250;
  double t1254;
  double t1174;
  double t1178;
  double t1259;
  double t1260;
  double t1261;
  double t1263;
  double t1264;
  double t1265;
  double t1267;
  double t1268;
  double t1272;
  double t1277;
  double t1281;
  double t1282;
  double t1284;
  double t1285;
  double t1286;
  t892 = Cos(var1[4]);
  t937 = Cos(var1[5]);
  t1053 = Sin(var1[4]);
  t956 = Cos(var1[9]);
  t957 = -1.*t956;
  t958 = 1. + t957;
  t975 = Sin(var1[9]);
  t996 = 0.15121*t975;
  t1026 = Cos(var1[15]);
  t1027 = -1.*t1026;
  t1028 = 1. + t1027;
  t1029 = -0.15121*t1028;
  t1043 = Sin(var1[15]);
  t1076 = Sin(var1[5]);
  t1052 = Sin(var1[10]);
  t1124 = Cos(var1[10]);
  t1133 = t956*t892*t937;
  t1134 = -1.*t892*t975*t1076;
  t1135 = t1133 + t1134;
  t1062 = Sin(var1[16]);
  t1137 = Cos(var1[16]);
  t1144 = t1026*t892*t937;
  t1145 = -1.*t892*t1043*t1076;
  t1146 = t1144 + t1145;
  t1148 = Cos(var1[11]);
  t1155 = t1052*t1053;
  t1156 = t1124*t1135;
  t1160 = t1155 + t1156;
  t1168 = Sin(var1[11]);
  t1169 = t1124*t1053;
  t1170 = -1.*t1052*t1135;
  t1171 = t1169 + t1170;
  t1173 = Cos(var1[17]);
  t1179 = t1062*t1053;
  t1180 = t1137*t1146;
  t1181 = t1179 + t1180;
  t1183 = Sin(var1[17]);
  t1185 = t1137*t1053;
  t1190 = -1.*t1062*t1146;
  t1194 = t1185 + t1190;
  t1214 = Sin(var1[3]);
  t959 = -0.15121*t958;
  t1011 = t959 + t996;
  t1049 = -0.15121*t1043;
  t1050 = t1029 + t1049;
  t1217 = t937*t1214*t1053;
  t1218 = Cos(var1[3]);
  t1219 = t1218*t1076;
  t1220 = t1217 + t1219;
  t1074 = 0.15121*t958;
  t1075 = t1074 + t996;
  t1078 = 0.15121*t1043;
  t1079 = t1029 + t1078;
  t1229 = t1218*t937;
  t1233 = -1.*t1214*t1053*t1076;
  t1234 = t1229 + t1233;
  t1128 = -1.*t1124;
  t1132 = 1. + t1128;
  t1142 = -1.*t1137;
  t1143 = 1. + t1142;
  t1152 = -1.*t1148;
  t1154 = 1. + t1152;
  t1245 = t956*t1220;
  t1250 = t975*t1234;
  t1254 = t1245 + t1250;
  t1174 = -1.*t1173;
  t1178 = 1. + t1174;
  t1259 = t1026*t1220;
  t1260 = t1043*t1234;
  t1261 = t1259 + t1260;
  t1263 = -1.*t892*t1052*t1214;
  t1264 = t1124*t1254;
  t1265 = t1263 + t1264;
  t1267 = -1.*t1124*t892*t1214;
  t1268 = -1.*t1052*t1254;
  t1272 = t1267 + t1268;
  t1277 = -1.*t892*t1062*t1214;
  t1281 = t1137*t1261;
  t1282 = t1277 + t1281;
  t1284 = -1.*t1137*t892*t1214;
  t1285 = -1.*t1062*t1261;
  t1286 = t1284 + t1285;
  p_output1[0]=0.28121*t1052*t1053 - 0.28121*t1053*t1062 - 0.28121*t1132*t1135 + 0.28121*t1143*t1146 - 0.50321*t1154*t1160 - 0.50321*t1168*t1171 - 0.19821*(t1148*t1160 - 1.*t1168*t1171) + 0.50321*t1178*t1181 + 0.50321*t1183*t1194 + 0.19821*(t1173*t1181 - 1.*t1183*t1194) - 1.*t1075*t1076*t892 + t1076*t1079*t892 + t1011*t892*t937 - 1.*t1050*t892*t937 + 0.15121*(-1.*t1026*t1076*t892 - 1.*t1043*t892*t937) + 0.15121*(-1.*t1076*t892*t956 - 1.*t892*t937*t975);
  p_output1[1]=t1011*t1220 - 1.*t1050*t1220 + t1075*t1234 - 1.*t1079*t1234 + 0.15121*(-1.*t1043*t1220 + t1026*t1234) - 0.28121*t1132*t1254 + 0.28121*t1143*t1261 - 0.50321*t1154*t1265 - 0.50321*t1168*t1272 - 0.19821*(t1148*t1265 - 1.*t1168*t1272) + 0.50321*t1178*t1282 + 0.50321*t1183*t1286 + 0.19821*(t1173*t1282 - 1.*t1183*t1286) - 0.28121*t1052*t1214*t892 + 0.28121*t1062*t1214*t892 + 0.15121*(t1234*t956 - 1.*t1220*t975);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_rear_DiagonalStance.hh"

namespace DiagonalStance
{

void step_distance_rear_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
