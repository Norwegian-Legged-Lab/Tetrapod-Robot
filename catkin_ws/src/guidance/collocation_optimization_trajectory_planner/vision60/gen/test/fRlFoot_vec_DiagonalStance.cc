/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:26 GMT+02:00
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
  double t23675;
  double t4387;
  double t23682;
  double t27976;
  double t23849;
  double t24639;
  double t27977;
  double t4183;
  double t26436;
  double t27978;
  double t28114;
  double t23686;
  double t28135;
  double t28137;
  double t28138;
  double t28132;
  double t28297;
  double t28300;
  double t28146;
  double t28147;
  double t28148;
  double t28155;
  double t28160;
  double t28161;
  double t28162;
  double t28163;
  double t28277;
  double t28301;
  double t28302;
  double t28308;
  double t28321;
  double t28325;
  double t28326;
  double t28329;
  double t28330;
  double t28332;
  double t28337;
  double t28339;
  double t28341;
  double t28343;
  double t28344;
  double t28347;
  double t28131;
  double t28149;
  double t28150;
  double t28382;
  double t28383;
  double t28384;
  double t28388;
  double t28389;
  double t28390;
  double t28391;
  double t28392;
  double t28393;
  double t23650;
  double t23705;
  double t23706;
  double t28379;
  double t28387;
  double t28394;
  double t28395;
  double t28399;
  double t28400;
  double t28402;
  double t28403;
  double t28405;
  double t28406;
  double t28372;
  double t28373;
  double t28377;
  double t28378;
  double t28396;
  double t28397;
  double t28413;
  double t28415;
  double t28416;
  double t28418;
  double t28419;
  double t28420;
  double t28398;
  double t28409;
  double t28411;
  double t28417;
  double t28421;
  double t28422;
  double t28424;
  double t28425;
  double t28426;
  double t28152;
  double t28287;
  double t28289;
  double t28412;
  double t28430;
  double t28440;
  double t28455;
  double t28462;
  double t28473;
  double t28526;
  double t28532;
  double t28490;
  double t28503;
  double t28516;
  double t28512;
  double t28569;
  double t28564;
  t23675 = Cos(var1[9]);
  t4387 = Sin(var1[4]);
  t23682 = Cos(var1[4]);
  t27976 = Cos(var1[10]);
  t23849 = Cos(var1[11]);
  t24639 = Sin(var1[10]);
  t27977 = Sin(var1[11]);
  t4183 = Sin(var1[9]);
  t26436 = t23849*t24639;
  t27978 = -1.*t27976*t27977;
  t28114 = t26436 + t27978;
  t23686 = Sin(var1[5]);
  t28135 = t27976*t23849;
  t28137 = t24639*t27977;
  t28138 = t28135 + t28137;
  t28132 = Cos(var1[5]);
  t28297 = Cos(var1[3]);
  t28300 = Sin(var1[3]);
  t28146 = t28132*t28138;
  t28147 = t4183*t28114*t23686;
  t28148 = t28146 + t28147;
  t28155 = -1.*t23849*t24639;
  t28160 = t27976*t27977;
  t28161 = t28155 + t28160;
  t28162 = t28132*t28161;
  t28163 = t4183*t28138*t23686;
  t28277 = t28162 + t28163;
  t28301 = t23682*t4183;
  t28302 = t23675*t4387*t23686;
  t28308 = t28301 + t28302;
  t28321 = -1.*t28132*t4183*t28114;
  t28325 = t28138*t23686;
  t28326 = t28321 + t28325;
  t28329 = t23675*t23682*t28114;
  t28330 = -1.*t4387*t28148;
  t28332 = t28329 + t28330;
  t28337 = -1.*t28132*t4183*t28138;
  t28339 = t28161*t23686;
  t28341 = t28337 + t28339;
  t28343 = t23675*t23682*t28138;
  t28344 = -1.*t4387*t28277;
  t28347 = t28343 + t28344;
  t28131 = t23675*t28114*t4387;
  t28149 = t23682*t28148;
  t28150 = t28131 + t28149;
  t28382 = -0.0641*t23849;
  t28383 = -0.28*t27977;
  t28384 = t28382 + t28383;
  t28388 = -1.*t23849;
  t28389 = 1. + t28388;
  t28390 = -0.575*t28389;
  t28391 = -0.295*t23849;
  t28392 = -0.0641*t27977;
  t28393 = t28390 + t28391 + t28392;
  t23650 = t4183*t4387;
  t23705 = -1.*t23675*t23682*t23686;
  t23706 = t23650 + t23705;
  t28379 = 0.325*t24639;
  t28387 = t27976*t28384;
  t28394 = t24639*t28393;
  t28395 = t28379 + t28387 + t28394;
  t28399 = -1.*t27976;
  t28400 = 1. + t28399;
  t28402 = -0.325*t28400;
  t28403 = -1.*t24639*t28384;
  t28405 = t27976*t28393;
  t28406 = t28402 + t28403 + t28405;
  t28372 = -1.*t23675;
  t28373 = 1. + t28372;
  t28377 = 0.1575*t28373;
  t28378 = 0.2255*t23675;
  t28396 = -1.*t4183*t28395;
  t28397 = t28377 + t28378 + t28396;
  t28413 = 0.068*t4183;
  t28415 = t23675*t28395;
  t28416 = t28413 + t28415;
  t28418 = t28132*t28406;
  t28419 = -1.*t28397*t23686;
  t28420 = t28418 + t28419;
  t28398 = t28132*t28397;
  t28409 = t28406*t23686;
  t28411 = t28398 + t28409;
  t28417 = t28416*t4387;
  t28421 = t23682*t28420;
  t28422 = t28417 + t28421;
  t28424 = t23682*t28416;
  t28425 = -1.*t4387*t28420;
  t28426 = t28424 + t28425;
  t28152 = t23675*t28138*t4387;
  t28287 = t23682*t28277;
  t28289 = t28152 + t28287;
  t28412 = t23675*t28132*t28411;
  t28430 = -1.*t28411*t28326;
  t28440 = t28411*t28326;
  t28455 = -1.*t28411*t28341;
  t28462 = -1.*t23675*t28132*t28411;
  t28473 = t28411*t28341;
  t28526 = -1.*t4183*t28416;
  t28532 = t23675*t28416*t28138;
  t28490 = t4183*t28416;
  t28503 = -1.*t23675*t28416*t28114;
  t28516 = -1.*t23675*t28416*t28138;
  t28512 = t23675*t28416*t28114;
  t28569 = t28406*t28138;
  t28564 = -1.*t28406*t28161;
  p_output1[0]=t28150*var2[0] + t23706*var2[1] + t28289*var2[2];
  p_output1[1]=(t28297*t28326 - 1.*t28300*t28332)*var2[0] + (t23675*t28132*t28297 - 1.*t28300*t28308)*var2[1] + (t28297*t28341 - 1.*t28300*t28347)*var2[2];
  p_output1[2]=(t28300*t28326 + t28297*t28332)*var2[0] + (t23675*t28132*t28300 + t28297*t28308)*var2[1] + (t28300*t28341 + t28297*t28347)*var2[2];
  p_output1[3]=(t28289*(-1.*t23706*t28422 - 1.*t28308*t28426 + t28462) + t23706*(t28289*t28422 + t28347*t28426 + t28473))*var2[0] + (t28289*(t28150*t28422 + t28332*t28426 + t28440) + t28150*(-1.*t28289*t28422 - 1.*t28347*t28426 + t28455))*var2[1] + (t28150*(t28412 + t23706*t28422 + t28308*t28426) + t23706*(-1.*t28150*t28422 - 1.*t28332*t28426 + t28430))*var2[2];
  p_output1[4]=(t28341*(t23675*t23686*t28420 + t28462 + t28526) + t23675*t28132*(t28277*t28420 + t28473 + t28532))*var2[0] + (t28341*(t28148*t28420 + t28440 + t28512) + t28326*(-1.*t28277*t28420 + t28455 + t28516))*var2[1] + (t28326*(t28412 - 1.*t23675*t23686*t28420 + t28490) + t23675*t28132*(-1.*t28148*t28420 + t28430 + t28503))*var2[2];
  p_output1[5]=(t23675*t28138*(-1.*t23675*t28397 + t28526) + t4183*(t28161*t28406 + t28532 - 1.*t28138*t28397*t4183))*var2[0] + (t23675*t28138*(t28512 + t28569 - 1.*t28114*t28397*t4183) + t23675*t28114*(t28516 + t28564 + t28138*t28397*t4183))*var2[1] + (t23675*t28114*(t23675*t28397 + t28490) + t4183*(-1.*t28138*t28406 + t28503 + t28114*t28397*t4183))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t28114 - 0.2255*t28161)*var2[0] + (t28138*(-1.*t28138*t28395 + t28564) + t28161*(t28114*t28395 + t28569))*var2[1] + 0.068*t28138*var2[2];
  p_output1[10]=(-0.325*t27977 - 1.*t23849*t28384 - 1.*t27977*t28393)*var2[0] + (0.325*t23849 - 1.*t27977*t28384 + t23849*t28393)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
