/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:02 GMT+02:00
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
  double t1841;
  double t1855;
  double t1879;
  double t2011;
  double t2274;
  double t2363;
  double t1840;
  double t2485;
  double t151;
  double t1607;
  double t3119;
  double t3277;
  double t3389;
  double t3463;
  double t3481;
  double t4353;
  double t4356;
  double t4393;
  double t4465;
  double t4466;
  double t4469;
  double t4472;
  double t2428;
  double t2464;
  double t1906;
  double t2348;
  double t3136;
  double t3141;
  double t3890;
  double t4074;
  double t4574;
  double t4600;
  double t4605;
  double t4703;
  double t4606;
  double t4612;
  double t4615;
  double t4616;
  double t4621;
  double t4667;
  double t4676;
  double t4678;
  double t4682;
  double t4692;
  double t4694;
  double t4739;
  double t4771;
  double t4773;
  double t4860;
  double t4879;
  double t4955;
  double t4970;
  double t4979;
  double t5006;
  double t5179;
  double t5181;
  double t5227;
  double t5628;
  double t5902;
  double t5683;
  double t5914;
  double t5947;
  double t6008;
  double t6081;
  double t6393;
  double t6762;
  double t6767;
  double t6827;
  double t6842;
  double t6875;
  double t6924;
  double t6931;
  double t6932;
  double t6934;
  double t7203;
  double t7248;
  double t7249;
  double t7378;
  double t7391;
  double t7396;
  double t7409;
  double t7410;
  double t7414;
  double t7459;
  double t7477;
  double t7478;
  double t7487;
  double t7496;
  double t7504;
  double t7523;
  double t7525;
  double t7535;
  double t4708;
  double t4710;
  double t4715;
  double t7805;
  double t7809;
  double t7812;
  double t7871;
  double t7888;
  double t7677;
  double t8094;
  double t8098;
  double t8117;
  double t8135;
  double t8138;
  double t8155;
  double t8192;
  double t8193;
  double t8195;
  double t8221;
  double t8227;
  double t8230;
  double t8822;
  double t8843;
  double t8850;
  double t9018;
  double t9034;
  double t9044;
  double t9056;
  double t9057;
  double t9121;
  double t9185;
  double t9189;
  double t9190;
  double t9193;
  double t9194;
  double t9195;
  double t9320;
  double t9344;
  double t9345;
  double t9425;
  double t9432;
  double t9219;
  double t9552;
  double t9562;
  double t9572;
  double t9600;
  double t9601;
  double t9603;
  double t9610;
  double t9612;
  double t9633;
  double t9634;
  double t9635;
  t1841 = Cos(var1[12]);
  t1855 = -1.*t1841;
  t1879 = 1. + t1855;
  t2011 = Sin(var1[12]);
  t2274 = -0.15121*t2011;
  t2363 = Sin(var1[4]);
  t1840 = Cos(var1[5]);
  t2485 = Sin(var1[5]);
  t151 = Cos(var1[4]);
  t1607 = Sin(var1[13]);
  t3119 = Cos(var1[13]);
  t3277 = -1.*t1841*t1840*t2363;
  t3389 = t2011*t2363*t2485;
  t3463 = t3277 + t3389;
  t3481 = Cos(var1[14]);
  t4353 = -1.*t151*t1607;
  t4356 = t3119*t3463;
  t4393 = t4353 + t4356;
  t4465 = Sin(var1[14]);
  t4466 = t3119*t151;
  t4469 = t1607*t3463;
  t4472 = t4466 + t4469;
  t2428 = -0.15121*t1879;
  t2464 = t2428 + t2274;
  t1906 = 0.15121*t1879;
  t2348 = t1906 + t2274;
  t3136 = -1.*t3119;
  t3141 = 1. + t3136;
  t3890 = -1.*t3481;
  t4074 = 1. + t3890;
  t4574 = -1.*t151*t1840*t2011;
  t4600 = -1.*t1841*t151*t2485;
  t4605 = t4574 + t4600;
  t4703 = -0.15121*t1841;
  t4606 = 0.28121*t3141*t4605;
  t4612 = 0.50321*t3119*t4074*t4605;
  t4615 = -0.50321*t1607*t4465*t4605;
  t4616 = -1.*t1841*t151*t1840;
  t4621 = t151*t2011*t2485;
  t4667 = t4616 + t4621;
  t4676 = -0.15121*t4667;
  t4678 = t3119*t3481*t4605;
  t4682 = t1607*t4465*t4605;
  t4692 = t4678 + t4682;
  t4694 = 0.19821*t4692;
  t4739 = t1841*t151*t1840;
  t4771 = -1.*t151*t2011*t2485;
  t4773 = t4739 + t4771;
  t4860 = -1.*t1607*t2363;
  t4879 = t3119*t4773;
  t4955 = t4860 + t4879;
  t4970 = -1.*t3119*t2363;
  t4979 = -1.*t1607*t4773;
  t5006 = t4970 + t4979;
  t5179 = t3119*t2363;
  t5181 = t1607*t4773;
  t5227 = t5179 + t5181;
  t5628 = Cos(var1[3]);
  t5902 = Sin(var1[3]);
  t5683 = t5628*t1840*t2363;
  t5914 = -1.*t5902*t2485;
  t5947 = t5683 + t5914;
  t6008 = -1.*t1840*t5902;
  t6081 = -1.*t5628*t2363*t2485;
  t6393 = t6008 + t6081;
  t6762 = t1841*t5947;
  t6767 = t2011*t6393;
  t6827 = t6762 + t6767;
  t6842 = t5628*t151*t1607;
  t6875 = t3119*t6827;
  t6924 = t6842 + t6875;
  t6931 = -1.*t3119*t5628*t151;
  t6932 = t1607*t6827;
  t6934 = t6931 + t6932;
  t7203 = t1841*t151*t1840*t5902;
  t7248 = -1.*t151*t2011*t5902*t2485;
  t7249 = t7203 + t7248;
  t7378 = -1.*t1607*t5902*t2363;
  t7391 = t3119*t7249;
  t7396 = t7378 + t7391;
  t7409 = t3119*t5902*t2363;
  t7410 = t1607*t7249;
  t7414 = t7409 + t7410;
  t7459 = -1.*t1840*t5902*t2363;
  t7477 = -1.*t5628*t2485;
  t7478 = t7459 + t7477;
  t7487 = t5628*t1840;
  t7496 = -1.*t5902*t2363*t2485;
  t7504 = t7487 + t7496;
  t7523 = t2011*t7478;
  t7525 = t1841*t7504;
  t7535 = t7523 + t7525;
  t4708 = 0.15121*t2011;
  t4710 = t4703 + t4708;
  t4715 = t4703 + t2274;
  t7805 = t1840*t5902*t2363;
  t7809 = t5628*t2485;
  t7812 = t7805 + t7809;
  t7871 = -1.*t2011*t7812;
  t7888 = t7871 + t7525;
  t7677 = -1.*t2011*t7504;
  t8094 = t1841*t7812;
  t8098 = t2011*t7504;
  t8117 = t8094 + t8098;
  t8135 = t151*t1607*t5902;
  t8138 = t3119*t8117;
  t8155 = t8135 + t8138;
  t8192 = t3119*t151*t5902;
  t8193 = -1.*t1607*t8117;
  t8195 = t8192 + t8193;
  t8221 = -1.*t3119*t151*t5902;
  t8227 = t1607*t8117;
  t8230 = t8221 + t8227;
  t8822 = -1.*t1841*t5628*t151*t1840;
  t8843 = t5628*t151*t2011*t2485;
  t8850 = t8822 + t8843;
  t9018 = t5628*t1607*t2363;
  t9034 = t3119*t8850;
  t9044 = t9018 + t9034;
  t9056 = -1.*t3119*t5628*t2363;
  t9057 = t1607*t8850;
  t9121 = t9056 + t9057;
  t9185 = t1840*t5902;
  t9189 = t5628*t2363*t2485;
  t9190 = t9185 + t9189;
  t9193 = t2011*t5947;
  t9194 = t1841*t9190;
  t9195 = t9193 + t9194;
  t9320 = -1.*t5628*t1840*t2363;
  t9344 = t5902*t2485;
  t9345 = t9320 + t9344;
  t9425 = -1.*t2011*t9345;
  t9432 = t9425 + t9194;
  t9219 = -1.*t2011*t9190;
  t9552 = t1841*t9345;
  t9562 = t2011*t9190;
  t9572 = t9552 + t9562;
  t9600 = -1.*t5628*t151*t1607;
  t9601 = t3119*t9572;
  t9603 = t9600 + t9601;
  t9610 = -1.*t1607*t9572;
  t9612 = t6931 + t9610;
  t9633 = t3119*t5628*t151;
  t9634 = t1607*t9572;
  t9635 = t9633 + t9634;
  p_output1[0]=1.;
  p_output1[1]=0.28121*t151*t1607 - 1.*t1840*t2348*t2363 + t2363*t2464*t2485 - 0.15121*(t1840*t2011*t2363 + t1841*t2363*t2485) + 0.28121*t3141*t3463 + 0.50321*t4074*t4393 - 0.50321*t4465*t4472 + 0.19821*(t3481*t4393 + t4465*t4472);
  p_output1[2]=-1.*t151*t1840*t2464 - 1.*t151*t2348*t2485 + t4606 + t4612 + t4615 + t4676 + t4694;
  p_output1[3]=t4606 + t4612 + t4615 + t4676 + t4694 + t151*t1840*t4710 - 1.*t151*t2485*t4715;
  p_output1[4]=0.28121*t2363*t3119 + 0.28121*t1607*t4773 - 0.50321*t4465*t4955 + 0.50321*t4074*t5006 + 0.19821*(t4465*t4955 + t3481*t5006);
  p_output1[5]=0.50321*t4465*t4955 - 0.50321*t3481*t5227 + 0.19821*(-1.*t4465*t4955 + t3481*t5227);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-0.28121*t151*t1607*t5628 + t2348*t5947 + t2464*t6393 - 0.15121*(-1.*t2011*t5947 + t1841*t6393) + 0.28121*t3141*t6827 + 0.50321*t4074*t6924 - 0.50321*t4465*t6934 + 0.19821*(t3481*t6924 + t4465*t6934);
  p_output1[9]=t151*t1840*t2348*t5902 + 0.28121*t1607*t2363*t5902 - 1.*t151*t2464*t2485*t5902 - 0.15121*(-1.*t151*t1840*t2011*t5902 - 1.*t151*t1841*t2485*t5902) + 0.28121*t3141*t7249 + 0.50321*t4074*t7396 - 0.50321*t4465*t7414 + 0.19821*(t3481*t7396 + t4465*t7414);
  p_output1[10]=t2464*t7478 + t2348*t7504 + 0.28121*t3141*t7535 + 0.50321*t3119*t4074*t7535 - 0.50321*t1607*t4465*t7535 + 0.19821*(t3119*t3481*t7535 + t1607*t4465*t7535) - 0.15121*(t1841*t7478 + t7677);
  p_output1[11]=t4715*t7504 + t4710*t7812 - 0.15121*(t7677 - 1.*t1841*t7812) + 0.28121*t3141*t7888 + 0.50321*t3119*t4074*t7888 - 0.50321*t1607*t4465*t7888 + 0.19821*(t3119*t3481*t7888 + t1607*t4465*t7888);
  p_output1[12]=-0.28121*t151*t3119*t5902 + 0.28121*t1607*t8117 - 0.50321*t4465*t8155 + 0.50321*t4074*t8195 + 0.19821*(t4465*t8155 + t3481*t8195);
  p_output1[13]=0.50321*t4465*t8155 - 0.50321*t3481*t8230 + 0.19821*(-1.*t4465*t8155 + t3481*t8230);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.28121*t151*t1607*t5902 + t2464*t7504 + t2348*t7812 - 0.15121*t7888 + 0.28121*t3141*t8117 + 0.50321*t4074*t8155 - 0.50321*t4465*t8230 + 0.19821*(t3481*t8155 + t4465*t8230);
  p_output1[17]=-1.*t151*t1840*t2348*t5628 - 0.28121*t1607*t2363*t5628 + t151*t2464*t2485*t5628 - 0.15121*(t151*t1840*t2011*t5628 + t151*t1841*t2485*t5628) + 0.28121*t3141*t8850 + 0.50321*t4074*t9044 - 0.50321*t4465*t9121 + 0.19821*(t3481*t9044 + t4465*t9121);
  p_output1[18]=t2464*t5947 + t2348*t9190 + 0.28121*t3141*t9195 + 0.50321*t3119*t4074*t9195 - 0.50321*t1607*t4465*t9195 + 0.19821*(t3119*t3481*t9195 + t1607*t4465*t9195) - 0.15121*(t6762 + t9219);
  p_output1[19]=t4715*t9190 + t4710*t9345 - 0.15121*(t9219 - 1.*t1841*t9345) + 0.28121*t3141*t9432 + 0.50321*t3119*t4074*t9432 - 0.50321*t1607*t4465*t9432 + 0.19821*(t3119*t3481*t9432 + t1607*t4465*t9432);
  p_output1[20]=0.28121*t151*t3119*t5628 + 0.28121*t1607*t9572 - 0.50321*t4465*t9603 + 0.50321*t4074*t9612 + 0.19821*(t4465*t9603 + t3481*t9612);
  p_output1[21]=0.50321*t4465*t9603 - 0.50321*t3481*t9635 + 0.19821*(-1.*t4465*t9603 + t3481*t9635);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
