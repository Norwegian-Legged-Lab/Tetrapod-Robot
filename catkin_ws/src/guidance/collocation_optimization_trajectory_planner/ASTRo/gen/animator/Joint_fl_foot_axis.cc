/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 15:18:33 GMT+01:00
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
  double t1525;
  double t1534;
  double t1644;
  double t1528;
  double t1699;
  double t1993;
  double t1011;
  double t1084;
  double t1164;
  double t1986;
  double t2429;
  double t2512;
  double t2523;
  double t1575;
  double t1845;
  double t1884;
  double t3504;
  double t530;
  double t714;
  double t742;
  double t3603;
  double t3647;
  double t3931;
  double t3937;
  double t3966;
  double t4087;
  double t4167;
  double t4214;
  double t3110;
  double t3177;
  double t3201;
  double t3254;
  double t3406;
  double t3457;
  double t3499;
  double t1166;
  double t1418;
  double t1887;
  double t2095;
  double t2147;
  double t2167;
  double t2589;
  double t2643;
  double t2703;
  double t2824;
  double t4334;
  double t4342;
  double t4343;
  double t17;
  double t868;
  double t902;
  double t2859;
  double t3555;
  double t3579;
  double t3600;
  double t4240;
  double t4241;
  double t4246;
  double t4247;
  double t4382;
  double t4390;
  double t4406;
  double t4411;
  double t4416;
  double t4420;
  double t4422;
  double t4428;
  double t4439;
  double t4442;
  double t4449;
  double t4490;
  double t4515;
  double t4518;
  double t4551;
  double t25;
  double t190;
  double t4925;
  double t4913;
  double t4939;
  double t4943;
  double t4951;
  double t4919;
  double t4926;
  double t4927;
  double t4992;
  double t5006;
  double t5025;
  double t4937;
  double t4953;
  double t4956;
  double t4365;
  double t4370;
  double t5158;
  double t5183;
  double t5195;
  double t5235;
  double t5102;
  double t5120;
  double t5139;
  double t5145;
  double t4963;
  double t4989;
  double t5072;
  double t5076;
  double t4577;
  double t5078;
  double t5155;
  double t5245;
  double t5281;
  double t5297;
  double t5298;
  double t5304;
  double t5308;
  double t4661;
  double t4722;
  double t5318;
  double t5325;
  double t5368;
  double t5380;
  double t5497;
  double t5498;
  double t5503;
  double t5460;
  double t5475;
  double t5476;
  double t5519;
  double t5521;
  double t5522;
  double t5480;
  double t5505;
  double t5506;
  double t5537;
  double t5538;
  double t5539;
  double t5541;
  double t5529;
  double t5530;
  double t5533;
  double t5534;
  double t5513;
  double t5514;
  double t5523;
  double t5525;
  double t5527;
  double t5535;
  double t5543;
  double t5545;
  double t5557;
  double t5558;
  double t5563;
  double t5568;
  double t5571;
  double t5572;
  double t5577;
  double t5578;
  t1525 = Cos(var1[4]);
  t1534 = Cos(var1[6]);
  t1644 = Sin(var1[5]);
  t1528 = Cos(var1[5]);
  t1699 = Sin(var1[6]);
  t1993 = Sin(var1[7]);
  t1011 = Cos(var1[7]);
  t1084 = -1.*t1011;
  t1164 = 1. + t1084;
  t1986 = Sin(var1[4]);
  t2429 = -1.*t1525*t1534*t1644;
  t2512 = -1.*t1525*t1528*t1699;
  t2523 = t2429 + t2512;
  t1575 = t1525*t1528*t1534;
  t1845 = -1.*t1525*t1644*t1699;
  t1884 = t1575 + t1845;
  t3504 = Sin(var1[8]);
  t530 = Cos(var1[8]);
  t714 = -1.*t530;
  t742 = 1. + t714;
  t3603 = -4.e-6*t1164*t1986;
  t3647 = -1.6e-11*t1164;
  t3931 = 1. + t3647;
  t3937 = t3931*t2523;
  t3966 = 4.e-6*t1993;
  t4087 = 0. + t3966;
  t4167 = t1884*t4087;
  t4214 = t3603 + t3937 + t4167;
  t3110 = -1.*t1164;
  t3177 = 1. + t3110;
  t3201 = t3177*t1986;
  t3254 = -4.e-6*t1164*t2523;
  t3406 = 0. + t1993;
  t3457 = t1884*t3406;
  t3499 = t3201 + t3254 + t3457;
  t1166 = -1.000000000016*t1164;
  t1418 = 1. + t1166;
  t1887 = t1418*t1884;
  t2095 = -1.*t1993;
  t2147 = 0. + t2095;
  t2167 = t1986*t2147;
  t2589 = -4.e-6*t1993;
  t2643 = 0. + t2589;
  t2703 = t2523*t2643;
  t2824 = t1887 + t2167 + t2703;
  t4334 = Cos(var1[18]);
  t4342 = -1.*t4334;
  t4343 = 1. + t4342;
  t17 = Sin(var1[18]);
  t868 = -1.000000000016*t742;
  t902 = 1. + t868;
  t2859 = t902*t2824;
  t3555 = -1.*t3504;
  t3579 = 0. + t3555;
  t3600 = t3499*t3579;
  t4240 = -4.e-6*t3504;
  t4241 = 0. + t4240;
  t4246 = t4214*t4241;
  t4247 = t2859 + t3600 + t4246;
  t4382 = -1.6e-11*t742;
  t4390 = 1. + t4382;
  t4406 = t4390*t4214;
  t4411 = -4.e-6*t742*t3499;
  t4416 = 4.e-6*t3504;
  t4420 = 0. + t4416;
  t4422 = t2824*t4420;
  t4428 = t4406 + t4411 + t4422;
  t4439 = -4.e-6*t742*t4214;
  t4442 = -1.*t742;
  t4449 = 1. + t4442;
  t4490 = t4449*t3499;
  t4515 = 0. + t3504;
  t4518 = t2824*t4515;
  t4551 = t4439 + t4490 + t4518;
  t25 = 4.e-6*t17;
  t190 = 0. + t25;
  t4925 = Cos(var1[3]);
  t4913 = Sin(var1[3]);
  t4939 = t4925*t1528;
  t4943 = -1.*t4913*t1986*t1644;
  t4951 = t4939 + t4943;
  t4919 = t1528*t4913*t1986;
  t4926 = t4925*t1644;
  t4927 = t4919 + t4926;
  t4992 = t1534*t4951;
  t5006 = -1.*t4927*t1699;
  t5025 = t4992 + t5006;
  t4937 = t1534*t4927;
  t4953 = t4951*t1699;
  t4956 = t4937 + t4953;
  t4365 = -1.6e-11*t4343;
  t4370 = 1. + t4365;
  t5158 = 4.e-6*t1525*t1164*t4913;
  t5183 = t3931*t5025;
  t5195 = t4956*t4087;
  t5235 = t5158 + t5183 + t5195;
  t5102 = -1.*t1525*t3177*t4913;
  t5120 = -4.e-6*t1164*t5025;
  t5139 = t4956*t3406;
  t5145 = t5102 + t5120 + t5139;
  t4963 = t1418*t4956;
  t4989 = -1.*t1525*t4913*t2147;
  t5072 = t5025*t2643;
  t5076 = t4963 + t4989 + t5072;
  t4577 = 0. + t17;
  t5078 = t902*t5076;
  t5155 = t5145*t3579;
  t5245 = t5235*t4241;
  t5281 = t5078 + t5155 + t5245;
  t5297 = t4390*t5235;
  t5298 = -4.e-6*t742*t5145;
  t5304 = t5076*t4420;
  t5308 = t5297 + t5298 + t5304;
  t4661 = -1.*t4343;
  t4722 = 1. + t4661;
  t5318 = -4.e-6*t742*t5235;
  t5325 = t4449*t5145;
  t5368 = t5076*t4515;
  t5380 = t5318 + t5325 + t5368;
  t5497 = t1528*t4913;
  t5498 = t4925*t1986*t1644;
  t5503 = t5497 + t5498;
  t5460 = -1.*t4925*t1528*t1986;
  t5475 = t4913*t1644;
  t5476 = t5460 + t5475;
  t5519 = t1534*t5503;
  t5521 = -1.*t5476*t1699;
  t5522 = t5519 + t5521;
  t5480 = t1534*t5476;
  t5505 = t5503*t1699;
  t5506 = t5480 + t5505;
  t5537 = -4.e-6*t4925*t1525*t1164;
  t5538 = t3931*t5522;
  t5539 = t5506*t4087;
  t5541 = t5537 + t5538 + t5539;
  t5529 = t4925*t1525*t3177;
  t5530 = -4.e-6*t1164*t5522;
  t5533 = t5506*t3406;
  t5534 = t5529 + t5530 + t5533;
  t5513 = t1418*t5506;
  t5514 = t4925*t1525*t2147;
  t5523 = t5522*t2643;
  t5525 = t5513 + t5514 + t5523;
  t5527 = t902*t5525;
  t5535 = t5534*t3579;
  t5543 = t5541*t4241;
  t5545 = t5527 + t5535 + t5543;
  t5557 = t4390*t5541;
  t5558 = -4.e-6*t742*t5534;
  t5563 = t5525*t4420;
  t5568 = t5557 + t5558 + t5563;
  t5571 = -4.e-6*t742*t5541;
  t5572 = t4449*t5534;
  t5577 = t5525*t4515;
  t5578 = t5571 + t5572 + t5577;
  p_output1[0]=t190*t4247 + t4370*t4428 - 4.e-6*t4343*t4551 - 4.e-6*(-4.e-6*t4343*t4428 + t4247*t4577 + t4551*t4722);
  p_output1[1]=t190*t5281 + t4370*t5308 - 4.e-6*t4343*t5380 - 4.e-6*(t4577*t5281 - 4.e-6*t4343*t5308 + t4722*t5380);
  p_output1[2]=t190*t5545 + t4370*t5568 - 4.e-6*t4343*t5578 - 4.e-6*(t4577*t5545 - 4.e-6*t4343*t5568 + t4722*t5578);
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fl_foot_axis.hh"

namespace SymFunction
{

void Joint_fl_foot_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
