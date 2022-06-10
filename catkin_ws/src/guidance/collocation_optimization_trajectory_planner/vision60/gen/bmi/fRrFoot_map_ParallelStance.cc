/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:48 GMT+02:00
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
  double t1600;
  double t1502;
  double t1503;
  double t1640;
  double t1506;
  double t10971;
  double t11057;
  double t11341;
  double t11400;
  double t11350;
  double t11352;
  double t11358;
  double t11401;
  double t1474;
  double t11202;
  double t11063;
  double t11394;
  double t11408;
  double t11410;
  double t11426;
  double t11417;
  double t11419;
  double t11422;
  double t11416;
  double t11427;
  double t11428;
  double t11431;
  double t11532;
  double t11534;
  double t11536;
  double t11540;
  double t11543;
  double t11544;
  double t11546;
  double t11549;
  double t11551;
  double t11531;
  double t11537;
  double t11555;
  double t11559;
  double t11575;
  double t11593;
  double t11594;
  double t11596;
  double t11598;
  double t11599;
  double t11482;
  double t11487;
  double t11529;
  double t11530;
  double t11560;
  double t11562;
  double t12054;
  double t12070;
  double t12134;
  double t12244;
  double t12246;
  double t12403;
  double t11635;
  double t11983;
  double t12031;
  double t11563;
  double t11600;
  double t11610;
  double t11448;
  double t11449;
  double t11451;
  double t12165;
  double t12415;
  double t12523;
  double t11443;
  double t11453;
  double t11454;
  double t11456;
  double t11468;
  double t11471;
  double t14807;
  double t15008;
  double t15762;
  double t16510;
  double t18152;
  double t20091;
  double t11611;
  double t20094;
  double t20159;
  double t20229;
  double t13406;
  double t14549;
  double t14793;
  double t11064;
  double t11412;
  double t11414;
  double t20115;
  double t20121;
  double t20122;
  double t24145;
  double t24439;
  double t25355;
  double t24880;
  double t25885;
  double t25815;
  double t26236;
  double t26355;
  double t26427;
  double t26449;
  t1600 = Cos(var1[16]);
  t1502 = Cos(var1[17]);
  t1503 = Sin(var1[16]);
  t1640 = Sin(var1[17]);
  t1506 = t1502*t1503;
  t10971 = -1.*t1600*t1640;
  t11057 = t1506 + t10971;
  t11341 = Cos(var1[5]);
  t11400 = Sin(var1[15]);
  t11350 = t1600*t1502;
  t11352 = t1503*t1640;
  t11358 = t11350 + t11352;
  t11401 = Sin(var1[5]);
  t1474 = Cos(var1[15]);
  t11202 = Cos(var1[4]);
  t11063 = Sin(var1[4]);
  t11394 = t11341*t11358;
  t11408 = t11400*t11057*t11401;
  t11410 = t11394 + t11408;
  t11426 = Sin(var1[3]);
  t11417 = -1.*t11341*t11400*t11057;
  t11419 = t11358*t11401;
  t11422 = t11417 + t11419;
  t11416 = Cos(var1[3]);
  t11427 = t1474*t11202*t11057;
  t11428 = -1.*t11063*t11410;
  t11431 = t11427 + t11428;
  t11532 = -0.0641*t1502;
  t11534 = -0.28*t1640;
  t11536 = t11532 + t11534;
  t11540 = -1.*t1502;
  t11543 = 1. + t11540;
  t11544 = -0.575*t11543;
  t11546 = -0.295*t1502;
  t11549 = -0.0641*t1640;
  t11551 = t11544 + t11546 + t11549;
  t11531 = 0.325*t1503;
  t11537 = t1600*t11536;
  t11555 = t1503*t11551;
  t11559 = t11531 + t11537 + t11555;
  t11575 = -1.*t1600;
  t11593 = 1. + t11575;
  t11594 = -0.325*t11593;
  t11596 = -1.*t1503*t11536;
  t11598 = t1600*t11551;
  t11599 = t11594 + t11596 + t11598;
  t11482 = -1.*t1474;
  t11487 = 1. + t11482;
  t11529 = -0.1575*t11487;
  t11530 = -0.2255*t1474;
  t11560 = -1.*t11400*t11559;
  t11562 = t11529 + t11530 + t11560;
  t12054 = -0.068*t11400;
  t12070 = t1474*t11559;
  t12134 = t12054 + t12070;
  t12244 = t11341*t11599;
  t12246 = -1.*t11562*t11401;
  t12403 = t12244 + t12246;
  t11635 = t11400*t11063;
  t11983 = -1.*t1474*t11202*t11401;
  t12031 = t11635 + t11983;
  t11563 = t11341*t11562;
  t11600 = t11599*t11401;
  t11610 = t11563 + t11600;
  t11448 = -1.*t1502*t1503;
  t11449 = t1600*t1640;
  t11451 = t11448 + t11449;
  t12165 = t12134*t11063;
  t12415 = t11202*t12403;
  t12523 = t12165 + t12415;
  t11443 = t1474*t11358*t11063;
  t11453 = t11341*t11451;
  t11454 = t11400*t11358*t11401;
  t11456 = t11453 + t11454;
  t11468 = t11202*t11456;
  t11471 = t11443 + t11468;
  t14807 = t11202*t12134;
  t15008 = -1.*t11063*t12403;
  t15762 = t14807 + t15008;
  t16510 = -1.*t11341*t11400*t11358;
  t18152 = t11451*t11401;
  t20091 = t16510 + t18152;
  t11611 = -1.*t1474*t11341*t11610;
  t20094 = t11610*t20091;
  t20159 = -1.*t11400*t12134;
  t20229 = t1474*t12134*t11358;
  t13406 = t11202*t11400;
  t14549 = t1474*t11063*t11401;
  t14793 = t13406 + t14549;
  t11064 = t1474*t11057*t11063;
  t11412 = t11202*t11410;
  t11414 = t11064 + t11412;
  t20115 = t1474*t11202*t11358;
  t20121 = -1.*t11063*t11456;
  t20122 = t20115 + t20121;
  t24145 = t11610*t11422;
  t24439 = -1.*t11610*t20091;
  t25355 = -1.*t1474*t12134*t11358;
  t24880 = t1474*t12134*t11057;
  t25885 = t11599*t11358;
  t25815 = -1.*t11599*t11451;
  t26236 = t1474*t11341*t11610;
  t26355 = -1.*t11610*t11422;
  t26427 = t11400*t12134;
  t26449 = -1.*t1474*t12134*t11057;
  p_output1[0]=t11414;
  p_output1[1]=t11416*t11422 - 1.*t11426*t11431;
  p_output1[2]=t11422*t11426 + t11416*t11431;
  p_output1[3]=t11471*(t11611 - 1.*t12031*t12523 - 1.*t14793*t15762) + t12031*(t11471*t12523 + t20094 + t15762*t20122);
  p_output1[4]=t20091*(t11611 + t11401*t12403*t1474 + t20159) + t11341*t1474*(t11456*t12403 + t20094 + t20229);
  p_output1[5]=t11358*t1474*(-1.*t11562*t1474 + t20159) + t11400*(-1.*t11358*t11400*t11562 + t11451*t11599 + t20229);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t11057 + 0.2255*t11451;
  p_output1[16]=-1.*t11536*t1502 - 0.325*t1640 - 1.*t11551*t1640;
  p_output1[17]=-0.0641;
  p_output1[18]=t12031;
  p_output1[19]=t11341*t11416*t1474 - 1.*t11426*t14793;
  p_output1[20]=t11341*t11426*t1474 + t11416*t14793;
  p_output1[21]=t11471*(t11414*t12523 + t11431*t15762 + t24145) + t11414*(-1.*t11471*t12523 - 1.*t15762*t20122 + t24439);
  p_output1[22]=t20091*(t11410*t12403 + t24145 + t24880) + t11422*(-1.*t11456*t12403 + t24439 + t25355);
  p_output1[23]=t11057*t1474*(t11358*t11400*t11562 + t25355 + t25815) + t11358*t1474*(-1.*t11057*t11400*t11562 + t24880 + t25885);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t11358*(-1.*t11358*t11559 + t25815) + t11451*(t11057*t11559 + t25885);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t11471;
  p_output1[37]=t11416*t20091 - 1.*t11426*t20122;
  p_output1[38]=t11426*t20091 + t11416*t20122;
  p_output1[39]=t11414*(t12031*t12523 + t14793*t15762 + t26236) + t12031*(-1.*t11414*t12523 - 1.*t11431*t15762 + t26355);
  p_output1[40]=t11422*(-1.*t11401*t12403*t1474 + t26236 + t26427) + t11341*t1474*(-1.*t11410*t12403 + t26355 + t26449);
  p_output1[41]=t11057*t1474*(t11562*t1474 + t26427) + t11400*(t11057*t11400*t11562 - 1.*t11358*t11599 + t26449);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t11358;
  p_output1[52]=0.325*t1502 + t11551*t1502 - 1.*t11536*t1640;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
