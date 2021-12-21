/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:33:16 GMT+01:00
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
  double t213;
  double t76;
  double t111;
  double t120;
  double t131;
  double t150;
  double t164;
  double t216;
  double t240;
  double t261;
  double t275;
  double t77;
  double t332;
  double t309;
  double t475;
  double t518;
  double t529;
  double t571;
  double t589;
  double t599;
  double t644;
  double t649;
  double t798;
  double t832;
  double t1049;
  double t907;
  double t929;
  double t938;
  double t968;
  double t975;
  double t983;
  double t1165;
  double t1235;
  double t1339;
  double t1356;
  double t1530;
  double t1544;
  double t1558;
  double t1587;
  double t1591;
  double t1593;
  double t205;
  double t255;
  double t272;
  double t283;
  double t293;
  double t132;
  double t185;
  double t1955;
  double t321;
  double t326;
  double t1968;
  double t381;
  double t416;
  double t438;
  double t459;
  double t472;
  double t1963;
  double t1979;
  double t1983;
  double t2004;
  double t2005;
  double t2006;
  double t544;
  double t547;
  double t564;
  double t799;
  double t855;
  double t882;
  double t2031;
  double t2041;
  double t2058;
  double t2082;
  double t2094;
  double t2103;
  double t1029;
  double t1048;
  double t1092;
  double t1122;
  double t1159;
  double t1378;
  double t1398;
  double t1399;
  double t1400;
  double t1402;
  double t2112;
  double t2118;
  double t2125;
  double t2132;
  double t2156;
  double t2158;
  double t2170;
  double t2206;
  double t1661;
  double t1685;
  double t2212;
  double t2230;
  double t2231;
  double t2235;
  double t1863;
  double t1865;
  double t2403;
  double t2414;
  double t2430;
  double t2445;
  double t2455;
  double t2490;
  double t2493;
  double t2501;
  double t2513;
  double t2520;
  double t2521;
  double t2544;
  double t2555;
  double t2567;
  double t2573;
  double t2574;
  double t2630;
  double t2649;
  double t2661;
  double t2662;
  double t2675;
  double t2679;
  double t2680;
  double t2683;
  t213 = Cos(var1[10]);
  t76 = Cos(var1[4]);
  t111 = Cos(var1[9]);
  t120 = -1.*t111;
  t131 = 1. + t120;
  t150 = Sin(var1[9]);
  t164 = -0.15121*t150;
  t216 = -1.*t213;
  t240 = 1. + t216;
  t261 = -1. + t213;
  t275 = Sin(var1[10]);
  t77 = Cos(var1[5]);
  t332 = Sin(var1[5]);
  t309 = Sin(var1[4]);
  t475 = -1.*t76*t77*t150;
  t518 = -1.*t111*t76*t332;
  t529 = t475 + t518;
  t571 = t111*t76*t77;
  t589 = -1.*t76*t150*t332;
  t599 = t571 + t589;
  t644 = Cos(var1[11]);
  t649 = -1.*t644;
  t798 = 1. + t649;
  t832 = Sin(var1[11]);
  t1049 = -1. + t644;
  t907 = t275*t309;
  t929 = -4.e-6*t275*t529;
  t938 = -1.000000000016*t240;
  t968 = 1. + t938;
  t975 = t968*t599;
  t983 = t907 + t929 + t975;
  t1165 = t213*t309;
  t1235 = 4.e-6*t240*t529;
  t1339 = -1.*t275*t599;
  t1356 = t1165 + t1235 + t1339;
  t1530 = 4.e-6*t240*t309;
  t1544 = 1.6e-11*t261;
  t1558 = 1. + t1544;
  t1587 = t1558*t529;
  t1591 = 4.e-6*t275*t599;
  t1593 = t1530 + t1587 + t1591;
  t205 = -4.9936e-13*var1[10];
  t255 = -0.038749*t240;
  t272 = 6.19984e-13*t261;
  t283 = -0.281210000004*t275;
  t293 = t205 + t255 + t272 + t283;
  t132 = 0.15121*t131;
  t185 = t132 + t164;
  t1955 = Sin(var1[3]);
  t321 = -0.15121*t131;
  t326 = t321 + t164;
  t1968 = Cos(var1[3]);
  t381 = -1.2484e-7*var1[10];
  t416 = 2.479936e-18*t240;
  t438 = -1.54996e-7*t261;
  t459 = 1.124840000016e-6*t275;
  t472 = t381 + t416 + t438 + t459;
  t1963 = t77*t1955*t309;
  t1979 = t1968*t332;
  t1983 = t1963 + t1979;
  t2004 = t1968*t77;
  t2005 = -1.*t1955*t309*t332;
  t2006 = t2004 + t2005;
  t544 = 0.281210000008499*t240;
  t547 = -0.03874900000062*t275;
  t564 = t544 + t547;
  t799 = 0.50315000001605*t798;
  t855 = -0.0398890000006382*t832;
  t882 = t799 + t855;
  t2031 = -1.*t150*t1983;
  t2041 = t111*t2006;
  t2058 = t2031 + t2041;
  t2082 = t111*t1983;
  t2094 = t150*t2006;
  t2103 = t2082 + t2094;
  t1029 = -5.04e-14*var1[11];
  t1048 = -0.039889*t798;
  t1092 = 6.38224e-13*t1049;
  t1122 = -0.503150000008*t832;
  t1159 = t1029 + t1048 + t1092 + t1122;
  t1378 = -1.26e-8*var1[11];
  t1398 = 2.552896e-18*t798;
  t1399 = -1.59556e-7*t1049;
  t1400 = 2.012600000032e-6*t832;
  t1402 = t1378 + t1398 + t1399 + t1400;
  t2112 = -1.*t76*t275*t1955;
  t2118 = -4.e-6*t275*t2058;
  t2125 = t968*t2103;
  t2132 = t2112 + t2118 + t2125;
  t2156 = -1.*t213*t76*t1955;
  t2158 = 4.e-6*t240*t2058;
  t2170 = -1.*t275*t2103;
  t2206 = t2156 + t2158 + t2170;
  t1661 = 1.6e-11*t1049;
  t1685 = 1. + t1661;
  t2212 = -4.e-6*t240*t76*t1955;
  t2230 = t1558*t2058;
  t2231 = 4.e-6*t275*t2103;
  t2235 = t2212 + t2230 + t2231;
  t1863 = -1.000000000016*t798;
  t1865 = 1. + t1863;
  t2403 = -1.*t1968*t77*t309;
  t2414 = t1955*t332;
  t2430 = t2403 + t2414;
  t2445 = t77*t1955;
  t2455 = t1968*t309*t332;
  t2490 = t2445 + t2455;
  t2493 = -1.*t150*t2430;
  t2501 = t111*t2490;
  t2513 = t2493 + t2501;
  t2520 = t111*t2430;
  t2521 = t150*t2490;
  t2544 = t2520 + t2521;
  t2555 = t1968*t76*t275;
  t2567 = -4.e-6*t275*t2513;
  t2573 = t968*t2544;
  t2574 = t2555 + t2567 + t2573;
  t2630 = t213*t1968*t76;
  t2649 = 4.e-6*t240*t2513;
  t2661 = -1.*t275*t2544;
  t2662 = t2630 + t2649 + t2661;
  t2675 = 4.e-6*t240*t1968*t76;
  t2679 = t1558*t2513;
  t2680 = 4.e-6*t275*t2544;
  t2683 = t2675 + t2679 + t2680;
  p_output1[0]=t1159*t1356 + t1402*t1593 + t293*t309 + t472*t529 + t564*t599 - 1.*t326*t332*t76 + t185*t76*t77 + t882*t983 + 0.803147*(t1356*t832 - 4.e-6*t1593*t832 + t1865*t983) - 0.041195*(t1356*t644 + 4.e-6*t1593*t798 - 1.*t832*t983) - 0.14871*(t1593*t1685 + 4.e-6*t1356*t798 + 4.e-6*t832*t983) + var1[0] - 1.*var2[0];
  p_output1[1]=t185*t1983 + t1159*t2206 + t1402*t2235 + t2006*t326 + t2058*t472 + t2103*t564 - 1.*t1955*t293*t76 - 0.041195*(t2206*t644 + 4.e-6*t2235*t798 - 1.*t2132*t832) - 0.14871*(t1685*t2235 + 4.e-6*t2206*t798 + 4.e-6*t2132*t832) + 0.803147*(t1865*t2132 + t2206*t832 - 4.e-6*t2235*t832) + t2132*t882 + var1[1] - 1.*var2[1];
  p_output1[2]=t185*t2430 + t1159*t2662 + t1402*t2683 + t2490*t326 + t2513*t472 + t2544*t564 + t1968*t293*t76 - 0.041195*(t2662*t644 + 4.e-6*t2683*t798 - 1.*t2574*t832) - 0.14871*(t1685*t2683 + 4.e-6*t2662*t798 + 4.e-6*t2574*t832) + 0.803147*(t1865*t2574 + t2662*t832 - 4.e-6*t2683*t832) + t2574*t882 + var1[2] - 1.*var2[2];
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
