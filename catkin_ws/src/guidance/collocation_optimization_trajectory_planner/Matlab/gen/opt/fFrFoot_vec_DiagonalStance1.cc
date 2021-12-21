/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:09:02 GMT+01:00
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
  double t94;
  double t69;
  double t120;
  double t98;
  double t106;
  double t113;
  double t143;
  double t144;
  double t86;
  double t89;
  double t147;
  double t149;
  double t154;
  double t251;
  double t244;
  double t193;
  double t195;
  double t197;
  double t201;
  double t202;
  double t205;
  double t234;
  double t252;
  double t264;
  double t273;
  double t418;
  double t180;
  double t186;
  double t188;
  double t411;
  double t414;
  double t417;
  double t429;
  double t448;
  double t450;
  double t455;
  double t456;
  double t458;
  double t482;
  double t551;
  double t553;
  double t562;
  double t594;
  double t628;
  double t632;
  double t634;
  double t652;
  double t669;
  double t672;
  double t683;
  double t693;
  double t694;
  double t346;
  double t781;
  double t785;
  double t788;
  double t800;
  double t802;
  double t805;
  double t810;
  double t816;
  double t825;
  double t830;
  double t836;
  double t838;
  double t844;
  double t852;
  double t854;
  double t855;
  double t298;
  double t330;
  double t344;
  double t238;
  double t293;
  double t294;
  double t146;
  double t166;
  double t172;
  double t296;
  double t369;
  double t394;
  double t889;
  double t719;
  double t726;
  double t743;
  double t645;
  double t695;
  double t696;
  double t903;
  double t449;
  double t512;
  double t579;
  double t586;
  double t711;
  double t747;
  double t752;
  double t867;
  double t869;
  double t870;
  double t839;
  double t857;
  double t863;
  double t797;
  double t804;
  double t817;
  double t818;
  double t864;
  double t873;
  double t875;
  double t894;
  double t895;
  double t900;
  double t905;
  double t909;
  double t910;
  double t938;
  double t940;
  double t941;
  double t946;
  double t948;
  double t950;
  double t968;
  double t969;
  double t970;
  double t978;
  double t981;
  double t984;
  double t587;
  double t773;
  double t774;
  double t1094;
  double t1099;
  double t1102;
  double t1103;
  double t1104;
  double t1116;
  double t1117;
  double t1135;
  double t1144;
  double t1148;
  double t1149;
  double t1154;
  double t1164;
  double t1166;
  double t1170;
  double t1176;
  double t1177;
  double t1068;
  double t1069;
  double t1080;
  double t1082;
  double t1084;
  double t1089;
  double t1090;
  double t1126;
  double t1151;
  double t1179;
  double t1181;
  double t1224;
  double t1225;
  double t1227;
  double t1232;
  double t1241;
  double t1258;
  double t185;
  double t396;
  double t402;
  double t1295;
  double t1306;
  double t1307;
  double t1308;
  double t1073;
  double t1184;
  double t1287;
  double t1289;
  double t1314;
  double t1315;
  double t1318;
  double t1322;
  double t1330;
  double t1335;
  double t1336;
  double t1341;
  double t1346;
  double t1347;
  double t1349;
  double t1290;
  double t1309;
  double t1311;
  double t1343;
  double t1365;
  double t1371;
  double t1382;
  double t1394;
  double t1398;
  double t823;
  double t876;
  double t880;
  double t1313;
  double t1421;
  double t1463;
  double t1478;
  double t1514;
  double t1548;
  double t1598;
  double t1577;
  double t1657;
  double t1647;
  double t1626;
  double t1614;
  double t1899;
  double t2207;
  double t2208;
  double t2212;
  double t2213;
  double t2181;
  double t2188;
  double t2189;
  double t2200;
  double t2266;
  double t2270;
  double t2275;
  double t2282;
  double t2291;
  double t2292;
  double t2295;
  double t2339;
  double t2341;
  double t2349;
  double t2352;
  double t2362;
  double t2367;
  double t2380;
  t94 = Cos(var1[11]);
  t69 = Cos(var1[10]);
  t120 = -1. + t94;
  t98 = -1.*t94;
  t106 = 1. + t98;
  t113 = 1.6e-11*t106;
  t143 = 1.6e-11*t120;
  t144 = -1. + t113 + t143;
  t86 = -1.*t69;
  t89 = 1. + t86;
  t147 = 4.e-6*t120;
  t149 = -4.e-6*t94;
  t154 = t147 + t149;
  t251 = Sin(var1[10]);
  t244 = Cos(var1[9]);
  t193 = -1. + t69;
  t195 = 1.6e-11*t193;
  t197 = 1. + t195;
  t201 = t197*t144;
  t202 = 4.e-6*t89*t154;
  t205 = t201 + t202;
  t234 = Sin(var1[9]);
  t252 = 4.e-6*t144*t251;
  t264 = -1.*t154*t251;
  t273 = t252 + t264;
  t418 = Sin(var1[11]);
  t180 = Sin(var1[4]);
  t186 = Cos(var1[4]);
  t188 = Cos(var1[5]);
  t411 = -1.000000000016*t106;
  t414 = 1. + t411;
  t417 = 0.004352*t414;
  t429 = -0.9999910000159999*t418;
  t448 = t417 + t429;
  t450 = -1. + t113;
  t455 = 4.e-6*t450;
  t456 = 3.999964e-6*t106;
  t458 = -1.7408e-8*t418;
  t482 = t455 + t456 + t458;
  t551 = 0.999991*t94;
  t553 = 0.004352*t418;
  t562 = t143 + t551 + t553;
  t594 = -4.e-6*t251*t448;
  t628 = t197*t482;
  t632 = 4.e-6*t89*t562;
  t634 = 0. + t594 + t628 + t632;
  t652 = -1.000000000016*t89;
  t669 = 1. + t652;
  t672 = t669*t448;
  t683 = 4.e-6*t251*t482;
  t693 = -1.*t251*t562;
  t694 = 0. + t672 + t683 + t693;
  t346 = Sin(var1[5]);
  t781 = -1.7408e-8*t106;
  t785 = -3.999964e-6*t418;
  t788 = t781 + t785;
  t800 = 0.999991*t414;
  t802 = t800 + t553;
  t805 = -0.004352*t94;
  t810 = 0.999991*t418;
  t816 = t805 + t810;
  t825 = t197*t788;
  t830 = -4.e-6*t251*t802;
  t836 = 4.e-6*t89*t816;
  t838 = 0. + t825 + t830 + t836;
  t844 = 4.e-6*t251*t788;
  t852 = t669*t802;
  t854 = -1.*t251*t816;
  t855 = 0. + t844 + t852 + t854;
  t298 = t244*t205;
  t330 = t234*t273;
  t344 = t298 + t330;
  t238 = -1.*t205*t234;
  t293 = t244*t273;
  t294 = t238 + t293;
  t146 = 4.e-6*t89*t144;
  t166 = t69*t154;
  t172 = t146 + t166;
  t296 = t188*t294;
  t369 = -1.*t344*t346;
  t394 = t296 + t369;
  t889 = Cos(var1[3]);
  t719 = t244*t634;
  t726 = t234*t694;
  t743 = 0. + t719 + t726;
  t645 = -1.*t234*t634;
  t695 = t244*t694;
  t696 = 0. + t645 + t695;
  t903 = Sin(var1[3]);
  t449 = t251*t448;
  t512 = 4.e-6*t89*t482;
  t579 = t69*t562;
  t586 = 0. + t449 + t512 + t579;
  t711 = t188*t696;
  t747 = -1.*t743*t346;
  t752 = 0. + t711 + t747;
  t867 = t244*t838;
  t869 = t234*t855;
  t870 = 0. + t867 + t869;
  t839 = -1.*t234*t838;
  t857 = t244*t855;
  t863 = 0. + t839 + t857;
  t797 = 4.e-6*t89*t788;
  t804 = t251*t802;
  t817 = t69*t816;
  t818 = 0. + t797 + t804 + t817;
  t864 = t188*t863;
  t873 = -1.*t870*t346;
  t875 = 0. + t864 + t873;
  t894 = t188*t344;
  t895 = t294*t346;
  t900 = t894 + t895;
  t905 = t172*t186;
  t909 = -1.*t180*t394;
  t910 = t905 + t909;
  t938 = t188*t743;
  t940 = t696*t346;
  t941 = 0. + t938 + t940;
  t946 = t186*t586;
  t948 = -1.*t180*t752;
  t950 = 0. + t946 + t948;
  t968 = t188*t870;
  t969 = t863*t346;
  t970 = 0. + t968 + t969;
  t978 = t186*t818;
  t981 = -1.*t180*t875;
  t984 = 0. + t978 + t981;
  t587 = t586*t180;
  t773 = t186*t752;
  t774 = 0. + t587 + t773;
  t1094 = -1.26e-8*var1[11];
  t1099 = 1. + t143;
  t1102 = -0.14871*t1099;
  t1103 = -1.64779999997447e-7*t106;
  t1104 = -1.59556e-7*t120;
  t1116 = -1.199987999968e-6*t418;
  t1117 = t1094 + t1102 + t1103 + t1104 + t1116;
  t1135 = 0.803147*t414;
  t1144 = 0.50315000001605*t106;
  t1148 = 0.00130540515936178*t418;
  t1149 = t1135 + t1144 + t1148;
  t1154 = -5.04e-14*var1[11];
  t1164 = -0.03988959484*t106;
  t1166 = 6.38224e-13*t120;
  t1170 = -0.041195*t94;
  t1176 = 0.299996999992*t418;
  t1177 = t1154 + t1164 + t1166 + t1170 + t1176;
  t1068 = -1.*t244;
  t1069 = 1. + t1068;
  t1080 = -0.15121*t234;
  t1082 = -1.2484e-7*var1[10];
  t1084 = 2.479936e-18*t89;
  t1089 = -1.54996e-7*t193;
  t1090 = 1.124840000016e-6*t251;
  t1126 = t197*t1117;
  t1151 = -4.e-6*t251*t1149;
  t1179 = 4.e-6*t89*t1177;
  t1181 = t1082 + t1084 + t1089 + t1090 + t1126 + t1151 + t1179;
  t1224 = 0.281210000008499*t89;
  t1225 = -0.03874900000062*t251;
  t1227 = 4.e-6*t251*t1117;
  t1232 = t669*t1149;
  t1241 = -1.*t251*t1177;
  t1258 = t1224 + t1225 + t1227 + t1232 + t1241;
  t185 = t172*t180;
  t396 = t186*t394;
  t402 = t185 + t396;
  t1295 = 0.15121*t1069;
  t1306 = -1.*t234*t1181;
  t1307 = t244*t1258;
  t1308 = t1295 + t1080 + t1306 + t1307;
  t1073 = -0.15121*t1069;
  t1184 = t244*t1181;
  t1287 = t234*t1258;
  t1289 = t1073 + t1080 + t1184 + t1287;
  t1314 = -4.9936e-13*var1[10];
  t1315 = -0.038749*t89;
  t1318 = 6.19984e-13*t193;
  t1322 = -0.281210000004*t251;
  t1330 = 4.e-6*t89*t1117;
  t1335 = t251*t1149;
  t1336 = t69*t1177;
  t1341 = 0. + t1314 + t1315 + t1318 + t1322 + t1330 + t1335 + t1336;
  t1346 = t188*t1308;
  t1347 = -1.*t1289*t346;
  t1349 = 0. + t1346 + t1347;
  t1290 = t188*t1289;
  t1309 = t1308*t346;
  t1311 = 0. + t1290 + t1309;
  t1343 = t1341*t180;
  t1365 = t186*t1349;
  t1371 = 0. + t1343 + t1365;
  t1382 = t186*t1341;
  t1394 = -1.*t180*t1349;
  t1398 = 0. + t1382 + t1394;
  t823 = t818*t180;
  t876 = t186*t875;
  t880 = 0. + t823 + t876;
  t1313 = t900*t1311;
  t1421 = -1.*t941*t1311;
  t1463 = t941*t1311;
  t1478 = -1.*t1311*t970;
  t1514 = -1.*t900*t1311;
  t1548 = t1311*t970;
  t1598 = -1.*t586*t1341;
  t1577 = t172*t1341;
  t1657 = t1341*t818;
  t1647 = -1.*t172*t1341;
  t1626 = -1.*t1341*t818;
  t1614 = t586*t1341;
  t1899 = t1314 + t1315 + t1318 + t1322 + t1330 + t1335 + t1336;
  t2207 = t1117*t482;
  t2208 = t448*t1149;
  t2212 = t562*t1177;
  t2213 = t2207 + t2208 + t2212;
  t2181 = -1.*t788*t1117;
  t2188 = -1.*t1149*t802;
  t2189 = -1.*t1177*t816;
  t2200 = t2181 + t2188 + t2189;
  t2266 = t788*t1117;
  t2270 = t1149*t802;
  t2275 = t1177*t816;
  t2282 = t2266 + t2270 + t2275;
  t2291 = -1.*t144*t1117;
  t2292 = -1.*t154*t1177;
  t2295 = t2291 + t2292;
  t2339 = -1.*t1117*t482;
  t2341 = -1.*t448*t1149;
  t2349 = -1.*t562*t1177;
  t2352 = t2339 + t2341 + t2349;
  t2362 = t144*t1117;
  t2367 = t154*t1177;
  t2380 = t2362 + t2367;
  p_output1[0]=t880*var2[0] + t774*var2[1] + t402*var2[2];
  p_output1[1]=(0. + t889*t970 - 1.*t903*t984)*var2[0] + (0. + t889*t941 - 1.*t903*t950)*var2[1] + (t889*t900 - 1.*t903*t910)*var2[2];
  p_output1[2]=(0. + t903*t970 + t889*t984)*var2[0] + (0. + t903*t941 + t889*t950)*var2[1] + (t900*t903 + t889*t910)*var2[2];
  p_output1[3]=(t774*(t1313 + t1371*t402 + t1398*t910) + t402*(t1421 - 1.*t1371*t774 - 1.*t1398*t950))*var2[0] + (t880*(t1514 - 1.*t1371*t402 - 1.*t1398*t910) + t402*(t1548 + t1371*t880 + t1398*t984))*var2[1] + (t880*(t1463 + t1371*t774 + t1398*t950) + t774*(t1478 - 1.*t1371*t880 - 1.*t1398*t984))*var2[2];
  p_output1[4]=((t1421 + t1598 - 1.*t1349*t752)*t900 + (t1313 + t1577 + t1349*t394)*t941)*var2[0] + ((t1548 + t1657 + t1349*t875)*t900 + (t1514 + t1647 - 1.*t1349*t394)*t970)*var2[1] + ((t1478 + t1626 - 1.*t1349*t875)*t941 + (t1463 + t1614 + t1349*t752)*t970)*var2[2];
  p_output1[5]=((t1577 + t1308*t294 + t1289*t344)*t586 + t172*(t1598 - 1.*t1308*t696 - 1.*t1289*t743))*var2[0] + ((t1647 - 1.*t1308*t294 - 1.*t1289*t344)*t818 + t172*(t1657 + t1308*t863 + t1289*t870))*var2[1] + ((t1614 + t1308*t696 + t1289*t743)*t818 + t586*(t1626 - 1.*t1308*t863 - 1.*t1289*t870))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=((t172*t1899 + t1181*t205 + t1258*t273)*t586 + t172*(-1.*t1899*t586 - 1.*t1181*t634 - 1.*t1258*t694) - 0.15121*t838 - 0.15121*t855)*var2[0] + (-0.15121*t634 - 0.15121*t694 + (-1.*t172*t1899 - 1.*t1181*t205 - 1.*t1258*t273)*t818 + t172*(t1899*t818 + t1181*t838 + t1258*t855))*var2[1] + (-0.15121*t205 - 0.15121*t273 + (t1899*t586 + t1181*t634 + t1258*t694)*t818 + t586*(-1.*t1899*t818 - 1.*t1181*t838 - 1.*t1258*t855))*var2[2];
  p_output1[10]=(-1.*t144*t2352 - 1.*t2380*t482 + 4.e-6*(-1.*t154*t2352 - 1.*t2380*t562) + 1.e-6*t788 - 0.038749*t802 - 0.28121*t816)*var2[0] + (-1.*t144*t2282 - 0.038749*t448 + 1.e-6*t482 - 0.28121*t562 - 1.*t2295*t788 + 4.e-6*(-1.*t154*t2282 - 1.*t2295*t816))*var2[1] + (1.e-6*t144 - 0.28121*t154 - 1.*t2200*t482 - 1.*t2213*t788 + 4.e-6*(-1.*t2200*t562 - 1.*t2213*t816))*var2[2];
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
