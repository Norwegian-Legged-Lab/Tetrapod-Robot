/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 22:25:39 GMT+02:00
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
  double t1013;
  double t2399;
  double t2386;
  double t2389;
  double t2400;
  double t372;
  double t869;
  double t2680;
  double t3024;
  double t3025;
  double t3547;
  double t4624;
  double t2395;
  double t2418;
  double t2511;
  double t1686;
  double t4648;
  double t4817;
  double t4818;
  double t4840;
  double t4870;
  double t4925;
  double t4926;
  double t4935;
  double t4951;
  double t5092;
  double t5580;
  double t1690;
  double t2166;
  double t2692;
  double t2985;
  double t6124;
  double t6131;
  double t6133;
  double t4936;
  double t4939;
  double t6136;
  double t6141;
  double t6142;
  double t6323;
  double t6400;
  double t6405;
  double t7028;
  double t7029;
  double t7030;
  double t7050;
  double t7054;
  double t7055;
  double t7063;
  double t7065;
  double t7135;
  double t7636;
  double t7641;
  double t7662;
  double t8318;
  double t8385;
  double t8424;
  double t8487;
  double t8498;
  double t8534;
  double t8679;
  double t8693;
  double t8711;
  double t8716;
  double t8739;
  double t8744;
  double t8783;
  double t8848;
  double t8869;
  double t9471;
  double t9481;
  double t9490;
  t1013 = Sin(var1[3]);
  t2399 = Cos(var1[3]);
  t2386 = Cos(var1[5]);
  t2389 = Sin(var1[4]);
  t2400 = Sin(var1[5]);
  t372 = Cos(var1[4]);
  t869 = Sin(var1[12]);
  t2680 = Cos(var1[12]);
  t3024 = t2399*t2386;
  t3025 = -1.*t1013*t2389*t2400;
  t3547 = t3024 + t3025;
  t4624 = Sin(var1[13]);
  t2395 = t2386*t1013*t2389;
  t2418 = t2399*t2400;
  t2511 = t2395 + t2418;
  t1686 = Cos(var1[13]);
  t4648 = -1.*t2680*t372*t1013;
  t4817 = -1.*t869*t3547;
  t4818 = t4648 + t4817;
  t4840 = Sin(var1[14]);
  t4870 = -1.*t4624*t2511;
  t4925 = t1686*t4818;
  t4926 = t4870 + t4925;
  t4935 = Cos(var1[14]);
  t4951 = t1686*t2511;
  t5092 = t4624*t4818;
  t5580 = t4951 + t5092;
  t1690 = -1.*t1686;
  t2166 = 1. + t1690;
  t2692 = -1.*t2680;
  t2985 = 1. + t2692;
  t6124 = -1.*t2680*t2399*t2389;
  t6131 = -1.*t2399*t372*t869*t2400;
  t6133 = t6124 + t6131;
  t4936 = -1.*t4935;
  t4939 = 1. + t4936;
  t6136 = t2399*t372*t2386*t4624;
  t6141 = t1686*t6133;
  t6142 = t6136 + t6141;
  t6323 = -1.*t1686*t2399*t372*t2386;
  t6400 = t4624*t6133;
  t6405 = t6323 + t6400;
  t7028 = t2399*t2386*t2389;
  t7029 = -1.*t1013*t2400;
  t7030 = t7028 + t7029;
  t7050 = t2386*t1013;
  t7054 = t2399*t2389*t2400;
  t7055 = t7050 + t7054;
  t7063 = -1.*t869*t4624*t7030;
  t7065 = t1686*t7055;
  t7135 = t7063 + t7065;
  t7636 = -1.*t1686*t869*t7030;
  t7641 = -1.*t4624*t7055;
  t7662 = t7636 + t7641;
  t8318 = -1.*t2399*t372*t869;
  t8385 = -1.*t2680*t7055;
  t8424 = t8318 + t8385;
  t8487 = t2680*t2399*t372;
  t8498 = -1.*t869*t7055;
  t8534 = t8487 + t8498;
  t8679 = -1.*t2399*t2386*t2389;
  t8693 = t1013*t2400;
  t8711 = t8679 + t8693;
  t8716 = -1.*t4624*t8711;
  t8739 = t1686*t8534;
  t8744 = t8716 + t8739;
  t8783 = -1.*t1686*t8711;
  t8848 = -1.*t4624*t8534;
  t8869 = t8783 + t8848;
  t9471 = t1686*t8711;
  t9481 = t4624*t8534;
  t9490 = t9471 + t9481;
  p_output1[0]=1.;
  p_output1[1]=0.325*t2166*t2511 - 0.1575*t2985*t3547 - 0.325*t4624*t4818 + 0.075*t4840*t4926 + 0.075*t4939*t5580 - 0.0641*(t4926*t4935 + t4840*t5580) + 0.355*(-1.*t4840*t4926 + t4935*t5580) - 0.1575*t1013*t372*t869 - 0.2255*(t2680*t3547 - 1.*t1013*t372*t869);
  p_output1[2]=-0.325*t2166*t2386*t2399*t372 - 0.1575*t2399*t2400*t2985*t372 - 0.325*t4624*t6133 + 0.075*t4840*t6142 + 0.075*t4939*t6405 - 0.0641*(t4935*t6142 + t4840*t6405) + 0.355*(-1.*t4840*t6142 + t4935*t6405) - 0.1575*t2389*t2399*t869 - 0.2255*(t2399*t2400*t2680*t372 - 1.*t2389*t2399*t869);
  p_output1[3]=-0.2255*t2680*t7030 - 0.1575*t2985*t7030 + 0.325*t2166*t7055 + 0.075*t4939*t7135 + 0.075*t4840*t7662 + 0.355*(t4935*t7135 - 1.*t4840*t7662) - 0.0641*(t4840*t7135 + t4935*t7662) + 0.325*t4624*t7030*t869;
  p_output1[4]=0.1575*t2399*t2680*t372 - 0.325*t4624*t8424 + 0.075*t1686*t4840*t8424 + 0.075*t4624*t4939*t8424 - 0.0641*(t4624*t4840*t8424 + t1686*t4935*t8424) + 0.355*(-1.*t1686*t4840*t8424 + t4624*t4935*t8424) - 0.2255*t8534 - 0.1575*t7055*t869;
  p_output1[5]=-0.325*t1686*t8534 + 0.325*t4624*t8711 + 0.075*t4939*t8744 + 0.075*t4840*t8869 + 0.355*(t4935*t8744 - 1.*t4840*t8869) - 0.0641*(t4840*t8744 + t4935*t8869);
  p_output1[6]=0.075*t4935*t8744 + 0.075*t4840*t9490 + 0.355*(-1.*t4935*t8744 - 1.*t4840*t9490) - 0.0641*(-1.*t4840*t8744 + t4935*t9490);
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

#include "J_u_frontSwingFootHeightflat_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeightflat_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
