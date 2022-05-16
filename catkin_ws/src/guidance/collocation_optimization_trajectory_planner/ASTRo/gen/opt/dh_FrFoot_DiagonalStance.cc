/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:46 GMT+02:00
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
  double t1684;
  double t387;
  double t5177;
  double t4284;
  double t1846;
  double t1894;
  double t1976;
  double t1982;
  double t2064;
  double t4812;
  double t5197;
  double t5205;
  double t5042;
  double t5222;
  double t5577;
  double t9097;
  double t9864;
  double t10684;
  double t10856;
  double t4527;
  double t4918;
  double t4926;
  double t17541;
  double t18342;
  double t17385;
  double t16357;
  double t16495;
  double t16513;
  double t17245;
  double t18159;
  double t18415;
  double t18497;
  double t19453;
  double t19402;
  double t19439;
  double t19440;
  double t18774;
  double t19454;
  double t19458;
  double t19465;
  double t20297;
  double t21855;
  double t21972;
  double t15360;
  double t15413;
  double t15419;
  double t15646;
  double t15647;
  double t5217;
  double t10894;
  double t12108;
  double t22250;
  double t22370;
  double t22562;
  double t22116;
  double t22155;
  double t22241;
  double t22589;
  double t22792;
  double t22794;
  double t23103;
  double t23142;
  double t23143;
  double t23251;
  double t23253;
  double t23262;
  double t22838;
  double t22857;
  double t22932;
  double t23090;
  double t23221;
  double t23239;
  double t23240;
  double t23241;
  double t23250;
  double t23308;
  double t23309;
  double t23310;
  double t23314;
  double t23382;
  double t23416;
  double t23434;
  double t23435;
  double t23442;
  double t23516;
  double t23526;
  double t17367;
  double t18498;
  double t18525;
  double t24777;
  double t23455;
  double t23456;
  double t23458;
  double t24863;
  double t25337;
  double t25529;
  t1684 = Cos(var1[14]);
  t387 = Sin(var1[14]);
  t5177 = Cos(var1[12]);
  t4284 = Cos(var1[13]);
  t1846 = -1.*t1684;
  t1894 = 1. + t1846;
  t1976 = 0.50321*t1894;
  t1982 = 0.23321*t1684;
  t2064 = t1976 + t1982;
  t4812 = Sin(var1[13]);
  t5197 = -1.*t5177;
  t5205 = 1. + t5197;
  t5042 = Sin(var1[12]);
  t5222 = -1.*t4284;
  t5577 = 1. + t5222;
  t9097 = 0.28121*t5577;
  t9864 = t4284*t2064;
  t10684 = -0.27*t4812*t387;
  t10856 = t9097 + t9864 + t10684;
  t4527 = t4284*t1684;
  t4918 = t4812*t387;
  t4926 = t4527 + t4918;
  t17541 = Cos(var1[5]);
  t18342 = Sin(var1[5]);
  t17385 = Cos(var1[4]);
  t16357 = -1.*t1684*t4812;
  t16495 = t4284*t387;
  t16513 = t16357 + t16495;
  t17245 = Sin(var1[4]);
  t18159 = t5177*t17541*t4926;
  t18415 = -1.*t5042*t4926*t18342;
  t18497 = t18159 + t18415;
  t19453 = Cos(var1[3]);
  t19402 = t17541*t5042*t4926;
  t19439 = t5177*t4926*t18342;
  t19440 = t19402 + t19439;
  t18774 = Sin(var1[3]);
  t19454 = t17385*t16513;
  t19458 = -1.*t17245*t18497;
  t19465 = t19454 + t19458;
  t20297 = t1684*t4812;
  t21855 = -1.*t4284*t387;
  t21972 = t20297 + t21855;
  t15360 = -0.15121*t5205;
  t15413 = -0.15121*t5177;
  t15419 = -0.15121*t5042;
  t15646 = t5042*t10856;
  t15647 = t15360 + t15413 + t15419 + t15646;
  t5217 = 0.15121*t5205;
  t10894 = t5177*t10856;
  t12108 = t5217 + t10894;
  t22250 = t5177*t17541;
  t22370 = -1.*t5042*t18342;
  t22562 = t22250 + t22370;
  t22116 = t17541*t5042*t21972;
  t22155 = t5177*t21972*t18342;
  t22241 = t22116 + t22155;
  t22589 = t17541*t15647;
  t22792 = t12108*t18342;
  t22794 = t22589 + t22792;
  t23103 = t17541*t12108;
  t23142 = -1.*t15647*t18342;
  t23143 = t23103 + t23142;
  t23251 = t5177*t17541*t21972;
  t23253 = -1.*t5042*t21972*t18342;
  t23262 = t23251 + t23253;
  t22838 = -1.*t22562*t22794;
  t22857 = -1.*t17541*t5042;
  t22932 = -1.*t5177*t18342;
  t23090 = t22857 + t22932;
  t23221 = 0.28121*t4812;
  t23239 = -1.*t2064*t4812;
  t23240 = -0.27*t4284*t387;
  t23241 = t23221 + t23239 + t23240;
  t23250 = t22241*t22794;
  t23308 = t4926*t17245;
  t23309 = t17385*t23262;
  t23310 = t23308 + t23309;
  t23314 = t23241*t17245;
  t23382 = t17385*t23143;
  t23416 = t23314 + t23382;
  t23434 = t17385*t23241;
  t23435 = -1.*t17245*t23143;
  t23442 = t23434 + t23435;
  t23516 = -1.*t23241*t4926;
  t23526 = t23241*t16513;
  t17367 = t16513*t17245;
  t18498 = t17385*t18497;
  t18525 = t17367 + t18498;
  t24777 = -1.*t22241*t22794;
  t23455 = t17385*t4926;
  t23456 = -1.*t17245*t23262;
  t23458 = t23455 + t23456;
  t24863 = t19440*t22794;
  t25337 = t22562*t22794;
  t25529 = -1.*t19440*t22794;
  p_output1[0]=t18525*var2[0] + (t19440*t19453 - 1.*t18774*t19465)*var2[1] + (t18774*t19440 + t19453*t19465)*var2[2] + (t23310*(t22838 - 1.*t17385*t23090*t23416 + t17245*t23090*t23442) + t17385*t23090*(t23250 + t23310*t23416 + t23442*t23458))*var2[3] + (t22241*(t22838 - 1.*t23090*t23143) + t22562*(t23250 + t23143*t23262 + t23241*t4926))*var2[4] + t4926*(t12108*t5042 - 1.*t15647*t5177)*var2[5] + (0.28121*t387 - 0.27*t1684*t387 - 1.*t2064*t387)*var2[13];
  p_output1[1]=t17385*t23090*var2[0] + (t19453*t22562 + t17245*t18774*t23090)*var2[1] + (t18774*t22562 - 1.*t17245*t19453*t23090)*var2[2] + (t18525*(-1.*t23310*t23416 - 1.*t23442*t23458 + t24777) + t23310*(t18525*t23416 + t19465*t23442 + t24863))*var2[3] + (t19440*(-1.*t23143*t23262 + t23516 + t24777) + t22241*(t18497*t23143 + t23526 + t24863))*var2[4] + (t16513*(t23516 - 1.*t15647*t21972*t5042 - 1.*t12108*t21972*t5177) + t4926*(t23526 + t15647*t4926*t5042 + t12108*t4926*t5177))*var2[5] + (-0.15121 + t16513*(-1.*t10856*t21972 + t23516) + t4926*(t23526 + t10856*t4926))*var2[12];
  p_output1[2]=t23310*var2[0] + (t19453*t22241 - 1.*t18774*t23458)*var2[1] + (t18774*t22241 + t19453*t23458)*var2[2] + (t18525*(t17385*t23090*t23416 - 1.*t17245*t23090*t23442 + t25337) + t17385*t23090*(-1.*t18525*t23416 - 1.*t19465*t23442 + t25529))*var2[3] + (t19440*(t23090*t23143 + t25337) + t22562*(-1.*t18497*t23143 - 1.*t16513*t23241 + t25529))*var2[4] + t16513*(-1.*t12108*t5042 + t15647*t5177)*var2[5] + (-0.15121*t16513 - 0.15121*t21972)*var2[12] + (0.28121*t1684 - 1.*t1684*t2064 + 0.27*Power(t387,2))*var2[13] - 0.27*var2[14];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
