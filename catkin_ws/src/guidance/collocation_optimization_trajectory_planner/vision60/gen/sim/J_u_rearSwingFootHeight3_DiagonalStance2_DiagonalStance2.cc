/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:38:45 GMT+02:00
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
  double t5481;
  double t8696;
  double t8221;
  double t8227;
  double t8802;
  double t3154;
  double t3709;
  double t9921;
  double t9952;
  double t10079;
  double t13103;
  double t13449;
  double t8228;
  double t9302;
  double t9310;
  double t5682;
  double t13459;
  double t13471;
  double t13473;
  double t13488;
  double t13493;
  double t15583;
  double t15595;
  double t15708;
  double t15881;
  double t15888;
  double t16023;
  double t6657;
  double t8213;
  double t9948;
  double t9950;
  double t19102;
  double t19688;
  double t19811;
  double t15757;
  double t15826;
  double t20358;
  double t20359;
  double t20364;
  double t20366;
  double t23906;
  double t23923;
  double t24495;
  double t24779;
  double t24780;
  double t24808;
  double t24826;
  double t25994;
  double t26522;
  double t26524;
  double t26539;
  double t26582;
  double t26589;
  double t26649;
  double t28232;
  double t28236;
  double t28242;
  double t28286;
  double t28312;
  double t28321;
  double t29966;
  double t30202;
  double t30398;
  double t30491;
  double t30500;
  double t30501;
  double t30547;
  double t30553;
  double t30720;
  double t31459;
  double t31816;
  double t33227;
  t5481 = Sin(var1[3]);
  t8696 = Cos(var1[3]);
  t8221 = Cos(var1[5]);
  t8227 = Sin(var1[4]);
  t8802 = Sin(var1[5]);
  t3154 = Cos(var1[4]);
  t3709 = Sin(var1[9]);
  t9921 = Cos(var1[9]);
  t9952 = t8696*t8221;
  t10079 = -1.*t5481*t8227*t8802;
  t13103 = t9952 + t10079;
  t13449 = Sin(var1[10]);
  t8228 = t8221*t5481*t8227;
  t9302 = t8696*t8802;
  t9310 = t8228 + t9302;
  t5682 = Cos(var1[10]);
  t13459 = -1.*t9921*t3154*t5481;
  t13471 = -1.*t3709*t13103;
  t13473 = t13459 + t13471;
  t13488 = Sin(var1[11]);
  t13493 = -1.*t13449*t9310;
  t15583 = t5682*t13473;
  t15595 = t13493 + t15583;
  t15708 = Cos(var1[11]);
  t15881 = t5682*t9310;
  t15888 = t13449*t13473;
  t16023 = t15881 + t15888;
  t6657 = -1.*t5682;
  t8213 = 1. + t6657;
  t9948 = -1.*t9921;
  t9950 = 1. + t9948;
  t19102 = -1.*t9921*t8696*t8227;
  t19688 = -1.*t8696*t3154*t3709*t8802;
  t19811 = t19102 + t19688;
  t15757 = -1.*t15708;
  t15826 = 1. + t15757;
  t20358 = t8696*t3154*t8221*t13449;
  t20359 = t5682*t19811;
  t20364 = t20358 + t20359;
  t20366 = -1.*t5682*t8696*t3154*t8221;
  t23906 = t13449*t19811;
  t23923 = t20366 + t23906;
  t24495 = t8696*t8221*t8227;
  t24779 = -1.*t5481*t8802;
  t24780 = t24495 + t24779;
  t24808 = t8221*t5481;
  t24826 = t8696*t8227*t8802;
  t25994 = t24808 + t24826;
  t26522 = -1.*t3709*t13449*t24780;
  t26524 = t5682*t25994;
  t26539 = t26522 + t26524;
  t26582 = -1.*t5682*t3709*t24780;
  t26589 = -1.*t13449*t25994;
  t26649 = t26582 + t26589;
  t28232 = -1.*t8696*t3154*t3709;
  t28236 = -1.*t9921*t25994;
  t28242 = t28232 + t28236;
  t28286 = t9921*t8696*t3154;
  t28312 = -1.*t3709*t25994;
  t28321 = t28286 + t28312;
  t29966 = -1.*t8696*t8221*t8227;
  t30202 = t5481*t8802;
  t30398 = t29966 + t30202;
  t30491 = -1.*t13449*t30398;
  t30500 = t5682*t28321;
  t30501 = t30491 + t30500;
  t30547 = -1.*t5682*t30398;
  t30553 = -1.*t13449*t28321;
  t30720 = t30547 + t30553;
  t31459 = t5682*t30398;
  t31816 = t13449*t28321;
  t33227 = t31459 + t31816;
  p_output1[0]=1.;
  p_output1[1]=0.325*t13449*t13473 - 0.575*t13488*t15595 - 0.575*t15826*t16023 - 0.0641*(t15595*t15708 + t13488*t16023) - 0.295*(-1.*t13488*t15595 + t15708*t16023) + 0.1575*t3154*t3709*t5481 - 0.325*t8213*t9310 + 0.2255*(-1.*t3154*t3709*t5481 + t13103*t9921) + 0.1575*t13103*t9950;
  p_output1[2]=0.325*t13449*t19811 - 0.575*t13488*t20364 - 0.575*t15826*t23923 - 0.0641*(t15708*t20364 + t13488*t23923) - 0.295*(-1.*t13488*t20364 + t15708*t23923) + 0.325*t3154*t8213*t8221*t8696 + 0.1575*t3709*t8227*t8696 + 0.2255*(-1.*t3709*t8227*t8696 + t3154*t8696*t8802*t9921) + 0.1575*t3154*t8696*t8802*t9950;
  p_output1[3]=-0.575*t15826*t26539 - 0.575*t13488*t26649 - 0.295*(t15708*t26539 - 1.*t13488*t26649) - 0.0641*(t13488*t26539 + t15708*t26649) - 0.325*t13449*t24780*t3709 - 0.325*t25994*t8213 + 0.2255*t24780*t9921 + 0.1575*t24780*t9950;
  p_output1[4]=0.325*t13449*t28242 - 0.575*t13449*t15826*t28242 + 0.2255*t28321 + 0.1575*t25994*t3709 - 0.575*t13488*t28242*t5682 - 0.295*(t13449*t15708*t28242 - 1.*t13488*t28242*t5682) - 0.0641*(t13449*t13488*t28242 + t15708*t28242*t5682) - 0.1575*t3154*t8696*t9921;
  p_output1[5]=-0.325*t13449*t30398 - 0.575*t15826*t30501 - 0.575*t13488*t30720 - 0.295*(t15708*t30501 - 1.*t13488*t30720) - 0.0641*(t13488*t30501 + t15708*t30720) + 0.325*t28321*t5682;
  p_output1[6]=-0.575*t15708*t30501 - 0.575*t13488*t33227 - 0.295*(-1.*t15708*t30501 - 1.*t13488*t33227) - 0.0641*(-1.*t13488*t30501 + t15708*t33227);
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

#include "J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight3_DiagonalStance2_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
