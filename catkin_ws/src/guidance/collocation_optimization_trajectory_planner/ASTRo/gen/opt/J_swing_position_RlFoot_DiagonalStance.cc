/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:23 GMT+02:00
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
  double t6382;
  double t6399;
  double t6401;
  double t6438;
  double t6440;
  double t6441;
  double t6473;
  double t6452;
  double t6456;
  double t6476;
  double t6469;
  double t6486;
  double t6509;
  double t6533;
  double t6534;
  double t6538;
  double t6295;
  double t6330;
  double t6558;
  double t6576;
  double t6577;
  double t6578;
  double t6586;
  double t6627;
  double t6631;
  double t6673;
  double t6681;
  double t6687;
  double t6689;
  double t6705;
  double t6439;
  double t6443;
  double t6515;
  double t6528;
  double t6562;
  double t6567;
  double t6587;
  double t6600;
  double t6803;
  double t6804;
  double t6805;
  double t6809;
  double t6810;
  double t6813;
  double t6815;
  double t6818;
  double t6819;
  double t6833;
  double t6837;
  double t6838;
  double t6840;
  double t6841;
  double t6842;
  double t6846;
  double t6847;
  double t6848;
  double t6881;
  double t6899;
  double t6919;
  double t6926;
  double t6970;
  double t6971;
  double t6862;
  double t6989;
  double t6990;
  double t6993;
  double t6997;
  double t7002;
  double t7003;
  double t7018;
  double t7022;
  double t7214;
  double t7499;
  double t7689;
  double t7730;
  t6382 = Sin(var1[3]);
  t6399 = Cos(var1[9]);
  t6401 = -1.*t6399;
  t6438 = 1. + t6401;
  t6440 = Sin(var1[9]);
  t6441 = 0.15121*t6440;
  t6473 = Cos(var1[3]);
  t6452 = Cos(var1[5]);
  t6456 = Sin(var1[4]);
  t6476 = Sin(var1[5]);
  t6469 = t6452*t6382*t6456;
  t6486 = t6473*t6476;
  t6509 = t6469 + t6486;
  t6533 = t6473*t6452;
  t6534 = -1.*t6382*t6456*t6476;
  t6538 = t6533 + t6534;
  t6295 = Cos(var1[4]);
  t6330 = Sin(var1[10]);
  t6558 = Cos(var1[10]);
  t6576 = t6399*t6509;
  t6577 = t6440*t6538;
  t6578 = t6576 + t6577;
  t6586 = Cos(var1[11]);
  t6627 = -1.*t6295*t6330*t6382;
  t6631 = t6558*t6578;
  t6673 = t6627 + t6631;
  t6681 = Sin(var1[11]);
  t6687 = -1.*t6558*t6295*t6382;
  t6689 = -1.*t6330*t6578;
  t6705 = t6687 + t6689;
  t6439 = -0.15121*t6438;
  t6443 = t6439 + t6441;
  t6515 = 0.15121*t6438;
  t6528 = t6515 + t6441;
  t6562 = -1.*t6558;
  t6567 = 1. + t6562;
  t6587 = -1.*t6586;
  t6600 = 1. + t6587;
  t6803 = -1.*t6399*t6473*t6295*t6452;
  t6804 = t6473*t6295*t6440*t6476;
  t6805 = t6803 + t6804;
  t6809 = -1.*t6473*t6330*t6456;
  t6810 = t6558*t6805;
  t6813 = t6809 + t6810;
  t6815 = -1.*t6558*t6473*t6456;
  t6818 = -1.*t6330*t6805;
  t6819 = t6815 + t6818;
  t6833 = t6473*t6452*t6456;
  t6837 = -1.*t6382*t6476;
  t6838 = t6833 + t6837;
  t6840 = t6452*t6382;
  t6841 = t6473*t6456*t6476;
  t6842 = t6840 + t6841;
  t6846 = t6440*t6838;
  t6847 = t6399*t6842;
  t6848 = t6846 + t6847;
  t6881 = 0.15121*t6399;
  t6899 = -1.*t6473*t6452*t6456;
  t6919 = t6382*t6476;
  t6926 = t6899 + t6919;
  t6970 = -1.*t6440*t6926;
  t6971 = t6970 + t6847;
  t6862 = -1.*t6440*t6842;
  t6989 = t6399*t6926;
  t6990 = t6440*t6842;
  t6993 = t6989 + t6990;
  t6997 = -1.*t6473*t6295*t6330;
  t7002 = -1.*t6558*t6993;
  t7003 = t6997 + t7002;
  t7018 = t6558*t6473*t6295;
  t7022 = -1.*t6330*t6993;
  t7214 = t7018 + t7022;
  t7499 = t6473*t6295*t6330;
  t7689 = t6558*t6993;
  t7730 = t7499 + t7689;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t6295*t6330*t6382 + t6443*t6509 + t6528*t6538 + 0.15121*(-1.*t6440*t6509 + t6399*t6538) - 0.28121*t6567*t6578 - 0.50321*t6600*t6673 - 0.50321*t6681*t6705 - 0.23321*(t6586*t6673 - 1.*t6681*t6705);
  p_output1[2]=-1.*t6295*t6443*t6452*t6473 - 0.28121*t6330*t6456*t6473 + 0.15121*(t6295*t6440*t6452*t6473 + t6295*t6399*t6473*t6476) + t6295*t6473*t6476*t6528 - 0.28121*t6567*t6805 - 0.50321*t6600*t6813 - 0.50321*t6681*t6819 - 0.23321*(t6586*t6813 - 1.*t6681*t6819);
  p_output1[3]=t6528*t6838 + t6443*t6842 - 0.28121*t6567*t6848 - 0.50321*t6558*t6600*t6848 + 0.50321*t6330*t6681*t6848 - 0.23321*(t6558*t6586*t6848 + t6330*t6681*t6848) + 0.15121*(t6399*t6838 + t6862);
  p_output1[4]=t6842*(t6441 + t6881) + (-0.15121*t6440 + t6881)*t6926 + 0.15121*(t6862 - 1.*t6399*t6926) - 0.28121*t6567*t6971 - 0.50321*t6558*t6600*t6971 + 0.50321*t6330*t6681*t6971 - 0.23321*(t6558*t6586*t6971 + t6330*t6681*t6971);
  p_output1[5]=0.28121*t6295*t6473*t6558 - 0.28121*t6330*t6993 - 0.50321*t6681*t7003 - 0.50321*t6600*t7214 - 0.23321*(-1.*t6681*t7003 + t6586*t7214);
  p_output1[6]=-0.50321*t6586*t7214 - 0.50321*t6681*t7730 - 0.23321*(-1.*t6586*t7214 - 1.*t6681*t7730);
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

#include "J_swing_position_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
