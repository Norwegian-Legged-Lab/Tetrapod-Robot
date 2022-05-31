/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:50 GMT+02:00
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
  double t9728;
  double t6314;
  double t7606;
  double t12405;
  double t13855;
  double t17145;
  double t17151;
  double t12905;
  double t17153;
  double t12896;
  double t17154;
  double t12895;
  double t9709;
  double t12746;
  double t12875;
  double t12876;
  double t17152;
  double t17155;
  double t17249;
  double t17269;
  double t17262;
  double t17266;
  double t17267;
  double t17255;
  double t17270;
  double t17271;
  double t17272;
  double t17290;
  double t17291;
  double t17292;
  double t17296;
  double t17297;
  double t17299;
  double t17300;
  double t17301;
  double t17302;
  double t17303;
  double t17305;
  double t17306;
  double t17307;
  double t17309;
  double t17313;
  double t17314;
  double t17294;
  double t17295;
  double t17310;
  double t17311;
  double t17318;
  double t17319;
  double t17320;
  double t17321;
  double t17322;
  double t17323;
  double t17324;
  double t17326;
  double t17327;
  double t17328;
  double t17312;
  double t17315;
  double t17316;
  double t17278;
  double t17279;
  double t17280;
  double t17281;
  double t17282;
  double t17283;
  double t17284;
  double t17285;
  double t17286;
  double t17325;
  double t17329;
  double t17330;
  double t17332;
  double t17333;
  double t17334;
  double t17339;
  double t17341;
  double t17342;
  double t17287;
  double t17288;
  double t17289;
  double t17317;
  double t17343;
  double t12892;
  double t17253;
  double t17254;
  double t17345;
  double t17346;
  double t17347;
  double t17378;
  double t17383;
  double t17389;
  double t17393;
  double t17420;
  double t17425;
  t9728 = Cos(var1[16]);
  t6314 = Cos(var1[17]);
  t7606 = Sin(var1[16]);
  t12405 = Sin(var1[17]);
  t13855 = -1.*t9728*t6314;
  t17145 = -1.*t7606*t12405;
  t17151 = t13855 + t17145;
  t12905 = Cos(var1[5]);
  t17153 = Sin(var1[15]);
  t12896 = Cos(var1[15]);
  t17154 = Sin(var1[5]);
  t12895 = Cos(var1[4]);
  t9709 = -1.*t6314*t7606;
  t12746 = t9728*t12405;
  t12875 = t9709 + t12746;
  t12876 = Sin(var1[4]);
  t17152 = t12896*t12905*t17151;
  t17155 = -1.*t17153*t17151*t17154;
  t17249 = t17152 + t17155;
  t17269 = Sin(var1[3]);
  t17262 = t12905*t17153*t17151;
  t17266 = t12896*t17151*t17154;
  t17267 = t17262 + t17266;
  t17255 = Cos(var1[3]);
  t17270 = t12895*t12875;
  t17271 = -1.*t12876*t17249;
  t17272 = t17270 + t17271;
  t17290 = -1.*t12896;
  t17291 = 1. + t17290;
  t17292 = -0.15121*t17291;
  t17296 = -1.*t9728;
  t17297 = 1. + t17296;
  t17299 = -0.28121*t17297;
  t17300 = -1.*t6314;
  t17301 = 1. + t17300;
  t17302 = -0.50321*t17301;
  t17303 = -0.23321*t6314;
  t17305 = t17302 + t17303;
  t17306 = t9728*t17305;
  t17307 = 0.27*t7606*t12405;
  t17309 = t17299 + t17306 + t17307;
  t17313 = t12896*t17309;
  t17314 = t17292 + t17313;
  t17294 = -0.15121*t12896;
  t17295 = 0.15121*t17153;
  t17310 = t17153*t17309;
  t17311 = t17292 + t17294 + t17295 + t17310;
  t17318 = t12905*t17153;
  t17319 = t12896*t17154;
  t17320 = t17318 + t17319;
  t17321 = 0.28121*t7606;
  t17322 = t17305*t7606;
  t17323 = -0.27*t9728*t12405;
  t17324 = t17321 + t17322 + t17323;
  t17326 = t12905*t17314;
  t17327 = -1.*t17311*t17154;
  t17328 = t17326 + t17327;
  t17312 = t12905*t17311;
  t17315 = t17314*t17154;
  t17316 = t17312 + t17315;
  t17278 = t9728*t6314;
  t17279 = t7606*t12405;
  t17280 = t17278 + t17279;
  t17281 = t17280*t12876;
  t17282 = t12896*t12905*t12875;
  t17283 = -1.*t17153*t12875*t17154;
  t17284 = t17282 + t17283;
  t17285 = t12895*t17284;
  t17286 = t17281 + t17285;
  t17325 = t17324*t12876;
  t17329 = t12895*t17328;
  t17330 = t17325 + t17329;
  t17332 = t12895*t17324;
  t17333 = -1.*t12876*t17328;
  t17334 = t17332 + t17333;
  t17339 = t12905*t17153*t12875;
  t17341 = t12896*t12875*t17154;
  t17342 = t17339 + t17341;
  t17287 = -1.*t12896*t12905;
  t17288 = t17153*t17154;
  t17289 = t17287 + t17288;
  t17317 = -1.*t17289*t17316;
  t17343 = t17342*t17316;
  t12892 = t12875*t12876;
  t17253 = t12895*t17249;
  t17254 = t12892 + t17253;
  t17345 = t12895*t17280;
  t17346 = -1.*t12876*t17284;
  t17347 = t17345 + t17346;
  t17378 = -1.*t17342*t17316;
  t17383 = t17267*t17316;
  t17389 = -1.*t17324*t17280;
  t17393 = t17324*t12875;
  t17420 = t17289*t17316;
  t17425 = -1.*t17267*t17316;
  p_output1[0]=t17254;
  p_output1[1]=t17255*t17267 - 1.*t17269*t17272;
  p_output1[2]=t17267*t17269 + t17255*t17272;
  p_output1[3]=t17286*(t17317 - 1.*t12895*t17320*t17330 + t12876*t17320*t17334) + t12895*t17320*(t17286*t17330 + t17343 + t17334*t17347);
  p_output1[4]=(t17317 - 1.*t17320*t17328)*t17342 + t17289*(t17280*t17324 + t17284*t17328 + t17343);
  p_output1[5]=t17280*(t12896*t17311 - 1.*t17153*t17314);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t17151 - 0.15121*t17280;
  p_output1[16]=0.28121*t12405 + t12405*t17305 - 0.27*t12405*t6314;
  p_output1[17]=0;
  p_output1[18]=t12895*t17320;
  p_output1[19]=t17255*t17289 + t12876*t17269*t17320;
  p_output1[20]=t17269*t17289 - 1.*t12876*t17255*t17320;
  p_output1[21]=t17254*(-1.*t17286*t17330 - 1.*t17334*t17347 + t17378) + t17286*(t17254*t17330 + t17272*t17334 + t17383);
  p_output1[22]=t17267*(-1.*t17284*t17328 + t17378 + t17389) + t17342*(t17249*t17328 + t17383 + t17393);
  p_output1[23]=t12875*(-1.*t12875*t17153*t17311 - 1.*t12875*t12896*t17314 + t17389) + t17280*(t17151*t17153*t17311 + t12896*t17151*t17314 + t17393);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t12875*(-1.*t12875*t17309 + t17389) + t17280*(t17151*t17309 + t17393);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t17286;
  p_output1[37]=t17255*t17342 - 1.*t17269*t17347;
  p_output1[38]=t17269*t17342 + t17255*t17347;
  p_output1[39]=t17254*(t12895*t17320*t17330 - 1.*t12876*t17320*t17334 + t17420) + t12895*t17320*(-1.*t17254*t17330 - 1.*t17272*t17334 + t17425);
  p_output1[40]=t17267*(t17320*t17328 + t17420) + t17289*(-1.*t12875*t17324 - 1.*t17249*t17328 + t17425);
  p_output1[41]=t12875*(-1.*t12896*t17311 + t17153*t17314);
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
  p_output1[52]=0.27*Power(t12405,2) + 0.28121*t6314 + t17305*t6314;
  p_output1[53]=-0.27;
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

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
