/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:14 GMT+02:00
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
  double t5765;
  double t5667;
  double t5760;
  double t5773;
  double t5762;
  double t5774;
  double t5775;
  double t5787;
  double t5801;
  double t5792;
  double t5798;
  double t5799;
  double t5802;
  double t5623;
  double t5786;
  double t5780;
  double t5800;
  double t5804;
  double t5805;
  double t5817;
  double t5811;
  double t5813;
  double t5814;
  double t5810;
  double t5818;
  double t5820;
  double t5890;
  double t5929;
  double t5930;
  double t5931;
  double t5934;
  double t5935;
  double t5936;
  double t5937;
  double t5938;
  double t5939;
  double t5927;
  double t5932;
  double t5940;
  double t5943;
  double t5950;
  double t5951;
  double t5952;
  double t5953;
  double t5955;
  double t5956;
  double t5922;
  double t5924;
  double t5925;
  double t5926;
  double t5945;
  double t5946;
  double t5965;
  double t5966;
  double t5967;
  double t5970;
  double t5971;
  double t5972;
  double t5961;
  double t5962;
  double t5963;
  double t5949;
  double t5957;
  double t5959;
  double t5907;
  double t5908;
  double t5909;
  double t5969;
  double t5973;
  double t5974;
  double t5906;
  double t5911;
  double t5912;
  double t5915;
  double t5916;
  double t5920;
  double t5981;
  double t5982;
  double t5983;
  double t5987;
  double t5988;
  double t5989;
  double t5960;
  double t5990;
  double t6004;
  double t6008;
  double t5976;
  double t5978;
  double t5980;
  double t5785;
  double t5806;
  double t5809;
  double t5992;
  double t5993;
  double t5994;
  double t6034;
  double t6039;
  double t6049;
  double t6045;
  double t6059;
  double t6054;
  double t6076;
  double t6081;
  double t6087;
  double t6091;
  t5765 = Cos(var1[13]);
  t5667 = Cos(var1[14]);
  t5760 = Sin(var1[13]);
  t5773 = Sin(var1[14]);
  t5762 = t5667*t5760;
  t5774 = -1.*t5765*t5773;
  t5775 = t5762 + t5774;
  t5787 = Cos(var1[5]);
  t5801 = Sin(var1[12]);
  t5792 = t5765*t5667;
  t5798 = t5760*t5773;
  t5799 = t5792 + t5798;
  t5802 = Sin(var1[5]);
  t5623 = Cos(var1[12]);
  t5786 = Cos(var1[4]);
  t5780 = Sin(var1[4]);
  t5800 = t5787*t5799;
  t5804 = t5801*t5775*t5802;
  t5805 = t5800 + t5804;
  t5817 = Sin(var1[3]);
  t5811 = -1.*t5787*t5801*t5775;
  t5813 = t5799*t5802;
  t5814 = t5811 + t5813;
  t5810 = Cos(var1[3]);
  t5818 = t5623*t5786*t5775;
  t5820 = -1.*t5780*t5805;
  t5890 = t5818 + t5820;
  t5929 = -0.0641*t5667;
  t5930 = -0.28*t5773;
  t5931 = t5929 + t5930;
  t5934 = -1.*t5667;
  t5935 = 1. + t5934;
  t5936 = 0.075*t5935;
  t5937 = 0.355*t5667;
  t5938 = -0.0641*t5773;
  t5939 = t5936 + t5937 + t5938;
  t5927 = -0.325*t5760;
  t5932 = t5765*t5931;
  t5940 = t5760*t5939;
  t5943 = t5927 + t5932 + t5940;
  t5950 = -1.*t5765;
  t5951 = 1. + t5950;
  t5952 = 0.325*t5951;
  t5953 = -1.*t5760*t5931;
  t5955 = t5765*t5939;
  t5956 = t5952 + t5953 + t5955;
  t5922 = -1.*t5623;
  t5924 = 1. + t5922;
  t5925 = -0.1575*t5924;
  t5926 = -0.2255*t5623;
  t5945 = -1.*t5801*t5943;
  t5946 = t5925 + t5926 + t5945;
  t5965 = -0.068*t5801;
  t5966 = t5623*t5943;
  t5967 = t5965 + t5966;
  t5970 = t5787*t5956;
  t5971 = -1.*t5946*t5802;
  t5972 = t5970 + t5971;
  t5961 = t5801*t5780;
  t5962 = -1.*t5623*t5786*t5802;
  t5963 = t5961 + t5962;
  t5949 = t5787*t5946;
  t5957 = t5956*t5802;
  t5959 = t5949 + t5957;
  t5907 = -1.*t5667*t5760;
  t5908 = t5765*t5773;
  t5909 = t5907 + t5908;
  t5969 = t5967*t5780;
  t5973 = t5786*t5972;
  t5974 = t5969 + t5973;
  t5906 = t5623*t5799*t5780;
  t5911 = t5787*t5909;
  t5912 = t5801*t5799*t5802;
  t5915 = t5911 + t5912;
  t5916 = t5786*t5915;
  t5920 = t5906 + t5916;
  t5981 = t5786*t5967;
  t5982 = -1.*t5780*t5972;
  t5983 = t5981 + t5982;
  t5987 = -1.*t5787*t5801*t5799;
  t5988 = t5909*t5802;
  t5989 = t5987 + t5988;
  t5960 = -1.*t5623*t5787*t5959;
  t5990 = t5959*t5989;
  t6004 = -1.*t5801*t5967;
  t6008 = t5623*t5967*t5799;
  t5976 = t5786*t5801;
  t5978 = t5623*t5780*t5802;
  t5980 = t5976 + t5978;
  t5785 = t5623*t5775*t5780;
  t5806 = t5786*t5805;
  t5809 = t5785 + t5806;
  t5992 = t5623*t5786*t5799;
  t5993 = -1.*t5780*t5915;
  t5994 = t5992 + t5993;
  t6034 = t5959*t5814;
  t6039 = -1.*t5959*t5989;
  t6049 = -1.*t5623*t5967*t5799;
  t6045 = t5623*t5967*t5775;
  t6059 = t5956*t5799;
  t6054 = -1.*t5956*t5909;
  t6076 = t5623*t5787*t5959;
  t6081 = -1.*t5959*t5814;
  t6087 = t5801*t5967;
  t6091 = -1.*t5623*t5967*t5775;
  p_output1[0]=t5809;
  p_output1[1]=t5810*t5814 - 1.*t5817*t5890;
  p_output1[2]=t5814*t5817 + t5810*t5890;
  p_output1[3]=t5920*(t5960 - 1.*t5963*t5974 - 1.*t5980*t5983) + t5963*(t5920*t5974 + t5990 + t5983*t5994);
  p_output1[4]=t5989*(t5960 + t5623*t5802*t5972 + t6004) + t5623*t5787*(t5915*t5972 + t5990 + t6008);
  p_output1[5]=t5623*t5799*(-1.*t5623*t5946 + t6004) + t5801*(-1.*t5799*t5801*t5946 + t5909*t5956 + t6008);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t5775 + 0.2255*t5909;
  p_output1[13]=0.325*t5773 - 1.*t5667*t5931 - 1.*t5773*t5939;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5963;
  p_output1[19]=t5623*t5787*t5810 - 1.*t5817*t5980;
  p_output1[20]=t5623*t5787*t5817 + t5810*t5980;
  p_output1[21]=t5920*(t5809*t5974 + t5890*t5983 + t6034) + t5809*(-1.*t5920*t5974 - 1.*t5983*t5994 + t6039);
  p_output1[22]=t5989*(t5805*t5972 + t6034 + t6045) + t5814*(-1.*t5915*t5972 + t6039 + t6049);
  p_output1[23]=t5623*t5775*(t5799*t5801*t5946 + t6049 + t6054) + t5623*t5799*(-1.*t5775*t5801*t5946 + t6045 + t6059);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t5799*(-1.*t5799*t5943 + t6054) + t5909*(t5775*t5943 + t6059);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5920;
  p_output1[37]=t5810*t5989 - 1.*t5817*t5994;
  p_output1[38]=t5817*t5989 + t5810*t5994;
  p_output1[39]=t5809*(t5963*t5974 + t5980*t5983 + t6076) + t5963*(-1.*t5809*t5974 - 1.*t5890*t5983 + t6081);
  p_output1[40]=t5814*(-1.*t5623*t5802*t5972 + t6076 + t6087) + t5623*t5787*(-1.*t5805*t5972 + t6081 + t6091);
  p_output1[41]=t5623*t5775*(t5623*t5946 + t6087) + t5801*(t5775*t5801*t5946 - 1.*t5799*t5956 + t6091);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t5799;
  p_output1[49]=-0.325*t5667 - 1.*t5773*t5931 + t5667*t5939;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
