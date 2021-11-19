/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:22 GMT+01:00
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
  double t295;
  double t486;
  double t515;
  double t745;
  double t763;
  double t749;
  double t751;
  double t765;
  double t594;
  double t760;
  double t771;
  double t783;
  double t788;
  double t790;
  double t794;
  double t822;
  double t638;
  double t705;
  double t918;
  double t929;
  double t973;
  double t983;
  double t987;
  double t935;
  double t936;
  double t962;
  double t823;
  double t824;
  double t828;
  double t854;
  double t968;
  double t1030;
  double t1041;
  double t1056;
  double t1063;
  double t1080;
  double t891;
  double t1167;
  double t1169;
  double t1175;
  double t1154;
  double t1156;
  double t1157;
  double t1158;
  double t1177;
  double t1179;
  double t1189;
  double t1195;
  double t1196;
  t295 = Cos(var1[7]);
  t486 = -1.*t295;
  t515 = 1. + t486;
  t745 = Cos(var1[4]);
  t763 = Cos(var1[5]);
  t749 = Cos(var1[6]);
  t751 = Sin(var1[5]);
  t765 = Sin(var1[6]);
  t594 = Sin(var1[4]);
  t760 = -1.*t745*t749*t751;
  t771 = -1.*t745*t763*t765;
  t783 = t760 + t771;
  t788 = t745*t763*t749;
  t790 = -1.*t745*t751*t765;
  t794 = t788 + t790;
  t822 = Sin(var1[7]);
  t638 = -1.6e-11*t515;
  t705 = 1. + t638;
  t918 = Sin(var1[3]);
  t929 = Cos(var1[3]);
  t973 = t763*t918*t594;
  t983 = t929*t751;
  t987 = t973 + t983;
  t935 = t929*t763;
  t936 = -1.*t918*t594*t751;
  t962 = t935 + t936;
  t823 = 4.e-6*t822;
  t824 = 0. + t823;
  t828 = -1.*t515;
  t854 = 1. + t828;
  t968 = t749*t962;
  t1030 = -1.*t987*t765;
  t1041 = t968 + t1030;
  t1056 = t749*t987;
  t1063 = t962*t765;
  t1080 = t1056 + t1063;
  t891 = 0. + t822;
  t1167 = -1.*t929*t763*t594;
  t1169 = t918*t751;
  t1175 = t1167 + t1169;
  t1154 = t763*t918;
  t1156 = t929*t594*t751;
  t1157 = t1154 + t1156;
  t1158 = t749*t1157;
  t1177 = -1.*t1175*t765;
  t1179 = t1158 + t1177;
  t1189 = t749*t1175;
  t1195 = t1157*t765;
  t1196 = t1189 + t1195;
  p_output1[0]=-4.e-6*t515*t594 + t705*t783 + t794*t824 - 4.e-6*(-4.e-6*t515*t783 + t594*t854 + t794*t891);
  p_output1[1]=t1041*t705 + t1080*t824 + 4.e-6*t515*t745*t918 - 4.e-6*(-4.e-6*t1041*t515 + t1080*t891 - 1.*t745*t854*t918);
  p_output1[2]=t1179*t705 + t1196*t824 - 4.e-6*t515*t745*t929 - 4.e-6*(-4.e-6*t1179*t515 + t1196*t891 + t745*t854*t929);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fl_hip_pitch_axis.hh"

namespace SymFunction
{

void Joint_fl_hip_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
