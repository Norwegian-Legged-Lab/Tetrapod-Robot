/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:27 GMT+02:00
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
  double t303;
  double t1151;
  double t1723;
  double t2014;
  double t2623;
  double t358;
  double t570;
  double t3184;
  double t3187;
  double t3197;
  double t3200;
  double t3244;
  double t3408;
  double t3416;
  double t3647;
  double t3722;
  double t5203;
  double t5337;
  double t5518;
  double t671;
  double t690;
  double t1262;
  double t1399;
  double t5656;
  double t5648;
  double t5681;
  double t5685;
  double t5690;
  double t3266;
  double t3286;
  double t5649;
  double t5662;
  double t5669;
  double t5708;
  double t5779;
  double t5787;
  double t5790;
  double t5806;
  double t5807;
  double t5817;
  double t5818;
  double t5819;
  double t5865;
  double t5870;
  double t5874;
  double t5853;
  double t5854;
  double t5855;
  double t5886;
  double t5887;
  double t5889;
  double t5894;
  double t5896;
  double t5898;
  double t5910;
  double t5911;
  double t5917;
  t303 = Cos(var1[4]);
  t1151 = Cos(var1[6]);
  t1723 = Sin(var1[5]);
  t2014 = Sin(var1[4]);
  t2623 = Sin(var1[6]);
  t358 = Cos(var1[5]);
  t570 = Cos(var1[7]);
  t3184 = t1151*t2014;
  t3187 = t303*t1723*t2623;
  t3197 = t3184 + t3187;
  t3200 = Sin(var1[7]);
  t3244 = Cos(var1[8]);
  t3408 = t303*t358*t570;
  t3416 = t3197*t3200;
  t3647 = t3408 + t3416;
  t3722 = t570*t3197;
  t5203 = -1.*t303*t358*t3200;
  t5337 = t3722 + t5203;
  t5518 = Sin(var1[8]);
  t671 = -1.*t570;
  t690 = 1. + t671;
  t1262 = -1.*t1151;
  t1399 = 1. + t1262;
  t5656 = Cos(var1[3]);
  t5648 = Sin(var1[3]);
  t5681 = t5656*t358;
  t5685 = -1.*t5648*t2014*t1723;
  t5690 = t5681 + t5685;
  t3266 = -1.*t3244;
  t3286 = 1. + t3266;
  t5649 = t358*t5648*t2014;
  t5662 = t5656*t1723;
  t5669 = t5649 + t5662;
  t5708 = -1.*t303*t1151*t5648;
  t5779 = -1.*t5690*t2623;
  t5787 = t5708 + t5779;
  t5790 = t570*t5669;
  t5806 = t5787*t3200;
  t5807 = t5790 + t5806;
  t5817 = t570*t5787;
  t5818 = -1.*t5669*t3200;
  t5819 = t5817 + t5818;
  t5865 = t358*t5648;
  t5870 = t5656*t2014*t1723;
  t5874 = t5865 + t5870;
  t5853 = -1.*t5656*t358*t2014;
  t5854 = t5648*t1723;
  t5855 = t5853 + t5854;
  t5886 = t5656*t303*t1151;
  t5887 = -1.*t5874*t2623;
  t5889 = t5886 + t5887;
  t5894 = t570*t5855;
  t5896 = t5889*t3200;
  t5898 = t5894 + t5896;
  t5910 = t570*t5889;
  t5911 = -1.*t5855*t3200;
  t5917 = t5910 + t5911;
  p_output1[0]=-0.1575*t2014*t2623 - 0.1575*t1399*t1723*t303 + 0.2255*(t2014*t2623 - 1.*t1151*t1723*t303) - 0.325*t3197*t3200 + 0.075*t3286*t3647 + 0.075*t5337*t5518 - 0.0641*(t3244*t5337 + t3647*t5518) + 0.355*(t3244*t3647 - 1.*t5337*t5518) + 0.325*t303*t358*t690 + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t2623*t303*t5648 + 0.1575*t1399*t5690 + 0.2255*(-1.*t2623*t303*t5648 + t1151*t5690) - 0.325*t3200*t5787 + 0.075*t3286*t5807 + 0.075*t5518*t5819 - 0.0641*(t5518*t5807 + t3244*t5819) + 0.355*(t3244*t5807 - 1.*t5518*t5819) + 0.325*t5669*t690 + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t2623*t303*t5656 + 0.1575*t1399*t5874 + 0.2255*(t2623*t303*t5656 + t1151*t5874) - 0.325*t3200*t5889 + 0.075*t3286*t5898 + 0.075*t5518*t5917 - 0.0641*(t5518*t5898 + t3244*t5917) + 0.355*(t3244*t5898 - 1.*t5518*t5917) + 0.325*t5855*t690 + var1[2] - 1.*var2[2];
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
