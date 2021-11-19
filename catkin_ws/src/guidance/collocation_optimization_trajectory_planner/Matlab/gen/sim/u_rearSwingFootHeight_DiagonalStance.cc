/*
 * Automatically Generated from Mathematica.
 * Fri 12 Nov 2021 16:10:44 GMT+01:00
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
  double t406;
  double t410;
  double t413;
  double t425;
  double t305;
  double t495;
  double t496;
  double t498;
  double t509;
  double t514;
  double t528;
  double t547;
  double t529;
  double t551;
  double t444;
  double t451;
  double t543;
  double t554;
  double t555;
  double t568;
  double t587;
  double t590;
  double t606;
  double t415;
  double t761;
  double t776;
  double t778;
  double t791;
  double t351;
  double t712;
  double t678;
  double t685;
  double t686;
  double t738;
  double t740;
  double t748;
  double t854;
  double t453;
  double t891;
  double t428;
  double t785;
  double t980;
  double t981;
  double t1028;
  double t635;
  double t911;
  double t615;
  double t1074;
  double t904;
  double t905;
  double t915;
  double t920;
  double t921;
  double t928;
  double t934;
  double t935;
  double t1084;
  double t1009;
  double t1014;
  double t1026;
  double t1030;
  double t1038;
  double t1045;
  double t1050;
  double t1051;
  double t1102;
  double t1108;
  double t1110;
  double t1127;
  double t1137;
  double t1138;
  double t1141;
  double t1143;
  double t965;
  double t1165;
  double t982;
  double t1205;
  double t1157;
  double t794;
  t406 = Cos(var1[16]);
  t410 = -1.*t406;
  t413 = 1. + t410;
  t425 = Sin(var1[16]);
  t305 = Cos(var1[3]);
  t495 = Cos(var1[15]);
  t496 = -1.*t495;
  t498 = 1. + t496;
  t509 = -0.15121*t498;
  t514 = Sin(var1[15]);
  t528 = Cos(var1[5]);
  t547 = Sin(var1[3]);
  t529 = Sin(var1[4]);
  t551 = Sin(var1[5]);
  t444 = -1. + t406;
  t451 = 4.e-6*t444;
  t543 = -1.*t305*t528*t529;
  t554 = t547*t551;
  t555 = t543 + t554;
  t568 = t528*t547;
  t587 = t305*t529*t551;
  t590 = t568 + t587;
  t606 = 7.e-6*t413;
  t415 = 2.8e-11*t413;
  t761 = Cos(var1[17]);
  t776 = -1.*t761;
  t778 = 1. + t776;
  t791 = Sin(var1[17]);
  t351 = Cos(var1[4]);
  t712 = -4.e-6*t425;
  t678 = -1.*t514*t555;
  t685 = t495*t590;
  t686 = t678 + t685;
  t738 = t495*t555;
  t740 = t514*t590;
  t748 = t738 + t740;
  t854 = 2.8e-11*t778;
  t453 = -7.e-6*t425;
  t891 = -2.8e-11*t413;
  t428 = -1.*t425;
  t785 = 7.e-6*t778;
  t980 = -1. + t761;
  t981 = 4.e-6*t980;
  t1028 = 4.e-6*t413;
  t635 = 7.e-6*t425;
  t911 = -7.e-6*t413;
  t615 = 4.e-6*t425;
  t1074 = 4.e-6*t791;
  t904 = t891 + t425;
  t905 = t305*t351*t904;
  t915 = t911 + t712;
  t920 = t915*t686;
  t921 = -1.000000000016*t413;
  t928 = 1. + t921;
  t934 = t928*t748;
  t935 = t905 + t920 + t934;
  t1084 = 7.e-6*t791;
  t1009 = -1.000000000049*t413;
  t1014 = 1. + t1009;
  t1026 = t1014*t305*t351;
  t1030 = t1028 + t453;
  t1038 = t1030*t686;
  t1045 = t891 + t428;
  t1050 = t1045*t748;
  t1051 = t1026 + t1038 + t1050;
  t1102 = t1028 + t635;
  t1108 = t305*t351*t1102;
  t1110 = -6.5e-11*t413;
  t1127 = 1. + t1110;
  t1137 = t1127*t686;
  t1138 = t911 + t615;
  t1141 = t1138*t748;
  t1143 = t1108 + t1137 + t1141;
  t965 = -1.*t791;
  t1165 = 4.e-6*t778;
  t982 = -7.e-6*t791;
  t1205 = -2.8e-11*t778;
  t1157 = -7.e-6*t778;
  t794 = -4.e-6*t791;
  p_output1[0]=(t509 - 0.15121*t514)*t555 + (t509 + 0.15121*t514)*t590 - 0.148715*(t1051*(t1084 + t1165) + t1143*(1. - 6.5e-11*t778) + (t1074 + t1157)*t935) - 0.80315*(t1051*(t1205 + t791) + t1143*(t1157 + t794) + (1. - 1.000000000016*t778)*t935) - 0.038576*(t1051*(1. - 1.000000000049*t778) + t935*(t1205 + t965) + t1143*(t1165 + t982)) + var1[2] + t748*(-0.2812110000084994*t413 - 0.038749000006999997*(t415 + t425) - 1.8134809999999998e-6*(t606 + t712) - 2.7726089999999997e-12*var1[16]) + t305*t351*(-0.03874900000889869*t413 - 0.281211000004*(t415 + t428) - 1.8134809999999998e-6*(t451 + t453) + 1.5843479999999999e-12*var1[16]) + t686*(-1.1787626499999999e-16*t413 - 0.281211000004*(t606 + t615) - 0.038749000006999997*(t451 + t635) + 3.9608699999999997e-7*var1[16]) + t935*(-0.5031510000160505*t778 - 3.367757e-6*(t785 + t794) - 0.038575000014*(t791 + t854) - 1.9784030000000015e-12*var1[17]) + t1051*(-0.03857500001589017*t778 - 0.5031510000080001*(t854 + t965) - 3.367757e-6*(t981 + t982) + 1.1305160000000008e-12*var1[17]) + t1143*(-2.18904205e-16*t778 - 0.5031510000080001*(t1074 + t785) - 0.038575000014*(t1084 + t981) + 2.826290000000002e-7*var1[17]);
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

#include "u_rearSwingFootHeight_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeight_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
