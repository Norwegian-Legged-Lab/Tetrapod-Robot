/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:21 GMT+02:00
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
  double t20716;
  double t1377;
  double t3580;
  double t20727;
  double t20833;
  double t20839;
  double t20844;
  double t20832;
  double t20846;
  double t20831;
  double t20847;
  double t20827;
  double t14637;
  double t20728;
  double t20729;
  double t20730;
  double t20845;
  double t20848;
  double t20849;
  double t20857;
  double t20853;
  double t20854;
  double t20855;
  double t20852;
  double t20858;
  double t20859;
  double t20860;
  double t20881;
  double t20882;
  double t20884;
  double t20888;
  double t20889;
  double t20890;
  double t20891;
  double t20892;
  double t20893;
  double t20894;
  double t20895;
  double t20896;
  double t20897;
  double t20898;
  double t20902;
  double t20903;
  double t20885;
  double t20886;
  double t20899;
  double t20900;
  double t20907;
  double t20909;
  double t20910;
  double t20911;
  double t20912;
  double t20913;
  double t20914;
  double t20917;
  double t20918;
  double t20919;
  double t20901;
  double t20904;
  double t20905;
  double t20866;
  double t20867;
  double t20868;
  double t20869;
  double t20870;
  double t20872;
  double t20873;
  double t20874;
  double t20875;
  double t20916;
  double t20921;
  double t20922;
  double t20924;
  double t20925;
  double t20926;
  double t20930;
  double t20931;
  double t20932;
  double t20877;
  double t20878;
  double t20880;
  double t20906;
  double t20933;
  double t20731;
  double t20850;
  double t20851;
  double t20935;
  double t20936;
  double t20937;
  double t20968;
  double t20973;
  double t20979;
  double t20983;
  double t21010;
  double t21016;
  t20716 = Cos(var1[16]);
  t1377 = Cos(var1[17]);
  t3580 = Sin(var1[16]);
  t20727 = Sin(var1[17]);
  t20833 = -1.*t20716*t1377;
  t20839 = -1.*t3580*t20727;
  t20844 = t20833 + t20839;
  t20832 = Cos(var1[5]);
  t20846 = Sin(var1[15]);
  t20831 = Cos(var1[15]);
  t20847 = Sin(var1[5]);
  t20827 = Cos(var1[4]);
  t14637 = -1.*t1377*t3580;
  t20728 = t20716*t20727;
  t20729 = t14637 + t20728;
  t20730 = Sin(var1[4]);
  t20845 = t20831*t20832*t20844;
  t20848 = -1.*t20846*t20844*t20847;
  t20849 = t20845 + t20848;
  t20857 = Sin(var1[3]);
  t20853 = t20832*t20846*t20844;
  t20854 = t20831*t20844*t20847;
  t20855 = t20853 + t20854;
  t20852 = Cos(var1[3]);
  t20858 = t20827*t20729;
  t20859 = -1.*t20730*t20849;
  t20860 = t20858 + t20859;
  t20881 = -1.*t20831;
  t20882 = 1. + t20881;
  t20884 = -0.15121*t20882;
  t20888 = -1.*t20716;
  t20889 = 1. + t20888;
  t20890 = -0.28121*t20889;
  t20891 = -1.*t1377;
  t20892 = 1. + t20891;
  t20893 = -0.50321*t20892;
  t20894 = -0.19821*t1377;
  t20895 = t20893 + t20894;
  t20896 = t20716*t20895;
  t20897 = 0.305*t3580*t20727;
  t20898 = t20890 + t20896 + t20897;
  t20902 = t20831*t20898;
  t20903 = t20884 + t20902;
  t20885 = -0.15121*t20831;
  t20886 = 0.15121*t20846;
  t20899 = t20846*t20898;
  t20900 = t20884 + t20885 + t20886 + t20899;
  t20907 = t20832*t20846;
  t20909 = t20831*t20847;
  t20910 = t20907 + t20909;
  t20911 = 0.28121*t3580;
  t20912 = t20895*t3580;
  t20913 = -0.305*t20716*t20727;
  t20914 = t20911 + t20912 + t20913;
  t20917 = t20832*t20903;
  t20918 = -1.*t20900*t20847;
  t20919 = t20917 + t20918;
  t20901 = t20832*t20900;
  t20904 = t20903*t20847;
  t20905 = t20901 + t20904;
  t20866 = t20716*t1377;
  t20867 = t3580*t20727;
  t20868 = t20866 + t20867;
  t20869 = t20868*t20730;
  t20870 = t20831*t20832*t20729;
  t20872 = -1.*t20846*t20729*t20847;
  t20873 = t20870 + t20872;
  t20874 = t20827*t20873;
  t20875 = t20869 + t20874;
  t20916 = t20914*t20730;
  t20921 = t20827*t20919;
  t20922 = t20916 + t20921;
  t20924 = t20827*t20914;
  t20925 = -1.*t20730*t20919;
  t20926 = t20924 + t20925;
  t20930 = t20832*t20846*t20729;
  t20931 = t20831*t20729*t20847;
  t20932 = t20930 + t20931;
  t20877 = -1.*t20831*t20832;
  t20878 = t20846*t20847;
  t20880 = t20877 + t20878;
  t20906 = -1.*t20880*t20905;
  t20933 = t20932*t20905;
  t20731 = t20729*t20730;
  t20850 = t20827*t20849;
  t20851 = t20731 + t20850;
  t20935 = t20827*t20868;
  t20936 = -1.*t20730*t20873;
  t20937 = t20935 + t20936;
  t20968 = -1.*t20932*t20905;
  t20973 = t20855*t20905;
  t20979 = -1.*t20914*t20868;
  t20983 = t20914*t20729;
  t21010 = t20880*t20905;
  t21016 = -1.*t20855*t20905;
  p_output1[0]=t20851;
  p_output1[1]=t20852*t20855 - 1.*t20857*t20860;
  p_output1[2]=t20855*t20857 + t20852*t20860;
  p_output1[3]=t20875*(t20906 - 1.*t20827*t20910*t20922 + t20730*t20910*t20926) + t20827*t20910*(t20875*t20922 + t20933 + t20926*t20937);
  p_output1[4]=(t20906 - 1.*t20910*t20919)*t20932 + t20880*(t20868*t20914 + t20873*t20919 + t20933);
  p_output1[5]=t20868*(t20831*t20900 - 1.*t20846*t20903);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t20844 - 0.15121*t20868;
  p_output1[16]=0.28121*t20727 - 0.305*t1377*t20727 + t20727*t20895;
  p_output1[17]=0;
  p_output1[18]=t20827*t20910;
  p_output1[19]=t20852*t20880 + t20730*t20857*t20910;
  p_output1[20]=t20857*t20880 - 1.*t20730*t20852*t20910;
  p_output1[21]=t20851*(-1.*t20875*t20922 - 1.*t20926*t20937 + t20968) + t20875*(t20851*t20922 + t20860*t20926 + t20973);
  p_output1[22]=t20855*(-1.*t20873*t20919 + t20968 + t20979) + t20932*(t20849*t20919 + t20973 + t20983);
  p_output1[23]=t20729*(-1.*t20729*t20846*t20900 - 1.*t20729*t20831*t20903 + t20979) + t20868*(t20844*t20846*t20900 + t20831*t20844*t20903 + t20983);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t20729*(-1.*t20729*t20898 + t20979) + t20868*(t20844*t20898 + t20983);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t20875;
  p_output1[37]=t20852*t20932 - 1.*t20857*t20937;
  p_output1[38]=t20857*t20932 + t20852*t20937;
  p_output1[39]=t20851*(t20827*t20910*t20922 - 1.*t20730*t20910*t20926 + t21010) + t20827*t20910*(-1.*t20851*t20922 - 1.*t20860*t20926 + t21016);
  p_output1[40]=t20855*(t20910*t20919 + t21010) + t20880*(-1.*t20729*t20914 - 1.*t20849*t20919 + t21016);
  p_output1[41]=t20729*(-1.*t20831*t20900 + t20846*t20903);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.28121*t1377 + 0.305*Power(t20727,2) + t1377*t20895;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
