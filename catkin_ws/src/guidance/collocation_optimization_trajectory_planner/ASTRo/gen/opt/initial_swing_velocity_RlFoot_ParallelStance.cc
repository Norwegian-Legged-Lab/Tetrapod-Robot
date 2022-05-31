/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:01:29 GMT+02:00
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
  double t275;
  double t498;
  double t857;
  double t874;
  double t894;
  double t1285;
  double t325;
  double t4597;
  double t5578;
  double t7170;
  double t7253;
  double t7649;
  double t7839;
  double t10671;
  double t10675;
  double t12976;
  double t6678;
  double t6911;
  double t7658;
  double t7882;
  double t8569;
  double t10184;
  double t10699;
  double t10712;
  double t10723;
  double t10732;
  double t10747;
  double t10756;
  double t10840;
  double t10975;
  double t11277;
  double t14120;
  double t18022;
  double t18090;
  double t18220;
  double t14132;
  double t18282;
  double t18374;
  double t18389;
  double t18413;
  double t18414;
  double t20355;
  double t22156;
  double t22167;
  double t2519;
  double t3997;
  double t879;
  double t1331;
  double t22641;
  double t22649;
  double t22653;
  double t22672;
  double t22677;
  double t22685;
  double t22824;
  double t22893;
  double t23196;
  double t24107;
  double t24264;
  double t24352;
  double t24404;
  double t24420;
  double t24430;
  double t24433;
  double t24439;
  double t24445;
  double t24456;
  double t25140;
  double t25056;
  double t25204;
  double t25205;
  double t25216;
  double t25218;
  double t25219;
  double t25221;
  double t25222;
  double t25224;
  double t13325;
  double t13371;
  double t13727;
  double t25387;
  double t25388;
  double t25391;
  double t25394;
  double t25396;
  double t25360;
  double t25481;
  double t25482;
  double t25483;
  double t25502;
  double t25518;
  double t25521;
  double t25528;
  double t25531;
  double t25532;
  double t25536;
  double t25538;
  double t25540;
  double t25543;
  double t25544;
  double t25545;
  double t25580;
  double t25581;
  double t25583;
  double t25579;
  double t25584;
  double t25585;
  double t25588;
  double t25591;
  double t25592;
  double t25618;
  double t25619;
  double t25620;
  double t25830;
  double t25831;
  double t25832;
  double t25834;
  double t25839;
  double t25857;
  double t25864;
  double t25865;
  double t25867;
  double t25921;
  double t25922;
  double t25924;
  double t25927;
  double t25928;
  double t25929;
  double t26030;
  double t26031;
  double t26033;
  double t26040;
  double t26043;
  double t25945;
  double t26079;
  double t26080;
  double t26081;
  double t26074;
  double t26082;
  double t26083;
  double t26085;
  double t26086;
  double t26087;
  double t26102;
  double t26103;
  t275 = Cos(var1[4]);
  t498 = Cos(var1[9]);
  t857 = -1.*t498;
  t874 = 1. + t857;
  t894 = Sin(var1[9]);
  t1285 = 0.15121*t894;
  t325 = Cos(var1[5]);
  t4597 = Sin(var1[5]);
  t5578 = Cos(var1[10]);
  t7170 = -1.*t275*t325*t894;
  t7253 = -1.*t498*t275*t4597;
  t7649 = t7170 + t7253;
  t7839 = Cos(var1[11]);
  t10671 = Sin(var1[10]);
  t10675 = Sin(var1[11]);
  t12976 = 0.15121*t498;
  t6678 = -1.*t5578;
  t6911 = 1. + t6678;
  t7658 = -0.28121*t6911*t7649;
  t7882 = -1.*t7839;
  t8569 = 1. + t7882;
  t10184 = -0.50321*t5578*t8569*t7649;
  t10699 = 0.50321*t10671*t10675*t7649;
  t10712 = -1.*t498*t275*t325;
  t10723 = t275*t894*t4597;
  t10732 = t10712 + t10723;
  t10747 = 0.15121*t10732;
  t10756 = t5578*t7839*t7649;
  t10840 = t10671*t10675*t7649;
  t10975 = t10756 + t10840;
  t11277 = -0.19821*t10975;
  t14120 = Sin(var1[4]);
  t18022 = t498*t275*t325;
  t18090 = -1.*t275*t894*t4597;
  t18220 = t18022 + t18090;
  t14132 = t10671*t14120;
  t18282 = t5578*t18220;
  t18374 = t14132 + t18282;
  t18389 = t5578*t14120;
  t18413 = -1.*t10671*t18220;
  t18414 = t18389 + t18413;
  t20355 = -1.*t10671*t14120;
  t22156 = -1.*t5578*t18220;
  t22167 = t20355 + t22156;
  t2519 = -0.15121*t874;
  t3997 = t2519 + t1285;
  t879 = 0.15121*t874;
  t1331 = t879 + t1285;
  t22641 = -1.*t498*t325*t14120;
  t22649 = t894*t14120*t4597;
  t22653 = t22641 + t22649;
  t22672 = t275*t10671;
  t22677 = t5578*t22653;
  t22685 = t22672 + t22677;
  t22824 = t5578*t275;
  t22893 = -1.*t10671*t22653;
  t23196 = t22824 + t22893;
  t24107 = Sin(var1[3]);
  t24264 = t498*t275*t325*t24107;
  t24352 = -1.*t275*t894*t24107*t4597;
  t24404 = t24264 + t24352;
  t24420 = t10671*t24107*t14120;
  t24430 = t5578*t24404;
  t24433 = t24420 + t24430;
  t24439 = t5578*t24107*t14120;
  t24445 = -1.*t10671*t24404;
  t24456 = t24439 + t24445;
  t25140 = Cos(var1[3]);
  t25056 = -1.*t325*t24107*t14120;
  t25204 = -1.*t25140*t4597;
  t25205 = t25056 + t25204;
  t25216 = t25140*t325;
  t25218 = -1.*t24107*t14120*t4597;
  t25219 = t25216 + t25218;
  t25221 = t894*t25205;
  t25222 = t498*t25219;
  t25224 = t25221 + t25222;
  t13325 = -0.15121*t894;
  t13371 = t12976 + t13325;
  t13727 = t12976 + t1285;
  t25387 = t325*t24107*t14120;
  t25388 = t25140*t4597;
  t25391 = t25387 + t25388;
  t25394 = -1.*t894*t25391;
  t25396 = t25394 + t25222;
  t25360 = -1.*t894*t25219;
  t25481 = t25140*t325*t14120;
  t25482 = -1.*t24107*t4597;
  t25483 = t25481 + t25482;
  t25502 = -1.*t325*t24107;
  t25518 = -1.*t25140*t14120*t4597;
  t25521 = t25502 + t25518;
  t25528 = t498*t25483;
  t25531 = t894*t25521;
  t25532 = t25528 + t25531;
  t25536 = -1.*t25140*t275*t10671;
  t25538 = t5578*t25532;
  t25540 = t25536 + t25538;
  t25543 = -1.*t5578*t25140*t275;
  t25544 = -1.*t10671*t25532;
  t25545 = t25543 + t25544;
  t25580 = t498*t25391;
  t25581 = t894*t25219;
  t25583 = t25580 + t25581;
  t25579 = -1.*t275*t10671*t24107;
  t25584 = t5578*t25583;
  t25585 = t25579 + t25584;
  t25588 = -1.*t5578*t275*t24107;
  t25591 = -1.*t10671*t25583;
  t25592 = t25588 + t25591;
  t25618 = t275*t10671*t24107;
  t25619 = -1.*t5578*t25583;
  t25620 = t25618 + t25619;
  t25830 = -1.*t498*t25140*t275*t325;
  t25831 = t25140*t275*t894*t4597;
  t25832 = t25830 + t25831;
  t25834 = -1.*t25140*t10671*t14120;
  t25839 = t5578*t25832;
  t25857 = t25834 + t25839;
  t25864 = -1.*t5578*t25140*t14120;
  t25865 = -1.*t10671*t25832;
  t25867 = t25864 + t25865;
  t25921 = t325*t24107;
  t25922 = t25140*t14120*t4597;
  t25924 = t25921 + t25922;
  t25927 = t894*t25483;
  t25928 = t498*t25924;
  t25929 = t25927 + t25928;
  t26030 = -1.*t25140*t325*t14120;
  t26031 = t24107*t4597;
  t26033 = t26030 + t26031;
  t26040 = -1.*t894*t26033;
  t26043 = t26040 + t25928;
  t25945 = -1.*t894*t25924;
  t26079 = t498*t26033;
  t26080 = t894*t25924;
  t26081 = t26079 + t26080;
  t26074 = t25140*t275*t10671;
  t26082 = t5578*t26081;
  t26083 = t26074 + t26082;
  t26085 = t5578*t25140*t275;
  t26086 = -1.*t10671*t26081;
  t26087 = t26085 + t26086;
  t26102 = -1.*t5578*t26081;
  t26103 = t25536 + t26102;
  p_output1[0]=var2[0] + (-0.50321*t10675*t23196 + 0.28121*t10671*t275 - 1.*t14120*t325*t3997 + t1331*t14120*t4597 - 0.28121*t22653*t6911 - 0.19821*(-1.*t10675*t23196 + t22685*t7839) - 0.50321*t22685*t8569 + 0.15121*(t14120*t4597*t498 + t14120*t325*t894))*var2[4] + (t10184 + t10699 + t10747 + t11277 - 1.*t1331*t275*t325 - 1.*t275*t3997*t4597 + t7658)*var2[5] + (t10184 + t10699 + t10747 + t11277 + t13371*t275*t325 - 1.*t13727*t275*t4597 + t7658)*var2[9] + (-0.28121*t10671*t18220 - 0.50321*t10675*t22167 + 0.28121*t14120*t5578 - 0.19821*(-1.*t10675*t22167 + t18414*t7839) - 0.50321*t18414*t8569)*var2[10] + (-0.50321*t10675*t18374 - 0.50321*t18414*t7839 - 0.19821*(-1.*t10675*t18374 - 1.*t18414*t7839))*var2[11];
  p_output1[1]=var2[1] + (t1331*t25521 - 0.50321*t10675*t25545 - 0.28121*t10671*t25140*t275 + t25483*t3997 - 0.28121*t25532*t6911 - 0.19821*(-1.*t10675*t25545 + t25540*t7839) - 0.50321*t25540*t8569 + 0.15121*(t25521*t498 - 1.*t25483*t894))*var2[3] + (0.28121*t10671*t14120*t24107 - 0.50321*t10675*t24456 + t24107*t275*t325*t3997 - 1.*t1331*t24107*t275*t4597 - 0.28121*t24404*t6911 - 0.19821*(-1.*t10675*t24456 + t24433*t7839) - 0.50321*t24433*t8569 + 0.15121*(-1.*t24107*t275*t4597*t498 - 1.*t24107*t275*t325*t894))*var2[4] + (t1331*t25205 + 0.50321*t10671*t10675*t25224 + t25219*t3997 + 0.15121*(t25360 + t25205*t498) - 0.28121*t25224*t6911 - 0.19821*(t10671*t10675*t25224 + t25224*t5578*t7839) - 0.50321*t25224*t5578*t8569)*var2[5] + (t13727*t25219 + t13371*t25391 + 0.50321*t10671*t10675*t25396 + 0.15121*(t25360 - 1.*t25391*t498) - 0.28121*t25396*t6911 - 0.19821*(t10671*t10675*t25396 + t25396*t5578*t7839) - 0.50321*t25396*t5578*t8569)*var2[9] + (-0.28121*t10671*t25583 - 0.50321*t10675*t25620 - 0.28121*t24107*t275*t5578 - 0.19821*(-1.*t10675*t25620 + t25592*t7839) - 0.50321*t25592*t8569)*var2[10] + (-0.50321*t10675*t25585 - 0.50321*t25592*t7839 - 0.19821*(-1.*t10675*t25585 - 1.*t25592*t7839))*var2[11];
  p_output1[2]=var2[2] + (t1331*t25219 + 0.15121*t25396 - 0.50321*t10675*t25592 - 0.28121*t10671*t24107*t275 + t25391*t3997 - 0.28121*t25583*t6911 - 0.19821*(-1.*t10675*t25592 + t25585*t7839) - 0.50321*t25585*t8569)*var2[3] + (-0.28121*t10671*t14120*t25140 - 0.50321*t10675*t25867 - 1.*t25140*t275*t325*t3997 + t1331*t25140*t275*t4597 - 0.28121*t25832*t6911 - 0.19821*(-1.*t10675*t25867 + t25857*t7839) - 0.50321*t25857*t8569 + 0.15121*(t25140*t275*t4597*t498 + t25140*t275*t325*t894))*var2[4] + (t1331*t25483 + 0.50321*t10671*t10675*t25929 + 0.15121*(t25528 + t25945) + t25924*t3997 - 0.28121*t25929*t6911 - 0.19821*(t10671*t10675*t25929 + t25929*t5578*t7839) - 0.50321*t25929*t5578*t8569)*var2[5] + (t13727*t25924 + t13371*t26033 + 0.50321*t10671*t10675*t26043 + 0.15121*(t25945 - 1.*t26033*t498) - 0.28121*t26043*t6911 - 0.19821*(t10671*t10675*t26043 + t26043*t5578*t7839) - 0.50321*t26043*t5578*t8569)*var2[9] + (-0.28121*t10671*t26081 - 0.50321*t10675*t26103 + 0.28121*t25140*t275*t5578 - 0.19821*(-1.*t10675*t26103 + t26087*t7839) - 0.50321*t26087*t8569)*var2[10] + (-0.50321*t10675*t26083 - 0.50321*t26087*t7839 - 0.19821*(-1.*t10675*t26083 - 1.*t26087*t7839))*var2[11];
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

#include "initial_swing_velocity_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void initial_swing_velocity_RlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
