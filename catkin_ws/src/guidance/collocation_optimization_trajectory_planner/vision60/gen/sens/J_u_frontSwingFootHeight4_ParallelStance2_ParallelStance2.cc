/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:25:52 GMT+02:00
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
  double t6071;
  double t10273;
  double t7412;
  double t9675;
  double t10727;
  double t2719;
  double t5833;
  double t12329;
  double t14072;
  double t14138;
  double t14410;
  double t15016;
  double t10179;
  double t10832;
  double t11280;
  double t6828;
  double t15352;
  double t15370;
  double t15386;
  double t16177;
  double t16180;
  double t16181;
  double t16217;
  double t17329;
  double t20434;
  double t20860;
  double t21318;
  double t7267;
  double t7303;
  double t13366;
  double t13741;
  double t27262;
  double t27273;
  double t27282;
  double t18672;
  double t19751;
  double t27287;
  double t27289;
  double t27291;
  double t27299;
  double t27302;
  double t27466;
  double t27872;
  double t27903;
  double t27928;
  double t28072;
  double t28080;
  double t28342;
  double t28654;
  double t28661;
  double t28663;
  double t28666;
  double t28667;
  double t28708;
  double t28927;
  double t28939;
  double t28960;
  double t29286;
  double t29360;
  double t29378;
  double t29605;
  double t29611;
  double t29612;
  double t29632;
  double t29637;
  double t29641;
  double t29649;
  double t29658;
  double t29662;
  double t29810;
  double t29819;
  double t29825;
  t6071 = Sin(var1[3]);
  t10273 = Cos(var1[3]);
  t7412 = Cos(var1[5]);
  t9675 = Sin(var1[4]);
  t10727 = Sin(var1[5]);
  t2719 = Cos(var1[4]);
  t5833 = Sin(var1[12]);
  t12329 = Cos(var1[12]);
  t14072 = t10273*t7412;
  t14138 = -1.*t6071*t9675*t10727;
  t14410 = t14072 + t14138;
  t15016 = Sin(var1[13]);
  t10179 = t7412*t6071*t9675;
  t10832 = t10273*t10727;
  t11280 = t10179 + t10832;
  t6828 = Cos(var1[13]);
  t15352 = -1.*t12329*t2719*t6071;
  t15370 = -1.*t5833*t14410;
  t15386 = t15352 + t15370;
  t16177 = Sin(var1[14]);
  t16180 = -1.*t15016*t11280;
  t16181 = t6828*t15386;
  t16217 = t16180 + t16181;
  t17329 = Cos(var1[14]);
  t20434 = t6828*t11280;
  t20860 = t15016*t15386;
  t21318 = t20434 + t20860;
  t7267 = -1.*t6828;
  t7303 = 1. + t7267;
  t13366 = -1.*t12329;
  t13741 = 1. + t13366;
  t27262 = -1.*t12329*t10273*t9675;
  t27273 = -1.*t10273*t2719*t5833*t10727;
  t27282 = t27262 + t27273;
  t18672 = -1.*t17329;
  t19751 = 1. + t18672;
  t27287 = t10273*t2719*t7412*t15016;
  t27289 = t6828*t27282;
  t27291 = t27287 + t27289;
  t27299 = -1.*t6828*t10273*t2719*t7412;
  t27302 = t15016*t27282;
  t27466 = t27299 + t27302;
  t27872 = t10273*t7412*t9675;
  t27903 = -1.*t6071*t10727;
  t27928 = t27872 + t27903;
  t28072 = t7412*t6071;
  t28080 = t10273*t9675*t10727;
  t28342 = t28072 + t28080;
  t28654 = -1.*t5833*t15016*t27928;
  t28661 = t6828*t28342;
  t28663 = t28654 + t28661;
  t28666 = -1.*t6828*t5833*t27928;
  t28667 = -1.*t15016*t28342;
  t28708 = t28666 + t28667;
  t28927 = -1.*t10273*t2719*t5833;
  t28939 = -1.*t12329*t28342;
  t28960 = t28927 + t28939;
  t29286 = t12329*t10273*t2719;
  t29360 = -1.*t5833*t28342;
  t29378 = t29286 + t29360;
  t29605 = -1.*t10273*t7412*t9675;
  t29611 = t6071*t10727;
  t29612 = t29605 + t29611;
  t29632 = -1.*t15016*t29612;
  t29637 = t6828*t29378;
  t29641 = t29632 + t29637;
  t29649 = -1.*t6828*t29612;
  t29658 = -1.*t15016*t29378;
  t29662 = t29649 + t29658;
  t29810 = t6828*t29612;
  t29819 = t15016*t29378;
  t29825 = t29810 + t29819;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t13741*t14410 - 0.325*t15016*t15386 + 0.075*t16177*t16217 + 0.075*t19751*t21318 - 0.0641*(t16217*t17329 + t16177*t21318) + 0.355*(-1.*t16177*t16217 + t17329*t21318) - 0.1575*t2719*t5833*t6071 - 0.2255*(t12329*t14410 - 1.*t2719*t5833*t6071) + 0.325*t11280*t7303;
  p_output1[2]=-0.1575*t10273*t10727*t13741*t2719 - 0.325*t15016*t27282 + 0.075*t16177*t27291 + 0.075*t19751*t27466 - 0.0641*(t17329*t27291 + t16177*t27466) + 0.355*(-1.*t16177*t27291 + t17329*t27466) - 0.325*t10273*t2719*t7303*t7412 - 0.1575*t10273*t5833*t9675 - 0.2255*(t10273*t10727*t12329*t2719 - 1.*t10273*t5833*t9675);
  p_output1[3]=-0.2255*t12329*t27928 - 0.1575*t13741*t27928 + 0.075*t19751*t28663 + 0.075*t16177*t28708 + 0.355*(t17329*t28663 - 1.*t16177*t28708) - 0.0641*(t16177*t28663 + t17329*t28708) + 0.325*t15016*t27928*t5833 + 0.325*t28342*t7303;
  p_output1[4]=0.1575*t10273*t12329*t2719 - 0.325*t15016*t28960 + 0.075*t15016*t19751*t28960 - 0.2255*t29378 - 0.1575*t28342*t5833 + 0.075*t16177*t28960*t6828 + 0.355*(t15016*t17329*t28960 - 1.*t16177*t28960*t6828) - 0.0641*(t15016*t16177*t28960 + t17329*t28960*t6828);
  p_output1[5]=0.325*t15016*t29612 + 0.075*t19751*t29641 + 0.075*t16177*t29662 + 0.355*(t17329*t29641 - 1.*t16177*t29662) - 0.0641*(t16177*t29641 + t17329*t29662) - 0.325*t29378*t6828;
  p_output1[6]=0.075*t17329*t29641 + 0.075*t16177*t29825 + 0.355*(-1.*t17329*t29641 - 1.*t16177*t29825) - 0.0641*(-1.*t16177*t29641 + t17329*t29825);
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

#include "J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
