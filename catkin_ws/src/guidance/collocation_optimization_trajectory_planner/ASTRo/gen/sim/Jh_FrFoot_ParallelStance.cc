/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:32 GMT+02:00
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
  double t40185;
  double t1576;
  double t19373;
  double t40202;
  double t40507;
  double t40509;
  double t40515;
  double t40238;
  double t40496;
  double t40520;
  double t40295;
  double t40528;
  double t40209;
  double t40601;
  double t40602;
  double t40603;
  double t39782;
  double t40206;
  double t40207;
  double t40517;
  double t40536;
  double t40561;
  double t40624;
  double t40586;
  double t40587;
  double t40588;
  double t40614;
  double t40604;
  double t40605;
  double t40606;
  double t40619;
  double t40620;
  double t40621;
  double t40628;
  double t40638;
  double t40663;
  double t40681;
  double t40682;
  double t40688;
  double t40693;
  double t40699;
  double t40701;
  double t40704;
  double t40715;
  double t40716;
  double t40597;
  double t40608;
  double t40609;
  double t40750;
  double t40763;
  double t40772;
  double t40773;
  double t40774;
  double t40776;
  double t40777;
  double t40778;
  double t40779;
  double t40782;
  double t40783;
  double t40784;
  double t40785;
  double t40816;
  double t40845;
  double t40852;
  double t40768;
  double t40770;
  double t40771;
  double t40786;
  double t40788;
  double t40884;
  double t40912;
  double t40923;
  double t40924;
  double t40965;
  double t40966;
  double t40968;
  double t40811;
  double t40874;
  double t40876;
  double t40963;
  double t40969;
  double t40970;
  double t40972;
  double t40973;
  double t40988;
  double t40216;
  double t40572;
  double t40584;
  double t40882;
  double t40993;
  double t41012;
  double t41020;
  double t41035;
  double t41041;
  double t41056;
  double t41062;
  t40185 = Cos(var1[13]);
  t1576 = Cos(var1[14]);
  t19373 = Sin(var1[13]);
  t40202 = Sin(var1[14]);
  t40507 = t40185*t1576;
  t40509 = t19373*t40202;
  t40515 = t40507 + t40509;
  t40238 = Cos(var1[4]);
  t40496 = Cos(var1[5]);
  t40520 = Sin(var1[12]);
  t40295 = Cos(var1[12]);
  t40528 = Sin(var1[5]);
  t40209 = Sin(var1[4]);
  t40601 = t1576*t19373;
  t40602 = -1.*t40185*t40202;
  t40603 = t40601 + t40602;
  t39782 = -1.*t1576*t19373;
  t40206 = t40185*t40202;
  t40207 = t39782 + t40206;
  t40517 = t40295*t40496*t40515;
  t40536 = -1.*t40520*t40515*t40528;
  t40561 = t40517 + t40536;
  t40624 = Sin(var1[3]);
  t40586 = -1.*t40496*t40520;
  t40587 = -1.*t40295*t40528;
  t40588 = t40586 + t40587;
  t40614 = Cos(var1[3]);
  t40604 = t40295*t40496*t40603;
  t40605 = -1.*t40520*t40603*t40528;
  t40606 = t40604 + t40605;
  t40619 = t40496*t40520*t40515;
  t40620 = t40295*t40515*t40528;
  t40621 = t40619 + t40620;
  t40628 = t40238*t40207;
  t40638 = -1.*t40209*t40561;
  t40663 = t40628 + t40638;
  t40681 = t40295*t40496;
  t40682 = -1.*t40520*t40528;
  t40688 = t40681 + t40682;
  t40693 = t40496*t40520*t40603;
  t40699 = t40295*t40603*t40528;
  t40701 = t40693 + t40699;
  t40704 = t40238*t40515;
  t40715 = -1.*t40209*t40606;
  t40716 = t40704 + t40715;
  t40597 = t40515*t40209;
  t40608 = t40238*t40606;
  t40609 = t40597 + t40608;
  t40750 = -1.*t40295;
  t40763 = 1. + t40750;
  t40772 = -1.*t40185;
  t40773 = 1. + t40772;
  t40774 = 0.28121*t40773;
  t40776 = -1.*t1576;
  t40777 = 1. + t40776;
  t40778 = 0.50321*t40777;
  t40779 = 0.23321*t1576;
  t40782 = t40778 + t40779;
  t40783 = t40185*t40782;
  t40784 = -0.27*t19373*t40202;
  t40785 = t40774 + t40783 + t40784;
  t40816 = 0.15121*t40763;
  t40845 = t40295*t40785;
  t40852 = t40816 + t40845;
  t40768 = -0.15121*t40763;
  t40770 = -0.15121*t40295;
  t40771 = -0.15121*t40520;
  t40786 = t40520*t40785;
  t40788 = t40768 + t40770 + t40771 + t40786;
  t40884 = 0.28121*t19373;
  t40912 = -1.*t40782*t19373;
  t40923 = -0.27*t40185*t40202;
  t40924 = t40884 + t40912 + t40923;
  t40965 = t40496*t40852;
  t40966 = -1.*t40788*t40528;
  t40968 = t40965 + t40966;
  t40811 = t40496*t40788;
  t40874 = t40852*t40528;
  t40876 = t40811 + t40874;
  t40963 = t40924*t40209;
  t40969 = t40238*t40968;
  t40970 = t40963 + t40969;
  t40972 = t40238*t40924;
  t40973 = -1.*t40209*t40968;
  t40988 = t40972 + t40973;
  t40216 = t40207*t40209;
  t40572 = t40238*t40561;
  t40584 = t40216 + t40572;
  t40882 = -1.*t40688*t40876;
  t40993 = t40701*t40876;
  t41012 = -1.*t40701*t40876;
  t41020 = t40621*t40876;
  t41035 = t40688*t40876;
  t41041 = -1.*t40621*t40876;
  t41056 = -1.*t40924*t40515;
  t41062 = t40924*t40207;
  p_output1[0]=t40584;
  p_output1[1]=t40238*t40588;
  p_output1[2]=t40609;
  p_output1[3]=t40614*t40621 - 1.*t40624*t40663;
  p_output1[4]=t40209*t40588*t40624 + t40614*t40688;
  p_output1[5]=t40614*t40701 - 1.*t40624*t40716;
  p_output1[6]=t40621*t40624 + t40614*t40663;
  p_output1[7]=-1.*t40209*t40588*t40614 + t40624*t40688;
  p_output1[8]=t40624*t40701 + t40614*t40716;
  p_output1[9]=t40609*(t40882 - 1.*t40238*t40588*t40970 + t40209*t40588*t40988) + t40238*t40588*(t40609*t40970 + t40716*t40988 + t40993);
  p_output1[10]=t40584*(-1.*t40609*t40970 - 1.*t40716*t40988 + t41012) + t40609*(t40584*t40970 + t40663*t40988 + t41020);
  p_output1[11]=t40584*(t40238*t40588*t40970 - 1.*t40209*t40588*t40988 + t41035) + t40238*t40588*(-1.*t40584*t40970 - 1.*t40663*t40988 + t41041);
  p_output1[12]=t40701*(t40882 - 1.*t40588*t40968) + t40688*(t40515*t40924 + t40606*t40968 + t40993);
  p_output1[13]=t40621*(-1.*t40606*t40968 + t41012 + t41056) + t40701*(t40561*t40968 + t41020 + t41062);
  p_output1[14]=t40621*(t40588*t40968 + t41035) + t40688*(-1.*t40207*t40924 - 1.*t40561*t40968 + t41041);
  p_output1[15]=t40515*(-1.*t40295*t40788 + t40520*t40852);
  p_output1[16]=t40207*(-1.*t40520*t40603*t40788 - 1.*t40295*t40603*t40852 + t41056) + t40515*(t40515*t40520*t40788 + t40295*t40515*t40852 + t41062);
  p_output1[17]=t40207*(t40295*t40788 - 1.*t40520*t40852);
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
  p_output1[37]=-0.15121 + t40207*(-1.*t40603*t40785 + t41056) + t40515*(t40515*t40785 + t41062);
  p_output1[38]=-0.15121*t40207 - 0.15121*t40603;
  p_output1[39]=0.28121*t40202 - 0.27*t1576*t40202 - 1.*t40202*t40782;
  p_output1[40]=0;
  p_output1[41]=0.28121*t1576 + 0.27*Power(t40202,2) - 1.*t1576*t40782;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.27;
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
