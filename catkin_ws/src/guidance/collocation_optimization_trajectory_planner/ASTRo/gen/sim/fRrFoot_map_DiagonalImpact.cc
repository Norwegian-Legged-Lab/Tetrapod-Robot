/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:24 GMT+02:00
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
  double t2791;
  double t1426;
  double t2667;
  double t3128;
  double t3642;
  double t3725;
  double t3754;
  double t3633;
  double t4056;
  double t3631;
  double t4096;
  double t3608;
  double t2712;
  double t3252;
  double t3413;
  double t3556;
  double t4001;
  double t4185;
  double t5179;
  double t39661;
  double t39406;
  double t39549;
  double t39568;
  double t39404;
  double t39669;
  double t39670;
  double t39687;
  double t40154;
  double t40155;
  double t40156;
  double t40159;
  double t40160;
  double t40162;
  double t40163;
  double t40164;
  double t40165;
  double t40166;
  double t40167;
  double t40168;
  double t40170;
  double t40177;
  double t41528;
  double t45982;
  double t40157;
  double t40158;
  double t40179;
  double t40448;
  double t46652;
  double t46671;
  double t46751;
  double t46752;
  double t46756;
  double t46758;
  double t46759;
  double t46765;
  double t46774;
  double t46778;
  double t41301;
  double t46597;
  double t46616;
  double t39755;
  double t39875;
  double t39914;
  double t39935;
  double t39948;
  double t39958;
  double t40136;
  double t40138;
  double t40142;
  double t46761;
  double t46780;
  double t46876;
  double t46882;
  double t46883;
  double t46884;
  double t46896;
  double t46987;
  double t46989;
  double t40148;
  double t40151;
  double t40153;
  double t46636;
  double t46990;
  double t3588;
  double t39378;
  double t39389;
  double t47032;
  double t47033;
  double t47036;
  double t49934;
  double t50083;
  double t50261;
  double t50683;
  double t51745;
  double t51894;
  t2791 = Cos(var1[16]);
  t1426 = Cos(var1[17]);
  t2667 = Sin(var1[16]);
  t3128 = Sin(var1[17]);
  t3642 = -1.*t2791*t1426;
  t3725 = -1.*t2667*t3128;
  t3754 = t3642 + t3725;
  t3633 = Cos(var1[5]);
  t4056 = Sin(var1[15]);
  t3631 = Cos(var1[15]);
  t4096 = Sin(var1[5]);
  t3608 = Cos(var1[4]);
  t2712 = -1.*t1426*t2667;
  t3252 = t2791*t3128;
  t3413 = t2712 + t3252;
  t3556 = Sin(var1[4]);
  t4001 = t3631*t3633*t3754;
  t4185 = -1.*t4056*t3754*t4096;
  t5179 = t4001 + t4185;
  t39661 = Sin(var1[3]);
  t39406 = t3633*t4056*t3754;
  t39549 = t3631*t3754*t4096;
  t39568 = t39406 + t39549;
  t39404 = Cos(var1[3]);
  t39669 = t3608*t3413;
  t39670 = -1.*t3556*t5179;
  t39687 = t39669 + t39670;
  t40154 = -1.*t3631;
  t40155 = 1. + t40154;
  t40156 = -0.15121*t40155;
  t40159 = -1.*t2791;
  t40160 = 1. + t40159;
  t40162 = -0.28121*t40160;
  t40163 = -1.*t1426;
  t40164 = 1. + t40163;
  t40165 = -0.50321*t40164;
  t40166 = -0.23321*t1426;
  t40167 = t40165 + t40166;
  t40168 = t2791*t40167;
  t40170 = 0.27*t2667*t3128;
  t40177 = t40162 + t40168 + t40170;
  t41528 = t3631*t40177;
  t45982 = t40156 + t41528;
  t40157 = -0.15121*t3631;
  t40158 = 0.15121*t4056;
  t40179 = t4056*t40177;
  t40448 = t40156 + t40157 + t40158 + t40179;
  t46652 = t3633*t4056;
  t46671 = t3631*t4096;
  t46751 = t46652 + t46671;
  t46752 = 0.28121*t2667;
  t46756 = t40167*t2667;
  t46758 = -0.27*t2791*t3128;
  t46759 = t46752 + t46756 + t46758;
  t46765 = t3633*t45982;
  t46774 = -1.*t40448*t4096;
  t46778 = t46765 + t46774;
  t41301 = t3633*t40448;
  t46597 = t45982*t4096;
  t46616 = t41301 + t46597;
  t39755 = t2791*t1426;
  t39875 = t2667*t3128;
  t39914 = t39755 + t39875;
  t39935 = t39914*t3556;
  t39948 = t3631*t3633*t3413;
  t39958 = -1.*t4056*t3413*t4096;
  t40136 = t39948 + t39958;
  t40138 = t3608*t40136;
  t40142 = t39935 + t40138;
  t46761 = t46759*t3556;
  t46780 = t3608*t46778;
  t46876 = t46761 + t46780;
  t46882 = t3608*t46759;
  t46883 = -1.*t3556*t46778;
  t46884 = t46882 + t46883;
  t46896 = t3633*t4056*t3413;
  t46987 = t3631*t3413*t4096;
  t46989 = t46896 + t46987;
  t40148 = -1.*t3631*t3633;
  t40151 = t4056*t4096;
  t40153 = t40148 + t40151;
  t46636 = -1.*t40153*t46616;
  t46990 = t46989*t46616;
  t3588 = t3413*t3556;
  t39378 = t3608*t5179;
  t39389 = t3588 + t39378;
  t47032 = t3608*t39914;
  t47033 = -1.*t3556*t40136;
  t47036 = t47032 + t47033;
  t49934 = -1.*t46989*t46616;
  t50083 = t39568*t46616;
  t50261 = -1.*t46759*t39914;
  t50683 = t46759*t3413;
  t51745 = t40153*t46616;
  t51894 = -1.*t39568*t46616;
  p_output1[0]=t39389;
  p_output1[1]=t39404*t39568 - 1.*t39661*t39687;
  p_output1[2]=t39568*t39661 + t39404*t39687;
  p_output1[3]=t40142*(t46636 - 1.*t3608*t46751*t46876 + t3556*t46751*t46884) + t3608*t46751*(t40142*t46876 + t46990 + t46884*t47036);
  p_output1[4]=(t46636 - 1.*t46751*t46778)*t46989 + t40153*(t39914*t46759 + t40136*t46778 + t46990);
  p_output1[5]=t39914*(t3631*t40448 - 1.*t4056*t45982);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t3754 - 0.15121*t39914;
  p_output1[16]=0.28121*t3128 - 0.27*t1426*t3128 + t3128*t40167;
  p_output1[17]=0;
  p_output1[18]=t3608*t46751;
  p_output1[19]=t39404*t40153 + t3556*t39661*t46751;
  p_output1[20]=t39661*t40153 - 1.*t3556*t39404*t46751;
  p_output1[21]=t39389*(-1.*t40142*t46876 - 1.*t46884*t47036 + t49934) + t40142*(t39389*t46876 + t39687*t46884 + t50083);
  p_output1[22]=t39568*(-1.*t40136*t46778 + t49934 + t50261) + t46989*(t50083 + t50683 + t46778*t5179);
  p_output1[23]=t3413*(-1.*t3413*t40448*t4056 - 1.*t3413*t3631*t45982 + t50261) + t39914*(t3754*t40448*t4056 + t3631*t3754*t45982 + t50683);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t3413*(-1.*t3413*t40177 + t50261) + t39914*(t3754*t40177 + t50683);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t40142;
  p_output1[37]=t39404*t46989 - 1.*t39661*t47036;
  p_output1[38]=t39661*t46989 + t39404*t47036;
  p_output1[39]=t39389*(t3608*t46751*t46876 - 1.*t3556*t46751*t46884 + t51745) + t3608*t46751*(-1.*t39389*t46876 - 1.*t39687*t46884 + t51894);
  p_output1[40]=t39568*(t46751*t46778 + t51745) + t40153*(-1.*t3413*t46759 - 1.*t46778*t5179 + t51894);
  p_output1[41]=t3413*(-1.*t3631*t40448 + t4056*t45982);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.28121*t1426 + 0.27*Power(t3128,2) + t1426*t40167;
  p_output1[53]=-0.27;
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

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
