/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 17:58:42 GMT+02:00
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
  double t4201;
  double t4203;
  double t4208;
  double t4209;
  double t4214;
  double t4219;
  double t4202;
  double t4242;
  double t4223;
  double t4224;
  double t4254;
  double t4294;
  double t4295;
  double t4296;
  double t4308;
  double t4314;
  double t4315;
  double t4316;
  double t4322;
  double t4323;
  double t4324;
  double t4325;
  double t4220;
  double t4221;
  double t4336;
  double t4226;
  double t4235;
  double t4343;
  double t4342;
  double t4344;
  double t4345;
  double t4347;
  double t4352;
  double t4353;
  double t4255;
  double t4290;
  double t4309;
  double t4313;
  double t4359;
  double t4360;
  double t4361;
  double t4367;
  double t4368;
  double t4369;
  double t4371;
  double t4372;
  double t4373;
  double t4416;
  double t4417;
  double t4422;
  double t4426;
  double t4428;
  double t4431;
  double t4440;
  double t4441;
  double t4442;
  double t4456;
  double t4457;
  double t4462;
  double t4467;
  double t4472;
  double t4473;
  t4201 = Cos(var1[4]);
  t4203 = Cos(var1[15]);
  t4208 = -1.*t4203;
  t4209 = 1. + t4208;
  t4214 = -0.15121*t4209;
  t4219 = Sin(var1[15]);
  t4202 = Cos(var1[5]);
  t4242 = Sin(var1[5]);
  t4223 = Sin(var1[16]);
  t4224 = Sin(var1[4]);
  t4254 = Cos(var1[16]);
  t4294 = t4203*t4201*t4202;
  t4295 = -1.*t4201*t4219*t4242;
  t4296 = t4294 + t4295;
  t4308 = Cos(var1[17]);
  t4314 = t4223*t4224;
  t4315 = t4254*t4296;
  t4316 = t4314 + t4315;
  t4322 = Sin(var1[17]);
  t4323 = t4254*t4224;
  t4324 = -1.*t4223*t4296;
  t4325 = t4323 + t4324;
  t4220 = -0.15121*t4219;
  t4221 = t4214 + t4220;
  t4336 = Sin(var1[3]);
  t4226 = 0.15121*t4219;
  t4235 = t4214 + t4226;
  t4343 = Cos(var1[3]);
  t4342 = t4202*t4336*t4224;
  t4344 = t4343*t4242;
  t4345 = t4342 + t4344;
  t4347 = t4343*t4202;
  t4352 = -1.*t4336*t4224*t4242;
  t4353 = t4347 + t4352;
  t4255 = -1.*t4254;
  t4290 = 1. + t4255;
  t4309 = -1.*t4308;
  t4313 = 1. + t4309;
  t4359 = t4203*t4345;
  t4360 = t4219*t4353;
  t4361 = t4359 + t4360;
  t4367 = -1.*t4201*t4223*t4336;
  t4368 = t4254*t4361;
  t4369 = t4367 + t4368;
  t4371 = -1.*t4254*t4201*t4336;
  t4372 = -1.*t4223*t4361;
  t4373 = t4371 + t4372;
  t4416 = -1.*t4343*t4202*t4224;
  t4417 = t4336*t4242;
  t4422 = t4416 + t4417;
  t4426 = t4202*t4336;
  t4428 = t4343*t4224*t4242;
  t4431 = t4426 + t4428;
  t4440 = t4203*t4422;
  t4441 = t4219*t4431;
  t4442 = t4440 + t4441;
  t4456 = t4343*t4201*t4223;
  t4457 = t4254*t4442;
  t4462 = t4456 + t4457;
  t4467 = t4254*t4343*t4201;
  t4472 = -1.*t4223*t4442;
  t4473 = t4467 + t4472;
  p_output1[0]=t4201*t4202*t4221 + 0.28121*t4223*t4224 - 1.*t4201*t4235*t4242 - 0.15121*(-1.*t4201*t4202*t4219 - 1.*t4201*t4203*t4242) - 0.28121*t4290*t4296 - 0.50321*t4313*t4316 - 0.50321*t4322*t4325 - 0.19821*(t4308*t4316 - 1.*t4322*t4325) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t4201*t4223*t4336 + t4221*t4345 + t4235*t4353 - 0.15121*(-1.*t4219*t4345 + t4203*t4353) - 0.28121*t4290*t4361 - 0.50321*t4313*t4369 - 0.50321*t4322*t4373 - 0.19821*(t4308*t4369 - 1.*t4322*t4373) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t4201*t4223*t4343 + t4221*t4422 + t4235*t4431 - 0.15121*(-1.*t4219*t4422 + t4203*t4431) - 0.28121*t4290*t4442 - 0.50321*t4313*t4462 - 0.50321*t4322*t4473 - 0.19821*(t4308*t4462 - 1.*t4322*t4473) + var1[2] - 1.*var2[2];
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
