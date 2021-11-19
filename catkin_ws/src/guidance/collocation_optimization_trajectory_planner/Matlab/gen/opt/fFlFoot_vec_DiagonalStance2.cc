/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:30:25 GMT+01:00
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
  double t194;
  double t144;
  double t237;
  double t146;
  double t195;
  double t214;
  double t219;
  double t238;
  double t256;
  double t287;
  double t289;
  double t306;
  double t429;
  double t425;
  double t359;
  double t372;
  double t379;
  double t390;
  double t400;
  double t411;
  double t435;
  double t439;
  double t444;
  double t327;
  double t510;
  double t346;
  double t358;
  double t495;
  double t501;
  double t464;
  double t535;
  double t551;
  double t554;
  double t559;
  double t572;
  double t573;
  double t577;
  double t578;
  double t586;
  double t589;
  double t597;
  double t648;
  double t650;
  double t651;
  double t655;
  double t659;
  double t672;
  double t673;
  double t676;
  double t677;
  double t680;
  double t681;
  double t692;
  double t694;
  double t418;
  double t454;
  double t457;
  double t470;
  double t474;
  double t475;
  double t260;
  double t311;
  double t326;
  double t458;
  double t482;
  double t483;
  double t725;
  double t560;
  double t602;
  double t613;
  double t620;
  double t625;
  double t634;
  double t732;
  double t502;
  double t511;
  double t517;
  double t521;
  double t614;
  double t635;
  double t641;
  double t679;
  double t695;
  double t699;
  double t704;
  double t707;
  double t709;
  double t656;
  double t663;
  double t664;
  double t667;
  double t702;
  double t710;
  double t713;
  double t726;
  double t728;
  double t730;
  double t735;
  double t736;
  double t737;
  double t743;
  double t744;
  double t747;
  double t750;
  double t753;
  double t758;
  double t768;
  double t769;
  double t776;
  double t781;
  double t785;
  double t786;
  double t842;
  double t847;
  double t848;
  double t849;
  double t852;
  double t855;
  double t858;
  double t863;
  double t865;
  double t867;
  double t868;
  double t869;
  double t870;
  double t880;
  double t886;
  double t894;
  double t896;
  double t822;
  double t833;
  double t834;
  double t836;
  double t837;
  double t857;
  double t873;
  double t897;
  double t900;
  double t903;
  double t904;
  double t905;
  double t906;
  double t910;
  double t912;
  double t916;
  double t835;
  double t902;
  double t917;
  double t919;
  double t923;
  double t924;
  double t926;
  double t928;
  double t342;
  double t487;
  double t488;
  double t938;
  double t940;
  double t945;
  double t950;
  double t951;
  double t952;
  double t959;
  double t961;
  double t963;
  double t967;
  double t528;
  double t642;
  double t644;
  double t921;
  double t929;
  double t932;
  double t975;
  double t980;
  double t981;
  double t949;
  double t970;
  double t972;
  double t670;
  double t714;
  double t718;
  double t936;
  double t987;
  double t1014;
  double t1024;
  double t1050;
  double t1058;
  double t1074;
  double t1078;
  double t1103;
  double t1111;
  double t1133;
  double t1144;
  double t1340;
  double t1345;
  double t1346;
  double t1350;
  double t1351;
  double t1352;
  double t1354;
  double t1374;
  double t1378;
  double t1379;
  double t1380;
  double t1385;
  double t1386;
  double t1391;
  double t1398;
  double t1421;
  double t1430;
  double t1434;
  double t1439;
  double t1440;
  double t1441;
  double t1445;
  t194 = Cos(var1[8]);
  t144 = Cos(var1[7]);
  t237 = -1. + t194;
  t146 = -1. + t144;
  t195 = -1.*t194;
  t214 = 1. + t195;
  t219 = 1.6e-11*t214;
  t238 = 1.6e-11*t237;
  t256 = 1. + t219 + t238;
  t287 = 4.e-6*t237;
  t289 = -4.e-6*t194;
  t306 = t287 + t289;
  t429 = Sin(var1[7]);
  t425 = Cos(var1[6]);
  t359 = 1.6e-11*t146;
  t372 = 1. + t359;
  t379 = t372*t256;
  t390 = 4.e-6*t146*t306;
  t400 = t379 + t390;
  t411 = Sin(var1[6]);
  t435 = 4.e-6*t256*t429;
  t439 = t306*t429;
  t444 = t435 + t439;
  t327 = Sin(var1[4]);
  t510 = Sin(var1[8]);
  t346 = Cos(var1[4]);
  t358 = Cos(var1[5]);
  t495 = -1.000000000016*t214;
  t501 = 1. + t495;
  t464 = Sin(var1[5]);
  t535 = -4.e-6*t501*t429;
  t551 = -4.e-6*t372*t510;
  t554 = -4.e-6*t146*t510;
  t559 = t535 + t551 + t554;
  t572 = -1.*t144;
  t573 = 1. + t572;
  t577 = -1.000000000016*t573;
  t578 = 1. + t577;
  t586 = t578*t501;
  t589 = -1.000000000016*t429*t510;
  t597 = t586 + t589;
  t648 = -1. + t219;
  t650 = 4.e-6*t648;
  t651 = 4.e-6*t214;
  t655 = t650 + t651;
  t659 = t219 + t195;
  t672 = 4.e-6*t655*t429;
  t673 = t659*t429;
  t676 = -1.000000000016*t578*t510;
  t677 = t672 + t673 + t676;
  t680 = t372*t655;
  t681 = 4.e-6*t146*t659;
  t692 = 4.000000000064e-6*t429*t510;
  t694 = t680 + t681 + t692;
  t418 = -1.*t400*t411;
  t454 = t425*t444;
  t457 = t418 + t454;
  t470 = t425*t400;
  t474 = t411*t444;
  t475 = t470 + t474;
  t260 = 4.e-6*t146*t256;
  t311 = t144*t306;
  t326 = t260 + t311;
  t458 = t358*t457;
  t482 = -1.*t464*t475;
  t483 = t458 + t482;
  t725 = Cos(var1[3]);
  t560 = -1.*t411*t559;
  t602 = t425*t597;
  t613 = t560 + t602;
  t620 = t425*t559;
  t625 = t411*t597;
  t634 = t620 + t625;
  t732 = Sin(var1[3]);
  t502 = -1.*t501*t429;
  t511 = -1.6e-11*t146*t510;
  t517 = -1.*t144*t510;
  t521 = t502 + t511 + t517;
  t614 = t358*t613;
  t635 = -1.*t464*t634;
  t641 = t614 + t635;
  t679 = t411*t677;
  t695 = t425*t694;
  t699 = t679 + t695;
  t704 = t425*t677;
  t707 = -1.*t411*t694;
  t709 = t704 + t707;
  t656 = 4.e-6*t146*t655;
  t663 = t144*t659;
  t664 = 1.000000000016*t429*t510;
  t667 = t656 + t663 + t664;
  t702 = -1.*t464*t699;
  t710 = t358*t709;
  t713 = t702 + t710;
  t726 = t464*t457;
  t728 = t358*t475;
  t730 = t726 + t728;
  t735 = t346*t326;
  t736 = -1.*t327*t483;
  t737 = t735 + t736;
  t743 = t464*t613;
  t744 = t358*t634;
  t747 = t743 + t744;
  t750 = t346*t521;
  t753 = -1.*t327*t641;
  t758 = t750 + t753;
  t768 = t358*t699;
  t769 = t464*t709;
  t776 = t768 + t769;
  t781 = t346*t667;
  t785 = -1.*t327*t713;
  t786 = t781 + t785;
  t842 = 5.136e-14*var1[8];
  t847 = -0.03874900000062*t214;
  t848 = 5.9484e-7*t237;
  t849 = -0.03875*t194;
  t852 = -0.299999999992*t510;
  t855 = t842 + t847 + t848 + t849 + t852;
  t858 = -1.284e-8*var1[8];
  t863 = 1. + t238;
  t865 = 0.14871*t863;
  t867 = -1.5499600000248e-7*t214;
  t868 = -1.55e-7*t237;
  t869 = -1.199999999968e-6*t510;
  t870 = t858 + t865 + t867 + t868 + t869;
  t880 = 0.80321*t501;
  t886 = 0.503210000016051*t214;
  t894 = -4.05159380016e-7*t510;
  t896 = t880 + t886 + t894;
  t822 = -1.*t425;
  t833 = 1. + t822;
  t834 = 0.15121*t833;
  t836 = 0.281210000008499*t573;
  t837 = 0.03874900000062*t429;
  t857 = t429*t855;
  t873 = 4.e-6*t429*t870;
  t897 = t578*t896;
  t900 = t836 + t837 + t857 + t873 + t897;
  t903 = -1.2484e-7*var1[7];
  t904 = -1.5499600000248e-7*t573;
  t905 = 1.124840000016e-6*t429;
  t906 = 4.e-6*t146*t855;
  t910 = t372*t870;
  t912 = -4.e-6*t429*t896;
  t916 = t903 + t904 + t905 + t906 + t910 + t912;
  t835 = -0.15121*t411;
  t902 = t411*t900;
  t917 = t425*t916;
  t919 = t834 + t835 + t902 + t917;
  t923 = 0.15121*t411;
  t924 = t425*t900;
  t926 = -1.*t411*t916;
  t928 = t834 + t923 + t924 + t926;
  t342 = t326*t327;
  t487 = t346*t483;
  t488 = t342 + t487;
  t938 = -1.*t464*t919;
  t940 = t358*t928;
  t945 = t938 + t940;
  t950 = 4.9936e-13*var1[7];
  t951 = -0.03874900000062*t573;
  t952 = 0.281210000004*t429;
  t959 = t144*t855;
  t961 = 4.e-6*t146*t870;
  t963 = -1.*t429*t896;
  t967 = t950 + t951 + t952 + t959 + t961 + t963;
  t528 = t327*t521;
  t642 = t346*t641;
  t644 = t528 + t642;
  t921 = t358*t919;
  t929 = t464*t928;
  t932 = t921 + t929;
  t975 = t346*t945;
  t980 = t327*t967;
  t981 = t975 + t980;
  t949 = -1.*t327*t945;
  t970 = t346*t967;
  t972 = t949 + t970;
  t670 = t327*t667;
  t714 = t346*t713;
  t718 = t670 + t714;
  t936 = -1.*t730*t932;
  t987 = t932*t747;
  t1014 = t730*t932;
  t1024 = -1.*t932*t776;
  t1050 = -1.*t932*t747;
  t1058 = t932*t776;
  t1074 = -1.*t326*t967;
  t1078 = t967*t521;
  t1103 = t326*t967;
  t1111 = -1.*t967*t667;
  t1133 = -1.*t967*t521;
  t1144 = t967*t667;
  t1340 = -1.*t306*t855;
  t1345 = -1.*t256*t870;
  t1346 = t1340 + t1345;
  t1350 = t501*t896;
  t1351 = -1.*t855*t510;
  t1352 = -4.e-6*t870*t510;
  t1354 = t1350 + t1351 + t1352;
  t1374 = -1.*t501*t896;
  t1378 = t855*t510;
  t1379 = 4.e-6*t870*t510;
  t1380 = t1374 + t1378 + t1379;
  t1385 = t659*t855;
  t1386 = t655*t870;
  t1391 = -1.000000000016*t896*t510;
  t1398 = t1385 + t1386 + t1391;
  t1421 = t306*t855;
  t1430 = t256*t870;
  t1434 = t1421 + t1430;
  t1439 = -1.*t659*t855;
  t1440 = -1.*t655*t870;
  t1441 = 1.000000000016*t896*t510;
  t1445 = t1439 + t1440 + t1441;
  p_output1[0]=t644*var2[0] + t718*var2[1] + t488*var2[2];
  p_output1[1]=(t725*t747 - 1.*t732*t758)*var2[0] + (t725*t776 - 1.*t732*t786)*var2[1] + (t725*t730 - 1.*t732*t737)*var2[2];
  p_output1[2]=(t732*t747 + t725*t758)*var2[0] + (t732*t776 + t725*t786)*var2[1] + (t730*t732 + t725*t737)*var2[2];
  p_output1[3]=(t718*(t1014 + t737*t972 + t488*t981) + t488*(t1024 - 1.*t786*t972 - 1.*t718*t981))*var2[0] + (t644*(t936 - 1.*t737*t972 - 1.*t488*t981) + t488*(t758*t972 + t644*t981 + t987))*var2[1] + (t718*(t1050 - 1.*t758*t972 - 1.*t644*t981) + t644*(t1058 + t786*t972 + t718*t981))*var2[2];
  p_output1[4]=(t776*(t1014 + t1103 + t483*t945) + t730*(t1024 + t1111 - 1.*t713*t945))*var2[0] + (t747*(t1074 + t936 - 1.*t483*t945) + t730*(t1078 + t641*t945 + t987))*var2[1] + (t776*(t1050 + t1133 - 1.*t641*t945) + t747*(t1058 + t1144 + t713*t945))*var2[2];
  p_output1[5]=(t667*(t1103 + t475*t919 + t457*t928) + t326*(t1111 - 1.*t699*t919 - 1.*t709*t928))*var2[0] + (t521*(t1074 - 1.*t475*t919 - 1.*t457*t928) + t326*(t1078 + t634*t919 + t613*t928))*var2[1] + (t667*(t1133 - 1.*t634*t919 - 1.*t613*t928) + t521*(t1144 + t699*t919 + t709*t928))*var2[2];
  p_output1[6]=(-0.15121*t559 + 0.15121*t597 + t667*(t1103 + t444*t900 + t400*t916) + t326*(t1111 - 1.*t677*t900 - 1.*t694*t916))*var2[0] + (0.15121*t677 - 0.15121*t694 + t521*(t1074 - 1.*t444*t900 - 1.*t400*t916) + t326*(t1078 + t597*t900 + t559*t916))*var2[1] + (-0.15121*t400 + 0.15121*t444 + t667*(t1133 - 1.*t597*t900 - 1.*t559*t916) + t521*(t1144 + t677*t900 + t694*t916))*var2[2];
  p_output1[7]=(t1445*t256 + 0.038749*t501 - 0.281210000004*t510 + t1434*t655 + 4.e-6*(-1.*t1445*t306 - 1.*t1434*t659))*var2[0] + (t1354*t256 - 0.03874900000062*t510 - 4.e-6*t1346*t510 + 4.e-6*(-1.*t1354*t306 + t1346*t510) + 1.e-6*t655 + 0.28121*t659)*var2[1] + (1.e-6*t256 + 0.28121*t306 - 4.e-6*t1398*t510 + t1380*t655 + 4.e-6*(t1398*t510 - 1.*t1380*t659))*var2[2];
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

namespace DiagonalStance2
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
