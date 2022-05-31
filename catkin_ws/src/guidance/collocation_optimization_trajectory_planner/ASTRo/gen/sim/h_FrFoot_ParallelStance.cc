/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 17:22:51 GMT+02:00
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
  double t6889;
  double t13567;
  double t13574;
  double t13577;
  double t13656;
  double t13657;
  double t13549;
  double t13745;
  double t13682;
  double t13687;
  double t13761;
  double t13770;
  double t13771;
  double t13772;
  double t13776;
  double t13834;
  double t13835;
  double t13836;
  double t13851;
  double t13857;
  double t13862;
  double t13876;
  double t13654;
  double t13671;
  double t14107;
  double t13722;
  double t13733;
  double t14127;
  double t14115;
  double t14149;
  double t14174;
  double t14183;
  double t14186;
  double t14203;
  double t13765;
  double t13766;
  double t13777;
  double t13828;
  double t14238;
  double t14239;
  double t14241;
  double t14246;
  double t14268;
  double t14269;
  double t14271;
  double t14274;
  double t14280;
  double t14333;
  double t14337;
  double t14345;
  double t14360;
  double t14362;
  double t14363;
  double t14410;
  double t14411;
  double t14415;
  double t14420;
  double t14424;
  double t14427;
  double t14430;
  double t14431;
  double t14433;
  t6889 = Cos(var1[4]);
  t13567 = Cos(var1[12]);
  t13574 = -1.*t13567;
  t13577 = 1. + t13574;
  t13656 = Sin(var1[12]);
  t13657 = -0.15121*t13656;
  t13549 = Cos(var1[5]);
  t13745 = Sin(var1[5]);
  t13682 = Sin(var1[13]);
  t13687 = Sin(var1[4]);
  t13761 = Cos(var1[13]);
  t13770 = t13567*t6889*t13549;
  t13771 = -1.*t6889*t13656*t13745;
  t13772 = t13770 + t13771;
  t13776 = Cos(var1[14]);
  t13834 = -1.*t13682*t13687;
  t13835 = t13761*t13772;
  t13836 = t13834 + t13835;
  t13851 = Sin(var1[14]);
  t13857 = t13761*t13687;
  t13862 = t13682*t13772;
  t13876 = t13857 + t13862;
  t13654 = 0.15121*t13577;
  t13671 = t13654 + t13657;
  t14107 = Sin(var1[3]);
  t13722 = -0.15121*t13577;
  t13733 = t13722 + t13657;
  t14127 = Cos(var1[3]);
  t14115 = t13549*t14107*t13687;
  t14149 = t14127*t13745;
  t14174 = t14115 + t14149;
  t14183 = t14127*t13549;
  t14186 = -1.*t14107*t13687*t13745;
  t14203 = t14183 + t14186;
  t13765 = -1.*t13761;
  t13766 = 1. + t13765;
  t13777 = -1.*t13776;
  t13828 = 1. + t13777;
  t14238 = t13567*t14174;
  t14239 = t13656*t14203;
  t14241 = t14238 + t14239;
  t14246 = t6889*t13682*t14107;
  t14268 = t13761*t14241;
  t14269 = t14246 + t14268;
  t14271 = -1.*t13761*t6889*t14107;
  t14274 = t13682*t14241;
  t14280 = t14271 + t14274;
  t14333 = -1.*t14127*t13549*t13687;
  t14337 = t14107*t13745;
  t14345 = t14333 + t14337;
  t14360 = t13549*t14107;
  t14362 = t14127*t13687*t13745;
  t14363 = t14360 + t14362;
  t14410 = t13567*t14345;
  t14411 = t13656*t14363;
  t14415 = t14410 + t14411;
  t14420 = -1.*t14127*t6889*t13682;
  t14424 = t13761*t14415;
  t14427 = t14420 + t14424;
  t14430 = t13761*t14127*t6889;
  t14431 = t13682*t14415;
  t14433 = t14430 + t14431;
  p_output1[0]=0.28121*t13682*t13687 + 0.28121*t13766*t13772 + 0.50321*t13828*t13836 - 0.50321*t13851*t13876 + 0.23321*(t13776*t13836 + t13851*t13876) + t13549*t13671*t6889 - 1.*t13733*t13745*t6889 - 0.15121*(-1.*t13549*t13656*t6889 - 1.*t13567*t13745*t6889) + var1[0] - 1.*var2[0];
  p_output1[1]=t13671*t14174 + t13733*t14203 - 0.15121*(-1.*t13656*t14174 + t13567*t14203) + 0.28121*t13766*t14241 + 0.50321*t13828*t14269 - 0.50321*t13851*t14280 + 0.23321*(t13776*t14269 + t13851*t14280) - 0.28121*t13682*t14107*t6889 + var1[1] - 1.*var2[1];
  p_output1[2]=t13671*t14345 + t13733*t14363 - 0.15121*(-1.*t13656*t14345 + t13567*t14363) + 0.28121*t13766*t14415 + 0.50321*t13828*t14427 - 0.50321*t13851*t14433 + 0.23321*(t13776*t14427 + t13851*t14433) + 0.28121*t13682*t14127*t6889 + var1[2] - 1.*var2[2];
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
