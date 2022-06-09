/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:16 GMT+02:00
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
  double t4511;
  double t5139;
  double t5108;
  double t14566;
  double t15790;
  double t14192;
  double t15863;
  double t5135;
  double t5167;
  double t15875;
  double t15876;
  double t15880;
  double t14178;
  double t15307;
  double t15864;
  double t15867;
  double t5138;
  double t5171;
  double t10470;
  double t17272;
  double t17254;
  double t15886;
  double t15887;
  double t15895;
  double t15910;
  double t15917;
  double t15965;
  double t16868;
  double t16896;
  double t16900;
  double t17273;
  double t17274;
  double t17277;
  double t17283;
  double t17285;
  double t17286;
  double t17289;
  double t17292;
  double t17293;
  double t17298;
  double t17299;
  double t17300;
  double t17302;
  double t17304;
  double t17306;
  double t15868;
  double t15897;
  double t15901;
  double t17335;
  double t17352;
  double t17353;
  double t17358;
  double t17364;
  double t17365;
  double t17366;
  double t17367;
  double t17368;
  double t17369;
  double t17377;
  double t17378;
  double t17379;
  double t17380;
  double t17385;
  double t17389;
  double t17393;
  double t17430;
  double t17438;
  double t17446;
  double t17462;
  double t17464;
  double t17482;
  double t17484;
  double t17487;
  double t17491;
  double t17493;
  double t17390;
  double t17450;
  double t17458;
  double t17486;
  double t17494;
  double t17495;
  double t17497;
  double t17501;
  double t17505;
  double t16867;
  double t16941;
  double t17232;
  double t17460;
  double t17509;
  double t17525;
  double t17537;
  double t17546;
  double t17552;
  double t17620;
  double t17627;
  t4511 = Cos(var1[4]);
  t5139 = Cos(var1[5]);
  t5108 = Cos(var1[6]);
  t14566 = Cos(var1[8]);
  t15790 = Sin(var1[7]);
  t14192 = Cos(var1[7]);
  t15863 = Sin(var1[8]);
  t5135 = Sin(var1[5]);
  t5167 = Sin(var1[6]);
  t15875 = t14566*t15790;
  t15876 = -1.*t14192*t15863;
  t15880 = t15875 + t15876;
  t14178 = Sin(var1[4]);
  t15307 = t14192*t14566;
  t15864 = t15790*t15863;
  t15867 = t15307 + t15864;
  t5138 = -1.*t5108*t5135;
  t5171 = -1.*t5139*t5167;
  t10470 = t5138 + t5171;
  t17272 = Cos(var1[3]);
  t17254 = Sin(var1[3]);
  t15886 = t5139*t5108*t15880;
  t15887 = -1.*t5135*t5167*t15880;
  t15895 = t15886 + t15887;
  t15910 = -1.*t14566*t15790;
  t15917 = t14192*t15863;
  t15965 = t15910 + t15917;
  t16868 = t5139*t5108*t15867;
  t16896 = -1.*t5135*t5167*t15867;
  t16900 = t16868 + t16896;
  t17273 = t5139*t5108;
  t17274 = -1.*t5135*t5167;
  t17277 = t17273 + t17274;
  t17283 = t5108*t5135*t15880;
  t17285 = t5139*t5167*t15880;
  t17286 = t17283 + t17285;
  t17289 = t4511*t15867;
  t17292 = -1.*t14178*t15895;
  t17293 = t17289 + t17292;
  t17298 = t5108*t5135*t15867;
  t17299 = t5139*t5167*t15867;
  t17300 = t17298 + t17299;
  t17302 = t4511*t15965;
  t17304 = -1.*t14178*t16900;
  t17306 = t17302 + t17304;
  t15868 = t14178*t15867;
  t15897 = t4511*t15895;
  t15901 = t15868 + t15897;
  t17335 = -1.*t5108;
  t17352 = 1. + t17335;
  t17353 = 0.15121*t17352;
  t17358 = -1.*t14192;
  t17364 = 1. + t17358;
  t17365 = 0.28121*t17364;
  t17366 = -1.*t14566;
  t17367 = 1. + t17366;
  t17368 = 0.50321*t17367;
  t17369 = 0.19821*t14566;
  t17377 = t17368 + t17369;
  t17378 = t14192*t17377;
  t17379 = -0.305*t15790*t15863;
  t17380 = t17365 + t17378 + t17379;
  t17385 = t5108*t17380;
  t17389 = t17353 + t17385;
  t17393 = 0.15121*t5108;
  t17430 = -0.15121*t5167;
  t17438 = t5167*t17380;
  t17446 = t17353 + t17393 + t17430 + t17438;
  t17462 = 0.28121*t15790;
  t17464 = -1.*t17377*t15790;
  t17482 = -0.305*t14192*t15863;
  t17484 = t17462 + t17464 + t17482;
  t17487 = t5139*t17389;
  t17491 = -1.*t5135*t17446;
  t17493 = t17487 + t17491;
  t17390 = t5135*t17389;
  t17450 = t5139*t17446;
  t17458 = t17390 + t17450;
  t17486 = t14178*t17484;
  t17494 = t4511*t17493;
  t17495 = t17486 + t17494;
  t17497 = t4511*t17484;
  t17501 = -1.*t14178*t17493;
  t17505 = t17497 + t17501;
  t16867 = t14178*t15965;
  t16941 = t4511*t16900;
  t17232 = t16867 + t16941;
  t17460 = -1.*t17277*t17458;
  t17509 = t17286*t17458;
  t17525 = t17277*t17458;
  t17537 = -1.*t17300*t17458;
  t17546 = -1.*t17286*t17458;
  t17552 = t17300*t17458;
  t17620 = -1.*t17484*t15867;
  t17627 = t17484*t15965;
  p_output1[0]=t17232*var2[0] + t10470*t4511*var2[1] + t15901*var2[2];
  p_output1[1]=(t17272*t17300 - 1.*t17254*t17306)*var2[0] + (t10470*t14178*t17254 + t17272*t17277)*var2[1] + (t17272*t17286 - 1.*t17254*t17293)*var2[2];
  p_output1[2]=(t17254*t17300 + t17272*t17306)*var2[0] + (-1.*t10470*t14178*t17272 + t17254*t17277)*var2[1] + (t17254*t17286 + t17272*t17293)*var2[2];
  p_output1[3]=(t10470*(t15901*t17495 + t17293*t17505 + t17509)*t4511 + t15901*(t17460 + t10470*t14178*t17505 - 1.*t10470*t17495*t4511))*var2[0] + (t17232*(-1.*t15901*t17495 - 1.*t17293*t17505 + t17546) + t15901*(t17232*t17495 + t17306*t17505 + t17552))*var2[1] + (t10470*(-1.*t17232*t17495 - 1.*t17306*t17505 + t17537)*t4511 + t17232*(-1.*t10470*t14178*t17505 + t17525 + t10470*t17495*t4511))*var2[2];
  p_output1[4]=(t17286*(t17460 - 1.*t10470*t17493) + t17277*(t15867*t17484 + t15895*t17493 + t17509))*var2[0] + (t17300*(-1.*t15895*t17493 + t17546 + t17620) + t17286*(t16900*t17493 + t17552 + t17627))*var2[1] + (t17300*(t10470*t17493 + t17525) + t17277*(-1.*t15965*t17484 - 1.*t16900*t17493 + t17537))*var2[2];
  p_output1[5]=t15867*(-1.*t17446*t5108 + t17389*t5167)*var2[0] + (t15867*(t17627 + t15867*t17389*t5108 + t15867*t17446*t5167) + t15965*(t17620 - 1.*t15880*t17389*t5108 - 1.*t15880*t17446*t5167))*var2[1] + t15965*(t17446*t5108 - 1.*t17389*t5167)*var2[2];
  p_output1[6]=(-0.15121 + t15965*(-1.*t15880*t17380 + t17620) + t15867*(t15867*t17380 + t17627))*var2[1] + (0.15121*t15880 + 0.15121*t15965)*var2[2];
  p_output1[7]=(0.28121*t15863 - 0.305*t14566*t15863 - 1.*t15863*t17377)*var2[0] + (0.28121*t14566 + 0.305*Power(t15863,2) - 1.*t14566*t17377)*var2[2];
  p_output1[8]=-0.305*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
