/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:07 GMT+02:00
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
  double t6077;
  double t6084;
  double t6090;
  double t6092;
  double t6095;
  double t6082;
  double t6119;
  double t6021;
  double t6123;
  double t6124;
  double t6128;
  double t6131;
  double t6170;
  double t6174;
  double t6178;
  double t6183;
  double t6200;
  double t6204;
  double t6205;
  double t6075;
  double t6076;
  double t6224;
  double t6093;
  double t6094;
  double t6227;
  double t6235;
  double t6236;
  double t6237;
  double t6226;
  double t6228;
  double t6229;
  double t6243;
  double t6244;
  double t6245;
  double t6187;
  double t6195;
  double t6247;
  double t6248;
  double t6249;
  double t6251;
  double t6252;
  double t6257;
  double t6281;
  double t6282;
  double t6283;
  double t6277;
  double t6278;
  double t6279;
  double t6303;
  double t6304;
  double t6306;
  double t6308;
  double t6309;
  double t6310;
  double t6312;
  double t6313;
  double t6314;
  t6077 = Cos(var1[4]);
  t6084 = Sin(var1[15]);
  t6090 = Sin(var1[4]);
  t6092 = Cos(var1[15]);
  t6095 = Sin(var1[5]);
  t6082 = Cos(var1[5]);
  t6119 = Sin(var1[16]);
  t6021 = Cos(var1[16]);
  t6123 = t6092*t6090;
  t6124 = t6077*t6084*t6095;
  t6128 = t6123 + t6124;
  t6131 = Sin(var1[17]);
  t6170 = -1.*t6077*t6082*t6119;
  t6174 = t6021*t6128;
  t6178 = t6170 + t6174;
  t6183 = Cos(var1[17]);
  t6200 = t6021*t6077*t6082;
  t6204 = t6119*t6128;
  t6205 = t6200 + t6204;
  t6075 = -1.*t6021;
  t6076 = 1. + t6075;
  t6224 = Sin(var1[3]);
  t6093 = -1.*t6092;
  t6094 = 1. + t6093;
  t6227 = Cos(var1[3]);
  t6235 = t6227*t6082;
  t6236 = -1.*t6224*t6090*t6095;
  t6237 = t6235 + t6236;
  t6226 = t6082*t6224*t6090;
  t6228 = t6227*t6095;
  t6229 = t6226 + t6228;
  t6243 = -1.*t6092*t6077*t6224;
  t6244 = -1.*t6084*t6237;
  t6245 = t6243 + t6244;
  t6187 = -1.*t6183;
  t6195 = 1. + t6187;
  t6247 = -1.*t6119*t6229;
  t6248 = t6021*t6245;
  t6249 = t6247 + t6248;
  t6251 = t6021*t6229;
  t6252 = t6119*t6245;
  t6257 = t6251 + t6252;
  t6281 = t6082*t6224;
  t6282 = t6227*t6090*t6095;
  t6283 = t6281 + t6282;
  t6277 = -1.*t6227*t6082*t6090;
  t6278 = t6224*t6095;
  t6279 = t6277 + t6278;
  t6303 = t6092*t6227*t6077;
  t6304 = -1.*t6084*t6283;
  t6306 = t6303 + t6304;
  t6308 = -1.*t6119*t6279;
  t6309 = t6021*t6306;
  t6310 = t6308 + t6309;
  t6312 = t6021*t6279;
  t6313 = t6119*t6306;
  t6314 = t6312 + t6313;
  p_output1[0]=-0.325*t6076*t6077*t6082 + 0.1575*t6084*t6090 + 0.1575*t6077*t6094*t6095 - 0.2255*(t6084*t6090 - 1.*t6077*t6092*t6095) + 0.325*t6119*t6128 - 0.575*t6131*t6178 - 0.575*t6195*t6205 - 0.0641*(t6178*t6183 + t6131*t6205) - 0.295*(-1.*t6131*t6178 + t6183*t6205) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t6077*t6084*t6224 - 0.325*t6076*t6229 - 0.1575*t6094*t6237 - 0.2255*(-1.*t6077*t6084*t6224 + t6092*t6237) + 0.325*t6119*t6245 - 0.575*t6131*t6249 - 0.575*t6195*t6257 - 0.0641*(t6183*t6249 + t6131*t6257) - 0.295*(-1.*t6131*t6249 + t6183*t6257) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t6077*t6084*t6227 - 0.325*t6076*t6279 - 0.1575*t6094*t6283 - 0.2255*(t6077*t6084*t6227 + t6092*t6283) + 0.325*t6119*t6306 - 0.575*t6131*t6310 - 0.575*t6195*t6314 - 0.0641*(t6183*t6310 + t6131*t6314) - 0.295*(-1.*t6131*t6310 + t6183*t6314) + var1[2] - 1.*var2[2];
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
