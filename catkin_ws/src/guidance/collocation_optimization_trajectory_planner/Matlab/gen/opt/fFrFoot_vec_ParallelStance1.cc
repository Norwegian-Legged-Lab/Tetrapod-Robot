/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:28:43 GMT+01:00
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
  double t255;
  double t164;
  double t314;
  double t274;
  double t284;
  double t312;
  double t346;
  double t352;
  double t171;
  double t252;
  double t380;
  double t392;
  double t397;
  double t549;
  double t548;
  double t489;
  double t499;
  double t508;
  double t510;
  double t523;
  double t526;
  double t534;
  double t563;
  double t568;
  double t574;
  double t653;
  double t441;
  double t467;
  double t468;
  double t639;
  double t645;
  double t646;
  double t655;
  double t659;
  double t677;
  double t678;
  double t684;
  double t685;
  double t690;
  double t699;
  double t700;
  double t703;
  double t719;
  double t722;
  double t727;
  double t728;
  double t734;
  double t737;
  double t743;
  double t745;
  double t746;
  double t747;
  double t612;
  double t768;
  double t770;
  double t775;
  double t784;
  double t787;
  double t793;
  double t795;
  double t800;
  double t807;
  double t811;
  double t812;
  double t817;
  double t828;
  double t830;
  double t833;
  double t834;
  double t596;
  double t600;
  double t610;
  double t539;
  double t579;
  double t584;
  double t379;
  double t424;
  double t425;
  double t589;
  double t617;
  double t618;
  double t859;
  double t751;
  double t753;
  double t761;
  double t733;
  double t748;
  double t749;
  double t867;
  double t665;
  double t692;
  double t704;
  double t711;
  double t750;
  double t762;
  double t763;
  double t843;
  double t846;
  double t847;
  double t819;
  double t838;
  double t840;
  double t779;
  double t789;
  double t802;
  double t804;
  double t842;
  double t848;
  double t849;
  double t862;
  double t863;
  double t864;
  double t868;
  double t877;
  double t878;
  double t899;
  double t900;
  double t902;
  double t906;
  double t907;
  double t908;
  double t914;
  double t915;
  double t917;
  double t920;
  double t926;
  double t927;
  double t713;
  double t764;
  double t766;
  double t991;
  double t994;
  double t995;
  double t999;
  double t1000;
  double t1001;
  double t1003;
  double t1006;
  double t1007;
  double t1010;
  double t1012;
  double t1018;
  double t1019;
  double t1021;
  double t1023;
  double t1025;
  double t1028;
  double t972;
  double t975;
  double t978;
  double t982;
  double t983;
  double t988;
  double t990;
  double t1004;
  double t1017;
  double t1031;
  double t1033;
  double t1035;
  double t1037;
  double t1041;
  double t1042;
  double t1046;
  double t1050;
  double t448;
  double t624;
  double t627;
  double t1057;
  double t1062;
  double t1063;
  double t1065;
  double t977;
  double t1034;
  double t1052;
  double t1054;
  double t1073;
  double t1074;
  double t1075;
  double t1077;
  double t1081;
  double t1083;
  double t1087;
  double t1089;
  double t1092;
  double t1094;
  double t1097;
  double t1055;
  double t1067;
  double t1069;
  double t1090;
  double t1103;
  double t1105;
  double t1108;
  double t1111;
  double t1112;
  double t805;
  double t851;
  double t854;
  double t1072;
  double t1120;
  double t1135;
  double t1149;
  double t1165;
  double t1173;
  double t1200;
  double t1191;
  double t1231;
  double t1227;
  double t1217;
  double t1210;
  double t1306;
  double t1405;
  double t1410;
  double t1412;
  double t1413;
  double t1393;
  double t1396;
  double t1402;
  double t1403;
  double t1426;
  double t1427;
  double t1428;
  double t1429;
  double t1431;
  double t1434;
  double t1439;
  double t1459;
  double t1463;
  double t1464;
  double t1465;
  double t1469;
  double t1472;
  double t1473;
  t255 = Cos(var1[11]);
  t164 = Cos(var1[10]);
  t314 = -1. + t255;
  t274 = -1.*t255;
  t284 = 1. + t274;
  t312 = 1.6e-11*t284;
  t346 = 1.6e-11*t314;
  t352 = -1. + t312 + t346;
  t171 = -1.*t164;
  t252 = 1. + t171;
  t380 = 4.e-6*t314;
  t392 = -4.e-6*t255;
  t397 = t380 + t392;
  t549 = Sin(var1[10]);
  t548 = Cos(var1[9]);
  t489 = -1. + t164;
  t499 = 1.6e-11*t489;
  t508 = 1. + t499;
  t510 = t508*t352;
  t523 = 4.e-6*t252*t397;
  t526 = t510 + t523;
  t534 = Sin(var1[9]);
  t563 = 4.e-6*t352*t549;
  t568 = -1.*t397*t549;
  t574 = t563 + t568;
  t653 = Sin(var1[11]);
  t441 = Sin(var1[4]);
  t467 = Cos(var1[4]);
  t468 = Cos(var1[5]);
  t639 = -1.000000000016*t284;
  t645 = 1. + t639;
  t646 = 0.004352*t645;
  t655 = -0.9999910000159999*t653;
  t659 = t646 + t655;
  t677 = -1. + t312;
  t678 = 4.e-6*t677;
  t684 = 3.999964e-6*t284;
  t685 = -1.7408e-8*t653;
  t690 = t678 + t684 + t685;
  t699 = 0.999991*t255;
  t700 = 0.004352*t653;
  t703 = t346 + t699 + t700;
  t719 = -4.e-6*t549*t659;
  t722 = t508*t690;
  t727 = 4.e-6*t252*t703;
  t728 = 0. + t719 + t722 + t727;
  t734 = -1.000000000016*t252;
  t737 = 1. + t734;
  t743 = t737*t659;
  t745 = 4.e-6*t549*t690;
  t746 = -1.*t549*t703;
  t747 = 0. + t743 + t745 + t746;
  t612 = Sin(var1[5]);
  t768 = -1.7408e-8*t284;
  t770 = -3.999964e-6*t653;
  t775 = t768 + t770;
  t784 = 0.999991*t645;
  t787 = t784 + t700;
  t793 = -0.004352*t255;
  t795 = 0.999991*t653;
  t800 = t793 + t795;
  t807 = t508*t775;
  t811 = -4.e-6*t549*t787;
  t812 = 4.e-6*t252*t800;
  t817 = 0. + t807 + t811 + t812;
  t828 = 4.e-6*t549*t775;
  t830 = t737*t787;
  t833 = -1.*t549*t800;
  t834 = 0. + t828 + t830 + t833;
  t596 = t548*t526;
  t600 = t534*t574;
  t610 = t596 + t600;
  t539 = -1.*t526*t534;
  t579 = t548*t574;
  t584 = t539 + t579;
  t379 = 4.e-6*t252*t352;
  t424 = t164*t397;
  t425 = t379 + t424;
  t589 = t468*t584;
  t617 = -1.*t610*t612;
  t618 = t589 + t617;
  t859 = Cos(var1[3]);
  t751 = t548*t728;
  t753 = t534*t747;
  t761 = 0. + t751 + t753;
  t733 = -1.*t534*t728;
  t748 = t548*t747;
  t749 = 0. + t733 + t748;
  t867 = Sin(var1[3]);
  t665 = t549*t659;
  t692 = 4.e-6*t252*t690;
  t704 = t164*t703;
  t711 = 0. + t665 + t692 + t704;
  t750 = t468*t749;
  t762 = -1.*t761*t612;
  t763 = 0. + t750 + t762;
  t843 = t548*t817;
  t846 = t534*t834;
  t847 = 0. + t843 + t846;
  t819 = -1.*t534*t817;
  t838 = t548*t834;
  t840 = 0. + t819 + t838;
  t779 = 4.e-6*t252*t775;
  t789 = t549*t787;
  t802 = t164*t800;
  t804 = 0. + t779 + t789 + t802;
  t842 = t468*t840;
  t848 = -1.*t847*t612;
  t849 = 0. + t842 + t848;
  t862 = t468*t610;
  t863 = t584*t612;
  t864 = t862 + t863;
  t868 = t425*t467;
  t877 = -1.*t441*t618;
  t878 = t868 + t877;
  t899 = t468*t761;
  t900 = t749*t612;
  t902 = 0. + t899 + t900;
  t906 = t467*t711;
  t907 = -1.*t441*t763;
  t908 = 0. + t906 + t907;
  t914 = t468*t847;
  t915 = t840*t612;
  t917 = 0. + t914 + t915;
  t920 = t467*t804;
  t926 = -1.*t441*t849;
  t927 = 0. + t920 + t926;
  t713 = t711*t441;
  t764 = t467*t763;
  t766 = 0. + t713 + t764;
  t991 = -1.26e-8*var1[11];
  t994 = 1. + t346;
  t995 = -0.14871*t994;
  t999 = -1.64779999997447e-7*t284;
  t1000 = -1.59556e-7*t314;
  t1001 = -1.199987999968e-6*t653;
  t1003 = t991 + t995 + t999 + t1000 + t1001;
  t1006 = 0.803147*t645;
  t1007 = 0.50315000001605*t284;
  t1010 = 0.00130540515936178*t653;
  t1012 = t1006 + t1007 + t1010;
  t1018 = -5.04e-14*var1[11];
  t1019 = -0.03988959484*t284;
  t1021 = 6.38224e-13*t314;
  t1023 = -0.041195*t255;
  t1025 = 0.299996999992*t653;
  t1028 = t1018 + t1019 + t1021 + t1023 + t1025;
  t972 = -1.*t548;
  t975 = 1. + t972;
  t978 = -0.15121*t534;
  t982 = -1.2484e-7*var1[10];
  t983 = 2.479936e-18*t252;
  t988 = -1.54996e-7*t489;
  t990 = 1.124840000016e-6*t549;
  t1004 = t508*t1003;
  t1017 = -4.e-6*t549*t1012;
  t1031 = 4.e-6*t252*t1028;
  t1033 = t982 + t983 + t988 + t990 + t1004 + t1017 + t1031;
  t1035 = 0.281210000008499*t252;
  t1037 = -0.03874900000062*t549;
  t1041 = 4.e-6*t549*t1003;
  t1042 = t737*t1012;
  t1046 = -1.*t549*t1028;
  t1050 = t1035 + t1037 + t1041 + t1042 + t1046;
  t448 = t425*t441;
  t624 = t467*t618;
  t627 = t448 + t624;
  t1057 = 0.15121*t975;
  t1062 = -1.*t534*t1033;
  t1063 = t548*t1050;
  t1065 = t1057 + t978 + t1062 + t1063;
  t977 = -0.15121*t975;
  t1034 = t548*t1033;
  t1052 = t534*t1050;
  t1054 = t977 + t978 + t1034 + t1052;
  t1073 = -4.9936e-13*var1[10];
  t1074 = -0.038749*t252;
  t1075 = 6.19984e-13*t489;
  t1077 = -0.281210000004*t549;
  t1081 = 4.e-6*t252*t1003;
  t1083 = t549*t1012;
  t1087 = t164*t1028;
  t1089 = 0. + t1073 + t1074 + t1075 + t1077 + t1081 + t1083 + t1087;
  t1092 = t468*t1065;
  t1094 = -1.*t1054*t612;
  t1097 = 0. + t1092 + t1094;
  t1055 = t468*t1054;
  t1067 = t1065*t612;
  t1069 = 0. + t1055 + t1067;
  t1090 = t1089*t441;
  t1103 = t467*t1097;
  t1105 = 0. + t1090 + t1103;
  t1108 = t467*t1089;
  t1111 = -1.*t441*t1097;
  t1112 = 0. + t1108 + t1111;
  t805 = t804*t441;
  t851 = t467*t849;
  t854 = 0. + t805 + t851;
  t1072 = t864*t1069;
  t1120 = -1.*t902*t1069;
  t1135 = t902*t1069;
  t1149 = -1.*t1069*t917;
  t1165 = -1.*t864*t1069;
  t1173 = t1069*t917;
  t1200 = -1.*t711*t1089;
  t1191 = t425*t1089;
  t1231 = t1089*t804;
  t1227 = -1.*t425*t1089;
  t1217 = -1.*t1089*t804;
  t1210 = t711*t1089;
  t1306 = t1073 + t1074 + t1075 + t1077 + t1081 + t1083 + t1087;
  t1405 = t1003*t690;
  t1410 = t659*t1012;
  t1412 = t703*t1028;
  t1413 = t1405 + t1410 + t1412;
  t1393 = -1.*t775*t1003;
  t1396 = -1.*t1012*t787;
  t1402 = -1.*t1028*t800;
  t1403 = t1393 + t1396 + t1402;
  t1426 = t775*t1003;
  t1427 = t1012*t787;
  t1428 = t1028*t800;
  t1429 = t1426 + t1427 + t1428;
  t1431 = -1.*t352*t1003;
  t1434 = -1.*t397*t1028;
  t1439 = t1431 + t1434;
  t1459 = -1.*t1003*t690;
  t1463 = -1.*t659*t1012;
  t1464 = -1.*t703*t1028;
  t1465 = t1459 + t1463 + t1464;
  t1469 = t352*t1003;
  t1472 = t397*t1028;
  t1473 = t1469 + t1472;
  p_output1[0]=t854*var2[0] + t766*var2[1] + t627*var2[2];
  p_output1[1]=(0. + t859*t917 - 1.*t867*t927)*var2[0] + (0. + t859*t902 - 1.*t867*t908)*var2[1] + (t859*t864 - 1.*t867*t878)*var2[2];
  p_output1[2]=(0. + t867*t917 + t859*t927)*var2[0] + (0. + t867*t902 + t859*t908)*var2[1] + (t864*t867 + t859*t878)*var2[2];
  p_output1[3]=(t766*(t1072 + t1105*t627 + t1112*t878) + t627*(t1120 - 1.*t1105*t766 - 1.*t1112*t908))*var2[0] + (t854*(t1165 - 1.*t1105*t627 - 1.*t1112*t878) + t627*(t1173 + t1105*t854 + t1112*t927))*var2[1] + (t854*(t1135 + t1105*t766 + t1112*t908) + t766*(t1149 - 1.*t1105*t854 - 1.*t1112*t927))*var2[2];
  p_output1[4]=((t1120 + t1200 - 1.*t1097*t763)*t864 + (t1072 + t1191 + t1097*t618)*t902)*var2[0] + ((t1173 + t1231 + t1097*t849)*t864 + (t1165 + t1227 - 1.*t1097*t618)*t917)*var2[1] + ((t1149 + t1217 - 1.*t1097*t849)*t902 + (t1135 + t1210 + t1097*t763)*t917)*var2[2];
  p_output1[5]=((t1191 + t1065*t584 + t1054*t610)*t711 + t425*(t1200 - 1.*t1065*t749 - 1.*t1054*t761))*var2[0] + ((t1227 - 1.*t1065*t584 - 1.*t1054*t610)*t804 + t425*(t1231 + t1065*t840 + t1054*t847))*var2[1] + ((t1210 + t1065*t749 + t1054*t761)*t804 + t711*(t1217 - 1.*t1065*t840 - 1.*t1054*t847))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=((t1306*t425 + t1033*t526 + t1050*t574)*t711 + t425*(-1.*t1306*t711 - 1.*t1033*t728 - 1.*t1050*t747) - 0.15121*t817 - 0.15121*t834)*var2[0] + (-0.15121*t728 - 0.15121*t747 + (-1.*t1306*t425 - 1.*t1033*t526 - 1.*t1050*t574)*t804 + t425*(t1306*t804 + t1033*t817 + t1050*t834))*var2[1] + (-0.15121*t526 - 0.15121*t574 + (t1306*t711 + t1033*t728 + t1050*t747)*t804 + t711*(-1.*t1306*t804 - 1.*t1033*t817 - 1.*t1050*t834))*var2[2];
  p_output1[10]=(-1.*t1465*t352 - 1.*t1473*t690 + 4.e-6*(-1.*t1465*t397 - 1.*t1473*t703) + 1.e-6*t775 - 0.038749*t787 - 0.28121*t800)*var2[0] + (-1.*t1429*t352 - 0.038749*t659 + 1.e-6*t690 - 0.28121*t703 - 1.*t1439*t775 + 4.e-6*(-1.*t1429*t397 - 1.*t1439*t800))*var2[1] + (1.e-6*t352 - 0.28121*t397 - 1.*t1403*t690 - 1.*t1413*t775 + 4.e-6*(-1.*t1403*t703 - 1.*t1413*t800))*var2[2];
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

#include "fFrFoot_vec_ParallelStance1.hh"

namespace ParallelStance1
{

void fFrFoot_vec_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
