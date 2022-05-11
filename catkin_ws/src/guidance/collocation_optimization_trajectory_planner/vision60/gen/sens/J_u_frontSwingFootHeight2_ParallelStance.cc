/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:11:08 GMT+02:00
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
  double t154;
  double t95;
  double t118;
  double t129;
  double t180;
  double t3624;
  double t3631;
  double t4926;
  double t4927;
  double t6013;
  double t6016;
  double t42;
  double t130;
  double t208;
  double t3591;
  double t8914;
  double t8937;
  double t8939;
  double t8942;
  double t10129;
  double t10585;
  double t10586;
  double t10593;
  double t10596;
  double t10835;
  double t10837;
  double t10838;
  double t58;
  double t59;
  double t3628;
  double t3629;
  double t10132;
  double t10580;
  double t11395;
  double t11396;
  double t11405;
  double t11416;
  double t11419;
  double t11432;
  double t11449;
  double t11453;
  double t11455;
  double t11958;
  double t11959;
  double t11965;
  double t11968;
  double t11977;
  double t11981;
  double t11986;
  double t11988;
  double t11989;
  double t11996;
  double t11997;
  double t11998;
  double t12343;
  double t12413;
  double t12414;
  double t12081;
  double t12085;
  double t12086;
  double t12481;
  double t12494;
  double t12495;
  double t12544;
  double t12545;
  double t12546;
  double t12501;
  double t12541;
  double t12542;
  double t12723;
  double t12724;
  double t12761;
  t154 = Cos(var1[3]);
  t95 = Cos(var1[5]);
  t118 = Sin(var1[3]);
  t129 = Sin(var1[4]);
  t180 = Sin(var1[5]);
  t3624 = Cos(var1[6]);
  t3631 = t154*t95;
  t4926 = -1.*t118*t129*t180;
  t4927 = t3631 + t4926;
  t6013 = Cos(var1[4]);
  t6016 = Sin(var1[6]);
  t42 = Cos(var1[7]);
  t130 = t95*t118*t129;
  t208 = t154*t180;
  t3591 = t130 + t208;
  t8914 = -1.*t6013*t3624*t118;
  t8937 = -1.*t4927*t6016;
  t8939 = t8914 + t8937;
  t8942 = Sin(var1[7]);
  t10129 = Cos(var1[8]);
  t10585 = t42*t3591;
  t10586 = t8939*t8942;
  t10593 = t10585 + t10586;
  t10596 = t42*t8939;
  t10835 = -1.*t3591*t8942;
  t10837 = t10596 + t10835;
  t10838 = Sin(var1[8]);
  t58 = -1.*t42;
  t59 = 1. + t58;
  t3628 = -1.*t3624;
  t3629 = 1. + t3628;
  t10132 = -1.*t10129;
  t10580 = 1. + t10132;
  t11395 = -1.*t154*t3624*t129;
  t11396 = -1.*t154*t6013*t180*t6016;
  t11405 = t11395 + t11396;
  t11416 = -1.*t154*t6013*t95*t42;
  t11419 = t11405*t8942;
  t11432 = t11416 + t11419;
  t11449 = t42*t11405;
  t11453 = t154*t6013*t95*t8942;
  t11455 = t11449 + t11453;
  t11958 = t154*t95*t129;
  t11959 = -1.*t118*t180;
  t11965 = t11958 + t11959;
  t11968 = t95*t118;
  t11977 = t154*t129*t180;
  t11981 = t11968 + t11977;
  t11986 = t42*t11981;
  t11988 = -1.*t11965*t6016*t8942;
  t11989 = t11986 + t11988;
  t11996 = -1.*t42*t11965*t6016;
  t11997 = -1.*t11981*t8942;
  t11998 = t11996 + t11997;
  t12343 = -1.*t3624*t11981;
  t12413 = -1.*t154*t6013*t6016;
  t12414 = t12343 + t12413;
  t12081 = t154*t6013*t3624;
  t12085 = -1.*t11981*t6016;
  t12086 = t12081 + t12085;
  t12481 = -1.*t154*t95*t129;
  t12494 = t118*t180;
  t12495 = t12481 + t12494;
  t12544 = -1.*t42*t12495;
  t12545 = -1.*t12086*t8942;
  t12546 = t12544 + t12545;
  t12501 = t42*t12086;
  t12541 = -1.*t12495*t8942;
  t12542 = t12501 + t12541;
  t12723 = t42*t12495;
  t12724 = t12086*t8942;
  t12761 = t12723 + t12724;
  p_output1[0]=1.;
  p_output1[1]=0.075*t10580*t10593 + 0.075*t10837*t10838 - 0.0641*(t10129*t10837 + t10593*t10838) + 0.355*(t10129*t10593 - 1.*t10837*t10838) + 0.1575*t3629*t4927 + 0.325*t3591*t59 + 0.1575*t118*t6013*t6016 + 0.2255*(t3624*t4927 - 1.*t118*t6013*t6016) - 0.325*t8939*t8942;
  p_output1[2]=0.075*t10580*t11432 + 0.075*t10838*t11455 - 0.0641*(t10838*t11432 + t10129*t11455) + 0.355*(t10129*t11432 - 1.*t10838*t11455) + 0.1575*t154*t180*t3629*t6013 + 0.1575*t129*t154*t6016 + 0.2255*(t154*t180*t3624*t6013 - 1.*t129*t154*t6016) - 0.325*t11405*t8942 - 0.325*t154*t59*t6013*t95;
  p_output1[3]=0.075*t10580*t11989 + 0.075*t10838*t11998 - 0.0641*(t10838*t11989 + t10129*t11998) + 0.355*(t10129*t11989 - 1.*t10838*t11998) + 0.2255*t11965*t3624 + 0.1575*t11965*t3629 + 0.325*t11981*t59 + 0.325*t11965*t6016*t8942;
  p_output1[4]=0.2255*t12086 + 0.075*t10838*t12414*t42 - 0.1575*t154*t3624*t6013 + 0.1575*t11981*t6016 - 0.325*t12414*t8942 + 0.075*t10580*t12414*t8942 + 0.355*(-1.*t10838*t12414*t42 + t10129*t12414*t8942) - 0.0641*(t10129*t12414*t42 + t10838*t12414*t8942);
  p_output1[5]=0.075*t10580*t12542 + 0.075*t10838*t12546 - 0.0641*(t10838*t12542 + t10129*t12546) + 0.355*(t10129*t12542 - 1.*t10838*t12546) - 0.325*t12086*t42 + 0.325*t12495*t8942;
  p_output1[6]=0.075*t10129*t12542 + 0.075*t10838*t12761 - 0.0641*(-1.*t10838*t12542 + t10129*t12761) + 0.355*(-1.*t10129*t12542 - 1.*t10838*t12761);
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

namespace SymFunction
{

void J_u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
