/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:08 GMT+02:00
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
  double t2976;
  double t2179;
  double t3120;
  double t3305;
  double t3243;
  double t3245;
  double t3323;
  double t1957;
  double t3252;
  double t3326;
  double t3335;
  double t3138;
  double t3359;
  double t3361;
  double t3365;
  double t3356;
  double t4376;
  double t4478;
  double t3368;
  double t3406;
  double t3436;
  double t3642;
  double t4078;
  double t4091;
  double t4129;
  double t4135;
  double t4151;
  double t4496;
  double t4506;
  double t4508;
  double t4564;
  double t4597;
  double t4615;
  double t4642;
  double t4647;
  double t4649;
  double t4669;
  double t4672;
  double t4690;
  double t4732;
  double t4791;
  double t4832;
  double t3337;
  double t3584;
  double t3585;
  double t5411;
  double t5449;
  double t5474;
  double t5753;
  double t5771;
  double t5779;
  double t5781;
  double t5826;
  double t5832;
  double t2893;
  double t3140;
  double t3208;
  double t5395;
  double t5495;
  double t5840;
  double t5842;
  double t5885;
  double t5955;
  double t5961;
  double t5963;
  double t5971;
  double t6423;
  double t5364;
  double t5370;
  double t5378;
  double t5384;
  double t5867;
  double t5875;
  double t6495;
  double t6566;
  double t6668;
  double t6694;
  double t6695;
  double t6709;
  double t5876;
  double t6430;
  double t6436;
  double t6693;
  double t6761;
  double t6762;
  double t6765;
  double t6767;
  double t6770;
  double t3597;
  double t4176;
  double t4186;
  double t6437;
  double t6806;
  double t6814;
  double t6827;
  double t6849;
  double t6862;
  double t6974;
  double t7025;
  double t6882;
  double t6891;
  double t6940;
  double t6925;
  double t7401;
  double t7351;
  t2976 = Cos(var1[12]);
  t2179 = Sin(var1[4]);
  t3120 = Cos(var1[4]);
  t3305 = Cos(var1[13]);
  t3243 = Cos(var1[14]);
  t3245 = Sin(var1[13]);
  t3323 = Sin(var1[14]);
  t1957 = Sin(var1[12]);
  t3252 = t3243*t3245;
  t3326 = -1.*t3305*t3323;
  t3335 = t3252 + t3326;
  t3138 = Sin(var1[5]);
  t3359 = t3305*t3243;
  t3361 = t3245*t3323;
  t3365 = t3359 + t3361;
  t3356 = Cos(var1[5]);
  t4376 = Cos(var1[3]);
  t4478 = Sin(var1[3]);
  t3368 = t3356*t3365;
  t3406 = t1957*t3335*t3138;
  t3436 = t3368 + t3406;
  t3642 = -1.*t3243*t3245;
  t4078 = t3305*t3323;
  t4091 = t3642 + t4078;
  t4129 = t3356*t4091;
  t4135 = t1957*t3365*t3138;
  t4151 = t4129 + t4135;
  t4496 = t3120*t1957;
  t4506 = t2976*t2179*t3138;
  t4508 = t4496 + t4506;
  t4564 = -1.*t3356*t1957*t3335;
  t4597 = t3365*t3138;
  t4615 = t4564 + t4597;
  t4642 = t2976*t3120*t3335;
  t4647 = -1.*t2179*t3436;
  t4649 = t4642 + t4647;
  t4669 = -1.*t3356*t1957*t3365;
  t4672 = t4091*t3138;
  t4690 = t4669 + t4672;
  t4732 = t2976*t3120*t3365;
  t4791 = -1.*t2179*t4151;
  t4832 = t4732 + t4791;
  t3337 = t2976*t3335*t2179;
  t3584 = t3120*t3436;
  t3585 = t3337 + t3584;
  t5411 = -0.0641*t3243;
  t5449 = -0.28*t3323;
  t5474 = t5411 + t5449;
  t5753 = -1.*t3243;
  t5771 = 1. + t5753;
  t5779 = 0.075*t5771;
  t5781 = 0.355*t3243;
  t5826 = -0.0641*t3323;
  t5832 = t5779 + t5781 + t5826;
  t2893 = t1957*t2179;
  t3140 = -1.*t2976*t3120*t3138;
  t3208 = t2893 + t3140;
  t5395 = -0.325*t3245;
  t5495 = t3305*t5474;
  t5840 = t3245*t5832;
  t5842 = t5395 + t5495 + t5840;
  t5885 = -1.*t3305;
  t5955 = 1. + t5885;
  t5961 = 0.325*t5955;
  t5963 = -1.*t3245*t5474;
  t5971 = t3305*t5832;
  t6423 = t5961 + t5963 + t5971;
  t5364 = -1.*t2976;
  t5370 = 1. + t5364;
  t5378 = -0.1575*t5370;
  t5384 = -0.2255*t2976;
  t5867 = -1.*t1957*t5842;
  t5875 = t5378 + t5384 + t5867;
  t6495 = -0.068*t1957;
  t6566 = t2976*t5842;
  t6668 = t6495 + t6566;
  t6694 = t3356*t6423;
  t6695 = -1.*t5875*t3138;
  t6709 = t6694 + t6695;
  t5876 = t3356*t5875;
  t6430 = t6423*t3138;
  t6436 = t5876 + t6430;
  t6693 = t6668*t2179;
  t6761 = t3120*t6709;
  t6762 = t6693 + t6761;
  t6765 = t3120*t6668;
  t6767 = -1.*t2179*t6709;
  t6770 = t6765 + t6767;
  t3597 = t2976*t3365*t2179;
  t4176 = t3120*t4151;
  t4186 = t3597 + t4176;
  t6437 = t2976*t3356*t6436;
  t6806 = -1.*t6436*t4615;
  t6814 = t6436*t4615;
  t6827 = -1.*t6436*t4690;
  t6849 = -1.*t2976*t3356*t6436;
  t6862 = t6436*t4690;
  t6974 = -1.*t1957*t6668;
  t7025 = t2976*t6668*t3365;
  t6882 = t1957*t6668;
  t6891 = -1.*t2976*t6668*t3335;
  t6940 = -1.*t2976*t6668*t3365;
  t6925 = t2976*t6668*t3335;
  t7401 = t6423*t3365;
  t7351 = -1.*t6423*t4091;
  p_output1[0]=t3585*var2[0] + t3208*var2[1] + t4186*var2[2];
  p_output1[1]=(t4376*t4615 - 1.*t4478*t4649)*var2[0] + (t2976*t3356*t4376 - 1.*t4478*t4508)*var2[1] + (t4376*t4690 - 1.*t4478*t4832)*var2[2];
  p_output1[2]=(t4478*t4615 + t4376*t4649)*var2[0] + (t2976*t3356*t4478 + t4376*t4508)*var2[1] + (t4478*t4690 + t4376*t4832)*var2[2];
  p_output1[3]=(t4186*(-1.*t3208*t6762 - 1.*t4508*t6770 + t6849) + t3208*(t4186*t6762 + t4832*t6770 + t6862))*var2[0] + (t4186*(t3585*t6762 + t4649*t6770 + t6814) + t3585*(-1.*t4186*t6762 - 1.*t4832*t6770 + t6827))*var2[1] + (t3585*(t6437 + t3208*t6762 + t4508*t6770) + t3208*(-1.*t3585*t6762 - 1.*t4649*t6770 + t6806))*var2[2];
  p_output1[4]=(t4690*(t2976*t3138*t6709 + t6849 + t6974) + t2976*t3356*(t4151*t6709 + t6862 + t7025))*var2[0] + (t4690*(t3436*t6709 + t6814 + t6925) + t4615*(-1.*t4151*t6709 + t6827 + t6940))*var2[1] + (t4615*(t6437 - 1.*t2976*t3138*t6709 + t6882) + t2976*t3356*(-1.*t3436*t6709 + t6806 + t6891))*var2[2];
  p_output1[5]=(t2976*t3365*(-1.*t2976*t5875 + t6974) + t1957*(-1.*t1957*t3365*t5875 + t4091*t6423 + t7025))*var2[0] + (t2976*t3335*(t1957*t3365*t5875 + t6940 + t7351) + t2976*t3365*(-1.*t1957*t3335*t5875 + t6925 + t7401))*var2[1] + (t2976*t3335*(t2976*t5875 + t6882) + t1957*(t1957*t3335*t5875 - 1.*t3365*t6423 + t6891))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t3335 + 0.2255*t4091)*var2[0] + (t3365*(-1.*t3365*t5842 + t7351) + t4091*(t3335*t5842 + t7401))*var2[1] - 0.068*t3365*var2[2];
  p_output1[13]=(0.325*t3323 - 1.*t3243*t5474 - 1.*t3323*t5832)*var2[0] + (-0.325*t3243 - 1.*t3323*t5474 + t3243*t5832)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

namespace DiagonalStance
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
