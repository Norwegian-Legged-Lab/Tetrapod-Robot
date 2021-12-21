/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:35 GMT+01:00
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
  double t106;
  double t120;
  double t124;
  double t140;
  double t41;
  double t45;
  double t48;
  double t63;
  double t67;
  double t80;
  double t185;
  double t198;
  double t44;
  double t245;
  double t289;
  double t136;
  double t424;
  double t430;
  double t442;
  double t457;
  double t229;
  double t354;
  double t338;
  double t346;
  double t348;
  double t391;
  double t400;
  double t414;
  double t473;
  double t199;
  double t508;
  double t151;
  double t454;
  double t593;
  double t597;
  double t666;
  double t317;
  double t524;
  double t293;
  double t735;
  double t517;
  double t523;
  double t527;
  double t528;
  double t546;
  double t549;
  double t550;
  double t567;
  double t750;
  double t656;
  double t657;
  double t661;
  double t667;
  double t676;
  double t690;
  double t694;
  double t711;
  double t793;
  double t795;
  double t796;
  double t842;
  double t846;
  double t849;
  double t850;
  double t854;
  double t583;
  double t879;
  double t601;
  double t921;
  double t868;
  double t463;
  double t102;
  double t125;
  double t161;
  double t171;
  double t200;
  double t224;
  double t228;
  double t90;
  double t98;
  double t1063;
  double t239;
  double t242;
  double t1069;
  double t272;
  double t273;
  double t296;
  double t312;
  double t320;
  double t324;
  double t328;
  double t1068;
  double t1074;
  double t1086;
  double t1091;
  double t1092;
  double t1102;
  double t352;
  double t353;
  double t356;
  double t360;
  double t372;
  double t386;
  double t390;
  double t420;
  double t443;
  double t464;
  double t466;
  double t487;
  double t490;
  double t499;
  double t1122;
  double t1125;
  double t1126;
  double t1132;
  double t1134;
  double t1135;
  double t575;
  double t580;
  double t587;
  double t589;
  double t603;
  double t642;
  double t652;
  double t723;
  double t726;
  double t745;
  double t749;
  double t761;
  double t773;
  double t785;
  double t872;
  double t1139;
  double t1142;
  double t1148;
  double t1149;
  double t882;
  double t1152;
  double t1153;
  double t1155;
  double t1158;
  double t898;
  double t904;
  double t1164;
  double t1169;
  double t1172;
  double t1177;
  double t927;
  double t932;
  double t950;
  double t961;
  double t994;
  double t997;
  double t1011;
  double t1027;
  double t1269;
  double t1271;
  double t1274;
  double t1307;
  double t1311;
  double t1318;
  double t1326;
  double t1334;
  double t1335;
  double t1343;
  double t1350;
  double t1365;
  double t1374;
  double t1384;
  double t1391;
  double t1398;
  double t1406;
  double t1407;
  double t1419;
  double t1422;
  double t1425;
  double t1453;
  double t1456;
  double t1465;
  t106 = Cos(var1[16]);
  t120 = -1.*t106;
  t124 = 1. + t120;
  t140 = Sin(var1[16]);
  t41 = Cos(var1[4]);
  t45 = Cos(var1[15]);
  t48 = -1.*t45;
  t63 = 1. + t48;
  t67 = -0.15121*t63;
  t80 = Sin(var1[15]);
  t185 = -1. + t106;
  t198 = 4.e-6*t185;
  t44 = Cos(var1[5]);
  t245 = Sin(var1[5]);
  t289 = 7.e-6*t124;
  t136 = 2.8e-11*t124;
  t424 = Cos(var1[17]);
  t430 = -1.*t424;
  t442 = 1. + t430;
  t457 = Sin(var1[17]);
  t229 = Sin(var1[4]);
  t354 = -4.e-6*t140;
  t338 = -1.*t41*t44*t80;
  t346 = -1.*t45*t41*t245;
  t348 = t338 + t346;
  t391 = t45*t41*t44;
  t400 = -1.*t41*t80*t245;
  t414 = t391 + t400;
  t473 = 2.8e-11*t442;
  t199 = -7.e-6*t140;
  t508 = -2.8e-11*t124;
  t151 = -1.*t140;
  t454 = 7.e-6*t442;
  t593 = -1. + t424;
  t597 = 4.e-6*t593;
  t666 = 4.e-6*t124;
  t317 = 7.e-6*t140;
  t524 = -7.e-6*t124;
  t293 = 4.e-6*t140;
  t735 = 4.e-6*t457;
  t517 = t508 + t140;
  t523 = t517*t229;
  t527 = t524 + t354;
  t528 = t527*t348;
  t546 = -1.000000000016*t124;
  t549 = 1. + t546;
  t550 = t549*t414;
  t567 = t523 + t528 + t550;
  t750 = 7.e-6*t457;
  t656 = -1.000000000049*t124;
  t657 = 1. + t656;
  t661 = t657*t229;
  t667 = t666 + t199;
  t676 = t667*t348;
  t690 = t508 + t151;
  t694 = t690*t414;
  t711 = t661 + t676 + t694;
  t793 = t666 + t317;
  t795 = t793*t229;
  t796 = -6.5e-11*t124;
  t842 = 1. + t796;
  t846 = t842*t348;
  t849 = t524 + t293;
  t850 = t849*t414;
  t854 = t795 + t846 + t850;
  t583 = -1.*t457;
  t879 = 4.e-6*t442;
  t601 = -7.e-6*t457;
  t921 = -2.8e-11*t442;
  t868 = -7.e-6*t442;
  t463 = -4.e-6*t457;
  t102 = 1.5843479999999999e-12*var1[16];
  t125 = -0.03874900000889869*t124;
  t161 = t136 + t151;
  t171 = -0.281211000004*t161;
  t200 = t198 + t199;
  t224 = -1.8134809999999998e-6*t200;
  t228 = t102 + t125 + t171 + t224;
  t90 = -0.15121*t80;
  t98 = t67 + t90;
  t1063 = Sin(var1[3]);
  t239 = 0.15121*t80;
  t242 = t67 + t239;
  t1069 = Cos(var1[3]);
  t272 = 3.9608699999999997e-7*var1[16];
  t273 = -1.1787626499999999e-16*t124;
  t296 = t289 + t293;
  t312 = -0.281211000004*t296;
  t320 = t198 + t317;
  t324 = -0.038749000006999997*t320;
  t328 = t272 + t273 + t312 + t324;
  t1068 = t44*t1063*t229;
  t1074 = t1069*t245;
  t1086 = t1068 + t1074;
  t1091 = t1069*t44;
  t1092 = -1.*t1063*t229*t245;
  t1102 = t1091 + t1092;
  t352 = -2.7726089999999997e-12*var1[16];
  t353 = -0.2812110000084994*t124;
  t356 = t289 + t354;
  t360 = -1.8134809999999998e-6*t356;
  t372 = t136 + t140;
  t386 = -0.038749000006999997*t372;
  t390 = t352 + t353 + t360 + t386;
  t420 = -1.9784030000000015e-12*var1[17];
  t443 = -0.5031510000160505*t442;
  t464 = t454 + t463;
  t466 = -3.367757e-6*t464;
  t487 = t473 + t457;
  t490 = -0.038575000014*t487;
  t499 = t420 + t443 + t466 + t490;
  t1122 = -1.*t80*t1086;
  t1125 = t45*t1102;
  t1126 = t1122 + t1125;
  t1132 = t45*t1086;
  t1134 = t80*t1102;
  t1135 = t1132 + t1134;
  t575 = 1.1305160000000008e-12*var1[17];
  t580 = -0.03857500001589017*t442;
  t587 = t473 + t583;
  t589 = -0.5031510000080001*t587;
  t603 = t597 + t601;
  t642 = -3.367757e-6*t603;
  t652 = t575 + t580 + t589 + t642;
  t723 = 2.826290000000002e-7*var1[17];
  t726 = -2.18904205e-16*t442;
  t745 = t454 + t735;
  t749 = -0.5031510000080001*t745;
  t761 = t597 + t750;
  t773 = -0.038575000014*t761;
  t785 = t723 + t726 + t749 + t773;
  t872 = t868 + t735;
  t1139 = -1.*t41*t517*t1063;
  t1142 = t527*t1126;
  t1148 = t549*t1135;
  t1149 = t1139 + t1142 + t1148;
  t882 = t879 + t750;
  t1152 = -1.*t657*t41*t1063;
  t1153 = t667*t1126;
  t1155 = t690*t1135;
  t1158 = t1152 + t1153 + t1155;
  t898 = -6.5e-11*t442;
  t904 = 1. + t898;
  t1164 = -1.*t41*t793*t1063;
  t1169 = t842*t1126;
  t1172 = t849*t1135;
  t1177 = t1164 + t1169 + t1172;
  t927 = t921 + t583;
  t932 = -1.000000000049*t442;
  t950 = 1. + t932;
  t961 = t879 + t601;
  t994 = -1.000000000016*t442;
  t997 = 1. + t994;
  t1011 = t921 + t457;
  t1027 = t868 + t463;
  t1269 = -1.*t1069*t44*t229;
  t1271 = t1063*t245;
  t1274 = t1269 + t1271;
  t1307 = t44*t1063;
  t1311 = t1069*t229*t245;
  t1318 = t1307 + t1311;
  t1326 = -1.*t80*t1274;
  t1334 = t45*t1318;
  t1335 = t1326 + t1334;
  t1343 = t45*t1274;
  t1350 = t80*t1318;
  t1365 = t1343 + t1350;
  t1374 = t1069*t41*t517;
  t1384 = t527*t1335;
  t1391 = t549*t1365;
  t1398 = t1374 + t1384 + t1391;
  t1406 = t657*t1069*t41;
  t1407 = t667*t1335;
  t1419 = t690*t1365;
  t1422 = t1406 + t1407 + t1419;
  t1425 = t1069*t41*t793;
  t1453 = t842*t1335;
  t1456 = t849*t1365;
  t1465 = t1425 + t1453 + t1456;
  p_output1[0]=t228*t229 + t328*t348 - 1.*t242*t245*t41 + t390*t414 + t499*t567 + t652*t711 + t785*t854 - 0.148715*(t567*t872 + t711*t882 + t854*t904) - 0.038576*(t567*t927 + t711*t950 + t854*t961) + t41*t44*t98 - 0.80315*(t1011*t711 + t1027*t854 + t567*t997) + var1[0] - 1.*var2[0];
  p_output1[1]=t1102*t242 + t1126*t328 + t1135*t390 - 1.*t1063*t228*t41 + t1149*t499 + t1158*t652 + t1177*t785 - 0.148715*(t1149*t872 + t1158*t882 + t1177*t904) - 0.038576*(t1149*t927 + t1158*t950 + t1177*t961) + t1086*t98 - 0.80315*(t1011*t1158 + t1027*t1177 + t1149*t997) + var1[1] - 1.*var2[1];
  p_output1[2]=t1318*t242 + t1335*t328 + t1365*t390 + t1069*t228*t41 + t1398*t499 + t1422*t652 + t1465*t785 - 0.148715*(t1398*t872 + t1422*t882 + t1465*t904) - 0.038576*(t1398*t927 + t1422*t950 + t1465*t961) + t1274*t98 - 0.80315*(t1011*t1422 + t1027*t1465 + t1398*t997) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void h_RrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
