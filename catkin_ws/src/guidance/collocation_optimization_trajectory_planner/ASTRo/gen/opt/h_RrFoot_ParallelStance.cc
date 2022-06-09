/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:54:27 GMT+02:00
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
  double t14547;
  double t15390;
  double t15495;
  double t16409;
  double t16791;
  double t17011;
  double t15142;
  double t17364;
  double t17167;
  double t17253;
  double t17459;
  double t17605;
  double t17661;
  double t17664;
  double t17666;
  double t17669;
  double t17670;
  double t17671;
  double t17685;
  double t17711;
  double t17720;
  double t17721;
  double t17056;
  double t17091;
  double t17763;
  double t17349;
  double t17356;
  double t17805;
  double t17785;
  double t17806;
  double t17810;
  double t17999;
  double t18077;
  double t18112;
  double t17487;
  double t17522;
  double t17667;
  double t17668;
  double t18329;
  double t18333;
  double t18341;
  double t18343;
  double t18344;
  double t18345;
  double t18347;
  double t18348;
  double t18353;
  double t18370;
  double t18371;
  double t18372;
  double t18374;
  double t18376;
  double t18377;
  double t18546;
  double t18547;
  double t18549;
  double t18555;
  double t18556;
  double t18557;
  double t18562;
  double t18563;
  double t18564;
  t14547 = Cos(var1[4]);
  t15390 = Cos(var1[15]);
  t15495 = -1.*t15390;
  t16409 = 1. + t15495;
  t16791 = -0.15121*t16409;
  t17011 = Sin(var1[15]);
  t15142 = Cos(var1[5]);
  t17364 = Sin(var1[5]);
  t17167 = Sin(var1[16]);
  t17253 = Sin(var1[4]);
  t17459 = Cos(var1[16]);
  t17605 = t15390*t14547*t15142;
  t17661 = -1.*t14547*t17011*t17364;
  t17664 = t17605 + t17661;
  t17666 = Cos(var1[17]);
  t17669 = t17167*t17253;
  t17670 = t17459*t17664;
  t17671 = t17669 + t17670;
  t17685 = Sin(var1[17]);
  t17711 = t17459*t17253;
  t17720 = -1.*t17167*t17664;
  t17721 = t17711 + t17720;
  t17056 = -0.15121*t17011;
  t17091 = t16791 + t17056;
  t17763 = Sin(var1[3]);
  t17349 = 0.15121*t17011;
  t17356 = t16791 + t17349;
  t17805 = Cos(var1[3]);
  t17785 = t15142*t17763*t17253;
  t17806 = t17805*t17364;
  t17810 = t17785 + t17806;
  t17999 = t17805*t15142;
  t18077 = -1.*t17763*t17253*t17364;
  t18112 = t17999 + t18077;
  t17487 = -1.*t17459;
  t17522 = 1. + t17487;
  t17667 = -1.*t17666;
  t17668 = 1. + t17667;
  t18329 = t15390*t17810;
  t18333 = t17011*t18112;
  t18341 = t18329 + t18333;
  t18343 = -1.*t14547*t17167*t17763;
  t18344 = t17459*t18341;
  t18345 = t18343 + t18344;
  t18347 = -1.*t17459*t14547*t17763;
  t18348 = -1.*t17167*t18341;
  t18353 = t18347 + t18348;
  t18370 = -1.*t17805*t15142*t17253;
  t18371 = t17763*t17364;
  t18372 = t18370 + t18371;
  t18374 = t15142*t17763;
  t18376 = t17805*t17253*t17364;
  t18377 = t18374 + t18376;
  t18546 = t15390*t18372;
  t18547 = t17011*t18377;
  t18549 = t18546 + t18547;
  t18555 = t17805*t14547*t17167;
  t18556 = t17459*t18549;
  t18557 = t18555 + t18556;
  t18562 = t17459*t17805*t14547;
  t18563 = -1.*t17167*t18549;
  t18564 = t18562 + t18563;
  p_output1[0]=t14547*t15142*t17091 + 0.28121*t17167*t17253 - 1.*t14547*t17356*t17364 - 0.15121*(-1.*t14547*t15142*t17011 - 1.*t14547*t15390*t17364) - 0.28121*t17522*t17664 - 0.50321*t17668*t17671 - 0.50321*t17685*t17721 - 0.19821*(t17666*t17671 - 1.*t17685*t17721) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t14547*t17167*t17763 + t17091*t17810 + t17356*t18112 - 0.15121*(-1.*t17011*t17810 + t15390*t18112) - 0.28121*t17522*t18341 - 0.50321*t17668*t18345 - 0.50321*t17685*t18353 - 0.19821*(t17666*t18345 - 1.*t17685*t18353) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t14547*t17167*t17805 + t17091*t18372 + t17356*t18377 - 0.15121*(-1.*t17011*t18372 + t15390*t18377) - 0.28121*t17522*t18549 - 0.50321*t17668*t18557 - 0.50321*t17685*t18564 - 0.19821*(t17666*t18557 - 1.*t17685*t18564) + var1[2] - 1.*var2[2];
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

#include "h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
