/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:59 GMT+02:00
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
  double t8228;
  double t8189;
  double t8241;
  double t9200;
  double t9037;
  double t9054;
  double t9235;
  double t1461;
  double t9137;
  double t9246;
  double t9321;
  double t8242;
  double t9327;
  double t9332;
  double t9336;
  double t9326;
  double t9431;
  double t9463;
  double t9337;
  double t9341;
  double t9352;
  double t9385;
  double t9386;
  double t9391;
  double t9392;
  double t9393;
  double t9399;
  double t9468;
  double t9469;
  double t9482;
  double t9572;
  double t9573;
  double t9582;
  double t9584;
  double t9585;
  double t9586;
  double t9599;
  double t9608;
  double t9609;
  double t9613;
  double t9614;
  double t9637;
  double t9323;
  double t9353;
  double t9362;
  double t14217;
  double t14829;
  double t15222;
  double t17776;
  double t20432;
  double t20857;
  double t20897;
  double t22294;
  double t22302;
  double t8225;
  double t8405;
  double t8530;
  double t13438;
  double t17002;
  double t22308;
  double t22352;
  double t22452;
  double t22456;
  double t22457;
  double t22458;
  double t22459;
  double t22460;
  double t9926;
  double t11233;
  double t11526;
  double t12785;
  double t22439;
  double t22441;
  double t22542;
  double t22544;
  double t22556;
  double t22569;
  double t22570;
  double t22572;
  double t22442;
  double t22461;
  double t22466;
  double t22564;
  double t22574;
  double t22577;
  double t22579;
  double t22580;
  double t22585;
  double t9371;
  double t9400;
  double t9407;
  double t22537;
  double t22594;
  double t22617;
  double t22625;
  double t22643;
  double t22660;
  double t22723;
  double t22731;
  double t22674;
  double t22680;
  double t22714;
  double t22702;
  double t22798;
  double t22781;
  t8228 = Cos(var1[12]);
  t8189 = Sin(var1[4]);
  t8241 = Cos(var1[4]);
  t9200 = Cos(var1[13]);
  t9037 = Cos(var1[14]);
  t9054 = Sin(var1[13]);
  t9235 = Sin(var1[14]);
  t1461 = Sin(var1[12]);
  t9137 = t9037*t9054;
  t9246 = -1.*t9200*t9235;
  t9321 = t9137 + t9246;
  t8242 = Sin(var1[5]);
  t9327 = t9200*t9037;
  t9332 = t9054*t9235;
  t9336 = t9327 + t9332;
  t9326 = Cos(var1[5]);
  t9431 = Cos(var1[3]);
  t9463 = Sin(var1[3]);
  t9337 = t9326*t9336;
  t9341 = t1461*t9321*t8242;
  t9352 = t9337 + t9341;
  t9385 = -1.*t9037*t9054;
  t9386 = t9200*t9235;
  t9391 = t9385 + t9386;
  t9392 = t9326*t9391;
  t9393 = t1461*t9336*t8242;
  t9399 = t9392 + t9393;
  t9468 = t8241*t1461;
  t9469 = t8228*t8189*t8242;
  t9482 = t9468 + t9469;
  t9572 = -1.*t9326*t1461*t9321;
  t9573 = t9336*t8242;
  t9582 = t9572 + t9573;
  t9584 = t8228*t8241*t9321;
  t9585 = -1.*t8189*t9352;
  t9586 = t9584 + t9585;
  t9599 = -1.*t9326*t1461*t9336;
  t9608 = t9391*t8242;
  t9609 = t9599 + t9608;
  t9613 = t8228*t8241*t9336;
  t9614 = -1.*t8189*t9399;
  t9637 = t9613 + t9614;
  t9323 = t8228*t9321*t8189;
  t9353 = t8241*t9352;
  t9362 = t9323 + t9353;
  t14217 = -0.0641*t9037;
  t14829 = -0.28*t9235;
  t15222 = t14217 + t14829;
  t17776 = -1.*t9037;
  t20432 = 1. + t17776;
  t20857 = 0.075*t20432;
  t20897 = 0.355*t9037;
  t22294 = -0.0641*t9235;
  t22302 = t20857 + t20897 + t22294;
  t8225 = t1461*t8189;
  t8405 = -1.*t8228*t8241*t8242;
  t8530 = t8225 + t8405;
  t13438 = -0.325*t9054;
  t17002 = t9200*t15222;
  t22308 = t9054*t22302;
  t22352 = t13438 + t17002 + t22308;
  t22452 = -1.*t9200;
  t22456 = 1. + t22452;
  t22457 = 0.325*t22456;
  t22458 = -1.*t9054*t15222;
  t22459 = t9200*t22302;
  t22460 = t22457 + t22458 + t22459;
  t9926 = -1.*t8228;
  t11233 = 1. + t9926;
  t11526 = -0.1575*t11233;
  t12785 = -0.2255*t8228;
  t22439 = -1.*t1461*t22352;
  t22441 = t11526 + t12785 + t22439;
  t22542 = -0.068*t1461;
  t22544 = t8228*t22352;
  t22556 = t22542 + t22544;
  t22569 = t9326*t22460;
  t22570 = -1.*t22441*t8242;
  t22572 = t22569 + t22570;
  t22442 = t9326*t22441;
  t22461 = t22460*t8242;
  t22466 = t22442 + t22461;
  t22564 = t22556*t8189;
  t22574 = t8241*t22572;
  t22577 = t22564 + t22574;
  t22579 = t8241*t22556;
  t22580 = -1.*t8189*t22572;
  t22585 = t22579 + t22580;
  t9371 = t8228*t9336*t8189;
  t9400 = t8241*t9399;
  t9407 = t9371 + t9400;
  t22537 = t8228*t9326*t22466;
  t22594 = -1.*t22466*t9582;
  t22617 = t22466*t9582;
  t22625 = -1.*t22466*t9609;
  t22643 = -1.*t8228*t9326*t22466;
  t22660 = t22466*t9609;
  t22723 = -1.*t1461*t22556;
  t22731 = t8228*t22556*t9336;
  t22674 = t1461*t22556;
  t22680 = -1.*t8228*t22556*t9321;
  t22714 = -1.*t8228*t22556*t9336;
  t22702 = t8228*t22556*t9321;
  t22798 = t22460*t9336;
  t22781 = -1.*t22460*t9391;
  p_output1[0]=t9362*var2[0] + t8530*var2[1] + t9407*var2[2];
  p_output1[1]=(t9431*t9582 - 1.*t9463*t9586)*var2[0] + (t8228*t9326*t9431 - 1.*t9463*t9482)*var2[1] + (t9431*t9609 - 1.*t9463*t9637)*var2[2];
  p_output1[2]=(t9463*t9582 + t9431*t9586)*var2[0] + (t8228*t9326*t9463 + t9431*t9482)*var2[1] + (t9463*t9609 + t9431*t9637)*var2[2];
  p_output1[3]=(t9407*(t22643 - 1.*t22577*t8530 - 1.*t22585*t9482) + t8530*(t22660 + t22577*t9407 + t22585*t9637))*var2[0] + (t9407*(t22617 + t22577*t9362 + t22585*t9586) + t9362*(t22625 - 1.*t22577*t9407 - 1.*t22585*t9637))*var2[1] + (t9362*(t22537 + t22577*t8530 + t22585*t9482) + t8530*(t22594 - 1.*t22577*t9362 - 1.*t22585*t9586))*var2[2];
  p_output1[4]=(t8228*t9326*(t22660 + t22731 + t22572*t9399) + (t22643 + t22723 + t22572*t8228*t8242)*t9609)*var2[0] + ((t22625 + t22714 - 1.*t22572*t9399)*t9582 + (t22617 + t22702 + t22572*t9352)*t9609)*var2[1] + (t8228*t9326*(t22594 + t22680 - 1.*t22572*t9352) + (t22537 + t22674 - 1.*t22572*t8228*t8242)*t9582)*var2[2];
  p_output1[5]=(t8228*(t22723 - 1.*t22441*t8228)*t9336 + t1461*(t22731 - 1.*t1461*t22441*t9336 + t22460*t9391))*var2[0] + (t8228*(t22702 + t22798 - 1.*t1461*t22441*t9321)*t9336 + t8228*t9321*(t22714 + t22781 + t1461*t22441*t9336))*var2[1] + (t8228*(t22674 + t22441*t8228)*t9321 + t1461*(t22680 + t1461*t22441*t9321 - 1.*t22460*t9336))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t9321 + 0.2255*t9391)*var2[0] + (t9336*(t22781 - 1.*t22352*t9336) + (t22798 + t22352*t9321)*t9391)*var2[1] - 0.068*t9336*var2[2];
  p_output1[13]=(-1.*t15222*t9037 + 0.325*t9235 - 1.*t22302*t9235)*var2[0] + (-0.325*t9037 + t22302*t9037 - 1.*t15222*t9235)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
