/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:59:00 GMT+02:00
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
  double t5810;
  double t5730;
  double t5758;
  double t5812;
  double t5837;
  double t5841;
  double t5842;
  double t5833;
  double t5844;
  double t5832;
  double t5845;
  double t5831;
  double t5809;
  double t5819;
  double t5820;
  double t5821;
  double t5843;
  double t5846;
  double t5847;
  double t5855;
  double t5851;
  double t5852;
  double t5853;
  double t5850;
  double t5857;
  double t5858;
  double t5894;
  double t5905;
  double t5906;
  double t5907;
  double t5918;
  double t5919;
  double t5924;
  double t5926;
  double t5927;
  double t5928;
  double t5929;
  double t5930;
  double t5931;
  double t5932;
  double t5933;
  double t5934;
  double t5935;
  double t5939;
  double t5940;
  double t5941;
  double t5921;
  double t5922;
  double t5923;
  double t5936;
  double t5937;
  double t5945;
  double t5946;
  double t5947;
  double t5948;
  double t5949;
  double t5950;
  double t5952;
  double t5954;
  double t5956;
  double t5957;
  double t5938;
  double t5942;
  double t5943;
  double t5904;
  double t5909;
  double t5910;
  double t5911;
  double t5912;
  double t5914;
  double t5953;
  double t5958;
  double t5959;
  double t5961;
  double t5962;
  double t5963;
  double t5967;
  double t5968;
  double t5969;
  double t5915;
  double t5916;
  double t5917;
  double t5944;
  double t5970;
  double t5826;
  double t5848;
  double t5849;
  double t5972;
  double t5973;
  double t5974;
  double t6002;
  double t6007;
  double t6013;
  double t6017;
  double t6044;
  double t6049;
  t5810 = Cos(var1[13]);
  t5730 = Cos(var1[14]);
  t5758 = Sin(var1[13]);
  t5812 = Sin(var1[14]);
  t5837 = t5810*t5730;
  t5841 = t5758*t5812;
  t5842 = t5837 + t5841;
  t5833 = Cos(var1[5]);
  t5844 = Sin(var1[12]);
  t5832 = Cos(var1[12]);
  t5845 = Sin(var1[5]);
  t5831 = Cos(var1[4]);
  t5809 = -1.*t5730*t5758;
  t5819 = t5810*t5812;
  t5820 = t5809 + t5819;
  t5821 = Sin(var1[4]);
  t5843 = t5832*t5833*t5842;
  t5846 = -1.*t5844*t5842*t5845;
  t5847 = t5843 + t5846;
  t5855 = Sin(var1[3]);
  t5851 = t5833*t5844*t5842;
  t5852 = t5832*t5842*t5845;
  t5853 = t5851 + t5852;
  t5850 = Cos(var1[3]);
  t5857 = t5831*t5820;
  t5858 = -1.*t5821*t5847;
  t5894 = t5857 + t5858;
  t5905 = t5730*t5758;
  t5906 = -1.*t5810*t5812;
  t5907 = t5905 + t5906;
  t5918 = -1.*t5832;
  t5919 = 1. + t5918;
  t5924 = -1.*t5810;
  t5926 = 1. + t5924;
  t5927 = 0.28121*t5926;
  t5928 = -1.*t5730;
  t5929 = 1. + t5928;
  t5930 = 0.50321*t5929;
  t5931 = 0.19821*t5730;
  t5932 = t5930 + t5931;
  t5933 = t5810*t5932;
  t5934 = -0.305*t5758*t5812;
  t5935 = t5927 + t5933 + t5934;
  t5939 = 0.15121*t5919;
  t5940 = t5832*t5935;
  t5941 = t5939 + t5940;
  t5921 = -0.15121*t5919;
  t5922 = -0.15121*t5832;
  t5923 = -0.15121*t5844;
  t5936 = t5844*t5935;
  t5937 = t5921 + t5922 + t5923 + t5936;
  t5945 = -1.*t5833*t5844;
  t5946 = -1.*t5832*t5845;
  t5947 = t5945 + t5946;
  t5948 = 0.28121*t5758;
  t5949 = -1.*t5932*t5758;
  t5950 = -0.305*t5810*t5812;
  t5952 = t5948 + t5949 + t5950;
  t5954 = t5833*t5941;
  t5956 = -1.*t5937*t5845;
  t5957 = t5954 + t5956;
  t5938 = t5833*t5937;
  t5942 = t5941*t5845;
  t5943 = t5938 + t5942;
  t5904 = t5842*t5821;
  t5909 = t5832*t5833*t5907;
  t5910 = -1.*t5844*t5907*t5845;
  t5911 = t5909 + t5910;
  t5912 = t5831*t5911;
  t5914 = t5904 + t5912;
  t5953 = t5952*t5821;
  t5958 = t5831*t5957;
  t5959 = t5953 + t5958;
  t5961 = t5831*t5952;
  t5962 = -1.*t5821*t5957;
  t5963 = t5961 + t5962;
  t5967 = t5833*t5844*t5907;
  t5968 = t5832*t5907*t5845;
  t5969 = t5967 + t5968;
  t5915 = t5832*t5833;
  t5916 = -1.*t5844*t5845;
  t5917 = t5915 + t5916;
  t5944 = -1.*t5917*t5943;
  t5970 = t5969*t5943;
  t5826 = t5820*t5821;
  t5848 = t5831*t5847;
  t5849 = t5826 + t5848;
  t5972 = t5831*t5842;
  t5973 = -1.*t5821*t5911;
  t5974 = t5972 + t5973;
  t6002 = -1.*t5969*t5943;
  t6007 = t5853*t5943;
  t6013 = -1.*t5952*t5842;
  t6017 = t5952*t5820;
  t6044 = t5917*t5943;
  t6049 = -1.*t5853*t5943;
  p_output1[0]=t5849;
  p_output1[1]=t5850*t5853 - 1.*t5855*t5894;
  p_output1[2]=t5853*t5855 + t5850*t5894;
  p_output1[3]=t5914*(t5944 - 1.*t5831*t5947*t5959 + t5821*t5947*t5963) + t5831*t5947*(t5914*t5959 + t5970 + t5963*t5974);
  p_output1[4]=(t5944 - 1.*t5947*t5957)*t5969 + t5917*(t5842*t5952 + t5911*t5957 + t5970);
  p_output1[5]=t5842*(-1.*t5832*t5937 + t5844*t5941);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t5812 - 0.305*t5730*t5812 - 1.*t5812*t5932;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5831*t5947;
  p_output1[19]=t5850*t5917 + t5821*t5855*t5947;
  p_output1[20]=t5855*t5917 - 1.*t5821*t5850*t5947;
  p_output1[21]=t5849*(-1.*t5914*t5959 - 1.*t5963*t5974 + t6002) + t5914*(t5849*t5959 + t5894*t5963 + t6007);
  p_output1[22]=t5853*(-1.*t5911*t5957 + t6002 + t6013) + t5969*(t5847*t5957 + t6007 + t6017);
  p_output1[23]=t5820*(-1.*t5844*t5907*t5937 - 1.*t5832*t5907*t5941 + t6013) + t5842*(t5842*t5844*t5937 + t5832*t5842*t5941 + t6017);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t5820*(-1.*t5907*t5935 + t6013) + t5842*(t5842*t5935 + t6017);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5914;
  p_output1[37]=t5850*t5969 - 1.*t5855*t5974;
  p_output1[38]=t5855*t5969 + t5850*t5974;
  p_output1[39]=t5849*(t5831*t5947*t5959 - 1.*t5821*t5947*t5963 + t6044) + t5831*t5947*(-1.*t5849*t5959 - 1.*t5894*t5963 + t6049);
  p_output1[40]=t5853*(t5947*t5957 + t6044) + t5917*(-1.*t5820*t5952 - 1.*t5847*t5957 + t6049);
  p_output1[41]=t5820*(t5832*t5937 - 1.*t5844*t5941);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t5820 - 0.15121*t5907;
  p_output1[49]=0.28121*t5730 + 0.305*Power(t5812,2) - 1.*t5730*t5932;
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

#include "fFrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
