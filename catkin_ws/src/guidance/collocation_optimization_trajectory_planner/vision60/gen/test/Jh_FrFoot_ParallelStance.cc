/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:28 GMT+02:00
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
  double t28350;
  double t28310;
  double t28328;
  double t28351;
  double t28349;
  double t28353;
  double t28354;
  double t28442;
  double t28360;
  double t23673;
  double t28431;
  double t28447;
  double t28436;
  double t28437;
  double t28438;
  double t28432;
  double t28439;
  double t28448;
  double t28454;
  double t28524;
  double t28533;
  double t28487;
  double t28488;
  double t28502;
  double t28510;
  double t28515;
  double t28517;
  double t28525;
  double t28528;
  double t28530;
  double t28536;
  double t28537;
  double t28543;
  double t28550;
  double t28551;
  double t28557;
  double t28568;
  double t28570;
  double t28571;
  double t28573;
  double t28574;
  double t28575;
  double t28486;
  double t28518;
  double t28520;
  double t28593;
  double t28594;
  double t28595;
  double t28597;
  double t28598;
  double t28599;
  double t28601;
  double t28602;
  double t28603;
  double t28464;
  double t28479;
  double t28484;
  double t28592;
  double t28596;
  double t28605;
  double t28606;
  double t28610;
  double t28611;
  double t28612;
  double t28613;
  double t28614;
  double t28615;
  double t28588;
  double t28589;
  double t28590;
  double t28591;
  double t28607;
  double t28608;
  double t28619;
  double t28620;
  double t28621;
  double t28626;
  double t28627;
  double t28628;
  double t28609;
  double t28616;
  double t28617;
  double t28622;
  double t28629;
  double t28630;
  double t28632;
  double t28633;
  double t28636;
  double t28366;
  double t28456;
  double t28458;
  double t28618;
  double t28644;
  double t28662;
  double t28667;
  double t28681;
  double t28689;
  double t28698;
  double t28702;
  double t28717;
  double t28709;
  double t28722;
  double t28726;
  double t28747;
  double t28742;
  t28350 = Cos(var1[13]);
  t28310 = Cos(var1[14]);
  t28328 = Sin(var1[13]);
  t28351 = Sin(var1[14]);
  t28349 = t28310*t28328;
  t28353 = -1.*t28350*t28351;
  t28354 = t28349 + t28353;
  t28442 = Sin(var1[12]);
  t28360 = Sin(var1[4]);
  t23673 = Cos(var1[12]);
  t28431 = Cos(var1[4]);
  t28447 = Sin(var1[5]);
  t28436 = t28350*t28310;
  t28437 = t28328*t28351;
  t28438 = t28436 + t28437;
  t28432 = Cos(var1[5]);
  t28439 = t28432*t28438;
  t28448 = t28442*t28354*t28447;
  t28454 = t28439 + t28448;
  t28524 = Cos(var1[3]);
  t28533 = Sin(var1[3]);
  t28487 = -1.*t28310*t28328;
  t28488 = t28350*t28351;
  t28502 = t28487 + t28488;
  t28510 = t28432*t28502;
  t28515 = t28442*t28438*t28447;
  t28517 = t28510 + t28515;
  t28525 = -1.*t28432*t28442*t28354;
  t28528 = t28438*t28447;
  t28530 = t28525 + t28528;
  t28536 = t23673*t28431*t28354;
  t28537 = -1.*t28360*t28454;
  t28543 = t28536 + t28537;
  t28550 = t28431*t28442;
  t28551 = t23673*t28360*t28447;
  t28557 = t28550 + t28551;
  t28568 = -1.*t28432*t28442*t28438;
  t28570 = t28502*t28447;
  t28571 = t28568 + t28570;
  t28573 = t23673*t28431*t28438;
  t28574 = -1.*t28360*t28517;
  t28575 = t28573 + t28574;
  t28486 = t23673*t28438*t28360;
  t28518 = t28431*t28517;
  t28520 = t28486 + t28518;
  t28593 = -0.0641*t28310;
  t28594 = -0.28*t28351;
  t28595 = t28593 + t28594;
  t28597 = -1.*t28310;
  t28598 = 1. + t28597;
  t28599 = 0.075*t28598;
  t28601 = 0.355*t28310;
  t28602 = -0.0641*t28351;
  t28603 = t28599 + t28601 + t28602;
  t28464 = t28442*t28360;
  t28479 = -1.*t23673*t28431*t28447;
  t28484 = t28464 + t28479;
  t28592 = -0.325*t28328;
  t28596 = t28350*t28595;
  t28605 = t28328*t28603;
  t28606 = t28592 + t28596 + t28605;
  t28610 = -1.*t28350;
  t28611 = 1. + t28610;
  t28612 = 0.325*t28611;
  t28613 = -1.*t28328*t28595;
  t28614 = t28350*t28603;
  t28615 = t28612 + t28613 + t28614;
  t28588 = -1.*t23673;
  t28589 = 1. + t28588;
  t28590 = -0.1575*t28589;
  t28591 = -0.2255*t23673;
  t28607 = -1.*t28442*t28606;
  t28608 = t28590 + t28591 + t28607;
  t28619 = -0.068*t28442;
  t28620 = t23673*t28606;
  t28621 = t28619 + t28620;
  t28626 = t28432*t28615;
  t28627 = -1.*t28608*t28447;
  t28628 = t28626 + t28627;
  t28609 = t28432*t28608;
  t28616 = t28615*t28447;
  t28617 = t28609 + t28616;
  t28622 = t28621*t28360;
  t28629 = t28431*t28628;
  t28630 = t28622 + t28629;
  t28632 = t28431*t28621;
  t28633 = -1.*t28360*t28628;
  t28636 = t28632 + t28633;
  t28366 = t23673*t28354*t28360;
  t28456 = t28431*t28454;
  t28458 = t28366 + t28456;
  t28618 = -1.*t23673*t28432*t28617;
  t28644 = t28617*t28571;
  t28662 = t28617*t28530;
  t28667 = -1.*t28617*t28571;
  t28681 = t23673*t28432*t28617;
  t28689 = -1.*t28617*t28530;
  t28698 = -1.*t28442*t28621;
  t28702 = t23673*t28621*t28438;
  t28717 = -1.*t23673*t28621*t28438;
  t28709 = t23673*t28621*t28354;
  t28722 = t28442*t28621;
  t28726 = -1.*t23673*t28621*t28354;
  t28747 = t28615*t28438;
  t28742 = -1.*t28615*t28502;
  p_output1[0]=t28458;
  p_output1[1]=t28484;
  p_output1[2]=t28520;
  p_output1[3]=t28524*t28530 - 1.*t28533*t28543;
  p_output1[4]=t23673*t28432*t28524 - 1.*t28533*t28557;
  p_output1[5]=t28524*t28571 - 1.*t28533*t28575;
  p_output1[6]=t28530*t28533 + t28524*t28543;
  p_output1[7]=t23673*t28432*t28533 + t28524*t28557;
  p_output1[8]=t28533*t28571 + t28524*t28575;
  p_output1[9]=t28520*(t28618 - 1.*t28484*t28630 - 1.*t28557*t28636) + t28484*(t28520*t28630 + t28575*t28636 + t28644);
  p_output1[10]=t28520*(t28458*t28630 + t28543*t28636 + t28662) + t28458*(-1.*t28520*t28630 - 1.*t28575*t28636 + t28667);
  p_output1[11]=t28458*(t28484*t28630 + t28557*t28636 + t28681) + t28484*(-1.*t28458*t28630 - 1.*t28543*t28636 + t28689);
  p_output1[12]=t28571*(t28618 + t23673*t28447*t28628 + t28698) + t23673*t28432*(t28517*t28628 + t28644 + t28702);
  p_output1[13]=t28571*(t28454*t28628 + t28662 + t28709) + t28530*(-1.*t28517*t28628 + t28667 + t28717);
  p_output1[14]=t28530*(-1.*t23673*t28447*t28628 + t28681 + t28722) + t23673*t28432*(-1.*t28454*t28628 + t28689 + t28726);
  p_output1[15]=t23673*t28438*(-1.*t23673*t28608 + t28698) + t28442*(-1.*t28438*t28442*t28608 + t28502*t28615 + t28702);
  p_output1[16]=t23673*t28354*(t28438*t28442*t28608 + t28717 + t28742) + t23673*t28438*(-1.*t28354*t28442*t28608 + t28709 + t28747);
  p_output1[17]=t23673*t28354*(t23673*t28608 + t28722) + t28442*(t28354*t28442*t28608 - 1.*t28438*t28615 + t28726);
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
  p_output1[36]=0.1575*t28354 + 0.2255*t28502;
  p_output1[37]=t28438*(-1.*t28438*t28606 + t28742) + t28502*(t28354*t28606 + t28747);
  p_output1[38]=-0.068*t28438;
  p_output1[39]=0.325*t28351 - 1.*t28310*t28595 - 1.*t28351*t28603;
  p_output1[40]=0;
  p_output1[41]=-0.325*t28310 - 1.*t28351*t28595 + t28310*t28603;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
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
