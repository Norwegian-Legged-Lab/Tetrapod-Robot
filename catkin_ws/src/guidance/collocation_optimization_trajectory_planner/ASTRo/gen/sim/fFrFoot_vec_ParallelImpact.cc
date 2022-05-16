/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:22 GMT+02:00
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
  double t51;
  double t2325;
  double t760;
  double t21018;
  double t21767;
  double t20330;
  double t21877;
  double t2316;
  double t21979;
  double t27544;
  double t27868;
  double t2330;
  double t21977;
  double t21592;
  double t21935;
  double t21936;
  double t2321;
  double t2398;
  double t3944;
  double t29836;
  double t29832;
  double t27906;
  double t27908;
  double t27912;
  double t28968;
  double t28971;
  double t28978;
  double t29016;
  double t29033;
  double t29049;
  double t29841;
  double t29843;
  double t29857;
  double t30115;
  double t30158;
  double t30205;
  double t30365;
  double t30498;
  double t31324;
  double t31457;
  double t31598;
  double t31602;
  double t31749;
  double t32063;
  double t32270;
  double t21978;
  double t27956;
  double t28003;
  double t34406;
  double t34422;
  double t34645;
  double t34647;
  double t34656;
  double t34665;
  double t34678;
  double t34761;
  double t34931;
  double t34935;
  double t34939;
  double t34968;
  double t35103;
  double t35158;
  double t35170;
  double t35180;
  double t34425;
  double t34427;
  double t34639;
  double t35140;
  double t35144;
  double t35720;
  double t38064;
  double t38103;
  double t38119;
  double t38415;
  double t38428;
  double t38533;
  double t35152;
  double t35203;
  double t35308;
  double t38138;
  double t38536;
  double t38570;
  double t38700;
  double t38803;
  double t38884;
  double t28995;
  double t29088;
  double t29113;
  double t35318;
  double t38905;
  double t38988;
  double t39132;
  double t39325;
  double t39337;
  double t39873;
  double t40199;
  t51 = Cos(var1[4]);
  t2325 = Cos(var1[12]);
  t760 = Cos(var1[5]);
  t21018 = Cos(var1[14]);
  t21767 = Sin(var1[13]);
  t20330 = Cos(var1[13]);
  t21877 = Sin(var1[14]);
  t2316 = Sin(var1[12]);
  t21979 = t21018*t21767;
  t27544 = -1.*t20330*t21877;
  t27868 = t21979 + t27544;
  t2330 = Sin(var1[5]);
  t21977 = Sin(var1[4]);
  t21592 = t20330*t21018;
  t21935 = t21767*t21877;
  t21936 = t21592 + t21935;
  t2321 = -1.*t760*t2316;
  t2398 = -1.*t2325*t2330;
  t3944 = t2321 + t2398;
  t29836 = Cos(var1[3]);
  t29832 = Sin(var1[3]);
  t27906 = t2325*t760*t27868;
  t27908 = -1.*t2316*t27868*t2330;
  t27912 = t27906 + t27908;
  t28968 = -1.*t21018*t21767;
  t28971 = t20330*t21877;
  t28978 = t28968 + t28971;
  t29016 = t2325*t760*t21936;
  t29033 = -1.*t2316*t21936*t2330;
  t29049 = t29016 + t29033;
  t29841 = t2325*t760;
  t29843 = -1.*t2316*t2330;
  t29857 = t29841 + t29843;
  t30115 = t760*t2316*t27868;
  t30158 = t2325*t27868*t2330;
  t30205 = t30115 + t30158;
  t30365 = t51*t21936;
  t30498 = -1.*t21977*t27912;
  t31324 = t30365 + t30498;
  t31457 = t760*t2316*t21936;
  t31598 = t2325*t21936*t2330;
  t31602 = t31457 + t31598;
  t31749 = t51*t28978;
  t32063 = -1.*t21977*t29049;
  t32270 = t31749 + t32063;
  t21978 = t21936*t21977;
  t27956 = t51*t27912;
  t28003 = t21978 + t27956;
  t34406 = -1.*t2325;
  t34422 = 1. + t34406;
  t34645 = -1.*t20330;
  t34647 = 1. + t34645;
  t34656 = 0.28121*t34647;
  t34665 = -1.*t21018;
  t34678 = 1. + t34665;
  t34761 = 0.50321*t34678;
  t34931 = 0.23321*t21018;
  t34935 = t34761 + t34931;
  t34939 = t20330*t34935;
  t34968 = -0.27*t21767*t21877;
  t35103 = t34656 + t34939 + t34968;
  t35158 = 0.15121*t34422;
  t35170 = t2325*t35103;
  t35180 = t35158 + t35170;
  t34425 = -0.15121*t34422;
  t34427 = -0.15121*t2325;
  t34639 = -0.15121*t2316;
  t35140 = t2316*t35103;
  t35144 = t34425 + t34427 + t34639 + t35140;
  t35720 = 0.28121*t21767;
  t38064 = -1.*t34935*t21767;
  t38103 = -0.27*t20330*t21877;
  t38119 = t35720 + t38064 + t38103;
  t38415 = t760*t35180;
  t38428 = -1.*t35144*t2330;
  t38533 = t38415 + t38428;
  t35152 = t760*t35144;
  t35203 = t35180*t2330;
  t35308 = t35152 + t35203;
  t38138 = t38119*t21977;
  t38536 = t51*t38533;
  t38570 = t38138 + t38536;
  t38700 = t51*t38119;
  t38803 = -1.*t21977*t38533;
  t38884 = t38700 + t38803;
  t28995 = t28978*t21977;
  t29088 = t51*t29049;
  t29113 = t28995 + t29088;
  t35318 = -1.*t29857*t35308;
  t38905 = t30205*t35308;
  t38988 = t29857*t35308;
  t39132 = -1.*t31602*t35308;
  t39325 = -1.*t30205*t35308;
  t39337 = t31602*t35308;
  t39873 = -1.*t38119*t21936;
  t40199 = t38119*t28978;
  p_output1[0]=t29113*var2[0] + t3944*t51*var2[1] + t28003*var2[2];
  p_output1[1]=(t29836*t31602 - 1.*t29832*t32270)*var2[0] + (t29836*t29857 + t21977*t29832*t3944)*var2[1] + (t29836*t30205 - 1.*t29832*t31324)*var2[2];
  p_output1[2]=(t29832*t31602 + t29836*t32270)*var2[0] + (t29832*t29857 - 1.*t21977*t29836*t3944)*var2[1] + (t29832*t30205 + t29836*t31324)*var2[2];
  p_output1[3]=((t28003*t38570 + t31324*t38884 + t38905)*t3944*t51 + t28003*(t35318 + t21977*t38884*t3944 - 1.*t38570*t3944*t51))*var2[0] + (t29113*(-1.*t28003*t38570 - 1.*t31324*t38884 + t39325) + t28003*(t29113*t38570 + t32270*t38884 + t39337))*var2[1] + ((-1.*t29113*t38570 - 1.*t32270*t38884 + t39132)*t3944*t51 + t29113*(t38988 - 1.*t21977*t38884*t3944 + t38570*t3944*t51))*var2[2];
  p_output1[4]=(t29857*(t21936*t38119 + t27912*t38533 + t38905) + t30205*(t35318 - 1.*t38533*t3944))*var2[0] + (t31602*(-1.*t27912*t38533 + t39325 + t39873) + t30205*(t29049*t38533 + t39337 + t40199))*var2[1] + (t29857*(-1.*t28978*t38119 - 1.*t29049*t38533 + t39132) + t31602*(t38988 + t38533*t3944))*var2[2];
  p_output1[5]=t21936*(-1.*t2325*t35144 + t2316*t35180)*var2[0] + (t28978*(-1.*t2316*t27868*t35144 - 1.*t2325*t27868*t35180 + t39873) + t21936*(t21936*t2316*t35144 + t21936*t2325*t35180 + t40199))*var2[1] + t28978*(t2325*t35144 - 1.*t2316*t35180)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t28978*(-1.*t27868*t35103 + t39873) + t21936*(t21936*t35103 + t40199))*var2[1] + (-0.15121*t27868 - 0.15121*t28978)*var2[2];
  p_output1[13]=(0.28121*t21877 - 0.27*t21018*t21877 - 1.*t21877*t34935)*var2[0] + (0.28121*t21018 + 0.27*Power(t21877,2) - 1.*t21018*t34935)*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
