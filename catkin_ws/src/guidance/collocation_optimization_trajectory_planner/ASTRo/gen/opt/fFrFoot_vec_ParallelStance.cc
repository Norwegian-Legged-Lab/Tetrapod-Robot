/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:04 GMT+02:00
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
  double t2314;
  double t3686;
  double t2345;
  double t4912;
  double t5001;
  double t4622;
  double t5007;
  double t2987;
  double t10080;
  double t10081;
  double t10585;
  double t3913;
  double t5430;
  double t4936;
  double t5174;
  double t5180;
  double t3009;
  double t4232;
  double t4274;
  double t22644;
  double t22535;
  double t10984;
  double t14697;
  double t14733;
  double t16005;
  double t17810;
  double t17862;
  double t19460;
  double t20257;
  double t20288;
  double t22654;
  double t22735;
  double t22739;
  double t22905;
  double t24071;
  double t24074;
  double t24342;
  double t24347;
  double t24349;
  double t24420;
  double t24448;
  double t24453;
  double t24531;
  double t24586;
  double t24604;
  double t5772;
  double t14946;
  double t14950;
  double t27631;
  double t27681;
  double t27860;
  double t27899;
  double t27924;
  double t27925;
  double t27926;
  double t27928;
  double t27930;
  double t27958;
  double t27960;
  double t27961;
  double t28008;
  double t28300;
  double t28306;
  double t28370;
  double t27799;
  double t27803;
  double t27843;
  double t28032;
  double t28091;
  double t29231;
  double t29243;
  double t29268;
  double t29283;
  double t29344;
  double t29388;
  double t29420;
  double t28282;
  double t29129;
  double t29134;
  double t29339;
  double t29426;
  double t29490;
  double t29605;
  double t29620;
  double t29821;
  double t18809;
  double t20516;
  double t20535;
  double t29215;
  double t29853;
  double t30067;
  double t30596;
  double t31367;
  double t31544;
  double t35213;
  double t35486;
  t2314 = Cos(var1[4]);
  t3686 = Cos(var1[12]);
  t2345 = Cos(var1[5]);
  t4912 = Cos(var1[14]);
  t5001 = Sin(var1[13]);
  t4622 = Cos(var1[13]);
  t5007 = Sin(var1[14]);
  t2987 = Sin(var1[12]);
  t10080 = t4912*t5001;
  t10081 = -1.*t4622*t5007;
  t10585 = t10080 + t10081;
  t3913 = Sin(var1[5]);
  t5430 = Sin(var1[4]);
  t4936 = t4622*t4912;
  t5174 = t5001*t5007;
  t5180 = t4936 + t5174;
  t3009 = -1.*t2345*t2987;
  t4232 = -1.*t3686*t3913;
  t4274 = t3009 + t4232;
  t22644 = Cos(var1[3]);
  t22535 = Sin(var1[3]);
  t10984 = t3686*t2345*t10585;
  t14697 = -1.*t2987*t10585*t3913;
  t14733 = t10984 + t14697;
  t16005 = -1.*t4912*t5001;
  t17810 = t4622*t5007;
  t17862 = t16005 + t17810;
  t19460 = t3686*t2345*t5180;
  t20257 = -1.*t2987*t5180*t3913;
  t20288 = t19460 + t20257;
  t22654 = t3686*t2345;
  t22735 = -1.*t2987*t3913;
  t22739 = t22654 + t22735;
  t22905 = t2345*t2987*t10585;
  t24071 = t3686*t10585*t3913;
  t24074 = t22905 + t24071;
  t24342 = t2314*t5180;
  t24347 = -1.*t5430*t14733;
  t24349 = t24342 + t24347;
  t24420 = t2345*t2987*t5180;
  t24448 = t3686*t5180*t3913;
  t24453 = t24420 + t24448;
  t24531 = t2314*t17862;
  t24586 = -1.*t5430*t20288;
  t24604 = t24531 + t24586;
  t5772 = t5180*t5430;
  t14946 = t2314*t14733;
  t14950 = t5772 + t14946;
  t27631 = -1.*t3686;
  t27681 = 1. + t27631;
  t27860 = -1.*t4622;
  t27899 = 1. + t27860;
  t27924 = 0.28121*t27899;
  t27925 = -1.*t4912;
  t27926 = 1. + t27925;
  t27928 = 0.50321*t27926;
  t27930 = 0.23321*t4912;
  t27958 = t27928 + t27930;
  t27960 = t4622*t27958;
  t27961 = -0.27*t5001*t5007;
  t28008 = t27924 + t27960 + t27961;
  t28300 = 0.15121*t27681;
  t28306 = t3686*t28008;
  t28370 = t28300 + t28306;
  t27799 = -0.15121*t27681;
  t27803 = -0.15121*t3686;
  t27843 = -0.15121*t2987;
  t28032 = t2987*t28008;
  t28091 = t27799 + t27803 + t27843 + t28032;
  t29231 = 0.28121*t5001;
  t29243 = -1.*t27958*t5001;
  t29268 = -0.27*t4622*t5007;
  t29283 = t29231 + t29243 + t29268;
  t29344 = t2345*t28370;
  t29388 = -1.*t28091*t3913;
  t29420 = t29344 + t29388;
  t28282 = t2345*t28091;
  t29129 = t28370*t3913;
  t29134 = t28282 + t29129;
  t29339 = t29283*t5430;
  t29426 = t2314*t29420;
  t29490 = t29339 + t29426;
  t29605 = t2314*t29283;
  t29620 = -1.*t5430*t29420;
  t29821 = t29605 + t29620;
  t18809 = t17862*t5430;
  t20516 = t2314*t20288;
  t20535 = t18809 + t20516;
  t29215 = -1.*t22739*t29134;
  t29853 = t24074*t29134;
  t30067 = t22739*t29134;
  t30596 = -1.*t24453*t29134;
  t31367 = -1.*t24074*t29134;
  t31544 = t24453*t29134;
  t35213 = -1.*t29283*t5180;
  t35486 = t29283*t17862;
  p_output1[0]=t20535*var2[0] + t2314*t4274*var2[1] + t14950*var2[2];
  p_output1[1]=(t22644*t24453 - 1.*t22535*t24604)*var2[0] + (t22644*t22739 + t22535*t4274*t5430)*var2[1] + (t22644*t24074 - 1.*t22535*t24349)*var2[2];
  p_output1[2]=(t22535*t24453 + t22644*t24604)*var2[0] + (t22535*t22739 - 1.*t22644*t4274*t5430)*var2[1] + (t22535*t24074 + t22644*t24349)*var2[2];
  p_output1[3]=(t2314*(t14950*t29490 + t24349*t29821 + t29853)*t4274 + t14950*(t29215 - 1.*t2314*t29490*t4274 + t29821*t4274*t5430))*var2[0] + (t20535*(-1.*t14950*t29490 - 1.*t24349*t29821 + t31367) + t14950*(t20535*t29490 + t24604*t29821 + t31544))*var2[1] + (t2314*(-1.*t20535*t29490 - 1.*t24604*t29821 + t30596)*t4274 + t20535*(t30067 + t2314*t29490*t4274 - 1.*t29821*t4274*t5430))*var2[2];
  p_output1[4]=(t24074*(t29215 - 1.*t29420*t4274) + t22739*(t14733*t29420 + t29853 + t29283*t5180))*var2[0] + (t24453*(-1.*t14733*t29420 + t31367 + t35213) + t24074*(t20288*t29420 + t31544 + t35486))*var2[1] + (t22739*(-1.*t17862*t29283 - 1.*t20288*t29420 + t30596) + t24453*(t30067 + t29420*t4274))*var2[2];
  p_output1[5]=(t28370*t2987 - 1.*t28091*t3686)*t5180*var2[0] + (t17862*(-1.*t10585*t28091*t2987 + t35213 - 1.*t10585*t28370*t3686) + t5180*(t35486 + t28091*t2987*t5180 + t28370*t3686*t5180))*var2[1] + t17862*(-1.*t28370*t2987 + t28091*t3686)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t17862*(-1.*t10585*t28008 + t35213) + t5180*(t35486 + t28008*t5180))*var2[1] + (-0.15121*t10585 - 0.15121*t17862)*var2[2];
  p_output1[13]=(0.28121*t5007 - 1.*t27958*t5007 - 0.27*t4912*t5007)*var2[0] + (0.28121*t4912 - 1.*t27958*t4912 + 0.27*Power(t5007,2))*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
