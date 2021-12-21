/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:18:14 GMT+01:00
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
  double t88;
  double t99;
  double t105;
  double t150;
  double t17;
  double t27;
  double t36;
  double t42;
  double t50;
  double t56;
  double t189;
  double t191;
  double t20;
  double t290;
  double t347;
  double t137;
  double t602;
  double t603;
  double t608;
  double t620;
  double t236;
  double t521;
  double t480;
  double t484;
  double t496;
  double t569;
  double t578;
  double t583;
  double t652;
  double t198;
  double t677;
  double t152;
  double t616;
  double t762;
  double t763;
  double t802;
  double t408;
  double t692;
  double t378;
  double t839;
  double t681;
  double t691;
  double t707;
  double t708;
  double t719;
  double t730;
  double t734;
  double t736;
  double t849;
  double t784;
  double t791;
  double t801;
  double t811;
  double t813;
  double t819;
  double t823;
  double t827;
  double t862;
  double t865;
  double t873;
  double t874;
  double t877;
  double t878;
  double t879;
  double t881;
  double t755;
  double t910;
  double t771;
  double t947;
  double t899;
  double t632;
  double t69;
  double t119;
  double t155;
  double t177;
  double t212;
  double t224;
  double t226;
  double t59;
  double t65;
  double t1031;
  double t258;
  double t278;
  double t1036;
  double t320;
  double t329;
  double t379;
  double t383;
  double t413;
  double t431;
  double t460;
  double t1034;
  double t1038;
  double t1040;
  double t1044;
  double t1045;
  double t1046;
  double t513;
  double t516;
  double t522;
  double t536;
  double t541;
  double t549;
  double t556;
  double t594;
  double t609;
  double t639;
  double t648;
  double t656;
  double t663;
  double t676;
  double t1049;
  double t1051;
  double t1052;
  double t1058;
  double t1060;
  double t1061;
  double t746;
  double t747;
  double t756;
  double t761;
  double t778;
  double t779;
  double t783;
  double t835;
  double t836;
  double t841;
  double t842;
  double t850;
  double t851;
  double t856;
  double t901;
  double t1065;
  double t1066;
  double t1068;
  double t1070;
  double t912;
  double t1079;
  double t1080;
  double t1085;
  double t1087;
  double t921;
  double t923;
  double t1096;
  double t1099;
  double t1101;
  double t1106;
  double t948;
  double t956;
  double t962;
  double t996;
  double t1003;
  double t1007;
  double t1009;
  double t1013;
  double t1199;
  double t1206;
  double t1208;
  double t1225;
  double t1229;
  double t1230;
  double t1236;
  double t1240;
  double t1241;
  double t1250;
  double t1262;
  double t1277;
  double t1300;
  double t1311;
  double t1315;
  double t1322;
  double t1327;
  double t1329;
  double t1332;
  double t1333;
  double t1339;
  double t1341;
  double t1344;
  double t1346;
  t88 = Cos(var1[16]);
  t99 = -1.*t88;
  t105 = 1. + t99;
  t150 = Sin(var1[16]);
  t17 = Cos(var1[4]);
  t27 = Cos(var1[15]);
  t36 = -1.*t27;
  t42 = 1. + t36;
  t50 = -0.15121*t42;
  t56 = Sin(var1[15]);
  t189 = -1. + t88;
  t191 = 4.e-6*t189;
  t20 = Cos(var1[5]);
  t290 = Sin(var1[5]);
  t347 = 7.e-6*t105;
  t137 = 2.8e-11*t105;
  t602 = Cos(var1[17]);
  t603 = -1.*t602;
  t608 = 1. + t603;
  t620 = Sin(var1[17]);
  t236 = Sin(var1[4]);
  t521 = -4.e-6*t150;
  t480 = -1.*t17*t20*t56;
  t484 = -1.*t27*t17*t290;
  t496 = t480 + t484;
  t569 = t27*t17*t20;
  t578 = -1.*t17*t56*t290;
  t583 = t569 + t578;
  t652 = 2.8e-11*t608;
  t198 = -7.e-6*t150;
  t677 = -2.8e-11*t105;
  t152 = -1.*t150;
  t616 = 7.e-6*t608;
  t762 = -1. + t602;
  t763 = 4.e-6*t762;
  t802 = 4.e-6*t105;
  t408 = 7.e-6*t150;
  t692 = -7.e-6*t105;
  t378 = 4.e-6*t150;
  t839 = 4.e-6*t620;
  t681 = t677 + t150;
  t691 = t681*t236;
  t707 = t692 + t521;
  t708 = t707*t496;
  t719 = -1.000000000016*t105;
  t730 = 1. + t719;
  t734 = t730*t583;
  t736 = t691 + t708 + t734;
  t849 = 7.e-6*t620;
  t784 = -1.000000000049*t105;
  t791 = 1. + t784;
  t801 = t791*t236;
  t811 = t802 + t198;
  t813 = t811*t496;
  t819 = t677 + t152;
  t823 = t819*t583;
  t827 = t801 + t813 + t823;
  t862 = t802 + t408;
  t865 = t862*t236;
  t873 = -6.5e-11*t105;
  t874 = 1. + t873;
  t877 = t874*t496;
  t878 = t692 + t378;
  t879 = t878*t583;
  t881 = t865 + t877 + t879;
  t755 = -1.*t620;
  t910 = 4.e-6*t608;
  t771 = -7.e-6*t620;
  t947 = -2.8e-11*t608;
  t899 = -7.e-6*t608;
  t632 = -4.e-6*t620;
  t69 = 1.5843479999999999e-12*var1[16];
  t119 = -0.03874900000889869*t105;
  t155 = t137 + t152;
  t177 = -0.281211000004*t155;
  t212 = t191 + t198;
  t224 = -1.8134809999999998e-6*t212;
  t226 = t69 + t119 + t177 + t224;
  t59 = -0.15121*t56;
  t65 = t50 + t59;
  t1031 = Sin(var1[3]);
  t258 = 0.15121*t56;
  t278 = t50 + t258;
  t1036 = Cos(var1[3]);
  t320 = 3.9608699999999997e-7*var1[16];
  t329 = -1.1787626499999999e-16*t105;
  t379 = t347 + t378;
  t383 = -0.281211000004*t379;
  t413 = t191 + t408;
  t431 = -0.038749000006999997*t413;
  t460 = t320 + t329 + t383 + t431;
  t1034 = t20*t1031*t236;
  t1038 = t1036*t290;
  t1040 = t1034 + t1038;
  t1044 = t1036*t20;
  t1045 = -1.*t1031*t236*t290;
  t1046 = t1044 + t1045;
  t513 = -2.7726089999999997e-12*var1[16];
  t516 = -0.2812110000084994*t105;
  t522 = t347 + t521;
  t536 = -1.8134809999999998e-6*t522;
  t541 = t137 + t150;
  t549 = -0.038749000006999997*t541;
  t556 = t513 + t516 + t536 + t549;
  t594 = -1.9784030000000015e-12*var1[17];
  t609 = -0.5031510000160505*t608;
  t639 = t616 + t632;
  t648 = -3.367757e-6*t639;
  t656 = t652 + t620;
  t663 = -0.038575000014*t656;
  t676 = t594 + t609 + t648 + t663;
  t1049 = -1.*t56*t1040;
  t1051 = t27*t1046;
  t1052 = t1049 + t1051;
  t1058 = t27*t1040;
  t1060 = t56*t1046;
  t1061 = t1058 + t1060;
  t746 = 1.1305160000000008e-12*var1[17];
  t747 = -0.03857500001589017*t608;
  t756 = t652 + t755;
  t761 = -0.5031510000080001*t756;
  t778 = t763 + t771;
  t779 = -3.367757e-6*t778;
  t783 = t746 + t747 + t761 + t779;
  t835 = 2.826290000000002e-7*var1[17];
  t836 = -2.18904205e-16*t608;
  t841 = t616 + t839;
  t842 = -0.5031510000080001*t841;
  t850 = t763 + t849;
  t851 = -0.038575000014*t850;
  t856 = t835 + t836 + t842 + t851;
  t901 = t899 + t839;
  t1065 = -1.*t17*t681*t1031;
  t1066 = t707*t1052;
  t1068 = t730*t1061;
  t1070 = t1065 + t1066 + t1068;
  t912 = t910 + t849;
  t1079 = -1.*t791*t17*t1031;
  t1080 = t811*t1052;
  t1085 = t819*t1061;
  t1087 = t1079 + t1080 + t1085;
  t921 = -6.5e-11*t608;
  t923 = 1. + t921;
  t1096 = -1.*t17*t862*t1031;
  t1099 = t874*t1052;
  t1101 = t878*t1061;
  t1106 = t1096 + t1099 + t1101;
  t948 = t947 + t755;
  t956 = -1.000000000049*t608;
  t962 = 1. + t956;
  t996 = t910 + t771;
  t1003 = -1.000000000016*t608;
  t1007 = 1. + t1003;
  t1009 = t947 + t620;
  t1013 = t899 + t632;
  t1199 = -1.*t1036*t20*t236;
  t1206 = t1031*t290;
  t1208 = t1199 + t1206;
  t1225 = t20*t1031;
  t1229 = t1036*t236*t290;
  t1230 = t1225 + t1229;
  t1236 = -1.*t56*t1208;
  t1240 = t27*t1230;
  t1241 = t1236 + t1240;
  t1250 = t27*t1208;
  t1262 = t56*t1230;
  t1277 = t1250 + t1262;
  t1300 = t1036*t17*t681;
  t1311 = t707*t1241;
  t1315 = t730*t1277;
  t1322 = t1300 + t1311 + t1315;
  t1327 = t791*t1036*t17;
  t1329 = t811*t1241;
  t1332 = t819*t1277;
  t1333 = t1327 + t1329 + t1332;
  t1339 = t1036*t17*t862;
  t1341 = t874*t1241;
  t1344 = t878*t1277;
  t1346 = t1339 + t1341 + t1344;
  p_output1[0]=t226*t236 - 1.*t17*t278*t290 + t460*t496 + t556*t583 + t17*t20*t65 + t676*t736 + t783*t827 + t856*t881 - 0.80315*(t1007*t736 + t1009*t827 + t1013*t881) - 0.148715*(t736*t901 + t827*t912 + t881*t923) - 0.038576*(t736*t948 + t827*t962 + t881*t996) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.80315*(t1007*t1070 + t1009*t1087 + t1013*t1106) - 1.*t1031*t17*t226 + t1046*t278 + t1052*t460 + t1061*t556 + t1040*t65 + t1070*t676 + t1087*t783 + t1106*t856 - 0.148715*(t1070*t901 + t1087*t912 + t1106*t923) - 0.038576*(t1070*t948 + t1087*t962 + t1106*t996) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.80315*(t1007*t1322 + t1009*t1333 + t1013*t1346) + t1036*t17*t226 + t1230*t278 + t1241*t460 + t1277*t556 + t1208*t65 + t1322*t676 + t1333*t783 + t1346*t856 - 0.148715*(t1322*t901 + t1333*t912 + t1346*t923) - 0.038576*(t1322*t948 + t1333*t962 + t1346*t996) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_DiagonalStance2.hh"

namespace TrotStance2
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
