/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 17:51:51 GMT+01:00
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
  double t131;
  double t39;
  double t57;
  double t70;
  double t73;
  double t83;
  double t94;
  double t143;
  double t156;
  double t187;
  double t217;
  double t50;
  double t301;
  double t239;
  double t378;
  double t383;
  double t387;
  double t445;
  double t447;
  double t457;
  double t509;
  double t516;
  double t519;
  double t574;
  double t749;
  double t625;
  double t640;
  double t653;
  double t671;
  double t677;
  double t692;
  double t787;
  double t793;
  double t816;
  double t831;
  double t861;
  double t871;
  double t911;
  double t933;
  double t935;
  double t942;
  double t129;
  double t182;
  double t204;
  double t227;
  double t231;
  double t80;
  double t100;
  double t1083;
  double t280;
  double t295;
  double t1105;
  double t307;
  double t326;
  double t363;
  double t367;
  double t377;
  double t1092;
  double t1120;
  double t1127;
  double t1133;
  double t1136;
  double t1145;
  double t428;
  double t435;
  double t440;
  double t547;
  double t582;
  double t613;
  double t1158;
  double t1159;
  double t1161;
  double t1174;
  double t1177;
  double t1178;
  double t724;
  double t746;
  double t750;
  double t762;
  double t783;
  double t839;
  double t844;
  double t845;
  double t849;
  double t852;
  double t1184;
  double t1185;
  double t1204;
  double t1210;
  double t1235;
  double t1244;
  double t1252;
  double t1256;
  double t964;
  double t967;
  double t1263;
  double t1265;
  double t1266;
  double t1277;
  double t1037;
  double t1041;
  double t1431;
  double t1435;
  double t1452;
  double t1455;
  double t1460;
  double t1462;
  double t1471;
  double t1476;
  double t1479;
  double t1498;
  double t1502;
  double t1508;
  double t1525;
  double t1528;
  double t1546;
  double t1550;
  double t1583;
  double t1585;
  double t1594;
  double t1596;
  double t1618;
  double t1624;
  double t1628;
  double t1630;
  t131 = Cos(var1[10]);
  t39 = Cos(var1[4]);
  t57 = Cos(var1[9]);
  t70 = -1.*t57;
  t73 = 1. + t70;
  t83 = Sin(var1[9]);
  t94 = -0.15121*t83;
  t143 = -1.*t131;
  t156 = 1. + t143;
  t187 = -1. + t131;
  t217 = Sin(var1[10]);
  t50 = Cos(var1[5]);
  t301 = Sin(var1[5]);
  t239 = Sin(var1[4]);
  t378 = -1.*t39*t50*t83;
  t383 = -1.*t57*t39*t301;
  t387 = t378 + t383;
  t445 = t57*t39*t50;
  t447 = -1.*t39*t83*t301;
  t457 = t445 + t447;
  t509 = Cos(var1[11]);
  t516 = -1.*t509;
  t519 = 1. + t516;
  t574 = Sin(var1[11]);
  t749 = -1. + t509;
  t625 = t217*t239;
  t640 = -4.e-6*t217*t387;
  t653 = -1.000000000016*t156;
  t671 = 1. + t653;
  t677 = t671*t457;
  t692 = t625 + t640 + t677;
  t787 = t131*t239;
  t793 = 4.e-6*t156*t387;
  t816 = -1.*t217*t457;
  t831 = t787 + t793 + t816;
  t861 = 4.e-6*t156*t239;
  t871 = 1.6e-11*t187;
  t911 = 1. + t871;
  t933 = t911*t387;
  t935 = 4.e-6*t217*t457;
  t942 = t861 + t933 + t935;
  t129 = -4.9936e-13*var1[10];
  t182 = -0.038749*t156;
  t204 = 6.19984e-13*t187;
  t227 = -0.281210000004*t217;
  t231 = t129 + t182 + t204 + t227;
  t80 = 0.15121*t73;
  t100 = t80 + t94;
  t1083 = Sin(var1[3]);
  t280 = -0.15121*t73;
  t295 = t280 + t94;
  t1105 = Cos(var1[3]);
  t307 = -1.2484e-7*var1[10];
  t326 = 2.479936e-18*t156;
  t363 = -1.54996e-7*t187;
  t367 = 1.124840000016e-6*t217;
  t377 = t307 + t326 + t363 + t367;
  t1092 = t50*t1083*t239;
  t1120 = t1105*t301;
  t1127 = t1092 + t1120;
  t1133 = t1105*t50;
  t1136 = -1.*t1083*t239*t301;
  t1145 = t1133 + t1136;
  t428 = 0.281210000008499*t156;
  t435 = -0.03874900000062*t217;
  t440 = t428 + t435;
  t547 = 0.50315000001605*t519;
  t582 = -0.0398890000006382*t574;
  t613 = t547 + t582;
  t1158 = -1.*t83*t1127;
  t1159 = t57*t1145;
  t1161 = t1158 + t1159;
  t1174 = t57*t1127;
  t1177 = t83*t1145;
  t1178 = t1174 + t1177;
  t724 = -5.04e-14*var1[11];
  t746 = -0.039889*t519;
  t750 = 6.38224e-13*t749;
  t762 = -0.503150000008*t574;
  t783 = t724 + t746 + t750 + t762;
  t839 = -1.26e-8*var1[11];
  t844 = 2.552896e-18*t519;
  t845 = -1.59556e-7*t749;
  t849 = 2.012600000032e-6*t574;
  t852 = t839 + t844 + t845 + t849;
  t1184 = -1.*t39*t217*t1083;
  t1185 = -4.e-6*t217*t1161;
  t1204 = t671*t1178;
  t1210 = t1184 + t1185 + t1204;
  t1235 = -1.*t131*t39*t1083;
  t1244 = 4.e-6*t156*t1161;
  t1252 = -1.*t217*t1178;
  t1256 = t1235 + t1244 + t1252;
  t964 = 1.6e-11*t749;
  t967 = 1. + t964;
  t1263 = -4.e-6*t156*t39*t1083;
  t1265 = t911*t1161;
  t1266 = 4.e-6*t217*t1178;
  t1277 = t1263 + t1265 + t1266;
  t1037 = -1.000000000016*t519;
  t1041 = 1. + t1037;
  t1431 = -1.*t1105*t50*t239;
  t1435 = t1083*t301;
  t1452 = t1431 + t1435;
  t1455 = t50*t1083;
  t1460 = t1105*t239*t301;
  t1462 = t1455 + t1460;
  t1471 = -1.*t83*t1452;
  t1476 = t57*t1462;
  t1479 = t1471 + t1476;
  t1498 = t57*t1452;
  t1502 = t83*t1462;
  t1508 = t1498 + t1502;
  t1525 = t1105*t39*t217;
  t1528 = -4.e-6*t217*t1479;
  t1546 = t671*t1508;
  t1550 = t1525 + t1528 + t1546;
  t1583 = t131*t1105*t39;
  t1585 = 4.e-6*t156*t1479;
  t1594 = -1.*t217*t1508;
  t1596 = t1583 + t1585 + t1594;
  t1618 = 4.e-6*t156*t1105*t39;
  t1624 = t911*t1479;
  t1628 = 4.e-6*t217*t1508;
  t1630 = t1618 + t1624 + t1628;
  p_output1[0]=t231*t239 + t377*t387 - 1.*t295*t301*t39 + t440*t457 + t100*t39*t50 + t613*t692 + t783*t831 + t852*t942 - 0.041195*(-1.*t574*t692 + t509*t831 + 4.e-6*t519*t942) + 0.803147*(t1041*t692 + t574*t831 - 4.e-6*t574*t942) - 0.14871*(4.e-6*t574*t692 + 4.e-6*t519*t831 + t942*t967) + var1[0] - 1.*var2[0];
  p_output1[1]=t100*t1127 + t1145*t295 + t1161*t377 - 1.*t1083*t231*t39 + t1178*t440 - 0.041195*(t1256*t509 + 4.e-6*t1277*t519 - 1.*t1210*t574) + 0.803147*(t1041*t1210 + t1256*t574 - 4.e-6*t1277*t574) + t1210*t613 + t1256*t783 + t1277*t852 - 0.14871*(4.e-6*t1256*t519 + 4.e-6*t1210*t574 + t1277*t967) + var1[1] - 1.*var2[1];
  p_output1[2]=t100*t1452 + t1462*t295 + t1479*t377 + t1105*t231*t39 + t1508*t440 - 0.041195*(t1596*t509 + 4.e-6*t1630*t519 - 1.*t1550*t574) + 0.803147*(t1041*t1550 + t1596*t574 - 4.e-6*t1630*t574) + t1550*t613 + t1596*t783 + t1630*t852 - 0.14871*(4.e-6*t1596*t519 + 4.e-6*t1550*t574 + t1630*t967) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_QuadrupleStance.hh"

namespace QuadrupleStance
{

void h_FrFoot_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
