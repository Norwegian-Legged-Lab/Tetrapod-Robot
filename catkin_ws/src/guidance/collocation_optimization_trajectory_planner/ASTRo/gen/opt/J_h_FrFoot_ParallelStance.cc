/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:03 GMT+02:00
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
  double t11487;
  double t11495;
  double t11602;
  double t11815;
  double t12170;
  double t12239;
  double t11486;
  double t12267;
  double t3743;
  double t11374;
  double t12727;
  double t12904;
  double t12945;
  double t12950;
  double t12955;
  double t12963;
  double t12964;
  double t12965;
  double t12991;
  double t12992;
  double t13028;
  double t13029;
  double t12263;
  double t12264;
  double t11604;
  double t12238;
  double t12728;
  double t12731;
  double t12961;
  double t12962;
  double t13232;
  double t13259;
  double t13262;
  double t13516;
  double t13277;
  double t13290;
  double t13314;
  double t13356;
  double t13379;
  double t13381;
  double t13432;
  double t13433;
  double t13456;
  double t13459;
  double t13506;
  double t13584;
  double t13592;
  double t13607;
  double t13643;
  double t13653;
  double t13675;
  double t13718;
  double t13811;
  double t13814;
  double t14787;
  double t14918;
  double t14941;
  double t15113;
  double t15199;
  double t15148;
  double t15213;
  double t15225;
  double t15255;
  double t15274;
  double t15276;
  double t15401;
  double t15403;
  double t15404;
  double t15438;
  double t15442;
  double t15443;
  double t15448;
  double t15459;
  double t15461;
  double t15517;
  double t15532;
  double t15536;
  double t15543;
  double t15544;
  double t15559;
  double t15567;
  double t15569;
  double t15570;
  double t15636;
  double t15639;
  double t15640;
  double t15642;
  double t15643;
  double t15644;
  double t15647;
  double t15650;
  double t15651;
  double t13518;
  double t13526;
  double t13529;
  double t15695;
  double t15696;
  double t15698;
  double t15706;
  double t15708;
  double t15682;
  double t15726;
  double t15727;
  double t15732;
  double t15737;
  double t15738;
  double t15742;
  double t15749;
  double t15750;
  double t15755;
  double t15775;
  double t15777;
  double t15778;
  double t15856;
  double t15857;
  double t15858;
  double t15876;
  double t15893;
  double t15894;
  double t15896;
  double t15898;
  double t15899;
  double t15910;
  double t15911;
  double t15912;
  double t15914;
  double t15918;
  double t15919;
  double t15933;
  double t15934;
  double t15935;
  double t15939;
  double t15940;
  double t15923;
  double t15958;
  double t15959;
  double t15960;
  double t15962;
  double t15964;
  double t15965;
  double t15980;
  double t15981;
  double t15997;
  double t15998;
  double t15999;
  t11487 = Cos(var1[12]);
  t11495 = -1.*t11487;
  t11602 = 1. + t11495;
  t11815 = Sin(var1[12]);
  t12170 = -0.15121*t11815;
  t12239 = Sin(var1[4]);
  t11486 = Cos(var1[5]);
  t12267 = Sin(var1[5]);
  t3743 = Cos(var1[4]);
  t11374 = Sin(var1[13]);
  t12727 = Cos(var1[13]);
  t12904 = -1.*t11487*t11486*t12239;
  t12945 = t11815*t12239*t12267;
  t12950 = t12904 + t12945;
  t12955 = Cos(var1[14]);
  t12963 = -1.*t3743*t11374;
  t12964 = t12727*t12950;
  t12965 = t12963 + t12964;
  t12991 = Sin(var1[14]);
  t12992 = t12727*t3743;
  t13028 = t11374*t12950;
  t13029 = t12992 + t13028;
  t12263 = -0.15121*t11602;
  t12264 = t12263 + t12170;
  t11604 = 0.15121*t11602;
  t12238 = t11604 + t12170;
  t12728 = -1.*t12727;
  t12731 = 1. + t12728;
  t12961 = -1.*t12955;
  t12962 = 1. + t12961;
  t13232 = -1.*t3743*t11486*t11815;
  t13259 = -1.*t11487*t3743*t12267;
  t13262 = t13232 + t13259;
  t13516 = -0.15121*t11487;
  t13277 = 0.28121*t12731*t13262;
  t13290 = 0.50321*t12727*t12962*t13262;
  t13314 = -0.50321*t11374*t12991*t13262;
  t13356 = -1.*t11487*t3743*t11486;
  t13379 = t3743*t11815*t12267;
  t13381 = t13356 + t13379;
  t13432 = -0.15121*t13381;
  t13433 = t12727*t12955*t13262;
  t13456 = t11374*t12991*t13262;
  t13459 = t13433 + t13456;
  t13506 = 0.19821*t13459;
  t13584 = t11487*t3743*t11486;
  t13592 = -1.*t3743*t11815*t12267;
  t13607 = t13584 + t13592;
  t13643 = -1.*t11374*t12239;
  t13653 = t12727*t13607;
  t13675 = t13643 + t13653;
  t13718 = -1.*t12727*t12239;
  t13811 = -1.*t11374*t13607;
  t13814 = t13718 + t13811;
  t14787 = t12727*t12239;
  t14918 = t11374*t13607;
  t14941 = t14787 + t14918;
  t15113 = Cos(var1[3]);
  t15199 = Sin(var1[3]);
  t15148 = t15113*t11486*t12239;
  t15213 = -1.*t15199*t12267;
  t15225 = t15148 + t15213;
  t15255 = -1.*t11486*t15199;
  t15274 = -1.*t15113*t12239*t12267;
  t15276 = t15255 + t15274;
  t15401 = t11487*t15225;
  t15403 = t11815*t15276;
  t15404 = t15401 + t15403;
  t15438 = t15113*t3743*t11374;
  t15442 = t12727*t15404;
  t15443 = t15438 + t15442;
  t15448 = -1.*t12727*t15113*t3743;
  t15459 = t11374*t15404;
  t15461 = t15448 + t15459;
  t15517 = t11487*t3743*t11486*t15199;
  t15532 = -1.*t3743*t11815*t15199*t12267;
  t15536 = t15517 + t15532;
  t15543 = -1.*t11374*t15199*t12239;
  t15544 = t12727*t15536;
  t15559 = t15543 + t15544;
  t15567 = t12727*t15199*t12239;
  t15569 = t11374*t15536;
  t15570 = t15567 + t15569;
  t15636 = -1.*t11486*t15199*t12239;
  t15639 = -1.*t15113*t12267;
  t15640 = t15636 + t15639;
  t15642 = t15113*t11486;
  t15643 = -1.*t15199*t12239*t12267;
  t15644 = t15642 + t15643;
  t15647 = t11815*t15640;
  t15650 = t11487*t15644;
  t15651 = t15647 + t15650;
  t13518 = 0.15121*t11815;
  t13526 = t13516 + t13518;
  t13529 = t13516 + t12170;
  t15695 = t11486*t15199*t12239;
  t15696 = t15113*t12267;
  t15698 = t15695 + t15696;
  t15706 = -1.*t11815*t15698;
  t15708 = t15706 + t15650;
  t15682 = -1.*t11815*t15644;
  t15726 = t11487*t15698;
  t15727 = t11815*t15644;
  t15732 = t15726 + t15727;
  t15737 = t3743*t11374*t15199;
  t15738 = t12727*t15732;
  t15742 = t15737 + t15738;
  t15749 = t12727*t3743*t15199;
  t15750 = -1.*t11374*t15732;
  t15755 = t15749 + t15750;
  t15775 = -1.*t12727*t3743*t15199;
  t15777 = t11374*t15732;
  t15778 = t15775 + t15777;
  t15856 = -1.*t11487*t15113*t3743*t11486;
  t15857 = t15113*t3743*t11815*t12267;
  t15858 = t15856 + t15857;
  t15876 = t15113*t11374*t12239;
  t15893 = t12727*t15858;
  t15894 = t15876 + t15893;
  t15896 = -1.*t12727*t15113*t12239;
  t15898 = t11374*t15858;
  t15899 = t15896 + t15898;
  t15910 = t11486*t15199;
  t15911 = t15113*t12239*t12267;
  t15912 = t15910 + t15911;
  t15914 = t11815*t15225;
  t15918 = t11487*t15912;
  t15919 = t15914 + t15918;
  t15933 = -1.*t15113*t11486*t12239;
  t15934 = t15199*t12267;
  t15935 = t15933 + t15934;
  t15939 = -1.*t11815*t15935;
  t15940 = t15939 + t15918;
  t15923 = -1.*t11815*t15912;
  t15958 = t11487*t15935;
  t15959 = t11815*t15912;
  t15960 = t15958 + t15959;
  t15962 = -1.*t15113*t3743*t11374;
  t15964 = t12727*t15960;
  t15965 = t15962 + t15964;
  t15980 = -1.*t11374*t15960;
  t15981 = t15448 + t15980;
  t15997 = t12727*t15113*t3743;
  t15998 = t11374*t15960;
  t15999 = t15997 + t15998;
  p_output1[0]=1.;
  p_output1[1]=-1.*t11486*t12238*t12239 + t12239*t12264*t12267 - 0.15121*(t11486*t11815*t12239 + t11487*t12239*t12267) + 0.28121*t12731*t12950 + 0.50321*t12962*t12965 - 0.50321*t12991*t13029 + 0.19821*(t12955*t12965 + t12991*t13029) + 0.28121*t11374*t3743;
  p_output1[2]=t13277 + t13290 + t13314 + t13432 + t13506 - 1.*t11486*t12264*t3743 - 1.*t12238*t12267*t3743;
  p_output1[3]=t13277 + t13290 + t13314 + t13432 + t13506 + t11486*t13526*t3743 - 1.*t12267*t13529*t3743;
  p_output1[4]=0.28121*t12239*t12727 + 0.28121*t11374*t13607 - 0.50321*t12991*t13675 + 0.50321*t12962*t13814 + 0.19821*(t12991*t13675 + t12955*t13814);
  p_output1[5]=0.50321*t12991*t13675 - 0.50321*t12955*t14941 + 0.19821*(-1.*t12991*t13675 + t12955*t14941);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t12238*t15225 + t12264*t15276 - 0.15121*(-1.*t11815*t15225 + t11487*t15276) + 0.28121*t12731*t15404 + 0.50321*t12962*t15443 - 0.50321*t12991*t15461 + 0.19821*(t12955*t15443 + t12991*t15461) - 0.28121*t11374*t15113*t3743;
  p_output1[9]=0.28121*t11374*t12239*t15199 + 0.28121*t12731*t15536 + 0.50321*t12962*t15559 - 0.50321*t12991*t15570 + 0.19821*(t12955*t15559 + t12991*t15570) + t11486*t12238*t15199*t3743 - 1.*t12264*t12267*t15199*t3743 - 0.15121*(-1.*t11486*t11815*t15199*t3743 - 1.*t11487*t12267*t15199*t3743);
  p_output1[10]=t12264*t15640 + t12238*t15644 + 0.28121*t12731*t15651 + 0.50321*t12727*t12962*t15651 - 0.50321*t11374*t12991*t15651 + 0.19821*(t12727*t12955*t15651 + t11374*t12991*t15651) - 0.15121*(t11487*t15640 + t15682);
  p_output1[11]=t13529*t15644 + t13526*t15698 - 0.15121*(t15682 - 1.*t11487*t15698) + 0.28121*t12731*t15708 + 0.50321*t12727*t12962*t15708 - 0.50321*t11374*t12991*t15708 + 0.19821*(t12727*t12955*t15708 + t11374*t12991*t15708);
  p_output1[12]=0.28121*t11374*t15732 - 0.50321*t12991*t15742 + 0.50321*t12962*t15755 + 0.19821*(t12991*t15742 + t12955*t15755) - 0.28121*t12727*t15199*t3743;
  p_output1[13]=0.50321*t12991*t15742 - 0.50321*t12955*t15778 + 0.19821*(-1.*t12991*t15742 + t12955*t15778);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t12264*t15644 + t12238*t15698 - 0.15121*t15708 + 0.28121*t12731*t15732 + 0.50321*t12962*t15742 - 0.50321*t12991*t15778 + 0.19821*(t12955*t15742 + t12991*t15778) - 0.28121*t11374*t15199*t3743;
  p_output1[17]=-0.28121*t11374*t12239*t15113 + 0.28121*t12731*t15858 + 0.50321*t12962*t15894 - 0.50321*t12991*t15899 + 0.19821*(t12955*t15894 + t12991*t15899) - 1.*t11486*t12238*t15113*t3743 + t12264*t12267*t15113*t3743 - 0.15121*(t11486*t11815*t15113*t3743 + t11487*t12267*t15113*t3743);
  p_output1[18]=t12264*t15225 + t12238*t15912 + 0.28121*t12731*t15919 + 0.50321*t12727*t12962*t15919 - 0.50321*t11374*t12991*t15919 + 0.19821*(t12727*t12955*t15919 + t11374*t12991*t15919) - 0.15121*(t15401 + t15923);
  p_output1[19]=t13529*t15912 + t13526*t15935 - 0.15121*(t15923 - 1.*t11487*t15935) + 0.28121*t12731*t15940 + 0.50321*t12727*t12962*t15940 - 0.50321*t11374*t12991*t15940 + 0.19821*(t12727*t12955*t15940 + t11374*t12991*t15940);
  p_output1[20]=0.28121*t11374*t15960 - 0.50321*t12991*t15965 + 0.50321*t12962*t15981 + 0.19821*(t12991*t15965 + t12955*t15981) + 0.28121*t12727*t15113*t3743;
  p_output1[21]=0.50321*t12991*t15965 - 0.50321*t12955*t15999 + 0.19821*(-1.*t12991*t15965 + t12955*t15999);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
