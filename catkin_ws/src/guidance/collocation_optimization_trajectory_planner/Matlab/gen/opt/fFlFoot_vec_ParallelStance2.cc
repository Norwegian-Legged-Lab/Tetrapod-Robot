/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:05 GMT+01:00
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
  double t235;
  double t166;
  double t319;
  double t167;
  double t236;
  double t266;
  double t287;
  double t325;
  double t355;
  double t388;
  double t390;
  double t417;
  double t555;
  double t552;
  double t492;
  double t511;
  double t519;
  double t532;
  double t533;
  double t542;
  double t560;
  double t561;
  double t571;
  double t445;
  double t660;
  double t474;
  double t491;
  double t649;
  double t654;
  double t591;
  double t675;
  double t678;
  double t682;
  double t686;
  double t699;
  double t701;
  double t707;
  double t708;
  double t716;
  double t718;
  double t726;
  double t782;
  double t783;
  double t786;
  double t790;
  double t792;
  double t807;
  double t810;
  double t813;
  double t814;
  double t816;
  double t817;
  double t818;
  double t822;
  double t543;
  double t572;
  double t582;
  double t592;
  double t596;
  double t602;
  double t363;
  double t427;
  double t443;
  double t584;
  double t618;
  double t623;
  double t870;
  double t687;
  double t730;
  double t736;
  double t750;
  double t755;
  double t765;
  double t880;
  double t655;
  double t661;
  double t665;
  double t668;
  double t739;
  double t766;
  double t775;
  double t815;
  double t827;
  double t831;
  double t838;
  double t839;
  double t840;
  double t791;
  double t798;
  double t800;
  double t802;
  double t835;
  double t841;
  double t859;
  double t871;
  double t874;
  double t877;
  double t891;
  double t895;
  double t896;
  double t905;
  double t906;
  double t909;
  double t912;
  double t914;
  double t920;
  double t926;
  double t928;
  double t929;
  double t931;
  double t932;
  double t933;
  double t980;
  double t982;
  double t983;
  double t985;
  double t986;
  double t989;
  double t993;
  double t994;
  double t996;
  double t997;
  double t998;
  double t999;
  double t1001;
  double t1004;
  double t1011;
  double t1012;
  double t1013;
  double t968;
  double t970;
  double t973;
  double t977;
  double t979;
  double t991;
  double t1003;
  double t1014;
  double t1017;
  double t1020;
  double t1024;
  double t1028;
  double t1029;
  double t1030;
  double t1031;
  double t1032;
  double t976;
  double t1019;
  double t1033;
  double t1034;
  double t1042;
  double t1048;
  double t1050;
  double t1053;
  double t468;
  double t632;
  double t639;
  double t1067;
  double t1069;
  double t1071;
  double t1074;
  double t1075;
  double t1078;
  double t1079;
  double t1086;
  double t1088;
  double t1089;
  double t674;
  double t776;
  double t777;
  double t1037;
  double t1057;
  double t1059;
  double t1098;
  double t1100;
  double t1101;
  double t1072;
  double t1092;
  double t1095;
  double t806;
  double t861;
  double t863;
  double t1062;
  double t1112;
  double t1123;
  double t1132;
  double t1143;
  double t1152;
  double t1176;
  double t1194;
  double t1211;
  double t1221;
  double t1238;
  double t1251;
  double t1450;
  double t1451;
  double t1453;
  double t1455;
  double t1458;
  double t1464;
  double t1465;
  double t1493;
  double t1496;
  double t1497;
  double t1499;
  double t1501;
  double t1502;
  double t1503;
  double t1505;
  double t1524;
  double t1532;
  double t1533;
  double t1540;
  double t1543;
  double t1544;
  double t1545;
  t235 = Cos(var1[8]);
  t166 = Cos(var1[7]);
  t319 = -1. + t235;
  t167 = -1. + t166;
  t236 = -1.*t235;
  t266 = 1. + t236;
  t287 = 1.6e-11*t266;
  t325 = 1.6e-11*t319;
  t355 = 1. + t287 + t325;
  t388 = 4.e-6*t319;
  t390 = -4.e-6*t235;
  t417 = t388 + t390;
  t555 = Sin(var1[7]);
  t552 = Cos(var1[6]);
  t492 = 1.6e-11*t167;
  t511 = 1. + t492;
  t519 = t511*t355;
  t532 = 4.e-6*t167*t417;
  t533 = t519 + t532;
  t542 = Sin(var1[6]);
  t560 = 4.e-6*t355*t555;
  t561 = t417*t555;
  t571 = t560 + t561;
  t445 = Sin(var1[4]);
  t660 = Sin(var1[8]);
  t474 = Cos(var1[4]);
  t491 = Cos(var1[5]);
  t649 = -1.000000000016*t266;
  t654 = 1. + t649;
  t591 = Sin(var1[5]);
  t675 = -4.e-6*t654*t555;
  t678 = -4.e-6*t511*t660;
  t682 = -4.e-6*t167*t660;
  t686 = t675 + t678 + t682;
  t699 = -1.*t166;
  t701 = 1. + t699;
  t707 = -1.000000000016*t701;
  t708 = 1. + t707;
  t716 = t708*t654;
  t718 = -1.000000000016*t555*t660;
  t726 = t716 + t718;
  t782 = -1. + t287;
  t783 = 4.e-6*t782;
  t786 = 4.e-6*t266;
  t790 = t783 + t786;
  t792 = t287 + t236;
  t807 = 4.e-6*t790*t555;
  t810 = t792*t555;
  t813 = -1.000000000016*t708*t660;
  t814 = t807 + t810 + t813;
  t816 = t511*t790;
  t817 = 4.e-6*t167*t792;
  t818 = 4.000000000064e-6*t555*t660;
  t822 = t816 + t817 + t818;
  t543 = -1.*t533*t542;
  t572 = t552*t571;
  t582 = t543 + t572;
  t592 = t552*t533;
  t596 = t542*t571;
  t602 = t592 + t596;
  t363 = 4.e-6*t167*t355;
  t427 = t166*t417;
  t443 = t363 + t427;
  t584 = t491*t582;
  t618 = -1.*t591*t602;
  t623 = t584 + t618;
  t870 = Cos(var1[3]);
  t687 = -1.*t542*t686;
  t730 = t552*t726;
  t736 = t687 + t730;
  t750 = t552*t686;
  t755 = t542*t726;
  t765 = t750 + t755;
  t880 = Sin(var1[3]);
  t655 = -1.*t654*t555;
  t661 = -1.6e-11*t167*t660;
  t665 = -1.*t166*t660;
  t668 = t655 + t661 + t665;
  t739 = t491*t736;
  t766 = -1.*t591*t765;
  t775 = t739 + t766;
  t815 = t542*t814;
  t827 = t552*t822;
  t831 = t815 + t827;
  t838 = t552*t814;
  t839 = -1.*t542*t822;
  t840 = t838 + t839;
  t791 = 4.e-6*t167*t790;
  t798 = t166*t792;
  t800 = 1.000000000016*t555*t660;
  t802 = t791 + t798 + t800;
  t835 = -1.*t591*t831;
  t841 = t491*t840;
  t859 = t835 + t841;
  t871 = t591*t582;
  t874 = t491*t602;
  t877 = t871 + t874;
  t891 = t474*t443;
  t895 = -1.*t445*t623;
  t896 = t891 + t895;
  t905 = t591*t736;
  t906 = t491*t765;
  t909 = t905 + t906;
  t912 = t474*t668;
  t914 = -1.*t445*t775;
  t920 = t912 + t914;
  t926 = t491*t831;
  t928 = t591*t840;
  t929 = t926 + t928;
  t931 = t474*t802;
  t932 = -1.*t445*t859;
  t933 = t931 + t932;
  t980 = 5.136e-14*var1[8];
  t982 = -0.03874900000062*t266;
  t983 = 5.9484e-7*t319;
  t985 = -0.03875*t235;
  t986 = -0.299999999992*t660;
  t989 = t980 + t982 + t983 + t985 + t986;
  t993 = -1.284e-8*var1[8];
  t994 = 1. + t325;
  t996 = 0.14871*t994;
  t997 = -1.5499600000248e-7*t266;
  t998 = -1.55e-7*t319;
  t999 = -1.199999999968e-6*t660;
  t1001 = t993 + t996 + t997 + t998 + t999;
  t1004 = 0.80321*t654;
  t1011 = 0.503210000016051*t266;
  t1012 = -4.05159380016e-7*t660;
  t1013 = t1004 + t1011 + t1012;
  t968 = -1.*t552;
  t970 = 1. + t968;
  t973 = 0.15121*t970;
  t977 = 0.281210000008499*t701;
  t979 = 0.03874900000062*t555;
  t991 = t555*t989;
  t1003 = 4.e-6*t555*t1001;
  t1014 = t708*t1013;
  t1017 = t977 + t979 + t991 + t1003 + t1014;
  t1020 = -1.2484e-7*var1[7];
  t1024 = -1.5499600000248e-7*t701;
  t1028 = 1.124840000016e-6*t555;
  t1029 = 4.e-6*t167*t989;
  t1030 = t511*t1001;
  t1031 = -4.e-6*t555*t1013;
  t1032 = t1020 + t1024 + t1028 + t1029 + t1030 + t1031;
  t976 = -0.15121*t542;
  t1019 = t542*t1017;
  t1033 = t552*t1032;
  t1034 = t973 + t976 + t1019 + t1033;
  t1042 = 0.15121*t542;
  t1048 = t552*t1017;
  t1050 = -1.*t542*t1032;
  t1053 = t973 + t1042 + t1048 + t1050;
  t468 = t443*t445;
  t632 = t474*t623;
  t639 = t468 + t632;
  t1067 = -1.*t591*t1034;
  t1069 = t491*t1053;
  t1071 = t1067 + t1069;
  t1074 = 4.9936e-13*var1[7];
  t1075 = -0.03874900000062*t701;
  t1078 = 0.281210000004*t555;
  t1079 = t166*t989;
  t1086 = 4.e-6*t167*t1001;
  t1088 = -1.*t555*t1013;
  t1089 = t1074 + t1075 + t1078 + t1079 + t1086 + t1088;
  t674 = t445*t668;
  t776 = t474*t775;
  t777 = t674 + t776;
  t1037 = t491*t1034;
  t1057 = t591*t1053;
  t1059 = t1037 + t1057;
  t1098 = t474*t1071;
  t1100 = t445*t1089;
  t1101 = t1098 + t1100;
  t1072 = -1.*t445*t1071;
  t1092 = t474*t1089;
  t1095 = t1072 + t1092;
  t806 = t445*t802;
  t861 = t474*t859;
  t863 = t806 + t861;
  t1062 = -1.*t877*t1059;
  t1112 = t1059*t909;
  t1123 = t877*t1059;
  t1132 = -1.*t1059*t929;
  t1143 = -1.*t1059*t909;
  t1152 = t1059*t929;
  t1176 = -1.*t443*t1089;
  t1194 = t1089*t668;
  t1211 = t443*t1089;
  t1221 = -1.*t1089*t802;
  t1238 = -1.*t1089*t668;
  t1251 = t1089*t802;
  t1450 = -1.*t417*t989;
  t1451 = -1.*t355*t1001;
  t1453 = t1450 + t1451;
  t1455 = t654*t1013;
  t1458 = -1.*t989*t660;
  t1464 = -4.e-6*t1001*t660;
  t1465 = t1455 + t1458 + t1464;
  t1493 = -1.*t654*t1013;
  t1496 = t989*t660;
  t1497 = 4.e-6*t1001*t660;
  t1499 = t1493 + t1496 + t1497;
  t1501 = t792*t989;
  t1502 = t790*t1001;
  t1503 = -1.000000000016*t1013*t660;
  t1505 = t1501 + t1502 + t1503;
  t1524 = t417*t989;
  t1532 = t355*t1001;
  t1533 = t1524 + t1532;
  t1540 = -1.*t792*t989;
  t1543 = -1.*t790*t1001;
  t1544 = 1.000000000016*t1013*t660;
  t1545 = t1540 + t1543 + t1544;
  p_output1[0]=t777*var2[0] + t863*var2[1] + t639*var2[2];
  p_output1[1]=(t870*t909 - 1.*t880*t920)*var2[0] + (t870*t929 - 1.*t880*t933)*var2[1] + (t870*t877 - 1.*t880*t896)*var2[2];
  p_output1[2]=(t880*t909 + t870*t920)*var2[0] + (t880*t929 + t870*t933)*var2[1] + (t877*t880 + t870*t896)*var2[2];
  p_output1[3]=(t863*(t1123 + t1101*t639 + t1095*t896) + t639*(t1132 - 1.*t1101*t863 - 1.*t1095*t933))*var2[0] + (t777*(t1062 - 1.*t1101*t639 - 1.*t1095*t896) + t639*(t1112 + t1101*t777 + t1095*t920))*var2[1] + (t863*(t1143 - 1.*t1101*t777 - 1.*t1095*t920) + t777*(t1152 + t1101*t863 + t1095*t933))*var2[2];
  p_output1[4]=((t1132 + t1221 - 1.*t1071*t859)*t877 + (t1123 + t1211 + t1071*t623)*t929)*var2[0] + ((t1112 + t1194 + t1071*t775)*t877 + (t1062 + t1176 - 1.*t1071*t623)*t909)*var2[1] + ((t1152 + t1251 + t1071*t859)*t909 + (t1143 + t1238 - 1.*t1071*t775)*t929)*var2[2];
  p_output1[5]=((t1211 + t1053*t582 + t1034*t602)*t802 + t443*(t1221 - 1.*t1034*t831 - 1.*t1053*t840))*var2[0] + ((t1176 - 1.*t1053*t582 - 1.*t1034*t602)*t668 + t443*(t1194 + t1053*t736 + t1034*t765))*var2[1] + ((t1238 - 1.*t1053*t736 - 1.*t1034*t765)*t802 + t668*(t1251 + t1034*t831 + t1053*t840))*var2[2];
  p_output1[6]=(-0.15121*t686 + 0.15121*t726 + (t1211 + t1032*t533 + t1017*t571)*t802 + t443*(t1221 - 1.*t1017*t814 - 1.*t1032*t822))*var2[0] + ((t1176 - 1.*t1032*t533 - 1.*t1017*t571)*t668 + t443*(t1194 + t1032*t686 + t1017*t726) + 0.15121*t814 - 0.15121*t822)*var2[1] + (-0.15121*t533 + 0.15121*t571 + (t1238 - 1.*t1032*t686 - 1.*t1017*t726)*t802 + t668*(t1251 + t1017*t814 + t1032*t822))*var2[2];
  p_output1[7]=(t1545*t355 + 0.038749*t654 - 0.281210000004*t660 + t1533*t790 + 4.e-6*(-1.*t1545*t417 - 1.*t1533*t792))*var2[0] + (t1465*t355 - 0.03874900000062*t660 - 4.e-6*t1453*t660 + 4.e-6*(-1.*t1465*t417 + t1453*t660) + 1.e-6*t790 + 0.28121*t792)*var2[1] + (1.e-6*t355 + 0.28121*t417 - 4.e-6*t1505*t660 + t1499*t790 + 4.e-6*(t1505*t660 - 1.*t1499*t792))*var2[2];
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace ParallelStance2
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
