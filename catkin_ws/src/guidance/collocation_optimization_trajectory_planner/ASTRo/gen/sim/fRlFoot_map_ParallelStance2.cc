/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:16 GMT+02:00
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
  double t2559;
  double t2387;
  double t2399;
  double t2733;
  double t3037;
  double t3208;
  double t3274;
  double t2994;
  double t3851;
  double t2915;
  double t3949;
  double t2910;
  double t2456;
  double t2749;
  double t2774;
  double t2824;
  double t3376;
  double t4210;
  double t4234;
  double t5110;
  double t5099;
  double t5106;
  double t5107;
  double t5092;
  double t5121;
  double t5122;
  double t5131;
  double t9902;
  double t9916;
  double t9932;
  double t10013;
  double t10048;
  double t10062;
  double t10125;
  double t10131;
  double t10133;
  double t10135;
  double t10137;
  double t10229;
  double t10269;
  double t10292;
  double t10296;
  double t10316;
  double t9920;
  double t9922;
  double t9931;
  double t10271;
  double t10272;
  double t13166;
  double t13181;
  double t13183;
  double t14056;
  double t14061;
  double t14078;
  double t14080;
  double t14108;
  double t14112;
  double t14113;
  double t10287;
  double t10317;
  double t12158;
  double t5183;
  double t5191;
  double t5192;
  double t5195;
  double t5199;
  double t5205;
  double t5218;
  double t5293;
  double t5319;
  double t14104;
  double t14116;
  double t14118;
  double t14153;
  double t14156;
  double t14157;
  double t14569;
  double t14613;
  double t14617;
  double t9307;
  double t9362;
  double t9380;
  double t13008;
  double t15225;
  double t2878;
  double t4344;
  double t4992;
  double t15694;
  double t15695;
  double t15785;
  double t17275;
  double t17282;
  double t17290;
  double t17295;
  double t17332;
  double t17363;
  t2559 = Cos(var1[10]);
  t2387 = Cos(var1[11]);
  t2399 = Sin(var1[10]);
  t2733 = Sin(var1[11]);
  t3037 = -1.*t2559*t2387;
  t3208 = -1.*t2399*t2733;
  t3274 = t3037 + t3208;
  t2994 = Cos(var1[5]);
  t3851 = Sin(var1[9]);
  t2915 = Cos(var1[9]);
  t3949 = Sin(var1[5]);
  t2910 = Cos(var1[4]);
  t2456 = -1.*t2387*t2399;
  t2749 = t2559*t2733;
  t2774 = t2456 + t2749;
  t2824 = Sin(var1[4]);
  t3376 = t2915*t2994*t3274;
  t4210 = -1.*t3851*t3274*t3949;
  t4234 = t3376 + t4210;
  t5110 = Sin(var1[3]);
  t5099 = t2994*t3851*t3274;
  t5106 = t2915*t3274*t3949;
  t5107 = t5099 + t5106;
  t5092 = Cos(var1[3]);
  t5121 = t2910*t2774;
  t5122 = -1.*t2824*t4234;
  t5131 = t5121 + t5122;
  t9902 = -1.*t2915;
  t9916 = 1. + t9902;
  t9932 = -1.*t2559;
  t10013 = 1. + t9932;
  t10048 = -0.28121*t10013;
  t10062 = -1.*t2387;
  t10125 = 1. + t10062;
  t10131 = -0.50321*t10125;
  t10133 = -0.19821*t2387;
  t10135 = t10131 + t10133;
  t10137 = t2559*t10135;
  t10229 = 0.305*t2399*t2733;
  t10269 = t10048 + t10137 + t10229;
  t10292 = -0.15121*t9916;
  t10296 = t2915*t10269;
  t10316 = t10292 + t10296;
  t9920 = 0.15121*t9916;
  t9922 = 0.15121*t2915;
  t9931 = 0.15121*t3851;
  t10271 = t3851*t10269;
  t10272 = t9920 + t9922 + t9931 + t10271;
  t13166 = t2994*t3851;
  t13181 = t2915*t3949;
  t13183 = t13166 + t13181;
  t14056 = 0.28121*t2399;
  t14061 = t10135*t2399;
  t14078 = -0.305*t2559*t2733;
  t14080 = t14056 + t14061 + t14078;
  t14108 = t2994*t10316;
  t14112 = -1.*t10272*t3949;
  t14113 = t14108 + t14112;
  t10287 = t2994*t10272;
  t10317 = t10316*t3949;
  t12158 = t10287 + t10317;
  t5183 = t2559*t2387;
  t5191 = t2399*t2733;
  t5192 = t5183 + t5191;
  t5195 = t5192*t2824;
  t5199 = t2915*t2994*t2774;
  t5205 = -1.*t3851*t2774*t3949;
  t5218 = t5199 + t5205;
  t5293 = t2910*t5218;
  t5319 = t5195 + t5293;
  t14104 = t14080*t2824;
  t14116 = t2910*t14113;
  t14118 = t14104 + t14116;
  t14153 = t2910*t14080;
  t14156 = -1.*t2824*t14113;
  t14157 = t14153 + t14156;
  t14569 = t2994*t3851*t2774;
  t14613 = t2915*t2774*t3949;
  t14617 = t14569 + t14613;
  t9307 = -1.*t2915*t2994;
  t9362 = t3851*t3949;
  t9380 = t9307 + t9362;
  t13008 = -1.*t9380*t12158;
  t15225 = t14617*t12158;
  t2878 = t2774*t2824;
  t4344 = t2910*t4234;
  t4992 = t2878 + t4344;
  t15694 = t2910*t5192;
  t15695 = -1.*t2824*t5218;
  t15785 = t15694 + t15695;
  t17275 = -1.*t14617*t12158;
  t17282 = t5107*t12158;
  t17290 = -1.*t14080*t5192;
  t17295 = t14080*t2774;
  t17332 = t9380*t12158;
  t17363 = -1.*t5107*t12158;
  p_output1[0]=t4992;
  p_output1[1]=t5092*t5107 - 1.*t5110*t5131;
  p_output1[2]=t5107*t5110 + t5092*t5131;
  p_output1[3]=(t13008 + t13183*t14157*t2824 - 1.*t13183*t14118*t2910)*t5319 + t13183*t2910*(t15225 + t14157*t15785 + t14118*t5319);
  p_output1[4]=(t13008 - 1.*t13183*t14113)*t14617 + (t15225 + t14080*t5192 + t14113*t5218)*t9380;
  p_output1[5]=(t10272*t2915 - 1.*t10316*t3851)*t5192;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t3274 + 0.15121*t5192;
  p_output1[10]=0.28121*t2733 + t10135*t2733 - 0.305*t2387*t2733;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t13183*t2910;
  p_output1[19]=t13183*t2824*t5110 + t5092*t9380;
  p_output1[20]=-1.*t13183*t2824*t5092 + t5110*t9380;
  p_output1[21]=(t17282 + t14118*t4992 + t14157*t5131)*t5319 + t4992*(-1.*t14157*t15785 + t17275 - 1.*t14118*t5319);
  p_output1[22]=t14617*(t17282 + t17295 + t14113*t4234) + t5107*(t17275 + t17290 - 1.*t14113*t5218);
  p_output1[23]=t2774*(t17290 - 1.*t10316*t2774*t2915 - 1.*t10272*t2774*t3851) + (t17295 + t10316*t2915*t3274 + t10272*t3274*t3851)*t5192;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t2774*(t17290 - 1.*t10269*t2774) + (t17295 + t10269*t3274)*t5192;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5319;
  p_output1[37]=t14617*t5092 - 1.*t15785*t5110;
  p_output1[38]=t15785*t5092 + t14617*t5110;
  p_output1[39]=(t17332 - 1.*t13183*t14157*t2824 + t13183*t14118*t2910)*t4992 + t13183*t2910*(t17363 - 1.*t14118*t4992 - 1.*t14157*t5131);
  p_output1[40]=(t13183*t14113 + t17332)*t5107 + (t17363 - 1.*t14080*t2774 - 1.*t14113*t4234)*t9380;
  p_output1[41]=t2774*(-1.*t10272*t2915 + t10316*t3851);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t2387 + t10135*t2387 + 0.305*Power(t2733,2);
  p_output1[47]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
