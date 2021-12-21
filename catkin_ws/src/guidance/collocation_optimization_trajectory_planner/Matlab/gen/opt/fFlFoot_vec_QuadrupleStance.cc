/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:32:39 GMT+01:00
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
  double t244;
  double t195;
  double t285;
  double t226;
  double t257;
  double t264;
  double t281;
  double t297;
  double t322;
  double t336;
  double t337;
  double t338;
  double t477;
  double t466;
  double t426;
  double t428;
  double t430;
  double t435;
  double t444;
  double t446;
  double t480;
  double t481;
  double t482;
  double t346;
  double t645;
  double t415;
  double t423;
  double t631;
  double t636;
  double t556;
  double t681;
  double t682;
  double t693;
  double t706;
  double t715;
  double t736;
  double t738;
  double t741;
  double t742;
  double t746;
  double t751;
  double t833;
  double t839;
  double t840;
  double t842;
  double t844;
  double t877;
  double t878;
  double t886;
  double t891;
  double t896;
  double t899;
  double t900;
  double t901;
  double t447;
  double t485;
  double t486;
  double t566;
  double t583;
  double t588;
  double t331;
  double t344;
  double t345;
  double t487;
  double t594;
  double t601;
  double t967;
  double t714;
  double t753;
  double t773;
  double t782;
  double t802;
  double t807;
  double t995;
  double t641;
  double t647;
  double t651;
  double t655;
  double t775;
  double t817;
  double t818;
  double t895;
  double t910;
  double t912;
  double t916;
  double t920;
  double t923;
  double t843;
  double t845;
  double t860;
  double t870;
  double t915;
  double t927;
  double t936;
  double t969;
  double t974;
  double t980;
  double t1000;
  double t1001;
  double t1014;
  double t1072;
  double t1084;
  double t1085;
  double t1105;
  double t1106;
  double t1107;
  double t1111;
  double t1112;
  double t1117;
  double t1119;
  double t1120;
  double t1121;
  double t1205;
  double t1209;
  double t1215;
  double t1216;
  double t1217;
  double t1223;
  double t1230;
  double t1234;
  double t1236;
  double t1241;
  double t1249;
  double t1251;
  double t1253;
  double t1260;
  double t1263;
  double t1264;
  double t1273;
  double t1170;
  double t1184;
  double t1189;
  double t1191;
  double t1196;
  double t1227;
  double t1258;
  double t1288;
  double t1292;
  double t1302;
  double t1303;
  double t1323;
  double t1324;
  double t1325;
  double t1329;
  double t1341;
  double t1190;
  double t1293;
  double t1353;
  double t1357;
  double t1365;
  double t1373;
  double t1376;
  double t1377;
  double t384;
  double t608;
  double t616;
  double t1401;
  double t1405;
  double t1413;
  double t1425;
  double t1427;
  double t1435;
  double t1440;
  double t1442;
  double t1443;
  double t1444;
  double t668;
  double t819;
  double t823;
  double t1361;
  double t1383;
  double t1385;
  double t1454;
  double t1455;
  double t1458;
  double t1419;
  double t1449;
  double t1451;
  double t871;
  double t937;
  double t946;
  double t1396;
  double t1480;
  double t1523;
  double t1557;
  double t1629;
  double t1673;
  double t1731;
  double t1737;
  double t1754;
  double t1759;
  double t1809;
  double t1820;
  double t2056;
  double t2059;
  double t2060;
  double t2062;
  double t2065;
  double t2066;
  double t2071;
  double t2096;
  double t2097;
  double t2101;
  double t2105;
  double t2107;
  double t2108;
  double t2109;
  double t2110;
  double t2140;
  double t2144;
  double t2149;
  double t2163;
  double t2164;
  double t2167;
  double t2168;
  t244 = Cos(var1[8]);
  t195 = Cos(var1[7]);
  t285 = -1. + t244;
  t226 = -1. + t195;
  t257 = -1.*t244;
  t264 = 1. + t257;
  t281 = 1.6e-11*t264;
  t297 = 1.6e-11*t285;
  t322 = 1. + t281 + t297;
  t336 = 4.e-6*t285;
  t337 = -4.e-6*t244;
  t338 = t336 + t337;
  t477 = Sin(var1[7]);
  t466 = Cos(var1[6]);
  t426 = 1.6e-11*t226;
  t428 = 1. + t426;
  t430 = t428*t322;
  t435 = 4.e-6*t226*t338;
  t444 = t430 + t435;
  t446 = Sin(var1[6]);
  t480 = 4.e-6*t322*t477;
  t481 = t338*t477;
  t482 = t480 + t481;
  t346 = Sin(var1[4]);
  t645 = Sin(var1[8]);
  t415 = Cos(var1[4]);
  t423 = Cos(var1[5]);
  t631 = -1.000000000016*t264;
  t636 = 1. + t631;
  t556 = Sin(var1[5]);
  t681 = -4.e-6*t636*t477;
  t682 = -4.e-6*t428*t645;
  t693 = -4.e-6*t226*t645;
  t706 = t681 + t682 + t693;
  t715 = -1.*t195;
  t736 = 1. + t715;
  t738 = -1.000000000016*t736;
  t741 = 1. + t738;
  t742 = t741*t636;
  t746 = -1.000000000016*t477*t645;
  t751 = t742 + t746;
  t833 = -1. + t281;
  t839 = 4.e-6*t833;
  t840 = 4.e-6*t264;
  t842 = t839 + t840;
  t844 = t281 + t257;
  t877 = 4.e-6*t842*t477;
  t878 = t844*t477;
  t886 = -1.000000000016*t741*t645;
  t891 = t877 + t878 + t886;
  t896 = t428*t842;
  t899 = 4.e-6*t226*t844;
  t900 = 4.000000000064e-6*t477*t645;
  t901 = t896 + t899 + t900;
  t447 = -1.*t444*t446;
  t485 = t466*t482;
  t486 = t447 + t485;
  t566 = t466*t444;
  t583 = t446*t482;
  t588 = t566 + t583;
  t331 = 4.e-6*t226*t322;
  t344 = t195*t338;
  t345 = t331 + t344;
  t487 = t423*t486;
  t594 = -1.*t556*t588;
  t601 = t487 + t594;
  t967 = Cos(var1[3]);
  t714 = -1.*t446*t706;
  t753 = t466*t751;
  t773 = t714 + t753;
  t782 = t466*t706;
  t802 = t446*t751;
  t807 = t782 + t802;
  t995 = Sin(var1[3]);
  t641 = -1.*t636*t477;
  t647 = -1.6e-11*t226*t645;
  t651 = -1.*t195*t645;
  t655 = t641 + t647 + t651;
  t775 = t423*t773;
  t817 = -1.*t556*t807;
  t818 = t775 + t817;
  t895 = t446*t891;
  t910 = t466*t901;
  t912 = t895 + t910;
  t916 = t466*t891;
  t920 = -1.*t446*t901;
  t923 = t916 + t920;
  t843 = 4.e-6*t226*t842;
  t845 = t195*t844;
  t860 = 1.000000000016*t477*t645;
  t870 = t843 + t845 + t860;
  t915 = -1.*t556*t912;
  t927 = t423*t923;
  t936 = t915 + t927;
  t969 = t556*t486;
  t974 = t423*t588;
  t980 = t969 + t974;
  t1000 = t415*t345;
  t1001 = -1.*t346*t601;
  t1014 = t1000 + t1001;
  t1072 = t556*t773;
  t1084 = t423*t807;
  t1085 = t1072 + t1084;
  t1105 = t415*t655;
  t1106 = -1.*t346*t818;
  t1107 = t1105 + t1106;
  t1111 = t423*t912;
  t1112 = t556*t923;
  t1117 = t1111 + t1112;
  t1119 = t415*t870;
  t1120 = -1.*t346*t936;
  t1121 = t1119 + t1120;
  t1205 = 5.136e-14*var1[8];
  t1209 = -0.03874900000062*t264;
  t1215 = 5.9484e-7*t285;
  t1216 = -0.03875*t244;
  t1217 = -0.299999999992*t645;
  t1223 = t1205 + t1209 + t1215 + t1216 + t1217;
  t1230 = -1.284e-8*var1[8];
  t1234 = 1. + t297;
  t1236 = 0.14871*t1234;
  t1241 = -1.5499600000248e-7*t264;
  t1249 = -1.55e-7*t285;
  t1251 = -1.199999999968e-6*t645;
  t1253 = t1230 + t1236 + t1241 + t1249 + t1251;
  t1260 = 0.80321*t636;
  t1263 = 0.503210000016051*t264;
  t1264 = -4.05159380016e-7*t645;
  t1273 = t1260 + t1263 + t1264;
  t1170 = -1.*t466;
  t1184 = 1. + t1170;
  t1189 = 0.15121*t1184;
  t1191 = 0.281210000008499*t736;
  t1196 = 0.03874900000062*t477;
  t1227 = t477*t1223;
  t1258 = 4.e-6*t477*t1253;
  t1288 = t741*t1273;
  t1292 = t1191 + t1196 + t1227 + t1258 + t1288;
  t1302 = -1.2484e-7*var1[7];
  t1303 = -1.5499600000248e-7*t736;
  t1323 = 1.124840000016e-6*t477;
  t1324 = 4.e-6*t226*t1223;
  t1325 = t428*t1253;
  t1329 = -4.e-6*t477*t1273;
  t1341 = t1302 + t1303 + t1323 + t1324 + t1325 + t1329;
  t1190 = -0.15121*t446;
  t1293 = t446*t1292;
  t1353 = t466*t1341;
  t1357 = t1189 + t1190 + t1293 + t1353;
  t1365 = 0.15121*t446;
  t1373 = t466*t1292;
  t1376 = -1.*t446*t1341;
  t1377 = t1189 + t1365 + t1373 + t1376;
  t384 = t345*t346;
  t608 = t415*t601;
  t616 = t384 + t608;
  t1401 = -1.*t556*t1357;
  t1405 = t423*t1377;
  t1413 = t1401 + t1405;
  t1425 = 4.9936e-13*var1[7];
  t1427 = -0.03874900000062*t736;
  t1435 = 0.281210000004*t477;
  t1440 = t195*t1223;
  t1442 = 4.e-6*t226*t1253;
  t1443 = -1.*t477*t1273;
  t1444 = t1425 + t1427 + t1435 + t1440 + t1442 + t1443;
  t668 = t346*t655;
  t819 = t415*t818;
  t823 = t668 + t819;
  t1361 = t423*t1357;
  t1383 = t556*t1377;
  t1385 = t1361 + t1383;
  t1454 = t415*t1413;
  t1455 = t346*t1444;
  t1458 = t1454 + t1455;
  t1419 = -1.*t346*t1413;
  t1449 = t415*t1444;
  t1451 = t1419 + t1449;
  t871 = t346*t870;
  t937 = t415*t936;
  t946 = t871 + t937;
  t1396 = -1.*t980*t1385;
  t1480 = t1385*t1085;
  t1523 = t980*t1385;
  t1557 = -1.*t1385*t1117;
  t1629 = -1.*t1385*t1085;
  t1673 = t1385*t1117;
  t1731 = -1.*t345*t1444;
  t1737 = t1444*t655;
  t1754 = t345*t1444;
  t1759 = -1.*t1444*t870;
  t1809 = -1.*t1444*t655;
  t1820 = t1444*t870;
  t2056 = -1.*t338*t1223;
  t2059 = -1.*t322*t1253;
  t2060 = t2056 + t2059;
  t2062 = t636*t1273;
  t2065 = -1.*t1223*t645;
  t2066 = -4.e-6*t1253*t645;
  t2071 = t2062 + t2065 + t2066;
  t2096 = -1.*t636*t1273;
  t2097 = t1223*t645;
  t2101 = 4.e-6*t1253*t645;
  t2105 = t2096 + t2097 + t2101;
  t2107 = t844*t1223;
  t2108 = t842*t1253;
  t2109 = -1.000000000016*t1273*t645;
  t2110 = t2107 + t2108 + t2109;
  t2140 = t338*t1223;
  t2144 = t322*t1253;
  t2149 = t2140 + t2144;
  t2163 = -1.*t844*t1223;
  t2164 = -1.*t842*t1253;
  t2167 = 1.000000000016*t1273*t645;
  t2168 = t2163 + t2164 + t2167;
  p_output1[0]=t823*var2[0] + t946*var2[1] + t616*var2[2];
  p_output1[1]=(t1085*t967 - 1.*t1107*t995)*var2[0] + (t1117*t967 - 1.*t1121*t995)*var2[1] + (t967*t980 - 1.*t1014*t995)*var2[2];
  p_output1[2]=(t1107*t967 + t1085*t995)*var2[0] + (t1121*t967 + t1117*t995)*var2[1] + (t1014*t967 + t980*t995)*var2[2];
  p_output1[3]=((t1014*t1451 + t1523 + t1458*t616)*t946 + t616*(-1.*t1121*t1451 + t1557 - 1.*t1458*t946))*var2[0] + ((t1396 - 1.*t1014*t1451 - 1.*t1458*t616)*t823 + t616*(t1107*t1451 + t1480 + t1458*t823))*var2[1] + ((-1.*t1107*t1451 + t1629 - 1.*t1458*t823)*t946 + t823*(t1121*t1451 + t1673 + t1458*t946))*var2[2];
  p_output1[4]=(t1117*(t1523 + t1754 + t1413*t601) + (t1557 + t1759 - 1.*t1413*t936)*t980)*var2[0] + (t1085*(t1396 + t1731 - 1.*t1413*t601) + (t1480 + t1737 + t1413*t818)*t980)*var2[1] + (t1117*(t1629 + t1809 - 1.*t1413*t818) + t1085*(t1673 + t1820 + t1413*t936))*var2[2];
  p_output1[5]=((t1754 + t1377*t486 + t1357*t588)*t870 + t345*(t1759 - 1.*t1357*t912 - 1.*t1377*t923))*var2[0] + ((t1731 - 1.*t1377*t486 - 1.*t1357*t588)*t655 + t345*(t1737 + t1377*t773 + t1357*t807))*var2[1] + ((t1809 - 1.*t1377*t773 - 1.*t1357*t807)*t870 + t655*(t1820 + t1357*t912 + t1377*t923))*var2[2];
  p_output1[6]=(-0.15121*t706 + 0.15121*t751 + (t1754 + t1341*t444 + t1292*t482)*t870 + t345*(t1759 - 1.*t1292*t891 - 1.*t1341*t901))*var2[0] + ((t1731 - 1.*t1341*t444 - 1.*t1292*t482)*t655 + t345*(t1737 + t1341*t706 + t1292*t751) + 0.15121*t891 - 0.15121*t901)*var2[1] + (-0.15121*t444 + 0.15121*t482 + (t1809 - 1.*t1341*t706 - 1.*t1292*t751)*t870 + t655*(t1820 + t1292*t891 + t1341*t901))*var2[2];
  p_output1[7]=(t2168*t322 + 0.038749*t636 - 0.281210000004*t645 + t2149*t842 + 4.e-6*(-1.*t2168*t338 - 1.*t2149*t844))*var2[0] + (t2071*t322 - 0.03874900000062*t645 - 4.e-6*t2060*t645 + 4.e-6*(-1.*t2071*t338 + t2060*t645) + 1.e-6*t842 + 0.28121*t844)*var2[1] + (1.e-6*t322 + 0.28121*t338 - 4.e-6*t2110*t645 + t2105*t842 + 4.e-6*(t2110*t645 - 1.*t2105*t844))*var2[2];
  p_output1[8]=-4.05160619990483e-7*var2[0] + 0.300000000004851*var2[1] - 1.284e-8*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_QuadrupleStance.hh"

namespace QuadrupleStance
{

void fFlFoot_vec_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
