/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:27 GMT+02:00
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
  double t463;
  double t111;
  double t355;
  double t703;
  double t460;
  double t704;
  double t705;
  double t817;
  double t722;
  double t82;
  double t740;
  double t839;
  double t791;
  double t793;
  double t797;
  double t755;
  double t800;
  double t854;
  double t859;
  double t1080;
  double t1105;
  double t985;
  double t1035;
  double t1044;
  double t1053;
  double t1057;
  double t1059;
  double t1098;
  double t1100;
  double t1103;
  double t1106;
  double t1128;
  double t1132;
  double t1138;
  double t1147;
  double t1162;
  double t1173;
  double t1174;
  double t1191;
  double t1221;
  double t1248;
  double t1249;
  double t951;
  double t1060;
  double t1067;
  double t1325;
  double t1329;
  double t1332;
  double t1336;
  double t1337;
  double t1339;
  double t1341;
  double t1344;
  double t1346;
  double t925;
  double t933;
  double t945;
  double t1324;
  double t1335;
  double t1348;
  double t1349;
  double t1358;
  double t1360;
  double t1361;
  double t1362;
  double t1363;
  double t1365;
  double t1315;
  double t1316;
  double t1317;
  double t1320;
  double t1352;
  double t1353;
  double t1377;
  double t1378;
  double t1379;
  double t1383;
  double t1386;
  double t1388;
  double t1355;
  double t1369;
  double t1372;
  double t1380;
  double t1408;
  double t1410;
  double t1416;
  double t1425;
  double t1427;
  double t725;
  double t870;
  double t923;
  double t1375;
  double t1474;
  double t1483;
  double t1492;
  double t1503;
  double t1512;
  double t1522;
  double t1538;
  double t1602;
  double t1575;
  double t1620;
  double t1634;
  double t1718;
  double t1685;
  t463 = Cos(var1[10]);
  t111 = Cos(var1[11]);
  t355 = Sin(var1[10]);
  t703 = Sin(var1[11]);
  t460 = t111*t355;
  t704 = -1.*t463*t703;
  t705 = t460 + t704;
  t817 = Sin(var1[9]);
  t722 = Sin(var1[4]);
  t82 = Cos(var1[9]);
  t740 = Cos(var1[4]);
  t839 = Sin(var1[5]);
  t791 = t463*t111;
  t793 = t355*t703;
  t797 = t791 + t793;
  t755 = Cos(var1[5]);
  t800 = t755*t797;
  t854 = t817*t705*t839;
  t859 = t800 + t854;
  t1080 = Cos(var1[3]);
  t1105 = Sin(var1[3]);
  t985 = -1.*t111*t355;
  t1035 = t463*t703;
  t1044 = t985 + t1035;
  t1053 = t755*t1044;
  t1057 = t817*t797*t839;
  t1059 = t1053 + t1057;
  t1098 = -1.*t755*t817*t705;
  t1100 = t797*t839;
  t1103 = t1098 + t1100;
  t1106 = t82*t740*t705;
  t1128 = -1.*t722*t859;
  t1132 = t1106 + t1128;
  t1138 = t740*t817;
  t1147 = t82*t722*t839;
  t1162 = t1138 + t1147;
  t1173 = -1.*t755*t817*t797;
  t1174 = t1044*t839;
  t1191 = t1173 + t1174;
  t1221 = t82*t740*t797;
  t1248 = -1.*t722*t1059;
  t1249 = t1221 + t1248;
  t951 = t82*t797*t722;
  t1060 = t740*t1059;
  t1067 = t951 + t1060;
  t1325 = -0.0641*t111;
  t1329 = -0.28*t703;
  t1332 = t1325 + t1329;
  t1336 = -1.*t111;
  t1337 = 1. + t1336;
  t1339 = -0.575*t1337;
  t1341 = -0.295*t111;
  t1344 = -0.0641*t703;
  t1346 = t1339 + t1341 + t1344;
  t925 = t817*t722;
  t933 = -1.*t82*t740*t839;
  t945 = t925 + t933;
  t1324 = 0.325*t355;
  t1335 = t463*t1332;
  t1348 = t355*t1346;
  t1349 = t1324 + t1335 + t1348;
  t1358 = -1.*t463;
  t1360 = 1. + t1358;
  t1361 = -0.325*t1360;
  t1362 = -1.*t355*t1332;
  t1363 = t463*t1346;
  t1365 = t1361 + t1362 + t1363;
  t1315 = -1.*t82;
  t1316 = 1. + t1315;
  t1317 = 0.1575*t1316;
  t1320 = 0.2255*t82;
  t1352 = -1.*t817*t1349;
  t1353 = t1317 + t1320 + t1352;
  t1377 = 0.068*t817;
  t1378 = t82*t1349;
  t1379 = t1377 + t1378;
  t1383 = t755*t1365;
  t1386 = -1.*t1353*t839;
  t1388 = t1383 + t1386;
  t1355 = t755*t1353;
  t1369 = t1365*t839;
  t1372 = t1355 + t1369;
  t1380 = t1379*t722;
  t1408 = t740*t1388;
  t1410 = t1380 + t1408;
  t1416 = t740*t1379;
  t1425 = -1.*t722*t1388;
  t1427 = t1416 + t1425;
  t725 = t82*t705*t722;
  t870 = t740*t859;
  t923 = t725 + t870;
  t1375 = -1.*t82*t755*t1372;
  t1474 = t1372*t1191;
  t1483 = t1372*t1103;
  t1492 = -1.*t1372*t1191;
  t1503 = t82*t755*t1372;
  t1512 = -1.*t1372*t1103;
  t1522 = -1.*t817*t1379;
  t1538 = t82*t1379*t797;
  t1602 = -1.*t82*t1379*t797;
  t1575 = t82*t1379*t705;
  t1620 = t817*t1379;
  t1634 = -1.*t82*t1379*t705;
  t1718 = t1365*t797;
  t1685 = -1.*t1365*t1044;
  p_output1[0]=t923;
  p_output1[1]=t945;
  p_output1[2]=t1067;
  p_output1[3]=t1080*t1103 - 1.*t1105*t1132;
  p_output1[4]=-1.*t1105*t1162 + t1080*t755*t82;
  p_output1[5]=t1080*t1191 - 1.*t1105*t1249;
  p_output1[6]=t1103*t1105 + t1080*t1132;
  p_output1[7]=t1080*t1162 + t1105*t755*t82;
  p_output1[8]=t1105*t1191 + t1080*t1249;
  p_output1[9]=(t1067*t1410 + t1249*t1427 + t1474)*t945 + t1067*(t1375 - 1.*t1162*t1427 - 1.*t1410*t945);
  p_output1[10]=(-1.*t1067*t1410 - 1.*t1249*t1427 + t1492)*t923 + t1067*(t1132*t1427 + t1483 + t1410*t923);
  p_output1[11]=(-1.*t1132*t1427 + t1512 - 1.*t1410*t923)*t945 + t923*(t1162*t1427 + t1503 + t1410*t945);
  p_output1[12]=(t1059*t1388 + t1474 + t1538)*t755*t82 + t1191*(t1375 + t1522 + t1388*t82*t839);
  p_output1[13]=t1103*(-1.*t1059*t1388 + t1492 + t1602) + t1191*(t1483 + t1575 + t1388*t859);
  p_output1[14]=t1103*(t1503 + t1620 - 1.*t1388*t82*t839) + t755*t82*(t1512 + t1634 - 1.*t1388*t859);
  p_output1[15]=t817*(t1044*t1365 + t1538 - 1.*t1353*t797*t817) + t797*t82*(t1522 - 1.*t1353*t82);
  p_output1[16]=t797*(t1575 + t1718 - 1.*t1353*t705*t817)*t82 + t705*(t1602 + t1685 + t1353*t797*t817)*t82;
  p_output1[17]=t817*(t1634 - 1.*t1365*t797 + t1353*t705*t817) + t705*t82*(t1620 + t1353*t82);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.2255*t1044 - 0.1575*t705;
  p_output1[28]=t1044*(t1718 + t1349*t705) + t797*(t1685 - 1.*t1349*t797);
  p_output1[29]=0.068*t797;
  p_output1[30]=-1.*t111*t1332 - 0.325*t703 - 1.*t1346*t703;
  p_output1[31]=0;
  p_output1[32]=0.325*t111 + t111*t1346 - 1.*t1332*t703;
  p_output1[33]=-0.0641;
  p_output1[34]=0;
  p_output1[35]=-0.28;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
