/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:43:06 GMT+02:00
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
  double t476;
  double t625;
  double t630;
  double t445;
  double t797;
  double t858;
  double t927;
  double t1016;
  double t1021;
  double t1029;
  double t525;
  double t807;
  double t829;
  double t1304;
  double t1305;
  double t1308;
  double t1518;
  double t1535;
  double t1539;
  double t1540;
  double t1545;
  double t1550;
  double t1552;
  double t1671;
  double t1672;
  double t1676;
  double t1773;
  double t1784;
  double t1793;
  double t1798;
  double t1031;
  double t1041;
  double t1309;
  double t1333;
  double t1519;
  double t1520;
  double t1553;
  double t1554;
  double t2088;
  double t2092;
  double t2093;
  double t2105;
  double t2106;
  double t2340;
  double t2342;
  double t2346;
  double t2348;
  double t2658;
  double t2659;
  double t2660;
  double t2467;
  double t2468;
  double t2469;
  double t3802;
  double t3804;
  double t3805;
  double t5149;
  double t5178;
  double t5220;
  double t5266;
  double t5267;
  double t3881;
  double t6418;
  double t6430;
  double t6488;
  double t6560;
  double t6576;
  double t6596;
  double t6606;
  double t6614;
  double t6615;
  double t6659;
  double t6716;
  double t6748;
  t476 = Cos(var1[5]);
  t625 = Sin(var1[3]);
  t630 = Sin(var1[4]);
  t445 = Cos(var1[3]);
  t797 = Sin(var1[5]);
  t858 = Cos(var1[6]);
  t927 = -1.*t858;
  t1016 = 1. + t927;
  t1021 = 0.15121*t1016;
  t1029 = Sin(var1[6]);
  t525 = t445*t476;
  t807 = -1.*t625*t630*t797;
  t829 = t525 + t807;
  t1304 = t476*t625*t630;
  t1305 = t445*t797;
  t1308 = t1304 + t1305;
  t1518 = Cos(var1[7]);
  t1535 = t858*t1308;
  t1539 = t829*t1029;
  t1540 = t1535 + t1539;
  t1545 = Cos(var1[4]);
  t1550 = Sin(var1[7]);
  t1552 = Cos(var1[8]);
  t1671 = t1518*t1540;
  t1672 = t1545*t625*t1550;
  t1676 = t1671 + t1672;
  t1773 = -1.*t1545*t1518*t625;
  t1784 = t1540*t1550;
  t1793 = t1773 + t1784;
  t1798 = Sin(var1[8]);
  t1031 = -0.15121*t1029;
  t1041 = t1021 + t1031;
  t1309 = 0.15121*t1029;
  t1333 = t1021 + t1309;
  t1519 = -1.*t1518;
  t1520 = 1. + t1519;
  t1553 = -1.*t1552;
  t1554 = 1. + t1553;
  t2088 = -1.*t445*t1545*t476*t858;
  t2092 = t445*t1545*t797*t1029;
  t2093 = t2088 + t2092;
  t2105 = t1518*t2093;
  t2106 = t445*t630*t1550;
  t2340 = t2105 + t2106;
  t2342 = -1.*t445*t1518*t630;
  t2346 = t2093*t1550;
  t2348 = t2342 + t2346;
  t2658 = t476*t625;
  t2659 = t445*t630*t797;
  t2660 = t2658 + t2659;
  t2467 = t445*t476*t630;
  t2468 = -1.*t625*t797;
  t2469 = t2467 + t2468;
  t3802 = t858*t2660;
  t3804 = t2469*t1029;
  t3805 = t3802 + t3804;
  t5149 = -1.*t445*t476*t630;
  t5178 = t625*t797;
  t5220 = t5149 + t5178;
  t5266 = -1.*t5220*t1029;
  t5267 = t3802 + t5266;
  t3881 = -1.*t2660*t1029;
  t6418 = t858*t5220;
  t6430 = t2660*t1029;
  t6488 = t6418 + t6430;
  t6560 = -1.*t445*t1545*t1518;
  t6576 = -1.*t6488*t1550;
  t6596 = t6560 + t6576;
  t6606 = t1518*t6488;
  t6614 = -1.*t445*t1545*t1550;
  t6615 = t6606 + t6614;
  t6659 = t445*t1545*t1518;
  t6716 = t6488*t1550;
  t6748 = t6659 + t6716;
  p_output1[0]=1.;
  p_output1[1]=t1308*t1333 + 0.28121*t1520*t1540 + 0.50321*t1554*t1676 - 0.50321*t1793*t1798 + 0.19821*(t1552*t1676 + t1793*t1798) - 0.28121*t1545*t1550*t625 + t1041*t829 + 0.15121*(-1.*t1029*t1308 + t829*t858);
  p_output1[2]=0.28121*t1520*t2093 + 0.50321*t1554*t2340 - 0.50321*t1798*t2348 + 0.19821*(t1552*t2340 + t1798*t2348) - 1.*t1333*t1545*t445*t476 - 0.28121*t1550*t445*t630 + t1041*t1545*t445*t797 + 0.15121*(t1029*t1545*t445*t476 + t1545*t445*t797*t858);
  p_output1[3]=t1041*t2469 + t1333*t2660 + 0.28121*t1520*t3805 + 0.50321*t1518*t1554*t3805 - 0.50321*t1550*t1798*t3805 + 0.19821*(t1518*t1552*t3805 + t1550*t1798*t3805) + 0.15121*(t3881 + t2469*t858);
  p_output1[4]=0.28121*t1520*t5267 + 0.50321*t1518*t1554*t5267 - 0.50321*t1550*t1798*t5267 + 0.19821*(t1518*t1552*t5267 + t1550*t1798*t5267) + t2660*(t1309 - 0.15121*t858) + t5220*(t1309 + 0.15121*t858) + 0.15121*(t3881 - 1.*t5220*t858);
  p_output1[5]=0.28121*t1518*t1545*t445 + 0.28121*t1550*t6488 + 0.50321*t1554*t6596 - 0.50321*t1798*t6615 + 0.19821*(t1552*t6596 + t1798*t6615);
  p_output1[6]=0.50321*t1798*t6615 - 0.50321*t1552*t6748 + 0.19821*(-1.*t1798*t6615 + t1552*t6748);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
