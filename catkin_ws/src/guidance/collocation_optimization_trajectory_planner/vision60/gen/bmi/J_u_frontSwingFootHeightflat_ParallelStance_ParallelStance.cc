/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:56:12 GMT+02:00
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
  double t819;
  double t622;
  double t623;
  double t773;
  double t820;
  double t1052;
  double t1419;
  double t1420;
  double t1424;
  double t1444;
  double t1446;
  double t373;
  double t812;
  double t1034;
  double t1043;
  double t1684;
  double t1685;
  double t1690;
  double t1692;
  double t1708;
  double t1713;
  double t1714;
  double t1715;
  double t1723;
  double t1727;
  double t1730;
  double t1731;
  double t619;
  double t621;
  double t1082;
  double t1083;
  double t1709;
  double t1712;
  double t2462;
  double t2463;
  double t2465;
  double t2467;
  double t2476;
  double t2481;
  double t2486;
  double t2487;
  double t2488;
  double t2807;
  double t2811;
  double t2812;
  double t3100;
  double t3101;
  double t3123;
  double t3280;
  double t3413;
  double t3415;
  double t3472;
  double t3563;
  double t3611;
  double t4526;
  double t4532;
  double t4533;
  double t4499;
  double t4504;
  double t4512;
  double t4647;
  double t4938;
  double t4940;
  double t5027;
  double t5028;
  double t5041;
  double t4947;
  double t4951;
  double t4952;
  double t5455;
  double t5466;
  double t5467;
  t819 = Cos(var1[3]);
  t622 = Cos(var1[5]);
  t623 = Sin(var1[3]);
  t773 = Sin(var1[4]);
  t820 = Sin(var1[5]);
  t1052 = Cos(var1[6]);
  t1419 = t819*t622;
  t1420 = -1.*t623*t773*t820;
  t1424 = t1419 + t1420;
  t1444 = Cos(var1[4]);
  t1446 = Sin(var1[6]);
  t373 = Cos(var1[7]);
  t812 = t622*t623*t773;
  t1034 = t819*t820;
  t1043 = t812 + t1034;
  t1684 = -1.*t1444*t1052*t623;
  t1685 = -1.*t1424*t1446;
  t1690 = t1684 + t1685;
  t1692 = Sin(var1[7]);
  t1708 = Cos(var1[8]);
  t1713 = t373*t1043;
  t1714 = t1690*t1692;
  t1715 = t1713 + t1714;
  t1723 = t373*t1690;
  t1727 = -1.*t1043*t1692;
  t1730 = t1723 + t1727;
  t1731 = Sin(var1[8]);
  t619 = -1.*t373;
  t621 = 1. + t619;
  t1082 = -1.*t1052;
  t1083 = 1. + t1082;
  t1709 = -1.*t1708;
  t1712 = 1. + t1709;
  t2462 = -1.*t819*t1052*t773;
  t2463 = -1.*t819*t1444*t820*t1446;
  t2465 = t2462 + t2463;
  t2467 = -1.*t819*t1444*t622*t373;
  t2476 = t2465*t1692;
  t2481 = t2467 + t2476;
  t2486 = t373*t2465;
  t2487 = t819*t1444*t622*t1692;
  t2488 = t2486 + t2487;
  t2807 = t819*t622*t773;
  t2811 = -1.*t623*t820;
  t2812 = t2807 + t2811;
  t3100 = t622*t623;
  t3101 = t819*t773*t820;
  t3123 = t3100 + t3101;
  t3280 = t373*t3123;
  t3413 = -1.*t2812*t1446*t1692;
  t3415 = t3280 + t3413;
  t3472 = -1.*t373*t2812*t1446;
  t3563 = -1.*t3123*t1692;
  t3611 = t3472 + t3563;
  t4526 = -1.*t1052*t3123;
  t4532 = -1.*t819*t1444*t1446;
  t4533 = t4526 + t4532;
  t4499 = t819*t1444*t1052;
  t4504 = -1.*t3123*t1446;
  t4512 = t4499 + t4504;
  t4647 = -1.*t819*t622*t773;
  t4938 = t623*t820;
  t4940 = t4647 + t4938;
  t5027 = -1.*t373*t4940;
  t5028 = -1.*t4512*t1692;
  t5041 = t5027 + t5028;
  t4947 = t373*t4512;
  t4951 = -1.*t4940*t1692;
  t4952 = t4947 + t4951;
  t5455 = t373*t4940;
  t5466 = t4512*t1692;
  t5467 = t5455 + t5466;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t1083*t1424 - 0.325*t1690*t1692 + 0.075*t1712*t1715 + 0.075*t1730*t1731 - 0.0641*(t1708*t1730 + t1715*t1731) + 0.355*(t1708*t1715 - 1.*t1730*t1731) + 0.325*t1043*t621 + 0.1575*t1444*t1446*t623 + 0.2255*(t1052*t1424 - 1.*t1444*t1446*t623);
  p_output1[2]=-0.325*t1692*t2465 + 0.075*t1712*t2481 + 0.075*t1731*t2488 - 0.0641*(t1731*t2481 + t1708*t2488) + 0.355*(t1708*t2481 - 1.*t1731*t2488) - 0.325*t1444*t621*t622*t819 + 0.1575*t1446*t773*t819 + 0.1575*t1083*t1444*t819*t820 + 0.2255*(-1.*t1446*t773*t819 + t1052*t1444*t819*t820);
  p_output1[3]=0.2255*t1052*t2812 + 0.1575*t1083*t2812 + 0.325*t1446*t1692*t2812 + 0.075*t1712*t3415 + 0.075*t1731*t3611 - 0.0641*(t1731*t3415 + t1708*t3611) + 0.355*(t1708*t3415 - 1.*t1731*t3611) + 0.325*t3123*t621;
  p_output1[4]=0.1575*t1446*t3123 + 0.2255*t4512 - 0.325*t1692*t4533 + 0.075*t1692*t1712*t4533 + 0.075*t1731*t373*t4533 - 0.0641*(t1692*t1731*t4533 + t1708*t373*t4533) + 0.355*(t1692*t1708*t4533 - 1.*t1731*t373*t4533) - 0.1575*t1052*t1444*t819;
  p_output1[5]=-0.325*t373*t4512 + 0.325*t1692*t4940 + 0.075*t1712*t4952 + 0.075*t1731*t5041 - 0.0641*(t1731*t4952 + t1708*t5041) + 0.355*(t1708*t4952 - 1.*t1731*t5041);
  p_output1[6]=0.075*t1708*t4952 + 0.075*t1731*t5467 - 0.0641*(-1.*t1731*t4952 + t1708*t5467) + 0.355*(-1.*t1708*t4952 - 1.*t1731*t5467);
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

#include "J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeightflat_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
