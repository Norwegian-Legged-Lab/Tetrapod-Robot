/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:48 GMT+02:00
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
  double t47860;
  double t46849;
  double t47421;
  double t47875;
  double t47924;
  double t47934;
  double t47950;
  double t47913;
  double t47974;
  double t47899;
  double t48297;
  double t47896;
  double t47846;
  double t47890;
  double t47891;
  double t41033;
  double t47954;
  double t48307;
  double t48314;
  double t48779;
  double t48514;
  double t48736;
  double t48743;
  double t48511;
  double t48852;
  double t48923;
  double t48926;
  double t49144;
  double t49199;
  double t49201;
  double t49394;
  double t49399;
  double t49455;
  double t49497;
  double t49498;
  double t49511;
  double t49514;
  double t49515;
  double t49516;
  double t49530;
  double t49536;
  double t49538;
  double t49544;
  double t49555;
  double t49556;
  double t49567;
  double t49570;
  double t49811;
  double t49862;
  double t49899;
  double t49954;
  double t49959;
  double t50002;
  double t50021;
  double t50031;
  double t50032;
  double t50034;
  double t50052;
  double t50055;
  double t50064;
  double t49568;
  double t49903;
  double t49932;
  double t49133;
  double t49205;
  double t49208;
  double t49214;
  double t49228;
  double t49256;
  double t50040;
  double t50066;
  double t50068;
  double t50079;
  double t50084;
  double t50085;
  double t50116;
  double t50118;
  double t50119;
  double t49258;
  double t49266;
  double t49378;
  double t49934;
  double t50131;
  double t47895;
  double t48315;
  double t48508;
  double t50140;
  double t50141;
  double t50149;
  double t50545;
  double t50567;
  double t50597;
  double t50622;
  double t50735;
  double t50784;
  t47860 = Cos(var1[7]);
  t46849 = Cos(var1[8]);
  t47421 = Sin(var1[7]);
  t47875 = Sin(var1[8]);
  t47924 = t47860*t46849;
  t47934 = t47421*t47875;
  t47950 = t47924 + t47934;
  t47913 = Cos(var1[6]);
  t47974 = Sin(var1[5]);
  t47899 = Cos(var1[5]);
  t48297 = Sin(var1[6]);
  t47896 = Cos(var1[4]);
  t47846 = -1.*t46849*t47421;
  t47890 = t47860*t47875;
  t47891 = t47846 + t47890;
  t41033 = Sin(var1[4]);
  t47954 = t47899*t47913*t47950;
  t48307 = -1.*t47974*t48297*t47950;
  t48314 = t47954 + t48307;
  t48779 = Sin(var1[3]);
  t48514 = t47913*t47974*t47950;
  t48736 = t47899*t48297*t47950;
  t48743 = t48514 + t48736;
  t48511 = Cos(var1[3]);
  t48852 = t47896*t47891;
  t48923 = -1.*t41033*t48314;
  t48926 = t48852 + t48923;
  t49144 = t46849*t47421;
  t49199 = -1.*t47860*t47875;
  t49201 = t49144 + t49199;
  t49394 = -1.*t47913;
  t49399 = 1. + t49394;
  t49455 = 0.15121*t49399;
  t49497 = -1.*t47860;
  t49498 = 1. + t49497;
  t49511 = 0.28121*t49498;
  t49514 = -1.*t46849;
  t49515 = 1. + t49514;
  t49516 = 0.50321*t49515;
  t49530 = 0.23321*t46849;
  t49536 = t49516 + t49530;
  t49538 = t47860*t49536;
  t49544 = -0.27*t47421*t47875;
  t49555 = t49511 + t49538 + t49544;
  t49556 = t47913*t49555;
  t49567 = t49455 + t49556;
  t49570 = 0.15121*t47913;
  t49811 = -0.15121*t48297;
  t49862 = t48297*t49555;
  t49899 = t49455 + t49570 + t49811 + t49862;
  t49954 = -1.*t47913*t47974;
  t49959 = -1.*t47899*t48297;
  t50002 = t49954 + t49959;
  t50021 = 0.28121*t47421;
  t50031 = -1.*t49536*t47421;
  t50032 = -0.27*t47860*t47875;
  t50034 = t50021 + t50031 + t50032;
  t50052 = t47899*t49567;
  t50055 = -1.*t47974*t49899;
  t50064 = t50052 + t50055;
  t49568 = t47974*t49567;
  t49903 = t47899*t49899;
  t49932 = t49568 + t49903;
  t49133 = t41033*t47950;
  t49205 = t47899*t47913*t49201;
  t49208 = -1.*t47974*t48297*t49201;
  t49214 = t49205 + t49208;
  t49228 = t47896*t49214;
  t49256 = t49133 + t49228;
  t50040 = t41033*t50034;
  t50066 = t47896*t50064;
  t50068 = t50040 + t50066;
  t50079 = t47896*t50034;
  t50084 = -1.*t41033*t50064;
  t50085 = t50079 + t50084;
  t50116 = t47913*t47974*t49201;
  t50118 = t47899*t48297*t49201;
  t50119 = t50116 + t50118;
  t49258 = t47899*t47913;
  t49266 = -1.*t47974*t48297;
  t49378 = t49258 + t49266;
  t49934 = -1.*t49378*t49932;
  t50131 = t50119*t49932;
  t47895 = t41033*t47891;
  t48315 = t47896*t48314;
  t48508 = t47895 + t48315;
  t50140 = t47896*t47950;
  t50141 = -1.*t41033*t49214;
  t50149 = t50140 + t50141;
  t50545 = -1.*t50119*t49932;
  t50567 = t48743*t49932;
  t50597 = -1.*t50034*t47950;
  t50622 = t50034*t47891;
  t50735 = t49378*t49932;
  t50784 = -1.*t48743*t49932;
  p_output1[0]=t48508;
  p_output1[1]=t48511*t48743 - 1.*t48779*t48926;
  p_output1[2]=t48743*t48779 + t48511*t48926;
  p_output1[3]=t49256*(t49934 - 1.*t47896*t50002*t50068 + t41033*t50002*t50085) + t47896*t50002*(t49256*t50068 + t50131 + t50085*t50149);
  p_output1[4]=(t49934 - 1.*t50002*t50064)*t50119 + t49378*(t47950*t50034 + t49214*t50064 + t50131);
  p_output1[5]=t47950*(t48297*t49567 - 1.*t47913*t49899);
  p_output1[6]=0;
  p_output1[7]=0.28121*t47875 - 0.27*t46849*t47875 - 1.*t47875*t49536;
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
  p_output1[18]=t47896*t50002;
  p_output1[19]=t48511*t49378 + t41033*t48779*t50002;
  p_output1[20]=t48779*t49378 - 1.*t41033*t48511*t50002;
  p_output1[21]=t48508*(-1.*t49256*t50068 - 1.*t50085*t50149 + t50545) + t49256*(t48508*t50068 + t48926*t50085 + t50567);
  p_output1[22]=t48743*(-1.*t49214*t50064 + t50545 + t50597) + t50119*(t48314*t50064 + t50567 + t50622);
  p_output1[23]=t47891*(-1.*t47913*t49201*t49567 - 1.*t48297*t49201*t49899 + t50597) + t47950*(t47913*t47950*t49567 + t47950*t48297*t49899 + t50622);
  p_output1[24]=-0.15121 + t47891*(-1.*t49201*t49555 + t50597) + t47950*(t47950*t49555 + t50622);
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
  p_output1[36]=t49256;
  p_output1[37]=t48511*t50119 - 1.*t48779*t50149;
  p_output1[38]=t48779*t50119 + t48511*t50149;
  p_output1[39]=t48508*(t47896*t50002*t50068 - 1.*t41033*t50002*t50085 + t50735) + t47896*t50002*(-1.*t48508*t50068 - 1.*t48926*t50085 + t50784);
  p_output1[40]=t48743*(t50002*t50064 + t50735) + t49378*(-1.*t47891*t50034 - 1.*t48314*t50064 + t50784);
  p_output1[41]=t47891*(-1.*t48297*t49567 + t47913*t49899);
  p_output1[42]=0.15121*t47891 + 0.15121*t49201;
  p_output1[43]=0.28121*t46849 + 0.27*Power(t47875,2) - 1.*t46849*t49536;
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

#include "fFlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
