/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:42 GMT+02:00
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
  double t96;
  double t227;
  double t252;
  double t765;
  double t879;
  double t1074;
  double t99;
  double t3184;
  double t3128;
  double t3130;
  double t3230;
  double t3258;
  double t3266;
  double t3270;
  double t3279;
  double t4586;
  double t4904;
  double t5279;
  double t8400;
  double t8455;
  double t10439;
  double t12037;
  double t1075;
  double t1087;
  double t14209;
  double t3139;
  double t3176;
  double t14498;
  double t14378;
  double t14604;
  double t14605;
  double t15452;
  double t16375;
  double t16437;
  double t3252;
  double t3257;
  double t3283;
  double t3624;
  double t17903;
  double t17974;
  double t17975;
  double t17989;
  double t17990;
  double t18004;
  double t18013;
  double t18015;
  double t18016;
  double t18046;
  double t18047;
  double t18052;
  double t18054;
  double t18090;
  double t18095;
  double t18115;
  double t18116;
  double t18117;
  double t18123;
  double t18124;
  double t18125;
  double t18127;
  double t18128;
  double t18129;
  t96 = Cos(var1[4]);
  t227 = Cos(var1[15]);
  t252 = -1.*t227;
  t765 = 1. + t252;
  t879 = -0.15121*t765;
  t1074 = Sin(var1[15]);
  t99 = Cos(var1[5]);
  t3184 = Sin(var1[5]);
  t3128 = Sin(var1[16]);
  t3130 = Sin(var1[4]);
  t3230 = Cos(var1[16]);
  t3258 = t227*t96*t99;
  t3266 = -1.*t96*t1074*t3184;
  t3270 = t3258 + t3266;
  t3279 = Cos(var1[17]);
  t4586 = t3128*t3130;
  t4904 = t3230*t3270;
  t5279 = t4586 + t4904;
  t8400 = Sin(var1[17]);
  t8455 = t3230*t3130;
  t10439 = -1.*t3128*t3270;
  t12037 = t8455 + t10439;
  t1075 = -0.15121*t1074;
  t1087 = t879 + t1075;
  t14209 = Sin(var1[3]);
  t3139 = 0.15121*t1074;
  t3176 = t879 + t3139;
  t14498 = Cos(var1[3]);
  t14378 = t99*t14209*t3130;
  t14604 = t14498*t3184;
  t14605 = t14378 + t14604;
  t15452 = t14498*t99;
  t16375 = -1.*t14209*t3130*t3184;
  t16437 = t15452 + t16375;
  t3252 = -1.*t3230;
  t3257 = 1. + t3252;
  t3283 = -1.*t3279;
  t3624 = 1. + t3283;
  t17903 = t227*t14605;
  t17974 = t1074*t16437;
  t17975 = t17903 + t17974;
  t17989 = -1.*t96*t3128*t14209;
  t17990 = t3230*t17975;
  t18004 = t17989 + t17990;
  t18013 = -1.*t3230*t96*t14209;
  t18015 = -1.*t3128*t17975;
  t18016 = t18013 + t18015;
  t18046 = -1.*t14498*t99*t3130;
  t18047 = t14209*t3184;
  t18052 = t18046 + t18047;
  t18054 = t99*t14209;
  t18090 = t14498*t3130*t3184;
  t18095 = t18054 + t18090;
  t18115 = t227*t18052;
  t18116 = t1074*t18095;
  t18117 = t18115 + t18116;
  t18123 = t14498*t96*t3128;
  t18124 = t3230*t18117;
  t18125 = t18123 + t18124;
  t18127 = t3230*t14498*t96;
  t18128 = -1.*t3128*t18117;
  t18129 = t18127 + t18128;
  p_output1[0]=0.28121*t3128*t3130 - 0.28121*t3257*t3270 - 0.50321*t3624*t5279 - 0.50321*t12037*t8400 - 0.19821*(t3279*t5279 - 1.*t12037*t8400) - 1.*t3176*t3184*t96 + t1087*t96*t99 - 0.15121*(-1.*t227*t3184*t96 - 1.*t1074*t96*t99) + var1[0] - 1.*var2[0];
  p_output1[1]=t1087*t14605 - 0.15121*(-1.*t1074*t14605 + t16437*t227) + t16437*t3176 - 0.28121*t17975*t3257 - 0.50321*t18004*t3624 - 0.50321*t18016*t8400 - 0.19821*(t18004*t3279 - 1.*t18016*t8400) - 0.28121*t14209*t3128*t96 + var1[1] - 1.*var2[1];
  p_output1[2]=t1087*t18052 - 0.15121*(-1.*t1074*t18052 + t18095*t227) + t18095*t3176 - 0.28121*t18117*t3257 - 0.50321*t18125*t3624 - 0.50321*t18129*t8400 - 0.19821*(t18125*t3279 - 1.*t18129*t8400) + 0.28121*t14498*t3128*t96 + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
