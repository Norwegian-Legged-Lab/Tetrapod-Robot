/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:31 GMT+02:00
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
  double t646;
  double t43726;
  double t1300;
  double t51036;
  double t51060;
  double t51035;
  double t54338;
  double t1784;
  double t54407;
  double t54409;
  double t54410;
  double t43941;
  double t54355;
  double t51037;
  double t54352;
  double t54353;
  double t38995;
  double t50280;
  double t50702;
  double t54466;
  double t54464;
  double t54412;
  double t54414;
  double t54426;
  double t54442;
  double t54443;
  double t54444;
  double t54446;
  double t54451;
  double t54456;
  double t54467;
  double t54470;
  double t54472;
  double t54479;
  double t54481;
  double t54483;
  double t54486;
  double t54500;
  double t54502;
  double t54520;
  double t54521;
  double t54525;
  double t54537;
  double t54538;
  double t54542;
  double t54365;
  double t54427;
  double t54429;
  double t54565;
  double t54566;
  double t54571;
  double t54572;
  double t54573;
  double t54577;
  double t54580;
  double t54581;
  double t54582;
  double t54584;
  double t54586;
  double t54588;
  double t54589;
  double t54593;
  double t54595;
  double t54597;
  double t54567;
  double t54568;
  double t54569;
  double t54590;
  double t54591;
  double t54601;
  double t54602;
  double t54603;
  double t54604;
  double t54606;
  double t54607;
  double t54608;
  double t54592;
  double t54598;
  double t54599;
  double t54605;
  double t54609;
  double t54610;
  double t54612;
  double t54613;
  double t54614;
  double t54445;
  double t54459;
  double t54460;
  double t54600;
  double t54618;
  double t54626;
  double t54641;
  double t54659;
  double t54670;
  double t54705;
  double t54709;
  t646 = Cos(var1[4]);
  t43726 = Cos(var1[12]);
  t1300 = Cos(var1[5]);
  t51036 = Cos(var1[14]);
  t51060 = Sin(var1[13]);
  t51035 = Cos(var1[13]);
  t54338 = Sin(var1[14]);
  t1784 = Sin(var1[12]);
  t54407 = t51036*t51060;
  t54409 = -1.*t51035*t54338;
  t54410 = t54407 + t54409;
  t43941 = Sin(var1[5]);
  t54355 = Sin(var1[4]);
  t51037 = t51035*t51036;
  t54352 = t51060*t54338;
  t54353 = t51037 + t54352;
  t38995 = -1.*t1300*t1784;
  t50280 = -1.*t43726*t43941;
  t50702 = t38995 + t50280;
  t54466 = Cos(var1[3]);
  t54464 = Sin(var1[3]);
  t54412 = t43726*t1300*t54410;
  t54414 = -1.*t1784*t54410*t43941;
  t54426 = t54412 + t54414;
  t54442 = -1.*t51036*t51060;
  t54443 = t51035*t54338;
  t54444 = t54442 + t54443;
  t54446 = t43726*t1300*t54353;
  t54451 = -1.*t1784*t54353*t43941;
  t54456 = t54446 + t54451;
  t54467 = t43726*t1300;
  t54470 = -1.*t1784*t43941;
  t54472 = t54467 + t54470;
  t54479 = t1300*t1784*t54410;
  t54481 = t43726*t54410*t43941;
  t54483 = t54479 + t54481;
  t54486 = t646*t54353;
  t54500 = -1.*t54355*t54426;
  t54502 = t54486 + t54500;
  t54520 = t1300*t1784*t54353;
  t54521 = t43726*t54353*t43941;
  t54525 = t54520 + t54521;
  t54537 = t646*t54444;
  t54538 = -1.*t54355*t54456;
  t54542 = t54537 + t54538;
  t54365 = t54353*t54355;
  t54427 = t646*t54426;
  t54429 = t54365 + t54427;
  t54565 = -1.*t43726;
  t54566 = 1. + t54565;
  t54571 = -1.*t51035;
  t54572 = 1. + t54571;
  t54573 = 0.28121*t54572;
  t54577 = -1.*t51036;
  t54580 = 1. + t54577;
  t54581 = 0.50321*t54580;
  t54582 = 0.23321*t51036;
  t54584 = t54581 + t54582;
  t54586 = t51035*t54584;
  t54588 = -0.27*t51060*t54338;
  t54589 = t54573 + t54586 + t54588;
  t54593 = 0.15121*t54566;
  t54595 = t43726*t54589;
  t54597 = t54593 + t54595;
  t54567 = -0.15121*t54566;
  t54568 = -0.15121*t43726;
  t54569 = -0.15121*t1784;
  t54590 = t1784*t54589;
  t54591 = t54567 + t54568 + t54569 + t54590;
  t54601 = 0.28121*t51060;
  t54602 = -1.*t54584*t51060;
  t54603 = -0.27*t51035*t54338;
  t54604 = t54601 + t54602 + t54603;
  t54606 = t1300*t54597;
  t54607 = -1.*t54591*t43941;
  t54608 = t54606 + t54607;
  t54592 = t1300*t54591;
  t54598 = t54597*t43941;
  t54599 = t54592 + t54598;
  t54605 = t54604*t54355;
  t54609 = t646*t54608;
  t54610 = t54605 + t54609;
  t54612 = t646*t54604;
  t54613 = -1.*t54355*t54608;
  t54614 = t54612 + t54613;
  t54445 = t54444*t54355;
  t54459 = t646*t54456;
  t54460 = t54445 + t54459;
  t54600 = -1.*t54472*t54599;
  t54618 = t54483*t54599;
  t54626 = t54472*t54599;
  t54641 = -1.*t54525*t54599;
  t54659 = -1.*t54483*t54599;
  t54670 = t54525*t54599;
  t54705 = -1.*t54604*t54353;
  t54709 = t54604*t54444;
  p_output1[0]=t54460*var2[0] + t50702*t646*var2[1] + t54429*var2[2];
  p_output1[1]=(t54466*t54525 - 1.*t54464*t54542)*var2[0] + (t50702*t54355*t54464 + t54466*t54472)*var2[1] + (t54466*t54483 - 1.*t54464*t54502)*var2[2];
  p_output1[2]=(t54464*t54525 + t54466*t54542)*var2[0] + (-1.*t50702*t54355*t54466 + t54464*t54472)*var2[1] + (t54464*t54483 + t54466*t54502)*var2[2];
  p_output1[3]=(t50702*(t54429*t54610 + t54502*t54614 + t54618)*t646 + t54429*(t54600 + t50702*t54355*t54614 - 1.*t50702*t54610*t646))*var2[0] + (t54460*(-1.*t54429*t54610 - 1.*t54502*t54614 + t54659) + t54429*(t54460*t54610 + t54542*t54614 + t54670))*var2[1] + (t50702*(-1.*t54460*t54610 - 1.*t54542*t54614 + t54641)*t646 + t54460*(-1.*t50702*t54355*t54614 + t54626 + t50702*t54610*t646))*var2[2];
  p_output1[4]=(t54483*(t54600 - 1.*t50702*t54608) + t54472*(t54353*t54604 + t54426*t54608 + t54618))*var2[0] + (t54525*(-1.*t54426*t54608 + t54659 + t54705) + t54483*(t54456*t54608 + t54670 + t54709))*var2[1] + (t54525*(t50702*t54608 + t54626) + t54472*(-1.*t54444*t54604 - 1.*t54456*t54608 + t54641))*var2[2];
  p_output1[5]=t54353*(-1.*t43726*t54591 + t1784*t54597)*var2[0] + (t54444*(-1.*t1784*t54410*t54591 - 1.*t43726*t54410*t54597 + t54705) + t54353*(t1784*t54353*t54591 + t43726*t54353*t54597 + t54709))*var2[1] + t54444*(t43726*t54591 - 1.*t1784*t54597)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t54444*(-1.*t54410*t54589 + t54705) + t54353*(t54353*t54589 + t54709))*var2[1] + (-0.15121*t54410 - 0.15121*t54444)*var2[2];
  p_output1[13]=(0.28121*t54338 - 0.27*t51036*t54338 - 1.*t54338*t54584)*var2[0] + (0.28121*t51036 + 0.27*Power(t54338,2) - 1.*t51036*t54584)*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
