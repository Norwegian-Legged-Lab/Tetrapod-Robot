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
  double t55278;
  double t55254;
  double t55276;
  double t55279;
  double t55414;
  double t55415;
  double t55416;
  double t55400;
  double t55412;
  double t55422;
  double t55406;
  double t55423;
  double t55395;
  double t55440;
  double t55441;
  double t55442;
  double t55277;
  double t55280;
  double t55387;
  double t55417;
  double t55425;
  double t55426;
  double t55455;
  double t55429;
  double t55433;
  double t55434;
  double t55449;
  double t55443;
  double t55445;
  double t55446;
  double t55450;
  double t55451;
  double t55452;
  double t55458;
  double t55459;
  double t55460;
  double t55466;
  double t55468;
  double t55469;
  double t55493;
  double t55511;
  double t55513;
  double t55525;
  double t55531;
  double t55532;
  double t55438;
  double t55447;
  double t55448;
  double t55582;
  double t55583;
  double t55587;
  double t55588;
  double t55589;
  double t55590;
  double t55592;
  double t55593;
  double t55594;
  double t55595;
  double t55597;
  double t55598;
  double t55599;
  double t55603;
  double t55605;
  double t55606;
  double t55584;
  double t55585;
  double t55586;
  double t55600;
  double t55601;
  double t55623;
  double t55624;
  double t55628;
  double t55631;
  double t55637;
  double t55638;
  double t55639;
  double t55602;
  double t55616;
  double t55618;
  double t55636;
  double t55640;
  double t55644;
  double t55650;
  double t55651;
  double t55655;
  double t55397;
  double t55427;
  double t55428;
  double t55619;
  double t55662;
  double t55669;
  double t55675;
  double t55683;
  double t55689;
  double t55704;
  double t55710;
  t55278 = Cos(var1[13]);
  t55254 = Cos(var1[14]);
  t55276 = Sin(var1[13]);
  t55279 = Sin(var1[14]);
  t55414 = t55278*t55254;
  t55415 = t55276*t55279;
  t55416 = t55414 + t55415;
  t55400 = Cos(var1[4]);
  t55412 = Cos(var1[5]);
  t55422 = Sin(var1[12]);
  t55406 = Cos(var1[12]);
  t55423 = Sin(var1[5]);
  t55395 = Sin(var1[4]);
  t55440 = t55254*t55276;
  t55441 = -1.*t55278*t55279;
  t55442 = t55440 + t55441;
  t55277 = -1.*t55254*t55276;
  t55280 = t55278*t55279;
  t55387 = t55277 + t55280;
  t55417 = t55406*t55412*t55416;
  t55425 = -1.*t55422*t55416*t55423;
  t55426 = t55417 + t55425;
  t55455 = Sin(var1[3]);
  t55429 = -1.*t55412*t55422;
  t55433 = -1.*t55406*t55423;
  t55434 = t55429 + t55433;
  t55449 = Cos(var1[3]);
  t55443 = t55406*t55412*t55442;
  t55445 = -1.*t55422*t55442*t55423;
  t55446 = t55443 + t55445;
  t55450 = t55412*t55422*t55416;
  t55451 = t55406*t55416*t55423;
  t55452 = t55450 + t55451;
  t55458 = t55400*t55387;
  t55459 = -1.*t55395*t55426;
  t55460 = t55458 + t55459;
  t55466 = t55406*t55412;
  t55468 = -1.*t55422*t55423;
  t55469 = t55466 + t55468;
  t55493 = t55412*t55422*t55442;
  t55511 = t55406*t55442*t55423;
  t55513 = t55493 + t55511;
  t55525 = t55400*t55416;
  t55531 = -1.*t55395*t55446;
  t55532 = t55525 + t55531;
  t55438 = t55416*t55395;
  t55447 = t55400*t55446;
  t55448 = t55438 + t55447;
  t55582 = -1.*t55406;
  t55583 = 1. + t55582;
  t55587 = -1.*t55278;
  t55588 = 1. + t55587;
  t55589 = 0.28121*t55588;
  t55590 = -1.*t55254;
  t55592 = 1. + t55590;
  t55593 = 0.50321*t55592;
  t55594 = 0.19821*t55254;
  t55595 = t55593 + t55594;
  t55597 = t55278*t55595;
  t55598 = -0.305*t55276*t55279;
  t55599 = t55589 + t55597 + t55598;
  t55603 = 0.15121*t55583;
  t55605 = t55406*t55599;
  t55606 = t55603 + t55605;
  t55584 = -0.15121*t55583;
  t55585 = -0.15121*t55406;
  t55586 = -0.15121*t55422;
  t55600 = t55422*t55599;
  t55601 = t55584 + t55585 + t55586 + t55600;
  t55623 = 0.28121*t55276;
  t55624 = -1.*t55595*t55276;
  t55628 = -0.305*t55278*t55279;
  t55631 = t55623 + t55624 + t55628;
  t55637 = t55412*t55606;
  t55638 = -1.*t55601*t55423;
  t55639 = t55637 + t55638;
  t55602 = t55412*t55601;
  t55616 = t55606*t55423;
  t55618 = t55602 + t55616;
  t55636 = t55631*t55395;
  t55640 = t55400*t55639;
  t55644 = t55636 + t55640;
  t55650 = t55400*t55631;
  t55651 = -1.*t55395*t55639;
  t55655 = t55650 + t55651;
  t55397 = t55387*t55395;
  t55427 = t55400*t55426;
  t55428 = t55397 + t55427;
  t55619 = -1.*t55469*t55618;
  t55662 = t55513*t55618;
  t55669 = -1.*t55513*t55618;
  t55675 = t55452*t55618;
  t55683 = t55469*t55618;
  t55689 = -1.*t55452*t55618;
  t55704 = -1.*t55631*t55416;
  t55710 = t55631*t55387;
  p_output1[0]=t55428;
  p_output1[1]=t55400*t55434;
  p_output1[2]=t55448;
  p_output1[3]=t55449*t55452 - 1.*t55455*t55460;
  p_output1[4]=t55395*t55434*t55455 + t55449*t55469;
  p_output1[5]=t55449*t55513 - 1.*t55455*t55532;
  p_output1[6]=t55452*t55455 + t55449*t55460;
  p_output1[7]=-1.*t55395*t55434*t55449 + t55455*t55469;
  p_output1[8]=t55455*t55513 + t55449*t55532;
  p_output1[9]=t55448*(t55619 - 1.*t55400*t55434*t55644 + t55395*t55434*t55655) + t55400*t55434*(t55448*t55644 + t55532*t55655 + t55662);
  p_output1[10]=t55428*(-1.*t55448*t55644 - 1.*t55532*t55655 + t55669) + t55448*(t55428*t55644 + t55460*t55655 + t55675);
  p_output1[11]=t55428*(t55400*t55434*t55644 - 1.*t55395*t55434*t55655 + t55683) + t55400*t55434*(-1.*t55428*t55644 - 1.*t55460*t55655 + t55689);
  p_output1[12]=t55513*(t55619 - 1.*t55434*t55639) + t55469*(t55416*t55631 + t55446*t55639 + t55662);
  p_output1[13]=t55452*(-1.*t55446*t55639 + t55669 + t55704) + t55513*(t55426*t55639 + t55675 + t55710);
  p_output1[14]=t55452*(t55434*t55639 + t55683) + t55469*(-1.*t55387*t55631 - 1.*t55426*t55639 + t55689);
  p_output1[15]=t55416*(-1.*t55406*t55601 + t55422*t55606);
  p_output1[16]=t55387*(-1.*t55422*t55442*t55601 - 1.*t55406*t55442*t55606 + t55704) + t55416*(t55416*t55422*t55601 + t55406*t55416*t55606 + t55710);
  p_output1[17]=t55387*(t55406*t55601 - 1.*t55422*t55606);
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
  p_output1[37]=-0.15121 + t55387*(-1.*t55442*t55599 + t55704) + t55416*(t55416*t55599 + t55710);
  p_output1[38]=-0.15121*t55387 - 0.15121*t55442;
  p_output1[39]=0.28121*t55279 - 0.305*t55254*t55279 - 1.*t55279*t55595;
  p_output1[40]=0;
  p_output1[41]=0.28121*t55254 + 0.305*Power(t55279,2) - 1.*t55254*t55595;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.305;
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

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
