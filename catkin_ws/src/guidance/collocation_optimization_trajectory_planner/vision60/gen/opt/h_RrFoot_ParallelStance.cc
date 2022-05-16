/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:25 GMT+02:00
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
  double t4904;
  double t6168;
  double t6236;
  double t6813;
  double t10026;
  double t6019;
  double t12697;
  double t4429;
  double t12707;
  double t12830;
  double t12880;
  double t13087;
  double t13282;
  double t13315;
  double t13316;
  double t13348;
  double t13356;
  double t13357;
  double t13358;
  double t4790;
  double t4880;
  double t13405;
  double t7309;
  double t9576;
  double t13435;
  double t13465;
  double t13470;
  double t13478;
  double t13418;
  double t13450;
  double t13454;
  double t13530;
  double t13550;
  double t13556;
  double t13351;
  double t13352;
  double t13571;
  double t13572;
  double t13583;
  double t13590;
  double t13596;
  double t13598;
  double t13739;
  double t13743;
  double t13745;
  double t13734;
  double t13735;
  double t13736;
  double t13760;
  double t13765;
  double t13769;
  double t13901;
  double t14129;
  double t14132;
  double t14695;
  double t14847;
  double t14870;
  t4904 = Cos(var1[4]);
  t6168 = Sin(var1[15]);
  t6236 = Sin(var1[4]);
  t6813 = Cos(var1[15]);
  t10026 = Sin(var1[5]);
  t6019 = Cos(var1[5]);
  t12697 = Sin(var1[16]);
  t4429 = Cos(var1[16]);
  t12707 = t6813*t6236;
  t12830 = t4904*t6168*t10026;
  t12880 = t12707 + t12830;
  t13087 = Sin(var1[17]);
  t13282 = -1.*t4904*t6019*t12697;
  t13315 = t4429*t12880;
  t13316 = t13282 + t13315;
  t13348 = Cos(var1[17]);
  t13356 = t4429*t4904*t6019;
  t13357 = t12697*t12880;
  t13358 = t13356 + t13357;
  t4790 = -1.*t4429;
  t4880 = 1. + t4790;
  t13405 = Sin(var1[3]);
  t7309 = -1.*t6813;
  t9576 = 1. + t7309;
  t13435 = Cos(var1[3]);
  t13465 = t13435*t6019;
  t13470 = -1.*t13405*t6236*t10026;
  t13478 = t13465 + t13470;
  t13418 = t6019*t13405*t6236;
  t13450 = t13435*t10026;
  t13454 = t13418 + t13450;
  t13530 = -1.*t6813*t4904*t13405;
  t13550 = -1.*t6168*t13478;
  t13556 = t13530 + t13550;
  t13351 = -1.*t13348;
  t13352 = 1. + t13351;
  t13571 = -1.*t12697*t13454;
  t13572 = t4429*t13556;
  t13583 = t13571 + t13572;
  t13590 = t4429*t13454;
  t13596 = t12697*t13556;
  t13598 = t13590 + t13596;
  t13739 = t6019*t13405;
  t13743 = t13435*t6236*t10026;
  t13745 = t13739 + t13743;
  t13734 = -1.*t13435*t6019*t6236;
  t13735 = t13405*t10026;
  t13736 = t13734 + t13735;
  t13760 = t6813*t13435*t4904;
  t13765 = -1.*t6168*t13745;
  t13769 = t13760 + t13765;
  t13901 = -1.*t12697*t13736;
  t14129 = t4429*t13769;
  t14132 = t13901 + t14129;
  t14695 = t4429*t13736;
  t14847 = t12697*t13769;
  t14870 = t14695 + t14847;
  p_output1[0]=0.325*t12697*t12880 - 0.575*t13087*t13316 - 0.575*t13352*t13358 - 0.0641*(t13316*t13348 + t13087*t13358) - 0.295*(-1.*t13087*t13316 + t13348*t13358) - 0.325*t4880*t4904*t6019 + 0.1575*t6168*t6236 - 0.2255*(t6168*t6236 - 1.*t10026*t4904*t6813) + 0.1575*t10026*t4904*t9576 + var1[0] - 1.*var2[0];
  p_output1[1]=0.325*t12697*t13556 - 0.575*t13087*t13583 - 0.575*t13352*t13598 - 0.0641*(t13348*t13583 + t13087*t13598) - 0.295*(-1.*t13087*t13583 + t13348*t13598) - 0.325*t13454*t4880 - 0.1575*t13405*t4904*t6168 - 0.2255*(-1.*t13405*t4904*t6168 + t13478*t6813) - 0.1575*t13478*t9576 + var1[1] - 1.*var2[1];
  p_output1[2]=0.325*t12697*t13769 - 0.575*t13087*t14132 - 0.575*t13352*t14870 - 0.0641*(t13348*t14132 + t13087*t14870) - 0.295*(-1.*t13087*t14132 + t13348*t14870) - 0.325*t13736*t4880 + 0.1575*t13435*t4904*t6168 - 0.2255*(t13435*t4904*t6168 + t13745*t6813) - 0.1575*t13745*t9576 + var1[2] - 1.*var2[2];
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
