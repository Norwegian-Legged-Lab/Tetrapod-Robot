/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:51 GMT+02:00
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
  double t725;
  double t731;
  double t785;
  double t796;
  double t747;
  double t793;
  double t799;
  double t811;
  double t2129;
  double t2137;
  double t2131;
  double t2138;
  double t2139;
  double t2142;
  double t2143;
  double t2145;
  double t2130;
  double t2141;
  double t2146;
  double t2147;
  double t2676;
  double t2682;
  double t2689;
  double t2696;
  double t2697;
  double t2700;
  double t2671;
  double t2693;
  double t2701;
  double t2705;
  double t843;
  double t857;
  double t899;
  double t910;
  double t1191;
  double t1472;
  double t1973;
  double t2021;
  double t2025;
  double t2050;
  double t2058;
  double t2068;
  double t2076;
  double t2094;
  double t2099;
  double t2108;
  double t2113;
  double t2125;
  double t3391;
  double t3407;
  double t3409;
  double t2161;
  double t2256;
  double t2265;
  double t2317;
  double t2354;
  double t2382;
  double t2434;
  double t2456;
  double t2501;
  double t2528;
  double t2556;
  double t2574;
  double t2589;
  double t2617;
  double t2630;
  double t2635;
  double t2640;
  double t2650;
  double t3839;
  double t3842;
  double t3846;
  double t2709;
  double t2721;
  double t2731;
  double t2737;
  double t2743;
  double t2757;
  double t2773;
  double t2789;
  double t2803;
  double t2816;
  double t2872;
  double t2928;
  double t2938;
  double t3082;
  double t3135;
  double t3196;
  double t3264;
  double t3305;
  double t4550;
  double t4554;
  double t4555;
  t725 = Cos(var1[4]);
  t731 = Cos(var1[5]);
  t785 = Sin(var1[4]);
  t796 = Sin(var1[5]);
  t747 = -0.007071*t725*t731;
  t793 = 0.011181*t785;
  t799 = -0.007071*t725*t796;
  t811 = var1[0] + t747 + t793 + t799;
  t2129 = Sin(var1[3]);
  t2137 = Cos(var1[3]);
  t2131 = t731*t2129*t785;
  t2138 = t2137*t796;
  t2139 = t2131 + t2138;
  t2142 = t2137*t731;
  t2143 = -1.*t2129*t785*t796;
  t2145 = t2142 + t2143;
  t2130 = -0.011181*t725*t2129;
  t2141 = -0.007071*t2139;
  t2146 = 0.007071*t2145;
  t2147 = var1[1] + t2130 + t2141 + t2146;
  t2676 = -1.*t2137*t731*t785;
  t2682 = t2129*t796;
  t2689 = t2676 + t2682;
  t2696 = t731*t2129;
  t2697 = t2137*t785*t796;
  t2700 = t2696 + t2697;
  t2671 = 0.011181*t2137*t725;
  t2693 = -0.007071*t2689;
  t2701 = 0.007071*t2700;
  t2705 = var1[2] + t2671 + t2693 + t2701;
  t843 = 0.007328*t785;
  t857 = 0.002681*t785;
  t899 = -0.002256*t785;
  t910 = -0.006949*t785;
  t1191 = -0.010889*t785;
  t1472 = -0.013649*t785;
  t1973 = -0.014929*t785;
  t2021 = -0.014592*t785;
  t2025 = -0.012674*t785;
  t2050 = -0.009382*t785;
  t2058 = -0.005074*t785;
  t2068 = -0.000216*t785;
  t2076 = 0.004666*t785;
  t2094 = 0.009042*t785;
  t2099 = 0.012438*t785;
  t2108 = 0.014487*t785;
  t2113 = 0.014965*t785;
  t2125 = 0.013822*t785;
  t3391 = -0.158281*t725*t731;
  t3407 = 0.144139*t725*t796;
  t3409 = var1[0] + t3391 + t793 + t3407;
  t2161 = -0.007328*t725*t2129;
  t2256 = -0.002681*t725*t2129;
  t2265 = 0.002256*t725*t2129;
  t2317 = 0.006949*t725*t2129;
  t2354 = 0.010889*t725*t2129;
  t2382 = 0.013649*t725*t2129;
  t2434 = 0.014929*t725*t2129;
  t2456 = 0.014592*t725*t2129;
  t2501 = 0.012674*t725*t2129;
  t2528 = 0.009382*t725*t2129;
  t2556 = 0.005074*t725*t2129;
  t2574 = 0.000216*t725*t2129;
  t2589 = -0.004666*t725*t2129;
  t2617 = -0.009042*t725*t2129;
  t2630 = -0.012438*t725*t2129;
  t2635 = -0.014487*t725*t2129;
  t2640 = -0.014965*t725*t2129;
  t2650 = -0.013822*t725*t2129;
  t3839 = -0.158281*t2139;
  t3842 = -0.144139*t2145;
  t3846 = var1[1] + t2130 + t3839 + t3842;
  t2709 = 0.007328*t2137*t725;
  t2721 = 0.002681*t2137*t725;
  t2731 = -0.002256*t2137*t725;
  t2737 = -0.006949*t2137*t725;
  t2743 = -0.010889*t2137*t725;
  t2757 = -0.013649*t2137*t725;
  t2773 = -0.014929*t2137*t725;
  t2789 = -0.014592*t2137*t725;
  t2803 = -0.012674*t2137*t725;
  t2816 = -0.009382*t2137*t725;
  t2872 = -0.005074*t2137*t725;
  t2928 = -0.000216*t2137*t725;
  t2938 = 0.004666*t2137*t725;
  t3082 = 0.009042*t2137*t725;
  t3135 = 0.012438*t2137*t725;
  t3196 = 0.014487*t2137*t725;
  t3264 = 0.014965*t2137*t725;
  t3305 = 0.013822*t2137*t725;
  t4550 = -0.158281*t2689;
  t4554 = -0.144139*t2700;
  t4555 = var1[2] + t2671 + t4550 + t4554;
  p_output1[0]=t811;
  p_output1[1]=-0.009255*t725*t731 - 0.009255*t725*t796 + t843 + var1[0];
  p_output1[2]=-0.010436*t725*t731 - 0.010436*t725*t796 + t857 + var1[0];
  p_output1[3]=-0.010486*t725*t731 - 0.010486*t725*t796 + t899 + var1[0];
  p_output1[4]=-0.0094*t725*t731 - 0.0094*t725*t796 + t910 + var1[0];
  p_output1[5]=t1191 - 0.007295*t725*t731 - 0.007295*t725*t796 + var1[0];
  p_output1[6]=t1472 - 0.0044*t725*t731 - 0.0044*t725*t796 + var1[0];
  p_output1[7]=t1973 - 0.001028*t725*t731 - 0.001028*t725*t796 + var1[0];
  p_output1[8]=t2021 + 0.002456*t725*t731 + 0.002456*t725*t796 + var1[0];
  p_output1[9]=t2025 + 0.005673*t725*t731 + 0.005673*t725*t796 + var1[0];
  p_output1[10]=t2050 + 0.008276*t725*t731 + 0.008276*t725*t796 + var1[0];
  p_output1[11]=t2058 + 0.009981*t725*t731 + 0.009981*t725*t796 + var1[0];
  p_output1[12]=t2068 + 0.010606*t725*t731 + 0.010606*t725*t796 + var1[0];
  p_output1[13]=t2076 + 0.01008*t725*t731 + 0.01008*t725*t796 + var1[0];
  p_output1[14]=t2094 + 0.008463*t725*t731 + 0.008463*t725*t796 + var1[0];
  p_output1[15]=t2099 + 0.005928*t725*t731 + 0.005928*t725*t796 + var1[0];
  p_output1[16]=t2108 + 0.002751*t725*t731 + 0.002751*t725*t796 + var1[0];
  p_output1[17]=t2113 - 0.000724*t725*t731 - 0.000724*t725*t796 + var1[0];
  p_output1[18]=t2125 - 0.004121*t725*t731 - 0.004121*t725*t796 + var1[0];
  p_output1[19]=t811;
  p_output1[20]=t2147;
  p_output1[21]=-0.009255*t2139 + 0.009255*t2145 + t2161 + var1[1];
  p_output1[22]=-0.010436*t2139 + 0.010436*t2145 + t2256 + var1[1];
  p_output1[23]=-0.010486*t2139 + 0.010486*t2145 + t2265 + var1[1];
  p_output1[24]=-0.0094*t2139 + 0.0094*t2145 + t2317 + var1[1];
  p_output1[25]=-0.007295*t2139 + 0.007295*t2145 + t2354 + var1[1];
  p_output1[26]=-0.0044*t2139 + 0.0044*t2145 + t2382 + var1[1];
  p_output1[27]=-0.001028*t2139 + 0.001028*t2145 + t2434 + var1[1];
  p_output1[28]=0.002456*t2139 - 0.002456*t2145 + t2456 + var1[1];
  p_output1[29]=0.005673*t2139 - 0.005673*t2145 + t2501 + var1[1];
  p_output1[30]=0.008276*t2139 - 0.008276*t2145 + t2528 + var1[1];
  p_output1[31]=0.009981*t2139 - 0.009981*t2145 + t2556 + var1[1];
  p_output1[32]=0.010606*t2139 - 0.010606*t2145 + t2574 + var1[1];
  p_output1[33]=0.01008*t2139 - 0.01008*t2145 + t2589 + var1[1];
  p_output1[34]=0.008463*t2139 - 0.008463*t2145 + t2617 + var1[1];
  p_output1[35]=0.005928*t2139 - 0.005928*t2145 + t2630 + var1[1];
  p_output1[36]=0.002751*t2139 - 0.002751*t2145 + t2635 + var1[1];
  p_output1[37]=-0.000724*t2139 + 0.000724*t2145 + t2640 + var1[1];
  p_output1[38]=-0.004121*t2139 + 0.004121*t2145 + t2650 + var1[1];
  p_output1[39]=t2147;
  p_output1[40]=t2705;
  p_output1[41]=-0.009255*t2689 + 0.009255*t2700 + t2709 + var1[2];
  p_output1[42]=-0.010436*t2689 + 0.010436*t2700 + t2721 + var1[2];
  p_output1[43]=-0.010486*t2689 + 0.010486*t2700 + t2731 + var1[2];
  p_output1[44]=-0.0094*t2689 + 0.0094*t2700 + t2737 + var1[2];
  p_output1[45]=-0.007295*t2689 + 0.007295*t2700 + t2743 + var1[2];
  p_output1[46]=-0.0044*t2689 + 0.0044*t2700 + t2757 + var1[2];
  p_output1[47]=-0.001028*t2689 + 0.001028*t2700 + t2773 + var1[2];
  p_output1[48]=0.002456*t2689 - 0.002456*t2700 + t2789 + var1[2];
  p_output1[49]=0.005673*t2689 - 0.005673*t2700 + t2803 + var1[2];
  p_output1[50]=0.008276*t2689 - 0.008276*t2700 + t2816 + var1[2];
  p_output1[51]=0.009981*t2689 - 0.009981*t2700 + t2872 + var1[2];
  p_output1[52]=0.010606*t2689 - 0.010606*t2700 + t2928 + var1[2];
  p_output1[53]=0.01008*t2689 - 0.01008*t2700 + t2938 + var1[2];
  p_output1[54]=0.008463*t2689 - 0.008463*t2700 + t3082 + var1[2];
  p_output1[55]=0.005928*t2689 - 0.005928*t2700 + t3135 + var1[2];
  p_output1[56]=0.002751*t2689 - 0.002751*t2700 + t3196 + var1[2];
  p_output1[57]=-0.000724*t2689 + 0.000724*t2700 + t3264 + var1[2];
  p_output1[58]=-0.004121*t2689 + 0.004121*t2700 + t3305 + var1[2];
  p_output1[59]=t2705;
  p_output1[60]=t3409;
  p_output1[61]=-0.160465*t725*t731 + 0.141955*t725*t796 + t843 + var1[0];
  p_output1[62]=-0.161646*t725*t731 + 0.140774*t725*t796 + t857 + var1[0];
  p_output1[63]=-0.161696*t725*t731 + 0.140724*t725*t796 + t899 + var1[0];
  p_output1[64]=-0.16061*t725*t731 + 0.14181*t725*t796 + t910 + var1[0];
  p_output1[65]=t1191 - 0.158505*t725*t731 + 0.143915*t725*t796 + var1[0];
  p_output1[66]=t1472 - 0.15561*t725*t731 + 0.14681*t725*t796 + var1[0];
  p_output1[67]=t1973 - 0.152238*t725*t731 + 0.150182*t725*t796 + var1[0];
  p_output1[68]=t2021 - 0.148754*t725*t731 + 0.153666*t725*t796 + var1[0];
  p_output1[69]=t2025 - 0.145537*t725*t731 + 0.156883*t725*t796 + var1[0];
  p_output1[70]=t2050 - 0.142934*t725*t731 + 0.159486*t725*t796 + var1[0];
  p_output1[71]=t2058 - 0.141229*t725*t731 + 0.161191*t725*t796 + var1[0];
  p_output1[72]=t2068 - 0.140604*t725*t731 + 0.161816*t725*t796 + var1[0];
  p_output1[73]=t2076 - 0.14113*t725*t731 + 0.16129*t725*t796 + var1[0];
  p_output1[74]=t2094 - 0.142747*t725*t731 + 0.159673*t725*t796 + var1[0];
  p_output1[75]=t2099 - 0.145282*t725*t731 + 0.157138*t725*t796 + var1[0];
  p_output1[76]=t2108 - 0.148459*t725*t731 + 0.153961*t725*t796 + var1[0];
  p_output1[77]=t2113 - 0.151934*t725*t731 + 0.150486*t725*t796 + var1[0];
  p_output1[78]=t2125 - 0.155331*t725*t731 + 0.147089*t725*t796 + var1[0];
  p_output1[79]=t3409;
  p_output1[80]=t3846;
  p_output1[81]=-0.160465*t2139 - 0.141955*t2145 + t2161 + var1[1];
  p_output1[82]=-0.161646*t2139 - 0.140774*t2145 + t2256 + var1[1];
  p_output1[83]=-0.161696*t2139 - 0.140724*t2145 + t2265 + var1[1];
  p_output1[84]=-0.16061*t2139 - 0.14181*t2145 + t2317 + var1[1];
  p_output1[85]=-0.158505*t2139 - 0.143915*t2145 + t2354 + var1[1];
  p_output1[86]=-0.15561*t2139 - 0.14681*t2145 + t2382 + var1[1];
  p_output1[87]=-0.152238*t2139 - 0.150182*t2145 + t2434 + var1[1];
  p_output1[88]=-0.148754*t2139 - 0.153666*t2145 + t2456 + var1[1];
  p_output1[89]=-0.145537*t2139 - 0.156883*t2145 + t2501 + var1[1];
  p_output1[90]=-0.142934*t2139 - 0.159486*t2145 + t2528 + var1[1];
  p_output1[91]=-0.141229*t2139 - 0.161191*t2145 + t2556 + var1[1];
  p_output1[92]=-0.140604*t2139 - 0.161816*t2145 + t2574 + var1[1];
  p_output1[93]=-0.14113*t2139 - 0.16129*t2145 + t2589 + var1[1];
  p_output1[94]=-0.142747*t2139 - 0.159673*t2145 + t2617 + var1[1];
  p_output1[95]=-0.145282*t2139 - 0.157138*t2145 + t2630 + var1[1];
  p_output1[96]=-0.148459*t2139 - 0.153961*t2145 + t2635 + var1[1];
  p_output1[97]=-0.151934*t2139 - 0.150486*t2145 + t2640 + var1[1];
  p_output1[98]=-0.155331*t2139 - 0.147089*t2145 + t2650 + var1[1];
  p_output1[99]=t3846;
  p_output1[100]=t4555;
  p_output1[101]=-0.160465*t2689 - 0.141955*t2700 + t2709 + var1[2];
  p_output1[102]=-0.161646*t2689 - 0.140774*t2700 + t2721 + var1[2];
  p_output1[103]=-0.161696*t2689 - 0.140724*t2700 + t2731 + var1[2];
  p_output1[104]=-0.16061*t2689 - 0.14181*t2700 + t2737 + var1[2];
  p_output1[105]=-0.158505*t2689 - 0.143915*t2700 + t2743 + var1[2];
  p_output1[106]=-0.15561*t2689 - 0.14681*t2700 + t2757 + var1[2];
  p_output1[107]=-0.152238*t2689 - 0.150182*t2700 + t2773 + var1[2];
  p_output1[108]=-0.148754*t2689 - 0.153666*t2700 + t2789 + var1[2];
  p_output1[109]=-0.145537*t2689 - 0.156883*t2700 + t2803 + var1[2];
  p_output1[110]=-0.142934*t2689 - 0.159486*t2700 + t2816 + var1[2];
  p_output1[111]=-0.141229*t2689 - 0.161191*t2700 + t2872 + var1[2];
  p_output1[112]=-0.140604*t2689 - 0.161816*t2700 + t2928 + var1[2];
  p_output1[113]=-0.14113*t2689 - 0.16129*t2700 + t2938 + var1[2];
  p_output1[114]=-0.142747*t2689 - 0.159673*t2700 + t3082 + var1[2];
  p_output1[115]=-0.145282*t2689 - 0.157138*t2700 + t3135 + var1[2];
  p_output1[116]=-0.148459*t2689 - 0.153961*t2700 + t3196 + var1[2];
  p_output1[117]=-0.151934*t2689 - 0.150486*t2700 + t3264 + var1[2];
  p_output1[118]=-0.155331*t2689 - 0.147089*t2700 + t3305 + var1[2];
  p_output1[119]=t4555;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_body_to_11_bar.hh"

namespace SymFunction
{

void Link_body_to_11_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
