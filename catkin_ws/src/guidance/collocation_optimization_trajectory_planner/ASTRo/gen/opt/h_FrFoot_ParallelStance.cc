/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:39 GMT+02:00
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
  double t5789;
  double t7582;
  double t7745;
  double t8219;
  double t9457;
  double t9836;
  double t5883;
  double t10480;
  double t10295;
  double t10309;
  double t10536;
  double t10617;
  double t10618;
  double t10640;
  double t10642;
  double t10725;
  double t10727;
  double t10807;
  double t10819;
  double t10822;
  double t10833;
  double t10856;
  double t8573;
  double t9908;
  double t10987;
  double t10477;
  double t10478;
  double t10994;
  double t10993;
  double t10996;
  double t10997;
  double t11156;
  double t11157;
  double t11165;
  double t10537;
  double t10539;
  double t10643;
  double t10668;
  double t11271;
  double t11274;
  double t11275;
  double t11279;
  double t11280;
  double t11282;
  double t11759;
  double t11779;
  double t11909;
  double t12754;
  double t12757;
  double t12758;
  double t12816;
  double t13126;
  double t13695;
  double t14032;
  double t15241;
  double t15267;
  double t15294;
  double t15301;
  double t15302;
  double t15363;
  double t15365;
  double t15422;
  t5789 = Cos(var1[4]);
  t7582 = Cos(var1[12]);
  t7745 = -1.*t7582;
  t8219 = 1. + t7745;
  t9457 = Sin(var1[12]);
  t9836 = -0.15121*t9457;
  t5883 = Cos(var1[5]);
  t10480 = Sin(var1[5]);
  t10295 = Sin(var1[13]);
  t10309 = Sin(var1[4]);
  t10536 = Cos(var1[13]);
  t10617 = t7582*t5789*t5883;
  t10618 = -1.*t5789*t9457*t10480;
  t10640 = t10617 + t10618;
  t10642 = Cos(var1[14]);
  t10725 = -1.*t10295*t10309;
  t10727 = t10536*t10640;
  t10807 = t10725 + t10727;
  t10819 = Sin(var1[14]);
  t10822 = t10536*t10309;
  t10833 = t10295*t10640;
  t10856 = t10822 + t10833;
  t8573 = 0.15121*t8219;
  t9908 = t8573 + t9836;
  t10987 = Sin(var1[3]);
  t10477 = -0.15121*t8219;
  t10478 = t10477 + t9836;
  t10994 = Cos(var1[3]);
  t10993 = t5883*t10987*t10309;
  t10996 = t10994*t10480;
  t10997 = t10993 + t10996;
  t11156 = t10994*t5883;
  t11157 = -1.*t10987*t10309*t10480;
  t11165 = t11156 + t11157;
  t10537 = -1.*t10536;
  t10539 = 1. + t10537;
  t10643 = -1.*t10642;
  t10668 = 1. + t10643;
  t11271 = t7582*t10997;
  t11274 = t9457*t11165;
  t11275 = t11271 + t11274;
  t11279 = t5789*t10295*t10987;
  t11280 = t10536*t11275;
  t11282 = t11279 + t11280;
  t11759 = -1.*t10536*t5789*t10987;
  t11779 = t10295*t11275;
  t11909 = t11759 + t11779;
  t12754 = -1.*t10994*t5883*t10309;
  t12757 = t10987*t10480;
  t12758 = t12754 + t12757;
  t12816 = t5883*t10987;
  t13126 = t10994*t10309*t10480;
  t13695 = t12816 + t13126;
  t14032 = t7582*t12758;
  t15241 = t9457*t13695;
  t15267 = t14032 + t15241;
  t15294 = -1.*t10994*t5789*t10295;
  t15301 = t10536*t15267;
  t15302 = t15294 + t15301;
  t15363 = t10536*t10994*t5789;
  t15365 = t10295*t15267;
  t15422 = t15363 + t15365;
  p_output1[0]=0.28121*t10295*t10309 + 0.28121*t10539*t10640 + 0.50321*t10668*t10807 - 0.50321*t10819*t10856 + 0.19821*(t10642*t10807 + t10819*t10856) - 1.*t10478*t10480*t5789 - 0.15121*(-1.*t10480*t5789*t7582 - 1.*t5789*t5883*t9457) + t5789*t5883*t9908 + var1[0] - 1.*var2[0];
  p_output1[1]=t10478*t11165 + 0.28121*t10539*t11275 + 0.50321*t10668*t11282 - 0.50321*t10819*t11909 + 0.19821*(t10642*t11282 + t10819*t11909) - 0.28121*t10295*t10987*t5789 - 0.15121*(t11165*t7582 - 1.*t10997*t9457) + t10997*t9908 + var1[1] - 1.*var2[1];
  p_output1[2]=t10478*t13695 + 0.28121*t10539*t15267 + 0.50321*t10668*t15302 - 0.50321*t10819*t15422 + 0.19821*(t10642*t15302 + t10819*t15422) + 0.28121*t10295*t10994*t5789 - 0.15121*(t13695*t7582 - 1.*t12758*t9457) + t12758*t9908 + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
