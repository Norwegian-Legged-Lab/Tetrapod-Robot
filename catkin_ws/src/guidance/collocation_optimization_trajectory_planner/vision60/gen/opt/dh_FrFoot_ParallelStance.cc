/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:20 GMT+02:00
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
  double t9790;
  double t10163;
  double t10774;
  double t10797;
  double t11005;
  double t11004;
  double t10129;
  double t10181;
  double t10186;
  double t10347;
  double t10709;
  double t10712;
  double t10714;
  double t10725;
  double t10729;
  double t11009;
  double t11010;
  double t11011;
  double t11114;
  double t10981;
  double t10992;
  double t10993;
  double t11006;
  double t11137;
  double t11138;
  double t11336;
  double t11337;
  double t11343;
  double t11163;
  double t11165;
  double t11166;
  double t11304;
  double t11309;
  double t11310;
  double t10791;
  double t10833;
  double t10842;
  double t11465;
  double t11467;
  double t11463;
  double t11452;
  double t11466;
  double t11474;
  double t11476;
  double t11525;
  double t11508;
  double t11511;
  double t11512;
  double t11502;
  double t11530;
  double t11534;
  double t11537;
  double t11159;
  double t11386;
  double t11407;
  double t11408;
  double t11422;
  double t11423;
  double t11425;
  double t11437;
  double t11577;
  double t11583;
  double t11615;
  double t11551;
  double t11552;
  double t11559;
  double t11560;
  double t11562;
  double t11563;
  double t11627;
  double t11631;
  double t11632;
  double t11623;
  double t11708;
  double t11710;
  double t11712;
  double t11626;
  double t11713;
  double t11714;
  double t11719;
  double t11658;
  double t11680;
  double t11698;
  double t11727;
  double t11728;
  double t11733;
  double t11944;
  double t11876;
  double t11724;
  double t11725;
  double t11726;
  double t11937;
  double t11900;
  double t12078;
  double t11462;
  double t11477;
  double t11482;
  double t12092;
  double t11830;
  double t11831;
  double t11832;
  double t12252;
  double t12276;
  double t12321;
  double t12340;
  t9790 = Cos(var1[14]);
  t10163 = Sin(var1[14]);
  t10774 = Sin(var1[13]);
  t10797 = Cos(var1[13]);
  t11005 = Sin(var1[12]);
  t11004 = Cos(var1[12]);
  t10129 = -0.0641*t9790;
  t10181 = -0.28*t10163;
  t10186 = t10129 + t10181;
  t10347 = -1.*t9790;
  t10709 = 1. + t10347;
  t10712 = 0.075*t10709;
  t10714 = 0.355*t9790;
  t10725 = -0.0641*t10163;
  t10729 = t10712 + t10714 + t10725;
  t11009 = -0.325*t10774;
  t11010 = t10797*t10186;
  t11011 = t10774*t10729;
  t11114 = t11009 + t11010 + t11011;
  t10981 = -1.*t9790*t10774;
  t10992 = t10797*t10163;
  t10993 = t10981 + t10992;
  t11006 = -0.068*t11005;
  t11137 = t11004*t11114;
  t11138 = t11006 + t11137;
  t11336 = t10797*t9790;
  t11337 = t10774*t10163;
  t11343 = t11336 + t11337;
  t11163 = -1.*t11004;
  t11165 = 1. + t11163;
  t11166 = -0.1575*t11165;
  t11304 = -0.2255*t11004;
  t11309 = -1.*t11005*t11114;
  t11310 = t11166 + t11304 + t11309;
  t10791 = t9790*t10774;
  t10833 = -1.*t10797*t10163;
  t10842 = t10791 + t10833;
  t11465 = Cos(var1[5]);
  t11467 = Sin(var1[5]);
  t11463 = Cos(var1[4]);
  t11452 = Sin(var1[4]);
  t11466 = t11465*t11343;
  t11474 = t11005*t10842*t11467;
  t11476 = t11466 + t11474;
  t11525 = Cos(var1[3]);
  t11508 = -1.*t11465*t11005*t10842;
  t11511 = t11343*t11467;
  t11512 = t11508 + t11511;
  t11502 = Sin(var1[3]);
  t11530 = t11004*t11463*t10842;
  t11534 = -1.*t11452*t11476;
  t11537 = t11530 + t11534;
  t11159 = -1.*t11005*t11138;
  t11386 = -1.*t10797;
  t11407 = 1. + t11386;
  t11408 = 0.325*t11407;
  t11422 = -1.*t10774*t10186;
  t11423 = t10797*t10729;
  t11425 = t11408 + t11422 + t11423;
  t11437 = t11004*t11138*t11343;
  t11577 = t11465*t11310;
  t11583 = t11425*t11467;
  t11615 = t11577 + t11583;
  t11551 = -1.*t11465*t11005*t11343;
  t11552 = t10993*t11467;
  t11559 = t11551 + t11552;
  t11560 = t11465*t11425;
  t11562 = -1.*t11310*t11467;
  t11563 = t11560 + t11562;
  t11627 = t11465*t10993;
  t11631 = t11005*t11343*t11467;
  t11632 = t11627 + t11631;
  t11623 = -1.*t11004*t11465*t11615;
  t11708 = t11005*t11452;
  t11710 = -1.*t11004*t11463*t11467;
  t11712 = t11708 + t11710;
  t11626 = t11615*t11559;
  t11713 = t11138*t11452;
  t11714 = t11463*t11563;
  t11719 = t11713 + t11714;
  t11658 = t11004*t11343*t11452;
  t11680 = t11463*t11632;
  t11698 = t11658 + t11680;
  t11727 = t11463*t11138;
  t11728 = -1.*t11452*t11563;
  t11733 = t11727 + t11728;
  t11944 = t11425*t11343;
  t11876 = -1.*t11425*t10993;
  t11724 = t11463*t11005;
  t11725 = t11004*t11452*t11467;
  t11726 = t11724 + t11725;
  t11937 = t11004*t11138*t10842;
  t11900 = -1.*t11004*t11138*t11343;
  t12078 = t11615*t11512;
  t11462 = t11004*t10842*t11452;
  t11477 = t11463*t11476;
  t11482 = t11462 + t11477;
  t12092 = -1.*t11615*t11559;
  t11830 = t11004*t11463*t11343;
  t11831 = -1.*t11452*t11632;
  t11832 = t11830 + t11831;
  t12252 = t11005*t11138;
  t12276 = -1.*t11004*t11138*t10842;
  t12321 = t11004*t11465*t11615;
  t12340 = -1.*t11615*t11512;
  p_output1[0]=t11482*var2[0] + (t11512*t11525 - 1.*t11502*t11537)*var2[1] + (t11502*t11512 + t11525*t11537)*var2[2] + (t11698*(t11623 - 1.*t11712*t11719 - 1.*t11726*t11733) + t11712*(t11626 + t11698*t11719 + t11733*t11832))*var2[3] + (t11559*(t11159 + t11004*t11467*t11563 + t11623) + t11004*t11465*(t11437 + t11626 + t11563*t11632))*var2[4] + (t11004*(t11159 - 1.*t11004*t11310)*t11343 + t11005*(-1.*t11005*t11310*t11343 + t10993*t11425 + t11437))*var2[5] + (0.1575*t10842 + 0.2255*t10993)*var2[12] + (0.325*t10163 - 1.*t10163*t10729 - 1.*t10186*t9790)*var2[13] - 0.0641*var2[14];
  p_output1[1]=t11712*var2[0] + (t11004*t11465*t11525 - 1.*t11502*t11726)*var2[1] + (t11004*t11465*t11502 + t11525*t11726)*var2[2] + (t11698*(t11482*t11719 + t11537*t11733 + t12078) + t11482*(-1.*t11698*t11719 - 1.*t11733*t11832 + t12092))*var2[3] + (t11559*(t11476*t11563 + t11937 + t12078) + t11512*(-1.*t11563*t11632 + t11900 + t12092))*var2[4] + (t10842*t11004*(t11005*t11310*t11343 + t11876 + t11900) + t11004*t11343*(-1.*t10842*t11005*t11310 + t11937 + t11944))*var2[5] + (t11343*(-1.*t11114*t11343 + t11876) + t10993*(t10842*t11114 + t11944))*var2[12];
  p_output1[2]=t11698*var2[0] + (t11525*t11559 - 1.*t11502*t11832)*var2[1] + (t11502*t11559 + t11525*t11832)*var2[2] + (t11482*(t11712*t11719 + t11726*t11733 + t12321) + t11712*(-1.*t11482*t11719 - 1.*t11537*t11733 + t12340))*var2[3] + (t11512*(-1.*t11004*t11467*t11563 + t12252 + t12321) + t11004*t11465*(-1.*t11476*t11563 + t12276 + t12340))*var2[4] + (t10842*t11004*(t11004*t11310 + t12252) + t11005*(t10842*t11005*t11310 - 1.*t11343*t11425 + t12276))*var2[5] - 0.068*t11343*var2[12] + (-1.*t10163*t10186 - 0.325*t9790 + t10729*t9790)*var2[13] - 0.28*var2[14];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
