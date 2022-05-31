/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:24 GMT+02:00
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
  double t2736;
  double t125;
  double t1802;
  double t3303;
  double t5119;
  double t5158;
  double t5162;
  double t4531;
  double t5093;
  double t5723;
  double t4782;
  double t5849;
  double t3786;
  double t2337;
  double t3319;
  double t3637;
  double t5353;
  double t6533;
  double t6876;
  double t10271;
  double t7040;
  double t7041;
  double t7101;
  double t9583;
  double t7450;
  double t8403;
  double t8449;
  double t8856;
  double t8919;
  double t9152;
  double t10059;
  double t10114;
  double t10165;
  double t10424;
  double t10455;
  double t10646;
  double t10757;
  double t15002;
  double t15670;
  double t16073;
  double t16197;
  double t16207;
  double t16245;
  double t16249;
  double t16287;
  double t8780;
  double t9219;
  double t9236;
  double t21046;
  double t21053;
  double t21521;
  double t21700;
  double t21779;
  double t21795;
  double t21820;
  double t21821;
  double t21886;
  double t21895;
  double t22053;
  double t22077;
  double t22093;
  double t22096;
  double t22254;
  double t22405;
  double t21611;
  double t21695;
  double t22243;
  double t22246;
  double t22441;
  double t22442;
  double t22450;
  double t22455;
  double t22465;
  double t22484;
  double t22485;
  double t22250;
  double t22408;
  double t22434;
  double t22463;
  double t22486;
  double t22487;
  double t22616;
  double t22631;
  double t22635;
  double t4111;
  double t7019;
  double t7036;
  double t22436;
  double t22823;
  double t22888;
  double t22902;
  double t22917;
  double t22926;
  double t26997;
  double t27554;
  t2736 = Cos(var1[16]);
  t125 = Cos(var1[17]);
  t1802 = Sin(var1[16]);
  t3303 = Sin(var1[17]);
  t5119 = -1.*t2736*t125;
  t5158 = -1.*t1802*t3303;
  t5162 = t5119 + t5158;
  t4531 = Cos(var1[4]);
  t5093 = Cos(var1[5]);
  t5723 = Sin(var1[15]);
  t4782 = Cos(var1[15]);
  t5849 = Sin(var1[5]);
  t3786 = Sin(var1[4]);
  t2337 = -1.*t125*t1802;
  t3319 = t2736*t3303;
  t3637 = t2337 + t3319;
  t5353 = t4782*t5093*t5162;
  t6533 = -1.*t5723*t5162*t5849;
  t6876 = t5353 + t6533;
  t10271 = Sin(var1[3]);
  t7040 = t5093*t5723;
  t7041 = t4782*t5849;
  t7101 = t7040 + t7041;
  t9583 = Cos(var1[3]);
  t7450 = t2736*t125;
  t8403 = t1802*t3303;
  t8449 = t7450 + t8403;
  t8856 = t4782*t5093*t3637;
  t8919 = -1.*t5723*t3637*t5849;
  t9152 = t8856 + t8919;
  t10059 = t5093*t5723*t5162;
  t10114 = t4782*t5162*t5849;
  t10165 = t10059 + t10114;
  t10424 = t4531*t3637;
  t10455 = -1.*t3786*t6876;
  t10646 = t10424 + t10455;
  t10757 = -1.*t4782*t5093;
  t15002 = t5723*t5849;
  t15670 = t10757 + t15002;
  t16073 = t5093*t5723*t3637;
  t16197 = t4782*t3637*t5849;
  t16207 = t16073 + t16197;
  t16245 = t4531*t8449;
  t16249 = -1.*t3786*t9152;
  t16287 = t16245 + t16249;
  t8780 = t8449*t3786;
  t9219 = t4531*t9152;
  t9236 = t8780 + t9219;
  t21046 = -1.*t4782;
  t21053 = 1. + t21046;
  t21521 = -0.15121*t21053;
  t21700 = -1.*t2736;
  t21779 = 1. + t21700;
  t21795 = -0.28121*t21779;
  t21820 = -1.*t125;
  t21821 = 1. + t21820;
  t21886 = -0.50321*t21821;
  t21895 = -0.19821*t125;
  t22053 = t21886 + t21895;
  t22077 = t2736*t22053;
  t22093 = 0.305*t1802*t3303;
  t22096 = t21795 + t22077 + t22093;
  t22254 = t4782*t22096;
  t22405 = t21521 + t22254;
  t21611 = -0.15121*t4782;
  t21695 = 0.15121*t5723;
  t22243 = t5723*t22096;
  t22246 = t21521 + t21611 + t21695 + t22243;
  t22441 = 0.28121*t1802;
  t22442 = t22053*t1802;
  t22450 = -0.305*t2736*t3303;
  t22455 = t22441 + t22442 + t22450;
  t22465 = t5093*t22405;
  t22484 = -1.*t22246*t5849;
  t22485 = t22465 + t22484;
  t22250 = t5093*t22246;
  t22408 = t22405*t5849;
  t22434 = t22250 + t22408;
  t22463 = t22455*t3786;
  t22486 = t4531*t22485;
  t22487 = t22463 + t22486;
  t22616 = t4531*t22455;
  t22631 = -1.*t3786*t22485;
  t22635 = t22616 + t22631;
  t4111 = t3637*t3786;
  t7019 = t4531*t6876;
  t7036 = t4111 + t7019;
  t22436 = -1.*t15670*t22434;
  t22823 = t16207*t22434;
  t22888 = -1.*t16207*t22434;
  t22902 = t10165*t22434;
  t22917 = t15670*t22434;
  t22926 = -1.*t10165*t22434;
  t26997 = -1.*t22455*t8449;
  t27554 = t22455*t3637;
  p_output1[0]=t7036;
  p_output1[1]=t4531*t7101;
  p_output1[2]=t9236;
  p_output1[3]=-1.*t10271*t10646 + t10165*t9583;
  p_output1[4]=t10271*t3786*t7101 + t15670*t9583;
  p_output1[5]=-1.*t10271*t16287 + t16207*t9583;
  p_output1[6]=t10165*t10271 + t10646*t9583;
  p_output1[7]=t10271*t15670 - 1.*t3786*t7101*t9583;
  p_output1[8]=t10271*t16207 + t16287*t9583;
  p_output1[9]=(t22436 + t22635*t3786*t7101 - 1.*t22487*t4531*t7101)*t9236 + t4531*t7101*(t16287*t22635 + t22823 + t22487*t9236);
  p_output1[10]=(t10646*t22635 + t22902 + t22487*t7036)*t9236 + t7036*(-1.*t16287*t22635 + t22888 - 1.*t22487*t9236);
  p_output1[11]=t4531*(-1.*t10646*t22635 + t22926 - 1.*t22487*t7036)*t7101 + t7036*(t22917 - 1.*t22635*t3786*t7101 + t22487*t4531*t7101);
  p_output1[12]=t16207*(t22436 - 1.*t22485*t7101) + t15670*(t22823 + t22455*t8449 + t22485*t9152);
  p_output1[13]=t16207*(t22902 + t27554 + t22485*t6876) + t10165*(t22888 + t26997 - 1.*t22485*t9152);
  p_output1[14]=t15670*(t22926 - 1.*t22455*t3637 - 1.*t22485*t6876) + t10165*(t22917 + t22485*t7101);
  p_output1[15]=(t22246*t4782 - 1.*t22405*t5723)*t8449;
  p_output1[16]=t3637*(t26997 - 1.*t22405*t3637*t4782 - 1.*t22246*t3637*t5723) + (t27554 + t22405*t4782*t5162 + t22246*t5162*t5723)*t8449;
  p_output1[17]=t3637*(-1.*t22246*t4782 + t22405*t5723);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t5162 - 0.15121*t8449;
  p_output1[46]=-0.15121 + t3637*(t26997 - 1.*t22096*t3637) + (t27554 + t22096*t5162)*t8449;
  p_output1[47]=0;
  p_output1[48]=0.28121*t3303 - 0.305*t125*t3303 + t22053*t3303;
  p_output1[49]=0;
  p_output1[50]=0.28121*t125 + t125*t22053 + 0.305*Power(t3303,2);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
