/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:40 GMT+02:00
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
  double t24210;
  double t23387;
  double t24032;
  double t24291;
  double t24129;
  double t29127;
  double t29158;
  double t29167;
  double t29321;
  double t29261;
  double t29285;
  double t29286;
  double t29328;
  double t10869;
  double t29166;
  double t29164;
  double t29296;
  double t29332;
  double t29333;
  double t29347;
  double t29338;
  double t29340;
  double t29341;
  double t29337;
  double t29348;
  double t29349;
  double t29351;
  double t29390;
  double t29391;
  double t29392;
  double t29395;
  double t29396;
  double t29397;
  double t29398;
  double t29400;
  double t29401;
  double t29389;
  double t29394;
  double t29402;
  double t29405;
  double t29410;
  double t29411;
  double t29412;
  double t29413;
  double t29415;
  double t29416;
  double t29382;
  double t29383;
  double t29385;
  double t29387;
  double t29406;
  double t29407;
  double t29430;
  double t29432;
  double t29433;
  double t29438;
  double t29439;
  double t29440;
  double t29425;
  double t29426;
  double t29428;
  double t29408;
  double t29417;
  double t29421;
  double t29361;
  double t29362;
  double t29363;
  double t29437;
  double t29441;
  double t29443;
  double t29360;
  double t29366;
  double t29368;
  double t29370;
  double t29371;
  double t29375;
  double t29452;
  double t29453;
  double t29454;
  double t29465;
  double t29475;
  double t29485;
  double t29422;
  double t29487;
  double t29517;
  double t29527;
  double t29445;
  double t29449;
  double t29451;
  double t29165;
  double t29334;
  double t29336;
  double t29495;
  double t29503;
  double t29504;
  double t29583;
  double t29591;
  double t29608;
  double t29600;
  double t29626;
  double t29621;
  double t29647;
  double t29652;
  double t29658;
  double t29662;
  t24210 = Cos(var1[16]);
  t23387 = Cos(var1[17]);
  t24032 = Sin(var1[16]);
  t24291 = Sin(var1[17]);
  t24129 = t23387*t24032;
  t29127 = -1.*t24210*t24291;
  t29158 = t24129 + t29127;
  t29167 = Cos(var1[5]);
  t29321 = Sin(var1[15]);
  t29261 = t24210*t23387;
  t29285 = t24032*t24291;
  t29286 = t29261 + t29285;
  t29328 = Sin(var1[5]);
  t10869 = Cos(var1[15]);
  t29166 = Cos(var1[4]);
  t29164 = Sin(var1[4]);
  t29296 = t29167*t29286;
  t29332 = t29321*t29158*t29328;
  t29333 = t29296 + t29332;
  t29347 = Sin(var1[3]);
  t29338 = -1.*t29167*t29321*t29158;
  t29340 = t29286*t29328;
  t29341 = t29338 + t29340;
  t29337 = Cos(var1[3]);
  t29348 = t10869*t29166*t29158;
  t29349 = -1.*t29164*t29333;
  t29351 = t29348 + t29349;
  t29390 = -0.0641*t23387;
  t29391 = -0.28*t24291;
  t29392 = t29390 + t29391;
  t29395 = -1.*t23387;
  t29396 = 1. + t29395;
  t29397 = -0.575*t29396;
  t29398 = -0.295*t23387;
  t29400 = -0.0641*t24291;
  t29401 = t29397 + t29398 + t29400;
  t29389 = 0.325*t24032;
  t29394 = t24210*t29392;
  t29402 = t24032*t29401;
  t29405 = t29389 + t29394 + t29402;
  t29410 = -1.*t24210;
  t29411 = 1. + t29410;
  t29412 = -0.325*t29411;
  t29413 = -1.*t24032*t29392;
  t29415 = t24210*t29401;
  t29416 = t29412 + t29413 + t29415;
  t29382 = -1.*t10869;
  t29383 = 1. + t29382;
  t29385 = -0.1575*t29383;
  t29387 = -0.2255*t10869;
  t29406 = -1.*t29321*t29405;
  t29407 = t29385 + t29387 + t29406;
  t29430 = -0.068*t29321;
  t29432 = t10869*t29405;
  t29433 = t29430 + t29432;
  t29438 = t29167*t29416;
  t29439 = -1.*t29407*t29328;
  t29440 = t29438 + t29439;
  t29425 = t29321*t29164;
  t29426 = -1.*t10869*t29166*t29328;
  t29428 = t29425 + t29426;
  t29408 = t29167*t29407;
  t29417 = t29416*t29328;
  t29421 = t29408 + t29417;
  t29361 = -1.*t23387*t24032;
  t29362 = t24210*t24291;
  t29363 = t29361 + t29362;
  t29437 = t29433*t29164;
  t29441 = t29166*t29440;
  t29443 = t29437 + t29441;
  t29360 = t10869*t29286*t29164;
  t29366 = t29167*t29363;
  t29368 = t29321*t29286*t29328;
  t29370 = t29366 + t29368;
  t29371 = t29166*t29370;
  t29375 = t29360 + t29371;
  t29452 = t29166*t29433;
  t29453 = -1.*t29164*t29440;
  t29454 = t29452 + t29453;
  t29465 = -1.*t29167*t29321*t29286;
  t29475 = t29363*t29328;
  t29485 = t29465 + t29475;
  t29422 = -1.*t10869*t29167*t29421;
  t29487 = t29421*t29485;
  t29517 = -1.*t29321*t29433;
  t29527 = t10869*t29433*t29286;
  t29445 = t29166*t29321;
  t29449 = t10869*t29164*t29328;
  t29451 = t29445 + t29449;
  t29165 = t10869*t29158*t29164;
  t29334 = t29166*t29333;
  t29336 = t29165 + t29334;
  t29495 = t10869*t29166*t29286;
  t29503 = -1.*t29164*t29370;
  t29504 = t29495 + t29503;
  t29583 = t29421*t29341;
  t29591 = -1.*t29421*t29485;
  t29608 = -1.*t10869*t29433*t29286;
  t29600 = t10869*t29433*t29158;
  t29626 = t29416*t29286;
  t29621 = -1.*t29416*t29363;
  t29647 = t10869*t29167*t29421;
  t29652 = -1.*t29421*t29341;
  t29658 = t29321*t29433;
  t29662 = -1.*t10869*t29433*t29158;
  p_output1[0]=t29336;
  p_output1[1]=t29337*t29341 - 1.*t29347*t29351;
  p_output1[2]=t29341*t29347 + t29337*t29351;
  p_output1[3]=t29375*(t29422 - 1.*t29428*t29443 - 1.*t29451*t29454) + t29428*(t29375*t29443 + t29487 + t29454*t29504);
  p_output1[4]=t29485*(t29422 + t10869*t29328*t29440 + t29517) + t10869*t29167*(t29370*t29440 + t29487 + t29527);
  p_output1[5]=t10869*t29286*(-1.*t10869*t29407 + t29517) + t29321*(-1.*t29286*t29321*t29407 + t29363*t29416 + t29527);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t29158 + 0.2255*t29363;
  p_output1[16]=-0.325*t24291 - 1.*t23387*t29392 - 1.*t24291*t29401;
  p_output1[17]=-0.0641;
  p_output1[18]=t29428;
  p_output1[19]=t10869*t29167*t29337 - 1.*t29347*t29451;
  p_output1[20]=t10869*t29167*t29347 + t29337*t29451;
  p_output1[21]=t29375*(t29336*t29443 + t29351*t29454 + t29583) + t29336*(-1.*t29375*t29443 - 1.*t29454*t29504 + t29591);
  p_output1[22]=t29485*(t29333*t29440 + t29583 + t29600) + t29341*(-1.*t29370*t29440 + t29591 + t29608);
  p_output1[23]=t10869*t29158*(t29286*t29321*t29407 + t29608 + t29621) + t10869*t29286*(-1.*t29158*t29321*t29407 + t29600 + t29626);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t29286*(-1.*t29286*t29405 + t29621) + t29363*(t29158*t29405 + t29626);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t29375;
  p_output1[37]=t29337*t29485 - 1.*t29347*t29504;
  p_output1[38]=t29347*t29485 + t29337*t29504;
  p_output1[39]=t29336*(t29428*t29443 + t29451*t29454 + t29647) + t29428*(-1.*t29336*t29443 - 1.*t29351*t29454 + t29652);
  p_output1[40]=t29341*(-1.*t10869*t29328*t29440 + t29647 + t29658) + t10869*t29167*(-1.*t29333*t29440 + t29652 + t29662);
  p_output1[41]=t10869*t29158*(t10869*t29407 + t29658) + t29321*(t29158*t29321*t29407 - 1.*t29286*t29416 + t29662);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t29286;
  p_output1[52]=0.325*t23387 - 1.*t24291*t29392 + t23387*t29401;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
