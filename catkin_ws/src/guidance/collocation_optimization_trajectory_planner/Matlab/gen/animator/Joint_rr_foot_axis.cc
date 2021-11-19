/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 15:18:40 GMT+01:00
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
  double t825;
  double t850;
  double t897;
  double t1000;
  double t1343;
  double t1450;
  double t1370;
  double t1388;
  double t1454;
  double t468;
  double t495;
  double t591;
  double t654;
  double t1037;
  double t1407;
  double t1473;
  double t1474;
  double t947;
  double t1601;
  double t1617;
  double t1643;
  double t2143;
  double t1145;
  double t201;
  double t328;
  double t340;
  double t1005;
  double t1102;
  double t1220;
  double t1264;
  double t1504;
  double t1509;
  double t1512;
  double t1730;
  double t1843;
  double t2034;
  double t2074;
  double t2102;
  double t2154;
  double t2155;
  double t2175;
  double t2203;
  double t2262;
  double t2365;
  double t2555;
  double t1898;
  double t2711;
  double t2730;
  double t2823;
  double t2852;
  double t2858;
  double t2911;
  double t2940;
  double t2979;
  double t3002;
  double t3036;
  double t3157;
  double t3173;
  double t620;
  double t3930;
  double t666;
  double t809;
  double t1894;
  double t1931;
  double t2031;
  double t2646;
  double t2664;
  double t2680;
  double t3133;
  double t3134;
  double t3209;
  double t3225;
  double t3260;
  double t3263;
  double t3281;
  double t3308;
  double t3689;
  double t3791;
  double t3807;
  double t3848;
  double t4247;
  double t4427;
  double t4430;
  double t4501;
  double t4510;
  double t4511;
  double t4530;
  double t4678;
  double t4696;
  double t3141;
  double t4858;
  double t366;
  double t445;
  double t5261;
  double t5498;
  double t5455;
  double t5501;
  double t5514;
  double t5572;
  double t5590;
  double t5601;
  double t5558;
  double t5608;
  double t5611;
  double t5642;
  double t5672;
  double t5687;
  double t3160;
  double t3169;
  double t5333;
  double t5613;
  double t5690;
  double t5693;
  double t5705;
  double t5709;
  double t5712;
  double t5718;
  double t5728;
  double t5729;
  double t5733;
  double t5737;
  double t4094;
  double t4174;
  double t4776;
  double t4791;
  double t5701;
  double t5720;
  double t5741;
  double t5747;
  double t4883;
  double t5752;
  double t5755;
  double t5756;
  double t5762;
  double t4967;
  double t4982;
  double t5775;
  double t5784;
  double t5793;
  double t5807;
  double t5008;
  double t5016;
  double t5051;
  double t5082;
  double t5093;
  double t5099;
  double t5855;
  double t5858;
  double t5861;
  double t5866;
  double t5867;
  double t5871;
  double t5865;
  double t5874;
  double t5877;
  double t5883;
  double t5889;
  double t5890;
  double t5854;
  double t5882;
  double t5892;
  double t5894;
  double t5897;
  double t5899;
  double t5900;
  double t5902;
  double t5909;
  double t5912;
  double t5913;
  double t5917;
  double t5895;
  double t5905;
  double t5922;
  double t5925;
  double t5929;
  double t5933;
  double t5934;
  double t5936;
  double t5941;
  double t5944;
  double t5945;
  double t5946;
  t825 = Cos(var1[16]);
  t850 = -1.*t825;
  t897 = 1. + t850;
  t1000 = Sin(var1[16]);
  t1343 = Cos(var1[4]);
  t1450 = Cos(var1[15]);
  t1370 = Cos(var1[5]);
  t1388 = Sin(var1[15]);
  t1454 = Sin(var1[5]);
  t468 = Cos(var1[17]);
  t495 = -1.*t468;
  t591 = 1. + t495;
  t654 = Sin(var1[17]);
  t1037 = Sin(var1[4]);
  t1407 = -1.*t1343*t1370*t1388;
  t1473 = -1.*t1450*t1343*t1454;
  t1474 = t1407 + t1473;
  t947 = -2.7999999999999997e-11*t897;
  t1601 = t1450*t1343*t1370;
  t1617 = -1.*t1343*t1388*t1454;
  t1643 = t1601 + t1617;
  t2143 = 4.e-6*t897;
  t1145 = -7.e-6*t897;
  t201 = Cos(var1[21]);
  t328 = -1.*t201;
  t340 = 1. + t328;
  t1005 = t947 + t1000;
  t1102 = t1005*t1037;
  t1220 = -4.e-6*t1000;
  t1264 = t1145 + t1220;
  t1504 = t1264*t1474;
  t1509 = -1.000000000016*t897;
  t1512 = 1. + t1509;
  t1730 = t1512*t1643;
  t1843 = t1102 + t1504 + t1730;
  t2034 = -1.000000000049*t897;
  t2074 = 1. + t2034;
  t2102 = t2074*t1037;
  t2154 = -7.e-6*t1000;
  t2155 = t2143 + t2154;
  t2175 = t2155*t1474;
  t2203 = -1.*t1000;
  t2262 = t947 + t2203;
  t2365 = t2262*t1643;
  t2555 = t2102 + t2175 + t2365;
  t1898 = 4.e-6*t591;
  t2711 = 7.e-6*t1000;
  t2730 = t2143 + t2711;
  t2823 = t2730*t1037;
  t2852 = -6.5e-11*t897;
  t2858 = 1. + t2852;
  t2911 = t2858*t1474;
  t2940 = 4.e-6*t1000;
  t2979 = t1145 + t2940;
  t3002 = t2979*t1643;
  t3036 = t2823 + t2911 + t3002;
  t3157 = Sin(var1[21]);
  t3173 = -2.7999999999999997e-11*t591;
  t620 = -7.e-6*t591;
  t3930 = -7.e-6*t340;
  t666 = 4.e-6*t654;
  t809 = t620 + t666;
  t1894 = t809*t1843;
  t1931 = 7.e-6*t654;
  t2031 = t1898 + t1931;
  t2646 = t2031*t2555;
  t2664 = -6.5e-11*t591;
  t2680 = 1. + t2664;
  t3133 = t2680*t3036;
  t3134 = t1894 + t2646 + t3133;
  t3209 = -1.*t654;
  t3225 = t3173 + t3209;
  t3260 = t3225*t1843;
  t3263 = -1.000000000049*t591;
  t3281 = 1. + t3263;
  t3308 = t3281*t2555;
  t3689 = -7.e-6*t654;
  t3791 = t1898 + t3689;
  t3807 = t3791*t3036;
  t3848 = t3260 + t3308 + t3807;
  t4247 = -1.000000000016*t591;
  t4427 = 1. + t4247;
  t4430 = t4427*t1843;
  t4501 = t3173 + t654;
  t4510 = t4501*t2555;
  t4511 = -4.e-6*t654;
  t4530 = t620 + t4511;
  t4678 = t4530*t3036;
  t4696 = t4430 + t4510 + t4678;
  t3141 = 4.e-6*t340;
  t4858 = -2.7999999999999997e-11*t340;
  t366 = -6.5e-11*t340;
  t445 = 1. + t366;
  t5261 = Sin(var1[3]);
  t5498 = Cos(var1[3]);
  t5455 = t1370*t5261*t1037;
  t5501 = t5498*t1454;
  t5514 = t5455 + t5501;
  t5572 = t5498*t1370;
  t5590 = -1.*t5261*t1037*t1454;
  t5601 = t5572 + t5590;
  t5558 = -1.*t1388*t5514;
  t5608 = t1450*t5601;
  t5611 = t5558 + t5608;
  t5642 = t1450*t5514;
  t5672 = t1388*t5601;
  t5687 = t5642 + t5672;
  t3160 = 7.e-6*t3157;
  t3169 = t3141 + t3160;
  t5333 = -1.*t1343*t1005*t5261;
  t5613 = t1264*t5611;
  t5690 = t1512*t5687;
  t5693 = t5333 + t5613 + t5690;
  t5705 = -1.*t2074*t1343*t5261;
  t5709 = t2155*t5611;
  t5712 = t2262*t5687;
  t5718 = t5705 + t5709 + t5712;
  t5728 = -1.*t1343*t2730*t5261;
  t5729 = t2858*t5611;
  t5733 = t2979*t5687;
  t5737 = t5728 + t5729 + t5733;
  t4094 = 4.e-6*t3157;
  t4174 = t3930 + t4094;
  t4776 = -4.e-6*t3157;
  t4791 = t3930 + t4776;
  t5701 = t809*t5693;
  t5720 = t2031*t5718;
  t5741 = t2680*t5737;
  t5747 = t5701 + t5720 + t5741;
  t4883 = t4858 + t3157;
  t5752 = t3225*t5693;
  t5755 = t3281*t5718;
  t5756 = t3791*t5737;
  t5762 = t5752 + t5755 + t5756;
  t4967 = -1.000000000016*t340;
  t4982 = 1. + t4967;
  t5775 = t4427*t5693;
  t5784 = t4501*t5718;
  t5793 = t4530*t5737;
  t5807 = t5775 + t5784 + t5793;
  t5008 = -7.e-6*t3157;
  t5016 = t3141 + t5008;
  t5051 = -1.000000000049*t340;
  t5082 = 1. + t5051;
  t5093 = -1.*t3157;
  t5099 = t4858 + t5093;
  t5855 = -1.*t5498*t1370*t1037;
  t5858 = t5261*t1454;
  t5861 = t5855 + t5858;
  t5866 = t1370*t5261;
  t5867 = t5498*t1037*t1454;
  t5871 = t5866 + t5867;
  t5865 = -1.*t1388*t5861;
  t5874 = t1450*t5871;
  t5877 = t5865 + t5874;
  t5883 = t1450*t5861;
  t5889 = t1388*t5871;
  t5890 = t5883 + t5889;
  t5854 = t5498*t1343*t1005;
  t5882 = t1264*t5877;
  t5892 = t1512*t5890;
  t5894 = t5854 + t5882 + t5892;
  t5897 = t2074*t5498*t1343;
  t5899 = t2155*t5877;
  t5900 = t2262*t5890;
  t5902 = t5897 + t5899 + t5900;
  t5909 = t5498*t1343*t2730;
  t5912 = t2858*t5877;
  t5913 = t2979*t5890;
  t5917 = t5909 + t5912 + t5913;
  t5895 = t809*t5894;
  t5905 = t2031*t5902;
  t5922 = t2680*t5917;
  t5925 = t5895 + t5905 + t5922;
  t5929 = t3225*t5894;
  t5933 = t3281*t5902;
  t5934 = t3791*t5917;
  t5936 = t5929 + t5933 + t5934;
  t5941 = t4427*t5894;
  t5944 = t4501*t5902;
  t5945 = t4530*t5917;
  t5946 = t5941 + t5944 + t5945;
  p_output1[0]=-1.*t3169*t3848 - 1.*t3134*t445 - 1.*t4174*t4696 + 7.e-6*(t3134*t4791 + t3848*t4883 + t4696*t4982) - 4.e-6*(t3134*t5016 + t3848*t5082 + t4696*t5099);
  p_output1[1]=-1.*t445*t5747 - 1.*t3169*t5762 - 1.*t4174*t5807 + 7.e-6*(t4791*t5747 + t4883*t5762 + t4982*t5807) - 4.e-6*(t5016*t5747 + t5082*t5762 + t5099*t5807);
  p_output1[2]=-1.*t445*t5925 - 1.*t3169*t5936 - 1.*t4174*t5946 + 7.e-6*(t4791*t5925 + t4883*t5936 + t4982*t5946) - 4.e-6*(t5016*t5925 + t5082*t5936 + t5099*t5946);
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_rr_foot_axis.hh"

namespace SymFunction
{

void Joint_rr_foot_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
