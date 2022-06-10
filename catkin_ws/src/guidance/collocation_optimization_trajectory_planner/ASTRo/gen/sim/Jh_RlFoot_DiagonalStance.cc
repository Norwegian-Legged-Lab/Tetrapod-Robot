/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:40 GMT+02:00
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
  double t1806;
  double t69;
  double t1396;
  double t1883;
  double t2683;
  double t2695;
  double t2712;
  double t2279;
  double t2670;
  double t2822;
  double t2631;
  double t2826;
  double t1905;
  double t1735;
  double t1901;
  double t1904;
  double t2726;
  double t2834;
  double t2886;
  double t3935;
  double t3384;
  double t3417;
  double t3421;
  double t3787;
  double t3605;
  double t3659;
  double t3743;
  double t3762;
  double t3764;
  double t3765;
  double t3823;
  double t3879;
  double t3896;
  double t3940;
  double t3949;
  double t3984;
  double t4099;
  double t4102;
  double t4119;
  double t4226;
  double t4262;
  double t4332;
  double t4395;
  double t4400;
  double t4408;
  double t3755;
  double t3768;
  double t3778;
  double t4559;
  double t4590;
  double t4630;
  double t4639;
  double t4673;
  double t4768;
  double t4804;
  double t4805;
  double t4882;
  double t4893;
  double t4934;
  double t4938;
  double t4986;
  double t5065;
  double t5081;
  double t5119;
  double t4614;
  double t4616;
  double t4617;
  double t4999;
  double t5044;
  double t5165;
  double t5184;
  double t5191;
  double t5198;
  double t5204;
  double t5209;
  double t5228;
  double t5045;
  double t5122;
  double t5139;
  double t5201;
  double t5276;
  double t5294;
  double t5319;
  double t5360;
  double t5394;
  double t1993;
  double t2969;
  double t3366;
  double t5159;
  double t5546;
  double t5704;
  double t5764;
  double t5884;
  double t6100;
  double t6226;
  double t6269;
  t1806 = Cos(var1[10]);
  t69 = Cos(var1[11]);
  t1396 = Sin(var1[10]);
  t1883 = Sin(var1[11]);
  t2683 = -1.*t1806*t69;
  t2695 = -1.*t1396*t1883;
  t2712 = t2683 + t2695;
  t2279 = Cos(var1[4]);
  t2670 = Cos(var1[5]);
  t2822 = Sin(var1[9]);
  t2631 = Cos(var1[9]);
  t2826 = Sin(var1[5]);
  t1905 = Sin(var1[4]);
  t1735 = -1.*t69*t1396;
  t1901 = t1806*t1883;
  t1904 = t1735 + t1901;
  t2726 = t2631*t2670*t2712;
  t2834 = -1.*t2822*t2712*t2826;
  t2886 = t2726 + t2834;
  t3935 = Sin(var1[3]);
  t3384 = t2670*t2822;
  t3417 = t2631*t2826;
  t3421 = t3384 + t3417;
  t3787 = Cos(var1[3]);
  t3605 = t1806*t69;
  t3659 = t1396*t1883;
  t3743 = t3605 + t3659;
  t3762 = t2631*t2670*t1904;
  t3764 = -1.*t2822*t1904*t2826;
  t3765 = t3762 + t3764;
  t3823 = t2670*t2822*t2712;
  t3879 = t2631*t2712*t2826;
  t3896 = t3823 + t3879;
  t3940 = t2279*t1904;
  t3949 = -1.*t1905*t2886;
  t3984 = t3940 + t3949;
  t4099 = -1.*t2631*t2670;
  t4102 = t2822*t2826;
  t4119 = t4099 + t4102;
  t4226 = t2670*t2822*t1904;
  t4262 = t2631*t1904*t2826;
  t4332 = t4226 + t4262;
  t4395 = t2279*t3743;
  t4400 = -1.*t1905*t3765;
  t4408 = t4395 + t4400;
  t3755 = t3743*t1905;
  t3768 = t2279*t3765;
  t3778 = t3755 + t3768;
  t4559 = -1.*t2631;
  t4590 = 1. + t4559;
  t4630 = -1.*t1806;
  t4639 = 1. + t4630;
  t4673 = -0.28121*t4639;
  t4768 = -1.*t69;
  t4804 = 1. + t4768;
  t4805 = -0.50321*t4804;
  t4882 = -0.19821*t69;
  t4893 = t4805 + t4882;
  t4934 = t1806*t4893;
  t4938 = 0.305*t1396*t1883;
  t4986 = t4673 + t4934 + t4938;
  t5065 = -0.15121*t4590;
  t5081 = t2631*t4986;
  t5119 = t5065 + t5081;
  t4614 = 0.15121*t4590;
  t4616 = 0.15121*t2631;
  t4617 = 0.15121*t2822;
  t4999 = t2822*t4986;
  t5044 = t4614 + t4616 + t4617 + t4999;
  t5165 = 0.28121*t1396;
  t5184 = t4893*t1396;
  t5191 = -0.305*t1806*t1883;
  t5198 = t5165 + t5184 + t5191;
  t5204 = t2670*t5119;
  t5209 = -1.*t5044*t2826;
  t5228 = t5204 + t5209;
  t5045 = t2670*t5044;
  t5122 = t5119*t2826;
  t5139 = t5045 + t5122;
  t5201 = t5198*t1905;
  t5276 = t2279*t5228;
  t5294 = t5201 + t5276;
  t5319 = t2279*t5198;
  t5360 = -1.*t1905*t5228;
  t5394 = t5319 + t5360;
  t1993 = t1904*t1905;
  t2969 = t2279*t2886;
  t3366 = t1993 + t2969;
  t5159 = -1.*t4119*t5139;
  t5546 = t4332*t5139;
  t5704 = -1.*t4332*t5139;
  t5764 = t3896*t5139;
  t5884 = t4119*t5139;
  t6100 = -1.*t3896*t5139;
  t6226 = -1.*t5198*t3743;
  t6269 = t5198*t1904;
  p_output1[0]=t3366;
  p_output1[1]=t2279*t3421;
  p_output1[2]=t3778;
  p_output1[3]=t3787*t3896 - 1.*t3935*t3984;
  p_output1[4]=t1905*t3421*t3935 + t3787*t4119;
  p_output1[5]=t3787*t4332 - 1.*t3935*t4408;
  p_output1[6]=t3896*t3935 + t3787*t3984;
  p_output1[7]=-1.*t1905*t3421*t3787 + t3935*t4119;
  p_output1[8]=t3935*t4332 + t3787*t4408;
  p_output1[9]=t3778*(t5159 - 1.*t2279*t3421*t5294 + t1905*t3421*t5394) + t2279*t3421*(t3778*t5294 + t4408*t5394 + t5546);
  p_output1[10]=t3366*(-1.*t3778*t5294 - 1.*t4408*t5394 + t5704) + t3778*(t3366*t5294 + t3984*t5394 + t5764);
  p_output1[11]=t3366*(t2279*t3421*t5294 - 1.*t1905*t3421*t5394 + t5884) + t2279*t3421*(-1.*t3366*t5294 - 1.*t3984*t5394 + t6100);
  p_output1[12]=t4332*(t5159 - 1.*t3421*t5228) + t4119*(t3743*t5198 + t3765*t5228 + t5546);
  p_output1[13]=t3896*(-1.*t3765*t5228 + t5704 + t6226) + t4332*(t2886*t5228 + t5764 + t6269);
  p_output1[14]=t3896*(t3421*t5228 + t5884) + t4119*(-1.*t1904*t5198 - 1.*t2886*t5228 + t6100);
  p_output1[15]=t3743*(t2631*t5044 - 1.*t2822*t5119);
  p_output1[16]=t1904*(-1.*t1904*t2822*t5044 - 1.*t1904*t2631*t5119 + t6226) + t3743*(t2712*t2822*t5044 + t2631*t2712*t5119 + t6269);
  p_output1[17]=t1904*(-1.*t2631*t5044 + t2822*t5119);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t2712 + 0.15121*t3743;
  p_output1[28]=-0.15121 + t1904*(-1.*t1904*t4986 + t6226) + t3743*(t2712*t4986 + t6269);
  p_output1[29]=0;
  p_output1[30]=0.28121*t1883 + t1883*t4893 - 0.305*t1883*t69;
  p_output1[31]=0;
  p_output1[32]=0.305*Power(t1883,2) + 0.28121*t69 + t4893*t69;
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
