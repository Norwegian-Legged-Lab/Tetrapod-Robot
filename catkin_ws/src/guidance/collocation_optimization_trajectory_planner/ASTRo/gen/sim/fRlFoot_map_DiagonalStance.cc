/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:57 GMT+02:00
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
  double t3850;
  double t72;
  double t1638;
  double t4620;
  double t6774;
  double t6933;
  double t6954;
  double t6715;
  double t6960;
  double t5914;
  double t7003;
  double t5912;
  double t1980;
  double t5786;
  double t5857;
  double t5866;
  double t6957;
  double t7024;
  double t7036;
  double t7158;
  double t7135;
  double t7138;
  double t7146;
  double t7129;
  double t7168;
  double t7172;
  double t7190;
  double t7435;
  double t7472;
  double t7529;
  double t7574;
  double t7761;
  double t7792;
  double t7942;
  double t7959;
  double t7963;
  double t7967;
  double t7970;
  double t8040;
  double t8045;
  double t8114;
  double t8115;
  double t8120;
  double t7482;
  double t7516;
  double t7527;
  double t8046;
  double t8082;
  double t8165;
  double t8166;
  double t8174;
  double t8175;
  double t8182;
  double t8185;
  double t8198;
  double t8206;
  double t8279;
  double t8303;
  double t8092;
  double t8134;
  double t8143;
  double t7327;
  double t7339;
  double t7352;
  double t7357;
  double t7360;
  double t7361;
  double t7368;
  double t7405;
  double t7406;
  double t8200;
  double t8305;
  double t8316;
  double t8364;
  double t8367;
  double t8392;
  double t8422;
  double t8426;
  double t8430;
  double t7421;
  double t7423;
  double t7426;
  double t8162;
  double t8432;
  double t5902;
  double t7083;
  double t7123;
  double t8455;
  double t8459;
  double t8462;
  double t8925;
  double t8969;
  double t8995;
  double t9015;
  double t9308;
  double t9330;
  t3850 = Cos(var1[10]);
  t72 = Cos(var1[11]);
  t1638 = Sin(var1[10]);
  t4620 = Sin(var1[11]);
  t6774 = -1.*t3850*t72;
  t6933 = -1.*t1638*t4620;
  t6954 = t6774 + t6933;
  t6715 = Cos(var1[5]);
  t6960 = Sin(var1[9]);
  t5914 = Cos(var1[9]);
  t7003 = Sin(var1[5]);
  t5912 = Cos(var1[4]);
  t1980 = -1.*t72*t1638;
  t5786 = t3850*t4620;
  t5857 = t1980 + t5786;
  t5866 = Sin(var1[4]);
  t6957 = t5914*t6715*t6954;
  t7024 = -1.*t6960*t6954*t7003;
  t7036 = t6957 + t7024;
  t7158 = Sin(var1[3]);
  t7135 = t6715*t6960*t6954;
  t7138 = t5914*t6954*t7003;
  t7146 = t7135 + t7138;
  t7129 = Cos(var1[3]);
  t7168 = t5912*t5857;
  t7172 = -1.*t5866*t7036;
  t7190 = t7168 + t7172;
  t7435 = -1.*t5914;
  t7472 = 1. + t7435;
  t7529 = -1.*t3850;
  t7574 = 1. + t7529;
  t7761 = -0.28121*t7574;
  t7792 = -1.*t72;
  t7942 = 1. + t7792;
  t7959 = -0.50321*t7942;
  t7963 = -0.19821*t72;
  t7967 = t7959 + t7963;
  t7970 = t3850*t7967;
  t8040 = 0.305*t1638*t4620;
  t8045 = t7761 + t7970 + t8040;
  t8114 = -0.15121*t7472;
  t8115 = t5914*t8045;
  t8120 = t8114 + t8115;
  t7482 = 0.15121*t7472;
  t7516 = 0.15121*t5914;
  t7527 = 0.15121*t6960;
  t8046 = t6960*t8045;
  t8082 = t7482 + t7516 + t7527 + t8046;
  t8165 = t6715*t6960;
  t8166 = t5914*t7003;
  t8174 = t8165 + t8166;
  t8175 = 0.28121*t1638;
  t8182 = t7967*t1638;
  t8185 = -0.305*t3850*t4620;
  t8198 = t8175 + t8182 + t8185;
  t8206 = t6715*t8120;
  t8279 = -1.*t8082*t7003;
  t8303 = t8206 + t8279;
  t8092 = t6715*t8082;
  t8134 = t8120*t7003;
  t8143 = t8092 + t8134;
  t7327 = t3850*t72;
  t7339 = t1638*t4620;
  t7352 = t7327 + t7339;
  t7357 = t7352*t5866;
  t7360 = t5914*t6715*t5857;
  t7361 = -1.*t6960*t5857*t7003;
  t7368 = t7360 + t7361;
  t7405 = t5912*t7368;
  t7406 = t7357 + t7405;
  t8200 = t8198*t5866;
  t8305 = t5912*t8303;
  t8316 = t8200 + t8305;
  t8364 = t5912*t8198;
  t8367 = -1.*t5866*t8303;
  t8392 = t8364 + t8367;
  t8422 = t6715*t6960*t5857;
  t8426 = t5914*t5857*t7003;
  t8430 = t8422 + t8426;
  t7421 = -1.*t5914*t6715;
  t7423 = t6960*t7003;
  t7426 = t7421 + t7423;
  t8162 = -1.*t7426*t8143;
  t8432 = t8430*t8143;
  t5902 = t5857*t5866;
  t7083 = t5912*t7036;
  t7123 = t5902 + t7083;
  t8455 = t5912*t7352;
  t8459 = -1.*t5866*t7368;
  t8462 = t8455 + t8459;
  t8925 = -1.*t8430*t8143;
  t8969 = t7146*t8143;
  t8995 = -1.*t8198*t7352;
  t9015 = t8198*t5857;
  t9308 = t7426*t8143;
  t9330 = -1.*t7146*t8143;
  p_output1[0]=t7123;
  p_output1[1]=t7129*t7146 - 1.*t7158*t7190;
  p_output1[2]=t7146*t7158 + t7129*t7190;
  p_output1[3]=t7406*(t8162 - 1.*t5912*t8174*t8316 + t5866*t8174*t8392) + t5912*t8174*(t7406*t8316 + t8432 + t8392*t8462);
  p_output1[4]=(t8162 - 1.*t8174*t8303)*t8430 + t7426*(t7352*t8198 + t7368*t8303 + t8432);
  p_output1[5]=t7352*(t5914*t8082 - 1.*t6960*t8120);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t6954 + 0.15121*t7352;
  p_output1[10]=0.28121*t4620 - 0.305*t4620*t72 + t4620*t7967;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5912*t8174;
  p_output1[19]=t7129*t7426 + t5866*t7158*t8174;
  p_output1[20]=t7158*t7426 - 1.*t5866*t7129*t8174;
  p_output1[21]=t7123*(-1.*t7406*t8316 - 1.*t8392*t8462 + t8925) + t7406*(t7123*t8316 + t7190*t8392 + t8969);
  p_output1[22]=t7146*(-1.*t7368*t8303 + t8925 + t8995) + t8430*(t7036*t8303 + t8969 + t9015);
  p_output1[23]=t5857*(-1.*t5857*t6960*t8082 - 1.*t5857*t5914*t8120 + t8995) + t7352*(t6954*t6960*t8082 + t5914*t6954*t8120 + t9015);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t5857*(-1.*t5857*t8045 + t8995) + t7352*(t6954*t8045 + t9015);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t7406;
  p_output1[37]=t7129*t8430 - 1.*t7158*t8462;
  p_output1[38]=t7158*t8430 + t7129*t8462;
  p_output1[39]=t7123*(t5912*t8174*t8316 - 1.*t5866*t8174*t8392 + t9308) + t5912*t8174*(-1.*t7123*t8316 - 1.*t7190*t8392 + t9330);
  p_output1[40]=t7146*(t8174*t8303 + t9308) + t7426*(-1.*t5857*t8198 - 1.*t7036*t8303 + t9330);
  p_output1[41]=t5857*(-1.*t5914*t8082 + t6960*t8120);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.305*Power(t4620,2) + 0.28121*t72 + t72*t7967;
  p_output1[47]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
