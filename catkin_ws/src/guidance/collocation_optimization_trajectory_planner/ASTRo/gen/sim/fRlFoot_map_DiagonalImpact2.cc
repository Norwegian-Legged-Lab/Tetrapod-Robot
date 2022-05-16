/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:30 GMT+02:00
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
  double t16191;
  double t16158;
  double t16181;
  double t16208;
  double t43727;
  double t43728;
  double t43939;
  double t43235;
  double t45078;
  double t41033;
  double t45131;
  double t27843;
  double t16187;
  double t16276;
  double t18445;
  double t23403;
  double t43942;
  double t50239;
  double t50242;
  double t50788;
  double t50417;
  double t50490;
  double t50662;
  double t50268;
  double t50872;
  double t50955;
  double t50975;
  double t51534;
  double t51540;
  double t51683;
  double t51705;
  double t51802;
  double t52044;
  double t52059;
  double t52081;
  double t52472;
  double t52542;
  double t52544;
  double t54046;
  double t54256;
  double t54282;
  double t54287;
  double t54288;
  double t51542;
  double t51550;
  double t51576;
  double t54269;
  double t54274;
  double t54301;
  double t54305;
  double t54309;
  double t54313;
  double t54314;
  double t54315;
  double t54316;
  double t54318;
  double t54319;
  double t54327;
  double t54275;
  double t54289;
  double t54290;
  double t51064;
  double t51065;
  double t51250;
  double t51258;
  double t51379;
  double t51381;
  double t51388;
  double t51391;
  double t51410;
  double t54317;
  double t54328;
  double t54337;
  double t54339;
  double t54346;
  double t54351;
  double t54356;
  double t54357;
  double t54359;
  double t51423;
  double t51452;
  double t51476;
  double t54291;
  double t54363;
  double t23405;
  double t50245;
  double t50263;
  double t54386;
  double t54393;
  double t54405;
  double t54480;
  double t54488;
  double t54519;
  double t54529;
  double t54570;
  double t54578;
  t16191 = Cos(var1[10]);
  t16158 = Cos(var1[11]);
  t16181 = Sin(var1[10]);
  t16208 = Sin(var1[11]);
  t43727 = -1.*t16191*t16158;
  t43728 = -1.*t16181*t16208;
  t43939 = t43727 + t43728;
  t43235 = Cos(var1[5]);
  t45078 = Sin(var1[9]);
  t41033 = Cos(var1[9]);
  t45131 = Sin(var1[5]);
  t27843 = Cos(var1[4]);
  t16187 = -1.*t16158*t16181;
  t16276 = t16191*t16208;
  t18445 = t16187 + t16276;
  t23403 = Sin(var1[4]);
  t43942 = t41033*t43235*t43939;
  t50239 = -1.*t45078*t43939*t45131;
  t50242 = t43942 + t50239;
  t50788 = Sin(var1[3]);
  t50417 = t43235*t45078*t43939;
  t50490 = t41033*t43939*t45131;
  t50662 = t50417 + t50490;
  t50268 = Cos(var1[3]);
  t50872 = t27843*t18445;
  t50955 = -1.*t23403*t50242;
  t50975 = t50872 + t50955;
  t51534 = -1.*t41033;
  t51540 = 1. + t51534;
  t51683 = -1.*t16191;
  t51705 = 1. + t51683;
  t51802 = -0.28121*t51705;
  t52044 = -1.*t16158;
  t52059 = 1. + t52044;
  t52081 = -0.50321*t52059;
  t52472 = -0.23321*t16158;
  t52542 = t52081 + t52472;
  t52544 = t16191*t52542;
  t54046 = 0.27*t16181*t16208;
  t54256 = t51802 + t52544 + t54046;
  t54282 = -0.15121*t51540;
  t54287 = t41033*t54256;
  t54288 = t54282 + t54287;
  t51542 = 0.15121*t51540;
  t51550 = 0.15121*t41033;
  t51576 = 0.15121*t45078;
  t54269 = t45078*t54256;
  t54274 = t51542 + t51550 + t51576 + t54269;
  t54301 = t43235*t45078;
  t54305 = t41033*t45131;
  t54309 = t54301 + t54305;
  t54313 = 0.28121*t16181;
  t54314 = t52542*t16181;
  t54315 = -0.27*t16191*t16208;
  t54316 = t54313 + t54314 + t54315;
  t54318 = t43235*t54288;
  t54319 = -1.*t54274*t45131;
  t54327 = t54318 + t54319;
  t54275 = t43235*t54274;
  t54289 = t54288*t45131;
  t54290 = t54275 + t54289;
  t51064 = t16191*t16158;
  t51065 = t16181*t16208;
  t51250 = t51064 + t51065;
  t51258 = t51250*t23403;
  t51379 = t41033*t43235*t18445;
  t51381 = -1.*t45078*t18445*t45131;
  t51388 = t51379 + t51381;
  t51391 = t27843*t51388;
  t51410 = t51258 + t51391;
  t54317 = t54316*t23403;
  t54328 = t27843*t54327;
  t54337 = t54317 + t54328;
  t54339 = t27843*t54316;
  t54346 = -1.*t23403*t54327;
  t54351 = t54339 + t54346;
  t54356 = t43235*t45078*t18445;
  t54357 = t41033*t18445*t45131;
  t54359 = t54356 + t54357;
  t51423 = -1.*t41033*t43235;
  t51452 = t45078*t45131;
  t51476 = t51423 + t51452;
  t54291 = -1.*t51476*t54290;
  t54363 = t54359*t54290;
  t23405 = t18445*t23403;
  t50245 = t27843*t50242;
  t50263 = t23405 + t50245;
  t54386 = t27843*t51250;
  t54393 = -1.*t23403*t51388;
  t54405 = t54386 + t54393;
  t54480 = -1.*t54359*t54290;
  t54488 = t50662*t54290;
  t54519 = -1.*t54316*t51250;
  t54529 = t54316*t18445;
  t54570 = t51476*t54290;
  t54578 = -1.*t50662*t54290;
  p_output1[0]=t50263;
  p_output1[1]=t50268*t50662 - 1.*t50788*t50975;
  p_output1[2]=t50662*t50788 + t50268*t50975;
  p_output1[3]=t51410*(t54291 - 1.*t27843*t54309*t54337 + t23403*t54309*t54351) + t27843*t54309*(t51410*t54337 + t54363 + t54351*t54405);
  p_output1[4]=(t54291 - 1.*t54309*t54327)*t54359 + t51476*(t51250*t54316 + t51388*t54327 + t54363);
  p_output1[5]=t51250*(t41033*t54274 - 1.*t45078*t54288);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t43939 + 0.15121*t51250;
  p_output1[10]=0.28121*t16208 - 0.27*t16158*t16208 + t16208*t52542;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t27843*t54309;
  p_output1[19]=t50268*t51476 + t23403*t50788*t54309;
  p_output1[20]=t50788*t51476 - 1.*t23403*t50268*t54309;
  p_output1[21]=t50263*(-1.*t51410*t54337 - 1.*t54351*t54405 + t54480) + t51410*(t50263*t54337 + t50975*t54351 + t54488);
  p_output1[22]=t50662*(-1.*t51388*t54327 + t54480 + t54519) + t54359*(t50242*t54327 + t54488 + t54529);
  p_output1[23]=t18445*(-1.*t18445*t45078*t54274 - 1.*t18445*t41033*t54288 + t54519) + t51250*(t43939*t45078*t54274 + t41033*t43939*t54288 + t54529);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t18445*(-1.*t18445*t54256 + t54519) + t51250*(t43939*t54256 + t54529);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t51410;
  p_output1[37]=t50268*t54359 - 1.*t50788*t54405;
  p_output1[38]=t50788*t54359 + t50268*t54405;
  p_output1[39]=t50263*(t27843*t54309*t54337 - 1.*t23403*t54309*t54351 + t54570) + t27843*t54309*(-1.*t50263*t54337 - 1.*t50975*t54351 + t54578);
  p_output1[40]=t50662*(t54309*t54327 + t54570) + t51476*(-1.*t18445*t54316 - 1.*t50242*t54327 + t54578);
  p_output1[41]=t18445*(-1.*t41033*t54274 + t45078*t54288);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t16158 + 0.27*Power(t16208,2) + t16158*t52542;
  p_output1[47]=-0.27;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
