/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:15 GMT+02:00
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
  double t20027;
  double t20035;
  double t20032;
  double t20149;
  double t20154;
  double t20144;
  double t20158;
  double t20033;
  double t20036;
  double t20162;
  double t20163;
  double t20164;
  double t20126;
  double t20150;
  double t20159;
  double t20160;
  double t20034;
  double t20120;
  double t20124;
  double t20193;
  double t20191;
  double t20165;
  double t20166;
  double t20167;
  double t20174;
  double t20176;
  double t20177;
  double t20181;
  double t20182;
  double t20184;
  double t20195;
  double t20199;
  double t20200;
  double t20205;
  double t20209;
  double t20210;
  double t20215;
  double t20216;
  double t20218;
  double t20223;
  double t20224;
  double t20225;
  double t20227;
  double t20228;
  double t20229;
  double t20161;
  double t20168;
  double t20171;
  double t20252;
  double t20253;
  double t20255;
  double t20256;
  double t20257;
  double t20259;
  double t20261;
  double t20262;
  double t20263;
  double t20264;
  double t20265;
  double t20266;
  double t20267;
  double t20268;
  double t20269;
  double t20270;
  double t20272;
  double t20273;
  double t20274;
  double t20275;
  double t20279;
  double t20280;
  double t20281;
  double t20282;
  double t20284;
  double t20285;
  double t20286;
  double t20271;
  double t20276;
  double t20277;
  double t20283;
  double t20287;
  double t20288;
  double t20290;
  double t20291;
  double t20292;
  double t20180;
  double t20185;
  double t20186;
  double t20278;
  double t20308;
  double t20323;
  double t20334;
  double t20347;
  double t20352;
  double t20381;
  double t20386;
  t20027 = Cos(var1[4]);
  t20035 = Cos(var1[5]);
  t20032 = Cos(var1[6]);
  t20149 = Cos(var1[8]);
  t20154 = Sin(var1[7]);
  t20144 = Cos(var1[7]);
  t20158 = Sin(var1[8]);
  t20033 = Sin(var1[5]);
  t20036 = Sin(var1[6]);
  t20162 = t20149*t20154;
  t20163 = -1.*t20144*t20158;
  t20164 = t20162 + t20163;
  t20126 = Sin(var1[4]);
  t20150 = t20144*t20149;
  t20159 = t20154*t20158;
  t20160 = t20150 + t20159;
  t20034 = -1.*t20032*t20033;
  t20120 = -1.*t20035*t20036;
  t20124 = t20034 + t20120;
  t20193 = Cos(var1[3]);
  t20191 = Sin(var1[3]);
  t20165 = t20035*t20032*t20164;
  t20166 = -1.*t20033*t20036*t20164;
  t20167 = t20165 + t20166;
  t20174 = -1.*t20149*t20154;
  t20176 = t20144*t20158;
  t20177 = t20174 + t20176;
  t20181 = t20035*t20032*t20160;
  t20182 = -1.*t20033*t20036*t20160;
  t20184 = t20181 + t20182;
  t20195 = t20035*t20032;
  t20199 = -1.*t20033*t20036;
  t20200 = t20195 + t20199;
  t20205 = t20032*t20033*t20164;
  t20209 = t20035*t20036*t20164;
  t20210 = t20205 + t20209;
  t20215 = t20027*t20160;
  t20216 = -1.*t20126*t20167;
  t20218 = t20215 + t20216;
  t20223 = t20032*t20033*t20160;
  t20224 = t20035*t20036*t20160;
  t20225 = t20223 + t20224;
  t20227 = t20027*t20177;
  t20228 = -1.*t20126*t20184;
  t20229 = t20227 + t20228;
  t20161 = t20126*t20160;
  t20168 = t20027*t20167;
  t20171 = t20161 + t20168;
  t20252 = -1.*t20032;
  t20253 = 1. + t20252;
  t20255 = 0.15121*t20253;
  t20256 = -1.*t20144;
  t20257 = 1. + t20256;
  t20259 = 0.28121*t20257;
  t20261 = -1.*t20149;
  t20262 = 1. + t20261;
  t20263 = 0.50321*t20262;
  t20264 = 0.19821*t20149;
  t20265 = t20263 + t20264;
  t20266 = t20144*t20265;
  t20267 = -0.305*t20154*t20158;
  t20268 = t20259 + t20266 + t20267;
  t20269 = t20032*t20268;
  t20270 = t20255 + t20269;
  t20272 = 0.15121*t20032;
  t20273 = -0.15121*t20036;
  t20274 = t20036*t20268;
  t20275 = t20255 + t20272 + t20273 + t20274;
  t20279 = 0.28121*t20154;
  t20280 = -1.*t20265*t20154;
  t20281 = -0.305*t20144*t20158;
  t20282 = t20279 + t20280 + t20281;
  t20284 = t20035*t20270;
  t20285 = -1.*t20033*t20275;
  t20286 = t20284 + t20285;
  t20271 = t20033*t20270;
  t20276 = t20035*t20275;
  t20277 = t20271 + t20276;
  t20283 = t20126*t20282;
  t20287 = t20027*t20286;
  t20288 = t20283 + t20287;
  t20290 = t20027*t20282;
  t20291 = -1.*t20126*t20286;
  t20292 = t20290 + t20291;
  t20180 = t20126*t20177;
  t20185 = t20027*t20184;
  t20186 = t20180 + t20185;
  t20278 = -1.*t20200*t20277;
  t20308 = t20210*t20277;
  t20323 = t20200*t20277;
  t20334 = -1.*t20225*t20277;
  t20347 = -1.*t20210*t20277;
  t20352 = t20225*t20277;
  t20381 = -1.*t20282*t20160;
  t20386 = t20282*t20177;
  p_output1[0]=t20186*var2[0] + t20027*t20124*var2[1] + t20171*var2[2];
  p_output1[1]=(t20193*t20225 - 1.*t20191*t20229)*var2[0] + (t20124*t20126*t20191 + t20193*t20200)*var2[1] + (t20193*t20210 - 1.*t20191*t20218)*var2[2];
  p_output1[2]=(t20191*t20225 + t20193*t20229)*var2[0] + (-1.*t20124*t20126*t20193 + t20191*t20200)*var2[1] + (t20191*t20210 + t20193*t20218)*var2[2];
  p_output1[3]=(t20171*(t20278 - 1.*t20027*t20124*t20288 + t20124*t20126*t20292) + t20027*t20124*(t20171*t20288 + t20218*t20292 + t20308))*var2[0] + (t20186*(-1.*t20171*t20288 - 1.*t20218*t20292 + t20347) + t20171*(t20186*t20288 + t20229*t20292 + t20352))*var2[1] + (t20186*(t20027*t20124*t20288 - 1.*t20124*t20126*t20292 + t20323) + t20027*t20124*(-1.*t20186*t20288 - 1.*t20229*t20292 + t20334))*var2[2];
  p_output1[4]=(t20210*(t20278 - 1.*t20124*t20286) + t20200*(t20160*t20282 + t20167*t20286 + t20308))*var2[0] + (t20225*(-1.*t20167*t20286 + t20347 + t20381) + t20210*(t20184*t20286 + t20352 + t20386))*var2[1] + (t20225*(t20124*t20286 + t20323) + t20200*(-1.*t20177*t20282 - 1.*t20184*t20286 + t20334))*var2[2];
  p_output1[5]=t20160*(t20036*t20270 - 1.*t20032*t20275)*var2[0] + (t20177*(-1.*t20032*t20164*t20270 - 1.*t20036*t20164*t20275 + t20381) + t20160*(t20032*t20160*t20270 + t20036*t20160*t20275 + t20386))*var2[1] + t20177*(-1.*t20036*t20270 + t20032*t20275)*var2[2];
  p_output1[6]=(-0.15121 + t20177*(-1.*t20164*t20268 + t20381) + t20160*(t20160*t20268 + t20386))*var2[1] + (0.15121*t20164 + 0.15121*t20177)*var2[2];
  p_output1[7]=(0.28121*t20158 - 0.305*t20149*t20158 - 1.*t20158*t20265)*var2[0] + (0.28121*t20149 + 0.305*Power(t20158,2) - 1.*t20149*t20265)*var2[2];
  p_output1[8]=-0.305*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
