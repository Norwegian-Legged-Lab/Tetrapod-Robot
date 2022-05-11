/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:25 GMT+02:00
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
  double t25877;
  double t26104;
  double t26093;
  double t26102;
  double t26112;
  double t1023;
  double t25857;
  double t26258;
  double t26349;
  double t26351;
  double t26353;
  double t26363;
  double t26103;
  double t26194;
  double t26247;
  double t26067;
  double t26366;
  double t26376;
  double t26404;
  double t26408;
  double t26414;
  double t26418;
  double t26419;
  double t26421;
  double t26424;
  double t26426;
  double t26428;
  double t26082;
  double t26084;
  double t26314;
  double t26343;
  double t26523;
  double t26526;
  double t26527;
  double t26422;
  double t26423;
  double t26534;
  double t26541;
  double t26542;
  double t26546;
  double t26556;
  double t26560;
  double t26604;
  double t26609;
  double t26613;
  double t26623;
  double t26629;
  double t26630;
  double t26636;
  double t26637;
  double t26639;
  double t26663;
  double t26680;
  double t26683;
  double t26710;
  double t26712;
  double t26721;
  double t26729;
  double t26730;
  double t26731;
  double t26773;
  double t26774;
  double t26776;
  double t26785;
  double t26787;
  double t26792;
  double t26795;
  double t26801;
  double t26802;
  double t26832;
  double t26836;
  double t26837;
  t25877 = Sin(var1[3]);
  t26104 = Cos(var1[3]);
  t26093 = Cos(var1[5]);
  t26102 = Sin(var1[4]);
  t26112 = Sin(var1[5]);
  t1023 = Cos(var1[4]);
  t25857 = Sin(var1[12]);
  t26258 = Cos(var1[12]);
  t26349 = t26104*t26093;
  t26351 = -1.*t25877*t26102*t26112;
  t26353 = t26349 + t26351;
  t26363 = Sin(var1[13]);
  t26103 = t26093*t25877*t26102;
  t26194 = t26104*t26112;
  t26247 = t26103 + t26194;
  t26067 = Cos(var1[13]);
  t26366 = -1.*t26258*t1023*t25877;
  t26376 = -1.*t25857*t26353;
  t26404 = t26366 + t26376;
  t26408 = Sin(var1[14]);
  t26414 = -1.*t26363*t26247;
  t26418 = t26067*t26404;
  t26419 = t26414 + t26418;
  t26421 = Cos(var1[14]);
  t26424 = t26067*t26247;
  t26426 = t26363*t26404;
  t26428 = t26424 + t26426;
  t26082 = -1.*t26067;
  t26084 = 1. + t26082;
  t26314 = -1.*t26258;
  t26343 = 1. + t26314;
  t26523 = -1.*t26258*t26104*t26102;
  t26526 = -1.*t26104*t1023*t25857*t26112;
  t26527 = t26523 + t26526;
  t26422 = -1.*t26421;
  t26423 = 1. + t26422;
  t26534 = t26104*t1023*t26093*t26363;
  t26541 = t26067*t26527;
  t26542 = t26534 + t26541;
  t26546 = -1.*t26067*t26104*t1023*t26093;
  t26556 = t26363*t26527;
  t26560 = t26546 + t26556;
  t26604 = t26104*t26093*t26102;
  t26609 = -1.*t25877*t26112;
  t26613 = t26604 + t26609;
  t26623 = t26093*t25877;
  t26629 = t26104*t26102*t26112;
  t26630 = t26623 + t26629;
  t26636 = -1.*t25857*t26363*t26613;
  t26637 = t26067*t26630;
  t26639 = t26636 + t26637;
  t26663 = -1.*t26067*t25857*t26613;
  t26680 = -1.*t26363*t26630;
  t26683 = t26663 + t26680;
  t26710 = -1.*t26104*t1023*t25857;
  t26712 = -1.*t26258*t26630;
  t26721 = t26710 + t26712;
  t26729 = t26258*t26104*t1023;
  t26730 = -1.*t25857*t26630;
  t26731 = t26729 + t26730;
  t26773 = -1.*t26104*t26093*t26102;
  t26774 = t25877*t26112;
  t26776 = t26773 + t26774;
  t26785 = -1.*t26363*t26776;
  t26787 = t26067*t26731;
  t26792 = t26785 + t26787;
  t26795 = -1.*t26067*t26776;
  t26801 = -1.*t26363*t26731;
  t26802 = t26795 + t26801;
  t26832 = t26067*t26776;
  t26836 = t26363*t26731;
  t26837 = t26832 + t26836;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t1023*t25857*t25877 + 0.325*t26084*t26247 - 0.1575*t26343*t26353 - 0.2255*(-1.*t1023*t25857*t25877 + t26258*t26353) - 0.325*t26363*t26404 + 0.075*t26408*t26419 + 0.075*t26423*t26428 - 0.0641*(t26419*t26421 + t26408*t26428) + 0.355*(-1.*t26408*t26419 + t26421*t26428);
  p_output1[2]=-0.325*t1023*t26084*t26093*t26104 - 0.1575*t25857*t26102*t26104 - 0.2255*(-1.*t25857*t26102*t26104 + t1023*t26104*t26112*t26258) - 0.1575*t1023*t26104*t26112*t26343 - 0.325*t26363*t26527 + 0.075*t26408*t26542 + 0.075*t26423*t26560 - 0.0641*(t26421*t26542 + t26408*t26560) + 0.355*(-1.*t26408*t26542 + t26421*t26560);
  p_output1[3]=-0.2255*t26258*t26613 - 0.1575*t26343*t26613 + 0.325*t25857*t26363*t26613 + 0.325*t26084*t26630 + 0.075*t26423*t26639 + 0.075*t26408*t26683 + 0.355*(t26421*t26639 - 1.*t26408*t26683) - 0.0641*(t26408*t26639 + t26421*t26683);
  p_output1[4]=0.1575*t1023*t26104*t26258 - 0.1575*t25857*t26630 - 0.325*t26363*t26721 + 0.075*t26067*t26408*t26721 + 0.075*t26363*t26423*t26721 - 0.0641*(t26363*t26408*t26721 + t26067*t26421*t26721) + 0.355*(-1.*t26067*t26408*t26721 + t26363*t26421*t26721) - 0.2255*t26731;
  p_output1[5]=-0.325*t26067*t26731 + 0.325*t26363*t26776 + 0.075*t26423*t26792 + 0.075*t26408*t26802 + 0.355*(t26421*t26792 - 1.*t26408*t26802) - 0.0641*(t26408*t26792 + t26421*t26802);
  p_output1[6]=0.075*t26421*t26792 + 0.075*t26408*t26837 + 0.355*(-1.*t26421*t26792 - 1.*t26408*t26837) - 0.0641*(-1.*t26408*t26792 + t26421*t26837);
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
