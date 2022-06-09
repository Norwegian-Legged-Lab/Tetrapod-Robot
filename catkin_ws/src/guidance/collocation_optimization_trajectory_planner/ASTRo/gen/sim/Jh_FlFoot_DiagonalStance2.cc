/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:45 GMT+02:00
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
  double t14681;
  double t4076;
  double t4303;
  double t14700;
  double t14909;
  double t14916;
  double t14917;
  double t14715;
  double t14729;
  double t14920;
  double t14725;
  double t14921;
  double t3159;
  double t15127;
  double t15132;
  double t15137;
  double t5260;
  double t14704;
  double t14712;
  double t14918;
  double t14922;
  double t14923;
  double t15196;
  double t15113;
  double t15114;
  double t15115;
  double t15153;
  double t15140;
  double t15142;
  double t15145;
  double t15167;
  double t15191;
  double t15192;
  double t15197;
  double t15201;
  double t15202;
  double t15216;
  double t15217;
  double t15218;
  double t15221;
  double t15222;
  double t15224;
  double t15226;
  double t15230;
  double t15237;
  double t15126;
  double t15151;
  double t15152;
  double t15405;
  double t15408;
  double t15409;
  double t15413;
  double t15414;
  double t15420;
  double t15422;
  double t15423;
  double t15428;
  double t15429;
  double t15432;
  double t15433;
  double t15437;
  double t15438;
  double t15443;
  double t15446;
  double t15451;
  double t15452;
  double t15453;
  double t15455;
  double t15469;
  double t15470;
  double t15473;
  double t15474;
  double t15477;
  double t15478;
  double t15479;
  double t15447;
  double t15456;
  double t15459;
  double t15475;
  double t15490;
  double t15526;
  double t15536;
  double t15559;
  double t15563;
  double t14714;
  double t14958;
  double t15038;
  double t15468;
  double t15617;
  double t15642;
  double t15688;
  double t15699;
  double t15711;
  double t15754;
  double t15761;
  t14681 = Cos(var1[7]);
  t4076 = Cos(var1[8]);
  t4303 = Sin(var1[7]);
  t14700 = Sin(var1[8]);
  t14909 = t14681*t4076;
  t14916 = t4303*t14700;
  t14917 = t14909 + t14916;
  t14715 = Cos(var1[4]);
  t14729 = Cos(var1[6]);
  t14920 = Sin(var1[5]);
  t14725 = Cos(var1[5]);
  t14921 = Sin(var1[6]);
  t3159 = Sin(var1[4]);
  t15127 = t4076*t4303;
  t15132 = -1.*t14681*t14700;
  t15137 = t15127 + t15132;
  t5260 = -1.*t4076*t4303;
  t14704 = t14681*t14700;
  t14712 = t5260 + t14704;
  t14918 = t14725*t14729*t14917;
  t14922 = -1.*t14920*t14921*t14917;
  t14923 = t14918 + t14922;
  t15196 = Sin(var1[3]);
  t15113 = -1.*t14729*t14920;
  t15114 = -1.*t14725*t14921;
  t15115 = t15113 + t15114;
  t15153 = Cos(var1[3]);
  t15140 = t14725*t14729*t15137;
  t15142 = -1.*t14920*t14921*t15137;
  t15145 = t15140 + t15142;
  t15167 = t14729*t14920*t14917;
  t15191 = t14725*t14921*t14917;
  t15192 = t15167 + t15191;
  t15197 = t14715*t14712;
  t15201 = -1.*t3159*t14923;
  t15202 = t15197 + t15201;
  t15216 = t14725*t14729;
  t15217 = -1.*t14920*t14921;
  t15218 = t15216 + t15217;
  t15221 = t14729*t14920*t15137;
  t15222 = t14725*t14921*t15137;
  t15224 = t15221 + t15222;
  t15226 = t14715*t14917;
  t15230 = -1.*t3159*t15145;
  t15237 = t15226 + t15230;
  t15126 = t3159*t14917;
  t15151 = t14715*t15145;
  t15152 = t15126 + t15151;
  t15405 = -1.*t14729;
  t15408 = 1. + t15405;
  t15409 = 0.15121*t15408;
  t15413 = -1.*t14681;
  t15414 = 1. + t15413;
  t15420 = 0.28121*t15414;
  t15422 = -1.*t4076;
  t15423 = 1. + t15422;
  t15428 = 0.50321*t15423;
  t15429 = 0.19821*t4076;
  t15432 = t15428 + t15429;
  t15433 = t14681*t15432;
  t15437 = -0.305*t4303*t14700;
  t15438 = t15420 + t15433 + t15437;
  t15443 = t14729*t15438;
  t15446 = t15409 + t15443;
  t15451 = 0.15121*t14729;
  t15452 = -0.15121*t14921;
  t15453 = t14921*t15438;
  t15455 = t15409 + t15451 + t15452 + t15453;
  t15469 = 0.28121*t4303;
  t15470 = -1.*t15432*t4303;
  t15473 = -0.305*t14681*t14700;
  t15474 = t15469 + t15470 + t15473;
  t15477 = t14725*t15446;
  t15478 = -1.*t14920*t15455;
  t15479 = t15477 + t15478;
  t15447 = t14920*t15446;
  t15456 = t14725*t15455;
  t15459 = t15447 + t15456;
  t15475 = t3159*t15474;
  t15490 = t14715*t15479;
  t15526 = t15475 + t15490;
  t15536 = t14715*t15474;
  t15559 = -1.*t3159*t15479;
  t15563 = t15536 + t15559;
  t14714 = t3159*t14712;
  t14958 = t14715*t14923;
  t15038 = t14714 + t14958;
  t15468 = -1.*t15218*t15459;
  t15617 = t15224*t15459;
  t15642 = -1.*t15224*t15459;
  t15688 = t15192*t15459;
  t15699 = t15218*t15459;
  t15711 = -1.*t15192*t15459;
  t15754 = -1.*t15474*t14917;
  t15761 = t15474*t14712;
  p_output1[0]=t15038;
  p_output1[1]=t14715*t15115;
  p_output1[2]=t15152;
  p_output1[3]=t15153*t15192 - 1.*t15196*t15202;
  p_output1[4]=t15153*t15218 + t15115*t15196*t3159;
  p_output1[5]=t15153*t15224 - 1.*t15196*t15237;
  p_output1[6]=t15192*t15196 + t15153*t15202;
  p_output1[7]=t15196*t15218 - 1.*t15115*t15153*t3159;
  p_output1[8]=t15196*t15224 + t15153*t15237;
  p_output1[9]=t14715*t15115*(t15152*t15526 + t15237*t15563 + t15617) + t15152*(t15468 - 1.*t14715*t15115*t15526 + t15115*t15563*t3159);
  p_output1[10]=t15038*(-1.*t15152*t15526 - 1.*t15237*t15563 + t15642) + t15152*(t15038*t15526 + t15202*t15563 + t15688);
  p_output1[11]=t14715*t15115*(-1.*t15038*t15526 - 1.*t15202*t15563 + t15711) + t15038*(t14715*t15115*t15526 + t15699 - 1.*t15115*t15563*t3159);
  p_output1[12]=t15224*(t15468 - 1.*t15115*t15479) + t15218*(t14917*t15474 + t15145*t15479 + t15617);
  p_output1[13]=t15192*(-1.*t15145*t15479 + t15642 + t15754) + t15224*(t14923*t15479 + t15688 + t15761);
  p_output1[14]=t15192*(t15115*t15479 + t15699) + t15218*(-1.*t14712*t15474 - 1.*t14923*t15479 + t15711);
  p_output1[15]=t14917*(t14921*t15446 - 1.*t14729*t15455);
  p_output1[16]=t14712*(-1.*t14729*t15137*t15446 - 1.*t14921*t15137*t15455 + t15754) + t14917*(t14729*t14917*t15446 + t14917*t14921*t15455 + t15761);
  p_output1[17]=t14712*(-1.*t14921*t15446 + t14729*t15455);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t14712*(-1.*t15137*t15438 + t15754) + t14917*(t14917*t15438 + t15761);
  p_output1[20]=0.15121*t14712 + 0.15121*t15137;
  p_output1[21]=0.28121*t14700 - 1.*t14700*t15432 - 0.305*t14700*t4076;
  p_output1[22]=0;
  p_output1[23]=0.305*Power(t14700,2) + 0.28121*t4076 - 1.*t15432*t4076;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.305;
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

#include "Jh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
