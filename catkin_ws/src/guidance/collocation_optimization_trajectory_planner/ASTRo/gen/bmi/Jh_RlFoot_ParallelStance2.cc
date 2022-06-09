/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:03 GMT+02:00
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
  double t7133;
  double t3812;
  double t7122;
  double t7134;
  double t7231;
  double t7232;
  double t7233;
  double t7220;
  double t7230;
  double t7238;
  double t7229;
  double t7240;
  double t7151;
  double t7129;
  double t7143;
  double t7150;
  double t7234;
  double t7249;
  double t7253;
  double t7345;
  double t7260;
  double t7261;
  double t7265;
  double t7330;
  double t7277;
  double t7278;
  double t7279;
  double t7285;
  double t7286;
  double t7287;
  double t7333;
  double t7335;
  double t7338;
  double t7359;
  double t7373;
  double t7374;
  double t7382;
  double t7385;
  double t7386;
  double t7391;
  double t7392;
  double t7395;
  double t7397;
  double t7410;
  double t7414;
  double t7280;
  double t7288;
  double t7316;
  double t7436;
  double t7439;
  double t7444;
  double t7445;
  double t7448;
  double t7452;
  double t7453;
  double t7454;
  double t7455;
  double t7459;
  double t7464;
  double t7465;
  double t7466;
  double t7471;
  double t7472;
  double t7473;
  double t7440;
  double t7442;
  double t7443;
  double t7468;
  double t7469;
  double t7477;
  double t7478;
  double t7479;
  double t7480;
  double t7482;
  double t7483;
  double t7484;
  double t7470;
  double t7474;
  double t7475;
  double t7481;
  double t7485;
  double t7486;
  double t7488;
  double t7489;
  double t7490;
  double t7197;
  double t7254;
  double t7259;
  double t7476;
  double t7494;
  double t7501;
  double t7507;
  double t7513;
  double t7518;
  double t7534;
  double t7538;
  t7133 = Cos(var1[10]);
  t3812 = Cos(var1[11]);
  t7122 = Sin(var1[10]);
  t7134 = Sin(var1[11]);
  t7231 = -1.*t7133*t3812;
  t7232 = -1.*t7122*t7134;
  t7233 = t7231 + t7232;
  t7220 = Cos(var1[4]);
  t7230 = Cos(var1[5]);
  t7238 = Sin(var1[9]);
  t7229 = Cos(var1[9]);
  t7240 = Sin(var1[5]);
  t7151 = Sin(var1[4]);
  t7129 = -1.*t3812*t7122;
  t7143 = t7133*t7134;
  t7150 = t7129 + t7143;
  t7234 = t7229*t7230*t7233;
  t7249 = -1.*t7238*t7233*t7240;
  t7253 = t7234 + t7249;
  t7345 = Sin(var1[3]);
  t7260 = t7230*t7238;
  t7261 = t7229*t7240;
  t7265 = t7260 + t7261;
  t7330 = Cos(var1[3]);
  t7277 = t7133*t3812;
  t7278 = t7122*t7134;
  t7279 = t7277 + t7278;
  t7285 = t7229*t7230*t7150;
  t7286 = -1.*t7238*t7150*t7240;
  t7287 = t7285 + t7286;
  t7333 = t7230*t7238*t7233;
  t7335 = t7229*t7233*t7240;
  t7338 = t7333 + t7335;
  t7359 = t7220*t7150;
  t7373 = -1.*t7151*t7253;
  t7374 = t7359 + t7373;
  t7382 = -1.*t7229*t7230;
  t7385 = t7238*t7240;
  t7386 = t7382 + t7385;
  t7391 = t7230*t7238*t7150;
  t7392 = t7229*t7150*t7240;
  t7395 = t7391 + t7392;
  t7397 = t7220*t7279;
  t7410 = -1.*t7151*t7287;
  t7414 = t7397 + t7410;
  t7280 = t7279*t7151;
  t7288 = t7220*t7287;
  t7316 = t7280 + t7288;
  t7436 = -1.*t7229;
  t7439 = 1. + t7436;
  t7444 = -1.*t7133;
  t7445 = 1. + t7444;
  t7448 = -0.28121*t7445;
  t7452 = -1.*t3812;
  t7453 = 1. + t7452;
  t7454 = -0.50321*t7453;
  t7455 = -0.19821*t3812;
  t7459 = t7454 + t7455;
  t7464 = t7133*t7459;
  t7465 = 0.305*t7122*t7134;
  t7466 = t7448 + t7464 + t7465;
  t7471 = -0.15121*t7439;
  t7472 = t7229*t7466;
  t7473 = t7471 + t7472;
  t7440 = 0.15121*t7439;
  t7442 = 0.15121*t7229;
  t7443 = 0.15121*t7238;
  t7468 = t7238*t7466;
  t7469 = t7440 + t7442 + t7443 + t7468;
  t7477 = 0.28121*t7122;
  t7478 = t7459*t7122;
  t7479 = -0.305*t7133*t7134;
  t7480 = t7477 + t7478 + t7479;
  t7482 = t7230*t7473;
  t7483 = -1.*t7469*t7240;
  t7484 = t7482 + t7483;
  t7470 = t7230*t7469;
  t7474 = t7473*t7240;
  t7475 = t7470 + t7474;
  t7481 = t7480*t7151;
  t7485 = t7220*t7484;
  t7486 = t7481 + t7485;
  t7488 = t7220*t7480;
  t7489 = -1.*t7151*t7484;
  t7490 = t7488 + t7489;
  t7197 = t7150*t7151;
  t7254 = t7220*t7253;
  t7259 = t7197 + t7254;
  t7476 = -1.*t7386*t7475;
  t7494 = t7395*t7475;
  t7501 = -1.*t7395*t7475;
  t7507 = t7338*t7475;
  t7513 = t7386*t7475;
  t7518 = -1.*t7338*t7475;
  t7534 = -1.*t7480*t7279;
  t7538 = t7480*t7150;
  p_output1[0]=t7259;
  p_output1[1]=t7220*t7265;
  p_output1[2]=t7316;
  p_output1[3]=t7330*t7338 - 1.*t7345*t7374;
  p_output1[4]=t7151*t7265*t7345 + t7330*t7386;
  p_output1[5]=t7330*t7395 - 1.*t7345*t7414;
  p_output1[6]=t7338*t7345 + t7330*t7374;
  p_output1[7]=-1.*t7151*t7265*t7330 + t7345*t7386;
  p_output1[8]=t7345*t7395 + t7330*t7414;
  p_output1[9]=t7316*(t7476 - 1.*t7220*t7265*t7486 + t7151*t7265*t7490) + t7220*t7265*(t7316*t7486 + t7414*t7490 + t7494);
  p_output1[10]=t7259*(-1.*t7316*t7486 - 1.*t7414*t7490 + t7501) + t7316*(t7259*t7486 + t7374*t7490 + t7507);
  p_output1[11]=t7259*(t7220*t7265*t7486 - 1.*t7151*t7265*t7490 + t7513) + t7220*t7265*(-1.*t7259*t7486 - 1.*t7374*t7490 + t7518);
  p_output1[12]=t7395*(t7476 - 1.*t7265*t7484) + t7386*(t7279*t7480 + t7287*t7484 + t7494);
  p_output1[13]=t7338*(-1.*t7287*t7484 + t7501 + t7534) + t7395*(t7253*t7484 + t7507 + t7538);
  p_output1[14]=t7338*(t7265*t7484 + t7513) + t7386*(-1.*t7150*t7480 - 1.*t7253*t7484 + t7518);
  p_output1[15]=t7279*(t7229*t7469 - 1.*t7238*t7473);
  p_output1[16]=t7150*(-1.*t7150*t7238*t7469 - 1.*t7150*t7229*t7473 + t7534) + t7279*(t7233*t7238*t7469 + t7229*t7233*t7473 + t7538);
  p_output1[17]=t7150*(-1.*t7229*t7469 + t7238*t7473);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t7233 + 0.15121*t7279;
  p_output1[28]=-0.15121 + t7150*(-1.*t7150*t7466 + t7534) + t7279*(t7233*t7466 + t7538);
  p_output1[29]=0;
  p_output1[30]=0.28121*t7134 - 0.305*t3812*t7134 + t7134*t7459;
  p_output1[31]=0;
  p_output1[32]=0.28121*t3812 + 0.305*Power(t7134,2) + t3812*t7459;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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

#include "Jh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
