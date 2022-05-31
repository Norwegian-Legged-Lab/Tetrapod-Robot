/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:20 GMT+02:00
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
  double t3007;
  double t19106;
  double t3417;
  double t20744;
  double t21773;
  double t20524;
  double t21774;
  double t7547;
  double t22078;
  double t22079;
  double t22083;
  double t19109;
  double t21846;
  double t23962;
  double t25493;
  double t25792;
  double t15027;
  double t19694;
  double t20505;
  double t29835;
  double t29796;
  double t21513;
  double t21813;
  double t21836;
  double t22094;
  double t22100;
  double t22416;
  double t25854;
  double t25860;
  double t28720;
  double t29847;
  double t29868;
  double t29869;
  double t30062;
  double t30075;
  double t30095;
  double t30160;
  double t30161;
  double t30310;
  double t30549;
  double t30578;
  double t30843;
  double t30873;
  double t30922;
  double t30944;
  double t21901;
  double t22904;
  double t23142;
  double t31359;
  double t31367;
  double t31405;
  double t31440;
  double t31447;
  double t31448;
  double t31457;
  double t31460;
  double t31471;
  double t31565;
  double t31580;
  double t31596;
  double t31608;
  double t31655;
  double t31669;
  double t31673;
  double t31369;
  double t31377;
  double t31388;
  double t31612;
  double t31627;
  double t31738;
  double t31760;
  double t31801;
  double t31810;
  double t31950;
  double t31955;
  double t32102;
  double t31632;
  double t31678;
  double t31716;
  double t31833;
  double t32128;
  double t32130;
  double t32205;
  double t32219;
  double t32235;
  double t23929;
  double t29540;
  double t29618;
  double t31730;
  double t32340;
  double t32605;
  double t32850;
  double t33482;
  double t34154;
  double t34781;
  double t34785;
  t3007 = Cos(var1[4]);
  t19106 = Cos(var1[9]);
  t3417 = Cos(var1[5]);
  t20744 = Cos(var1[11]);
  t21773 = Sin(var1[10]);
  t20524 = Cos(var1[10]);
  t21774 = Sin(var1[11]);
  t7547 = Sin(var1[9]);
  t22078 = -1.*t20744*t21773;
  t22079 = t20524*t21774;
  t22083 = t22078 + t22079;
  t19109 = Sin(var1[5]);
  t21846 = Sin(var1[4]);
  t23962 = -1.*t20524*t20744;
  t25493 = -1.*t21773*t21774;
  t25792 = t23962 + t25493;
  t15027 = t3417*t7547;
  t19694 = t19106*t19109;
  t20505 = t15027 + t19694;
  t29835 = Cos(var1[3]);
  t29796 = Sin(var1[3]);
  t21513 = t20524*t20744;
  t21813 = t21773*t21774;
  t21836 = t21513 + t21813;
  t22094 = t19106*t3417*t22083;
  t22100 = -1.*t7547*t22083*t19109;
  t22416 = t22094 + t22100;
  t25854 = t19106*t3417*t25792;
  t25860 = -1.*t7547*t25792*t19109;
  t28720 = t25854 + t25860;
  t29847 = -1.*t19106*t3417;
  t29868 = t7547*t19109;
  t29869 = t29847 + t29868;
  t30062 = t3417*t7547*t22083;
  t30075 = t19106*t22083*t19109;
  t30095 = t30062 + t30075;
  t30160 = t3007*t21836;
  t30161 = -1.*t21846*t22416;
  t30310 = t30160 + t30161;
  t30549 = t3417*t7547*t25792;
  t30578 = t19106*t25792*t19109;
  t30843 = t30549 + t30578;
  t30873 = t3007*t22083;
  t30922 = -1.*t21846*t28720;
  t30944 = t30873 + t30922;
  t21901 = t21836*t21846;
  t22904 = t3007*t22416;
  t23142 = t21901 + t22904;
  t31359 = -1.*t19106;
  t31367 = 1. + t31359;
  t31405 = -1.*t20524;
  t31440 = 1. + t31405;
  t31447 = -0.28121*t31440;
  t31448 = -1.*t20744;
  t31457 = 1. + t31448;
  t31460 = -0.50321*t31457;
  t31471 = -0.19821*t20744;
  t31565 = t31460 + t31471;
  t31580 = t20524*t31565;
  t31596 = 0.305*t21773*t21774;
  t31608 = t31447 + t31580 + t31596;
  t31655 = -0.15121*t31367;
  t31669 = t19106*t31608;
  t31673 = t31655 + t31669;
  t31369 = 0.15121*t31367;
  t31377 = 0.15121*t19106;
  t31388 = 0.15121*t7547;
  t31612 = t7547*t31608;
  t31627 = t31369 + t31377 + t31388 + t31612;
  t31738 = 0.28121*t21773;
  t31760 = t31565*t21773;
  t31801 = -0.305*t20524*t21774;
  t31810 = t31738 + t31760 + t31801;
  t31950 = t3417*t31673;
  t31955 = -1.*t31627*t19109;
  t32102 = t31950 + t31955;
  t31632 = t3417*t31627;
  t31678 = t31673*t19109;
  t31716 = t31632 + t31678;
  t31833 = t31810*t21846;
  t32128 = t3007*t32102;
  t32130 = t31833 + t32128;
  t32205 = t3007*t31810;
  t32219 = -1.*t21846*t32102;
  t32235 = t32205 + t32219;
  t23929 = t22083*t21846;
  t29540 = t3007*t28720;
  t29618 = t23929 + t29540;
  t31730 = -1.*t29869*t31716;
  t32340 = t30095*t31716;
  t32605 = t29869*t31716;
  t32850 = -1.*t30843*t31716;
  t33482 = -1.*t30095*t31716;
  t34154 = t30843*t31716;
  t34781 = -1.*t31810*t21836;
  t34785 = t31810*t22083;
  p_output1[0]=t29618*var2[0] + t20505*t3007*var2[1] + t23142*var2[2];
  p_output1[1]=(t29835*t30843 - 1.*t29796*t30944)*var2[0] + (t20505*t21846*t29796 + t29835*t29869)*var2[1] + (t29835*t30095 - 1.*t29796*t30310)*var2[2];
  p_output1[2]=(t29796*t30843 + t29835*t30944)*var2[0] + (-1.*t20505*t21846*t29835 + t29796*t29869)*var2[1] + (t29796*t30095 + t29835*t30310)*var2[2];
  p_output1[3]=(t23142*(t31730 - 1.*t20505*t3007*t32130 + t20505*t21846*t32235) + t20505*t3007*(t23142*t32130 + t30310*t32235 + t32340))*var2[0] + (t29618*(-1.*t23142*t32130 - 1.*t30310*t32235 + t33482) + t23142*(t29618*t32130 + t30944*t32235 + t34154))*var2[1] + (t29618*(t20505*t3007*t32130 - 1.*t20505*t21846*t32235 + t32605) + t20505*t3007*(-1.*t29618*t32130 - 1.*t30944*t32235 + t32850))*var2[2];
  p_output1[4]=(t30095*(t31730 - 1.*t20505*t32102) + t29869*(t21836*t31810 + t22416*t32102 + t32340))*var2[0] + (t30843*(-1.*t22416*t32102 + t33482 + t34781) + t30095*(t28720*t32102 + t34154 + t34785))*var2[1] + (t30843*(t20505*t32102 + t32605) + t29869*(-1.*t22083*t31810 - 1.*t28720*t32102 + t32850))*var2[2];
  p_output1[5]=t21836*(t19106*t31627 - 1.*t31673*t7547)*var2[0] + (t22083*(-1.*t19106*t22083*t31673 + t34781 - 1.*t22083*t31627*t7547) + t21836*(t19106*t25792*t31673 + t34785 + t25792*t31627*t7547))*var2[1] + t22083*(-1.*t19106*t31627 + t31673*t7547)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t21836 + 0.15121*t25792)*var2[0] + (-0.15121 + t22083*(-1.*t22083*t31608 + t34781) + t21836*(t25792*t31608 + t34785))*var2[1];
  p_output1[10]=(0.28121*t21774 - 0.305*t20744*t21774 + t21774*t31565)*var2[0] + (0.28121*t20744 + 0.305*Power(t21774,2) + t20744*t31565)*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
