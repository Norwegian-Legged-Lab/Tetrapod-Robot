/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:42 GMT+02:00
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
  double t1999;
  double t2207;
  double t2324;
  double t2331;
  double t2482;
  double t2480;
  double t2182;
  double t2215;
  double t2216;
  double t2256;
  double t2312;
  double t2313;
  double t2314;
  double t2315;
  double t2316;
  double t2487;
  double t2489;
  double t2589;
  double t2601;
  double t2361;
  double t2467;
  double t2473;
  double t2485;
  double t2618;
  double t2629;
  double t2777;
  double t2778;
  double t2779;
  double t2634;
  double t2635;
  double t2769;
  double t2770;
  double t2771;
  double t2774;
  double t2328;
  double t2332;
  double t2333;
  double t2862;
  double t2880;
  double t2861;
  double t2852;
  double t2865;
  double t2884;
  double t2887;
  double t3761;
  double t3543;
  double t3595;
  double t3619;
  double t3460;
  double t4117;
  double t4140;
  double t4158;
  double t2630;
  double t2790;
  double t2802;
  double t2805;
  double t2806;
  double t2807;
  double t2809;
  double t2813;
  double t4517;
  double t4542;
  double t4548;
  double t4454;
  double t4455;
  double t4479;
  double t4480;
  double t4499;
  double t4500;
  double t4556;
  double t4561;
  double t4567;
  double t4549;
  double t5333;
  double t5393;
  double t5795;
  double t4555;
  double t5972;
  double t6149;
  double t6182;
  double t5069;
  double t5176;
  double t5306;
  double t6400;
  double t6962;
  double t7017;
  double t8144;
  double t7721;
  double t6272;
  double t6350;
  double t6361;
  double t8044;
  double t7988;
  double t9420;
  double t2859;
  double t2913;
  double t3017;
  double t9442;
  double t7146;
  double t7147;
  double t7224;
  double t10533;
  double t10557;
  double t10600;
  double t10634;
  t1999 = Cos(var1[14]);
  t2207 = Sin(var1[14]);
  t2324 = Sin(var1[13]);
  t2331 = Cos(var1[13]);
  t2482 = Sin(var1[12]);
  t2480 = Cos(var1[12]);
  t2182 = -0.0641*t1999;
  t2215 = -0.28*t2207;
  t2216 = t2182 + t2215;
  t2256 = -1.*t1999;
  t2312 = 1. + t2256;
  t2313 = 0.075*t2312;
  t2314 = 0.355*t1999;
  t2315 = -0.0641*t2207;
  t2316 = t2313 + t2314 + t2315;
  t2487 = -0.325*t2324;
  t2489 = t2331*t2216;
  t2589 = t2324*t2316;
  t2601 = t2487 + t2489 + t2589;
  t2361 = -1.*t1999*t2324;
  t2467 = t2331*t2207;
  t2473 = t2361 + t2467;
  t2485 = -0.068*t2482;
  t2618 = t2480*t2601;
  t2629 = t2485 + t2618;
  t2777 = t2331*t1999;
  t2778 = t2324*t2207;
  t2779 = t2777 + t2778;
  t2634 = -1.*t2480;
  t2635 = 1. + t2634;
  t2769 = -0.1575*t2635;
  t2770 = -0.2255*t2480;
  t2771 = -1.*t2482*t2601;
  t2774 = t2769 + t2770 + t2771;
  t2328 = t1999*t2324;
  t2332 = -1.*t2331*t2207;
  t2333 = t2328 + t2332;
  t2862 = Cos(var1[5]);
  t2880 = Sin(var1[5]);
  t2861 = Cos(var1[4]);
  t2852 = Sin(var1[4]);
  t2865 = t2862*t2779;
  t2884 = t2482*t2333*t2880;
  t2887 = t2865 + t2884;
  t3761 = Cos(var1[3]);
  t3543 = -1.*t2862*t2482*t2333;
  t3595 = t2779*t2880;
  t3619 = t3543 + t3595;
  t3460 = Sin(var1[3]);
  t4117 = t2480*t2861*t2333;
  t4140 = -1.*t2852*t2887;
  t4158 = t4117 + t4140;
  t2630 = -1.*t2482*t2629;
  t2790 = -1.*t2331;
  t2802 = 1. + t2790;
  t2805 = 0.325*t2802;
  t2806 = -1.*t2324*t2216;
  t2807 = t2331*t2316;
  t2809 = t2805 + t2806 + t2807;
  t2813 = t2480*t2629*t2779;
  t4517 = t2862*t2774;
  t4542 = t2809*t2880;
  t4548 = t4517 + t4542;
  t4454 = -1.*t2862*t2482*t2779;
  t4455 = t2473*t2880;
  t4479 = t4454 + t4455;
  t4480 = t2862*t2809;
  t4499 = -1.*t2774*t2880;
  t4500 = t4480 + t4499;
  t4556 = t2862*t2473;
  t4561 = t2482*t2779*t2880;
  t4567 = t4556 + t4561;
  t4549 = -1.*t2480*t2862*t4548;
  t5333 = t2482*t2852;
  t5393 = -1.*t2480*t2861*t2880;
  t5795 = t5333 + t5393;
  t4555 = t4548*t4479;
  t5972 = t2629*t2852;
  t6149 = t2861*t4500;
  t6182 = t5972 + t6149;
  t5069 = t2480*t2779*t2852;
  t5176 = t2861*t4567;
  t5306 = t5069 + t5176;
  t6400 = t2861*t2629;
  t6962 = -1.*t2852*t4500;
  t7017 = t6400 + t6962;
  t8144 = t2809*t2779;
  t7721 = -1.*t2809*t2473;
  t6272 = t2861*t2482;
  t6350 = t2480*t2852*t2880;
  t6361 = t6272 + t6350;
  t8044 = t2480*t2629*t2333;
  t7988 = -1.*t2480*t2629*t2779;
  t9420 = t4548*t3619;
  t2859 = t2480*t2333*t2852;
  t2913 = t2861*t2887;
  t3017 = t2859 + t2913;
  t9442 = -1.*t4548*t4479;
  t7146 = t2480*t2861*t2779;
  t7147 = -1.*t2852*t4567;
  t7224 = t7146 + t7147;
  t10533 = t2482*t2629;
  t10557 = -1.*t2480*t2629*t2333;
  t10600 = t2480*t2862*t4548;
  t10634 = -1.*t4548*t3619;
  p_output1[0]=t3017*var2[0] + (t3619*t3761 - 1.*t3460*t4158)*var2[1] + (t3460*t3619 + t3761*t4158)*var2[2] + (t5306*(t4549 - 1.*t5795*t6182 - 1.*t6361*t7017) + t5795*(t4555 + t5306*t6182 + t7017*t7224))*var2[3] + (t4479*(t2630 + t2480*t2880*t4500 + t4549) + t2480*t2862*(t2813 + t4555 + t4500*t4567))*var2[4] + (t2480*(t2630 - 1.*t2480*t2774)*t2779 + t2482*(-1.*t2482*t2774*t2779 + t2473*t2809 + t2813))*var2[5] + (0.1575*t2333 + 0.2255*t2473)*var2[12] + (0.325*t2207 - 1.*t1999*t2216 - 1.*t2207*t2316)*var2[13] - 0.0641*var2[14];
  p_output1[1]=t5795*var2[0] + (t2480*t2862*t3761 - 1.*t3460*t6361)*var2[1] + (t2480*t2862*t3460 + t3761*t6361)*var2[2] + (t5306*(t3017*t6182 + t4158*t7017 + t9420) + t3017*(-1.*t5306*t6182 - 1.*t7017*t7224 + t9442))*var2[3] + (t4479*(t2887*t4500 + t8044 + t9420) + t3619*(-1.*t4500*t4567 + t7988 + t9442))*var2[4] + (t2333*t2480*(t2482*t2774*t2779 + t7721 + t7988) + t2480*t2779*(-1.*t2333*t2482*t2774 + t8044 + t8144))*var2[5] + (t2779*(-1.*t2601*t2779 + t7721) + t2473*(t2333*t2601 + t8144))*var2[12];
  p_output1[2]=t5306*var2[0] + (t3761*t4479 - 1.*t3460*t7224)*var2[1] + (t3460*t4479 + t3761*t7224)*var2[2] + (t5795*(t10634 - 1.*t3017*t6182 - 1.*t4158*t7017) + t3017*(t10600 + t5795*t6182 + t6361*t7017))*var2[3] + (t3619*(t10533 + t10600 - 1.*t2480*t2880*t4500) + t2480*t2862*(t10557 + t10634 - 1.*t2887*t4500))*var2[4] + (t2333*t2480*(t10533 + t2480*t2774) + t2482*(t10557 + t2333*t2482*t2774 - 1.*t2779*t2809))*var2[5] - 0.068*t2779*var2[12] + (-0.325*t1999 - 1.*t2207*t2216 + t1999*t2316)*var2[13] - 0.28*var2[14];
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
