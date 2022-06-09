/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:01 GMT+02:00
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
  double t6894;
  double t3899;
  double t6883;
  double t6895;
  double t6966;
  double t6967;
  double t6968;
  double t6909;
  double t6964;
  double t6971;
  double t6959;
  double t6972;
  double t3799;
  double t7001;
  double t7002;
  double t7003;
  double t6893;
  double t6896;
  double t6897;
  double t6969;
  double t6979;
  double t6984;
  double t7025;
  double t6987;
  double t6988;
  double t6992;
  double t7017;
  double t7004;
  double t7005;
  double t7006;
  double t7018;
  double t7019;
  double t7020;
  double t7026;
  double t7030;
  double t7034;
  double t7038;
  double t7039;
  double t7040;
  double t7043;
  double t7044;
  double t7045;
  double t7047;
  double t7048;
  double t7049;
  double t6997;
  double t7007;
  double t7013;
  double t7061;
  double t7062;
  double t7063;
  double t7064;
  double t7065;
  double t7066;
  double t7067;
  double t7068;
  double t7069;
  double t7070;
  double t7071;
  double t7072;
  double t7073;
  double t7074;
  double t7075;
  double t7076;
  double t7078;
  double t7079;
  double t7080;
  double t7081;
  double t7085;
  double t7086;
  double t7087;
  double t7088;
  double t7090;
  double t7091;
  double t7092;
  double t7077;
  double t7082;
  double t7083;
  double t7089;
  double t7093;
  double t7094;
  double t7096;
  double t7097;
  double t7098;
  double t6905;
  double t6985;
  double t6986;
  double t7084;
  double t7102;
  double t7108;
  double t7113;
  double t7119;
  double t7124;
  double t7138;
  double t7142;
  t6894 = Cos(var1[7]);
  t3899 = Cos(var1[8]);
  t6883 = Sin(var1[7]);
  t6895 = Sin(var1[8]);
  t6966 = t6894*t3899;
  t6967 = t6883*t6895;
  t6968 = t6966 + t6967;
  t6909 = Cos(var1[4]);
  t6964 = Cos(var1[6]);
  t6971 = Sin(var1[5]);
  t6959 = Cos(var1[5]);
  t6972 = Sin(var1[6]);
  t3799 = Sin(var1[4]);
  t7001 = t3899*t6883;
  t7002 = -1.*t6894*t6895;
  t7003 = t7001 + t7002;
  t6893 = -1.*t3899*t6883;
  t6896 = t6894*t6895;
  t6897 = t6893 + t6896;
  t6969 = t6959*t6964*t6968;
  t6979 = -1.*t6971*t6972*t6968;
  t6984 = t6969 + t6979;
  t7025 = Sin(var1[3]);
  t6987 = -1.*t6964*t6971;
  t6988 = -1.*t6959*t6972;
  t6992 = t6987 + t6988;
  t7017 = Cos(var1[3]);
  t7004 = t6959*t6964*t7003;
  t7005 = -1.*t6971*t6972*t7003;
  t7006 = t7004 + t7005;
  t7018 = t6964*t6971*t6968;
  t7019 = t6959*t6972*t6968;
  t7020 = t7018 + t7019;
  t7026 = t6909*t6897;
  t7030 = -1.*t3799*t6984;
  t7034 = t7026 + t7030;
  t7038 = t6959*t6964;
  t7039 = -1.*t6971*t6972;
  t7040 = t7038 + t7039;
  t7043 = t6964*t6971*t7003;
  t7044 = t6959*t6972*t7003;
  t7045 = t7043 + t7044;
  t7047 = t6909*t6968;
  t7048 = -1.*t3799*t7006;
  t7049 = t7047 + t7048;
  t6997 = t3799*t6968;
  t7007 = t6909*t7006;
  t7013 = t6997 + t7007;
  t7061 = -1.*t6964;
  t7062 = 1. + t7061;
  t7063 = 0.15121*t7062;
  t7064 = -1.*t6894;
  t7065 = 1. + t7064;
  t7066 = 0.28121*t7065;
  t7067 = -1.*t3899;
  t7068 = 1. + t7067;
  t7069 = 0.50321*t7068;
  t7070 = 0.19821*t3899;
  t7071 = t7069 + t7070;
  t7072 = t6894*t7071;
  t7073 = -0.305*t6883*t6895;
  t7074 = t7066 + t7072 + t7073;
  t7075 = t6964*t7074;
  t7076 = t7063 + t7075;
  t7078 = 0.15121*t6964;
  t7079 = -0.15121*t6972;
  t7080 = t6972*t7074;
  t7081 = t7063 + t7078 + t7079 + t7080;
  t7085 = 0.28121*t6883;
  t7086 = -1.*t7071*t6883;
  t7087 = -0.305*t6894*t6895;
  t7088 = t7085 + t7086 + t7087;
  t7090 = t6959*t7076;
  t7091 = -1.*t6971*t7081;
  t7092 = t7090 + t7091;
  t7077 = t6971*t7076;
  t7082 = t6959*t7081;
  t7083 = t7077 + t7082;
  t7089 = t3799*t7088;
  t7093 = t6909*t7092;
  t7094 = t7089 + t7093;
  t7096 = t6909*t7088;
  t7097 = -1.*t3799*t7092;
  t7098 = t7096 + t7097;
  t6905 = t3799*t6897;
  t6985 = t6909*t6984;
  t6986 = t6905 + t6985;
  t7084 = -1.*t7040*t7083;
  t7102 = t7045*t7083;
  t7108 = -1.*t7045*t7083;
  t7113 = t7020*t7083;
  t7119 = t7040*t7083;
  t7124 = -1.*t7020*t7083;
  t7138 = -1.*t7088*t6968;
  t7142 = t7088*t6897;
  p_output1[0]=t6986;
  p_output1[1]=t6909*t6992;
  p_output1[2]=t7013;
  p_output1[3]=t7017*t7020 - 1.*t7025*t7034;
  p_output1[4]=t3799*t6992*t7025 + t7017*t7040;
  p_output1[5]=t7017*t7045 - 1.*t7025*t7049;
  p_output1[6]=t7020*t7025 + t7017*t7034;
  p_output1[7]=-1.*t3799*t6992*t7017 + t7025*t7040;
  p_output1[8]=t7025*t7045 + t7017*t7049;
  p_output1[9]=t7013*(t7084 - 1.*t6909*t6992*t7094 + t3799*t6992*t7098) + t6909*t6992*(t7013*t7094 + t7049*t7098 + t7102);
  p_output1[10]=t6986*(-1.*t7013*t7094 - 1.*t7049*t7098 + t7108) + t7013*(t6986*t7094 + t7034*t7098 + t7113);
  p_output1[11]=t6986*(t6909*t6992*t7094 - 1.*t3799*t6992*t7098 + t7119) + t6909*t6992*(-1.*t6986*t7094 - 1.*t7034*t7098 + t7124);
  p_output1[12]=t7045*(t7084 - 1.*t6992*t7092) + t7040*(t6968*t7088 + t7006*t7092 + t7102);
  p_output1[13]=t7020*(-1.*t7006*t7092 + t7108 + t7138) + t7045*(t6984*t7092 + t7113 + t7142);
  p_output1[14]=t7020*(t6992*t7092 + t7119) + t7040*(-1.*t6897*t7088 - 1.*t6984*t7092 + t7124);
  p_output1[15]=t6968*(t6972*t7076 - 1.*t6964*t7081);
  p_output1[16]=t6897*(-1.*t6964*t7003*t7076 - 1.*t6972*t7003*t7081 + t7138) + t6968*(t6964*t6968*t7076 + t6968*t6972*t7081 + t7142);
  p_output1[17]=t6897*(-1.*t6972*t7076 + t6964*t7081);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t6897*(-1.*t7003*t7074 + t7138) + t6968*(t6968*t7074 + t7142);
  p_output1[20]=0.15121*t6897 + 0.15121*t7003;
  p_output1[21]=0.28121*t6895 - 0.305*t3899*t6895 - 1.*t6895*t7071;
  p_output1[22]=0;
  p_output1[23]=0.28121*t3899 + 0.305*Power(t6895,2) - 1.*t3899*t7071;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.305;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
