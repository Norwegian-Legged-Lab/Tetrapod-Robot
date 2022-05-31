/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:05:00 GMT+02:00
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
  double t33019;
  double t1136;
  double t1183;
  double t54405;
  double t57086;
  double t57088;
  double t57090;
  double t57077;
  double t57101;
  double t57071;
  double t57102;
  double t57069;
  double t29799;
  double t57055;
  double t57056;
  double t57059;
  double t57095;
  double t57103;
  double t57104;
  double t57112;
  double t57108;
  double t57109;
  double t57110;
  double t57107;
  double t57113;
  double t57114;
  double t57116;
  double t57177;
  double t57178;
  double t57179;
  double t57193;
  double t57194;
  double t57199;
  double t57200;
  double t57201;
  double t57202;
  double t57204;
  double t57205;
  double t57206;
  double t57207;
  double t57208;
  double t57209;
  double t57211;
  double t57215;
  double t57216;
  double t57217;
  double t57195;
  double t57196;
  double t57197;
  double t57212;
  double t57213;
  double t57221;
  double t57222;
  double t57223;
  double t57224;
  double t57225;
  double t57226;
  double t57228;
  double t57230;
  double t57232;
  double t57233;
  double t57214;
  double t57218;
  double t57219;
  double t57175;
  double t57180;
  double t57181;
  double t57182;
  double t57185;
  double t57187;
  double t57229;
  double t57235;
  double t57237;
  double t57239;
  double t57242;
  double t57243;
  double t57248;
  double t57249;
  double t57250;
  double t57188;
  double t57189;
  double t57192;
  double t57220;
  double t57251;
  double t57068;
  double t57105;
  double t57106;
  double t57256;
  double t57257;
  double t57258;
  double t57291;
  double t57298;
  double t57304;
  double t57309;
  double t57338;
  double t57346;
  t33019 = Cos(var1[13]);
  t1136 = Cos(var1[14]);
  t1183 = Sin(var1[13]);
  t54405 = Sin(var1[14]);
  t57086 = t33019*t1136;
  t57088 = t1183*t54405;
  t57090 = t57086 + t57088;
  t57077 = Cos(var1[5]);
  t57101 = Sin(var1[12]);
  t57071 = Cos(var1[12]);
  t57102 = Sin(var1[5]);
  t57069 = Cos(var1[4]);
  t29799 = -1.*t1136*t1183;
  t57055 = t33019*t54405;
  t57056 = t29799 + t57055;
  t57059 = Sin(var1[4]);
  t57095 = t57071*t57077*t57090;
  t57103 = -1.*t57101*t57090*t57102;
  t57104 = t57095 + t57103;
  t57112 = Sin(var1[3]);
  t57108 = t57077*t57101*t57090;
  t57109 = t57071*t57090*t57102;
  t57110 = t57108 + t57109;
  t57107 = Cos(var1[3]);
  t57113 = t57069*t57056;
  t57114 = -1.*t57059*t57104;
  t57116 = t57113 + t57114;
  t57177 = t1136*t1183;
  t57178 = -1.*t33019*t54405;
  t57179 = t57177 + t57178;
  t57193 = -1.*t57071;
  t57194 = 1. + t57193;
  t57199 = -1.*t33019;
  t57200 = 1. + t57199;
  t57201 = 0.28121*t57200;
  t57202 = -1.*t1136;
  t57204 = 1. + t57202;
  t57205 = 0.50321*t57204;
  t57206 = 0.19821*t1136;
  t57207 = t57205 + t57206;
  t57208 = t33019*t57207;
  t57209 = -0.305*t1183*t54405;
  t57211 = t57201 + t57208 + t57209;
  t57215 = 0.15121*t57194;
  t57216 = t57071*t57211;
  t57217 = t57215 + t57216;
  t57195 = -0.15121*t57194;
  t57196 = -0.15121*t57071;
  t57197 = -0.15121*t57101;
  t57212 = t57101*t57211;
  t57213 = t57195 + t57196 + t57197 + t57212;
  t57221 = -1.*t57077*t57101;
  t57222 = -1.*t57071*t57102;
  t57223 = t57221 + t57222;
  t57224 = 0.28121*t1183;
  t57225 = -1.*t57207*t1183;
  t57226 = -0.305*t33019*t54405;
  t57228 = t57224 + t57225 + t57226;
  t57230 = t57077*t57217;
  t57232 = -1.*t57213*t57102;
  t57233 = t57230 + t57232;
  t57214 = t57077*t57213;
  t57218 = t57217*t57102;
  t57219 = t57214 + t57218;
  t57175 = t57090*t57059;
  t57180 = t57071*t57077*t57179;
  t57181 = -1.*t57101*t57179*t57102;
  t57182 = t57180 + t57181;
  t57185 = t57069*t57182;
  t57187 = t57175 + t57185;
  t57229 = t57228*t57059;
  t57235 = t57069*t57233;
  t57237 = t57229 + t57235;
  t57239 = t57069*t57228;
  t57242 = -1.*t57059*t57233;
  t57243 = t57239 + t57242;
  t57248 = t57077*t57101*t57179;
  t57249 = t57071*t57179*t57102;
  t57250 = t57248 + t57249;
  t57188 = t57071*t57077;
  t57189 = -1.*t57101*t57102;
  t57192 = t57188 + t57189;
  t57220 = -1.*t57192*t57219;
  t57251 = t57250*t57219;
  t57068 = t57056*t57059;
  t57105 = t57069*t57104;
  t57106 = t57068 + t57105;
  t57256 = t57069*t57090;
  t57257 = -1.*t57059*t57182;
  t57258 = t57256 + t57257;
  t57291 = -1.*t57250*t57219;
  t57298 = t57110*t57219;
  t57304 = -1.*t57228*t57090;
  t57309 = t57228*t57056;
  t57338 = t57192*t57219;
  t57346 = -1.*t57110*t57219;
  p_output1[0]=t57106;
  p_output1[1]=t57107*t57110 - 1.*t57112*t57116;
  p_output1[2]=t57110*t57112 + t57107*t57116;
  p_output1[3]=t57187*(t57220 - 1.*t57069*t57223*t57237 + t57059*t57223*t57243) + t57069*t57223*(t57187*t57237 + t57251 + t57243*t57258);
  p_output1[4]=(t57220 - 1.*t57223*t57233)*t57250 + t57192*(t57090*t57228 + t57182*t57233 + t57251);
  p_output1[5]=t57090*(-1.*t57071*t57213 + t57101*t57217);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t54405 - 0.305*t1136*t54405 - 1.*t54405*t57207;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t57069*t57223;
  p_output1[19]=t57107*t57192 + t57059*t57112*t57223;
  p_output1[20]=t57112*t57192 - 1.*t57059*t57107*t57223;
  p_output1[21]=t57106*(-1.*t57187*t57237 - 1.*t57243*t57258 + t57291) + t57187*(t57106*t57237 + t57116*t57243 + t57298);
  p_output1[22]=t57110*(-1.*t57182*t57233 + t57291 + t57304) + t57250*(t57104*t57233 + t57298 + t57309);
  p_output1[23]=t57056*(-1.*t57101*t57179*t57213 - 1.*t57071*t57179*t57217 + t57304) + t57090*(t57090*t57101*t57213 + t57071*t57090*t57217 + t57309);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t57056*(-1.*t57179*t57211 + t57304) + t57090*(t57090*t57211 + t57309);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t57187;
  p_output1[37]=t57107*t57250 - 1.*t57112*t57258;
  p_output1[38]=t57112*t57250 + t57107*t57258;
  p_output1[39]=t57106*(t57069*t57223*t57237 - 1.*t57059*t57223*t57243 + t57338) + t57069*t57223*(-1.*t57106*t57237 - 1.*t57116*t57243 + t57346);
  p_output1[40]=t57110*(t57223*t57233 + t57338) + t57192*(-1.*t57056*t57228 - 1.*t57104*t57233 + t57346);
  p_output1[41]=t57056*(t57071*t57213 - 1.*t57101*t57217);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t57056 - 0.15121*t57179;
  p_output1[49]=0.28121*t1136 + 0.305*Power(t54405,2) - 1.*t1136*t57207;
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
