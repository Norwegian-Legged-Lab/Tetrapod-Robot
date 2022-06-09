/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:25 GMT+02:00
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
  double t576;
  double t605;
  double t585;
  double t645;
  double t1973;
  double t637;
  double t1988;
  double t599;
  double t2079;
  double t2082;
  double t2085;
  double t611;
  double t2040;
  double t1961;
  double t1995;
  double t2006;
  double t601;
  double t617;
  double t619;
  double t2199;
  double t2194;
  double t2086;
  double t2088;
  double t2089;
  double t2102;
  double t2103;
  double t2104;
  double t2112;
  double t2113;
  double t2115;
  double t2221;
  double t2274;
  double t2275;
  double t2279;
  double t2280;
  double t2284;
  double t2289;
  double t2290;
  double t2291;
  double t2295;
  double t2299;
  double t2304;
  double t2306;
  double t2307;
  double t2308;
  double t2041;
  double t2090;
  double t2094;
  double t2564;
  double t2565;
  double t2569;
  double t2570;
  double t2571;
  double t2574;
  double t2575;
  double t2579;
  double t2581;
  double t2582;
  double t2583;
  double t2586;
  double t2587;
  double t2595;
  double t2598;
  double t2599;
  double t2566;
  double t2567;
  double t2568;
  double t2591;
  double t2593;
  double t2607;
  double t2609;
  double t2612;
  double t2614;
  double t2616;
  double t2618;
  double t2620;
  double t2594;
  double t2603;
  double t2605;
  double t2615;
  double t2621;
  double t2623;
  double t2625;
  double t2627;
  double t2630;
  double t2107;
  double t2116;
  double t2117;
  double t2606;
  double t2635;
  double t2645;
  double t2652;
  double t2662;
  double t2667;
  double t2787;
  double t2794;
  t576 = Cos(var1[4]);
  t605 = Cos(var1[12]);
  t585 = Cos(var1[5]);
  t645 = Cos(var1[14]);
  t1973 = Sin(var1[13]);
  t637 = Cos(var1[13]);
  t1988 = Sin(var1[14]);
  t599 = Sin(var1[12]);
  t2079 = t645*t1973;
  t2082 = -1.*t637*t1988;
  t2085 = t2079 + t2082;
  t611 = Sin(var1[5]);
  t2040 = Sin(var1[4]);
  t1961 = t637*t645;
  t1995 = t1973*t1988;
  t2006 = t1961 + t1995;
  t601 = -1.*t585*t599;
  t617 = -1.*t605*t611;
  t619 = t601 + t617;
  t2199 = Cos(var1[3]);
  t2194 = Sin(var1[3]);
  t2086 = t605*t585*t2085;
  t2088 = -1.*t599*t2085*t611;
  t2089 = t2086 + t2088;
  t2102 = -1.*t645*t1973;
  t2103 = t637*t1988;
  t2104 = t2102 + t2103;
  t2112 = t605*t585*t2006;
  t2113 = -1.*t599*t2006*t611;
  t2115 = t2112 + t2113;
  t2221 = t605*t585;
  t2274 = -1.*t599*t611;
  t2275 = t2221 + t2274;
  t2279 = t585*t599*t2085;
  t2280 = t605*t2085*t611;
  t2284 = t2279 + t2280;
  t2289 = t576*t2006;
  t2290 = -1.*t2040*t2089;
  t2291 = t2289 + t2290;
  t2295 = t585*t599*t2006;
  t2299 = t605*t2006*t611;
  t2304 = t2295 + t2299;
  t2306 = t576*t2104;
  t2307 = -1.*t2040*t2115;
  t2308 = t2306 + t2307;
  t2041 = t2006*t2040;
  t2090 = t576*t2089;
  t2094 = t2041 + t2090;
  t2564 = -1.*t605;
  t2565 = 1. + t2564;
  t2569 = -1.*t637;
  t2570 = 1. + t2569;
  t2571 = 0.28121*t2570;
  t2574 = -1.*t645;
  t2575 = 1. + t2574;
  t2579 = 0.50321*t2575;
  t2581 = 0.19821*t645;
  t2582 = t2579 + t2581;
  t2583 = t637*t2582;
  t2586 = -0.305*t1973*t1988;
  t2587 = t2571 + t2583 + t2586;
  t2595 = 0.15121*t2565;
  t2598 = t605*t2587;
  t2599 = t2595 + t2598;
  t2566 = -0.15121*t2565;
  t2567 = -0.15121*t605;
  t2568 = -0.15121*t599;
  t2591 = t599*t2587;
  t2593 = t2566 + t2567 + t2568 + t2591;
  t2607 = 0.28121*t1973;
  t2609 = -1.*t2582*t1973;
  t2612 = -0.305*t637*t1988;
  t2614 = t2607 + t2609 + t2612;
  t2616 = t585*t2599;
  t2618 = -1.*t2593*t611;
  t2620 = t2616 + t2618;
  t2594 = t585*t2593;
  t2603 = t2599*t611;
  t2605 = t2594 + t2603;
  t2615 = t2614*t2040;
  t2621 = t576*t2620;
  t2623 = t2615 + t2621;
  t2625 = t576*t2614;
  t2627 = -1.*t2040*t2620;
  t2630 = t2625 + t2627;
  t2107 = t2104*t2040;
  t2116 = t576*t2115;
  t2117 = t2107 + t2116;
  t2606 = -1.*t2275*t2605;
  t2635 = t2284*t2605;
  t2645 = t2275*t2605;
  t2652 = -1.*t2304*t2605;
  t2662 = -1.*t2284*t2605;
  t2667 = t2304*t2605;
  t2787 = -1.*t2614*t2006;
  t2794 = t2614*t2104;
  p_output1[0]=t2117*var2[0] + t576*t619*var2[1] + t2094*var2[2];
  p_output1[1]=(t2199*t2304 - 1.*t2194*t2308)*var2[0] + (t2199*t2275 + t2040*t2194*t619)*var2[1] + (t2199*t2284 - 1.*t2194*t2291)*var2[2];
  p_output1[2]=(t2194*t2304 + t2199*t2308)*var2[0] + (t2194*t2275 - 1.*t2040*t2199*t619)*var2[1] + (t2194*t2284 + t2199*t2291)*var2[2];
  p_output1[3]=((t2094*t2623 + t2291*t2630 + t2635)*t576*t619 + t2094*(t2606 + t2040*t2630*t619 - 1.*t2623*t576*t619))*var2[0] + (t2117*(-1.*t2094*t2623 - 1.*t2291*t2630 + t2662) + t2094*(t2117*t2623 + t2308*t2630 + t2667))*var2[1] + ((-1.*t2117*t2623 - 1.*t2308*t2630 + t2652)*t576*t619 + t2117*(t2645 - 1.*t2040*t2630*t619 + t2623*t576*t619))*var2[2];
  p_output1[4]=(t2275*(t2006*t2614 + t2089*t2620 + t2635) + t2284*(t2606 - 1.*t2620*t619))*var2[0] + (t2304*(-1.*t2089*t2620 + t2662 + t2787) + t2284*(t2115*t2620 + t2667 + t2794))*var2[1] + (t2275*(-1.*t2104*t2614 - 1.*t2115*t2620 + t2652) + t2304*(t2645 + t2620*t619))*var2[2];
  p_output1[5]=t2006*(t2599*t599 - 1.*t2593*t605)*var2[0] + (t2006*(t2794 + t2006*t2593*t599 + t2006*t2599*t605) + t2104*(t2787 - 1.*t2085*t2593*t599 - 1.*t2085*t2599*t605))*var2[1] + t2104*(-1.*t2599*t599 + t2593*t605)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t2104*(-1.*t2085*t2587 + t2787) + t2006*(t2006*t2587 + t2794))*var2[1] + (-0.15121*t2085 - 0.15121*t2104)*var2[2];
  p_output1[13]=(0.28121*t1988 - 1.*t1988*t2582 - 0.305*t1988*t645)*var2[0] + (0.305*Power(t1988,2) + 0.28121*t645 - 1.*t2582*t645)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
