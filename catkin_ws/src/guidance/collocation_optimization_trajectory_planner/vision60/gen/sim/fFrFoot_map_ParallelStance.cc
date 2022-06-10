/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:22 GMT+02:00
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
  double t1403;
  double t622;
  double t1205;
  double t1968;
  double t1222;
  double t2213;
  double t2346;
  double t2743;
  double t3473;
  double t3009;
  double t3022;
  double t3288;
  double t3484;
  double t614;
  double t2555;
  double t2480;
  double t3434;
  double t3545;
  double t3778;
  double t3998;
  double t3882;
  double t3919;
  double t3935;
  double t3874;
  double t4030;
  double t4052;
  double t4060;
  double t4489;
  double t4492;
  double t4494;
  double t4529;
  double t4537;
  double t4539;
  double t4559;
  double t4562;
  double t4580;
  double t4476;
  double t4497;
  double t4583;
  double t4587;
  double t4604;
  double t4606;
  double t4607;
  double t4608;
  double t4609;
  double t4705;
  double t4450;
  double t4461;
  double t4467;
  double t4469;
  double t4589;
  double t4595;
  double t4742;
  double t4746;
  double t4755;
  double t4768;
  double t4775;
  double t4777;
  double t4729;
  double t4737;
  double t4740;
  double t4596;
  double t4711;
  double t4712;
  double t4361;
  double t4397;
  double t4409;
  double t4760;
  double t4778;
  double t4780;
  double t4357;
  double t4410;
  double t4417;
  double t4427;
  double t4446;
  double t4447;
  double t4802;
  double t4803;
  double t4804;
  double t4836;
  double t4837;
  double t4842;
  double t4716;
  double t4843;
  double t4881;
  double t4889;
  double t4789;
  double t4798;
  double t4801;
  double t2542;
  double t3806;
  double t3842;
  double t4851;
  double t4857;
  double t4858;
  double t4969;
  double t4982;
  double t5021;
  double t5004;
  double t5041;
  double t5034;
  double t5071;
  double t5079;
  double t5098;
  double t5109;
  t1403 = Cos(var1[13]);
  t622 = Cos(var1[14]);
  t1205 = Sin(var1[13]);
  t1968 = Sin(var1[14]);
  t1222 = t622*t1205;
  t2213 = -1.*t1403*t1968;
  t2346 = t1222 + t2213;
  t2743 = Cos(var1[5]);
  t3473 = Sin(var1[12]);
  t3009 = t1403*t622;
  t3022 = t1205*t1968;
  t3288 = t3009 + t3022;
  t3484 = Sin(var1[5]);
  t614 = Cos(var1[12]);
  t2555 = Cos(var1[4]);
  t2480 = Sin(var1[4]);
  t3434 = t2743*t3288;
  t3545 = t3473*t2346*t3484;
  t3778 = t3434 + t3545;
  t3998 = Sin(var1[3]);
  t3882 = -1.*t2743*t3473*t2346;
  t3919 = t3288*t3484;
  t3935 = t3882 + t3919;
  t3874 = Cos(var1[3]);
  t4030 = t614*t2555*t2346;
  t4052 = -1.*t2480*t3778;
  t4060 = t4030 + t4052;
  t4489 = -0.0641*t622;
  t4492 = -0.28*t1968;
  t4494 = t4489 + t4492;
  t4529 = -1.*t622;
  t4537 = 1. + t4529;
  t4539 = 0.075*t4537;
  t4559 = 0.355*t622;
  t4562 = -0.0641*t1968;
  t4580 = t4539 + t4559 + t4562;
  t4476 = -0.325*t1205;
  t4497 = t1403*t4494;
  t4583 = t1205*t4580;
  t4587 = t4476 + t4497 + t4583;
  t4604 = -1.*t1403;
  t4606 = 1. + t4604;
  t4607 = 0.325*t4606;
  t4608 = -1.*t1205*t4494;
  t4609 = t1403*t4580;
  t4705 = t4607 + t4608 + t4609;
  t4450 = -1.*t614;
  t4461 = 1. + t4450;
  t4467 = -0.1575*t4461;
  t4469 = -0.2255*t614;
  t4589 = -1.*t3473*t4587;
  t4595 = t4467 + t4469 + t4589;
  t4742 = -0.068*t3473;
  t4746 = t614*t4587;
  t4755 = t4742 + t4746;
  t4768 = t2743*t4705;
  t4775 = -1.*t4595*t3484;
  t4777 = t4768 + t4775;
  t4729 = t3473*t2480;
  t4737 = -1.*t614*t2555*t3484;
  t4740 = t4729 + t4737;
  t4596 = t2743*t4595;
  t4711 = t4705*t3484;
  t4712 = t4596 + t4711;
  t4361 = -1.*t622*t1205;
  t4397 = t1403*t1968;
  t4409 = t4361 + t4397;
  t4760 = t4755*t2480;
  t4778 = t2555*t4777;
  t4780 = t4760 + t4778;
  t4357 = t614*t3288*t2480;
  t4410 = t2743*t4409;
  t4417 = t3473*t3288*t3484;
  t4427 = t4410 + t4417;
  t4446 = t2555*t4427;
  t4447 = t4357 + t4446;
  t4802 = t2555*t4755;
  t4803 = -1.*t2480*t4777;
  t4804 = t4802 + t4803;
  t4836 = -1.*t2743*t3473*t3288;
  t4837 = t4409*t3484;
  t4842 = t4836 + t4837;
  t4716 = -1.*t614*t2743*t4712;
  t4843 = t4712*t4842;
  t4881 = -1.*t3473*t4755;
  t4889 = t614*t4755*t3288;
  t4789 = t2555*t3473;
  t4798 = t614*t2480*t3484;
  t4801 = t4789 + t4798;
  t2542 = t614*t2346*t2480;
  t3806 = t2555*t3778;
  t3842 = t2542 + t3806;
  t4851 = t614*t2555*t3288;
  t4857 = -1.*t2480*t4427;
  t4858 = t4851 + t4857;
  t4969 = t4712*t3935;
  t4982 = -1.*t4712*t4842;
  t5021 = -1.*t614*t4755*t3288;
  t5004 = t614*t4755*t2346;
  t5041 = t4705*t3288;
  t5034 = -1.*t4705*t4409;
  t5071 = t614*t2743*t4712;
  t5079 = -1.*t4712*t3935;
  t5098 = t3473*t4755;
  t5109 = -1.*t614*t4755*t2346;
  p_output1[0]=t3842;
  p_output1[1]=t3874*t3935 - 1.*t3998*t4060;
  p_output1[2]=t3935*t3998 + t3874*t4060;
  p_output1[3]=t4447*(t4716 - 1.*t4740*t4780 - 1.*t4801*t4804) + t4740*(t4447*t4780 + t4843 + t4804*t4858);
  p_output1[4]=t2743*(t4427*t4777 + t4843 + t4889)*t614 + t4842*(t4716 + t4881 + t3484*t4777*t614);
  p_output1[5]=t3473*(-1.*t3288*t3473*t4595 + t4409*t4705 + t4889) + t3288*t614*(t4881 - 1.*t4595*t614);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t2346 + 0.2255*t4409;
  p_output1[13]=0.325*t1968 - 1.*t1968*t4580 - 1.*t4494*t622;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4740;
  p_output1[19]=-1.*t3998*t4801 + t2743*t3874*t614;
  p_output1[20]=t3874*t4801 + t2743*t3998*t614;
  p_output1[21]=t4447*(t3842*t4780 + t4060*t4804 + t4969) + t3842*(-1.*t4447*t4780 - 1.*t4804*t4858 + t4982);
  p_output1[22]=t4842*(t3778*t4777 + t4969 + t5004) + t3935*(-1.*t4427*t4777 + t4982 + t5021);
  p_output1[23]=t2346*(t3288*t3473*t4595 + t5021 + t5034)*t614 + t3288*(-1.*t2346*t3473*t4595 + t5004 + t5041)*t614;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t3288*(-1.*t3288*t4587 + t5034) + t4409*(t2346*t4587 + t5041);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t4447;
  p_output1[37]=t3874*t4842 - 1.*t3998*t4858;
  p_output1[38]=t3998*t4842 + t3874*t4858;
  p_output1[39]=t3842*(t4740*t4780 + t4801*t4804 + t5071) + t4740*(-1.*t3842*t4780 - 1.*t4060*t4804 + t5079);
  p_output1[40]=t2743*(-1.*t3778*t4777 + t5079 + t5109)*t614 + t3935*(t5071 + t5098 - 1.*t3484*t4777*t614);
  p_output1[41]=t3473*(t2346*t3473*t4595 - 1.*t3288*t4705 + t5109) + t2346*t614*(t5098 + t4595*t614);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t3288;
  p_output1[49]=-1.*t1968*t4494 - 0.325*t622 + t4580*t622;
  p_output1[50]=-0.28;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
