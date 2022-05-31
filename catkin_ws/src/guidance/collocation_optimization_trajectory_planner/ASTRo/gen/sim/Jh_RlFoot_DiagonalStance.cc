/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:33 GMT+02:00
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
  double t31570;
  double t7913;
  double t7935;
  double t32473;
  double t39677;
  double t40692;
  double t40872;
  double t33083;
  double t34636;
  double t44706;
  double t34614;
  double t44707;
  double t33032;
  double t30314;
  double t32493;
  double t33018;
  double t44543;
  double t44718;
  double t44722;
  double t46901;
  double t44751;
  double t44761;
  double t44859;
  double t46838;
  double t45044;
  double t45046;
  double t45195;
  double t45283;
  double t45294;
  double t45296;
  double t46839;
  double t46856;
  double t46861;
  double t46902;
  double t46913;
  double t46918;
  double t46944;
  double t46979;
  double t46980;
  double t46999;
  double t47001;
  double t47003;
  double t47005;
  double t47022;
  double t47023;
  double t45202;
  double t46830;
  double t46836;
  double t47048;
  double t47049;
  double t47559;
  double t47693;
  double t47696;
  double t47699;
  double t47701;
  double t47703;
  double t47704;
  double t47705;
  double t47716;
  double t47718;
  double t47722;
  double t47846;
  double t47847;
  double t47858;
  double t47056;
  double t47060;
  double t47061;
  double t47726;
  double t47823;
  double t47894;
  double t47896;
  double t47902;
  double t47903;
  double t47914;
  double t47926;
  double t47928;
  double t47845;
  double t47861;
  double t47887;
  double t47913;
  double t47934;
  double t47959;
  double t48000;
  double t48006;
  double t48008;
  double t33080;
  double t44725;
  double t44739;
  double t47888;
  double t51410;
  double t51949;
  double t52125;
  double t52287;
  double t52329;
  double t53134;
  double t53262;
  t31570 = Cos(var1[10]);
  t7913 = Cos(var1[11]);
  t7935 = Sin(var1[10]);
  t32473 = Sin(var1[11]);
  t39677 = -1.*t31570*t7913;
  t40692 = -1.*t7935*t32473;
  t40872 = t39677 + t40692;
  t33083 = Cos(var1[4]);
  t34636 = Cos(var1[5]);
  t44706 = Sin(var1[9]);
  t34614 = Cos(var1[9]);
  t44707 = Sin(var1[5]);
  t33032 = Sin(var1[4]);
  t30314 = -1.*t7913*t7935;
  t32493 = t31570*t32473;
  t33018 = t30314 + t32493;
  t44543 = t34614*t34636*t40872;
  t44718 = -1.*t44706*t40872*t44707;
  t44722 = t44543 + t44718;
  t46901 = Sin(var1[3]);
  t44751 = t34636*t44706;
  t44761 = t34614*t44707;
  t44859 = t44751 + t44761;
  t46838 = Cos(var1[3]);
  t45044 = t31570*t7913;
  t45046 = t7935*t32473;
  t45195 = t45044 + t45046;
  t45283 = t34614*t34636*t33018;
  t45294 = -1.*t44706*t33018*t44707;
  t45296 = t45283 + t45294;
  t46839 = t34636*t44706*t40872;
  t46856 = t34614*t40872*t44707;
  t46861 = t46839 + t46856;
  t46902 = t33083*t33018;
  t46913 = -1.*t33032*t44722;
  t46918 = t46902 + t46913;
  t46944 = -1.*t34614*t34636;
  t46979 = t44706*t44707;
  t46980 = t46944 + t46979;
  t46999 = t34636*t44706*t33018;
  t47001 = t34614*t33018*t44707;
  t47003 = t46999 + t47001;
  t47005 = t33083*t45195;
  t47022 = -1.*t33032*t45296;
  t47023 = t47005 + t47022;
  t45202 = t45195*t33032;
  t46830 = t33083*t45296;
  t46836 = t45202 + t46830;
  t47048 = -1.*t34614;
  t47049 = 1. + t47048;
  t47559 = -1.*t31570;
  t47693 = 1. + t47559;
  t47696 = -0.28121*t47693;
  t47699 = -1.*t7913;
  t47701 = 1. + t47699;
  t47703 = -0.50321*t47701;
  t47704 = -0.19821*t7913;
  t47705 = t47703 + t47704;
  t47716 = t31570*t47705;
  t47718 = 0.305*t7935*t32473;
  t47722 = t47696 + t47716 + t47718;
  t47846 = -0.15121*t47049;
  t47847 = t34614*t47722;
  t47858 = t47846 + t47847;
  t47056 = 0.15121*t47049;
  t47060 = 0.15121*t34614;
  t47061 = 0.15121*t44706;
  t47726 = t44706*t47722;
  t47823 = t47056 + t47060 + t47061 + t47726;
  t47894 = 0.28121*t7935;
  t47896 = t47705*t7935;
  t47902 = -0.305*t31570*t32473;
  t47903 = t47894 + t47896 + t47902;
  t47914 = t34636*t47858;
  t47926 = -1.*t47823*t44707;
  t47928 = t47914 + t47926;
  t47845 = t34636*t47823;
  t47861 = t47858*t44707;
  t47887 = t47845 + t47861;
  t47913 = t47903*t33032;
  t47934 = t33083*t47928;
  t47959 = t47913 + t47934;
  t48000 = t33083*t47903;
  t48006 = -1.*t33032*t47928;
  t48008 = t48000 + t48006;
  t33080 = t33018*t33032;
  t44725 = t33083*t44722;
  t44739 = t33080 + t44725;
  t47888 = -1.*t46980*t47887;
  t51410 = t47003*t47887;
  t51949 = -1.*t47003*t47887;
  t52125 = t46861*t47887;
  t52287 = t46980*t47887;
  t52329 = -1.*t46861*t47887;
  t53134 = -1.*t47903*t45195;
  t53262 = t47903*t33018;
  p_output1[0]=t44739;
  p_output1[1]=t33083*t44859;
  p_output1[2]=t46836;
  p_output1[3]=t46838*t46861 - 1.*t46901*t46918;
  p_output1[4]=t33032*t44859*t46901 + t46838*t46980;
  p_output1[5]=t46838*t47003 - 1.*t46901*t47023;
  p_output1[6]=t46861*t46901 + t46838*t46918;
  p_output1[7]=-1.*t33032*t44859*t46838 + t46901*t46980;
  p_output1[8]=t46901*t47003 + t46838*t47023;
  p_output1[9]=t46836*(t47888 - 1.*t33083*t44859*t47959 + t33032*t44859*t48008) + t33083*t44859*(t46836*t47959 + t47023*t48008 + t51410);
  p_output1[10]=t44739*(-1.*t46836*t47959 - 1.*t47023*t48008 + t51949) + t46836*(t44739*t47959 + t46918*t48008 + t52125);
  p_output1[11]=t44739*(t33083*t44859*t47959 - 1.*t33032*t44859*t48008 + t52287) + t33083*t44859*(-1.*t44739*t47959 - 1.*t46918*t48008 + t52329);
  p_output1[12]=t47003*(t47888 - 1.*t44859*t47928) + t46980*(t45195*t47903 + t45296*t47928 + t51410);
  p_output1[13]=t46861*(-1.*t45296*t47928 + t51949 + t53134) + t47003*(t44722*t47928 + t52125 + t53262);
  p_output1[14]=t46861*(t44859*t47928 + t52287) + t46980*(-1.*t33018*t47903 - 1.*t44722*t47928 + t52329);
  p_output1[15]=t45195*(t34614*t47823 - 1.*t44706*t47858);
  p_output1[16]=t33018*(-1.*t33018*t44706*t47823 - 1.*t33018*t34614*t47858 + t53134) + t45195*(t40872*t44706*t47823 + t34614*t40872*t47858 + t53262);
  p_output1[17]=t33018*(-1.*t34614*t47823 + t44706*t47858);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t40872 + 0.15121*t45195;
  p_output1[28]=-0.15121 + t33018*(-1.*t33018*t47722 + t53134) + t45195*(t40872*t47722 + t53262);
  p_output1[29]=0;
  p_output1[30]=0.28121*t32473 + t32473*t47705 - 0.305*t32473*t7913;
  p_output1[31]=0;
  p_output1[32]=0.305*Power(t32473,2) + 0.28121*t7913 + t47705*t7913;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
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

#include "Jh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
