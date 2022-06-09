/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:25 GMT+02:00
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
  double t9033;
  double t2725;
  double t2807;
  double t9053;
  double t10376;
  double t10386;
  double t10411;
  double t10370;
  double t10420;
  double t10369;
  double t10421;
  double t10368;
  double t8996;
  double t9118;
  double t9135;
  double t9195;
  double t10419;
  double t10425;
  double t10426;
  double t10436;
  double t10432;
  double t10433;
  double t10434;
  double t10430;
  double t10440;
  double t10444;
  double t10445;
  double t10512;
  double t10515;
  double t10541;
  double t10542;
  double t10543;
  double t10546;
  double t10547;
  double t10549;
  double t10550;
  double t10551;
  double t10552;
  double t10555;
  double t10556;
  double t10578;
  double t10590;
  double t10601;
  double t10531;
  double t10533;
  double t10540;
  double t10558;
  double t10560;
  double t10628;
  double t10629;
  double t10630;
  double t10632;
  double t10662;
  double t10673;
  double t10674;
  double t10685;
  double t10748;
  double t10752;
  double t10561;
  double t10622;
  double t10625;
  double t10482;
  double t10485;
  double t10486;
  double t10488;
  double t10492;
  double t10493;
  double t10494;
  double t10495;
  double t10498;
  double t10681;
  double t10766;
  double t10768;
  double t10777;
  double t10778;
  double t10784;
  double t10796;
  double t10797;
  double t10798;
  double t10506;
  double t10507;
  double t10511;
  double t10627;
  double t10801;
  double t10341;
  double t10427;
  double t10429;
  double t10836;
  double t10844;
  double t10847;
  double t11398;
  double t11409;
  double t11418;
  double t11423;
  double t11546;
  double t11562;
  t9033 = Cos(var1[10]);
  t2725 = Cos(var1[11]);
  t2807 = Sin(var1[10]);
  t9053 = Sin(var1[11]);
  t10376 = -1.*t9033*t2725;
  t10386 = -1.*t2807*t9053;
  t10411 = t10376 + t10386;
  t10370 = Cos(var1[5]);
  t10420 = Sin(var1[9]);
  t10369 = Cos(var1[9]);
  t10421 = Sin(var1[5]);
  t10368 = Cos(var1[4]);
  t8996 = -1.*t2725*t2807;
  t9118 = t9033*t9053;
  t9135 = t8996 + t9118;
  t9195 = Sin(var1[4]);
  t10419 = t10369*t10370*t10411;
  t10425 = -1.*t10420*t10411*t10421;
  t10426 = t10419 + t10425;
  t10436 = Sin(var1[3]);
  t10432 = t10370*t10420*t10411;
  t10433 = t10369*t10411*t10421;
  t10434 = t10432 + t10433;
  t10430 = Cos(var1[3]);
  t10440 = t10368*t9135;
  t10444 = -1.*t9195*t10426;
  t10445 = t10440 + t10444;
  t10512 = -1.*t10369;
  t10515 = 1. + t10512;
  t10541 = -1.*t9033;
  t10542 = 1. + t10541;
  t10543 = -0.28121*t10542;
  t10546 = -1.*t2725;
  t10547 = 1. + t10546;
  t10549 = -0.50321*t10547;
  t10550 = -0.19821*t2725;
  t10551 = t10549 + t10550;
  t10552 = t9033*t10551;
  t10555 = 0.305*t2807*t9053;
  t10556 = t10543 + t10552 + t10555;
  t10578 = -0.15121*t10515;
  t10590 = t10369*t10556;
  t10601 = t10578 + t10590;
  t10531 = 0.15121*t10515;
  t10533 = 0.15121*t10369;
  t10540 = 0.15121*t10420;
  t10558 = t10420*t10556;
  t10560 = t10531 + t10533 + t10540 + t10558;
  t10628 = t10370*t10420;
  t10629 = t10369*t10421;
  t10630 = t10628 + t10629;
  t10632 = 0.28121*t2807;
  t10662 = t10551*t2807;
  t10673 = -0.305*t9033*t9053;
  t10674 = t10632 + t10662 + t10673;
  t10685 = t10370*t10601;
  t10748 = -1.*t10560*t10421;
  t10752 = t10685 + t10748;
  t10561 = t10370*t10560;
  t10622 = t10601*t10421;
  t10625 = t10561 + t10622;
  t10482 = t9033*t2725;
  t10485 = t2807*t9053;
  t10486 = t10482 + t10485;
  t10488 = t10486*t9195;
  t10492 = t10369*t10370*t9135;
  t10493 = -1.*t10420*t9135*t10421;
  t10494 = t10492 + t10493;
  t10495 = t10368*t10494;
  t10498 = t10488 + t10495;
  t10681 = t10674*t9195;
  t10766 = t10368*t10752;
  t10768 = t10681 + t10766;
  t10777 = t10368*t10674;
  t10778 = -1.*t9195*t10752;
  t10784 = t10777 + t10778;
  t10796 = t10370*t10420*t9135;
  t10797 = t10369*t9135*t10421;
  t10798 = t10796 + t10797;
  t10506 = -1.*t10369*t10370;
  t10507 = t10420*t10421;
  t10511 = t10506 + t10507;
  t10627 = -1.*t10511*t10625;
  t10801 = t10798*t10625;
  t10341 = t9135*t9195;
  t10427 = t10368*t10426;
  t10429 = t10341 + t10427;
  t10836 = t10368*t10486;
  t10844 = -1.*t9195*t10494;
  t10847 = t10836 + t10844;
  t11398 = -1.*t10798*t10625;
  t11409 = t10434*t10625;
  t11418 = -1.*t10674*t10486;
  t11423 = t10674*t9135;
  t11546 = t10511*t10625;
  t11562 = -1.*t10434*t10625;
  p_output1[0]=t10429;
  p_output1[1]=t10430*t10434 - 1.*t10436*t10445;
  p_output1[2]=t10434*t10436 + t10430*t10445;
  p_output1[3]=t10368*t10630*(t10498*t10768 + t10801 + t10784*t10847) + t10498*(t10627 - 1.*t10368*t10630*t10768 + t10630*t10784*t9195);
  p_output1[4]=(t10627 - 1.*t10630*t10752)*t10798 + t10511*(t10486*t10674 + t10494*t10752 + t10801);
  p_output1[5]=t10486*(t10369*t10560 - 1.*t10420*t10601);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t10411 + 0.15121*t10486;
  p_output1[10]=0.28121*t9053 + t10551*t9053 - 0.305*t2725*t9053;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10368*t10630;
  p_output1[19]=t10430*t10511 + t10436*t10630*t9195;
  p_output1[20]=t10436*t10511 - 1.*t10430*t10630*t9195;
  p_output1[21]=t10429*(-1.*t10498*t10768 - 1.*t10784*t10847 + t11398) + t10498*(t10429*t10768 + t10445*t10784 + t11409);
  p_output1[22]=t10434*(-1.*t10494*t10752 + t11398 + t11418) + t10798*(t10426*t10752 + t11409 + t11423);
  p_output1[23]=t10486*(t10411*t10420*t10560 + t10369*t10411*t10601 + t11423) + t9135*(t11418 - 1.*t10420*t10560*t9135 - 1.*t10369*t10601*t9135);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t10486*(t10411*t10556 + t11423) + t9135*(t11418 - 1.*t10556*t9135);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t10498;
  p_output1[37]=t10430*t10798 - 1.*t10436*t10847;
  p_output1[38]=t10436*t10798 + t10430*t10847;
  p_output1[39]=t10368*t10630*(-1.*t10429*t10768 - 1.*t10445*t10784 + t11562) + t10429*(t10368*t10630*t10768 + t11546 - 1.*t10630*t10784*t9195);
  p_output1[40]=t10434*(t10630*t10752 + t11546) + t10511*(-1.*t10426*t10752 + t11562 - 1.*t10674*t9135);
  p_output1[41]=(-1.*t10369*t10560 + t10420*t10601)*t9135;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t2725 + t10551*t2725 + 0.305*Power(t9053,2);
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
