/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:43 GMT+02:00
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
  double t29211;
  double t4135;
  double t27755;
  double t29679;
  double t36060;
  double t36092;
  double t36093;
  double t33074;
  double t36015;
  double t36104;
  double t33211;
  double t36106;
  double t33043;
  double t28575;
  double t32753;
  double t32947;
  double t36096;
  double t36111;
  double t36115;
  double t36273;
  double t36193;
  double t36194;
  double t36199;
  double t36245;
  double t36201;
  double t36205;
  double t36212;
  double t36223;
  double t36224;
  double t36232;
  double t36248;
  double t36257;
  double t36261;
  double t36276;
  double t36278;
  double t36282;
  double t36334;
  double t36340;
  double t36341;
  double t36349;
  double t36350;
  double t36351;
  double t36355;
  double t36356;
  double t36358;
  double t36222;
  double t36236;
  double t36237;
  double t36396;
  double t36399;
  double t36400;
  double t36405;
  double t36406;
  double t36409;
  double t36410;
  double t36411;
  double t36424;
  double t36428;
  double t36429;
  double t36430;
  double t36435;
  double t36436;
  double t36445;
  double t36448;
  double t36401;
  double t36402;
  double t36441;
  double t36442;
  double t36454;
  double t36455;
  double t36457;
  double t36458;
  double t36460;
  double t36463;
  double t36467;
  double t36444;
  double t36449;
  double t36450;
  double t36459;
  double t36468;
  double t36469;
  double t36474;
  double t36479;
  double t36480;
  double t33073;
  double t36158;
  double t36184;
  double t36451;
  double t36485;
  double t36491;
  double t36496;
  double t36502;
  double t36507;
  double t36524;
  double t36529;
  t29211 = Cos(var1[16]);
  t4135 = Cos(var1[17]);
  t27755 = Sin(var1[16]);
  t29679 = Sin(var1[17]);
  t36060 = -1.*t29211*t4135;
  t36092 = -1.*t27755*t29679;
  t36093 = t36060 + t36092;
  t33074 = Cos(var1[4]);
  t36015 = Cos(var1[5]);
  t36104 = Sin(var1[15]);
  t33211 = Cos(var1[15]);
  t36106 = Sin(var1[5]);
  t33043 = Sin(var1[4]);
  t28575 = -1.*t4135*t27755;
  t32753 = t29211*t29679;
  t32947 = t28575 + t32753;
  t36096 = t33211*t36015*t36093;
  t36111 = -1.*t36104*t36093*t36106;
  t36115 = t36096 + t36111;
  t36273 = Sin(var1[3]);
  t36193 = t36015*t36104;
  t36194 = t33211*t36106;
  t36199 = t36193 + t36194;
  t36245 = Cos(var1[3]);
  t36201 = t29211*t4135;
  t36205 = t27755*t29679;
  t36212 = t36201 + t36205;
  t36223 = t33211*t36015*t32947;
  t36224 = -1.*t36104*t32947*t36106;
  t36232 = t36223 + t36224;
  t36248 = t36015*t36104*t36093;
  t36257 = t33211*t36093*t36106;
  t36261 = t36248 + t36257;
  t36276 = t33074*t32947;
  t36278 = -1.*t33043*t36115;
  t36282 = t36276 + t36278;
  t36334 = -1.*t33211*t36015;
  t36340 = t36104*t36106;
  t36341 = t36334 + t36340;
  t36349 = t36015*t36104*t32947;
  t36350 = t33211*t32947*t36106;
  t36351 = t36349 + t36350;
  t36355 = t33074*t36212;
  t36356 = -1.*t33043*t36232;
  t36358 = t36355 + t36356;
  t36222 = t36212*t33043;
  t36236 = t33074*t36232;
  t36237 = t36222 + t36236;
  t36396 = -1.*t33211;
  t36399 = 1. + t36396;
  t36400 = -0.15121*t36399;
  t36405 = -1.*t29211;
  t36406 = 1. + t36405;
  t36409 = -0.28121*t36406;
  t36410 = -1.*t4135;
  t36411 = 1. + t36410;
  t36424 = -0.50321*t36411;
  t36428 = -0.19821*t4135;
  t36429 = t36424 + t36428;
  t36430 = t29211*t36429;
  t36435 = 0.305*t27755*t29679;
  t36436 = t36409 + t36430 + t36435;
  t36445 = t33211*t36436;
  t36448 = t36400 + t36445;
  t36401 = -0.15121*t33211;
  t36402 = 0.15121*t36104;
  t36441 = t36104*t36436;
  t36442 = t36400 + t36401 + t36402 + t36441;
  t36454 = 0.28121*t27755;
  t36455 = t36429*t27755;
  t36457 = -0.305*t29211*t29679;
  t36458 = t36454 + t36455 + t36457;
  t36460 = t36015*t36448;
  t36463 = -1.*t36442*t36106;
  t36467 = t36460 + t36463;
  t36444 = t36015*t36442;
  t36449 = t36448*t36106;
  t36450 = t36444 + t36449;
  t36459 = t36458*t33043;
  t36468 = t33074*t36467;
  t36469 = t36459 + t36468;
  t36474 = t33074*t36458;
  t36479 = -1.*t33043*t36467;
  t36480 = t36474 + t36479;
  t33073 = t32947*t33043;
  t36158 = t33074*t36115;
  t36184 = t33073 + t36158;
  t36451 = -1.*t36341*t36450;
  t36485 = t36351*t36450;
  t36491 = -1.*t36351*t36450;
  t36496 = t36261*t36450;
  t36502 = t36341*t36450;
  t36507 = -1.*t36261*t36450;
  t36524 = -1.*t36458*t36212;
  t36529 = t36458*t32947;
  p_output1[0]=t36184;
  p_output1[1]=t33074*t36199;
  p_output1[2]=t36237;
  p_output1[3]=t36245*t36261 - 1.*t36273*t36282;
  p_output1[4]=t33043*t36199*t36273 + t36245*t36341;
  p_output1[5]=t36245*t36351 - 1.*t36273*t36358;
  p_output1[6]=t36261*t36273 + t36245*t36282;
  p_output1[7]=-1.*t33043*t36199*t36245 + t36273*t36341;
  p_output1[8]=t36273*t36351 + t36245*t36358;
  p_output1[9]=t36237*(t36451 - 1.*t33074*t36199*t36469 + t33043*t36199*t36480) + t33074*t36199*(t36237*t36469 + t36358*t36480 + t36485);
  p_output1[10]=t36184*(-1.*t36237*t36469 - 1.*t36358*t36480 + t36491) + t36237*(t36184*t36469 + t36282*t36480 + t36496);
  p_output1[11]=t36184*(t33074*t36199*t36469 - 1.*t33043*t36199*t36480 + t36502) + t33074*t36199*(-1.*t36184*t36469 - 1.*t36282*t36480 + t36507);
  p_output1[12]=t36351*(t36451 - 1.*t36199*t36467) + t36341*(t36212*t36458 + t36232*t36467 + t36485);
  p_output1[13]=t36261*(-1.*t36232*t36467 + t36491 + t36524) + t36351*(t36115*t36467 + t36496 + t36529);
  p_output1[14]=t36261*(t36199*t36467 + t36502) + t36341*(-1.*t32947*t36458 - 1.*t36115*t36467 + t36507);
  p_output1[15]=t36212*(t33211*t36442 - 1.*t36104*t36448);
  p_output1[16]=t32947*(-1.*t32947*t36104*t36442 - 1.*t32947*t33211*t36448 + t36524) + t36212*(t36093*t36104*t36442 + t33211*t36093*t36448 + t36529);
  p_output1[17]=t32947*(-1.*t33211*t36442 + t36104*t36448);
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
  p_output1[45]=-0.15121*t36093 - 0.15121*t36212;
  p_output1[46]=-0.15121 + t32947*(-1.*t32947*t36436 + t36524) + t36212*(t36093*t36436 + t36529);
  p_output1[47]=0;
  p_output1[48]=0.28121*t29679 + t29679*t36429 - 0.305*t29679*t4135;
  p_output1[49]=0;
  p_output1[50]=0.305*Power(t29679,2) + 0.28121*t4135 + t36429*t4135;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.305;
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

#include "Jh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
