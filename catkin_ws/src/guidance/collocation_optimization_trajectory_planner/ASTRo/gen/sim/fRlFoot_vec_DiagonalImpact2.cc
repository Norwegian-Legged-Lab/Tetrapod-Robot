/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:58 GMT+02:00
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
  double t2736;
  double t14384;
  double t2739;
  double t17911;
  double t17917;
  double t17909;
  double t17918;
  double t13208;
  double t17936;
  double t17940;
  double t17941;
  double t14753;
  double t17929;
  double t17949;
  double t17950;
  double t17951;
  double t13793;
  double t17814;
  double t17898;
  double t18002;
  double t17999;
  double t17916;
  double t17923;
  double t17928;
  double t17942;
  double t17943;
  double t17944;
  double t17952;
  double t17953;
  double t17954;
  double t18003;
  double t18004;
  double t18005;
  double t18010;
  double t18011;
  double t18012;
  double t18015;
  double t18016;
  double t18017;
  double t18022;
  double t18023;
  double t18024;
  double t18027;
  double t18028;
  double t18029;
  double t17931;
  double t17945;
  double t17946;
  double t18047;
  double t18048;
  double t18053;
  double t18054;
  double t18056;
  double t18057;
  double t18058;
  double t18059;
  double t18060;
  double t18061;
  double t18062;
  double t18063;
  double t18064;
  double t18068;
  double t18069;
  double t18070;
  double t18049;
  double t18050;
  double t18052;
  double t18065;
  double t18066;
  double t18074;
  double t18075;
  double t18076;
  double t18077;
  double t18079;
  double t18080;
  double t18081;
  double t18067;
  double t18071;
  double t18072;
  double t18078;
  double t18082;
  double t18083;
  double t18085;
  double t18086;
  double t18087;
  double t17948;
  double t17955;
  double t17956;
  double t18073;
  double t18091;
  double t18098;
  double t18103;
  double t18110;
  double t18115;
  double t18141;
  double t18145;
  t2736 = Cos(var1[4]);
  t14384 = Cos(var1[9]);
  t2739 = Cos(var1[5]);
  t17911 = Cos(var1[11]);
  t17917 = Sin(var1[10]);
  t17909 = Cos(var1[10]);
  t17918 = Sin(var1[11]);
  t13208 = Sin(var1[9]);
  t17936 = -1.*t17911*t17917;
  t17940 = t17909*t17918;
  t17941 = t17936 + t17940;
  t14753 = Sin(var1[5]);
  t17929 = Sin(var1[4]);
  t17949 = -1.*t17909*t17911;
  t17950 = -1.*t17917*t17918;
  t17951 = t17949 + t17950;
  t13793 = t2739*t13208;
  t17814 = t14384*t14753;
  t17898 = t13793 + t17814;
  t18002 = Cos(var1[3]);
  t17999 = Sin(var1[3]);
  t17916 = t17909*t17911;
  t17923 = t17917*t17918;
  t17928 = t17916 + t17923;
  t17942 = t14384*t2739*t17941;
  t17943 = -1.*t13208*t17941*t14753;
  t17944 = t17942 + t17943;
  t17952 = t14384*t2739*t17951;
  t17953 = -1.*t13208*t17951*t14753;
  t17954 = t17952 + t17953;
  t18003 = -1.*t14384*t2739;
  t18004 = t13208*t14753;
  t18005 = t18003 + t18004;
  t18010 = t2739*t13208*t17941;
  t18011 = t14384*t17941*t14753;
  t18012 = t18010 + t18011;
  t18015 = t2736*t17928;
  t18016 = -1.*t17929*t17944;
  t18017 = t18015 + t18016;
  t18022 = t2739*t13208*t17951;
  t18023 = t14384*t17951*t14753;
  t18024 = t18022 + t18023;
  t18027 = t2736*t17941;
  t18028 = -1.*t17929*t17954;
  t18029 = t18027 + t18028;
  t17931 = t17928*t17929;
  t17945 = t2736*t17944;
  t17946 = t17931 + t17945;
  t18047 = -1.*t14384;
  t18048 = 1. + t18047;
  t18053 = -1.*t17909;
  t18054 = 1. + t18053;
  t18056 = -0.28121*t18054;
  t18057 = -1.*t17911;
  t18058 = 1. + t18057;
  t18059 = -0.50321*t18058;
  t18060 = -0.23321*t17911;
  t18061 = t18059 + t18060;
  t18062 = t17909*t18061;
  t18063 = 0.27*t17917*t17918;
  t18064 = t18056 + t18062 + t18063;
  t18068 = -0.15121*t18048;
  t18069 = t14384*t18064;
  t18070 = t18068 + t18069;
  t18049 = 0.15121*t18048;
  t18050 = 0.15121*t14384;
  t18052 = 0.15121*t13208;
  t18065 = t13208*t18064;
  t18066 = t18049 + t18050 + t18052 + t18065;
  t18074 = 0.28121*t17917;
  t18075 = t18061*t17917;
  t18076 = -0.27*t17909*t17918;
  t18077 = t18074 + t18075 + t18076;
  t18079 = t2739*t18070;
  t18080 = -1.*t18066*t14753;
  t18081 = t18079 + t18080;
  t18067 = t2739*t18066;
  t18071 = t18070*t14753;
  t18072 = t18067 + t18071;
  t18078 = t18077*t17929;
  t18082 = t2736*t18081;
  t18083 = t18078 + t18082;
  t18085 = t2736*t18077;
  t18086 = -1.*t17929*t18081;
  t18087 = t18085 + t18086;
  t17948 = t17941*t17929;
  t17955 = t2736*t17954;
  t17956 = t17948 + t17955;
  t18073 = -1.*t18005*t18072;
  t18091 = t18012*t18072;
  t18098 = t18005*t18072;
  t18103 = -1.*t18024*t18072;
  t18110 = -1.*t18012*t18072;
  t18115 = t18024*t18072;
  t18141 = -1.*t18077*t17928;
  t18145 = t18077*t17941;
  p_output1[0]=t17956*var2[0] + t17898*t2736*var2[1] + t17946*var2[2];
  p_output1[1]=(t18002*t18024 - 1.*t17999*t18029)*var2[0] + (t17898*t17929*t17999 + t18002*t18005)*var2[1] + (t18002*t18012 - 1.*t17999*t18017)*var2[2];
  p_output1[2]=(t17999*t18024 + t18002*t18029)*var2[0] + (-1.*t17898*t17929*t18002 + t17999*t18005)*var2[1] + (t17999*t18012 + t18002*t18017)*var2[2];
  p_output1[3]=(t17898*(t17946*t18083 + t18017*t18087 + t18091)*t2736 + t17946*(t18073 + t17898*t17929*t18087 - 1.*t17898*t18083*t2736))*var2[0] + (t17956*(-1.*t17946*t18083 - 1.*t18017*t18087 + t18110) + t17946*(t17956*t18083 + t18029*t18087 + t18115))*var2[1] + (t17898*(-1.*t17956*t18083 - 1.*t18029*t18087 + t18103)*t2736 + t17956*(-1.*t17898*t17929*t18087 + t18098 + t17898*t18083*t2736))*var2[2];
  p_output1[4]=(t18012*(t18073 - 1.*t17898*t18081) + t18005*(t17928*t18077 + t17944*t18081 + t18091))*var2[0] + (t18024*(-1.*t17944*t18081 + t18110 + t18141) + t18012*(t17954*t18081 + t18115 + t18145))*var2[1] + (t18024*(t17898*t18081 + t18098) + t18005*(-1.*t17941*t18077 - 1.*t17954*t18081 + t18103))*var2[2];
  p_output1[5]=t17928*(t14384*t18066 - 1.*t13208*t18070)*var2[0] + (t17941*(-1.*t13208*t17941*t18066 - 1.*t14384*t17941*t18070 + t18141) + t17928*(t13208*t17951*t18066 + t14384*t17951*t18070 + t18145))*var2[1] + t17941*(-1.*t14384*t18066 + t13208*t18070)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t17928 + 0.15121*t17951)*var2[0] + (-0.15121 + t17941*(-1.*t17941*t18064 + t18141) + t17928*(t17951*t18064 + t18145))*var2[1];
  p_output1[10]=(0.28121*t17918 - 0.27*t17911*t17918 + t17918*t18061)*var2[0] + (0.28121*t17911 + 0.27*Power(t17918,2) + t17911*t18061)*var2[2];
  p_output1[11]=-0.27*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
