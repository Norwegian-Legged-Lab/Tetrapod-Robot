/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:25 GMT+02:00
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
  double t9118;
  double t2807;
  double t8996;
  double t9135;
  double t10426;
  double t10427;
  double t10430;
  double t10425;
  double t10433;
  double t10419;
  double t10434;
  double t10386;
  double t9033;
  double t10341;
  double t10369;
  double t10370;
  double t10432;
  double t10436;
  double t10440;
  double t10494;
  double t10486;
  double t10488;
  double t10492;
  double t10485;
  double t10495;
  double t10498;
  double t10506;
  double t10561;
  double t10578;
  double t10628;
  double t10629;
  double t10632;
  double t10662;
  double t10673;
  double t10674;
  double t10681;
  double t10685;
  double t10766;
  double t10777;
  double t10778;
  double t10836;
  double t10844;
  double t10847;
  double t10590;
  double t10601;
  double t10622;
  double t10796;
  double t10797;
  double t11423;
  double t11546;
  double t18474;
  double t18480;
  double t18481;
  double t18482;
  double t18483;
  double t18617;
  double t18623;
  double t18624;
  double t10801;
  double t11398;
  double t11409;
  double t10540;
  double t10541;
  double t10543;
  double t10546;
  double t10547;
  double t10549;
  double t10550;
  double t10551;
  double t10552;
  double t18484;
  double t18626;
  double t18632;
  double t18638;
  double t18639;
  double t18643;
  double t18664;
  double t18668;
  double t18670;
  double t10555;
  double t10556;
  double t10558;
  double t11418;
  double t18671;
  double t10376;
  double t10444;
  double t10482;
  double t18675;
  double t18679;
  double t18681;
  double t18732;
  double t18737;
  double t18743;
  double t18747;
  double t18776;
  double t18781;
  t9118 = Cos(var1[10]);
  t2807 = Cos(var1[11]);
  t8996 = Sin(var1[10]);
  t9135 = Sin(var1[11]);
  t10426 = -1.*t9118*t2807;
  t10427 = -1.*t8996*t9135;
  t10430 = t10426 + t10427;
  t10425 = Cos(var1[5]);
  t10433 = Sin(var1[9]);
  t10419 = Cos(var1[9]);
  t10434 = Sin(var1[5]);
  t10386 = Cos(var1[4]);
  t9033 = -1.*t2807*t8996;
  t10341 = t9118*t9135;
  t10369 = t9033 + t10341;
  t10370 = Sin(var1[4]);
  t10432 = t10419*t10425*t10430;
  t10436 = -1.*t10433*t10430*t10434;
  t10440 = t10432 + t10436;
  t10494 = Sin(var1[3]);
  t10486 = t10425*t10433*t10430;
  t10488 = t10419*t10430*t10434;
  t10492 = t10486 + t10488;
  t10485 = Cos(var1[3]);
  t10495 = t10386*t10369;
  t10498 = -1.*t10370*t10440;
  t10506 = t10495 + t10498;
  t10561 = -1.*t10419;
  t10578 = 1. + t10561;
  t10628 = -1.*t9118;
  t10629 = 1. + t10628;
  t10632 = -0.28121*t10629;
  t10662 = -1.*t2807;
  t10673 = 1. + t10662;
  t10674 = -0.50321*t10673;
  t10681 = -0.19821*t2807;
  t10685 = t10674 + t10681;
  t10766 = t9118*t10685;
  t10777 = 0.305*t8996*t9135;
  t10778 = t10632 + t10766 + t10777;
  t10836 = -0.15121*t10578;
  t10844 = t10419*t10778;
  t10847 = t10836 + t10844;
  t10590 = 0.15121*t10578;
  t10601 = 0.15121*t10419;
  t10622 = 0.15121*t10433;
  t10796 = t10433*t10778;
  t10797 = t10590 + t10601 + t10622 + t10796;
  t11423 = t10425*t10433;
  t11546 = t10419*t10434;
  t18474 = t11423 + t11546;
  t18480 = 0.28121*t8996;
  t18481 = t10685*t8996;
  t18482 = -0.305*t9118*t9135;
  t18483 = t18480 + t18481 + t18482;
  t18617 = t10425*t10847;
  t18623 = -1.*t10797*t10434;
  t18624 = t18617 + t18623;
  t10801 = t10425*t10797;
  t11398 = t10847*t10434;
  t11409 = t10801 + t11398;
  t10540 = t9118*t2807;
  t10541 = t8996*t9135;
  t10543 = t10540 + t10541;
  t10546 = t10543*t10370;
  t10547 = t10419*t10425*t10369;
  t10549 = -1.*t10433*t10369*t10434;
  t10550 = t10547 + t10549;
  t10551 = t10386*t10550;
  t10552 = t10546 + t10551;
  t18484 = t18483*t10370;
  t18626 = t10386*t18624;
  t18632 = t18484 + t18626;
  t18638 = t10386*t18483;
  t18639 = -1.*t10370*t18624;
  t18643 = t18638 + t18639;
  t18664 = t10425*t10433*t10369;
  t18668 = t10419*t10369*t10434;
  t18670 = t18664 + t18668;
  t10555 = -1.*t10419*t10425;
  t10556 = t10433*t10434;
  t10558 = t10555 + t10556;
  t11418 = -1.*t10558*t11409;
  t18671 = t18670*t11409;
  t10376 = t10369*t10370;
  t10444 = t10386*t10440;
  t10482 = t10376 + t10444;
  t18675 = t10386*t10543;
  t18679 = -1.*t10370*t10550;
  t18681 = t18675 + t18679;
  t18732 = -1.*t18670*t11409;
  t18737 = t10492*t11409;
  t18743 = -1.*t18483*t10543;
  t18747 = t18483*t10369;
  t18776 = t10558*t11409;
  t18781 = -1.*t10492*t11409;
  p_output1[0]=t10482;
  p_output1[1]=t10485*t10492 - 1.*t10494*t10506;
  p_output1[2]=t10492*t10494 + t10485*t10506;
  p_output1[3]=t10552*(t11418 - 1.*t10386*t18474*t18632 + t10370*t18474*t18643) + t10386*t18474*(t10552*t18632 + t18671 + t18643*t18681);
  p_output1[4]=(t11418 - 1.*t18474*t18624)*t18670 + t10558*(t10543*t18483 + t10550*t18624 + t18671);
  p_output1[5]=t10543*(t10419*t10797 - 1.*t10433*t10847);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t10430 + 0.15121*t10543;
  p_output1[10]=0.28121*t9135 + t10685*t9135 - 0.305*t2807*t9135;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10386*t18474;
  p_output1[19]=t10485*t10558 + t10370*t10494*t18474;
  p_output1[20]=t10494*t10558 - 1.*t10370*t10485*t18474;
  p_output1[21]=t10482*(-1.*t10552*t18632 - 1.*t18643*t18681 + t18732) + t10552*(t10482*t18632 + t10506*t18643 + t18737);
  p_output1[22]=t10492*(-1.*t10550*t18624 + t18732 + t18743) + t18670*(t10440*t18624 + t18737 + t18747);
  p_output1[23]=t10369*(-1.*t10369*t10433*t10797 - 1.*t10369*t10419*t10847 + t18743) + t10543*(t10430*t10433*t10797 + t10419*t10430*t10847 + t18747);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t10369*(-1.*t10369*t10778 + t18743) + t10543*(t10430*t10778 + t18747);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t10552;
  p_output1[37]=t10485*t18670 - 1.*t10494*t18681;
  p_output1[38]=t10494*t18670 + t10485*t18681;
  p_output1[39]=t10482*(t10386*t18474*t18632 - 1.*t10370*t18474*t18643 + t18776) + t10386*t18474*(-1.*t10482*t18632 - 1.*t10506*t18643 + t18781);
  p_output1[40]=t10492*(t18474*t18624 + t18776) + t10558*(-1.*t10369*t18483 - 1.*t10440*t18624 + t18781);
  p_output1[41]=t10369*(-1.*t10419*t10797 + t10433*t10847);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t2807 + t10685*t2807 + 0.305*Power(t9135,2);
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
