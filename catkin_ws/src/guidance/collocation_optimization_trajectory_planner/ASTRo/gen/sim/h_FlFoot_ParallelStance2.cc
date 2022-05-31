/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:27 GMT+02:00
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
  double t6179;
  double t6897;
  double t8336;
  double t9705;
  double t9725;
  double t9726;
  double t6894;
  double t9788;
  double t12145;
  double t12169;
  double t12176;
  double t12184;
  double t12206;
  double t12359;
  double t12367;
  double t12376;
  double t12382;
  double t12383;
  double t12388;
  double t12393;
  double t12394;
  double t12396;
  double t9753;
  double t9759;
  double t12427;
  double t12424;
  double t9811;
  double t11748;
  double t12426;
  double t12428;
  double t12433;
  double t12447;
  double t12453;
  double t12454;
  double t12154;
  double t12161;
  double t12371;
  double t12372;
  double t12592;
  double t12593;
  double t12692;
  double t12729;
  double t12730;
  double t12731;
  double t12735;
  double t12738;
  double t12748;
  double t12819;
  double t12820;
  double t12863;
  double t12865;
  double t12868;
  double t12869;
  double t12923;
  double t12924;
  double t13008;
  double t13015;
  double t13016;
  double t13019;
  double t13023;
  double t13026;
  double t13027;
  t6179 = Cos(var1[4]);
  t6897 = Cos(var1[6]);
  t8336 = -1.*t6897;
  t9705 = 1. + t8336;
  t9725 = 0.15121*t9705;
  t9726 = Sin(var1[6]);
  t6894 = Sin(var1[5]);
  t9788 = Cos(var1[5]);
  t12145 = Cos(var1[7]);
  t12169 = t6179*t9788*t6897;
  t12176 = -1.*t6179*t6894*t9726;
  t12184 = t12169 + t12176;
  t12206 = Sin(var1[4]);
  t12359 = Sin(var1[7]);
  t12367 = Cos(var1[8]);
  t12376 = t12145*t12184;
  t12382 = -1.*t12206*t12359;
  t12383 = t12376 + t12382;
  t12388 = t12145*t12206;
  t12393 = t12184*t12359;
  t12394 = t12388 + t12393;
  t12396 = Sin(var1[8]);
  t9753 = -0.15121*t9726;
  t9759 = t9725 + t9753;
  t12427 = Sin(var1[3]);
  t12424 = Cos(var1[3]);
  t9811 = 0.15121*t9726;
  t11748 = t9725 + t9811;
  t12426 = t12424*t9788;
  t12428 = -1.*t12427*t12206*t6894;
  t12433 = t12426 + t12428;
  t12447 = t9788*t12427*t12206;
  t12453 = t12424*t6894;
  t12454 = t12447 + t12453;
  t12154 = -1.*t12145;
  t12161 = 1. + t12154;
  t12371 = -1.*t12367;
  t12372 = 1. + t12371;
  t12592 = t6897*t12454;
  t12593 = t12433*t9726;
  t12692 = t12592 + t12593;
  t12729 = t12145*t12692;
  t12730 = t6179*t12427*t12359;
  t12731 = t12729 + t12730;
  t12735 = -1.*t6179*t12145*t12427;
  t12738 = t12692*t12359;
  t12748 = t12735 + t12738;
  t12819 = t9788*t12427;
  t12820 = t12424*t12206*t6894;
  t12863 = t12819 + t12820;
  t12865 = -1.*t12424*t9788*t12206;
  t12868 = t12427*t6894;
  t12869 = t12865 + t12868;
  t12923 = t6897*t12869;
  t12924 = t12863*t9726;
  t13008 = t12923 + t12924;
  t13015 = t12145*t13008;
  t13016 = -1.*t12424*t6179*t12359;
  t13019 = t13015 + t13016;
  t13023 = t12424*t6179*t12145;
  t13026 = t13008*t12359;
  t13027 = t13023 + t13026;
  p_output1[0]=0.28121*t12161*t12184 + 0.28121*t12206*t12359 + 0.50321*t12372*t12383 - 0.50321*t12394*t12396 + 0.23321*(t12367*t12383 + t12394*t12396) - 1.*t6179*t6894*t9759 + t11748*t6179*t9788 + 0.15121*(-1.*t6179*t6894*t6897 - 1.*t6179*t9726*t9788) + var1[0] - 1.*var2[0];
  p_output1[1]=t11748*t12454 + 0.28121*t12161*t12692 + 0.50321*t12372*t12731 - 0.50321*t12396*t12748 + 0.23321*(t12367*t12731 + t12396*t12748) - 0.28121*t12359*t12427*t6179 + 0.15121*(t12433*t6897 - 1.*t12454*t9726) + t12433*t9759 + var1[1] - 1.*var2[1];
  p_output1[2]=t11748*t12869 + 0.28121*t12161*t13008 + 0.50321*t12372*t13019 - 0.50321*t12396*t13027 + 0.23321*(t12367*t13019 + t12396*t13027) + 0.28121*t12359*t12424*t6179 + 0.15121*(t12863*t6897 - 1.*t12869*t9726) + t12863*t9759 + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
