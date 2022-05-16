/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:29 GMT+02:00
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
  double t454;
  double t48;
  double t151;
  double t742;
  double t38673;
  double t38859;
  double t38865;
  double t15885;
  double t38877;
  double t5618;
  double t38882;
  double t976;
  double t282;
  double t753;
  double t800;
  double t804;
  double t38874;
  double t39351;
  double t39364;
  double t39391;
  double t39385;
  double t39386;
  double t39388;
  double t39379;
  double t39392;
  double t39393;
  double t39397;
  double t39503;
  double t39504;
  double t39524;
  double t39530;
  double t39531;
  double t39532;
  double t39534;
  double t39541;
  double t39544;
  double t39545;
  double t39547;
  double t39552;
  double t39555;
  double t39561;
  double t39565;
  double t39567;
  double t39513;
  double t39517;
  double t39519;
  double t39556;
  double t39558;
  double t39593;
  double t39595;
  double t39596;
  double t39597;
  double t39598;
  double t39601;
  double t39602;
  double t39609;
  double t39610;
  double t39627;
  double t39560;
  double t39575;
  double t39585;
  double t39407;
  double t39408;
  double t39409;
  double t39411;
  double t39413;
  double t39414;
  double t39422;
  double t39424;
  double t39438;
  double t39606;
  double t39641;
  double t39654;
  double t39660;
  double t39667;
  double t39668;
  double t39688;
  double t39689;
  double t39694;
  double t39496;
  double t39499;
  double t39501;
  double t39587;
  double t39697;
  double t831;
  double t39365;
  double t39367;
  double t39703;
  double t39727;
  double t39728;
  double t39909;
  double t39996;
  double t40145;
  double t40150;
  double t40182;
  double t40188;
  t454 = Cos(var1[10]);
  t48 = Cos(var1[11]);
  t151 = Sin(var1[10]);
  t742 = Sin(var1[11]);
  t38673 = -1.*t454*t48;
  t38859 = -1.*t151*t742;
  t38865 = t38673 + t38859;
  t15885 = Cos(var1[5]);
  t38877 = Sin(var1[9]);
  t5618 = Cos(var1[9]);
  t38882 = Sin(var1[5]);
  t976 = Cos(var1[4]);
  t282 = -1.*t48*t151;
  t753 = t454*t742;
  t800 = t282 + t753;
  t804 = Sin(var1[4]);
  t38874 = t5618*t15885*t38865;
  t39351 = -1.*t38877*t38865*t38882;
  t39364 = t38874 + t39351;
  t39391 = Sin(var1[3]);
  t39385 = t15885*t38877*t38865;
  t39386 = t5618*t38865*t38882;
  t39388 = t39385 + t39386;
  t39379 = Cos(var1[3]);
  t39392 = t976*t800;
  t39393 = -1.*t804*t39364;
  t39397 = t39392 + t39393;
  t39503 = -1.*t5618;
  t39504 = 1. + t39503;
  t39524 = -1.*t454;
  t39530 = 1. + t39524;
  t39531 = -0.28121*t39530;
  t39532 = -1.*t48;
  t39534 = 1. + t39532;
  t39541 = -0.50321*t39534;
  t39544 = -0.23321*t48;
  t39545 = t39541 + t39544;
  t39547 = t454*t39545;
  t39552 = 0.27*t151*t742;
  t39555 = t39531 + t39547 + t39552;
  t39561 = -0.15121*t39504;
  t39565 = t5618*t39555;
  t39567 = t39561 + t39565;
  t39513 = 0.15121*t39504;
  t39517 = 0.15121*t5618;
  t39519 = 0.15121*t38877;
  t39556 = t38877*t39555;
  t39558 = t39513 + t39517 + t39519 + t39556;
  t39593 = t15885*t38877;
  t39595 = t5618*t38882;
  t39596 = t39593 + t39595;
  t39597 = 0.28121*t151;
  t39598 = t39545*t151;
  t39601 = -0.27*t454*t742;
  t39602 = t39597 + t39598 + t39601;
  t39609 = t15885*t39567;
  t39610 = -1.*t39558*t38882;
  t39627 = t39609 + t39610;
  t39560 = t15885*t39558;
  t39575 = t39567*t38882;
  t39585 = t39560 + t39575;
  t39407 = t454*t48;
  t39408 = t151*t742;
  t39409 = t39407 + t39408;
  t39411 = t39409*t804;
  t39413 = t5618*t15885*t800;
  t39414 = -1.*t38877*t800*t38882;
  t39422 = t39413 + t39414;
  t39424 = t976*t39422;
  t39438 = t39411 + t39424;
  t39606 = t39602*t804;
  t39641 = t976*t39627;
  t39654 = t39606 + t39641;
  t39660 = t976*t39602;
  t39667 = -1.*t804*t39627;
  t39668 = t39660 + t39667;
  t39688 = t15885*t38877*t800;
  t39689 = t5618*t800*t38882;
  t39694 = t39688 + t39689;
  t39496 = -1.*t5618*t15885;
  t39499 = t38877*t38882;
  t39501 = t39496 + t39499;
  t39587 = -1.*t39501*t39585;
  t39697 = t39694*t39585;
  t831 = t800*t804;
  t39365 = t976*t39364;
  t39367 = t831 + t39365;
  t39703 = t976*t39409;
  t39727 = -1.*t804*t39422;
  t39728 = t39703 + t39727;
  t39909 = -1.*t39694*t39585;
  t39996 = t39388*t39585;
  t40145 = -1.*t39602*t39409;
  t40150 = t39602*t800;
  t40182 = t39501*t39585;
  t40188 = -1.*t39388*t39585;
  p_output1[0]=t39367;
  p_output1[1]=t39379*t39388 - 1.*t39391*t39397;
  p_output1[2]=t39388*t39391 + t39379*t39397;
  p_output1[3]=t39596*(t39438*t39654 + t39697 + t39668*t39728)*t976 + t39438*(t39587 + t39596*t39668*t804 - 1.*t39596*t39654*t976);
  p_output1[4]=(t39587 - 1.*t39596*t39627)*t39694 + t39501*(t39409*t39602 + t39422*t39627 + t39697);
  p_output1[5]=t39409*(-1.*t38877*t39567 + t39558*t5618);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t38865 + 0.15121*t39409;
  p_output1[10]=0.28121*t742 + t39545*t742 - 0.27*t48*t742;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t39596*t976;
  p_output1[19]=t39379*t39501 + t39391*t39596*t804;
  p_output1[20]=t39391*t39501 - 1.*t39379*t39596*t804;
  p_output1[21]=t39367*(-1.*t39438*t39654 - 1.*t39668*t39728 + t39909) + t39438*(t39367*t39654 + t39397*t39668 + t39996);
  p_output1[22]=t39388*(-1.*t39422*t39627 + t39909 + t40145) + t39694*(t39364*t39627 + t39996 + t40150);
  p_output1[23]=t39409*(t38865*t38877*t39558 + t40150 + t38865*t39567*t5618) + t800*(t40145 - 1.*t38877*t39558*t800 - 1.*t39567*t5618*t800);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t39409*(t38865*t39555 + t40150) + t800*(t40145 - 1.*t39555*t800);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t39438;
  p_output1[37]=t39379*t39694 - 1.*t39391*t39728;
  p_output1[38]=t39391*t39694 + t39379*t39728;
  p_output1[39]=t39596*(-1.*t39367*t39654 - 1.*t39397*t39668 + t40188)*t976 + t39367*(t40182 - 1.*t39596*t39668*t804 + t39596*t39654*t976);
  p_output1[40]=t39388*(t39596*t39627 + t40182) + t39501*(-1.*t39364*t39627 + t40188 - 1.*t39602*t800);
  p_output1[41]=(t38877*t39567 - 1.*t39558*t5618)*t800;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t48 + t39545*t48 + 0.27*Power(t742,2);
  p_output1[47]=-0.27;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
