/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:59 GMT+02:00
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
  double t2859;
  double t3621;
  double t3434;
  double t3789;
  double t3865;
  double t3776;
  double t3963;
  double t3525;
  double t4153;
  double t4154;
  double t4155;
  double t3666;
  double t4151;
  double t4280;
  double t4287;
  double t5736;
  double t3554;
  double t3672;
  double t3685;
  double t8427;
  double t7628;
  double t3854;
  double t3968;
  double t4150;
  double t4156;
  double t4174;
  double t4186;
  double t6195;
  double t6285;
  double t6500;
  double t8448;
  double t8756;
  double t9023;
  double t9830;
  double t9950;
  double t10105;
  double t10386;
  double t10416;
  double t10430;
  double t10517;
  double t10574;
  double t10595;
  double t10624;
  double t10646;
  double t10649;
  double t4152;
  double t4190;
  double t4225;
  double t11447;
  double t11454;
  double t11557;
  double t11642;
  double t11937;
  double t11957;
  double t11996;
  double t12017;
  double t12018;
  double t12051;
  double t12071;
  double t12093;
  double t12107;
  double t12109;
  double t12213;
  double t12249;
  double t11622;
  double t11623;
  double t12123;
  double t12132;
  double t13395;
  double t13443;
  double t13481;
  double t13483;
  double t13551;
  double t15131;
  double t15380;
  double t12186;
  double t12255;
  double t12951;
  double t13528;
  double t15486;
  double t16273;
  double t16291;
  double t16302;
  double t16308;
  double t4236;
  double t6579;
  double t6641;
  double t13041;
  double t16456;
  double t16542;
  double t16925;
  double t17111;
  double t17241;
  double t17764;
  double t17792;
  t2859 = Cos(var1[4]);
  t3621 = Cos(var1[15]);
  t3434 = Cos(var1[5]);
  t3789 = Cos(var1[17]);
  t3865 = Sin(var1[16]);
  t3776 = Cos(var1[16]);
  t3963 = Sin(var1[17]);
  t3525 = Sin(var1[15]);
  t4153 = -1.*t3789*t3865;
  t4154 = t3776*t3963;
  t4155 = t4153 + t4154;
  t3666 = Sin(var1[5]);
  t4151 = Sin(var1[4]);
  t4280 = -1.*t3776*t3789;
  t4287 = -1.*t3865*t3963;
  t5736 = t4280 + t4287;
  t3554 = t3434*t3525;
  t3672 = t3621*t3666;
  t3685 = t3554 + t3672;
  t8427 = Cos(var1[3]);
  t7628 = Sin(var1[3]);
  t3854 = t3776*t3789;
  t3968 = t3865*t3963;
  t4150 = t3854 + t3968;
  t4156 = t3621*t3434*t4155;
  t4174 = -1.*t3525*t4155*t3666;
  t4186 = t4156 + t4174;
  t6195 = t3621*t3434*t5736;
  t6285 = -1.*t3525*t5736*t3666;
  t6500 = t6195 + t6285;
  t8448 = -1.*t3621*t3434;
  t8756 = t3525*t3666;
  t9023 = t8448 + t8756;
  t9830 = t3434*t3525*t4155;
  t9950 = t3621*t4155*t3666;
  t10105 = t9830 + t9950;
  t10386 = t2859*t4150;
  t10416 = -1.*t4151*t4186;
  t10430 = t10386 + t10416;
  t10517 = t3434*t3525*t5736;
  t10574 = t3621*t5736*t3666;
  t10595 = t10517 + t10574;
  t10624 = t2859*t4155;
  t10646 = -1.*t4151*t6500;
  t10649 = t10624 + t10646;
  t4152 = t4150*t4151;
  t4190 = t2859*t4186;
  t4225 = t4152 + t4190;
  t11447 = -1.*t3621;
  t11454 = 1. + t11447;
  t11557 = -0.15121*t11454;
  t11642 = -1.*t3776;
  t11937 = 1. + t11642;
  t11957 = -0.28121*t11937;
  t11996 = -1.*t3789;
  t12017 = 1. + t11996;
  t12018 = -0.50321*t12017;
  t12051 = -0.19821*t3789;
  t12071 = t12018 + t12051;
  t12093 = t3776*t12071;
  t12107 = 0.305*t3865*t3963;
  t12109 = t11957 + t12093 + t12107;
  t12213 = t3621*t12109;
  t12249 = t11557 + t12213;
  t11622 = -0.15121*t3621;
  t11623 = 0.15121*t3525;
  t12123 = t3525*t12109;
  t12132 = t11557 + t11622 + t11623 + t12123;
  t13395 = 0.28121*t3865;
  t13443 = t12071*t3865;
  t13481 = -0.305*t3776*t3963;
  t13483 = t13395 + t13443 + t13481;
  t13551 = t3434*t12249;
  t15131 = -1.*t12132*t3666;
  t15380 = t13551 + t15131;
  t12186 = t3434*t12132;
  t12255 = t12249*t3666;
  t12951 = t12186 + t12255;
  t13528 = t13483*t4151;
  t15486 = t2859*t15380;
  t16273 = t13528 + t15486;
  t16291 = t2859*t13483;
  t16302 = -1.*t4151*t15380;
  t16308 = t16291 + t16302;
  t4236 = t4155*t4151;
  t6579 = t2859*t6500;
  t6641 = t4236 + t6579;
  t13041 = -1.*t9023*t12951;
  t16456 = t10105*t12951;
  t16542 = t9023*t12951;
  t16925 = -1.*t10595*t12951;
  t17111 = -1.*t10105*t12951;
  t17241 = t10595*t12951;
  t17764 = -1.*t13483*t4150;
  t17792 = t13483*t4155;
  p_output1[0]=t6641*var2[0] + t2859*t3685*var2[1] + t4225*var2[2];
  p_output1[1]=(-1.*t10649*t7628 + t10595*t8427)*var2[0] + (t3685*t4151*t7628 + t8427*t9023)*var2[1] + (-1.*t10430*t7628 + t10105*t8427)*var2[2];
  p_output1[2]=(t10595*t7628 + t10649*t8427)*var2[0] + (-1.*t3685*t4151*t8427 + t7628*t9023)*var2[1] + (t10105*t7628 + t10430*t8427)*var2[2];
  p_output1[3]=((t13041 - 1.*t16273*t2859*t3685 + t16308*t3685*t4151)*t4225 + t2859*t3685*(t10430*t16308 + t16456 + t16273*t4225))*var2[0] + ((-1.*t10430*t16308 + t17111 - 1.*t16273*t4225)*t6641 + t4225*(t10649*t16308 + t17241 + t16273*t6641))*var2[1] + ((t16542 + t16273*t2859*t3685 - 1.*t16308*t3685*t4151)*t6641 + t2859*t3685*(-1.*t10649*t16308 + t16925 - 1.*t16273*t6641))*var2[2];
  p_output1[4]=(t10105*(t13041 - 1.*t15380*t3685) + (t16456 + t13483*t4150 + t15380*t4186)*t9023)*var2[0] + (t10595*(t17111 + t17764 - 1.*t15380*t4186) + t10105*(t17241 + t17792 + t15380*t6500))*var2[1] + (t10595*(t16542 + t15380*t3685) + (t16925 - 1.*t13483*t4155 - 1.*t15380*t6500)*t9023)*var2[2];
  p_output1[5]=(-1.*t12249*t3525 + t12132*t3621)*t4150*var2[0] + (t4155*(t17764 - 1.*t12132*t3525*t4155 - 1.*t12249*t3621*t4155) + t4150*(t17792 + t12132*t3525*t5736 + t12249*t3621*t5736))*var2[1] + (t12249*t3525 - 1.*t12132*t3621)*t4155*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t4150 - 0.15121*t5736)*var2[0] + (-0.15121 + t4155*(t17764 - 1.*t12109*t4155) + t4150*(t17792 + t12109*t5736))*var2[1];
  p_output1[16]=(0.28121*t3963 + t12071*t3963 - 0.305*t3789*t3963)*var2[0] + (0.28121*t3789 + t12071*t3789 + 0.305*Power(t3963,2))*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
