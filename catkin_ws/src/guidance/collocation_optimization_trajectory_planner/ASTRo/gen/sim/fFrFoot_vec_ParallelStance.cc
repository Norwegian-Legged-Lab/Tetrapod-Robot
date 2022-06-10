/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:24 GMT+02:00
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
  double t1683;
  double t3019;
  double t2156;
  double t4404;
  double t4778;
  double t3689;
  double t4780;
  double t2470;
  double t5696;
  double t5710;
  double t5797;
  double t3069;
  double t5192;
  double t4769;
  double t4838;
  double t5016;
  double t2996;
  double t3259;
  double t3268;
  double t7098;
  double t7023;
  double t5850;
  double t6163;
  double t6173;
  double t6411;
  double t6449;
  double t6572;
  double t6630;
  double t6654;
  double t6655;
  double t7104;
  double t8157;
  double t8236;
  double t8823;
  double t8837;
  double t8842;
  double t9028;
  double t9038;
  double t9042;
  double t9109;
  double t9114;
  double t9130;
  double t9559;
  double t9573;
  double t9952;
  double t5660;
  double t6241;
  double t6264;
  double t11858;
  double t12382;
  double t14237;
  double t14241;
  double t14247;
  double t14256;
  double t14266;
  double t14450;
  double t14459;
  double t14460;
  double t14461;
  double t14471;
  double t14487;
  double t14504;
  double t14506;
  double t14507;
  double t12383;
  double t12397;
  double t14205;
  double t14490;
  double t14493;
  double t14526;
  double t14528;
  double t14531;
  double t14532;
  double t14573;
  double t14574;
  double t14583;
  double t14503;
  double t14516;
  double t14519;
  double t14550;
  double t14604;
  double t14605;
  double t14607;
  double t14610;
  double t14611;
  double t6599;
  double t6683;
  double t6815;
  double t14522;
  double t14648;
  double t14713;
  double t14737;
  double t14785;
  double t14825;
  double t14955;
  double t14961;
  t1683 = Cos(var1[4]);
  t3019 = Cos(var1[12]);
  t2156 = Cos(var1[5]);
  t4404 = Cos(var1[14]);
  t4778 = Sin(var1[13]);
  t3689 = Cos(var1[13]);
  t4780 = Sin(var1[14]);
  t2470 = Sin(var1[12]);
  t5696 = t4404*t4778;
  t5710 = -1.*t3689*t4780;
  t5797 = t5696 + t5710;
  t3069 = Sin(var1[5]);
  t5192 = Sin(var1[4]);
  t4769 = t3689*t4404;
  t4838 = t4778*t4780;
  t5016 = t4769 + t4838;
  t2996 = -1.*t2156*t2470;
  t3259 = -1.*t3019*t3069;
  t3268 = t2996 + t3259;
  t7098 = Cos(var1[3]);
  t7023 = Sin(var1[3]);
  t5850 = t3019*t2156*t5797;
  t6163 = -1.*t2470*t5797*t3069;
  t6173 = t5850 + t6163;
  t6411 = -1.*t4404*t4778;
  t6449 = t3689*t4780;
  t6572 = t6411 + t6449;
  t6630 = t3019*t2156*t5016;
  t6654 = -1.*t2470*t5016*t3069;
  t6655 = t6630 + t6654;
  t7104 = t3019*t2156;
  t8157 = -1.*t2470*t3069;
  t8236 = t7104 + t8157;
  t8823 = t2156*t2470*t5797;
  t8837 = t3019*t5797*t3069;
  t8842 = t8823 + t8837;
  t9028 = t1683*t5016;
  t9038 = -1.*t5192*t6173;
  t9042 = t9028 + t9038;
  t9109 = t2156*t2470*t5016;
  t9114 = t3019*t5016*t3069;
  t9130 = t9109 + t9114;
  t9559 = t1683*t6572;
  t9573 = -1.*t5192*t6655;
  t9952 = t9559 + t9573;
  t5660 = t5016*t5192;
  t6241 = t1683*t6173;
  t6264 = t5660 + t6241;
  t11858 = -1.*t3019;
  t12382 = 1. + t11858;
  t14237 = -1.*t3689;
  t14241 = 1. + t14237;
  t14247 = 0.28121*t14241;
  t14256 = -1.*t4404;
  t14266 = 1. + t14256;
  t14450 = 0.50321*t14266;
  t14459 = 0.19821*t4404;
  t14460 = t14450 + t14459;
  t14461 = t3689*t14460;
  t14471 = -0.305*t4778*t4780;
  t14487 = t14247 + t14461 + t14471;
  t14504 = 0.15121*t12382;
  t14506 = t3019*t14487;
  t14507 = t14504 + t14506;
  t12383 = -0.15121*t12382;
  t12397 = -0.15121*t3019;
  t14205 = -0.15121*t2470;
  t14490 = t2470*t14487;
  t14493 = t12383 + t12397 + t14205 + t14490;
  t14526 = 0.28121*t4778;
  t14528 = -1.*t14460*t4778;
  t14531 = -0.305*t3689*t4780;
  t14532 = t14526 + t14528 + t14531;
  t14573 = t2156*t14507;
  t14574 = -1.*t14493*t3069;
  t14583 = t14573 + t14574;
  t14503 = t2156*t14493;
  t14516 = t14507*t3069;
  t14519 = t14503 + t14516;
  t14550 = t14532*t5192;
  t14604 = t1683*t14583;
  t14605 = t14550 + t14604;
  t14607 = t1683*t14532;
  t14610 = -1.*t5192*t14583;
  t14611 = t14607 + t14610;
  t6599 = t6572*t5192;
  t6683 = t1683*t6655;
  t6815 = t6599 + t6683;
  t14522 = -1.*t8236*t14519;
  t14648 = t8842*t14519;
  t14713 = t8236*t14519;
  t14737 = -1.*t9130*t14519;
  t14785 = -1.*t8842*t14519;
  t14825 = t9130*t14519;
  t14955 = -1.*t14532*t5016;
  t14961 = t14532*t6572;
  p_output1[0]=t6815*var2[0] + t1683*t3268*var2[1] + t6264*var2[2];
  p_output1[1]=(t7098*t9130 - 1.*t7023*t9952)*var2[0] + (t3268*t5192*t7023 + t7098*t8236)*var2[1] + (t7098*t8842 - 1.*t7023*t9042)*var2[2];
  p_output1[2]=(t7023*t9130 + t7098*t9952)*var2[0] + (-1.*t3268*t5192*t7098 + t7023*t8236)*var2[1] + (t7023*t8842 + t7098*t9042)*var2[2];
  p_output1[3]=((t14522 - 1.*t14605*t1683*t3268 + t14611*t3268*t5192)*t6264 + t1683*t3268*(t14648 + t14605*t6264 + t14611*t9042))*var2[0] + (t6815*(t14785 - 1.*t14605*t6264 - 1.*t14611*t9042) + t6264*(t14825 + t14605*t6815 + t14611*t9952))*var2[1] + ((t14713 + t14605*t1683*t3268 - 1.*t14611*t3268*t5192)*t6815 + t1683*t3268*(t14737 - 1.*t14605*t6815 - 1.*t14611*t9952))*var2[2];
  p_output1[4]=((t14648 + t14532*t5016 + t14583*t6173)*t8236 + (t14522 - 1.*t14583*t3268)*t8842)*var2[0] + ((t14825 + t14961 + t14583*t6655)*t8842 + (t14785 + t14955 - 1.*t14583*t6173)*t9130)*var2[1] + ((t14737 - 1.*t14532*t6572 - 1.*t14583*t6655)*t8236 + (t14713 + t14583*t3268)*t9130)*var2[2];
  p_output1[5]=(t14507*t2470 - 1.*t14493*t3019)*t5016*var2[0] + (t5016*(t14961 + t14493*t2470*t5016 + t14507*t3019*t5016) + (t14955 - 1.*t14493*t2470*t5797 - 1.*t14507*t3019*t5797)*t6572)*var2[1] + (-1.*t14507*t2470 + t14493*t3019)*t6572*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t5016*(t14961 + t14487*t5016) + (t14955 - 1.*t14487*t5797)*t6572)*var2[1] + (-0.15121*t5797 - 0.15121*t6572)*var2[2];
  p_output1[13]=(0.28121*t4780 - 1.*t14460*t4780 - 0.305*t4404*t4780)*var2[0] + (0.28121*t4404 - 1.*t14460*t4404 + 0.305*Power(t4780,2))*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
