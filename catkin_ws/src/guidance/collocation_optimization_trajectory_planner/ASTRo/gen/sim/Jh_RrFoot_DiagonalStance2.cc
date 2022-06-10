/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:34 GMT+02:00
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
  double t6083;
  double t589;
  double t5304;
  double t6942;
  double t12849;
  double t12877;
  double t12879;
  double t7996;
  double t12810;
  double t12915;
  double t10598;
  double t12941;
  double t7280;
  double t5408;
  double t6944;
  double t7269;
  double t12900;
  double t13061;
  double t13260;
  double t16260;
  double t14953;
  double t15697;
  double t15704;
  double t15980;
  double t15731;
  double t15732;
  double t15795;
  double t15920;
  double t15922;
  double t15926;
  double t15982;
  double t15986;
  double t16213;
  double t16267;
  double t16269;
  double t16270;
  double t16327;
  double t16328;
  double t16347;
  double t16364;
  double t16365;
  double t16367;
  double t16390;
  double t16394;
  double t16401;
  double t15833;
  double t15968;
  double t15969;
  double t16479;
  double t16480;
  double t16482;
  double t16526;
  double t16534;
  double t16541;
  double t16607;
  double t16616;
  double t16636;
  double t16639;
  double t16640;
  double t16652;
  double t16655;
  double t16676;
  double t16713;
  double t16715;
  double t16483;
  double t16511;
  double t16680;
  double t16686;
  double t16737;
  double t16745;
  double t16759;
  double t16777;
  double t16838;
  double t16839;
  double t16857;
  double t16701;
  double t16727;
  double t16728;
  double t16819;
  double t16863;
  double t16866;
  double t16880;
  double t16884;
  double t16885;
  double t7316;
  double t14329;
  double t14641;
  double t16734;
  double t16908;
  double t16954;
  double t17063;
  double t17128;
  double t17173;
  double t17358;
  double t17393;
  t6083 = Cos(var1[16]);
  t589 = Cos(var1[17]);
  t5304 = Sin(var1[16]);
  t6942 = Sin(var1[17]);
  t12849 = -1.*t6083*t589;
  t12877 = -1.*t5304*t6942;
  t12879 = t12849 + t12877;
  t7996 = Cos(var1[4]);
  t12810 = Cos(var1[5]);
  t12915 = Sin(var1[15]);
  t10598 = Cos(var1[15]);
  t12941 = Sin(var1[5]);
  t7280 = Sin(var1[4]);
  t5408 = -1.*t589*t5304;
  t6944 = t6083*t6942;
  t7269 = t5408 + t6944;
  t12900 = t10598*t12810*t12879;
  t13061 = -1.*t12915*t12879*t12941;
  t13260 = t12900 + t13061;
  t16260 = Sin(var1[3]);
  t14953 = t12810*t12915;
  t15697 = t10598*t12941;
  t15704 = t14953 + t15697;
  t15980 = Cos(var1[3]);
  t15731 = t6083*t589;
  t15732 = t5304*t6942;
  t15795 = t15731 + t15732;
  t15920 = t10598*t12810*t7269;
  t15922 = -1.*t12915*t7269*t12941;
  t15926 = t15920 + t15922;
  t15982 = t12810*t12915*t12879;
  t15986 = t10598*t12879*t12941;
  t16213 = t15982 + t15986;
  t16267 = t7996*t7269;
  t16269 = -1.*t7280*t13260;
  t16270 = t16267 + t16269;
  t16327 = -1.*t10598*t12810;
  t16328 = t12915*t12941;
  t16347 = t16327 + t16328;
  t16364 = t12810*t12915*t7269;
  t16365 = t10598*t7269*t12941;
  t16367 = t16364 + t16365;
  t16390 = t7996*t15795;
  t16394 = -1.*t7280*t15926;
  t16401 = t16390 + t16394;
  t15833 = t15795*t7280;
  t15968 = t7996*t15926;
  t15969 = t15833 + t15968;
  t16479 = -1.*t10598;
  t16480 = 1. + t16479;
  t16482 = -0.15121*t16480;
  t16526 = -1.*t6083;
  t16534 = 1. + t16526;
  t16541 = -0.28121*t16534;
  t16607 = -1.*t589;
  t16616 = 1. + t16607;
  t16636 = -0.50321*t16616;
  t16639 = -0.19821*t589;
  t16640 = t16636 + t16639;
  t16652 = t6083*t16640;
  t16655 = 0.305*t5304*t6942;
  t16676 = t16541 + t16652 + t16655;
  t16713 = t10598*t16676;
  t16715 = t16482 + t16713;
  t16483 = -0.15121*t10598;
  t16511 = 0.15121*t12915;
  t16680 = t12915*t16676;
  t16686 = t16482 + t16483 + t16511 + t16680;
  t16737 = 0.28121*t5304;
  t16745 = t16640*t5304;
  t16759 = -0.305*t6083*t6942;
  t16777 = t16737 + t16745 + t16759;
  t16838 = t12810*t16715;
  t16839 = -1.*t16686*t12941;
  t16857 = t16838 + t16839;
  t16701 = t12810*t16686;
  t16727 = t16715*t12941;
  t16728 = t16701 + t16727;
  t16819 = t16777*t7280;
  t16863 = t7996*t16857;
  t16866 = t16819 + t16863;
  t16880 = t7996*t16777;
  t16884 = -1.*t7280*t16857;
  t16885 = t16880 + t16884;
  t7316 = t7269*t7280;
  t14329 = t7996*t13260;
  t14641 = t7316 + t14329;
  t16734 = -1.*t16347*t16728;
  t16908 = t16367*t16728;
  t16954 = -1.*t16367*t16728;
  t17063 = t16213*t16728;
  t17128 = t16347*t16728;
  t17173 = -1.*t16213*t16728;
  t17358 = -1.*t16777*t15795;
  t17393 = t16777*t7269;
  p_output1[0]=t14641;
  p_output1[1]=t15704*t7996;
  p_output1[2]=t15969;
  p_output1[3]=t15980*t16213 - 1.*t16260*t16270;
  p_output1[4]=t15980*t16347 + t15704*t16260*t7280;
  p_output1[5]=t15980*t16367 - 1.*t16260*t16401;
  p_output1[6]=t16213*t16260 + t15980*t16270;
  p_output1[7]=t16260*t16347 - 1.*t15704*t15980*t7280;
  p_output1[8]=t16260*t16367 + t15980*t16401;
  p_output1[9]=t15704*(t15969*t16866 + t16401*t16885 + t16908)*t7996 + t15969*(t16734 + t15704*t16885*t7280 - 1.*t15704*t16866*t7996);
  p_output1[10]=t14641*(-1.*t15969*t16866 - 1.*t16401*t16885 + t16954) + t15969*(t14641*t16866 + t16270*t16885 + t17063);
  p_output1[11]=t15704*(-1.*t14641*t16866 - 1.*t16270*t16885 + t17173)*t7996 + t14641*(t17128 - 1.*t15704*t16885*t7280 + t15704*t16866*t7996);
  p_output1[12]=t16367*(t16734 - 1.*t15704*t16857) + t16347*(t15795*t16777 + t15926*t16857 + t16908);
  p_output1[13]=t16213*(-1.*t15926*t16857 + t16954 + t17358) + t16367*(t13260*t16857 + t17063 + t17393);
  p_output1[14]=t16213*(t15704*t16857 + t17128) + t16347*(-1.*t13260*t16857 + t17173 - 1.*t16777*t7269);
  p_output1[15]=t15795*(t10598*t16686 - 1.*t12915*t16715);
  p_output1[16]=t15795*(t12879*t12915*t16686 + t10598*t12879*t16715 + t17393) + t7269*(t17358 - 1.*t12915*t16686*t7269 - 1.*t10598*t16715*t7269);
  p_output1[17]=(-1.*t10598*t16686 + t12915*t16715)*t7269;
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
  p_output1[45]=-0.15121*t12879 - 0.15121*t15795;
  p_output1[46]=-0.15121 + t15795*(t12879*t16676 + t17393) + t7269*(t17358 - 1.*t16676*t7269);
  p_output1[47]=0;
  p_output1[48]=0.28121*t6942 + t16640*t6942 - 0.305*t589*t6942;
  p_output1[49]=0;
  p_output1[50]=0.28121*t589 + t16640*t589 + 0.305*Power(t6942,2);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.305;
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

#include "Jh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
