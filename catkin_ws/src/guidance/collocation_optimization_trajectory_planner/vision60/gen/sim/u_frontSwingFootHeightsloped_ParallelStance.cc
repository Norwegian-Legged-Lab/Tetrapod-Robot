/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:04:54 GMT+02:00
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
  double t5355;
  double t5406;
  double t5339;
  double t5365;
  double t5408;
  double t5494;
  double t5651;
  double t5678;
  double t5814;
  double t6420;
  double t6527;
  double t5100;
  double t5372;
  double t5438;
  double t5458;
  double t6777;
  double t6780;
  double t6904;
  double t6908;
  double t7194;
  double t7302;
  double t7629;
  double t7635;
  double t7943;
  double t7945;
  double t7947;
  double t8028;
  double t5101;
  double t5216;
  double t5502;
  double t5550;
  double t7287;
  double t7290;
  double t9623;
  double t9679;
  double t9846;
  double t9935;
  double t10258;
  double t10343;
  double t10448;
  double t10452;
  double t10828;
  double t8432;
  double t8441;
  double t9158;
  double t9186;
  double t9315;
  double t9316;
  double t9337;
  double t9583;
  double t9851;
  double t10383;
  double t10835;
  double t10907;
  double t11135;
  double t11286;
  double t11287;
  double t11301;
  double t11328;
  double t11488;
  double t11568;
  double t11601;
  t5355 = Cos(var1[5]);
  t5406 = Sin(var1[3]);
  t5339 = Cos(var1[3]);
  t5365 = Sin(var1[4]);
  t5408 = Sin(var1[5]);
  t5494 = Cos(var1[6]);
  t5651 = t5355*t5406;
  t5678 = t5339*t5365*t5408;
  t5814 = t5651 + t5678;
  t6420 = Cos(var1[4]);
  t6527 = Sin(var1[6]);
  t5100 = Cos(var1[7]);
  t5372 = -1.*t5339*t5355*t5365;
  t5438 = t5406*t5408;
  t5458 = t5372 + t5438;
  t6777 = t5339*t6420*t5494;
  t6780 = -1.*t5814*t6527;
  t6904 = t6777 + t6780;
  t6908 = Sin(var1[7]);
  t7194 = Cos(var1[8]);
  t7302 = t5100*t5458;
  t7629 = t6904*t6908;
  t7635 = t7302 + t7629;
  t7943 = t5100*t6904;
  t7945 = -1.*t5458*t6908;
  t7947 = t7943 + t7945;
  t8028 = Sin(var1[8]);
  t5101 = -1.*t5100;
  t5216 = 1. + t5101;
  t5502 = -1.*t5494;
  t5550 = 1. + t5502;
  t7287 = -1.*t7194;
  t7290 = 1. + t7287;
  t9623 = t5494*t5365;
  t9679 = t6420*t5408*t6527;
  t9846 = t9623 + t9679;
  t9935 = t6420*t5355*t5100;
  t10258 = t9846*t6908;
  t10343 = t9935 + t10258;
  t10448 = t5100*t9846;
  t10452 = -1.*t6420*t5355*t6908;
  t10828 = t10448 + t10452;
  t8432 = -1.*var2[0];
  t8441 = 0.325*t6420*t5355*t5216;
  t9158 = -0.1575*t6420*t5550*t5408;
  t9186 = -0.1575*t5365*t6527;
  t9315 = -1.*t6420*t5494*t5408;
  t9316 = t5365*t6527;
  t9337 = t9315 + t9316;
  t9583 = 0.2255*t9337;
  t9851 = -0.325*t9846*t6908;
  t10383 = 0.075*t7290*t10343;
  t10835 = 0.075*t10828*t8028;
  t10907 = t7194*t10343;
  t11135 = -1.*t10828*t8028;
  t11286 = t10907 + t11135;
  t11287 = 0.355*t11286;
  t11301 = t7194*t10828;
  t11328 = t10343*t8028;
  t11488 = t11301 + t11328;
  t11568 = -0.0641*t11488;
  t11601 = t8432 + var1[0] + t8441 + t9158 + t9186 + t9583 + t9851 + t10383 + t10835 + t11287 + t11568;
  p_output1[0]=0.325*t5216*t5458 + 0.1575*t5550*t5814 - 0.1575*t5339*t6420*t6527 + 0.2255*(t5494*t5814 + t5339*t6420*t6527) - 0.325*t6904*t6908 + 0.075*t7290*t7635 + 0.075*t7947*t8028 - 0.0641*(t7194*t7947 + t7635*t8028) + 0.355*(t7194*t7635 - 1.*t7947*t8028) + var1[2] - 0.5*t11601*var3[0]*(1. + Tanh(t11601*var4[0]));
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

#include "u_frontSwingFootHeightsloped_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeightsloped_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
