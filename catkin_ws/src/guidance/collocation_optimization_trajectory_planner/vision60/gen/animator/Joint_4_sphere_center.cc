/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:12 GMT+02:00
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
  double t3890;
  double t4077;
  double t4111;
  double t4561;
  double t4782;
  double t3128;
  double t3893;
  double t8855;
  double t11710;
  double t11767;
  double t11777;
  double t3667;
  double t3702;
  double t18145;
  double t4641;
  double t4781;
  double t18304;
  double t18761;
  double t18796;
  double t18921;
  double t18189;
  double t18307;
  double t18502;
  double t21323;
  double t21349;
  double t21431;
  double t24575;
  double t24587;
  double t24681;
  double t24411;
  double t24422;
  double t24477;
  double t24737;
  double t24748;
  double t24775;
  t3890 = Cos(var1[4]);
  t4077 = Sin(var1[12]);
  t4111 = Sin(var1[4]);
  t4561 = Cos(var1[12]);
  t4782 = Sin(var1[5]);
  t3128 = Cos(var1[13]);
  t3893 = Cos(var1[5]);
  t8855 = Sin(var1[13]);
  t11710 = t4561*t4111;
  t11767 = t3890*t4077*t4782;
  t11777 = t11710 + t11767;
  t3667 = -1.*t3128;
  t3702 = 1. + t3667;
  t18145 = Sin(var1[3]);
  t4641 = -1.*t4561;
  t4781 = 1. + t4641;
  t18304 = Cos(var1[3]);
  t18761 = t18304*t3893;
  t18796 = -1.*t18145*t4111*t4782;
  t18921 = t18761 + t18796;
  t18189 = t3893*t18145*t4111;
  t18307 = t18304*t4782;
  t18502 = t18189 + t18307;
  t21323 = -1.*t4561*t3890*t18145;
  t21349 = -1.*t4077*t18921;
  t21431 = t21323 + t21349;
  t24575 = t3893*t18145;
  t24587 = t18304*t4111*t4782;
  t24681 = t24575 + t24587;
  t24411 = -1.*t18304*t3893*t4111;
  t24422 = t18145*t4782;
  t24477 = t24411 + t24422;
  t24737 = t4561*t18304*t3890;
  t24748 = -1.*t4077*t24681;
  t24775 = t24737 + t24748;
  p_output1[0]=0.325*t3702*t3890*t3893 + 0.1575*t4077*t4111 + 0.1575*t3890*t4781*t4782 - 0.2255*(t4077*t4111 - 1.*t3890*t4561*t4782) - 0.325*t11777*t8855 + 0.325*(t3128*t3890*t3893 + t11777*t8855) + var1[0];
  p_output1[1]=0.325*t18502*t3702 - 0.1575*t18145*t3890*t4077 - 0.2255*(-1.*t18145*t3890*t4077 + t18921*t4561) - 0.1575*t18921*t4781 - 0.325*t21431*t8855 + 0.325*(t18502*t3128 + t21431*t8855) + var1[1];
  p_output1[2]=0.325*t24477*t3702 + 0.1575*t18304*t3890*t4077 - 0.2255*(t18304*t3890*t4077 + t24681*t4561) - 0.1575*t24681*t4781 - 0.325*t24775*t8855 + 0.325*(t24477*t3128 + t24775*t8855) + var1[2];
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

#include "Joint_4_sphere_center.hh"

namespace SymFunction
{

void Joint_4_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
