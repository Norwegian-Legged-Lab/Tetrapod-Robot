/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:58 GMT+02:00
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
  double t3475;
  double t11178;
  double t11771;
  double t14845;
  double t18778;
  double t18805;
  double t5295;
  double t18855;
  double t18906;
  double t18911;
  double t18912;
  double t18924;
  double t18926;
  double t18927;
  double t18933;
  double t18936;
  double t18937;
  double t18941;
  double t19002;
  double t19004;
  double t19005;
  double t19007;
  double t18806;
  double t18808;
  double t19020;
  double t19017;
  double t18856;
  double t18864;
  double t19018;
  double t19021;
  double t19022;
  double t19024;
  double t19025;
  double t19027;
  double t18908;
  double t18909;
  double t18934;
  double t18935;
  double t19037;
  double t19038;
  double t19039;
  double t19043;
  double t19044;
  double t19045;
  double t19048;
  double t19050;
  double t19051;
  double t19059;
  double t19061;
  double t19062;
  double t19065;
  double t19066;
  double t19067;
  double t19074;
  double t19075;
  double t19076;
  double t19079;
  double t19080;
  double t19081;
  double t19083;
  double t19093;
  double t19094;
  t3475 = Cos(var1[4]);
  t11178 = Cos(var1[6]);
  t11771 = -1.*t11178;
  t14845 = 1. + t11771;
  t18778 = 0.15121*t14845;
  t18805 = Sin(var1[6]);
  t5295 = Sin(var1[5]);
  t18855 = Cos(var1[5]);
  t18906 = Cos(var1[7]);
  t18911 = t3475*t18855*t11178;
  t18912 = -1.*t3475*t5295*t18805;
  t18924 = t18911 + t18912;
  t18926 = Sin(var1[4]);
  t18927 = Sin(var1[7]);
  t18933 = Cos(var1[8]);
  t18936 = t18906*t18924;
  t18937 = -1.*t18926*t18927;
  t18941 = t18936 + t18937;
  t19002 = t18906*t18926;
  t19004 = t18924*t18927;
  t19005 = t19002 + t19004;
  t19007 = Sin(var1[8]);
  t18806 = -0.15121*t18805;
  t18808 = t18778 + t18806;
  t19020 = Sin(var1[3]);
  t19017 = Cos(var1[3]);
  t18856 = 0.15121*t18805;
  t18864 = t18778 + t18856;
  t19018 = t19017*t18855;
  t19021 = -1.*t19020*t18926*t5295;
  t19022 = t19018 + t19021;
  t19024 = t18855*t19020*t18926;
  t19025 = t19017*t5295;
  t19027 = t19024 + t19025;
  t18908 = -1.*t18906;
  t18909 = 1. + t18908;
  t18934 = -1.*t18933;
  t18935 = 1. + t18934;
  t19037 = t11178*t19027;
  t19038 = t19022*t18805;
  t19039 = t19037 + t19038;
  t19043 = t18906*t19039;
  t19044 = t3475*t19020*t18927;
  t19045 = t19043 + t19044;
  t19048 = -1.*t3475*t18906*t19020;
  t19050 = t19039*t18927;
  t19051 = t19048 + t19050;
  t19059 = t18855*t19020;
  t19061 = t19017*t18926*t5295;
  t19062 = t19059 + t19061;
  t19065 = -1.*t19017*t18855*t18926;
  t19066 = t19020*t5295;
  t19067 = t19065 + t19066;
  t19074 = t11178*t19067;
  t19075 = t19062*t18805;
  t19076 = t19074 + t19075;
  t19079 = t18906*t19076;
  t19080 = -1.*t19017*t3475*t18927;
  t19081 = t19079 + t19080;
  t19083 = t19017*t3475*t18906;
  t19093 = t19076*t18927;
  t19094 = t19083 + t19093;
  p_output1[0]=0.28121*t18909*t18924 + 0.28121*t18926*t18927 + 0.50321*t18935*t18941 - 0.50321*t19005*t19007 + 0.19821*(t18933*t18941 + t19005*t19007) + t18855*t18864*t3475 - 1.*t18808*t3475*t5295 + 0.15121*(-1.*t18805*t18855*t3475 - 1.*t11178*t3475*t5295) + var1[0] - 1.*var2[0];
  p_output1[1]=t18808*t19022 + t18864*t19027 + 0.15121*(t11178*t19022 - 1.*t18805*t19027) + 0.28121*t18909*t19039 + 0.50321*t18935*t19045 - 0.50321*t19007*t19051 + 0.19821*(t18933*t19045 + t19007*t19051) - 0.28121*t18927*t19020*t3475 + var1[1] - 1.*var2[1];
  p_output1[2]=t18808*t19062 + t18864*t19067 + 0.15121*(t11178*t19062 - 1.*t18805*t19067) + 0.28121*t18909*t19076 + 0.50321*t18935*t19081 - 0.50321*t19007*t19094 + 0.19821*(t18933*t19081 + t19007*t19094) + 0.28121*t18927*t19017*t3475 + var1[2] - 1.*var2[2];
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
