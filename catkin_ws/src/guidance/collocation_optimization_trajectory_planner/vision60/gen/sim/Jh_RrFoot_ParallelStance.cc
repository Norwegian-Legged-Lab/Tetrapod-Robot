/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:03 GMT+02:00
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
  double t531;
  double t42;
  double t86;
  double t567;
  double t511;
  double t593;
  double t626;
  double t1468;
  double t727;
  double t39;
  double t1206;
  double t1706;
  double t1328;
  double t1334;
  double t1340;
  double t1212;
  double t1390;
  double t1731;
  double t1742;
  double t2364;
  double t2747;
  double t2023;
  double t2025;
  double t2067;
  double t2228;
  double t2306;
  double t2318;
  double t2403;
  double t2495;
  double t2565;
  double t2775;
  double t2785;
  double t2798;
  double t2980;
  double t2984;
  double t3071;
  double t3495;
  double t3543;
  double t3737;
  double t3824;
  double t3883;
  double t3894;
  double t1976;
  double t2320;
  double t2360;
  double t4192;
  double t4214;
  double t4243;
  double t4250;
  double t4264;
  double t4273;
  double t4277;
  double t4281;
  double t4286;
  double t1855;
  double t1858;
  double t1892;
  double t4184;
  double t4248;
  double t4292;
  double t4295;
  double t4310;
  double t4311;
  double t4313;
  double t4314;
  double t4323;
  double t4332;
  double t4034;
  double t4037;
  double t4100;
  double t4166;
  double t4304;
  double t4307;
  double t4347;
  double t4363;
  double t4364;
  double t4366;
  double t4367;
  double t4368;
  double t4308;
  double t4339;
  double t4342;
  double t4365;
  double t4373;
  double t4374;
  double t4376;
  double t4377;
  double t4383;
  double t971;
  double t1772;
  double t1812;
  double t4343;
  double t4396;
  double t4412;
  double t4429;
  double t4456;
  double t4475;
  double t4499;
  double t4517;
  double t4571;
  double t4540;
  double t4586;
  double t4591;
  double t4621;
  double t4612;
  t531 = Cos(var1[16]);
  t42 = Cos(var1[17]);
  t86 = Sin(var1[16]);
  t567 = Sin(var1[17]);
  t511 = t42*t86;
  t593 = -1.*t531*t567;
  t626 = t511 + t593;
  t1468 = Sin(var1[15]);
  t727 = Sin(var1[4]);
  t39 = Cos(var1[15]);
  t1206 = Cos(var1[4]);
  t1706 = Sin(var1[5]);
  t1328 = t531*t42;
  t1334 = t86*t567;
  t1340 = t1328 + t1334;
  t1212 = Cos(var1[5]);
  t1390 = t1212*t1340;
  t1731 = t1468*t626*t1706;
  t1742 = t1390 + t1731;
  t2364 = Cos(var1[3]);
  t2747 = Sin(var1[3]);
  t2023 = -1.*t42*t86;
  t2025 = t531*t567;
  t2067 = t2023 + t2025;
  t2228 = t1212*t2067;
  t2306 = t1468*t1340*t1706;
  t2318 = t2228 + t2306;
  t2403 = -1.*t1212*t1468*t626;
  t2495 = t1340*t1706;
  t2565 = t2403 + t2495;
  t2775 = t39*t1206*t626;
  t2785 = -1.*t727*t1742;
  t2798 = t2775 + t2785;
  t2980 = t1206*t1468;
  t2984 = t39*t727*t1706;
  t3071 = t2980 + t2984;
  t3495 = -1.*t1212*t1468*t1340;
  t3543 = t2067*t1706;
  t3737 = t3495 + t3543;
  t3824 = t39*t1206*t1340;
  t3883 = -1.*t727*t2318;
  t3894 = t3824 + t3883;
  t1976 = t39*t1340*t727;
  t2320 = t1206*t2318;
  t2360 = t1976 + t2320;
  t4192 = -0.0641*t42;
  t4214 = -0.28*t567;
  t4243 = t4192 + t4214;
  t4250 = -1.*t42;
  t4264 = 1. + t4250;
  t4273 = -0.575*t4264;
  t4277 = -0.295*t42;
  t4281 = -0.0641*t567;
  t4286 = t4273 + t4277 + t4281;
  t1855 = t1468*t727;
  t1858 = -1.*t39*t1206*t1706;
  t1892 = t1855 + t1858;
  t4184 = 0.325*t86;
  t4248 = t531*t4243;
  t4292 = t86*t4286;
  t4295 = t4184 + t4248 + t4292;
  t4310 = -1.*t531;
  t4311 = 1. + t4310;
  t4313 = -0.325*t4311;
  t4314 = -1.*t86*t4243;
  t4323 = t531*t4286;
  t4332 = t4313 + t4314 + t4323;
  t4034 = -1.*t39;
  t4037 = 1. + t4034;
  t4100 = -0.1575*t4037;
  t4166 = -0.2255*t39;
  t4304 = -1.*t1468*t4295;
  t4307 = t4100 + t4166 + t4304;
  t4347 = -0.068*t1468;
  t4363 = t39*t4295;
  t4364 = t4347 + t4363;
  t4366 = t1212*t4332;
  t4367 = -1.*t4307*t1706;
  t4368 = t4366 + t4367;
  t4308 = t1212*t4307;
  t4339 = t4332*t1706;
  t4342 = t4308 + t4339;
  t4365 = t4364*t727;
  t4373 = t1206*t4368;
  t4374 = t4365 + t4373;
  t4376 = t1206*t4364;
  t4377 = -1.*t727*t4368;
  t4383 = t4376 + t4377;
  t971 = t39*t626*t727;
  t1772 = t1206*t1742;
  t1812 = t971 + t1772;
  t4343 = -1.*t39*t1212*t4342;
  t4396 = t4342*t3737;
  t4412 = t4342*t2565;
  t4429 = -1.*t4342*t3737;
  t4456 = t39*t1212*t4342;
  t4475 = -1.*t4342*t2565;
  t4499 = -1.*t1468*t4364;
  t4517 = t39*t4364*t1340;
  t4571 = -1.*t39*t4364*t1340;
  t4540 = t39*t4364*t626;
  t4586 = t1468*t4364;
  t4591 = -1.*t39*t4364*t626;
  t4621 = t4332*t1340;
  t4612 = -1.*t4332*t2067;
  p_output1[0]=t1812;
  p_output1[1]=t1892;
  p_output1[2]=t2360;
  p_output1[3]=t2364*t2565 - 1.*t2747*t2798;
  p_output1[4]=-1.*t2747*t3071 + t1212*t2364*t39;
  p_output1[5]=t2364*t3737 - 1.*t2747*t3894;
  p_output1[6]=t2565*t2747 + t2364*t2798;
  p_output1[7]=t2364*t3071 + t1212*t2747*t39;
  p_output1[8]=t2747*t3737 + t2364*t3894;
  p_output1[9]=t2360*(t4343 - 1.*t1892*t4374 - 1.*t3071*t4383) + t1892*(t2360*t4374 + t3894*t4383 + t4396);
  p_output1[10]=t2360*(t1812*t4374 + t2798*t4383 + t4412) + t1812*(-1.*t2360*t4374 - 1.*t3894*t4383 + t4429);
  p_output1[11]=t1812*(t1892*t4374 + t3071*t4383 + t4456) + t1892*(-1.*t1812*t4374 - 1.*t2798*t4383 + t4475);
  p_output1[12]=t3737*(t4343 + t1706*t39*t4368 + t4499) + t1212*t39*(t2318*t4368 + t4396 + t4517);
  p_output1[13]=t3737*(t1742*t4368 + t4412 + t4540) + t2565*(-1.*t2318*t4368 + t4429 + t4571);
  p_output1[14]=t2565*(-1.*t1706*t39*t4368 + t4456 + t4586) + t1212*t39*(-1.*t1742*t4368 + t4475 + t4591);
  p_output1[15]=t1340*t39*(-1.*t39*t4307 + t4499) + t1468*(-1.*t1340*t1468*t4307 + t2067*t4332 + t4517);
  p_output1[16]=t39*(t1340*t1468*t4307 + t4571 + t4612)*t626 + t1340*t39*(t4540 + t4621 - 1.*t1468*t4307*t626);
  p_output1[17]=t39*(t39*t4307 + t4586)*t626 + t1468*(-1.*t1340*t4332 + t4591 + t1468*t4307*t626);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.2255*t2067 + 0.1575*t626;
  p_output1[46]=t1340*(-1.*t1340*t4295 + t4612) + t2067*(t4621 + t4295*t626);
  p_output1[47]=-0.068*t1340;
  p_output1[48]=-1.*t42*t4243 - 0.325*t567 - 1.*t4286*t567;
  p_output1[49]=0;
  p_output1[50]=0.325*t42 + t42*t4286 - 1.*t4243*t567;
  p_output1[51]=-0.0641;
  p_output1[52]=0;
  p_output1[53]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
