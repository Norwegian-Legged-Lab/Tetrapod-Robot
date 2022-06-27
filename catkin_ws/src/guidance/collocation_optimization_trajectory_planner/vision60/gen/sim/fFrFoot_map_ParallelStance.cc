/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:57 GMT+02:00
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
  double t2936;
  double t962;
  double t1411;
  double t2952;
  double t2862;
  double t3038;
  double t3148;
  double t3256;
  double t6877;
  double t3323;
  double t3337;
  double t3338;
  double t6940;
  double t347;
  double t3249;
  double t3164;
  double t4462;
  double t6944;
  double t7508;
  double t7660;
  double t7636;
  double t7639;
  double t7641;
  double t7604;
  double t7663;
  double t7665;
  double t7687;
  double t7884;
  double t7886;
  double t7889;
  double t7898;
  double t7899;
  double t7901;
  double t7906;
  double t7907;
  double t7908;
  double t7883;
  double t7890;
  double t7909;
  double t7912;
  double t7919;
  double t7921;
  double t7923;
  double t7924;
  double t7943;
  double t7944;
  double t7871;
  double t7873;
  double t7875;
  double t7882;
  double t7913;
  double t7914;
  double t7968;
  double t7973;
  double t7976;
  double t7981;
  double t7983;
  double t7991;
  double t7951;
  double t7952;
  double t7962;
  double t7915;
  double t7945;
  double t7947;
  double t7741;
  double t7742;
  double t7747;
  double t7979;
  double t7997;
  double t8009;
  double t7735;
  double t7754;
  double t7762;
  double t7763;
  double t7764;
  double t7766;
  double t8026;
  double t8031;
  double t8053;
  double t8083;
  double t8085;
  double t8086;
  double t7948;
  double t8087;
  double t8102;
  double t8118;
  double t8017;
  double t8018;
  double t8020;
  double t3242;
  double t7526;
  double t7532;
  double t8089;
  double t8090;
  double t8092;
  double t8481;
  double t8583;
  double t8664;
  double t8616;
  double t8744;
  double t8713;
  double t8816;
  double t8868;
  double t8893;
  double t8998;
  t2936 = Cos(var1[13]);
  t962 = Cos(var1[14]);
  t1411 = Sin(var1[13]);
  t2952 = Sin(var1[14]);
  t2862 = t962*t1411;
  t3038 = -1.*t2936*t2952;
  t3148 = t2862 + t3038;
  t3256 = Cos(var1[5]);
  t6877 = Sin(var1[12]);
  t3323 = t2936*t962;
  t3337 = t1411*t2952;
  t3338 = t3323 + t3337;
  t6940 = Sin(var1[5]);
  t347 = Cos(var1[12]);
  t3249 = Cos(var1[4]);
  t3164 = Sin(var1[4]);
  t4462 = t3256*t3338;
  t6944 = t6877*t3148*t6940;
  t7508 = t4462 + t6944;
  t7660 = Sin(var1[3]);
  t7636 = -1.*t3256*t6877*t3148;
  t7639 = t3338*t6940;
  t7641 = t7636 + t7639;
  t7604 = Cos(var1[3]);
  t7663 = t347*t3249*t3148;
  t7665 = -1.*t3164*t7508;
  t7687 = t7663 + t7665;
  t7884 = -0.0641*t962;
  t7886 = -0.28*t2952;
  t7889 = t7884 + t7886;
  t7898 = -1.*t962;
  t7899 = 1. + t7898;
  t7901 = 0.075*t7899;
  t7906 = 0.355*t962;
  t7907 = -0.0641*t2952;
  t7908 = t7901 + t7906 + t7907;
  t7883 = -0.325*t1411;
  t7890 = t2936*t7889;
  t7909 = t1411*t7908;
  t7912 = t7883 + t7890 + t7909;
  t7919 = -1.*t2936;
  t7921 = 1. + t7919;
  t7923 = 0.325*t7921;
  t7924 = -1.*t1411*t7889;
  t7943 = t2936*t7908;
  t7944 = t7923 + t7924 + t7943;
  t7871 = -1.*t347;
  t7873 = 1. + t7871;
  t7875 = -0.1575*t7873;
  t7882 = -0.2255*t347;
  t7913 = -1.*t6877*t7912;
  t7914 = t7875 + t7882 + t7913;
  t7968 = -0.068*t6877;
  t7973 = t347*t7912;
  t7976 = t7968 + t7973;
  t7981 = t3256*t7944;
  t7983 = -1.*t7914*t6940;
  t7991 = t7981 + t7983;
  t7951 = t6877*t3164;
  t7952 = -1.*t347*t3249*t6940;
  t7962 = t7951 + t7952;
  t7915 = t3256*t7914;
  t7945 = t7944*t6940;
  t7947 = t7915 + t7945;
  t7741 = -1.*t962*t1411;
  t7742 = t2936*t2952;
  t7747 = t7741 + t7742;
  t7979 = t7976*t3164;
  t7997 = t3249*t7991;
  t8009 = t7979 + t7997;
  t7735 = t347*t3338*t3164;
  t7754 = t3256*t7747;
  t7762 = t6877*t3338*t6940;
  t7763 = t7754 + t7762;
  t7764 = t3249*t7763;
  t7766 = t7735 + t7764;
  t8026 = t3249*t7976;
  t8031 = -1.*t3164*t7991;
  t8053 = t8026 + t8031;
  t8083 = -1.*t3256*t6877*t3338;
  t8085 = t7747*t6940;
  t8086 = t8083 + t8085;
  t7948 = -1.*t347*t3256*t7947;
  t8087 = t7947*t8086;
  t8102 = -1.*t6877*t7976;
  t8118 = t347*t7976*t3338;
  t8017 = t3249*t6877;
  t8018 = t347*t3164*t6940;
  t8020 = t8017 + t8018;
  t3242 = t347*t3148*t3164;
  t7526 = t3249*t7508;
  t7532 = t3242 + t7526;
  t8089 = t347*t3249*t3338;
  t8090 = -1.*t3164*t7763;
  t8092 = t8089 + t8090;
  t8481 = t7947*t7641;
  t8583 = -1.*t7947*t8086;
  t8664 = -1.*t347*t7976*t3338;
  t8616 = t347*t7976*t3148;
  t8744 = t7944*t3338;
  t8713 = -1.*t7944*t7747;
  t8816 = t347*t3256*t7947;
  t8868 = -1.*t7947*t7641;
  t8893 = t6877*t7976;
  t8998 = -1.*t347*t7976*t3148;
  p_output1[0]=t7532;
  p_output1[1]=t7604*t7641 - 1.*t7660*t7687;
  p_output1[2]=t7641*t7660 + t7604*t7687;
  p_output1[3]=t7766*(t7948 - 1.*t7962*t8009 - 1.*t8020*t8053) + t7962*(t7766*t8009 + t8087 + t8053*t8092);
  p_output1[4]=t8086*(t7948 + t347*t6940*t7991 + t8102) + t3256*t347*(t7763*t7991 + t8087 + t8118);
  p_output1[5]=t3338*t347*(-1.*t347*t7914 + t8102) + t6877*(-1.*t3338*t6877*t7914 + t7747*t7944 + t8118);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t3148 + 0.2255*t7747;
  p_output1[13]=0.325*t2952 - 1.*t2952*t7908 - 1.*t7889*t962;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t7962;
  p_output1[19]=t3256*t347*t7604 - 1.*t7660*t8020;
  p_output1[20]=t3256*t347*t7660 + t7604*t8020;
  p_output1[21]=t7766*(t7532*t8009 + t7687*t8053 + t8481) + t7532*(-1.*t7766*t8009 - 1.*t8053*t8092 + t8583);
  p_output1[22]=t8086*(t7508*t7991 + t8481 + t8616) + t7641*(-1.*t7763*t7991 + t8583 + t8664);
  p_output1[23]=t3148*t347*(t3338*t6877*t7914 + t8664 + t8713) + t3338*t347*(-1.*t3148*t6877*t7914 + t8616 + t8744);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t3338*(-1.*t3338*t7912 + t8713) + t7747*(t3148*t7912 + t8744);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t7766;
  p_output1[37]=t7604*t8086 - 1.*t7660*t8092;
  p_output1[38]=t7660*t8086 + t7604*t8092;
  p_output1[39]=t7532*(t7962*t8009 + t8020*t8053 + t8816) + t7962*(-1.*t7532*t8009 - 1.*t7687*t8053 + t8868);
  p_output1[40]=t7641*(-1.*t347*t6940*t7991 + t8816 + t8893) + t3256*t347*(-1.*t7508*t7991 + t8868 + t8998);
  p_output1[41]=t3148*t347*(t347*t7914 + t8893) + t6877*(t3148*t6877*t7914 - 1.*t3338*t7944 + t8998);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t3338;
  p_output1[49]=-1.*t2952*t7889 - 0.325*t962 + t7908*t962;
  p_output1[50]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
