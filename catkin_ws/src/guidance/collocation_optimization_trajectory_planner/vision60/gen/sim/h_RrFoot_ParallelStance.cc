/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:50 GMT+02:00
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
  double t4573;
  double t4581;
  double t4582;
  double t4584;
  double t4588;
  double t4574;
  double t4614;
  double t4566;
  double t4615;
  double t4619;
  double t4620;
  double t4661;
  double t4665;
  double t4672;
  double t4676;
  double t4678;
  double t4691;
  double t4692;
  double t4693;
  double t4567;
  double t4568;
  double t4712;
  double t4585;
  double t4587;
  double t4715;
  double t4723;
  double t4724;
  double t4725;
  double t4714;
  double t4720;
  double t4721;
  double t4735;
  double t4736;
  double t4737;
  double t4686;
  double t4690;
  double t4739;
  double t4740;
  double t4741;
  double t4743;
  double t4748;
  double t4749;
  double t4773;
  double t4774;
  double t4778;
  double t4769;
  double t4770;
  double t4771;
  double t4795;
  double t4797;
  double t4798;
  double t4800;
  double t4801;
  double t4802;
  double t4804;
  double t4805;
  double t4806;
  t4573 = Cos(var1[4]);
  t4581 = Sin(var1[15]);
  t4582 = Sin(var1[4]);
  t4584 = Cos(var1[15]);
  t4588 = Sin(var1[5]);
  t4574 = Cos(var1[5]);
  t4614 = Sin(var1[16]);
  t4566 = Cos(var1[16]);
  t4615 = t4584*t4582;
  t4619 = t4573*t4581*t4588;
  t4620 = t4615 + t4619;
  t4661 = Sin(var1[17]);
  t4665 = -1.*t4573*t4574*t4614;
  t4672 = t4566*t4620;
  t4676 = t4665 + t4672;
  t4678 = Cos(var1[17]);
  t4691 = t4566*t4573*t4574;
  t4692 = t4614*t4620;
  t4693 = t4691 + t4692;
  t4567 = -1.*t4566;
  t4568 = 1. + t4567;
  t4712 = Sin(var1[3]);
  t4585 = -1.*t4584;
  t4587 = 1. + t4585;
  t4715 = Cos(var1[3]);
  t4723 = t4715*t4574;
  t4724 = -1.*t4712*t4582*t4588;
  t4725 = t4723 + t4724;
  t4714 = t4574*t4712*t4582;
  t4720 = t4715*t4588;
  t4721 = t4714 + t4720;
  t4735 = -1.*t4584*t4573*t4712;
  t4736 = -1.*t4581*t4725;
  t4737 = t4735 + t4736;
  t4686 = -1.*t4678;
  t4690 = 1. + t4686;
  t4739 = -1.*t4614*t4721;
  t4740 = t4566*t4737;
  t4741 = t4739 + t4740;
  t4743 = t4566*t4721;
  t4748 = t4614*t4737;
  t4749 = t4743 + t4748;
  t4773 = t4574*t4712;
  t4774 = t4715*t4582*t4588;
  t4778 = t4773 + t4774;
  t4769 = -1.*t4715*t4574*t4582;
  t4770 = t4712*t4588;
  t4771 = t4769 + t4770;
  t4795 = t4584*t4715*t4573;
  t4797 = -1.*t4581*t4778;
  t4798 = t4795 + t4797;
  t4800 = -1.*t4614*t4771;
  t4801 = t4566*t4798;
  t4802 = t4800 + t4801;
  t4804 = t4566*t4771;
  t4805 = t4614*t4798;
  t4806 = t4804 + t4805;
  p_output1[0]=-0.325*t4568*t4573*t4574 + 0.1575*t4581*t4582 + 0.1575*t4573*t4587*t4588 - 0.2255*(t4581*t4582 - 1.*t4573*t4584*t4588) + 0.325*t4614*t4620 - 0.575*t4661*t4676 - 0.575*t4690*t4693 - 0.0641*(t4676*t4678 + t4661*t4693) - 0.295*(-1.*t4661*t4676 + t4678*t4693) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t4573*t4581*t4712 - 0.325*t4568*t4721 - 0.1575*t4587*t4725 - 0.2255*(-1.*t4573*t4581*t4712 + t4584*t4725) + 0.325*t4614*t4737 - 0.575*t4661*t4741 - 0.575*t4690*t4749 - 0.0641*(t4678*t4741 + t4661*t4749) - 0.295*(-1.*t4661*t4741 + t4678*t4749) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t4573*t4581*t4715 - 0.325*t4568*t4771 - 0.1575*t4587*t4778 - 0.2255*(t4573*t4581*t4715 + t4584*t4778) + 0.325*t4614*t4798 - 0.575*t4661*t4802 - 0.575*t4690*t4806 - 0.0641*(t4678*t4802 + t4661*t4806) - 0.295*(-1.*t4661*t4802 + t4678*t4806) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
