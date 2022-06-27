/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:25 GMT+02:00
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
  double t491;
  double t30;
  double t93;
  double t514;
  double t1464;
  double t2873;
  double t2876;
  double t860;
  double t917;
  double t7490;
  double t916;
  double t9694;
  double t822;
  double t484;
  double t627;
  double t689;
  double t4773;
  double t10037;
  double t10103;
  double t14544;
  double t10661;
  double t10831;
  double t11013;
  double t14383;
  double t11365;
  double t11857;
  double t13625;
  double t13880;
  double t13898;
  double t13917;
  double t14390;
  double t14430;
  double t14441;
  double t14575;
  double t14576;
  double t14800;
  double t15066;
  double t15199;
  double t15669;
  double t16209;
  double t16304;
  double t16392;
  double t16400;
  double t16418;
  double t16419;
  double t13724;
  double t14199;
  double t14285;
  double t16544;
  double t16546;
  double t16564;
  double t16619;
  double t16626;
  double t16628;
  double t16633;
  double t16649;
  double t16667;
  double t16670;
  double t16671;
  double t16672;
  double t16674;
  double t16676;
  double t16683;
  double t16684;
  double t16603;
  double t16605;
  double t16677;
  double t16678;
  double t16696;
  double t16697;
  double t16698;
  double t16702;
  double t16712;
  double t16713;
  double t16714;
  double t16681;
  double t16692;
  double t16693;
  double t16711;
  double t16756;
  double t16778;
  double t16780;
  double t16838;
  double t16890;
  double t826;
  double t10330;
  double t10629;
  double t16695;
  double t16918;
  double t16939;
  double t16947;
  double t17076;
  double t17098;
  double t17180;
  double t17192;
  t491 = Cos(var1[16]);
  t30 = Cos(var1[17]);
  t93 = Sin(var1[16]);
  t514 = Sin(var1[17]);
  t1464 = -1.*t491*t30;
  t2873 = -1.*t93*t514;
  t2876 = t1464 + t2873;
  t860 = Cos(var1[4]);
  t917 = Cos(var1[5]);
  t7490 = Sin(var1[15]);
  t916 = Cos(var1[15]);
  t9694 = Sin(var1[5]);
  t822 = Sin(var1[4]);
  t484 = -1.*t30*t93;
  t627 = t491*t514;
  t689 = t484 + t627;
  t4773 = t916*t917*t2876;
  t10037 = -1.*t7490*t2876*t9694;
  t10103 = t4773 + t10037;
  t14544 = Sin(var1[3]);
  t10661 = t917*t7490;
  t10831 = t916*t9694;
  t11013 = t10661 + t10831;
  t14383 = Cos(var1[3]);
  t11365 = t491*t30;
  t11857 = t93*t514;
  t13625 = t11365 + t11857;
  t13880 = t916*t917*t689;
  t13898 = -1.*t7490*t689*t9694;
  t13917 = t13880 + t13898;
  t14390 = t917*t7490*t2876;
  t14430 = t916*t2876*t9694;
  t14441 = t14390 + t14430;
  t14575 = t860*t689;
  t14576 = -1.*t822*t10103;
  t14800 = t14575 + t14576;
  t15066 = -1.*t916*t917;
  t15199 = t7490*t9694;
  t15669 = t15066 + t15199;
  t16209 = t917*t7490*t689;
  t16304 = t916*t689*t9694;
  t16392 = t16209 + t16304;
  t16400 = t860*t13625;
  t16418 = -1.*t822*t13917;
  t16419 = t16400 + t16418;
  t13724 = t13625*t822;
  t14199 = t860*t13917;
  t14285 = t13724 + t14199;
  t16544 = -1.*t916;
  t16546 = 1. + t16544;
  t16564 = -0.15121*t16546;
  t16619 = -1.*t491;
  t16626 = 1. + t16619;
  t16628 = -0.28121*t16626;
  t16633 = -1.*t30;
  t16649 = 1. + t16633;
  t16667 = -0.50321*t16649;
  t16670 = -0.19821*t30;
  t16671 = t16667 + t16670;
  t16672 = t491*t16671;
  t16674 = 0.305*t93*t514;
  t16676 = t16628 + t16672 + t16674;
  t16683 = t916*t16676;
  t16684 = t16564 + t16683;
  t16603 = -0.15121*t916;
  t16605 = 0.15121*t7490;
  t16677 = t7490*t16676;
  t16678 = t16564 + t16603 + t16605 + t16677;
  t16696 = 0.28121*t93;
  t16697 = t16671*t93;
  t16698 = -0.305*t491*t514;
  t16702 = t16696 + t16697 + t16698;
  t16712 = t917*t16684;
  t16713 = -1.*t16678*t9694;
  t16714 = t16712 + t16713;
  t16681 = t917*t16678;
  t16692 = t16684*t9694;
  t16693 = t16681 + t16692;
  t16711 = t16702*t822;
  t16756 = t860*t16714;
  t16778 = t16711 + t16756;
  t16780 = t860*t16702;
  t16838 = -1.*t822*t16714;
  t16890 = t16780 + t16838;
  t826 = t689*t822;
  t10330 = t860*t10103;
  t10629 = t826 + t10330;
  t16695 = -1.*t15669*t16693;
  t16918 = t16392*t16693;
  t16939 = -1.*t16392*t16693;
  t16947 = t14441*t16693;
  t17076 = t15669*t16693;
  t17098 = -1.*t14441*t16693;
  t17180 = -1.*t16702*t13625;
  t17192 = t16702*t689;
  p_output1[0]=t10629;
  p_output1[1]=t11013*t860;
  p_output1[2]=t14285;
  p_output1[3]=t14383*t14441 - 1.*t14544*t14800;
  p_output1[4]=t14383*t15669 + t11013*t14544*t822;
  p_output1[5]=t14383*t16392 - 1.*t14544*t16419;
  p_output1[6]=t14441*t14544 + t14383*t14800;
  p_output1[7]=t14544*t15669 - 1.*t11013*t14383*t822;
  p_output1[8]=t14544*t16392 + t14383*t16419;
  p_output1[9]=t11013*(t14285*t16778 + t16419*t16890 + t16918)*t860 + t14285*(t16695 + t11013*t16890*t822 - 1.*t11013*t16778*t860);
  p_output1[10]=t10629*(-1.*t14285*t16778 - 1.*t16419*t16890 + t16939) + t14285*(t10629*t16778 + t14800*t16890 + t16947);
  p_output1[11]=t11013*(-1.*t10629*t16778 - 1.*t14800*t16890 + t17098)*t860 + t10629*(t17076 - 1.*t11013*t16890*t822 + t11013*t16778*t860);
  p_output1[12]=t16392*(t16695 - 1.*t11013*t16714) + t15669*(t13625*t16702 + t13917*t16714 + t16918);
  p_output1[13]=t14441*(-1.*t13917*t16714 + t16939 + t17180) + t16392*(t10103*t16714 + t16947 + t17192);
  p_output1[14]=t14441*(t11013*t16714 + t17076) + t15669*(-1.*t10103*t16714 + t17098 - 1.*t16702*t689);
  p_output1[15]=t13625*(-1.*t16684*t7490 + t16678*t916);
  p_output1[16]=t13625*(t17192 + t16678*t2876*t7490 + t16684*t2876*t916) + t689*(t17180 - 1.*t16678*t689*t7490 - 1.*t16684*t689*t916);
  p_output1[17]=t689*(t16684*t7490 - 1.*t16678*t916);
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
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t13625 - 0.15121*t2876;
  p_output1[46]=-0.15121 + t13625*(t17192 + t16676*t2876) + t689*(t17180 - 1.*t16676*t689);
  p_output1[47]=0;
  p_output1[48]=0.28121*t514 + t16671*t514 - 0.305*t30*t514;
  p_output1[49]=0;
  p_output1[50]=0.28121*t30 + t16671*t30 + 0.305*Power(t514,2);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.305;
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

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
