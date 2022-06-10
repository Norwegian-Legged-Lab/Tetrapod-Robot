/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:56 GMT+02:00
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
  double t7132;
  double t7099;
  double t7110;
  double t7141;
  double t7118;
  double t7147;
  double t7266;
  double t7329;
  double t7341;
  double t7337;
  double t7338;
  double t7339;
  double t7348;
  double t547;
  double t7320;
  double t7287;
  double t7340;
  double t7350;
  double t7353;
  double t7368;
  double t7363;
  double t7364;
  double t7365;
  double t7359;
  double t7369;
  double t7370;
  double t7371;
  double t7459;
  double t7464;
  double t7468;
  double t7477;
  double t7478;
  double t7484;
  double t7485;
  double t7488;
  double t7489;
  double t7456;
  double t7473;
  double t7494;
  double t7496;
  double t7512;
  double t7517;
  double t7518;
  double t7519;
  double t7520;
  double t7521;
  double t7435;
  double t7445;
  double t7450;
  double t7455;
  double t7506;
  double t7507;
  double t7548;
  double t7549;
  double t7551;
  double t7561;
  double t7564;
  double t7565;
  double t7539;
  double t7543;
  double t7547;
  double t7510;
  double t7522;
  double t7529;
  double t7381;
  double t7393;
  double t7394;
  double t7558;
  double t7568;
  double t7569;
  double t7380;
  double t7398;
  double t7406;
  double t7407;
  double t7408;
  double t7432;
  double t7584;
  double t7585;
  double t7593;
  double t7606;
  double t7607;
  double t7608;
  double t7534;
  double t7609;
  double t7627;
  double t7633;
  double t7573;
  double t7575;
  double t7578;
  double t7296;
  double t7356;
  double t7358;
  double t7611;
  double t7612;
  double t7613;
  double t7684;
  double t7693;
  double t7711;
  double t7707;
  double t7736;
  double t7720;
  double t7773;
  double t7779;
  double t7791;
  double t7806;
  t7132 = Cos(var1[16]);
  t7099 = Cos(var1[17]);
  t7110 = Sin(var1[16]);
  t7141 = Sin(var1[17]);
  t7118 = t7099*t7110;
  t7147 = -1.*t7132*t7141;
  t7266 = t7118 + t7147;
  t7329 = Cos(var1[5]);
  t7341 = Sin(var1[15]);
  t7337 = t7132*t7099;
  t7338 = t7110*t7141;
  t7339 = t7337 + t7338;
  t7348 = Sin(var1[5]);
  t547 = Cos(var1[15]);
  t7320 = Cos(var1[4]);
  t7287 = Sin(var1[4]);
  t7340 = t7329*t7339;
  t7350 = t7341*t7266*t7348;
  t7353 = t7340 + t7350;
  t7368 = Sin(var1[3]);
  t7363 = -1.*t7329*t7341*t7266;
  t7364 = t7339*t7348;
  t7365 = t7363 + t7364;
  t7359 = Cos(var1[3]);
  t7369 = t547*t7320*t7266;
  t7370 = -1.*t7287*t7353;
  t7371 = t7369 + t7370;
  t7459 = -0.0641*t7099;
  t7464 = -0.28*t7141;
  t7468 = t7459 + t7464;
  t7477 = -1.*t7099;
  t7478 = 1. + t7477;
  t7484 = -0.575*t7478;
  t7485 = -0.295*t7099;
  t7488 = -0.0641*t7141;
  t7489 = t7484 + t7485 + t7488;
  t7456 = 0.325*t7110;
  t7473 = t7132*t7468;
  t7494 = t7110*t7489;
  t7496 = t7456 + t7473 + t7494;
  t7512 = -1.*t7132;
  t7517 = 1. + t7512;
  t7518 = -0.325*t7517;
  t7519 = -1.*t7110*t7468;
  t7520 = t7132*t7489;
  t7521 = t7518 + t7519 + t7520;
  t7435 = -1.*t547;
  t7445 = 1. + t7435;
  t7450 = -0.1575*t7445;
  t7455 = -0.2255*t547;
  t7506 = -1.*t7341*t7496;
  t7507 = t7450 + t7455 + t7506;
  t7548 = -0.068*t7341;
  t7549 = t547*t7496;
  t7551 = t7548 + t7549;
  t7561 = t7329*t7521;
  t7564 = -1.*t7507*t7348;
  t7565 = t7561 + t7564;
  t7539 = t7341*t7287;
  t7543 = -1.*t547*t7320*t7348;
  t7547 = t7539 + t7543;
  t7510 = t7329*t7507;
  t7522 = t7521*t7348;
  t7529 = t7510 + t7522;
  t7381 = -1.*t7099*t7110;
  t7393 = t7132*t7141;
  t7394 = t7381 + t7393;
  t7558 = t7551*t7287;
  t7568 = t7320*t7565;
  t7569 = t7558 + t7568;
  t7380 = t547*t7339*t7287;
  t7398 = t7329*t7394;
  t7406 = t7341*t7339*t7348;
  t7407 = t7398 + t7406;
  t7408 = t7320*t7407;
  t7432 = t7380 + t7408;
  t7584 = t7320*t7551;
  t7585 = -1.*t7287*t7565;
  t7593 = t7584 + t7585;
  t7606 = -1.*t7329*t7341*t7339;
  t7607 = t7394*t7348;
  t7608 = t7606 + t7607;
  t7534 = -1.*t547*t7329*t7529;
  t7609 = t7529*t7608;
  t7627 = -1.*t7341*t7551;
  t7633 = t547*t7551*t7339;
  t7573 = t7320*t7341;
  t7575 = t547*t7287*t7348;
  t7578 = t7573 + t7575;
  t7296 = t547*t7266*t7287;
  t7356 = t7320*t7353;
  t7358 = t7296 + t7356;
  t7611 = t547*t7320*t7339;
  t7612 = -1.*t7287*t7407;
  t7613 = t7611 + t7612;
  t7684 = t7529*t7365;
  t7693 = -1.*t7529*t7608;
  t7711 = -1.*t547*t7551*t7339;
  t7707 = t547*t7551*t7266;
  t7736 = t7521*t7339;
  t7720 = -1.*t7521*t7394;
  t7773 = t547*t7329*t7529;
  t7779 = -1.*t7529*t7365;
  t7791 = t7341*t7551;
  t7806 = -1.*t547*t7551*t7266;
  p_output1[0]=t7358;
  p_output1[1]=t7359*t7365 - 1.*t7368*t7371;
  p_output1[2]=t7365*t7368 + t7359*t7371;
  p_output1[3]=t7432*(t7534 - 1.*t7547*t7569 - 1.*t7578*t7593) + t7547*(t7432*t7569 + t7609 + t7593*t7613);
  p_output1[4]=t7608*(t7534 + t547*t7348*t7565 + t7627) + t547*t7329*(t7407*t7565 + t7609 + t7633);
  p_output1[5]=t547*t7339*(-1.*t547*t7507 + t7627) + t7341*(-1.*t7339*t7341*t7507 + t7394*t7521 + t7633);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t7266 + 0.2255*t7394;
  p_output1[16]=-0.325*t7141 - 1.*t7099*t7468 - 1.*t7141*t7489;
  p_output1[17]=-0.0641;
  p_output1[18]=t7547;
  p_output1[19]=t547*t7329*t7359 - 1.*t7368*t7578;
  p_output1[20]=t547*t7329*t7368 + t7359*t7578;
  p_output1[21]=t7432*(t7358*t7569 + t7371*t7593 + t7684) + t7358*(-1.*t7432*t7569 - 1.*t7593*t7613 + t7693);
  p_output1[22]=t7608*(t7353*t7565 + t7684 + t7707) + t7365*(-1.*t7407*t7565 + t7693 + t7711);
  p_output1[23]=t547*t7266*(t7339*t7341*t7507 + t7711 + t7720) + t547*t7339*(-1.*t7266*t7341*t7507 + t7707 + t7736);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t7339*(-1.*t7339*t7496 + t7720) + t7394*(t7266*t7496 + t7736);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t7432;
  p_output1[37]=t7359*t7608 - 1.*t7368*t7613;
  p_output1[38]=t7368*t7608 + t7359*t7613;
  p_output1[39]=t7358*(t7547*t7569 + t7578*t7593 + t7773) + t7547*(-1.*t7358*t7569 - 1.*t7371*t7593 + t7779);
  p_output1[40]=t7365*(-1.*t547*t7348*t7565 + t7773 + t7791) + t547*t7329*(-1.*t7353*t7565 + t7779 + t7806);
  p_output1[41]=t547*t7266*(t547*t7507 + t7791) + t7341*(t7266*t7341*t7507 - 1.*t7339*t7521 + t7806);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t7339;
  p_output1[52]=0.325*t7099 - 1.*t7141*t7468 + t7099*t7489;
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

#include "fRrFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
