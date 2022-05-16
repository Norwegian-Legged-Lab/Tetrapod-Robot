/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:55 GMT+02:00
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
  double t9761;
  double t10990;
  double t10969;
  double t10977;
  double t11067;
  double t9744;
  double t9758;
  double t11213;
  double t11376;
  double t11400;
  double t11401;
  double t11443;
  double t10978;
  double t11097;
  double t11101;
  double t10882;
  double t11444;
  double t11445;
  double t11457;
  double t11468;
  double t11509;
  double t11510;
  double t11522;
  double t11561;
  double t11591;
  double t11593;
  double t11594;
  double t10901;
  double t10965;
  double t11283;
  double t11365;
  double t11934;
  double t11941;
  double t11954;
  double t11585;
  double t11586;
  double t11960;
  double t11963;
  double t11967;
  double t11974;
  double t11976;
  double t11981;
  double t12099;
  double t12103;
  double t12111;
  double t12193;
  double t12194;
  double t12198;
  double t12226;
  double t12233;
  double t12235;
  double t12242;
  double t12244;
  double t12246;
  double t12344;
  double t12345;
  double t12348;
  double t12376;
  double t12377;
  double t12390;
  double t12448;
  double t12455;
  double t12461;
  double t12477;
  double t12479;
  double t12480;
  double t12489;
  double t12490;
  double t12497;
  double t12699;
  double t12702;
  double t12704;
  t9761 = Sin(var1[3]);
  t10990 = Cos(var1[3]);
  t10969 = Cos(var1[5]);
  t10977 = Sin(var1[4]);
  t11067 = Sin(var1[5]);
  t9744 = Cos(var1[4]);
  t9758 = Sin(var1[12]);
  t11213 = Cos(var1[12]);
  t11376 = t10990*t10969;
  t11400 = -1.*t9761*t10977*t11067;
  t11401 = t11376 + t11400;
  t11443 = Sin(var1[13]);
  t10978 = t10969*t9761*t10977;
  t11097 = t10990*t11067;
  t11101 = t10978 + t11097;
  t10882 = Cos(var1[13]);
  t11444 = -1.*t11213*t9744*t9761;
  t11445 = -1.*t9758*t11401;
  t11457 = t11444 + t11445;
  t11468 = Sin(var1[14]);
  t11509 = -1.*t11443*t11101;
  t11510 = t10882*t11457;
  t11522 = t11509 + t11510;
  t11561 = Cos(var1[14]);
  t11591 = t10882*t11101;
  t11593 = t11443*t11457;
  t11594 = t11591 + t11593;
  t10901 = -1.*t10882;
  t10965 = 1. + t10901;
  t11283 = -1.*t11213;
  t11365 = 1. + t11283;
  t11934 = -1.*t11213*t10990*t10977;
  t11941 = -1.*t10990*t9744*t9758*t11067;
  t11954 = t11934 + t11941;
  t11585 = -1.*t11561;
  t11586 = 1. + t11585;
  t11960 = t10990*t9744*t10969*t11443;
  t11963 = t10882*t11954;
  t11967 = t11960 + t11963;
  t11974 = -1.*t10882*t10990*t9744*t10969;
  t11976 = t11443*t11954;
  t11981 = t11974 + t11976;
  t12099 = t10990*t10969*t10977;
  t12103 = -1.*t9761*t11067;
  t12111 = t12099 + t12103;
  t12193 = t10969*t9761;
  t12194 = t10990*t10977*t11067;
  t12198 = t12193 + t12194;
  t12226 = -1.*t9758*t11443*t12111;
  t12233 = t10882*t12198;
  t12235 = t12226 + t12233;
  t12242 = -1.*t10882*t9758*t12111;
  t12244 = -1.*t11443*t12198;
  t12246 = t12242 + t12244;
  t12344 = -1.*t10990*t9744*t9758;
  t12345 = -1.*t11213*t12198;
  t12348 = t12344 + t12345;
  t12376 = t11213*t10990*t9744;
  t12377 = -1.*t9758*t12198;
  t12390 = t12376 + t12377;
  t12448 = -1.*t10990*t10969*t10977;
  t12455 = t9761*t11067;
  t12461 = t12448 + t12455;
  t12477 = -1.*t11443*t12461;
  t12479 = t10882*t12390;
  t12480 = t12477 + t12479;
  t12489 = -1.*t10882*t12461;
  t12490 = -1.*t11443*t12390;
  t12497 = t12489 + t12490;
  t12699 = t10882*t12461;
  t12702 = t11443*t12390;
  t12704 = t12699 + t12702;
  p_output1[0]=1.;
  p_output1[1]=0.325*t10965*t11101 - 0.1575*t11365*t11401 - 0.325*t11443*t11457 + 0.075*t11468*t11522 + 0.075*t11586*t11594 - 0.0641*(t11522*t11561 + t11468*t11594) + 0.355*(-1.*t11468*t11522 + t11561*t11594) - 0.1575*t9744*t9758*t9761 - 0.2255*(t11213*t11401 - 1.*t9744*t9758*t9761);
  p_output1[2]=-0.325*t11443*t11954 + 0.075*t11468*t11967 + 0.075*t11586*t11981 - 0.0641*(t11561*t11967 + t11468*t11981) + 0.355*(-1.*t11468*t11967 + t11561*t11981) - 0.325*t10965*t10969*t10990*t9744 - 0.1575*t10990*t11067*t11365*t9744 - 0.1575*t10977*t10990*t9758 - 0.2255*(t10990*t11067*t11213*t9744 - 1.*t10977*t10990*t9758);
  p_output1[3]=-0.2255*t11213*t12111 - 0.1575*t11365*t12111 + 0.325*t10965*t12198 + 0.075*t11586*t12235 + 0.075*t11468*t12246 + 0.355*(t11561*t12235 - 1.*t11468*t12246) - 0.0641*(t11468*t12235 + t11561*t12246) + 0.325*t11443*t12111*t9758;
  p_output1[4]=-0.325*t11443*t12348 + 0.075*t10882*t11468*t12348 + 0.075*t11443*t11586*t12348 - 0.0641*(t11443*t11468*t12348 + t10882*t11561*t12348) + 0.355*(-1.*t10882*t11468*t12348 + t11443*t11561*t12348) - 0.2255*t12390 + 0.1575*t10990*t11213*t9744 - 0.1575*t12198*t9758;
  p_output1[5]=-0.325*t10882*t12390 + 0.325*t11443*t12461 + 0.075*t11586*t12480 + 0.075*t11468*t12497 + 0.355*(t11561*t12480 - 1.*t11468*t12497) - 0.0641*(t11468*t12480 + t11561*t12497);
  p_output1[6]=0.075*t11561*t12480 + 0.075*t11468*t12704 + 0.355*(-1.*t11561*t12480 - 1.*t11468*t12704) - 0.0641*(-1.*t11468*t12480 + t11561*t12704);
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

#include "J_swing_position_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
