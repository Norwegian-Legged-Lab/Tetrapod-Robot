/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:44 GMT+02:00
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
  double t52453;
  double t29530;
  double t32734;
  double t54826;
  double t55149;
  double t55150;
  double t55158;
  double t55148;
  double t55204;
  double t55133;
  double t55206;
  double t54915;
  double t33001;
  double t54868;
  double t54872;
  double t54881;
  double t55203;
  double t55213;
  double t55222;
  double t55258;
  double t55239;
  double t55245;
  double t55248;
  double t55236;
  double t55262;
  double t55265;
  double t55275;
  double t55297;
  double t55298;
  double t55304;
  double t55306;
  double t55307;
  double t55308;
  double t55319;
  double t55327;
  double t55331;
  double t55335;
  double t55336;
  double t55337;
  double t55338;
  double t55354;
  double t55355;
  double t55356;
  double t55299;
  double t55301;
  double t55303;
  double t55340;
  double t55341;
  double t55364;
  double t55365;
  double t55366;
  double t55367;
  double t55371;
  double t55377;
  double t55378;
  double t55381;
  double t55382;
  double t55383;
  double t55342;
  double t55358;
  double t55361;
  double t55281;
  double t55282;
  double t55283;
  double t55284;
  double t55285;
  double t55286;
  double t55289;
  double t55290;
  double t55291;
  double t55380;
  double t55385;
  double t55386;
  double t55390;
  double t55392;
  double t55393;
  double t55401;
  double t55402;
  double t55404;
  double t55293;
  double t55295;
  double t55296;
  double t55363;
  double t55405;
  double t54904;
  double t55224;
  double t55233;
  double t55407;
  double t55409;
  double t55411;
  double t55457;
  double t55463;
  double t55482;
  double t55503;
  double t55591;
  double t55596;
  t52453 = Cos(var1[10]);
  t29530 = Cos(var1[11]);
  t32734 = Sin(var1[10]);
  t54826 = Sin(var1[11]);
  t55149 = -1.*t52453*t29530;
  t55150 = -1.*t32734*t54826;
  t55158 = t55149 + t55150;
  t55148 = Cos(var1[5]);
  t55204 = Sin(var1[9]);
  t55133 = Cos(var1[9]);
  t55206 = Sin(var1[5]);
  t54915 = Cos(var1[4]);
  t33001 = -1.*t29530*t32734;
  t54868 = t52453*t54826;
  t54872 = t33001 + t54868;
  t54881 = Sin(var1[4]);
  t55203 = t55133*t55148*t55158;
  t55213 = -1.*t55204*t55158*t55206;
  t55222 = t55203 + t55213;
  t55258 = Sin(var1[3]);
  t55239 = t55148*t55204*t55158;
  t55245 = t55133*t55158*t55206;
  t55248 = t55239 + t55245;
  t55236 = Cos(var1[3]);
  t55262 = t54915*t54872;
  t55265 = -1.*t54881*t55222;
  t55275 = t55262 + t55265;
  t55297 = -1.*t55133;
  t55298 = 1. + t55297;
  t55304 = -1.*t52453;
  t55306 = 1. + t55304;
  t55307 = -0.28121*t55306;
  t55308 = -1.*t29530;
  t55319 = 1. + t55308;
  t55327 = -0.50321*t55319;
  t55331 = -0.19821*t29530;
  t55335 = t55327 + t55331;
  t55336 = t52453*t55335;
  t55337 = 0.305*t32734*t54826;
  t55338 = t55307 + t55336 + t55337;
  t55354 = -0.15121*t55298;
  t55355 = t55133*t55338;
  t55356 = t55354 + t55355;
  t55299 = 0.15121*t55298;
  t55301 = 0.15121*t55133;
  t55303 = 0.15121*t55204;
  t55340 = t55204*t55338;
  t55341 = t55299 + t55301 + t55303 + t55340;
  t55364 = t55148*t55204;
  t55365 = t55133*t55206;
  t55366 = t55364 + t55365;
  t55367 = 0.28121*t32734;
  t55371 = t55335*t32734;
  t55377 = -0.305*t52453*t54826;
  t55378 = t55367 + t55371 + t55377;
  t55381 = t55148*t55356;
  t55382 = -1.*t55341*t55206;
  t55383 = t55381 + t55382;
  t55342 = t55148*t55341;
  t55358 = t55356*t55206;
  t55361 = t55342 + t55358;
  t55281 = t52453*t29530;
  t55282 = t32734*t54826;
  t55283 = t55281 + t55282;
  t55284 = t55283*t54881;
  t55285 = t55133*t55148*t54872;
  t55286 = -1.*t55204*t54872*t55206;
  t55289 = t55285 + t55286;
  t55290 = t54915*t55289;
  t55291 = t55284 + t55290;
  t55380 = t55378*t54881;
  t55385 = t54915*t55383;
  t55386 = t55380 + t55385;
  t55390 = t54915*t55378;
  t55392 = -1.*t54881*t55383;
  t55393 = t55390 + t55392;
  t55401 = t55148*t55204*t54872;
  t55402 = t55133*t54872*t55206;
  t55404 = t55401 + t55402;
  t55293 = -1.*t55133*t55148;
  t55295 = t55204*t55206;
  t55296 = t55293 + t55295;
  t55363 = -1.*t55296*t55361;
  t55405 = t55404*t55361;
  t54904 = t54872*t54881;
  t55224 = t54915*t55222;
  t55233 = t54904 + t55224;
  t55407 = t54915*t55283;
  t55409 = -1.*t54881*t55289;
  t55411 = t55407 + t55409;
  t55457 = -1.*t55404*t55361;
  t55463 = t55248*t55361;
  t55482 = -1.*t55378*t55283;
  t55503 = t55378*t54872;
  t55591 = t55296*t55361;
  t55596 = -1.*t55248*t55361;
  p_output1[0]=t55233;
  p_output1[1]=t55236*t55248 - 1.*t55258*t55275;
  p_output1[2]=t55248*t55258 + t55236*t55275;
  p_output1[3]=t55291*(t55363 - 1.*t54915*t55366*t55386 + t54881*t55366*t55393) + t54915*t55366*(t55291*t55386 + t55405 + t55393*t55411);
  p_output1[4]=(t55363 - 1.*t55366*t55383)*t55404 + t55296*(t55283*t55378 + t55289*t55383 + t55405);
  p_output1[5]=t55283*(t55133*t55341 - 1.*t55204*t55356);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t55158 + 0.15121*t55283;
  p_output1[10]=0.28121*t54826 - 0.305*t29530*t54826 + t54826*t55335;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t54915*t55366;
  p_output1[19]=t55236*t55296 + t54881*t55258*t55366;
  p_output1[20]=t55258*t55296 - 1.*t54881*t55236*t55366;
  p_output1[21]=t55233*(-1.*t55291*t55386 - 1.*t55393*t55411 + t55457) + t55291*(t55233*t55386 + t55275*t55393 + t55463);
  p_output1[22]=t55248*(-1.*t55289*t55383 + t55457 + t55482) + t55404*(t55222*t55383 + t55463 + t55503);
  p_output1[23]=t54872*(-1.*t54872*t55204*t55341 - 1.*t54872*t55133*t55356 + t55482) + t55283*(t55158*t55204*t55341 + t55133*t55158*t55356 + t55503);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t54872*(-1.*t54872*t55338 + t55482) + t55283*(t55158*t55338 + t55503);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t55291;
  p_output1[37]=t55236*t55404 - 1.*t55258*t55411;
  p_output1[38]=t55258*t55404 + t55236*t55411;
  p_output1[39]=t55233*(t54915*t55366*t55386 - 1.*t54881*t55366*t55393 + t55591) + t54915*t55366*(-1.*t55233*t55386 - 1.*t55275*t55393 + t55596);
  p_output1[40]=t55248*(t55366*t55383 + t55591) + t55296*(-1.*t54872*t55378 - 1.*t55222*t55383 + t55596);
  p_output1[41]=t54872*(-1.*t55133*t55341 + t55204*t55356);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t29530 + 0.305*Power(t54826,2) + t29530*t55335;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
