/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:24 GMT+02:00
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
  double t5036;
  double t360;
  double t1182;
  double t8591;
  double t10646;
  double t11228;
  double t11518;
  double t10600;
  double t11573;
  double t10438;
  double t11764;
  double t10121;
  double t3573;
  double t8597;
  double t8864;
  double t42;
  double t11532;
  double t13609;
  double t13900;
  double t14354;
  double t14228;
  double t14258;
  double t14304;
  double t14200;
  double t14499;
  double t14626;
  double t14670;
  double t17234;
  double t17237;
  double t17239;
  double t17260;
  double t17264;
  double t17292;
  double t17293;
  double t17351;
  double t17352;
  double t17361;
  double t17382;
  double t17397;
  double t17398;
  double t17401;
  double t17403;
  double t17409;
  double t17411;
  double t17413;
  double t17416;
  double t17428;
  double t17431;
  double t17440;
  double t17441;
  double t17457;
  double t17480;
  double t17486;
  double t17487;
  double t17489;
  double t17491;
  double t17492;
  double t17556;
  double t17561;
  double t17562;
  double t17427;
  double t17444;
  double t17453;
  double t17218;
  double t17241;
  double t17243;
  double t17245;
  double t17248;
  double t17249;
  double t17493;
  double t17564;
  double t17565;
  double t17575;
  double t17576;
  double t17581;
  double t17601;
  double t17602;
  double t17629;
  double t17254;
  double t17257;
  double t17259;
  double t17454;
  double t17633;
  double t10112;
  double t13997;
  double t14058;
  double t17644;
  double t17645;
  double t17648;
  double t17829;
  double t17872;
  double t17959;
  double t17966;
  double t20990;
  double t20995;
  t5036 = Cos(var1[7]);
  t360 = Cos(var1[8]);
  t1182 = Sin(var1[7]);
  t8591 = Sin(var1[8]);
  t10646 = t5036*t360;
  t11228 = t1182*t8591;
  t11518 = t10646 + t11228;
  t10600 = Cos(var1[6]);
  t11573 = Sin(var1[5]);
  t10438 = Cos(var1[5]);
  t11764 = Sin(var1[6]);
  t10121 = Cos(var1[4]);
  t3573 = -1.*t360*t1182;
  t8597 = t5036*t8591;
  t8864 = t3573 + t8597;
  t42 = Sin(var1[4]);
  t11532 = t10438*t10600*t11518;
  t13609 = -1.*t11573*t11764*t11518;
  t13900 = t11532 + t13609;
  t14354 = Sin(var1[3]);
  t14228 = t10600*t11573*t11518;
  t14258 = t10438*t11764*t11518;
  t14304 = t14228 + t14258;
  t14200 = Cos(var1[3]);
  t14499 = t10121*t8864;
  t14626 = -1.*t42*t13900;
  t14670 = t14499 + t14626;
  t17234 = t360*t1182;
  t17237 = -1.*t5036*t8591;
  t17239 = t17234 + t17237;
  t17260 = -1.*t10600;
  t17264 = 1. + t17260;
  t17292 = 0.15121*t17264;
  t17293 = -1.*t5036;
  t17351 = 1. + t17293;
  t17352 = 0.28121*t17351;
  t17361 = -1.*t360;
  t17382 = 1. + t17361;
  t17397 = 0.50321*t17382;
  t17398 = 0.19821*t360;
  t17401 = t17397 + t17398;
  t17403 = t5036*t17401;
  t17409 = -0.305*t1182*t8591;
  t17411 = t17352 + t17403 + t17409;
  t17413 = t10600*t17411;
  t17416 = t17292 + t17413;
  t17428 = 0.15121*t10600;
  t17431 = -0.15121*t11764;
  t17440 = t11764*t17411;
  t17441 = t17292 + t17428 + t17431 + t17440;
  t17457 = -1.*t10600*t11573;
  t17480 = -1.*t10438*t11764;
  t17486 = t17457 + t17480;
  t17487 = 0.28121*t1182;
  t17489 = -1.*t17401*t1182;
  t17491 = -0.305*t5036*t8591;
  t17492 = t17487 + t17489 + t17491;
  t17556 = t10438*t17416;
  t17561 = -1.*t11573*t17441;
  t17562 = t17556 + t17561;
  t17427 = t11573*t17416;
  t17444 = t10438*t17441;
  t17453 = t17427 + t17444;
  t17218 = t42*t11518;
  t17241 = t10438*t10600*t17239;
  t17243 = -1.*t11573*t11764*t17239;
  t17245 = t17241 + t17243;
  t17248 = t10121*t17245;
  t17249 = t17218 + t17248;
  t17493 = t42*t17492;
  t17564 = t10121*t17562;
  t17565 = t17493 + t17564;
  t17575 = t10121*t17492;
  t17576 = -1.*t42*t17562;
  t17581 = t17575 + t17576;
  t17601 = t10600*t11573*t17239;
  t17602 = t10438*t11764*t17239;
  t17629 = t17601 + t17602;
  t17254 = t10438*t10600;
  t17257 = -1.*t11573*t11764;
  t17259 = t17254 + t17257;
  t17454 = -1.*t17259*t17453;
  t17633 = t17629*t17453;
  t10112 = t42*t8864;
  t13997 = t10121*t13900;
  t14058 = t10112 + t13997;
  t17644 = t10121*t11518;
  t17645 = -1.*t42*t17245;
  t17648 = t17644 + t17645;
  t17829 = -1.*t17629*t17453;
  t17872 = t14304*t17453;
  t17959 = -1.*t17492*t11518;
  t17966 = t17492*t8864;
  t20990 = t17259*t17453;
  t20995 = -1.*t14304*t17453;
  p_output1[0]=t14058;
  p_output1[1]=t14200*t14304 - 1.*t14354*t14670;
  p_output1[2]=t14304*t14354 + t14200*t14670;
  p_output1[3]=t10121*t17486*(t17249*t17565 + t17633 + t17581*t17648) + t17249*(t17454 - 1.*t10121*t17486*t17565 + t17486*t17581*t42);
  p_output1[4]=(t17454 - 1.*t17486*t17562)*t17629 + t17259*(t11518*t17492 + t17245*t17562 + t17633);
  p_output1[5]=t11518*(t11764*t17416 - 1.*t10600*t17441);
  p_output1[6]=0;
  p_output1[7]=0.28121*t8591 - 1.*t17401*t8591 - 0.305*t360*t8591;
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
  p_output1[18]=t10121*t17486;
  p_output1[19]=t14200*t17259 + t14354*t17486*t42;
  p_output1[20]=t14354*t17259 - 1.*t14200*t17486*t42;
  p_output1[21]=t14058*(-1.*t17249*t17565 - 1.*t17581*t17648 + t17829) + t17249*(t14058*t17565 + t14670*t17581 + t17872);
  p_output1[22]=t14304*(-1.*t17245*t17562 + t17829 + t17959) + t17629*(t13900*t17562 + t17872 + t17966);
  p_output1[23]=t11518*(t10600*t11518*t17416 + t11518*t11764*t17441 + t17966) + (-1.*t10600*t17239*t17416 - 1.*t11764*t17239*t17441 + t17959)*t8864;
  p_output1[24]=-0.15121 + t11518*(t11518*t17411 + t17966) + (-1.*t17239*t17411 + t17959)*t8864;
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
  p_output1[36]=t17249;
  p_output1[37]=t14200*t17629 - 1.*t14354*t17648;
  p_output1[38]=t14354*t17629 + t14200*t17648;
  p_output1[39]=t10121*t17486*(-1.*t14058*t17565 - 1.*t14670*t17581 + t20995) + t14058*(t10121*t17486*t17565 + t20990 - 1.*t17486*t17581*t42);
  p_output1[40]=t14304*(t17486*t17562 + t20990) + t17259*(-1.*t13900*t17562 + t20995 - 1.*t17492*t8864);
  p_output1[41]=(-1.*t11764*t17416 + t10600*t17441)*t8864;
  p_output1[42]=0.15121*t17239 + 0.15121*t8864;
  p_output1[43]=0.28121*t360 - 1.*t17401*t360 + 0.305*Power(t8591,2);
  p_output1[44]=-0.305;
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
