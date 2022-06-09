/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:40 GMT+02:00
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
  double t3836;
  double t3950;
  double t3951;
  double t3953;
  double t3964;
  double t3965;
  double t3864;
  double t3987;
  double t3976;
  double t3977;
  double t3993;
  double t3996;
  double t3997;
  double t3999;
  double t4002;
  double t4045;
  double t4046;
  double t4047;
  double t4050;
  double t4051;
  double t4052;
  double t4053;
  double t3963;
  double t3970;
  double t4063;
  double t3985;
  double t3986;
  double t4066;
  double t4065;
  double t4068;
  double t4069;
  double t4071;
  double t4073;
  double t4074;
  double t3994;
  double t3995;
  double t4003;
  double t4041;
  double t4080;
  double t4081;
  double t4082;
  double t4084;
  double t4085;
  double t4086;
  double t4088;
  double t4089;
  double t4090;
  double t4100;
  double t4101;
  double t4103;
  double t4105;
  double t4106;
  double t4107;
  double t4113;
  double t4114;
  double t4115;
  double t4117;
  double t4118;
  double t4119;
  double t4121;
  double t4122;
  double t4123;
  t3836 = Cos(var1[4]);
  t3950 = Cos(var1[12]);
  t3951 = -1.*t3950;
  t3953 = 1. + t3951;
  t3964 = Sin(var1[12]);
  t3965 = -0.15121*t3964;
  t3864 = Cos(var1[5]);
  t3987 = Sin(var1[5]);
  t3976 = Sin(var1[13]);
  t3977 = Sin(var1[4]);
  t3993 = Cos(var1[13]);
  t3996 = t3950*t3836*t3864;
  t3997 = -1.*t3836*t3964*t3987;
  t3999 = t3996 + t3997;
  t4002 = Cos(var1[14]);
  t4045 = -1.*t3976*t3977;
  t4046 = t3993*t3999;
  t4047 = t4045 + t4046;
  t4050 = Sin(var1[14]);
  t4051 = t3993*t3977;
  t4052 = t3976*t3999;
  t4053 = t4051 + t4052;
  t3963 = 0.15121*t3953;
  t3970 = t3963 + t3965;
  t4063 = Sin(var1[3]);
  t3985 = -0.15121*t3953;
  t3986 = t3985 + t3965;
  t4066 = Cos(var1[3]);
  t4065 = t3864*t4063*t3977;
  t4068 = t4066*t3987;
  t4069 = t4065 + t4068;
  t4071 = t4066*t3864;
  t4073 = -1.*t4063*t3977*t3987;
  t4074 = t4071 + t4073;
  t3994 = -1.*t3993;
  t3995 = 1. + t3994;
  t4003 = -1.*t4002;
  t4041 = 1. + t4003;
  t4080 = t3950*t4069;
  t4081 = t3964*t4074;
  t4082 = t4080 + t4081;
  t4084 = t3836*t3976*t4063;
  t4085 = t3993*t4082;
  t4086 = t4084 + t4085;
  t4088 = -1.*t3993*t3836*t4063;
  t4089 = t3976*t4082;
  t4090 = t4088 + t4089;
  t4100 = -1.*t4066*t3864*t3977;
  t4101 = t4063*t3987;
  t4103 = t4100 + t4101;
  t4105 = t3864*t4063;
  t4106 = t4066*t3977*t3987;
  t4107 = t4105 + t4106;
  t4113 = t3950*t4103;
  t4114 = t3964*t4107;
  t4115 = t4113 + t4114;
  t4117 = -1.*t4066*t3836*t3976;
  t4118 = t3993*t4115;
  t4119 = t4117 + t4118;
  t4121 = t3993*t4066*t3836;
  t4122 = t3976*t4115;
  t4123 = t4121 + t4122;
  p_output1[0]=t3836*t3864*t3970 + 0.28121*t3976*t3977 - 1.*t3836*t3986*t3987 - 0.15121*(-1.*t3836*t3864*t3964 - 1.*t3836*t3950*t3987) + 0.28121*t3995*t3999 + 0.50321*t4041*t4047 - 0.50321*t4050*t4053 + 0.19821*(t4002*t4047 + t4050*t4053) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t3836*t3976*t4063 + t3970*t4069 + t3986*t4074 - 0.15121*(-1.*t3964*t4069 + t3950*t4074) + 0.28121*t3995*t4082 + 0.50321*t4041*t4086 - 0.50321*t4050*t4090 + 0.19821*(t4002*t4086 + t4050*t4090) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t3836*t3976*t4066 + t3970*t4103 + t3986*t4107 - 0.15121*(-1.*t3964*t4103 + t3950*t4107) + 0.28121*t3995*t4115 + 0.50321*t4041*t4119 - 0.50321*t4050*t4123 + 0.19821*(t4002*t4119 + t4050*t4123) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
