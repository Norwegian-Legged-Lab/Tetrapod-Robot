/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:03 GMT+02:00
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
  double t3251;
  double t7398;
  double t7790;
  double t7951;
  double t9765;
  double t9935;
  double t10478;
  double t10056;
  double t10141;
  double t10747;
  double t10161;
  double t10790;
  double t10855;
  double t11165;
  double t11202;
  double t11233;
  double t2048;
  double t2134;
  double t11253;
  double t11259;
  double t11260;
  double t11261;
  double t11302;
  double t11348;
  double t11349;
  double t11350;
  double t11416;
  double t11422;
  double t11427;
  double t11441;
  double t10049;
  double t10050;
  double t10891;
  double t11075;
  double t11254;
  double t11256;
  double t11303;
  double t11334;
  double t11530;
  double t11548;
  double t11549;
  double t11553;
  double t11555;
  double t11556;
  double t11560;
  double t11561;
  double t11565;
  double t11578;
  double t11579;
  double t11580;
  double t11702;
  double t11759;
  double t11768;
  double t11909;
  double t11933;
  double t12010;
  double t12408;
  double t12411;
  double t12420;
  double t12434;
  double t12438;
  double t12235;
  double t12628;
  double t12638;
  double t12642;
  double t12650;
  double t12651;
  double t12652;
  double t12658;
  double t12661;
  double t12714;
  double t12758;
  double t12761;
  double t12781;
  t3251 = Sin(var1[3]);
  t7398 = Cos(var1[15]);
  t7790 = -1.*t7398;
  t7951 = 1. + t7790;
  t9765 = -0.15121*t7951;
  t9935 = Sin(var1[15]);
  t10478 = Cos(var1[3]);
  t10056 = Cos(var1[5]);
  t10141 = Sin(var1[4]);
  t10747 = Sin(var1[5]);
  t10161 = t10056*t3251*t10141;
  t10790 = t10478*t10747;
  t10855 = t10161 + t10790;
  t11165 = t10478*t10056;
  t11202 = -1.*t3251*t10141*t10747;
  t11233 = t11165 + t11202;
  t2048 = Cos(var1[4]);
  t2134 = Sin(var1[16]);
  t11253 = Cos(var1[16]);
  t11259 = t7398*t10855;
  t11260 = t9935*t11233;
  t11261 = t11259 + t11260;
  t11302 = Cos(var1[17]);
  t11348 = -1.*t2048*t2134*t3251;
  t11349 = t11253*t11261;
  t11350 = t11348 + t11349;
  t11416 = Sin(var1[17]);
  t11422 = -1.*t11253*t2048*t3251;
  t11427 = -1.*t2134*t11261;
  t11441 = t11422 + t11427;
  t10049 = -0.15121*t9935;
  t10050 = t9765 + t10049;
  t10891 = 0.15121*t9935;
  t11075 = t9765 + t10891;
  t11254 = -1.*t11253;
  t11256 = 1. + t11254;
  t11303 = -1.*t11302;
  t11334 = 1. + t11303;
  t11530 = -1.*t7398*t10478*t2048*t10056;
  t11548 = t10478*t2048*t9935*t10747;
  t11549 = t11530 + t11548;
  t11553 = -1.*t10478*t2134*t10141;
  t11555 = t11253*t11549;
  t11556 = t11553 + t11555;
  t11560 = -1.*t11253*t10478*t10141;
  t11561 = -1.*t2134*t11549;
  t11565 = t11560 + t11561;
  t11578 = t10478*t10056*t10141;
  t11579 = -1.*t3251*t10747;
  t11580 = t11578 + t11579;
  t11702 = t10056*t3251;
  t11759 = t10478*t10141*t10747;
  t11768 = t11702 + t11759;
  t11909 = t9935*t11580;
  t11933 = t7398*t11768;
  t12010 = t11909 + t11933;
  t12408 = -1.*t10478*t10056*t10141;
  t12411 = t3251*t10747;
  t12420 = t12408 + t12411;
  t12434 = -1.*t9935*t12420;
  t12438 = t12434 + t11933;
  t12235 = -1.*t9935*t11768;
  t12628 = t7398*t12420;
  t12638 = t9935*t11768;
  t12642 = t12628 + t12638;
  t12650 = -1.*t10478*t2048*t2134;
  t12651 = -1.*t11253*t12642;
  t12652 = t12650 + t12651;
  t12658 = t11253*t10478*t2048;
  t12661 = -1.*t2134*t12642;
  t12714 = t12658 + t12661;
  t12758 = t10478*t2048*t2134;
  t12761 = t11253*t12642;
  t12781 = t12758 + t12761;
  p_output1[0]=1.;
  p_output1[1]=t10050*t10855 + t11075*t11233 - 0.28121*t11256*t11261 - 0.50321*t11334*t11350 - 0.50321*t11416*t11441 - 0.19821*(t11302*t11350 - 1.*t11416*t11441) - 0.28121*t2048*t2134*t3251 - 0.15121*(t11233*t7398 - 1.*t10855*t9935);
  p_output1[2]=-0.28121*t11256*t11549 - 0.50321*t11334*t11556 - 0.50321*t11416*t11565 - 0.19821*(t11302*t11556 - 1.*t11416*t11565) - 1.*t10050*t10056*t10478*t2048 + t10478*t10747*t11075*t2048 - 0.28121*t10141*t10478*t2134 - 0.15121*(t10478*t10747*t2048*t7398 + t10056*t10478*t2048*t9935);
  p_output1[3]=t11075*t11580 + t10050*t11768 - 0.28121*t11256*t12010 - 0.50321*t11253*t11334*t12010 + 0.50321*t11416*t12010*t2134 - 0.19821*(t11253*t11302*t12010 + t11416*t12010*t2134) - 0.15121*(t12235 + t11580*t7398);
  p_output1[4]=-0.28121*t11256*t12438 - 0.50321*t11253*t11334*t12438 + 0.50321*t11416*t12438*t2134 - 0.19821*(t11253*t11302*t12438 + t11416*t12438*t2134) + t12420*(t10049 - 0.15121*t7398) + t11768*(t10049 + 0.15121*t7398) - 0.15121*(t12235 - 1.*t12420*t7398);
  p_output1[5]=-0.50321*t11416*t12652 - 0.50321*t11334*t12714 - 0.19821*(-1.*t11416*t12652 + t11302*t12714) + 0.28121*t10478*t11253*t2048 - 0.28121*t12642*t2134;
  p_output1[6]=-0.50321*t11302*t12714 - 0.50321*t11416*t12781 - 0.19821*(-1.*t11302*t12714 - 1.*t11416*t12781);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void J_u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
