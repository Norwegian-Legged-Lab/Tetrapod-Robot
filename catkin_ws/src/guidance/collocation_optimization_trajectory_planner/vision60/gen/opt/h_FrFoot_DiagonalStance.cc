/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:21 GMT+02:00
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
  double t1978;
  double t3395;
  double t3494;
  double t3980;
  double t4114;
  double t2381;
  double t4276;
  double t1971;
  double t4277;
  double t4285;
  double t4288;
  double t4317;
  double t4323;
  double t4329;
  double t4348;
  double t4420;
  double t4663;
  double t4673;
  double t4778;
  double t1972;
  double t1973;
  double t5343;
  double t4097;
  double t4103;
  double t5410;
  double t5814;
  double t5816;
  double t5821;
  double t5397;
  double t5415;
  double t5783;
  double t5974;
  double t6099;
  double t6132;
  double t4505;
  double t4507;
  double t6249;
  double t6261;
  double t6266;
  double t6284;
  double t6288;
  double t6349;
  double t6639;
  double t6662;
  double t6697;
  double t6632;
  double t6633;
  double t6637;
  double t6850;
  double t6883;
  double t6888;
  double t6929;
  double t6934;
  double t6945;
  double t6981;
  double t6986;
  double t7012;
  t1978 = Cos(var1[4]);
  t3395 = Sin(var1[12]);
  t3494 = Sin(var1[4]);
  t3980 = Cos(var1[12]);
  t4114 = Sin(var1[5]);
  t2381 = Cos(var1[5]);
  t4276 = Sin(var1[13]);
  t1971 = Cos(var1[13]);
  t4277 = t3980*t3494;
  t4285 = t1978*t3395*t4114;
  t4288 = t4277 + t4285;
  t4317 = Sin(var1[14]);
  t4323 = -1.*t1978*t2381*t4276;
  t4329 = t1971*t4288;
  t4348 = t4323 + t4329;
  t4420 = Cos(var1[14]);
  t4663 = t1971*t1978*t2381;
  t4673 = t4276*t4288;
  t4778 = t4663 + t4673;
  t1972 = -1.*t1971;
  t1973 = 1. + t1972;
  t5343 = Sin(var1[3]);
  t4097 = -1.*t3980;
  t4103 = 1. + t4097;
  t5410 = Cos(var1[3]);
  t5814 = t5410*t2381;
  t5816 = -1.*t5343*t3494*t4114;
  t5821 = t5814 + t5816;
  t5397 = t2381*t5343*t3494;
  t5415 = t5410*t4114;
  t5783 = t5397 + t5415;
  t5974 = -1.*t3980*t1978*t5343;
  t6099 = -1.*t3395*t5821;
  t6132 = t5974 + t6099;
  t4505 = -1.*t4420;
  t4507 = 1. + t4505;
  t6249 = -1.*t4276*t5783;
  t6261 = t1971*t6132;
  t6266 = t6249 + t6261;
  t6284 = t1971*t5783;
  t6288 = t4276*t6132;
  t6349 = t6284 + t6288;
  t6639 = t2381*t5343;
  t6662 = t5410*t3494*t4114;
  t6697 = t6639 + t6662;
  t6632 = -1.*t5410*t2381*t3494;
  t6633 = t5343*t4114;
  t6637 = t6632 + t6633;
  t6850 = t3980*t5410*t1978;
  t6883 = -1.*t3395*t6697;
  t6888 = t6850 + t6883;
  t6929 = -1.*t4276*t6637;
  t6934 = t1971*t6888;
  t6945 = t6929 + t6934;
  t6981 = t1971*t6637;
  t6986 = t4276*t6888;
  t7012 = t6981 + t6986;
  p_output1[0]=0.325*t1973*t1978*t2381 + 0.1575*t3395*t3494 + 0.1575*t1978*t4103*t4114 - 0.2255*(t3395*t3494 - 1.*t1978*t3980*t4114) - 0.325*t4276*t4288 + 0.075*t4317*t4348 + 0.075*t4507*t4778 - 0.0641*(t4348*t4420 + t4317*t4778) + 0.355*(-1.*t4317*t4348 + t4420*t4778) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t1978*t3395*t5343 + 0.325*t1973*t5783 - 0.1575*t4103*t5821 - 0.2255*(-1.*t1978*t3395*t5343 + t3980*t5821) - 0.325*t4276*t6132 + 0.075*t4317*t6266 + 0.075*t4507*t6349 - 0.0641*(t4420*t6266 + t4317*t6349) + 0.355*(-1.*t4317*t6266 + t4420*t6349) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t1978*t3395*t5410 + 0.325*t1973*t6637 - 0.1575*t4103*t6697 - 0.2255*(t1978*t3395*t5410 + t3980*t6697) - 0.325*t4276*t6888 + 0.075*t4317*t6945 + 0.075*t4507*t7012 - 0.0641*(t4420*t6945 + t4317*t7012) + 0.355*(-1.*t4317*t6945 + t4420*t7012) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
