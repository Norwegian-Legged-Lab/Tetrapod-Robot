/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:39 GMT+02:00
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
  double t10463;
  double t11203;
  double t11376;
  double t12963;
  double t12973;
  double t13048;
  double t13228;
  double t13133;
  double t13158;
  double t13231;
  double t13216;
  double t14753;
  double t14948;
  double t14963;
  double t14964;
  double t15135;
  double t4545;
  double t5074;
  double t15654;
  double t16142;
  double t19690;
  double t19872;
  double t20194;
  double t21854;
  double t22314;
  double t22395;
  double t22745;
  double t22750;
  double t30771;
  double t34418;
  double t13060;
  double t13065;
  double t14961;
  double t14962;
  double t15656;
  double t15784;
  double t21413;
  double t21851;
  double t37835;
  double t37837;
  double t37845;
  double t37865;
  double t37875;
  double t37992;
  double t38007;
  double t38039;
  double t38217;
  double t38271;
  double t38272;
  double t38274;
  double t38278;
  double t38282;
  double t38285;
  double t38289;
  double t38306;
  double t38307;
  double t38411;
  double t38438;
  double t38449;
  double t38478;
  double t38481;
  double t38327;
  double t38552;
  double t38554;
  double t38556;
  double t38558;
  double t38593;
  double t38613;
  double t38651;
  double t38729;
  double t38780;
  double t38821;
  double t38823;
  double t38999;
  t10463 = Sin(var1[3]);
  t11203 = Cos(var1[15]);
  t11376 = -1.*t11203;
  t12963 = 1. + t11376;
  t12973 = -0.15121*t12963;
  t13048 = Sin(var1[15]);
  t13228 = Cos(var1[3]);
  t13133 = Cos(var1[5]);
  t13158 = Sin(var1[4]);
  t13231 = Sin(var1[5]);
  t13216 = t13133*t10463*t13158;
  t14753 = t13228*t13231;
  t14948 = t13216 + t14753;
  t14963 = t13228*t13133;
  t14964 = -1.*t10463*t13158*t13231;
  t15135 = t14963 + t14964;
  t4545 = Cos(var1[4]);
  t5074 = Sin(var1[16]);
  t15654 = Cos(var1[16]);
  t16142 = t11203*t14948;
  t19690 = t13048*t15135;
  t19872 = t16142 + t19690;
  t20194 = Cos(var1[17]);
  t21854 = -1.*t4545*t5074*t10463;
  t22314 = t15654*t19872;
  t22395 = t21854 + t22314;
  t22745 = Sin(var1[17]);
  t22750 = -1.*t15654*t4545*t10463;
  t30771 = -1.*t5074*t19872;
  t34418 = t22750 + t30771;
  t13060 = -0.15121*t13048;
  t13065 = t12973 + t13060;
  t14961 = 0.15121*t13048;
  t14962 = t12973 + t14961;
  t15656 = -1.*t15654;
  t15784 = 1. + t15656;
  t21413 = -1.*t20194;
  t21851 = 1. + t21413;
  t37835 = -1.*t11203*t13228*t4545*t13133;
  t37837 = t13228*t4545*t13048*t13231;
  t37845 = t37835 + t37837;
  t37865 = -1.*t13228*t5074*t13158;
  t37875 = t15654*t37845;
  t37992 = t37865 + t37875;
  t38007 = -1.*t15654*t13228*t13158;
  t38039 = -1.*t5074*t37845;
  t38217 = t38007 + t38039;
  t38271 = t13228*t13133*t13158;
  t38272 = -1.*t10463*t13231;
  t38274 = t38271 + t38272;
  t38278 = t13133*t10463;
  t38282 = t13228*t13158*t13231;
  t38285 = t38278 + t38282;
  t38289 = t13048*t38274;
  t38306 = t11203*t38285;
  t38307 = t38289 + t38306;
  t38411 = -1.*t13228*t13133*t13158;
  t38438 = t10463*t13231;
  t38449 = t38411 + t38438;
  t38478 = -1.*t13048*t38449;
  t38481 = t38478 + t38306;
  t38327 = -1.*t13048*t38285;
  t38552 = t11203*t38449;
  t38554 = t13048*t38285;
  t38556 = t38552 + t38554;
  t38558 = -1.*t13228*t4545*t5074;
  t38593 = -1.*t15654*t38556;
  t38613 = t38558 + t38593;
  t38651 = t15654*t13228*t4545;
  t38729 = -1.*t5074*t38556;
  t38780 = t38651 + t38729;
  t38821 = t13228*t4545*t5074;
  t38823 = t15654*t38556;
  t38999 = t38821 + t38823;
  p_output1[0]=1.;
  p_output1[1]=t13065*t14948 + t14962*t15135 - 0.15121*(-1.*t13048*t14948 + t11203*t15135) - 0.28121*t15784*t19872 - 0.50321*t21851*t22395 - 0.50321*t22745*t34418 - 0.23321*(t20194*t22395 - 1.*t22745*t34418) - 0.28121*t10463*t4545*t5074;
  p_output1[2]=-0.28121*t15784*t37845 - 0.50321*t21851*t37992 - 0.50321*t22745*t38217 - 0.23321*(t20194*t37992 - 1.*t22745*t38217) - 1.*t13065*t13133*t13228*t4545 + t13228*t13231*t14962*t4545 - 0.15121*(t13048*t13133*t13228*t4545 + t11203*t13228*t13231*t4545) - 0.28121*t13158*t13228*t5074;
  p_output1[3]=t14962*t38274 + t13065*t38285 - 0.28121*t15784*t38307 - 0.50321*t15654*t21851*t38307 - 0.15121*(t11203*t38274 + t38327) + 0.50321*t22745*t38307*t5074 - 0.23321*(t15654*t20194*t38307 + t22745*t38307*t5074);
  p_output1[4]=(0.15121*t11203 + t13060)*t38285 + (-0.15121*t11203 + t13060)*t38449 - 0.15121*(t38327 - 1.*t11203*t38449) - 0.28121*t15784*t38481 - 0.50321*t15654*t21851*t38481 + 0.50321*t22745*t38481*t5074 - 0.23321*(t15654*t20194*t38481 + t22745*t38481*t5074);
  p_output1[5]=-0.50321*t22745*t38613 - 0.50321*t21851*t38780 - 0.23321*(-1.*t22745*t38613 + t20194*t38780) + 0.28121*t13228*t15654*t4545 - 0.28121*t38556*t5074;
  p_output1[6]=-0.50321*t20194*t38780 - 0.50321*t22745*t38999 - 0.23321*(-1.*t20194*t38780 - 1.*t22745*t38999);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void J_u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
