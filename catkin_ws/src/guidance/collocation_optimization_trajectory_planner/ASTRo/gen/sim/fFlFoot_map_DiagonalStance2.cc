/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:02 GMT+02:00
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
  double t52910;
  double t46166;
  double t51659;
  double t52911;
  double t52957;
  double t52964;
  double t53006;
  double t52953;
  double t53033;
  double t52950;
  double t53058;
  double t52934;
  double t52902;
  double t52919;
  double t52920;
  double t18235;
  double t53007;
  double t53063;
  double t53065;
  double t53082;
  double t53069;
  double t53079;
  double t53080;
  double t53068;
  double t53083;
  double t53084;
  double t53092;
  double t53114;
  double t53115;
  double t53116;
  double t53134;
  double t53136;
  double t53137;
  double t53138;
  double t53140;
  double t53141;
  double t53142;
  double t53147;
  double t53148;
  double t53149;
  double t53150;
  double t53178;
  double t53187;
  double t53188;
  double t53189;
  double t53197;
  double t53203;
  double t53204;
  double t53207;
  double t53209;
  double t53216;
  double t53219;
  double t53231;
  double t53233;
  double t53237;
  double t53238;
  double t53262;
  double t53271;
  double t53279;
  double t53285;
  double t53198;
  double t53212;
  double t53214;
  double t53103;
  double t53117;
  double t53118;
  double t53119;
  double t53120;
  double t53121;
  double t53270;
  double t53286;
  double t53292;
  double t53294;
  double t53295;
  double t53298;
  double t53305;
  double t53306;
  double t53309;
  double t53122;
  double t53123;
  double t53124;
  double t53215;
  double t53310;
  double t52927;
  double t53066;
  double t53067;
  double t53328;
  double t53332;
  double t53333;
  double t53393;
  double t53398;
  double t53404;
  double t53408;
  double t53439;
  double t53444;
  t52910 = Cos(var1[7]);
  t46166 = Cos(var1[8]);
  t51659 = Sin(var1[7]);
  t52911 = Sin(var1[8]);
  t52957 = t52910*t46166;
  t52964 = t51659*t52911;
  t53006 = t52957 + t52964;
  t52953 = Cos(var1[6]);
  t53033 = Sin(var1[5]);
  t52950 = Cos(var1[5]);
  t53058 = Sin(var1[6]);
  t52934 = Cos(var1[4]);
  t52902 = -1.*t46166*t51659;
  t52919 = t52910*t52911;
  t52920 = t52902 + t52919;
  t18235 = Sin(var1[4]);
  t53007 = t52950*t52953*t53006;
  t53063 = -1.*t53033*t53058*t53006;
  t53065 = t53007 + t53063;
  t53082 = Sin(var1[3]);
  t53069 = t52953*t53033*t53006;
  t53079 = t52950*t53058*t53006;
  t53080 = t53069 + t53079;
  t53068 = Cos(var1[3]);
  t53083 = t52934*t52920;
  t53084 = -1.*t18235*t53065;
  t53092 = t53083 + t53084;
  t53114 = t46166*t51659;
  t53115 = -1.*t52910*t52911;
  t53116 = t53114 + t53115;
  t53134 = -1.*t52953;
  t53136 = 1. + t53134;
  t53137 = 0.15121*t53136;
  t53138 = -1.*t52910;
  t53140 = 1. + t53138;
  t53141 = 0.28121*t53140;
  t53142 = -1.*t46166;
  t53147 = 1. + t53142;
  t53148 = 0.50321*t53147;
  t53149 = 0.23321*t46166;
  t53150 = t53148 + t53149;
  t53178 = t52910*t53150;
  t53187 = -0.27*t51659*t52911;
  t53188 = t53141 + t53178 + t53187;
  t53189 = t52953*t53188;
  t53197 = t53137 + t53189;
  t53203 = 0.15121*t52953;
  t53204 = -0.15121*t53058;
  t53207 = t53058*t53188;
  t53209 = t53137 + t53203 + t53204 + t53207;
  t53216 = -1.*t52953*t53033;
  t53219 = -1.*t52950*t53058;
  t53231 = t53216 + t53219;
  t53233 = 0.28121*t51659;
  t53237 = -1.*t53150*t51659;
  t53238 = -0.27*t52910*t52911;
  t53262 = t53233 + t53237 + t53238;
  t53271 = t52950*t53197;
  t53279 = -1.*t53033*t53209;
  t53285 = t53271 + t53279;
  t53198 = t53033*t53197;
  t53212 = t52950*t53209;
  t53214 = t53198 + t53212;
  t53103 = t18235*t53006;
  t53117 = t52950*t52953*t53116;
  t53118 = -1.*t53033*t53058*t53116;
  t53119 = t53117 + t53118;
  t53120 = t52934*t53119;
  t53121 = t53103 + t53120;
  t53270 = t18235*t53262;
  t53286 = t52934*t53285;
  t53292 = t53270 + t53286;
  t53294 = t52934*t53262;
  t53295 = -1.*t18235*t53285;
  t53298 = t53294 + t53295;
  t53305 = t52953*t53033*t53116;
  t53306 = t52950*t53058*t53116;
  t53309 = t53305 + t53306;
  t53122 = t52950*t52953;
  t53123 = -1.*t53033*t53058;
  t53124 = t53122 + t53123;
  t53215 = -1.*t53124*t53214;
  t53310 = t53309*t53214;
  t52927 = t18235*t52920;
  t53066 = t52934*t53065;
  t53067 = t52927 + t53066;
  t53328 = t52934*t53006;
  t53332 = -1.*t18235*t53119;
  t53333 = t53328 + t53332;
  t53393 = -1.*t53309*t53214;
  t53398 = t53080*t53214;
  t53404 = -1.*t53262*t53006;
  t53408 = t53262*t52920;
  t53439 = t53124*t53214;
  t53444 = -1.*t53080*t53214;
  p_output1[0]=t53067;
  p_output1[1]=t53068*t53080 - 1.*t53082*t53092;
  p_output1[2]=t53080*t53082 + t53068*t53092;
  p_output1[3]=t53121*(t53215 - 1.*t52934*t53231*t53292 + t18235*t53231*t53298) + t52934*t53231*(t53121*t53292 + t53310 + t53298*t53333);
  p_output1[4]=(t53215 - 1.*t53231*t53285)*t53309 + t53124*(t53006*t53262 + t53119*t53285 + t53310);
  p_output1[5]=t53006*(t53058*t53197 - 1.*t52953*t53209);
  p_output1[6]=0;
  p_output1[7]=0.28121*t52911 - 0.27*t46166*t52911 - 1.*t52911*t53150;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t52934*t53231;
  p_output1[19]=t53068*t53124 + t18235*t53082*t53231;
  p_output1[20]=t53082*t53124 - 1.*t18235*t53068*t53231;
  p_output1[21]=t53067*(-1.*t53121*t53292 - 1.*t53298*t53333 + t53393) + t53121*(t53067*t53292 + t53092*t53298 + t53398);
  p_output1[22]=t53080*(-1.*t53119*t53285 + t53393 + t53404) + t53309*(t53065*t53285 + t53398 + t53408);
  p_output1[23]=t52920*(-1.*t52953*t53116*t53197 - 1.*t53058*t53116*t53209 + t53404) + t53006*(t52953*t53006*t53197 + t53006*t53058*t53209 + t53408);
  p_output1[24]=-0.15121 + t52920*(-1.*t53116*t53188 + t53404) + t53006*(t53006*t53188 + t53408);
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
  p_output1[36]=t53121;
  p_output1[37]=t53068*t53309 - 1.*t53082*t53333;
  p_output1[38]=t53082*t53309 + t53068*t53333;
  p_output1[39]=t53067*(t52934*t53231*t53292 - 1.*t18235*t53231*t53298 + t53439) + t52934*t53231*(-1.*t53067*t53292 - 1.*t53092*t53298 + t53444);
  p_output1[40]=t53080*(t53231*t53285 + t53439) + t53124*(-1.*t52920*t53262 - 1.*t53065*t53285 + t53444);
  p_output1[41]=t52920*(-1.*t53058*t53197 + t52953*t53209);
  p_output1[42]=0.15121*t52920 + 0.15121*t53116;
  p_output1[43]=0.28121*t46166 + 0.27*Power(t52911,2) - 1.*t46166*t53150;
  p_output1[44]=-0.27;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
