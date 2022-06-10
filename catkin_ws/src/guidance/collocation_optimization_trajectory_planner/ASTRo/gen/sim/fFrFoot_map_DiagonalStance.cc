/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:56 GMT+02:00
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
  double t3263;
  double t883;
  double t2294;
  double t3276;
  double t4038;
  double t4182;
  double t4406;
  double t4024;
  double t4594;
  double t3916;
  double t5628;
  double t3905;
  double t2358;
  double t3293;
  double t3367;
  double t3399;
  double t4410;
  double t5635;
  double t5661;
  double t5811;
  double t5773;
  double t5781;
  double t5785;
  double t5759;
  double t5841;
  double t5842;
  double t5855;
  double t5929;
  double t5930;
  double t5950;
  double t6121;
  double t6124;
  double t6182;
  double t6192;
  double t6201;
  double t6266;
  double t6288;
  double t6309;
  double t6314;
  double t6316;
  double t6332;
  double t6361;
  double t6372;
  double t6437;
  double t6469;
  double t6494;
  double t6134;
  double t6138;
  double t6144;
  double t6375;
  double t6377;
  double t6617;
  double t6669;
  double t6688;
  double t6735;
  double t6805;
  double t6822;
  double t6823;
  double t6846;
  double t6878;
  double t6899;
  double t6410;
  double t6512;
  double t6544;
  double t5915;
  double t5968;
  double t6001;
  double t6004;
  double t6021;
  double t6096;
  double t6842;
  double t6909;
  double t6916;
  double t6935;
  double t6936;
  double t6937;
  double t6966;
  double t6978;
  double t6981;
  double t6113;
  double t6114;
  double t6115;
  double t6616;
  double t6987;
  double t3836;
  double t5700;
  double t5730;
  double t7009;
  double t7020;
  double t7021;
  double t7411;
  double t7455;
  double t7543;
  double t7941;
  double t8285;
  double t8353;
  t3263 = Cos(var1[13]);
  t883 = Cos(var1[14]);
  t2294 = Sin(var1[13]);
  t3276 = Sin(var1[14]);
  t4038 = t3263*t883;
  t4182 = t2294*t3276;
  t4406 = t4038 + t4182;
  t4024 = Cos(var1[5]);
  t4594 = Sin(var1[12]);
  t3916 = Cos(var1[12]);
  t5628 = Sin(var1[5]);
  t3905 = Cos(var1[4]);
  t2358 = -1.*t883*t2294;
  t3293 = t3263*t3276;
  t3367 = t2358 + t3293;
  t3399 = Sin(var1[4]);
  t4410 = t3916*t4024*t4406;
  t5635 = -1.*t4594*t4406*t5628;
  t5661 = t4410 + t5635;
  t5811 = Sin(var1[3]);
  t5773 = t4024*t4594*t4406;
  t5781 = t3916*t4406*t5628;
  t5785 = t5773 + t5781;
  t5759 = Cos(var1[3]);
  t5841 = t3905*t3367;
  t5842 = -1.*t3399*t5661;
  t5855 = t5841 + t5842;
  t5929 = t883*t2294;
  t5930 = -1.*t3263*t3276;
  t5950 = t5929 + t5930;
  t6121 = -1.*t3916;
  t6124 = 1. + t6121;
  t6182 = -1.*t3263;
  t6192 = 1. + t6182;
  t6201 = 0.28121*t6192;
  t6266 = -1.*t883;
  t6288 = 1. + t6266;
  t6309 = 0.50321*t6288;
  t6314 = 0.19821*t883;
  t6316 = t6309 + t6314;
  t6332 = t3263*t6316;
  t6361 = -0.305*t2294*t3276;
  t6372 = t6201 + t6332 + t6361;
  t6437 = 0.15121*t6124;
  t6469 = t3916*t6372;
  t6494 = t6437 + t6469;
  t6134 = -0.15121*t6124;
  t6138 = -0.15121*t3916;
  t6144 = -0.15121*t4594;
  t6375 = t4594*t6372;
  t6377 = t6134 + t6138 + t6144 + t6375;
  t6617 = -1.*t4024*t4594;
  t6669 = -1.*t3916*t5628;
  t6688 = t6617 + t6669;
  t6735 = 0.28121*t2294;
  t6805 = -1.*t6316*t2294;
  t6822 = -0.305*t3263*t3276;
  t6823 = t6735 + t6805 + t6822;
  t6846 = t4024*t6494;
  t6878 = -1.*t6377*t5628;
  t6899 = t6846 + t6878;
  t6410 = t4024*t6377;
  t6512 = t6494*t5628;
  t6544 = t6410 + t6512;
  t5915 = t4406*t3399;
  t5968 = t3916*t4024*t5950;
  t6001 = -1.*t4594*t5950*t5628;
  t6004 = t5968 + t6001;
  t6021 = t3905*t6004;
  t6096 = t5915 + t6021;
  t6842 = t6823*t3399;
  t6909 = t3905*t6899;
  t6916 = t6842 + t6909;
  t6935 = t3905*t6823;
  t6936 = -1.*t3399*t6899;
  t6937 = t6935 + t6936;
  t6966 = t4024*t4594*t5950;
  t6978 = t3916*t5950*t5628;
  t6981 = t6966 + t6978;
  t6113 = t3916*t4024;
  t6114 = -1.*t4594*t5628;
  t6115 = t6113 + t6114;
  t6616 = -1.*t6115*t6544;
  t6987 = t6981*t6544;
  t3836 = t3367*t3399;
  t5700 = t3905*t5661;
  t5730 = t3836 + t5700;
  t7009 = t3905*t4406;
  t7020 = -1.*t3399*t6004;
  t7021 = t7009 + t7020;
  t7411 = -1.*t6981*t6544;
  t7455 = t5785*t6544;
  t7543 = -1.*t6823*t4406;
  t7941 = t6823*t3367;
  t8285 = t6115*t6544;
  t8353 = -1.*t5785*t6544;
  p_output1[0]=t5730;
  p_output1[1]=t5759*t5785 - 1.*t5811*t5855;
  p_output1[2]=t5785*t5811 + t5759*t5855;
  p_output1[3]=t6096*(t6616 - 1.*t3905*t6688*t6916 + t3399*t6688*t6937) + t3905*t6688*(t6096*t6916 + t6987 + t6937*t7021);
  p_output1[4]=(t6616 - 1.*t6688*t6899)*t6981 + t6115*(t4406*t6823 + t6004*t6899 + t6987);
  p_output1[5]=t4406*(-1.*t3916*t6377 + t4594*t6494);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3276 - 1.*t3276*t6316 - 0.305*t3276*t883;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3905*t6688;
  p_output1[19]=t5759*t6115 + t3399*t5811*t6688;
  p_output1[20]=t5811*t6115 - 1.*t3399*t5759*t6688;
  p_output1[21]=t5730*(-1.*t6096*t6916 - 1.*t6937*t7021 + t7411) + t6096*(t5730*t6916 + t5855*t6937 + t7455);
  p_output1[22]=t5785*(-1.*t6004*t6899 + t7411 + t7543) + t6981*(t5661*t6899 + t7455 + t7941);
  p_output1[23]=t3367*(-1.*t4594*t5950*t6377 - 1.*t3916*t5950*t6494 + t7543) + t4406*(t4406*t4594*t6377 + t3916*t4406*t6494 + t7941);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t3367*(-1.*t5950*t6372 + t7543) + t4406*(t4406*t6372 + t7941);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6096;
  p_output1[37]=t5759*t6981 - 1.*t5811*t7021;
  p_output1[38]=t5811*t6981 + t5759*t7021;
  p_output1[39]=t5730*(t3905*t6688*t6916 - 1.*t3399*t6688*t6937 + t8285) + t3905*t6688*(-1.*t5730*t6916 - 1.*t5855*t6937 + t8353);
  p_output1[40]=t5785*(t6688*t6899 + t8285) + t6115*(-1.*t3367*t6823 - 1.*t5661*t6899 + t8353);
  p_output1[41]=t3367*(t3916*t6377 - 1.*t4594*t6494);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t3367 - 0.15121*t5950;
  p_output1[49]=0.305*Power(t3276,2) + 0.28121*t883 - 1.*t6316*t883;
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
