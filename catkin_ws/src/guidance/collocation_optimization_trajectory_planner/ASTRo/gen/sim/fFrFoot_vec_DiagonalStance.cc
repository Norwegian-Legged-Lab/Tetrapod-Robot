/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:59 GMT+02:00
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
  double t102;
  double t7152;
  double t3081;
  double t8327;
  double t8405;
  double t7310;
  double t8419;
  double t6983;
  double t8479;
  double t8480;
  double t8482;
  double t7250;
  double t8465;
  double t8396;
  double t8453;
  double t8464;
  double t7118;
  double t7252;
  double t7261;
  double t8835;
  double t8800;
  double t8483;
  double t8493;
  double t8495;
  double t8554;
  double t8581;
  double t8620;
  double t8627;
  double t8631;
  double t8681;
  double t8844;
  double t8852;
  double t8873;
  double t8945;
  double t8968;
  double t8972;
  double t8976;
  double t8983;
  double t8994;
  double t9018;
  double t9019;
  double t9024;
  double t9036;
  double t9040;
  double t9048;
  double t8474;
  double t8502;
  double t8507;
  double t9276;
  double t9284;
  double t9326;
  double t9331;
  double t9341;
  double t9347;
  double t9348;
  double t9355;
  double t9360;
  double t9366;
  double t9369;
  double t9377;
  double t9379;
  double t9385;
  double t9387;
  double t9392;
  double t9314;
  double t9322;
  double t9323;
  double t9380;
  double t9383;
  double t9403;
  double t9406;
  double t9418;
  double t9419;
  double t9434;
  double t9461;
  double t9466;
  double t9384;
  double t9397;
  double t9399;
  double t9429;
  double t9469;
  double t9471;
  double t9479;
  double t9487;
  double t9489;
  double t8626;
  double t8712;
  double t8740;
  double t9400;
  double t9523;
  double t9592;
  double t9641;
  double t9663;
  double t9740;
  double t10003;
  double t10075;
  t102 = Cos(var1[4]);
  t7152 = Cos(var1[12]);
  t3081 = Cos(var1[5]);
  t8327 = Cos(var1[14]);
  t8405 = Sin(var1[13]);
  t7310 = Cos(var1[13]);
  t8419 = Sin(var1[14]);
  t6983 = Sin(var1[12]);
  t8479 = t8327*t8405;
  t8480 = -1.*t7310*t8419;
  t8482 = t8479 + t8480;
  t7250 = Sin(var1[5]);
  t8465 = Sin(var1[4]);
  t8396 = t7310*t8327;
  t8453 = t8405*t8419;
  t8464 = t8396 + t8453;
  t7118 = -1.*t3081*t6983;
  t7252 = -1.*t7152*t7250;
  t7261 = t7118 + t7252;
  t8835 = Cos(var1[3]);
  t8800 = Sin(var1[3]);
  t8483 = t7152*t3081*t8482;
  t8493 = -1.*t6983*t8482*t7250;
  t8495 = t8483 + t8493;
  t8554 = -1.*t8327*t8405;
  t8581 = t7310*t8419;
  t8620 = t8554 + t8581;
  t8627 = t7152*t3081*t8464;
  t8631 = -1.*t6983*t8464*t7250;
  t8681 = t8627 + t8631;
  t8844 = t7152*t3081;
  t8852 = -1.*t6983*t7250;
  t8873 = t8844 + t8852;
  t8945 = t3081*t6983*t8482;
  t8968 = t7152*t8482*t7250;
  t8972 = t8945 + t8968;
  t8976 = t102*t8464;
  t8983 = -1.*t8465*t8495;
  t8994 = t8976 + t8983;
  t9018 = t3081*t6983*t8464;
  t9019 = t7152*t8464*t7250;
  t9024 = t9018 + t9019;
  t9036 = t102*t8620;
  t9040 = -1.*t8465*t8681;
  t9048 = t9036 + t9040;
  t8474 = t8464*t8465;
  t8502 = t102*t8495;
  t8507 = t8474 + t8502;
  t9276 = -1.*t7152;
  t9284 = 1. + t9276;
  t9326 = -1.*t7310;
  t9331 = 1. + t9326;
  t9341 = 0.28121*t9331;
  t9347 = -1.*t8327;
  t9348 = 1. + t9347;
  t9355 = 0.50321*t9348;
  t9360 = 0.19821*t8327;
  t9366 = t9355 + t9360;
  t9369 = t7310*t9366;
  t9377 = -0.305*t8405*t8419;
  t9379 = t9341 + t9369 + t9377;
  t9385 = 0.15121*t9284;
  t9387 = t7152*t9379;
  t9392 = t9385 + t9387;
  t9314 = -0.15121*t9284;
  t9322 = -0.15121*t7152;
  t9323 = -0.15121*t6983;
  t9380 = t6983*t9379;
  t9383 = t9314 + t9322 + t9323 + t9380;
  t9403 = 0.28121*t8405;
  t9406 = -1.*t9366*t8405;
  t9418 = -0.305*t7310*t8419;
  t9419 = t9403 + t9406 + t9418;
  t9434 = t3081*t9392;
  t9461 = -1.*t9383*t7250;
  t9466 = t9434 + t9461;
  t9384 = t3081*t9383;
  t9397 = t9392*t7250;
  t9399 = t9384 + t9397;
  t9429 = t9419*t8465;
  t9469 = t102*t9466;
  t9471 = t9429 + t9469;
  t9479 = t102*t9419;
  t9487 = -1.*t8465*t9466;
  t9489 = t9479 + t9487;
  t8626 = t8620*t8465;
  t8712 = t102*t8681;
  t8740 = t8626 + t8712;
  t9400 = -1.*t8873*t9399;
  t9523 = t8972*t9399;
  t9592 = t8873*t9399;
  t9641 = -1.*t9024*t9399;
  t9663 = -1.*t8972*t9399;
  t9740 = t9024*t9399;
  t10003 = -1.*t9419*t8464;
  t10075 = t9419*t8620;
  p_output1[0]=t8740*var2[0] + t102*t7261*var2[1] + t8507*var2[2];
  p_output1[1]=(t8835*t9024 - 1.*t8800*t9048)*var2[0] + (t7261*t8465*t8800 + t8835*t8873)*var2[1] + (t8835*t8972 - 1.*t8800*t8994)*var2[2];
  p_output1[2]=(t8800*t9024 + t8835*t9048)*var2[0] + (-1.*t7261*t8465*t8835 + t8800*t8873)*var2[1] + (t8800*t8972 + t8835*t8994)*var2[2];
  p_output1[3]=(t8507*(t9400 - 1.*t102*t7261*t9471 + t7261*t8465*t9489) + t102*t7261*(t8507*t9471 + t8994*t9489 + t9523))*var2[0] + (t8740*(-1.*t8507*t9471 - 1.*t8994*t9489 + t9663) + t8507*(t8740*t9471 + t9048*t9489 + t9740))*var2[1] + (t8740*(t102*t7261*t9471 - 1.*t7261*t8465*t9489 + t9592) + t102*t7261*(-1.*t8740*t9471 - 1.*t9048*t9489 + t9641))*var2[2];
  p_output1[4]=(t8972*(t9400 - 1.*t7261*t9466) + t8873*(t8464*t9419 + t8495*t9466 + t9523))*var2[0] + (t9024*(t10003 - 1.*t8495*t9466 + t9663) + t8972*(t10075 + t8681*t9466 + t9740))*var2[1] + (t9024*(t7261*t9466 + t9592) + t8873*(-1.*t8620*t9419 - 1.*t8681*t9466 + t9641))*var2[2];
  p_output1[5]=t8464*(-1.*t7152*t9383 + t6983*t9392)*var2[0] + (t8464*(t10075 + t6983*t8464*t9383 + t7152*t8464*t9392) + t8620*(t10003 - 1.*t6983*t8482*t9383 - 1.*t7152*t8482*t9392))*var2[1] + t8620*(t7152*t9383 - 1.*t6983*t9392)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t8464*(t10075 + t8464*t9379) + t8620*(t10003 - 1.*t8482*t9379))*var2[1] + (-0.15121*t8482 - 0.15121*t8620)*var2[2];
  p_output1[13]=(0.28121*t8419 - 0.305*t8327*t8419 - 1.*t8419*t9366)*var2[0] + (0.28121*t8327 + 0.305*Power(t8419,2) - 1.*t8327*t9366)*var2[2];
  p_output1[14]=-0.305*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
