/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:25 GMT+02:00
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
  double t2277;
  double t1842;
  double t1995;
  double t2560;
  double t2130;
  double t2646;
  double t2822;
  double t3969;
  double t3756;
  double t555;
  double t3946;
  double t3973;
  double t3959;
  double t3960;
  double t3962;
  double t3951;
  double t3965;
  double t3983;
  double t3990;
  double t5332;
  double t5854;
  double t4032;
  double t4033;
  double t4056;
  double t4196;
  double t4852;
  double t4881;
  double t5554;
  double t5678;
  double t5787;
  double t6076;
  double t6257;
  double t7131;
  double t7881;
  double t8528;
  double t8886;
  double t9378;
  double t9500;
  double t10756;
  double t10780;
  double t11236;
  double t11268;
  double t4030;
  double t5310;
  double t5313;
  double t12824;
  double t12827;
  double t12829;
  double t12831;
  double t12832;
  double t13087;
  double t13091;
  double t13093;
  double t13097;
  double t4009;
  double t4028;
  double t4029;
  double t12823;
  double t12830;
  double t13107;
  double t13108;
  double t13124;
  double t13128;
  double t13130;
  double t13158;
  double t13163;
  double t13164;
  double t12816;
  double t12817;
  double t12818;
  double t12821;
  double t13110;
  double t13111;
  double t13402;
  double t13407;
  double t13409;
  double t13417;
  double t13421;
  double t13427;
  double t13119;
  double t13165;
  double t13393;
  double t13414;
  double t13429;
  double t13431;
  double t13475;
  double t13481;
  double t13488;
  double t3890;
  double t3996;
  double t4002;
  double t13401;
  double t14132;
  double t14204;
  double t14232;
  double t14674;
  double t14782;
  double t14797;
  double t14802;
  double t14820;
  double t14815;
  double t14832;
  double t14839;
  double t18384;
  double t18187;
  t2277 = Cos(var1[13]);
  t1842 = Cos(var1[14]);
  t1995 = Sin(var1[13]);
  t2560 = Sin(var1[14]);
  t2130 = t1842*t1995;
  t2646 = -1.*t2277*t2560;
  t2822 = t2130 + t2646;
  t3969 = Sin(var1[12]);
  t3756 = Sin(var1[4]);
  t555 = Cos(var1[12]);
  t3946 = Cos(var1[4]);
  t3973 = Sin(var1[5]);
  t3959 = t2277*t1842;
  t3960 = t1995*t2560;
  t3962 = t3959 + t3960;
  t3951 = Cos(var1[5]);
  t3965 = t3951*t3962;
  t3983 = t3969*t2822*t3973;
  t3990 = t3965 + t3983;
  t5332 = Cos(var1[3]);
  t5854 = Sin(var1[3]);
  t4032 = -1.*t1842*t1995;
  t4033 = t2277*t2560;
  t4056 = t4032 + t4033;
  t4196 = t3951*t4056;
  t4852 = t3969*t3962*t3973;
  t4881 = t4196 + t4852;
  t5554 = -1.*t3951*t3969*t2822;
  t5678 = t3962*t3973;
  t5787 = t5554 + t5678;
  t6076 = t555*t3946*t2822;
  t6257 = -1.*t3756*t3990;
  t7131 = t6076 + t6257;
  t7881 = t3946*t3969;
  t8528 = t555*t3756*t3973;
  t8886 = t7881 + t8528;
  t9378 = -1.*t3951*t3969*t3962;
  t9500 = t4056*t3973;
  t10756 = t9378 + t9500;
  t10780 = t555*t3946*t3962;
  t11236 = -1.*t3756*t4881;
  t11268 = t10780 + t11236;
  t4030 = t555*t3962*t3756;
  t5310 = t3946*t4881;
  t5313 = t4030 + t5310;
  t12824 = -0.0641*t1842;
  t12827 = -0.28*t2560;
  t12829 = t12824 + t12827;
  t12831 = -1.*t1842;
  t12832 = 1. + t12831;
  t13087 = 0.075*t12832;
  t13091 = 0.355*t1842;
  t13093 = -0.0641*t2560;
  t13097 = t13087 + t13091 + t13093;
  t4009 = t3969*t3756;
  t4028 = -1.*t555*t3946*t3973;
  t4029 = t4009 + t4028;
  t12823 = -0.325*t1995;
  t12830 = t2277*t12829;
  t13107 = t1995*t13097;
  t13108 = t12823 + t12830 + t13107;
  t13124 = -1.*t2277;
  t13128 = 1. + t13124;
  t13130 = 0.325*t13128;
  t13158 = -1.*t1995*t12829;
  t13163 = t2277*t13097;
  t13164 = t13130 + t13158 + t13163;
  t12816 = -1.*t555;
  t12817 = 1. + t12816;
  t12818 = -0.1575*t12817;
  t12821 = -0.2255*t555;
  t13110 = -1.*t3969*t13108;
  t13111 = t12818 + t12821 + t13110;
  t13402 = -0.068*t3969;
  t13407 = t555*t13108;
  t13409 = t13402 + t13407;
  t13417 = t3951*t13164;
  t13421 = -1.*t13111*t3973;
  t13427 = t13417 + t13421;
  t13119 = t3951*t13111;
  t13165 = t13164*t3973;
  t13393 = t13119 + t13165;
  t13414 = t13409*t3756;
  t13429 = t3946*t13427;
  t13431 = t13414 + t13429;
  t13475 = t3946*t13409;
  t13481 = -1.*t3756*t13427;
  t13488 = t13475 + t13481;
  t3890 = t555*t2822*t3756;
  t3996 = t3946*t3990;
  t4002 = t3890 + t3996;
  t13401 = -1.*t555*t3951*t13393;
  t14132 = t13393*t10756;
  t14204 = t13393*t5787;
  t14232 = -1.*t13393*t10756;
  t14674 = t555*t3951*t13393;
  t14782 = -1.*t13393*t5787;
  t14797 = -1.*t3969*t13409;
  t14802 = t555*t13409*t3962;
  t14820 = -1.*t555*t13409*t3962;
  t14815 = t555*t13409*t2822;
  t14832 = t3969*t13409;
  t14839 = -1.*t555*t13409*t2822;
  t18384 = t13164*t3962;
  t18187 = -1.*t13164*t4056;
  p_output1[0]=t4002;
  p_output1[1]=t4029;
  p_output1[2]=t5313;
  p_output1[3]=t5332*t5787 - 1.*t5854*t7131;
  p_output1[4]=t3951*t5332*t555 - 1.*t5854*t8886;
  p_output1[5]=t10756*t5332 - 1.*t11268*t5854;
  p_output1[6]=t5787*t5854 + t5332*t7131;
  p_output1[7]=t3951*t555*t5854 + t5332*t8886;
  p_output1[8]=t11268*t5332 + t10756*t5854;
  p_output1[9]=t4029*(t11268*t13488 + t14132 + t13431*t5313) + t5313*(t13401 - 1.*t13431*t4029 - 1.*t13488*t8886);
  p_output1[10]=t4002*(-1.*t11268*t13488 + t14232 - 1.*t13431*t5313) + t5313*(t14204 + t13431*t4002 + t13488*t7131);
  p_output1[11]=t4029*(t14782 - 1.*t13431*t4002 - 1.*t13488*t7131) + t4002*(t14674 + t13431*t4029 + t13488*t8886);
  p_output1[12]=t3951*(t14132 + t14802 + t13427*t4881)*t555 + t10756*(t13401 + t14797 + t13427*t3973*t555);
  p_output1[13]=t10756*(t14204 + t14815 + t13427*t3990) + (t14232 + t14820 - 1.*t13427*t4881)*t5787;
  p_output1[14]=t3951*(t14782 + t14839 - 1.*t13427*t3990)*t555 + (t14674 + t14832 - 1.*t13427*t3973*t555)*t5787;
  p_output1[15]=t3969*(t14802 - 1.*t13111*t3962*t3969 + t13164*t4056) + t3962*t555*(t14797 - 1.*t13111*t555);
  p_output1[16]=t3962*(t14815 + t18384 - 1.*t13111*t2822*t3969)*t555 + t2822*(t14820 + t18187 + t13111*t3962*t3969)*t555;
  p_output1[17]=t3969*(t14839 - 1.*t13164*t3962 + t13111*t2822*t3969) + t2822*t555*(t14832 + t13111*t555);
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
  p_output1[36]=0.1575*t2822 + 0.2255*t4056;
  p_output1[37]=t3962*(t18187 - 1.*t13108*t3962) + (t18384 + t13108*t2822)*t4056;
  p_output1[38]=-0.068*t3962;
  p_output1[39]=-1.*t12829*t1842 + 0.325*t2560 - 1.*t13097*t2560;
  p_output1[40]=0;
  p_output1[41]=-0.325*t1842 + t13097*t1842 - 1.*t12829*t2560;
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

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
