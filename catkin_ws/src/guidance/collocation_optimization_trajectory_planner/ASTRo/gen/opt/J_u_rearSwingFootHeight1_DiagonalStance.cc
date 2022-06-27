/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:24 GMT+02:00
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
  double t1396;
  double t1409;
  double t1410;
  double t1503;
  double t1675;
  double t1775;
  double t1990;
  double t1786;
  double t1984;
  double t2020;
  double t1986;
  double t2194;
  double t2318;
  double t2440;
  double t2471;
  double t2472;
  double t1374;
  double t1394;
  double t2609;
  double t2658;
  double t2669;
  double t2745;
  double t2762;
  double t2836;
  double t2839;
  double t2844;
  double t2860;
  double t2866;
  double t2885;
  double t2892;
  double t1781;
  double t1784;
  double t2325;
  double t2326;
  double t2640;
  double t2644;
  double t2821;
  double t2835;
  double t3457;
  double t3604;
  double t3605;
  double t3761;
  double t3768;
  double t3769;
  double t3799;
  double t3806;
  double t5266;
  double t5557;
  double t5558;
  double t5617;
  double t5635;
  double t5650;
  double t5655;
  double t5681;
  double t5691;
  double t5696;
  double t8414;
  double t8415;
  double t8443;
  double t8632;
  double t8705;
  double t5954;
  double t9147;
  double t9194;
  double t9195;
  double t9211;
  double t9236;
  double t9237;
  double t9254;
  double t9255;
  double t9286;
  double t9322;
  double t9329;
  double t9330;
  t1396 = Sin(var1[3]);
  t1409 = Cos(var1[15]);
  t1410 = -1.*t1409;
  t1503 = 1. + t1410;
  t1675 = -0.15121*t1503;
  t1775 = Sin(var1[15]);
  t1990 = Cos(var1[3]);
  t1786 = Cos(var1[5]);
  t1984 = Sin(var1[4]);
  t2020 = Sin(var1[5]);
  t1986 = t1786*t1396*t1984;
  t2194 = t1990*t2020;
  t2318 = t1986 + t2194;
  t2440 = t1990*t1786;
  t2471 = -1.*t1396*t1984*t2020;
  t2472 = t2440 + t2471;
  t1374 = Cos(var1[4]);
  t1394 = Sin(var1[16]);
  t2609 = Cos(var1[16]);
  t2658 = t1409*t2318;
  t2669 = t1775*t2472;
  t2745 = t2658 + t2669;
  t2762 = Cos(var1[17]);
  t2836 = -1.*t1374*t1394*t1396;
  t2839 = t2609*t2745;
  t2844 = t2836 + t2839;
  t2860 = Sin(var1[17]);
  t2866 = -1.*t2609*t1374*t1396;
  t2885 = -1.*t1394*t2745;
  t2892 = t2866 + t2885;
  t1781 = -0.15121*t1775;
  t1784 = t1675 + t1781;
  t2325 = 0.15121*t1775;
  t2326 = t1675 + t2325;
  t2640 = -1.*t2609;
  t2644 = 1. + t2640;
  t2821 = -1.*t2762;
  t2835 = 1. + t2821;
  t3457 = -1.*t1409*t1990*t1374*t1786;
  t3604 = t1990*t1374*t1775*t2020;
  t3605 = t3457 + t3604;
  t3761 = -1.*t1990*t1394*t1984;
  t3768 = t2609*t3605;
  t3769 = t3761 + t3768;
  t3799 = -1.*t2609*t1990*t1984;
  t3806 = -1.*t1394*t3605;
  t5266 = t3799 + t3806;
  t5557 = t1990*t1786*t1984;
  t5558 = -1.*t1396*t2020;
  t5617 = t5557 + t5558;
  t5635 = t1786*t1396;
  t5650 = t1990*t1984*t2020;
  t5655 = t5635 + t5650;
  t5681 = t1775*t5617;
  t5691 = t1409*t5655;
  t5696 = t5681 + t5691;
  t8414 = -1.*t1990*t1786*t1984;
  t8415 = t1396*t2020;
  t8443 = t8414 + t8415;
  t8632 = -1.*t1775*t8443;
  t8705 = t8632 + t5691;
  t5954 = -1.*t1775*t5655;
  t9147 = t1409*t8443;
  t9194 = t1775*t5655;
  t9195 = t9147 + t9194;
  t9211 = -1.*t1990*t1374*t1394;
  t9236 = -1.*t2609*t9195;
  t9237 = t9211 + t9236;
  t9254 = t2609*t1990*t1374;
  t9255 = -1.*t1394*t9195;
  t9286 = t9254 + t9255;
  t9322 = t1990*t1374*t1394;
  t9329 = t2609*t9195;
  t9330 = t9322 + t9329;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t1374*t1394*t1396 + t1784*t2318 + t2326*t2472 - 0.15121*(-1.*t1775*t2318 + t1409*t2472) - 0.28121*t2644*t2745 - 0.50321*t2835*t2844 - 0.50321*t2860*t2892 - 0.19821*(t2762*t2844 - 1.*t2860*t2892);
  p_output1[2]=-1.*t1374*t1784*t1786*t1990 - 0.28121*t1394*t1984*t1990 - 0.15121*(t1374*t1775*t1786*t1990 + t1374*t1409*t1990*t2020) + t1374*t1990*t2020*t2326 - 0.28121*t2644*t3605 - 0.50321*t2835*t3769 - 0.50321*t2860*t5266 - 0.19821*(t2762*t3769 - 1.*t2860*t5266);
  p_output1[3]=t2326*t5617 + t1784*t5655 - 0.28121*t2644*t5696 - 0.50321*t2609*t2835*t5696 + 0.50321*t1394*t2860*t5696 - 0.19821*(t2609*t2762*t5696 + t1394*t2860*t5696) - 0.15121*(t1409*t5617 + t5954);
  p_output1[4]=(0.15121*t1409 + t1781)*t5655 + (-0.15121*t1409 + t1781)*t8443 - 0.15121*(t5954 - 1.*t1409*t8443) - 0.28121*t2644*t8705 - 0.50321*t2609*t2835*t8705 + 0.50321*t1394*t2860*t8705 - 0.19821*(t2609*t2762*t8705 + t1394*t2860*t8705);
  p_output1[5]=0.28121*t1374*t1990*t2609 - 0.28121*t1394*t9195 - 0.50321*t2860*t9237 - 0.50321*t2835*t9286 - 0.19821*(-1.*t2860*t9237 + t2762*t9286);
  p_output1[6]=-0.50321*t2762*t9286 - 0.50321*t2860*t9330 - 0.19821*(-1.*t2762*t9286 - 1.*t2860*t9330);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_rearSwingFootHeight1_DiagonalStance.hh"

namespace DiagonalStance
{

void J_u_rearSwingFootHeight1_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
