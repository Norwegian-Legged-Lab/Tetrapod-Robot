/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:49 GMT+02:00
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
  double t11438;
  double t11425;
  double t11440;
  double t16409;
  double t13662;
  double t16203;
  double t20098;
  double t8429;
  double t16283;
  double t20136;
  double t20137;
  double t11441;
  double t20160;
  double t20183;
  double t20185;
  double t20154;
  double t22276;
  double t22365;
  double t20275;
  double t20276;
  double t20279;
  double t20348;
  double t20416;
  double t20435;
  double t20568;
  double t20821;
  double t21063;
  double t22944;
  double t23032;
  double t23617;
  double t24162;
  double t24174;
  double t24252;
  double t24768;
  double t24857;
  double t24866;
  double t25297;
  double t25319;
  double t25408;
  double t25795;
  double t25806;
  double t25816;
  double t20146;
  double t20292;
  double t20321;
  double t26351;
  double t26373;
  double t26385;
  double t26418;
  double t26425;
  double t26439;
  double t26445;
  double t26447;
  double t26450;
  double t11437;
  double t11442;
  double t12620;
  double t26350;
  double t26392;
  double t26452;
  double t26457;
  double t26471;
  double t26482;
  double t26487;
  double t26492;
  double t26496;
  double t26505;
  double t26204;
  double t26210;
  double t26315;
  double t26325;
  double t26466;
  double t26467;
  double t26662;
  double t26674;
  double t26704;
  double t26749;
  double t26754;
  double t26759;
  double t26468;
  double t26506;
  double t26548;
  double t26745;
  double t26803;
  double t26810;
  double t26825;
  double t26947;
  double t26995;
  double t20344;
  double t21396;
  double t21466;
  double t26552;
  double t28299;
  double t29539;
  double t29992;
  double t30040;
  double t30231;
  double t32138;
  double t32213;
  double t31068;
  double t31282;
  double t31626;
  double t31572;
  double t32511;
  double t32457;
  t11438 = Cos(var1[12]);
  t11425 = Sin(var1[4]);
  t11440 = Cos(var1[4]);
  t16409 = Cos(var1[13]);
  t13662 = Cos(var1[14]);
  t16203 = Sin(var1[13]);
  t20098 = Sin(var1[14]);
  t8429 = Sin(var1[12]);
  t16283 = t13662*t16203;
  t20136 = -1.*t16409*t20098;
  t20137 = t16283 + t20136;
  t11441 = Sin(var1[5]);
  t20160 = t16409*t13662;
  t20183 = t16203*t20098;
  t20185 = t20160 + t20183;
  t20154 = Cos(var1[5]);
  t22276 = Cos(var1[3]);
  t22365 = Sin(var1[3]);
  t20275 = t20154*t20185;
  t20276 = t8429*t20137*t11441;
  t20279 = t20275 + t20276;
  t20348 = -1.*t13662*t16203;
  t20416 = t16409*t20098;
  t20435 = t20348 + t20416;
  t20568 = t20154*t20435;
  t20821 = t8429*t20185*t11441;
  t21063 = t20568 + t20821;
  t22944 = t11440*t8429;
  t23032 = t11438*t11425*t11441;
  t23617 = t22944 + t23032;
  t24162 = -1.*t20154*t8429*t20137;
  t24174 = t20185*t11441;
  t24252 = t24162 + t24174;
  t24768 = t11438*t11440*t20137;
  t24857 = -1.*t11425*t20279;
  t24866 = t24768 + t24857;
  t25297 = -1.*t20154*t8429*t20185;
  t25319 = t20435*t11441;
  t25408 = t25297 + t25319;
  t25795 = t11438*t11440*t20185;
  t25806 = -1.*t11425*t21063;
  t25816 = t25795 + t25806;
  t20146 = t11438*t20137*t11425;
  t20292 = t11440*t20279;
  t20321 = t20146 + t20292;
  t26351 = -0.0641*t13662;
  t26373 = -0.28*t20098;
  t26385 = t26351 + t26373;
  t26418 = -1.*t13662;
  t26425 = 1. + t26418;
  t26439 = 0.075*t26425;
  t26445 = 0.355*t13662;
  t26447 = -0.0641*t20098;
  t26450 = t26439 + t26445 + t26447;
  t11437 = t8429*t11425;
  t11442 = -1.*t11438*t11440*t11441;
  t12620 = t11437 + t11442;
  t26350 = -0.325*t16203;
  t26392 = t16409*t26385;
  t26452 = t16203*t26450;
  t26457 = t26350 + t26392 + t26452;
  t26471 = -1.*t16409;
  t26482 = 1. + t26471;
  t26487 = 0.325*t26482;
  t26492 = -1.*t16203*t26385;
  t26496 = t16409*t26450;
  t26505 = t26487 + t26492 + t26496;
  t26204 = -1.*t11438;
  t26210 = 1. + t26204;
  t26315 = -0.1575*t26210;
  t26325 = -0.2255*t11438;
  t26466 = -1.*t8429*t26457;
  t26467 = t26315 + t26325 + t26466;
  t26662 = -0.068*t8429;
  t26674 = t11438*t26457;
  t26704 = t26662 + t26674;
  t26749 = t20154*t26505;
  t26754 = -1.*t26467*t11441;
  t26759 = t26749 + t26754;
  t26468 = t20154*t26467;
  t26506 = t26505*t11441;
  t26548 = t26468 + t26506;
  t26745 = t26704*t11425;
  t26803 = t11440*t26759;
  t26810 = t26745 + t26803;
  t26825 = t11440*t26704;
  t26947 = -1.*t11425*t26759;
  t26995 = t26825 + t26947;
  t20344 = t11438*t20185*t11425;
  t21396 = t11440*t21063;
  t21466 = t20344 + t21396;
  t26552 = t11438*t20154*t26548;
  t28299 = -1.*t26548*t24252;
  t29539 = t26548*t24252;
  t29992 = -1.*t26548*t25408;
  t30040 = -1.*t11438*t20154*t26548;
  t30231 = t26548*t25408;
  t32138 = -1.*t8429*t26704;
  t32213 = t11438*t26704*t20185;
  t31068 = t8429*t26704;
  t31282 = -1.*t11438*t26704*t20137;
  t31626 = -1.*t11438*t26704*t20185;
  t31572 = t11438*t26704*t20137;
  t32511 = t26505*t20185;
  t32457 = -1.*t26505*t20435;
  p_output1[0]=t20321*var2[0] + t12620*var2[1] + t21466*var2[2];
  p_output1[1]=(t22276*t24252 - 1.*t22365*t24866)*var2[0] + (t11438*t20154*t22276 - 1.*t22365*t23617)*var2[1] + (t22276*t25408 - 1.*t22365*t25816)*var2[2];
  p_output1[2]=(t22365*t24252 + t22276*t24866)*var2[0] + (t11438*t20154*t22365 + t22276*t23617)*var2[1] + (t22365*t25408 + t22276*t25816)*var2[2];
  p_output1[3]=(t21466*(-1.*t12620*t26810 - 1.*t23617*t26995 + t30040) + t12620*(t21466*t26810 + t25816*t26995 + t30231))*var2[0] + (t21466*(t20321*t26810 + t24866*t26995 + t29539) + t20321*(-1.*t21466*t26810 - 1.*t25816*t26995 + t29992))*var2[1] + (t20321*(t26552 + t12620*t26810 + t23617*t26995) + t12620*(-1.*t20321*t26810 - 1.*t24866*t26995 + t28299))*var2[2];
  p_output1[4]=(t25408*(t11438*t11441*t26759 + t30040 + t32138) + t11438*t20154*(t21063*t26759 + t30231 + t32213))*var2[0] + (t25408*(t20279*t26759 + t29539 + t31572) + t24252*(-1.*t21063*t26759 + t29992 + t31626))*var2[1] + (t24252*(t26552 - 1.*t11438*t11441*t26759 + t31068) + t11438*t20154*(-1.*t20279*t26759 + t28299 + t31282))*var2[2];
  p_output1[5]=(t11438*t20185*(-1.*t11438*t26467 + t32138) + t8429*(t20435*t26505 + t32213 - 1.*t20185*t26467*t8429))*var2[0] + (t11438*t20185*(t31572 + t32511 - 1.*t20137*t26467*t8429) + t11438*t20137*(t31626 + t32457 + t20185*t26467*t8429))*var2[1] + (t11438*t20137*(t11438*t26467 + t31068) + t8429*(-1.*t20185*t26505 + t31282 + t20137*t26467*t8429))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t20137 + 0.2255*t20435)*var2[0] + (t20185*(-1.*t20185*t26457 + t32457) + t20435*(t20137*t26457 + t32511))*var2[1] - 0.068*t20185*var2[2];
  p_output1[13]=(0.325*t20098 - 1.*t13662*t26385 - 1.*t20098*t26450)*var2[0] + (-0.325*t13662 - 1.*t20098*t26385 + t13662*t26450)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
