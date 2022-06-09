/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:09 GMT+02:00
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
  double t2027;
  double t1808;
  double t2040;
  double t2138;
  double t2097;
  double t2110;
  double t2151;
  double t1626;
  double t2114;
  double t2152;
  double t2153;
  double t2063;
  double t2169;
  double t2392;
  double t2434;
  double t2166;
  double t2945;
  double t3049;
  double t2438;
  double t2441;
  double t2448;
  double t2504;
  double t2505;
  double t2506;
  double t2539;
  double t2547;
  double t2561;
  double t3118;
  double t3125;
  double t3181;
  double t3271;
  double t3293;
  double t3294;
  double t3319;
  double t3320;
  double t3373;
  double t3496;
  double t4511;
  double t9136;
  double t9192;
  double t9193;
  double t9214;
  double t2160;
  double t2477;
  double t2492;
  double t9445;
  double t9446;
  double t9448;
  double t9459;
  double t9462;
  double t9463;
  double t9492;
  double t9498;
  double t9505;
  double t2026;
  double t2083;
  double t2084;
  double t9429;
  double t9456;
  double t9516;
  double t9521;
  double t9598;
  double t9617;
  double t9618;
  double t9633;
  double t9634;
  double t9703;
  double t9406;
  double t9408;
  double t9412;
  double t9428;
  double t9586;
  double t9587;
  double t10237;
  double t10788;
  double t11012;
  double t11036;
  double t11046;
  double t11074;
  double t9588;
  double t9753;
  double t9756;
  double t11020;
  double t11177;
  double t11198;
  double t11265;
  double t11289;
  double t11339;
  double t2503;
  double t2572;
  double t2706;
  double t10194;
  double t11572;
  double t11802;
  double t11865;
  double t11893;
  double t11958;
  double t12285;
  double t12361;
  double t11988;
  double t12000;
  double t12053;
  double t12046;
  double t18589;
  double t18562;
  t2027 = Cos(var1[15]);
  t1808 = Sin(var1[4]);
  t2040 = Cos(var1[4]);
  t2138 = Cos(var1[16]);
  t2097 = Cos(var1[17]);
  t2110 = Sin(var1[16]);
  t2151 = Sin(var1[17]);
  t1626 = Sin(var1[15]);
  t2114 = t2097*t2110;
  t2152 = -1.*t2138*t2151;
  t2153 = t2114 + t2152;
  t2063 = Sin(var1[5]);
  t2169 = t2138*t2097;
  t2392 = t2110*t2151;
  t2434 = t2169 + t2392;
  t2166 = Cos(var1[5]);
  t2945 = Cos(var1[3]);
  t3049 = Sin(var1[3]);
  t2438 = t2166*t2434;
  t2441 = t1626*t2153*t2063;
  t2448 = t2438 + t2441;
  t2504 = -1.*t2097*t2110;
  t2505 = t2138*t2151;
  t2506 = t2504 + t2505;
  t2539 = t2166*t2506;
  t2547 = t1626*t2434*t2063;
  t2561 = t2539 + t2547;
  t3118 = t2040*t1626;
  t3125 = t2027*t1808*t2063;
  t3181 = t3118 + t3125;
  t3271 = -1.*t2166*t1626*t2153;
  t3293 = t2434*t2063;
  t3294 = t3271 + t3293;
  t3319 = t2027*t2040*t2153;
  t3320 = -1.*t1808*t2448;
  t3373 = t3319 + t3320;
  t3496 = -1.*t2166*t1626*t2434;
  t4511 = t2506*t2063;
  t9136 = t3496 + t4511;
  t9192 = t2027*t2040*t2434;
  t9193 = -1.*t1808*t2561;
  t9214 = t9192 + t9193;
  t2160 = t2027*t2153*t1808;
  t2477 = t2040*t2448;
  t2492 = t2160 + t2477;
  t9445 = -0.0641*t2097;
  t9446 = -0.28*t2151;
  t9448 = t9445 + t9446;
  t9459 = -1.*t2097;
  t9462 = 1. + t9459;
  t9463 = -0.575*t9462;
  t9492 = -0.295*t2097;
  t9498 = -0.0641*t2151;
  t9505 = t9463 + t9492 + t9498;
  t2026 = t1626*t1808;
  t2083 = -1.*t2027*t2040*t2063;
  t2084 = t2026 + t2083;
  t9429 = 0.325*t2110;
  t9456 = t2138*t9448;
  t9516 = t2110*t9505;
  t9521 = t9429 + t9456 + t9516;
  t9598 = -1.*t2138;
  t9617 = 1. + t9598;
  t9618 = -0.325*t9617;
  t9633 = -1.*t2110*t9448;
  t9634 = t2138*t9505;
  t9703 = t9618 + t9633 + t9634;
  t9406 = -1.*t2027;
  t9408 = 1. + t9406;
  t9412 = -0.1575*t9408;
  t9428 = -0.2255*t2027;
  t9586 = -1.*t1626*t9521;
  t9587 = t9412 + t9428 + t9586;
  t10237 = -0.068*t1626;
  t10788 = t2027*t9521;
  t11012 = t10237 + t10788;
  t11036 = t2166*t9703;
  t11046 = -1.*t9587*t2063;
  t11074 = t11036 + t11046;
  t9588 = t2166*t9587;
  t9753 = t9703*t2063;
  t9756 = t9588 + t9753;
  t11020 = t11012*t1808;
  t11177 = t2040*t11074;
  t11198 = t11020 + t11177;
  t11265 = t2040*t11012;
  t11289 = -1.*t1808*t11074;
  t11339 = t11265 + t11289;
  t2503 = t2027*t2434*t1808;
  t2572 = t2040*t2561;
  t2706 = t2503 + t2572;
  t10194 = t2027*t2166*t9756;
  t11572 = -1.*t9756*t3294;
  t11802 = t9756*t3294;
  t11865 = -1.*t9756*t9136;
  t11893 = -1.*t2027*t2166*t9756;
  t11958 = t9756*t9136;
  t12285 = -1.*t1626*t11012;
  t12361 = t2027*t11012*t2434;
  t11988 = t1626*t11012;
  t12000 = -1.*t2027*t11012*t2153;
  t12053 = -1.*t2027*t11012*t2434;
  t12046 = t2027*t11012*t2153;
  t18589 = t9703*t2434;
  t18562 = -1.*t9703*t2506;
  p_output1[0]=t2492*var2[0] + t2084*var2[1] + t2706*var2[2];
  p_output1[1]=(t2945*t3294 - 1.*t3049*t3373)*var2[0] + (t2027*t2166*t2945 - 1.*t3049*t3181)*var2[1] + (t2945*t9136 - 1.*t3049*t9214)*var2[2];
  p_output1[2]=(t3049*t3294 + t2945*t3373)*var2[0] + (t2027*t2166*t3049 + t2945*t3181)*var2[1] + (t3049*t9136 + t2945*t9214)*var2[2];
  p_output1[3]=(t2706*(t11893 - 1.*t11198*t2084 - 1.*t11339*t3181) + t2084*(t11958 + t11198*t2706 + t11339*t9214))*var2[0] + (t2706*(t11802 + t11198*t2492 + t11339*t3373) + t2492*(t11865 - 1.*t11198*t2706 - 1.*t11339*t9214))*var2[1] + (t2492*(t10194 + t11198*t2084 + t11339*t3181) + t2084*(t11572 - 1.*t11198*t2492 - 1.*t11339*t3373))*var2[2];
  p_output1[4]=(t2027*t2166*(t11958 + t12361 + t11074*t2561) + (t11893 + t12285 + t11074*t2027*t2063)*t9136)*var2[0] + ((t11865 + t12053 - 1.*t11074*t2561)*t3294 + (t11802 + t12046 + t11074*t2448)*t9136)*var2[1] + (t2027*t2166*(t11572 + t12000 - 1.*t11074*t2448) + (t10194 + t11988 - 1.*t11074*t2027*t2063)*t3294)*var2[2];
  p_output1[5]=(t2027*t2434*(t12285 - 1.*t2027*t9587) + t1626*(t12361 - 1.*t1626*t2434*t9587 + t2506*t9703))*var2[0] + (t2027*t2434*(t12046 + t18589 - 1.*t1626*t2153*t9587) + t2027*t2153*(t12053 + t18562 + t1626*t2434*t9587))*var2[1] + (t2027*t2153*(t11988 + t2027*t9587) + t1626*(t12000 + t1626*t2153*t9587 - 1.*t2434*t9703))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t2153 + 0.2255*t2506)*var2[0] + (t2506*(t18589 + t2153*t9521) + t2434*(t18562 - 1.*t2434*t9521))*var2[1] - 0.068*t2434*var2[2];
  p_output1[16]=(-0.325*t2151 - 1.*t2097*t9448 - 1.*t2151*t9505)*var2[0] + (0.325*t2097 - 1.*t2151*t9448 + t2097*t9505)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
