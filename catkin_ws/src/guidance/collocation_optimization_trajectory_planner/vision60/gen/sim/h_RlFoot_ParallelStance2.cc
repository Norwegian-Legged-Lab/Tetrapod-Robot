/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:22 GMT+02:00
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
  double t8405;
  double t9323;
  double t9327;
  double t9337;
  double t9371;
  double t8890;
  double t9469;
  double t2098;
  double t9572;
  double t9573;
  double t9584;
  double t9591;
  double t9594;
  double t9608;
  double t9610;
  double t9629;
  double t9654;
  double t9691;
  double t9727;
  double t6403;
  double t8225;
  double t20897;
  double t9341;
  double t9353;
  double t21150;
  double t22442;
  double t22459;
  double t22461;
  double t21146;
  double t21159;
  double t22308;
  double t22579;
  double t22599;
  double t22603;
  double t9646;
  double t9648;
  double t22630;
  double t22635;
  double t22667;
  double t22738;
  double t22739;
  double t22743;
  double t24434;
  double t24435;
  double t24440;
  double t22814;
  double t22815;
  double t24374;
  double t24454;
  double t24456;
  double t24457;
  double t24461;
  double t24487;
  double t24503;
  double t24506;
  double t24515;
  double t24519;
  t8405 = Cos(var1[4]);
  t9323 = Sin(var1[9]);
  t9327 = Sin(var1[4]);
  t9337 = Cos(var1[9]);
  t9371 = Sin(var1[5]);
  t8890 = Cos(var1[5]);
  t9469 = Sin(var1[10]);
  t2098 = Cos(var1[10]);
  t9572 = t9337*t9327;
  t9573 = t8405*t9323*t9371;
  t9584 = t9572 + t9573;
  t9591 = Sin(var1[11]);
  t9594 = -1.*t8405*t8890*t9469;
  t9608 = t2098*t9584;
  t9610 = t9594 + t9608;
  t9629 = Cos(var1[11]);
  t9654 = t2098*t8405*t8890;
  t9691 = t9469*t9584;
  t9727 = t9654 + t9691;
  t6403 = -1.*t2098;
  t8225 = 1. + t6403;
  t20897 = Sin(var1[3]);
  t9341 = -1.*t9337;
  t9353 = 1. + t9341;
  t21150 = Cos(var1[3]);
  t22442 = t21150*t8890;
  t22459 = -1.*t20897*t9327*t9371;
  t22461 = t22442 + t22459;
  t21146 = t8890*t20897*t9327;
  t21159 = t21150*t9371;
  t22308 = t21146 + t21159;
  t22579 = -1.*t9337*t8405*t20897;
  t22599 = -1.*t9323*t22461;
  t22603 = t22579 + t22599;
  t9646 = -1.*t9629;
  t9648 = 1. + t9646;
  t22630 = -1.*t9469*t22308;
  t22635 = t2098*t22603;
  t22667 = t22630 + t22635;
  t22738 = t2098*t22308;
  t22739 = t9469*t22603;
  t22743 = t22738 + t22739;
  t24434 = t8890*t20897;
  t24435 = t21150*t9327*t9371;
  t24440 = t24434 + t24435;
  t22814 = -1.*t21150*t8890*t9327;
  t22815 = t20897*t9371;
  t24374 = t22814 + t22815;
  t24454 = t9337*t21150*t8405;
  t24456 = -1.*t9323*t24440;
  t24457 = t24454 + t24456;
  t24461 = -1.*t9469*t24374;
  t24487 = t2098*t24457;
  t24503 = t24461 + t24487;
  t24506 = t2098*t24374;
  t24515 = t9469*t24457;
  t24519 = t24506 + t24515;
  p_output1[0]=-0.325*t8225*t8405*t8890 - 0.1575*t9323*t9327 - 0.1575*t8405*t9353*t9371 + 0.2255*(t9323*t9327 - 1.*t8405*t9337*t9371) + 0.325*t9469*t9584 - 0.575*t9591*t9610 - 0.575*t9648*t9727 - 0.0641*(t9610*t9629 + t9591*t9727) - 0.295*(-1.*t9591*t9610 + t9629*t9727) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.325*t22308*t8225 + 0.1575*t20897*t8405*t9323 + 0.2255*(-1.*t20897*t8405*t9323 + t22461*t9337) + 0.1575*t22461*t9353 + 0.325*t22603*t9469 - 0.575*t22667*t9591 - 0.0641*(t22743*t9591 + t22667*t9629) - 0.295*(-1.*t22667*t9591 + t22743*t9629) - 0.575*t22743*t9648 + var1[1] - 1.*var2[1];
  p_output1[2]=-0.325*t24374*t8225 - 0.1575*t21150*t8405*t9323 + 0.2255*(t21150*t8405*t9323 + t24440*t9337) + 0.1575*t24440*t9353 + 0.325*t24457*t9469 - 0.575*t24503*t9591 - 0.0641*(t24519*t9591 + t24503*t9629) - 0.295*(-1.*t24503*t9591 + t24519*t9629) - 0.575*t24519*t9648 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
