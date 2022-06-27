/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:43 GMT+02:00
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
  double t21932;
  double t7043;
  double t21763;
  double t21939;
  double t21863;
  double t21940;
  double t21945;
  double t22074;
  double t21960;
  double t2281;
  double t21992;
  double t22075;
  double t22069;
  double t22070;
  double t22071;
  double t22065;
  double t22073;
  double t22076;
  double t22079;
  double t22128;
  double t22134;
  double t22103;
  double t22105;
  double t22106;
  double t22112;
  double t22119;
  double t22124;
  double t22129;
  double t22131;
  double t22132;
  double t22135;
  double t22137;
  double t22138;
  double t22162;
  double t22163;
  double t22164;
  double t22186;
  double t22191;
  double t22194;
  double t22196;
  double t22197;
  double t22205;
  double t22102;
  double t22125;
  double t22127;
  double t22232;
  double t22233;
  double t22235;
  double t22238;
  double t22239;
  double t22240;
  double t22243;
  double t22244;
  double t22245;
  double t22086;
  double t22096;
  double t22101;
  double t22231;
  double t22237;
  double t22246;
  double t22247;
  double t22253;
  double t22254;
  double t22255;
  double t22256;
  double t22257;
  double t22258;
  double t22223;
  double t22224;
  double t22225;
  double t22227;
  double t22250;
  double t22251;
  double t22264;
  double t22266;
  double t22267;
  double t22269;
  double t22270;
  double t22271;
  double t22252;
  double t22259;
  double t22261;
  double t22268;
  double t22272;
  double t22273;
  double t22275;
  double t22276;
  double t22277;
  double t21967;
  double t22080;
  double t22084;
  double t22262;
  double t22281;
  double t22287;
  double t22293;
  double t22299;
  double t22304;
  double t22312;
  double t22316;
  double t22325;
  double t22321;
  double t22333;
  double t22337;
  double t22373;
  double t22368;
  t21932 = Cos(var1[13]);
  t7043 = Cos(var1[14]);
  t21763 = Sin(var1[13]);
  t21939 = Sin(var1[14]);
  t21863 = t7043*t21763;
  t21940 = -1.*t21932*t21939;
  t21945 = t21863 + t21940;
  t22074 = Sin(var1[12]);
  t21960 = Sin(var1[4]);
  t2281 = Cos(var1[12]);
  t21992 = Cos(var1[4]);
  t22075 = Sin(var1[5]);
  t22069 = t21932*t7043;
  t22070 = t21763*t21939;
  t22071 = t22069 + t22070;
  t22065 = Cos(var1[5]);
  t22073 = t22065*t22071;
  t22076 = t22074*t21945*t22075;
  t22079 = t22073 + t22076;
  t22128 = Cos(var1[3]);
  t22134 = Sin(var1[3]);
  t22103 = -1.*t7043*t21763;
  t22105 = t21932*t21939;
  t22106 = t22103 + t22105;
  t22112 = t22065*t22106;
  t22119 = t22074*t22071*t22075;
  t22124 = t22112 + t22119;
  t22129 = -1.*t22065*t22074*t21945;
  t22131 = t22071*t22075;
  t22132 = t22129 + t22131;
  t22135 = t2281*t21992*t21945;
  t22137 = -1.*t21960*t22079;
  t22138 = t22135 + t22137;
  t22162 = t21992*t22074;
  t22163 = t2281*t21960*t22075;
  t22164 = t22162 + t22163;
  t22186 = -1.*t22065*t22074*t22071;
  t22191 = t22106*t22075;
  t22194 = t22186 + t22191;
  t22196 = t2281*t21992*t22071;
  t22197 = -1.*t21960*t22124;
  t22205 = t22196 + t22197;
  t22102 = t2281*t22071*t21960;
  t22125 = t21992*t22124;
  t22127 = t22102 + t22125;
  t22232 = -0.0641*t7043;
  t22233 = -0.28*t21939;
  t22235 = t22232 + t22233;
  t22238 = -1.*t7043;
  t22239 = 1. + t22238;
  t22240 = 0.075*t22239;
  t22243 = 0.355*t7043;
  t22244 = -0.0641*t21939;
  t22245 = t22240 + t22243 + t22244;
  t22086 = t22074*t21960;
  t22096 = -1.*t2281*t21992*t22075;
  t22101 = t22086 + t22096;
  t22231 = -0.325*t21763;
  t22237 = t21932*t22235;
  t22246 = t21763*t22245;
  t22247 = t22231 + t22237 + t22246;
  t22253 = -1.*t21932;
  t22254 = 1. + t22253;
  t22255 = 0.325*t22254;
  t22256 = -1.*t21763*t22235;
  t22257 = t21932*t22245;
  t22258 = t22255 + t22256 + t22257;
  t22223 = -1.*t2281;
  t22224 = 1. + t22223;
  t22225 = -0.1575*t22224;
  t22227 = -0.2255*t2281;
  t22250 = -1.*t22074*t22247;
  t22251 = t22225 + t22227 + t22250;
  t22264 = -0.068*t22074;
  t22266 = t2281*t22247;
  t22267 = t22264 + t22266;
  t22269 = t22065*t22258;
  t22270 = -1.*t22251*t22075;
  t22271 = t22269 + t22270;
  t22252 = t22065*t22251;
  t22259 = t22258*t22075;
  t22261 = t22252 + t22259;
  t22268 = t22267*t21960;
  t22272 = t21992*t22271;
  t22273 = t22268 + t22272;
  t22275 = t21992*t22267;
  t22276 = -1.*t21960*t22271;
  t22277 = t22275 + t22276;
  t21967 = t2281*t21945*t21960;
  t22080 = t21992*t22079;
  t22084 = t21967 + t22080;
  t22262 = -1.*t2281*t22065*t22261;
  t22281 = t22261*t22194;
  t22287 = t22261*t22132;
  t22293 = -1.*t22261*t22194;
  t22299 = t2281*t22065*t22261;
  t22304 = -1.*t22261*t22132;
  t22312 = -1.*t22074*t22267;
  t22316 = t2281*t22267*t22071;
  t22325 = -1.*t2281*t22267*t22071;
  t22321 = t2281*t22267*t21945;
  t22333 = t22074*t22267;
  t22337 = -1.*t2281*t22267*t21945;
  t22373 = t22258*t22071;
  t22368 = -1.*t22258*t22106;
  p_output1[0]=t22084;
  p_output1[1]=t22101;
  p_output1[2]=t22127;
  p_output1[3]=t22128*t22132 - 1.*t22134*t22138;
  p_output1[4]=-1.*t22134*t22164 + t22065*t22128*t2281;
  p_output1[5]=t22128*t22194 - 1.*t22134*t22205;
  p_output1[6]=t22132*t22134 + t22128*t22138;
  p_output1[7]=t22128*t22164 + t22065*t22134*t2281;
  p_output1[8]=t22134*t22194 + t22128*t22205;
  p_output1[9]=t22127*(t22262 - 1.*t22101*t22273 - 1.*t22164*t22277) + t22101*(t22127*t22273 + t22205*t22277 + t22281);
  p_output1[10]=t22127*(t22084*t22273 + t22138*t22277 + t22287) + t22084*(-1.*t22127*t22273 - 1.*t22205*t22277 + t22293);
  p_output1[11]=t22084*(t22101*t22273 + t22164*t22277 + t22299) + t22101*(-1.*t22084*t22273 - 1.*t22138*t22277 + t22304);
  p_output1[12]=t22065*(t22124*t22271 + t22281 + t22316)*t2281 + t22194*(t22262 + t22312 + t22075*t22271*t2281);
  p_output1[13]=t22194*(t22079*t22271 + t22287 + t22321) + t22132*(-1.*t22124*t22271 + t22293 + t22325);
  p_output1[14]=t22065*(-1.*t22079*t22271 + t22304 + t22337)*t2281 + t22132*(t22299 + t22333 - 1.*t22075*t22271*t2281);
  p_output1[15]=t22074*(-1.*t22071*t22074*t22251 + t22106*t22258 + t22316) + t22071*t2281*(t22312 - 1.*t22251*t2281);
  p_output1[16]=t21945*(t22071*t22074*t22251 + t22325 + t22368)*t2281 + t22071*(-1.*t21945*t22074*t22251 + t22321 + t22373)*t2281;
  p_output1[17]=t22074*(t21945*t22074*t22251 - 1.*t22071*t22258 + t22337) + t21945*t2281*(t22333 + t22251*t2281);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.1575*t21945 + 0.2255*t22106;
  p_output1[37]=t22071*(-1.*t22071*t22247 + t22368) + t22106*(t21945*t22247 + t22373);
  p_output1[38]=-0.068*t22071;
  p_output1[39]=0.325*t21939 - 1.*t21939*t22245 - 1.*t22235*t7043;
  p_output1[40]=0;
  p_output1[41]=-1.*t21939*t22235 - 0.325*t7043 + t22245*t7043;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
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

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
