/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:39:04 GMT+02:00
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
  double t3279;
  double t4871;
  double t4417;
  double t4754;
  double t5090;
  double t2700;
  double t3185;
  double t5323;
  double t5647;
  double t5838;
  double t6156;
  double t6439;
  double t4841;
  double t5170;
  double t5273;
  double t3515;
  double t6466;
  double t6472;
  double t6483;
  double t6681;
  double t6691;
  double t6694;
  double t6696;
  double t6786;
  double t7154;
  double t7209;
  double t7263;
  double t3601;
  double t4085;
  double t5358;
  double t5617;
  double t8190;
  double t8229;
  double t8318;
  double t6788;
  double t7126;
  double t8386;
  double t8428;
  double t8444;
  double t8474;
  double t8629;
  double t8670;
  double t9032;
  double t9034;
  double t9042;
  double t9051;
  double t9052;
  double t9053;
  double t9081;
  double t9085;
  double t9090;
  double t9092;
  double t9104;
  double t9112;
  double t10351;
  double t10385;
  double t10388;
  double t10480;
  double t10508;
  double t10547;
  double t11322;
  double t11393;
  double t11479;
  double t11742;
  double t11743;
  double t11848;
  double t11955;
  double t11958;
  double t11974;
  double t12571;
  double t12603;
  double t12611;
  t3279 = Sin(var1[3]);
  t4871 = Cos(var1[3]);
  t4417 = Cos(var1[5]);
  t4754 = Sin(var1[4]);
  t5090 = Sin(var1[5]);
  t2700 = Cos(var1[4]);
  t3185 = Sin(var1[12]);
  t5323 = Cos(var1[12]);
  t5647 = t4871*t4417;
  t5838 = -1.*t3279*t4754*t5090;
  t6156 = t5647 + t5838;
  t6439 = Sin(var1[13]);
  t4841 = t4417*t3279*t4754;
  t5170 = t4871*t5090;
  t5273 = t4841 + t5170;
  t3515 = Cos(var1[13]);
  t6466 = -1.*t5323*t2700*t3279;
  t6472 = -1.*t3185*t6156;
  t6483 = t6466 + t6472;
  t6681 = Sin(var1[14]);
  t6691 = -1.*t6439*t5273;
  t6694 = t3515*t6483;
  t6696 = t6691 + t6694;
  t6786 = Cos(var1[14]);
  t7154 = t3515*t5273;
  t7209 = t6439*t6483;
  t7263 = t7154 + t7209;
  t3601 = -1.*t3515;
  t4085 = 1. + t3601;
  t5358 = -1.*t5323;
  t5617 = 1. + t5358;
  t8190 = -1.*t5323*t4871*t4754;
  t8229 = -1.*t4871*t2700*t3185*t5090;
  t8318 = t8190 + t8229;
  t6788 = -1.*t6786;
  t7126 = 1. + t6788;
  t8386 = t4871*t2700*t4417*t6439;
  t8428 = t3515*t8318;
  t8444 = t8386 + t8428;
  t8474 = -1.*t3515*t4871*t2700*t4417;
  t8629 = t6439*t8318;
  t8670 = t8474 + t8629;
  t9032 = t4871*t4417*t4754;
  t9034 = -1.*t3279*t5090;
  t9042 = t9032 + t9034;
  t9051 = t4417*t3279;
  t9052 = t4871*t4754*t5090;
  t9053 = t9051 + t9052;
  t9081 = -1.*t3185*t6439*t9042;
  t9085 = t3515*t9053;
  t9090 = t9081 + t9085;
  t9092 = -1.*t3515*t3185*t9042;
  t9104 = -1.*t6439*t9053;
  t9112 = t9092 + t9104;
  t10351 = -1.*t4871*t2700*t3185;
  t10385 = -1.*t5323*t9053;
  t10388 = t10351 + t10385;
  t10480 = t5323*t4871*t2700;
  t10508 = -1.*t3185*t9053;
  t10547 = t10480 + t10508;
  t11322 = -1.*t4871*t4417*t4754;
  t11393 = t3279*t5090;
  t11479 = t11322 + t11393;
  t11742 = -1.*t6439*t11479;
  t11743 = t3515*t10547;
  t11848 = t11742 + t11743;
  t11955 = -1.*t3515*t11479;
  t11958 = -1.*t6439*t10547;
  t11974 = t11955 + t11958;
  t12571 = t3515*t11479;
  t12603 = t6439*t10547;
  t12611 = t12571 + t12603;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t2700*t3185*t3279 + 0.325*t4085*t5273 - 0.1575*t5617*t6156 - 0.2255*(-1.*t2700*t3185*t3279 + t5323*t6156) - 0.325*t6439*t6483 + 0.075*t6681*t6696 + 0.075*t7126*t7263 - 0.0641*(t6696*t6786 + t6681*t7263) + 0.355*(-1.*t6681*t6696 + t6786*t7263);
  p_output1[2]=-0.325*t2700*t4085*t4417*t4871 - 0.1575*t3185*t4754*t4871 - 0.2255*(-1.*t3185*t4754*t4871 + t2700*t4871*t5090*t5323) - 0.1575*t2700*t4871*t5090*t5617 - 0.325*t6439*t8318 + 0.075*t6681*t8444 + 0.075*t7126*t8670 - 0.0641*(t6786*t8444 + t6681*t8670) + 0.355*(-1.*t6681*t8444 + t6786*t8670);
  p_output1[3]=-0.2255*t5323*t9042 - 0.1575*t5617*t9042 + 0.325*t3185*t6439*t9042 + 0.325*t4085*t9053 + 0.075*t7126*t9090 + 0.075*t6681*t9112 + 0.355*(t6786*t9090 - 1.*t6681*t9112) - 0.0641*(t6681*t9090 + t6786*t9112);
  p_output1[4]=-0.2255*t10547 + 0.1575*t2700*t4871*t5323 - 0.325*t10388*t6439 + 0.075*t10388*t3515*t6681 - 0.0641*(t10388*t6439*t6681 + t10388*t3515*t6786) + 0.355*(-1.*t10388*t3515*t6681 + t10388*t6439*t6786) + 0.075*t10388*t6439*t7126 - 0.1575*t3185*t9053;
  p_output1[5]=-0.325*t10547*t3515 + 0.325*t11479*t6439 + 0.075*t11974*t6681 + 0.355*(-1.*t11974*t6681 + t11848*t6786) - 0.0641*(t11848*t6681 + t11974*t6786) + 0.075*t11848*t7126;
  p_output1[6]=0.075*t12611*t6681 + 0.075*t11848*t6786 + 0.355*(-1.*t12611*t6681 - 1.*t11848*t6786) - 0.0641*(-1.*t11848*t6681 + t12611*t6786);
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

#include "J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
