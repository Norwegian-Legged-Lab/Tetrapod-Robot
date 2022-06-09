/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:41 GMT+02:00
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
  double t1990;
  double t1711;
  double t1861;
  double t2009;
  double t2143;
  double t1985;
  double t2218;
  double t1921;
  double t2219;
  double t2224;
  double t2226;
  double t2249;
  double t2253;
  double t2254;
  double t2255;
  double t2274;
  double t2307;
  double t2308;
  double t2311;
  double t2135;
  double t2142;
  double t1925;
  double t1977;
  double t2294;
  double t2303;
  double t2338;
  double t2352;
  double t2360;
  double t2440;
  double t2462;
  double t2466;
  double t2615;
  double t2616;
  double t2617;
  double t2631;
  double t2632;
  double t2633;
  double t2787;
  double t2788;
  double t2789;
  double t2791;
  double t2795;
  double t2801;
  double t2834;
  double t2835;
  double t2837;
  double t2978;
  double t3063;
  double t3221;
  double t3228;
  double t3231;
  double t3024;
  double t3098;
  double t3099;
  double t3620;
  double t3631;
  double t3656;
  double t3725;
  double t3746;
  double t3750;
  double t3774;
  double t3801;
  double t3803;
  double t4503;
  double t4504;
  double t4516;
  double t4532;
  double t4538;
  double t4541;
  double t4543;
  double t4544;
  double t4547;
  double t4593;
  double t4598;
  double t4602;
  double t4889;
  double t4925;
  double t4930;
  double t5100;
  double t5116;
  double t5142;
  double t5186;
  double t5251;
  double t5294;
  double t6406;
  double t6445;
  double t6454;
  double t7051;
  double t7088;
  double t7098;
  double t7289;
  double t7290;
  double t7291;
  double t7303;
  double t7307;
  double t7534;
  double t7764;
  double t7893;
  double t7969;
  double t8923;
  double t9126;
  double t9127;
  double t9216;
  double t9217;
  double t9219;
  double t8108;
  double t9627;
  double t9690;
  double t9778;
  double t9793;
  double t9795;
  double t9796;
  double t9831;
  double t9834;
  double t9835;
  double t10300;
  double t10302;
  double t10304;
  double t10325;
  double t10327;
  double t10328;
  double t10375;
  double t10506;
  double t10517;
  double t3464;
  double t10576;
  double t10594;
  double t10614;
  double t10615;
  double t10622;
  double t10667;
  double t10680;
  double t10703;
  double t10713;
  double t10718;
  double t10730;
  double t10732;
  double t10733;
  double t10739;
  double t10766;
  double t10769;
  double t10770;
  t1990 = Sin(var1[4]);
  t1711 = Cos(var1[4]);
  t1861 = Sin(var1[12]);
  t2009 = Cos(var1[12]);
  t2143 = Sin(var1[5]);
  t1985 = Cos(var1[5]);
  t2218 = Sin(var1[13]);
  t1921 = Cos(var1[13]);
  t2219 = t2009*t1711;
  t2224 = -1.*t1861*t1990*t2143;
  t2226 = t2219 + t2224;
  t2249 = Sin(var1[14]);
  t2253 = t1985*t2218*t1990;
  t2254 = t1921*t2226;
  t2255 = t2253 + t2254;
  t2274 = Cos(var1[14]);
  t2307 = -1.*t1921*t1985*t1990;
  t2308 = t2218*t2226;
  t2311 = t2307 + t2308;
  t2135 = -1.*t2009;
  t2142 = 1. + t2135;
  t1925 = -1.*t1921;
  t1977 = 1. + t1925;
  t2294 = -1.*t2274;
  t2303 = 1. + t2294;
  t2338 = t1711*t1985*t1861*t2218;
  t2352 = -1.*t1921*t1711*t2143;
  t2360 = t2338 + t2352;
  t2440 = t1921*t1711*t1985*t1861;
  t2462 = t1711*t2218*t2143;
  t2466 = t2440 + t2462;
  t2615 = -1.*t1861*t1990;
  t2616 = t2009*t1711*t2143;
  t2617 = t2615 + t2616;
  t2631 = t2009*t1990;
  t2632 = t1711*t1861*t2143;
  t2633 = t2631 + t2632;
  t2787 = -1.*t1711*t1985*t2218;
  t2788 = t1921*t2633;
  t2789 = t2787 + t2788;
  t2791 = -1.*t1921*t1711*t1985;
  t2795 = -1.*t2218*t2633;
  t2801 = t2791 + t2795;
  t2834 = t1921*t1711*t1985;
  t2835 = t2218*t2633;
  t2837 = t2834 + t2835;
  t2978 = Cos(var1[3]);
  t3063 = Sin(var1[3]);
  t3221 = -1.*t1985*t3063;
  t3228 = -1.*t2978*t1990*t2143;
  t3231 = t3221 + t3228;
  t3024 = t2978*t1985*t1990;
  t3098 = -1.*t3063*t2143;
  t3099 = t3024 + t3098;
  t3620 = -1.*t2009*t2978*t1711;
  t3631 = -1.*t1861*t3231;
  t3656 = t3620 + t3631;
  t3725 = -1.*t2218*t3099;
  t3746 = t1921*t3656;
  t3750 = t3725 + t3746;
  t3774 = t1921*t3099;
  t3801 = t2218*t3656;
  t3803 = t3774 + t3801;
  t4503 = t2009*t3063*t1990;
  t4504 = t1711*t1861*t3063*t2143;
  t4516 = t4503 + t4504;
  t4532 = -1.*t1711*t1985*t2218*t3063;
  t4538 = t1921*t4516;
  t4541 = t4532 + t4538;
  t4543 = t1921*t1711*t1985*t3063;
  t4544 = t2218*t4516;
  t4547 = t4543 + t4544;
  t4593 = -1.*t1985*t3063*t1990;
  t4598 = -1.*t2978*t2143;
  t4602 = t4593 + t4598;
  t4889 = t2978*t1985;
  t4925 = -1.*t3063*t1990*t2143;
  t4930 = t4889 + t4925;
  t5100 = -1.*t1861*t2218*t4602;
  t5116 = t1921*t4930;
  t5142 = t5100 + t5116;
  t5186 = -1.*t1921*t1861*t4602;
  t5251 = -1.*t2218*t4930;
  t5294 = t5186 + t5251;
  t6406 = t1711*t1861*t3063;
  t6445 = -1.*t2009*t4930;
  t6454 = t6406 + t6445;
  t7051 = -1.*t2009*t1711*t3063;
  t7088 = -1.*t1861*t4930;
  t7098 = t7051 + t7088;
  t7289 = t1985*t3063*t1990;
  t7290 = t2978*t2143;
  t7291 = t7289 + t7290;
  t7303 = -1.*t2218*t7291;
  t7307 = t1921*t7098;
  t7534 = t7303 + t7307;
  t7764 = -1.*t1921*t7291;
  t7893 = -1.*t2218*t7098;
  t7969 = t7764 + t7893;
  t8923 = t1921*t7291;
  t9126 = t2218*t7098;
  t9127 = t8923 + t9126;
  t9216 = -1.*t2249*t7534;
  t9217 = t2274*t9127;
  t9219 = t9216 + t9217;
  t8108 = t2274*t7534;
  t9627 = -1.*t2009*t2978*t1990;
  t9690 = -1.*t2978*t1711*t1861*t2143;
  t9778 = t9627 + t9690;
  t9793 = t2978*t1711*t1985*t2218;
  t9795 = t1921*t9778;
  t9796 = t9793 + t9795;
  t9831 = -1.*t1921*t2978*t1711*t1985;
  t9834 = t2218*t9778;
  t9835 = t9831 + t9834;
  t10300 = t1985*t3063;
  t10302 = t2978*t1990*t2143;
  t10304 = t10300 + t10302;
  t10325 = -1.*t1861*t2218*t3099;
  t10327 = t1921*t10304;
  t10328 = t10325 + t10327;
  t10375 = -1.*t1921*t1861*t3099;
  t10506 = -1.*t2218*t10304;
  t10517 = t10375 + t10506;
  t3464 = -1.*t2978*t1711*t1861;
  t10576 = -1.*t2009*t10304;
  t10594 = t3464 + t10576;
  t10614 = t2009*t2978*t1711;
  t10615 = -1.*t1861*t10304;
  t10622 = t10614 + t10615;
  t10667 = -1.*t2978*t1985*t1990;
  t10680 = t3063*t2143;
  t10703 = t10667 + t10680;
  t10713 = -1.*t2218*t10703;
  t10718 = t1921*t10622;
  t10730 = t10713 + t10718;
  t10732 = -1.*t1921*t10703;
  t10733 = -1.*t2218*t10622;
  t10739 = t10732 + t10733;
  t10766 = t1921*t10703;
  t10769 = t2218*t10622;
  t10770 = t10766 + t10769;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t1711*t1861 - 0.325*t1977*t1985*t1990 - 0.1575*t1990*t2142*t2143 - 0.2255*(t1711*t1861 + t1990*t2009*t2143) - 0.325*t2218*t2226 + 0.075*t2249*t2255 + 0.075*t2303*t2311 - 0.0641*(t2255*t2274 + t2249*t2311) + 0.355*(-1.*t2249*t2255 + t2274*t2311);
  p_output1[2]=0.2255*t1711*t1985*t2009 + 0.1575*t1711*t1985*t2142 - 0.325*t1711*t1977*t2143 - 0.325*t1711*t1861*t1985*t2218 + 0.075*t2303*t2360 + 0.075*t2249*t2466 + 0.355*(t2274*t2360 - 1.*t2249*t2466) - 0.0641*(t2249*t2360 + t2274*t2466);
  p_output1[3]=0.1575*t1990*t2009 + 0.1575*t1711*t1861*t2143 - 0.325*t2218*t2617 + 0.075*t1921*t2249*t2617 + 0.075*t2218*t2303*t2617 - 0.0641*(t2218*t2249*t2617 + t1921*t2274*t2617) + 0.355*(-1.*t1921*t2249*t2617 + t2218*t2274*t2617) - 0.2255*t2633;
  p_output1[4]=0.325*t1711*t1985*t2218 - 0.325*t1921*t2633 + 0.075*t2303*t2789 + 0.075*t2249*t2801 + 0.355*(t2274*t2789 - 1.*t2249*t2801) - 0.0641*(t2249*t2789 + t2274*t2801);
  p_output1[5]=0.075*t2274*t2789 + 0.075*t2249*t2837 + 0.355*(-1.*t2274*t2789 - 1.*t2249*t2837) - 0.0641*(-1.*t2249*t2789 + t2274*t2837);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-0.1575*t1711*t1861*t2978 + 0.325*t1977*t3099 - 0.1575*t2142*t3231 - 0.2255*(t2009*t3231 + t3464) - 0.325*t2218*t3656 + 0.075*t2249*t3750 + 0.075*t2303*t3803 - 0.0641*(t2274*t3750 + t2249*t3803) + 0.355*(-1.*t2249*t3750 + t2274*t3803);
  p_output1[9]=0.325*t1711*t1977*t1985*t3063 + 0.1575*t1861*t1990*t3063 + 0.1575*t1711*t2142*t2143*t3063 - 0.2255*(t1861*t1990*t3063 - 1.*t1711*t2009*t2143*t3063) - 0.325*t2218*t4516 + 0.075*t2249*t4541 + 0.075*t2303*t4547 - 0.0641*(t2274*t4541 + t2249*t4547) + 0.355*(-1.*t2249*t4541 + t2274*t4547);
  p_output1[10]=-0.2255*t2009*t4602 - 0.1575*t2142*t4602 + 0.325*t1861*t2218*t4602 + 0.325*t1977*t4930 + 0.075*t2303*t5142 + 0.075*t2249*t5294 + 0.355*(t2274*t5142 - 1.*t2249*t5294) - 0.0641*(t2249*t5142 + t2274*t5294);
  p_output1[11]=-0.1575*t1711*t2009*t3063 - 0.1575*t1861*t4930 - 0.325*t2218*t6454 + 0.075*t1921*t2249*t6454 + 0.075*t2218*t2303*t6454 - 0.0641*(t2218*t2249*t6454 + t1921*t2274*t6454) + 0.355*(-1.*t1921*t2249*t6454 + t2218*t2274*t6454) - 0.2255*t7098;
  p_output1[12]=-0.325*t1921*t7098 + 0.325*t2218*t7291 + 0.075*t2303*t7534 + 0.075*t2249*t7969 - 0.0641*(t2249*t7534 + t2274*t7969) + 0.355*(-1.*t2249*t7969 + t8108);
  p_output1[13]=0.075*t2274*t7534 + 0.075*t2249*t9127 + 0.355*(-1.*t2274*t7534 - 1.*t2249*t9127) - 0.0641*t9219;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.1575*t1711*t1861*t3063 - 0.1575*t2142*t4930 - 0.2255*(-1.*t1711*t1861*t3063 + t2009*t4930) - 0.325*t2218*t7098 + 0.325*t1977*t7291 + 0.075*t2249*t7534 + 0.075*t2303*t9127 - 0.0641*(t8108 + t2249*t9127) + 0.355*t9219;
  p_output1[17]=-0.325*t1711*t1977*t1985*t2978 - 0.1575*t1861*t1990*t2978 - 0.1575*t1711*t2142*t2143*t2978 - 0.2255*(-1.*t1861*t1990*t2978 + t1711*t2009*t2143*t2978) - 0.325*t2218*t9778 + 0.075*t2249*t9796 + 0.075*t2303*t9835 - 0.0641*(t2274*t9796 + t2249*t9835) + 0.355*(-1.*t2249*t9796 + t2274*t9835);
  p_output1[18]=0.325*t10304*t1977 + 0.075*t10517*t2249 + 0.355*(-1.*t10517*t2249 + t10328*t2274) - 0.0641*(t10328*t2249 + t10517*t2274) + 0.075*t10328*t2303 - 0.2255*t2009*t3099 - 0.1575*t2142*t3099 + 0.325*t1861*t2218*t3099;
  p_output1[19]=-0.2255*t10622 - 0.1575*t10304*t1861 - 0.325*t10594*t2218 + 0.075*t10594*t1921*t2249 - 0.0641*(t10594*t2218*t2249 + t10594*t1921*t2274) + 0.355*(-1.*t10594*t1921*t2249 + t10594*t2218*t2274) + 0.075*t10594*t2218*t2303 + 0.1575*t1711*t2009*t2978;
  p_output1[20]=-0.325*t10622*t1921 + 0.325*t10703*t2218 + 0.075*t10739*t2249 + 0.355*(-1.*t10739*t2249 + t10730*t2274) - 0.0641*(t10730*t2249 + t10739*t2274) + 0.075*t10730*t2303;
  p_output1[21]=0.075*t10770*t2249 + 0.075*t10730*t2274 + 0.355*(-1.*t10770*t2249 - 1.*t10730*t2274) - 0.0641*(-1.*t10730*t2249 + t10770*t2274);
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
