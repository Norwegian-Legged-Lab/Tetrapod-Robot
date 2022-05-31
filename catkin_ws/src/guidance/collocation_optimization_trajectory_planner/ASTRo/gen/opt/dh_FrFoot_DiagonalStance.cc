/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:59:04 GMT+02:00
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
  double t1942;
  double t1710;
  double t4443;
  double t2840;
  double t2119;
  double t2366;
  double t2388;
  double t2489;
  double t2539;
  double t3065;
  double t4477;
  double t4493;
  double t4330;
  double t4554;
  double t4563;
  double t4564;
  double t4565;
  double t4568;
  double t4702;
  double t2856;
  double t3076;
  double t3476;
  double t5593;
  double t5621;
  double t5529;
  double t5122;
  double t5136;
  double t5231;
  double t5240;
  double t5617;
  double t5649;
  double t5651;
  double t6930;
  double t6581;
  double t6615;
  double t6707;
  double t6568;
  double t6935;
  double t6937;
  double t6938;
  double t7170;
  double t7181;
  double t7190;
  double t4738;
  double t4774;
  double t4956;
  double t5012;
  double t5088;
  double t4522;
  double t4714;
  double t4728;
  double t7425;
  double t7428;
  double t7433;
  double t7251;
  double t7325;
  double t7398;
  double t7448;
  double t7449;
  double t7458;
  double t7568;
  double t7659;
  double t7692;
  double t7919;
  double t7961;
  double t7972;
  double t7485;
  double t7515;
  double t7540;
  double t7564;
  double t7786;
  double t7790;
  double t7795;
  double t7820;
  double t7918;
  double t8050;
  double t8059;
  double t8063;
  double t8124;
  double t8158;
  double t8198;
  double t8200;
  double t8210;
  double t8213;
  double t8527;
  double t8581;
  double t5349;
  double t5662;
  double t5966;
  double t9248;
  double t8246;
  double t8251;
  double t8375;
  double t9278;
  double t9650;
  double t9658;
  t1942 = Cos(var1[14]);
  t1710 = Sin(var1[14]);
  t4443 = Cos(var1[12]);
  t2840 = Cos(var1[13]);
  t2119 = -1.*t1942;
  t2366 = 1. + t2119;
  t2388 = 0.50321*t2366;
  t2489 = 0.19821*t1942;
  t2539 = t2388 + t2489;
  t3065 = Sin(var1[13]);
  t4477 = -1.*t4443;
  t4493 = 1. + t4477;
  t4330 = Sin(var1[12]);
  t4554 = -1.*t2840;
  t4563 = 1. + t4554;
  t4564 = 0.28121*t4563;
  t4565 = t2840*t2539;
  t4568 = -0.305*t3065*t1710;
  t4702 = t4564 + t4565 + t4568;
  t2856 = t2840*t1942;
  t3076 = t3065*t1710;
  t3476 = t2856 + t3076;
  t5593 = Cos(var1[5]);
  t5621 = Sin(var1[5]);
  t5529 = Cos(var1[4]);
  t5122 = -1.*t1942*t3065;
  t5136 = t2840*t1710;
  t5231 = t5122 + t5136;
  t5240 = Sin(var1[4]);
  t5617 = t4443*t5593*t3476;
  t5649 = -1.*t4330*t3476*t5621;
  t5651 = t5617 + t5649;
  t6930 = Cos(var1[3]);
  t6581 = t5593*t4330*t3476;
  t6615 = t4443*t3476*t5621;
  t6707 = t6581 + t6615;
  t6568 = Sin(var1[3]);
  t6935 = t5529*t5231;
  t6937 = -1.*t5240*t5651;
  t6938 = t6935 + t6937;
  t7170 = t1942*t3065;
  t7181 = -1.*t2840*t1710;
  t7190 = t7170 + t7181;
  t4738 = -0.15121*t4493;
  t4774 = -0.15121*t4443;
  t4956 = -0.15121*t4330;
  t5012 = t4330*t4702;
  t5088 = t4738 + t4774 + t4956 + t5012;
  t4522 = 0.15121*t4493;
  t4714 = t4443*t4702;
  t4728 = t4522 + t4714;
  t7425 = t4443*t5593;
  t7428 = -1.*t4330*t5621;
  t7433 = t7425 + t7428;
  t7251 = t5593*t4330*t7190;
  t7325 = t4443*t7190*t5621;
  t7398 = t7251 + t7325;
  t7448 = t5593*t5088;
  t7449 = t4728*t5621;
  t7458 = t7448 + t7449;
  t7568 = t5593*t4728;
  t7659 = -1.*t5088*t5621;
  t7692 = t7568 + t7659;
  t7919 = t4443*t5593*t7190;
  t7961 = -1.*t4330*t7190*t5621;
  t7972 = t7919 + t7961;
  t7485 = -1.*t7433*t7458;
  t7515 = -1.*t5593*t4330;
  t7540 = -1.*t4443*t5621;
  t7564 = t7515 + t7540;
  t7786 = 0.28121*t3065;
  t7790 = -1.*t2539*t3065;
  t7795 = -0.305*t2840*t1710;
  t7820 = t7786 + t7790 + t7795;
  t7918 = t7398*t7458;
  t8050 = t3476*t5240;
  t8059 = t5529*t7972;
  t8063 = t8050 + t8059;
  t8124 = t7820*t5240;
  t8158 = t5529*t7692;
  t8198 = t8124 + t8158;
  t8200 = t5529*t7820;
  t8210 = -1.*t5240*t7692;
  t8213 = t8200 + t8210;
  t8527 = -1.*t7820*t3476;
  t8581 = t7820*t5231;
  t5349 = t5231*t5240;
  t5662 = t5529*t5651;
  t5966 = t5349 + t5662;
  t9248 = -1.*t7398*t7458;
  t8246 = t5529*t3476;
  t8251 = -1.*t5240*t7972;
  t8375 = t8246 + t8251;
  t9278 = t6707*t7458;
  t9650 = t7433*t7458;
  t9658 = -1.*t6707*t7458;
  p_output1[0]=t5966*var2[0] + (t6707*t6930 - 1.*t6568*t6938)*var2[1] + (t6568*t6707 + t6930*t6938)*var2[2] + (t8063*(t7485 - 1.*t5529*t7564*t8198 + t5240*t7564*t8213) + t5529*t7564*(t7918 + t8063*t8198 + t8213*t8375))*var2[3] + (t7398*(t7485 - 1.*t7564*t7692) + t7433*(t3476*t7820 + t7918 + t7692*t7972))*var2[4] + t3476*(t4330*t4728 - 1.*t4443*t5088)*var2[5] + (0.28121*t1710 - 0.305*t1710*t1942 - 1.*t1710*t2539)*var2[13];
  p_output1[1]=t5529*t7564*var2[0] + (t6930*t7433 + t5240*t6568*t7564)*var2[1] + (t6568*t7433 - 1.*t5240*t6930*t7564)*var2[2] + (t5966*(-1.*t8063*t8198 - 1.*t8213*t8375 + t9248) + t8063*(t5966*t8198 + t6938*t8213 + t9278))*var2[3] + (t6707*(-1.*t7692*t7972 + t8527 + t9248) + t7398*(t5651*t7692 + t8581 + t9278))*var2[4] + (t5231*(-1.*t4443*t4728*t7190 - 1.*t4330*t5088*t7190 + t8527) + t3476*(t3476*t4443*t4728 + t3476*t4330*t5088 + t8581))*var2[5] + (-0.15121 + t5231*(-1.*t4702*t7190 + t8527) + t3476*(t3476*t4702 + t8581))*var2[12];
  p_output1[2]=t8063*var2[0] + (t6930*t7398 - 1.*t6568*t8375)*var2[1] + (t6568*t7398 + t6930*t8375)*var2[2] + (t5966*(t5529*t7564*t8198 - 1.*t5240*t7564*t8213 + t9650) + t5529*t7564*(-1.*t5966*t8198 - 1.*t6938*t8213 + t9658))*var2[3] + (t6707*(t7564*t7692 + t9650) + t7433*(-1.*t5651*t7692 - 1.*t5231*t7820 + t9658))*var2[4] + (-1.*t4330*t4728 + t4443*t5088)*t5231*var2[5] + (-0.15121*t5231 - 0.15121*t7190)*var2[12] + (0.305*Power(t1710,2) + 0.28121*t1942 - 1.*t1942*t2539)*var2[13] - 0.305*var2[14];
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
