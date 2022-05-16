/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:34:12 GMT+02:00
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
  double t11659;
  double t11112;
  double t11167;
  double t11363;
  double t11846;
  double t13318;
  double t14083;
  double t14318;
  double t15330;
  double t15484;
  double t15500;
  double t9929;
  double t11600;
  double t11864;
  double t12915;
  double t15797;
  double t15814;
  double t15829;
  double t15831;
  double t15834;
  double t16038;
  double t16052;
  double t16078;
  double t16084;
  double t16095;
  double t16096;
  double t16104;
  double t9980;
  double t11105;
  double t13320;
  double t13325;
  double t15836;
  double t16020;
  double t16468;
  double t16472;
  double t16484;
  double t16550;
  double t16622;
  double t16668;
  double t16678;
  double t16679;
  double t16682;
  double t16969;
  double t17044;
  double t17065;
  double t17078;
  double t17084;
  double t17086;
  double t17092;
  double t17096;
  double t17111;
  double t17116;
  double t17117;
  double t17130;
  double t17502;
  double t17504;
  double t17518;
  double t17476;
  double t17478;
  double t17485;
  double t17561;
  double t17565;
  double t17566;
  double t17867;
  double t17871;
  double t17887;
  double t17579;
  double t17589;
  double t17590;
  double t18143;
  double t18145;
  double t18149;
  t11659 = Cos(var1[3]);
  t11112 = Cos(var1[5]);
  t11167 = Sin(var1[3]);
  t11363 = Sin(var1[4]);
  t11846 = Sin(var1[5]);
  t13318 = Cos(var1[6]);
  t14083 = t11659*t11112;
  t14318 = -1.*t11167*t11363*t11846;
  t15330 = t14083 + t14318;
  t15484 = Cos(var1[4]);
  t15500 = Sin(var1[6]);
  t9929 = Cos(var1[7]);
  t11600 = t11112*t11167*t11363;
  t11864 = t11659*t11846;
  t12915 = t11600 + t11864;
  t15797 = -1.*t15484*t13318*t11167;
  t15814 = -1.*t15330*t15500;
  t15829 = t15797 + t15814;
  t15831 = Sin(var1[7]);
  t15834 = Cos(var1[8]);
  t16038 = t9929*t12915;
  t16052 = t15829*t15831;
  t16078 = t16038 + t16052;
  t16084 = t9929*t15829;
  t16095 = -1.*t12915*t15831;
  t16096 = t16084 + t16095;
  t16104 = Sin(var1[8]);
  t9980 = -1.*t9929;
  t11105 = 1. + t9980;
  t13320 = -1.*t13318;
  t13325 = 1. + t13320;
  t15836 = -1.*t15834;
  t16020 = 1. + t15836;
  t16468 = -1.*t11659*t13318*t11363;
  t16472 = -1.*t11659*t15484*t11846*t15500;
  t16484 = t16468 + t16472;
  t16550 = -1.*t11659*t15484*t11112*t9929;
  t16622 = t16484*t15831;
  t16668 = t16550 + t16622;
  t16678 = t9929*t16484;
  t16679 = t11659*t15484*t11112*t15831;
  t16682 = t16678 + t16679;
  t16969 = t11659*t11112*t11363;
  t17044 = -1.*t11167*t11846;
  t17065 = t16969 + t17044;
  t17078 = t11112*t11167;
  t17084 = t11659*t11363*t11846;
  t17086 = t17078 + t17084;
  t17092 = t9929*t17086;
  t17096 = -1.*t17065*t15500*t15831;
  t17111 = t17092 + t17096;
  t17116 = -1.*t9929*t17065*t15500;
  t17117 = -1.*t17086*t15831;
  t17130 = t17116 + t17117;
  t17502 = -1.*t13318*t17086;
  t17504 = -1.*t11659*t15484*t15500;
  t17518 = t17502 + t17504;
  t17476 = t11659*t15484*t13318;
  t17478 = -1.*t17086*t15500;
  t17485 = t17476 + t17478;
  t17561 = -1.*t11659*t11112*t11363;
  t17565 = t11167*t11846;
  t17566 = t17561 + t17565;
  t17867 = -1.*t9929*t17566;
  t17871 = -1.*t17485*t15831;
  t17887 = t17867 + t17871;
  t17579 = t9929*t17485;
  t17589 = -1.*t17566*t15831;
  t17590 = t17579 + t17589;
  t18143 = t9929*t17566;
  t18145 = t17485*t15831;
  t18149 = t18143 + t18145;
  p_output1[0]=1.;
  p_output1[1]=0.325*t11105*t12915 + 0.1575*t13325*t15330 + 0.1575*t11167*t15484*t15500 + 0.2255*(t13318*t15330 - 1.*t11167*t15484*t15500) - 0.325*t15829*t15831 + 0.075*t16020*t16078 + 0.075*t16096*t16104 - 0.0641*(t15834*t16096 + t16078*t16104) + 0.355*(t15834*t16078 - 1.*t16096*t16104);
  p_output1[2]=-0.325*t11105*t11112*t11659*t15484 + 0.1575*t11659*t11846*t13325*t15484 + 0.1575*t11363*t11659*t15500 + 0.2255*(t11659*t11846*t13318*t15484 - 1.*t11363*t11659*t15500) - 0.325*t15831*t16484 + 0.075*t16020*t16668 + 0.075*t16104*t16682 - 0.0641*(t16104*t16668 + t15834*t16682) + 0.355*(t15834*t16668 - 1.*t16104*t16682);
  p_output1[3]=0.2255*t13318*t17065 + 0.1575*t13325*t17065 + 0.325*t15500*t15831*t17065 + 0.325*t11105*t17086 + 0.075*t16020*t17111 + 0.075*t16104*t17130 - 0.0641*(t16104*t17111 + t15834*t17130) + 0.355*(t15834*t17111 - 1.*t16104*t17130);
  p_output1[4]=-0.1575*t11659*t13318*t15484 + 0.1575*t15500*t17086 + 0.2255*t17485 - 0.325*t15831*t17518 + 0.075*t15831*t16020*t17518 + 0.075*t16104*t17518*t9929 - 0.0641*(t15831*t16104*t17518 + t15834*t17518*t9929) + 0.355*(t15831*t15834*t17518 - 1.*t16104*t17518*t9929);
  p_output1[5]=0.325*t15831*t17566 + 0.075*t16020*t17590 + 0.075*t16104*t17887 - 0.0641*(t16104*t17590 + t15834*t17887) + 0.355*(t15834*t17590 - 1.*t16104*t17887) - 0.325*t17485*t9929;
  p_output1[6]=0.075*t15834*t17590 + 0.075*t16104*t18149 - 0.0641*(-1.*t16104*t17590 + t15834*t18149) + 0.355*(-1.*t15834*t17590 - 1.*t16104*t18149);
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

#include "J_u_frontSwingFootHeight2_ParallelStance.hh"

namespace ParallelStance
{

void J_u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
