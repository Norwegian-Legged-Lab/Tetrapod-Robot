/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:05:01 GMT+02:00
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
  double t11487;
  double t10551;
  double t11482;
  double t11494;
  double t57119;
  double t57168;
  double t57172;
  double t57118;
  double t57238;
  double t57111;
  double t57244;
  double t55506;
  double t11484;
  double t32006;
  double t33092;
  double t33419;
  double t57173;
  double t57245;
  double t57247;
  double t57268;
  double t57263;
  double t57264;
  double t57265;
  double t57262;
  double t57270;
  double t57271;
  double t57272;
  double t57293;
  double t57294;
  double t57300;
  double t57301;
  double t57302;
  double t57303;
  double t57306;
  double t57307;
  double t57308;
  double t57310;
  double t57311;
  double t57312;
  double t57313;
  double t57317;
  double t57318;
  double t57319;
  double t57296;
  double t57297;
  double t57299;
  double t57314;
  double t57315;
  double t57324;
  double t57325;
  double t57326;
  double t57327;
  double t57328;
  double t57329;
  double t57330;
  double t57333;
  double t57334;
  double t57335;
  double t57316;
  double t57320;
  double t57322;
  double t57278;
  double t57279;
  double t57280;
  double t57281;
  double t57282;
  double t57283;
  double t57285;
  double t57286;
  double t57287;
  double t57332;
  double t57336;
  double t57337;
  double t57340;
  double t57342;
  double t57344;
  double t57350;
  double t57352;
  double t57353;
  double t57288;
  double t57289;
  double t57290;
  double t57323;
  double t57354;
  double t33478;
  double t57254;
  double t57260;
  double t57356;
  double t57357;
  double t57358;
  double t57394;
  double t57399;
  double t57406;
  double t57410;
  double t57445;
  double t57452;
  t11487 = Cos(var1[10]);
  t10551 = Cos(var1[11]);
  t11482 = Sin(var1[10]);
  t11494 = Sin(var1[11]);
  t57119 = -1.*t11487*t10551;
  t57168 = -1.*t11482*t11494;
  t57172 = t57119 + t57168;
  t57118 = Cos(var1[5]);
  t57238 = Sin(var1[9]);
  t57111 = Cos(var1[9]);
  t57244 = Sin(var1[5]);
  t55506 = Cos(var1[4]);
  t11484 = -1.*t10551*t11482;
  t32006 = t11487*t11494;
  t33092 = t11484 + t32006;
  t33419 = Sin(var1[4]);
  t57173 = t57111*t57118*t57172;
  t57245 = -1.*t57238*t57172*t57244;
  t57247 = t57173 + t57245;
  t57268 = Sin(var1[3]);
  t57263 = t57118*t57238*t57172;
  t57264 = t57111*t57172*t57244;
  t57265 = t57263 + t57264;
  t57262 = Cos(var1[3]);
  t57270 = t55506*t33092;
  t57271 = -1.*t33419*t57247;
  t57272 = t57270 + t57271;
  t57293 = -1.*t57111;
  t57294 = 1. + t57293;
  t57300 = -1.*t11487;
  t57301 = 1. + t57300;
  t57302 = -0.28121*t57301;
  t57303 = -1.*t10551;
  t57306 = 1. + t57303;
  t57307 = -0.50321*t57306;
  t57308 = -0.19821*t10551;
  t57310 = t57307 + t57308;
  t57311 = t11487*t57310;
  t57312 = 0.305*t11482*t11494;
  t57313 = t57302 + t57311 + t57312;
  t57317 = -0.15121*t57294;
  t57318 = t57111*t57313;
  t57319 = t57317 + t57318;
  t57296 = 0.15121*t57294;
  t57297 = 0.15121*t57111;
  t57299 = 0.15121*t57238;
  t57314 = t57238*t57313;
  t57315 = t57296 + t57297 + t57299 + t57314;
  t57324 = t57118*t57238;
  t57325 = t57111*t57244;
  t57326 = t57324 + t57325;
  t57327 = 0.28121*t11482;
  t57328 = t57310*t11482;
  t57329 = -0.305*t11487*t11494;
  t57330 = t57327 + t57328 + t57329;
  t57333 = t57118*t57319;
  t57334 = -1.*t57315*t57244;
  t57335 = t57333 + t57334;
  t57316 = t57118*t57315;
  t57320 = t57319*t57244;
  t57322 = t57316 + t57320;
  t57278 = t11487*t10551;
  t57279 = t11482*t11494;
  t57280 = t57278 + t57279;
  t57281 = t57280*t33419;
  t57282 = t57111*t57118*t33092;
  t57283 = -1.*t57238*t33092*t57244;
  t57285 = t57282 + t57283;
  t57286 = t55506*t57285;
  t57287 = t57281 + t57286;
  t57332 = t57330*t33419;
  t57336 = t55506*t57335;
  t57337 = t57332 + t57336;
  t57340 = t55506*t57330;
  t57342 = -1.*t33419*t57335;
  t57344 = t57340 + t57342;
  t57350 = t57118*t57238*t33092;
  t57352 = t57111*t33092*t57244;
  t57353 = t57350 + t57352;
  t57288 = -1.*t57111*t57118;
  t57289 = t57238*t57244;
  t57290 = t57288 + t57289;
  t57323 = -1.*t57290*t57322;
  t57354 = t57353*t57322;
  t33478 = t33092*t33419;
  t57254 = t55506*t57247;
  t57260 = t33478 + t57254;
  t57356 = t55506*t57280;
  t57357 = -1.*t33419*t57285;
  t57358 = t57356 + t57357;
  t57394 = -1.*t57353*t57322;
  t57399 = t57265*t57322;
  t57406 = -1.*t57330*t57280;
  t57410 = t57330*t33092;
  t57445 = t57290*t57322;
  t57452 = -1.*t57265*t57322;
  p_output1[0]=t57260;
  p_output1[1]=t57262*t57265 - 1.*t57268*t57272;
  p_output1[2]=t57265*t57268 + t57262*t57272;
  p_output1[3]=t57287*(t57323 - 1.*t55506*t57326*t57337 + t33419*t57326*t57344) + t55506*t57326*(t57287*t57337 + t57354 + t57344*t57358);
  p_output1[4]=(t57323 - 1.*t57326*t57335)*t57353 + t57290*(t57280*t57330 + t57285*t57335 + t57354);
  p_output1[5]=t57280*(t57111*t57315 - 1.*t57238*t57319);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t57172 + 0.15121*t57280;
  p_output1[10]=0.28121*t11494 - 0.305*t10551*t11494 + t11494*t57310;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t55506*t57326;
  p_output1[19]=t57262*t57290 + t33419*t57268*t57326;
  p_output1[20]=t57268*t57290 - 1.*t33419*t57262*t57326;
  p_output1[21]=t57260*(-1.*t57287*t57337 - 1.*t57344*t57358 + t57394) + t57287*(t57260*t57337 + t57272*t57344 + t57399);
  p_output1[22]=t57265*(-1.*t57285*t57335 + t57394 + t57406) + t57353*(t57247*t57335 + t57399 + t57410);
  p_output1[23]=t33092*(-1.*t33092*t57238*t57315 - 1.*t33092*t57111*t57319 + t57406) + t57280*(t57172*t57238*t57315 + t57111*t57172*t57319 + t57410);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t33092*(-1.*t33092*t57313 + t57406) + t57280*(t57172*t57313 + t57410);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t57287;
  p_output1[37]=t57262*t57353 - 1.*t57268*t57358;
  p_output1[38]=t57268*t57353 + t57262*t57358;
  p_output1[39]=t57260*(t55506*t57326*t57337 - 1.*t33419*t57326*t57344 + t57445) + t55506*t57326*(-1.*t57260*t57337 - 1.*t57272*t57344 + t57452);
  p_output1[40]=t57265*(t57326*t57335 + t57445) + t57290*(-1.*t33092*t57330 - 1.*t57247*t57335 + t57452);
  p_output1[41]=t33092*(-1.*t57111*t57315 + t57238*t57319);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t10551 + 0.305*Power(t11494,2) + t10551*t57310;
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
