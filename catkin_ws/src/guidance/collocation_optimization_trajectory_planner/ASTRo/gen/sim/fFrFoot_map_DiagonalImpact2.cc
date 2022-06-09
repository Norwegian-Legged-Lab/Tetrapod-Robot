/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:27 GMT+02:00
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
  double t10285;
  double t2933;
  double t5391;
  double t10295;
  double t15802;
  double t18723;
  double t18760;
  double t15792;
  double t18812;
  double t15788;
  double t18814;
  double t10798;
  double t10268;
  double t10511;
  double t10625;
  double t10627;
  double t18811;
  double t18822;
  double t18823;
  double t18856;
  double t18838;
  double t18841;
  double t18847;
  double t18837;
  double t18857;
  double t18858;
  double t18859;
  double t18870;
  double t18871;
  double t18872;
  double t18927;
  double t18929;
  double t18937;
  double t18938;
  double t18939;
  double t18940;
  double t18942;
  double t18944;
  double t18945;
  double t18946;
  double t18948;
  double t18949;
  double t18952;
  double t18957;
  double t18958;
  double t18959;
  double t18930;
  double t18934;
  double t18935;
  double t18953;
  double t18954;
  double t18963;
  double t18964;
  double t18965;
  double t18967;
  double t18968;
  double t18969;
  double t18971;
  double t18973;
  double t18974;
  double t18975;
  double t18955;
  double t18960;
  double t18961;
  double t18867;
  double t18874;
  double t18875;
  double t18876;
  double t18916;
  double t18922;
  double t18972;
  double t18976;
  double t18978;
  double t18981;
  double t18983;
  double t18985;
  double t18991;
  double t18992;
  double t18996;
  double t18923;
  double t18924;
  double t18926;
  double t18962;
  double t18997;
  double t10752;
  double t18826;
  double t18832;
  double t18999;
  double t19000;
  double t19002;
  double t19035;
  double t19040;
  double t19046;
  double t19050;
  double t19079;
  double t19085;
  t10285 = Cos(var1[13]);
  t2933 = Cos(var1[14]);
  t5391 = Sin(var1[13]);
  t10295 = Sin(var1[14]);
  t15802 = t10285*t2933;
  t18723 = t5391*t10295;
  t18760 = t15802 + t18723;
  t15792 = Cos(var1[5]);
  t18812 = Sin(var1[12]);
  t15788 = Cos(var1[12]);
  t18814 = Sin(var1[5]);
  t10798 = Cos(var1[4]);
  t10268 = -1.*t2933*t5391;
  t10511 = t10285*t10295;
  t10625 = t10268 + t10511;
  t10627 = Sin(var1[4]);
  t18811 = t15788*t15792*t18760;
  t18822 = -1.*t18812*t18760*t18814;
  t18823 = t18811 + t18822;
  t18856 = Sin(var1[3]);
  t18838 = t15792*t18812*t18760;
  t18841 = t15788*t18760*t18814;
  t18847 = t18838 + t18841;
  t18837 = Cos(var1[3]);
  t18857 = t10798*t10625;
  t18858 = -1.*t10627*t18823;
  t18859 = t18857 + t18858;
  t18870 = t2933*t5391;
  t18871 = -1.*t10285*t10295;
  t18872 = t18870 + t18871;
  t18927 = -1.*t15788;
  t18929 = 1. + t18927;
  t18937 = -1.*t10285;
  t18938 = 1. + t18937;
  t18939 = 0.28121*t18938;
  t18940 = -1.*t2933;
  t18942 = 1. + t18940;
  t18944 = 0.50321*t18942;
  t18945 = 0.19821*t2933;
  t18946 = t18944 + t18945;
  t18948 = t10285*t18946;
  t18949 = -0.305*t5391*t10295;
  t18952 = t18939 + t18948 + t18949;
  t18957 = 0.15121*t18929;
  t18958 = t15788*t18952;
  t18959 = t18957 + t18958;
  t18930 = -0.15121*t18929;
  t18934 = -0.15121*t15788;
  t18935 = -0.15121*t18812;
  t18953 = t18812*t18952;
  t18954 = t18930 + t18934 + t18935 + t18953;
  t18963 = -1.*t15792*t18812;
  t18964 = -1.*t15788*t18814;
  t18965 = t18963 + t18964;
  t18967 = 0.28121*t5391;
  t18968 = -1.*t18946*t5391;
  t18969 = -0.305*t10285*t10295;
  t18971 = t18967 + t18968 + t18969;
  t18973 = t15792*t18959;
  t18974 = -1.*t18954*t18814;
  t18975 = t18973 + t18974;
  t18955 = t15792*t18954;
  t18960 = t18959*t18814;
  t18961 = t18955 + t18960;
  t18867 = t18760*t10627;
  t18874 = t15788*t15792*t18872;
  t18875 = -1.*t18812*t18872*t18814;
  t18876 = t18874 + t18875;
  t18916 = t10798*t18876;
  t18922 = t18867 + t18916;
  t18972 = t18971*t10627;
  t18976 = t10798*t18975;
  t18978 = t18972 + t18976;
  t18981 = t10798*t18971;
  t18983 = -1.*t10627*t18975;
  t18985 = t18981 + t18983;
  t18991 = t15792*t18812*t18872;
  t18992 = t15788*t18872*t18814;
  t18996 = t18991 + t18992;
  t18923 = t15788*t15792;
  t18924 = -1.*t18812*t18814;
  t18926 = t18923 + t18924;
  t18962 = -1.*t18926*t18961;
  t18997 = t18996*t18961;
  t10752 = t10625*t10627;
  t18826 = t10798*t18823;
  t18832 = t10752 + t18826;
  t18999 = t10798*t18760;
  t19000 = -1.*t10627*t18876;
  t19002 = t18999 + t19000;
  t19035 = -1.*t18996*t18961;
  t19040 = t18847*t18961;
  t19046 = -1.*t18971*t18760;
  t19050 = t18971*t10625;
  t19079 = t18926*t18961;
  t19085 = -1.*t18847*t18961;
  p_output1[0]=t18832;
  p_output1[1]=t18837*t18847 - 1.*t18856*t18859;
  p_output1[2]=t18847*t18856 + t18837*t18859;
  p_output1[3]=t18922*(t18962 - 1.*t10798*t18965*t18978 + t10627*t18965*t18985) + t10798*t18965*(t18922*t18978 + t18997 + t18985*t19002);
  p_output1[4]=(t18962 - 1.*t18965*t18975)*t18996 + t18926*(t18760*t18971 + t18876*t18975 + t18997);
  p_output1[5]=t18760*(-1.*t15788*t18954 + t18812*t18959);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t10295 - 1.*t10295*t18946 - 0.305*t10295*t2933;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10798*t18965;
  p_output1[19]=t18837*t18926 + t10627*t18856*t18965;
  p_output1[20]=t18856*t18926 - 1.*t10627*t18837*t18965;
  p_output1[21]=t18832*(-1.*t18922*t18978 - 1.*t18985*t19002 + t19035) + t18922*(t18832*t18978 + t18859*t18985 + t19040);
  p_output1[22]=t18847*(-1.*t18876*t18975 + t19035 + t19046) + t18996*(t18823*t18975 + t19040 + t19050);
  p_output1[23]=t10625*(-1.*t18812*t18872*t18954 - 1.*t15788*t18872*t18959 + t19046) + t18760*(t18760*t18812*t18954 + t15788*t18760*t18959 + t19050);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t10625*(-1.*t18872*t18952 + t19046) + t18760*(t18760*t18952 + t19050);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t18922;
  p_output1[37]=t18837*t18996 - 1.*t18856*t19002;
  p_output1[38]=t18856*t18996 + t18837*t19002;
  p_output1[39]=t18832*(t10798*t18965*t18978 - 1.*t10627*t18965*t18985 + t19079) + t10798*t18965*(-1.*t18832*t18978 - 1.*t18859*t18985 + t19085);
  p_output1[40]=t18847*(t18965*t18975 + t19079) + t18926*(-1.*t10625*t18971 - 1.*t18823*t18975 + t19085);
  p_output1[41]=t10625*(t15788*t18954 - 1.*t18812*t18959);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t10625 - 0.15121*t18872;
  p_output1[49]=0.305*Power(t10295,2) + 0.28121*t2933 - 1.*t18946*t2933;
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
