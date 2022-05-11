/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:14 GMT+01:00
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
  double t965;
  double t199;
  double t278;
  double t642;
  double t644;
  double t766;
  double t835;
  double t968;
  double t971;
  double t989;
  double t1005;
  double t224;
  double t1015;
  double t1011;
  double t1068;
  double t1073;
  double t1078;
  double t1087;
  double t1088;
  double t1089;
  double t1093;
  double t1094;
  double t1095;
  double t1097;
  double t1156;
  double t1100;
  double t1104;
  double t1108;
  double t1123;
  double t1127;
  double t1128;
  double t1160;
  double t1161;
  double t1162;
  double t1163;
  double t1170;
  double t1171;
  double t1173;
  double t1174;
  double t1176;
  double t1177;
  double t963;
  double t978;
  double t1003;
  double t1006;
  double t1007;
  double t725;
  double t904;
  double t1203;
  double t1013;
  double t1014;
  double t1206;
  double t1030;
  double t1043;
  double t1050;
  double t1060;
  double t1061;
  double t1205;
  double t1207;
  double t1208;
  double t1210;
  double t1211;
  double t1214;
  double t1080;
  double t1081;
  double t1083;
  double t1096;
  double t1098;
  double t1099;
  double t1230;
  double t1234;
  double t1235;
  double t1238;
  double t1239;
  double t1251;
  double t1139;
  double t1155;
  double t1157;
  double t1158;
  double t1159;
  double t1165;
  double t1166;
  double t1167;
  double t1168;
  double t1169;
  double t1270;
  double t1271;
  double t1272;
  double t1273;
  double t1276;
  double t1277;
  double t1279;
  double t1281;
  double t1183;
  double t1184;
  double t1283;
  double t1285;
  double t1291;
  double t1296;
  double t1193;
  double t1194;
  double t1337;
  double t1338;
  double t1339;
  double t1341;
  double t1342;
  double t1343;
  double t1345;
  double t1346;
  double t1347;
  double t1349;
  double t1350;
  double t1351;
  double t1354;
  double t1355;
  double t1357;
  double t1358;
  double t1361;
  double t1364;
  double t1366;
  double t1367;
  double t1369;
  double t1370;
  double t1371;
  double t1372;
  t965 = Cos(var1[10]);
  t199 = Cos(var1[4]);
  t278 = Cos(var1[9]);
  t642 = -1.*t278;
  t644 = 1. + t642;
  t766 = Sin(var1[9]);
  t835 = -0.15121*t766;
  t968 = -1.*t965;
  t971 = 1. + t968;
  t989 = -1. + t965;
  t1005 = Sin(var1[10]);
  t224 = Cos(var1[5]);
  t1015 = Sin(var1[5]);
  t1011 = Sin(var1[4]);
  t1068 = -1.*t199*t224*t766;
  t1073 = -1.*t278*t199*t1015;
  t1078 = t1068 + t1073;
  t1087 = t278*t199*t224;
  t1088 = -1.*t199*t766*t1015;
  t1089 = t1087 + t1088;
  t1093 = Cos(var1[11]);
  t1094 = -1.*t1093;
  t1095 = 1. + t1094;
  t1097 = Sin(var1[11]);
  t1156 = -1. + t1093;
  t1100 = t1005*t1011;
  t1104 = -4.e-6*t1005*t1078;
  t1108 = -1.000000000016*t971;
  t1123 = 1. + t1108;
  t1127 = t1123*t1089;
  t1128 = t1100 + t1104 + t1127;
  t1160 = t965*t1011;
  t1161 = 4.e-6*t971*t1078;
  t1162 = -1.*t1005*t1089;
  t1163 = t1160 + t1161 + t1162;
  t1170 = 4.e-6*t971*t1011;
  t1171 = 1.6e-11*t989;
  t1173 = 1. + t1171;
  t1174 = t1173*t1078;
  t1176 = 4.e-6*t1005*t1089;
  t1177 = t1170 + t1174 + t1176;
  t963 = -4.9936e-13*var1[10];
  t978 = -0.038749*t971;
  t1003 = 6.19984e-13*t989;
  t1006 = -0.281210000004*t1005;
  t1007 = t963 + t978 + t1003 + t1006;
  t725 = 0.15121*t644;
  t904 = t725 + t835;
  t1203 = Sin(var1[3]);
  t1013 = -0.15121*t644;
  t1014 = t1013 + t835;
  t1206 = Cos(var1[3]);
  t1030 = -1.2484e-7*var1[10];
  t1043 = 2.479936e-18*t971;
  t1050 = -1.54996e-7*t989;
  t1060 = 1.124840000016e-6*t1005;
  t1061 = t1030 + t1043 + t1050 + t1060;
  t1205 = t224*t1203*t1011;
  t1207 = t1206*t1015;
  t1208 = t1205 + t1207;
  t1210 = t1206*t224;
  t1211 = -1.*t1203*t1011*t1015;
  t1214 = t1210 + t1211;
  t1080 = 0.281210000008499*t971;
  t1081 = -0.03874900000062*t1005;
  t1083 = t1080 + t1081;
  t1096 = 0.50315000001605*t1095;
  t1098 = -0.0398890000006382*t1097;
  t1099 = t1096 + t1098;
  t1230 = -1.*t766*t1208;
  t1234 = t278*t1214;
  t1235 = t1230 + t1234;
  t1238 = t278*t1208;
  t1239 = t766*t1214;
  t1251 = t1238 + t1239;
  t1139 = -5.04e-14*var1[11];
  t1155 = -0.039889*t1095;
  t1157 = 6.38224e-13*t1156;
  t1158 = -0.503150000008*t1097;
  t1159 = t1139 + t1155 + t1157 + t1158;
  t1165 = -1.26e-8*var1[11];
  t1166 = 2.552896e-18*t1095;
  t1167 = -1.59556e-7*t1156;
  t1168 = 2.012600000032e-6*t1097;
  t1169 = t1165 + t1166 + t1167 + t1168;
  t1270 = -1.*t199*t1005*t1203;
  t1271 = -4.e-6*t1005*t1235;
  t1272 = t1123*t1251;
  t1273 = t1270 + t1271 + t1272;
  t1276 = -1.*t965*t199*t1203;
  t1277 = 4.e-6*t971*t1235;
  t1279 = -1.*t1005*t1251;
  t1281 = t1276 + t1277 + t1279;
  t1183 = 1.6e-11*t1156;
  t1184 = 1. + t1183;
  t1283 = -4.e-6*t971*t199*t1203;
  t1285 = t1173*t1235;
  t1291 = 4.e-6*t1005*t1251;
  t1296 = t1283 + t1285 + t1291;
  t1193 = -1.000000000016*t1095;
  t1194 = 1. + t1193;
  t1337 = -1.*t1206*t224*t1011;
  t1338 = t1203*t1015;
  t1339 = t1337 + t1338;
  t1341 = t224*t1203;
  t1342 = t1206*t1011*t1015;
  t1343 = t1341 + t1342;
  t1345 = -1.*t766*t1339;
  t1346 = t278*t1343;
  t1347 = t1345 + t1346;
  t1349 = t278*t1339;
  t1350 = t766*t1343;
  t1351 = t1349 + t1350;
  t1354 = t1206*t199*t1005;
  t1355 = -4.e-6*t1005*t1347;
  t1357 = t1123*t1351;
  t1358 = t1354 + t1355 + t1357;
  t1361 = t965*t1206*t199;
  t1364 = 4.e-6*t971*t1347;
  t1366 = -1.*t1005*t1351;
  t1367 = t1361 + t1364 + t1366;
  t1369 = 4.e-6*t971*t1206*t199;
  t1370 = t1173*t1347;
  t1371 = 4.e-6*t1005*t1351;
  t1372 = t1369 + t1370 + t1371;
  p_output1[0]=t1007*t1011 + t1061*t1078 + t1083*t1089 + t1099*t1128 + t1159*t1163 + t1169*t1177 - 0.041195*(-1.*t1097*t1128 + t1093*t1163 + 4.e-6*t1095*t1177) - 0.14871*(4.e-6*t1097*t1128 + 4.e-6*t1095*t1163 + t1177*t1184) + 0.803147*(t1097*t1163 - 4.e-6*t1097*t1177 + t1128*t1194) - 1.*t1014*t1015*t199 + t199*t224*t904 + var1[0];
  p_output1[1]=t1014*t1214 + t1061*t1235 + t1083*t1251 + t1099*t1273 + t1159*t1281 + t1169*t1296 - 0.041195*(-1.*t1097*t1273 + t1093*t1281 + 4.e-6*t1095*t1296) + 0.803147*(t1194*t1273 + t1097*t1281 - 4.e-6*t1097*t1296) - 0.14871*(4.e-6*t1097*t1273 + 4.e-6*t1095*t1281 + t1184*t1296) - 1.*t1007*t1203*t199 + t1208*t904 + var1[1];
  p_output1[2]=t1014*t1343 + t1061*t1347 + t1083*t1351 + t1099*t1358 + t1159*t1367 + t1169*t1372 - 0.041195*(-1.*t1097*t1358 + t1093*t1367 + 4.e-6*t1095*t1372) + 0.803147*(t1194*t1358 + t1097*t1367 - 4.e-6*t1097*t1372) - 0.14871*(4.e-6*t1097*t1358 + 4.e-6*t1095*t1367 + t1184*t1372) + t1007*t1206*t199 + t1339*t904 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "FrFoot_sphere_center.hh"

namespace SymFunction
{

void FrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
