/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:17:59 GMT+01:00
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
  double t224;
  double t152;
  double t292;
  double t153;
  double t226;
  double t252;
  double t269;
  double t293;
  double t332;
  double t379;
  double t383;
  double t420;
  double t575;
  double t569;
  double t501;
  double t516;
  double t521;
  double t536;
  double t544;
  double t552;
  double t578;
  double t583;
  double t589;
  double t460;
  double t662;
  double t484;
  double t496;
  double t648;
  double t652;
  double t608;
  double t692;
  double t707;
  double t708;
  double t715;
  double t730;
  double t734;
  double t745;
  double t746;
  double t762;
  double t763;
  double t770;
  double t811;
  double t813;
  double t819;
  double t820;
  double t825;
  double t839;
  double t841;
  double t842;
  double t845;
  double t851;
  double t855;
  double t856;
  double t857;
  double t556;
  double t594;
  double t602;
  double t609;
  double t616;
  double t620;
  double t347;
  double t431;
  double t453;
  double t603;
  double t632;
  double t633;
  double t898;
  double t719;
  double t771;
  double t778;
  double t783;
  double t784;
  double t788;
  double t909;
  double t656;
  double t663;
  double t676;
  double t677;
  double t779;
  double t791;
  double t801;
  double t849;
  double t862;
  double t865;
  double t874;
  double t877;
  double t878;
  double t823;
  double t827;
  double t830;
  double t834;
  double t873;
  double t881;
  double t883;
  double t899;
  double t901;
  double t904;
  double t910;
  double t914;
  double t915;
  double t921;
  double t923;
  double t925;
  double t930;
  double t931;
  double t934;
  double t947;
  double t948;
  double t950;
  double t952;
  double t956;
  double t958;
  double t1007;
  double t1008;
  double t1009;
  double t1011;
  double t1015;
  double t1021;
  double t1025;
  double t1034;
  double t1036;
  double t1038;
  double t1040;
  double t1043;
  double t1044;
  double t1046;
  double t1048;
  double t1049;
  double t1051;
  double t996;
  double t998;
  double t1000;
  double t1002;
  double t1003;
  double t1022;
  double t1045;
  double t1052;
  double t1053;
  double t1058;
  double t1060;
  double t1061;
  double t1063;
  double t1065;
  double t1066;
  double t1067;
  double t1001;
  double t1054;
  double t1068;
  double t1069;
  double t1072;
  double t1079;
  double t1081;
  double t1085;
  double t480;
  double t639;
  double t640;
  double t1096;
  double t1099;
  double t1100;
  double t1105;
  double t1106;
  double t1108;
  double t1117;
  double t1118;
  double t1119;
  double t1123;
  double t691;
  double t802;
  double t805;
  double t1070;
  double t1087;
  double t1090;
  double t1132;
  double t1133;
  double t1135;
  double t1101;
  double t1125;
  double t1128;
  double t836;
  double t884;
  double t885;
  double t1093;
  double t1141;
  double t1156;
  double t1170;
  double t1193;
  double t1204;
  double t1229;
  double t1233;
  double t1254;
  double t1266;
  double t1285;
  double t1300;
  double t1496;
  double t1497;
  double t1504;
  double t1507;
  double t1509;
  double t1511;
  double t1512;
  double t1529;
  double t1531;
  double t1535;
  double t1540;
  double t1543;
  double t1544;
  double t1546;
  double t1547;
  double t1584;
  double t1592;
  double t1598;
  double t1609;
  double t1610;
  double t1611;
  double t1615;
  t224 = Cos(var1[8]);
  t152 = Cos(var1[7]);
  t292 = -1. + t224;
  t153 = -1. + t152;
  t226 = -1.*t224;
  t252 = 1. + t226;
  t269 = 1.6e-11*t252;
  t293 = 1.6e-11*t292;
  t332 = 1. + t269 + t293;
  t379 = 4.e-6*t292;
  t383 = -4.e-6*t224;
  t420 = t379 + t383;
  t575 = Sin(var1[7]);
  t569 = Cos(var1[6]);
  t501 = 1.6e-11*t153;
  t516 = 1. + t501;
  t521 = t516*t332;
  t536 = 4.e-6*t153*t420;
  t544 = t521 + t536;
  t552 = Sin(var1[6]);
  t578 = 4.e-6*t332*t575;
  t583 = t420*t575;
  t589 = t578 + t583;
  t460 = Sin(var1[4]);
  t662 = Sin(var1[8]);
  t484 = Cos(var1[4]);
  t496 = Cos(var1[5]);
  t648 = -1.000000000016*t252;
  t652 = 1. + t648;
  t608 = Sin(var1[5]);
  t692 = -4.e-6*t652*t575;
  t707 = -4.e-6*t516*t662;
  t708 = -4.e-6*t153*t662;
  t715 = t692 + t707 + t708;
  t730 = -1.*t152;
  t734 = 1. + t730;
  t745 = -1.000000000016*t734;
  t746 = 1. + t745;
  t762 = t746*t652;
  t763 = -1.000000000016*t575*t662;
  t770 = t762 + t763;
  t811 = -1. + t269;
  t813 = 4.e-6*t811;
  t819 = 4.e-6*t252;
  t820 = t813 + t819;
  t825 = t269 + t226;
  t839 = 4.e-6*t820*t575;
  t841 = t825*t575;
  t842 = -1.000000000016*t746*t662;
  t845 = t839 + t841 + t842;
  t851 = t516*t820;
  t855 = 4.e-6*t153*t825;
  t856 = 4.000000000064e-6*t575*t662;
  t857 = t851 + t855 + t856;
  t556 = -1.*t544*t552;
  t594 = t569*t589;
  t602 = t556 + t594;
  t609 = t569*t544;
  t616 = t552*t589;
  t620 = t609 + t616;
  t347 = 4.e-6*t153*t332;
  t431 = t152*t420;
  t453 = t347 + t431;
  t603 = t496*t602;
  t632 = -1.*t608*t620;
  t633 = t603 + t632;
  t898 = Cos(var1[3]);
  t719 = -1.*t552*t715;
  t771 = t569*t770;
  t778 = t719 + t771;
  t783 = t569*t715;
  t784 = t552*t770;
  t788 = t783 + t784;
  t909 = Sin(var1[3]);
  t656 = -1.*t652*t575;
  t663 = -1.6e-11*t153*t662;
  t676 = -1.*t152*t662;
  t677 = t656 + t663 + t676;
  t779 = t496*t778;
  t791 = -1.*t608*t788;
  t801 = t779 + t791;
  t849 = t552*t845;
  t862 = t569*t857;
  t865 = t849 + t862;
  t874 = t569*t845;
  t877 = -1.*t552*t857;
  t878 = t874 + t877;
  t823 = 4.e-6*t153*t820;
  t827 = t152*t825;
  t830 = 1.000000000016*t575*t662;
  t834 = t823 + t827 + t830;
  t873 = -1.*t608*t865;
  t881 = t496*t878;
  t883 = t873 + t881;
  t899 = t608*t602;
  t901 = t496*t620;
  t904 = t899 + t901;
  t910 = t484*t453;
  t914 = -1.*t460*t633;
  t915 = t910 + t914;
  t921 = t608*t778;
  t923 = t496*t788;
  t925 = t921 + t923;
  t930 = t484*t677;
  t931 = -1.*t460*t801;
  t934 = t930 + t931;
  t947 = t496*t865;
  t948 = t608*t878;
  t950 = t947 + t948;
  t952 = t484*t834;
  t956 = -1.*t460*t883;
  t958 = t952 + t956;
  t1007 = 5.136e-14*var1[8];
  t1008 = -0.03874900000062*t252;
  t1009 = 5.9484e-7*t292;
  t1011 = -0.03875*t224;
  t1015 = -0.299999999992*t662;
  t1021 = t1007 + t1008 + t1009 + t1011 + t1015;
  t1025 = -1.284e-8*var1[8];
  t1034 = 1. + t293;
  t1036 = 0.14871*t1034;
  t1038 = -1.5499600000248e-7*t252;
  t1040 = -1.55e-7*t292;
  t1043 = -1.199999999968e-6*t662;
  t1044 = t1025 + t1036 + t1038 + t1040 + t1043;
  t1046 = 0.80321*t652;
  t1048 = 0.503210000016051*t252;
  t1049 = -4.05159380016e-7*t662;
  t1051 = t1046 + t1048 + t1049;
  t996 = -1.*t569;
  t998 = 1. + t996;
  t1000 = 0.15121*t998;
  t1002 = 0.281210000008499*t734;
  t1003 = 0.03874900000062*t575;
  t1022 = t575*t1021;
  t1045 = 4.e-6*t575*t1044;
  t1052 = t746*t1051;
  t1053 = t1002 + t1003 + t1022 + t1045 + t1052;
  t1058 = -1.2484e-7*var1[7];
  t1060 = -1.5499600000248e-7*t734;
  t1061 = 1.124840000016e-6*t575;
  t1063 = 4.e-6*t153*t1021;
  t1065 = t516*t1044;
  t1066 = -4.e-6*t575*t1051;
  t1067 = t1058 + t1060 + t1061 + t1063 + t1065 + t1066;
  t1001 = -0.15121*t552;
  t1054 = t552*t1053;
  t1068 = t569*t1067;
  t1069 = t1000 + t1001 + t1054 + t1068;
  t1072 = 0.15121*t552;
  t1079 = t569*t1053;
  t1081 = -1.*t552*t1067;
  t1085 = t1000 + t1072 + t1079 + t1081;
  t480 = t453*t460;
  t639 = t484*t633;
  t640 = t480 + t639;
  t1096 = -1.*t608*t1069;
  t1099 = t496*t1085;
  t1100 = t1096 + t1099;
  t1105 = 4.9936e-13*var1[7];
  t1106 = -0.03874900000062*t734;
  t1108 = 0.281210000004*t575;
  t1117 = t152*t1021;
  t1118 = 4.e-6*t153*t1044;
  t1119 = -1.*t575*t1051;
  t1123 = t1105 + t1106 + t1108 + t1117 + t1118 + t1119;
  t691 = t460*t677;
  t802 = t484*t801;
  t805 = t691 + t802;
  t1070 = t496*t1069;
  t1087 = t608*t1085;
  t1090 = t1070 + t1087;
  t1132 = t484*t1100;
  t1133 = t460*t1123;
  t1135 = t1132 + t1133;
  t1101 = -1.*t460*t1100;
  t1125 = t484*t1123;
  t1128 = t1101 + t1125;
  t836 = t460*t834;
  t884 = t484*t883;
  t885 = t836 + t884;
  t1093 = -1.*t904*t1090;
  t1141 = t1090*t925;
  t1156 = t904*t1090;
  t1170 = -1.*t1090*t950;
  t1193 = -1.*t1090*t925;
  t1204 = t1090*t950;
  t1229 = -1.*t453*t1123;
  t1233 = t1123*t677;
  t1254 = t453*t1123;
  t1266 = -1.*t1123*t834;
  t1285 = -1.*t1123*t677;
  t1300 = t1123*t834;
  t1496 = -1.*t420*t1021;
  t1497 = -1.*t332*t1044;
  t1504 = t1496 + t1497;
  t1507 = t652*t1051;
  t1509 = -1.*t1021*t662;
  t1511 = -4.e-6*t1044*t662;
  t1512 = t1507 + t1509 + t1511;
  t1529 = -1.*t652*t1051;
  t1531 = t1021*t662;
  t1535 = 4.e-6*t1044*t662;
  t1540 = t1529 + t1531 + t1535;
  t1543 = t825*t1021;
  t1544 = t820*t1044;
  t1546 = -1.000000000016*t1051*t662;
  t1547 = t1543 + t1544 + t1546;
  t1584 = t420*t1021;
  t1592 = t332*t1044;
  t1598 = t1584 + t1592;
  t1609 = -1.*t825*t1021;
  t1610 = -1.*t820*t1044;
  t1611 = 1.000000000016*t1051*t662;
  t1615 = t1609 + t1610 + t1611;
  p_output1[0]=t805*var2[0] + t885*var2[1] + t640*var2[2];
  p_output1[1]=(t898*t925 - 1.*t909*t934)*var2[0] + (t898*t950 - 1.*t909*t958)*var2[1] + (t898*t904 - 1.*t909*t915)*var2[2];
  p_output1[2]=(t909*t925 + t898*t934)*var2[0] + (t909*t950 + t898*t958)*var2[1] + (t904*t909 + t898*t915)*var2[2];
  p_output1[3]=(t885*(t1156 + t1135*t640 + t1128*t915) + t640*(t1170 - 1.*t1135*t885 - 1.*t1128*t958))*var2[0] + (t805*(t1093 - 1.*t1135*t640 - 1.*t1128*t915) + t640*(t1141 + t1135*t805 + t1128*t934))*var2[1] + (t885*(t1193 - 1.*t1135*t805 - 1.*t1128*t934) + t805*(t1204 + t1135*t885 + t1128*t958))*var2[2];
  p_output1[4]=((t1170 + t1266 - 1.*t1100*t883)*t904 + (t1156 + t1254 + t1100*t633)*t950)*var2[0] + ((t1141 + t1233 + t1100*t801)*t904 + (t1093 + t1229 - 1.*t1100*t633)*t925)*var2[1] + ((t1204 + t1300 + t1100*t883)*t925 + (t1193 + t1285 - 1.*t1100*t801)*t950)*var2[2];
  p_output1[5]=((t1254 + t1085*t602 + t1069*t620)*t834 + t453*(t1266 - 1.*t1069*t865 - 1.*t1085*t878))*var2[0] + ((t1229 - 1.*t1085*t602 - 1.*t1069*t620)*t677 + t453*(t1233 + t1085*t778 + t1069*t788))*var2[1] + ((t1285 - 1.*t1085*t778 - 1.*t1069*t788)*t834 + t677*(t1300 + t1069*t865 + t1085*t878))*var2[2];
  p_output1[6]=(-0.15121*t715 + 0.15121*t770 + (t1254 + t1067*t544 + t1053*t589)*t834 + t453*(t1266 - 1.*t1053*t845 - 1.*t1067*t857))*var2[0] + ((t1229 - 1.*t1067*t544 - 1.*t1053*t589)*t677 + t453*(t1233 + t1067*t715 + t1053*t770) + 0.15121*t845 - 0.15121*t857)*var2[1] + (-0.15121*t544 + 0.15121*t589 + (t1285 - 1.*t1067*t715 - 1.*t1053*t770)*t834 + t677*(t1300 + t1053*t845 + t1067*t857))*var2[2];
  p_output1[7]=(t1615*t332 + 0.038749*t652 - 0.281210000004*t662 + t1598*t820 + 4.e-6*(-1.*t1615*t420 - 1.*t1598*t825))*var2[0] + (t1512*t332 - 0.03874900000062*t662 - 4.e-6*t1504*t662 + 4.e-6*(-1.*t1512*t420 + t1504*t662) + 1.e-6*t820 + 0.28121*t825)*var2[1] + (1.e-6*t332 + 0.28121*t420 - 4.e-6*t1547*t662 + t1540*t820 + 4.e-6*(t1547*t662 - 1.*t1540*t825))*var2[2];
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace TrotStance2
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
