/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:15 GMT+02:00
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
  double t549;
  double t2788;
  double t930;
  double t5274;
  double t5411;
  double t4322;
  double t5415;
  double t2022;
  double t5632;
  double t5744;
  double t5772;
  double t3323;
  double t5551;
  double t8073;
  double t8333;
  double t8483;
  double t2771;
  double t3362;
  double t3728;
  double t13114;
  double t11957;
  double t5397;
  double t5429;
  double t5545;
  double t5786;
  double t5808;
  double t6901;
  double t8650;
  double t10062;
  double t10081;
  double t13200;
  double t14791;
  double t14946;
  double t15238;
  double t15844;
  double t16052;
  double t16059;
  double t16067;
  double t16068;
  double t16208;
  double t18990;
  double t19009;
  double t19557;
  double t19584;
  double t19708;
  double t5564;
  double t7520;
  double t7809;
  double t20494;
  double t20513;
  double t20514;
  double t20598;
  double t20600;
  double t20604;
  double t20614;
  double t20628;
  double t20630;
  double t20632;
  double t20698;
  double t21436;
  double t21523;
  double t21672;
  double t21907;
  double t22099;
  double t20569;
  double t20596;
  double t21748;
  double t21858;
  double t22464;
  double t22514;
  double t22766;
  double t22770;
  double t22787;
  double t22788;
  double t22789;
  double t21881;
  double t22251;
  double t22393;
  double t22771;
  double t22797;
  double t22822;
  double t22862;
  double t22895;
  double t22896;
  double t8045;
  double t10278;
  double t10298;
  double t22454;
  double t22929;
  double t23043;
  double t23145;
  double t23336;
  double t23362;
  double t24396;
  double t24474;
  t549 = Cos(var1[4]);
  t2788 = Cos(var1[15]);
  t930 = Cos(var1[5]);
  t5274 = Cos(var1[17]);
  t5411 = Sin(var1[16]);
  t4322 = Cos(var1[16]);
  t5415 = Sin(var1[17]);
  t2022 = Sin(var1[15]);
  t5632 = -1.*t5274*t5411;
  t5744 = t4322*t5415;
  t5772 = t5632 + t5744;
  t3323 = Sin(var1[5]);
  t5551 = Sin(var1[4]);
  t8073 = -1.*t4322*t5274;
  t8333 = -1.*t5411*t5415;
  t8483 = t8073 + t8333;
  t2771 = t930*t2022;
  t3362 = t2788*t3323;
  t3728 = t2771 + t3362;
  t13114 = Cos(var1[3]);
  t11957 = Sin(var1[3]);
  t5397 = t4322*t5274;
  t5429 = t5411*t5415;
  t5545 = t5397 + t5429;
  t5786 = t2788*t930*t5772;
  t5808 = -1.*t2022*t5772*t3323;
  t6901 = t5786 + t5808;
  t8650 = t2788*t930*t8483;
  t10062 = -1.*t2022*t8483*t3323;
  t10081 = t8650 + t10062;
  t13200 = -1.*t2788*t930;
  t14791 = t2022*t3323;
  t14946 = t13200 + t14791;
  t15238 = t930*t2022*t5772;
  t15844 = t2788*t5772*t3323;
  t16052 = t15238 + t15844;
  t16059 = t549*t5545;
  t16067 = -1.*t5551*t6901;
  t16068 = t16059 + t16067;
  t16208 = t930*t2022*t8483;
  t18990 = t2788*t8483*t3323;
  t19009 = t16208 + t18990;
  t19557 = t549*t5772;
  t19584 = -1.*t5551*t10081;
  t19708 = t19557 + t19584;
  t5564 = t5545*t5551;
  t7520 = t549*t6901;
  t7809 = t5564 + t7520;
  t20494 = -1.*t2788;
  t20513 = 1. + t20494;
  t20514 = -0.15121*t20513;
  t20598 = -1.*t4322;
  t20600 = 1. + t20598;
  t20604 = -0.28121*t20600;
  t20614 = -1.*t5274;
  t20628 = 1. + t20614;
  t20630 = -0.50321*t20628;
  t20632 = -0.23321*t5274;
  t20698 = t20630 + t20632;
  t21436 = t4322*t20698;
  t21523 = 0.27*t5411*t5415;
  t21672 = t20604 + t21436 + t21523;
  t21907 = t2788*t21672;
  t22099 = t20514 + t21907;
  t20569 = -0.15121*t2788;
  t20596 = 0.15121*t2022;
  t21748 = t2022*t21672;
  t21858 = t20514 + t20569 + t20596 + t21748;
  t22464 = 0.28121*t5411;
  t22514 = t20698*t5411;
  t22766 = -0.27*t4322*t5415;
  t22770 = t22464 + t22514 + t22766;
  t22787 = t930*t22099;
  t22788 = -1.*t21858*t3323;
  t22789 = t22787 + t22788;
  t21881 = t930*t21858;
  t22251 = t22099*t3323;
  t22393 = t21881 + t22251;
  t22771 = t22770*t5551;
  t22797 = t549*t22789;
  t22822 = t22771 + t22797;
  t22862 = t549*t22770;
  t22895 = -1.*t5551*t22789;
  t22896 = t22862 + t22895;
  t8045 = t5772*t5551;
  t10278 = t549*t10081;
  t10298 = t8045 + t10278;
  t22454 = -1.*t14946*t22393;
  t22929 = t16052*t22393;
  t23043 = t14946*t22393;
  t23145 = -1.*t19009*t22393;
  t23336 = -1.*t16052*t22393;
  t23362 = t19009*t22393;
  t24396 = -1.*t22770*t5545;
  t24474 = t22770*t5772;
  p_output1[0]=t10298*var2[0] + t3728*t549*var2[1] + t7809*var2[2];
  p_output1[1]=(t13114*t19009 - 1.*t11957*t19708)*var2[0] + (t13114*t14946 + t11957*t3728*t5551)*var2[1] + (t13114*t16052 - 1.*t11957*t16068)*var2[2];
  p_output1[2]=(t11957*t19009 + t13114*t19708)*var2[0] + (t11957*t14946 - 1.*t13114*t3728*t5551)*var2[1] + (t11957*t16052 + t13114*t16068)*var2[2];
  p_output1[3]=((t22454 - 1.*t22822*t3728*t549 + t22896*t3728*t5551)*t7809 + t3728*t549*(t16068*t22896 + t22929 + t22822*t7809))*var2[0] + ((t10298*t22822 + t19708*t22896 + t23362)*t7809 + t10298*(-1.*t16068*t22896 + t23336 - 1.*t22822*t7809))*var2[1] + ((-1.*t10298*t22822 - 1.*t19708*t22896 + t23145)*t3728*t549 + t10298*(t23043 + t22822*t3728*t549 - 1.*t22896*t3728*t5551))*var2[2];
  p_output1[4]=(t16052*(t22454 - 1.*t22789*t3728) + t14946*(t22929 + t22770*t5545 + t22789*t6901))*var2[0] + (t16052*(t10081*t22789 + t23362 + t24474) + t19009*(t23336 + t24396 - 1.*t22789*t6901))*var2[1] + (t19009*(t23043 + t22789*t3728) + t14946*(-1.*t10081*t22789 + t23145 - 1.*t22770*t5772))*var2[2];
  p_output1[5]=(-1.*t2022*t22099 + t21858*t2788)*t5545*var2[0] + (t5772*(t24396 - 1.*t2022*t21858*t5772 - 1.*t22099*t2788*t5772) + t5545*(t24474 + t2022*t21858*t8483 + t22099*t2788*t8483))*var2[1] + (t2022*t22099 - 1.*t21858*t2788)*t5772*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t5545 - 0.15121*t8483)*var2[0] + (-0.15121 + t5772*(t24396 - 1.*t21672*t5772) + t5545*(t24474 + t21672*t8483))*var2[1];
  p_output1[16]=(0.28121*t5415 + t20698*t5415 - 0.27*t5274*t5415)*var2[0] + (0.28121*t5274 + t20698*t5274 + 0.27*Power(t5415,2))*var2[2];
  p_output1[17]=-0.27*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
