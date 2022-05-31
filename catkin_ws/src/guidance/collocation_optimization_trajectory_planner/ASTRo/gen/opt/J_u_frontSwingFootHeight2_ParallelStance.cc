/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:35 GMT+02:00
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
  double t10815;
  double t13382;
  double t13413;
  double t10814;
  double t13698;
  double t14419;
  double t14687;
  double t15233;
  double t15249;
  double t23209;
  double t12713;
  double t13749;
  double t14008;
  double t25300;
  double t25523;
  double t25752;
  double t25833;
  double t25870;
  double t25874;
  double t25880;
  double t26013;
  double t26017;
  double t26028;
  double t26046;
  double t26047;
  double t26048;
  double t26050;
  double t26051;
  double t26052;
  double t26053;
  double t24832;
  double t24987;
  double t25753;
  double t25754;
  double t25863;
  double t25868;
  double t26029;
  double t26045;
  double t26106;
  double t26107;
  double t26109;
  double t26112;
  double t26113;
  double t26114;
  double t26116;
  double t26118;
  double t26119;
  double t26148;
  double t26151;
  double t26153;
  double t26143;
  double t26145;
  double t26146;
  double t26155;
  double t26156;
  double t26158;
  double t26405;
  double t26406;
  double t26407;
  double t26432;
  double t26434;
  double t26167;
  double t26557;
  double t26558;
  double t26559;
  double t26561;
  double t26567;
  double t26568;
  double t26579;
  double t26668;
  double t26681;
  double t26741;
  double t26745;
  double t26746;
  t10815 = Cos(var1[5]);
  t13382 = Sin(var1[3]);
  t13413 = Sin(var1[4]);
  t10814 = Cos(var1[3]);
  t13698 = Sin(var1[5]);
  t14419 = Cos(var1[6]);
  t14687 = -1.*t14419;
  t15233 = 1. + t14687;
  t15249 = 0.15121*t15233;
  t23209 = Sin(var1[6]);
  t12713 = t10814*t10815;
  t13749 = -1.*t13382*t13413*t13698;
  t14008 = t12713 + t13749;
  t25300 = t10815*t13382*t13413;
  t25523 = t10814*t13698;
  t25752 = t25300 + t25523;
  t25833 = Cos(var1[7]);
  t25870 = t14419*t25752;
  t25874 = t14008*t23209;
  t25880 = t25870 + t25874;
  t26013 = Cos(var1[4]);
  t26017 = Sin(var1[7]);
  t26028 = Cos(var1[8]);
  t26046 = t25833*t25880;
  t26047 = t26013*t13382*t26017;
  t26048 = t26046 + t26047;
  t26050 = -1.*t26013*t25833*t13382;
  t26051 = t25880*t26017;
  t26052 = t26050 + t26051;
  t26053 = Sin(var1[8]);
  t24832 = -0.15121*t23209;
  t24987 = t15249 + t24832;
  t25753 = 0.15121*t23209;
  t25754 = t15249 + t25753;
  t25863 = -1.*t25833;
  t25868 = 1. + t25863;
  t26029 = -1.*t26028;
  t26045 = 1. + t26029;
  t26106 = -1.*t10814*t26013*t10815*t14419;
  t26107 = t10814*t26013*t13698*t23209;
  t26109 = t26106 + t26107;
  t26112 = t25833*t26109;
  t26113 = t10814*t13413*t26017;
  t26114 = t26112 + t26113;
  t26116 = -1.*t10814*t25833*t13413;
  t26118 = t26109*t26017;
  t26119 = t26116 + t26118;
  t26148 = t10815*t13382;
  t26151 = t10814*t13413*t13698;
  t26153 = t26148 + t26151;
  t26143 = t10814*t10815*t13413;
  t26145 = -1.*t13382*t13698;
  t26146 = t26143 + t26145;
  t26155 = t14419*t26153;
  t26156 = t26146*t23209;
  t26158 = t26155 + t26156;
  t26405 = -1.*t10814*t10815*t13413;
  t26406 = t13382*t13698;
  t26407 = t26405 + t26406;
  t26432 = -1.*t26407*t23209;
  t26434 = t26155 + t26432;
  t26167 = -1.*t26153*t23209;
  t26557 = t14419*t26407;
  t26558 = t26153*t23209;
  t26559 = t26557 + t26558;
  t26561 = -1.*t10814*t26013*t25833;
  t26567 = -1.*t26559*t26017;
  t26568 = t26561 + t26567;
  t26579 = t25833*t26559;
  t26668 = -1.*t10814*t26013*t26017;
  t26681 = t26579 + t26668;
  t26741 = t10814*t26013*t25833;
  t26745 = t26559*t26017;
  t26746 = t26741 + t26745;
  p_output1[0]=1.;
  p_output1[1]=t14008*t24987 + 0.15121*(t14008*t14419 - 1.*t23209*t25752) + t25752*t25754 + 0.28121*t25868*t25880 - 0.28121*t13382*t26013*t26017 + 0.50321*t26045*t26048 - 0.50321*t26052*t26053 + 0.19821*(t26028*t26048 + t26052*t26053);
  p_output1[2]=t10814*t13698*t24987*t26013 - 1.*t10814*t10815*t25754*t26013 + 0.15121*(t10814*t13698*t14419*t26013 + t10814*t10815*t23209*t26013) - 0.28121*t10814*t13413*t26017 + 0.28121*t25868*t26109 + 0.50321*t26045*t26114 - 0.50321*t26053*t26119 + 0.19821*(t26028*t26114 + t26053*t26119);
  p_output1[3]=t24987*t26146 + t25754*t26153 + 0.28121*t25868*t26158 + 0.50321*t25833*t26045*t26158 - 0.50321*t26017*t26053*t26158 + 0.19821*(t25833*t26028*t26158 + t26017*t26053*t26158) + 0.15121*(t14419*t26146 + t26167);
  p_output1[4]=(-0.15121*t14419 + t25753)*t26153 + (0.15121*t14419 + t25753)*t26407 + 0.15121*(t26167 - 1.*t14419*t26407) + 0.28121*t25868*t26434 + 0.50321*t25833*t26045*t26434 - 0.50321*t26017*t26053*t26434 + 0.19821*(t25833*t26028*t26434 + t26017*t26053*t26434);
  p_output1[5]=0.28121*t10814*t25833*t26013 + 0.28121*t26017*t26559 + 0.50321*t26045*t26568 - 0.50321*t26053*t26681 + 0.19821*(t26028*t26568 + t26053*t26681);
  p_output1[6]=0.50321*t26053*t26681 - 0.50321*t26028*t26746 + 0.19821*(-1.*t26053*t26681 + t26028*t26746);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeight2_ParallelStance.hh"

namespace ParallelStance
{

void J_u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
