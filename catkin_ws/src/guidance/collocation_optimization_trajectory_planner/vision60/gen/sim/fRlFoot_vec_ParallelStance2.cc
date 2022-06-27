/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:38 GMT+02:00
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
  double t25134;
  double t22751;
  double t25145;
  double t25189;
  double t25170;
  double t25181;
  double t25191;
  double t22747;
  double t25188;
  double t25196;
  double t25201;
  double t25149;
  double t25214;
  double t25215;
  double t25216;
  double t25209;
  double t25372;
  double t25374;
  double t25217;
  double t25221;
  double t25222;
  double t25230;
  double t25235;
  double t25236;
  double t25241;
  double t25347;
  double t25353;
  double t25375;
  double t25378;
  double t25380;
  double t25387;
  double t25388;
  double t25389;
  double t25391;
  double t25392;
  double t25393;
  double t25401;
  double t25402;
  double t25403;
  double t25405;
  double t25406;
  double t25407;
  double t25204;
  double t25223;
  double t25227;
  double t25449;
  double t25450;
  double t25451;
  double t25455;
  double t25456;
  double t25457;
  double t25458;
  double t25459;
  double t25460;
  double t25056;
  double t25151;
  double t25165;
  double t25447;
  double t25453;
  double t25461;
  double t25462;
  double t25466;
  double t25467;
  double t25468;
  double t25469;
  double t25470;
  double t25472;
  double t25441;
  double t25443;
  double t25444;
  double t25446;
  double t25463;
  double t25464;
  double t25480;
  double t25481;
  double t25482;
  double t25484;
  double t25486;
  double t25491;
  double t25465;
  double t25473;
  double t25474;
  double t25483;
  double t25492;
  double t25498;
  double t25500;
  double t25501;
  double t25502;
  double t25229;
  double t25366;
  double t25367;
  double t25475;
  double t25506;
  double t25523;
  double t25533;
  double t25549;
  double t25557;
  double t25595;
  double t25601;
  double t25569;
  double t25575;
  double t25589;
  double t25583;
  double t25633;
  double t25628;
  t25134 = Cos(var1[9]);
  t22751 = Sin(var1[4]);
  t25145 = Cos(var1[4]);
  t25189 = Cos(var1[10]);
  t25170 = Cos(var1[11]);
  t25181 = Sin(var1[10]);
  t25191 = Sin(var1[11]);
  t22747 = Sin(var1[9]);
  t25188 = t25170*t25181;
  t25196 = -1.*t25189*t25191;
  t25201 = t25188 + t25196;
  t25149 = Sin(var1[5]);
  t25214 = t25189*t25170;
  t25215 = t25181*t25191;
  t25216 = t25214 + t25215;
  t25209 = Cos(var1[5]);
  t25372 = Cos(var1[3]);
  t25374 = Sin(var1[3]);
  t25217 = t25209*t25216;
  t25221 = t22747*t25201*t25149;
  t25222 = t25217 + t25221;
  t25230 = -1.*t25170*t25181;
  t25235 = t25189*t25191;
  t25236 = t25230 + t25235;
  t25241 = t25209*t25236;
  t25347 = t22747*t25216*t25149;
  t25353 = t25241 + t25347;
  t25375 = t25145*t22747;
  t25378 = t25134*t22751*t25149;
  t25380 = t25375 + t25378;
  t25387 = -1.*t25209*t22747*t25201;
  t25388 = t25216*t25149;
  t25389 = t25387 + t25388;
  t25391 = t25134*t25145*t25201;
  t25392 = -1.*t22751*t25222;
  t25393 = t25391 + t25392;
  t25401 = -1.*t25209*t22747*t25216;
  t25402 = t25236*t25149;
  t25403 = t25401 + t25402;
  t25405 = t25134*t25145*t25216;
  t25406 = -1.*t22751*t25353;
  t25407 = t25405 + t25406;
  t25204 = t25134*t25201*t22751;
  t25223 = t25145*t25222;
  t25227 = t25204 + t25223;
  t25449 = -0.0641*t25170;
  t25450 = -0.28*t25191;
  t25451 = t25449 + t25450;
  t25455 = -1.*t25170;
  t25456 = 1. + t25455;
  t25457 = -0.575*t25456;
  t25458 = -0.295*t25170;
  t25459 = -0.0641*t25191;
  t25460 = t25457 + t25458 + t25459;
  t25056 = t22747*t22751;
  t25151 = -1.*t25134*t25145*t25149;
  t25165 = t25056 + t25151;
  t25447 = 0.325*t25181;
  t25453 = t25189*t25451;
  t25461 = t25181*t25460;
  t25462 = t25447 + t25453 + t25461;
  t25466 = -1.*t25189;
  t25467 = 1. + t25466;
  t25468 = -0.325*t25467;
  t25469 = -1.*t25181*t25451;
  t25470 = t25189*t25460;
  t25472 = t25468 + t25469 + t25470;
  t25441 = -1.*t25134;
  t25443 = 1. + t25441;
  t25444 = 0.1575*t25443;
  t25446 = 0.2255*t25134;
  t25463 = -1.*t22747*t25462;
  t25464 = t25444 + t25446 + t25463;
  t25480 = 0.068*t22747;
  t25481 = t25134*t25462;
  t25482 = t25480 + t25481;
  t25484 = t25209*t25472;
  t25486 = -1.*t25464*t25149;
  t25491 = t25484 + t25486;
  t25465 = t25209*t25464;
  t25473 = t25472*t25149;
  t25474 = t25465 + t25473;
  t25483 = t25482*t22751;
  t25492 = t25145*t25491;
  t25498 = t25483 + t25492;
  t25500 = t25145*t25482;
  t25501 = -1.*t22751*t25491;
  t25502 = t25500 + t25501;
  t25229 = t25134*t25216*t22751;
  t25366 = t25145*t25353;
  t25367 = t25229 + t25366;
  t25475 = t25134*t25209*t25474;
  t25506 = -1.*t25474*t25389;
  t25523 = t25474*t25389;
  t25533 = -1.*t25474*t25403;
  t25549 = -1.*t25134*t25209*t25474;
  t25557 = t25474*t25403;
  t25595 = -1.*t22747*t25482;
  t25601 = t25134*t25482*t25216;
  t25569 = t22747*t25482;
  t25575 = -1.*t25134*t25482*t25201;
  t25589 = -1.*t25134*t25482*t25216;
  t25583 = t25134*t25482*t25201;
  t25633 = t25472*t25216;
  t25628 = -1.*t25472*t25236;
  p_output1[0]=t25227*var2[0] + t25165*var2[1] + t25367*var2[2];
  p_output1[1]=(t25372*t25389 - 1.*t25374*t25393)*var2[0] + (t25134*t25209*t25372 - 1.*t25374*t25380)*var2[1] + (t25372*t25403 - 1.*t25374*t25407)*var2[2];
  p_output1[2]=(t25374*t25389 + t25372*t25393)*var2[0] + (t25134*t25209*t25374 + t25372*t25380)*var2[1] + (t25374*t25403 + t25372*t25407)*var2[2];
  p_output1[3]=(t25367*(-1.*t25165*t25498 - 1.*t25380*t25502 + t25549) + t25165*(t25367*t25498 + t25407*t25502 + t25557))*var2[0] + (t25367*(t25227*t25498 + t25393*t25502 + t25523) + t25227*(-1.*t25367*t25498 - 1.*t25407*t25502 + t25533))*var2[1] + (t25227*(t25475 + t25165*t25498 + t25380*t25502) + t25165*(-1.*t25227*t25498 - 1.*t25393*t25502 + t25506))*var2[2];
  p_output1[4]=(t25403*(t25134*t25149*t25491 + t25549 + t25595) + t25134*t25209*(t25353*t25491 + t25557 + t25601))*var2[0] + (t25403*(t25222*t25491 + t25523 + t25583) + t25389*(-1.*t25353*t25491 + t25533 + t25589))*var2[1] + (t25389*(t25475 - 1.*t25134*t25149*t25491 + t25569) + t25134*t25209*(-1.*t25222*t25491 + t25506 + t25575))*var2[2];
  p_output1[5]=(t25134*t25216*(-1.*t25134*t25464 + t25595) + t22747*(-1.*t22747*t25216*t25464 + t25236*t25472 + t25601))*var2[0] + (t25134*t25201*(t22747*t25216*t25464 + t25589 + t25628) + t25134*t25216*(-1.*t22747*t25201*t25464 + t25583 + t25633))*var2[1] + (t25134*t25201*(t25134*t25464 + t25569) + t22747*(t22747*t25201*t25464 - 1.*t25216*t25472 + t25575))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t25201 - 0.2255*t25236)*var2[0] + (t25216*(-1.*t25216*t25462 + t25628) + t25236*(t25201*t25462 + t25633))*var2[1] + 0.068*t25216*var2[2];
  p_output1[10]=(-0.325*t25191 - 1.*t25170*t25451 - 1.*t25191*t25460)*var2[0] + (0.325*t25170 - 1.*t25191*t25451 + t25170*t25460)*var2[2];
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
