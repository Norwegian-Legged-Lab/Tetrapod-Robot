/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:25 GMT+02:00
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
  double t6319;
  double t15169;
  double t6359;
  double t15427;
  double t15433;
  double t15416;
  double t15441;
  double t6360;
  double t15234;
  double t15454;
  double t15458;
  double t15460;
  double t15244;
  double t15432;
  double t15448;
  double t15449;
  double t8340;
  double t15236;
  double t15237;
  double t15512;
  double t15510;
  double t15461;
  double t15465;
  double t15470;
  double t15475;
  double t15476;
  double t15477;
  double t15479;
  double t15480;
  double t15481;
  double t15513;
  double t15514;
  double t15515;
  double t15532;
  double t15536;
  double t15539;
  double t15541;
  double t15542;
  double t15546;
  double t15573;
  double t15574;
  double t15575;
  double t15577;
  double t15578;
  double t15588;
  double t15451;
  double t15471;
  double t15472;
  double t15635;
  double t15636;
  double t15642;
  double t15644;
  double t15645;
  double t15646;
  double t15651;
  double t15652;
  double t15654;
  double t15659;
  double t15660;
  double t15661;
  double t15663;
  double t15666;
  double t15667;
  double t15669;
  double t15671;
  double t15672;
  double t15673;
  double t15674;
  double t15678;
  double t15679;
  double t15680;
  double t15681;
  double t15683;
  double t15684;
  double t15685;
  double t15670;
  double t15675;
  double t15676;
  double t15682;
  double t15686;
  double t15687;
  double t15699;
  double t15700;
  double t15701;
  double t15478;
  double t15482;
  double t15493;
  double t15677;
  double t15707;
  double t15718;
  double t15723;
  double t15730;
  double t15735;
  double t15815;
  double t15825;
  t6319 = Cos(var1[4]);
  t15169 = Cos(var1[5]);
  t6359 = Cos(var1[6]);
  t15427 = Cos(var1[8]);
  t15433 = Sin(var1[7]);
  t15416 = Cos(var1[7]);
  t15441 = Sin(var1[8]);
  t6360 = Sin(var1[5]);
  t15234 = Sin(var1[6]);
  t15454 = t15427*t15433;
  t15458 = -1.*t15416*t15441;
  t15460 = t15454 + t15458;
  t15244 = Sin(var1[4]);
  t15432 = t15416*t15427;
  t15448 = t15433*t15441;
  t15449 = t15432 + t15448;
  t8340 = -1.*t6359*t6360;
  t15236 = -1.*t15169*t15234;
  t15237 = t8340 + t15236;
  t15512 = Cos(var1[3]);
  t15510 = Sin(var1[3]);
  t15461 = t15169*t6359*t15460;
  t15465 = -1.*t6360*t15234*t15460;
  t15470 = t15461 + t15465;
  t15475 = -1.*t15427*t15433;
  t15476 = t15416*t15441;
  t15477 = t15475 + t15476;
  t15479 = t15169*t6359*t15449;
  t15480 = -1.*t6360*t15234*t15449;
  t15481 = t15479 + t15480;
  t15513 = t15169*t6359;
  t15514 = -1.*t6360*t15234;
  t15515 = t15513 + t15514;
  t15532 = t6359*t6360*t15460;
  t15536 = t15169*t15234*t15460;
  t15539 = t15532 + t15536;
  t15541 = t6319*t15449;
  t15542 = -1.*t15244*t15470;
  t15546 = t15541 + t15542;
  t15573 = t6359*t6360*t15449;
  t15574 = t15169*t15234*t15449;
  t15575 = t15573 + t15574;
  t15577 = t6319*t15477;
  t15578 = -1.*t15244*t15481;
  t15588 = t15577 + t15578;
  t15451 = t15244*t15449;
  t15471 = t6319*t15470;
  t15472 = t15451 + t15471;
  t15635 = -1.*t6359;
  t15636 = 1. + t15635;
  t15642 = 0.15121*t15636;
  t15644 = -1.*t15416;
  t15645 = 1. + t15644;
  t15646 = 0.28121*t15645;
  t15651 = -1.*t15427;
  t15652 = 1. + t15651;
  t15654 = 0.50321*t15652;
  t15659 = 0.23321*t15427;
  t15660 = t15654 + t15659;
  t15661 = t15416*t15660;
  t15663 = -0.27*t15433*t15441;
  t15666 = t15646 + t15661 + t15663;
  t15667 = t6359*t15666;
  t15669 = t15642 + t15667;
  t15671 = 0.15121*t6359;
  t15672 = -0.15121*t15234;
  t15673 = t15234*t15666;
  t15674 = t15642 + t15671 + t15672 + t15673;
  t15678 = 0.28121*t15433;
  t15679 = -1.*t15660*t15433;
  t15680 = -0.27*t15416*t15441;
  t15681 = t15678 + t15679 + t15680;
  t15683 = t15169*t15669;
  t15684 = -1.*t6360*t15674;
  t15685 = t15683 + t15684;
  t15670 = t6360*t15669;
  t15675 = t15169*t15674;
  t15676 = t15670 + t15675;
  t15682 = t15244*t15681;
  t15686 = t6319*t15685;
  t15687 = t15682 + t15686;
  t15699 = t6319*t15681;
  t15700 = -1.*t15244*t15685;
  t15701 = t15699 + t15700;
  t15478 = t15244*t15477;
  t15482 = t6319*t15481;
  t15493 = t15478 + t15482;
  t15677 = -1.*t15515*t15676;
  t15707 = t15539*t15676;
  t15718 = t15515*t15676;
  t15723 = -1.*t15575*t15676;
  t15730 = -1.*t15539*t15676;
  t15735 = t15575*t15676;
  t15815 = -1.*t15681*t15449;
  t15825 = t15681*t15477;
  p_output1[0]=t15493*var2[0] + t15237*t6319*var2[1] + t15472*var2[2];
  p_output1[1]=(t15512*t15575 - 1.*t15510*t15588)*var2[0] + (t15237*t15244*t15510 + t15512*t15515)*var2[1] + (t15512*t15539 - 1.*t15510*t15546)*var2[2];
  p_output1[2]=(t15510*t15575 + t15512*t15588)*var2[0] + (-1.*t15237*t15244*t15512 + t15510*t15515)*var2[1] + (t15510*t15539 + t15512*t15546)*var2[2];
  p_output1[3]=(t15237*(t15472*t15687 + t15546*t15701 + t15707)*t6319 + t15472*(t15677 + t15237*t15244*t15701 - 1.*t15237*t15687*t6319))*var2[0] + (t15493*(-1.*t15472*t15687 - 1.*t15546*t15701 + t15730) + t15472*(t15493*t15687 + t15588*t15701 + t15735))*var2[1] + (t15237*(-1.*t15493*t15687 - 1.*t15588*t15701 + t15723)*t6319 + t15493*(-1.*t15237*t15244*t15701 + t15718 + t15237*t15687*t6319))*var2[2];
  p_output1[4]=(t15539*(t15677 - 1.*t15237*t15685) + t15515*(t15449*t15681 + t15470*t15685 + t15707))*var2[0] + (t15575*(-1.*t15470*t15685 + t15730 + t15815) + t15539*(t15481*t15685 + t15735 + t15825))*var2[1] + (t15575*(t15237*t15685 + t15718) + t15515*(-1.*t15477*t15681 - 1.*t15481*t15685 + t15723))*var2[2];
  p_output1[5]=t15449*(t15234*t15669 - 1.*t15674*t6359)*var2[0] + (t15449*(t15234*t15449*t15674 + t15825 + t15449*t15669*t6359) + t15477*(-1.*t15234*t15460*t15674 + t15815 - 1.*t15460*t15669*t6359))*var2[1] + t15477*(-1.*t15234*t15669 + t15674*t6359)*var2[2];
  p_output1[6]=(-0.15121 + t15477*(-1.*t15460*t15666 + t15815) + t15449*(t15449*t15666 + t15825))*var2[1] + (0.15121*t15460 + 0.15121*t15477)*var2[2];
  p_output1[7]=(0.28121*t15441 - 0.27*t15427*t15441 - 1.*t15441*t15660)*var2[0] + (0.28121*t15427 + 0.27*Power(t15441,2) - 1.*t15427*t15660)*var2[2];
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
