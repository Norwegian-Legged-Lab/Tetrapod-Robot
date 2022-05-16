/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:44 GMT+02:00
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
  double t1249;
  double t1259;
  double t1301;
  double t1317;
  double t1359;
  double t1638;
  double t1255;
  double t21372;
  double t5083;
  double t14508;
  double t28744;
  double t32322;
  double t32476;
  double t32576;
  double t32605;
  double t32742;
  double t32750;
  double t32847;
  double t34660;
  double t35023;
  double t35045;
  double t35059;
  double t1356;
  double t3515;
  double t35662;
  double t19069;
  double t20340;
  double t35811;
  double t35783;
  double t35813;
  double t35814;
  double t35945;
  double t35978;
  double t35985;
  double t31104;
  double t31764;
  double t32633;
  double t32735;
  double t36031;
  double t36033;
  double t36034;
  double t36037;
  double t36040;
  double t36256;
  double t36275;
  double t36294;
  double t36296;
  double t36313;
  double t36332;
  double t36341;
  double t36349;
  double t36370;
  double t36371;
  double t36548;
  double t36555;
  double t36556;
  double t36558;
  double t36563;
  double t36569;
  double t36577;
  double t36579;
  double t36580;
  t1249 = Cos(var1[4]);
  t1259 = Cos(var1[9]);
  t1301 = -1.*t1259;
  t1317 = 1. + t1301;
  t1359 = Sin(var1[9]);
  t1638 = 0.15121*t1359;
  t1255 = Cos(var1[5]);
  t21372 = Sin(var1[5]);
  t5083 = Sin(var1[10]);
  t14508 = Sin(var1[4]);
  t28744 = Cos(var1[10]);
  t32322 = t1259*t1249*t1255;
  t32476 = -1.*t1249*t1359*t21372;
  t32576 = t32322 + t32476;
  t32605 = Cos(var1[11]);
  t32742 = t5083*t14508;
  t32750 = t28744*t32576;
  t32847 = t32742 + t32750;
  t34660 = Sin(var1[11]);
  t35023 = t28744*t14508;
  t35045 = -1.*t5083*t32576;
  t35059 = t35023 + t35045;
  t1356 = -0.15121*t1317;
  t3515 = t1356 + t1638;
  t35662 = Sin(var1[3]);
  t19069 = 0.15121*t1317;
  t20340 = t19069 + t1638;
  t35811 = Cos(var1[3]);
  t35783 = t1255*t35662*t14508;
  t35813 = t35811*t21372;
  t35814 = t35783 + t35813;
  t35945 = t35811*t1255;
  t35978 = -1.*t35662*t14508*t21372;
  t35985 = t35945 + t35978;
  t31104 = -1.*t28744;
  t31764 = 1. + t31104;
  t32633 = -1.*t32605;
  t32735 = 1. + t32633;
  t36031 = t1259*t35814;
  t36033 = t1359*t35985;
  t36034 = t36031 + t36033;
  t36037 = -1.*t1249*t5083*t35662;
  t36040 = t28744*t36034;
  t36256 = t36037 + t36040;
  t36275 = -1.*t28744*t1249*t35662;
  t36294 = -1.*t5083*t36034;
  t36296 = t36275 + t36294;
  t36313 = -1.*t35811*t1255*t14508;
  t36332 = t35662*t21372;
  t36341 = t36313 + t36332;
  t36349 = t1255*t35662;
  t36370 = t35811*t14508*t21372;
  t36371 = t36349 + t36370;
  t36548 = t1259*t36341;
  t36555 = t1359*t36371;
  t36556 = t36548 + t36555;
  t36558 = t35811*t1249*t5083;
  t36563 = t28744*t36556;
  t36569 = t36558 + t36563;
  t36577 = t28744*t35811*t1249;
  t36579 = -1.*t5083*t36556;
  t36580 = t36577 + t36579;
  p_output1[0]=-1.*t1249*t20340*t21372 + 0.15121*(-1.*t1249*t1255*t1359 - 1.*t1249*t1259*t21372) - 0.28121*t31764*t32576 - 0.50321*t32735*t32847 - 0.50321*t34660*t35059 - 0.23321*(t32605*t32847 - 1.*t34660*t35059) + t1249*t1255*t3515 + 0.28121*t14508*t5083 + var1[0] - 1.*var2[0];
  p_output1[1]=t3515*t35814 + t20340*t35985 + 0.15121*(-1.*t1359*t35814 + t1259*t35985) - 0.28121*t31764*t36034 - 0.50321*t32735*t36256 - 0.50321*t34660*t36296 - 0.23321*(t32605*t36256 - 1.*t34660*t36296) - 0.28121*t1249*t35662*t5083 + var1[1] - 1.*var2[1];
  p_output1[2]=t3515*t36341 + t20340*t36371 + 0.15121*(-1.*t1359*t36341 + t1259*t36371) - 0.28121*t31764*t36556 - 0.50321*t32735*t36569 - 0.50321*t34660*t36580 - 0.23321*(t32605*t36569 - 1.*t34660*t36580) + 0.28121*t1249*t35811*t5083 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
