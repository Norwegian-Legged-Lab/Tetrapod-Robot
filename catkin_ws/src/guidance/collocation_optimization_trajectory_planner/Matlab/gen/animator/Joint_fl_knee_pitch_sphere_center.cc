/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:24 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t56;
  double t74;
  double t105;
  double t195;
  double t241;
  double t291;
  double t57;
  double t535;
  double t816;
  double t853;
  double t876;
  double t912;
  double t1151;
  double t1249;
  double t631;
  double t728;
  double t778;
  double t989;
  double t1033;
  double t1056;
  double t1312;
  double t1313;
  double t1315;
  double t1331;
  double t1269;
  double t1271;
  double t1272;
  double t1288;
  double t1290;
  double t1294;
  double t1436;
  double t1407;
  double t1410;
  double t1411;
  double t1414;
  double t1342;
  double t1356;
  double t1362;
  double t1365;
  double t1372;
  double t1389;
  double t372;
  double t425;
  double t1545;
  double t1533;
  double t543;
  double t571;
  double t1538;
  double t1547;
  double t1549;
  double t1572;
  double t1588;
  double t1591;
  double t805;
  double t899;
  double t956;
  double t964;
  double t1080;
  double t1092;
  double t1131;
  double t1161;
  double t1180;
  double t1213;
  double t1230;
  double t1601;
  double t1602;
  double t1608;
  double t1616;
  double t1627;
  double t1639;
  double t1308;
  double t1317;
  double t1333;
  double t1337;
  double t1390;
  double t1392;
  double t1396;
  double t1415;
  double t1421;
  double t1423;
  double t1430;
  double t1459;
  double t1474;
  double t1649;
  double t1659;
  double t1662;
  double t1667;
  double t1740;
  double t1766;
  double t1767;
  double t1777;
  double t1677;
  double t1716;
  double t1718;
  double t1724;
  double t1516;
  double t1519;
  double t1867;
  double t1874;
  double t1876;
  double t1885;
  double t1897;
  double t1898;
  double t1906;
  double t1910;
  double t1922;
  double t1950;
  double t1954;
  double t1959;
  double t1978;
  double t1982;
  double t1984;
  double t1987;
  double t2020;
  double t2021;
  double t2030;
  double t2031;
  double t1992;
  double t1993;
  double t1998;
  double t2004;
  t56 = Cos(var1[4]);
  t74 = Cos(var1[6]);
  t105 = -1.*t74;
  t195 = 1. + t105;
  t241 = 0.15121*t195;
  t291 = Sin(var1[6]);
  t57 = Sin(var1[5]);
  t535 = Cos(var1[5]);
  t816 = Cos(var1[7]);
  t853 = -1.*t816;
  t876 = 1. + t853;
  t912 = Sin(var1[7]);
  t1151 = Sin(var1[4]);
  t1249 = -1. + t816;
  t631 = -1.*t56*t74*t57;
  t728 = -1.*t56*t535*t291;
  t778 = t631 + t728;
  t989 = t56*t535*t74;
  t1033 = -1.*t56*t57*t291;
  t1056 = t989 + t1033;
  t1312 = Cos(var1[8]);
  t1313 = -1.*t1312;
  t1315 = 1. + t1313;
  t1331 = Sin(var1[8]);
  t1269 = 4.e-6*t1249*t1151;
  t1271 = 1.6e-11*t1249;
  t1272 = 1. + t1271;
  t1288 = t1272*t778;
  t1290 = 4.e-6*t1056*t912;
  t1294 = t1269 + t1288 + t1290;
  t1436 = -1. + t1312;
  t1407 = t816*t1151;
  t1410 = 4.e-6*t1249*t778;
  t1411 = t1056*t912;
  t1414 = t1407 + t1410 + t1411;
  t1342 = -1.000000000016*t876;
  t1356 = 1. + t1342;
  t1362 = t1356*t1056;
  t1365 = -1.*t1151*t912;
  t1372 = -4.e-6*t778*t912;
  t1389 = t1362 + t1365 + t1372;
  t372 = -0.15121*t291;
  t425 = t241 + t372;
  t1545 = Sin(var1[3]);
  t1533 = Cos(var1[3]);
  t543 = 0.15121*t291;
  t571 = t241 + t543;
  t1538 = t1533*t535;
  t1547 = -1.*t1545*t1151*t57;
  t1549 = t1538 + t1547;
  t1572 = t535*t1545*t1151;
  t1588 = t1533*t57;
  t1591 = t1572 + t1588;
  t805 = -1.2484e-7*var1[7];
  t899 = -1.5499600000248e-7*t876;
  t956 = 1.124840000016e-6*t912;
  t964 = t805 + t899 + t956;
  t1080 = 0.281210000008499*t876;
  t1092 = 0.03874900000062*t912;
  t1131 = t1080 + t1092;
  t1161 = 4.9936e-13*var1[7];
  t1180 = -0.03874900000062*t876;
  t1213 = 0.281210000004*t912;
  t1230 = t1161 + t1180 + t1213;
  t1601 = t74*t1549;
  t1602 = -1.*t1591*t291;
  t1608 = t1601 + t1602;
  t1616 = t74*t1591;
  t1627 = t1549*t291;
  t1639 = t1616 + t1627;
  t1308 = -1.284e-8*var1[8];
  t1317 = -1.5499600000248e-7*t1315;
  t1333 = 2.012840000032e-6*t1331;
  t1337 = t1308 + t1317 + t1333;
  t1390 = 0.503210000016051*t1315;
  t1392 = 0.03874900000062*t1331;
  t1396 = t1390 + t1392;
  t1415 = 5.136e-14*var1[8];
  t1421 = -0.03874900000062*t1315;
  t1423 = 0.503210000008*t1331;
  t1430 = t1415 + t1421 + t1423;
  t1459 = 1.6e-11*t1436;
  t1474 = 1. + t1459;
  t1649 = -4.e-6*t56*t1249*t1545;
  t1659 = t1272*t1608;
  t1662 = 4.e-6*t1639*t912;
  t1667 = t1649 + t1659 + t1662;
  t1740 = -1.*t56*t816*t1545;
  t1766 = 4.e-6*t1249*t1608;
  t1767 = t1639*t912;
  t1777 = t1740 + t1766 + t1767;
  t1677 = t1356*t1639;
  t1716 = t56*t1545*t912;
  t1718 = -4.e-6*t1608*t912;
  t1724 = t1677 + t1716 + t1718;
  t1516 = -1.000000000016*t1315;
  t1519 = 1. + t1516;
  t1867 = t535*t1545;
  t1874 = t1533*t1151*t57;
  t1876 = t1867 + t1874;
  t1885 = -1.*t1533*t535*t1151;
  t1897 = t1545*t57;
  t1898 = t1885 + t1897;
  t1906 = t74*t1876;
  t1910 = -1.*t1898*t291;
  t1922 = t1906 + t1910;
  t1950 = t74*t1898;
  t1954 = t1876*t291;
  t1959 = t1950 + t1954;
  t1978 = 4.e-6*t1533*t56*t1249;
  t1982 = t1272*t1922;
  t1984 = 4.e-6*t1959*t912;
  t1987 = t1978 + t1982 + t1984;
  t2020 = t1533*t56*t816;
  t2021 = 4.e-6*t1249*t1922;
  t2030 = t1959*t912;
  t2031 = t2020 + t2021 + t2030;
  t1992 = t1356*t1959;
  t1993 = -1.*t1533*t56*t912;
  t1998 = -4.e-6*t1922*t912;
  t2004 = t1992 + t1993 + t1998;
  p_output1[0]=t1056*t1131 + t1151*t1230 + t1294*t1337 + t1389*t1396 + t1414*t1430 - 0.03875*(t1331*t1389 + t1312*t1414 + 4.e-6*t1294*t1436) + 0.16571*(4.e-6*t1331*t1389 + 4.e-6*t1414*t1436 + t1294*t1474) + 0.50321*(-4.e-6*t1294*t1331 - 1.*t1331*t1414 + t1389*t1519) - 1.*t425*t56*t57 + t535*t56*t571 + t778*t964 + var1[0];
  p_output1[1]=t1131*t1639 + t1337*t1667 + t1396*t1724 + t1430*t1777 - 0.03875*(4.e-6*t1436*t1667 + t1331*t1724 + t1312*t1777) + 0.50321*(-4.e-6*t1331*t1667 + t1519*t1724 - 1.*t1331*t1777) + 0.16571*(t1474*t1667 + 4.e-6*t1331*t1724 + 4.e-6*t1436*t1777) + t1549*t425 - 1.*t1230*t1545*t56 + t1591*t571 + t1608*t964 + var1[1];
  p_output1[2]=t1131*t1959 + t1337*t1987 + t1396*t2004 + t1430*t2031 - 0.03875*(4.e-6*t1436*t1987 + t1331*t2004 + t1312*t2031) + 0.50321*(-4.e-6*t1331*t1987 + t1519*t2004 - 1.*t1331*t2031) + 0.16571*(t1474*t1987 + 4.e-6*t1331*t2004 + 4.e-6*t1436*t2031) + t1876*t425 + t1230*t1533*t56 + t1898*t571 + t1922*t964 + var1[2];
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fl_knee_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_knee_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
