/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 20:16:00 GMT+01:00
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
  double t367;
  double t91;
  double t145;
  double t189;
  double t206;
  double t263;
  double t325;
  double t410;
  double t418;
  double t478;
  double t504;
  double t110;
  double t599;
  double t554;
  double t679;
  double t682;
  double t707;
  double t770;
  double t782;
  double t783;
  double t832;
  double t835;
  double t837;
  double t891;
  double t1096;
  double t932;
  double t936;
  double t968;
  double t970;
  double t977;
  double t981;
  double t1124;
  double t1139;
  double t1144;
  double t1162;
  double t1216;
  double t1267;
  double t1283;
  double t1306;
  double t1345;
  double t1352;
  double t365;
  double t453;
  double t486;
  double t541;
  double t550;
  double t238;
  double t331;
  double t1477;
  double t580;
  double t587;
  double t1531;
  double t637;
  double t650;
  double t662;
  double t672;
  double t678;
  double t1529;
  double t1542;
  double t1562;
  double t1574;
  double t1584;
  double t1588;
  double t734;
  double t754;
  double t757;
  double t845;
  double t892;
  double t893;
  double t1594;
  double t1606;
  double t1608;
  double t1623;
  double t1624;
  double t1635;
  double t1083;
  double t1091;
  double t1104;
  double t1122;
  double t1123;
  double t1181;
  double t1186;
  double t1195;
  double t1196;
  double t1198;
  double t1641;
  double t1642;
  double t1656;
  double t1658;
  double t1681;
  double t1687;
  double t1689;
  double t1692;
  double t1383;
  double t1387;
  double t1718;
  double t1720;
  double t1740;
  double t1745;
  double t1430;
  double t1435;
  double t1934;
  double t1961;
  double t1964;
  double t1972;
  double t1982;
  double t1997;
  double t2021;
  double t2030;
  double t2033;
  double t2045;
  double t2052;
  double t2060;
  double t2074;
  double t2084;
  double t2095;
  double t2096;
  double t2103;
  double t2108;
  double t2127;
  double t2128;
  double t2169;
  double t2182;
  double t2183;
  double t2186;
  t367 = Cos(var1[10]);
  t91 = Cos(var1[4]);
  t145 = Cos(var1[9]);
  t189 = -1.*t145;
  t206 = 1. + t189;
  t263 = Sin(var1[9]);
  t325 = -0.15121*t263;
  t410 = -1.*t367;
  t418 = 1. + t410;
  t478 = -1. + t367;
  t504 = Sin(var1[10]);
  t110 = Cos(var1[5]);
  t599 = Sin(var1[5]);
  t554 = Sin(var1[4]);
  t679 = -1.*t91*t110*t263;
  t682 = -1.*t145*t91*t599;
  t707 = t679 + t682;
  t770 = t145*t91*t110;
  t782 = -1.*t91*t263*t599;
  t783 = t770 + t782;
  t832 = Cos(var1[11]);
  t835 = -1.*t832;
  t837 = 1. + t835;
  t891 = Sin(var1[11]);
  t1096 = -1. + t832;
  t932 = t504*t554;
  t936 = -4.e-6*t504*t707;
  t968 = -1.000000000016*t418;
  t970 = 1. + t968;
  t977 = t970*t783;
  t981 = t932 + t936 + t977;
  t1124 = t367*t554;
  t1139 = 4.e-6*t418*t707;
  t1144 = -1.*t504*t783;
  t1162 = t1124 + t1139 + t1144;
  t1216 = 4.e-6*t418*t554;
  t1267 = 1.6e-11*t478;
  t1283 = 1. + t1267;
  t1306 = t1283*t707;
  t1345 = 4.e-6*t504*t783;
  t1352 = t1216 + t1306 + t1345;
  t365 = -4.9936e-13*var1[10];
  t453 = -0.038749*t418;
  t486 = 6.19984e-13*t478;
  t541 = -0.281210000004*t504;
  t550 = t365 + t453 + t486 + t541;
  t238 = 0.15121*t206;
  t331 = t238 + t325;
  t1477 = Sin(var1[3]);
  t580 = -0.15121*t206;
  t587 = t580 + t325;
  t1531 = Cos(var1[3]);
  t637 = -1.2484e-7*var1[10];
  t650 = 2.479936e-18*t418;
  t662 = -1.54996e-7*t478;
  t672 = 1.124840000016e-6*t504;
  t678 = t637 + t650 + t662 + t672;
  t1529 = t110*t1477*t554;
  t1542 = t1531*t599;
  t1562 = t1529 + t1542;
  t1574 = t1531*t110;
  t1584 = -1.*t1477*t554*t599;
  t1588 = t1574 + t1584;
  t734 = 0.281210000008499*t418;
  t754 = -0.03874900000062*t504;
  t757 = t734 + t754;
  t845 = 0.50315000001605*t837;
  t892 = -0.0398890000006382*t891;
  t893 = t845 + t892;
  t1594 = -1.*t263*t1562;
  t1606 = t145*t1588;
  t1608 = t1594 + t1606;
  t1623 = t145*t1562;
  t1624 = t263*t1588;
  t1635 = t1623 + t1624;
  t1083 = -5.04e-14*var1[11];
  t1091 = -0.039889*t837;
  t1104 = 6.38224e-13*t1096;
  t1122 = -0.503150000008*t891;
  t1123 = t1083 + t1091 + t1104 + t1122;
  t1181 = -1.26e-8*var1[11];
  t1186 = 2.552896e-18*t837;
  t1195 = -1.59556e-7*t1096;
  t1196 = 2.012600000032e-6*t891;
  t1198 = t1181 + t1186 + t1195 + t1196;
  t1641 = -1.*t91*t504*t1477;
  t1642 = -4.e-6*t504*t1608;
  t1656 = t970*t1635;
  t1658 = t1641 + t1642 + t1656;
  t1681 = -1.*t367*t91*t1477;
  t1687 = 4.e-6*t418*t1608;
  t1689 = -1.*t504*t1635;
  t1692 = t1681 + t1687 + t1689;
  t1383 = 1.6e-11*t1096;
  t1387 = 1. + t1383;
  t1718 = -4.e-6*t418*t91*t1477;
  t1720 = t1283*t1608;
  t1740 = 4.e-6*t504*t1635;
  t1745 = t1718 + t1720 + t1740;
  t1430 = -1.000000000016*t837;
  t1435 = 1. + t1430;
  t1934 = -1.*t1531*t110*t554;
  t1961 = t1477*t599;
  t1964 = t1934 + t1961;
  t1972 = t110*t1477;
  t1982 = t1531*t554*t599;
  t1997 = t1972 + t1982;
  t2021 = -1.*t263*t1964;
  t2030 = t145*t1997;
  t2033 = t2021 + t2030;
  t2045 = t145*t1964;
  t2052 = t263*t1997;
  t2060 = t2045 + t2052;
  t2074 = t1531*t91*t504;
  t2084 = -4.e-6*t504*t2033;
  t2095 = t970*t2060;
  t2096 = t2074 + t2084 + t2095;
  t2103 = t367*t1531*t91;
  t2108 = 4.e-6*t418*t2033;
  t2127 = -1.*t504*t2060;
  t2128 = t2103 + t2108 + t2127;
  t2169 = 4.e-6*t418*t1531*t91;
  t2182 = t1283*t2033;
  t2183 = 4.e-6*t504*t2060;
  t2186 = t2169 + t2182 + t2183;
  p_output1[0]=t1123*t1162 + t1198*t1352 + t550*t554 + t678*t707 + t757*t783 + t110*t331*t91 - 1.*t587*t599*t91 + t893*t981 + 0.803147*(t1162*t891 - 4.e-6*t1352*t891 + t1435*t981) - 0.041195*(t1162*t832 + 4.e-6*t1352*t837 - 1.*t891*t981) - 0.14871*(t1352*t1387 + 4.e-6*t1162*t837 + 4.e-6*t891*t981) + var1[0] - 1.*var2[0];
  p_output1[1]=t1123*t1692 + t1198*t1745 + t1562*t331 + t1588*t587 + t1608*t678 + t1635*t757 - 0.041195*(t1692*t832 + 4.e-6*t1745*t837 - 1.*t1658*t891) - 0.14871*(t1387*t1745 + 4.e-6*t1692*t837 + 4.e-6*t1658*t891) + 0.803147*(t1435*t1658 + t1692*t891 - 4.e-6*t1745*t891) + t1658*t893 - 1.*t1477*t550*t91 + var1[1] - 1.*var2[1];
  p_output1[2]=t1123*t2128 + t1198*t2186 + t1964*t331 + t1997*t587 + t2033*t678 + t2060*t757 - 0.041195*(t2128*t832 + 4.e-6*t2186*t837 - 1.*t2096*t891) - 0.14871*(t1387*t2186 + 4.e-6*t2128*t837 + 4.e-6*t2096*t891) + 0.803147*(t1435*t2096 + t2128*t891 - 4.e-6*t2186*t891) + t2096*t893 + t1531*t550*t91 + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_TrotStance1.hh"

namespace TrotStance1
{

void h_FrFoot_TrotStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
