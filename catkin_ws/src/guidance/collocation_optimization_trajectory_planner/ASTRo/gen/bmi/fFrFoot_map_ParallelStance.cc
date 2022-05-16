/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:13 GMT+02:00
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
  double t1768;
  double t78;
  double t390;
  double t3293;
  double t4953;
  double t4959;
  double t5038;
  double t4927;
  double t5118;
  double t4817;
  double t5123;
  double t4809;
  double t1753;
  double t3486;
  double t4714;
  double t4733;
  double t5046;
  double t5186;
  double t5241;
  double t5636;
  double t5586;
  double t5588;
  double t5599;
  double t5549;
  double t5641;
  double t5673;
  double t5779;
  double t5858;
  double t5913;
  double t5955;
  double t6087;
  double t6108;
  double t6134;
  double t6210;
  double t6221;
  double t6229;
  double t6308;
  double t6332;
  double t6479;
  double t6532;
  double t7308;
  double t7311;
  double t7313;
  double t9362;
  double t15108;
  double t15109;
  double t6112;
  double t6125;
  double t6131;
  double t7314;
  double t7322;
  double t15198;
  double t15241;
  double t15420;
  double t15802;
  double t15807;
  double t15817;
  double t15836;
  double t15845;
  double t15853;
  double t15922;
  double t7480;
  double t15111;
  double t15112;
  double t5849;
  double t5962;
  double t5980;
  double t6028;
  double t6029;
  double t6031;
  double t15838;
  double t16050;
  double t16073;
  double t16077;
  double t18576;
  double t18607;
  double t19876;
  double t19913;
  double t20030;
  double t6035;
  double t6036;
  double t6073;
  double t15182;
  double t20040;
  double t4736;
  double t5246;
  double t5247;
  double t20083;
  double t20167;
  double t20168;
  double t26428;
  double t26460;
  double t26695;
  double t26782;
  double t27262;
  double t27333;
  t1768 = Cos(var1[13]);
  t78 = Cos(var1[14]);
  t390 = Sin(var1[13]);
  t3293 = Sin(var1[14]);
  t4953 = t1768*t78;
  t4959 = t390*t3293;
  t5038 = t4953 + t4959;
  t4927 = Cos(var1[5]);
  t5118 = Sin(var1[12]);
  t4817 = Cos(var1[12]);
  t5123 = Sin(var1[5]);
  t4809 = Cos(var1[4]);
  t1753 = -1.*t78*t390;
  t3486 = t1768*t3293;
  t4714 = t1753 + t3486;
  t4733 = Sin(var1[4]);
  t5046 = t4817*t4927*t5038;
  t5186 = -1.*t5118*t5038*t5123;
  t5241 = t5046 + t5186;
  t5636 = Sin(var1[3]);
  t5586 = t4927*t5118*t5038;
  t5588 = t4817*t5038*t5123;
  t5599 = t5586 + t5588;
  t5549 = Cos(var1[3]);
  t5641 = t4809*t4714;
  t5673 = -1.*t4733*t5241;
  t5779 = t5641 + t5673;
  t5858 = t78*t390;
  t5913 = -1.*t1768*t3293;
  t5955 = t5858 + t5913;
  t6087 = -1.*t4817;
  t6108 = 1. + t6087;
  t6134 = -1.*t1768;
  t6210 = 1. + t6134;
  t6221 = 0.28121*t6210;
  t6229 = -1.*t78;
  t6308 = 1. + t6229;
  t6332 = 0.50321*t6308;
  t6479 = 0.23321*t78;
  t6532 = t6332 + t6479;
  t7308 = t1768*t6532;
  t7311 = -0.27*t390*t3293;
  t7313 = t6221 + t7308 + t7311;
  t9362 = 0.15121*t6108;
  t15108 = t4817*t7313;
  t15109 = t9362 + t15108;
  t6112 = -0.15121*t6108;
  t6125 = -0.15121*t4817;
  t6131 = -0.15121*t5118;
  t7314 = t5118*t7313;
  t7322 = t6112 + t6125 + t6131 + t7314;
  t15198 = -1.*t4927*t5118;
  t15241 = -1.*t4817*t5123;
  t15420 = t15198 + t15241;
  t15802 = 0.28121*t390;
  t15807 = -1.*t6532*t390;
  t15817 = -0.27*t1768*t3293;
  t15836 = t15802 + t15807 + t15817;
  t15845 = t4927*t15109;
  t15853 = -1.*t7322*t5123;
  t15922 = t15845 + t15853;
  t7480 = t4927*t7322;
  t15111 = t15109*t5123;
  t15112 = t7480 + t15111;
  t5849 = t5038*t4733;
  t5962 = t4817*t4927*t5955;
  t5980 = -1.*t5118*t5955*t5123;
  t6028 = t5962 + t5980;
  t6029 = t4809*t6028;
  t6031 = t5849 + t6029;
  t15838 = t15836*t4733;
  t16050 = t4809*t15922;
  t16073 = t15838 + t16050;
  t16077 = t4809*t15836;
  t18576 = -1.*t4733*t15922;
  t18607 = t16077 + t18576;
  t19876 = t4927*t5118*t5955;
  t19913 = t4817*t5955*t5123;
  t20030 = t19876 + t19913;
  t6035 = t4817*t4927;
  t6036 = -1.*t5118*t5123;
  t6073 = t6035 + t6036;
  t15182 = -1.*t6073*t15112;
  t20040 = t20030*t15112;
  t4736 = t4714*t4733;
  t5246 = t4809*t5241;
  t5247 = t4736 + t5246;
  t20083 = t4809*t5038;
  t20167 = -1.*t4733*t6028;
  t20168 = t20083 + t20167;
  t26428 = -1.*t20030*t15112;
  t26460 = t5599*t15112;
  t26695 = -1.*t15836*t5038;
  t26782 = t15836*t4714;
  t27262 = t6073*t15112;
  t27333 = -1.*t5599*t15112;
  p_output1[0]=t5247;
  p_output1[1]=t5549*t5599 - 1.*t5636*t5779;
  p_output1[2]=t5599*t5636 + t5549*t5779;
  p_output1[3]=(t15182 + t15420*t18607*t4733 - 1.*t15420*t16073*t4809)*t6031 + t15420*t4809*(t20040 + t18607*t20168 + t16073*t6031);
  p_output1[4]=(t15182 - 1.*t15420*t15922)*t20030 + (t20040 + t15836*t5038 + t15922*t6028)*t6073;
  p_output1[5]=t5038*(t15109*t5118 - 1.*t4817*t7322);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3293 - 1.*t3293*t6532 - 0.27*t3293*t78;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t15420*t4809;
  p_output1[19]=t15420*t4733*t5636 + t5549*t6073;
  p_output1[20]=-1.*t15420*t4733*t5549 + t5636*t6073;
  p_output1[21]=(t26460 + t16073*t5247 + t18607*t5779)*t6031 + t5247*(-1.*t18607*t20168 + t26428 - 1.*t16073*t6031);
  p_output1[22]=t20030*(t26460 + t26782 + t15922*t5241) + t5599*(t26428 + t26695 - 1.*t15922*t6028);
  p_output1[23]=t5038*(t26782 + t15109*t4817*t5038 + t5038*t5118*t7322) + t4714*(t26695 - 1.*t15109*t4817*t5955 - 1.*t5118*t5955*t7322);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t5038*(t26782 + t5038*t7313) + t4714*(t26695 - 1.*t5955*t7313);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6031;
  p_output1[37]=t20030*t5549 - 1.*t20168*t5636;
  p_output1[38]=t20168*t5549 + t20030*t5636;
  p_output1[39]=(t27262 - 1.*t15420*t18607*t4733 + t15420*t16073*t4809)*t5247 + t15420*t4809*(t27333 - 1.*t16073*t5247 - 1.*t18607*t5779);
  p_output1[40]=(t15420*t15922 + t27262)*t5599 + (t27333 - 1.*t15836*t4714 - 1.*t15922*t5241)*t6073;
  p_output1[41]=t4714*(-1.*t15109*t5118 + t4817*t7322);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t4714 - 0.15121*t5955;
  p_output1[49]=0.27*Power(t3293,2) + 0.28121*t78 - 1.*t6532*t78;
  p_output1[50]=-0.27;
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
