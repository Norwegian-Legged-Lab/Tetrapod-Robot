/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:30 GMT+02:00
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
  double t10012;
  double t631;
  double t5631;
  double t10078;
  double t5635;
  double t10088;
  double t10089;
  double t10159;
  double t10195;
  double t10166;
  double t10178;
  double t10188;
  double t10196;
  double t298;
  double t10150;
  double t10092;
  double t10193;
  double t10197;
  double t10198;
  double t10213;
  double t10208;
  double t10210;
  double t10211;
  double t10207;
  double t10216;
  double t10220;
  double t10223;
  double t10260;
  double t10263;
  double t10264;
  double t10267;
  double t10271;
  double t10273;
  double t10275;
  double t10276;
  double t10281;
  double t10259;
  double t10266;
  double t10285;
  double t10286;
  double t10292;
  double t10293;
  double t10296;
  double t10298;
  double t10302;
  double t10303;
  double t10253;
  double t10254;
  double t10257;
  double t10258;
  double t10287;
  double t10289;
  double t10319;
  double t10320;
  double t10324;
  double t10329;
  double t10336;
  double t10337;
  double t10315;
  double t10316;
  double t10318;
  double t10290;
  double t10306;
  double t10307;
  double t10238;
  double t10239;
  double t10241;
  double t10325;
  double t10340;
  double t10344;
  double t10233;
  double t10243;
  double t10244;
  double t10248;
  double t10249;
  double t10250;
  double t10352;
  double t10353;
  double t10354;
  double t10371;
  double t10372;
  double t10374;
  double t10308;
  double t10375;
  double t10389;
  double t10394;
  double t10347;
  double t10349;
  double t10350;
  double t10095;
  double t10203;
  double t10204;
  double t10378;
  double t10379;
  double t10380;
  double t10476;
  double t10489;
  double t10505;
  double t10498;
  double t10527;
  double t10519;
  double t10573;
  double t10579;
  double t10594;
  double t10602;
  t10012 = Cos(var1[10]);
  t631 = Cos(var1[11]);
  t5631 = Sin(var1[10]);
  t10078 = Sin(var1[11]);
  t5635 = t631*t5631;
  t10088 = -1.*t10012*t10078;
  t10089 = t5635 + t10088;
  t10159 = Cos(var1[5]);
  t10195 = Sin(var1[9]);
  t10166 = t10012*t631;
  t10178 = t5631*t10078;
  t10188 = t10166 + t10178;
  t10196 = Sin(var1[5]);
  t298 = Cos(var1[9]);
  t10150 = Cos(var1[4]);
  t10092 = Sin(var1[4]);
  t10193 = t10159*t10188;
  t10197 = t10195*t10089*t10196;
  t10198 = t10193 + t10197;
  t10213 = Sin(var1[3]);
  t10208 = -1.*t10159*t10195*t10089;
  t10210 = t10188*t10196;
  t10211 = t10208 + t10210;
  t10207 = Cos(var1[3]);
  t10216 = t298*t10150*t10089;
  t10220 = -1.*t10092*t10198;
  t10223 = t10216 + t10220;
  t10260 = -0.0641*t631;
  t10263 = -0.28*t10078;
  t10264 = t10260 + t10263;
  t10267 = -1.*t631;
  t10271 = 1. + t10267;
  t10273 = -0.575*t10271;
  t10275 = -0.295*t631;
  t10276 = -0.0641*t10078;
  t10281 = t10273 + t10275 + t10276;
  t10259 = 0.325*t5631;
  t10266 = t10012*t10264;
  t10285 = t5631*t10281;
  t10286 = t10259 + t10266 + t10285;
  t10292 = -1.*t10012;
  t10293 = 1. + t10292;
  t10296 = -0.325*t10293;
  t10298 = -1.*t5631*t10264;
  t10302 = t10012*t10281;
  t10303 = t10296 + t10298 + t10302;
  t10253 = -1.*t298;
  t10254 = 1. + t10253;
  t10257 = 0.1575*t10254;
  t10258 = 0.2255*t298;
  t10287 = -1.*t10195*t10286;
  t10289 = t10257 + t10258 + t10287;
  t10319 = 0.068*t10195;
  t10320 = t298*t10286;
  t10324 = t10319 + t10320;
  t10329 = t10159*t10303;
  t10336 = -1.*t10289*t10196;
  t10337 = t10329 + t10336;
  t10315 = t10195*t10092;
  t10316 = -1.*t298*t10150*t10196;
  t10318 = t10315 + t10316;
  t10290 = t10159*t10289;
  t10306 = t10303*t10196;
  t10307 = t10290 + t10306;
  t10238 = -1.*t631*t5631;
  t10239 = t10012*t10078;
  t10241 = t10238 + t10239;
  t10325 = t10324*t10092;
  t10340 = t10150*t10337;
  t10344 = t10325 + t10340;
  t10233 = t298*t10188*t10092;
  t10243 = t10159*t10241;
  t10244 = t10195*t10188*t10196;
  t10248 = t10243 + t10244;
  t10249 = t10150*t10248;
  t10250 = t10233 + t10249;
  t10352 = t10150*t10324;
  t10353 = -1.*t10092*t10337;
  t10354 = t10352 + t10353;
  t10371 = -1.*t10159*t10195*t10188;
  t10372 = t10241*t10196;
  t10374 = t10371 + t10372;
  t10308 = -1.*t298*t10159*t10307;
  t10375 = t10307*t10374;
  t10389 = -1.*t10195*t10324;
  t10394 = t298*t10324*t10188;
  t10347 = t10150*t10195;
  t10349 = t298*t10092*t10196;
  t10350 = t10347 + t10349;
  t10095 = t298*t10089*t10092;
  t10203 = t10150*t10198;
  t10204 = t10095 + t10203;
  t10378 = t298*t10150*t10188;
  t10379 = -1.*t10092*t10248;
  t10380 = t10378 + t10379;
  t10476 = t10307*t10211;
  t10489 = -1.*t10307*t10374;
  t10505 = -1.*t298*t10324*t10188;
  t10498 = t298*t10324*t10089;
  t10527 = t10303*t10188;
  t10519 = -1.*t10303*t10241;
  t10573 = t298*t10159*t10307;
  t10579 = -1.*t10307*t10211;
  t10594 = t10195*t10324;
  t10602 = -1.*t298*t10324*t10089;
  p_output1[0]=t10204;
  p_output1[1]=t10207*t10211 - 1.*t10213*t10223;
  p_output1[2]=t10211*t10213 + t10207*t10223;
  p_output1[3]=t10250*(t10308 - 1.*t10318*t10344 - 1.*t10350*t10354) + t10318*(t10250*t10344 + t10375 + t10354*t10380);
  p_output1[4]=t10159*(t10248*t10337 + t10375 + t10394)*t298 + t10374*(t10308 + t10389 + t10196*t10337*t298);
  p_output1[5]=t10195*(-1.*t10188*t10195*t10289 + t10241*t10303 + t10394) + t10188*t298*(t10389 - 1.*t10289*t298);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t10089 - 0.2255*t10241;
  p_output1[10]=-0.325*t10078 - 1.*t10078*t10281 - 1.*t10264*t631;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10318;
  p_output1[19]=-1.*t10213*t10350 + t10159*t10207*t298;
  p_output1[20]=t10207*t10350 + t10159*t10213*t298;
  p_output1[21]=t10250*(t10204*t10344 + t10223*t10354 + t10476) + t10204*(-1.*t10250*t10344 - 1.*t10354*t10380 + t10489);
  p_output1[22]=t10374*(t10198*t10337 + t10476 + t10498) + t10211*(-1.*t10248*t10337 + t10489 + t10505);
  p_output1[23]=t10089*(t10188*t10195*t10289 + t10505 + t10519)*t298 + t10188*(-1.*t10089*t10195*t10289 + t10498 + t10527)*t298;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t10188*(-1.*t10188*t10286 + t10519) + t10241*(t10089*t10286 + t10527);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t10250;
  p_output1[37]=t10207*t10374 - 1.*t10213*t10380;
  p_output1[38]=t10213*t10374 + t10207*t10380;
  p_output1[39]=t10204*(t10318*t10344 + t10350*t10354 + t10573) + t10318*(-1.*t10204*t10344 - 1.*t10223*t10354 + t10579);
  p_output1[40]=t10159*(-1.*t10198*t10337 + t10579 + t10602)*t298 + t10211*(t10573 + t10594 - 1.*t10196*t10337*t298);
  p_output1[41]=t10195*(t10089*t10195*t10289 - 1.*t10188*t10303 + t10602) + t10089*t298*(t10594 + t10289*t298);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t10188;
  p_output1[46]=-1.*t10078*t10264 + 0.325*t631 + t10281*t631;
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

#include "fRlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
