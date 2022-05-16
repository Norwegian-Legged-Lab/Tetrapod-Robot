/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:27 GMT+02:00
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
  double t18761;
  double t3233;
  double t3856;
  double t25113;
  double t51033;
  double t51044;
  double t51056;
  double t51028;
  double t51235;
  double t50959;
  double t51718;
  double t50956;
  double t3915;
  double t39384;
  double t41393;
  double t2547;
  double t51061;
  double t52047;
  double t52331;
  double t52552;
  double t52503;
  double t52525;
  double t52534;
  double t52477;
  double t52567;
  double t52584;
  double t52674;
  double t53176;
  double t53195;
  double t53213;
  double t54126;
  double t54127;
  double t54128;
  double t54173;
  double t54175;
  double t54176;
  double t54182;
  double t54191;
  double t54194;
  double t54199;
  double t54200;
  double t54210;
  double t54211;
  double t54214;
  double t54217;
  double t54218;
  double t54222;
  double t54223;
  double t54225;
  double t54229;
  double t54236;
  double t54241;
  double t54242;
  double t54243;
  double t54246;
  double t54247;
  double t54249;
  double t54251;
  double t54252;
  double t54253;
  double t54220;
  double t54230;
  double t54231;
  double t52774;
  double t53229;
  double t54069;
  double t54087;
  double t54093;
  double t54094;
  double t54250;
  double t54254;
  double t54255;
  double t54257;
  double t54258;
  double t54259;
  double t54264;
  double t54266;
  double t54267;
  double t54105;
  double t54115;
  double t54119;
  double t54232;
  double t54268;
  double t47614;
  double t52474;
  double t52475;
  double t54270;
  double t54271;
  double t54273;
  double t54329;
  double t54341;
  double t54354;
  double t54358;
  double t54458;
  double t54463;
  t18761 = Cos(var1[7]);
  t3233 = Cos(var1[8]);
  t3856 = Sin(var1[7]);
  t25113 = Sin(var1[8]);
  t51033 = t18761*t3233;
  t51044 = t3856*t25113;
  t51056 = t51033 + t51044;
  t51028 = Cos(var1[6]);
  t51235 = Sin(var1[5]);
  t50959 = Cos(var1[5]);
  t51718 = Sin(var1[6]);
  t50956 = Cos(var1[4]);
  t3915 = -1.*t3233*t3856;
  t39384 = t18761*t25113;
  t41393 = t3915 + t39384;
  t2547 = Sin(var1[4]);
  t51061 = t50959*t51028*t51056;
  t52047 = -1.*t51235*t51718*t51056;
  t52331 = t51061 + t52047;
  t52552 = Sin(var1[3]);
  t52503 = t51028*t51235*t51056;
  t52525 = t50959*t51718*t51056;
  t52534 = t52503 + t52525;
  t52477 = Cos(var1[3]);
  t52567 = t50956*t41393;
  t52584 = -1.*t2547*t52331;
  t52674 = t52567 + t52584;
  t53176 = t3233*t3856;
  t53195 = -1.*t18761*t25113;
  t53213 = t53176 + t53195;
  t54126 = -1.*t51028;
  t54127 = 1. + t54126;
  t54128 = 0.15121*t54127;
  t54173 = -1.*t18761;
  t54175 = 1. + t54173;
  t54176 = 0.28121*t54175;
  t54182 = -1.*t3233;
  t54191 = 1. + t54182;
  t54194 = 0.50321*t54191;
  t54199 = 0.23321*t3233;
  t54200 = t54194 + t54199;
  t54210 = t18761*t54200;
  t54211 = -0.27*t3856*t25113;
  t54214 = t54176 + t54210 + t54211;
  t54217 = t51028*t54214;
  t54218 = t54128 + t54217;
  t54222 = 0.15121*t51028;
  t54223 = -0.15121*t51718;
  t54225 = t51718*t54214;
  t54229 = t54128 + t54222 + t54223 + t54225;
  t54236 = -1.*t51028*t51235;
  t54241 = -1.*t50959*t51718;
  t54242 = t54236 + t54241;
  t54243 = 0.28121*t3856;
  t54246 = -1.*t54200*t3856;
  t54247 = -0.27*t18761*t25113;
  t54249 = t54243 + t54246 + t54247;
  t54251 = t50959*t54218;
  t54252 = -1.*t51235*t54229;
  t54253 = t54251 + t54252;
  t54220 = t51235*t54218;
  t54230 = t50959*t54229;
  t54231 = t54220 + t54230;
  t52774 = t2547*t51056;
  t53229 = t50959*t51028*t53213;
  t54069 = -1.*t51235*t51718*t53213;
  t54087 = t53229 + t54069;
  t54093 = t50956*t54087;
  t54094 = t52774 + t54093;
  t54250 = t2547*t54249;
  t54254 = t50956*t54253;
  t54255 = t54250 + t54254;
  t54257 = t50956*t54249;
  t54258 = -1.*t2547*t54253;
  t54259 = t54257 + t54258;
  t54264 = t51028*t51235*t53213;
  t54266 = t50959*t51718*t53213;
  t54267 = t54264 + t54266;
  t54105 = t50959*t51028;
  t54115 = -1.*t51235*t51718;
  t54119 = t54105 + t54115;
  t54232 = -1.*t54119*t54231;
  t54268 = t54267*t54231;
  t47614 = t2547*t41393;
  t52474 = t50956*t52331;
  t52475 = t47614 + t52474;
  t54270 = t50956*t51056;
  t54271 = -1.*t2547*t54087;
  t54273 = t54270 + t54271;
  t54329 = -1.*t54267*t54231;
  t54341 = t52534*t54231;
  t54354 = -1.*t54249*t51056;
  t54358 = t54249*t41393;
  t54458 = t54119*t54231;
  t54463 = -1.*t52534*t54231;
  p_output1[0]=t52475;
  p_output1[1]=t52477*t52534 - 1.*t52552*t52674;
  p_output1[2]=t52534*t52552 + t52477*t52674;
  p_output1[3]=t54094*(t54232 - 1.*t50956*t54242*t54255 + t2547*t54242*t54259) + t50956*t54242*(t54094*t54255 + t54268 + t54259*t54273);
  p_output1[4]=(t54232 - 1.*t54242*t54253)*t54267 + t54119*(t51056*t54249 + t54087*t54253 + t54268);
  p_output1[5]=t51056*(t51718*t54218 - 1.*t51028*t54229);
  p_output1[6]=0;
  p_output1[7]=0.28121*t25113 - 0.27*t25113*t3233 - 1.*t25113*t54200;
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
  p_output1[18]=t50956*t54242;
  p_output1[19]=t52477*t54119 + t2547*t52552*t54242;
  p_output1[20]=t52552*t54119 - 1.*t2547*t52477*t54242;
  p_output1[21]=t52475*(-1.*t54094*t54255 - 1.*t54259*t54273 + t54329) + t54094*(t52475*t54255 + t52674*t54259 + t54341);
  p_output1[22]=t52534*(-1.*t54087*t54253 + t54329 + t54354) + t54267*(t52331*t54253 + t54341 + t54358);
  p_output1[23]=t41393*(-1.*t51028*t53213*t54218 - 1.*t51718*t53213*t54229 + t54354) + t51056*(t51028*t51056*t54218 + t51056*t51718*t54229 + t54358);
  p_output1[24]=-0.15121 + t41393*(-1.*t53213*t54214 + t54354) + t51056*(t51056*t54214 + t54358);
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
  p_output1[36]=t54094;
  p_output1[37]=t52477*t54267 - 1.*t52552*t54273;
  p_output1[38]=t52552*t54267 + t52477*t54273;
  p_output1[39]=t52475*(t50956*t54242*t54255 - 1.*t2547*t54242*t54259 + t54458) + t50956*t54242*(-1.*t52475*t54255 - 1.*t52674*t54259 + t54463);
  p_output1[40]=t52534*(t54242*t54253 + t54458) + t54119*(-1.*t41393*t54249 - 1.*t52331*t54253 + t54463);
  p_output1[41]=t41393*(-1.*t51718*t54218 + t51028*t54229);
  p_output1[42]=0.15121*t41393 + 0.15121*t53213;
  p_output1[43]=0.27*Power(t25113,2) + 0.28121*t3233 - 1.*t3233*t54200;
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
