/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:53 GMT+02:00
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
  double t12696;
  double t2140;
  double t12389;
  double t12716;
  double t13218;
  double t13224;
  double t13226;
  double t13212;
  double t13981;
  double t13209;
  double t14102;
  double t13089;
  double t12436;
  double t12744;
  double t12886;
  double t13079;
  double t13229;
  double t14103;
  double t14420;
  double t17455;
  double t14561;
  double t14562;
  double t14614;
  double t14560;
  double t17461;
  double t17462;
  double t17463;
  double t17492;
  double t17493;
  double t17497;
  double t17498;
  double t17499;
  double t17500;
  double t17501;
  double t17502;
  double t17504;
  double t17505;
  double t17506;
  double t17508;
  double t17510;
  double t17515;
  double t17517;
  double t17518;
  double t17494;
  double t17495;
  double t17496;
  double t17512;
  double t17513;
  double t17523;
  double t17524;
  double t17525;
  double t17526;
  double t17527;
  double t17528;
  double t17529;
  double t17531;
  double t17532;
  double t17533;
  double t17514;
  double t17519;
  double t17521;
  double t17479;
  double t17480;
  double t17482;
  double t17483;
  double t17484;
  double t17485;
  double t17486;
  double t17487;
  double t17488;
  double t17530;
  double t17534;
  double t17535;
  double t17537;
  double t17538;
  double t17539;
  double t17543;
  double t17544;
  double t17545;
  double t17489;
  double t17490;
  double t17491;
  double t17522;
  double t17546;
  double t13081;
  double t14496;
  double t14506;
  double t17549;
  double t17550;
  double t17551;
  double t17583;
  double t17588;
  double t17594;
  double t17598;
  double t17625;
  double t17630;
  t12696 = Cos(var1[10]);
  t2140 = Cos(var1[11]);
  t12389 = Sin(var1[10]);
  t12716 = Sin(var1[11]);
  t13218 = -1.*t12696*t2140;
  t13224 = -1.*t12389*t12716;
  t13226 = t13218 + t13224;
  t13212 = Cos(var1[5]);
  t13981 = Sin(var1[9]);
  t13209 = Cos(var1[9]);
  t14102 = Sin(var1[5]);
  t13089 = Cos(var1[4]);
  t12436 = -1.*t2140*t12389;
  t12744 = t12696*t12716;
  t12886 = t12436 + t12744;
  t13079 = Sin(var1[4]);
  t13229 = t13209*t13212*t13226;
  t14103 = -1.*t13981*t13226*t14102;
  t14420 = t13229 + t14103;
  t17455 = Sin(var1[3]);
  t14561 = t13212*t13981*t13226;
  t14562 = t13209*t13226*t14102;
  t14614 = t14561 + t14562;
  t14560 = Cos(var1[3]);
  t17461 = t13089*t12886;
  t17462 = -1.*t13079*t14420;
  t17463 = t17461 + t17462;
  t17492 = -1.*t13209;
  t17493 = 1. + t17492;
  t17497 = -1.*t12696;
  t17498 = 1. + t17497;
  t17499 = -0.28121*t17498;
  t17500 = -1.*t2140;
  t17501 = 1. + t17500;
  t17502 = -0.50321*t17501;
  t17504 = -0.23321*t2140;
  t17505 = t17502 + t17504;
  t17506 = t12696*t17505;
  t17508 = 0.27*t12389*t12716;
  t17510 = t17499 + t17506 + t17508;
  t17515 = -0.15121*t17493;
  t17517 = t13209*t17510;
  t17518 = t17515 + t17517;
  t17494 = 0.15121*t17493;
  t17495 = 0.15121*t13209;
  t17496 = 0.15121*t13981;
  t17512 = t13981*t17510;
  t17513 = t17494 + t17495 + t17496 + t17512;
  t17523 = t13212*t13981;
  t17524 = t13209*t14102;
  t17525 = t17523 + t17524;
  t17526 = 0.28121*t12389;
  t17527 = t17505*t12389;
  t17528 = -0.27*t12696*t12716;
  t17529 = t17526 + t17527 + t17528;
  t17531 = t13212*t17518;
  t17532 = -1.*t17513*t14102;
  t17533 = t17531 + t17532;
  t17514 = t13212*t17513;
  t17519 = t17518*t14102;
  t17521 = t17514 + t17519;
  t17479 = t12696*t2140;
  t17480 = t12389*t12716;
  t17482 = t17479 + t17480;
  t17483 = t17482*t13079;
  t17484 = t13209*t13212*t12886;
  t17485 = -1.*t13981*t12886*t14102;
  t17486 = t17484 + t17485;
  t17487 = t13089*t17486;
  t17488 = t17483 + t17487;
  t17530 = t17529*t13079;
  t17534 = t13089*t17533;
  t17535 = t17530 + t17534;
  t17537 = t13089*t17529;
  t17538 = -1.*t13079*t17533;
  t17539 = t17537 + t17538;
  t17543 = t13212*t13981*t12886;
  t17544 = t13209*t12886*t14102;
  t17545 = t17543 + t17544;
  t17489 = -1.*t13209*t13212;
  t17490 = t13981*t14102;
  t17491 = t17489 + t17490;
  t17522 = -1.*t17491*t17521;
  t17546 = t17545*t17521;
  t13081 = t12886*t13079;
  t14496 = t13089*t14420;
  t14506 = t13081 + t14496;
  t17549 = t13089*t17482;
  t17550 = -1.*t13079*t17486;
  t17551 = t17549 + t17550;
  t17583 = -1.*t17545*t17521;
  t17588 = t14614*t17521;
  t17594 = -1.*t17529*t17482;
  t17598 = t17529*t12886;
  t17625 = t17491*t17521;
  t17630 = -1.*t14614*t17521;
  p_output1[0]=t14506;
  p_output1[1]=t14560*t14614 - 1.*t17455*t17463;
  p_output1[2]=t14614*t17455 + t14560*t17463;
  p_output1[3]=t17488*(t17522 - 1.*t13089*t17525*t17535 + t13079*t17525*t17539) + t13089*t17525*(t17488*t17535 + t17546 + t17539*t17551);
  p_output1[4]=(t17522 - 1.*t17525*t17533)*t17545 + t17491*(t17482*t17529 + t17486*t17533 + t17546);
  p_output1[5]=t17482*(t13209*t17513 - 1.*t13981*t17518);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t13226 + 0.15121*t17482;
  p_output1[10]=0.28121*t12716 + t12716*t17505 - 0.27*t12716*t2140;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t13089*t17525;
  p_output1[19]=t14560*t17491 + t13079*t17455*t17525;
  p_output1[20]=t17455*t17491 - 1.*t13079*t14560*t17525;
  p_output1[21]=t14506*(-1.*t17488*t17535 - 1.*t17539*t17551 + t17583) + t17488*(t14506*t17535 + t17463*t17539 + t17588);
  p_output1[22]=t14614*(-1.*t17486*t17533 + t17583 + t17594) + t17545*(t14420*t17533 + t17588 + t17598);
  p_output1[23]=t12886*(-1.*t12886*t13981*t17513 - 1.*t12886*t13209*t17518 + t17594) + t17482*(t13226*t13981*t17513 + t13209*t13226*t17518 + t17598);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t12886*(-1.*t12886*t17510 + t17594) + t17482*(t13226*t17510 + t17598);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t17488;
  p_output1[37]=t14560*t17545 - 1.*t17455*t17551;
  p_output1[38]=t17455*t17545 + t14560*t17551;
  p_output1[39]=t14506*(t13089*t17525*t17535 - 1.*t13079*t17525*t17539 + t17625) + t13089*t17525*(-1.*t14506*t17535 - 1.*t17463*t17539 + t17630);
  p_output1[40]=t14614*(t17525*t17533 + t17625) + t17491*(-1.*t12886*t17529 - 1.*t14420*t17533 + t17630);
  p_output1[41]=t12886*(-1.*t13209*t17513 + t13981*t17518);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.27*Power(t12716,2) + 0.28121*t2140 + t17505*t2140;
  p_output1[47]=-0.27;
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
