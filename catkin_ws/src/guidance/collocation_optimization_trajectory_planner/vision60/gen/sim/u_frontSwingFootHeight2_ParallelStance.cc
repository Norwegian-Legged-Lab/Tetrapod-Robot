/*
 * Automatically Generated from Mathematica.
 * Thu 9 Jun 2022 14:44:09 GMT+02:00
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
  double t4497;
  double t4846;
  double t3808;
  double t4790;
  double t5057;
  double t5180;
  double t5184;
  double t5187;
  double t5192;
  double t5206;
  double t5209;
  double t1461;
  double t4791;
  double t5106;
  double t5117;
  double t5241;
  double t5260;
  double t5262;
  double t5263;
  double t5265;
  double t5361;
  double t5367;
  double t5395;
  double t5412;
  double t5433;
  double t5435;
  double t5448;
  double t1863;
  double t3795;
  double t5182;
  double t5183;
  double t5291;
  double t5295;
  double t5539;
  double t5544;
  double t5552;
  double t5579;
  double t5590;
  double t5592;
  double t5594;
  double t5615;
  double t5616;
  double t5489;
  double t5497;
  double t5503;
  double t5529;
  double t5531;
  double t5532;
  double t5538;
  double t5574;
  double t5593;
  double t5622;
  double t5628;
  double t5630;
  double t5631;
  double t5635;
  double t5641;
  double t5652;
  double t5654;
  double t5712;
  double t5740;
  t4497 = Cos(var1[5]);
  t4846 = Sin(var1[3]);
  t3808 = Cos(var1[3]);
  t4790 = Sin(var1[4]);
  t5057 = Sin(var1[5]);
  t5180 = Cos(var1[6]);
  t5184 = t4497*t4846;
  t5187 = t3808*t4790*t5057;
  t5192 = t5184 + t5187;
  t5206 = Cos(var1[4]);
  t5209 = Sin(var1[6]);
  t1461 = Cos(var1[7]);
  t4791 = -1.*t3808*t4497*t4790;
  t5106 = t4846*t5057;
  t5117 = t4791 + t5106;
  t5241 = t3808*t5206*t5180;
  t5260 = -1.*t5192*t5209;
  t5262 = t5241 + t5260;
  t5263 = Sin(var1[7]);
  t5265 = Cos(var1[8]);
  t5361 = t1461*t5117;
  t5367 = t5262*t5263;
  t5395 = t5361 + t5367;
  t5412 = t1461*t5262;
  t5433 = -1.*t5117*t5263;
  t5435 = t5412 + t5433;
  t5448 = Sin(var1[8]);
  t1863 = -1.*t1461;
  t3795 = 1. + t1863;
  t5182 = -1.*t5180;
  t5183 = 1. + t5182;
  t5291 = -1.*t5265;
  t5295 = 1. + t5291;
  t5539 = t5180*t4790;
  t5544 = t5206*t5057*t5209;
  t5552 = t5539 + t5544;
  t5579 = t5206*t4497*t1461;
  t5590 = t5552*t5263;
  t5592 = t5579 + t5590;
  t5594 = t1461*t5552;
  t5615 = -1.*t5206*t4497*t5263;
  t5616 = t5594 + t5615;
  t5489 = 0.325*t5206*t4497*t3795;
  t5497 = -0.1575*t5206*t5183*t5057;
  t5503 = -0.1575*t4790*t5209;
  t5529 = -1.*t5206*t5180*t5057;
  t5531 = t4790*t5209;
  t5532 = t5529 + t5531;
  t5538 = 0.2255*t5532;
  t5574 = -0.325*t5552*t5263;
  t5593 = 0.075*t5295*t5592;
  t5622 = 0.075*t5616*t5448;
  t5628 = t5265*t5592;
  t5630 = -1.*t5616*t5448;
  t5631 = t5628 + t5630;
  t5635 = 0.355*t5631;
  t5641 = t5265*t5616;
  t5652 = t5592*t5448;
  t5654 = t5641 + t5652;
  t5712 = -0.0641*t5654;
  t5740 = -2. + var1[0] + t5489 + t5497 + t5503 + t5538 + t5574 + t5593 + t5622 + t5635 + t5712;
  p_output1[0]=0.325*t3795*t5117 + 0.1575*t5183*t5192 - 0.1575*t3808*t5206*t5209 + 0.2255*(t5180*t5192 + t3808*t5206*t5209) - 0.325*t5262*t5263 + 0.075*t5295*t5395 + 0.075*t5435*t5448 - 0.0641*(t5265*t5435 + t5395*t5448) + 0.355*(t5265*t5395 - 1.*t5435*t5448) + var1[2] - 0.0015*t5740*(1. + Tanh(100.*t5740));
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

#include "u_frontSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
