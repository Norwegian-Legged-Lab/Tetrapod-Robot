/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:43 GMT+02:00
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
  double t3648;
  double t3684;
  double t3649;
  double t3722;
  double t3734;
  double t3718;
  double t3735;
  double t3662;
  double t13461;
  double t13462;
  double t13463;
  double t3711;
  double t13458;
  double t3726;
  double t11628;
  double t13431;
  double t3663;
  double t3712;
  double t3713;
  double t13992;
  double t13982;
  double t13899;
  double t13907;
  double t13910;
  double t13956;
  double t13957;
  double t13959;
  double t13972;
  double t13973;
  double t13974;
  double t13994;
  double t13995;
  double t13998;
  double t14005;
  double t14006;
  double t14007;
  double t14032;
  double t14046;
  double t14048;
  double t14060;
  double t14065;
  double t14069;
  double t14074;
  double t14075;
  double t14079;
  double t13459;
  double t13911;
  double t13924;
  double t14174;
  double t14181;
  double t14196;
  double t14197;
  double t14199;
  double t14201;
  double t14202;
  double t14207;
  double t14208;
  double t14209;
  double t14212;
  double t14213;
  double t14235;
  double t14443;
  double t14447;
  double t14449;
  double t14184;
  double t14188;
  double t14195;
  double t14236;
  double t14271;
  double t14483;
  double t14499;
  double t14500;
  double t14501;
  double t14509;
  double t14512;
  double t14513;
  double t14330;
  double t14454;
  double t14456;
  double t14503;
  double t14516;
  double t14517;
  double t14539;
  double t14629;
  double t14642;
  double t13971;
  double t13977;
  double t13979;
  double t14480;
  double t14649;
  double t14658;
  double t14676;
  double t14687;
  double t14694;
  double t14735;
  double t14740;
  t3648 = Cos(var1[4]);
  t3684 = Cos(var1[12]);
  t3649 = Cos(var1[5]);
  t3722 = Cos(var1[14]);
  t3734 = Sin(var1[13]);
  t3718 = Cos(var1[13]);
  t3735 = Sin(var1[14]);
  t3662 = Sin(var1[12]);
  t13461 = t3722*t3734;
  t13462 = -1.*t3718*t3735;
  t13463 = t13461 + t13462;
  t3711 = Sin(var1[5]);
  t13458 = Sin(var1[4]);
  t3726 = t3718*t3722;
  t11628 = t3734*t3735;
  t13431 = t3726 + t11628;
  t3663 = -1.*t3649*t3662;
  t3712 = -1.*t3684*t3711;
  t3713 = t3663 + t3712;
  t13992 = Cos(var1[3]);
  t13982 = Sin(var1[3]);
  t13899 = t3684*t3649*t13463;
  t13907 = -1.*t3662*t13463*t3711;
  t13910 = t13899 + t13907;
  t13956 = -1.*t3722*t3734;
  t13957 = t3718*t3735;
  t13959 = t13956 + t13957;
  t13972 = t3684*t3649*t13431;
  t13973 = -1.*t3662*t13431*t3711;
  t13974 = t13972 + t13973;
  t13994 = t3684*t3649;
  t13995 = -1.*t3662*t3711;
  t13998 = t13994 + t13995;
  t14005 = t3649*t3662*t13463;
  t14006 = t3684*t13463*t3711;
  t14007 = t14005 + t14006;
  t14032 = t3648*t13431;
  t14046 = -1.*t13458*t13910;
  t14048 = t14032 + t14046;
  t14060 = t3649*t3662*t13431;
  t14065 = t3684*t13431*t3711;
  t14069 = t14060 + t14065;
  t14074 = t3648*t13959;
  t14075 = -1.*t13458*t13974;
  t14079 = t14074 + t14075;
  t13459 = t13431*t13458;
  t13911 = t3648*t13910;
  t13924 = t13459 + t13911;
  t14174 = -1.*t3684;
  t14181 = 1. + t14174;
  t14196 = -1.*t3718;
  t14197 = 1. + t14196;
  t14199 = 0.28121*t14197;
  t14201 = -1.*t3722;
  t14202 = 1. + t14201;
  t14207 = 0.50321*t14202;
  t14208 = 0.19821*t3722;
  t14209 = t14207 + t14208;
  t14212 = t3718*t14209;
  t14213 = -0.305*t3734*t3735;
  t14235 = t14199 + t14212 + t14213;
  t14443 = 0.15121*t14181;
  t14447 = t3684*t14235;
  t14449 = t14443 + t14447;
  t14184 = -0.15121*t14181;
  t14188 = -0.15121*t3684;
  t14195 = -0.15121*t3662;
  t14236 = t3662*t14235;
  t14271 = t14184 + t14188 + t14195 + t14236;
  t14483 = 0.28121*t3734;
  t14499 = -1.*t14209*t3734;
  t14500 = -0.305*t3718*t3735;
  t14501 = t14483 + t14499 + t14500;
  t14509 = t3649*t14449;
  t14512 = -1.*t14271*t3711;
  t14513 = t14509 + t14512;
  t14330 = t3649*t14271;
  t14454 = t14449*t3711;
  t14456 = t14330 + t14454;
  t14503 = t14501*t13458;
  t14516 = t3648*t14513;
  t14517 = t14503 + t14516;
  t14539 = t3648*t14501;
  t14629 = -1.*t13458*t14513;
  t14642 = t14539 + t14629;
  t13971 = t13959*t13458;
  t13977 = t3648*t13974;
  t13979 = t13971 + t13977;
  t14480 = -1.*t13998*t14456;
  t14649 = t14007*t14456;
  t14658 = t13998*t14456;
  t14676 = -1.*t14069*t14456;
  t14687 = -1.*t14007*t14456;
  t14694 = t14069*t14456;
  t14735 = -1.*t14501*t13431;
  t14740 = t14501*t13959;
  p_output1[0]=t13979*var2[0] + t3648*t3713*var2[1] + t13924*var2[2];
  p_output1[1]=(t13992*t14069 - 1.*t13982*t14079)*var2[0] + (t13992*t13998 + t13458*t13982*t3713)*var2[1] + (t13992*t14007 - 1.*t13982*t14048)*var2[2];
  p_output1[2]=(t13982*t14069 + t13992*t14079)*var2[0] + (t13982*t13998 - 1.*t13458*t13992*t3713)*var2[1] + (t13982*t14007 + t13992*t14048)*var2[2];
  p_output1[3]=((t13924*t14517 + t14048*t14642 + t14649)*t3648*t3713 + t13924*(t14480 + t13458*t14642*t3713 - 1.*t14517*t3648*t3713))*var2[0] + (t13979*(-1.*t13924*t14517 - 1.*t14048*t14642 + t14687) + t13924*(t13979*t14517 + t14079*t14642 + t14694))*var2[1] + ((-1.*t13979*t14517 - 1.*t14079*t14642 + t14676)*t3648*t3713 + t13979*(t14658 - 1.*t13458*t14642*t3713 + t14517*t3648*t3713))*var2[2];
  p_output1[4]=(t13998*(t13431*t14501 + t13910*t14513 + t14649) + t14007*(t14480 - 1.*t14513*t3713))*var2[0] + (t14069*(-1.*t13910*t14513 + t14687 + t14735) + t14007*(t13974*t14513 + t14694 + t14740))*var2[1] + (t13998*(-1.*t13959*t14501 - 1.*t13974*t14513 + t14676) + t14069*(t14658 + t14513*t3713))*var2[2];
  p_output1[5]=t13431*(t14449*t3662 - 1.*t14271*t3684)*var2[0] + (t13431*(t14740 + t13431*t14271*t3662 + t13431*t14449*t3684) + t13959*(t14735 - 1.*t13463*t14271*t3662 - 1.*t13463*t14449*t3684))*var2[1] + t13959*(-1.*t14449*t3662 + t14271*t3684)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t13959*(-1.*t13463*t14235 + t14735) + t13431*(t13431*t14235 + t14740))*var2[1] + (-0.15121*t13463 - 0.15121*t13959)*var2[2];
  p_output1[13]=(0.28121*t3735 - 1.*t14209*t3735 - 0.305*t3722*t3735)*var2[0] + (0.28121*t3722 - 1.*t14209*t3722 + 0.305*Power(t3735,2))*var2[2];
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
