/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:36 GMT+02:00
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
  double t2036;
  double t2058;
  double t2117;
  double t2927;
  double t3224;
  double t3864;
  double t2007;
  double t4564;
  double t78;
  double t1580;
  double t5814;
  double t6750;
  double t7212;
  double t7362;
  double t7384;
  double t7463;
  double t7668;
  double t7682;
  double t7916;
  double t7927;
  double t7938;
  double t8023;
  double t4506;
  double t4560;
  double t2301;
  double t3818;
  double t5849;
  double t5950;
  double t7385;
  double t7390;
  double t8212;
  double t8213;
  double t8214;
  double t8359;
  double t8215;
  double t8232;
  double t8238;
  double t8249;
  double t8254;
  double t8270;
  double t8293;
  double t8309;
  double t8320;
  double t8322;
  double t8350;
  double t8392;
  double t8396;
  double t8397;
  double t8399;
  double t8402;
  double t8403;
  double t8409;
  double t8410;
  double t8413;
  double t8447;
  double t8448;
  double t8457;
  double t8468;
  double t8471;
  double t8470;
  double t8472;
  double t8475;
  double t8478;
  double t8482;
  double t8486;
  double t8509;
  double t8512;
  double t8513;
  double t8515;
  double t8518;
  double t8525;
  double t8532;
  double t8533;
  double t8534;
  double t8614;
  double t8621;
  double t8626;
  double t8636;
  double t8641;
  double t8646;
  double t8662;
  double t8690;
  double t8696;
  double t8919;
  double t8939;
  double t8993;
  double t9146;
  double t9150;
  double t9189;
  double t9319;
  double t9387;
  double t9409;
  double t8361;
  double t8365;
  double t8378;
  double t10475;
  double t10537;
  double t10541;
  double t11187;
  double t11259;
  double t9721;
  double t14119;
  double t14131;
  double t14133;
  double t14137;
  double t14143;
  double t14145;
  double t14148;
  double t14157;
  double t14158;
  double t14205;
  double t14206;
  double t14210;
  double t15118;
  double t15127;
  double t15139;
  double t15212;
  double t15216;
  double t15222;
  double t15244;
  double t15275;
  double t15285;
  double t15648;
  double t15745;
  double t15828;
  double t15843;
  double t15847;
  double t15851;
  double t15881;
  double t15882;
  double t15883;
  double t15886;
  double t15887;
  double t15855;
  double t16062;
  double t16063;
  double t16066;
  double t16068;
  double t16069;
  double t16071;
  double t16072;
  double t16073;
  double t16081;
  double t16082;
  double t16083;
  t2036 = Cos(var1[9]);
  t2058 = -1.*t2036;
  t2117 = 1. + t2058;
  t2927 = Sin(var1[9]);
  t3224 = 0.15121*t2927;
  t3864 = Sin(var1[4]);
  t2007 = Cos(var1[5]);
  t4564 = Sin(var1[5]);
  t78 = Cos(var1[4]);
  t1580 = Sin(var1[10]);
  t5814 = Cos(var1[10]);
  t6750 = -1.*t2036*t2007*t3864;
  t7212 = t2927*t3864*t4564;
  t7362 = t6750 + t7212;
  t7384 = Cos(var1[11]);
  t7463 = t78*t1580;
  t7668 = t5814*t7362;
  t7682 = t7463 + t7668;
  t7916 = Sin(var1[11]);
  t7927 = t5814*t78;
  t7938 = -1.*t1580*t7362;
  t8023 = t7927 + t7938;
  t4506 = 0.15121*t2117;
  t4560 = t4506 + t3224;
  t2301 = -0.15121*t2117;
  t3818 = t2301 + t3224;
  t5849 = -1.*t5814;
  t5950 = 1. + t5849;
  t7385 = -1.*t7384;
  t7390 = 1. + t7385;
  t8212 = -1.*t78*t2007*t2927;
  t8213 = -1.*t2036*t78*t4564;
  t8214 = t8212 + t8213;
  t8359 = 0.15121*t2036;
  t8215 = -0.28121*t5950*t8214;
  t8232 = -0.50321*t5814*t7390*t8214;
  t8238 = 0.50321*t1580*t7916*t8214;
  t8249 = -1.*t2036*t78*t2007;
  t8254 = t78*t2927*t4564;
  t8270 = t8249 + t8254;
  t8293 = 0.15121*t8270;
  t8309 = t5814*t7384*t8214;
  t8320 = t1580*t7916*t8214;
  t8322 = t8309 + t8320;
  t8350 = -0.19821*t8322;
  t8392 = t2036*t78*t2007;
  t8396 = -1.*t78*t2927*t4564;
  t8397 = t8392 + t8396;
  t8399 = -1.*t1580*t3864;
  t8402 = -1.*t5814*t8397;
  t8403 = t8399 + t8402;
  t8409 = t5814*t3864;
  t8410 = -1.*t1580*t8397;
  t8413 = t8409 + t8410;
  t8447 = t1580*t3864;
  t8448 = t5814*t8397;
  t8457 = t8447 + t8448;
  t8468 = Cos(var1[3]);
  t8471 = Sin(var1[3]);
  t8470 = t8468*t2007*t3864;
  t8472 = -1.*t8471*t4564;
  t8475 = t8470 + t8472;
  t8478 = -1.*t2007*t8471;
  t8482 = -1.*t8468*t3864*t4564;
  t8486 = t8478 + t8482;
  t8509 = t2036*t8475;
  t8512 = t2927*t8486;
  t8513 = t8509 + t8512;
  t8515 = -1.*t8468*t78*t1580;
  t8518 = t5814*t8513;
  t8525 = t8515 + t8518;
  t8532 = -1.*t5814*t8468*t78;
  t8533 = -1.*t1580*t8513;
  t8534 = t8532 + t8533;
  t8614 = t2036*t78*t2007*t8471;
  t8621 = -1.*t78*t2927*t8471*t4564;
  t8626 = t8614 + t8621;
  t8636 = t1580*t8471*t3864;
  t8641 = t5814*t8626;
  t8646 = t8636 + t8641;
  t8662 = t5814*t8471*t3864;
  t8690 = -1.*t1580*t8626;
  t8696 = t8662 + t8690;
  t8919 = -1.*t2007*t8471*t3864;
  t8939 = -1.*t8468*t4564;
  t8993 = t8919 + t8939;
  t9146 = t8468*t2007;
  t9150 = -1.*t8471*t3864*t4564;
  t9189 = t9146 + t9150;
  t9319 = t2927*t8993;
  t9387 = t2036*t9189;
  t9409 = t9319 + t9387;
  t8361 = -0.15121*t2927;
  t8365 = t8359 + t8361;
  t8378 = t8359 + t3224;
  t10475 = t2007*t8471*t3864;
  t10537 = t8468*t4564;
  t10541 = t10475 + t10537;
  t11187 = -1.*t2927*t10541;
  t11259 = t11187 + t9387;
  t9721 = -1.*t2927*t9189;
  t14119 = t2036*t10541;
  t14131 = t2927*t9189;
  t14133 = t14119 + t14131;
  t14137 = t78*t1580*t8471;
  t14143 = -1.*t5814*t14133;
  t14145 = t14137 + t14143;
  t14148 = -1.*t5814*t78*t8471;
  t14157 = -1.*t1580*t14133;
  t14158 = t14148 + t14157;
  t14205 = -1.*t78*t1580*t8471;
  t14206 = t5814*t14133;
  t14210 = t14205 + t14206;
  t15118 = -1.*t2036*t8468*t78*t2007;
  t15127 = t8468*t78*t2927*t4564;
  t15139 = t15118 + t15127;
  t15212 = -1.*t8468*t1580*t3864;
  t15216 = t5814*t15139;
  t15222 = t15212 + t15216;
  t15244 = -1.*t5814*t8468*t3864;
  t15275 = -1.*t1580*t15139;
  t15285 = t15244 + t15275;
  t15648 = t2007*t8471;
  t15745 = t8468*t3864*t4564;
  t15828 = t15648 + t15745;
  t15843 = t2927*t8475;
  t15847 = t2036*t15828;
  t15851 = t15843 + t15847;
  t15881 = -1.*t8468*t2007*t3864;
  t15882 = t8471*t4564;
  t15883 = t15881 + t15882;
  t15886 = -1.*t2927*t15883;
  t15887 = t15886 + t15847;
  t15855 = -1.*t2927*t15828;
  t16062 = t2036*t15883;
  t16063 = t2927*t15828;
  t16066 = t16062 + t16063;
  t16068 = -1.*t5814*t16066;
  t16069 = t8515 + t16068;
  t16071 = t5814*t8468*t78;
  t16072 = -1.*t1580*t16066;
  t16073 = t16071 + t16072;
  t16081 = t8468*t78*t1580;
  t16082 = t5814*t16066;
  t16083 = t16081 + t16082;
  p_output1[0]=1.;
  p_output1[1]=-1.*t2007*t3818*t3864 + t3864*t4560*t4564 + 0.15121*(t2007*t2927*t3864 + t2036*t3864*t4564) - 0.28121*t5950*t7362 - 0.50321*t7390*t7682 + 0.28121*t1580*t78 - 0.50321*t7916*t8023 - 0.19821*(t7384*t7682 - 1.*t7916*t8023);
  p_output1[2]=-1.*t2007*t4560*t78 - 1.*t3818*t4564*t78 + t8215 + t8232 + t8238 + t8293 + t8350;
  p_output1[3]=t8215 + t8232 + t8238 + t8293 + t8350 + t2007*t78*t8365 - 1.*t4564*t78*t8378;
  p_output1[4]=0.28121*t3864*t5814 - 0.28121*t1580*t8397 - 0.50321*t7916*t8403 - 0.50321*t7390*t8413 - 0.19821*(-1.*t7916*t8403 + t7384*t8413);
  p_output1[5]=-0.50321*t7384*t8413 - 0.50321*t7916*t8457 - 0.19821*(-1.*t7384*t8413 - 1.*t7916*t8457);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-0.28121*t1580*t78*t8468 + t3818*t8475 + t4560*t8486 + 0.15121*(-1.*t2927*t8475 + t2036*t8486) - 0.28121*t5950*t8513 - 0.50321*t7390*t8525 - 0.50321*t7916*t8534 - 0.19821*(t7384*t8525 - 1.*t7916*t8534);
  p_output1[9]=0.28121*t1580*t3864*t8471 + t2007*t3818*t78*t8471 - 1.*t4560*t4564*t78*t8471 + 0.15121*(-1.*t2007*t2927*t78*t8471 - 1.*t2036*t4564*t78*t8471) - 0.28121*t5950*t8626 - 0.50321*t7390*t8646 - 0.50321*t7916*t8696 - 0.19821*(t7384*t8646 - 1.*t7916*t8696);
  p_output1[10]=t4560*t8993 + t3818*t9189 - 0.28121*t5950*t9409 - 0.50321*t5814*t7390*t9409 + 0.50321*t1580*t7916*t9409 - 0.19821*(t5814*t7384*t9409 + t1580*t7916*t9409) + 0.15121*(t2036*t8993 + t9721);
  p_output1[11]=-0.28121*t11259*t5950 - 0.50321*t11259*t5814*t7390 + 0.50321*t11259*t1580*t7916 - 0.19821*(t11259*t5814*t7384 + t11259*t1580*t7916) + t10541*t8365 + t8378*t9189 + 0.15121*(-1.*t10541*t2036 + t9721);
  p_output1[12]=-0.28121*t14133*t1580 - 0.50321*t14158*t7390 - 0.50321*t14145*t7916 - 0.19821*(t14158*t7384 - 1.*t14145*t7916) - 0.28121*t5814*t78*t8471;
  p_output1[13]=-0.50321*t14158*t7384 - 0.50321*t14210*t7916 - 0.19821*(-1.*t14158*t7384 - 1.*t14210*t7916);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=0.15121*t11259 + t10541*t3818 - 0.28121*t14133*t5950 - 0.50321*t14210*t7390 - 0.50321*t14158*t7916 - 0.19821*(t14210*t7384 - 1.*t14158*t7916) - 0.28121*t1580*t78*t8471 + t4560*t9189;
  p_output1[17]=-0.28121*t15139*t5950 - 0.50321*t15222*t7390 - 0.50321*t15285*t7916 - 0.19821*(t15222*t7384 - 1.*t15285*t7916) - 0.28121*t1580*t3864*t8468 - 1.*t2007*t3818*t78*t8468 + t4560*t4564*t78*t8468 + 0.15121*(t2007*t2927*t78*t8468 + t2036*t4564*t78*t8468);
  p_output1[18]=t15828*t3818 - 0.28121*t15851*t5950 - 0.50321*t15851*t5814*t7390 + 0.50321*t1580*t15851*t7916 - 0.19821*(t15851*t5814*t7384 + t1580*t15851*t7916) + t4560*t8475 + 0.15121*(t15855 + t8509);
  p_output1[19]=0.15121*(t15855 - 1.*t15883*t2036) - 0.28121*t15887*t5950 - 0.50321*t15887*t5814*t7390 + 0.50321*t1580*t15887*t7916 - 0.19821*(t15887*t5814*t7384 + t1580*t15887*t7916) + t15883*t8365 + t15828*t8378;
  p_output1[20]=-0.28121*t1580*t16066 - 0.50321*t16073*t7390 - 0.50321*t16069*t7916 - 0.19821*(t16073*t7384 - 1.*t16069*t7916) + 0.28121*t5814*t78*t8468;
  p_output1[21]=-0.50321*t16073*t7384 - 0.50321*t16083*t7916 - 0.19821*(-1.*t16073*t7384 - 1.*t16083*t7916);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
