/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:46 GMT+02:00
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
  double t22880;
  double t9185;
  double t9193;
  double t26308;
  double t22764;
  double t26314;
  double t26315;
  double t26414;
  double t26449;
  double t26422;
  double t26428;
  double t26440;
  double t26450;
  double t8283;
  double t26318;
  double t26316;
  double t26445;
  double t26451;
  double t26452;
  double t26464;
  double t26459;
  double t26460;
  double t26461;
  double t26456;
  double t26465;
  double t26466;
  double t26467;
  double t26488;
  double t26489;
  double t26491;
  double t26493;
  double t26494;
  double t26495;
  double t26497;
  double t26498;
  double t26499;
  double t26487;
  double t26492;
  double t26501;
  double t26502;
  double t26507;
  double t26508;
  double t26509;
  double t26511;
  double t26512;
  double t26513;
  double t26482;
  double t26483;
  double t26484;
  double t26486;
  double t26503;
  double t26504;
  double t26520;
  double t26521;
  double t26522;
  double t26524;
  double t26525;
  double t26526;
  double t26517;
  double t26518;
  double t26519;
  double t26506;
  double t26514;
  double t26515;
  double t26474;
  double t26475;
  double t26476;
  double t26523;
  double t26527;
  double t26528;
  double t26473;
  double t26477;
  double t26478;
  double t26479;
  double t26480;
  double t26481;
  double t26535;
  double t26536;
  double t26537;
  double t26543;
  double t26544;
  double t26545;
  double t26516;
  double t26546;
  double t26555;
  double t26559;
  double t26531;
  double t26533;
  double t26534;
  double t26317;
  double t26453;
  double t26455;
  double t26548;
  double t26549;
  double t26550;
  double t26585;
  double t26590;
  double t26600;
  double t26596;
  double t26610;
  double t26605;
  double t26627;
  double t26632;
  double t26638;
  double t26642;
  t22880 = Cos(var1[10]);
  t9185 = Cos(var1[11]);
  t9193 = Sin(var1[10]);
  t26308 = Sin(var1[11]);
  t22764 = t9185*t9193;
  t26314 = -1.*t22880*t26308;
  t26315 = t22764 + t26314;
  t26414 = Cos(var1[5]);
  t26449 = Sin(var1[9]);
  t26422 = t22880*t9185;
  t26428 = t9193*t26308;
  t26440 = t26422 + t26428;
  t26450 = Sin(var1[5]);
  t8283 = Cos(var1[9]);
  t26318 = Cos(var1[4]);
  t26316 = Sin(var1[4]);
  t26445 = t26414*t26440;
  t26451 = t26449*t26315*t26450;
  t26452 = t26445 + t26451;
  t26464 = Sin(var1[3]);
  t26459 = -1.*t26414*t26449*t26315;
  t26460 = t26440*t26450;
  t26461 = t26459 + t26460;
  t26456 = Cos(var1[3]);
  t26465 = t8283*t26318*t26315;
  t26466 = -1.*t26316*t26452;
  t26467 = t26465 + t26466;
  t26488 = -0.0641*t9185;
  t26489 = -0.28*t26308;
  t26491 = t26488 + t26489;
  t26493 = -1.*t9185;
  t26494 = 1. + t26493;
  t26495 = -0.575*t26494;
  t26497 = -0.295*t9185;
  t26498 = -0.0641*t26308;
  t26499 = t26495 + t26497 + t26498;
  t26487 = 0.325*t9193;
  t26492 = t22880*t26491;
  t26501 = t9193*t26499;
  t26502 = t26487 + t26492 + t26501;
  t26507 = -1.*t22880;
  t26508 = 1. + t26507;
  t26509 = -0.325*t26508;
  t26511 = -1.*t9193*t26491;
  t26512 = t22880*t26499;
  t26513 = t26509 + t26511 + t26512;
  t26482 = -1.*t8283;
  t26483 = 1. + t26482;
  t26484 = 0.1575*t26483;
  t26486 = 0.2255*t8283;
  t26503 = -1.*t26449*t26502;
  t26504 = t26484 + t26486 + t26503;
  t26520 = 0.068*t26449;
  t26521 = t8283*t26502;
  t26522 = t26520 + t26521;
  t26524 = t26414*t26513;
  t26525 = -1.*t26504*t26450;
  t26526 = t26524 + t26525;
  t26517 = t26449*t26316;
  t26518 = -1.*t8283*t26318*t26450;
  t26519 = t26517 + t26518;
  t26506 = t26414*t26504;
  t26514 = t26513*t26450;
  t26515 = t26506 + t26514;
  t26474 = -1.*t9185*t9193;
  t26475 = t22880*t26308;
  t26476 = t26474 + t26475;
  t26523 = t26522*t26316;
  t26527 = t26318*t26526;
  t26528 = t26523 + t26527;
  t26473 = t8283*t26440*t26316;
  t26477 = t26414*t26476;
  t26478 = t26449*t26440*t26450;
  t26479 = t26477 + t26478;
  t26480 = t26318*t26479;
  t26481 = t26473 + t26480;
  t26535 = t26318*t26522;
  t26536 = -1.*t26316*t26526;
  t26537 = t26535 + t26536;
  t26543 = -1.*t26414*t26449*t26440;
  t26544 = t26476*t26450;
  t26545 = t26543 + t26544;
  t26516 = -1.*t8283*t26414*t26515;
  t26546 = t26515*t26545;
  t26555 = -1.*t26449*t26522;
  t26559 = t8283*t26522*t26440;
  t26531 = t26318*t26449;
  t26533 = t8283*t26316*t26450;
  t26534 = t26531 + t26533;
  t26317 = t8283*t26315*t26316;
  t26453 = t26318*t26452;
  t26455 = t26317 + t26453;
  t26548 = t8283*t26318*t26440;
  t26549 = -1.*t26316*t26479;
  t26550 = t26548 + t26549;
  t26585 = t26515*t26461;
  t26590 = -1.*t26515*t26545;
  t26600 = -1.*t8283*t26522*t26440;
  t26596 = t8283*t26522*t26315;
  t26610 = t26513*t26440;
  t26605 = -1.*t26513*t26476;
  t26627 = t8283*t26414*t26515;
  t26632 = -1.*t26515*t26461;
  t26638 = t26449*t26522;
  t26642 = -1.*t8283*t26522*t26315;
  p_output1[0]=t26455;
  p_output1[1]=t26456*t26461 - 1.*t26464*t26467;
  p_output1[2]=t26461*t26464 + t26456*t26467;
  p_output1[3]=t26481*(t26516 - 1.*t26519*t26528 - 1.*t26534*t26537) + t26519*(t26481*t26528 + t26546 + t26537*t26550);
  p_output1[4]=t26414*(t26479*t26526 + t26546 + t26559)*t8283 + t26545*(t26516 + t26555 + t26450*t26526*t8283);
  p_output1[5]=t26449*(-1.*t26440*t26449*t26504 + t26476*t26513 + t26559) + t26440*t8283*(t26555 - 1.*t26504*t8283);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t26315 - 0.2255*t26476;
  p_output1[10]=-0.325*t26308 - 1.*t26308*t26499 - 1.*t26491*t9185;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t26519;
  p_output1[19]=-1.*t26464*t26534 + t26414*t26456*t8283;
  p_output1[20]=t26456*t26534 + t26414*t26464*t8283;
  p_output1[21]=t26481*(t26455*t26528 + t26467*t26537 + t26585) + t26455*(-1.*t26481*t26528 - 1.*t26537*t26550 + t26590);
  p_output1[22]=t26545*(t26452*t26526 + t26585 + t26596) + t26461*(-1.*t26479*t26526 + t26590 + t26600);
  p_output1[23]=t26315*(t26440*t26449*t26504 + t26600 + t26605)*t8283 + t26440*(-1.*t26315*t26449*t26504 + t26596 + t26610)*t8283;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t26440*(-1.*t26440*t26502 + t26605) + t26476*(t26315*t26502 + t26610);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t26481;
  p_output1[37]=t26456*t26545 - 1.*t26464*t26550;
  p_output1[38]=t26464*t26545 + t26456*t26550;
  p_output1[39]=t26455*(t26519*t26528 + t26534*t26537 + t26627) + t26519*(-1.*t26455*t26528 - 1.*t26467*t26537 + t26632);
  p_output1[40]=t26414*(-1.*t26452*t26526 + t26632 + t26642)*t8283 + t26461*(t26627 + t26638 - 1.*t26450*t26526*t8283);
  p_output1[41]=t26449*(t26315*t26449*t26504 - 1.*t26440*t26513 + t26642) + t26315*t8283*(t26638 + t26504*t8283);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t26440;
  p_output1[46]=-1.*t26308*t26491 + 0.325*t9185 + t26499*t9185;
  p_output1[47]=-0.28;
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
