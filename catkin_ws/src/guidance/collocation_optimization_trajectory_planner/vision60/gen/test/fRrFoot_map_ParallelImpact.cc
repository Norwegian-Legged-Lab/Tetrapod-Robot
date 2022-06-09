/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:43 GMT+02:00
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
  double t29751;
  double t24254;
  double t26946;
  double t29752;
  double t29734;
  double t29753;
  double t29754;
  double t29913;
  double t29928;
  double t29914;
  double t29922;
  double t29926;
  double t29931;
  double t4147;
  double t29912;
  double t29832;
  double t29927;
  double t29938;
  double t29939;
  double t29961;
  double t29957;
  double t29958;
  double t29959;
  double t29956;
  double t29962;
  double t29963;
  double t29967;
  double t30002;
  double t30003;
  double t30004;
  double t30009;
  double t30012;
  double t30013;
  double t30014;
  double t30016;
  double t30017;
  double t29998;
  double t30007;
  double t30018;
  double t30019;
  double t30024;
  double t30026;
  double t30027;
  double t30029;
  double t30030;
  double t30032;
  double t29993;
  double t29995;
  double t29996;
  double t29997;
  double t30021;
  double t30022;
  double t30040;
  double t30041;
  double t30042;
  double t30044;
  double t30046;
  double t30047;
  double t30037;
  double t30038;
  double t30039;
  double t30023;
  double t30033;
  double t30034;
  double t29979;
  double t29980;
  double t29984;
  double t30043;
  double t30048;
  double t30049;
  double t29978;
  double t29988;
  double t29989;
  double t29990;
  double t29991;
  double t29992;
  double t30055;
  double t30057;
  double t30058;
  double t30063;
  double t30065;
  double t30067;
  double t30036;
  double t30068;
  double t30077;
  double t30081;
  double t30052;
  double t30053;
  double t30054;
  double t29905;
  double t29940;
  double t29955;
  double t30070;
  double t30071;
  double t30072;
  double t30110;
  double t30115;
  double t30125;
  double t30121;
  double t30135;
  double t30130;
  double t30152;
  double t30157;
  double t30163;
  double t30167;
  t29751 = Cos(var1[16]);
  t24254 = Cos(var1[17]);
  t26946 = Sin(var1[16]);
  t29752 = Sin(var1[17]);
  t29734 = t24254*t26946;
  t29753 = -1.*t29751*t29752;
  t29754 = t29734 + t29753;
  t29913 = Cos(var1[5]);
  t29928 = Sin(var1[15]);
  t29914 = t29751*t24254;
  t29922 = t26946*t29752;
  t29926 = t29914 + t29922;
  t29931 = Sin(var1[5]);
  t4147 = Cos(var1[15]);
  t29912 = Cos(var1[4]);
  t29832 = Sin(var1[4]);
  t29927 = t29913*t29926;
  t29938 = t29928*t29754*t29931;
  t29939 = t29927 + t29938;
  t29961 = Sin(var1[3]);
  t29957 = -1.*t29913*t29928*t29754;
  t29958 = t29926*t29931;
  t29959 = t29957 + t29958;
  t29956 = Cos(var1[3]);
  t29962 = t4147*t29912*t29754;
  t29963 = -1.*t29832*t29939;
  t29967 = t29962 + t29963;
  t30002 = -0.0641*t24254;
  t30003 = -0.28*t29752;
  t30004 = t30002 + t30003;
  t30009 = -1.*t24254;
  t30012 = 1. + t30009;
  t30013 = -0.575*t30012;
  t30014 = -0.295*t24254;
  t30016 = -0.0641*t29752;
  t30017 = t30013 + t30014 + t30016;
  t29998 = 0.325*t26946;
  t30007 = t29751*t30004;
  t30018 = t26946*t30017;
  t30019 = t29998 + t30007 + t30018;
  t30024 = -1.*t29751;
  t30026 = 1. + t30024;
  t30027 = -0.325*t30026;
  t30029 = -1.*t26946*t30004;
  t30030 = t29751*t30017;
  t30032 = t30027 + t30029 + t30030;
  t29993 = -1.*t4147;
  t29995 = 1. + t29993;
  t29996 = -0.1575*t29995;
  t29997 = -0.2255*t4147;
  t30021 = -1.*t29928*t30019;
  t30022 = t29996 + t29997 + t30021;
  t30040 = -0.068*t29928;
  t30041 = t4147*t30019;
  t30042 = t30040 + t30041;
  t30044 = t29913*t30032;
  t30046 = -1.*t30022*t29931;
  t30047 = t30044 + t30046;
  t30037 = t29928*t29832;
  t30038 = -1.*t4147*t29912*t29931;
  t30039 = t30037 + t30038;
  t30023 = t29913*t30022;
  t30033 = t30032*t29931;
  t30034 = t30023 + t30033;
  t29979 = -1.*t24254*t26946;
  t29980 = t29751*t29752;
  t29984 = t29979 + t29980;
  t30043 = t30042*t29832;
  t30048 = t29912*t30047;
  t30049 = t30043 + t30048;
  t29978 = t4147*t29926*t29832;
  t29988 = t29913*t29984;
  t29989 = t29928*t29926*t29931;
  t29990 = t29988 + t29989;
  t29991 = t29912*t29990;
  t29992 = t29978 + t29991;
  t30055 = t29912*t30042;
  t30057 = -1.*t29832*t30047;
  t30058 = t30055 + t30057;
  t30063 = -1.*t29913*t29928*t29926;
  t30065 = t29984*t29931;
  t30067 = t30063 + t30065;
  t30036 = -1.*t4147*t29913*t30034;
  t30068 = t30034*t30067;
  t30077 = -1.*t29928*t30042;
  t30081 = t4147*t30042*t29926;
  t30052 = t29912*t29928;
  t30053 = t4147*t29832*t29931;
  t30054 = t30052 + t30053;
  t29905 = t4147*t29754*t29832;
  t29940 = t29912*t29939;
  t29955 = t29905 + t29940;
  t30070 = t4147*t29912*t29926;
  t30071 = -1.*t29832*t29990;
  t30072 = t30070 + t30071;
  t30110 = t30034*t29959;
  t30115 = -1.*t30034*t30067;
  t30125 = -1.*t4147*t30042*t29926;
  t30121 = t4147*t30042*t29754;
  t30135 = t30032*t29926;
  t30130 = -1.*t30032*t29984;
  t30152 = t4147*t29913*t30034;
  t30157 = -1.*t30034*t29959;
  t30163 = t29928*t30042;
  t30167 = -1.*t4147*t30042*t29754;
  p_output1[0]=t29955;
  p_output1[1]=t29956*t29959 - 1.*t29961*t29967;
  p_output1[2]=t29959*t29961 + t29956*t29967;
  p_output1[3]=t29992*(t30036 - 1.*t30039*t30049 - 1.*t30054*t30058) + t30039*(t29992*t30049 + t30068 + t30058*t30072);
  p_output1[4]=t29913*(t29990*t30047 + t30068 + t30081)*t4147 + t30067*(t30036 + t30077 + t29931*t30047*t4147);
  p_output1[5]=t29928*(-1.*t29926*t29928*t30022 + t29984*t30032 + t30081) + t29926*t4147*(t30077 - 1.*t30022*t4147);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t29754 + 0.2255*t29984;
  p_output1[16]=-0.325*t29752 - 1.*t24254*t30004 - 1.*t29752*t30017;
  p_output1[17]=-0.0641;
  p_output1[18]=t30039;
  p_output1[19]=-1.*t29961*t30054 + t29913*t29956*t4147;
  p_output1[20]=t29956*t30054 + t29913*t29961*t4147;
  p_output1[21]=t29992*(t29955*t30049 + t29967*t30058 + t30110) + t29955*(-1.*t29992*t30049 - 1.*t30058*t30072 + t30115);
  p_output1[22]=t30067*(t29939*t30047 + t30110 + t30121) + t29959*(-1.*t29990*t30047 + t30115 + t30125);
  p_output1[23]=t29754*(t29926*t29928*t30022 + t30125 + t30130)*t4147 + t29926*(-1.*t29754*t29928*t30022 + t30121 + t30135)*t4147;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t29926*(-1.*t29926*t30019 + t30130) + t29984*(t29754*t30019 + t30135);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t29992;
  p_output1[37]=t29956*t30067 - 1.*t29961*t30072;
  p_output1[38]=t29961*t30067 + t29956*t30072;
  p_output1[39]=t29955*(t30039*t30049 + t30054*t30058 + t30152) + t30039*(-1.*t29955*t30049 - 1.*t29967*t30058 + t30157);
  p_output1[40]=t29913*(-1.*t29939*t30047 + t30157 + t30167)*t4147 + t29959*(t30152 + t30163 - 1.*t29931*t30047*t4147);
  p_output1[41]=t29928*(t29754*t29928*t30022 - 1.*t29926*t30032 + t30167) + t29754*t4147*(t30163 + t30022*t4147);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t29926;
  p_output1[52]=0.325*t24254 - 1.*t29752*t30004 + t24254*t30017;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
