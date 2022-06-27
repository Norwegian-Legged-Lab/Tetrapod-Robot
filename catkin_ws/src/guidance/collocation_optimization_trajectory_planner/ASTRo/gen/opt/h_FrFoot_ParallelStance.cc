/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:02 GMT+02:00
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
  double t6247;
  double t10415;
  double t10416;
  double t10969;
  double t10977;
  double t10989;
  double t10353;
  double t11478;
  double t11375;
  double t11382;
  double t11605;
  double t11678;
  double t11741;
  double t11783;
  double t11818;
  double t12055;
  double t12060;
  double t12165;
  double t12197;
  double t12219;
  double t12235;
  double t12237;
  double t10976;
  double t11362;
  double t12274;
  double t11451;
  double t11456;
  double t12633;
  double t12389;
  double t12665;
  double t12687;
  double t12708;
  double t12709;
  double t12720;
  double t11624;
  double t11650;
  double t11934;
  double t12041;
  double t12732;
  double t12735;
  double t12736;
  double t12909;
  double t12911;
  double t12912;
  double t12946;
  double t12947;
  double t12949;
  double t12966;
  double t12967;
  double t12976;
  double t12988;
  double t12989;
  double t12990;
  double t13033;
  double t13035;
  double t13037;
  double t13039;
  double t13049;
  double t13190;
  double t13192;
  double t13193;
  double t13194;
  t6247 = Cos(var1[4]);
  t10415 = Cos(var1[12]);
  t10416 = -1.*t10415;
  t10969 = 1. + t10416;
  t10977 = Sin(var1[12]);
  t10989 = -0.15121*t10977;
  t10353 = Cos(var1[5]);
  t11478 = Sin(var1[5]);
  t11375 = Sin(var1[13]);
  t11382 = Sin(var1[4]);
  t11605 = Cos(var1[13]);
  t11678 = t10415*t6247*t10353;
  t11741 = -1.*t6247*t10977*t11478;
  t11783 = t11678 + t11741;
  t11818 = Cos(var1[14]);
  t12055 = -1.*t11375*t11382;
  t12060 = t11605*t11783;
  t12165 = t12055 + t12060;
  t12197 = Sin(var1[14]);
  t12219 = t11605*t11382;
  t12235 = t11375*t11783;
  t12237 = t12219 + t12235;
  t10976 = 0.15121*t10969;
  t11362 = t10976 + t10989;
  t12274 = Sin(var1[3]);
  t11451 = -0.15121*t10969;
  t11456 = t11451 + t10989;
  t12633 = Cos(var1[3]);
  t12389 = t10353*t12274*t11382;
  t12665 = t12633*t11478;
  t12687 = t12389 + t12665;
  t12708 = t12633*t10353;
  t12709 = -1.*t12274*t11382*t11478;
  t12720 = t12708 + t12709;
  t11624 = -1.*t11605;
  t11650 = 1. + t11624;
  t11934 = -1.*t11818;
  t12041 = 1. + t11934;
  t12732 = t10415*t12687;
  t12735 = t10977*t12720;
  t12736 = t12732 + t12735;
  t12909 = t6247*t11375*t12274;
  t12911 = t11605*t12736;
  t12912 = t12909 + t12911;
  t12946 = -1.*t11605*t6247*t12274;
  t12947 = t11375*t12736;
  t12949 = t12946 + t12947;
  t12966 = -1.*t12633*t10353*t11382;
  t12967 = t12274*t11478;
  t12976 = t12966 + t12967;
  t12988 = t10353*t12274;
  t12989 = t12633*t11382*t11478;
  t12990 = t12988 + t12989;
  t13033 = t10415*t12976;
  t13035 = t10977*t12990;
  t13037 = t13033 + t13035;
  t13039 = -1.*t12633*t6247*t11375;
  t13049 = t11605*t13037;
  t13190 = t13039 + t13049;
  t13192 = t11605*t12633*t6247;
  t13193 = t11375*t13037;
  t13194 = t13192 + t13193;
  p_output1[0]=0.28121*t11375*t11382 + 0.28121*t11650*t11783 + 0.50321*t12041*t12165 - 0.50321*t12197*t12237 + 0.19821*(t11818*t12165 + t12197*t12237) + t10353*t11362*t6247 - 1.*t11456*t11478*t6247 - 0.15121*(-1.*t10353*t10977*t6247 - 1.*t10415*t11478*t6247) + var1[0] - 1.*var2[0];
  p_output1[1]=t11362*t12687 + t11456*t12720 - 0.15121*(-1.*t10977*t12687 + t10415*t12720) + 0.28121*t11650*t12736 + 0.50321*t12041*t12912 - 0.50321*t12197*t12949 + 0.19821*(t11818*t12912 + t12197*t12949) - 0.28121*t11375*t12274*t6247 + var1[1] - 1.*var2[1];
  p_output1[2]=t11362*t12976 + t11456*t12990 - 0.15121*(-1.*t10977*t12976 + t10415*t12990) + 0.28121*t11650*t13037 + 0.50321*t12041*t13190 - 0.50321*t12197*t13194 + 0.19821*(t11818*t13190 + t12197*t13194) + 0.28121*t11375*t12633*t6247 + var1[2] - 1.*var2[2];
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

namespace ParallelStance
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
