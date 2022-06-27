/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:29 GMT+02:00
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
  double t994;
  double t205;
  double t2506;
  double t2257;
  double t1347;
  double t1780;
  double t1792;
  double t1793;
  double t1823;
  double t2329;
  double t2513;
  double t2528;
  double t2505;
  double t2538;
  double t2544;
  double t2547;
  double t2550;
  double t2557;
  double t2565;
  double t2288;
  double t2495;
  double t2499;
  double t3389;
  double t3395;
  double t3241;
  double t2988;
  double t2989;
  double t3016;
  double t3031;
  double t3390;
  double t3396;
  double t3398;
  double t3752;
  double t3462;
  double t3482;
  double t3540;
  double t3461;
  double t3778;
  double t3821;
  double t3841;
  double t4505;
  double t4570;
  double t4627;
  double t2846;
  double t2848;
  double t2849;
  double t2869;
  double t2917;
  double t2536;
  double t2788;
  double t2824;
  double t5561;
  double t5562;
  double t5577;
  double t4628;
  double t5367;
  double t5399;
  double t5606;
  double t5613;
  double t5614;
  double t5771;
  double t5790;
  double t5795;
  double t6980;
  double t7236;
  double t7249;
  double t5640;
  double t5663;
  double t5763;
  double t5766;
  double t5871;
  double t5880;
  double t5892;
  double t5946;
  double t6599;
  double t7939;
  double t7977;
  double t8021;
  double t8087;
  double t8171;
  double t8292;
  double t8358;
  double t8426;
  double t8949;
  double t9899;
  double t10003;
  double t3054;
  double t3406;
  double t3412;
  double t11274;
  double t9416;
  double t9431;
  double t9463;
  double t11761;
  double t13458;
  double t13506;
  t994 = Cos(var1[14]);
  t205 = Sin(var1[14]);
  t2506 = Cos(var1[12]);
  t2257 = Cos(var1[13]);
  t1347 = -1.*t994;
  t1780 = 1. + t1347;
  t1792 = 0.50321*t1780;
  t1793 = 0.19821*t994;
  t1823 = t1792 + t1793;
  t2329 = Sin(var1[13]);
  t2513 = -1.*t2506;
  t2528 = 1. + t2513;
  t2505 = Sin(var1[12]);
  t2538 = -1.*t2257;
  t2544 = 1. + t2538;
  t2547 = 0.28121*t2544;
  t2550 = t2257*t1823;
  t2557 = -0.305*t2329*t205;
  t2565 = t2547 + t2550 + t2557;
  t2288 = t2257*t994;
  t2495 = t2329*t205;
  t2499 = t2288 + t2495;
  t3389 = Cos(var1[5]);
  t3395 = Sin(var1[5]);
  t3241 = Cos(var1[4]);
  t2988 = -1.*t994*t2329;
  t2989 = t2257*t205;
  t3016 = t2988 + t2989;
  t3031 = Sin(var1[4]);
  t3390 = t2506*t3389*t2499;
  t3396 = -1.*t2505*t2499*t3395;
  t3398 = t3390 + t3396;
  t3752 = Cos(var1[3]);
  t3462 = t3389*t2505*t2499;
  t3482 = t2506*t2499*t3395;
  t3540 = t3462 + t3482;
  t3461 = Sin(var1[3]);
  t3778 = t3241*t3016;
  t3821 = -1.*t3031*t3398;
  t3841 = t3778 + t3821;
  t4505 = t994*t2329;
  t4570 = -1.*t2257*t205;
  t4627 = t4505 + t4570;
  t2846 = -0.15121*t2528;
  t2848 = -0.15121*t2506;
  t2849 = -0.15121*t2505;
  t2869 = t2505*t2565;
  t2917 = t2846 + t2848 + t2849 + t2869;
  t2536 = 0.15121*t2528;
  t2788 = t2506*t2565;
  t2824 = t2536 + t2788;
  t5561 = t2506*t3389;
  t5562 = -1.*t2505*t3395;
  t5577 = t5561 + t5562;
  t4628 = t3389*t2505*t4627;
  t5367 = t2506*t4627*t3395;
  t5399 = t4628 + t5367;
  t5606 = t3389*t2917;
  t5613 = t2824*t3395;
  t5614 = t5606 + t5613;
  t5771 = t3389*t2824;
  t5790 = -1.*t2917*t3395;
  t5795 = t5771 + t5790;
  t6980 = t2506*t3389*t4627;
  t7236 = -1.*t2505*t4627*t3395;
  t7249 = t6980 + t7236;
  t5640 = -1.*t5577*t5614;
  t5663 = -1.*t3389*t2505;
  t5763 = -1.*t2506*t3395;
  t5766 = t5663 + t5763;
  t5871 = 0.28121*t2329;
  t5880 = -1.*t1823*t2329;
  t5892 = -0.305*t2257*t205;
  t5946 = t5871 + t5880 + t5892;
  t6599 = t5399*t5614;
  t7939 = t2499*t3031;
  t7977 = t3241*t7249;
  t8021 = t7939 + t7977;
  t8087 = t5946*t3031;
  t8171 = t3241*t5795;
  t8292 = t8087 + t8171;
  t8358 = t3241*t5946;
  t8426 = -1.*t3031*t5795;
  t8949 = t8358 + t8426;
  t9899 = -1.*t5946*t2499;
  t10003 = t5946*t3016;
  t3054 = t3016*t3031;
  t3406 = t3241*t3398;
  t3412 = t3054 + t3406;
  t11274 = -1.*t5399*t5614;
  t9416 = t3241*t2499;
  t9431 = -1.*t3031*t7249;
  t9463 = t9416 + t9431;
  t11761 = t3540*t5614;
  t13458 = t5577*t5614;
  t13506 = -1.*t3540*t5614;
  p_output1[0]=t3412*var2[0] + (t3540*t3752 - 1.*t3461*t3841)*var2[1] + (t3461*t3540 + t3752*t3841)*var2[2] + (t8021*(t5640 - 1.*t3241*t5766*t8292 + t3031*t5766*t8949) + t3241*t5766*(t6599 + t8021*t8292 + t8949*t9463))*var2[3] + (t5399*(t5640 - 1.*t5766*t5795) + t5577*(t2499*t5946 + t6599 + t5795*t7249))*var2[4] + t2499*(t2505*t2824 - 1.*t2506*t2917)*var2[5] + (0.28121*t205 - 1.*t1823*t205 - 0.305*t205*t994)*var2[13];
  p_output1[1]=t3241*t5766*var2[0] + (t3752*t5577 + t3031*t3461*t5766)*var2[1] + (t3461*t5577 - 1.*t3031*t3752*t5766)*var2[2] + (t8021*(t11761 + t3412*t8292 + t3841*t8949) + t3412*(t11274 - 1.*t8021*t8292 - 1.*t8949*t9463))*var2[3] + (t5399*(t10003 + t11761 + t3398*t5795) + t3540*(t11274 - 1.*t5795*t7249 + t9899))*var2[4] + (t2499*(t10003 + t2499*t2506*t2824 + t2499*t2505*t2917) + t3016*(-1.*t2506*t2824*t4627 - 1.*t2505*t2917*t4627 + t9899))*var2[5] + (-0.15121 + t2499*(t10003 + t2499*t2565) + t3016*(-1.*t2565*t4627 + t9899))*var2[12];
  p_output1[2]=t8021*var2[0] + (t3752*t5399 - 1.*t3461*t9463)*var2[1] + (t3461*t5399 + t3752*t9463)*var2[2] + (t3241*t5766*(t13506 - 1.*t3412*t8292 - 1.*t3841*t8949) + t3412*(t13458 + t3241*t5766*t8292 - 1.*t3031*t5766*t8949))*var2[3] + (t3540*(t13458 + t5766*t5795) + t5577*(t13506 - 1.*t3398*t5795 - 1.*t3016*t5946))*var2[4] + (-1.*t2505*t2824 + t2506*t2917)*t3016*var2[5] + (-0.15121*t3016 - 0.15121*t4627)*var2[12] + (0.305*Power(t205,2) + 0.28121*t994 - 1.*t1823*t994)*var2[13] - 0.305*var2[14];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
