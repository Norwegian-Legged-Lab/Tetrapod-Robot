/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:28 GMT+02:00
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
  double t5363;
  double t17282;
  double t12013;
  double t21244;
  double t21252;
  double t21243;
  double t21256;
  double t14824;
  double t21326;
  double t21331;
  double t21332;
  double t17283;
  double t21320;
  double t21245;
  double t21315;
  double t21319;
  double t17106;
  double t17814;
  double t18003;
  double t21354;
  double t21352;
  double t21334;
  double t21336;
  double t21337;
  double t21341;
  double t21342;
  double t21343;
  double t21345;
  double t21346;
  double t21347;
  double t21355;
  double t21356;
  double t21357;
  double t21361;
  double t21362;
  double t21364;
  double t21366;
  double t21367;
  double t21369;
  double t21373;
  double t21375;
  double t21376;
  double t21379;
  double t21380;
  double t21381;
  double t21321;
  double t21338;
  double t21339;
  double t21399;
  double t21400;
  double t21404;
  double t21406;
  double t21407;
  double t21408;
  double t21409;
  double t21411;
  double t21412;
  double t21413;
  double t21414;
  double t21415;
  double t21416;
  double t21421;
  double t21422;
  double t21423;
  double t21401;
  double t21402;
  double t21403;
  double t21417;
  double t21418;
  double t21428;
  double t21429;
  double t21430;
  double t21431;
  double t21433;
  double t21434;
  double t21435;
  double t21419;
  double t21424;
  double t21426;
  double t21432;
  double t21436;
  double t21437;
  double t21439;
  double t21440;
  double t21441;
  double t21344;
  double t21348;
  double t21349;
  double t21427;
  double t21445;
  double t21453;
  double t21458;
  double t21465;
  double t21470;
  double t21496;
  double t21500;
  t5363 = Cos(var1[4]);
  t17282 = Cos(var1[12]);
  t12013 = Cos(var1[5]);
  t21244 = Cos(var1[14]);
  t21252 = Sin(var1[13]);
  t21243 = Cos(var1[13]);
  t21256 = Sin(var1[14]);
  t14824 = Sin(var1[12]);
  t21326 = t21244*t21252;
  t21331 = -1.*t21243*t21256;
  t21332 = t21326 + t21331;
  t17283 = Sin(var1[5]);
  t21320 = Sin(var1[4]);
  t21245 = t21243*t21244;
  t21315 = t21252*t21256;
  t21319 = t21245 + t21315;
  t17106 = -1.*t12013*t14824;
  t17814 = -1.*t17282*t17283;
  t18003 = t17106 + t17814;
  t21354 = Cos(var1[3]);
  t21352 = Sin(var1[3]);
  t21334 = t17282*t12013*t21332;
  t21336 = -1.*t14824*t21332*t17283;
  t21337 = t21334 + t21336;
  t21341 = -1.*t21244*t21252;
  t21342 = t21243*t21256;
  t21343 = t21341 + t21342;
  t21345 = t17282*t12013*t21319;
  t21346 = -1.*t14824*t21319*t17283;
  t21347 = t21345 + t21346;
  t21355 = t17282*t12013;
  t21356 = -1.*t14824*t17283;
  t21357 = t21355 + t21356;
  t21361 = t12013*t14824*t21332;
  t21362 = t17282*t21332*t17283;
  t21364 = t21361 + t21362;
  t21366 = t5363*t21319;
  t21367 = -1.*t21320*t21337;
  t21369 = t21366 + t21367;
  t21373 = t12013*t14824*t21319;
  t21375 = t17282*t21319*t17283;
  t21376 = t21373 + t21375;
  t21379 = t5363*t21343;
  t21380 = -1.*t21320*t21347;
  t21381 = t21379 + t21380;
  t21321 = t21319*t21320;
  t21338 = t5363*t21337;
  t21339 = t21321 + t21338;
  t21399 = -1.*t17282;
  t21400 = 1. + t21399;
  t21404 = -1.*t21243;
  t21406 = 1. + t21404;
  t21407 = 0.28121*t21406;
  t21408 = -1.*t21244;
  t21409 = 1. + t21408;
  t21411 = 0.50321*t21409;
  t21412 = 0.19821*t21244;
  t21413 = t21411 + t21412;
  t21414 = t21243*t21413;
  t21415 = -0.305*t21252*t21256;
  t21416 = t21407 + t21414 + t21415;
  t21421 = 0.15121*t21400;
  t21422 = t17282*t21416;
  t21423 = t21421 + t21422;
  t21401 = -0.15121*t21400;
  t21402 = -0.15121*t17282;
  t21403 = -0.15121*t14824;
  t21417 = t14824*t21416;
  t21418 = t21401 + t21402 + t21403 + t21417;
  t21428 = 0.28121*t21252;
  t21429 = -1.*t21413*t21252;
  t21430 = -0.305*t21243*t21256;
  t21431 = t21428 + t21429 + t21430;
  t21433 = t12013*t21423;
  t21434 = -1.*t21418*t17283;
  t21435 = t21433 + t21434;
  t21419 = t12013*t21418;
  t21424 = t21423*t17283;
  t21426 = t21419 + t21424;
  t21432 = t21431*t21320;
  t21436 = t5363*t21435;
  t21437 = t21432 + t21436;
  t21439 = t5363*t21431;
  t21440 = -1.*t21320*t21435;
  t21441 = t21439 + t21440;
  t21344 = t21343*t21320;
  t21348 = t5363*t21347;
  t21349 = t21344 + t21348;
  t21427 = -1.*t21357*t21426;
  t21445 = t21364*t21426;
  t21453 = t21357*t21426;
  t21458 = -1.*t21376*t21426;
  t21465 = -1.*t21364*t21426;
  t21470 = t21376*t21426;
  t21496 = -1.*t21431*t21319;
  t21500 = t21431*t21343;
  p_output1[0]=t21349*var2[0] + t18003*t5363*var2[1] + t21339*var2[2];
  p_output1[1]=(t21354*t21376 - 1.*t21352*t21381)*var2[0] + (t18003*t21320*t21352 + t21354*t21357)*var2[1] + (t21354*t21364 - 1.*t21352*t21369)*var2[2];
  p_output1[2]=(t21352*t21376 + t21354*t21381)*var2[0] + (-1.*t18003*t21320*t21354 + t21352*t21357)*var2[1] + (t21352*t21364 + t21354*t21369)*var2[2];
  p_output1[3]=(t18003*(t21339*t21437 + t21369*t21441 + t21445)*t5363 + t21339*(t21427 + t18003*t21320*t21441 - 1.*t18003*t21437*t5363))*var2[0] + (t21349*(-1.*t21339*t21437 - 1.*t21369*t21441 + t21465) + t21339*(t21349*t21437 + t21381*t21441 + t21470))*var2[1] + (t18003*(-1.*t21349*t21437 - 1.*t21381*t21441 + t21458)*t5363 + t21349*(-1.*t18003*t21320*t21441 + t21453 + t18003*t21437*t5363))*var2[2];
  p_output1[4]=(t21364*(t21427 - 1.*t18003*t21435) + t21357*(t21319*t21431 + t21337*t21435 + t21445))*var2[0] + (t21376*(-1.*t21337*t21435 + t21465 + t21496) + t21364*(t21347*t21435 + t21470 + t21500))*var2[1] + (t21376*(t18003*t21435 + t21453) + t21357*(-1.*t21343*t21431 - 1.*t21347*t21435 + t21458))*var2[2];
  p_output1[5]=t21319*(-1.*t17282*t21418 + t14824*t21423)*var2[0] + (t21343*(-1.*t14824*t21332*t21418 - 1.*t17282*t21332*t21423 + t21496) + t21319*(t14824*t21319*t21418 + t17282*t21319*t21423 + t21500))*var2[1] + t21343*(t17282*t21418 - 1.*t14824*t21423)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t21343*(-1.*t21332*t21416 + t21496) + t21319*(t21319*t21416 + t21500))*var2[1] + (-0.15121*t21332 - 0.15121*t21343)*var2[2];
  p_output1[13]=(0.28121*t21256 - 0.305*t21244*t21256 - 1.*t21256*t21413)*var2[0] + (0.28121*t21244 + 0.305*Power(t21256,2) - 1.*t21244*t21413)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
