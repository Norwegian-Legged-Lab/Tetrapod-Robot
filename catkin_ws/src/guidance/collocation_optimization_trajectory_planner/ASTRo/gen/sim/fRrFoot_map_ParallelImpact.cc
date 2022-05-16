/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:22 GMT+02:00
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
  double t19477;
  double t18640;
  double t19331;
  double t19481;
  double t21373;
  double t21374;
  double t21554;
  double t21371;
  double t21771;
  double t21350;
  double t21773;
  double t21210;
  double t19464;
  double t19499;
  double t19500;
  double t20751;
  double t21732;
  double t21777;
  double t21783;
  double t21878;
  double t21872;
  double t21874;
  double t21876;
  double t21869;
  double t21880;
  double t21882;
  double t21934;
  double t23248;
  double t23255;
  double t23364;
  double t23612;
  double t23695;
  double t23699;
  double t23706;
  double t23772;
  double t23993;
  double t24039;
  double t24489;
  double t24584;
  double t24635;
  double t24994;
  double t25365;
  double t25386;
  double t23432;
  double t23438;
  double t25356;
  double t25363;
  double t25648;
  double t25859;
  double t27224;
  double t27228;
  double t27232;
  double t27244;
  double t27270;
  double t27371;
  double t27412;
  double t27442;
  double t25364;
  double t25387;
  double t25631;
  double t21980;
  double t21982;
  double t21984;
  double t21990;
  double t21991;
  double t22031;
  double t22032;
  double t22426;
  double t22654;
  double t27320;
  double t27508;
  double t27543;
  double t27686;
  double t27690;
  double t27799;
  double t27916;
  double t27919;
  double t27922;
  double t22694;
  double t22808;
  double t23223;
  double t25647;
  double t27927;
  double t20841;
  double t21865;
  double t21867;
  double t27964;
  double t28058;
  double t28247;
  double t31455;
  double t31684;
  double t32596;
  double t32838;
  double t34966;
  double t35148;
  t19477 = Cos(var1[16]);
  t18640 = Cos(var1[17]);
  t19331 = Sin(var1[16]);
  t19481 = Sin(var1[17]);
  t21373 = -1.*t19477*t18640;
  t21374 = -1.*t19331*t19481;
  t21554 = t21373 + t21374;
  t21371 = Cos(var1[5]);
  t21771 = Sin(var1[15]);
  t21350 = Cos(var1[15]);
  t21773 = Sin(var1[5]);
  t21210 = Cos(var1[4]);
  t19464 = -1.*t18640*t19331;
  t19499 = t19477*t19481;
  t19500 = t19464 + t19499;
  t20751 = Sin(var1[4]);
  t21732 = t21350*t21371*t21554;
  t21777 = -1.*t21771*t21554*t21773;
  t21783 = t21732 + t21777;
  t21878 = Sin(var1[3]);
  t21872 = t21371*t21771*t21554;
  t21874 = t21350*t21554*t21773;
  t21876 = t21872 + t21874;
  t21869 = Cos(var1[3]);
  t21880 = t21210*t19500;
  t21882 = -1.*t20751*t21783;
  t21934 = t21880 + t21882;
  t23248 = -1.*t21350;
  t23255 = 1. + t23248;
  t23364 = -0.15121*t23255;
  t23612 = -1.*t19477;
  t23695 = 1. + t23612;
  t23699 = -0.28121*t23695;
  t23706 = -1.*t18640;
  t23772 = 1. + t23706;
  t23993 = -0.50321*t23772;
  t24039 = -0.23321*t18640;
  t24489 = t23993 + t24039;
  t24584 = t19477*t24489;
  t24635 = 0.27*t19331*t19481;
  t24994 = t23699 + t24584 + t24635;
  t25365 = t21350*t24994;
  t25386 = t23364 + t25365;
  t23432 = -0.15121*t21350;
  t23438 = 0.15121*t21771;
  t25356 = t21771*t24994;
  t25363 = t23364 + t23432 + t23438 + t25356;
  t25648 = t21371*t21771;
  t25859 = t21350*t21773;
  t27224 = t25648 + t25859;
  t27228 = 0.28121*t19331;
  t27232 = t24489*t19331;
  t27244 = -0.27*t19477*t19481;
  t27270 = t27228 + t27232 + t27244;
  t27371 = t21371*t25386;
  t27412 = -1.*t25363*t21773;
  t27442 = t27371 + t27412;
  t25364 = t21371*t25363;
  t25387 = t25386*t21773;
  t25631 = t25364 + t25387;
  t21980 = t19477*t18640;
  t21982 = t19331*t19481;
  t21984 = t21980 + t21982;
  t21990 = t21984*t20751;
  t21991 = t21350*t21371*t19500;
  t22031 = -1.*t21771*t19500*t21773;
  t22032 = t21991 + t22031;
  t22426 = t21210*t22032;
  t22654 = t21990 + t22426;
  t27320 = t27270*t20751;
  t27508 = t21210*t27442;
  t27543 = t27320 + t27508;
  t27686 = t21210*t27270;
  t27690 = -1.*t20751*t27442;
  t27799 = t27686 + t27690;
  t27916 = t21371*t21771*t19500;
  t27919 = t21350*t19500*t21773;
  t27922 = t27916 + t27919;
  t22694 = -1.*t21350*t21371;
  t22808 = t21771*t21773;
  t23223 = t22694 + t22808;
  t25647 = -1.*t23223*t25631;
  t27927 = t27922*t25631;
  t20841 = t19500*t20751;
  t21865 = t21210*t21783;
  t21867 = t20841 + t21865;
  t27964 = t21210*t21984;
  t28058 = -1.*t20751*t22032;
  t28247 = t27964 + t28058;
  t31455 = -1.*t27922*t25631;
  t31684 = t21876*t25631;
  t32596 = -1.*t27270*t21984;
  t32838 = t27270*t19500;
  t34966 = t23223*t25631;
  t35148 = -1.*t21876*t25631;
  p_output1[0]=t21867;
  p_output1[1]=t21869*t21876 - 1.*t21878*t21934;
  p_output1[2]=t21876*t21878 + t21869*t21934;
  p_output1[3]=t22654*(t25647 - 1.*t21210*t27224*t27543 + t20751*t27224*t27799) + t21210*t27224*(t22654*t27543 + t27927 + t27799*t28247);
  p_output1[4]=(t25647 - 1.*t27224*t27442)*t27922 + t23223*(t21984*t27270 + t22032*t27442 + t27927);
  p_output1[5]=t21984*(t21350*t25363 - 1.*t21771*t25386);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t21554 - 0.15121*t21984;
  p_output1[16]=0.28121*t19481 - 0.27*t18640*t19481 + t19481*t24489;
  p_output1[17]=0;
  p_output1[18]=t21210*t27224;
  p_output1[19]=t21869*t23223 + t20751*t21878*t27224;
  p_output1[20]=t21878*t23223 - 1.*t20751*t21869*t27224;
  p_output1[21]=t21867*(-1.*t22654*t27543 - 1.*t27799*t28247 + t31455) + t22654*(t21867*t27543 + t21934*t27799 + t31684);
  p_output1[22]=t21876*(-1.*t22032*t27442 + t31455 + t32596) + t27922*(t21783*t27442 + t31684 + t32838);
  p_output1[23]=t19500*(-1.*t19500*t21771*t25363 - 1.*t19500*t21350*t25386 + t32596) + t21984*(t21554*t21771*t25363 + t21350*t21554*t25386 + t32838);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t19500*(-1.*t19500*t24994 + t32596) + t21984*(t21554*t24994 + t32838);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t22654;
  p_output1[37]=t21869*t27922 - 1.*t21878*t28247;
  p_output1[38]=t21878*t27922 + t21869*t28247;
  p_output1[39]=t21867*(t21210*t27224*t27543 - 1.*t20751*t27224*t27799 + t34966) + t21210*t27224*(-1.*t21867*t27543 - 1.*t21934*t27799 + t35148);
  p_output1[40]=t21876*(t27224*t27442 + t34966) + t23223*(-1.*t19500*t27270 - 1.*t21783*t27442 + t35148);
  p_output1[41]=t19500*(-1.*t21350*t25363 + t21771*t25386);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.28121*t18640 + 0.27*Power(t19481,2) + t18640*t24489;
  p_output1[53]=-0.27;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
