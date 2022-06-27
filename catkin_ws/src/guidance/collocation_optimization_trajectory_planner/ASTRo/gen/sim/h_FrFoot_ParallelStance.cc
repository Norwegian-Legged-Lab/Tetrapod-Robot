/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:22 GMT+02:00
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
  double t47;
  double t383;
  double t644;
  double t650;
  double t696;
  double t1096;
  double t350;
  double t2978;
  double t2622;
  double t2846;
  double t3040;
  double t3077;
  double t3082;
  double t3083;
  double t3086;
  double t3089;
  double t3090;
  double t3091;
  double t3093;
  double t3094;
  double t3095;
  double t3096;
  double t651;
  double t1369;
  double t4803;
  double t2925;
  double t2948;
  double t4893;
  double t4878;
  double t4940;
  double t4976;
  double t5036;
  double t6374;
  double t6696;
  double t3066;
  double t3073;
  double t3087;
  double t3088;
  double t7702;
  double t7984;
  double t8401;
  double t8578;
  double t8597;
  double t8610;
  double t8864;
  double t8875;
  double t8973;
  double t10272;
  double t10420;
  double t10438;
  double t10600;
  double t10646;
  double t10676;
  double t11202;
  double t11227;
  double t11228;
  double t11508;
  double t11518;
  double t11573;
  double t11608;
  double t11613;
  double t11652;
  t47 = Cos(var1[4]);
  t383 = Cos(var1[12]);
  t644 = -1.*t383;
  t650 = 1. + t644;
  t696 = Sin(var1[12]);
  t1096 = -0.15121*t696;
  t350 = Cos(var1[5]);
  t2978 = Sin(var1[5]);
  t2622 = Sin(var1[13]);
  t2846 = Sin(var1[4]);
  t3040 = Cos(var1[13]);
  t3077 = t383*t47*t350;
  t3082 = -1.*t47*t696*t2978;
  t3083 = t3077 + t3082;
  t3086 = Cos(var1[14]);
  t3089 = -1.*t2622*t2846;
  t3090 = t3040*t3083;
  t3091 = t3089 + t3090;
  t3093 = Sin(var1[14]);
  t3094 = t3040*t2846;
  t3095 = t2622*t3083;
  t3096 = t3094 + t3095;
  t651 = 0.15121*t650;
  t1369 = t651 + t1096;
  t4803 = Sin(var1[3]);
  t2925 = -0.15121*t650;
  t2948 = t2925 + t1096;
  t4893 = Cos(var1[3]);
  t4878 = t350*t4803*t2846;
  t4940 = t4893*t2978;
  t4976 = t4878 + t4940;
  t5036 = t4893*t350;
  t6374 = -1.*t4803*t2846*t2978;
  t6696 = t5036 + t6374;
  t3066 = -1.*t3040;
  t3073 = 1. + t3066;
  t3087 = -1.*t3086;
  t3088 = 1. + t3087;
  t7702 = t383*t4976;
  t7984 = t696*t6696;
  t8401 = t7702 + t7984;
  t8578 = t47*t2622*t4803;
  t8597 = t3040*t8401;
  t8610 = t8578 + t8597;
  t8864 = -1.*t3040*t47*t4803;
  t8875 = t2622*t8401;
  t8973 = t8864 + t8875;
  t10272 = -1.*t4893*t350*t2846;
  t10420 = t4803*t2978;
  t10438 = t10272 + t10420;
  t10600 = t350*t4803;
  t10646 = t4893*t2846*t2978;
  t10676 = t10600 + t10646;
  t11202 = t383*t10438;
  t11227 = t696*t10676;
  t11228 = t11202 + t11227;
  t11508 = -1.*t4893*t47*t2622;
  t11518 = t3040*t11228;
  t11573 = t11508 + t11518;
  t11608 = t3040*t4893*t47;
  t11613 = t2622*t11228;
  t11652 = t11608 + t11613;
  p_output1[0]=0.28121*t2622*t2846 + 0.28121*t3073*t3083 + 0.50321*t3088*t3091 - 0.50321*t3093*t3096 + 0.19821*(t3086*t3091 + t3093*t3096) - 1.*t2948*t2978*t47 + t1369*t350*t47 - 0.15121*(-1.*t2978*t383*t47 - 1.*t350*t47*t696) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t2622*t47*t4803 + t1369*t4976 + t2948*t6696 - 0.15121*(t383*t6696 - 1.*t4976*t696) + 0.28121*t3073*t8401 + 0.50321*t3088*t8610 - 0.50321*t3093*t8973 + 0.19821*(t3086*t8610 + t3093*t8973) + var1[1] - 1.*var2[1];
  p_output1[2]=t10438*t1369 + t10676*t2948 + 0.28121*t11228*t3073 + 0.50321*t11573*t3088 - 0.50321*t11652*t3093 + 0.19821*(t11573*t3086 + t11652*t3093) + 0.28121*t2622*t47*t4893 - 0.15121*(t10676*t383 - 1.*t10438*t696) + var1[2] - 1.*var2[2];
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
