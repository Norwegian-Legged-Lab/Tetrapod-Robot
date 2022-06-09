/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:25:37 GMT+02:00
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
  double t386;
  double t1536;
  double t1122;
  double t1123;
  double t1572;
  double t250;
  double t356;
  double t1648;
  double t1762;
  double t1831;
  double t1861;
  double t2679;
  double t1514;
  double t1608;
  double t1624;
  double t697;
  double t2681;
  double t2796;
  double t2824;
  double t2908;
  double t3146;
  double t3165;
  double t3253;
  double t3366;
  double t3629;
  double t3639;
  double t3666;
  double t1109;
  double t1120;
  double t1651;
  double t1698;
  double t4970;
  double t4979;
  double t5000;
  double t3562;
  double t3612;
  double t5032;
  double t5038;
  double t5051;
  double t5176;
  double t5181;
  double t5186;
  double t5413;
  double t5417;
  double t5426;
  double t5691;
  double t5693;
  double t5709;
  double t5744;
  double t5856;
  double t6647;
  double t8259;
  double t8468;
  double t8553;
  double t9858;
  double t9859;
  double t9867;
  double t9882;
  double t9894;
  double t9897;
  double t10218;
  double t10238;
  double t10264;
  double t10340;
  double t10360;
  double t10401;
  double t10429;
  double t10455;
  double t10487;
  double t10889;
  double t10920;
  double t11151;
  t386 = Sin(var1[3]);
  t1536 = Cos(var1[3]);
  t1122 = Cos(var1[5]);
  t1123 = Sin(var1[4]);
  t1572 = Sin(var1[5]);
  t250 = Cos(var1[4]);
  t356 = Sin(var1[9]);
  t1648 = Cos(var1[9]);
  t1762 = t1536*t1122;
  t1831 = -1.*t386*t1123*t1572;
  t1861 = t1762 + t1831;
  t2679 = Sin(var1[10]);
  t1514 = t1122*t386*t1123;
  t1608 = t1536*t1572;
  t1624 = t1514 + t1608;
  t697 = Cos(var1[10]);
  t2681 = -1.*t1648*t250*t386;
  t2796 = -1.*t356*t1861;
  t2824 = t2681 + t2796;
  t2908 = Sin(var1[11]);
  t3146 = -1.*t2679*t1624;
  t3165 = t697*t2824;
  t3253 = t3146 + t3165;
  t3366 = Cos(var1[11]);
  t3629 = t697*t1624;
  t3639 = t2679*t2824;
  t3666 = t3629 + t3639;
  t1109 = -1.*t697;
  t1120 = 1. + t1109;
  t1651 = -1.*t1648;
  t1698 = 1. + t1651;
  t4970 = -1.*t1648*t1536*t1123;
  t4979 = -1.*t1536*t250*t356*t1572;
  t5000 = t4970 + t4979;
  t3562 = -1.*t3366;
  t3612 = 1. + t3562;
  t5032 = t1536*t250*t1122*t2679;
  t5038 = t697*t5000;
  t5051 = t5032 + t5038;
  t5176 = -1.*t697*t1536*t250*t1122;
  t5181 = t2679*t5000;
  t5186 = t5176 + t5181;
  t5413 = t1536*t1122*t1123;
  t5417 = -1.*t386*t1572;
  t5426 = t5413 + t5417;
  t5691 = t1122*t386;
  t5693 = t1536*t1123*t1572;
  t5709 = t5691 + t5693;
  t5744 = -1.*t356*t2679*t5426;
  t5856 = t697*t5709;
  t6647 = t5744 + t5856;
  t8259 = -1.*t697*t356*t5426;
  t8468 = -1.*t2679*t5709;
  t8553 = t8259 + t8468;
  t9858 = -1.*t1536*t250*t356;
  t9859 = -1.*t1648*t5709;
  t9867 = t9858 + t9859;
  t9882 = t1648*t1536*t250;
  t9894 = -1.*t356*t5709;
  t9897 = t9882 + t9894;
  t10218 = -1.*t1536*t1122*t1123;
  t10238 = t386*t1572;
  t10264 = t10218 + t10238;
  t10340 = -1.*t2679*t10264;
  t10360 = t697*t9897;
  t10401 = t10340 + t10360;
  t10429 = -1.*t697*t10264;
  t10455 = -1.*t2679*t9897;
  t10487 = t10429 + t10455;
  t10889 = t697*t10264;
  t10920 = t2679*t9897;
  t11151 = t10889 + t10920;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t1120*t1624 + 0.1575*t1698*t1861 + 0.325*t2679*t2824 - 0.575*t2908*t3253 - 0.575*t3612*t3666 - 0.0641*(t3253*t3366 + t2908*t3666) - 0.295*(-1.*t2908*t3253 + t3366*t3666) + 0.1575*t250*t356*t386 + 0.2255*(t1648*t1861 - 1.*t250*t356*t386);
  p_output1[2]=0.325*t1120*t1122*t1536*t250 + 0.1575*t1536*t1572*t1698*t250 + 0.1575*t1123*t1536*t356 + 0.2255*(t1536*t1572*t1648*t250 - 1.*t1123*t1536*t356) + 0.325*t2679*t5000 - 0.575*t2908*t5051 - 0.575*t3612*t5186 - 0.0641*(t3366*t5051 + t2908*t5186) - 0.295*(-1.*t2908*t5051 + t3366*t5186);
  p_output1[3]=0.2255*t1648*t5426 + 0.1575*t1698*t5426 - 0.325*t2679*t356*t5426 - 0.325*t1120*t5709 - 0.575*t3612*t6647 - 0.575*t2908*t8553 - 0.295*(t3366*t6647 - 1.*t2908*t8553) - 0.0641*(t2908*t6647 + t3366*t8553);
  p_output1[4]=-0.1575*t1536*t1648*t250 + 0.1575*t356*t5709 + 0.325*t2679*t9867 - 0.575*t2679*t3612*t9867 - 0.575*t2908*t697*t9867 - 0.295*(t2679*t3366*t9867 - 1.*t2908*t697*t9867) - 0.0641*(t2679*t2908*t9867 + t3366*t697*t9867) + 0.2255*t9897;
  p_output1[5]=-0.325*t10264*t2679 - 0.575*t10487*t2908 - 0.295*(-1.*t10487*t2908 + t10401*t3366) - 0.0641*(t10401*t2908 + t10487*t3366) - 0.575*t10401*t3612 + 0.325*t697*t9897;
  p_output1[6]=-0.575*t11151*t2908 - 0.575*t10401*t3366 - 0.295*(-1.*t11151*t2908 - 1.*t10401*t3366) - 0.0641*(-1.*t10401*t2908 + t11151*t3366);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
