/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:35 GMT+02:00
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
  double t2354;
  double t5136;
  double t3650;
  double t5457;
  double t5520;
  double t5393;
  double t5537;
  double t4864;
  double t5617;
  double t5619;
  double t5649;
  double t5198;
  double t5596;
  double t5886;
  double t5893;
  double t5926;
  double t5122;
  double t5267;
  double t5268;
  double t7458;
  double t7448;
  double t5462;
  double t5580;
  double t5582;
  double t5661;
  double t5687;
  double t5700;
  double t6476;
  double t7181;
  double t7262;
  double t7460;
  double t7464;
  double t7485;
  double t7573;
  double t7592;
  double t7594;
  double t7604;
  double t7631;
  double t7637;
  double t7665;
  double t7673;
  double t7681;
  double t7697;
  double t7701;
  double t7715;
  double t5598;
  double t5758;
  double t5773;
  double t7919;
  double t7942;
  double t7949;
  double t7961;
  double t7972;
  double t8013;
  double t8050;
  double t8051;
  double t8053;
  double t8059;
  double t8061;
  double t8063;
  double t8086;
  double t8106;
  double t8139;
  double t8158;
  double t7955;
  double t7960;
  double t8108;
  double t8123;
  double t8200;
  double t8210;
  double t8213;
  double t8215;
  double t8240;
  double t8243;
  double t8246;
  double t8124;
  double t8182;
  double t8184;
  double t8216;
  double t8251;
  double t8262;
  double t8297;
  double t8303;
  double t8306;
  double t5861;
  double t7398;
  double t7415;
  double t8199;
  double t8349;
  double t8370;
  double t8394;
  double t8429;
  double t8493;
  double t8616;
  double t8784;
  t2354 = Cos(var1[4]);
  t5136 = Cos(var1[15]);
  t3650 = Cos(var1[5]);
  t5457 = Cos(var1[17]);
  t5520 = Sin(var1[16]);
  t5393 = Cos(var1[16]);
  t5537 = Sin(var1[17]);
  t4864 = Sin(var1[15]);
  t5617 = -1.*t5457*t5520;
  t5619 = t5393*t5537;
  t5649 = t5617 + t5619;
  t5198 = Sin(var1[5]);
  t5596 = Sin(var1[4]);
  t5886 = -1.*t5393*t5457;
  t5893 = -1.*t5520*t5537;
  t5926 = t5886 + t5893;
  t5122 = t3650*t4864;
  t5267 = t5136*t5198;
  t5268 = t5122 + t5267;
  t7458 = Cos(var1[3]);
  t7448 = Sin(var1[3]);
  t5462 = t5393*t5457;
  t5580 = t5520*t5537;
  t5582 = t5462 + t5580;
  t5661 = t5136*t3650*t5649;
  t5687 = -1.*t4864*t5649*t5198;
  t5700 = t5661 + t5687;
  t6476 = t5136*t3650*t5926;
  t7181 = -1.*t4864*t5926*t5198;
  t7262 = t6476 + t7181;
  t7460 = -1.*t5136*t3650;
  t7464 = t4864*t5198;
  t7485 = t7460 + t7464;
  t7573 = t3650*t4864*t5649;
  t7592 = t5136*t5649*t5198;
  t7594 = t7573 + t7592;
  t7604 = t2354*t5582;
  t7631 = -1.*t5596*t5700;
  t7637 = t7604 + t7631;
  t7665 = t3650*t4864*t5926;
  t7673 = t5136*t5926*t5198;
  t7681 = t7665 + t7673;
  t7697 = t2354*t5649;
  t7701 = -1.*t5596*t7262;
  t7715 = t7697 + t7701;
  t5598 = t5582*t5596;
  t5758 = t2354*t5700;
  t5773 = t5598 + t5758;
  t7919 = -1.*t5136;
  t7942 = 1. + t7919;
  t7949 = -0.15121*t7942;
  t7961 = -1.*t5393;
  t7972 = 1. + t7961;
  t8013 = -0.28121*t7972;
  t8050 = -1.*t5457;
  t8051 = 1. + t8050;
  t8053 = -0.50321*t8051;
  t8059 = -0.19821*t5457;
  t8061 = t8053 + t8059;
  t8063 = t5393*t8061;
  t8086 = 0.305*t5520*t5537;
  t8106 = t8013 + t8063 + t8086;
  t8139 = t5136*t8106;
  t8158 = t7949 + t8139;
  t7955 = -0.15121*t5136;
  t7960 = 0.15121*t4864;
  t8108 = t4864*t8106;
  t8123 = t7949 + t7955 + t7960 + t8108;
  t8200 = 0.28121*t5520;
  t8210 = t8061*t5520;
  t8213 = -0.305*t5393*t5537;
  t8215 = t8200 + t8210 + t8213;
  t8240 = t3650*t8158;
  t8243 = -1.*t8123*t5198;
  t8246 = t8240 + t8243;
  t8124 = t3650*t8123;
  t8182 = t8158*t5198;
  t8184 = t8124 + t8182;
  t8216 = t8215*t5596;
  t8251 = t2354*t8246;
  t8262 = t8216 + t8251;
  t8297 = t2354*t8215;
  t8303 = -1.*t5596*t8246;
  t8306 = t8297 + t8303;
  t5861 = t5649*t5596;
  t7398 = t2354*t7262;
  t7415 = t5861 + t7398;
  t8199 = -1.*t7485*t8184;
  t8349 = t7594*t8184;
  t8370 = t7485*t8184;
  t8394 = -1.*t7681*t8184;
  t8429 = -1.*t7594*t8184;
  t8493 = t7681*t8184;
  t8616 = -1.*t8215*t5582;
  t8784 = t8215*t5649;
  p_output1[0]=t7415*var2[0] + t2354*t5268*var2[1] + t5773*var2[2];
  p_output1[1]=(t7458*t7681 - 1.*t7448*t7715)*var2[0] + (t5268*t5596*t7448 + t7458*t7485)*var2[1] + (t7458*t7594 - 1.*t7448*t7637)*var2[2];
  p_output1[2]=(t7448*t7681 + t7458*t7715)*var2[0] + (-1.*t5268*t5596*t7458 + t7448*t7485)*var2[1] + (t7448*t7594 + t7458*t7637)*var2[2];
  p_output1[3]=(t5773*(t8199 - 1.*t2354*t5268*t8262 + t5268*t5596*t8306) + t2354*t5268*(t5773*t8262 + t7637*t8306 + t8349))*var2[0] + (t7415*(-1.*t5773*t8262 - 1.*t7637*t8306 + t8429) + t5773*(t7415*t8262 + t7715*t8306 + t8493))*var2[1] + (t7415*(t2354*t5268*t8262 - 1.*t5268*t5596*t8306 + t8370) + t2354*t5268*(-1.*t7415*t8262 - 1.*t7715*t8306 + t8394))*var2[2];
  p_output1[4]=(t7594*(t8199 - 1.*t5268*t8246) + t7485*(t5582*t8215 + t5700*t8246 + t8349))*var2[0] + (t7681*(-1.*t5700*t8246 + t8429 + t8616) + t7594*(t7262*t8246 + t8493 + t8784))*var2[1] + (t7681*(t5268*t8246 + t8370) + t7485*(-1.*t5649*t8215 - 1.*t7262*t8246 + t8394))*var2[2];
  p_output1[5]=t5582*(t5136*t8123 - 1.*t4864*t8158)*var2[0] + (t5649*(-1.*t4864*t5649*t8123 - 1.*t5136*t5649*t8158 + t8616) + t5582*(t4864*t5926*t8123 + t5136*t5926*t8158 + t8784))*var2[1] + t5649*(-1.*t5136*t8123 + t4864*t8158)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t5582 - 0.15121*t5926)*var2[0] + (-0.15121 + t5649*(-1.*t5649*t8106 + t8616) + t5582*(t5926*t8106 + t8784))*var2[1];
  p_output1[16]=(0.28121*t5537 - 0.305*t5457*t5537 + t5537*t8061)*var2[0] + (0.28121*t5457 + 0.305*Power(t5537,2) + t5457*t8061)*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
