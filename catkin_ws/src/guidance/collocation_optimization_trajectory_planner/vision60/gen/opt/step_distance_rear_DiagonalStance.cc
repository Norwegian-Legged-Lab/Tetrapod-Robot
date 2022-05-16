/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:33 GMT+02:00
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
  double t3700;
  double t3758;
  double t7066;
  double t7459;
  double t6900;
  double t7442;
  double t7405;
  double t8910;
  double t11645;
  double t301;
  double t11662;
  double t11686;
  double t11755;
  double t14268;
  double t4090;
  double t14470;
  double t14502;
  double t14529;
  double t14600;
  double t14672;
  double t14674;
  double t14752;
  double t14903;
  double t15007;
  double t15012;
  double t15027;
  double t15211;
  double t16990;
  double t16998;
  double t17187;
  double t17200;
  double t17217;
  double t17356;
  double t17411;
  double t18038;
  double t3622;
  double t3684;
  double t4116;
  double t4218;
  double t18114;
  double t18122;
  double t18243;
  double t18259;
  double t7443;
  double t7458;
  double t10117;
  double t10715;
  double t18343;
  double t18414;
  double t18494;
  double t18673;
  double t18729;
  double t18730;
  double t14948;
  double t14949;
  double t18742;
  double t18765;
  double t18769;
  double t17201;
  double t17208;
  double t18822;
  double t18827;
  double t18842;
  double t18855;
  double t18875;
  double t18880;
  double t19020;
  double t19024;
  double t19048;
  double t19056;
  double t19133;
  double t19138;
  t3700 = Cos(var1[4]);
  t3758 = Cos(var1[5]);
  t7066 = Sin(var1[4]);
  t7459 = Sin(var1[5]);
  t6900 = Sin(var1[9]);
  t7442 = Cos(var1[9]);
  t7405 = Sin(var1[15]);
  t8910 = Cos(var1[15]);
  t11645 = Sin(var1[10]);
  t301 = Cos(var1[10]);
  t11662 = t7442*t7066;
  t11686 = t3700*t6900*t7459;
  t11755 = t11662 + t11686;
  t14268 = Sin(var1[16]);
  t4090 = Cos(var1[16]);
  t14470 = t8910*t7066;
  t14502 = t3700*t7405*t7459;
  t14529 = t14470 + t14502;
  t14600 = Sin(var1[11]);
  t14672 = -1.*t3700*t3758*t11645;
  t14674 = t301*t11755;
  t14752 = t14672 + t14674;
  t14903 = Cos(var1[11]);
  t15007 = t301*t3700*t3758;
  t15012 = t11645*t11755;
  t15027 = t15007 + t15012;
  t15211 = Sin(var1[17]);
  t16990 = -1.*t3700*t3758*t14268;
  t16998 = t4090*t14529;
  t17187 = t16990 + t16998;
  t17200 = Cos(var1[17]);
  t17217 = t4090*t3700*t3758;
  t17356 = t14268*t14529;
  t17411 = t17217 + t17356;
  t18038 = Sin(var1[3]);
  t3622 = -1.*t301;
  t3684 = 1. + t3622;
  t4116 = -1.*t4090;
  t4218 = 1. + t4116;
  t18114 = t3758*t18038*t7066;
  t18122 = Cos(var1[3]);
  t18243 = t18122*t7459;
  t18259 = t18114 + t18243;
  t7443 = -1.*t7442;
  t7458 = 1. + t7443;
  t10117 = -1.*t8910;
  t10715 = 1. + t10117;
  t18343 = t18122*t3758;
  t18414 = -1.*t18038*t7066*t7459;
  t18494 = t18343 + t18414;
  t18673 = -1.*t7442*t3700*t18038;
  t18729 = -1.*t6900*t18494;
  t18730 = t18673 + t18729;
  t14948 = -1.*t14903;
  t14949 = 1. + t14948;
  t18742 = -1.*t8910*t3700*t18038;
  t18765 = -1.*t7405*t18494;
  t18769 = t18742 + t18765;
  t17201 = -1.*t17200;
  t17208 = 1. + t17201;
  t18822 = -1.*t11645*t18259;
  t18827 = t301*t18730;
  t18842 = t18822 + t18827;
  t18855 = t301*t18259;
  t18875 = t11645*t18730;
  t18880 = t18855 + t18875;
  t19020 = -1.*t14268*t18259;
  t19024 = t4090*t18769;
  t19048 = t19020 + t19024;
  t19056 = t4090*t18259;
  t19133 = t14268*t18769;
  t19138 = t19056 + t19133;
  p_output1[0]=0.325*t11645*t11755 - 0.325*t14268*t14529 - 0.575*t14600*t14752 - 0.575*t14949*t15027 - 0.0641*(t14752*t14903 + t14600*t15027) - 0.295*(-1.*t14600*t14752 + t14903*t15027) + 0.575*t15211*t17187 + 0.575*t17208*t17411 + 0.0641*(t17187*t17200 + t15211*t17411) + 0.295*(-1.*t15211*t17187 + t17200*t17411) - 0.325*t3684*t3700*t3758 + 0.325*t3700*t3758*t4218 - 0.1575*t6900*t7066 - 0.1575*t7066*t7405 - 0.1575*t10715*t3700*t7459 - 0.1575*t3700*t7458*t7459 + 0.2255*(t6900*t7066 - 1.*t3700*t7442*t7459) + 0.2255*(t7066*t7405 - 1.*t3700*t7459*t8910);
  p_output1[1]=0.1575*t10715*t18494 + 0.325*t11645*t18730 - 0.325*t14268*t18769 - 0.575*t14600*t18842 - 0.575*t14949*t18880 - 0.0641*(t14903*t18842 + t14600*t18880) - 0.295*(-1.*t14600*t18842 + t14903*t18880) + 0.575*t15211*t19048 + 0.575*t17208*t19138 + 0.0641*(t17200*t19048 + t15211*t19138) + 0.295*(-1.*t15211*t19048 + t17200*t19138) - 0.325*t18259*t3684 + 0.325*t18259*t4218 + 0.1575*t18038*t3700*t6900 + 0.1575*t18038*t3700*t7405 + 0.2255*(-1.*t18038*t3700*t6900 + t18494*t7442) + 0.1575*t18494*t7458 + 0.2255*(-1.*t18038*t3700*t7405 + t18494*t8910);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "step_distance_rear_DiagonalStance.hh"

namespace DiagonalStance
{

void step_distance_rear_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
