/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:40 GMT+02:00
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
  double t3157;
  double t3233;
  double t3359;
  double t3419;
  double t3483;
  double t3493;
  double t3219;
  double t3754;
  double t3598;
  double t3636;
  double t3841;
  double t3861;
  double t3862;
  double t3877;
  double t3896;
  double t3912;
  double t3913;
  double t3915;
  double t3921;
  double t3927;
  double t3947;
  double t3949;
  double t3473;
  double t3512;
  double t4109;
  double t3657;
  double t3704;
  double t4125;
  double t4124;
  double t4140;
  double t4154;
  double t4176;
  double t4177;
  double t4178;
  double t3847;
  double t3860;
  double t3897;
  double t3903;
  double t4197;
  double t4198;
  double t4203;
  double t4275;
  double t4276;
  double t4281;
  double t4293;
  double t4294;
  double t4299;
  double t4440;
  double t4449;
  double t4453;
  double t4458;
  double t4488;
  double t4489;
  double t4513;
  double t4514;
  double t4515;
  double t4517;
  double t4518;
  double t4519;
  double t4530;
  double t4532;
  double t4533;
  t3157 = Cos(var1[4]);
  t3233 = Cos(var1[12]);
  t3359 = -1.*t3233;
  t3419 = 1. + t3359;
  t3483 = Sin(var1[12]);
  t3493 = -0.15121*t3483;
  t3219 = Cos(var1[5]);
  t3754 = Sin(var1[5]);
  t3598 = Sin(var1[13]);
  t3636 = Sin(var1[4]);
  t3841 = Cos(var1[13]);
  t3861 = t3233*t3157*t3219;
  t3862 = -1.*t3157*t3483*t3754;
  t3877 = t3861 + t3862;
  t3896 = Cos(var1[14]);
  t3912 = -1.*t3598*t3636;
  t3913 = t3841*t3877;
  t3915 = t3912 + t3913;
  t3921 = Sin(var1[14]);
  t3927 = t3841*t3636;
  t3947 = t3598*t3877;
  t3949 = t3927 + t3947;
  t3473 = 0.15121*t3419;
  t3512 = t3473 + t3493;
  t4109 = Sin(var1[3]);
  t3657 = -0.15121*t3419;
  t3704 = t3657 + t3493;
  t4125 = Cos(var1[3]);
  t4124 = t3219*t4109*t3636;
  t4140 = t4125*t3754;
  t4154 = t4124 + t4140;
  t4176 = t4125*t3219;
  t4177 = -1.*t4109*t3636*t3754;
  t4178 = t4176 + t4177;
  t3847 = -1.*t3841;
  t3860 = 1. + t3847;
  t3897 = -1.*t3896;
  t3903 = 1. + t3897;
  t4197 = t3233*t4154;
  t4198 = t3483*t4178;
  t4203 = t4197 + t4198;
  t4275 = t3157*t3598*t4109;
  t4276 = t3841*t4203;
  t4281 = t4275 + t4276;
  t4293 = -1.*t3841*t3157*t4109;
  t4294 = t3598*t4203;
  t4299 = t4293 + t4294;
  t4440 = -1.*t4125*t3219*t3636;
  t4449 = t4109*t3754;
  t4453 = t4440 + t4449;
  t4458 = t3219*t4109;
  t4488 = t4125*t3636*t3754;
  t4489 = t4458 + t4488;
  t4513 = t3233*t4453;
  t4514 = t3483*t4489;
  t4515 = t4513 + t4514;
  t4517 = -1.*t4125*t3157*t3598;
  t4518 = t3841*t4515;
  t4519 = t4517 + t4518;
  t4530 = t3841*t4125*t3157;
  t4532 = t3598*t4515;
  t4533 = t4530 + t4532;
  p_output1[0]=t3157*t3219*t3512 + 0.28121*t3598*t3636 - 1.*t3157*t3704*t3754 - 0.15121*(-1.*t3157*t3219*t3483 - 1.*t3157*t3233*t3754) + 0.28121*t3860*t3877 + 0.50321*t3903*t3915 - 0.50321*t3921*t3949 + 0.19821*(t3896*t3915 + t3921*t3949) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t3157*t3598*t4109 + t3512*t4154 + t3704*t4178 - 0.15121*(-1.*t3483*t4154 + t3233*t4178) + 0.28121*t3860*t4203 + 0.50321*t3903*t4281 - 0.50321*t3921*t4299 + 0.19821*(t3896*t4281 + t3921*t4299) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t3157*t3598*t4125 + t3512*t4453 + t3704*t4489 - 0.15121*(-1.*t3483*t4453 + t3233*t4489) + 0.28121*t3860*t4515 + 0.50321*t3903*t4519 - 0.50321*t3921*t4533 + 0.19821*(t3896*t4519 + t3921*t4533) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
