/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:26:32 GMT+01:00
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
  double t285;
  double t179;
  double t326;
  double t298;
  double t302;
  double t322;
  double t330;
  double t337;
  double t211;
  double t268;
  double t369;
  double t376;
  double t379;
  double t522;
  double t515;
  double t463;
  double t468;
  double t469;
  double t473;
  double t480;
  double t485;
  double t489;
  double t524;
  double t525;
  double t527;
  double t685;
  double t387;
  double t436;
  double t453;
  double t661;
  double t669;
  double t680;
  double t686;
  double t691;
  double t699;
  double t700;
  double t726;
  double t727;
  double t738;
  double t759;
  double t760;
  double t781;
  double t791;
  double t796;
  double t798;
  double t818;
  double t827;
  double t842;
  double t847;
  double t862;
  double t863;
  double t864;
  double t623;
  double t915;
  double t916;
  double t922;
  double t931;
  double t936;
  double t941;
  double t944;
  double t945;
  double t960;
  double t961;
  double t965;
  double t968;
  double t981;
  double t982;
  double t991;
  double t994;
  double t590;
  double t595;
  double t609;
  double t505;
  double t529;
  double t530;
  double t364;
  double t381;
  double t383;
  double t534;
  double t631;
  double t638;
  double t1098;
  double t884;
  double t885;
  double t887;
  double t820;
  double t868;
  double t877;
  double t1150;
  double t692;
  double t741;
  double t783;
  double t786;
  double t878;
  double t888;
  double t889;
  double t1019;
  double t1025;
  double t1040;
  double t972;
  double t1011;
  double t1012;
  double t923;
  double t940;
  double t946;
  double t955;
  double t1014;
  double t1041;
  double t1045;
  double t1117;
  double t1129;
  double t1130;
  double t1151;
  double t1152;
  double t1153;
  double t1157;
  double t1162;
  double t1163;
  double t1165;
  double t1166;
  double t1167;
  double t1181;
  double t1182;
  double t1183;
  double t1186;
  double t1192;
  double t1193;
  double t787;
  double t890;
  double t901;
  double t1296;
  double t1298;
  double t1303;
  double t1305;
  double t1308;
  double t1309;
  double t1318;
  double t1338;
  double t1347;
  double t1348;
  double t1368;
  double t1370;
  double t1373;
  double t1374;
  double t1397;
  double t1398;
  double t1404;
  double t1262;
  double t1268;
  double t1275;
  double t1279;
  double t1281;
  double t1286;
  double t1294;
  double t1337;
  double t1369;
  double t1406;
  double t1410;
  double t1421;
  double t1426;
  double t1428;
  double t1435;
  double t1449;
  double t1456;
  double t389;
  double t645;
  double t651;
  double t1478;
  double t1484;
  double t1486;
  double t1487;
  double t1272;
  double t1420;
  double t1460;
  double t1464;
  double t1497;
  double t1498;
  double t1499;
  double t1500;
  double t1503;
  double t1510;
  double t1517;
  double t1520;
  double t1525;
  double t1526;
  double t1528;
  double t1470;
  double t1488;
  double t1493;
  double t1524;
  double t1529;
  double t1533;
  double t1559;
  double t1563;
  double t1571;
  double t957;
  double t1046;
  double t1059;
  double t1495;
  double t1601;
  double t1688;
  double t1718;
  double t1760;
  double t1779;
  double t1849;
  double t1800;
  double t1948;
  double t1907;
  double t1881;
  double t1866;
  double t2059;
  double t2158;
  double t2160;
  double t2164;
  double t2170;
  double t2146;
  double t2150;
  double t2151;
  double t2152;
  double t2199;
  double t2201;
  double t2205;
  double t2206;
  double t2209;
  double t2212;
  double t2213;
  double t2228;
  double t2229;
  double t2230;
  double t2233;
  double t2236;
  double t2239;
  double t2240;
  t285 = Cos(var1[11]);
  t179 = Cos(var1[10]);
  t326 = -1. + t285;
  t298 = -1.*t285;
  t302 = 1. + t298;
  t322 = 1.6e-11*t302;
  t330 = 1.6e-11*t326;
  t337 = -1. + t322 + t330;
  t211 = -1.*t179;
  t268 = 1. + t211;
  t369 = 4.e-6*t326;
  t376 = -4.e-6*t285;
  t379 = t369 + t376;
  t522 = Sin(var1[10]);
  t515 = Cos(var1[9]);
  t463 = -1. + t179;
  t468 = 1.6e-11*t463;
  t469 = 1. + t468;
  t473 = t469*t337;
  t480 = 4.e-6*t268*t379;
  t485 = t473 + t480;
  t489 = Sin(var1[9]);
  t524 = 4.e-6*t337*t522;
  t525 = -1.*t379*t522;
  t527 = t524 + t525;
  t685 = Sin(var1[11]);
  t387 = Sin(var1[4]);
  t436 = Cos(var1[4]);
  t453 = Cos(var1[5]);
  t661 = -1.000000000016*t302;
  t669 = 1. + t661;
  t680 = 0.004352*t669;
  t686 = -0.9999910000159999*t685;
  t691 = t680 + t686;
  t699 = -1. + t322;
  t700 = 4.e-6*t699;
  t726 = 3.999964e-6*t302;
  t727 = -1.7408e-8*t685;
  t738 = t700 + t726 + t727;
  t759 = 0.999991*t285;
  t760 = 0.004352*t685;
  t781 = t330 + t759 + t760;
  t791 = -4.e-6*t522*t691;
  t796 = t469*t738;
  t798 = 4.e-6*t268*t781;
  t818 = 0. + t791 + t796 + t798;
  t827 = -1.000000000016*t268;
  t842 = 1. + t827;
  t847 = t842*t691;
  t862 = 4.e-6*t522*t738;
  t863 = -1.*t522*t781;
  t864 = 0. + t847 + t862 + t863;
  t623 = Sin(var1[5]);
  t915 = -1.7408e-8*t302;
  t916 = -3.999964e-6*t685;
  t922 = t915 + t916;
  t931 = 0.999991*t669;
  t936 = t931 + t760;
  t941 = -0.004352*t285;
  t944 = 0.999991*t685;
  t945 = t941 + t944;
  t960 = t469*t922;
  t961 = -4.e-6*t522*t936;
  t965 = 4.e-6*t268*t945;
  t968 = 0. + t960 + t961 + t965;
  t981 = 4.e-6*t522*t922;
  t982 = t842*t936;
  t991 = -1.*t522*t945;
  t994 = 0. + t981 + t982 + t991;
  t590 = t515*t485;
  t595 = t489*t527;
  t609 = t590 + t595;
  t505 = -1.*t485*t489;
  t529 = t515*t527;
  t530 = t505 + t529;
  t364 = 4.e-6*t268*t337;
  t381 = t179*t379;
  t383 = t364 + t381;
  t534 = t453*t530;
  t631 = -1.*t609*t623;
  t638 = t534 + t631;
  t1098 = Cos(var1[3]);
  t884 = t515*t818;
  t885 = t489*t864;
  t887 = 0. + t884 + t885;
  t820 = -1.*t489*t818;
  t868 = t515*t864;
  t877 = 0. + t820 + t868;
  t1150 = Sin(var1[3]);
  t692 = t522*t691;
  t741 = 4.e-6*t268*t738;
  t783 = t179*t781;
  t786 = 0. + t692 + t741 + t783;
  t878 = t453*t877;
  t888 = -1.*t887*t623;
  t889 = 0. + t878 + t888;
  t1019 = t515*t968;
  t1025 = t489*t994;
  t1040 = 0. + t1019 + t1025;
  t972 = -1.*t489*t968;
  t1011 = t515*t994;
  t1012 = 0. + t972 + t1011;
  t923 = 4.e-6*t268*t922;
  t940 = t522*t936;
  t946 = t179*t945;
  t955 = 0. + t923 + t940 + t946;
  t1014 = t453*t1012;
  t1041 = -1.*t1040*t623;
  t1045 = 0. + t1014 + t1041;
  t1117 = t453*t609;
  t1129 = t530*t623;
  t1130 = t1117 + t1129;
  t1151 = t383*t436;
  t1152 = -1.*t387*t638;
  t1153 = t1151 + t1152;
  t1157 = t453*t887;
  t1162 = t877*t623;
  t1163 = 0. + t1157 + t1162;
  t1165 = t436*t786;
  t1166 = -1.*t387*t889;
  t1167 = 0. + t1165 + t1166;
  t1181 = t453*t1040;
  t1182 = t1012*t623;
  t1183 = 0. + t1181 + t1182;
  t1186 = t436*t955;
  t1192 = -1.*t387*t1045;
  t1193 = 0. + t1186 + t1192;
  t787 = t786*t387;
  t890 = t436*t889;
  t901 = 0. + t787 + t890;
  t1296 = -1.26e-8*var1[11];
  t1298 = 1. + t330;
  t1303 = -0.14871*t1298;
  t1305 = -1.64779999997447e-7*t302;
  t1308 = -1.59556e-7*t326;
  t1309 = -1.199987999968e-6*t685;
  t1318 = t1296 + t1303 + t1305 + t1308 + t1309;
  t1338 = 0.803147*t669;
  t1347 = 0.50315000001605*t302;
  t1348 = 0.00130540515936178*t685;
  t1368 = t1338 + t1347 + t1348;
  t1370 = -5.04e-14*var1[11];
  t1373 = -0.03988959484*t302;
  t1374 = 6.38224e-13*t326;
  t1397 = -0.041195*t285;
  t1398 = 0.299996999992*t685;
  t1404 = t1370 + t1373 + t1374 + t1397 + t1398;
  t1262 = -1.*t515;
  t1268 = 1. + t1262;
  t1275 = -0.15121*t489;
  t1279 = -1.2484e-7*var1[10];
  t1281 = 2.479936e-18*t268;
  t1286 = -1.54996e-7*t463;
  t1294 = 1.124840000016e-6*t522;
  t1337 = t469*t1318;
  t1369 = -4.e-6*t522*t1368;
  t1406 = 4.e-6*t268*t1404;
  t1410 = t1279 + t1281 + t1286 + t1294 + t1337 + t1369 + t1406;
  t1421 = 0.281210000008499*t268;
  t1426 = -0.03874900000062*t522;
  t1428 = 4.e-6*t522*t1318;
  t1435 = t842*t1368;
  t1449 = -1.*t522*t1404;
  t1456 = t1421 + t1426 + t1428 + t1435 + t1449;
  t389 = t383*t387;
  t645 = t436*t638;
  t651 = t389 + t645;
  t1478 = 0.15121*t1268;
  t1484 = -1.*t489*t1410;
  t1486 = t515*t1456;
  t1487 = t1478 + t1275 + t1484 + t1486;
  t1272 = -0.15121*t1268;
  t1420 = t515*t1410;
  t1460 = t489*t1456;
  t1464 = t1272 + t1275 + t1420 + t1460;
  t1497 = -4.9936e-13*var1[10];
  t1498 = -0.038749*t268;
  t1499 = 6.19984e-13*t463;
  t1500 = -0.281210000004*t522;
  t1503 = 4.e-6*t268*t1318;
  t1510 = t522*t1368;
  t1517 = t179*t1404;
  t1520 = 0. + t1497 + t1498 + t1499 + t1500 + t1503 + t1510 + t1517;
  t1525 = t453*t1487;
  t1526 = -1.*t1464*t623;
  t1528 = 0. + t1525 + t1526;
  t1470 = t453*t1464;
  t1488 = t1487*t623;
  t1493 = 0. + t1470 + t1488;
  t1524 = t1520*t387;
  t1529 = t436*t1528;
  t1533 = 0. + t1524 + t1529;
  t1559 = t436*t1520;
  t1563 = -1.*t387*t1528;
  t1571 = 0. + t1559 + t1563;
  t957 = t955*t387;
  t1046 = t436*t1045;
  t1059 = 0. + t957 + t1046;
  t1495 = t1130*t1493;
  t1601 = -1.*t1163*t1493;
  t1688 = t1163*t1493;
  t1718 = -1.*t1493*t1183;
  t1760 = -1.*t1130*t1493;
  t1779 = t1493*t1183;
  t1849 = -1.*t786*t1520;
  t1800 = t383*t1520;
  t1948 = t1520*t955;
  t1907 = -1.*t383*t1520;
  t1881 = -1.*t1520*t955;
  t1866 = t786*t1520;
  t2059 = t1497 + t1498 + t1499 + t1500 + t1503 + t1510 + t1517;
  t2158 = t1318*t738;
  t2160 = t691*t1368;
  t2164 = t781*t1404;
  t2170 = t2158 + t2160 + t2164;
  t2146 = -1.*t922*t1318;
  t2150 = -1.*t1368*t936;
  t2151 = -1.*t1404*t945;
  t2152 = t2146 + t2150 + t2151;
  t2199 = t922*t1318;
  t2201 = t1368*t936;
  t2205 = t1404*t945;
  t2206 = t2199 + t2201 + t2205;
  t2209 = -1.*t337*t1318;
  t2212 = -1.*t379*t1404;
  t2213 = t2209 + t2212;
  t2228 = -1.*t1318*t738;
  t2229 = -1.*t691*t1368;
  t2230 = -1.*t781*t1404;
  t2233 = t2228 + t2229 + t2230;
  t2236 = t337*t1318;
  t2239 = t379*t1404;
  t2240 = t2236 + t2239;
  p_output1[0]=t1059*var2[0] + t901*var2[1] + t651*var2[2];
  p_output1[1]=(0. + t1098*t1183 - 1.*t1150*t1193)*var2[0] + (0. + t1098*t1163 - 1.*t1150*t1167)*var2[1] + (t1098*t1130 - 1.*t1150*t1153)*var2[2];
  p_output1[2]=(0. + t1150*t1183 + t1098*t1193)*var2[0] + (0. + t1150*t1163 + t1098*t1167)*var2[1] + (t1130*t1150 + t1098*t1153)*var2[2];
  p_output1[3]=((t1495 + t1153*t1571 + t1533*t651)*t901 + t651*(-1.*t1167*t1571 + t1601 - 1.*t1533*t901))*var2[0] + ((t1059*t1533 + t1193*t1571 + t1779)*t651 + t1059*(-1.*t1153*t1571 + t1760 - 1.*t1533*t651))*var2[1] + ((-1.*t1059*t1533 - 1.*t1193*t1571 + t1718)*t901 + t1059*(t1167*t1571 + t1688 + t1533*t901))*var2[2];
  p_output1[4]=(t1163*(t1495 + t1800 + t1528*t638) + t1130*(t1601 + t1849 - 1.*t1528*t889))*var2[0] + (t1130*(t1045*t1528 + t1779 + t1948) + t1183*(t1760 + t1907 - 1.*t1528*t638))*var2[1] + (t1163*(-1.*t1045*t1528 + t1718 + t1881) + t1183*(t1688 + t1866 + t1528*t889))*var2[2];
  p_output1[5]=((t1800 + t1487*t530 + t1464*t609)*t786 + t383*(t1849 - 1.*t1487*t877 - 1.*t1464*t887))*var2[0] + ((t1040*t1464 + t1012*t1487 + t1948)*t383 + (t1907 - 1.*t1487*t530 - 1.*t1464*t609)*t955)*var2[1] + ((-1.*t1040*t1464 - 1.*t1012*t1487 + t1881)*t786 + (t1866 + t1487*t877 + t1464*t887)*t955)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=((t2059*t383 + t1410*t485 + t1456*t527)*t786 + t383*(-1.*t2059*t786 - 1.*t1410*t818 - 1.*t1456*t864) - 0.15121*t968 - 0.15121*t994)*var2[0] + (-0.15121*t818 - 0.15121*t864 + (-1.*t2059*t383 - 1.*t1410*t485 - 1.*t1456*t527)*t955 + t383*(t2059*t955 + t1410*t968 + t1456*t994))*var2[1] + (-0.15121*t485 - 0.15121*t527 + (t2059*t786 + t1410*t818 + t1456*t864)*t955 + t786*(-1.*t2059*t955 - 1.*t1410*t968 - 1.*t1456*t994))*var2[2];
  p_output1[10]=(-1.*t2233*t337 - 1.*t2240*t738 + 4.e-6*(-1.*t2233*t379 - 1.*t2240*t781) + 1.e-6*t922 - 0.038749*t936 - 0.28121*t945)*var2[0] + (-1.*t2206*t337 - 0.038749*t691 + 1.e-6*t738 - 0.28121*t781 - 1.*t2213*t922 + 4.e-6*(-1.*t2206*t379 - 1.*t2213*t945))*var2[1] + (1.e-6*t337 - 0.28121*t379 - 1.*t2152*t738 - 1.*t2170*t922 + 4.e-6*(-1.*t2152*t781 - 1.*t2170*t945))*var2[2];
  p_output1[11]=-1.9353204325022392e-7*var2[0] + 0.29999998115510645*var2[1] + 1.1914820871506078e-8*var2[2];
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

#include "fFrFoot_vec_DiagonalStance1.hh"

namespace DiagonalStance1
{

void fFrFoot_vec_DiagonalStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
