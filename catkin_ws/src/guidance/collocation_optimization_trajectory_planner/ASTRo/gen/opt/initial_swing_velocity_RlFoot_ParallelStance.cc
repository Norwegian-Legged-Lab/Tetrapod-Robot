/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:38:00 GMT+02:00
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
  double t1612;
  double t9635;
  double t10145;
  double t10168;
  double t11349;
  double t11374;
  double t3743;
  double t11604;
  double t12170;
  double t12239;
  double t12262;
  double t12263;
  double t12267;
  double t12727;
  double t12728;
  double t13013;
  double t12231;
  double t12238;
  double t12264;
  double t12313;
  double t12326;
  double t12344;
  double t12731;
  double t12904;
  double t12945;
  double t12950;
  double t12961;
  double t12962;
  double t12963;
  double t12964;
  double t12965;
  double t13259;
  double t13277;
  double t13290;
  double t13314;
  double t13262;
  double t13356;
  double t13379;
  double t13432;
  double t13433;
  double t13456;
  double t13643;
  double t13653;
  double t13675;
  double t11495;
  double t11602;
  double t11157;
  double t11486;
  double t15403;
  double t15404;
  double t15438;
  double t15448;
  double t15459;
  double t15472;
  double t15517;
  double t15532;
  double t15536;
  double t15640;
  double t15695;
  double t15696;
  double t15698;
  double t15708;
  double t15726;
  double t15727;
  double t15737;
  double t15738;
  double t15742;
  double t15858;
  double t15857;
  double t15876;
  double t15893;
  double t15896;
  double t15898;
  double t15899;
  double t15911;
  double t15912;
  double t15914;
  double t13025;
  double t13028;
  double t13031;
  double t15965;
  double t15980;
  double t15981;
  double t15999;
  double t16036;
  double t15934;
  double t16766;
  double t16829;
  double t16859;
  double t16861;
  double t16863;
  double t16864;
  double t17046;
  double t17047;
  double t17057;
  double t17061;
  double t17073;
  double t17078;
  double t17090;
  double t17118;
  double t17121;
  double t17181;
  double t17189;
  double t17191;
  double t17180;
  double t17193;
  double t17194;
  double t17253;
  double t17254;
  double t17256;
  double t17307;
  double t17311;
  double t17312;
  double t17385;
  double t17387;
  double t17459;
  double t17503;
  double t17507;
  double t17514;
  double t17516;
  double t17517;
  double t17518;
  double t17535;
  double t17536;
  double t17537;
  double t18042;
  double t18273;
  double t18375;
  double t19652;
  double t19670;
  double t19671;
  double t20125;
  double t20178;
  double t18624;
  double t20796;
  double t20797;
  double t20811;
  double t20795;
  double t20815;
  double t20816;
  double t20955;
  double t21286;
  double t21304;
  double t23092;
  double t23168;
  t1612 = Cos(var1[4]);
  t9635 = Cos(var1[9]);
  t10145 = -1.*t9635;
  t10168 = 1. + t10145;
  t11349 = Sin(var1[9]);
  t11374 = 0.15121*t11349;
  t3743 = Cos(var1[5]);
  t11604 = Sin(var1[5]);
  t12170 = Cos(var1[10]);
  t12239 = -1.*t1612*t3743*t11349;
  t12262 = -1.*t9635*t1612*t11604;
  t12263 = t12239 + t12262;
  t12267 = Cos(var1[11]);
  t12727 = Sin(var1[10]);
  t12728 = Sin(var1[11]);
  t13013 = 0.15121*t9635;
  t12231 = -1.*t12170;
  t12238 = 1. + t12231;
  t12264 = -0.28121*t12238*t12263;
  t12313 = -1.*t12267;
  t12326 = 1. + t12313;
  t12344 = -0.50321*t12170*t12326*t12263;
  t12731 = 0.50321*t12727*t12728*t12263;
  t12904 = -1.*t9635*t1612*t3743;
  t12945 = t1612*t11349*t11604;
  t12950 = t12904 + t12945;
  t12961 = 0.15121*t12950;
  t12962 = t12170*t12267*t12263;
  t12963 = t12727*t12728*t12263;
  t12964 = t12962 + t12963;
  t12965 = -0.19821*t12964;
  t13259 = Sin(var1[4]);
  t13277 = t9635*t1612*t3743;
  t13290 = -1.*t1612*t11349*t11604;
  t13314 = t13277 + t13290;
  t13262 = t12727*t13259;
  t13356 = t12170*t13314;
  t13379 = t13262 + t13356;
  t13432 = t12170*t13259;
  t13433 = -1.*t12727*t13314;
  t13456 = t13432 + t13433;
  t13643 = -1.*t12727*t13259;
  t13653 = -1.*t12170*t13314;
  t13675 = t13643 + t13653;
  t11495 = -0.15121*t10168;
  t11602 = t11495 + t11374;
  t11157 = 0.15121*t10168;
  t11486 = t11157 + t11374;
  t15403 = -1.*t9635*t3743*t13259;
  t15404 = t11349*t13259*t11604;
  t15438 = t15403 + t15404;
  t15448 = t1612*t12727;
  t15459 = t12170*t15438;
  t15472 = t15448 + t15459;
  t15517 = t12170*t1612;
  t15532 = -1.*t12727*t15438;
  t15536 = t15517 + t15532;
  t15640 = Sin(var1[3]);
  t15695 = t9635*t1612*t3743*t15640;
  t15696 = -1.*t1612*t11349*t15640*t11604;
  t15698 = t15695 + t15696;
  t15708 = t12727*t15640*t13259;
  t15726 = t12170*t15698;
  t15727 = t15708 + t15726;
  t15737 = t12170*t15640*t13259;
  t15738 = -1.*t12727*t15698;
  t15742 = t15737 + t15738;
  t15858 = Cos(var1[3]);
  t15857 = -1.*t3743*t15640*t13259;
  t15876 = -1.*t15858*t11604;
  t15893 = t15857 + t15876;
  t15896 = t15858*t3743;
  t15898 = -1.*t15640*t13259*t11604;
  t15899 = t15896 + t15898;
  t15911 = t11349*t15893;
  t15912 = t9635*t15899;
  t15914 = t15911 + t15912;
  t13025 = -0.15121*t11349;
  t13028 = t13013 + t13025;
  t13031 = t13013 + t11374;
  t15965 = t3743*t15640*t13259;
  t15980 = t15858*t11604;
  t15981 = t15965 + t15980;
  t15999 = -1.*t11349*t15981;
  t16036 = t15999 + t15912;
  t15934 = -1.*t11349*t15899;
  t16766 = t15858*t3743*t13259;
  t16829 = -1.*t15640*t11604;
  t16859 = t16766 + t16829;
  t16861 = -1.*t3743*t15640;
  t16863 = -1.*t15858*t13259*t11604;
  t16864 = t16861 + t16863;
  t17046 = t9635*t16859;
  t17047 = t11349*t16864;
  t17057 = t17046 + t17047;
  t17061 = -1.*t15858*t1612*t12727;
  t17073 = t12170*t17057;
  t17078 = t17061 + t17073;
  t17090 = -1.*t12170*t15858*t1612;
  t17118 = -1.*t12727*t17057;
  t17121 = t17090 + t17118;
  t17181 = t9635*t15981;
  t17189 = t11349*t15899;
  t17191 = t17181 + t17189;
  t17180 = -1.*t1612*t12727*t15640;
  t17193 = t12170*t17191;
  t17194 = t17180 + t17193;
  t17253 = -1.*t12170*t1612*t15640;
  t17254 = -1.*t12727*t17191;
  t17256 = t17253 + t17254;
  t17307 = t1612*t12727*t15640;
  t17311 = -1.*t12170*t17191;
  t17312 = t17307 + t17311;
  t17385 = -1.*t9635*t15858*t1612*t3743;
  t17387 = t15858*t1612*t11349*t11604;
  t17459 = t17385 + t17387;
  t17503 = -1.*t15858*t12727*t13259;
  t17507 = t12170*t17459;
  t17514 = t17503 + t17507;
  t17516 = -1.*t12170*t15858*t13259;
  t17517 = -1.*t12727*t17459;
  t17518 = t17516 + t17517;
  t17535 = t3743*t15640;
  t17536 = t15858*t13259*t11604;
  t17537 = t17535 + t17536;
  t18042 = t11349*t16859;
  t18273 = t9635*t17537;
  t18375 = t18042 + t18273;
  t19652 = -1.*t15858*t3743*t13259;
  t19670 = t15640*t11604;
  t19671 = t19652 + t19670;
  t20125 = -1.*t11349*t19671;
  t20178 = t20125 + t18273;
  t18624 = -1.*t11349*t17537;
  t20796 = t9635*t19671;
  t20797 = t11349*t17537;
  t20811 = t20796 + t20797;
  t20795 = t15858*t1612*t12727;
  t20815 = t12170*t20811;
  t20816 = t20795 + t20815;
  t20955 = t12170*t15858*t1612;
  t21286 = -1.*t12727*t20811;
  t21304 = t20955 + t21286;
  t23092 = -1.*t12170*t20811;
  t23168 = t17061 + t23092;
  p_output1[0]=var2[0] + (t11486*t11604*t13259 - 0.28121*t12238*t15438 - 0.50321*t12326*t15472 - 0.50321*t12728*t15536 - 0.19821*(t12267*t15472 - 1.*t12728*t15536) + 0.28121*t12727*t1612 - 1.*t11602*t13259*t3743 + 0.15121*(t11349*t13259*t3743 + t11604*t13259*t9635))*var2[4] + (t12264 + t12344 + t12731 + t12961 + t12965 - 1.*t11602*t11604*t1612 - 1.*t11486*t1612*t3743)*var2[5] + (t12264 + t12344 + t12731 + t12961 + t12965 - 1.*t11604*t13031*t1612 + t13028*t1612*t3743)*var2[9] + (0.28121*t12170*t13259 - 0.28121*t12727*t13314 - 0.50321*t12326*t13456 - 0.50321*t12728*t13675 - 0.19821*(t12267*t13456 - 1.*t12728*t13675))*var2[10] + (-0.50321*t12728*t13379 - 0.50321*t12267*t13456 - 0.19821*(-1.*t12728*t13379 - 1.*t12267*t13456))*var2[11];
  p_output1[1]=var2[1] + (-0.28121*t12727*t15858*t1612 + t11602*t16859 + t11486*t16864 - 0.28121*t12238*t17057 - 0.50321*t12326*t17078 - 0.50321*t12728*t17121 - 0.19821*(t12267*t17078 - 1.*t12728*t17121) + 0.15121*(-1.*t11349*t16859 + t16864*t9635))*var2[3] + (0.28121*t12727*t13259*t15640 - 0.28121*t12238*t15698 - 0.50321*t12326*t15727 - 0.50321*t12728*t15742 - 0.19821*(t12267*t15727 - 1.*t12728*t15742) - 1.*t11486*t11604*t15640*t1612 + t11602*t15640*t1612*t3743 + 0.15121*(-1.*t11349*t15640*t1612*t3743 - 1.*t11604*t15640*t1612*t9635))*var2[4] + (t11486*t15893 + t11602*t15899 - 0.28121*t12238*t15914 - 0.50321*t12170*t12326*t15914 + 0.50321*t12727*t12728*t15914 - 0.19821*(t12170*t12267*t15914 + t12727*t12728*t15914) + 0.15121*(t15934 + t15893*t9635))*var2[5] + (t13031*t15899 + t13028*t15981 - 0.28121*t12238*t16036 - 0.50321*t12170*t12326*t16036 + 0.50321*t12727*t12728*t16036 - 0.19821*(t12170*t12267*t16036 + t12727*t12728*t16036) + 0.15121*(t15934 - 1.*t15981*t9635))*var2[9] + (-0.28121*t12170*t15640*t1612 - 0.28121*t12727*t17191 - 0.50321*t12326*t17256 - 0.50321*t12728*t17312 - 0.19821*(t12267*t17256 - 1.*t12728*t17312))*var2[10] + (-0.50321*t12728*t17194 - 0.50321*t12267*t17256 - 0.19821*(-1.*t12728*t17194 - 1.*t12267*t17256))*var2[11];
  p_output1[2]=var2[2] + (t11486*t15899 + t11602*t15981 + 0.15121*t16036 - 0.28121*t12727*t15640*t1612 - 0.28121*t12238*t17191 - 0.50321*t12326*t17194 - 0.50321*t12728*t17256 - 0.19821*(t12267*t17194 - 1.*t12728*t17256))*var2[3] + (-0.28121*t12727*t13259*t15858 + t11486*t11604*t15858*t1612 - 0.28121*t12238*t17459 - 0.50321*t12326*t17514 - 0.50321*t12728*t17518 - 0.19821*(t12267*t17514 - 1.*t12728*t17518) - 1.*t11602*t15858*t1612*t3743 + 0.15121*(t11349*t15858*t1612*t3743 + t11604*t15858*t1612*t9635))*var2[4] + (t11486*t16859 + t11602*t17537 - 0.28121*t12238*t18375 - 0.50321*t12170*t12326*t18375 + 0.50321*t12727*t12728*t18375 - 0.19821*(t12170*t12267*t18375 + t12727*t12728*t18375) + 0.15121*(t17046 + t18624))*var2[5] + (t13031*t17537 + t13028*t19671 - 0.28121*t12238*t20178 - 0.50321*t12170*t12326*t20178 + 0.50321*t12727*t12728*t20178 - 0.19821*(t12170*t12267*t20178 + t12727*t12728*t20178) + 0.15121*(t18624 - 1.*t19671*t9635))*var2[9] + (0.28121*t12170*t15858*t1612 - 0.28121*t12727*t20811 - 0.50321*t12326*t21304 - 0.50321*t12728*t23168 - 0.19821*(t12267*t21304 - 1.*t12728*t23168))*var2[10] + (-0.50321*t12728*t20816 - 0.50321*t12267*t21304 - 0.19821*(-1.*t12728*t20816 - 1.*t12267*t21304))*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "initial_swing_velocity_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void initial_swing_velocity_RlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
