/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:36 GMT+02:00
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
  double t26126;
  double t81;
  double t4046;
  double t27241;
  double t29867;
  double t29868;
  double t30137;
  double t27860;
  double t29388;
  double t32035;
  double t28566;
  double t32609;
  double t27355;
  double t25207;
  double t27261;
  double t27352;
  double t31390;
  double t33863;
  double t35459;
  double t45285;
  double t41091;
  double t41213;
  double t41280;
  double t44852;
  double t42897;
  double t43457;
  double t44358;
  double t44654;
  double t44780;
  double t44783;
  double t45202;
  double t45207;
  double t45248;
  double t45352;
  double t45354;
  double t45358;
  double t45752;
  double t45785;
  double t45800;
  double t45816;
  double t45818;
  double t45824;
  double t46304;
  double t46412;
  double t46413;
  double t44472;
  double t44827;
  double t44844;
  double t46444;
  double t46457;
  double t46483;
  double t46484;
  double t46489;
  double t46490;
  double t46492;
  double t46545;
  double t46549;
  double t46550;
  double t46551;
  double t46565;
  double t46566;
  double t46578;
  double t46579;
  double t46591;
  double t46469;
  double t46471;
  double t46475;
  double t46567;
  double t46575;
  double t46598;
  double t46600;
  double t46601;
  double t46610;
  double t46615;
  double t46616;
  double t46619;
  double t46577;
  double t46592;
  double t46593;
  double t46614;
  double t46621;
  double t46635;
  double t46640;
  double t46642;
  double t46643;
  double t27533;
  double t40989;
  double t41061;
  double t46597;
  double t46659;
  double t46666;
  double t46679;
  double t46699;
  double t46751;
  double t46814;
  double t46840;
  t26126 = Cos(var1[10]);
  t81 = Cos(var1[11]);
  t4046 = Sin(var1[10]);
  t27241 = Sin(var1[11]);
  t29867 = -1.*t26126*t81;
  t29868 = -1.*t4046*t27241;
  t30137 = t29867 + t29868;
  t27860 = Cos(var1[4]);
  t29388 = Cos(var1[5]);
  t32035 = Sin(var1[9]);
  t28566 = Cos(var1[9]);
  t32609 = Sin(var1[5]);
  t27355 = Sin(var1[4]);
  t25207 = -1.*t81*t4046;
  t27261 = t26126*t27241;
  t27352 = t25207 + t27261;
  t31390 = t28566*t29388*t30137;
  t33863 = -1.*t32035*t30137*t32609;
  t35459 = t31390 + t33863;
  t45285 = Sin(var1[3]);
  t41091 = t29388*t32035;
  t41213 = t28566*t32609;
  t41280 = t41091 + t41213;
  t44852 = Cos(var1[3]);
  t42897 = t26126*t81;
  t43457 = t4046*t27241;
  t44358 = t42897 + t43457;
  t44654 = t28566*t29388*t27352;
  t44780 = -1.*t32035*t27352*t32609;
  t44783 = t44654 + t44780;
  t45202 = t29388*t32035*t30137;
  t45207 = t28566*t30137*t32609;
  t45248 = t45202 + t45207;
  t45352 = t27860*t27352;
  t45354 = -1.*t27355*t35459;
  t45358 = t45352 + t45354;
  t45752 = -1.*t28566*t29388;
  t45785 = t32035*t32609;
  t45800 = t45752 + t45785;
  t45816 = t29388*t32035*t27352;
  t45818 = t28566*t27352*t32609;
  t45824 = t45816 + t45818;
  t46304 = t27860*t44358;
  t46412 = -1.*t27355*t44783;
  t46413 = t46304 + t46412;
  t44472 = t44358*t27355;
  t44827 = t27860*t44783;
  t44844 = t44472 + t44827;
  t46444 = -1.*t28566;
  t46457 = 1. + t46444;
  t46483 = -1.*t26126;
  t46484 = 1. + t46483;
  t46489 = -0.28121*t46484;
  t46490 = -1.*t81;
  t46492 = 1. + t46490;
  t46545 = -0.50321*t46492;
  t46549 = -0.23321*t81;
  t46550 = t46545 + t46549;
  t46551 = t26126*t46550;
  t46565 = 0.27*t4046*t27241;
  t46566 = t46489 + t46551 + t46565;
  t46578 = -0.15121*t46457;
  t46579 = t28566*t46566;
  t46591 = t46578 + t46579;
  t46469 = 0.15121*t46457;
  t46471 = 0.15121*t28566;
  t46475 = 0.15121*t32035;
  t46567 = t32035*t46566;
  t46575 = t46469 + t46471 + t46475 + t46567;
  t46598 = 0.28121*t4046;
  t46600 = t46550*t4046;
  t46601 = -0.27*t26126*t27241;
  t46610 = t46598 + t46600 + t46601;
  t46615 = t29388*t46591;
  t46616 = -1.*t46575*t32609;
  t46619 = t46615 + t46616;
  t46577 = t29388*t46575;
  t46592 = t46591*t32609;
  t46593 = t46577 + t46592;
  t46614 = t46610*t27355;
  t46621 = t27860*t46619;
  t46635 = t46614 + t46621;
  t46640 = t27860*t46610;
  t46642 = -1.*t27355*t46619;
  t46643 = t46640 + t46642;
  t27533 = t27352*t27355;
  t40989 = t27860*t35459;
  t41061 = t27533 + t40989;
  t46597 = -1.*t45800*t46593;
  t46659 = t45824*t46593;
  t46666 = -1.*t45824*t46593;
  t46679 = t45248*t46593;
  t46699 = t45800*t46593;
  t46751 = -1.*t45248*t46593;
  t46814 = -1.*t46610*t44358;
  t46840 = t46610*t27352;
  p_output1[0]=t41061;
  p_output1[1]=t27860*t41280;
  p_output1[2]=t44844;
  p_output1[3]=t44852*t45248 - 1.*t45285*t45358;
  p_output1[4]=t27355*t41280*t45285 + t44852*t45800;
  p_output1[5]=t44852*t45824 - 1.*t45285*t46413;
  p_output1[6]=t45248*t45285 + t44852*t45358;
  p_output1[7]=-1.*t27355*t41280*t44852 + t45285*t45800;
  p_output1[8]=t45285*t45824 + t44852*t46413;
  p_output1[9]=t44844*(t46597 - 1.*t27860*t41280*t46635 + t27355*t41280*t46643) + t27860*t41280*(t44844*t46635 + t46413*t46643 + t46659);
  p_output1[10]=t41061*(-1.*t44844*t46635 - 1.*t46413*t46643 + t46666) + t44844*(t41061*t46635 + t45358*t46643 + t46679);
  p_output1[11]=t41061*(t27860*t41280*t46635 - 1.*t27355*t41280*t46643 + t46699) + t27860*t41280*(-1.*t41061*t46635 - 1.*t45358*t46643 + t46751);
  p_output1[12]=t45824*(t46597 - 1.*t41280*t46619) + t45800*(t44358*t46610 + t44783*t46619 + t46659);
  p_output1[13]=t45248*(-1.*t44783*t46619 + t46666 + t46814) + t45824*(t35459*t46619 + t46679 + t46840);
  p_output1[14]=t45248*(t41280*t46619 + t46699) + t45800*(-1.*t27352*t46610 - 1.*t35459*t46619 + t46751);
  p_output1[15]=t44358*(t28566*t46575 - 1.*t32035*t46591);
  p_output1[16]=t27352*(-1.*t27352*t32035*t46575 - 1.*t27352*t28566*t46591 + t46814) + t44358*(t30137*t32035*t46575 + t28566*t30137*t46591 + t46840);
  p_output1[17]=t27352*(-1.*t28566*t46575 + t32035*t46591);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t30137 + 0.15121*t44358;
  p_output1[28]=-0.15121 + t27352*(-1.*t27352*t46566 + t46814) + t44358*(t30137*t46566 + t46840);
  p_output1[29]=0;
  p_output1[30]=0.28121*t27241 + t27241*t46550 - 0.27*t27241*t81;
  p_output1[31]=0;
  p_output1[32]=0.27*Power(t27241,2) + 0.28121*t81 + t46550*t81;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.27;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "Jh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
