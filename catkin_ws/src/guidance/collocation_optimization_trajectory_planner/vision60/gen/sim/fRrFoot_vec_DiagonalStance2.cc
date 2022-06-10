/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:58 GMT+02:00
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
  double t7650;
  double t7377;
  double t7652;
  double t7706;
  double t7689;
  double t7699;
  double t7713;
  double t2277;
  double t7703;
  double t7722;
  double t7726;
  double t7655;
  double t7739;
  double t7740;
  double t7741;
  double t7731;
  double t7880;
  double t7883;
  double t7743;
  double t7744;
  double t7745;
  double t7751;
  double t7752;
  double t7753;
  double t7850;
  double t7865;
  double t7874;
  double t7889;
  double t7890;
  double t7893;
  double t7904;
  double t7905;
  double t7906;
  double t7908;
  double t7911;
  double t7913;
  double t7919;
  double t7920;
  double t7923;
  double t7926;
  double t7928;
  double t7931;
  double t7729;
  double t7747;
  double t7748;
  double t7976;
  double t7979;
  double t7983;
  double t7985;
  double t7986;
  double t7991;
  double t7993;
  double t7994;
  double t7996;
  double t7639;
  double t7664;
  double t7673;
  double t7975;
  double t7984;
  double t7997;
  double t7999;
  double t8005;
  double t8006;
  double t8007;
  double t8008;
  double t8014;
  double t8015;
  double t7969;
  double t7971;
  double t7972;
  double t7973;
  double t8000;
  double t8001;
  double t8024;
  double t8026;
  double t8027;
  double t8029;
  double t8031;
  double t8036;
  double t8004;
  double t8016;
  double t8018;
  double t8028;
  double t8037;
  double t8038;
  double t8040;
  double t8041;
  double t8042;
  double t7750;
  double t7875;
  double t7877;
  double t8023;
  double t8059;
  double t8081;
  double t8086;
  double t8104;
  double t8117;
  double t8182;
  double t8187;
  double t8134;
  double t8141;
  double t8165;
  double t8161;
  double t8231;
  double t8226;
  t7650 = Cos(var1[15]);
  t7377 = Sin(var1[4]);
  t7652 = Cos(var1[4]);
  t7706 = Cos(var1[16]);
  t7689 = Cos(var1[17]);
  t7699 = Sin(var1[16]);
  t7713 = Sin(var1[17]);
  t2277 = Sin(var1[15]);
  t7703 = t7689*t7699;
  t7722 = -1.*t7706*t7713;
  t7726 = t7703 + t7722;
  t7655 = Sin(var1[5]);
  t7739 = t7706*t7689;
  t7740 = t7699*t7713;
  t7741 = t7739 + t7740;
  t7731 = Cos(var1[5]);
  t7880 = Cos(var1[3]);
  t7883 = Sin(var1[3]);
  t7743 = t7731*t7741;
  t7744 = t2277*t7726*t7655;
  t7745 = t7743 + t7744;
  t7751 = -1.*t7689*t7699;
  t7752 = t7706*t7713;
  t7753 = t7751 + t7752;
  t7850 = t7731*t7753;
  t7865 = t2277*t7741*t7655;
  t7874 = t7850 + t7865;
  t7889 = t7652*t2277;
  t7890 = t7650*t7377*t7655;
  t7893 = t7889 + t7890;
  t7904 = -1.*t7731*t2277*t7726;
  t7905 = t7741*t7655;
  t7906 = t7904 + t7905;
  t7908 = t7650*t7652*t7726;
  t7911 = -1.*t7377*t7745;
  t7913 = t7908 + t7911;
  t7919 = -1.*t7731*t2277*t7741;
  t7920 = t7753*t7655;
  t7923 = t7919 + t7920;
  t7926 = t7650*t7652*t7741;
  t7928 = -1.*t7377*t7874;
  t7931 = t7926 + t7928;
  t7729 = t7650*t7726*t7377;
  t7747 = t7652*t7745;
  t7748 = t7729 + t7747;
  t7976 = -0.0641*t7689;
  t7979 = -0.28*t7713;
  t7983 = t7976 + t7979;
  t7985 = -1.*t7689;
  t7986 = 1. + t7985;
  t7991 = -0.575*t7986;
  t7993 = -0.295*t7689;
  t7994 = -0.0641*t7713;
  t7996 = t7991 + t7993 + t7994;
  t7639 = t2277*t7377;
  t7664 = -1.*t7650*t7652*t7655;
  t7673 = t7639 + t7664;
  t7975 = 0.325*t7699;
  t7984 = t7706*t7983;
  t7997 = t7699*t7996;
  t7999 = t7975 + t7984 + t7997;
  t8005 = -1.*t7706;
  t8006 = 1. + t8005;
  t8007 = -0.325*t8006;
  t8008 = -1.*t7699*t7983;
  t8014 = t7706*t7996;
  t8015 = t8007 + t8008 + t8014;
  t7969 = -1.*t7650;
  t7971 = 1. + t7969;
  t7972 = -0.1575*t7971;
  t7973 = -0.2255*t7650;
  t8000 = -1.*t2277*t7999;
  t8001 = t7972 + t7973 + t8000;
  t8024 = -0.068*t2277;
  t8026 = t7650*t7999;
  t8027 = t8024 + t8026;
  t8029 = t7731*t8015;
  t8031 = -1.*t8001*t7655;
  t8036 = t8029 + t8031;
  t8004 = t7731*t8001;
  t8016 = t8015*t7655;
  t8018 = t8004 + t8016;
  t8028 = t8027*t7377;
  t8037 = t7652*t8036;
  t8038 = t8028 + t8037;
  t8040 = t7652*t8027;
  t8041 = -1.*t7377*t8036;
  t8042 = t8040 + t8041;
  t7750 = t7650*t7741*t7377;
  t7875 = t7652*t7874;
  t7877 = t7750 + t7875;
  t8023 = t7650*t7731*t8018;
  t8059 = -1.*t8018*t7906;
  t8081 = t8018*t7906;
  t8086 = -1.*t8018*t7923;
  t8104 = -1.*t7650*t7731*t8018;
  t8117 = t8018*t7923;
  t8182 = -1.*t2277*t8027;
  t8187 = t7650*t8027*t7741;
  t8134 = t2277*t8027;
  t8141 = -1.*t7650*t8027*t7726;
  t8165 = -1.*t7650*t8027*t7741;
  t8161 = t7650*t8027*t7726;
  t8231 = t8015*t7741;
  t8226 = -1.*t8015*t7753;
  p_output1[0]=t7748*var2[0] + t7673*var2[1] + t7877*var2[2];
  p_output1[1]=(t7880*t7906 - 1.*t7883*t7913)*var2[0] + (t7650*t7731*t7880 - 1.*t7883*t7893)*var2[1] + (t7880*t7923 - 1.*t7883*t7931)*var2[2];
  p_output1[2]=(t7883*t7906 + t7880*t7913)*var2[0] + (t7650*t7731*t7883 + t7880*t7893)*var2[1] + (t7883*t7923 + t7880*t7931)*var2[2];
  p_output1[3]=(t7877*(-1.*t7673*t8038 - 1.*t7893*t8042 + t8104) + t7673*(t7877*t8038 + t7931*t8042 + t8117))*var2[0] + (t7877*(t7748*t8038 + t7913*t8042 + t8081) + t7748*(-1.*t7877*t8038 - 1.*t7931*t8042 + t8086))*var2[1] + (t7748*(t8023 + t7673*t8038 + t7893*t8042) + t7673*(-1.*t7748*t8038 - 1.*t7913*t8042 + t8059))*var2[2];
  p_output1[4]=(t7923*(t7650*t7655*t8036 + t8104 + t8182) + t7650*t7731*(t7874*t8036 + t8117 + t8187))*var2[0] + (t7923*(t7745*t8036 + t8081 + t8161) + t7906*(-1.*t7874*t8036 + t8086 + t8165))*var2[1] + (t7906*(t8023 - 1.*t7650*t7655*t8036 + t8134) + t7650*t7731*(-1.*t7745*t8036 + t8059 + t8141))*var2[2];
  p_output1[5]=(t7650*t7741*(-1.*t7650*t8001 + t8182) + t2277*(-1.*t2277*t7741*t8001 + t7753*t8015 + t8187))*var2[0] + (t7650*t7726*(t2277*t7741*t8001 + t8165 + t8226) + t7650*t7741*(-1.*t2277*t7726*t8001 + t8161 + t8231))*var2[1] + (t7650*t7726*(t7650*t8001 + t8134) + t2277*(t2277*t7726*t8001 - 1.*t7741*t8015 + t8141))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t7726 + 0.2255*t7753)*var2[0] + (t7741*(-1.*t7741*t7999 + t8226) + t7753*(t7726*t7999 + t8231))*var2[1] - 0.068*t7741*var2[2];
  p_output1[16]=(-0.325*t7713 - 1.*t7689*t7983 - 1.*t7713*t7996)*var2[0] + (0.325*t7689 - 1.*t7713*t7983 + t7689*t7996)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
