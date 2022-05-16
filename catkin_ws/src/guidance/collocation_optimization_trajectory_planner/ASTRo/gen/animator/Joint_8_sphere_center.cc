/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:42:56 GMT+02:00
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
  double t14;
  double t65;
  double t124;
  double t169;
  double t216;
  double t220;
  double t33;
  double t682;
  double t323;
  double t458;
  double t1514;
  double t1526;
  double t1486;
  double t887;
  double t982;
  double t1489;
  double t1561;
  double t1581;
  double t1637;
  double t1684;
  double t1748;
  double t1883;
  double t1912;
  double t1930;
  double t1950;
  double t1952;
  double t1954;
  t14 = Cos(var1[4]);
  t65 = Cos(var1[6]);
  t124 = -1.*t65;
  t169 = 1. + t124;
  t216 = 0.15121*t169;
  t220 = Sin(var1[6]);
  t33 = Sin(var1[5]);
  t682 = Cos(var1[5]);
  t323 = -0.15121*t220;
  t458 = t216 + t323;
  t1514 = Sin(var1[3]);
  t1526 = Sin(var1[4]);
  t1486 = Cos(var1[3]);
  t887 = 0.15121*t220;
  t982 = t216 + t887;
  t1489 = t1486*t682;
  t1561 = -1.*t1514*t1526*t33;
  t1581 = t1489 + t1561;
  t1637 = t682*t1514*t1526;
  t1684 = t1486*t33;
  t1748 = t1637 + t1684;
  t1883 = t682*t1514;
  t1912 = t1486*t1526*t33;
  t1930 = t1883 + t1912;
  t1950 = -1.*t1486*t682*t1526;
  t1952 = t1514*t33;
  t1954 = t1950 + t1952;
  p_output1[0]=-1.*t14*t33*t458 + 0.15121*(-1.*t14*t33*t65 - 1.*t14*t220*t682) + 0.15121*(-1.*t14*t220*t33 + t14*t65*t682) + t14*t682*t982 + var1[0];
  p_output1[1]=t1581*t458 + 0.15121*(-1.*t1748*t220 + t1581*t65) + 0.15121*(t1581*t220 + t1748*t65) + t1748*t982 + var1[1];
  p_output1[2]=t1930*t458 + 0.15121*(-1.*t1954*t220 + t1930*t65) + 0.15121*(t1930*t220 + t1954*t65) + t1954*t982 + var1[2];
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

#include "Joint_8_sphere_center.hh"

namespace SymFunction
{

void Joint_8_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
