/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:01 GMT+02:00
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
  double t3175;
  double t4875;
  double t5545;
  double t6906;
  double t6984;
  double t3608;
  double t3734;
  double t7482;
  double t7681;
  double t7707;
  double t7758;
  double t7795;
  double t8091;
  double t8097;
  double t8102;
  double t8138;
  double t8161;
  double t8186;
  double t8190;
  double t4076;
  double t4218;
  double t4876;
  double t5508;
  double t8412;
  double t8343;
  double t8623;
  double t8630;
  double t8637;
  double t7823;
  double t7828;
  double t8391;
  double t8425;
  double t8610;
  double t8758;
  double t8825;
  double t8835;
  double t8882;
  double t8891;
  double t8921;
  double t8945;
  double t8947;
  double t8948;
  double t9211;
  double t9221;
  double t9225;
  double t9137;
  double t9145;
  double t9155;
  double t9382;
  double t9417;
  double t9425;
  double t9443;
  double t9451;
  double t9470;
  double t9477;
  double t9478;
  double t9489;
  t3175 = Cos(var1[4]);
  t4875 = Cos(var1[6]);
  t5545 = Sin(var1[5]);
  t6906 = Sin(var1[4]);
  t6984 = Sin(var1[6]);
  t3608 = Cos(var1[5]);
  t3734 = Cos(var1[7]);
  t7482 = t4875*t6906;
  t7681 = t3175*t5545*t6984;
  t7707 = t7482 + t7681;
  t7758 = Sin(var1[7]);
  t7795 = Cos(var1[8]);
  t8091 = t3175*t3608*t3734;
  t8097 = t7707*t7758;
  t8102 = t8091 + t8097;
  t8138 = t3734*t7707;
  t8161 = -1.*t3175*t3608*t7758;
  t8186 = t8138 + t8161;
  t8190 = Sin(var1[8]);
  t4076 = -1.*t3734;
  t4218 = 1. + t4076;
  t4876 = -1.*t4875;
  t5508 = 1. + t4876;
  t8412 = Cos(var1[3]);
  t8343 = Sin(var1[3]);
  t8623 = t8412*t3608;
  t8630 = -1.*t8343*t6906*t5545;
  t8637 = t8623 + t8630;
  t7823 = -1.*t7795;
  t7828 = 1. + t7823;
  t8391 = t3608*t8343*t6906;
  t8425 = t8412*t5545;
  t8610 = t8391 + t8425;
  t8758 = -1.*t3175*t4875*t8343;
  t8825 = -1.*t8637*t6984;
  t8835 = t8758 + t8825;
  t8882 = t3734*t8610;
  t8891 = t8835*t7758;
  t8921 = t8882 + t8891;
  t8945 = t3734*t8835;
  t8947 = -1.*t8610*t7758;
  t8948 = t8945 + t8947;
  t9211 = t3608*t8343;
  t9221 = t8412*t6906*t5545;
  t9225 = t9211 + t9221;
  t9137 = -1.*t8412*t3608*t6906;
  t9145 = t8343*t5545;
  t9155 = t9137 + t9145;
  t9382 = t8412*t3175*t4875;
  t9417 = -1.*t9225*t6984;
  t9425 = t9382 + t9417;
  t9443 = t3734*t9155;
  t9451 = t9425*t7758;
  t9470 = t9443 + t9451;
  t9477 = t3734*t9425;
  t9478 = -1.*t9155*t7758;
  t9489 = t9477 + t9478;
  p_output1[0]=0.325*t3175*t3608*t4218 - 0.1575*t3175*t5508*t5545 - 0.1575*t6906*t6984 + 0.2255*(-1.*t3175*t4875*t5545 + t6906*t6984) - 0.325*t7707*t7758 + 0.075*t7828*t8102 + 0.075*t8186*t8190 + 0.075*(t7795*t8102 - 1.*t8186*t8190) + var1[0];
  p_output1[1]=0.1575*t3175*t6984*t8343 + 0.325*t4218*t8610 + 0.1575*t5508*t8637 + 0.2255*(-1.*t3175*t6984*t8343 + t4875*t8637) - 0.325*t7758*t8835 + 0.075*t7828*t8921 + 0.075*t8190*t8948 + 0.075*(t7795*t8921 - 1.*t8190*t8948) + var1[1];
  p_output1[2]=-0.1575*t3175*t6984*t8412 + 0.325*t4218*t9155 + 0.1575*t5508*t9225 + 0.2255*(t3175*t6984*t8412 + t4875*t9225) - 0.325*t7758*t9425 + 0.075*t7828*t9470 + 0.075*t8190*t9489 + 0.075*(t7795*t9470 - 1.*t8190*t9489) + var1[2];
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

#include "Joint_1_sphere_center.hh"

namespace SymFunction
{

void Joint_1_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
