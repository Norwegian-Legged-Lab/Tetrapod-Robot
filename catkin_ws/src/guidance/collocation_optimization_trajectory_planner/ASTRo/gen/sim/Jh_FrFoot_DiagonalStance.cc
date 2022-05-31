/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:31 GMT+02:00
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
  double t3780;
  double t2378;
  double t3419;
  double t4378;
  double t17065;
  double t28146;
  double t28295;
  double t11280;
  double t14268;
  double t28981;
  double t12491;
  double t29045;
  double t8184;
  double t30254;
  double t30327;
  double t30343;
  double t3626;
  double t5827;
  double t6474;
  double t28977;
  double t29136;
  double t29518;
  double t31773;
  double t29614;
  double t29799;
  double t29829;
  double t30475;
  double t30354;
  double t30373;
  double t30389;
  double t31048;
  double t31228;
  double t31539;
  double t31997;
  double t32006;
  double t32132;
  double t32951;
  double t32952;
  double t32957;
  double t32966;
  double t33002;
  double t33012;
  double t33017;
  double t33019;
  double t33021;
  double t30243;
  double t30454;
  double t30473;
  double t33194;
  double t33407;
  double t33411;
  double t33412;
  double t33413;
  double t33415;
  double t33416;
  double t33419;
  double t33421;
  double t33422;
  double t33423;
  double t33424;
  double t33425;
  double t33429;
  double t33431;
  double t33433;
  double t33408;
  double t33409;
  double t33410;
  double t33426;
  double t33427;
  double t33452;
  double t33471;
  double t33472;
  double t33473;
  double t33477;
  double t33478;
  double t33479;
  double t33428;
  double t33437;
  double t33439;
  double t33474;
  double t33483;
  double t33485;
  double t33488;
  double t33503;
  double t33509;
  double t9325;
  double t29571;
  double t29608;
  double t33441;
  double t33572;
  double t35403;
  double t40489;
  double t44538;
  double t44692;
  double t44796;
  double t44891;
  t3780 = Cos(var1[13]);
  t2378 = Cos(var1[14]);
  t3419 = Sin(var1[13]);
  t4378 = Sin(var1[14]);
  t17065 = t3780*t2378;
  t28146 = t3419*t4378;
  t28295 = t17065 + t28146;
  t11280 = Cos(var1[4]);
  t14268 = Cos(var1[5]);
  t28981 = Sin(var1[12]);
  t12491 = Cos(var1[12]);
  t29045 = Sin(var1[5]);
  t8184 = Sin(var1[4]);
  t30254 = t2378*t3419;
  t30327 = -1.*t3780*t4378;
  t30343 = t30254 + t30327;
  t3626 = -1.*t2378*t3419;
  t5827 = t3780*t4378;
  t6474 = t3626 + t5827;
  t28977 = t12491*t14268*t28295;
  t29136 = -1.*t28981*t28295*t29045;
  t29518 = t28977 + t29136;
  t31773 = Sin(var1[3]);
  t29614 = -1.*t14268*t28981;
  t29799 = -1.*t12491*t29045;
  t29829 = t29614 + t29799;
  t30475 = Cos(var1[3]);
  t30354 = t12491*t14268*t30343;
  t30373 = -1.*t28981*t30343*t29045;
  t30389 = t30354 + t30373;
  t31048 = t14268*t28981*t28295;
  t31228 = t12491*t28295*t29045;
  t31539 = t31048 + t31228;
  t31997 = t11280*t6474;
  t32006 = -1.*t8184*t29518;
  t32132 = t31997 + t32006;
  t32951 = t12491*t14268;
  t32952 = -1.*t28981*t29045;
  t32957 = t32951 + t32952;
  t32966 = t14268*t28981*t30343;
  t33002 = t12491*t30343*t29045;
  t33012 = t32966 + t33002;
  t33017 = t11280*t28295;
  t33019 = -1.*t8184*t30389;
  t33021 = t33017 + t33019;
  t30243 = t28295*t8184;
  t30454 = t11280*t30389;
  t30473 = t30243 + t30454;
  t33194 = -1.*t12491;
  t33407 = 1. + t33194;
  t33411 = -1.*t3780;
  t33412 = 1. + t33411;
  t33413 = 0.28121*t33412;
  t33415 = -1.*t2378;
  t33416 = 1. + t33415;
  t33419 = 0.50321*t33416;
  t33421 = 0.19821*t2378;
  t33422 = t33419 + t33421;
  t33423 = t3780*t33422;
  t33424 = -0.305*t3419*t4378;
  t33425 = t33413 + t33423 + t33424;
  t33429 = 0.15121*t33407;
  t33431 = t12491*t33425;
  t33433 = t33429 + t33431;
  t33408 = -0.15121*t33407;
  t33409 = -0.15121*t12491;
  t33410 = -0.15121*t28981;
  t33426 = t28981*t33425;
  t33427 = t33408 + t33409 + t33410 + t33426;
  t33452 = 0.28121*t3419;
  t33471 = -1.*t33422*t3419;
  t33472 = -0.305*t3780*t4378;
  t33473 = t33452 + t33471 + t33472;
  t33477 = t14268*t33433;
  t33478 = -1.*t33427*t29045;
  t33479 = t33477 + t33478;
  t33428 = t14268*t33427;
  t33437 = t33433*t29045;
  t33439 = t33428 + t33437;
  t33474 = t33473*t8184;
  t33483 = t11280*t33479;
  t33485 = t33474 + t33483;
  t33488 = t11280*t33473;
  t33503 = -1.*t8184*t33479;
  t33509 = t33488 + t33503;
  t9325 = t6474*t8184;
  t29571 = t11280*t29518;
  t29608 = t9325 + t29571;
  t33441 = -1.*t32957*t33439;
  t33572 = t33012*t33439;
  t35403 = -1.*t33012*t33439;
  t40489 = t31539*t33439;
  t44538 = t32957*t33439;
  t44692 = -1.*t31539*t33439;
  t44796 = -1.*t33473*t28295;
  t44891 = t33473*t6474;
  p_output1[0]=t29608;
  p_output1[1]=t11280*t29829;
  p_output1[2]=t30473;
  p_output1[3]=t30475*t31539 - 1.*t31773*t32132;
  p_output1[4]=t30475*t32957 + t29829*t31773*t8184;
  p_output1[5]=t30475*t33012 - 1.*t31773*t33021;
  p_output1[6]=t31539*t31773 + t30475*t32132;
  p_output1[7]=t31773*t32957 - 1.*t29829*t30475*t8184;
  p_output1[8]=t31773*t33012 + t30475*t33021;
  p_output1[9]=t11280*t29829*(t30473*t33485 + t33021*t33509 + t33572) + t30473*(t33441 - 1.*t11280*t29829*t33485 + t29829*t33509*t8184);
  p_output1[10]=t29608*(-1.*t30473*t33485 - 1.*t33021*t33509 + t35403) + t30473*(t29608*t33485 + t32132*t33509 + t40489);
  p_output1[11]=t11280*t29829*(-1.*t29608*t33485 - 1.*t32132*t33509 + t44692) + t29608*(t11280*t29829*t33485 + t44538 - 1.*t29829*t33509*t8184);
  p_output1[12]=t33012*(t33441 - 1.*t29829*t33479) + t32957*(t28295*t33473 + t30389*t33479 + t33572);
  p_output1[13]=t31539*(-1.*t30389*t33479 + t35403 + t44796) + t33012*(t29518*t33479 + t40489 + t44891);
  p_output1[14]=t31539*(t29829*t33479 + t44538) + t32957*(-1.*t29518*t33479 + t44692 - 1.*t33473*t6474);
  p_output1[15]=t28295*(-1.*t12491*t33427 + t28981*t33433);
  p_output1[16]=t28295*(t28295*t28981*t33427 + t12491*t28295*t33433 + t44891) + (-1.*t28981*t30343*t33427 - 1.*t12491*t30343*t33433 + t44796)*t6474;
  p_output1[17]=(t12491*t33427 - 1.*t28981*t33433)*t6474;
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
  p_output1[37]=-0.15121 + t28295*(t28295*t33425 + t44891) + (-1.*t30343*t33425 + t44796)*t6474;
  p_output1[38]=-0.15121*t30343 - 0.15121*t6474;
  p_output1[39]=0.28121*t4378 - 0.305*t2378*t4378 - 1.*t33422*t4378;
  p_output1[40]=0;
  p_output1[41]=0.28121*t2378 - 1.*t2378*t33422 + 0.305*Power(t4378,2);
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

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
