/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:25 GMT+02:00
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
  double t2880;
  double t3105;
  double t3122;
  double t3404;
  double t3661;
  double t3090;
  double t3949;
  double t268;
  double t3954;
  double t3956;
  double t4029;
  double t4064;
  double t4136;
  double t4153;
  double t4163;
  double t4536;
  double t4868;
  double t4918;
  double t5032;
  double t296;
  double t2869;
  double t6074;
  double t3525;
  double t3647;
  double t6100;
  double t6338;
  double t6431;
  double t6555;
  double t6082;
  double t6106;
  double t6134;
  double t6667;
  double t6668;
  double t6669;
  double t4776;
  double t4787;
  double t6680;
  double t6681;
  double t6682;
  double t6684;
  double t6689;
  double t6696;
  double t6720;
  double t6721;
  double t6722;
  double t6716;
  double t6717;
  double t6718;
  double t6729;
  double t6730;
  double t6731;
  double t6733;
  double t6734;
  double t6735;
  double t6737;
  double t6738;
  double t6739;
  t2880 = Cos(var1[4]);
  t3105 = Sin(var1[15]);
  t3122 = Sin(var1[4]);
  t3404 = Cos(var1[15]);
  t3661 = Sin(var1[5]);
  t3090 = Cos(var1[5]);
  t3949 = Sin(var1[16]);
  t268 = Cos(var1[16]);
  t3954 = t3404*t3122;
  t3956 = t2880*t3105*t3661;
  t4029 = t3954 + t3956;
  t4064 = Sin(var1[17]);
  t4136 = -1.*t2880*t3090*t3949;
  t4153 = t268*t4029;
  t4163 = t4136 + t4153;
  t4536 = Cos(var1[17]);
  t4868 = t268*t2880*t3090;
  t4918 = t3949*t4029;
  t5032 = t4868 + t4918;
  t296 = -1.*t268;
  t2869 = 1. + t296;
  t6074 = Sin(var1[3]);
  t3525 = -1.*t3404;
  t3647 = 1. + t3525;
  t6100 = Cos(var1[3]);
  t6338 = t6100*t3090;
  t6431 = -1.*t6074*t3122*t3661;
  t6555 = t6338 + t6431;
  t6082 = t3090*t6074*t3122;
  t6106 = t6100*t3661;
  t6134 = t6082 + t6106;
  t6667 = -1.*t3404*t2880*t6074;
  t6668 = -1.*t3105*t6555;
  t6669 = t6667 + t6668;
  t4776 = -1.*t4536;
  t4787 = 1. + t4776;
  t6680 = -1.*t3949*t6134;
  t6681 = t268*t6669;
  t6682 = t6680 + t6681;
  t6684 = t268*t6134;
  t6689 = t3949*t6669;
  t6696 = t6684 + t6689;
  t6720 = t3090*t6074;
  t6721 = t6100*t3122*t3661;
  t6722 = t6720 + t6721;
  t6716 = -1.*t6100*t3090*t3122;
  t6717 = t6074*t3661;
  t6718 = t6716 + t6717;
  t6729 = t3404*t6100*t2880;
  t6730 = -1.*t3105*t6722;
  t6731 = t6729 + t6730;
  t6733 = -1.*t3949*t6718;
  t6734 = t268*t6731;
  t6735 = t6733 + t6734;
  t6737 = t268*t6718;
  t6738 = t3949*t6731;
  t6739 = t6737 + t6738;
  p_output1[0]=-0.325*t2869*t2880*t3090 + 0.1575*t3105*t3122 + 0.1575*t2880*t3647*t3661 - 0.2255*(t3105*t3122 - 1.*t2880*t3404*t3661) + 0.325*t3949*t4029 - 0.575*t4064*t4163 - 0.575*t4787*t5032 - 0.0641*(t4163*t4536 + t4064*t5032) - 0.295*(-1.*t4064*t4163 + t4536*t5032) + var1[0];
  p_output1[1]=-0.1575*t2880*t3105*t6074 - 0.325*t2869*t6134 - 0.1575*t3647*t6555 - 0.2255*(-1.*t2880*t3105*t6074 + t3404*t6555) + 0.325*t3949*t6669 - 0.575*t4064*t6682 - 0.575*t4787*t6696 - 0.0641*(t4536*t6682 + t4064*t6696) - 0.295*(-1.*t4064*t6682 + t4536*t6696) + var1[1];
  p_output1[2]=0.1575*t2880*t3105*t6100 - 0.325*t2869*t6718 - 0.1575*t3647*t6722 - 0.2255*(t2880*t3105*t6100 + t3404*t6722) + 0.325*t3949*t6731 - 0.575*t4064*t6735 - 0.575*t4787*t6739 - 0.0641*(t4536*t6735 + t4064*t6739) - 0.295*(-1.*t4064*t6735 + t4536*t6739) + var1[2];
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

#include "RrFoot_sphere_center.hh"

namespace SymFunction
{

void RrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
