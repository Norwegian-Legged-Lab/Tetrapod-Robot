/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:40 GMT+02:00
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
  double t10510;
  double t10511;
  double t10513;
  double t10641;
  double t10818;
  double t10947;
  double t10485;
  double t10978;
  double t5436;
  double t10155;
  double t11233;
  double t11276;
  double t11620;
  double t12475;
  double t12560;
  double t12638;
  double t12642;
  double t12714;
  double t13701;
  double t13703;
  double t13769;
  double t13784;
  double t10974;
  double t10976;
  double t10534;
  double t10907;
  double t11260;
  double t11261;
  double t12621;
  double t12628;
  double t15786;
  double t16005;
  double t16008;
  double t17281;
  double t16014;
  double t16016;
  double t16318;
  double t16453;
  double t16737;
  double t16773;
  double t16786;
  double t16807;
  double t16852;
  double t16862;
  double t16906;
  double t18053;
  double t18054;
  double t18057;
  double t18064;
  double t18065;
  double t18069;
  double t18078;
  double t18079;
  double t18085;
  double t18227;
  double t18237;
  double t18262;
  double t18350;
  double t18354;
  double t18352;
  double t18357;
  double t18358;
  double t18366;
  double t18372;
  double t18378;
  double t18430;
  double t18431;
  double t18676;
  double t18738;
  double t18744;
  double t18765;
  double t18821;
  double t18822;
  double t18823;
  double t18997;
  double t19019;
  double t19033;
  double t19236;
  double t19613;
  double t19986;
  double t20242;
  double t20309;
  double t20454;
  double t22293;
  double t22344;
  double t22355;
  double t22413;
  double t22427;
  double t22433;
  double t22447;
  double t22452;
  double t22454;
  double t17459;
  double t17845;
  double t17876;
  double t22495;
  double t22496;
  double t22499;
  double t22503;
  double t22510;
  double t22479;
  double t22593;
  double t22596;
  double t22599;
  double t22615;
  double t22620;
  double t22642;
  double t22650;
  double t22651;
  double t22658;
  double t22769;
  double t22770;
  double t22780;
  double t23030;
  double t23036;
  double t23041;
  double t23058;
  double t23059;
  double t23068;
  double t23121;
  double t23125;
  double t23133;
  double t23193;
  double t23194;
  double t23198;
  double t23205;
  double t23206;
  double t23210;
  double t23245;
  double t23252;
  double t23254;
  double t23267;
  double t23269;
  double t23215;
  double t23364;
  double t23367;
  double t23368;
  double t23372;
  double t23373;
  double t23374;
  double t23377;
  double t23378;
  double t23392;
  double t23544;
  double t23552;
  t10510 = Cos(var1[12]);
  t10511 = -1.*t10510;
  t10513 = 1. + t10511;
  t10641 = Sin(var1[12]);
  t10818 = -0.15121*t10641;
  t10947 = Sin(var1[4]);
  t10485 = Cos(var1[5]);
  t10978 = Sin(var1[5]);
  t5436 = Cos(var1[4]);
  t10155 = Sin(var1[13]);
  t11233 = Cos(var1[13]);
  t11276 = -1.*t10510*t10485*t10947;
  t11620 = t10641*t10947*t10978;
  t12475 = t11276 + t11620;
  t12560 = Cos(var1[14]);
  t12638 = -1.*t5436*t10155;
  t12642 = t11233*t12475;
  t12714 = t12638 + t12642;
  t13701 = Sin(var1[14]);
  t13703 = t11233*t5436;
  t13769 = t10155*t12475;
  t13784 = t13703 + t13769;
  t10974 = -0.15121*t10513;
  t10976 = t10974 + t10818;
  t10534 = 0.15121*t10513;
  t10907 = t10534 + t10818;
  t11260 = -1.*t11233;
  t11261 = 1. + t11260;
  t12621 = -1.*t12560;
  t12628 = 1. + t12621;
  t15786 = -1.*t5436*t10485*t10641;
  t16005 = -1.*t10510*t5436*t10978;
  t16008 = t15786 + t16005;
  t17281 = -0.15121*t10510;
  t16014 = 0.28121*t11261*t16008;
  t16016 = 0.50321*t11233*t12628*t16008;
  t16318 = -0.50321*t10155*t13701*t16008;
  t16453 = -1.*t10510*t5436*t10485;
  t16737 = t5436*t10641*t10978;
  t16773 = t16453 + t16737;
  t16786 = -0.15121*t16773;
  t16807 = t11233*t12560*t16008;
  t16852 = t10155*t13701*t16008;
  t16862 = t16807 + t16852;
  t16906 = 0.19821*t16862;
  t18053 = t10510*t5436*t10485;
  t18054 = -1.*t5436*t10641*t10978;
  t18057 = t18053 + t18054;
  t18064 = -1.*t10155*t10947;
  t18065 = t11233*t18057;
  t18069 = t18064 + t18065;
  t18078 = -1.*t11233*t10947;
  t18079 = -1.*t10155*t18057;
  t18085 = t18078 + t18079;
  t18227 = t11233*t10947;
  t18237 = t10155*t18057;
  t18262 = t18227 + t18237;
  t18350 = Cos(var1[3]);
  t18354 = Sin(var1[3]);
  t18352 = t18350*t10485*t10947;
  t18357 = -1.*t18354*t10978;
  t18358 = t18352 + t18357;
  t18366 = -1.*t10485*t18354;
  t18372 = -1.*t18350*t10947*t10978;
  t18378 = t18366 + t18372;
  t18430 = t10510*t18358;
  t18431 = t10641*t18378;
  t18676 = t18430 + t18431;
  t18738 = t18350*t5436*t10155;
  t18744 = t11233*t18676;
  t18765 = t18738 + t18744;
  t18821 = -1.*t11233*t18350*t5436;
  t18822 = t10155*t18676;
  t18823 = t18821 + t18822;
  t18997 = t10510*t5436*t10485*t18354;
  t19019 = -1.*t5436*t10641*t18354*t10978;
  t19033 = t18997 + t19019;
  t19236 = -1.*t10155*t18354*t10947;
  t19613 = t11233*t19033;
  t19986 = t19236 + t19613;
  t20242 = t11233*t18354*t10947;
  t20309 = t10155*t19033;
  t20454 = t20242 + t20309;
  t22293 = -1.*t10485*t18354*t10947;
  t22344 = -1.*t18350*t10978;
  t22355 = t22293 + t22344;
  t22413 = t18350*t10485;
  t22427 = -1.*t18354*t10947*t10978;
  t22433 = t22413 + t22427;
  t22447 = t10641*t22355;
  t22452 = t10510*t22433;
  t22454 = t22447 + t22452;
  t17459 = 0.15121*t10641;
  t17845 = t17281 + t17459;
  t17876 = t17281 + t10818;
  t22495 = t10485*t18354*t10947;
  t22496 = t18350*t10978;
  t22499 = t22495 + t22496;
  t22503 = -1.*t10641*t22499;
  t22510 = t22503 + t22452;
  t22479 = -1.*t10641*t22433;
  t22593 = t10510*t22499;
  t22596 = t10641*t22433;
  t22599 = t22593 + t22596;
  t22615 = t5436*t10155*t18354;
  t22620 = t11233*t22599;
  t22642 = t22615 + t22620;
  t22650 = t11233*t5436*t18354;
  t22651 = -1.*t10155*t22599;
  t22658 = t22650 + t22651;
  t22769 = -1.*t11233*t5436*t18354;
  t22770 = t10155*t22599;
  t22780 = t22769 + t22770;
  t23030 = -1.*t10510*t18350*t5436*t10485;
  t23036 = t18350*t5436*t10641*t10978;
  t23041 = t23030 + t23036;
  t23058 = t18350*t10155*t10947;
  t23059 = t11233*t23041;
  t23068 = t23058 + t23059;
  t23121 = -1.*t11233*t18350*t10947;
  t23125 = t10155*t23041;
  t23133 = t23121 + t23125;
  t23193 = t10485*t18354;
  t23194 = t18350*t10947*t10978;
  t23198 = t23193 + t23194;
  t23205 = t10641*t18358;
  t23206 = t10510*t23198;
  t23210 = t23205 + t23206;
  t23245 = -1.*t18350*t10485*t10947;
  t23252 = t18354*t10978;
  t23254 = t23245 + t23252;
  t23267 = -1.*t10641*t23254;
  t23269 = t23267 + t23206;
  t23215 = -1.*t10641*t23198;
  t23364 = t10510*t23254;
  t23367 = t10641*t23198;
  t23368 = t23364 + t23367;
  t23372 = -1.*t18350*t5436*t10155;
  t23373 = t11233*t23368;
  t23374 = t23372 + t23373;
  t23377 = -1.*t10155*t23368;
  t23378 = t18821 + t23377;
  t23392 = t11233*t18350*t5436;
  t23544 = t10155*t23368;
  t23552 = t23392 + t23544;
  p_output1[0]=1.;
  p_output1[1]=-1.*t10485*t10907*t10947 + t10947*t10976*t10978 - 0.15121*(t10485*t10641*t10947 + t10510*t10947*t10978) + 0.28121*t11261*t12475 + 0.50321*t12628*t12714 - 0.50321*t13701*t13784 + 0.19821*(t12560*t12714 + t13701*t13784) + 0.28121*t10155*t5436;
  p_output1[2]=t16014 + t16016 + t16318 + t16786 + t16906 - 1.*t10485*t10976*t5436 - 1.*t10907*t10978*t5436;
  p_output1[3]=t16014 + t16016 + t16318 + t16786 + t16906 + t10485*t17845*t5436 - 1.*t10978*t17876*t5436;
  p_output1[4]=0.28121*t10947*t11233 + 0.28121*t10155*t18057 - 0.50321*t13701*t18069 + 0.50321*t12628*t18085 + 0.19821*(t13701*t18069 + t12560*t18085);
  p_output1[5]=0.50321*t13701*t18069 - 0.50321*t12560*t18262 + 0.19821*(-1.*t13701*t18069 + t12560*t18262);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t10907*t18358 + t10976*t18378 - 0.15121*(-1.*t10641*t18358 + t10510*t18378) + 0.28121*t11261*t18676 + 0.50321*t12628*t18765 - 0.50321*t13701*t18823 + 0.19821*(t12560*t18765 + t13701*t18823) - 0.28121*t10155*t18350*t5436;
  p_output1[9]=0.28121*t10155*t10947*t18354 + 0.28121*t11261*t19033 + 0.50321*t12628*t19986 - 0.50321*t13701*t20454 + 0.19821*(t12560*t19986 + t13701*t20454) + t10485*t10907*t18354*t5436 - 1.*t10976*t10978*t18354*t5436 - 0.15121*(-1.*t10485*t10641*t18354*t5436 - 1.*t10510*t10978*t18354*t5436);
  p_output1[10]=t10976*t22355 + t10907*t22433 + 0.28121*t11261*t22454 + 0.50321*t11233*t12628*t22454 - 0.50321*t10155*t13701*t22454 + 0.19821*(t11233*t12560*t22454 + t10155*t13701*t22454) - 0.15121*(t10510*t22355 + t22479);
  p_output1[11]=t17876*t22433 + t17845*t22499 - 0.15121*(t22479 - 1.*t10510*t22499) + 0.28121*t11261*t22510 + 0.50321*t11233*t12628*t22510 - 0.50321*t10155*t13701*t22510 + 0.19821*(t11233*t12560*t22510 + t10155*t13701*t22510);
  p_output1[12]=0.28121*t10155*t22599 - 0.50321*t13701*t22642 + 0.50321*t12628*t22658 + 0.19821*(t13701*t22642 + t12560*t22658) - 0.28121*t11233*t18354*t5436;
  p_output1[13]=0.50321*t13701*t22642 - 0.50321*t12560*t22780 + 0.19821*(-1.*t13701*t22642 + t12560*t22780);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t10976*t22433 + t10907*t22499 - 0.15121*t22510 + 0.28121*t11261*t22599 + 0.50321*t12628*t22642 - 0.50321*t13701*t22780 + 0.19821*(t12560*t22642 + t13701*t22780) - 0.28121*t10155*t18354*t5436;
  p_output1[17]=-0.28121*t10155*t10947*t18350 + 0.28121*t11261*t23041 + 0.50321*t12628*t23068 - 0.50321*t13701*t23133 + 0.19821*(t12560*t23068 + t13701*t23133) - 1.*t10485*t10907*t18350*t5436 + t10976*t10978*t18350*t5436 - 0.15121*(t10485*t10641*t18350*t5436 + t10510*t10978*t18350*t5436);
  p_output1[18]=t10976*t18358 + t10907*t23198 + 0.28121*t11261*t23210 + 0.50321*t11233*t12628*t23210 - 0.50321*t10155*t13701*t23210 + 0.19821*(t11233*t12560*t23210 + t10155*t13701*t23210) - 0.15121*(t18430 + t23215);
  p_output1[19]=t17876*t23198 + t17845*t23254 - 0.15121*(t23215 - 1.*t10510*t23254) + 0.28121*t11261*t23269 + 0.50321*t11233*t12628*t23269 - 0.50321*t10155*t13701*t23269 + 0.19821*(t11233*t12560*t23269 + t10155*t13701*t23269);
  p_output1[20]=0.28121*t10155*t23368 - 0.50321*t13701*t23374 + 0.50321*t12628*t23378 + 0.19821*(t13701*t23374 + t12560*t23378) + 0.28121*t11233*t18350*t5436;
  p_output1[21]=0.50321*t13701*t23374 - 0.50321*t12560*t23552 + 0.19821*(-1.*t13701*t23374 + t12560*t23552);
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
