/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:56 GMT+02:00
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
  double t36007;
  double t38850;
  double t41008;
  double t44364;
  double t44483;
  double t36398;
  double t44539;
  double t21189;
  double t44551;
  double t44557;
  double t44560;
  double t44566;
  double t44567;
  double t44568;
  double t44571;
  double t44574;
  double t44581;
  double t44582;
  double t44583;
  double t22590;
  double t33927;
  double t44682;
  double t44365;
  double t44457;
  double t44686;
  double t44699;
  double t44700;
  double t44701;
  double t44684;
  double t44687;
  double t44688;
  double t44726;
  double t44733;
  double t44738;
  double t44576;
  double t44577;
  double t44750;
  double t44755;
  double t44762;
  double t44767;
  double t44769;
  double t44774;
  double t44812;
  double t44815;
  double t44816;
  double t44800;
  double t44801;
  double t44804;
  double t44823;
  double t44824;
  double t44825;
  double t44827;
  double t44829;
  double t44831;
  double t44833;
  double t44834;
  double t44838;
  t36007 = Cos(var1[4]);
  t38850 = Sin(var1[12]);
  t41008 = Sin(var1[4]);
  t44364 = Cos(var1[12]);
  t44483 = Sin(var1[5]);
  t36398 = Cos(var1[5]);
  t44539 = Sin(var1[13]);
  t21189 = Cos(var1[13]);
  t44551 = t44364*t41008;
  t44557 = t36007*t38850*t44483;
  t44560 = t44551 + t44557;
  t44566 = Sin(var1[14]);
  t44567 = -1.*t36007*t36398*t44539;
  t44568 = t21189*t44560;
  t44571 = t44567 + t44568;
  t44574 = Cos(var1[14]);
  t44581 = t21189*t36007*t36398;
  t44582 = t44539*t44560;
  t44583 = t44581 + t44582;
  t22590 = -1.*t21189;
  t33927 = 1. + t22590;
  t44682 = Sin(var1[3]);
  t44365 = -1.*t44364;
  t44457 = 1. + t44365;
  t44686 = Cos(var1[3]);
  t44699 = t44686*t36398;
  t44700 = -1.*t44682*t41008*t44483;
  t44701 = t44699 + t44700;
  t44684 = t36398*t44682*t41008;
  t44687 = t44686*t44483;
  t44688 = t44684 + t44687;
  t44726 = -1.*t44364*t36007*t44682;
  t44733 = -1.*t38850*t44701;
  t44738 = t44726 + t44733;
  t44576 = -1.*t44574;
  t44577 = 1. + t44576;
  t44750 = -1.*t44539*t44688;
  t44755 = t21189*t44738;
  t44762 = t44750 + t44755;
  t44767 = t21189*t44688;
  t44769 = t44539*t44738;
  t44774 = t44767 + t44769;
  t44812 = t36398*t44682;
  t44815 = t44686*t41008*t44483;
  t44816 = t44812 + t44815;
  t44800 = -1.*t44686*t36398*t41008;
  t44801 = t44682*t44483;
  t44804 = t44800 + t44801;
  t44823 = t44364*t44686*t36007;
  t44824 = -1.*t38850*t44816;
  t44825 = t44823 + t44824;
  t44827 = -1.*t44539*t44804;
  t44829 = t21189*t44825;
  t44831 = t44827 + t44829;
  t44833 = t21189*t44804;
  t44834 = t44539*t44825;
  t44838 = t44833 + t44834;
  p_output1[0]=0.325*t33927*t36007*t36398 + 0.1575*t38850*t41008 + 0.1575*t36007*t44457*t44483 - 0.2255*(t38850*t41008 - 1.*t36007*t44364*t44483) - 0.325*t44539*t44560 + 0.075*t44566*t44571 + 0.075*t44577*t44583 - 0.0641*(t44571*t44574 + t44566*t44583) + 0.355*(-1.*t44566*t44571 + t44574*t44583) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t36007*t38850*t44682 + 0.325*t33927*t44688 - 0.1575*t44457*t44701 - 0.2255*(-1.*t36007*t38850*t44682 + t44364*t44701) - 0.325*t44539*t44738 + 0.075*t44566*t44762 + 0.075*t44577*t44774 - 0.0641*(t44574*t44762 + t44566*t44774) + 0.355*(-1.*t44566*t44762 + t44574*t44774) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t36007*t38850*t44686 + 0.325*t33927*t44804 - 0.1575*t44457*t44816 - 0.2255*(t36007*t38850*t44686 + t44364*t44816) - 0.325*t44539*t44825 + 0.075*t44566*t44831 + 0.075*t44577*t44838 - 0.0641*(t44574*t44831 + t44566*t44838) + 0.355*(-1.*t44566*t44831 + t44574*t44838) + var1[2] - 1.*var2[2];
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

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
