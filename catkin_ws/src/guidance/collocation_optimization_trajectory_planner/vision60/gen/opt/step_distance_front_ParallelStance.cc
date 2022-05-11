/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:29 GMT+02:00
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
  double t26694;
  double t26695;
  double t26808;
  double t26778;
  double t26781;
  double t26793;
  double t26840;
  double t26438;
  double t26851;
  double t26858;
  double t26863;
  double t26869;
  double t26871;
  double t26872;
  double t26874;
  double t26882;
  double t26909;
  double t26916;
  double t26917;
  double t26816;
  double t26987;
  double t26700;
  double t27000;
  double t27002;
  double t27015;
  double t27017;
  double t27022;
  double t27033;
  double t27035;
  double t27037;
  double t27063;
  double t27064;
  double t27080;
  double t27088;
  double t26472;
  double t26614;
  double t27153;
  double t26701;
  double t26723;
  double t27168;
  double t27181;
  double t27209;
  double t27210;
  double t26803;
  double t26804;
  double t26820;
  double t26824;
  double t27219;
  double t27221;
  double t27223;
  double t27270;
  double t27271;
  double t27274;
  double t26889;
  double t26890;
  double t27283;
  double t27305;
  double t27310;
  double t27319;
  double t27347;
  double t27351;
  double t27026;
  double t27027;
  double t27384;
  double t27385;
  double t27389;
  double t27397;
  double t27400;
  double t27401;
  double t27407;
  double t27409;
  double t27418;
  t26694 = Cos(var1[4]);
  t26695 = Cos(var1[5]);
  t26808 = Sin(var1[5]);
  t26778 = Sin(var1[12]);
  t26781 = Sin(var1[4]);
  t26793 = Cos(var1[12]);
  t26840 = Sin(var1[13]);
  t26438 = Cos(var1[13]);
  t26851 = t26793*t26781;
  t26858 = t26694*t26778*t26808;
  t26863 = t26851 + t26858;
  t26869 = Sin(var1[14]);
  t26871 = -1.*t26694*t26695*t26840;
  t26872 = t26438*t26863;
  t26874 = t26871 + t26872;
  t26882 = Cos(var1[14]);
  t26909 = t26438*t26694*t26695;
  t26916 = t26840*t26863;
  t26917 = t26909 + t26916;
  t26816 = Cos(var1[6]);
  t26987 = Sin(var1[6]);
  t26700 = Cos(var1[7]);
  t27000 = t26816*t26781;
  t27002 = t26694*t26808*t26987;
  t27015 = t27000 + t27002;
  t27017 = Sin(var1[7]);
  t27022 = Cos(var1[8]);
  t27033 = t26694*t26695*t26700;
  t27035 = t27015*t27017;
  t27037 = t27033 + t27035;
  t27063 = t26700*t27015;
  t27064 = -1.*t26694*t26695*t27017;
  t27080 = t27063 + t27064;
  t27088 = Sin(var1[8]);
  t26472 = -1.*t26438;
  t26614 = 1. + t26472;
  t27153 = Sin(var1[3]);
  t26701 = -1.*t26700;
  t26723 = 1. + t26701;
  t27168 = t26695*t27153*t26781;
  t27181 = Cos(var1[3]);
  t27209 = t27181*t26808;
  t27210 = t27168 + t27209;
  t26803 = -1.*t26793;
  t26804 = 1. + t26803;
  t26820 = -1.*t26816;
  t26824 = 1. + t26820;
  t27219 = t27181*t26695;
  t27221 = -1.*t27153*t26781*t26808;
  t27223 = t27219 + t27221;
  t27270 = -1.*t26793*t26694*t27153;
  t27271 = -1.*t26778*t27223;
  t27274 = t27270 + t27271;
  t26889 = -1.*t26882;
  t26890 = 1. + t26889;
  t27283 = -1.*t26840*t27210;
  t27305 = t26438*t27274;
  t27310 = t27283 + t27305;
  t27319 = t26438*t27210;
  t27347 = t26840*t27274;
  t27351 = t27319 + t27347;
  t27026 = -1.*t27022;
  t27027 = 1. + t27026;
  t27384 = -1.*t26694*t26816*t27153;
  t27385 = -1.*t27223*t26987;
  t27389 = t27384 + t27385;
  t27397 = t26700*t27210;
  t27400 = t27389*t27017;
  t27401 = t27397 + t27400;
  t27407 = t26700*t27389;
  t27409 = -1.*t27210*t27017;
  t27418 = t27407 + t27409;
  p_output1[0]=-0.325*t26614*t26694*t26695 + 0.325*t26694*t26695*t26723 - 0.1575*t26778*t26781 - 0.1575*t26694*t26804*t26808 + 0.2255*(t26778*t26781 - 1.*t26694*t26793*t26808) - 0.1575*t26694*t26808*t26824 + 0.325*t26840*t26863 - 0.075*t26869*t26874 - 0.075*t26890*t26917 + 0.0641*(t26874*t26882 + t26869*t26917) - 0.355*(-1.*t26869*t26874 + t26882*t26917) - 0.1575*t26781*t26987 + 0.2255*(-1.*t26694*t26808*t26816 + t26781*t26987) - 0.325*t27015*t27017 + 0.075*t27027*t27037 + 0.075*t27080*t27088 - 0.0641*(t27022*t27080 + t27037*t27088) + 0.355*(t27022*t27037 - 1.*t27080*t27088);
  p_output1[1]=0.1575*t26694*t26778*t27153 + 0.1575*t26694*t26987*t27153 - 0.325*t26614*t27210 + 0.325*t26723*t27210 + 0.1575*t26804*t27223 + 0.1575*t26824*t27223 + 0.2255*(-1.*t26694*t26778*t27153 + t26793*t27223) + 0.2255*(-1.*t26694*t26987*t27153 + t26816*t27223) + 0.325*t26840*t27274 - 0.075*t26869*t27310 - 0.075*t26890*t27351 + 0.0641*(t26882*t27310 + t26869*t27351) - 0.355*(-1.*t26869*t27310 + t26882*t27351) - 0.325*t27017*t27389 + 0.075*t27027*t27401 + 0.075*t27088*t27418 - 0.0641*(t27088*t27401 + t27022*t27418) + 0.355*(t27022*t27401 - 1.*t27088*t27418);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_front_ParallelStance.hh"

namespace ParallelStance
{

void step_distance_front_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
