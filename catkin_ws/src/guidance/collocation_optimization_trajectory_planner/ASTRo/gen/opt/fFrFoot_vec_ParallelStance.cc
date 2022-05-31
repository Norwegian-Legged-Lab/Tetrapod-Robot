/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:34 GMT+02:00
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
  double t874;
  double t1628;
  double t879;
  double t3552;
  double t3782;
  double t2421;
  double t3997;
  double t1285;
  double t4711;
  double t4712;
  double t4735;
  double t1732;
  double t4597;
  double t3635;
  double t4457;
  double t4517;
  double t1331;
  double t2081;
  double t2131;
  double t5213;
  double t5192;
  double t4759;
  double t4811;
  double t4817;
  double t4894;
  double t4937;
  double t4956;
  double t5010;
  double t5076;
  double t5081;
  double t5219;
  double t5249;
  double t5262;
  double t5324;
  double t5352;
  double t5357;
  double t5401;
  double t5437;
  double t5439;
  double t5521;
  double t5526;
  double t5527;
  double t5542;
  double t5558;
  double t5562;
  double t4665;
  double t4853;
  double t4855;
  double t6355;
  double t6394;
  double t6460;
  double t6466;
  double t6479;
  double t6495;
  double t6601;
  double t6615;
  double t6619;
  double t6678;
  double t6690;
  double t6707;
  double t6708;
  double t6805;
  double t6816;
  double t6825;
  double t6417;
  double t6454;
  double t6455;
  double t6782;
  double t6784;
  double t6942;
  double t6952;
  double t7095;
  double t7115;
  double t7127;
  double t7133;
  double t7134;
  double t6797;
  double t6828;
  double t6851;
  double t7116;
  double t7165;
  double t7170;
  double t7190;
  double t7251;
  double t7253;
  double t4990;
  double t5103;
  double t5106;
  double t6911;
  double t7425;
  double t7462;
  double t7564;
  double t7630;
  double t7659;
  double t7918;
  double t7951;
  t874 = Cos(var1[4]);
  t1628 = Cos(var1[12]);
  t879 = Cos(var1[5]);
  t3552 = Cos(var1[14]);
  t3782 = Sin(var1[13]);
  t2421 = Cos(var1[13]);
  t3997 = Sin(var1[14]);
  t1285 = Sin(var1[12]);
  t4711 = t3552*t3782;
  t4712 = -1.*t2421*t3997;
  t4735 = t4711 + t4712;
  t1732 = Sin(var1[5]);
  t4597 = Sin(var1[4]);
  t3635 = t2421*t3552;
  t4457 = t3782*t3997;
  t4517 = t3635 + t4457;
  t1331 = -1.*t879*t1285;
  t2081 = -1.*t1628*t1732;
  t2131 = t1331 + t2081;
  t5213 = Cos(var1[3]);
  t5192 = Sin(var1[3]);
  t4759 = t1628*t879*t4735;
  t4811 = -1.*t1285*t4735*t1732;
  t4817 = t4759 + t4811;
  t4894 = -1.*t3552*t3782;
  t4937 = t2421*t3997;
  t4956 = t4894 + t4937;
  t5010 = t1628*t879*t4517;
  t5076 = -1.*t1285*t4517*t1732;
  t5081 = t5010 + t5076;
  t5219 = t1628*t879;
  t5249 = -1.*t1285*t1732;
  t5262 = t5219 + t5249;
  t5324 = t879*t1285*t4735;
  t5352 = t1628*t4735*t1732;
  t5357 = t5324 + t5352;
  t5401 = t874*t4517;
  t5437 = -1.*t4597*t4817;
  t5439 = t5401 + t5437;
  t5521 = t879*t1285*t4517;
  t5526 = t1628*t4517*t1732;
  t5527 = t5521 + t5526;
  t5542 = t874*t4956;
  t5558 = -1.*t4597*t5081;
  t5562 = t5542 + t5558;
  t4665 = t4517*t4597;
  t4853 = t874*t4817;
  t4855 = t4665 + t4853;
  t6355 = -1.*t1628;
  t6394 = 1. + t6355;
  t6460 = -1.*t2421;
  t6466 = 1. + t6460;
  t6479 = 0.28121*t6466;
  t6495 = -1.*t3552;
  t6601 = 1. + t6495;
  t6615 = 0.50321*t6601;
  t6619 = 0.19821*t3552;
  t6678 = t6615 + t6619;
  t6690 = t2421*t6678;
  t6707 = -0.305*t3782*t3997;
  t6708 = t6479 + t6690 + t6707;
  t6805 = 0.15121*t6394;
  t6816 = t1628*t6708;
  t6825 = t6805 + t6816;
  t6417 = -0.15121*t6394;
  t6454 = -0.15121*t1628;
  t6455 = -0.15121*t1285;
  t6782 = t1285*t6708;
  t6784 = t6417 + t6454 + t6455 + t6782;
  t6942 = 0.28121*t3782;
  t6952 = -1.*t6678*t3782;
  t7095 = -0.305*t2421*t3997;
  t7115 = t6942 + t6952 + t7095;
  t7127 = t879*t6825;
  t7133 = -1.*t6784*t1732;
  t7134 = t7127 + t7133;
  t6797 = t879*t6784;
  t6828 = t6825*t1732;
  t6851 = t6797 + t6828;
  t7116 = t7115*t4597;
  t7165 = t874*t7134;
  t7170 = t7116 + t7165;
  t7190 = t874*t7115;
  t7251 = -1.*t4597*t7134;
  t7253 = t7190 + t7251;
  t4990 = t4956*t4597;
  t5103 = t874*t5081;
  t5106 = t4990 + t5103;
  t6911 = -1.*t5262*t6851;
  t7425 = t5357*t6851;
  t7462 = t5262*t6851;
  t7564 = -1.*t5527*t6851;
  t7630 = -1.*t5357*t6851;
  t7659 = t5527*t6851;
  t7918 = -1.*t7115*t4517;
  t7951 = t7115*t4956;
  p_output1[0]=t5106*var2[0] + t2131*t874*var2[1] + t4855*var2[2];
  p_output1[1]=(t5213*t5527 - 1.*t5192*t5562)*var2[0] + (t2131*t4597*t5192 + t5213*t5262)*var2[1] + (t5213*t5357 - 1.*t5192*t5439)*var2[2];
  p_output1[2]=(t5192*t5527 + t5213*t5562)*var2[0] + (-1.*t2131*t4597*t5213 + t5192*t5262)*var2[1] + (t5192*t5357 + t5213*t5439)*var2[2];
  p_output1[3]=(t2131*(t4855*t7170 + t5439*t7253 + t7425)*t874 + t4855*(t6911 + t2131*t4597*t7253 - 1.*t2131*t7170*t874))*var2[0] + (t5106*(-1.*t4855*t7170 - 1.*t5439*t7253 + t7630) + t4855*(t5106*t7170 + t5562*t7253 + t7659))*var2[1] + (t2131*(-1.*t5106*t7170 - 1.*t5562*t7253 + t7564)*t874 + t5106*(-1.*t2131*t4597*t7253 + t7462 + t2131*t7170*t874))*var2[2];
  p_output1[4]=(t5357*(t6911 - 1.*t2131*t7134) + t5262*(t4517*t7115 + t4817*t7134 + t7425))*var2[0] + (t5527*(-1.*t4817*t7134 + t7630 + t7918) + t5357*(t5081*t7134 + t7659 + t7951))*var2[1] + (t5527*(t2131*t7134 + t7462) + t5262*(-1.*t4956*t7115 - 1.*t5081*t7134 + t7564))*var2[2];
  p_output1[5]=t4517*(-1.*t1628*t6784 + t1285*t6825)*var2[0] + (t4956*(-1.*t1285*t4735*t6784 - 1.*t1628*t4735*t6825 + t7918) + t4517*(t1285*t4517*t6784 + t1628*t4517*t6825 + t7951))*var2[1] + t4956*(t1628*t6784 - 1.*t1285*t6825)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t4956*(-1.*t4735*t6708 + t7918) + t4517*(t4517*t6708 + t7951))*var2[1] + (-0.15121*t4735 - 0.15121*t4956)*var2[2];
  p_output1[13]=(0.28121*t3997 - 0.305*t3552*t3997 - 1.*t3997*t6678)*var2[0] + (0.28121*t3552 + 0.305*Power(t3997,2) - 1.*t3552*t6678)*var2[2];
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

namespace ParallelStance
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
