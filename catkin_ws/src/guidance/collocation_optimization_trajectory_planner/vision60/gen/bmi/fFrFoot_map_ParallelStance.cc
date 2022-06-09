/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:07 GMT+02:00
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
  double t4594;
  double t4405;
  double t4466;
  double t4720;
  double t4557;
  double t4907;
  double t4908;
  double t5809;
  double t6228;
  double t5956;
  double t6169;
  double t6177;
  double t6233;
  double t4275;
  double t5504;
  double t5354;
  double t6186;
  double t6240;
  double t6246;
  double t6300;
  double t6293;
  double t6294;
  double t6295;
  double t6274;
  double t6301;
  double t6302;
  double t6303;
  double t6832;
  double t6856;
  double t6863;
  double t6937;
  double t6959;
  double t6994;
  double t6998;
  double t7035;
  double t7045;
  double t6828;
  double t6906;
  double t7072;
  double t7075;
  double t7305;
  double t7321;
  double t7322;
  double t7324;
  double t7370;
  double t7376;
  double t6421;
  double t6700;
  double t6728;
  double t6760;
  double t7076;
  double t7141;
  double t7685;
  double t7688;
  double t7705;
  double t8039;
  double t8503;
  double t8505;
  double t7499;
  double t7501;
  double t7670;
  double t7152;
  double t7391;
  double t7497;
  double t6313;
  double t6314;
  double t6315;
  double t7760;
  double t8533;
  double t8544;
  double t6312;
  double t6318;
  double t6323;
  double t6324;
  double t6330;
  double t6354;
  double t8560;
  double t8601;
  double t8603;
  double t8648;
  double t8649;
  double t8650;
  double t7498;
  double t8675;
  double t8729;
  double t8740;
  double t8554;
  double t8558;
  double t8559;
  double t5388;
  double t6256;
  double t6270;
  double t8680;
  double t8688;
  double t8693;
  double t8886;
  double t8899;
  double t8925;
  double t8917;
  double t8952;
  double t8941;
  double t9020;
  double t9054;
  double t9061;
  double t9070;
  t4594 = Cos(var1[13]);
  t4405 = Cos(var1[14]);
  t4466 = Sin(var1[13]);
  t4720 = Sin(var1[14]);
  t4557 = t4405*t4466;
  t4907 = -1.*t4594*t4720;
  t4908 = t4557 + t4907;
  t5809 = Cos(var1[5]);
  t6228 = Sin(var1[12]);
  t5956 = t4594*t4405;
  t6169 = t4466*t4720;
  t6177 = t5956 + t6169;
  t6233 = Sin(var1[5]);
  t4275 = Cos(var1[12]);
  t5504 = Cos(var1[4]);
  t5354 = Sin(var1[4]);
  t6186 = t5809*t6177;
  t6240 = t6228*t4908*t6233;
  t6246 = t6186 + t6240;
  t6300 = Sin(var1[3]);
  t6293 = -1.*t5809*t6228*t4908;
  t6294 = t6177*t6233;
  t6295 = t6293 + t6294;
  t6274 = Cos(var1[3]);
  t6301 = t4275*t5504*t4908;
  t6302 = -1.*t5354*t6246;
  t6303 = t6301 + t6302;
  t6832 = -0.0641*t4405;
  t6856 = -0.28*t4720;
  t6863 = t6832 + t6856;
  t6937 = -1.*t4405;
  t6959 = 1. + t6937;
  t6994 = 0.075*t6959;
  t6998 = 0.355*t4405;
  t7035 = -0.0641*t4720;
  t7045 = t6994 + t6998 + t7035;
  t6828 = -0.325*t4466;
  t6906 = t4594*t6863;
  t7072 = t4466*t7045;
  t7075 = t6828 + t6906 + t7072;
  t7305 = -1.*t4594;
  t7321 = 1. + t7305;
  t7322 = 0.325*t7321;
  t7324 = -1.*t4466*t6863;
  t7370 = t4594*t7045;
  t7376 = t7322 + t7324 + t7370;
  t6421 = -1.*t4275;
  t6700 = 1. + t6421;
  t6728 = -0.1575*t6700;
  t6760 = -0.2255*t4275;
  t7076 = -1.*t6228*t7075;
  t7141 = t6728 + t6760 + t7076;
  t7685 = -0.068*t6228;
  t7688 = t4275*t7075;
  t7705 = t7685 + t7688;
  t8039 = t5809*t7376;
  t8503 = -1.*t7141*t6233;
  t8505 = t8039 + t8503;
  t7499 = t6228*t5354;
  t7501 = -1.*t4275*t5504*t6233;
  t7670 = t7499 + t7501;
  t7152 = t5809*t7141;
  t7391 = t7376*t6233;
  t7497 = t7152 + t7391;
  t6313 = -1.*t4405*t4466;
  t6314 = t4594*t4720;
  t6315 = t6313 + t6314;
  t7760 = t7705*t5354;
  t8533 = t5504*t8505;
  t8544 = t7760 + t8533;
  t6312 = t4275*t6177*t5354;
  t6318 = t5809*t6315;
  t6323 = t6228*t6177*t6233;
  t6324 = t6318 + t6323;
  t6330 = t5504*t6324;
  t6354 = t6312 + t6330;
  t8560 = t5504*t7705;
  t8601 = -1.*t5354*t8505;
  t8603 = t8560 + t8601;
  t8648 = -1.*t5809*t6228*t6177;
  t8649 = t6315*t6233;
  t8650 = t8648 + t8649;
  t7498 = -1.*t4275*t5809*t7497;
  t8675 = t7497*t8650;
  t8729 = -1.*t6228*t7705;
  t8740 = t4275*t7705*t6177;
  t8554 = t5504*t6228;
  t8558 = t4275*t5354*t6233;
  t8559 = t8554 + t8558;
  t5388 = t4275*t4908*t5354;
  t6256 = t5504*t6246;
  t6270 = t5388 + t6256;
  t8680 = t4275*t5504*t6177;
  t8688 = -1.*t5354*t6324;
  t8693 = t8680 + t8688;
  t8886 = t7497*t6295;
  t8899 = -1.*t7497*t8650;
  t8925 = -1.*t4275*t7705*t6177;
  t8917 = t4275*t7705*t4908;
  t8952 = t7376*t6177;
  t8941 = -1.*t7376*t6315;
  t9020 = t4275*t5809*t7497;
  t9054 = -1.*t7497*t6295;
  t9061 = t6228*t7705;
  t9070 = -1.*t4275*t7705*t4908;
  p_output1[0]=t6270;
  p_output1[1]=t6274*t6295 - 1.*t6300*t6303;
  p_output1[2]=t6295*t6300 + t6274*t6303;
  p_output1[3]=t6354*(t7498 - 1.*t7670*t8544 - 1.*t8559*t8603) + t7670*(t6354*t8544 + t8675 + t8603*t8693);
  p_output1[4]=t8650*(t7498 + t4275*t6233*t8505 + t8729) + t4275*t5809*(t6324*t8505 + t8675 + t8740);
  p_output1[5]=t4275*t6177*(-1.*t4275*t7141 + t8729) + t6228*(-1.*t6177*t6228*t7141 + t6315*t7376 + t8740);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.1575*t4908 + 0.2255*t6315;
  p_output1[13]=0.325*t4720 - 1.*t4405*t6863 - 1.*t4720*t7045;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t7670;
  p_output1[19]=t4275*t5809*t6274 - 1.*t6300*t8559;
  p_output1[20]=t4275*t5809*t6300 + t6274*t8559;
  p_output1[21]=t6354*(t6270*t8544 + t6303*t8603 + t8886) + t6270*(-1.*t6354*t8544 - 1.*t8603*t8693 + t8899);
  p_output1[22]=t8650*(t6246*t8505 + t8886 + t8917) + t6295*(-1.*t6324*t8505 + t8899 + t8925);
  p_output1[23]=t4275*t4908*(t6177*t6228*t7141 + t8925 + t8941) + t4275*t6177*(-1.*t4908*t6228*t7141 + t8917 + t8952);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t6177*(-1.*t6177*t7075 + t8941) + t6315*(t4908*t7075 + t8952);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6354;
  p_output1[37]=t6274*t8650 - 1.*t6300*t8693;
  p_output1[38]=t6300*t8650 + t6274*t8693;
  p_output1[39]=t6270*(t7670*t8544 + t8559*t8603 + t9020) + t7670*(-1.*t6270*t8544 - 1.*t6303*t8603 + t9054);
  p_output1[40]=t6295*(-1.*t4275*t6233*t8505 + t9020 + t9061) + t4275*t5809*(-1.*t6246*t8505 + t9054 + t9070);
  p_output1[41]=t4275*t4908*(t4275*t7141 + t9061) + t6228*(t4908*t6228*t7141 - 1.*t6177*t7376 + t9070);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t6177;
  p_output1[49]=-0.325*t4405 - 1.*t4720*t6863 + t4405*t7045;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
