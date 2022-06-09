/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:42 GMT+02:00
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
  double t5340;
  double t5427;
  double t5429;
  double t5438;
  double t5440;
  double t5441;
  double t5426;
  double t5453;
  double t5467;
  double t5470;
  double t5471;
  double t5472;
  double t5474;
  double t5476;
  double t5479;
  double t5521;
  double t5522;
  double t5524;
  double t5526;
  double t5527;
  double t5528;
  double t5529;
  double t5446;
  double t5451;
  double t5541;
  double t5539;
  double t5457;
  double t5461;
  double t5540;
  double t5543;
  double t5544;
  double t5546;
  double t5548;
  double t5549;
  double t5468;
  double t5469;
  double t5516;
  double t5520;
  double t5555;
  double t5556;
  double t5557;
  double t5560;
  double t5561;
  double t5562;
  double t5564;
  double t5565;
  double t5566;
  double t5575;
  double t5576;
  double t5578;
  double t5580;
  double t5581;
  double t5582;
  double t5588;
  double t5589;
  double t5590;
  double t5593;
  double t5594;
  double t5595;
  double t5597;
  double t5598;
  double t5599;
  t5340 = Cos(var1[4]);
  t5427 = Cos(var1[6]);
  t5429 = -1.*t5427;
  t5438 = 1. + t5429;
  t5440 = 0.15121*t5438;
  t5441 = Sin(var1[6]);
  t5426 = Sin(var1[5]);
  t5453 = Cos(var1[5]);
  t5467 = Cos(var1[7]);
  t5470 = t5340*t5453*t5427;
  t5471 = -1.*t5340*t5426*t5441;
  t5472 = t5470 + t5471;
  t5474 = Sin(var1[4]);
  t5476 = Sin(var1[7]);
  t5479 = Cos(var1[8]);
  t5521 = t5467*t5472;
  t5522 = -1.*t5474*t5476;
  t5524 = t5521 + t5522;
  t5526 = t5467*t5474;
  t5527 = t5472*t5476;
  t5528 = t5526 + t5527;
  t5529 = Sin(var1[8]);
  t5446 = -0.15121*t5441;
  t5451 = t5440 + t5446;
  t5541 = Sin(var1[3]);
  t5539 = Cos(var1[3]);
  t5457 = 0.15121*t5441;
  t5461 = t5440 + t5457;
  t5540 = t5539*t5453;
  t5543 = -1.*t5541*t5474*t5426;
  t5544 = t5540 + t5543;
  t5546 = t5453*t5541*t5474;
  t5548 = t5539*t5426;
  t5549 = t5546 + t5548;
  t5468 = -1.*t5467;
  t5469 = 1. + t5468;
  t5516 = -1.*t5479;
  t5520 = 1. + t5516;
  t5555 = t5427*t5549;
  t5556 = t5544*t5441;
  t5557 = t5555 + t5556;
  t5560 = t5467*t5557;
  t5561 = t5340*t5541*t5476;
  t5562 = t5560 + t5561;
  t5564 = -1.*t5340*t5467*t5541;
  t5565 = t5557*t5476;
  t5566 = t5564 + t5565;
  t5575 = t5453*t5541;
  t5576 = t5539*t5474*t5426;
  t5578 = t5575 + t5576;
  t5580 = -1.*t5539*t5453*t5474;
  t5581 = t5541*t5426;
  t5582 = t5580 + t5581;
  t5588 = t5427*t5582;
  t5589 = t5578*t5441;
  t5590 = t5588 + t5589;
  t5593 = t5467*t5590;
  t5594 = -1.*t5539*t5340*t5476;
  t5595 = t5593 + t5594;
  t5597 = t5539*t5340*t5467;
  t5598 = t5590*t5476;
  t5599 = t5597 + t5598;
  p_output1[0]=-1.*t5340*t5426*t5451 + 0.15121*(-1.*t5340*t5426*t5427 - 1.*t5340*t5441*t5453) + t5340*t5453*t5461 + 0.28121*t5469*t5472 + 0.28121*t5474*t5476 + 0.50321*t5520*t5524 - 0.50321*t5528*t5529 + 0.19821*(t5479*t5524 + t5528*t5529) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t5340*t5476*t5541 + t5451*t5544 + t5461*t5549 + 0.15121*(t5427*t5544 - 1.*t5441*t5549) + 0.28121*t5469*t5557 + 0.50321*t5520*t5562 - 0.50321*t5529*t5566 + 0.19821*(t5479*t5562 + t5529*t5566) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t5340*t5476*t5539 + t5451*t5578 + t5461*t5582 + 0.15121*(t5427*t5578 - 1.*t5441*t5582) + 0.28121*t5469*t5590 + 0.50321*t5520*t5595 - 0.50321*t5529*t5599 + 0.19821*(t5479*t5595 + t5529*t5599) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
