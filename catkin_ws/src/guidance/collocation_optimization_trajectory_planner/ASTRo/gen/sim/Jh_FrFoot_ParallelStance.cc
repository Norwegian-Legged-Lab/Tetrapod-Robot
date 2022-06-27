/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:23 GMT+02:00
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
  double t281;
  double t17;
  double t154;
  double t725;
  double t1225;
  double t1371;
  double t2924;
  double t1193;
  double t1224;
  double t3000;
  double t1219;
  double t3011;
  double t1148;
  double t4685;
  double t4758;
  double t4812;
  double t257;
  double t910;
  double t1147;
  double t2992;
  double t3035;
  double t3039;
  double t8994;
  double t3097;
  double t4457;
  double t4473;
  double t7701;
  double t4980;
  double t6731;
  double t6956;
  double t8031;
  double t8570;
  double t8616;
  double t9064;
  double t9124;
  double t9716;
  double t10542;
  double t11034;
  double t11079;
  double t11201;
  double t11465;
  double t11606;
  double t11761;
  double t11777;
  double t11791;
  double t4673;
  double t7323;
  double t7382;
  double t12546;
  double t12567;
  double t12769;
  double t12799;
  double t12868;
  double t12878;
  double t12999;
  double t13122;
  double t13281;
  double t13283;
  double t13351;
  double t13370;
  double t13400;
  double t13438;
  double t13442;
  double t13443;
  double t12647;
  double t12665;
  double t12693;
  double t13404;
  double t13420;
  double t13503;
  double t13507;
  double t13522;
  double t13548;
  double t13611;
  double t13653;
  double t13675;
  double t13431;
  double t13458;
  double t13463;
  double t13568;
  double t13677;
  double t13681;
  double t13732;
  double t13822;
  double t13861;
  double t1187;
  double t3084;
  double t3092;
  double t13478;
  double t13909;
  double t14038;
  double t14156;
  double t14335;
  double t14550;
  double t14760;
  double t14801;
  t281 = Cos(var1[13]);
  t17 = Cos(var1[14]);
  t154 = Sin(var1[13]);
  t725 = Sin(var1[14]);
  t1225 = t281*t17;
  t1371 = t154*t725;
  t2924 = t1225 + t1371;
  t1193 = Cos(var1[4]);
  t1224 = Cos(var1[5]);
  t3000 = Sin(var1[12]);
  t1219 = Cos(var1[12]);
  t3011 = Sin(var1[5]);
  t1148 = Sin(var1[4]);
  t4685 = t17*t154;
  t4758 = -1.*t281*t725;
  t4812 = t4685 + t4758;
  t257 = -1.*t17*t154;
  t910 = t281*t725;
  t1147 = t257 + t910;
  t2992 = t1219*t1224*t2924;
  t3035 = -1.*t3000*t2924*t3011;
  t3039 = t2992 + t3035;
  t8994 = Sin(var1[3]);
  t3097 = -1.*t1224*t3000;
  t4457 = -1.*t1219*t3011;
  t4473 = t3097 + t4457;
  t7701 = Cos(var1[3]);
  t4980 = t1219*t1224*t4812;
  t6731 = -1.*t3000*t4812*t3011;
  t6956 = t4980 + t6731;
  t8031 = t1224*t3000*t2924;
  t8570 = t1219*t2924*t3011;
  t8616 = t8031 + t8570;
  t9064 = t1193*t1147;
  t9124 = -1.*t1148*t3039;
  t9716 = t9064 + t9124;
  t10542 = t1219*t1224;
  t11034 = -1.*t3000*t3011;
  t11079 = t10542 + t11034;
  t11201 = t1224*t3000*t4812;
  t11465 = t1219*t4812*t3011;
  t11606 = t11201 + t11465;
  t11761 = t1193*t2924;
  t11777 = -1.*t1148*t6956;
  t11791 = t11761 + t11777;
  t4673 = t2924*t1148;
  t7323 = t1193*t6956;
  t7382 = t4673 + t7323;
  t12546 = -1.*t1219;
  t12567 = 1. + t12546;
  t12769 = -1.*t281;
  t12799 = 1. + t12769;
  t12868 = 0.28121*t12799;
  t12878 = -1.*t17;
  t12999 = 1. + t12878;
  t13122 = 0.50321*t12999;
  t13281 = 0.19821*t17;
  t13283 = t13122 + t13281;
  t13351 = t281*t13283;
  t13370 = -0.305*t154*t725;
  t13400 = t12868 + t13351 + t13370;
  t13438 = 0.15121*t12567;
  t13442 = t1219*t13400;
  t13443 = t13438 + t13442;
  t12647 = -0.15121*t12567;
  t12665 = -0.15121*t1219;
  t12693 = -0.15121*t3000;
  t13404 = t3000*t13400;
  t13420 = t12647 + t12665 + t12693 + t13404;
  t13503 = 0.28121*t154;
  t13507 = -1.*t13283*t154;
  t13522 = -0.305*t281*t725;
  t13548 = t13503 + t13507 + t13522;
  t13611 = t1224*t13443;
  t13653 = -1.*t13420*t3011;
  t13675 = t13611 + t13653;
  t13431 = t1224*t13420;
  t13458 = t13443*t3011;
  t13463 = t13431 + t13458;
  t13568 = t13548*t1148;
  t13677 = t1193*t13675;
  t13681 = t13568 + t13677;
  t13732 = t1193*t13548;
  t13822 = -1.*t1148*t13675;
  t13861 = t13732 + t13822;
  t1187 = t1147*t1148;
  t3084 = t1193*t3039;
  t3092 = t1187 + t3084;
  t13478 = -1.*t11079*t13463;
  t13909 = t11606*t13463;
  t14038 = -1.*t11606*t13463;
  t14156 = t8616*t13463;
  t14335 = t11079*t13463;
  t14550 = -1.*t8616*t13463;
  t14760 = -1.*t13548*t2924;
  t14801 = t13548*t1147;
  p_output1[0]=t3092;
  p_output1[1]=t1193*t4473;
  p_output1[2]=t7382;
  p_output1[3]=t7701*t8616 - 1.*t8994*t9716;
  p_output1[4]=t11079*t7701 + t1148*t4473*t8994;
  p_output1[5]=t11606*t7701 - 1.*t11791*t8994;
  p_output1[6]=t8616*t8994 + t7701*t9716;
  p_output1[7]=-1.*t1148*t4473*t7701 + t11079*t8994;
  p_output1[8]=t11791*t7701 + t11606*t8994;
  p_output1[9]=(t13478 - 1.*t1193*t13681*t4473 + t1148*t13861*t4473)*t7382 + t1193*t4473*(t11791*t13861 + t13909 + t13681*t7382);
  p_output1[10]=t3092*(-1.*t11791*t13861 + t14038 - 1.*t13681*t7382) + t7382*(t14156 + t13681*t3092 + t13861*t9716);
  p_output1[11]=t3092*(t14335 + t1193*t13681*t4473 - 1.*t1148*t13861*t4473) + t1193*t4473*(t14550 - 1.*t13681*t3092 - 1.*t13861*t9716);
  p_output1[12]=t11606*(t13478 - 1.*t13675*t4473) + t11079*(t13909 + t13548*t2924 + t13675*t6956);
  p_output1[13]=t11606*(t14156 + t14801 + t13675*t3039) + (t14038 + t14760 - 1.*t13675*t6956)*t8616;
  p_output1[14]=t11079*(-1.*t1147*t13548 + t14550 - 1.*t13675*t3039) + (t14335 + t13675*t4473)*t8616;
  p_output1[15]=t2924*(-1.*t1219*t13420 + t13443*t3000);
  p_output1[16]=t2924*(t14801 + t1219*t13443*t2924 + t13420*t2924*t3000) + t1147*(t14760 - 1.*t1219*t13443*t4812 - 1.*t13420*t3000*t4812);
  p_output1[17]=t1147*(t1219*t13420 - 1.*t13443*t3000);
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
  p_output1[37]=-0.15121 + t2924*(t14801 + t13400*t2924) + t1147*(t14760 - 1.*t13400*t4812);
  p_output1[38]=-0.15121*t1147 - 0.15121*t4812;
  p_output1[39]=0.28121*t725 - 1.*t13283*t725 - 0.305*t17*t725;
  p_output1[40]=0;
  p_output1[41]=0.28121*t17 - 1.*t13283*t17 + 0.305*Power(t725,2);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.305;
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

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
