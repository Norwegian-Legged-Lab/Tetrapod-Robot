/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:38 GMT+02:00
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
  double t26684;
  double t17727;
  double t25178;
  double t26915;
  double t30901;
  double t31076;
  double t31086;
  double t30818;
  double t31092;
  double t30804;
  double t31097;
  double t30799;
  double t26110;
  double t26942;
  double t26975;
  double t27639;
  double t31088;
  double t31124;
  double t31180;
  double t31641;
  double t31264;
  double t31279;
  double t31296;
  double t31251;
  double t31646;
  double t31765;
  double t31791;
  double t32303;
  double t32316;
  double t32337;
  double t32367;
  double t32403;
  double t32505;
  double t32577;
  double t32579;
  double t32596;
  double t32610;
  double t32669;
  double t32699;
  double t32700;
  double t32742;
  double t32826;
  double t32837;
  double t32347;
  double t32351;
  double t32795;
  double t32812;
  double t32914;
  double t32929;
  double t32954;
  double t32972;
  double t33002;
  double t33010;
  double t33029;
  double t33212;
  double t33246;
  double t33317;
  double t32815;
  double t32852;
  double t32908;
  double t32078;
  double t32122;
  double t32133;
  double t32144;
  double t32188;
  double t32218;
  double t32228;
  double t32244;
  double t32247;
  double t33209;
  double t33344;
  double t33351;
  double t33417;
  double t33438;
  double t33439;
  double t33500;
  double t33514;
  double t33528;
  double t32254;
  double t32290;
  double t32296;
  double t32911;
  double t33537;
  double t30702;
  double t31181;
  double t31238;
  double t33563;
  double t33582;
  double t33597;
  double t34035;
  double t34078;
  double t34134;
  double t34162;
  double t34502;
  double t34561;
  t26684 = Cos(var1[16]);
  t17727 = Cos(var1[17]);
  t25178 = Sin(var1[16]);
  t26915 = Sin(var1[17]);
  t30901 = -1.*t26684*t17727;
  t31076 = -1.*t25178*t26915;
  t31086 = t30901 + t31076;
  t30818 = Cos(var1[5]);
  t31092 = Sin(var1[15]);
  t30804 = Cos(var1[15]);
  t31097 = Sin(var1[5]);
  t30799 = Cos(var1[4]);
  t26110 = -1.*t17727*t25178;
  t26942 = t26684*t26915;
  t26975 = t26110 + t26942;
  t27639 = Sin(var1[4]);
  t31088 = t30804*t30818*t31086;
  t31124 = -1.*t31092*t31086*t31097;
  t31180 = t31088 + t31124;
  t31641 = Sin(var1[3]);
  t31264 = t30818*t31092*t31086;
  t31279 = t30804*t31086*t31097;
  t31296 = t31264 + t31279;
  t31251 = Cos(var1[3]);
  t31646 = t30799*t26975;
  t31765 = -1.*t27639*t31180;
  t31791 = t31646 + t31765;
  t32303 = -1.*t30804;
  t32316 = 1. + t32303;
  t32337 = -0.15121*t32316;
  t32367 = -1.*t26684;
  t32403 = 1. + t32367;
  t32505 = -0.28121*t32403;
  t32577 = -1.*t17727;
  t32579 = 1. + t32577;
  t32596 = -0.50321*t32579;
  t32610 = -0.19821*t17727;
  t32669 = t32596 + t32610;
  t32699 = t26684*t32669;
  t32700 = 0.305*t25178*t26915;
  t32742 = t32505 + t32699 + t32700;
  t32826 = t30804*t32742;
  t32837 = t32337 + t32826;
  t32347 = -0.15121*t30804;
  t32351 = 0.15121*t31092;
  t32795 = t31092*t32742;
  t32812 = t32337 + t32347 + t32351 + t32795;
  t32914 = t30818*t31092;
  t32929 = t30804*t31097;
  t32954 = t32914 + t32929;
  t32972 = 0.28121*t25178;
  t33002 = t32669*t25178;
  t33010 = -0.305*t26684*t26915;
  t33029 = t32972 + t33002 + t33010;
  t33212 = t30818*t32837;
  t33246 = -1.*t32812*t31097;
  t33317 = t33212 + t33246;
  t32815 = t30818*t32812;
  t32852 = t32837*t31097;
  t32908 = t32815 + t32852;
  t32078 = t26684*t17727;
  t32122 = t25178*t26915;
  t32133 = t32078 + t32122;
  t32144 = t32133*t27639;
  t32188 = t30804*t30818*t26975;
  t32218 = -1.*t31092*t26975*t31097;
  t32228 = t32188 + t32218;
  t32244 = t30799*t32228;
  t32247 = t32144 + t32244;
  t33209 = t33029*t27639;
  t33344 = t30799*t33317;
  t33351 = t33209 + t33344;
  t33417 = t30799*t33029;
  t33438 = -1.*t27639*t33317;
  t33439 = t33417 + t33438;
  t33500 = t30818*t31092*t26975;
  t33514 = t30804*t26975*t31097;
  t33528 = t33500 + t33514;
  t32254 = -1.*t30804*t30818;
  t32290 = t31092*t31097;
  t32296 = t32254 + t32290;
  t32911 = -1.*t32296*t32908;
  t33537 = t33528*t32908;
  t30702 = t26975*t27639;
  t31181 = t30799*t31180;
  t31238 = t30702 + t31181;
  t33563 = t30799*t32133;
  t33582 = -1.*t27639*t32228;
  t33597 = t33563 + t33582;
  t34035 = -1.*t33528*t32908;
  t34078 = t31296*t32908;
  t34134 = -1.*t33029*t32133;
  t34162 = t33029*t26975;
  t34502 = t32296*t32908;
  t34561 = -1.*t31296*t32908;
  p_output1[0]=t31238;
  p_output1[1]=t31251*t31296 - 1.*t31641*t31791;
  p_output1[2]=t31296*t31641 + t31251*t31791;
  p_output1[3]=t32247*(t32911 - 1.*t30799*t32954*t33351 + t27639*t32954*t33439) + t30799*t32954*(t32247*t33351 + t33537 + t33439*t33597);
  p_output1[4]=(t32911 - 1.*t32954*t33317)*t33528 + t32296*(t32133*t33029 + t32228*t33317 + t33537);
  p_output1[5]=t32133*(t30804*t32812 - 1.*t31092*t32837);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t31086 - 0.15121*t32133;
  p_output1[16]=0.28121*t26915 - 0.305*t17727*t26915 + t26915*t32669;
  p_output1[17]=0;
  p_output1[18]=t30799*t32954;
  p_output1[19]=t31251*t32296 + t27639*t31641*t32954;
  p_output1[20]=t31641*t32296 - 1.*t27639*t31251*t32954;
  p_output1[21]=t31238*(-1.*t32247*t33351 - 1.*t33439*t33597 + t34035) + t32247*(t31238*t33351 + t31791*t33439 + t34078);
  p_output1[22]=t31296*(-1.*t32228*t33317 + t34035 + t34134) + t33528*(t31180*t33317 + t34078 + t34162);
  p_output1[23]=t26975*(-1.*t26975*t31092*t32812 - 1.*t26975*t30804*t32837 + t34134) + t32133*(t31086*t31092*t32812 + t30804*t31086*t32837 + t34162);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t26975*(-1.*t26975*t32742 + t34134) + t32133*(t31086*t32742 + t34162);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t32247;
  p_output1[37]=t31251*t33528 - 1.*t31641*t33597;
  p_output1[38]=t31641*t33528 + t31251*t33597;
  p_output1[39]=t31238*(t30799*t32954*t33351 - 1.*t27639*t32954*t33439 + t34502) + t30799*t32954*(-1.*t31238*t33351 - 1.*t31791*t33439 + t34561);
  p_output1[40]=t31296*(t32954*t33317 + t34502) + t32296*(-1.*t26975*t33029 - 1.*t31180*t33317 + t34561);
  p_output1[41]=t26975*(-1.*t30804*t32812 + t31092*t32837);
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
  p_output1[52]=0.28121*t17727 + 0.305*Power(t26915,2) + t17727*t32669;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
