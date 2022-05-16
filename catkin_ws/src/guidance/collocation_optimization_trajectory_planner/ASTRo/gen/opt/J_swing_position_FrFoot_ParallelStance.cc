/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:46 GMT+02:00
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
  double t44691;
  double t44768;
  double t44771;
  double t44772;
  double t44802;
  double t44812;
  double t44843;
  double t44820;
  double t44824;
  double t44845;
  double t44826;
  double t44847;
  double t44858;
  double t44886;
  double t44887;
  double t44889;
  double t42939;
  double t44575;
  double t44909;
  double t44916;
  double t44919;
  double t44928;
  double t44937;
  double t44949;
  double t44957;
  double t44959;
  double t44971;
  double t44976;
  double t44979;
  double t44981;
  double t44781;
  double t44819;
  double t44880;
  double t44881;
  double t44910;
  double t44914;
  double t44941;
  double t44947;
  double t45008;
  double t45009;
  double t45010;
  double t45019;
  double t45020;
  double t45021;
  double t45026;
  double t45028;
  double t45029;
  double t45045;
  double t45047;
  double t45048;
  double t45053;
  double t45055;
  double t45061;
  double t45064;
  double t45067;
  double t45068;
  double t45111;
  double t45115;
  double t45117;
  double t45119;
  double t45125;
  double t45130;
  double t45083;
  double t45159;
  double t45164;
  double t45165;
  double t45173;
  double t45180;
  double t45181;
  double t45183;
  double t45184;
  double t45185;
  double t45195;
  double t45196;
  double t45197;
  t44691 = Sin(var1[3]);
  t44768 = Cos(var1[12]);
  t44771 = -1.*t44768;
  t44772 = 1. + t44771;
  t44802 = Sin(var1[12]);
  t44812 = -0.15121*t44802;
  t44843 = Cos(var1[3]);
  t44820 = Cos(var1[5]);
  t44824 = Sin(var1[4]);
  t44845 = Sin(var1[5]);
  t44826 = t44820*t44691*t44824;
  t44847 = t44843*t44845;
  t44858 = t44826 + t44847;
  t44886 = t44843*t44820;
  t44887 = -1.*t44691*t44824*t44845;
  t44889 = t44886 + t44887;
  t42939 = Cos(var1[4]);
  t44575 = Sin(var1[13]);
  t44909 = Cos(var1[13]);
  t44916 = t44768*t44858;
  t44919 = t44802*t44889;
  t44928 = t44916 + t44919;
  t44937 = Cos(var1[14]);
  t44949 = t42939*t44575*t44691;
  t44957 = t44909*t44928;
  t44959 = t44949 + t44957;
  t44971 = Sin(var1[14]);
  t44976 = -1.*t44909*t42939*t44691;
  t44979 = t44575*t44928;
  t44981 = t44976 + t44979;
  t44781 = 0.15121*t44772;
  t44819 = t44781 + t44812;
  t44880 = -0.15121*t44772;
  t44881 = t44880 + t44812;
  t44910 = -1.*t44909;
  t44914 = 1. + t44910;
  t44941 = -1.*t44937;
  t44947 = 1. + t44941;
  t45008 = -1.*t44768*t44843*t42939*t44820;
  t45009 = t44843*t42939*t44802*t44845;
  t45010 = t45008 + t45009;
  t45019 = t44843*t44575*t44824;
  t45020 = t44909*t45010;
  t45021 = t45019 + t45020;
  t45026 = -1.*t44909*t44843*t44824;
  t45028 = t44575*t45010;
  t45029 = t45026 + t45028;
  t45045 = t44843*t44820*t44824;
  t45047 = -1.*t44691*t44845;
  t45048 = t45045 + t45047;
  t45053 = t44820*t44691;
  t45055 = t44843*t44824*t44845;
  t45061 = t45053 + t45055;
  t45064 = t44802*t45048;
  t45067 = t44768*t45061;
  t45068 = t45064 + t45067;
  t45111 = -0.15121*t44768;
  t45115 = -1.*t44843*t44820*t44824;
  t45117 = t44691*t44845;
  t45119 = t45115 + t45117;
  t45125 = -1.*t44802*t45119;
  t45130 = t45125 + t45067;
  t45083 = -1.*t44802*t45061;
  t45159 = t44768*t45119;
  t45164 = t44802*t45061;
  t45165 = t45159 + t45164;
  t45173 = -1.*t44843*t42939*t44575;
  t45180 = t44909*t45165;
  t45181 = t45173 + t45180;
  t45183 = -1.*t44909*t44843*t42939;
  t45184 = -1.*t44575*t45165;
  t45185 = t45183 + t45184;
  t45195 = t44909*t44843*t42939;
  t45196 = t44575*t45165;
  t45197 = t45195 + t45196;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t42939*t44575*t44691 + t44819*t44858 + t44881*t44889 - 0.15121*(-1.*t44802*t44858 + t44768*t44889) + 0.28121*t44914*t44928 + 0.50321*t44947*t44959 - 0.50321*t44971*t44981 + 0.23321*(t44937*t44959 + t44971*t44981);
  p_output1[2]=-1.*t42939*t44819*t44820*t44843 - 0.28121*t44575*t44824*t44843 - 0.15121*(t42939*t44802*t44820*t44843 + t42939*t44768*t44843*t44845) + t42939*t44843*t44845*t44881 + 0.28121*t44914*t45010 + 0.50321*t44947*t45021 - 0.50321*t44971*t45029 + 0.23321*(t44937*t45021 + t44971*t45029);
  p_output1[3]=t44881*t45048 + t44819*t45061 + 0.28121*t44914*t45068 + 0.50321*t44909*t44947*t45068 - 0.50321*t44575*t44971*t45068 + 0.23321*(t44909*t44937*t45068 + t44575*t44971*t45068) - 0.15121*(t44768*t45048 + t45083);
  p_output1[4]=t45061*(t44812 + t45111) + (0.15121*t44802 + t45111)*t45119 - 0.15121*(t45083 - 1.*t44768*t45119) + 0.28121*t44914*t45130 + 0.50321*t44909*t44947*t45130 - 0.50321*t44575*t44971*t45130 + 0.23321*(t44909*t44937*t45130 + t44575*t44971*t45130);
  p_output1[5]=0.28121*t42939*t44843*t44909 + 0.28121*t44575*t45165 - 0.50321*t44971*t45181 + 0.50321*t44947*t45185 + 0.23321*(t44971*t45181 + t44937*t45185);
  p_output1[6]=0.50321*t44971*t45181 - 0.50321*t44937*t45197 + 0.23321*(-1.*t44971*t45181 + t44937*t45197);
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

#include "J_swing_position_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
