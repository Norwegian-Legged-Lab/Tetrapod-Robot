/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:52 GMT+02:00
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
  double t1169;
  double t3840;
  double t45281;
  double t16005;
  double t22771;
  double t24065;
  double t29380;
  double t44359;
  double t44784;
  double t44788;
  double t44793;
  double t44983;
  double t45116;
  double t45385;
  double t45280;
  double t45560;
  double t45570;
  double t45571;
  double t45581;
  double t45306;
  double t45603;
  double t45627;
  double t45628;
  double t45629;
  double t45637;
  double t45662;
  double t45715;
  double t45722;
  double t45731;
  double t45733;
  double t45747;
  double t45764;
  double t45785;
  double t45794;
  double t45795;
  double t45803;
  double t45811;
  double t45812;
  double t45813;
  double t45814;
  double t45846;
  double t24347;
  double t44722;
  double t45242;
  double t45250;
  double t45849;
  double t45856;
  double t45859;
  double t45861;
  double t45368;
  double t45383;
  double t45428;
  double t45439;
  double t45864;
  double t45866;
  double t45876;
  double t45564;
  double t45569;
  double t45619;
  double t45621;
  double t45638;
  double t45659;
  double t45922;
  double t45927;
  double t45928;
  double t45790;
  double t45793;
  double t45934;
  double t45936;
  double t45938;
  double t45948;
  double t45949;
  double t45955;
  double t45961;
  double t45963;
  double t45966;
  double t45968;
  double t45970;
  double t45972;
  double t45994;
  double t45995;
  double t45999;
  t1169 = Cos(var1[4]);
  t3840 = Cos(var1[5]);
  t45281 = Sin(var1[4]);
  t16005 = Cos(var1[9]);
  t22771 = -1.*t16005;
  t24065 = 1. + t22771;
  t29380 = Sin(var1[9]);
  t44359 = 0.15121*t29380;
  t44784 = Cos(var1[15]);
  t44788 = -1.*t44784;
  t44793 = 1. + t44788;
  t44983 = -0.15121*t44793;
  t45116 = Sin(var1[15]);
  t45385 = Sin(var1[5]);
  t45280 = Sin(var1[10]);
  t45560 = Cos(var1[10]);
  t45570 = t16005*t1169*t3840;
  t45571 = -1.*t1169*t29380*t45385;
  t45581 = t45570 + t45571;
  t45306 = Sin(var1[16]);
  t45603 = Cos(var1[16]);
  t45627 = t44784*t1169*t3840;
  t45628 = -1.*t1169*t45116*t45385;
  t45629 = t45627 + t45628;
  t45637 = Cos(var1[11]);
  t45662 = t45280*t45281;
  t45715 = t45560*t45581;
  t45722 = t45662 + t45715;
  t45731 = Sin(var1[11]);
  t45733 = t45560*t45281;
  t45747 = -1.*t45280*t45581;
  t45764 = t45733 + t45747;
  t45785 = Cos(var1[17]);
  t45794 = t45306*t45281;
  t45795 = t45603*t45629;
  t45803 = t45794 + t45795;
  t45811 = Sin(var1[17]);
  t45812 = t45603*t45281;
  t45813 = -1.*t45306*t45629;
  t45814 = t45812 + t45813;
  t45846 = Sin(var1[3]);
  t24347 = -0.15121*t24065;
  t44722 = t24347 + t44359;
  t45242 = -0.15121*t45116;
  t45250 = t44983 + t45242;
  t45849 = t3840*t45846*t45281;
  t45856 = Cos(var1[3]);
  t45859 = t45856*t45385;
  t45861 = t45849 + t45859;
  t45368 = 0.15121*t24065;
  t45383 = t45368 + t44359;
  t45428 = 0.15121*t45116;
  t45439 = t44983 + t45428;
  t45864 = t45856*t3840;
  t45866 = -1.*t45846*t45281*t45385;
  t45876 = t45864 + t45866;
  t45564 = -1.*t45560;
  t45569 = 1. + t45564;
  t45619 = -1.*t45603;
  t45621 = 1. + t45619;
  t45638 = -1.*t45637;
  t45659 = 1. + t45638;
  t45922 = t16005*t45861;
  t45927 = t29380*t45876;
  t45928 = t45922 + t45927;
  t45790 = -1.*t45785;
  t45793 = 1. + t45790;
  t45934 = t44784*t45861;
  t45936 = t45116*t45876;
  t45938 = t45934 + t45936;
  t45948 = -1.*t1169*t45280*t45846;
  t45949 = t45560*t45928;
  t45955 = t45948 + t45949;
  t45961 = -1.*t45560*t1169*t45846;
  t45963 = -1.*t45280*t45928;
  t45966 = t45961 + t45963;
  t45968 = -1.*t1169*t45306*t45846;
  t45970 = t45603*t45938;
  t45972 = t45968 + t45970;
  t45994 = -1.*t45603*t1169*t45846;
  t45995 = -1.*t45306*t45938;
  t45999 = t45994 + t45995;
  p_output1[0]=t1169*t3840*t44722 - 1.*t1169*t3840*t45250 + 0.28121*t45280*t45281 - 0.28121*t45281*t45306 - 1.*t1169*t45383*t45385 + 0.15121*(-1.*t1169*t29380*t3840 - 1.*t1169*t16005*t45385) + 0.15121*(-1.*t1169*t3840*t45116 - 1.*t1169*t44784*t45385) + t1169*t45385*t45439 - 0.28121*t45569*t45581 + 0.28121*t45621*t45629 - 0.50321*t45659*t45722 - 0.50321*t45731*t45764 - 0.23321*(t45637*t45722 - 1.*t45731*t45764) + 0.50321*t45793*t45803 + 0.50321*t45811*t45814 + 0.23321*(t45785*t45803 - 1.*t45811*t45814);
  p_output1[1]=-0.28121*t1169*t45280*t45846 + 0.28121*t1169*t45306*t45846 + t44722*t45861 - 1.*t45250*t45861 + t45383*t45876 - 1.*t45439*t45876 + 0.15121*(-1.*t29380*t45861 + t16005*t45876) + 0.15121*(-1.*t45116*t45861 + t44784*t45876) - 0.28121*t45569*t45928 + 0.28121*t45621*t45938 - 0.50321*t45659*t45955 - 0.50321*t45731*t45966 - 0.23321*(t45637*t45955 - 1.*t45731*t45966) + 0.50321*t45793*t45972 + 0.50321*t45811*t45999 + 0.23321*(t45785*t45972 - 1.*t45811*t45999);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_rear_ParallelStance.hh"

namespace ParallelStance
{

void step_distance_rear_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
