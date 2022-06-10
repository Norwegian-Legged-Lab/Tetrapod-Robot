/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:08:13 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t9718;
  double t36284;
  double t42894;
  double t37887;
  double t43750;
  double t17342;
  double t25095;
  double t44736;
  double t44765;
  double t44772;
  double t44774;
  double t45009;
  double t42383;
  double t44415;
  double t44589;
  double t32172;
  double t45010;
  double t45023;
  double t45024;
  double t45082;
  double t45086;
  double t45127;
  double t45134;
  double t45943;
  double t46069;
  double t46144;
  double t46147;
  double t36106;
  double t36222;
  double t44741;
  double t44756;
  double t46321;
  double t46323;
  double t46324;
  double t45986;
  double t46042;
  double t46326;
  double t46328;
  double t46330;
  double t46338;
  double t46340;
  double t46343;
  double t46265;
  double t46279;
  double t46280;
  double t46281;
  double t46282;
  double t46289;
  double t46310;
  double t46318;
  double t46325;
  double t46333;
  double t46348;
  double t46349;
  double t46359;
  double t46369;
  double t46374;
  double t46377;
  double t46380;
  double t46384;
  double t46385;
  double t46390;
  t9718 = Cos(var1[3]);
  t36284 = Cos(var1[5]);
  t42894 = Sin(var1[3]);
  t37887 = Sin(var1[4]);
  t43750 = Sin(var1[5]);
  t17342 = Cos(var1[4]);
  t25095 = Sin(var1[15]);
  t44736 = Cos(var1[15]);
  t44765 = t36284*t42894;
  t44772 = t9718*t37887*t43750;
  t44774 = t44765 + t44772;
  t45009 = Sin(var1[16]);
  t42383 = -1.*t9718*t36284*t37887;
  t44415 = t42894*t43750;
  t44589 = t42383 + t44415;
  t32172 = Cos(var1[16]);
  t45010 = t44736*t9718*t17342;
  t45023 = -1.*t25095*t44774;
  t45024 = t45010 + t45023;
  t45082 = Sin(var1[17]);
  t45086 = -1.*t45009*t44589;
  t45127 = t32172*t45024;
  t45134 = t45086 + t45127;
  t45943 = Cos(var1[17]);
  t46069 = t32172*t44589;
  t46144 = t45009*t45024;
  t46147 = t46069 + t46144;
  t36106 = -1.*t32172;
  t36222 = 1. + t36106;
  t44741 = -1.*t44736;
  t44756 = 1. + t44741;
  t46321 = t44736*t37887;
  t46323 = t17342*t25095*t43750;
  t46324 = t46321 + t46323;
  t45986 = -1.*t45943;
  t46042 = 1. + t45986;
  t46326 = -1.*t17342*t36284*t45009;
  t46328 = t32172*t46324;
  t46330 = t46326 + t46328;
  t46338 = t32172*t17342*t36284;
  t46340 = t45009*t46324;
  t46343 = t46338 + t46340;
  t46265 = -1.*var2[0];
  t46279 = -0.325*t36222*t17342*t36284;
  t46280 = 0.1575*t25095*t37887;
  t46281 = 0.1575*t44756*t17342*t43750;
  t46282 = t25095*t37887;
  t46289 = -1.*t44736*t17342*t43750;
  t46310 = t46282 + t46289;
  t46318 = -0.2255*t46310;
  t46325 = 0.325*t45009*t46324;
  t46333 = -0.575*t45082*t46330;
  t46348 = -0.575*t46042*t46343;
  t46349 = -1.*t45082*t46330;
  t46359 = t45943*t46343;
  t46369 = t46349 + t46359;
  t46374 = -0.295*t46369;
  t46377 = t45943*t46330;
  t46380 = t45082*t46343;
  t46384 = t46377 + t46380;
  t46385 = -0.0641*t46384;
  t46390 = t46265 + var1[0] + t46279 + t46280 + t46281 + t46318 + t46325 + t46333 + t46348 + t46374 + t46385;
  p_output1[0]=-0.325*t36222*t44589 - 0.1575*t44756*t44774 + 0.325*t45009*t45024 - 0.575*t45082*t45134 - 0.575*t46042*t46147 - 0.0641*(t45134*t45943 + t45082*t46147) - 0.295*(-1.*t45082*t45134 + t45943*t46147) + 0.1575*t17342*t25095*t9718 - 0.2255*(t44736*t44774 + t17342*t25095*t9718) + var1[2] - 0.25*Power(t46390,2)*var3[0]*(1. + Tanh(t46390*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeightcurved_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeightcurved_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
