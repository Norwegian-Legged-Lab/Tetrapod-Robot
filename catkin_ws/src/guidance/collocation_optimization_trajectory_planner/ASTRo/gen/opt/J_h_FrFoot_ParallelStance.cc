/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:09 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t43678;
  double t43680;
  double t43682;
  double t43723;
  double t43753;
  double t43851;
  double t43677;
  double t43931;
  double t67;
  double t43031;
  double t43987;
  double t44002;
  double t44008;
  double t44130;
  double t44137;
  double t44153;
  double t44154;
  double t44155;
  double t44172;
  double t44177;
  double t44178;
  double t44189;
  double t43922;
  double t43926;
  double t43694;
  double t43811;
  double t43988;
  double t43994;
  double t44138;
  double t44152;
  double t44232;
  double t44233;
  double t44234;
  double t44271;
  double t44235;
  double t44236;
  double t44242;
  double t44243;
  double t44244;
  double t44245;
  double t44251;
  double t44254;
  double t44261;
  double t44262;
  double t44267;
  double t44287;
  double t44288;
  double t44291;
  double t44294;
  double t44295;
  double t44298;
  double t44303;
  double t44305;
  double t44308;
  double t44333;
  double t44338;
  double t44339;
  double t44350;
  double t44354;
  double t44353;
  double t44356;
  double t44357;
  double t44361;
  double t44362;
  double t44363;
  double t44384;
  double t44386;
  double t44387;
  double t44389;
  double t44391;
  double t44415;
  double t44422;
  double t44423;
  double t44424;
  double t44451;
  double t44452;
  double t44454;
  double t44456;
  double t44457;
  double t44458;
  double t44461;
  double t44463;
  double t44464;
  double t44473;
  double t44475;
  double t44476;
  double t44498;
  double t44503;
  double t44504;
  double t44506;
  double t44508;
  double t44509;
  double t44272;
  double t44274;
  double t44277;
  double t44528;
  double t44529;
  double t44530;
  double t44533;
  double t44535;
  double t44515;
  double t44552;
  double t44553;
  double t44555;
  double t44557;
  double t44558;
  double t44559;
  double t44561;
  double t44563;
  double t44567;
  double t44588;
  double t44590;
  double t44591;
  double t44639;
  double t44640;
  double t44641;
  double t44643;
  double t44644;
  double t44645;
  double t44648;
  double t44649;
  double t44650;
  double t44659;
  double t44660;
  double t44661;
  double t44663;
  double t44664;
  double t44665;
  double t44683;
  double t44684;
  double t44685;
  double t44688;
  double t44689;
  double t44672;
  double t44706;
  double t44707;
  double t44708;
  double t44712;
  double t44713;
  double t44714;
  double t44719;
  double t44720;
  double t44730;
  double t44732;
  double t44733;
  t43678 = Cos(var1[12]);
  t43680 = -1.*t43678;
  t43682 = 1. + t43680;
  t43723 = Sin(var1[12]);
  t43753 = -0.15121*t43723;
  t43851 = Sin(var1[4]);
  t43677 = Cos(var1[5]);
  t43931 = Sin(var1[5]);
  t67 = Cos(var1[4]);
  t43031 = Sin(var1[13]);
  t43987 = Cos(var1[13]);
  t44002 = -1.*t43678*t43677*t43851;
  t44008 = t43723*t43851*t43931;
  t44130 = t44002 + t44008;
  t44137 = Cos(var1[14]);
  t44153 = -1.*t67*t43031;
  t44154 = t43987*t44130;
  t44155 = t44153 + t44154;
  t44172 = Sin(var1[14]);
  t44177 = t43987*t67;
  t44178 = t43031*t44130;
  t44189 = t44177 + t44178;
  t43922 = -0.15121*t43682;
  t43926 = t43922 + t43753;
  t43694 = 0.15121*t43682;
  t43811 = t43694 + t43753;
  t43988 = -1.*t43987;
  t43994 = 1. + t43988;
  t44138 = -1.*t44137;
  t44152 = 1. + t44138;
  t44232 = -1.*t67*t43677*t43723;
  t44233 = -1.*t43678*t67*t43931;
  t44234 = t44232 + t44233;
  t44271 = -0.15121*t43678;
  t44235 = 0.28121*t43994*t44234;
  t44236 = 0.50321*t43987*t44152*t44234;
  t44242 = -0.50321*t43031*t44172*t44234;
  t44243 = -1.*t43678*t67*t43677;
  t44244 = t67*t43723*t43931;
  t44245 = t44243 + t44244;
  t44251 = -0.15121*t44245;
  t44254 = t43987*t44137*t44234;
  t44261 = t43031*t44172*t44234;
  t44262 = t44254 + t44261;
  t44267 = 0.23321*t44262;
  t44287 = t43678*t67*t43677;
  t44288 = -1.*t67*t43723*t43931;
  t44291 = t44287 + t44288;
  t44294 = -1.*t43031*t43851;
  t44295 = t43987*t44291;
  t44298 = t44294 + t44295;
  t44303 = -1.*t43987*t43851;
  t44305 = -1.*t43031*t44291;
  t44308 = t44303 + t44305;
  t44333 = t43987*t43851;
  t44338 = t43031*t44291;
  t44339 = t44333 + t44338;
  t44350 = Cos(var1[3]);
  t44354 = Sin(var1[3]);
  t44353 = t44350*t43677*t43851;
  t44356 = -1.*t44354*t43931;
  t44357 = t44353 + t44356;
  t44361 = -1.*t43677*t44354;
  t44362 = -1.*t44350*t43851*t43931;
  t44363 = t44361 + t44362;
  t44384 = t43678*t44357;
  t44386 = t43723*t44363;
  t44387 = t44384 + t44386;
  t44389 = t44350*t67*t43031;
  t44391 = t43987*t44387;
  t44415 = t44389 + t44391;
  t44422 = -1.*t43987*t44350*t67;
  t44423 = t43031*t44387;
  t44424 = t44422 + t44423;
  t44451 = t43678*t67*t43677*t44354;
  t44452 = -1.*t67*t43723*t44354*t43931;
  t44454 = t44451 + t44452;
  t44456 = -1.*t43031*t44354*t43851;
  t44457 = t43987*t44454;
  t44458 = t44456 + t44457;
  t44461 = t43987*t44354*t43851;
  t44463 = t43031*t44454;
  t44464 = t44461 + t44463;
  t44473 = -1.*t43677*t44354*t43851;
  t44475 = -1.*t44350*t43931;
  t44476 = t44473 + t44475;
  t44498 = t44350*t43677;
  t44503 = -1.*t44354*t43851*t43931;
  t44504 = t44498 + t44503;
  t44506 = t43723*t44476;
  t44508 = t43678*t44504;
  t44509 = t44506 + t44508;
  t44272 = 0.15121*t43723;
  t44274 = t44271 + t44272;
  t44277 = t44271 + t43753;
  t44528 = t43677*t44354*t43851;
  t44529 = t44350*t43931;
  t44530 = t44528 + t44529;
  t44533 = -1.*t43723*t44530;
  t44535 = t44533 + t44508;
  t44515 = -1.*t43723*t44504;
  t44552 = t43678*t44530;
  t44553 = t43723*t44504;
  t44555 = t44552 + t44553;
  t44557 = t67*t43031*t44354;
  t44558 = t43987*t44555;
  t44559 = t44557 + t44558;
  t44561 = t43987*t67*t44354;
  t44563 = -1.*t43031*t44555;
  t44567 = t44561 + t44563;
  t44588 = -1.*t43987*t67*t44354;
  t44590 = t43031*t44555;
  t44591 = t44588 + t44590;
  t44639 = -1.*t43678*t44350*t67*t43677;
  t44640 = t44350*t67*t43723*t43931;
  t44641 = t44639 + t44640;
  t44643 = t44350*t43031*t43851;
  t44644 = t43987*t44641;
  t44645 = t44643 + t44644;
  t44648 = -1.*t43987*t44350*t43851;
  t44649 = t43031*t44641;
  t44650 = t44648 + t44649;
  t44659 = t43677*t44354;
  t44660 = t44350*t43851*t43931;
  t44661 = t44659 + t44660;
  t44663 = t43723*t44357;
  t44664 = t43678*t44661;
  t44665 = t44663 + t44664;
  t44683 = -1.*t44350*t43677*t43851;
  t44684 = t44354*t43931;
  t44685 = t44683 + t44684;
  t44688 = -1.*t43723*t44685;
  t44689 = t44688 + t44664;
  t44672 = -1.*t43723*t44661;
  t44706 = t43678*t44685;
  t44707 = t43723*t44661;
  t44708 = t44706 + t44707;
  t44712 = -1.*t44350*t67*t43031;
  t44713 = t43987*t44708;
  t44714 = t44712 + t44713;
  t44719 = -1.*t43031*t44708;
  t44720 = t44422 + t44719;
  t44730 = t43987*t44350*t67;
  t44732 = t43031*t44708;
  t44733 = t44730 + t44732;
  p_output1[0]=1.;
  p_output1[1]=-1.*t43677*t43811*t43851 + t43851*t43926*t43931 - 0.15121*(t43677*t43723*t43851 + t43678*t43851*t43931) + 0.28121*t43994*t44130 + 0.50321*t44152*t44155 - 0.50321*t44172*t44189 + 0.23321*(t44137*t44155 + t44172*t44189) + 0.28121*t43031*t67;
  p_output1[2]=t44235 + t44236 + t44242 + t44251 + t44267 - 1.*t43677*t43926*t67 - 1.*t43811*t43931*t67;
  p_output1[3]=t44235 + t44236 + t44242 + t44251 + t44267 + t43677*t44274*t67 - 1.*t43931*t44277*t67;
  p_output1[4]=0.28121*t43851*t43987 + 0.28121*t43031*t44291 - 0.50321*t44172*t44298 + 0.50321*t44152*t44308 + 0.23321*(t44172*t44298 + t44137*t44308);
  p_output1[5]=0.50321*t44172*t44298 - 0.50321*t44137*t44339 + 0.23321*(-1.*t44172*t44298 + t44137*t44339);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t43811*t44357 + t43926*t44363 - 0.15121*(-1.*t43723*t44357 + t43678*t44363) + 0.28121*t43994*t44387 + 0.50321*t44152*t44415 - 0.50321*t44172*t44424 + 0.23321*(t44137*t44415 + t44172*t44424) - 0.28121*t43031*t44350*t67;
  p_output1[9]=0.28121*t43031*t43851*t44354 + 0.28121*t43994*t44454 + 0.50321*t44152*t44458 - 0.50321*t44172*t44464 + 0.23321*(t44137*t44458 + t44172*t44464) + t43677*t43811*t44354*t67 - 1.*t43926*t43931*t44354*t67 - 0.15121*(-1.*t43677*t43723*t44354*t67 - 1.*t43678*t43931*t44354*t67);
  p_output1[10]=t43926*t44476 + t43811*t44504 + 0.28121*t43994*t44509 + 0.50321*t43987*t44152*t44509 - 0.50321*t43031*t44172*t44509 + 0.23321*(t43987*t44137*t44509 + t43031*t44172*t44509) - 0.15121*(t43678*t44476 + t44515);
  p_output1[11]=t44277*t44504 + t44274*t44530 - 0.15121*(t44515 - 1.*t43678*t44530) + 0.28121*t43994*t44535 + 0.50321*t43987*t44152*t44535 - 0.50321*t43031*t44172*t44535 + 0.23321*(t43987*t44137*t44535 + t43031*t44172*t44535);
  p_output1[12]=0.28121*t43031*t44555 - 0.50321*t44172*t44559 + 0.50321*t44152*t44567 + 0.23321*(t44172*t44559 + t44137*t44567) - 0.28121*t43987*t44354*t67;
  p_output1[13]=0.50321*t44172*t44559 - 0.50321*t44137*t44591 + 0.23321*(-1.*t44172*t44559 + t44137*t44591);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t43926*t44504 + t43811*t44530 - 0.15121*t44535 + 0.28121*t43994*t44555 + 0.50321*t44152*t44559 - 0.50321*t44172*t44591 + 0.23321*(t44137*t44559 + t44172*t44591) - 0.28121*t43031*t44354*t67;
  p_output1[17]=-0.28121*t43031*t43851*t44350 + 0.28121*t43994*t44641 + 0.50321*t44152*t44645 - 0.50321*t44172*t44650 + 0.23321*(t44137*t44645 + t44172*t44650) - 1.*t43677*t43811*t44350*t67 + t43926*t43931*t44350*t67 - 0.15121*(t43677*t43723*t44350*t67 + t43678*t43931*t44350*t67);
  p_output1[18]=t43926*t44357 + t43811*t44661 + 0.28121*t43994*t44665 + 0.50321*t43987*t44152*t44665 - 0.50321*t43031*t44172*t44665 + 0.23321*(t43987*t44137*t44665 + t43031*t44172*t44665) - 0.15121*(t44384 + t44672);
  p_output1[19]=t44277*t44661 + t44274*t44685 - 0.15121*(t44672 - 1.*t43678*t44685) + 0.28121*t43994*t44689 + 0.50321*t43987*t44152*t44689 - 0.50321*t43031*t44172*t44689 + 0.23321*(t43987*t44137*t44689 + t43031*t44172*t44689);
  p_output1[20]=0.28121*t43031*t44708 - 0.50321*t44172*t44714 + 0.50321*t44152*t44720 + 0.23321*(t44172*t44714 + t44137*t44720) + 0.28121*t43987*t44350*t67;
  p_output1[21]=0.50321*t44172*t44714 - 0.50321*t44137*t44733 + 0.23321*(-1.*t44172*t44714 + t44137*t44733);
  p_output1[22]=-1.;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
