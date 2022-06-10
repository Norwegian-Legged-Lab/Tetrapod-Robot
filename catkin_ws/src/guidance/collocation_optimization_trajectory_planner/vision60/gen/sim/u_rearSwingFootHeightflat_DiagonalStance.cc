/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:48 GMT+02:00
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
  double t489;
  double t1071;
  double t1210;
  double t1208;
  double t1244;
  double t670;
  double t712;
  double t1259;
  double t1265;
  double t1267;
  double t1268;
  double t1518;
  double t1209;
  double t1256;
  double t1257;
  double t795;
  double t1521;
  double t1617;
  double t1618;
  double t1631;
  double t1638;
  double t1641;
  double t1652;
  double t1665;
  double t1687;
  double t1703;
  double t1710;
  t489 = Cos(var1[3]);
  t1071 = Cos(var1[5]);
  t1210 = Sin(var1[3]);
  t1208 = Sin(var1[4]);
  t1244 = Sin(var1[5]);
  t670 = Cos(var1[4]);
  t712 = Sin(var1[15]);
  t1259 = Cos(var1[15]);
  t1265 = t1071*t1210;
  t1267 = t489*t1208*t1244;
  t1268 = t1265 + t1267;
  t1518 = Sin(var1[16]);
  t1209 = -1.*t489*t1071*t1208;
  t1256 = t1210*t1244;
  t1257 = t1209 + t1256;
  t795 = Cos(var1[16]);
  t1521 = t1259*t489*t670;
  t1617 = -1.*t712*t1268;
  t1618 = t1521 + t1617;
  t1631 = Sin(var1[17]);
  t1638 = -1.*t1518*t1257;
  t1641 = t795*t1618;
  t1652 = t1638 + t1641;
  t1665 = Cos(var1[17]);
  t1687 = t795*t1257;
  t1703 = t1518*t1618;
  t1710 = t1687 + t1703;
  p_output1[0]=-0.1575*(1. - 1.*t1259)*t1268 + 0.325*t1518*t1618 - 0.575*t1631*t1652 - 0.575*(1. - 1.*t1665)*t1710 - 0.0641*(t1652*t1665 + t1631*t1710) - 0.295*(-1.*t1631*t1652 + t1665*t1710) + 0.1575*t489*t670*t712 - 0.2255*(t1259*t1268 + t489*t670*t712) - 0.325*t1257*(1. - 1.*t795) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeightflat_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightflat_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
