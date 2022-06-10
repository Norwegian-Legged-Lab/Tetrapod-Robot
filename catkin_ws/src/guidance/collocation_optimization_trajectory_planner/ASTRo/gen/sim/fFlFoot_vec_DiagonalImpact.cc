/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:39 GMT+02:00
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
  double t2816;
  double t15513;
  double t5040;
  double t24780;
  double t24793;
  double t24642;
  double t24796;
  double t5043;
  double t24618;
  double t24853;
  double t24854;
  double t24863;
  double t24641;
  double t24787;
  double t24826;
  double t24839;
  double t11986;
  double t24634;
  double t24635;
  double t24970;
  double t24938;
  double t24866;
  double t24874;
  double t24878;
  double t24896;
  double t24901;
  double t24903;
  double t24908;
  double t24915;
  double t24917;
  double t24973;
  double t24975;
  double t24979;
  double t25043;
  double t25059;
  double t25087;
  double t25118;
  double t25119;
  double t25121;
  double t25134;
  double t25136;
  double t25138;
  double t25140;
  double t25141;
  double t25143;
  double t24852;
  double t24885;
  double t24887;
  double t25200;
  double t25202;
  double t25205;
  double t25213;
  double t25215;
  double t25216;
  double t25217;
  double t25230;
  double t25231;
  double t25232;
  double t25242;
  double t25246;
  double t25252;
  double t25254;
  double t25256;
  double t25257;
  double t25269;
  double t25286;
  double t25293;
  double t25301;
  double t25315;
  double t25316;
  double t25321;
  double t25328;
  double t25332;
  double t25334;
  double t25335;
  double t25262;
  double t25304;
  double t25308;
  double t25330;
  double t25338;
  double t25350;
  double t25359;
  double t25361;
  double t25362;
  double t24904;
  double t24927;
  double t24931;
  double t25309;
  double t25376;
  double t25392;
  double t25398;
  double t25435;
  double t25442;
  double t25547;
  double t25565;
  t2816 = Cos(var1[4]);
  t15513 = Cos(var1[5]);
  t5040 = Cos(var1[6]);
  t24780 = Cos(var1[8]);
  t24793 = Sin(var1[7]);
  t24642 = Cos(var1[7]);
  t24796 = Sin(var1[8]);
  t5043 = Sin(var1[5]);
  t24618 = Sin(var1[6]);
  t24853 = t24780*t24793;
  t24854 = -1.*t24642*t24796;
  t24863 = t24853 + t24854;
  t24641 = Sin(var1[4]);
  t24787 = t24642*t24780;
  t24826 = t24793*t24796;
  t24839 = t24787 + t24826;
  t11986 = -1.*t5040*t5043;
  t24634 = -1.*t15513*t24618;
  t24635 = t11986 + t24634;
  t24970 = Cos(var1[3]);
  t24938 = Sin(var1[3]);
  t24866 = t15513*t5040*t24863;
  t24874 = -1.*t5043*t24618*t24863;
  t24878 = t24866 + t24874;
  t24896 = -1.*t24780*t24793;
  t24901 = t24642*t24796;
  t24903 = t24896 + t24901;
  t24908 = t15513*t5040*t24839;
  t24915 = -1.*t5043*t24618*t24839;
  t24917 = t24908 + t24915;
  t24973 = t15513*t5040;
  t24975 = -1.*t5043*t24618;
  t24979 = t24973 + t24975;
  t25043 = t5040*t5043*t24863;
  t25059 = t15513*t24618*t24863;
  t25087 = t25043 + t25059;
  t25118 = t2816*t24839;
  t25119 = -1.*t24641*t24878;
  t25121 = t25118 + t25119;
  t25134 = t5040*t5043*t24839;
  t25136 = t15513*t24618*t24839;
  t25138 = t25134 + t25136;
  t25140 = t2816*t24903;
  t25141 = -1.*t24641*t24917;
  t25143 = t25140 + t25141;
  t24852 = t24641*t24839;
  t24885 = t2816*t24878;
  t24887 = t24852 + t24885;
  t25200 = -1.*t5040;
  t25202 = 1. + t25200;
  t25205 = 0.15121*t25202;
  t25213 = -1.*t24642;
  t25215 = 1. + t25213;
  t25216 = 0.28121*t25215;
  t25217 = -1.*t24780;
  t25230 = 1. + t25217;
  t25231 = 0.50321*t25230;
  t25232 = 0.19821*t24780;
  t25242 = t25231 + t25232;
  t25246 = t24642*t25242;
  t25252 = -0.305*t24793*t24796;
  t25254 = t25216 + t25246 + t25252;
  t25256 = t5040*t25254;
  t25257 = t25205 + t25256;
  t25269 = 0.15121*t5040;
  t25286 = -0.15121*t24618;
  t25293 = t24618*t25254;
  t25301 = t25205 + t25269 + t25286 + t25293;
  t25315 = 0.28121*t24793;
  t25316 = -1.*t25242*t24793;
  t25321 = -0.305*t24642*t24796;
  t25328 = t25315 + t25316 + t25321;
  t25332 = t15513*t25257;
  t25334 = -1.*t5043*t25301;
  t25335 = t25332 + t25334;
  t25262 = t5043*t25257;
  t25304 = t15513*t25301;
  t25308 = t25262 + t25304;
  t25330 = t24641*t25328;
  t25338 = t2816*t25335;
  t25350 = t25330 + t25338;
  t25359 = t2816*t25328;
  t25361 = -1.*t24641*t25335;
  t25362 = t25359 + t25361;
  t24904 = t24641*t24903;
  t24927 = t2816*t24917;
  t24931 = t24904 + t24927;
  t25309 = -1.*t24979*t25308;
  t25376 = t25087*t25308;
  t25392 = t24979*t25308;
  t25398 = -1.*t25138*t25308;
  t25435 = -1.*t25087*t25308;
  t25442 = t25138*t25308;
  t25547 = -1.*t25328*t24839;
  t25565 = t25328*t24903;
  p_output1[0]=t24931*var2[0] + t24635*t2816*var2[1] + t24887*var2[2];
  p_output1[1]=(t24970*t25138 - 1.*t24938*t25143)*var2[0] + (t24635*t24641*t24938 + t24970*t24979)*var2[1] + (t24970*t25087 - 1.*t24938*t25121)*var2[2];
  p_output1[2]=(t24938*t25138 + t24970*t25143)*var2[0] + (-1.*t24635*t24641*t24970 + t24938*t24979)*var2[1] + (t24938*t25087 + t24970*t25121)*var2[2];
  p_output1[3]=(t24635*(t24887*t25350 + t25121*t25362 + t25376)*t2816 + t24887*(t25309 + t24635*t24641*t25362 - 1.*t24635*t25350*t2816))*var2[0] + (t24931*(-1.*t24887*t25350 - 1.*t25121*t25362 + t25435) + t24887*(t24931*t25350 + t25143*t25362 + t25442))*var2[1] + (t24635*(-1.*t24931*t25350 - 1.*t25143*t25362 + t25398)*t2816 + t24931*(-1.*t24635*t24641*t25362 + t25392 + t24635*t25350*t2816))*var2[2];
  p_output1[4]=(t25087*(t25309 - 1.*t24635*t25335) + t24979*(t24839*t25328 + t24878*t25335 + t25376))*var2[0] + (t25138*(-1.*t24878*t25335 + t25435 + t25547) + t25087*(t24917*t25335 + t25442 + t25565))*var2[1] + (t25138*(t24635*t25335 + t25392) + t24979*(-1.*t24903*t25328 - 1.*t24917*t25335 + t25398))*var2[2];
  p_output1[5]=t24839*(t24618*t25257 - 1.*t25301*t5040)*var2[0] + (t24839*(t24618*t24839*t25301 + t25565 + t24839*t25257*t5040) + t24903*(-1.*t24618*t24863*t25301 + t25547 - 1.*t24863*t25257*t5040))*var2[1] + t24903*(-1.*t24618*t25257 + t25301*t5040)*var2[2];
  p_output1[6]=(-0.15121 + t24903*(-1.*t24863*t25254 + t25547) + t24839*(t24839*t25254 + t25565))*var2[1] + (0.15121*t24863 + 0.15121*t24903)*var2[2];
  p_output1[7]=(0.28121*t24796 - 0.305*t24780*t24796 - 1.*t24796*t25242)*var2[0] + (0.28121*t24780 + 0.305*Power(t24796,2) - 1.*t24780*t25242)*var2[2];
  p_output1[8]=-0.305*var2[2];
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
