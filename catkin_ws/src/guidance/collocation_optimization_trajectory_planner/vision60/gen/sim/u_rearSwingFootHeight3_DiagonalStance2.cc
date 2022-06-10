/*
 * Automatically Generated from Mathematica.
 * Thu 9 Jun 2022 14:44:24 GMT+02:00
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
  double t9756;
  double t10016;
  double t10065;
  double t10053;
  double t10074;
  double t9772;
  double t9879;
  double t10144;
  double t10164;
  double t10171;
  double t10175;
  double t10185;
  double t10054;
  double t10110;
  double t10117;
  double t9936;
  double t10187;
  double t10192;
  double t10193;
  double t10211;
  double t10217;
  double t10232;
  double t10241;
  double t10256;
  double t10331;
  double t10346;
  double t10446;
  double t9957;
  double t10013;
  double t10155;
  double t10161;
  double t11782;
  double t11783;
  double t11785;
  double t10309;
  double t10314;
  double t11858;
  double t11872;
  double t11878;
  double t11905;
  double t11911;
  double t11916;
  double t11642;
  double t11663;
  double t11717;
  double t11735;
  double t11744;
  double t11753;
  double t11759;
  double t11787;
  double t11880;
  double t11927;
  double t11947;
  double t11950;
  double t11951;
  double t11960;
  double t11971;
  double t12014;
  double t12015;
  double t12017;
  double t12022;
  t9756 = Cos(var1[3]);
  t10016 = Cos(var1[5]);
  t10065 = Sin(var1[3]);
  t10053 = Sin(var1[4]);
  t10074 = Sin(var1[5]);
  t9772 = Cos(var1[4]);
  t9879 = Sin(var1[9]);
  t10144 = Cos(var1[9]);
  t10164 = t10016*t10065;
  t10171 = t9756*t10053*t10074;
  t10175 = t10164 + t10171;
  t10185 = Sin(var1[10]);
  t10054 = -1.*t9756*t10016*t10053;
  t10110 = t10065*t10074;
  t10117 = t10054 + t10110;
  t9936 = Cos(var1[10]);
  t10187 = t10144*t9756*t9772;
  t10192 = -1.*t9879*t10175;
  t10193 = t10187 + t10192;
  t10211 = Sin(var1[11]);
  t10217 = -1.*t10185*t10117;
  t10232 = t9936*t10193;
  t10241 = t10217 + t10232;
  t10256 = Cos(var1[11]);
  t10331 = t9936*t10117;
  t10346 = t10185*t10193;
  t10446 = t10331 + t10346;
  t9957 = -1.*t9936;
  t10013 = 1. + t9957;
  t10155 = -1.*t10144;
  t10161 = 1. + t10155;
  t11782 = t10144*t10053;
  t11783 = t9772*t9879*t10074;
  t11785 = t11782 + t11783;
  t10309 = -1.*t10256;
  t10314 = 1. + t10309;
  t11858 = -1.*t9772*t10016*t10185;
  t11872 = t9936*t11785;
  t11878 = t11858 + t11872;
  t11905 = t9936*t9772*t10016;
  t11911 = t10185*t11785;
  t11916 = t11905 + t11911;
  t11642 = -0.325*t10013*t9772*t10016;
  t11663 = -0.1575*t9879*t10053;
  t11717 = -0.1575*t10161*t9772*t10074;
  t11735 = t9879*t10053;
  t11744 = -1.*t10144*t9772*t10074;
  t11753 = t11735 + t11744;
  t11759 = 0.2255*t11753;
  t11787 = 0.325*t10185*t11785;
  t11880 = -0.575*t10211*t11878;
  t11927 = -0.575*t10314*t11916;
  t11947 = -1.*t10211*t11878;
  t11950 = t10256*t11916;
  t11951 = t11947 + t11950;
  t11960 = -0.295*t11951;
  t11971 = t10256*t11878;
  t12014 = t10211*t11916;
  t12015 = t11971 + t12014;
  t12017 = -0.0641*t12015;
  t12022 = -2. + var1[0] + t11642 + t11663 + t11717 + t11759 + t11787 + t11880 + t11927 + t11960 + t12017;
  p_output1[0]=-0.325*t10013*t10117 + 0.1575*t10161*t10175 + 0.325*t10185*t10193 - 0.575*t10211*t10241 - 0.575*t10314*t10446 - 0.0641*(t10241*t10256 + t10211*t10446) - 0.295*(-1.*t10211*t10241 + t10256*t10446) - 0.1575*t9756*t9772*t9879 + 0.2255*(t10144*t10175 + t9756*t9772*t9879) + var1[2] - 0.0015*t12022*(1. + Tanh(100.*t12022));
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

#include "u_rearSwingFootHeight3_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeight3_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
