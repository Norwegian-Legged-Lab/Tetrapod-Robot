/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:30 GMT+02:00
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
  double t368;
  double t363;
  double t381;
  double t788;
  double t729;
  double t768;
  double t791;
  double t339;
  double t787;
  double t792;
  double t797;
  double t385;
  double t809;
  double t812;
  double t819;
  double t802;
  double t927;
  double t932;
  double t832;
  double t834;
  double t863;
  double t877;
  double t884;
  double t888;
  double t891;
  double t897;
  double t898;
  double t945;
  double t949;
  double t1004;
  double t1035;
  double t1038;
  double t1045;
  double t1048;
  double t1050;
  double t1052;
  double t1059;
  double t1060;
  double t1063;
  double t1068;
  double t1069;
  double t1077;
  double t800;
  double t864;
  double t865;
  double t1293;
  double t1295;
  double t1358;
  double t1368;
  double t1412;
  double t1420;
  double t1433;
  double t1456;
  double t1466;
  double t364;
  double t700;
  double t727;
  double t1283;
  double t1363;
  double t1492;
  double t1498;
  double t1522;
  double t1523;
  double t1526;
  double t1530;
  double t1538;
  double t1539;
  double t1248;
  double t1249;
  double t1269;
  double t1280;
  double t1500;
  double t1515;
  double t1547;
  double t1555;
  double t1556;
  double t1558;
  double t1563;
  double t1567;
  double t1516;
  double t1540;
  double t1541;
  double t1557;
  double t1570;
  double t1573;
  double t1575;
  double t1576;
  double t1584;
  double t876;
  double t899;
  double t913;
  double t1542;
  double t1594;
  double t1615;
  double t1632;
  double t1675;
  double t1715;
  double t1874;
  double t1888;
  double t1756;
  double t1799;
  double t1828;
  double t1812;
  double t2059;
  double t2039;
  t368 = Cos(var1[12]);
  t363 = Sin(var1[4]);
  t381 = Cos(var1[4]);
  t788 = Cos(var1[13]);
  t729 = Cos(var1[14]);
  t768 = Sin(var1[13]);
  t791 = Sin(var1[14]);
  t339 = Sin(var1[12]);
  t787 = t729*t768;
  t792 = -1.*t788*t791;
  t797 = t787 + t792;
  t385 = Sin(var1[5]);
  t809 = t788*t729;
  t812 = t768*t791;
  t819 = t809 + t812;
  t802 = Cos(var1[5]);
  t927 = Cos(var1[3]);
  t932 = Sin(var1[3]);
  t832 = t802*t819;
  t834 = t339*t797*t385;
  t863 = t832 + t834;
  t877 = -1.*t729*t768;
  t884 = t788*t791;
  t888 = t877 + t884;
  t891 = t802*t888;
  t897 = t339*t819*t385;
  t898 = t891 + t897;
  t945 = t381*t339;
  t949 = t368*t363*t385;
  t1004 = t945 + t949;
  t1035 = -1.*t802*t339*t797;
  t1038 = t819*t385;
  t1045 = t1035 + t1038;
  t1048 = t368*t381*t797;
  t1050 = -1.*t363*t863;
  t1052 = t1048 + t1050;
  t1059 = -1.*t802*t339*t819;
  t1060 = t888*t385;
  t1063 = t1059 + t1060;
  t1068 = t368*t381*t819;
  t1069 = -1.*t363*t898;
  t1077 = t1068 + t1069;
  t800 = t368*t797*t363;
  t864 = t381*t863;
  t865 = t800 + t864;
  t1293 = -0.0641*t729;
  t1295 = -0.28*t791;
  t1358 = t1293 + t1295;
  t1368 = -1.*t729;
  t1412 = 1. + t1368;
  t1420 = 0.075*t1412;
  t1433 = 0.355*t729;
  t1456 = -0.0641*t791;
  t1466 = t1420 + t1433 + t1456;
  t364 = t339*t363;
  t700 = -1.*t368*t381*t385;
  t727 = t364 + t700;
  t1283 = -0.325*t768;
  t1363 = t788*t1358;
  t1492 = t768*t1466;
  t1498 = t1283 + t1363 + t1492;
  t1522 = -1.*t788;
  t1523 = 1. + t1522;
  t1526 = 0.325*t1523;
  t1530 = -1.*t768*t1358;
  t1538 = t788*t1466;
  t1539 = t1526 + t1530 + t1538;
  t1248 = -1.*t368;
  t1249 = 1. + t1248;
  t1269 = -0.1575*t1249;
  t1280 = -0.2255*t368;
  t1500 = -1.*t339*t1498;
  t1515 = t1269 + t1280 + t1500;
  t1547 = -0.068*t339;
  t1555 = t368*t1498;
  t1556 = t1547 + t1555;
  t1558 = t802*t1539;
  t1563 = -1.*t1515*t385;
  t1567 = t1558 + t1563;
  t1516 = t802*t1515;
  t1540 = t1539*t385;
  t1541 = t1516 + t1540;
  t1557 = t1556*t363;
  t1570 = t381*t1567;
  t1573 = t1557 + t1570;
  t1575 = t381*t1556;
  t1576 = -1.*t363*t1567;
  t1584 = t1575 + t1576;
  t876 = t368*t819*t363;
  t899 = t381*t898;
  t913 = t876 + t899;
  t1542 = t368*t802*t1541;
  t1594 = -1.*t1541*t1045;
  t1615 = t1541*t1045;
  t1632 = -1.*t1541*t1063;
  t1675 = -1.*t368*t802*t1541;
  t1715 = t1541*t1063;
  t1874 = -1.*t339*t1556;
  t1888 = t368*t1556*t819;
  t1756 = t339*t1556;
  t1799 = -1.*t368*t1556*t797;
  t1828 = -1.*t368*t1556*t819;
  t1812 = t368*t1556*t797;
  t2059 = t1539*t819;
  t2039 = -1.*t1539*t888;
  p_output1[0]=t865*var2[0] + t727*var2[1] + t913*var2[2];
  p_output1[1]=(t1045*t927 - 1.*t1052*t932)*var2[0] + (t368*t802*t927 - 1.*t1004*t932)*var2[1] + (t1063*t927 - 1.*t1077*t932)*var2[2];
  p_output1[2]=(t1052*t927 + t1045*t932)*var2[0] + (t1004*t927 + t368*t802*t932)*var2[1] + (t1077*t927 + t1063*t932)*var2[2];
  p_output1[3]=((-1.*t1004*t1584 + t1675 - 1.*t1573*t727)*t913 + t727*(t1077*t1584 + t1715 + t1573*t913))*var2[0] + ((t1052*t1584 + t1615 + t1573*t865)*t913 + t865*(-1.*t1077*t1584 + t1632 - 1.*t1573*t913))*var2[1] + ((t1542 + t1004*t1584 + t1573*t727)*t865 + t727*(-1.*t1052*t1584 + t1594 - 1.*t1573*t865))*var2[2];
  p_output1[4]=(t1063*(t1675 + t1874 + t1567*t368*t385) + t368*t802*(t1715 + t1888 + t1567*t898))*var2[0] + (t1063*(t1615 + t1812 + t1567*t863) + t1045*(t1632 + t1828 - 1.*t1567*t898))*var2[1] + (t1045*(t1542 + t1756 - 1.*t1567*t368*t385) + t368*t802*(t1594 + t1799 - 1.*t1567*t863))*var2[2];
  p_output1[5]=(t368*(t1874 - 1.*t1515*t368)*t819 + t339*(t1888 - 1.*t1515*t339*t819 + t1539*t888))*var2[0] + (t368*(t1812 + t2059 - 1.*t1515*t339*t797)*t819 + t368*t797*(t1828 + t2039 + t1515*t339*t819))*var2[1] + (t368*(t1756 + t1515*t368)*t797 + t339*(t1799 + t1515*t339*t797 - 1.*t1539*t819))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t797 + 0.2255*t888)*var2[0] + (t819*(t2039 - 1.*t1498*t819) + (t2059 + t1498*t797)*t888)*var2[1] - 0.068*t819*var2[2];
  p_output1[13]=(-1.*t1358*t729 + 0.325*t791 - 1.*t1466*t791)*var2[0] + (-0.325*t729 + t1466*t729 - 1.*t1358*t791)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
