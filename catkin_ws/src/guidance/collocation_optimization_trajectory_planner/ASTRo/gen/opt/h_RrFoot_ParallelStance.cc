/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:49 GMT+02:00
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
  double t175;
  double t384;
  double t571;
  double t660;
  double t850;
  double t889;
  double t269;
  double t4568;
  double t2048;
  double t2134;
  double t15313;
  double t18022;
  double t18087;
  double t18443;
  double t22633;
  double t24200;
  double t24434;
  double t24692;
  double t24769;
  double t24798;
  double t24951;
  double t24992;
  double t926;
  double t1546;
  double t25031;
  double t2404;
  double t3735;
  double t25063;
  double t25056;
  double t25067;
  double t25069;
  double t25074;
  double t25089;
  double t25090;
  double t17982;
  double t18014;
  double t23268;
  double t24072;
  double t25163;
  double t25165;
  double t25171;
  double t25177;
  double t25302;
  double t25319;
  double t25365;
  double t25386;
  double t25388;
  double t25646;
  double t25651;
  double t25662;
  double t25731;
  double t25732;
  double t25737;
  double t25750;
  double t25756;
  double t25757;
  double t25759;
  double t25761;
  double t25762;
  double t25768;
  double t25769;
  double t25770;
  t175 = Cos(var1[4]);
  t384 = Cos(var1[15]);
  t571 = -1.*t384;
  t660 = 1. + t571;
  t850 = -0.15121*t660;
  t889 = Sin(var1[15]);
  t269 = Cos(var1[5]);
  t4568 = Sin(var1[5]);
  t2048 = Sin(var1[16]);
  t2134 = Sin(var1[4]);
  t15313 = Cos(var1[16]);
  t18022 = t384*t175*t269;
  t18087 = -1.*t175*t889*t4568;
  t18443 = t18022 + t18087;
  t22633 = Cos(var1[17]);
  t24200 = t2048*t2134;
  t24434 = t15313*t18443;
  t24692 = t24200 + t24434;
  t24769 = Sin(var1[17]);
  t24798 = t15313*t2134;
  t24951 = -1.*t2048*t18443;
  t24992 = t24798 + t24951;
  t926 = -0.15121*t889;
  t1546 = t850 + t926;
  t25031 = Sin(var1[3]);
  t2404 = 0.15121*t889;
  t3735 = t850 + t2404;
  t25063 = Cos(var1[3]);
  t25056 = t269*t25031*t2134;
  t25067 = t25063*t4568;
  t25069 = t25056 + t25067;
  t25074 = t25063*t269;
  t25089 = -1.*t25031*t2134*t4568;
  t25090 = t25074 + t25089;
  t17982 = -1.*t15313;
  t18014 = 1. + t17982;
  t23268 = -1.*t22633;
  t24072 = 1. + t23268;
  t25163 = t384*t25069;
  t25165 = t889*t25090;
  t25171 = t25163 + t25165;
  t25177 = -1.*t175*t2048*t25031;
  t25302 = t15313*t25171;
  t25319 = t25177 + t25302;
  t25365 = -1.*t15313*t175*t25031;
  t25386 = -1.*t2048*t25171;
  t25388 = t25365 + t25386;
  t25646 = -1.*t25063*t269*t2134;
  t25651 = t25031*t4568;
  t25662 = t25646 + t25651;
  t25731 = t269*t25031;
  t25732 = t25063*t2134*t4568;
  t25737 = t25731 + t25732;
  t25750 = t384*t25662;
  t25756 = t889*t25737;
  t25757 = t25750 + t25756;
  t25759 = t25063*t175*t2048;
  t25761 = t15313*t25757;
  t25762 = t25759 + t25761;
  t25768 = t15313*t25063*t175;
  t25769 = -1.*t2048*t25757;
  t25770 = t25768 + t25769;
  p_output1[0]=-0.28121*t18014*t18443 + 0.28121*t2048*t2134 - 0.50321*t24072*t24692 - 0.50321*t24769*t24992 - 0.19821*(t22633*t24692 - 1.*t24769*t24992) + t1546*t175*t269 - 1.*t175*t3735*t4568 - 0.15121*(-1.*t175*t384*t4568 - 1.*t175*t269*t889) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t175*t2048*t25031 + t1546*t25069 - 0.28121*t18014*t25171 - 0.50321*t24072*t25319 - 0.50321*t24769*t25388 - 0.19821*(t22633*t25319 - 1.*t24769*t25388) + t25090*t3735 - 0.15121*(t25090*t384 - 1.*t25069*t889) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t175*t2048*t25063 + t1546*t25662 - 0.28121*t18014*t25757 - 0.50321*t24072*t25762 - 0.50321*t24769*t25770 - 0.19821*(t22633*t25762 - 1.*t24769*t25770) + t25737*t3735 - 0.15121*(t25737*t384 - 1.*t25662*t889) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
