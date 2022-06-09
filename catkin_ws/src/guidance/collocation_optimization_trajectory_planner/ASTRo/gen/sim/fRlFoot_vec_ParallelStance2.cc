/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:17 GMT+02:00
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
  double t14152;
  double t17253;
  double t14608;
  double t17294;
  double t17297;
  double t17287;
  double t17301;
  double t15909;
  double t17314;
  double t17315;
  double t17317;
  double t17268;
  double t17310;
  double t17329;
  double t17330;
  double t17331;
  double t17252;
  double t17279;
  double t17280;
  double t17522;
  double t17520;
  double t17296;
  double t17308;
  double t17309;
  double t17318;
  double t17320;
  double t17321;
  double t17496;
  double t17506;
  double t17507;
  double t17528;
  double t17529;
  double t17531;
  double t17541;
  double t17542;
  double t17543;
  double t17548;
  double t17549;
  double t17550;
  double t17558;
  double t17559;
  double t17560;
  double t17562;
  double t17566;
  double t17567;
  double t17313;
  double t17322;
  double t17325;
  double t17625;
  double t17626;
  double t17631;
  double t17632;
  double t17634;
  double t17638;
  double t17639;
  double t17641;
  double t17642;
  double t17643;
  double t17644;
  double t17645;
  double t17647;
  double t17652;
  double t17653;
  double t17655;
  double t17628;
  double t17629;
  double t17630;
  double t17649;
  double t17650;
  double t17662;
  double t17663;
  double t17664;
  double t17666;
  double t17668;
  double t17670;
  double t17673;
  double t17651;
  double t17657;
  double t17659;
  double t17667;
  double t17674;
  double t17675;
  double t17678;
  double t17679;
  double t17680;
  double t17328;
  double t17508;
  double t17510;
  double t17661;
  double t17684;
  double t17692;
  double t17706;
  double t17733;
  double t17747;
  double t17787;
  double t17792;
  t14152 = Cos(var1[4]);
  t17253 = Cos(var1[9]);
  t14608 = Cos(var1[5]);
  t17294 = Cos(var1[11]);
  t17297 = Sin(var1[10]);
  t17287 = Cos(var1[10]);
  t17301 = Sin(var1[11]);
  t15909 = Sin(var1[9]);
  t17314 = -1.*t17294*t17297;
  t17315 = t17287*t17301;
  t17317 = t17314 + t17315;
  t17268 = Sin(var1[5]);
  t17310 = Sin(var1[4]);
  t17329 = -1.*t17287*t17294;
  t17330 = -1.*t17297*t17301;
  t17331 = t17329 + t17330;
  t17252 = t14608*t15909;
  t17279 = t17253*t17268;
  t17280 = t17252 + t17279;
  t17522 = Cos(var1[3]);
  t17520 = Sin(var1[3]);
  t17296 = t17287*t17294;
  t17308 = t17297*t17301;
  t17309 = t17296 + t17308;
  t17318 = t17253*t14608*t17317;
  t17320 = -1.*t15909*t17317*t17268;
  t17321 = t17318 + t17320;
  t17496 = t17253*t14608*t17331;
  t17506 = -1.*t15909*t17331*t17268;
  t17507 = t17496 + t17506;
  t17528 = -1.*t17253*t14608;
  t17529 = t15909*t17268;
  t17531 = t17528 + t17529;
  t17541 = t14608*t15909*t17317;
  t17542 = t17253*t17317*t17268;
  t17543 = t17541 + t17542;
  t17548 = t14152*t17309;
  t17549 = -1.*t17310*t17321;
  t17550 = t17548 + t17549;
  t17558 = t14608*t15909*t17331;
  t17559 = t17253*t17331*t17268;
  t17560 = t17558 + t17559;
  t17562 = t14152*t17317;
  t17566 = -1.*t17310*t17507;
  t17567 = t17562 + t17566;
  t17313 = t17309*t17310;
  t17322 = t14152*t17321;
  t17325 = t17313 + t17322;
  t17625 = -1.*t17253;
  t17626 = 1. + t17625;
  t17631 = -1.*t17287;
  t17632 = 1. + t17631;
  t17634 = -0.28121*t17632;
  t17638 = -1.*t17294;
  t17639 = 1. + t17638;
  t17641 = -0.50321*t17639;
  t17642 = -0.19821*t17294;
  t17643 = t17641 + t17642;
  t17644 = t17287*t17643;
  t17645 = 0.305*t17297*t17301;
  t17647 = t17634 + t17644 + t17645;
  t17652 = -0.15121*t17626;
  t17653 = t17253*t17647;
  t17655 = t17652 + t17653;
  t17628 = 0.15121*t17626;
  t17629 = 0.15121*t17253;
  t17630 = 0.15121*t15909;
  t17649 = t15909*t17647;
  t17650 = t17628 + t17629 + t17630 + t17649;
  t17662 = 0.28121*t17297;
  t17663 = t17643*t17297;
  t17664 = -0.305*t17287*t17301;
  t17666 = t17662 + t17663 + t17664;
  t17668 = t14608*t17655;
  t17670 = -1.*t17650*t17268;
  t17673 = t17668 + t17670;
  t17651 = t14608*t17650;
  t17657 = t17655*t17268;
  t17659 = t17651 + t17657;
  t17667 = t17666*t17310;
  t17674 = t14152*t17673;
  t17675 = t17667 + t17674;
  t17678 = t14152*t17666;
  t17679 = -1.*t17310*t17673;
  t17680 = t17678 + t17679;
  t17328 = t17317*t17310;
  t17508 = t14152*t17507;
  t17510 = t17328 + t17508;
  t17661 = -1.*t17531*t17659;
  t17684 = t17543*t17659;
  t17692 = t17531*t17659;
  t17706 = -1.*t17560*t17659;
  t17733 = -1.*t17543*t17659;
  t17747 = t17560*t17659;
  t17787 = -1.*t17666*t17309;
  t17792 = t17666*t17317;
  p_output1[0]=t17510*var2[0] + t14152*t17280*var2[1] + t17325*var2[2];
  p_output1[1]=(t17522*t17560 - 1.*t17520*t17567)*var2[0] + (t17280*t17310*t17520 + t17522*t17531)*var2[1] + (t17522*t17543 - 1.*t17520*t17550)*var2[2];
  p_output1[2]=(t17520*t17560 + t17522*t17567)*var2[0] + (-1.*t17280*t17310*t17522 + t17520*t17531)*var2[1] + (t17520*t17543 + t17522*t17550)*var2[2];
  p_output1[3]=(t17325*(t17661 - 1.*t14152*t17280*t17675 + t17280*t17310*t17680) + t14152*t17280*(t17325*t17675 + t17550*t17680 + t17684))*var2[0] + (t17510*(-1.*t17325*t17675 - 1.*t17550*t17680 + t17733) + t17325*(t17510*t17675 + t17567*t17680 + t17747))*var2[1] + (t17510*(t14152*t17280*t17675 - 1.*t17280*t17310*t17680 + t17692) + t14152*t17280*(-1.*t17510*t17675 - 1.*t17567*t17680 + t17706))*var2[2];
  p_output1[4]=(t17543*(t17661 - 1.*t17280*t17673) + t17531*(t17309*t17666 + t17321*t17673 + t17684))*var2[0] + (t17560*(-1.*t17321*t17673 + t17733 + t17787) + t17543*(t17507*t17673 + t17747 + t17792))*var2[1] + (t17560*(t17280*t17673 + t17692) + t17531*(-1.*t17317*t17666 - 1.*t17507*t17673 + t17706))*var2[2];
  p_output1[5]=t17309*(t17253*t17650 - 1.*t15909*t17655)*var2[0] + (t17317*(-1.*t15909*t17317*t17650 - 1.*t17253*t17317*t17655 + t17787) + t17309*(t15909*t17331*t17650 + t17253*t17331*t17655 + t17792))*var2[1] + t17317*(-1.*t17253*t17650 + t15909*t17655)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t17309 + 0.15121*t17331)*var2[0] + (-0.15121 + t17317*(-1.*t17317*t17647 + t17787) + t17309*(t17331*t17647 + t17792))*var2[1];
  p_output1[10]=(0.28121*t17301 - 0.305*t17294*t17301 + t17301*t17643)*var2[0] + (0.28121*t17294 + 0.305*Power(t17301,2) + t17294*t17643)*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
