/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:12 GMT+02:00
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
  double t3134;
  double t3590;
  double t3162;
  double t4322;
  double t4565;
  double t3911;
  double t4583;
  double t3460;
  double t5062;
  double t5066;
  double t5310;
  double t3603;
  double t4837;
  double t4332;
  double t4656;
  double t4661;
  double t3461;
  double t3672;
  double t3690;
  double t10472;
  double t10468;
  double t5328;
  double t5343;
  double t5416;
  double t5943;
  double t6089;
  double t6124;
  double t6161;
  double t6329;
  double t6899;
  double t10473;
  double t10477;
  double t10478;
  double t10642;
  double t10659;
  double t10660;
  double t10675;
  double t10680;
  double t10685;
  double t10698;
  double t10704;
  double t10708;
  double t11011;
  double t11051;
  double t11127;
  double t4920;
  double t5803;
  double t5839;
  double t13477;
  double t13483;
  double t13504;
  double t13506;
  double t13512;
  double t13514;
  double t13516;
  double t13522;
  double t13529;
  double t13543;
  double t13551;
  double t13553;
  double t13555;
  double t14073;
  double t14183;
  double t14897;
  double t13485;
  double t13490;
  double t13502;
  double t13593;
  double t13849;
  double t14903;
  double t14904;
  double t14915;
  double t14922;
  double t14937;
  double t14944;
  double t14948;
  double t13937;
  double t14900;
  double t14901;
  double t14926;
  double t14982;
  double t15014;
  double t15016;
  double t15017;
  double t15019;
  double t6154;
  double t8959;
  double t9126;
  double t14902;
  double t15027;
  double t15038;
  double t15049;
  double t15060;
  double t15067;
  double t15247;
  double t15254;
  t3134 = Cos(var1[4]);
  t3590 = Cos(var1[12]);
  t3162 = Cos(var1[5]);
  t4322 = Cos(var1[14]);
  t4565 = Sin(var1[13]);
  t3911 = Cos(var1[13]);
  t4583 = Sin(var1[14]);
  t3460 = Sin(var1[12]);
  t5062 = t4322*t4565;
  t5066 = -1.*t3911*t4583;
  t5310 = t5062 + t5066;
  t3603 = Sin(var1[5]);
  t4837 = Sin(var1[4]);
  t4332 = t3911*t4322;
  t4656 = t4565*t4583;
  t4661 = t4332 + t4656;
  t3461 = -1.*t3162*t3460;
  t3672 = -1.*t3590*t3603;
  t3690 = t3461 + t3672;
  t10472 = Cos(var1[3]);
  t10468 = Sin(var1[3]);
  t5328 = t3590*t3162*t5310;
  t5343 = -1.*t3460*t5310*t3603;
  t5416 = t5328 + t5343;
  t5943 = -1.*t4322*t4565;
  t6089 = t3911*t4583;
  t6124 = t5943 + t6089;
  t6161 = t3590*t3162*t4661;
  t6329 = -1.*t3460*t4661*t3603;
  t6899 = t6161 + t6329;
  t10473 = t3590*t3162;
  t10477 = -1.*t3460*t3603;
  t10478 = t10473 + t10477;
  t10642 = t3162*t3460*t5310;
  t10659 = t3590*t5310*t3603;
  t10660 = t10642 + t10659;
  t10675 = t3134*t4661;
  t10680 = -1.*t4837*t5416;
  t10685 = t10675 + t10680;
  t10698 = t3162*t3460*t4661;
  t10704 = t3590*t4661*t3603;
  t10708 = t10698 + t10704;
  t11011 = t3134*t6124;
  t11051 = -1.*t4837*t6899;
  t11127 = t11011 + t11051;
  t4920 = t4661*t4837;
  t5803 = t3134*t5416;
  t5839 = t4920 + t5803;
  t13477 = -1.*t3590;
  t13483 = 1. + t13477;
  t13504 = -1.*t3911;
  t13506 = 1. + t13504;
  t13512 = 0.28121*t13506;
  t13514 = -1.*t4322;
  t13516 = 1. + t13514;
  t13522 = 0.50321*t13516;
  t13529 = 0.19821*t4322;
  t13543 = t13522 + t13529;
  t13551 = t3911*t13543;
  t13553 = -0.305*t4565*t4583;
  t13555 = t13512 + t13551 + t13553;
  t14073 = 0.15121*t13483;
  t14183 = t3590*t13555;
  t14897 = t14073 + t14183;
  t13485 = -0.15121*t13483;
  t13490 = -0.15121*t3590;
  t13502 = -0.15121*t3460;
  t13593 = t3460*t13555;
  t13849 = t13485 + t13490 + t13502 + t13593;
  t14903 = 0.28121*t4565;
  t14904 = -1.*t13543*t4565;
  t14915 = -0.305*t3911*t4583;
  t14922 = t14903 + t14904 + t14915;
  t14937 = t3162*t14897;
  t14944 = -1.*t13849*t3603;
  t14948 = t14937 + t14944;
  t13937 = t3162*t13849;
  t14900 = t14897*t3603;
  t14901 = t13937 + t14900;
  t14926 = t14922*t4837;
  t14982 = t3134*t14948;
  t15014 = t14926 + t14982;
  t15016 = t3134*t14922;
  t15017 = -1.*t4837*t14948;
  t15019 = t15016 + t15017;
  t6154 = t6124*t4837;
  t8959 = t3134*t6899;
  t9126 = t6154 + t8959;
  t14902 = -1.*t10478*t14901;
  t15027 = t10660*t14901;
  t15038 = t10478*t14901;
  t15049 = -1.*t10708*t14901;
  t15060 = -1.*t10660*t14901;
  t15067 = t10708*t14901;
  t15247 = -1.*t14922*t4661;
  t15254 = t14922*t6124;
  p_output1[0]=t9126*var2[0] + t3134*t3690*var2[1] + t5839*var2[2];
  p_output1[1]=(t10472*t10708 - 1.*t10468*t11127)*var2[0] + (t10472*t10478 + t10468*t3690*t4837)*var2[1] + (t10472*t10660 - 1.*t10468*t10685)*var2[2];
  p_output1[2]=(t10468*t10708 + t10472*t11127)*var2[0] + (t10468*t10478 - 1.*t10472*t3690*t4837)*var2[1] + (t10468*t10660 + t10472*t10685)*var2[2];
  p_output1[3]=((t14902 - 1.*t15014*t3134*t3690 + t15019*t3690*t4837)*t5839 + t3134*t3690*(t10685*t15019 + t15027 + t15014*t5839))*var2[0] + ((-1.*t10685*t15019 + t15060 - 1.*t15014*t5839)*t9126 + t5839*(t11127*t15019 + t15067 + t15014*t9126))*var2[1] + ((t15038 + t15014*t3134*t3690 - 1.*t15019*t3690*t4837)*t9126 + t3134*t3690*(-1.*t11127*t15019 + t15049 - 1.*t15014*t9126))*var2[2];
  p_output1[4]=(t10660*(t14902 - 1.*t14948*t3690) + t10478*(t15027 + t14922*t4661 + t14948*t5416))*var2[0] + (t10708*(t15060 + t15247 - 1.*t14948*t5416) + t10660*(t15067 + t15254 + t14948*t6899))*var2[1] + (t10708*(t15038 + t14948*t3690) + t10478*(t15049 - 1.*t14922*t6124 - 1.*t14948*t6899))*var2[2];
  p_output1[5]=(t14897*t3460 - 1.*t13849*t3590)*t4661*var2[0] + (t4661*(t15254 + t13849*t3460*t4661 + t14897*t3590*t4661) + (t15247 - 1.*t13849*t3460*t5310 - 1.*t14897*t3590*t5310)*t6124)*var2[1] + (-1.*t14897*t3460 + t13849*t3590)*t6124*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t4661*(t15254 + t13555*t4661) + (t15247 - 1.*t13555*t5310)*t6124)*var2[1] + (-0.15121*t5310 - 0.15121*t6124)*var2[2];
  p_output1[13]=(0.28121*t4583 - 1.*t13543*t4583 - 0.305*t4322*t4583)*var2[0] + (0.28121*t4322 - 1.*t13543*t4322 + 0.305*Power(t4583,2))*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
