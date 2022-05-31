/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:53 GMT+02:00
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
  double t14210;
  double t13623;
  double t13854;
  double t14244;
  double t14328;
  double t14367;
  double t14408;
  double t14320;
  double t14411;
  double t14272;
  double t14415;
  double t14268;
  double t14055;
  double t14247;
  double t14250;
  double t8005;
  double t14410;
  double t14419;
  double t14429;
  double t14498;
  double t14455;
  double t14488;
  double t14492;
  double t14446;
  double t14503;
  double t14504;
  double t14505;
  double t14824;
  double t14858;
  double t14910;
  double t14935;
  double t14943;
  double t14946;
  double t14947;
  double t14952;
  double t14953;
  double t14959;
  double t17268;
  double t17355;
  double t17365;
  double t17366;
  double t17373;
  double t17374;
  double t17375;
  double t17380;
  double t17385;
  double t17387;
  double t17392;
  double t17397;
  double t17398;
  double t17402;
  double t17403;
  double t17404;
  double t17405;
  double t17406;
  double t17407;
  double t17408;
  double t17410;
  double t17411;
  double t17412;
  double t17386;
  double t17399;
  double t17400;
  double t14823;
  double t14912;
  double t14913;
  double t14916;
  double t14917;
  double t14922;
  double t17409;
  double t17413;
  double t17454;
  double t17456;
  double t17459;
  double t17460;
  double t17465;
  double t17466;
  double t17467;
  double t14927;
  double t14928;
  double t14934;
  double t17401;
  double t17468;
  double t14267;
  double t14435;
  double t14436;
  double t17471;
  double t17472;
  double t17473;
  double t17503;
  double t17509;
  double t17516;
  double t17520;
  double t17547;
  double t17552;
  t14210 = Cos(var1[7]);
  t13623 = Cos(var1[8]);
  t13854 = Sin(var1[7]);
  t14244 = Sin(var1[8]);
  t14328 = t14210*t13623;
  t14367 = t13854*t14244;
  t14408 = t14328 + t14367;
  t14320 = Cos(var1[6]);
  t14411 = Sin(var1[5]);
  t14272 = Cos(var1[5]);
  t14415 = Sin(var1[6]);
  t14268 = Cos(var1[4]);
  t14055 = -1.*t13623*t13854;
  t14247 = t14210*t14244;
  t14250 = t14055 + t14247;
  t8005 = Sin(var1[4]);
  t14410 = t14272*t14320*t14408;
  t14419 = -1.*t14411*t14415*t14408;
  t14429 = t14410 + t14419;
  t14498 = Sin(var1[3]);
  t14455 = t14320*t14411*t14408;
  t14488 = t14272*t14415*t14408;
  t14492 = t14455 + t14488;
  t14446 = Cos(var1[3]);
  t14503 = t14268*t14250;
  t14504 = -1.*t8005*t14429;
  t14505 = t14503 + t14504;
  t14824 = t13623*t13854;
  t14858 = -1.*t14210*t14244;
  t14910 = t14824 + t14858;
  t14935 = -1.*t14320;
  t14943 = 1. + t14935;
  t14946 = 0.15121*t14943;
  t14947 = -1.*t14210;
  t14952 = 1. + t14947;
  t14953 = 0.28121*t14952;
  t14959 = -1.*t13623;
  t17268 = 1. + t14959;
  t17355 = 0.50321*t17268;
  t17365 = 0.23321*t13623;
  t17366 = t17355 + t17365;
  t17373 = t14210*t17366;
  t17374 = -0.27*t13854*t14244;
  t17375 = t14953 + t17373 + t17374;
  t17380 = t14320*t17375;
  t17385 = t14946 + t17380;
  t17387 = 0.15121*t14320;
  t17392 = -0.15121*t14415;
  t17397 = t14415*t17375;
  t17398 = t14946 + t17387 + t17392 + t17397;
  t17402 = -1.*t14320*t14411;
  t17403 = -1.*t14272*t14415;
  t17404 = t17402 + t17403;
  t17405 = 0.28121*t13854;
  t17406 = -1.*t17366*t13854;
  t17407 = -0.27*t14210*t14244;
  t17408 = t17405 + t17406 + t17407;
  t17410 = t14272*t17385;
  t17411 = -1.*t14411*t17398;
  t17412 = t17410 + t17411;
  t17386 = t14411*t17385;
  t17399 = t14272*t17398;
  t17400 = t17386 + t17399;
  t14823 = t8005*t14408;
  t14912 = t14272*t14320*t14910;
  t14913 = -1.*t14411*t14415*t14910;
  t14916 = t14912 + t14913;
  t14917 = t14268*t14916;
  t14922 = t14823 + t14917;
  t17409 = t8005*t17408;
  t17413 = t14268*t17412;
  t17454 = t17409 + t17413;
  t17456 = t14268*t17408;
  t17459 = -1.*t8005*t17412;
  t17460 = t17456 + t17459;
  t17465 = t14320*t14411*t14910;
  t17466 = t14272*t14415*t14910;
  t17467 = t17465 + t17466;
  t14927 = t14272*t14320;
  t14928 = -1.*t14411*t14415;
  t14934 = t14927 + t14928;
  t17401 = -1.*t14934*t17400;
  t17468 = t17467*t17400;
  t14267 = t8005*t14250;
  t14435 = t14268*t14429;
  t14436 = t14267 + t14435;
  t17471 = t14268*t14408;
  t17472 = -1.*t8005*t14916;
  t17473 = t17471 + t17472;
  t17503 = -1.*t17467*t17400;
  t17509 = t14492*t17400;
  t17516 = -1.*t17408*t14408;
  t17520 = t17408*t14250;
  t17547 = t14934*t17400;
  t17552 = -1.*t14492*t17400;
  p_output1[0]=t14436;
  p_output1[1]=t14446*t14492 - 1.*t14498*t14505;
  p_output1[2]=t14492*t14498 + t14446*t14505;
  p_output1[3]=t14268*t17404*(t14922*t17454 + t17468 + t17460*t17473) + t14922*(t17401 - 1.*t14268*t17404*t17454 + t17404*t17460*t8005);
  p_output1[4]=(t17401 - 1.*t17404*t17412)*t17467 + t14934*(t14408*t17408 + t14916*t17412 + t17468);
  p_output1[5]=t14408*(t14415*t17385 - 1.*t14320*t17398);
  p_output1[6]=0;
  p_output1[7]=0.28121*t14244 - 0.27*t13623*t14244 - 1.*t14244*t17366;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t14268*t17404;
  p_output1[19]=t14446*t14934 + t14498*t17404*t8005;
  p_output1[20]=t14498*t14934 - 1.*t14446*t17404*t8005;
  p_output1[21]=t14436*(-1.*t14922*t17454 - 1.*t17460*t17473 + t17503) + t14922*(t14436*t17454 + t14505*t17460 + t17509);
  p_output1[22]=t14492*(-1.*t14916*t17412 + t17503 + t17516) + t17467*(t14429*t17412 + t17509 + t17520);
  p_output1[23]=t14250*(-1.*t14320*t14910*t17385 - 1.*t14415*t14910*t17398 + t17516) + t14408*(t14320*t14408*t17385 + t14408*t14415*t17398 + t17520);
  p_output1[24]=-0.15121 + t14250*(-1.*t14910*t17375 + t17516) + t14408*(t14408*t17375 + t17520);
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
  p_output1[36]=t14922;
  p_output1[37]=t14446*t17467 - 1.*t14498*t17473;
  p_output1[38]=t14498*t17467 + t14446*t17473;
  p_output1[39]=t14268*t17404*(-1.*t14436*t17454 - 1.*t14505*t17460 + t17552) + t14436*(t14268*t17404*t17454 + t17547 - 1.*t17404*t17460*t8005);
  p_output1[40]=t14492*(t17404*t17412 + t17547) + t14934*(-1.*t14250*t17408 - 1.*t14429*t17412 + t17552);
  p_output1[41]=t14250*(-1.*t14415*t17385 + t14320*t17398);
  p_output1[42]=0.15121*t14250 + 0.15121*t14910;
  p_output1[43]=0.28121*t13623 + 0.27*Power(t14244,2) - 1.*t13623*t17366;
  p_output1[44]=-0.27;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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

#include "fFlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
