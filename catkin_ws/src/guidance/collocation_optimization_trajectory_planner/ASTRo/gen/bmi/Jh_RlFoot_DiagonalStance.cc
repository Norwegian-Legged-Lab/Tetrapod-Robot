/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:06 GMT+02:00
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
  double t3025;
  double t1389;
  double t1994;
  double t3091;
  double t3320;
  double t3360;
  double t3374;
  double t3179;
  double t3241;
  double t3386;
  double t3219;
  double t3387;
  double t3153;
  double t2638;
  double t3125;
  double t3147;
  double t3385;
  double t3389;
  double t3403;
  double t3817;
  double t3462;
  double t3466;
  double t3472;
  double t3723;
  double t3488;
  double t3491;
  double t3507;
  double t3695;
  double t3699;
  double t3700;
  double t3738;
  double t3740;
  double t3767;
  double t3820;
  double t3829;
  double t3830;
  double t3938;
  double t3955;
  double t3960;
  double t3982;
  double t3986;
  double t3995;
  double t4007;
  double t4010;
  double t4018;
  double t3649;
  double t3701;
  double t3711;
  double t4113;
  double t4115;
  double t4124;
  double t4125;
  double t4133;
  double t4139;
  double t4140;
  double t4148;
  double t4150;
  double t4154;
  double t4194;
  double t4197;
  double t4198;
  double t4233;
  double t4235;
  double t4236;
  double t4120;
  double t4121;
  double t4123;
  double t4227;
  double t4228;
  double t4245;
  double t4247;
  double t4251;
  double t4253;
  double t4256;
  double t4260;
  double t4264;
  double t4232;
  double t4237;
  double t4238;
  double t4255;
  double t4265;
  double t4266;
  double t4278;
  double t4279;
  double t4281;
  double t3155;
  double t3407;
  double t3418;
  double t4242;
  double t4287;
  double t4345;
  double t4368;
  double t4390;
  double t4436;
  double t4533;
  double t4562;
  t3025 = Cos(var1[10]);
  t1389 = Cos(var1[11]);
  t1994 = Sin(var1[10]);
  t3091 = Sin(var1[11]);
  t3320 = -1.*t3025*t1389;
  t3360 = -1.*t1994*t3091;
  t3374 = t3320 + t3360;
  t3179 = Cos(var1[4]);
  t3241 = Cos(var1[5]);
  t3386 = Sin(var1[9]);
  t3219 = Cos(var1[9]);
  t3387 = Sin(var1[5]);
  t3153 = Sin(var1[4]);
  t2638 = -1.*t1389*t1994;
  t3125 = t3025*t3091;
  t3147 = t2638 + t3125;
  t3385 = t3219*t3241*t3374;
  t3389 = -1.*t3386*t3374*t3387;
  t3403 = t3385 + t3389;
  t3817 = Sin(var1[3]);
  t3462 = t3241*t3386;
  t3466 = t3219*t3387;
  t3472 = t3462 + t3466;
  t3723 = Cos(var1[3]);
  t3488 = t3025*t1389;
  t3491 = t1994*t3091;
  t3507 = t3488 + t3491;
  t3695 = t3219*t3241*t3147;
  t3699 = -1.*t3386*t3147*t3387;
  t3700 = t3695 + t3699;
  t3738 = t3241*t3386*t3374;
  t3740 = t3219*t3374*t3387;
  t3767 = t3738 + t3740;
  t3820 = t3179*t3147;
  t3829 = -1.*t3153*t3403;
  t3830 = t3820 + t3829;
  t3938 = -1.*t3219*t3241;
  t3955 = t3386*t3387;
  t3960 = t3938 + t3955;
  t3982 = t3241*t3386*t3147;
  t3986 = t3219*t3147*t3387;
  t3995 = t3982 + t3986;
  t4007 = t3179*t3507;
  t4010 = -1.*t3153*t3700;
  t4018 = t4007 + t4010;
  t3649 = t3507*t3153;
  t3701 = t3179*t3700;
  t3711 = t3649 + t3701;
  t4113 = -1.*t3219;
  t4115 = 1. + t4113;
  t4124 = -1.*t3025;
  t4125 = 1. + t4124;
  t4133 = -0.28121*t4125;
  t4139 = -1.*t1389;
  t4140 = 1. + t4139;
  t4148 = -0.50321*t4140;
  t4150 = -0.19821*t1389;
  t4154 = t4148 + t4150;
  t4194 = t3025*t4154;
  t4197 = 0.305*t1994*t3091;
  t4198 = t4133 + t4194 + t4197;
  t4233 = -0.15121*t4115;
  t4235 = t3219*t4198;
  t4236 = t4233 + t4235;
  t4120 = 0.15121*t4115;
  t4121 = 0.15121*t3219;
  t4123 = 0.15121*t3386;
  t4227 = t3386*t4198;
  t4228 = t4120 + t4121 + t4123 + t4227;
  t4245 = 0.28121*t1994;
  t4247 = t4154*t1994;
  t4251 = -0.305*t3025*t3091;
  t4253 = t4245 + t4247 + t4251;
  t4256 = t3241*t4236;
  t4260 = -1.*t4228*t3387;
  t4264 = t4256 + t4260;
  t4232 = t3241*t4228;
  t4237 = t4236*t3387;
  t4238 = t4232 + t4237;
  t4255 = t4253*t3153;
  t4265 = t3179*t4264;
  t4266 = t4255 + t4265;
  t4278 = t3179*t4253;
  t4279 = -1.*t3153*t4264;
  t4281 = t4278 + t4279;
  t3155 = t3147*t3153;
  t3407 = t3179*t3403;
  t3418 = t3155 + t3407;
  t4242 = -1.*t3960*t4238;
  t4287 = t3995*t4238;
  t4345 = -1.*t3995*t4238;
  t4368 = t3767*t4238;
  t4390 = t3960*t4238;
  t4436 = -1.*t3767*t4238;
  t4533 = -1.*t4253*t3507;
  t4562 = t4253*t3147;
  p_output1[0]=t3418;
  p_output1[1]=t3179*t3472;
  p_output1[2]=t3711;
  p_output1[3]=t3723*t3767 - 1.*t3817*t3830;
  p_output1[4]=t3153*t3472*t3817 + t3723*t3960;
  p_output1[5]=t3723*t3995 - 1.*t3817*t4018;
  p_output1[6]=t3767*t3817 + t3723*t3830;
  p_output1[7]=-1.*t3153*t3472*t3723 + t3817*t3960;
  p_output1[8]=t3817*t3995 + t3723*t4018;
  p_output1[9]=t3711*(t4242 - 1.*t3179*t3472*t4266 + t3153*t3472*t4281) + t3179*t3472*(t3711*t4266 + t4018*t4281 + t4287);
  p_output1[10]=t3418*(-1.*t3711*t4266 - 1.*t4018*t4281 + t4345) + t3711*(t3418*t4266 + t3830*t4281 + t4368);
  p_output1[11]=t3418*(t3179*t3472*t4266 - 1.*t3153*t3472*t4281 + t4390) + t3179*t3472*(-1.*t3418*t4266 - 1.*t3830*t4281 + t4436);
  p_output1[12]=t3995*(t4242 - 1.*t3472*t4264) + t3960*(t3507*t4253 + t3700*t4264 + t4287);
  p_output1[13]=t3767*(-1.*t3700*t4264 + t4345 + t4533) + t3995*(t3403*t4264 + t4368 + t4562);
  p_output1[14]=t3767*(t3472*t4264 + t4390) + t3960*(-1.*t3147*t4253 - 1.*t3403*t4264 + t4436);
  p_output1[15]=t3507*(t3219*t4228 - 1.*t3386*t4236);
  p_output1[16]=t3147*(-1.*t3147*t3386*t4228 - 1.*t3147*t3219*t4236 + t4533) + t3507*(t3374*t3386*t4228 + t3219*t3374*t4236 + t4562);
  p_output1[17]=t3147*(-1.*t3219*t4228 + t3386*t4236);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t3374 + 0.15121*t3507;
  p_output1[28]=-0.15121 + t3147*(-1.*t3147*t4198 + t4533) + t3507*(t3374*t4198 + t4562);
  p_output1[29]=0;
  p_output1[30]=0.28121*t3091 - 0.305*t1389*t3091 + t3091*t4154;
  p_output1[31]=0;
  p_output1[32]=0.28121*t1389 + 0.305*Power(t3091,2) + t1389*t4154;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
