/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:02 GMT+02:00
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
  double t4197;
  double t50;
  double t2810;
  double t4201;
  double t24239;
  double t24337;
  double t24377;
  double t19580;
  double t23405;
  double t24380;
  double t21970;
  double t24418;
  double t4535;
  double t3333;
  double t4229;
  double t4362;
  double t24378;
  double t24449;
  double t24677;
  double t25326;
  double t24891;
  double t24972;
  double t25009;
  double t25262;
  double t25092;
  double t25174;
  double t25178;
  double t25210;
  double t25211;
  double t25222;
  double t25273;
  double t25284;
  double t25304;
  double t25472;
  double t25488;
  double t25498;
  double t25502;
  double t25503;
  double t25504;
  double t25509;
  double t25510;
  double t25533;
  double t25640;
  double t25643;
  double t25652;
  double t25201;
  double t25223;
  double t25236;
  double t25856;
  double t25868;
  double t25874;
  double t25883;
  double t25888;
  double t25889;
  double t25894;
  double t25895;
  double t25896;
  double t25919;
  double t25920;
  double t25921;
  double t26305;
  double t26306;
  double t26337;
  double t26347;
  double t25875;
  double t25876;
  double t26329;
  double t26334;
  double t26381;
  double t26383;
  double t26385;
  double t26390;
  double t26393;
  double t26404;
  double t26405;
  double t26336;
  double t26361;
  double t26375;
  double t26392;
  double t26407;
  double t26410;
  double t26416;
  double t26418;
  double t26422;
  double t5832;
  double t24885;
  double t24888;
  double t26377;
  double t26431;
  double t26448;
  double t26458;
  double t26470;
  double t26607;
  double t26741;
  double t26778;
  t4197 = Cos(var1[16]);
  t50 = Cos(var1[17]);
  t2810 = Sin(var1[16]);
  t4201 = Sin(var1[17]);
  t24239 = -1.*t4197*t50;
  t24337 = -1.*t2810*t4201;
  t24377 = t24239 + t24337;
  t19580 = Cos(var1[4]);
  t23405 = Cos(var1[5]);
  t24380 = Sin(var1[15]);
  t21970 = Cos(var1[15]);
  t24418 = Sin(var1[5]);
  t4535 = Sin(var1[4]);
  t3333 = -1.*t50*t2810;
  t4229 = t4197*t4201;
  t4362 = t3333 + t4229;
  t24378 = t21970*t23405*t24377;
  t24449 = -1.*t24380*t24377*t24418;
  t24677 = t24378 + t24449;
  t25326 = Sin(var1[3]);
  t24891 = t23405*t24380;
  t24972 = t21970*t24418;
  t25009 = t24891 + t24972;
  t25262 = Cos(var1[3]);
  t25092 = t4197*t50;
  t25174 = t2810*t4201;
  t25178 = t25092 + t25174;
  t25210 = t21970*t23405*t4362;
  t25211 = -1.*t24380*t4362*t24418;
  t25222 = t25210 + t25211;
  t25273 = t23405*t24380*t24377;
  t25284 = t21970*t24377*t24418;
  t25304 = t25273 + t25284;
  t25472 = t19580*t4362;
  t25488 = -1.*t4535*t24677;
  t25498 = t25472 + t25488;
  t25502 = -1.*t21970*t23405;
  t25503 = t24380*t24418;
  t25504 = t25502 + t25503;
  t25509 = t23405*t24380*t4362;
  t25510 = t21970*t4362*t24418;
  t25533 = t25509 + t25510;
  t25640 = t19580*t25178;
  t25643 = -1.*t4535*t25222;
  t25652 = t25640 + t25643;
  t25201 = t25178*t4535;
  t25223 = t19580*t25222;
  t25236 = t25201 + t25223;
  t25856 = -1.*t21970;
  t25868 = 1. + t25856;
  t25874 = -0.15121*t25868;
  t25883 = -1.*t4197;
  t25888 = 1. + t25883;
  t25889 = -0.28121*t25888;
  t25894 = -1.*t50;
  t25895 = 1. + t25894;
  t25896 = -0.50321*t25895;
  t25919 = -0.23321*t50;
  t25920 = t25896 + t25919;
  t25921 = t4197*t25920;
  t26305 = 0.27*t2810*t4201;
  t26306 = t25889 + t25921 + t26305;
  t26337 = t21970*t26306;
  t26347 = t25874 + t26337;
  t25875 = -0.15121*t21970;
  t25876 = 0.15121*t24380;
  t26329 = t24380*t26306;
  t26334 = t25874 + t25875 + t25876 + t26329;
  t26381 = 0.28121*t2810;
  t26383 = t25920*t2810;
  t26385 = -0.27*t4197*t4201;
  t26390 = t26381 + t26383 + t26385;
  t26393 = t23405*t26347;
  t26404 = -1.*t26334*t24418;
  t26405 = t26393 + t26404;
  t26336 = t23405*t26334;
  t26361 = t26347*t24418;
  t26375 = t26336 + t26361;
  t26392 = t26390*t4535;
  t26407 = t19580*t26405;
  t26410 = t26392 + t26407;
  t26416 = t19580*t26390;
  t26418 = -1.*t4535*t26405;
  t26422 = t26416 + t26418;
  t5832 = t4362*t4535;
  t24885 = t19580*t24677;
  t24888 = t5832 + t24885;
  t26377 = -1.*t25504*t26375;
  t26431 = t25533*t26375;
  t26448 = -1.*t25533*t26375;
  t26458 = t25304*t26375;
  t26470 = t25504*t26375;
  t26607 = -1.*t25304*t26375;
  t26741 = -1.*t26390*t25178;
  t26778 = t26390*t4362;
  p_output1[0]=t24888;
  p_output1[1]=t19580*t25009;
  p_output1[2]=t25236;
  p_output1[3]=t25262*t25304 - 1.*t25326*t25498;
  p_output1[4]=t25262*t25504 + t25009*t25326*t4535;
  p_output1[5]=t25262*t25533 - 1.*t25326*t25652;
  p_output1[6]=t25304*t25326 + t25262*t25498;
  p_output1[7]=t25326*t25504 - 1.*t25009*t25262*t4535;
  p_output1[8]=t25326*t25533 + t25262*t25652;
  p_output1[9]=t19580*t25009*(t25236*t26410 + t25652*t26422 + t26431) + t25236*(t26377 - 1.*t19580*t25009*t26410 + t25009*t26422*t4535);
  p_output1[10]=t24888*(-1.*t25236*t26410 - 1.*t25652*t26422 + t26448) + t25236*(t24888*t26410 + t25498*t26422 + t26458);
  p_output1[11]=t19580*t25009*(-1.*t24888*t26410 - 1.*t25498*t26422 + t26607) + t24888*(t19580*t25009*t26410 + t26470 - 1.*t25009*t26422*t4535);
  p_output1[12]=t25533*(t26377 - 1.*t25009*t26405) + t25504*(t25178*t26390 + t25222*t26405 + t26431);
  p_output1[13]=t25304*(-1.*t25222*t26405 + t26448 + t26741) + t25533*(t24677*t26405 + t26458 + t26778);
  p_output1[14]=t25304*(t25009*t26405 + t26470) + t25504*(-1.*t24677*t26405 + t26607 - 1.*t26390*t4362);
  p_output1[15]=t25178*(t21970*t26334 - 1.*t24380*t26347);
  p_output1[16]=t25178*(t24377*t24380*t26334 + t21970*t24377*t26347 + t26778) + t4362*(t26741 - 1.*t24380*t26334*t4362 - 1.*t21970*t26347*t4362);
  p_output1[17]=(-1.*t21970*t26334 + t24380*t26347)*t4362;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t24377 - 0.15121*t25178;
  p_output1[46]=-0.15121 + t25178*(t24377*t26306 + t26778) + t4362*(t26741 - 1.*t26306*t4362);
  p_output1[47]=0;
  p_output1[48]=0.28121*t4201 + t25920*t4201 - 0.27*t4201*t50;
  p_output1[49]=0;
  p_output1[50]=0.27*Power(t4201,2) + 0.28121*t50 + t25920*t50;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.27;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
