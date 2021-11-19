/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:30:03 GMT+01:00
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
  double t243;
  double t147;
  double t317;
  double t279;
  double t289;
  double t316;
  double t340;
  double t355;
  double t148;
  double t242;
  double t372;
  double t397;
  double t407;
  double t571;
  double t568;
  double t488;
  double t495;
  double t516;
  double t518;
  double t528;
  double t529;
  double t546;
  double t583;
  double t584;
  double t591;
  double t697;
  double t446;
  double t468;
  double t469;
  double t665;
  double t680;
  double t687;
  double t700;
  double t711;
  double t717;
  double t720;
  double t739;
  double t748;
  double t758;
  double t765;
  double t768;
  double t775;
  double t799;
  double t800;
  double t814;
  double t815;
  double t829;
  double t832;
  double t836;
  double t839;
  double t845;
  double t854;
  double t634;
  double t885;
  double t888;
  double t889;
  double t895;
  double t902;
  double t906;
  double t907;
  double t910;
  double t923;
  double t924;
  double t925;
  double t926;
  double t931;
  double t934;
  double t935;
  double t936;
  double t617;
  double t618;
  double t630;
  double t550;
  double t592;
  double t604;
  double t370;
  double t428;
  double t429;
  double t609;
  double t640;
  double t641;
  double t957;
  double t867;
  double t868;
  double t869;
  double t828;
  double t857;
  double t858;
  double t962;
  double t712;
  double t760;
  double t777;
  double t781;
  double t865;
  double t870;
  double t872;
  double t944;
  double t945;
  double t946;
  double t930;
  double t937;
  double t939;
  double t894;
  double t905;
  double t911;
  double t912;
  double t943;
  double t947;
  double t948;
  double t958;
  double t959;
  double t960;
  double t963;
  double t964;
  double t965;
  double t974;
  double t979;
  double t984;
  double t987;
  double t989;
  double t992;
  double t1001;
  double t1004;
  double t1005;
  double t1009;
  double t1010;
  double t1011;
  double t782;
  double t874;
  double t875;
  double t1085;
  double t1086;
  double t1087;
  double t1088;
  double t1091;
  double t1093;
  double t1094;
  double t1099;
  double t1100;
  double t1103;
  double t1104;
  double t1106;
  double t1107;
  double t1111;
  double t1112;
  double t1114;
  double t1115;
  double t1071;
  double t1075;
  double t1078;
  double t1080;
  double t1082;
  double t1083;
  double t1084;
  double t1098;
  double t1105;
  double t1116;
  double t1117;
  double t1120;
  double t1124;
  double t1125;
  double t1126;
  double t1127;
  double t1133;
  double t452;
  double t655;
  double t657;
  double t1141;
  double t1142;
  double t1147;
  double t1148;
  double t1077;
  double t1118;
  double t1134;
  double t1136;
  double t1159;
  double t1160;
  double t1161;
  double t1162;
  double t1163;
  double t1164;
  double t1165;
  double t1166;
  double t1168;
  double t1170;
  double t1171;
  double t1139;
  double t1150;
  double t1153;
  double t1167;
  double t1173;
  double t1175;
  double t1180;
  double t1183;
  double t1185;
  double t916;
  double t950;
  double t952;
  double t1158;
  double t1192;
  double t1211;
  double t1229;
  double t1248;
  double t1264;
  double t1291;
  double t1282;
  double t1333;
  double t1321;
  double t1314;
  double t1306;
  double t1414;
  double t1514;
  double t1515;
  double t1516;
  double t1517;
  double t1502;
  double t1507;
  double t1510;
  double t1511;
  double t1532;
  double t1536;
  double t1539;
  double t1541;
  double t1545;
  double t1547;
  double t1548;
  double t1577;
  double t1578;
  double t1579;
  double t1580;
  double t1587;
  double t1590;
  double t1595;
  t243 = Cos(var1[11]);
  t147 = Cos(var1[10]);
  t317 = -1. + t243;
  t279 = -1.*t243;
  t289 = 1. + t279;
  t316 = 1.6e-11*t289;
  t340 = 1.6e-11*t317;
  t355 = -1. + t316 + t340;
  t148 = -1.*t147;
  t242 = 1. + t148;
  t372 = 4.e-6*t317;
  t397 = -4.e-6*t243;
  t407 = t372 + t397;
  t571 = Sin(var1[10]);
  t568 = Cos(var1[9]);
  t488 = -1. + t147;
  t495 = 1.6e-11*t488;
  t516 = 1. + t495;
  t518 = t516*t355;
  t528 = 4.e-6*t242*t407;
  t529 = t518 + t528;
  t546 = Sin(var1[9]);
  t583 = 4.e-6*t355*t571;
  t584 = -1.*t407*t571;
  t591 = t583 + t584;
  t697 = Sin(var1[11]);
  t446 = Sin(var1[4]);
  t468 = Cos(var1[4]);
  t469 = Cos(var1[5]);
  t665 = -1.000000000016*t289;
  t680 = 1. + t665;
  t687 = 0.004352*t680;
  t700 = -0.9999910000159999*t697;
  t711 = t687 + t700;
  t717 = -1. + t316;
  t720 = 4.e-6*t717;
  t739 = 3.999964e-6*t289;
  t748 = -1.7408e-8*t697;
  t758 = t720 + t739 + t748;
  t765 = 0.999991*t243;
  t768 = 0.004352*t697;
  t775 = t340 + t765 + t768;
  t799 = -4.e-6*t571*t711;
  t800 = t516*t758;
  t814 = 4.e-6*t242*t775;
  t815 = 0. + t799 + t800 + t814;
  t829 = -1.000000000016*t242;
  t832 = 1. + t829;
  t836 = t832*t711;
  t839 = 4.e-6*t571*t758;
  t845 = -1.*t571*t775;
  t854 = 0. + t836 + t839 + t845;
  t634 = Sin(var1[5]);
  t885 = -1.7408e-8*t289;
  t888 = -3.999964e-6*t697;
  t889 = t885 + t888;
  t895 = 0.999991*t680;
  t902 = t895 + t768;
  t906 = -0.004352*t243;
  t907 = 0.999991*t697;
  t910 = t906 + t907;
  t923 = t516*t889;
  t924 = -4.e-6*t571*t902;
  t925 = 4.e-6*t242*t910;
  t926 = 0. + t923 + t924 + t925;
  t931 = 4.e-6*t571*t889;
  t934 = t832*t902;
  t935 = -1.*t571*t910;
  t936 = 0. + t931 + t934 + t935;
  t617 = t568*t529;
  t618 = t546*t591;
  t630 = t617 + t618;
  t550 = -1.*t529*t546;
  t592 = t568*t591;
  t604 = t550 + t592;
  t370 = 4.e-6*t242*t355;
  t428 = t147*t407;
  t429 = t370 + t428;
  t609 = t469*t604;
  t640 = -1.*t630*t634;
  t641 = t609 + t640;
  t957 = Cos(var1[3]);
  t867 = t568*t815;
  t868 = t546*t854;
  t869 = 0. + t867 + t868;
  t828 = -1.*t546*t815;
  t857 = t568*t854;
  t858 = 0. + t828 + t857;
  t962 = Sin(var1[3]);
  t712 = t571*t711;
  t760 = 4.e-6*t242*t758;
  t777 = t147*t775;
  t781 = 0. + t712 + t760 + t777;
  t865 = t469*t858;
  t870 = -1.*t869*t634;
  t872 = 0. + t865 + t870;
  t944 = t568*t926;
  t945 = t546*t936;
  t946 = 0. + t944 + t945;
  t930 = -1.*t546*t926;
  t937 = t568*t936;
  t939 = 0. + t930 + t937;
  t894 = 4.e-6*t242*t889;
  t905 = t571*t902;
  t911 = t147*t910;
  t912 = 0. + t894 + t905 + t911;
  t943 = t469*t939;
  t947 = -1.*t946*t634;
  t948 = 0. + t943 + t947;
  t958 = t469*t630;
  t959 = t604*t634;
  t960 = t958 + t959;
  t963 = t429*t468;
  t964 = -1.*t446*t641;
  t965 = t963 + t964;
  t974 = t469*t869;
  t979 = t858*t634;
  t984 = 0. + t974 + t979;
  t987 = t468*t781;
  t989 = -1.*t446*t872;
  t992 = 0. + t987 + t989;
  t1001 = t469*t946;
  t1004 = t939*t634;
  t1005 = 0. + t1001 + t1004;
  t1009 = t468*t912;
  t1010 = -1.*t446*t948;
  t1011 = 0. + t1009 + t1010;
  t782 = t781*t446;
  t874 = t468*t872;
  t875 = 0. + t782 + t874;
  t1085 = -1.26e-8*var1[11];
  t1086 = 1. + t340;
  t1087 = -0.14871*t1086;
  t1088 = -1.64779999997447e-7*t289;
  t1091 = -1.59556e-7*t317;
  t1093 = -1.199987999968e-6*t697;
  t1094 = t1085 + t1087 + t1088 + t1091 + t1093;
  t1099 = 0.803147*t680;
  t1100 = 0.50315000001605*t289;
  t1103 = 0.00130540515936178*t697;
  t1104 = t1099 + t1100 + t1103;
  t1106 = -5.04e-14*var1[11];
  t1107 = -0.03988959484*t289;
  t1111 = 6.38224e-13*t317;
  t1112 = -0.041195*t243;
  t1114 = 0.299996999992*t697;
  t1115 = t1106 + t1107 + t1111 + t1112 + t1114;
  t1071 = -1.*t568;
  t1075 = 1. + t1071;
  t1078 = -0.15121*t546;
  t1080 = -1.2484e-7*var1[10];
  t1082 = 2.479936e-18*t242;
  t1083 = -1.54996e-7*t488;
  t1084 = 1.124840000016e-6*t571;
  t1098 = t516*t1094;
  t1105 = -4.e-6*t571*t1104;
  t1116 = 4.e-6*t242*t1115;
  t1117 = t1080 + t1082 + t1083 + t1084 + t1098 + t1105 + t1116;
  t1120 = 0.281210000008499*t242;
  t1124 = -0.03874900000062*t571;
  t1125 = 4.e-6*t571*t1094;
  t1126 = t832*t1104;
  t1127 = -1.*t571*t1115;
  t1133 = t1120 + t1124 + t1125 + t1126 + t1127;
  t452 = t429*t446;
  t655 = t468*t641;
  t657 = t452 + t655;
  t1141 = 0.15121*t1075;
  t1142 = -1.*t546*t1117;
  t1147 = t568*t1133;
  t1148 = t1141 + t1078 + t1142 + t1147;
  t1077 = -0.15121*t1075;
  t1118 = t568*t1117;
  t1134 = t546*t1133;
  t1136 = t1077 + t1078 + t1118 + t1134;
  t1159 = -4.9936e-13*var1[10];
  t1160 = -0.038749*t242;
  t1161 = 6.19984e-13*t488;
  t1162 = -0.281210000004*t571;
  t1163 = 4.e-6*t242*t1094;
  t1164 = t571*t1104;
  t1165 = t147*t1115;
  t1166 = 0. + t1159 + t1160 + t1161 + t1162 + t1163 + t1164 + t1165;
  t1168 = t469*t1148;
  t1170 = -1.*t1136*t634;
  t1171 = 0. + t1168 + t1170;
  t1139 = t469*t1136;
  t1150 = t1148*t634;
  t1153 = 0. + t1139 + t1150;
  t1167 = t1166*t446;
  t1173 = t468*t1171;
  t1175 = 0. + t1167 + t1173;
  t1180 = t468*t1166;
  t1183 = -1.*t446*t1171;
  t1185 = 0. + t1180 + t1183;
  t916 = t912*t446;
  t950 = t468*t948;
  t952 = 0. + t916 + t950;
  t1158 = t960*t1153;
  t1192 = -1.*t984*t1153;
  t1211 = t984*t1153;
  t1229 = -1.*t1153*t1005;
  t1248 = -1.*t960*t1153;
  t1264 = t1153*t1005;
  t1291 = -1.*t781*t1166;
  t1282 = t429*t1166;
  t1333 = t1166*t912;
  t1321 = -1.*t429*t1166;
  t1314 = -1.*t1166*t912;
  t1306 = t781*t1166;
  t1414 = t1159 + t1160 + t1161 + t1162 + t1163 + t1164 + t1165;
  t1514 = t1094*t758;
  t1515 = t711*t1104;
  t1516 = t775*t1115;
  t1517 = t1514 + t1515 + t1516;
  t1502 = -1.*t889*t1094;
  t1507 = -1.*t1104*t902;
  t1510 = -1.*t1115*t910;
  t1511 = t1502 + t1507 + t1510;
  t1532 = t889*t1094;
  t1536 = t1104*t902;
  t1539 = t1115*t910;
  t1541 = t1532 + t1536 + t1539;
  t1545 = -1.*t355*t1094;
  t1547 = -1.*t407*t1115;
  t1548 = t1545 + t1547;
  t1577 = -1.*t1094*t758;
  t1578 = -1.*t711*t1104;
  t1579 = -1.*t775*t1115;
  t1580 = t1577 + t1578 + t1579;
  t1587 = t355*t1094;
  t1590 = t407*t1115;
  t1595 = t1587 + t1590;
  p_output1[0]=t952*var2[0] + t875*var2[1] + t657*var2[2];
  p_output1[1]=(0. + t1005*t957 - 1.*t1011*t962)*var2[0] + (0. + t957*t984 - 1.*t962*t992)*var2[1] + (t957*t960 - 1.*t962*t965)*var2[2];
  p_output1[2]=(0. + t1011*t957 + t1005*t962)*var2[0] + (0. + t962*t984 + t957*t992)*var2[1] + (t960*t962 + t957*t965)*var2[2];
  p_output1[3]=(t875*(t1158 + t1175*t657 + t1185*t965) + t657*(t1192 - 1.*t1175*t875 - 1.*t1185*t992))*var2[0] + (t657*(t1011*t1185 + t1264 + t1175*t952) + t952*(t1248 - 1.*t1175*t657 - 1.*t1185*t965))*var2[1] + (t875*(-1.*t1011*t1185 + t1229 - 1.*t1175*t952) + t952*(t1211 + t1175*t875 + t1185*t992))*var2[2];
  p_output1[4]=((t1192 + t1291 - 1.*t1171*t872)*t960 + (t1158 + t1282 + t1171*t641)*t984)*var2[0] + (t1005*(t1248 + t1321 - 1.*t1171*t641) + (t1264 + t1333 + t1171*t948)*t960)*var2[1] + (t1005*(t1211 + t1306 + t1171*t872) + (t1229 + t1314 - 1.*t1171*t948)*t984)*var2[2];
  p_output1[5]=((t1282 + t1148*t604 + t1136*t630)*t781 + t429*(t1291 - 1.*t1148*t858 - 1.*t1136*t869))*var2[0] + ((t1321 - 1.*t1148*t604 - 1.*t1136*t630)*t912 + t429*(t1333 + t1148*t939 + t1136*t946))*var2[1] + ((t1306 + t1148*t858 + t1136*t869)*t912 + t781*(t1314 - 1.*t1148*t939 - 1.*t1136*t946))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=((t1414*t429 + t1117*t529 + t1133*t591)*t781 + t429*(-1.*t1414*t781 - 1.*t1117*t815 - 1.*t1133*t854) - 0.15121*t926 - 0.15121*t936)*var2[0] + (-0.15121*t815 - 0.15121*t854 + (-1.*t1414*t429 - 1.*t1117*t529 - 1.*t1133*t591)*t912 + t429*(t1414*t912 + t1117*t926 + t1133*t936))*var2[1] + (-0.15121*t529 - 0.15121*t591 + (t1414*t781 + t1117*t815 + t1133*t854)*t912 + t781*(-1.*t1414*t912 - 1.*t1117*t926 - 1.*t1133*t936))*var2[2];
  p_output1[10]=(-1.*t1580*t355 - 1.*t1595*t758 + 4.e-6*(-1.*t1580*t407 - 1.*t1595*t775) + 1.e-6*t889 - 0.038749*t902 - 0.28121*t910)*var2[0] + (-1.*t1541*t355 - 0.038749*t711 + 1.e-6*t758 - 0.28121*t775 - 1.*t1548*t889 + 4.e-6*(-1.*t1541*t407 - 1.*t1548*t910))*var2[1] + (1.e-6*t355 - 0.28121*t407 - 1.*t1511*t758 - 1.*t1517*t889 + 4.e-6*(-1.*t1511*t775 - 1.*t1517*t910))*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
