/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:57 GMT+02:00
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
  double t4337;
  double t1402;
  double t2062;
  double t21849;
  double t37750;
  double t38057;
  double t38059;
  double t37749;
  double t38175;
  double t37742;
  double t38177;
  double t37740;
  double t2140;
  double t24821;
  double t36210;
  double t37709;
  double t38162;
  double t38200;
  double t38240;
  double t38373;
  double t38353;
  double t38354;
  double t38359;
  double t38352;
  double t38377;
  double t38380;
  double t40446;
  double t41209;
  double t41227;
  double t41286;
  double t41289;
  double t41290;
  double t41302;
  double t41311;
  double t41321;
  double t41344;
  double t41354;
  double t41356;
  double t41360;
  double t41375;
  double t41384;
  double t41398;
  double t41403;
  double t41231;
  double t41254;
  double t41255;
  double t41378;
  double t41379;
  double t41495;
  double t41499;
  double t41503;
  double t41540;
  double t41581;
  double t41595;
  double t41601;
  double t41799;
  double t41834;
  double t42335;
  double t41381;
  double t41405;
  double t41416;
  double t40749;
  double t40990;
  double t41065;
  double t41077;
  double t41087;
  double t41090;
  double t41093;
  double t41110;
  double t41117;
  double t41624;
  double t42536;
  double t44734;
  double t46627;
  double t48728;
  double t50264;
  double t51026;
  double t51225;
  double t51543;
  double t41120;
  double t41128;
  double t41200;
  double t41433;
  double t51545;
  double t37739;
  double t38347;
  double t38351;
  double t51562;
  double t51565;
  double t51566;
  double t52166;
  double t52193;
  double t52312;
  double t52356;
  double t52559;
  double t52576;
  t4337 = Cos(var1[10]);
  t1402 = Cos(var1[11]);
  t2062 = Sin(var1[10]);
  t21849 = Sin(var1[11]);
  t37750 = -1.*t4337*t1402;
  t38057 = -1.*t2062*t21849;
  t38059 = t37750 + t38057;
  t37749 = Cos(var1[5]);
  t38175 = Sin(var1[9]);
  t37742 = Cos(var1[9]);
  t38177 = Sin(var1[5]);
  t37740 = Cos(var1[4]);
  t2140 = -1.*t1402*t2062;
  t24821 = t4337*t21849;
  t36210 = t2140 + t24821;
  t37709 = Sin(var1[4]);
  t38162 = t37742*t37749*t38059;
  t38200 = -1.*t38175*t38059*t38177;
  t38240 = t38162 + t38200;
  t38373 = Sin(var1[3]);
  t38353 = t37749*t38175*t38059;
  t38354 = t37742*t38059*t38177;
  t38359 = t38353 + t38354;
  t38352 = Cos(var1[3]);
  t38377 = t37740*t36210;
  t38380 = -1.*t37709*t38240;
  t40446 = t38377 + t38380;
  t41209 = -1.*t37742;
  t41227 = 1. + t41209;
  t41286 = -1.*t4337;
  t41289 = 1. + t41286;
  t41290 = -0.28121*t41289;
  t41302 = -1.*t1402;
  t41311 = 1. + t41302;
  t41321 = -0.50321*t41311;
  t41344 = -0.23321*t1402;
  t41354 = t41321 + t41344;
  t41356 = t4337*t41354;
  t41360 = 0.27*t2062*t21849;
  t41375 = t41290 + t41356 + t41360;
  t41384 = -0.15121*t41227;
  t41398 = t37742*t41375;
  t41403 = t41384 + t41398;
  t41231 = 0.15121*t41227;
  t41254 = 0.15121*t37742;
  t41255 = 0.15121*t38175;
  t41378 = t38175*t41375;
  t41379 = t41231 + t41254 + t41255 + t41378;
  t41495 = t37749*t38175;
  t41499 = t37742*t38177;
  t41503 = t41495 + t41499;
  t41540 = 0.28121*t2062;
  t41581 = t41354*t2062;
  t41595 = -0.27*t4337*t21849;
  t41601 = t41540 + t41581 + t41595;
  t41799 = t37749*t41403;
  t41834 = -1.*t41379*t38177;
  t42335 = t41799 + t41834;
  t41381 = t37749*t41379;
  t41405 = t41403*t38177;
  t41416 = t41381 + t41405;
  t40749 = t4337*t1402;
  t40990 = t2062*t21849;
  t41065 = t40749 + t40990;
  t41077 = t41065*t37709;
  t41087 = t37742*t37749*t36210;
  t41090 = -1.*t38175*t36210*t38177;
  t41093 = t41087 + t41090;
  t41110 = t37740*t41093;
  t41117 = t41077 + t41110;
  t41624 = t41601*t37709;
  t42536 = t37740*t42335;
  t44734 = t41624 + t42536;
  t46627 = t37740*t41601;
  t48728 = -1.*t37709*t42335;
  t50264 = t46627 + t48728;
  t51026 = t37749*t38175*t36210;
  t51225 = t37742*t36210*t38177;
  t51543 = t51026 + t51225;
  t41120 = -1.*t37742*t37749;
  t41128 = t38175*t38177;
  t41200 = t41120 + t41128;
  t41433 = -1.*t41200*t41416;
  t51545 = t51543*t41416;
  t37739 = t36210*t37709;
  t38347 = t37740*t38240;
  t38351 = t37739 + t38347;
  t51562 = t37740*t41065;
  t51565 = -1.*t37709*t41093;
  t51566 = t51562 + t51565;
  t52166 = -1.*t51543*t41416;
  t52193 = t38359*t41416;
  t52312 = -1.*t41601*t41065;
  t52356 = t41601*t36210;
  t52559 = t41200*t41416;
  t52576 = -1.*t38359*t41416;
  p_output1[0]=t38351;
  p_output1[1]=t38352*t38359 - 1.*t38373*t40446;
  p_output1[2]=t38359*t38373 + t38352*t40446;
  p_output1[3]=t41117*(t41433 - 1.*t37740*t41503*t44734 + t37709*t41503*t50264) + t37740*t41503*(t41117*t44734 + t51545 + t50264*t51566);
  p_output1[4]=(t41433 - 1.*t41503*t42335)*t51543 + t41200*(t41065*t41601 + t41093*t42335 + t51545);
  p_output1[5]=t41065*(t37742*t41379 - 1.*t38175*t41403);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t38059 + 0.15121*t41065;
  p_output1[10]=0.28121*t21849 - 0.27*t1402*t21849 + t21849*t41354;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t37740*t41503;
  p_output1[19]=t38352*t41200 + t37709*t38373*t41503;
  p_output1[20]=t38373*t41200 - 1.*t37709*t38352*t41503;
  p_output1[21]=t38351*(-1.*t41117*t44734 - 1.*t50264*t51566 + t52166) + t41117*(t38351*t44734 + t40446*t50264 + t52193);
  p_output1[22]=t38359*(-1.*t41093*t42335 + t52166 + t52312) + t51543*(t38240*t42335 + t52193 + t52356);
  p_output1[23]=t36210*(-1.*t36210*t38175*t41379 - 1.*t36210*t37742*t41403 + t52312) + t41065*(t38059*t38175*t41379 + t37742*t38059*t41403 + t52356);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t36210*(-1.*t36210*t41375 + t52312) + t41065*(t38059*t41375 + t52356);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t41117;
  p_output1[37]=t38352*t51543 - 1.*t38373*t51566;
  p_output1[38]=t38373*t51543 + t38352*t51566;
  p_output1[39]=t38351*(t37740*t41503*t44734 - 1.*t37709*t41503*t50264 + t52559) + t37740*t41503*(-1.*t38351*t44734 - 1.*t40446*t50264 + t52576);
  p_output1[40]=t38359*(t41503*t42335 + t52559) + t41200*(-1.*t36210*t41601 - 1.*t38240*t42335 + t52576);
  p_output1[41]=t36210*(-1.*t37742*t41379 + t38175*t41403);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t1402 + 0.27*Power(t21849,2) + t1402*t41354;
  p_output1[47]=-0.27;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
