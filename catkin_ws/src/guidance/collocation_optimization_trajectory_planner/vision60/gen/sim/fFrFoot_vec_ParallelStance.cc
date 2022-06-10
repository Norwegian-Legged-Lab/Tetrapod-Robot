/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:25 GMT+02:00
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
  double t2513;
  double t801;
  double t2516;
  double t4933;
  double t4906;
  double t4910;
  double t5078;
  double t583;
  double t4932;
  double t5105;
  double t5107;
  double t3088;
  double t5123;
  double t5124;
  double t5125;
  double t5119;
  double t5174;
  double t5178;
  double t5126;
  double t5128;
  double t5129;
  double t5146;
  double t5147;
  double t5148;
  double t5149;
  double t5150;
  double t5152;
  double t5180;
  double t5182;
  double t5188;
  double t5217;
  double t5220;
  double t5221;
  double t5224;
  double t5225;
  double t5233;
  double t5248;
  double t5252;
  double t5254;
  double t5257;
  double t5262;
  double t5275;
  double t5111;
  double t5130;
  double t5134;
  double t5372;
  double t5374;
  double t5375;
  double t5381;
  double t5383;
  double t5385;
  double t5387;
  double t5389;
  double t5398;
  double t947;
  double t4516;
  double t4899;
  double t5364;
  double t5377;
  double t5402;
  double t5407;
  double t5421;
  double t5422;
  double t5429;
  double t5430;
  double t5431;
  double t5432;
  double t5357;
  double t5358;
  double t5359;
  double t5363;
  double t5414;
  double t5416;
  double t5436;
  double t5437;
  double t5438;
  double t5451;
  double t5457;
  double t5467;
  double t5420;
  double t5433;
  double t5434;
  double t5448;
  double t5468;
  double t5471;
  double t5491;
  double t5503;
  double t5504;
  double t5136;
  double t5158;
  double t5169;
  double t5435;
  double t5527;
  double t5555;
  double t5582;
  double t5611;
  double t5630;
  double t5707;
  double t5715;
  double t5645;
  double t5651;
  double t5694;
  double t5683;
  double t5767;
  double t5757;
  t2513 = Cos(var1[12]);
  t801 = Sin(var1[4]);
  t2516 = Cos(var1[4]);
  t4933 = Cos(var1[13]);
  t4906 = Cos(var1[14]);
  t4910 = Sin(var1[13]);
  t5078 = Sin(var1[14]);
  t583 = Sin(var1[12]);
  t4932 = t4906*t4910;
  t5105 = -1.*t4933*t5078;
  t5107 = t4932 + t5105;
  t3088 = Sin(var1[5]);
  t5123 = t4933*t4906;
  t5124 = t4910*t5078;
  t5125 = t5123 + t5124;
  t5119 = Cos(var1[5]);
  t5174 = Cos(var1[3]);
  t5178 = Sin(var1[3]);
  t5126 = t5119*t5125;
  t5128 = t583*t5107*t3088;
  t5129 = t5126 + t5128;
  t5146 = -1.*t4906*t4910;
  t5147 = t4933*t5078;
  t5148 = t5146 + t5147;
  t5149 = t5119*t5148;
  t5150 = t583*t5125*t3088;
  t5152 = t5149 + t5150;
  t5180 = t2516*t583;
  t5182 = t2513*t801*t3088;
  t5188 = t5180 + t5182;
  t5217 = -1.*t5119*t583*t5107;
  t5220 = t5125*t3088;
  t5221 = t5217 + t5220;
  t5224 = t2513*t2516*t5107;
  t5225 = -1.*t801*t5129;
  t5233 = t5224 + t5225;
  t5248 = -1.*t5119*t583*t5125;
  t5252 = t5148*t3088;
  t5254 = t5248 + t5252;
  t5257 = t2513*t2516*t5125;
  t5262 = -1.*t801*t5152;
  t5275 = t5257 + t5262;
  t5111 = t2513*t5107*t801;
  t5130 = t2516*t5129;
  t5134 = t5111 + t5130;
  t5372 = -0.0641*t4906;
  t5374 = -0.28*t5078;
  t5375 = t5372 + t5374;
  t5381 = -1.*t4906;
  t5383 = 1. + t5381;
  t5385 = 0.075*t5383;
  t5387 = 0.355*t4906;
  t5389 = -0.0641*t5078;
  t5398 = t5385 + t5387 + t5389;
  t947 = t583*t801;
  t4516 = -1.*t2513*t2516*t3088;
  t4899 = t947 + t4516;
  t5364 = -0.325*t4910;
  t5377 = t4933*t5375;
  t5402 = t4910*t5398;
  t5407 = t5364 + t5377 + t5402;
  t5421 = -1.*t4933;
  t5422 = 1. + t5421;
  t5429 = 0.325*t5422;
  t5430 = -1.*t4910*t5375;
  t5431 = t4933*t5398;
  t5432 = t5429 + t5430 + t5431;
  t5357 = -1.*t2513;
  t5358 = 1. + t5357;
  t5359 = -0.1575*t5358;
  t5363 = -0.2255*t2513;
  t5414 = -1.*t583*t5407;
  t5416 = t5359 + t5363 + t5414;
  t5436 = -0.068*t583;
  t5437 = t2513*t5407;
  t5438 = t5436 + t5437;
  t5451 = t5119*t5432;
  t5457 = -1.*t5416*t3088;
  t5467 = t5451 + t5457;
  t5420 = t5119*t5416;
  t5433 = t5432*t3088;
  t5434 = t5420 + t5433;
  t5448 = t5438*t801;
  t5468 = t2516*t5467;
  t5471 = t5448 + t5468;
  t5491 = t2516*t5438;
  t5503 = -1.*t801*t5467;
  t5504 = t5491 + t5503;
  t5136 = t2513*t5125*t801;
  t5158 = t2516*t5152;
  t5169 = t5136 + t5158;
  t5435 = t2513*t5119*t5434;
  t5527 = -1.*t5434*t5221;
  t5555 = t5434*t5221;
  t5582 = -1.*t5434*t5254;
  t5611 = -1.*t2513*t5119*t5434;
  t5630 = t5434*t5254;
  t5707 = -1.*t583*t5438;
  t5715 = t2513*t5438*t5125;
  t5645 = t583*t5438;
  t5651 = -1.*t2513*t5438*t5107;
  t5694 = -1.*t2513*t5438*t5125;
  t5683 = t2513*t5438*t5107;
  t5767 = t5432*t5125;
  t5757 = -1.*t5432*t5148;
  p_output1[0]=t5134*var2[0] + t4899*var2[1] + t5169*var2[2];
  p_output1[1]=(t5174*t5221 - 1.*t5178*t5233)*var2[0] + (t2513*t5119*t5174 - 1.*t5178*t5188)*var2[1] + (t5174*t5254 - 1.*t5178*t5275)*var2[2];
  p_output1[2]=(t5178*t5221 + t5174*t5233)*var2[0] + (t2513*t5119*t5178 + t5174*t5188)*var2[1] + (t5178*t5254 + t5174*t5275)*var2[2];
  p_output1[3]=(t5169*(-1.*t4899*t5471 - 1.*t5188*t5504 + t5611) + t4899*(t5169*t5471 + t5275*t5504 + t5630))*var2[0] + (t5169*(t5134*t5471 + t5233*t5504 + t5555) + t5134*(-1.*t5169*t5471 - 1.*t5275*t5504 + t5582))*var2[1] + (t5134*(t5435 + t4899*t5471 + t5188*t5504) + t4899*(-1.*t5134*t5471 - 1.*t5233*t5504 + t5527))*var2[2];
  p_output1[4]=(t5254*(t2513*t3088*t5467 + t5611 + t5707) + t2513*t5119*(t5152*t5467 + t5630 + t5715))*var2[0] + (t5254*(t5129*t5467 + t5555 + t5683) + t5221*(-1.*t5152*t5467 + t5582 + t5694))*var2[1] + (t5221*(t5435 - 1.*t2513*t3088*t5467 + t5645) + t2513*t5119*(-1.*t5129*t5467 + t5527 + t5651))*var2[2];
  p_output1[5]=(t2513*t5125*(-1.*t2513*t5416 + t5707) + t583*(t5148*t5432 + t5715 - 1.*t5125*t5416*t583))*var2[0] + (t2513*t5125*(t5683 + t5767 - 1.*t5107*t5416*t583) + t2513*t5107*(t5694 + t5757 + t5125*t5416*t583))*var2[1] + (t2513*t5107*(t2513*t5416 + t5645) + t583*(-1.*t5125*t5432 + t5651 + t5107*t5416*t583))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t5107 + 0.2255*t5148)*var2[0] + (t5125*(-1.*t5125*t5407 + t5757) + t5148*(t5107*t5407 + t5767))*var2[1] - 0.068*t5125*var2[2];
  p_output1[13]=(0.325*t5078 - 1.*t4906*t5375 - 1.*t5078*t5398)*var2[0] + (-0.325*t4906 - 1.*t5078*t5375 + t4906*t5398)*var2[2];
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
