/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:33 GMT+02:00
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
  double t327;
  double t1972;
  double t2124;
  double t2437;
  double t2485;
  double t2949;
  double t1583;
  double t5045;
  double t4361;
  double t4385;
  double t7234;
  double t7413;
  double t7593;
  double t7693;
  double t7956;
  double t8066;
  double t8161;
  double t8375;
  double t8550;
  double t8615;
  double t8852;
  double t8979;
  double t3302;
  double t3755;
  double t10282;
  double t4776;
  double t4844;
  double t11076;
  double t10555;
  double t11371;
  double t12214;
  double t14060;
  double t14261;
  double t14299;
  double t7318;
  double t7344;
  double t7967;
  double t8026;
  double t14949;
  double t14951;
  double t14981;
  double t15213;
  double t15230;
  double t15239;
  double t15325;
  double t15341;
  double t15369;
  double t15598;
  double t15607;
  double t15693;
  double t15705;
  double t15717;
  double t15721;
  double t25540;
  double t25555;
  double t25788;
  double t40743;
  double t41010;
  double t41011;
  double t41021;
  double t41031;
  double t41036;
  t327 = Cos(var1[4]);
  t1972 = Cos(var1[15]);
  t2124 = -1.*t1972;
  t2437 = 1. + t2124;
  t2485 = -0.15121*t2437;
  t2949 = Sin(var1[15]);
  t1583 = Cos(var1[5]);
  t5045 = Sin(var1[5]);
  t4361 = Sin(var1[16]);
  t4385 = Sin(var1[4]);
  t7234 = Cos(var1[16]);
  t7413 = t1972*t327*t1583;
  t7593 = -1.*t327*t2949*t5045;
  t7693 = t7413 + t7593;
  t7956 = Cos(var1[17]);
  t8066 = t4361*t4385;
  t8161 = t7234*t7693;
  t8375 = t8066 + t8161;
  t8550 = Sin(var1[17]);
  t8615 = t7234*t4385;
  t8852 = -1.*t4361*t7693;
  t8979 = t8615 + t8852;
  t3302 = -0.15121*t2949;
  t3755 = t2485 + t3302;
  t10282 = Sin(var1[3]);
  t4776 = 0.15121*t2949;
  t4844 = t2485 + t4776;
  t11076 = Cos(var1[3]);
  t10555 = t1583*t10282*t4385;
  t11371 = t11076*t5045;
  t12214 = t10555 + t11371;
  t14060 = t11076*t1583;
  t14261 = -1.*t10282*t4385*t5045;
  t14299 = t14060 + t14261;
  t7318 = -1.*t7234;
  t7344 = 1. + t7318;
  t7967 = -1.*t7956;
  t8026 = 1. + t7967;
  t14949 = t1972*t12214;
  t14951 = t2949*t14299;
  t14981 = t14949 + t14951;
  t15213 = -1.*t327*t4361*t10282;
  t15230 = t7234*t14981;
  t15239 = t15213 + t15230;
  t15325 = -1.*t7234*t327*t10282;
  t15341 = -1.*t4361*t14981;
  t15369 = t15325 + t15341;
  t15598 = -1.*t11076*t1583*t4385;
  t15607 = t10282*t5045;
  t15693 = t15598 + t15607;
  t15705 = t1583*t10282;
  t15717 = t11076*t4385*t5045;
  t15721 = t15705 + t15717;
  t25540 = t1972*t15693;
  t25555 = t2949*t15721;
  t25788 = t25540 + t25555;
  t40743 = t11076*t327*t4361;
  t41010 = t7234*t25788;
  t41011 = t40743 + t41010;
  t41021 = t7234*t11076*t327;
  t41031 = -1.*t4361*t25788;
  t41036 = t41021 + t41031;
  p_output1[0]=t1583*t327*t3755 + 0.28121*t4361*t4385 - 1.*t327*t4844*t5045 - 0.15121*(-1.*t1583*t2949*t327 - 1.*t1972*t327*t5045) - 0.28121*t7344*t7693 - 0.50321*t8026*t8375 - 0.50321*t8550*t8979 - 0.23321*(t7956*t8375 - 1.*t8550*t8979) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.15121*(t14299*t1972 - 1.*t12214*t2949) + t12214*t3755 - 0.28121*t10282*t327*t4361 + t14299*t4844 - 0.28121*t14981*t7344 - 0.50321*t15239*t8026 - 0.50321*t15369*t8550 - 0.23321*(t15239*t7956 - 1.*t15369*t8550) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.15121*(t15721*t1972 - 1.*t15693*t2949) + t15693*t3755 + 0.28121*t11076*t327*t4361 + t15721*t4844 - 0.28121*t25788*t7344 - 0.50321*t41011*t8026 - 0.50321*t41036*t8550 - 0.23321*(t41011*t7956 - 1.*t41036*t8550) + var1[2] - 1.*var2[2];
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

namespace SymFunction
{

void h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
