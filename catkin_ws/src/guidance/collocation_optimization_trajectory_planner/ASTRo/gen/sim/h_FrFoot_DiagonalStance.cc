/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:14 GMT+02:00
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
  double t1296;
  double t1739;
  double t1829;
  double t1840;
  double t1869;
  double t2109;
  double t1730;
  double t3958;
  double t2254;
  double t3611;
  double t5373;
  double t5571;
  double t5633;
  double t7124;
  double t8092;
  double t15620;
  double t18589;
  double t18592;
  double t18659;
  double t18816;
  double t19053;
  double t19512;
  double t1850;
  double t2204;
  double t19993;
  double t3907;
  double t3943;
  double t20121;
  double t20116;
  double t20691;
  double t20700;
  double t20735;
  double t20736;
  double t20739;
  double t5407;
  double t5539;
  double t8095;
  double t12018;
  double t20814;
  double t20816;
  double t20840;
  double t20842;
  double t20856;
  double t20877;
  double t20902;
  double t20905;
  double t20908;
  double t21079;
  double t21087;
  double t21124;
  double t21132;
  double t21133;
  double t21134;
  double t21179;
  double t21213;
  double t21218;
  double t21228;
  double t21231;
  double t21270;
  double t21278;
  double t21279;
  double t21282;
  t1296 = Cos(var1[4]);
  t1739 = Cos(var1[12]);
  t1829 = -1.*t1739;
  t1840 = 1. + t1829;
  t1869 = Sin(var1[12]);
  t2109 = -0.15121*t1869;
  t1730 = Cos(var1[5]);
  t3958 = Sin(var1[5]);
  t2254 = Sin(var1[13]);
  t3611 = Sin(var1[4]);
  t5373 = Cos(var1[13]);
  t5571 = t1739*t1296*t1730;
  t5633 = -1.*t1296*t1869*t3958;
  t7124 = t5571 + t5633;
  t8092 = Cos(var1[14]);
  t15620 = -1.*t2254*t3611;
  t18589 = t5373*t7124;
  t18592 = t15620 + t18589;
  t18659 = Sin(var1[14]);
  t18816 = t5373*t3611;
  t19053 = t2254*t7124;
  t19512 = t18816 + t19053;
  t1850 = 0.15121*t1840;
  t2204 = t1850 + t2109;
  t19993 = Sin(var1[3]);
  t3907 = -0.15121*t1840;
  t3943 = t3907 + t2109;
  t20121 = Cos(var1[3]);
  t20116 = t1730*t19993*t3611;
  t20691 = t20121*t3958;
  t20700 = t20116 + t20691;
  t20735 = t20121*t1730;
  t20736 = -1.*t19993*t3611*t3958;
  t20739 = t20735 + t20736;
  t5407 = -1.*t5373;
  t5539 = 1. + t5407;
  t8095 = -1.*t8092;
  t12018 = 1. + t8095;
  t20814 = t1739*t20700;
  t20816 = t1869*t20739;
  t20840 = t20814 + t20816;
  t20842 = t1296*t2254*t19993;
  t20856 = t5373*t20840;
  t20877 = t20842 + t20856;
  t20902 = -1.*t5373*t1296*t19993;
  t20905 = t2254*t20840;
  t20908 = t20902 + t20905;
  t21079 = -1.*t20121*t1730*t3611;
  t21087 = t19993*t3958;
  t21124 = t21079 + t21087;
  t21132 = t1730*t19993;
  t21133 = t20121*t3611*t3958;
  t21134 = t21132 + t21133;
  t21179 = t1739*t21124;
  t21213 = t1869*t21134;
  t21218 = t21179 + t21213;
  t21228 = -1.*t20121*t1296*t2254;
  t21231 = t5373*t21218;
  t21270 = t21228 + t21231;
  t21278 = t5373*t20121*t1296;
  t21279 = t2254*t21218;
  t21282 = t21278 + t21279;
  p_output1[0]=0.50321*t12018*t18592 - 0.50321*t18659*t19512 + t1296*t1730*t2204 + 0.28121*t2254*t3611 - 1.*t1296*t3943*t3958 - 0.15121*(-1.*t1296*t1730*t1869 - 1.*t1296*t1739*t3958) + 0.28121*t5539*t7124 + 0.23321*(t18659*t19512 + t18592*t8092) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.15121*(-1.*t1869*t20700 + t1739*t20739) + 0.50321*t12018*t20877 - 0.50321*t18659*t20908 + t20700*t2204 - 0.28121*t1296*t19993*t2254 + t20739*t3943 + 0.28121*t20840*t5539 + 0.23321*(t18659*t20908 + t20877*t8092) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.15121*(-1.*t1869*t21124 + t1739*t21134) + 0.50321*t12018*t21270 - 0.50321*t18659*t21282 + t21124*t2204 + 0.28121*t1296*t20121*t2254 + t21134*t3943 + 0.28121*t21218*t5539 + 0.23321*(t18659*t21282 + t21270*t8092) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
