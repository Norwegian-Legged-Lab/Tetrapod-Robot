/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:27 GMT+02:00
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
  double t1394;
  double t1396;
  double t1397;
  double t1410;
  double t1503;
  double t1775;
  double t1374;
  double t1786;
  double t104;
  double t704;
  double t1978;
  double t1990;
  double t2020;
  double t2194;
  double t2261;
  double t2323;
  double t2325;
  double t2326;
  double t2330;
  double t2440;
  double t2471;
  double t2472;
  double t1781;
  double t1784;
  double t1409;
  double t1675;
  double t1984;
  double t1986;
  double t2318;
  double t2320;
  double t2566;
  double t2578;
  double t2581;
  double t2835;
  double t2583;
  double t2587;
  double t2609;
  double t2640;
  double t2644;
  double t2658;
  double t2669;
  double t2745;
  double t2750;
  double t2762;
  double t2821;
  double t2859;
  double t2860;
  double t2866;
  double t2885;
  double t2892;
  double t2898;
  double t2941;
  double t2969;
  double t2973;
  double t3090;
  double t3117;
  double t3253;
  double t3410;
  double t3420;
  double t3416;
  double t3422;
  double t3436;
  double t3451;
  double t3452;
  double t3457;
  double t3604;
  double t3605;
  double t3744;
  double t3761;
  double t3768;
  double t3769;
  double t3798;
  double t3799;
  double t3806;
  double t5266;
  double t5274;
  double t5285;
  double t5383;
  double t5396;
  double t5398;
  double t5542;
  double t5557;
  double t5558;
  double t5617;
  double t5631;
  double t5635;
  double t5650;
  double t5655;
  double t5656;
  double t5681;
  double t5691;
  double t5696;
  double t2836;
  double t2839;
  double t2844;
  double t5928;
  double t5935;
  double t5945;
  double t5954;
  double t6281;
  double t5791;
  double t8364;
  double t8400;
  double t8415;
  double t8473;
  double t8705;
  double t8713;
  double t8957;
  double t8962;
  double t9066;
  double t9582;
  double t9609;
  double t9614;
  double t10206;
  double t10219;
  double t10234;
  double t10263;
  double t10315;
  double t10316;
  double t10738;
  double t10791;
  double t10828;
  double t11318;
  double t11392;
  double t11409;
  double t11437;
  double t11672;
  double t11682;
  double t12438;
  double t12447;
  double t12448;
  double t12532;
  double t12539;
  double t11825;
  double t12802;
  double t12803;
  double t12806;
  double t12861;
  double t12871;
  double t12881;
  double t13034;
  double t13049;
  double t13166;
  double t13169;
  double t13188;
  t1394 = Cos(var1[12]);
  t1396 = -1.*t1394;
  t1397 = 1. + t1396;
  t1410 = Sin(var1[12]);
  t1503 = -0.15121*t1410;
  t1775 = Sin(var1[4]);
  t1374 = Cos(var1[5]);
  t1786 = Sin(var1[5]);
  t104 = Cos(var1[4]);
  t704 = Sin(var1[13]);
  t1978 = Cos(var1[13]);
  t1990 = -1.*t1394*t1374*t1775;
  t2020 = t1410*t1775*t1786;
  t2194 = t1990 + t2020;
  t2261 = Cos(var1[14]);
  t2323 = -1.*t104*t704;
  t2325 = t1978*t2194;
  t2326 = t2323 + t2325;
  t2330 = Sin(var1[14]);
  t2440 = t1978*t104;
  t2471 = t704*t2194;
  t2472 = t2440 + t2471;
  t1781 = -0.15121*t1397;
  t1784 = t1781 + t1503;
  t1409 = 0.15121*t1397;
  t1675 = t1409 + t1503;
  t1984 = -1.*t1978;
  t1986 = 1. + t1984;
  t2318 = -1.*t2261;
  t2320 = 1. + t2318;
  t2566 = -1.*t104*t1374*t1410;
  t2578 = -1.*t1394*t104*t1786;
  t2581 = t2566 + t2578;
  t2835 = -0.15121*t1394;
  t2583 = 0.28121*t1986*t2581;
  t2587 = 0.50321*t1978*t2320*t2581;
  t2609 = -0.50321*t704*t2330*t2581;
  t2640 = -1.*t1394*t104*t1374;
  t2644 = t104*t1410*t1786;
  t2658 = t2640 + t2644;
  t2669 = -0.15121*t2658;
  t2745 = t1978*t2261*t2581;
  t2750 = t704*t2330*t2581;
  t2762 = t2745 + t2750;
  t2821 = 0.19821*t2762;
  t2859 = t1394*t104*t1374;
  t2860 = -1.*t104*t1410*t1786;
  t2866 = t2859 + t2860;
  t2885 = -1.*t704*t1775;
  t2892 = t1978*t2866;
  t2898 = t2885 + t2892;
  t2941 = -1.*t1978*t1775;
  t2969 = -1.*t704*t2866;
  t2973 = t2941 + t2969;
  t3090 = t1978*t1775;
  t3117 = t704*t2866;
  t3253 = t3090 + t3117;
  t3410 = Cos(var1[3]);
  t3420 = Sin(var1[3]);
  t3416 = t3410*t1374*t1775;
  t3422 = -1.*t3420*t1786;
  t3436 = t3416 + t3422;
  t3451 = -1.*t1374*t3420;
  t3452 = -1.*t3410*t1775*t1786;
  t3457 = t3451 + t3452;
  t3604 = t1394*t3436;
  t3605 = t1410*t3457;
  t3744 = t3604 + t3605;
  t3761 = t3410*t104*t704;
  t3768 = t1978*t3744;
  t3769 = t3761 + t3768;
  t3798 = -1.*t1978*t3410*t104;
  t3799 = t704*t3744;
  t3806 = t3798 + t3799;
  t5266 = t1394*t104*t1374*t3420;
  t5274 = -1.*t104*t1410*t3420*t1786;
  t5285 = t5266 + t5274;
  t5383 = -1.*t704*t3420*t1775;
  t5396 = t1978*t5285;
  t5398 = t5383 + t5396;
  t5542 = t1978*t3420*t1775;
  t5557 = t704*t5285;
  t5558 = t5542 + t5557;
  t5617 = -1.*t1374*t3420*t1775;
  t5631 = -1.*t3410*t1786;
  t5635 = t5617 + t5631;
  t5650 = t3410*t1374;
  t5655 = -1.*t3420*t1775*t1786;
  t5656 = t5650 + t5655;
  t5681 = t1410*t5635;
  t5691 = t1394*t5656;
  t5696 = t5681 + t5691;
  t2836 = 0.15121*t1410;
  t2839 = t2835 + t2836;
  t2844 = t2835 + t1503;
  t5928 = t1374*t3420*t1775;
  t5935 = t3410*t1786;
  t5945 = t5928 + t5935;
  t5954 = -1.*t1410*t5945;
  t6281 = t5954 + t5691;
  t5791 = -1.*t1410*t5656;
  t8364 = t1394*t5945;
  t8400 = t1410*t5656;
  t8415 = t8364 + t8400;
  t8473 = t104*t704*t3420;
  t8705 = t1978*t8415;
  t8713 = t8473 + t8705;
  t8957 = t1978*t104*t3420;
  t8962 = -1.*t704*t8415;
  t9066 = t8957 + t8962;
  t9582 = -1.*t1978*t104*t3420;
  t9609 = t704*t8415;
  t9614 = t9582 + t9609;
  t10206 = -1.*t1394*t3410*t104*t1374;
  t10219 = t3410*t104*t1410*t1786;
  t10234 = t10206 + t10219;
  t10263 = t3410*t704*t1775;
  t10315 = t1978*t10234;
  t10316 = t10263 + t10315;
  t10738 = -1.*t1978*t3410*t1775;
  t10791 = t704*t10234;
  t10828 = t10738 + t10791;
  t11318 = t1374*t3420;
  t11392 = t3410*t1775*t1786;
  t11409 = t11318 + t11392;
  t11437 = t1410*t3436;
  t11672 = t1394*t11409;
  t11682 = t11437 + t11672;
  t12438 = -1.*t3410*t1374*t1775;
  t12447 = t3420*t1786;
  t12448 = t12438 + t12447;
  t12532 = -1.*t1410*t12448;
  t12539 = t12532 + t11672;
  t11825 = -1.*t1410*t11409;
  t12802 = t1394*t12448;
  t12803 = t1410*t11409;
  t12806 = t12802 + t12803;
  t12861 = -1.*t3410*t104*t704;
  t12871 = t1978*t12806;
  t12881 = t12861 + t12871;
  t13034 = -1.*t704*t12806;
  t13049 = t3798 + t13034;
  t13166 = t1978*t3410*t104;
  t13169 = t704*t12806;
  t13188 = t13166 + t13169;
  p_output1[0]=1.;
  p_output1[1]=-1.*t1374*t1675*t1775 + t1775*t1784*t1786 - 0.15121*(t1374*t1410*t1775 + t1394*t1775*t1786) + 0.28121*t1986*t2194 + 0.50321*t2320*t2326 - 0.50321*t2330*t2472 + 0.19821*(t2261*t2326 + t2330*t2472) + 0.28121*t104*t704;
  p_output1[2]=-1.*t104*t1374*t1784 - 1.*t104*t1675*t1786 + t2583 + t2587 + t2609 + t2669 + t2821;
  p_output1[3]=t2583 + t2587 + t2609 + t2669 + t2821 + t104*t1374*t2839 - 1.*t104*t1786*t2844;
  p_output1[4]=0.28121*t1775*t1978 - 0.50321*t2330*t2898 + 0.50321*t2320*t2973 + 0.19821*(t2330*t2898 + t2261*t2973) + 0.28121*t2866*t704;
  p_output1[5]=0.50321*t2330*t2898 - 0.50321*t2261*t3253 + 0.19821*(-1.*t2330*t2898 + t2261*t3253);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t1675*t3436 + t1784*t3457 - 0.15121*(-1.*t1410*t3436 + t1394*t3457) + 0.28121*t1986*t3744 + 0.50321*t2320*t3769 - 0.50321*t2330*t3806 + 0.19821*(t2261*t3769 + t2330*t3806) - 0.28121*t104*t3410*t704;
  p_output1[9]=t104*t1374*t1675*t3420 - 1.*t104*t1784*t1786*t3420 - 0.15121*(-1.*t104*t1374*t1410*t3420 - 1.*t104*t1394*t1786*t3420) + 0.28121*t1986*t5285 + 0.50321*t2320*t5398 - 0.50321*t2330*t5558 + 0.19821*(t2261*t5398 + t2330*t5558) + 0.28121*t1775*t3420*t704;
  p_output1[10]=t1784*t5635 + t1675*t5656 + 0.28121*t1986*t5696 + 0.50321*t1978*t2320*t5696 - 0.15121*(t1394*t5635 + t5791) - 0.50321*t2330*t5696*t704 + 0.19821*(t1978*t2261*t5696 + t2330*t5696*t704);
  p_output1[11]=t2844*t5656 + t2839*t5945 - 0.15121*(t5791 - 1.*t1394*t5945) + 0.28121*t1986*t6281 + 0.50321*t1978*t2320*t6281 - 0.50321*t2330*t6281*t704 + 0.19821*(t1978*t2261*t6281 + t2330*t6281*t704);
  p_output1[12]=-0.28121*t104*t1978*t3420 + 0.28121*t704*t8415 - 0.50321*t2330*t8713 + 0.50321*t2320*t9066 + 0.19821*(t2330*t8713 + t2261*t9066);
  p_output1[13]=0.50321*t2330*t8713 - 0.50321*t2261*t9614 + 0.19821*(-1.*t2330*t8713 + t2261*t9614);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t1784*t5656 + t1675*t5945 - 0.15121*t6281 - 0.28121*t104*t3420*t704 + 0.28121*t1986*t8415 + 0.50321*t2320*t8713 - 0.50321*t2330*t9614 + 0.19821*(t2261*t8713 + t2330*t9614);
  p_output1[17]=0.28121*t10234*t1986 + 0.50321*t10316*t2320 - 0.50321*t10828*t2330 + 0.19821*(t10316*t2261 + t10828*t2330) - 1.*t104*t1374*t1675*t3410 + t104*t1784*t1786*t3410 - 0.15121*(t104*t1374*t1410*t3410 + t104*t1394*t1786*t3410) - 0.28121*t1775*t3410*t704;
  p_output1[18]=t11409*t1675 + 0.28121*t11682*t1986 + 0.50321*t11682*t1978*t2320 + t1784*t3436 - 0.15121*(t11825 + t3604) - 0.50321*t11682*t2330*t704 + 0.19821*(t11682*t1978*t2261 + t11682*t2330*t704);
  p_output1[19]=-0.15121*(t11825 - 1.*t12448*t1394) + 0.28121*t12539*t1986 + 0.50321*t12539*t1978*t2320 + t12448*t2839 + t11409*t2844 - 0.50321*t12539*t2330*t704 + 0.19821*(t12539*t1978*t2261 + t12539*t2330*t704);
  p_output1[20]=0.50321*t13049*t2320 - 0.50321*t12881*t2330 + 0.19821*(t13049*t2261 + t12881*t2330) + 0.28121*t104*t1978*t3410 + 0.28121*t12806*t704;
  p_output1[21]=-0.50321*t13188*t2261 + 0.50321*t12881*t2330 + 0.19821*(t13188*t2261 - 1.*t12881*t2330);
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

#include "J_h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
