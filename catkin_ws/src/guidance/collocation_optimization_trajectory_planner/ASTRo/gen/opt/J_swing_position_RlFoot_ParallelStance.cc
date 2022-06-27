/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:54 GMT+02:00
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
  double t12662;
  double t12755;
  double t12764;
  double t12929;
  double t12939;
  double t12940;
  double t13040;
  double t13000;
  double t13011;
  double t13182;
  double t13016;
  double t13380;
  double t13447;
  double t13572;
  double t13676;
  double t14147;
  double t12037;
  double t12431;
  double t15105;
  double t15254;
  double t15262;
  double t15283;
  double t15300;
  double t15406;
  double t15452;
  double t15470;
  double t15479;
  double t15480;
  double t15481;
  double t15502;
  double t12934;
  double t12968;
  double t13508;
  double t13530;
  double t15114;
  double t15198;
  double t15354;
  double t15389;
  double t15590;
  double t15626;
  double t15633;
  double t15654;
  double t15660;
  double t15662;
  double t15678;
  double t15679;
  double t15686;
  double t15711;
  double t15713;
  double t15721;
  double t15723;
  double t15757;
  double t15758;
  double t15789;
  double t15794;
  double t15795;
  double t15895;
  double t15915;
  double t15948;
  double t15954;
  double t16037;
  double t16054;
  double t15804;
  double t16171;
  double t16172;
  double t16175;
  double t16181;
  double t16182;
  double t16192;
  double t16201;
  double t16208;
  double t16209;
  double t16222;
  double t16244;
  double t16249;
  t12662 = Sin(var1[3]);
  t12755 = Cos(var1[9]);
  t12764 = -1.*t12755;
  t12929 = 1. + t12764;
  t12939 = Sin(var1[9]);
  t12940 = 0.15121*t12939;
  t13040 = Cos(var1[3]);
  t13000 = Cos(var1[5]);
  t13011 = Sin(var1[4]);
  t13182 = Sin(var1[5]);
  t13016 = t13000*t12662*t13011;
  t13380 = t13040*t13182;
  t13447 = t13016 + t13380;
  t13572 = t13040*t13000;
  t13676 = -1.*t12662*t13011*t13182;
  t14147 = t13572 + t13676;
  t12037 = Cos(var1[4]);
  t12431 = Sin(var1[10]);
  t15105 = Cos(var1[10]);
  t15254 = t12755*t13447;
  t15262 = t12939*t14147;
  t15283 = t15254 + t15262;
  t15300 = Cos(var1[11]);
  t15406 = -1.*t12037*t12431*t12662;
  t15452 = t15105*t15283;
  t15470 = t15406 + t15452;
  t15479 = Sin(var1[11]);
  t15480 = -1.*t15105*t12037*t12662;
  t15481 = -1.*t12431*t15283;
  t15502 = t15480 + t15481;
  t12934 = -0.15121*t12929;
  t12968 = t12934 + t12940;
  t13508 = 0.15121*t12929;
  t13530 = t13508 + t12940;
  t15114 = -1.*t15105;
  t15198 = 1. + t15114;
  t15354 = -1.*t15300;
  t15389 = 1. + t15354;
  t15590 = -1.*t12755*t13040*t12037*t13000;
  t15626 = t13040*t12037*t12939*t13182;
  t15633 = t15590 + t15626;
  t15654 = -1.*t13040*t12431*t13011;
  t15660 = t15105*t15633;
  t15662 = t15654 + t15660;
  t15678 = -1.*t15105*t13040*t13011;
  t15679 = -1.*t12431*t15633;
  t15686 = t15678 + t15679;
  t15711 = t13040*t13000*t13011;
  t15713 = -1.*t12662*t13182;
  t15721 = t15711 + t15713;
  t15723 = t13000*t12662;
  t15757 = t13040*t13011*t13182;
  t15758 = t15723 + t15757;
  t15789 = t12939*t15721;
  t15794 = t12755*t15758;
  t15795 = t15789 + t15794;
  t15895 = 0.15121*t12755;
  t15915 = -1.*t13040*t13000*t13011;
  t15948 = t12662*t13182;
  t15954 = t15915 + t15948;
  t16037 = -1.*t12939*t15954;
  t16054 = t16037 + t15794;
  t15804 = -1.*t12939*t15758;
  t16171 = t12755*t15954;
  t16172 = t12939*t15758;
  t16175 = t16171 + t16172;
  t16181 = -1.*t13040*t12037*t12431;
  t16182 = -1.*t15105*t16175;
  t16192 = t16181 + t16182;
  t16201 = t15105*t13040*t12037;
  t16208 = -1.*t12431*t16175;
  t16209 = t16201 + t16208;
  t16222 = t13040*t12037*t12431;
  t16244 = t15105*t16175;
  t16249 = t16222 + t16244;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t12037*t12431*t12662 + t12968*t13447 + t13530*t14147 + 0.15121*(-1.*t12939*t13447 + t12755*t14147) - 0.28121*t15198*t15283 - 0.50321*t15389*t15470 - 0.50321*t15479*t15502 - 0.19821*(t15300*t15470 - 1.*t15479*t15502);
  p_output1[2]=-1.*t12037*t12968*t13000*t13040 - 0.28121*t12431*t13011*t13040 + 0.15121*(t12037*t12939*t13000*t13040 + t12037*t12755*t13040*t13182) + t12037*t13040*t13182*t13530 - 0.28121*t15198*t15633 - 0.50321*t15389*t15662 - 0.50321*t15479*t15686 - 0.19821*(t15300*t15662 - 1.*t15479*t15686);
  p_output1[3]=t13530*t15721 + t12968*t15758 - 0.28121*t15198*t15795 - 0.50321*t15105*t15389*t15795 + 0.50321*t12431*t15479*t15795 - 0.19821*(t15105*t15300*t15795 + t12431*t15479*t15795) + 0.15121*(t12755*t15721 + t15804);
  p_output1[4]=t15758*(t12940 + t15895) + (-0.15121*t12939 + t15895)*t15954 + 0.15121*(t15804 - 1.*t12755*t15954) - 0.28121*t15198*t16054 - 0.50321*t15105*t15389*t16054 + 0.50321*t12431*t15479*t16054 - 0.19821*(t15105*t15300*t16054 + t12431*t15479*t16054);
  p_output1[5]=0.28121*t12037*t13040*t15105 - 0.28121*t12431*t16175 - 0.50321*t15479*t16192 - 0.50321*t15389*t16209 - 0.19821*(-1.*t15479*t16192 + t15300*t16209);
  p_output1[6]=-0.50321*t15300*t16209 - 0.50321*t15479*t16249 - 0.19821*(-1.*t15300*t16209 - 1.*t15479*t16249);
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

#include "J_swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
