/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:49 GMT+02:00
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
  double t179;
  double t446;
  double t494;
  double t165;
  double t667;
  double t1030;
  double t1033;
  double t1071;
  double t1085;
  double t1105;
  double t255;
  double t931;
  double t935;
  double t2031;
  double t2217;
  double t2381;
  double t2953;
  double t3042;
  double t3052;
  double t3071;
  double t3142;
  double t3306;
  double t3319;
  double t3585;
  double t3592;
  double t3621;
  double t3676;
  double t3723;
  double t3765;
  double t3783;
  double t1111;
  double t1603;
  double t2385;
  double t2843;
  double t2958;
  double t2969;
  double t3336;
  double t3479;
  double t4184;
  double t4199;
  double t4205;
  double t4213;
  double t4215;
  double t4216;
  double t4231;
  double t4233;
  double t4243;
  double t4323;
  double t4330;
  double t4343;
  double t4278;
  double t4281;
  double t4318;
  double t4360;
  double t4362;
  double t4364;
  double t4462;
  double t4463;
  double t4467;
  double t4486;
  double t4487;
  double t4374;
  double t4582;
  double t4583;
  double t4595;
  double t4634;
  double t4638;
  double t4655;
  double t4670;
  double t4683;
  double t4684;
  double t4700;
  double t4701;
  double t4706;
  t179 = Cos(var1[5]);
  t446 = Sin(var1[3]);
  t494 = Sin(var1[4]);
  t165 = Cos(var1[3]);
  t667 = Sin(var1[5]);
  t1030 = Cos(var1[6]);
  t1033 = -1.*t1030;
  t1071 = 1. + t1033;
  t1085 = 0.15121*t1071;
  t1105 = Sin(var1[6]);
  t255 = t165*t179;
  t931 = -1.*t446*t494*t667;
  t935 = t255 + t931;
  t2031 = t179*t446*t494;
  t2217 = t165*t667;
  t2381 = t2031 + t2217;
  t2953 = Cos(var1[7]);
  t3042 = t1030*t2381;
  t3052 = t935*t1105;
  t3071 = t3042 + t3052;
  t3142 = Cos(var1[4]);
  t3306 = Sin(var1[7]);
  t3319 = Cos(var1[8]);
  t3585 = t2953*t3071;
  t3592 = t3142*t446*t3306;
  t3621 = t3585 + t3592;
  t3676 = -1.*t3142*t2953*t446;
  t3723 = t3071*t3306;
  t3765 = t3676 + t3723;
  t3783 = Sin(var1[8]);
  t1111 = -0.15121*t1105;
  t1603 = t1085 + t1111;
  t2385 = 0.15121*t1105;
  t2843 = t1085 + t2385;
  t2958 = -1.*t2953;
  t2969 = 1. + t2958;
  t3336 = -1.*t3319;
  t3479 = 1. + t3336;
  t4184 = -1.*t165*t3142*t179*t1030;
  t4199 = t165*t3142*t667*t1105;
  t4205 = t4184 + t4199;
  t4213 = t2953*t4205;
  t4215 = t165*t494*t3306;
  t4216 = t4213 + t4215;
  t4231 = -1.*t165*t2953*t494;
  t4233 = t4205*t3306;
  t4243 = t4231 + t4233;
  t4323 = t179*t446;
  t4330 = t165*t494*t667;
  t4343 = t4323 + t4330;
  t4278 = t165*t179*t494;
  t4281 = -1.*t446*t667;
  t4318 = t4278 + t4281;
  t4360 = t1030*t4343;
  t4362 = t4318*t1105;
  t4364 = t4360 + t4362;
  t4462 = -1.*t165*t179*t494;
  t4463 = t446*t667;
  t4467 = t4462 + t4463;
  t4486 = -1.*t4467*t1105;
  t4487 = t4360 + t4486;
  t4374 = -1.*t4343*t1105;
  t4582 = t1030*t4467;
  t4583 = t4343*t1105;
  t4595 = t4582 + t4583;
  t4634 = -1.*t165*t3142*t2953;
  t4638 = -1.*t4595*t3306;
  t4655 = t4634 + t4638;
  t4670 = t2953*t4595;
  t4683 = -1.*t165*t3142*t3306;
  t4684 = t4670 + t4683;
  t4700 = t165*t3142*t2953;
  t4701 = t4595*t3306;
  t4706 = t4700 + t4701;
  p_output1[0]=1.;
  p_output1[1]=t2381*t2843 + 0.28121*t2969*t3071 + 0.50321*t3479*t3621 - 0.50321*t3765*t3783 + 0.19821*(t3319*t3621 + t3765*t3783) - 0.28121*t3142*t3306*t446 + t1603*t935 + 0.15121*(-1.*t1105*t2381 + t1030*t935);
  p_output1[2]=-1.*t165*t179*t2843*t3142 + 0.28121*t2969*t4205 + 0.50321*t3479*t4216 - 0.50321*t3783*t4243 + 0.19821*(t3319*t4216 + t3783*t4243) - 0.28121*t165*t3306*t494 + t1603*t165*t3142*t667 + 0.15121*(t1105*t165*t179*t3142 + t1030*t165*t3142*t667);
  p_output1[3]=t1603*t4318 + t2843*t4343 + 0.28121*t2969*t4364 + 0.50321*t2953*t3479*t4364 - 0.50321*t3306*t3783*t4364 + 0.19821*(t2953*t3319*t4364 + t3306*t3783*t4364) + 0.15121*(t1030*t4318 + t4374);
  p_output1[4]=(-0.15121*t1030 + t2385)*t4343 + (0.15121*t1030 + t2385)*t4467 + 0.15121*(t4374 - 1.*t1030*t4467) + 0.28121*t2969*t4487 + 0.50321*t2953*t3479*t4487 - 0.50321*t3306*t3783*t4487 + 0.19821*(t2953*t3319*t4487 + t3306*t3783*t4487);
  p_output1[5]=0.28121*t165*t2953*t3142 + 0.28121*t3306*t4595 + 0.50321*t3479*t4655 - 0.50321*t3783*t4684 + 0.19821*(t3319*t4655 + t3783*t4684);
  p_output1[6]=0.50321*t3783*t4684 - 0.50321*t3319*t4706 + 0.19821*(-1.*t3783*t4684 + t3319*t4706);
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

#include "J_swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
