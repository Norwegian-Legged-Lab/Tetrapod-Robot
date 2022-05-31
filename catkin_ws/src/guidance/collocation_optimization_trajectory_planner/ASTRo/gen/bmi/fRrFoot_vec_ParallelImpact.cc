/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:39 GMT+02:00
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
  double t3047;
  double t4956;
  double t3721;
  double t32951;
  double t33203;
  double t31947;
  double t33470;
  double t4333;
  double t33940;
  double t33957;
  double t33968;
  double t16365;
  double t33740;
  double t34194;
  double t34255;
  double t34270;
  double t4637;
  double t28501;
  double t31038;
  double t34400;
  double t34377;
  double t33192;
  double t33727;
  double t33731;
  double t34030;
  double t34032;
  double t34044;
  double t34285;
  double t34289;
  double t34317;
  double t34402;
  double t34438;
  double t34441;
  double t34935;
  double t34945;
  double t34953;
  double t35011;
  double t35013;
  double t35015;
  double t35081;
  double t35085;
  double t35088;
  double t35118;
  double t35119;
  double t35120;
  double t33751;
  double t34086;
  double t34125;
  double t35216;
  double t35218;
  double t35220;
  double t35258;
  double t35270;
  double t35283;
  double t35286;
  double t35289;
  double t35295;
  double t35308;
  double t35310;
  double t35326;
  double t35328;
  double t35329;
  double t35347;
  double t35349;
  double t35230;
  double t35246;
  double t35334;
  double t35339;
  double t35354;
  double t35355;
  double t35356;
  double t35357;
  double t35363;
  double t35364;
  double t35365;
  double t35340;
  double t35350;
  double t35351;
  double t35362;
  double t35366;
  double t35368;
  double t35374;
  double t35375;
  double t35376;
  double t34156;
  double t34330;
  double t34339;
  double t35352;
  double t35380;
  double t35393;
  double t35399;
  double t35427;
  double t35442;
  double t35676;
  double t35688;
  t3047 = Cos(var1[4]);
  t4956 = Cos(var1[15]);
  t3721 = Cos(var1[5]);
  t32951 = Cos(var1[17]);
  t33203 = Sin(var1[16]);
  t31947 = Cos(var1[16]);
  t33470 = Sin(var1[17]);
  t4333 = Sin(var1[15]);
  t33940 = -1.*t32951*t33203;
  t33957 = t31947*t33470;
  t33968 = t33940 + t33957;
  t16365 = Sin(var1[5]);
  t33740 = Sin(var1[4]);
  t34194 = -1.*t31947*t32951;
  t34255 = -1.*t33203*t33470;
  t34270 = t34194 + t34255;
  t4637 = t3721*t4333;
  t28501 = t4956*t16365;
  t31038 = t4637 + t28501;
  t34400 = Cos(var1[3]);
  t34377 = Sin(var1[3]);
  t33192 = t31947*t32951;
  t33727 = t33203*t33470;
  t33731 = t33192 + t33727;
  t34030 = t4956*t3721*t33968;
  t34032 = -1.*t4333*t33968*t16365;
  t34044 = t34030 + t34032;
  t34285 = t4956*t3721*t34270;
  t34289 = -1.*t4333*t34270*t16365;
  t34317 = t34285 + t34289;
  t34402 = -1.*t4956*t3721;
  t34438 = t4333*t16365;
  t34441 = t34402 + t34438;
  t34935 = t3721*t4333*t33968;
  t34945 = t4956*t33968*t16365;
  t34953 = t34935 + t34945;
  t35011 = t3047*t33731;
  t35013 = -1.*t33740*t34044;
  t35015 = t35011 + t35013;
  t35081 = t3721*t4333*t34270;
  t35085 = t4956*t34270*t16365;
  t35088 = t35081 + t35085;
  t35118 = t3047*t33968;
  t35119 = -1.*t33740*t34317;
  t35120 = t35118 + t35119;
  t33751 = t33731*t33740;
  t34086 = t3047*t34044;
  t34125 = t33751 + t34086;
  t35216 = -1.*t4956;
  t35218 = 1. + t35216;
  t35220 = -0.15121*t35218;
  t35258 = -1.*t31947;
  t35270 = 1. + t35258;
  t35283 = -0.28121*t35270;
  t35286 = -1.*t32951;
  t35289 = 1. + t35286;
  t35295 = -0.50321*t35289;
  t35308 = -0.19821*t32951;
  t35310 = t35295 + t35308;
  t35326 = t31947*t35310;
  t35328 = 0.305*t33203*t33470;
  t35329 = t35283 + t35326 + t35328;
  t35347 = t4956*t35329;
  t35349 = t35220 + t35347;
  t35230 = -0.15121*t4956;
  t35246 = 0.15121*t4333;
  t35334 = t4333*t35329;
  t35339 = t35220 + t35230 + t35246 + t35334;
  t35354 = 0.28121*t33203;
  t35355 = t35310*t33203;
  t35356 = -0.305*t31947*t33470;
  t35357 = t35354 + t35355 + t35356;
  t35363 = t3721*t35349;
  t35364 = -1.*t35339*t16365;
  t35365 = t35363 + t35364;
  t35340 = t3721*t35339;
  t35350 = t35349*t16365;
  t35351 = t35340 + t35350;
  t35362 = t35357*t33740;
  t35366 = t3047*t35365;
  t35368 = t35362 + t35366;
  t35374 = t3047*t35357;
  t35375 = -1.*t33740*t35365;
  t35376 = t35374 + t35375;
  t34156 = t33968*t33740;
  t34330 = t3047*t34317;
  t34339 = t34156 + t34330;
  t35352 = -1.*t34441*t35351;
  t35380 = t34953*t35351;
  t35393 = t34441*t35351;
  t35399 = -1.*t35088*t35351;
  t35427 = -1.*t34953*t35351;
  t35442 = t35088*t35351;
  t35676 = -1.*t35357*t33731;
  t35688 = t35357*t33968;
  p_output1[0]=t34339*var2[0] + t3047*t31038*var2[1] + t34125*var2[2];
  p_output1[1]=(t34400*t35088 - 1.*t34377*t35120)*var2[0] + (t31038*t33740*t34377 + t34400*t34441)*var2[1] + (t34400*t34953 - 1.*t34377*t35015)*var2[2];
  p_output1[2]=(t34377*t35088 + t34400*t35120)*var2[0] + (-1.*t31038*t33740*t34400 + t34377*t34441)*var2[1] + (t34377*t34953 + t34400*t35015)*var2[2];
  p_output1[3]=(t34125*(t35352 - 1.*t3047*t31038*t35368 + t31038*t33740*t35376) + t3047*t31038*(t34125*t35368 + t35015*t35376 + t35380))*var2[0] + (t34339*(-1.*t34125*t35368 - 1.*t35015*t35376 + t35427) + t34125*(t34339*t35368 + t35120*t35376 + t35442))*var2[1] + (t34339*(t3047*t31038*t35368 - 1.*t31038*t33740*t35376 + t35393) + t3047*t31038*(-1.*t34339*t35368 - 1.*t35120*t35376 + t35399))*var2[2];
  p_output1[4]=(t34953*(t35352 - 1.*t31038*t35365) + t34441*(t33731*t35357 + t34044*t35365 + t35380))*var2[0] + (t35088*(-1.*t34044*t35365 + t35427 + t35676) + t34953*(t34317*t35365 + t35442 + t35688))*var2[1] + (t35088*(t31038*t35365 + t35393) + t34441*(-1.*t33968*t35357 - 1.*t34317*t35365 + t35399))*var2[2];
  p_output1[5]=t33731*(-1.*t35349*t4333 + t35339*t4956)*var2[0] + (t33968*(t35676 - 1.*t33968*t35339*t4333 - 1.*t33968*t35349*t4956) + t33731*(t35688 + t34270*t35339*t4333 + t34270*t35349*t4956))*var2[1] + t33968*(t35349*t4333 - 1.*t35339*t4956)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t33731 - 0.15121*t34270)*var2[0] + (-0.15121 + t33968*(-1.*t33968*t35329 + t35676) + t33731*(t34270*t35329 + t35688))*var2[1];
  p_output1[16]=(0.28121*t33470 - 0.305*t32951*t33470 + t33470*t35310)*var2[0] + (0.28121*t32951 + 0.305*Power(t33470,2) + t32951*t35310)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
