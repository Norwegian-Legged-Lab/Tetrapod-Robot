/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:24 GMT+02:00
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
  double t3463;
  double t3486;
  double t3499;
  double t3509;
  double t3626;
  double t3477;
  double t3928;
  double t3167;
  double t4895;
  double t4937;
  double t5046;
  double t5440;
  double t5831;
  double t5866;
  double t7259;
  double t7318;
  double t7327;
  double t7328;
  double t7332;
  double t3168;
  double t3381;
  double t7396;
  double t3511;
  double t3577;
  double t7408;
  double t7466;
  double t7470;
  double t7471;
  double t7404;
  double t7409;
  double t7458;
  double t7496;
  double t7497;
  double t7498;
  double t7321;
  double t7326;
  double t7500;
  double t7501;
  double t7503;
  double t7506;
  double t7507;
  double t7516;
  double t7537;
  double t7538;
  double t7539;
  double t7533;
  double t7534;
  double t7535;
  double t7545;
  double t7550;
  double t7555;
  double t7557;
  double t7558;
  double t7559;
  double t7561;
  double t7562;
  double t7563;
  t3463 = Cos(var1[4]);
  t3486 = Sin(var1[9]);
  t3499 = Sin(var1[4]);
  t3509 = Cos(var1[9]);
  t3626 = Sin(var1[5]);
  t3477 = Cos(var1[5]);
  t3928 = Sin(var1[10]);
  t3167 = Cos(var1[10]);
  t4895 = t3509*t3499;
  t4937 = t3463*t3486*t3626;
  t5046 = t4895 + t4937;
  t5440 = Sin(var1[11]);
  t5831 = -1.*t3463*t3477*t3928;
  t5866 = t3167*t5046;
  t7259 = t5831 + t5866;
  t7318 = Cos(var1[11]);
  t7327 = t3167*t3463*t3477;
  t7328 = t3928*t5046;
  t7332 = t7327 + t7328;
  t3168 = -1.*t3167;
  t3381 = 1. + t3168;
  t7396 = Sin(var1[3]);
  t3511 = -1.*t3509;
  t3577 = 1. + t3511;
  t7408 = Cos(var1[3]);
  t7466 = t7408*t3477;
  t7470 = -1.*t7396*t3499*t3626;
  t7471 = t7466 + t7470;
  t7404 = t3477*t7396*t3499;
  t7409 = t7408*t3626;
  t7458 = t7404 + t7409;
  t7496 = -1.*t3509*t3463*t7396;
  t7497 = -1.*t3486*t7471;
  t7498 = t7496 + t7497;
  t7321 = -1.*t7318;
  t7326 = 1. + t7321;
  t7500 = -1.*t3928*t7458;
  t7501 = t3167*t7498;
  t7503 = t7500 + t7501;
  t7506 = t3167*t7458;
  t7507 = t3928*t7498;
  t7516 = t7506 + t7507;
  t7537 = t3477*t7396;
  t7538 = t7408*t3499*t3626;
  t7539 = t7537 + t7538;
  t7533 = -1.*t7408*t3477*t3499;
  t7534 = t7396*t3626;
  t7535 = t7533 + t7534;
  t7545 = t3509*t7408*t3463;
  t7550 = -1.*t3486*t7539;
  t7555 = t7545 + t7550;
  t7557 = -1.*t3928*t7535;
  t7558 = t3167*t7555;
  t7559 = t7557 + t7558;
  t7561 = t3167*t7535;
  t7562 = t3928*t7555;
  t7563 = t7561 + t7562;
  p_output1[0]=-0.325*t3381*t3463*t3477 - 0.1575*t3486*t3499 - 0.1575*t3463*t3577*t3626 + 0.2255*(t3486*t3499 - 1.*t3463*t3509*t3626) + 0.325*t3928*t5046 - 0.575*t5440*t7259 - 0.575*t7326*t7332 - 0.0641*(t7259*t7318 + t5440*t7332) - 0.295*(-1.*t5440*t7259 + t7318*t7332) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t3463*t3486*t7396 - 0.325*t3381*t7458 + 0.1575*t3577*t7471 + 0.2255*(-1.*t3463*t3486*t7396 + t3509*t7471) + 0.325*t3928*t7498 - 0.575*t5440*t7503 - 0.575*t7326*t7516 - 0.0641*(t7318*t7503 + t5440*t7516) - 0.295*(-1.*t5440*t7503 + t7318*t7516) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t3463*t3486*t7408 - 0.325*t3381*t7535 + 0.1575*t3577*t7539 + 0.2255*(t3463*t3486*t7408 + t3509*t7539) + 0.325*t3928*t7555 - 0.575*t5440*t7559 - 0.575*t7326*t7563 - 0.0641*(t7318*t7559 + t5440*t7563) - 0.295*(-1.*t5440*t7559 + t7318*t7563) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
