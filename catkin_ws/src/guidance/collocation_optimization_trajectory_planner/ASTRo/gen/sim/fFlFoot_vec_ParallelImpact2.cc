/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:54 GMT+02:00
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
  double t12883;
  double t14139;
  double t13914;
  double t14261;
  double t14428;
  double t14178;
  double t14449;
  double t13925;
  double t14143;
  double t17474;
  double t17475;
  double t17477;
  double t14175;
  double t14407;
  double t14456;
  double t14773;
  double t14135;
  double t14165;
  double t14168;
  double t17566;
  double t17564;
  double t17478;
  double t17536;
  double t17540;
  double t17553;
  double t17554;
  double t17555;
  double t17557;
  double t17558;
  double t17559;
  double t17567;
  double t17568;
  double t17569;
  double t17573;
  double t17574;
  double t17575;
  double t17577;
  double t17578;
  double t17579;
  double t17584;
  double t17585;
  double t17586;
  double t17589;
  double t17590;
  double t17591;
  double t17470;
  double t17541;
  double t17542;
  double t17611;
  double t17612;
  double t17613;
  double t17614;
  double t17615;
  double t17616;
  double t17617;
  double t17618;
  double t17619;
  double t17620;
  double t17621;
  double t17622;
  double t17623;
  double t17624;
  double t17626;
  double t17627;
  double t17629;
  double t17631;
  double t17632;
  double t17633;
  double t17637;
  double t17638;
  double t17639;
  double t17640;
  double t17642;
  double t17643;
  double t17644;
  double t17628;
  double t17634;
  double t17635;
  double t17641;
  double t17645;
  double t17646;
  double t17648;
  double t17649;
  double t17650;
  double t17556;
  double t17560;
  double t17561;
  double t17636;
  double t17654;
  double t17661;
  double t17666;
  double t17673;
  double t17678;
  double t17704;
  double t17708;
  t12883 = Cos(var1[4]);
  t14139 = Cos(var1[5]);
  t13914 = Cos(var1[6]);
  t14261 = Cos(var1[8]);
  t14428 = Sin(var1[7]);
  t14178 = Cos(var1[7]);
  t14449 = Sin(var1[8]);
  t13925 = Sin(var1[5]);
  t14143 = Sin(var1[6]);
  t17474 = t14261*t14428;
  t17475 = -1.*t14178*t14449;
  t17477 = t17474 + t17475;
  t14175 = Sin(var1[4]);
  t14407 = t14178*t14261;
  t14456 = t14428*t14449;
  t14773 = t14407 + t14456;
  t14135 = -1.*t13914*t13925;
  t14165 = -1.*t14139*t14143;
  t14168 = t14135 + t14165;
  t17566 = Cos(var1[3]);
  t17564 = Sin(var1[3]);
  t17478 = t14139*t13914*t17477;
  t17536 = -1.*t13925*t14143*t17477;
  t17540 = t17478 + t17536;
  t17553 = -1.*t14261*t14428;
  t17554 = t14178*t14449;
  t17555 = t17553 + t17554;
  t17557 = t14139*t13914*t14773;
  t17558 = -1.*t13925*t14143*t14773;
  t17559 = t17557 + t17558;
  t17567 = t14139*t13914;
  t17568 = -1.*t13925*t14143;
  t17569 = t17567 + t17568;
  t17573 = t13914*t13925*t17477;
  t17574 = t14139*t14143*t17477;
  t17575 = t17573 + t17574;
  t17577 = t12883*t14773;
  t17578 = -1.*t14175*t17540;
  t17579 = t17577 + t17578;
  t17584 = t13914*t13925*t14773;
  t17585 = t14139*t14143*t14773;
  t17586 = t17584 + t17585;
  t17589 = t12883*t17555;
  t17590 = -1.*t14175*t17559;
  t17591 = t17589 + t17590;
  t17470 = t14175*t14773;
  t17541 = t12883*t17540;
  t17542 = t17470 + t17541;
  t17611 = -1.*t13914;
  t17612 = 1. + t17611;
  t17613 = 0.15121*t17612;
  t17614 = -1.*t14178;
  t17615 = 1. + t17614;
  t17616 = 0.28121*t17615;
  t17617 = -1.*t14261;
  t17618 = 1. + t17617;
  t17619 = 0.50321*t17618;
  t17620 = 0.23321*t14261;
  t17621 = t17619 + t17620;
  t17622 = t14178*t17621;
  t17623 = -0.27*t14428*t14449;
  t17624 = t17616 + t17622 + t17623;
  t17626 = t13914*t17624;
  t17627 = t17613 + t17626;
  t17629 = 0.15121*t13914;
  t17631 = -0.15121*t14143;
  t17632 = t14143*t17624;
  t17633 = t17613 + t17629 + t17631 + t17632;
  t17637 = 0.28121*t14428;
  t17638 = -1.*t17621*t14428;
  t17639 = -0.27*t14178*t14449;
  t17640 = t17637 + t17638 + t17639;
  t17642 = t14139*t17627;
  t17643 = -1.*t13925*t17633;
  t17644 = t17642 + t17643;
  t17628 = t13925*t17627;
  t17634 = t14139*t17633;
  t17635 = t17628 + t17634;
  t17641 = t14175*t17640;
  t17645 = t12883*t17644;
  t17646 = t17641 + t17645;
  t17648 = t12883*t17640;
  t17649 = -1.*t14175*t17644;
  t17650 = t17648 + t17649;
  t17556 = t14175*t17555;
  t17560 = t12883*t17559;
  t17561 = t17556 + t17560;
  t17636 = -1.*t17569*t17635;
  t17654 = t17575*t17635;
  t17661 = t17569*t17635;
  t17666 = -1.*t17586*t17635;
  t17673 = -1.*t17575*t17635;
  t17678 = t17586*t17635;
  t17704 = -1.*t17640*t14773;
  t17708 = t17640*t17555;
  p_output1[0]=t17561*var2[0] + t12883*t14168*var2[1] + t17542*var2[2];
  p_output1[1]=(t17566*t17586 - 1.*t17564*t17591)*var2[0] + (t14168*t14175*t17564 + t17566*t17569)*var2[1] + (t17566*t17575 - 1.*t17564*t17579)*var2[2];
  p_output1[2]=(t17564*t17586 + t17566*t17591)*var2[0] + (-1.*t14168*t14175*t17566 + t17564*t17569)*var2[1] + (t17564*t17575 + t17566*t17579)*var2[2];
  p_output1[3]=(t17542*(t17636 - 1.*t12883*t14168*t17646 + t14168*t14175*t17650) + t12883*t14168*(t17542*t17646 + t17579*t17650 + t17654))*var2[0] + (t17561*(-1.*t17542*t17646 - 1.*t17579*t17650 + t17673) + t17542*(t17561*t17646 + t17591*t17650 + t17678))*var2[1] + (t17561*(t12883*t14168*t17646 - 1.*t14168*t14175*t17650 + t17661) + t12883*t14168*(-1.*t17561*t17646 - 1.*t17591*t17650 + t17666))*var2[2];
  p_output1[4]=(t17575*(t17636 - 1.*t14168*t17644) + t17569*(t14773*t17640 + t17540*t17644 + t17654))*var2[0] + (t17586*(-1.*t17540*t17644 + t17673 + t17704) + t17575*(t17559*t17644 + t17678 + t17708))*var2[1] + (t17586*(t14168*t17644 + t17661) + t17569*(-1.*t17555*t17640 - 1.*t17559*t17644 + t17666))*var2[2];
  p_output1[5]=t14773*(t14143*t17627 - 1.*t13914*t17633)*var2[0] + (t17555*(-1.*t13914*t17477*t17627 - 1.*t14143*t17477*t17633 + t17704) + t14773*(t13914*t14773*t17627 + t14143*t14773*t17633 + t17708))*var2[1] + t17555*(-1.*t14143*t17627 + t13914*t17633)*var2[2];
  p_output1[6]=(-0.15121 + t17555*(-1.*t17477*t17624 + t17704) + t14773*(t14773*t17624 + t17708))*var2[1] + (0.15121*t17477 + 0.15121*t17555)*var2[2];
  p_output1[7]=(0.28121*t14449 - 0.27*t14261*t14449 - 1.*t14449*t17621)*var2[0] + (0.28121*t14261 + 0.27*Power(t14449,2) - 1.*t14261*t17621)*var2[2];
  p_output1[8]=-0.27*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
