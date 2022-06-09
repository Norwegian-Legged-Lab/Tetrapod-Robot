/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:08:25 GMT+02:00
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
  double t27990;
  double t26768;
  double t27223;
  double t27483;
  double t27994;
  double t28934;
  double t29989;
  double t30022;
  double t30073;
  double t30075;
  double t30076;
  double t25523;
  double t27989;
  double t27996;
  double t28001;
  double t30454;
  double t30455;
  double t30459;
  double t30462;
  double t30466;
  double t30469;
  double t30470;
  double t30471;
  double t30473;
  double t30474;
  double t30475;
  double t30476;
  double t25707;
  double t26575;
  double t29552;
  double t29752;
  double t30467;
  double t30468;
  double t30700;
  double t30701;
  double t30719;
  double t30742;
  double t30757;
  double t30764;
  double t30799;
  double t30859;
  double t30863;
  double t31069;
  double t31072;
  double t31079;
  double t31084;
  double t31093;
  double t31096;
  double t31110;
  double t31115;
  double t31133;
  double t31141;
  double t31148;
  double t31150;
  double t33784;
  double t33805;
  double t33806;
  double t33695;
  double t33703;
  double t33733;
  double t34258;
  double t34347;
  double t34348;
  double t34405;
  double t34418;
  double t34553;
  double t34358;
  double t34360;
  double t34368;
  double t34669;
  double t34689;
  double t34848;
  t27990 = Cos(var1[3]);
  t26768 = Cos(var1[5]);
  t27223 = Sin(var1[3]);
  t27483 = Sin(var1[4]);
  t27994 = Sin(var1[5]);
  t28934 = Cos(var1[6]);
  t29989 = t27990*t26768;
  t30022 = -1.*t27223*t27483*t27994;
  t30073 = t29989 + t30022;
  t30075 = Cos(var1[4]);
  t30076 = Sin(var1[6]);
  t25523 = Cos(var1[7]);
  t27989 = t26768*t27223*t27483;
  t27996 = t27990*t27994;
  t28001 = t27989 + t27996;
  t30454 = -1.*t30075*t28934*t27223;
  t30455 = -1.*t30073*t30076;
  t30459 = t30454 + t30455;
  t30462 = Sin(var1[7]);
  t30466 = Cos(var1[8]);
  t30469 = t25523*t28001;
  t30470 = t30459*t30462;
  t30471 = t30469 + t30470;
  t30473 = t25523*t30459;
  t30474 = -1.*t28001*t30462;
  t30475 = t30473 + t30474;
  t30476 = Sin(var1[8]);
  t25707 = -1.*t25523;
  t26575 = 1. + t25707;
  t29552 = -1.*t28934;
  t29752 = 1. + t29552;
  t30467 = -1.*t30466;
  t30468 = 1. + t30467;
  t30700 = -1.*t27990*t28934*t27483;
  t30701 = -1.*t27990*t30075*t27994*t30076;
  t30719 = t30700 + t30701;
  t30742 = -1.*t27990*t30075*t26768*t25523;
  t30757 = t30719*t30462;
  t30764 = t30742 + t30757;
  t30799 = t25523*t30719;
  t30859 = t27990*t30075*t26768*t30462;
  t30863 = t30799 + t30859;
  t31069 = t27990*t26768*t27483;
  t31072 = -1.*t27223*t27994;
  t31079 = t31069 + t31072;
  t31084 = t26768*t27223;
  t31093 = t27990*t27483*t27994;
  t31096 = t31084 + t31093;
  t31110 = t25523*t31096;
  t31115 = -1.*t31079*t30076*t30462;
  t31133 = t31110 + t31115;
  t31141 = -1.*t25523*t31079*t30076;
  t31148 = -1.*t31096*t30462;
  t31150 = t31141 + t31148;
  t33784 = -1.*t28934*t31096;
  t33805 = -1.*t27990*t30075*t30076;
  t33806 = t33784 + t33805;
  t33695 = t27990*t30075*t28934;
  t33703 = -1.*t31096*t30076;
  t33733 = t33695 + t33703;
  t34258 = -1.*t27990*t26768*t27483;
  t34347 = t27223*t27994;
  t34348 = t34258 + t34347;
  t34405 = -1.*t25523*t34348;
  t34418 = -1.*t33733*t30462;
  t34553 = t34405 + t34418;
  t34358 = t25523*t33733;
  t34360 = -1.*t34348*t30462;
  t34368 = t34358 + t34360;
  t34669 = t25523*t34348;
  t34689 = t33733*t30462;
  t34848 = t34669 + t34689;
  p_output1[0]=1.;
  p_output1[1]=0.325*t26575*t28001 + 0.1575*t29752*t30073 + 0.1575*t27223*t30075*t30076 + 0.2255*(t28934*t30073 - 1.*t27223*t30075*t30076) - 0.325*t30459*t30462 + 0.075*t30468*t30471 + 0.075*t30475*t30476 - 0.0641*(t30466*t30475 + t30471*t30476) + 0.355*(t30466*t30471 - 1.*t30475*t30476);
  p_output1[2]=-0.325*t26575*t26768*t27990*t30075 + 0.1575*t27990*t27994*t29752*t30075 + 0.1575*t27483*t27990*t30076 + 0.2255*(t27990*t27994*t28934*t30075 - 1.*t27483*t27990*t30076) - 0.325*t30462*t30719 + 0.075*t30468*t30764 + 0.075*t30476*t30863 - 0.0641*(t30476*t30764 + t30466*t30863) + 0.355*(t30466*t30764 - 1.*t30476*t30863);
  p_output1[3]=0.2255*t28934*t31079 + 0.1575*t29752*t31079 + 0.325*t30076*t30462*t31079 + 0.325*t26575*t31096 + 0.075*t30468*t31133 + 0.075*t30476*t31150 - 0.0641*(t30476*t31133 + t30466*t31150) + 0.355*(t30466*t31133 - 1.*t30476*t31150);
  p_output1[4]=-0.1575*t27990*t28934*t30075 + 0.1575*t30076*t31096 + 0.2255*t33733 - 0.325*t30462*t33806 + 0.075*t30462*t30468*t33806 + 0.075*t25523*t30476*t33806 + 0.355*(t30462*t30466*t33806 - 1.*t25523*t30476*t33806) - 0.0641*(t25523*t30466*t33806 + t30462*t30476*t33806);
  p_output1[5]=-0.325*t25523*t33733 + 0.325*t30462*t34348 + 0.075*t30468*t34368 + 0.075*t30476*t34553 - 0.0641*(t30476*t34368 + t30466*t34553) + 0.355*(t30466*t34368 - 1.*t30476*t34553);
  p_output1[6]=0.075*t30466*t34368 + 0.075*t30476*t34848 - 0.0641*(-1.*t30476*t34368 + t30466*t34848) + 0.355*(-1.*t30466*t34368 - 1.*t30476*t34848);
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
