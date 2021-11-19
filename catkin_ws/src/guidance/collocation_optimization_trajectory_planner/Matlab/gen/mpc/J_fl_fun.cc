/*
 * Automatically Generated from Mathematica.
 * Tue 16 Nov 2021 16:05:47 GMT+01:00
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
  double t93;
  double t72;
  double t200;
  double t230;
  double t219;
  double t220;
  double t228;
  double t235;
  double t332;
  double t336;
  double t248;
  double t315;
  double t329;
  double t330;
  double t376;
  double t378;
  double t379;
  double t340;
  double t344;
  double t372;
  double t401;
  double t402;
  double t403;
  double t406;
  double t417;
  double t387;
  double t389;
  double t392;
  double t428;
  double t431;
  double t383;
  double t384;
  double t385;
  double t436;
  double t439;
  double t444;
  double t446;
  double t447;
  double t448;
  double t435;
  double t441;
  double t442;
  double t510;
  double t512;
  double t515;
  double t452;
  double t454;
  double t455;
  double t464;
  double t469;
  double t474;
  double t490;
  double t491;
  double t500;
  double t503;
  double t477;
  double t479;
  double t485;
  double t35;
  double t555;
  double t556;
  double t558;
  double t544;
  double t545;
  double t548;
  double t458;
  double t461;
  double t462;
  double t595;
  double t587;
  double t602;
  double t589;
  double t590;
  double t535;
  double t538;
  double t539;
  double t605;
  double t606;
  double t568;
  double t569;
  double t570;
  double t622;
  double t623;
  double t624;
  double t626;
  double t628;
  double t629;
  double t630;
  double t632;
  double t633;
  double t634;
  double t635;
  double t627;
  double t631;
  double t636;
  double t637;
  double t643;
  double t644;
  double t645;
  double t646;
  double t604;
  double t607;
  double t609;
  double t610;
  double t592;
  double t593;
  double t638;
  double t639;
  double t640;
  double t641;
  double t647;
  double t648;
  double t649;
  double t650;
  double t661;
  double t662;
  double t663;
  double t664;
  double t669;
  double t670;
  double t671;
  double t672;
  double t612;
  double t617;
  double t618;
  double t619;
  double t679;
  double t680;
  double t681;
  double t682;
  double t652;
  double t654;
  double t655;
  double t659;
  double t691;
  double t692;
  double t693;
  double t694;
  double t703;
  double t704;
  double t705;
  double t706;
  t93 = Sin(var1[3]);
  t72 = Cos(var1[3]);
  t200 = Cos(var1[4]);
  t230 = Sin(var1[4]);
  t219 = var1[1]*t72*t200;
  t220 = var1[2]*t200*t93;
  t228 = -1.*var1[0]*t72*t200;
  t235 = var1[2]*t230;
  t332 = Cos(var1[5]);
  t336 = Sin(var1[5]);
  t248 = -1.*var1[0]*t200*t93;
  t315 = -1.*var1[1]*t230;
  t329 = -1.*t200*t93;
  t330 = t72*t200;
  t376 = t72*t332;
  t378 = -1.*t93*t230*t336;
  t379 = t376 + t378;
  t340 = t332*t93*t230;
  t344 = t72*t336;
  t372 = t340 + t344;
  t401 = Cos(var1[6]);
  t402 = -1.*t401;
  t403 = 1. + t402;
  t406 = 0.15121*t403;
  t417 = Sin(var1[6]);
  t387 = t332*t93;
  t389 = t72*t230*t336;
  t392 = t387 + t389;
  t428 = -0.15121*t417;
  t431 = t406 + t428;
  t383 = -1.*t72*t332*t230;
  t384 = t93*t336;
  t385 = t383 + t384;
  t436 = 0.15121*t417;
  t439 = t406 + t436;
  t444 = -1.*var1[2];
  t446 = -1.*t392*t431;
  t447 = -1.*t385*t439;
  t448 = t444 + t446 + t447;
  t435 = t379*t431;
  t441 = t372*t439;
  t442 = var1[1] + t435 + t441;
  t510 = t392*t431;
  t512 = t385*t439;
  t515 = var1[2] + t510 + t512;
  t452 = -1.*t200*t401*t336;
  t454 = -1.*t200*t332*t417;
  t455 = t452 + t454;
  t464 = t401*t379;
  t469 = -1.*t372*t417;
  t474 = t464 + t469;
  t490 = -1.*var1[0];
  t491 = t200*t336*t431;
  t500 = -1.*t200*t332*t439;
  t503 = t490 + t491 + t500;
  t477 = t401*t392;
  t479 = -1.*t385*t417;
  t485 = t477 + t479;
  t35 = -1.*var1[1];
  t555 = -1.*t379*t431;
  t556 = -1.*t372*t439;
  t558 = t35 + t555 + t556;
  t544 = -1.*t200*t336*t431;
  t545 = t200*t332*t439;
  t548 = var1[0] + t544 + t545;
  t458 = t200*t332*t401;
  t461 = -1.*t200*t336*t417;
  t462 = t458 + t461;
  t595 = Sin(var1[7]);
  t587 = Cos(var1[7]);
  t602 = -1. + t587;
  t589 = -1.*t587;
  t590 = 1. + t589;
  t535 = t401*t372;
  t538 = t379*t417;
  t539 = t535 + t538;
  t605 = 1.6e-11*t602;
  t606 = 1. + t605;
  t568 = t401*t385;
  t569 = t392*t417;
  t570 = t568 + t569;
  t622 = -1.2484e-7*var1[7];
  t623 = -1.5499600000248e-7*t590;
  t624 = 1.124840000016e-6*t595;
  t626 = t622 + t623 + t624;
  t628 = 0.281210000008499*t590;
  t629 = 0.03874900000062*t595;
  t630 = t628 + t629;
  t632 = 4.9936e-13*var1[7];
  t633 = -0.03874900000062*t590;
  t634 = 0.281210000004*t595;
  t635 = t632 + t633 + t634;
  t627 = t474*t626;
  t631 = t539*t630;
  t636 = -1.*t200*t93*t635;
  t637 = var1[1] + t435 + t441 + t627 + t631 + t636;
  t643 = -1.*t485*t626;
  t644 = -1.*t570*t630;
  t645 = -1.*t72*t200*t635;
  t646 = t444 + t446 + t447 + t643 + t644 + t645;
  t604 = 4.e-6*t602*t230;
  t607 = t606*t455;
  t609 = 4.e-6*t462*t595;
  t610 = t604 + t607 + t609;
  t592 = -1.000000000016*t590;
  t593 = 1. + t592;
  t638 = 4.e-6*t72*t200*t602;
  t639 = t606*t485;
  t640 = 4.e-6*t570*t595;
  t641 = t638 + t639 + t640;
  t647 = -4.e-6*t200*t602*t93;
  t648 = t606*t474;
  t649 = 4.e-6*t539*t595;
  t650 = t647 + t648 + t649;
  t661 = -1.*t200*t587*t93;
  t662 = 4.e-6*t602*t474;
  t663 = t539*t595;
  t664 = t661 + t662 + t663;
  t669 = t485*t626;
  t670 = t570*t630;
  t671 = t72*t200*t635;
  t672 = var1[2] + t510 + t512 + t669 + t670 + t671;
  t612 = t587*t230;
  t617 = 4.e-6*t602*t455;
  t618 = t462*t595;
  t619 = t612 + t617 + t618;
  t679 = -1.*t455*t626;
  t680 = -1.*t462*t630;
  t681 = -1.*t230*t635;
  t682 = t490 + t491 + t500 + t679 + t680 + t681;
  t652 = t72*t200*t587;
  t654 = 4.e-6*t602*t485;
  t655 = t570*t595;
  t659 = t652 + t654 + t655;
  t691 = -1.*t474*t626;
  t692 = -1.*t539*t630;
  t693 = t200*t93*t635;
  t694 = t35 + t555 + t556 + t691 + t692 + t693;
  t703 = t455*t626;
  t704 = t462*t630;
  t705 = t230*t635;
  t706 = var1[0] + t544 + t545 + t703 + t704 + t705;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=var1[2];
  p_output1[20]=t35;
  p_output1[21]=1.;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=t93*var1[1] - 1.*t72*var1[2];
  p_output1[25]=-1.*t93*var1[0];
  p_output1[26]=t72*var1[0];
  p_output1[27]=0;
  p_output1[28]=t72;
  p_output1[29]=t93;
  p_output1[30]=t219 + t220;
  p_output1[31]=t228 + t235;
  p_output1[32]=t248 + t315;
  p_output1[33]=t230;
  p_output1[34]=t329;
  p_output1[35]=t330;
  p_output1[36]=t219 + t220 + 0.15121*t200*t332 + 0.15121*t200*t336;
  p_output1[37]=t228 + t235 + 0.15121*t372 - 0.15121*t379;
  p_output1[38]=t248 + t315 + 0.15121*t385 - 0.15121*t392;
  p_output1[39]=t230;
  p_output1[40]=t329;
  p_output1[41]=t330;
  p_output1[42]=0.28121*t230 + 1.e-6*t455 + 0.038749*t462 + t448*t474 + t442*t485 + 4.e-6*(-1.*t200*t442*t72 + t200*t448*t93);
  p_output1[43]=1.e-6*t474 + t485*t503 + t455*t515 + 0.038749*t539 + 4.e-6*(-1.*t230*t515 - 1.*t200*t503*t72) - 0.28121*t200*t93;
  p_output1[44]=1.e-6*t485 + t474*t548 + t455*t558 + 0.038749*t570 + 0.28121*t200*t72 + 4.e-6*(-1.*t230*t558 + t200*t548*t93);
  p_output1[45]=-4.e-6*t230 + t452 + t454;
  p_output1[46]=t464 + t469 + 4.e-6*t200*t93;
  p_output1[47]=t477 + t479 - 4.e-6*t200*t72;
  p_output1[48]=0.038749*(t462*t593 - 1.*t230*t595 - 4.e-6*t455*t595) + 2.e-6*t610 + 0.50321*t619 + t637*t641 + t646*t650 + 4.e-6*(-1.*t637*t659 - 1.*t646*t664);
  p_output1[49]=2.e-6*t650 + 0.50321*t664 + t610*t672 + t641*t682 + 4.e-6*(-1.*t619*t672 - 1.*t659*t682) + 0.038749*(t539*t593 - 4.e-6*t474*t595 + t200*t595*t93);
  p_output1[50]=2.e-6*t641 + 0.50321*t659 + t610*t694 + t650*t706 + 4.e-6*(-1.*t619*t694 - 1.*t664*t706) + 0.038749*(t570*t593 - 4.e-6*t485*t595 - 1.*t200*t595*t72);
  p_output1[51]=4.e-6*(-1.*t230*t587 - 1.*t462*t595 - 4.e-6*t455*t602) + t604 + t607 + t609;
  p_output1[52]=t647 + t648 + t649 + 4.e-6*(-1.*t539*t595 - 4.e-6*t474*t602 + t200*t587*t93);
  p_output1[53]=t638 + t639 + t640 + 4.e-6*(-1.*t570*t595 - 4.e-6*t485*t602 - 1.*t200*t587*t72);
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_fl_fun.hh"

namespace SymFunction
{

void J_fl_fun_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
