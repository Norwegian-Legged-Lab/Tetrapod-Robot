/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:45 GMT+02:00
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
  double t384;
  double t304;
  double t336;
  double t386;
  double t380;
  double t399;
  double t400;
  double t673;
  double t483;
  double t219;
  double t649;
  double t715;
  double t654;
  double t660;
  double t668;
  double t653;
  double t670;
  double t721;
  double t724;
  double t14166;
  double t14234;
  double t1725;
  double t2047;
  double t7963;
  double t10772;
  double t11751;
  double t14049;
  double t14178;
  double t14214;
  double t14215;
  double t14259;
  double t14264;
  double t14294;
  double t22295;
  double t22300;
  double t22301;
  double t22329;
  double t22350;
  double t22351;
  double t22424;
  double t22428;
  double t22435;
  double t1211;
  double t14138;
  double t14149;
  double t22472;
  double t22473;
  double t22479;
  double t22481;
  double t22482;
  double t22483;
  double t22488;
  double t22489;
  double t22490;
  double t851;
  double t860;
  double t862;
  double t22471;
  double t22480;
  double t22491;
  double t22492;
  double t22503;
  double t22504;
  double t22505;
  double t22506;
  double t22507;
  double t22508;
  double t22467;
  double t22468;
  double t22469;
  double t22470;
  double t22493;
  double t22495;
  double t22512;
  double t22513;
  double t22514;
  double t22520;
  double t22521;
  double t22522;
  double t22502;
  double t22509;
  double t22510;
  double t22519;
  double t22523;
  double t22524;
  double t22530;
  double t22531;
  double t22532;
  double t557;
  double t727;
  double t749;
  double t22511;
  double t22539;
  double t22545;
  double t22560;
  double t22571;
  double t22576;
  double t22582;
  double t22586;
  double t22595;
  double t22591;
  double t22601;
  double t22612;
  double t22632;
  double t22627;
  t384 = Cos(var1[16]);
  t304 = Cos(var1[17]);
  t336 = Sin(var1[16]);
  t386 = Sin(var1[17]);
  t380 = t304*t336;
  t399 = -1.*t384*t386;
  t400 = t380 + t399;
  t673 = Sin(var1[15]);
  t483 = Sin(var1[4]);
  t219 = Cos(var1[15]);
  t649 = Cos(var1[4]);
  t715 = Sin(var1[5]);
  t654 = t384*t304;
  t660 = t336*t386;
  t668 = t654 + t660;
  t653 = Cos(var1[5]);
  t670 = t653*t668;
  t721 = t673*t400*t715;
  t724 = t670 + t721;
  t14166 = Cos(var1[3]);
  t14234 = Sin(var1[3]);
  t1725 = -1.*t304*t336;
  t2047 = t384*t386;
  t7963 = t1725 + t2047;
  t10772 = t653*t7963;
  t11751 = t673*t668*t715;
  t14049 = t10772 + t11751;
  t14178 = -1.*t653*t673*t400;
  t14214 = t668*t715;
  t14215 = t14178 + t14214;
  t14259 = t219*t649*t400;
  t14264 = -1.*t483*t724;
  t14294 = t14259 + t14264;
  t22295 = t649*t673;
  t22300 = t219*t483*t715;
  t22301 = t22295 + t22300;
  t22329 = -1.*t653*t673*t668;
  t22350 = t7963*t715;
  t22351 = t22329 + t22350;
  t22424 = t219*t649*t668;
  t22428 = -1.*t483*t14049;
  t22435 = t22424 + t22428;
  t1211 = t219*t668*t483;
  t14138 = t649*t14049;
  t14149 = t1211 + t14138;
  t22472 = -0.0641*t304;
  t22473 = -0.28*t386;
  t22479 = t22472 + t22473;
  t22481 = -1.*t304;
  t22482 = 1. + t22481;
  t22483 = -0.575*t22482;
  t22488 = -0.295*t304;
  t22489 = -0.0641*t386;
  t22490 = t22483 + t22488 + t22489;
  t851 = t673*t483;
  t860 = -1.*t219*t649*t715;
  t862 = t851 + t860;
  t22471 = 0.325*t336;
  t22480 = t384*t22479;
  t22491 = t336*t22490;
  t22492 = t22471 + t22480 + t22491;
  t22503 = -1.*t384;
  t22504 = 1. + t22503;
  t22505 = -0.325*t22504;
  t22506 = -1.*t336*t22479;
  t22507 = t384*t22490;
  t22508 = t22505 + t22506 + t22507;
  t22467 = -1.*t219;
  t22468 = 1. + t22467;
  t22469 = -0.1575*t22468;
  t22470 = -0.2255*t219;
  t22493 = -1.*t673*t22492;
  t22495 = t22469 + t22470 + t22493;
  t22512 = -0.068*t673;
  t22513 = t219*t22492;
  t22514 = t22512 + t22513;
  t22520 = t653*t22508;
  t22521 = -1.*t22495*t715;
  t22522 = t22520 + t22521;
  t22502 = t653*t22495;
  t22509 = t22508*t715;
  t22510 = t22502 + t22509;
  t22519 = t22514*t483;
  t22523 = t649*t22522;
  t22524 = t22519 + t22523;
  t22530 = t649*t22514;
  t22531 = -1.*t483*t22522;
  t22532 = t22530 + t22531;
  t557 = t219*t400*t483;
  t727 = t649*t724;
  t749 = t557 + t727;
  t22511 = -1.*t219*t653*t22510;
  t22539 = t22510*t22351;
  t22545 = t22510*t14215;
  t22560 = -1.*t22510*t22351;
  t22571 = t219*t653*t22510;
  t22576 = -1.*t22510*t14215;
  t22582 = -1.*t673*t22514;
  t22586 = t219*t22514*t668;
  t22595 = -1.*t219*t22514*t668;
  t22591 = t219*t22514*t400;
  t22601 = t673*t22514;
  t22612 = -1.*t219*t22514*t400;
  t22632 = t22508*t668;
  t22627 = -1.*t22508*t7963;
  p_output1[0]=t749;
  p_output1[1]=t862;
  p_output1[2]=t14149;
  p_output1[3]=t14166*t14215 - 1.*t14234*t14294;
  p_output1[4]=-1.*t14234*t22301 + t14166*t219*t653;
  p_output1[5]=t14166*t22351 - 1.*t14234*t22435;
  p_output1[6]=t14215*t14234 + t14166*t14294;
  p_output1[7]=t14166*t22301 + t14234*t219*t653;
  p_output1[8]=t14234*t22351 + t14166*t22435;
  p_output1[9]=(t14149*t22524 + t22435*t22532 + t22539)*t862 + t14149*(t22511 - 1.*t22301*t22532 - 1.*t22524*t862);
  p_output1[10]=(-1.*t14149*t22524 - 1.*t22435*t22532 + t22560)*t749 + t14149*(t14294*t22532 + t22545 + t22524*t749);
  p_output1[11]=(-1.*t14294*t22532 + t22576 - 1.*t22524*t749)*t862 + t749*(t22301*t22532 + t22571 + t22524*t862);
  p_output1[12]=t219*(t14049*t22522 + t22539 + t22586)*t653 + t22351*(t22511 + t22582 + t219*t22522*t715);
  p_output1[13]=t14215*(-1.*t14049*t22522 + t22560 + t22595) + t22351*(t22545 + t22591 + t22522*t724);
  p_output1[14]=t14215*(t22571 + t22601 - 1.*t219*t22522*t715) + t219*t653*(t22576 + t22612 - 1.*t22522*t724);
  p_output1[15]=t219*(-1.*t219*t22495 + t22582)*t668 + t673*(t22586 - 1.*t22495*t668*t673 + t22508*t7963);
  p_output1[16]=t219*t668*(t22591 + t22632 - 1.*t22495*t400*t673) + t219*t400*(t22595 + t22627 + t22495*t668*t673);
  p_output1[17]=t219*(t219*t22495 + t22601)*t400 + t673*(t22612 - 1.*t22508*t668 + t22495*t400*t673);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.1575*t400 + 0.2255*t7963;
  p_output1[46]=t668*(t22627 - 1.*t22492*t668) + (t22632 + t22492*t400)*t7963;
  p_output1[47]=-0.068*t668;
  p_output1[48]=-1.*t22479*t304 - 0.325*t386 - 1.*t22490*t386;
  p_output1[49]=0;
  p_output1[50]=0.325*t304 + t22490*t304 - 1.*t22479*t386;
  p_output1[51]=-0.0641;
  p_output1[52]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
