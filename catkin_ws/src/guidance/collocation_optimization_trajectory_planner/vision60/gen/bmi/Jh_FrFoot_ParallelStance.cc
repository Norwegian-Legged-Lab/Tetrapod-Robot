/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:32 GMT+02:00
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
  double t1804;
  double t1631;
  double t1695;
  double t1807;
  double t1798;
  double t1808;
  double t1809;
  double t2611;
  double t1848;
  double t1022;
  double t2275;
  double t2628;
  double t2304;
  double t2399;
  double t2489;
  double t2295;
  double t2505;
  double t2650;
  double t2675;
  double t3894;
  double t3962;
  double t3407;
  double t3487;
  double t3635;
  double t3824;
  double t3840;
  double t3877;
  double t3905;
  double t3927;
  double t3935;
  double t3973;
  double t4001;
  double t4028;
  double t4110;
  double t4130;
  double t4200;
  double t4402;
  double t4458;
  double t4460;
  double t4495;
  double t4501;
  double t4526;
  double t3404;
  double t3879;
  double t3882;
  double t4966;
  double t4983;
  double t4990;
  double t5037;
  double t5041;
  double t5057;
  double t5087;
  double t5093;
  double t5174;
  double t3121;
  double t3333;
  double t3342;
  double t4960;
  double t5022;
  double t5175;
  double t5179;
  double t5205;
  double t5266;
  double t5293;
  double t5327;
  double t5341;
  double t5390;
  double t4915;
  double t4925;
  double t4935;
  double t4937;
  double t5192;
  double t5199;
  double t5514;
  double t5609;
  double t5660;
  double t5705;
  double t5751;
  double t5752;
  double t5203;
  double t5394;
  double t5447;
  double t5702;
  double t5812;
  double t5866;
  double t6232;
  double t6641;
  double t6733;
  double t1879;
  double t2692;
  double t2942;
  double t5497;
  double t7538;
  double t8273;
  double t8418;
  double t8810;
  double t8885;
  double t9556;
  double t9614;
  double t9802;
  double t9710;
  double t10071;
  double t10146;
  double t14900;
  double t13636;
  t1804 = Cos(var1[13]);
  t1631 = Cos(var1[14]);
  t1695 = Sin(var1[13]);
  t1807 = Sin(var1[14]);
  t1798 = t1631*t1695;
  t1808 = -1.*t1804*t1807;
  t1809 = t1798 + t1808;
  t2611 = Sin(var1[12]);
  t1848 = Sin(var1[4]);
  t1022 = Cos(var1[12]);
  t2275 = Cos(var1[4]);
  t2628 = Sin(var1[5]);
  t2304 = t1804*t1631;
  t2399 = t1695*t1807;
  t2489 = t2304 + t2399;
  t2295 = Cos(var1[5]);
  t2505 = t2295*t2489;
  t2650 = t2611*t1809*t2628;
  t2675 = t2505 + t2650;
  t3894 = Cos(var1[3]);
  t3962 = Sin(var1[3]);
  t3407 = -1.*t1631*t1695;
  t3487 = t1804*t1807;
  t3635 = t3407 + t3487;
  t3824 = t2295*t3635;
  t3840 = t2611*t2489*t2628;
  t3877 = t3824 + t3840;
  t3905 = -1.*t2295*t2611*t1809;
  t3927 = t2489*t2628;
  t3935 = t3905 + t3927;
  t3973 = t1022*t2275*t1809;
  t4001 = -1.*t1848*t2675;
  t4028 = t3973 + t4001;
  t4110 = t2275*t2611;
  t4130 = t1022*t1848*t2628;
  t4200 = t4110 + t4130;
  t4402 = -1.*t2295*t2611*t2489;
  t4458 = t3635*t2628;
  t4460 = t4402 + t4458;
  t4495 = t1022*t2275*t2489;
  t4501 = -1.*t1848*t3877;
  t4526 = t4495 + t4501;
  t3404 = t1022*t2489*t1848;
  t3879 = t2275*t3877;
  t3882 = t3404 + t3879;
  t4966 = -0.0641*t1631;
  t4983 = -0.28*t1807;
  t4990 = t4966 + t4983;
  t5037 = -1.*t1631;
  t5041 = 1. + t5037;
  t5057 = 0.075*t5041;
  t5087 = 0.355*t1631;
  t5093 = -0.0641*t1807;
  t5174 = t5057 + t5087 + t5093;
  t3121 = t2611*t1848;
  t3333 = -1.*t1022*t2275*t2628;
  t3342 = t3121 + t3333;
  t4960 = -0.325*t1695;
  t5022 = t1804*t4990;
  t5175 = t1695*t5174;
  t5179 = t4960 + t5022 + t5175;
  t5205 = -1.*t1804;
  t5266 = 1. + t5205;
  t5293 = 0.325*t5266;
  t5327 = -1.*t1695*t4990;
  t5341 = t1804*t5174;
  t5390 = t5293 + t5327 + t5341;
  t4915 = -1.*t1022;
  t4925 = 1. + t4915;
  t4935 = -0.1575*t4925;
  t4937 = -0.2255*t1022;
  t5192 = -1.*t2611*t5179;
  t5199 = t4935 + t4937 + t5192;
  t5514 = -0.068*t2611;
  t5609 = t1022*t5179;
  t5660 = t5514 + t5609;
  t5705 = t2295*t5390;
  t5751 = -1.*t5199*t2628;
  t5752 = t5705 + t5751;
  t5203 = t2295*t5199;
  t5394 = t5390*t2628;
  t5447 = t5203 + t5394;
  t5702 = t5660*t1848;
  t5812 = t2275*t5752;
  t5866 = t5702 + t5812;
  t6232 = t2275*t5660;
  t6641 = -1.*t1848*t5752;
  t6733 = t6232 + t6641;
  t1879 = t1022*t1809*t1848;
  t2692 = t2275*t2675;
  t2942 = t1879 + t2692;
  t5497 = -1.*t1022*t2295*t5447;
  t7538 = t5447*t4460;
  t8273 = t5447*t3935;
  t8418 = -1.*t5447*t4460;
  t8810 = t1022*t2295*t5447;
  t8885 = -1.*t5447*t3935;
  t9556 = -1.*t2611*t5660;
  t9614 = t1022*t5660*t2489;
  t9802 = -1.*t1022*t5660*t2489;
  t9710 = t1022*t5660*t1809;
  t10071 = t2611*t5660;
  t10146 = -1.*t1022*t5660*t1809;
  t14900 = t5390*t2489;
  t13636 = -1.*t5390*t3635;
  p_output1[0]=t2942;
  p_output1[1]=t3342;
  p_output1[2]=t3882;
  p_output1[3]=t3894*t3935 - 1.*t3962*t4028;
  p_output1[4]=t1022*t2295*t3894 - 1.*t3962*t4200;
  p_output1[5]=t3894*t4460 - 1.*t3962*t4526;
  p_output1[6]=t3935*t3962 + t3894*t4028;
  p_output1[7]=t1022*t2295*t3962 + t3894*t4200;
  p_output1[8]=t3962*t4460 + t3894*t4526;
  p_output1[9]=t3882*(t5497 - 1.*t3342*t5866 - 1.*t4200*t6733) + t3342*(t3882*t5866 + t4526*t6733 + t7538);
  p_output1[10]=t3882*(t2942*t5866 + t4028*t6733 + t8273) + t2942*(-1.*t3882*t5866 - 1.*t4526*t6733 + t8418);
  p_output1[11]=t2942*(t3342*t5866 + t4200*t6733 + t8810) + t3342*(-1.*t2942*t5866 - 1.*t4028*t6733 + t8885);
  p_output1[12]=t4460*(t5497 + t1022*t2628*t5752 + t9556) + t1022*t2295*(t3877*t5752 + t7538 + t9614);
  p_output1[13]=t4460*(t2675*t5752 + t8273 + t9710) + t3935*(-1.*t3877*t5752 + t8418 + t9802);
  p_output1[14]=t3935*(t10071 - 1.*t1022*t2628*t5752 + t8810) + t1022*t2295*(t10146 - 1.*t2675*t5752 + t8885);
  p_output1[15]=t1022*t2489*(-1.*t1022*t5199 + t9556) + t2611*(-1.*t2489*t2611*t5199 + t3635*t5390 + t9614);
  p_output1[16]=t1022*t2489*(t14900 - 1.*t1809*t2611*t5199 + t9710) + t1022*t1809*(t13636 + t2489*t2611*t5199 + t9802);
  p_output1[17]=t1022*t1809*(t10071 + t1022*t5199) + t2611*(t10146 + t1809*t2611*t5199 - 1.*t2489*t5390);
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
  p_output1[36]=0.1575*t1809 + 0.2255*t3635;
  p_output1[37]=t3635*(t14900 + t1809*t5179) + t2489*(t13636 - 1.*t2489*t5179);
  p_output1[38]=-0.068*t2489;
  p_output1[39]=0.325*t1807 - 1.*t1631*t4990 - 1.*t1807*t5174;
  p_output1[40]=0;
  p_output1[41]=-0.325*t1631 - 1.*t1807*t4990 + t1631*t5174;
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
