/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:51 GMT+02:00
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
  double t1952;
  double t1329;
  double t1331;
  double t1963;
  double t1758;
  double t1983;
  double t2174;
  double t2200;
  double t2404;
  double t2363;
  double t2374;
  double t2377;
  double t2408;
  double t1268;
  double t2189;
  double t2187;
  double t2394;
  double t2409;
  double t2410;
  double t2429;
  double t2419;
  double t2420;
  double t2427;
  double t2418;
  double t2437;
  double t2460;
  double t2461;
  double t2711;
  double t2712;
  double t2713;
  double t2716;
  double t2717;
  double t2718;
  double t2719;
  double t2720;
  double t2721;
  double t2710;
  double t2714;
  double t2722;
  double t2723;
  double t2730;
  double t2733;
  double t2734;
  double t2736;
  double t2737;
  double t2738;
  double t2698;
  double t2699;
  double t2707;
  double t2709;
  double t2724;
  double t2728;
  double t2754;
  double t2755;
  double t2756;
  double t2899;
  double t2902;
  double t2908;
  double t2745;
  double t2746;
  double t2747;
  double t2729;
  double t2740;
  double t2742;
  double t2674;
  double t2675;
  double t2688;
  double t2885;
  double t2918;
  double t2927;
  double t2673;
  double t2689;
  double t2690;
  double t2691;
  double t2694;
  double t2697;
  double t2967;
  double t2975;
  double t3053;
  double t3376;
  double t3654;
  double t3663;
  double t2743;
  double t3711;
  double t4587;
  double t4617;
  double t2943;
  double t2952;
  double t2956;
  double t2188;
  double t2411;
  double t2416;
  double t4569;
  double t4570;
  double t4571;
  double t4743;
  double t4772;
  double t4804;
  double t4798;
  double t13526;
  double t7769;
  double t34257;
  double t35659;
  double t37343;
  double t39319;
  t1952 = Cos(var1[13]);
  t1329 = Cos(var1[14]);
  t1331 = Sin(var1[13]);
  t1963 = Sin(var1[14]);
  t1758 = t1329*t1331;
  t1983 = -1.*t1952*t1963;
  t2174 = t1758 + t1983;
  t2200 = Cos(var1[5]);
  t2404 = Sin(var1[12]);
  t2363 = t1952*t1329;
  t2374 = t1331*t1963;
  t2377 = t2363 + t2374;
  t2408 = Sin(var1[5]);
  t1268 = Cos(var1[12]);
  t2189 = Cos(var1[4]);
  t2187 = Sin(var1[4]);
  t2394 = t2200*t2377;
  t2409 = t2404*t2174*t2408;
  t2410 = t2394 + t2409;
  t2429 = Sin(var1[3]);
  t2419 = -1.*t2200*t2404*t2174;
  t2420 = t2377*t2408;
  t2427 = t2419 + t2420;
  t2418 = Cos(var1[3]);
  t2437 = t1268*t2189*t2174;
  t2460 = -1.*t2187*t2410;
  t2461 = t2437 + t2460;
  t2711 = -0.0641*t1329;
  t2712 = -0.28*t1963;
  t2713 = t2711 + t2712;
  t2716 = -1.*t1329;
  t2717 = 1. + t2716;
  t2718 = 0.075*t2717;
  t2719 = 0.355*t1329;
  t2720 = -0.0641*t1963;
  t2721 = t2718 + t2719 + t2720;
  t2710 = -0.325*t1331;
  t2714 = t1952*t2713;
  t2722 = t1331*t2721;
  t2723 = t2710 + t2714 + t2722;
  t2730 = -1.*t1952;
  t2733 = 1. + t2730;
  t2734 = 0.325*t2733;
  t2736 = -1.*t1331*t2713;
  t2737 = t1952*t2721;
  t2738 = t2734 + t2736 + t2737;
  t2698 = -1.*t1268;
  t2699 = 1. + t2698;
  t2707 = -0.1575*t2699;
  t2709 = -0.2255*t1268;
  t2724 = -1.*t2404*t2723;
  t2728 = t2707 + t2709 + t2724;
  t2754 = -0.068*t2404;
  t2755 = t1268*t2723;
  t2756 = t2754 + t2755;
  t2899 = t2200*t2738;
  t2902 = -1.*t2728*t2408;
  t2908 = t2899 + t2902;
  t2745 = t2404*t2187;
  t2746 = -1.*t1268*t2189*t2408;
  t2747 = t2745 + t2746;
  t2729 = t2200*t2728;
  t2740 = t2738*t2408;
  t2742 = t2729 + t2740;
  t2674 = -1.*t1329*t1331;
  t2675 = t1952*t1963;
  t2688 = t2674 + t2675;
  t2885 = t2756*t2187;
  t2918 = t2189*t2908;
  t2927 = t2885 + t2918;
  t2673 = t1268*t2377*t2187;
  t2689 = t2200*t2688;
  t2690 = t2404*t2377*t2408;
  t2691 = t2689 + t2690;
  t2694 = t2189*t2691;
  t2697 = t2673 + t2694;
  t2967 = t2189*t2756;
  t2975 = -1.*t2187*t2908;
  t3053 = t2967 + t2975;
  t3376 = -1.*t2200*t2404*t2377;
  t3654 = t2688*t2408;
  t3663 = t3376 + t3654;
  t2743 = -1.*t1268*t2200*t2742;
  t3711 = t2742*t3663;
  t4587 = -1.*t2404*t2756;
  t4617 = t1268*t2756*t2377;
  t2943 = t2189*t2404;
  t2952 = t1268*t2187*t2408;
  t2956 = t2943 + t2952;
  t2188 = t1268*t2174*t2187;
  t2411 = t2189*t2410;
  t2416 = t2188 + t2411;
  t4569 = t1268*t2189*t2377;
  t4570 = -1.*t2187*t2691;
  t4571 = t4569 + t4570;
  t4743 = t2742*t2427;
  t4772 = -1.*t2742*t3663;
  t4804 = -1.*t1268*t2756*t2377;
  t4798 = t1268*t2756*t2174;
  t13526 = t2738*t2377;
  t7769 = -1.*t2738*t2688;
  t34257 = t1268*t2200*t2742;
  t35659 = -1.*t2742*t2427;
  t37343 = t2404*t2756;
  t39319 = -1.*t1268*t2756*t2174;
  p_output1[0]=t2416;
  p_output1[1]=t2418*t2427 - 1.*t2429*t2461;
  p_output1[2]=t2427*t2429 + t2418*t2461;
  p_output1[3]=t2697*(t2743 - 1.*t2747*t2927 - 1.*t2956*t3053) + t2747*(t2697*t2927 + t3711 + t3053*t4571);
  p_output1[4]=t3663*(t2743 + t1268*t2408*t2908 + t4587) + t1268*t2200*(t2691*t2908 + t3711 + t4617);
  p_output1[5]=t1268*t2377*(-1.*t1268*t2728 + t4587) + t2404*(-1.*t2377*t2404*t2728 + t2688*t2738 + t4617);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t2174 + 0.2255*t2688;
  p_output1[13]=0.325*t1963 - 1.*t1329*t2713 - 1.*t1963*t2721;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2747;
  p_output1[19]=t1268*t2200*t2418 - 1.*t2429*t2956;
  p_output1[20]=t1268*t2200*t2429 + t2418*t2956;
  p_output1[21]=t2697*(t2416*t2927 + t2461*t3053 + t4743) + t2416*(-1.*t2697*t2927 - 1.*t3053*t4571 + t4772);
  p_output1[22]=t3663*(t2410*t2908 + t4743 + t4798) + t2427*(-1.*t2691*t2908 + t4772 + t4804);
  p_output1[23]=t1268*t2377*(t13526 - 1.*t2174*t2404*t2728 + t4798) + t1268*t2174*(t2377*t2404*t2728 + t4804 + t7769);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t2688*(t13526 + t2174*t2723) + t2377*(-1.*t2377*t2723 + t7769);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2697;
  p_output1[37]=t2418*t3663 - 1.*t2429*t4571;
  p_output1[38]=t2429*t3663 + t2418*t4571;
  p_output1[39]=t2416*(t2747*t2927 + t2956*t3053 + t34257) + t2747*(-1.*t2416*t2927 - 1.*t2461*t3053 + t35659);
  p_output1[40]=t2427*(-1.*t1268*t2408*t2908 + t34257 + t37343) + t1268*t2200*(-1.*t2410*t2908 + t35659 + t39319);
  p_output1[41]=t1268*t2174*(t1268*t2728 + t37343) + t2404*(t2174*t2404*t2728 - 1.*t2377*t2738 + t39319);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t2377;
  p_output1[49]=-0.325*t1329 - 1.*t1963*t2713 + t1329*t2721;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
