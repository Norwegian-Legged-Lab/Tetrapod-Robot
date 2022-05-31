/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:55 GMT+02:00
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
  double t56314;
  double t56271;
  double t56286;
  double t56315;
  double t56342;
  double t56384;
  double t56392;
  double t56341;
  double t56406;
  double t56335;
  double t56426;
  double t56334;
  double t56296;
  double t56316;
  double t56330;
  double t56332;
  double t56394;
  double t56427;
  double t56432;
  double t56483;
  double t56468;
  double t56472;
  double t56477;
  double t56460;
  double t56490;
  double t56491;
  double t56492;
  double t56504;
  double t56507;
  double t56508;
  double t56544;
  double t56546;
  double t56552;
  double t56554;
  double t56558;
  double t56559;
  double t56561;
  double t56562;
  double t56564;
  double t56565;
  double t56568;
  double t56574;
  double t56575;
  double t56587;
  double t56588;
  double t56589;
  double t56547;
  double t56550;
  double t56551;
  double t56576;
  double t56577;
  double t56595;
  double t56596;
  double t56598;
  double t56599;
  double t56600;
  double t56601;
  double t56602;
  double t56604;
  double t56605;
  double t56606;
  double t56582;
  double t56592;
  double t56593;
  double t56503;
  double t56509;
  double t56526;
  double t56530;
  double t56531;
  double t56532;
  double t56603;
  double t56607;
  double t56608;
  double t56610;
  double t56612;
  double t56613;
  double t56617;
  double t56618;
  double t56619;
  double t56537;
  double t56538;
  double t56543;
  double t56594;
  double t56621;
  double t56333;
  double t56433;
  double t56437;
  double t56623;
  double t56624;
  double t56627;
  double t56663;
  double t56669;
  double t56675;
  double t56691;
  double t56759;
  double t56767;
  t56314 = Cos(var1[13]);
  t56271 = Cos(var1[14]);
  t56286 = Sin(var1[13]);
  t56315 = Sin(var1[14]);
  t56342 = t56314*t56271;
  t56384 = t56286*t56315;
  t56392 = t56342 + t56384;
  t56341 = Cos(var1[5]);
  t56406 = Sin(var1[12]);
  t56335 = Cos(var1[12]);
  t56426 = Sin(var1[5]);
  t56334 = Cos(var1[4]);
  t56296 = -1.*t56271*t56286;
  t56316 = t56314*t56315;
  t56330 = t56296 + t56316;
  t56332 = Sin(var1[4]);
  t56394 = t56335*t56341*t56392;
  t56427 = -1.*t56406*t56392*t56426;
  t56432 = t56394 + t56427;
  t56483 = Sin(var1[3]);
  t56468 = t56341*t56406*t56392;
  t56472 = t56335*t56392*t56426;
  t56477 = t56468 + t56472;
  t56460 = Cos(var1[3]);
  t56490 = t56334*t56330;
  t56491 = -1.*t56332*t56432;
  t56492 = t56490 + t56491;
  t56504 = t56271*t56286;
  t56507 = -1.*t56314*t56315;
  t56508 = t56504 + t56507;
  t56544 = -1.*t56335;
  t56546 = 1. + t56544;
  t56552 = -1.*t56314;
  t56554 = 1. + t56552;
  t56558 = 0.28121*t56554;
  t56559 = -1.*t56271;
  t56561 = 1. + t56559;
  t56562 = 0.50321*t56561;
  t56564 = 0.19821*t56271;
  t56565 = t56562 + t56564;
  t56568 = t56314*t56565;
  t56574 = -0.305*t56286*t56315;
  t56575 = t56558 + t56568 + t56574;
  t56587 = 0.15121*t56546;
  t56588 = t56335*t56575;
  t56589 = t56587 + t56588;
  t56547 = -0.15121*t56546;
  t56550 = -0.15121*t56335;
  t56551 = -0.15121*t56406;
  t56576 = t56406*t56575;
  t56577 = t56547 + t56550 + t56551 + t56576;
  t56595 = -1.*t56341*t56406;
  t56596 = -1.*t56335*t56426;
  t56598 = t56595 + t56596;
  t56599 = 0.28121*t56286;
  t56600 = -1.*t56565*t56286;
  t56601 = -0.305*t56314*t56315;
  t56602 = t56599 + t56600 + t56601;
  t56604 = t56341*t56589;
  t56605 = -1.*t56577*t56426;
  t56606 = t56604 + t56605;
  t56582 = t56341*t56577;
  t56592 = t56589*t56426;
  t56593 = t56582 + t56592;
  t56503 = t56392*t56332;
  t56509 = t56335*t56341*t56508;
  t56526 = -1.*t56406*t56508*t56426;
  t56530 = t56509 + t56526;
  t56531 = t56334*t56530;
  t56532 = t56503 + t56531;
  t56603 = t56602*t56332;
  t56607 = t56334*t56606;
  t56608 = t56603 + t56607;
  t56610 = t56334*t56602;
  t56612 = -1.*t56332*t56606;
  t56613 = t56610 + t56612;
  t56617 = t56341*t56406*t56508;
  t56618 = t56335*t56508*t56426;
  t56619 = t56617 + t56618;
  t56537 = t56335*t56341;
  t56538 = -1.*t56406*t56426;
  t56543 = t56537 + t56538;
  t56594 = -1.*t56543*t56593;
  t56621 = t56619*t56593;
  t56333 = t56330*t56332;
  t56433 = t56334*t56432;
  t56437 = t56333 + t56433;
  t56623 = t56334*t56392;
  t56624 = -1.*t56332*t56530;
  t56627 = t56623 + t56624;
  t56663 = -1.*t56619*t56593;
  t56669 = t56477*t56593;
  t56675 = -1.*t56602*t56392;
  t56691 = t56602*t56330;
  t56759 = t56543*t56593;
  t56767 = -1.*t56477*t56593;
  p_output1[0]=t56437;
  p_output1[1]=t56460*t56477 - 1.*t56483*t56492;
  p_output1[2]=t56477*t56483 + t56460*t56492;
  p_output1[3]=t56532*(t56594 - 1.*t56334*t56598*t56608 + t56332*t56598*t56613) + t56334*t56598*(t56532*t56608 + t56621 + t56613*t56627);
  p_output1[4]=(t56594 - 1.*t56598*t56606)*t56619 + t56543*(t56392*t56602 + t56530*t56606 + t56621);
  p_output1[5]=t56392*(-1.*t56335*t56577 + t56406*t56589);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t56315 - 0.305*t56271*t56315 - 1.*t56315*t56565;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t56334*t56598;
  p_output1[19]=t56460*t56543 + t56332*t56483*t56598;
  p_output1[20]=t56483*t56543 - 1.*t56332*t56460*t56598;
  p_output1[21]=t56437*(-1.*t56532*t56608 - 1.*t56613*t56627 + t56663) + t56532*(t56437*t56608 + t56492*t56613 + t56669);
  p_output1[22]=t56477*(-1.*t56530*t56606 + t56663 + t56675) + t56619*(t56432*t56606 + t56669 + t56691);
  p_output1[23]=t56330*(-1.*t56406*t56508*t56577 - 1.*t56335*t56508*t56589 + t56675) + t56392*(t56392*t56406*t56577 + t56335*t56392*t56589 + t56691);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t56330*(-1.*t56508*t56575 + t56675) + t56392*(t56392*t56575 + t56691);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t56532;
  p_output1[37]=t56460*t56619 - 1.*t56483*t56627;
  p_output1[38]=t56483*t56619 + t56460*t56627;
  p_output1[39]=t56437*(t56334*t56598*t56608 - 1.*t56332*t56598*t56613 + t56759) + t56334*t56598*(-1.*t56437*t56608 - 1.*t56492*t56613 + t56767);
  p_output1[40]=t56477*(t56598*t56606 + t56759) + t56543*(-1.*t56330*t56602 - 1.*t56432*t56606 + t56767);
  p_output1[41]=t56330*(t56335*t56577 - 1.*t56406*t56589);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t56330 - 0.15121*t56508;
  p_output1[49]=0.28121*t56271 + 0.305*Power(t56315,2) - 1.*t56271*t56565;
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
