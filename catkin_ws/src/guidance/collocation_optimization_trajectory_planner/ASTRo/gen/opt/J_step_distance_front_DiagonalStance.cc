/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:47:35 GMT+02:00
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
  double t894;
  double t895;
  double t896;
  double t928;
  double t934;
  double t936;
  double t893;
  double t955;
  double t885;
  double t888;
  double t977;
  double t993;
  double t994;
  double t995;
  double t997;
  double t1008;
  double t1009;
  double t1010;
  double t1012;
  double t1016;
  double t1020;
  double t1024;
  double t1030;
  double t1031;
  double t1032;
  double t1033;
  double t1034;
  double t1054;
  double t1057;
  double t1058;
  double t1059;
  double t1061;
  double t1063;
  double t1066;
  double t1067;
  double t1068;
  double t1070;
  double t1071;
  double t1072;
  double t1073;
  double t939;
  double t952;
  double t912;
  double t935;
  double t987;
  double t992;
  double t999;
  double t1004;
  double t1082;
  double t1083;
  double t1084;
  double t1038;
  double t1039;
  double t1047;
  double t1048;
  double t1055;
  double t1056;
  double t1064;
  double t1065;
  double t1098;
  double t1099;
  double t1100;
  double t1101;
  double t1102;
  double t1103;
  double t1104;
  double t1105;
  double t1106;
  double t1107;
  double t1108;
  double t1109;
  double t1110;
  double t1111;
  double t1121;
  double t1122;
  double t1123;
  double t1125;
  double t1126;
  double t1127;
  double t1129;
  double t1130;
  double t1131;
  double t1138;
  double t1139;
  double t1141;
  double t1149;
  double t1085;
  double t1086;
  double t1087;
  double t1088;
  double t1089;
  double t1090;
  double t1091;
  double t1092;
  double t1093;
  double t1094;
  double t1095;
  double t1157;
  double t1158;
  double t1159;
  double t1161;
  double t1162;
  double t1163;
  double t1165;
  double t1166;
  double t1167;
  double t1175;
  double t1176;
  double t1177;
  double t1184;
  double t1187;
  double t1186;
  double t1188;
  double t1189;
  double t1191;
  double t1192;
  double t1193;
  double t1199;
  double t1200;
  double t1201;
  double t1203;
  double t1204;
  double t1205;
  double t1207;
  double t1208;
  double t1209;
  double t1221;
  double t1222;
  double t1223;
  double t1226;
  double t1227;
  double t1228;
  double t1230;
  double t1231;
  double t1232;
  double t1246;
  double t1248;
  double t1249;
  double t1251;
  double t1252;
  double t1253;
  double t1255;
  double t1256;
  double t1257;
  double t1269;
  double t1270;
  double t1271;
  double t1274;
  double t1275;
  double t1276;
  double t1278;
  double t1279;
  double t1280;
  double t1287;
  double t1288;
  double t1289;
  double t1291;
  double t1292;
  double t1293;
  double t1295;
  double t1296;
  double t1297;
  double t1311;
  double t1312;
  double t1313;
  double t1113;
  double t1114;
  double t1116;
  double t1117;
  double t1327;
  double t1328;
  double t1329;
  double t1331;
  double t1332;
  double t1317;
  double t1345;
  double t1346;
  double t1347;
  double t1349;
  double t1350;
  double t1351;
  double t1353;
  double t1354;
  double t1355;
  double t1362;
  double t1363;
  double t1364;
  double t1150;
  double t1151;
  double t1153;
  double t1374;
  double t1375;
  double t1302;
  double t1388;
  double t1389;
  double t1390;
  double t1392;
  double t1393;
  double t1394;
  double t1396;
  double t1397;
  double t1398;
  double t1406;
  double t1407;
  double t1408;
  t894 = Cos(var1[12]);
  t895 = -1.*t894;
  t896 = 1. + t895;
  t928 = Sin(var1[12]);
  t934 = -0.15121*t928;
  t936 = Sin(var1[4]);
  t893 = Cos(var1[5]);
  t955 = Sin(var1[5]);
  t885 = Cos(var1[4]);
  t888 = Sin(var1[13]);
  t977 = Cos(var1[13]);
  t993 = -1.*t894*t893*t936;
  t994 = t928*t936*t955;
  t995 = t993 + t994;
  t997 = Cos(var1[14]);
  t1008 = -1.*t885*t888;
  t1009 = t977*t995;
  t1010 = t1008 + t1009;
  t1012 = Sin(var1[14]);
  t1016 = t977*t885;
  t1020 = t888*t995;
  t1024 = t1016 + t1020;
  t1030 = Cos(var1[6]);
  t1031 = -1.*t1030;
  t1032 = 1. + t1031;
  t1033 = 0.15121*t1032;
  t1034 = Sin(var1[6]);
  t1054 = Cos(var1[7]);
  t1057 = -1.*t893*t1030*t936;
  t1058 = t936*t955*t1034;
  t1059 = t1057 + t1058;
  t1061 = Sin(var1[7]);
  t1063 = Cos(var1[8]);
  t1066 = t1054*t1059;
  t1067 = -1.*t885*t1061;
  t1068 = t1066 + t1067;
  t1070 = t885*t1054;
  t1071 = t1059*t1061;
  t1072 = t1070 + t1071;
  t1073 = Sin(var1[8]);
  t939 = -0.15121*t896;
  t952 = t939 + t934;
  t912 = 0.15121*t896;
  t935 = t912 + t934;
  t987 = -1.*t977;
  t992 = 1. + t987;
  t999 = -1.*t997;
  t1004 = 1. + t999;
  t1082 = -1.*t885*t893*t928;
  t1083 = -1.*t894*t885*t955;
  t1084 = t1082 + t1083;
  t1038 = -0.15121*t1034;
  t1039 = t1033 + t1038;
  t1047 = 0.15121*t1034;
  t1048 = t1033 + t1047;
  t1055 = -1.*t1054;
  t1056 = 1. + t1055;
  t1064 = -1.*t1063;
  t1065 = 1. + t1064;
  t1098 = -1.*t885*t1030*t955;
  t1099 = -1.*t885*t893*t1034;
  t1100 = t1098 + t1099;
  t1101 = 0.28121*t1056*t1100;
  t1102 = 0.50321*t1054*t1065*t1100;
  t1103 = -1.*t885*t893*t1030;
  t1104 = t885*t955*t1034;
  t1105 = t1103 + t1104;
  t1106 = 0.15121*t1105;
  t1107 = -0.50321*t1100*t1061*t1073;
  t1108 = t1054*t1063*t1100;
  t1109 = t1100*t1061*t1073;
  t1110 = t1108 + t1109;
  t1111 = 0.19821*t1110;
  t1121 = t885*t893*t1030;
  t1122 = -1.*t885*t955*t1034;
  t1123 = t1121 + t1122;
  t1125 = -1.*t1054*t936;
  t1126 = -1.*t1123*t1061;
  t1127 = t1125 + t1126;
  t1129 = t1054*t1123;
  t1130 = -1.*t936*t1061;
  t1131 = t1129 + t1130;
  t1138 = t1054*t936;
  t1139 = t1123*t1061;
  t1141 = t1138 + t1139;
  t1149 = -0.15121*t894;
  t1085 = -0.28121*t992*t1084;
  t1086 = -0.50321*t977*t1004*t1084;
  t1087 = 0.50321*t888*t1012*t1084;
  t1088 = -1.*t894*t885*t893;
  t1089 = t885*t928*t955;
  t1090 = t1088 + t1089;
  t1091 = 0.15121*t1090;
  t1092 = t977*t997*t1084;
  t1093 = t888*t1012*t1084;
  t1094 = t1092 + t1093;
  t1095 = -0.19821*t1094;
  t1157 = t894*t885*t893;
  t1158 = -1.*t885*t928*t955;
  t1159 = t1157 + t1158;
  t1161 = -1.*t888*t936;
  t1162 = t977*t1159;
  t1163 = t1161 + t1162;
  t1165 = -1.*t977*t936;
  t1166 = -1.*t888*t1159;
  t1167 = t1165 + t1166;
  t1175 = t977*t936;
  t1176 = t888*t1159;
  t1177 = t1175 + t1176;
  t1184 = Cos(var1[3]);
  t1187 = Sin(var1[3]);
  t1186 = t1184*t893*t936;
  t1188 = -1.*t1187*t955;
  t1189 = t1186 + t1188;
  t1191 = -1.*t893*t1187;
  t1192 = -1.*t1184*t936*t955;
  t1193 = t1191 + t1192;
  t1199 = t894*t1189;
  t1200 = t928*t1193;
  t1201 = t1199 + t1200;
  t1203 = t1184*t885*t888;
  t1204 = t977*t1201;
  t1205 = t1203 + t1204;
  t1207 = -1.*t977*t1184*t885;
  t1208 = t888*t1201;
  t1209 = t1207 + t1208;
  t1221 = t1030*t1189;
  t1222 = t1193*t1034;
  t1223 = t1221 + t1222;
  t1226 = t1054*t1223;
  t1227 = t1184*t885*t1061;
  t1228 = t1226 + t1227;
  t1230 = -1.*t1184*t885*t1054;
  t1231 = t1223*t1061;
  t1232 = t1230 + t1231;
  t1246 = t894*t885*t893*t1187;
  t1248 = -1.*t885*t928*t1187*t955;
  t1249 = t1246 + t1248;
  t1251 = -1.*t888*t1187*t936;
  t1252 = t977*t1249;
  t1253 = t1251 + t1252;
  t1255 = t977*t1187*t936;
  t1256 = t888*t1249;
  t1257 = t1255 + t1256;
  t1269 = t885*t893*t1030*t1187;
  t1270 = -1.*t885*t1187*t955*t1034;
  t1271 = t1269 + t1270;
  t1274 = t1054*t1271;
  t1275 = -1.*t1187*t936*t1061;
  t1276 = t1274 + t1275;
  t1278 = t1054*t1187*t936;
  t1279 = t1271*t1061;
  t1280 = t1278 + t1279;
  t1287 = -1.*t893*t1187*t936;
  t1288 = -1.*t1184*t955;
  t1289 = t1287 + t1288;
  t1291 = t1184*t893;
  t1292 = -1.*t1187*t936*t955;
  t1293 = t1291 + t1292;
  t1295 = t928*t1289;
  t1296 = t894*t1293;
  t1297 = t1295 + t1296;
  t1311 = t1030*t1293;
  t1312 = t1289*t1034;
  t1313 = t1311 + t1312;
  t1113 = -0.15121*t1030;
  t1114 = t1113 + t1047;
  t1116 = 0.15121*t1030;
  t1117 = t1116 + t1047;
  t1327 = t893*t1187*t936;
  t1328 = t1184*t955;
  t1329 = t1327 + t1328;
  t1331 = -1.*t1329*t1034;
  t1332 = t1311 + t1331;
  t1317 = -1.*t1293*t1034;
  t1345 = t1030*t1329;
  t1346 = t1293*t1034;
  t1347 = t1345 + t1346;
  t1349 = t885*t1054*t1187;
  t1350 = -1.*t1347*t1061;
  t1351 = t1349 + t1350;
  t1353 = t1054*t1347;
  t1354 = t885*t1187*t1061;
  t1355 = t1353 + t1354;
  t1362 = -1.*t885*t1054*t1187;
  t1363 = t1347*t1061;
  t1364 = t1362 + t1363;
  t1150 = 0.15121*t928;
  t1151 = t1149 + t1150;
  t1153 = t1149 + t934;
  t1374 = -1.*t928*t1329;
  t1375 = t1374 + t1296;
  t1302 = -1.*t928*t1293;
  t1388 = t894*t1329;
  t1389 = t928*t1293;
  t1390 = t1388 + t1389;
  t1392 = t885*t888*t1187;
  t1393 = t977*t1390;
  t1394 = t1392 + t1393;
  t1396 = t977*t885*t1187;
  t1397 = -1.*t888*t1390;
  t1398 = t1396 + t1397;
  t1406 = -1.*t977*t885*t1187;
  t1407 = t888*t1390;
  t1408 = t1406 + t1407;
  p_output1[0]=-0.50321*t1004*t1010 + 0.50321*t1012*t1024 + 0.28121*t1056*t1059 + 0.50321*t1065*t1068 - 0.50321*t1072*t1073 + 0.19821*(t1063*t1068 + t1072*t1073) + 0.28121*t1061*t885 - 0.28121*t885*t888 - 1.*t1048*t893*t936 + t893*t935*t936 + t1039*t936*t955 - 1.*t936*t952*t955 + 0.15121*(t1034*t893*t936 + t1030*t936*t955) + 0.15121*(t893*t928*t936 + t894*t936*t955) - 0.28121*t992*t995 - 0.19821*(t1012*t1024 + t1010*t997);
  p_output1[1]=t1085 + t1086 + t1087 + t1091 + t1095 + t1101 + t1102 + t1106 + t1107 + t1111 - 1.*t1039*t885*t893 + t885*t893*t952 - 1.*t1048*t885*t955 + t885*t935*t955;
  p_output1[2]=t1101 + t1102 + t1106 + t1107 + t1111 + t1117*t885*t893 - 1.*t1114*t885*t955;
  p_output1[3]=0.28121*t1061*t1123 + 0.50321*t1065*t1127 - 0.50321*t1073*t1131 + 0.19821*(t1063*t1127 + t1073*t1131) + 0.28121*t1054*t936;
  p_output1[4]=0.50321*t1073*t1131 - 0.50321*t1063*t1141 + 0.19821*(-1.*t1073*t1131 + t1063*t1141);
  p_output1[5]=t1085 + t1086 + t1087 + t1091 + t1095 - 1.*t1151*t885*t893 + t1153*t885*t955;
  p_output1[6]=0.50321*t1012*t1163 - 0.50321*t1004*t1167 - 0.28121*t1159*t888 - 0.28121*t936*t977 - 0.19821*(t1012*t1163 + t1167*t997);
  p_output1[7]=-0.50321*t1012*t1163 + 0.50321*t1177*t997 - 0.19821*(-1.*t1012*t1163 + t1177*t997);
  p_output1[8]=t1048*t1189 + t1039*t1193 + 0.15121*(-1.*t1034*t1189 + t1030*t1193) - 0.50321*t1004*t1205 + 0.50321*t1012*t1209 + 0.28121*t1056*t1223 + 0.50321*t1065*t1228 - 0.50321*t1073*t1232 + 0.19821*(t1063*t1228 + t1073*t1232) - 0.28121*t1061*t1184*t885 + 0.28121*t1184*t885*t888 + 0.15121*(t1193*t894 - 1.*t1189*t928) - 1.*t1189*t935 - 1.*t1193*t952 - 0.28121*t1201*t992 - 0.19821*(t1012*t1209 + t1205*t997);
  p_output1[9]=-0.50321*t1004*t1253 + 0.50321*t1012*t1257 + 0.28121*t1056*t1271 + 0.50321*t1065*t1276 - 0.50321*t1073*t1280 + 0.19821*(t1063*t1276 + t1073*t1280) + t1048*t1187*t885*t893 - 1.*t1187*t885*t893*t935 + 0.28121*t1061*t1187*t936 - 0.28121*t1187*t888*t936 - 1.*t1039*t1187*t885*t955 + t1187*t885*t952*t955 + 0.15121*(-1.*t1034*t1187*t885*t893 - 1.*t1030*t1187*t885*t955) + 0.15121*(-1.*t1187*t885*t893*t928 - 1.*t1187*t885*t894*t955) - 0.28121*t1249*t992 - 0.19821*(t1012*t1257 + t1253*t997);
  p_output1[10]=t1039*t1289 + t1048*t1293 + 0.28121*t1056*t1313 + 0.50321*t1054*t1065*t1313 - 0.50321*t1061*t1073*t1313 + 0.19821*(t1054*t1063*t1313 + t1061*t1073*t1313) + 0.15121*(t1030*t1289 + t1317) + 0.50321*t1012*t1297*t888 + 0.15121*(t1302 + t1289*t894) - 1.*t1293*t935 - 1.*t1289*t952 - 0.50321*t1004*t1297*t977 - 0.28121*t1297*t992 - 0.19821*(t1012*t1297*t888 + t1297*t977*t997);
  p_output1[11]=t1114*t1293 + t1117*t1329 + 0.15121*(t1317 - 1.*t1030*t1329) + 0.28121*t1056*t1332 + 0.50321*t1054*t1065*t1332 - 0.50321*t1061*t1073*t1332 + 0.19821*(t1054*t1063*t1332 + t1061*t1073*t1332);
  p_output1[12]=0.28121*t1061*t1347 + 0.50321*t1065*t1351 - 0.50321*t1073*t1355 + 0.19821*(t1063*t1351 + t1073*t1355) - 0.28121*t1054*t1187*t885;
  p_output1[13]=0.50321*t1073*t1355 - 0.50321*t1063*t1364 + 0.19821*(-1.*t1073*t1355 + t1063*t1364);
  p_output1[14]=-1.*t1153*t1293 - 1.*t1151*t1329 + 0.50321*t1012*t1375*t888 + 0.15121*(t1302 - 1.*t1329*t894) - 0.50321*t1004*t1375*t977 - 0.28121*t1375*t992 - 0.19821*(t1012*t1375*t888 + t1375*t977*t997);
  p_output1[15]=0.50321*t1012*t1394 - 0.50321*t1004*t1398 - 0.28121*t1390*t888 + 0.28121*t1187*t885*t977 - 0.19821*(t1012*t1394 + t1398*t997);
  p_output1[16]=-0.50321*t1012*t1394 + 0.50321*t1408*t997 - 0.19821*(-1.*t1012*t1394 + t1408*t997);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_step_distance_front_DiagonalStance.hh"

namespace DiagonalStance
{

void J_step_distance_front_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
