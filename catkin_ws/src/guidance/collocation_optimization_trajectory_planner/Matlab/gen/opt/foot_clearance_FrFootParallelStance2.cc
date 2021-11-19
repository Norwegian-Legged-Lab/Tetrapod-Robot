/*
 * Automatically Generated from Mathematica.
 * Sun 14 Nov 2021 17:32:50 GMT+01:00
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
  double t586;
  double t174;
  double t1007;
  double t1037;
  double t1042;
  double t1088;
  double t1104;
  double t1156;
  double t1201;
  double t1183;
  double t1202;
  double t597;
  double t700;
  double t762;
  double t839;
  double t1191;
  double t1210;
  double t1211;
  double t1298;
  double t1299;
  double t1309;
  double t442;
  double t1386;
  double t1420;
  double t1423;
  double t1442;
  double t1445;
  double t1454;
  double t1486;
  double t1487;
  double t1488;
  double t1516;
  double t1575;
  double t1522;
  double t1524;
  double t1529;
  double t1531;
  double t1540;
  double t1543;
  double t1592;
  double t1604;
  double t1608;
  double t1611;
  double t1631;
  double t1634;
  double t1635;
  double t1646;
  double t1647;
  double t1650;
  t586 = Cos(var1[10]);
  t174 = Cos(var1[3]);
  t1007 = Cos(var1[9]);
  t1037 = -1.*t1007;
  t1042 = 1. + t1037;
  t1088 = Sin(var1[9]);
  t1104 = -0.15121*t1088;
  t1156 = Cos(var1[5]);
  t1201 = Sin(var1[3]);
  t1183 = Sin(var1[4]);
  t1202 = Sin(var1[5]);
  t597 = -1.*t586;
  t700 = 1. + t597;
  t762 = -1. + t586;
  t839 = Sin(var1[10]);
  t1191 = -1.*t174*t1156*t1183;
  t1210 = t1201*t1202;
  t1211 = t1191 + t1210;
  t1298 = t1156*t1201;
  t1299 = t174*t1183*t1202;
  t1309 = t1298 + t1299;
  t442 = Cos(var1[4]);
  t1386 = -1.*t1088*t1211;
  t1420 = t1007*t1309;
  t1423 = t1386 + t1420;
  t1442 = t1007*t1211;
  t1445 = t1088*t1309;
  t1454 = t1442 + t1445;
  t1486 = Cos(var1[11]);
  t1487 = -1.*t1486;
  t1488 = 1. + t1487;
  t1516 = Sin(var1[11]);
  t1575 = -1. + t1486;
  t1522 = t174*t442*t839;
  t1524 = -4.e-6*t839*t1423;
  t1529 = -1.000000000016*t700;
  t1531 = 1. + t1529;
  t1540 = t1531*t1454;
  t1543 = t1522 + t1524 + t1540;
  t1592 = t586*t174*t442;
  t1604 = 4.e-6*t700*t1423;
  t1608 = -1.*t839*t1454;
  t1611 = t1592 + t1604 + t1608;
  t1631 = 4.e-6*t700*t174*t442;
  t1634 = 1.6e-11*t762;
  t1635 = 1. + t1634;
  t1646 = t1635*t1423;
  t1647 = 4.e-6*t839*t1454;
  t1650 = t1631 + t1646 + t1647;
  p_output1[0]=(0.15121*t1042 + t1104)*t1211 + (-0.15121*t1042 + t1104)*t1309 + (0.50315000001605*t1488 - 0.0398890000006382*t1516)*t1543 - 0.041195*(-1.*t1516*t1543 + t1486*t1611 + 4.e-6*t1488*t1650) + 0.803147*((1. - 1.000000000016*t1488)*t1543 + t1516*t1611 - 4.e-6*t1516*t1650) - 0.14871*(4.e-6*t1516*t1543 + 4.e-6*t1488*t1611 + (1. + 1.6e-11*t1575)*t1650) + t1454*(0.281210000008499*t700 - 0.03874900000062*t839) + var1[2] + t1423*(2.479936e-18*t700 - 1.54996e-7*t762 + 1.124840000016e-6*t839 - 1.2484e-7*var1[10]) + t174*t442*(-0.038749*t700 + 6.19984e-13*t762 - 0.281210000004*t839 - 4.9936e-13*var1[10]) + t1650*(2.552896e-18*t1488 + 2.012600000032e-6*t1516 - 1.59556e-7*t1575 - 1.26e-8*var1[11]) + t1611*(-0.039889*t1488 - 0.503150000008*t1516 + 6.38224e-13*t1575 - 5.04e-14*var1[11]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "foot_clearance_FrFootParallelStance2.hh"

namespace ParallelStance2
{

void foot_clearance_FrFootParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
