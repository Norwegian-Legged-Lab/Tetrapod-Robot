/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:42 GMT+02:00
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
  double t4435;
  double t4738;
  double t4887;
  double t4963;
  double t26096;
  double t28108;
  double t4528;
  double t31617;
  double t29353;
  double t29445;
  double t34356;
  double t36003;
  double t36004;
  double t36007;
  double t36028;
  double t36057;
  double t36058;
  double t36059;
  double t36068;
  double t36069;
  double t36070;
  double t36083;
  double t28475;
  double t28476;
  double t36117;
  double t30507;
  double t30851;
  double t36163;
  double t36162;
  double t36164;
  double t36183;
  double t36185;
  double t36191;
  double t36192;
  double t34995;
  double t35891;
  double t36041;
  double t36049;
  double t36202;
  double t36203;
  double t36204;
  double t36209;
  double t36210;
  double t36211;
  double t36213;
  double t36214;
  double t36221;
  double t36250;
  double t36251;
  double t36255;
  double t36258;
  double t36259;
  double t36260;
  double t36279;
  double t36280;
  double t36281;
  double t36290;
  double t36291;
  double t36292;
  double t36314;
  double t36321;
  double t36322;
  t4435 = Cos(var1[4]);
  t4738 = Cos(var1[15]);
  t4887 = -1.*t4738;
  t4963 = 1. + t4887;
  t26096 = -0.15121*t4963;
  t28108 = Sin(var1[15]);
  t4528 = Cos(var1[5]);
  t31617 = Sin(var1[5]);
  t29353 = Sin(var1[16]);
  t29445 = Sin(var1[4]);
  t34356 = Cos(var1[16]);
  t36003 = t4738*t4435*t4528;
  t36004 = -1.*t4435*t28108*t31617;
  t36007 = t36003 + t36004;
  t36028 = Cos(var1[17]);
  t36057 = t29353*t29445;
  t36058 = t34356*t36007;
  t36059 = t36057 + t36058;
  t36068 = Sin(var1[17]);
  t36069 = t34356*t29445;
  t36070 = -1.*t29353*t36007;
  t36083 = t36069 + t36070;
  t28475 = -0.15121*t28108;
  t28476 = t26096 + t28475;
  t36117 = Sin(var1[3]);
  t30507 = 0.15121*t28108;
  t30851 = t26096 + t30507;
  t36163 = Cos(var1[3]);
  t36162 = t4528*t36117*t29445;
  t36164 = t36163*t31617;
  t36183 = t36162 + t36164;
  t36185 = t36163*t4528;
  t36191 = -1.*t36117*t29445*t31617;
  t36192 = t36185 + t36191;
  t34995 = -1.*t34356;
  t35891 = 1. + t34995;
  t36041 = -1.*t36028;
  t36049 = 1. + t36041;
  t36202 = t4738*t36183;
  t36203 = t28108*t36192;
  t36204 = t36202 + t36203;
  t36209 = -1.*t4435*t29353*t36117;
  t36210 = t34356*t36204;
  t36211 = t36209 + t36210;
  t36213 = -1.*t34356*t4435*t36117;
  t36214 = -1.*t29353*t36204;
  t36221 = t36213 + t36214;
  t36250 = -1.*t36163*t4528*t29445;
  t36251 = t36117*t31617;
  t36255 = t36250 + t36251;
  t36258 = t4528*t36117;
  t36259 = t36163*t29445*t31617;
  t36260 = t36258 + t36259;
  t36279 = t4738*t36255;
  t36280 = t28108*t36260;
  t36281 = t36279 + t36280;
  t36290 = t36163*t4435*t29353;
  t36291 = t34356*t36281;
  t36292 = t36290 + t36291;
  t36314 = t34356*t36163*t4435;
  t36321 = -1.*t29353*t36281;
  t36322 = t36314 + t36321;
  p_output1[0]=0.28121*t29353*t29445 - 0.28121*t35891*t36007 - 0.50321*t36049*t36059 - 0.50321*t36068*t36083 - 0.19821*(t36028*t36059 - 1.*t36068*t36083) - 1.*t30851*t31617*t4435 + t28476*t4435*t4528 - 0.15121*(-1.*t28108*t4435*t4528 - 1.*t31617*t4435*t4738) + var1[0] - 1.*var2[0];
  p_output1[1]=t28476*t36183 + t30851*t36192 - 0.28121*t35891*t36204 - 0.50321*t36049*t36211 - 0.50321*t36068*t36221 - 0.19821*(t36028*t36211 - 1.*t36068*t36221) - 0.28121*t29353*t36117*t4435 - 0.15121*(-1.*t28108*t36183 + t36192*t4738) + var1[1] - 1.*var2[1];
  p_output1[2]=t28476*t36255 + t30851*t36260 - 0.28121*t35891*t36281 - 0.50321*t36049*t36292 - 0.50321*t36068*t36322 - 0.19821*(t36028*t36292 - 1.*t36068*t36322) + 0.28121*t29353*t36163*t4435 - 0.15121*(-1.*t28108*t36255 + t36260*t4738) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
