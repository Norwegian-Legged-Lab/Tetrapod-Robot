/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:53 GMT+02:00
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
  double t1978;
  double t667;
  double t1145;
  double t2019;
  double t1555;
  double t2020;
  double t2032;
  double t2325;
  double t2366;
  double t2330;
  double t2331;
  double t2343;
  double t2367;
  double t629;
  double t2290;
  double t2066;
  double t2363;
  double t2379;
  double t2397;
  double t2415;
  double t2408;
  double t2409;
  double t2411;
  double t2406;
  double t2416;
  double t2419;
  double t2423;
  double t2487;
  double t2489;
  double t2490;
  double t2492;
  double t2499;
  double t2508;
  double t2520;
  double t2521;
  double t2532;
  double t2486;
  double t2491;
  double t2533;
  double t2545;
  double t2584;
  double t2585;
  double t2590;
  double t2591;
  double t2596;
  double t2602;
  double t2474;
  double t2477;
  double t2481;
  double t2482;
  double t2546;
  double t2564;
  double t2629;
  double t2633;
  double t2634;
  double t2638;
  double t2645;
  double t2658;
  double t2619;
  double t2624;
  double t2626;
  double t2570;
  double t2613;
  double t2614;
  double t2440;
  double t2442;
  double t2445;
  double t2635;
  double t2666;
  double t2670;
  double t2436;
  double t2446;
  double t2452;
  double t2454;
  double t2455;
  double t2460;
  double t2684;
  double t2687;
  double t2690;
  double t2702;
  double t2704;
  double t2705;
  double t2615;
  double t2706;
  double t2724;
  double t2730;
  double t2672;
  double t2675;
  double t2677;
  double t2079;
  double t2398;
  double t2401;
  double t2711;
  double t2712;
  double t2713;
  double t2811;
  double t2821;
  double t2833;
  double t2829;
  double t2870;
  double t2846;
  double t2911;
  double t2927;
  double t2936;
  double t2949;
  t1978 = Cos(var1[10]);
  t667 = Cos(var1[11]);
  t1145 = Sin(var1[10]);
  t2019 = Sin(var1[11]);
  t1555 = t667*t1145;
  t2020 = -1.*t1978*t2019;
  t2032 = t1555 + t2020;
  t2325 = Cos(var1[5]);
  t2366 = Sin(var1[9]);
  t2330 = t1978*t667;
  t2331 = t1145*t2019;
  t2343 = t2330 + t2331;
  t2367 = Sin(var1[5]);
  t629 = Cos(var1[9]);
  t2290 = Cos(var1[4]);
  t2066 = Sin(var1[4]);
  t2363 = t2325*t2343;
  t2379 = t2366*t2032*t2367;
  t2397 = t2363 + t2379;
  t2415 = Sin(var1[3]);
  t2408 = -1.*t2325*t2366*t2032;
  t2409 = t2343*t2367;
  t2411 = t2408 + t2409;
  t2406 = Cos(var1[3]);
  t2416 = t629*t2290*t2032;
  t2419 = -1.*t2066*t2397;
  t2423 = t2416 + t2419;
  t2487 = -0.0641*t667;
  t2489 = -0.28*t2019;
  t2490 = t2487 + t2489;
  t2492 = -1.*t667;
  t2499 = 1. + t2492;
  t2508 = -0.575*t2499;
  t2520 = -0.295*t667;
  t2521 = -0.0641*t2019;
  t2532 = t2508 + t2520 + t2521;
  t2486 = 0.325*t1145;
  t2491 = t1978*t2490;
  t2533 = t1145*t2532;
  t2545 = t2486 + t2491 + t2533;
  t2584 = -1.*t1978;
  t2585 = 1. + t2584;
  t2590 = -0.325*t2585;
  t2591 = -1.*t1145*t2490;
  t2596 = t1978*t2532;
  t2602 = t2590 + t2591 + t2596;
  t2474 = -1.*t629;
  t2477 = 1. + t2474;
  t2481 = 0.1575*t2477;
  t2482 = 0.2255*t629;
  t2546 = -1.*t2366*t2545;
  t2564 = t2481 + t2482 + t2546;
  t2629 = 0.068*t2366;
  t2633 = t629*t2545;
  t2634 = t2629 + t2633;
  t2638 = t2325*t2602;
  t2645 = -1.*t2564*t2367;
  t2658 = t2638 + t2645;
  t2619 = t2366*t2066;
  t2624 = -1.*t629*t2290*t2367;
  t2626 = t2619 + t2624;
  t2570 = t2325*t2564;
  t2613 = t2602*t2367;
  t2614 = t2570 + t2613;
  t2440 = -1.*t667*t1145;
  t2442 = t1978*t2019;
  t2445 = t2440 + t2442;
  t2635 = t2634*t2066;
  t2666 = t2290*t2658;
  t2670 = t2635 + t2666;
  t2436 = t629*t2343*t2066;
  t2446 = t2325*t2445;
  t2452 = t2366*t2343*t2367;
  t2454 = t2446 + t2452;
  t2455 = t2290*t2454;
  t2460 = t2436 + t2455;
  t2684 = t2290*t2634;
  t2687 = -1.*t2066*t2658;
  t2690 = t2684 + t2687;
  t2702 = -1.*t2325*t2366*t2343;
  t2704 = t2445*t2367;
  t2705 = t2702 + t2704;
  t2615 = -1.*t629*t2325*t2614;
  t2706 = t2614*t2705;
  t2724 = -1.*t2366*t2634;
  t2730 = t629*t2634*t2343;
  t2672 = t2290*t2366;
  t2675 = t629*t2066*t2367;
  t2677 = t2672 + t2675;
  t2079 = t629*t2032*t2066;
  t2398 = t2290*t2397;
  t2401 = t2079 + t2398;
  t2711 = t629*t2290*t2343;
  t2712 = -1.*t2066*t2454;
  t2713 = t2711 + t2712;
  t2811 = t2614*t2411;
  t2821 = -1.*t2614*t2705;
  t2833 = -1.*t629*t2634*t2343;
  t2829 = t629*t2634*t2032;
  t2870 = t2602*t2343;
  t2846 = -1.*t2602*t2445;
  t2911 = t629*t2325*t2614;
  t2927 = -1.*t2614*t2411;
  t2936 = t2366*t2634;
  t2949 = -1.*t629*t2634*t2032;
  p_output1[0]=t2401;
  p_output1[1]=t2406*t2411 - 1.*t2415*t2423;
  p_output1[2]=t2411*t2415 + t2406*t2423;
  p_output1[3]=t2460*(t2615 - 1.*t2626*t2670 - 1.*t2677*t2690) + t2626*(t2460*t2670 + t2706 + t2690*t2713);
  p_output1[4]=t2325*(t2454*t2658 + t2706 + t2730)*t629 + t2705*(t2615 + t2724 + t2367*t2658*t629);
  p_output1[5]=t2366*(-1.*t2343*t2366*t2564 + t2445*t2602 + t2730) + t2343*t629*(t2724 - 1.*t2564*t629);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t2032 - 0.2255*t2445;
  p_output1[10]=-0.325*t2019 - 1.*t2019*t2532 - 1.*t2490*t667;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2626;
  p_output1[19]=-1.*t2415*t2677 + t2325*t2406*t629;
  p_output1[20]=t2406*t2677 + t2325*t2415*t629;
  p_output1[21]=t2460*(t2401*t2670 + t2423*t2690 + t2811) + t2401*(-1.*t2460*t2670 - 1.*t2690*t2713 + t2821);
  p_output1[22]=t2705*(t2397*t2658 + t2811 + t2829) + t2411*(-1.*t2454*t2658 + t2821 + t2833);
  p_output1[23]=t2032*(t2343*t2366*t2564 + t2833 + t2846)*t629 + t2343*(-1.*t2032*t2366*t2564 + t2829 + t2870)*t629;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t2343*(-1.*t2343*t2545 + t2846) + t2445*(t2032*t2545 + t2870);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2460;
  p_output1[37]=t2406*t2705 - 1.*t2415*t2713;
  p_output1[38]=t2415*t2705 + t2406*t2713;
  p_output1[39]=t2401*(t2626*t2670 + t2677*t2690 + t2911) + t2626*(-1.*t2401*t2670 - 1.*t2423*t2690 + t2927);
  p_output1[40]=t2325*(-1.*t2397*t2658 + t2927 + t2949)*t629 + t2411*(t2911 + t2936 - 1.*t2367*t2658*t629);
  p_output1[41]=t2366*(t2032*t2366*t2564 - 1.*t2343*t2602 + t2949) + t2032*t629*(t2936 + t2564*t629);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t2343;
  p_output1[46]=-1.*t2019*t2490 + 0.325*t667 + t2532*t667;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
