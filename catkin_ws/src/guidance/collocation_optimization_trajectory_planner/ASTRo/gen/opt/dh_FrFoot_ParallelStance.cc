/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:42 GMT+02:00
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
  double t10982;
  double t10386;
  double t17848;
  double t15427;
  double t10992;
  double t11000;
  double t11166;
  double t11223;
  double t12516;
  double t15449;
  double t17905;
  double t17957;
  double t16924;
  double t18060;
  double t18071;
  double t18088;
  double t18089;
  double t18104;
  double t18108;
  double t15440;
  double t15519;
  double t15586;
  double t18816;
  double t18827;
  double t18735;
  double t18395;
  double t18411;
  double t18419;
  double t18425;
  double t18825;
  double t18828;
  double t18830;
  double t18963;
  double t18916;
  double t18917;
  double t18924;
  double t18888;
  double t19063;
  double t19713;
  double t20042;
  double t22435;
  double t22457;
  double t22464;
  double t18271;
  double t18278;
  double t18286;
  double t18294;
  double t18307;
  double t17967;
  double t18200;
  double t18210;
  double t22480;
  double t22486;
  double t22487;
  double t22469;
  double t22474;
  double t22476;
  double t22489;
  double t22490;
  double t22491;
  double t22549;
  double t22551;
  double t22553;
  double t22646;
  double t22661;
  double t22673;
  double t22494;
  double t22500;
  double t22502;
  double t22540;
  double t22577;
  double t22578;
  double t22580;
  double t22585;
  double t22602;
  double t22782;
  double t22790;
  double t22798;
  double t22799;
  double t22866;
  double t22894;
  double t22993;
  double t22995;
  double t22996;
  double t23026;
  double t23145;
  double t18429;
  double t18883;
  double t18884;
  double t23301;
  double t23004;
  double t23005;
  double t23006;
  double t23355;
  double t23624;
  double t23629;
  t10982 = Cos(var1[14]);
  t10386 = Sin(var1[14]);
  t17848 = Cos(var1[12]);
  t15427 = Cos(var1[13]);
  t10992 = -1.*t10982;
  t11000 = 1. + t10992;
  t11166 = 0.50321*t11000;
  t11223 = 0.19821*t10982;
  t12516 = t11166 + t11223;
  t15449 = Sin(var1[13]);
  t17905 = -1.*t17848;
  t17957 = 1. + t17905;
  t16924 = Sin(var1[12]);
  t18060 = -1.*t15427;
  t18071 = 1. + t18060;
  t18088 = 0.28121*t18071;
  t18089 = t15427*t12516;
  t18104 = -0.305*t15449*t10386;
  t18108 = t18088 + t18089 + t18104;
  t15440 = t15427*t10982;
  t15519 = t15449*t10386;
  t15586 = t15440 + t15519;
  t18816 = Cos(var1[5]);
  t18827 = Sin(var1[5]);
  t18735 = Cos(var1[4]);
  t18395 = -1.*t10982*t15449;
  t18411 = t15427*t10386;
  t18419 = t18395 + t18411;
  t18425 = Sin(var1[4]);
  t18825 = t17848*t18816*t15586;
  t18828 = -1.*t16924*t15586*t18827;
  t18830 = t18825 + t18828;
  t18963 = Cos(var1[3]);
  t18916 = t18816*t16924*t15586;
  t18917 = t17848*t15586*t18827;
  t18924 = t18916 + t18917;
  t18888 = Sin(var1[3]);
  t19063 = t18735*t18419;
  t19713 = -1.*t18425*t18830;
  t20042 = t19063 + t19713;
  t22435 = t10982*t15449;
  t22457 = -1.*t15427*t10386;
  t22464 = t22435 + t22457;
  t18271 = -0.15121*t17957;
  t18278 = -0.15121*t17848;
  t18286 = -0.15121*t16924;
  t18294 = t16924*t18108;
  t18307 = t18271 + t18278 + t18286 + t18294;
  t17967 = 0.15121*t17957;
  t18200 = t17848*t18108;
  t18210 = t17967 + t18200;
  t22480 = t17848*t18816;
  t22486 = -1.*t16924*t18827;
  t22487 = t22480 + t22486;
  t22469 = t18816*t16924*t22464;
  t22474 = t17848*t22464*t18827;
  t22476 = t22469 + t22474;
  t22489 = t18816*t18307;
  t22490 = t18210*t18827;
  t22491 = t22489 + t22490;
  t22549 = t18816*t18210;
  t22551 = -1.*t18307*t18827;
  t22553 = t22549 + t22551;
  t22646 = t17848*t18816*t22464;
  t22661 = -1.*t16924*t22464*t18827;
  t22673 = t22646 + t22661;
  t22494 = -1.*t22487*t22491;
  t22500 = -1.*t18816*t16924;
  t22502 = -1.*t17848*t18827;
  t22540 = t22500 + t22502;
  t22577 = 0.28121*t15449;
  t22578 = -1.*t12516*t15449;
  t22580 = -0.305*t15427*t10386;
  t22585 = t22577 + t22578 + t22580;
  t22602 = t22476*t22491;
  t22782 = t15586*t18425;
  t22790 = t18735*t22673;
  t22798 = t22782 + t22790;
  t22799 = t22585*t18425;
  t22866 = t18735*t22553;
  t22894 = t22799 + t22866;
  t22993 = t18735*t22585;
  t22995 = -1.*t18425*t22553;
  t22996 = t22993 + t22995;
  t23026 = -1.*t22585*t15586;
  t23145 = t22585*t18419;
  t18429 = t18419*t18425;
  t18883 = t18735*t18830;
  t18884 = t18429 + t18883;
  t23301 = -1.*t22476*t22491;
  t23004 = t18735*t15586;
  t23005 = -1.*t18425*t22673;
  t23006 = t23004 + t23005;
  t23355 = t18924*t22491;
  t23624 = t22487*t22491;
  t23629 = -1.*t18924*t22491;
  p_output1[0]=t18884*var2[0] + (t18924*t18963 - 1.*t18888*t20042)*var2[1] + (t18888*t18924 + t18963*t20042)*var2[2] + (t22798*(t22494 - 1.*t18735*t22540*t22894 + t18425*t22540*t22996) + t18735*t22540*(t22602 + t22798*t22894 + t22996*t23006))*var2[3] + (t22476*(t22494 - 1.*t22540*t22553) + t22487*(t15586*t22585 + t22602 + t22553*t22673))*var2[4] + t15586*(t16924*t18210 - 1.*t17848*t18307)*var2[5] + (0.28121*t10386 - 0.305*t10386*t10982 - 1.*t10386*t12516)*var2[13];
  p_output1[1]=t18735*t22540*var2[0] + (t18963*t22487 + t18425*t18888*t22540)*var2[1] + (t18888*t22487 - 1.*t18425*t18963*t22540)*var2[2] + (t18884*(-1.*t22798*t22894 - 1.*t22996*t23006 + t23301) + t22798*(t18884*t22894 + t20042*t22996 + t23355))*var2[3] + (t18924*(-1.*t22553*t22673 + t23026 + t23301) + t22476*(t18830*t22553 + t23145 + t23355))*var2[4] + (t18419*(-1.*t17848*t18210*t22464 - 1.*t16924*t18307*t22464 + t23026) + t15586*(t15586*t17848*t18210 + t15586*t16924*t18307 + t23145))*var2[5] + (-0.15121 + t18419*(-1.*t18108*t22464 + t23026) + t15586*(t15586*t18108 + t23145))*var2[12];
  p_output1[2]=t22798*var2[0] + (t18963*t22476 - 1.*t18888*t23006)*var2[1] + (t18888*t22476 + t18963*t23006)*var2[2] + (t18884*(t18735*t22540*t22894 - 1.*t18425*t22540*t22996 + t23624) + t18735*t22540*(-1.*t18884*t22894 - 1.*t20042*t22996 + t23629))*var2[3] + (t18924*(t22540*t22553 + t23624) + t22487*(-1.*t18830*t22553 - 1.*t18419*t22585 + t23629))*var2[4] + (-1.*t16924*t18210 + t17848*t18307)*t18419*var2[5] + (-0.15121*t18419 - 0.15121*t22464)*var2[12] + (0.305*Power(t10386,2) + 0.28121*t10982 - 1.*t10982*t12516)*var2[13] - 0.305*var2[14];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
