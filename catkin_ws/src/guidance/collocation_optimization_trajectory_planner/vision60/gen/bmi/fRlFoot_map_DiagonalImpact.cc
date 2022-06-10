/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:54 GMT+02:00
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
  double t41035;
  double t39568;
  double t39741;
  double t41052;
  double t40922;
  double t41253;
  double t45292;
  double t45365;
  double t45395;
  double t45382;
  double t45384;
  double t45386;
  double t45462;
  double t6561;
  double t45336;
  double t45324;
  double t45388;
  double t45516;
  double t45716;
  double t46265;
  double t46066;
  double t46068;
  double t46083;
  double t46062;
  double t46281;
  double t46322;
  double t46323;
  double t47571;
  double t47597;
  double t47616;
  double t47671;
  double t47691;
  double t48111;
  double t48123;
  double t48127;
  double t48221;
  double t47419;
  double t47642;
  double t48224;
  double t48232;
  double t48264;
  double t48268;
  double t48298;
  double t48302;
  double t48315;
  double t48320;
  double t47282;
  double t47287;
  double t47293;
  double t47353;
  double t48241;
  double t48246;
  double t49231;
  double t49318;
  double t49322;
  double t49349;
  double t49352;
  double t49372;
  double t48880;
  double t49113;
  double t49184;
  double t48255;
  double t48347;
  double t48385;
  double t46855;
  double t46877;
  double t46880;
  double t49348;
  double t49435;
  double t49496;
  double t46853;
  double t46883;
  double t47005;
  double t47092;
  double t47101;
  double t47269;
  double t50901;
  double t50904;
  double t50941;
  double t50974;
  double t50975;
  double t50984;
  double t48480;
  double t50994;
  double t51093;
  double t51104;
  double t49531;
  double t50257;
  double t50795;
  double t45328;
  double t45724;
  double t46059;
  double t51001;
  double t51019;
  double t51055;
  double t51789;
  double t52138;
  double t52896;
  double t52521;
  double t53062;
  double t53044;
  double t53298;
  double t53336;
  double t53603;
  double t53610;
  t41035 = Cos(var1[10]);
  t39568 = Cos(var1[11]);
  t39741 = Sin(var1[10]);
  t41052 = Sin(var1[11]);
  t40922 = t39568*t39741;
  t41253 = -1.*t41035*t41052;
  t45292 = t40922 + t41253;
  t45365 = Cos(var1[5]);
  t45395 = Sin(var1[9]);
  t45382 = t41035*t39568;
  t45384 = t39741*t41052;
  t45386 = t45382 + t45384;
  t45462 = Sin(var1[5]);
  t6561 = Cos(var1[9]);
  t45336 = Cos(var1[4]);
  t45324 = Sin(var1[4]);
  t45388 = t45365*t45386;
  t45516 = t45395*t45292*t45462;
  t45716 = t45388 + t45516;
  t46265 = Sin(var1[3]);
  t46066 = -1.*t45365*t45395*t45292;
  t46068 = t45386*t45462;
  t46083 = t46066 + t46068;
  t46062 = Cos(var1[3]);
  t46281 = t6561*t45336*t45292;
  t46322 = -1.*t45324*t45716;
  t46323 = t46281 + t46322;
  t47571 = -0.0641*t39568;
  t47597 = -0.28*t41052;
  t47616 = t47571 + t47597;
  t47671 = -1.*t39568;
  t47691 = 1. + t47671;
  t48111 = -0.575*t47691;
  t48123 = -0.295*t39568;
  t48127 = -0.0641*t41052;
  t48221 = t48111 + t48123 + t48127;
  t47419 = 0.325*t39741;
  t47642 = t41035*t47616;
  t48224 = t39741*t48221;
  t48232 = t47419 + t47642 + t48224;
  t48264 = -1.*t41035;
  t48268 = 1. + t48264;
  t48298 = -0.325*t48268;
  t48302 = -1.*t39741*t47616;
  t48315 = t41035*t48221;
  t48320 = t48298 + t48302 + t48315;
  t47282 = -1.*t6561;
  t47287 = 1. + t47282;
  t47293 = 0.1575*t47287;
  t47353 = 0.2255*t6561;
  t48241 = -1.*t45395*t48232;
  t48246 = t47293 + t47353 + t48241;
  t49231 = 0.068*t45395;
  t49318 = t6561*t48232;
  t49322 = t49231 + t49318;
  t49349 = t45365*t48320;
  t49352 = -1.*t48246*t45462;
  t49372 = t49349 + t49352;
  t48880 = t45395*t45324;
  t49113 = -1.*t6561*t45336*t45462;
  t49184 = t48880 + t49113;
  t48255 = t45365*t48246;
  t48347 = t48320*t45462;
  t48385 = t48255 + t48347;
  t46855 = -1.*t39568*t39741;
  t46877 = t41035*t41052;
  t46880 = t46855 + t46877;
  t49348 = t49322*t45324;
  t49435 = t45336*t49372;
  t49496 = t49348 + t49435;
  t46853 = t6561*t45386*t45324;
  t46883 = t45365*t46880;
  t47005 = t45395*t45386*t45462;
  t47092 = t46883 + t47005;
  t47101 = t45336*t47092;
  t47269 = t46853 + t47101;
  t50901 = t45336*t49322;
  t50904 = -1.*t45324*t49372;
  t50941 = t50901 + t50904;
  t50974 = -1.*t45365*t45395*t45386;
  t50975 = t46880*t45462;
  t50984 = t50974 + t50975;
  t48480 = -1.*t6561*t45365*t48385;
  t50994 = t48385*t50984;
  t51093 = -1.*t45395*t49322;
  t51104 = t6561*t49322*t45386;
  t49531 = t45336*t45395;
  t50257 = t6561*t45324*t45462;
  t50795 = t49531 + t50257;
  t45328 = t6561*t45292*t45324;
  t45724 = t45336*t45716;
  t46059 = t45328 + t45724;
  t51001 = t6561*t45336*t45386;
  t51019 = -1.*t45324*t47092;
  t51055 = t51001 + t51019;
  t51789 = t48385*t46083;
  t52138 = -1.*t48385*t50984;
  t52896 = -1.*t6561*t49322*t45386;
  t52521 = t6561*t49322*t45292;
  t53062 = t48320*t45386;
  t53044 = -1.*t48320*t46880;
  t53298 = t6561*t45365*t48385;
  t53336 = -1.*t48385*t46083;
  t53603 = t45395*t49322;
  t53610 = -1.*t6561*t49322*t45292;
  p_output1[0]=t46059;
  p_output1[1]=t46062*t46083 - 1.*t46265*t46323;
  p_output1[2]=t46083*t46265 + t46062*t46323;
  p_output1[3]=t47269*(t48480 - 1.*t49184*t49496 - 1.*t50795*t50941) + t49184*(t47269*t49496 + t50994 + t50941*t51055);
  p_output1[4]=t45365*(t47092*t49372 + t50994 + t51104)*t6561 + t50984*(t48480 + t51093 + t45462*t49372*t6561);
  p_output1[5]=t45395*(-1.*t45386*t45395*t48246 + t46880*t48320 + t51104) + t45386*t6561*(t51093 - 1.*t48246*t6561);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t45292 - 0.2255*t46880;
  p_output1[10]=-0.325*t41052 - 1.*t39568*t47616 - 1.*t41052*t48221;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t49184;
  p_output1[19]=-1.*t46265*t50795 + t45365*t46062*t6561;
  p_output1[20]=t46062*t50795 + t45365*t46265*t6561;
  p_output1[21]=t47269*(t46059*t49496 + t46323*t50941 + t51789) + t46059*(-1.*t47269*t49496 - 1.*t50941*t51055 + t52138);
  p_output1[22]=t50984*(t45716*t49372 + t51789 + t52521) + t46083*(-1.*t47092*t49372 + t52138 + t52896);
  p_output1[23]=t45292*(t45386*t45395*t48246 + t52896 + t53044)*t6561 + t45386*(-1.*t45292*t45395*t48246 + t52521 + t53062)*t6561;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t45386*(-1.*t45386*t48232 + t53044) + t46880*(t45292*t48232 + t53062);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t47269;
  p_output1[37]=t46062*t50984 - 1.*t46265*t51055;
  p_output1[38]=t46265*t50984 + t46062*t51055;
  p_output1[39]=t46059*(t49184*t49496 + t50795*t50941 + t53298) + t49184*(-1.*t46059*t49496 - 1.*t46323*t50941 + t53336);
  p_output1[40]=t45365*(-1.*t45716*t49372 + t53336 + t53610)*t6561 + t46083*(t53298 + t53603 - 1.*t45462*t49372*t6561);
  p_output1[41]=t45395*(t45292*t45395*t48246 - 1.*t45386*t48320 + t53610) + t45292*t6561*(t53603 + t48246*t6561);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t45386;
  p_output1[46]=0.325*t39568 - 1.*t41052*t47616 + t39568*t48221;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
