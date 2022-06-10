/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:19 GMT+02:00
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
  double t2216;
  double t2246;
  double t2164;
  double t2218;
  double t2249;
  double t3451;
  double t3455;
  double t3470;
  double t3483;
  double t3486;
  double t3488;
  double t3499;
  double t3562;
  double t3575;
  double t3577;
  double t3530;
  double t3996;
  double t4000;
  double t3517;
  double t3622;
  double t3628;
  double t3804;
  double t3817;
  double t3851;
  double t3860;
  double t3862;
  double t3866;
  double t4008;
  double t4009;
  double t4020;
  double t4053;
  double t4146;
  double t4147;
  double t4152;
  double t4156;
  double t4160;
  double t4242;
  double t4244;
  double t4257;
  double t4283;
  double t4284;
  double t4289;
  double t4498;
  double t4503;
  double t4504;
  double t4507;
  double t4525;
  double t4616;
  double t4625;
  double t4667;
  double t4672;
  double t4496;
  double t4506;
  double t4685;
  double t4686;
  double t2230;
  double t3272;
  double t3303;
  double t4473;
  double t4474;
  double t4479;
  double t4493;
  double t4688;
  double t4696;
  double t4697;
  double t4699;
  double t4714;
  double t4715;
  double t4717;
  double t4723;
  double t4730;
  double t4741;
  double t4747;
  double t4758;
  double t4763;
  double t4764;
  double t3509;
  double t3669;
  double t3700;
  double t5166;
  double t5172;
  double t5176;
  double t4781;
  double t4782;
  double t5143;
  double t4748;
  double t4766;
  double t4769;
  double t3752;
  double t3869;
  double t3920;
  double t5181;
  double t5226;
  double t5283;
  double t5307;
  double t5473;
  double t5505;
  double t5912;
  double t5919;
  double t5559;
  double t5687;
  double t5863;
  double t5737;
  double t6090;
  double t6066;
  t2216 = Cos(var1[6]);
  t2246 = Sin(var1[4]);
  t2164 = Cos(var1[4]);
  t2218 = Sin(var1[5]);
  t2249 = Sin(var1[6]);
  t3451 = Cos(var1[8]);
  t3455 = Sin(var1[7]);
  t3470 = t3451*t3455;
  t3483 = Cos(var1[7]);
  t3486 = Sin(var1[8]);
  t3488 = -1.*t3483*t3486;
  t3499 = t3470 + t3488;
  t3562 = t3483*t3451;
  t3575 = t3455*t3486;
  t3577 = t3562 + t3575;
  t3530 = Cos(var1[5]);
  t3996 = Cos(var1[3]);
  t4000 = Sin(var1[3]);
  t3517 = t2218*t2249*t3499;
  t3622 = t3530*t3577;
  t3628 = t3517 + t3622;
  t3804 = -1.*t3451*t3455;
  t3817 = t3483*t3486;
  t3851 = t3804 + t3817;
  t3860 = t3530*t3851;
  t3862 = t2218*t2249*t3577;
  t3866 = t3860 + t3862;
  t4008 = t2216*t2246*t2218;
  t4009 = t2164*t2249;
  t4020 = t4008 + t4009;
  t4053 = -1.*t3530*t2249*t3499;
  t4146 = t2218*t3577;
  t4147 = t4053 + t4146;
  t4152 = t2164*t2216*t3499;
  t4156 = -1.*t2246*t3628;
  t4160 = t4152 + t4156;
  t4242 = t2218*t3851;
  t4244 = -1.*t3530*t2249*t3577;
  t4257 = t4242 + t4244;
  t4283 = t2164*t2216*t3577;
  t4284 = -1.*t2246*t3866;
  t4289 = t4283 + t4284;
  t4498 = -0.0641*t3451;
  t4503 = -0.28*t3486;
  t4504 = t4498 + t4503;
  t4507 = -1.*t3451;
  t4525 = 1. + t4507;
  t4616 = 0.075*t4525;
  t4625 = 0.355*t3451;
  t4667 = -0.0641*t3486;
  t4672 = t4616 + t4625 + t4667;
  t4496 = -0.325*t3455;
  t4506 = t3483*t4504;
  t4685 = t3455*t4672;
  t4686 = t4496 + t4506 + t4685;
  t2230 = -1.*t2164*t2216*t2218;
  t3272 = t2246*t2249;
  t3303 = t2230 + t3272;
  t4473 = -1.*t2216;
  t4474 = 1. + t4473;
  t4479 = 0.1575*t4474;
  t4493 = 0.2255*t2216;
  t4688 = -1.*t2249*t4686;
  t4696 = t4479 + t4493 + t4688;
  t4697 = -1.*t2218*t4696;
  t4699 = -1.*t3483;
  t4714 = 1. + t4699;
  t4715 = 0.325*t4714;
  t4717 = -1.*t3455*t4504;
  t4723 = t3483*t4672;
  t4730 = t4715 + t4717 + t4723;
  t4741 = t3530*t4730;
  t4747 = t4697 + t4741;
  t4758 = 0.068*t2249;
  t4763 = t2216*t4686;
  t4764 = t4758 + t4763;
  t3509 = t2216*t2246*t3499;
  t3669 = t2164*t3628;
  t3700 = t3509 + t3669;
  t5166 = t3530*t4696;
  t5172 = t2218*t4730;
  t5176 = t5166 + t5172;
  t4781 = t2164*t4747;
  t4782 = t2246*t4764;
  t5143 = t4781 + t4782;
  t4748 = -1.*t2246*t4747;
  t4766 = t2164*t4764;
  t4769 = t4748 + t4766;
  t3752 = t2216*t2246*t3577;
  t3869 = t2164*t3866;
  t3920 = t3752 + t3869;
  t5181 = t3530*t2216*t5176;
  t5226 = -1.*t5176*t4147;
  t5283 = t5176*t4147;
  t5307 = -1.*t5176*t4257;
  t5473 = -1.*t3530*t2216*t5176;
  t5505 = t5176*t4257;
  t5912 = -1.*t2249*t4764;
  t5919 = t2216*t4764*t3577;
  t5559 = t2249*t4764;
  t5687 = -1.*t2216*t4764*t3499;
  t5863 = -1.*t2216*t4764*t3577;
  t5737 = t2216*t4764*t3499;
  t6090 = t4730*t3577;
  t6066 = -1.*t4730*t3851;
  p_output1[0]=t3700*var2[0] + t3303*var2[1] + t3920*var2[2];
  p_output1[1]=(t3996*t4147 - 1.*t4000*t4160)*var2[0] + (t2216*t3530*t3996 - 1.*t4000*t4020)*var2[1] + (t3996*t4257 - 1.*t4000*t4289)*var2[2];
  p_output1[2]=(t4000*t4147 + t3996*t4160)*var2[0] + (t2216*t3530*t4000 + t3996*t4020)*var2[1] + (t4000*t4257 + t3996*t4289)*var2[2];
  p_output1[3]=(t3920*(-1.*t4020*t4769 - 1.*t3303*t5143 + t5473) + t3303*(t4289*t4769 + t3920*t5143 + t5505))*var2[0] + (t3920*(t4160*t4769 + t3700*t5143 + t5283) + t3700*(-1.*t4289*t4769 - 1.*t3920*t5143 + t5307))*var2[1] + (t3700*(t4020*t4769 + t3303*t5143 + t5181) + t3303*(-1.*t4160*t4769 - 1.*t3700*t5143 + t5226))*var2[2];
  p_output1[4]=(t4257*(t2216*t2218*t4747 + t5473 + t5912) + t2216*t3530*(t3866*t4747 + t5505 + t5919))*var2[0] + (t4257*(t3628*t4747 + t5283 + t5737) + t4147*(-1.*t3866*t4747 + t5307 + t5863))*var2[1] + (t4147*(-1.*t2216*t2218*t4747 + t5181 + t5559) + t2216*t3530*(-1.*t3628*t4747 + t5226 + t5687))*var2[2];
  p_output1[5]=(t2216*t3577*(-1.*t2216*t4696 + t5912) + t2249*(-1.*t2249*t3577*t4696 + t3851*t4730 + t5919))*var2[0] + (t2216*t3499*(t2249*t3577*t4696 + t5863 + t6066) + t2216*t3577*(-1.*t2249*t3499*t4696 + t5737 + t6090))*var2[1] + (t2216*t3499*(t2216*t4696 + t5559) + t2249*(t2249*t3499*t4696 - 1.*t3577*t4730 + t5687))*var2[2];
  p_output1[6]=(-0.1575*t3499 - 0.2255*t3851)*var2[0] + (t3577*(-1.*t3577*t4686 + t6066) + t3851*(t3499*t4686 + t6090))*var2[1] + 0.068*t3577*var2[2];
  p_output1[7]=(0.325*t3486 - 1.*t3451*t4504 - 1.*t3486*t4672)*var2[0] + (-0.325*t3451 - 1.*t3486*t4504 + t3451*t4672)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
