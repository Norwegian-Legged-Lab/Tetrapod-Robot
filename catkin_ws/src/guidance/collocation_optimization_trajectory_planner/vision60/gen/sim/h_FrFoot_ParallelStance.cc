/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:40:48 GMT+02:00
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
  double t4257;
  double t4266;
  double t4271;
  double t4277;
  double t4289;
  double t4264;
  double t4296;
  double t4158;
  double t4297;
  double t4300;
  double t4301;
  double t4304;
  double t4305;
  double t4307;
  double t4308;
  double t4311;
  double t4392;
  double t4393;
  double t4395;
  double t4252;
  double t4253;
  double t4415;
  double t4278;
  double t4283;
  double t4418;
  double t4423;
  double t4425;
  double t4426;
  double t4417;
  double t4420;
  double t4421;
  double t4435;
  double t4436;
  double t4437;
  double t4381;
  double t4391;
  double t4441;
  double t4442;
  double t4443;
  double t4446;
  double t4447;
  double t4448;
  double t4470;
  double t4471;
  double t4472;
  double t4464;
  double t4465;
  double t4466;
  double t4478;
  double t4479;
  double t4480;
  double t4482;
  double t4483;
  double t4484;
  double t4489;
  double t4490;
  double t4492;
  t4257 = Cos(var1[4]);
  t4266 = Sin(var1[12]);
  t4271 = Sin(var1[4]);
  t4277 = Cos(var1[12]);
  t4289 = Sin(var1[5]);
  t4264 = Cos(var1[5]);
  t4296 = Sin(var1[13]);
  t4158 = Cos(var1[13]);
  t4297 = t4277*t4271;
  t4300 = t4257*t4266*t4289;
  t4301 = t4297 + t4300;
  t4304 = Sin(var1[14]);
  t4305 = -1.*t4257*t4264*t4296;
  t4307 = t4158*t4301;
  t4308 = t4305 + t4307;
  t4311 = Cos(var1[14]);
  t4392 = t4158*t4257*t4264;
  t4393 = t4296*t4301;
  t4395 = t4392 + t4393;
  t4252 = -1.*t4158;
  t4253 = 1. + t4252;
  t4415 = Sin(var1[3]);
  t4278 = -1.*t4277;
  t4283 = 1. + t4278;
  t4418 = Cos(var1[3]);
  t4423 = t4418*t4264;
  t4425 = -1.*t4415*t4271*t4289;
  t4426 = t4423 + t4425;
  t4417 = t4264*t4415*t4271;
  t4420 = t4418*t4289;
  t4421 = t4417 + t4420;
  t4435 = -1.*t4277*t4257*t4415;
  t4436 = -1.*t4266*t4426;
  t4437 = t4435 + t4436;
  t4381 = -1.*t4311;
  t4391 = 1. + t4381;
  t4441 = -1.*t4296*t4421;
  t4442 = t4158*t4437;
  t4443 = t4441 + t4442;
  t4446 = t4158*t4421;
  t4447 = t4296*t4437;
  t4448 = t4446 + t4447;
  t4470 = t4264*t4415;
  t4471 = t4418*t4271*t4289;
  t4472 = t4470 + t4471;
  t4464 = -1.*t4418*t4264*t4271;
  t4465 = t4415*t4289;
  t4466 = t4464 + t4465;
  t4478 = t4277*t4418*t4257;
  t4479 = -1.*t4266*t4472;
  t4480 = t4478 + t4479;
  t4482 = -1.*t4296*t4466;
  t4483 = t4158*t4480;
  t4484 = t4482 + t4483;
  t4489 = t4158*t4466;
  t4490 = t4296*t4480;
  t4492 = t4489 + t4490;
  p_output1[0]=0.325*t4253*t4257*t4264 + 0.1575*t4266*t4271 + 0.1575*t4257*t4283*t4289 - 0.2255*(t4266*t4271 - 1.*t4257*t4277*t4289) - 0.325*t4296*t4301 + 0.075*t4304*t4308 + 0.075*t4391*t4395 - 0.0641*(t4308*t4311 + t4304*t4395) + 0.355*(-1.*t4304*t4308 + t4311*t4395) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t4257*t4266*t4415 + 0.325*t4253*t4421 - 0.1575*t4283*t4426 - 0.2255*(-1.*t4257*t4266*t4415 + t4277*t4426) - 0.325*t4296*t4437 + 0.075*t4304*t4443 + 0.075*t4391*t4448 - 0.0641*(t4311*t4443 + t4304*t4448) + 0.355*(-1.*t4304*t4443 + t4311*t4448) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t4257*t4266*t4418 + 0.325*t4253*t4466 - 0.1575*t4283*t4472 - 0.2255*(t4257*t4266*t4418 + t4277*t4472) - 0.325*t4296*t4480 + 0.075*t4304*t4484 + 0.075*t4391*t4492 - 0.0641*(t4311*t4484 + t4304*t4492) + 0.355*(-1.*t4304*t4484 + t4311*t4492) + var1[2] - 1.*var2[2];
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

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
