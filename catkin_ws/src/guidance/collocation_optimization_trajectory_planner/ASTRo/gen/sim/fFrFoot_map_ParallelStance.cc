/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:20 GMT+02:00
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
  double t12447;
  double t7456;
  double t7457;
  double t12512;
  double t13133;
  double t13144;
  double t13212;
  double t13017;
  double t13286;
  double t13011;
  double t13290;
  double t12989;
  double t12361;
  double t12667;
  double t12679;
  double t12699;
  double t13240;
  double t13309;
  double t13336;
  double t13400;
  double t13352;
  double t13381;
  double t13386;
  double t13342;
  double t13403;
  double t13414;
  double t13424;
  double t13448;
  double t13449;
  double t13452;
  double t13484;
  double t13488;
  double t13503;
  double t13504;
  double t13506;
  double t13569;
  double t13570;
  double t13598;
  double t13601;
  double t13603;
  double t13613;
  double t13623;
  double t13639;
  double t13662;
  double t13666;
  double t13675;
  double t13490;
  double t13492;
  double t13502;
  double t13640;
  double t13654;
  double t13713;
  double t13715;
  double t13717;
  double t13718;
  double t13727;
  double t13728;
  double t13779;
  double t13790;
  double t13797;
  double t13900;
  double t13655;
  double t13676;
  double t13696;
  double t13447;
  double t13455;
  double t13457;
  double t13459;
  double t13461;
  double t13462;
  double t13781;
  double t13922;
  double t13923;
  double t13975;
  double t13977;
  double t13988;
  double t14010;
  double t14015;
  double t14019;
  double t13473;
  double t13479;
  double t13482;
  double t13703;
  double t14021;
  double t12978;
  double t13337;
  double t13339;
  double t14036;
  double t14045;
  double t14046;
  double t14340;
  double t14373;
  double t14382;
  double t14390;
  double t14440;
  double t14449;
  t12447 = Cos(var1[13]);
  t7456 = Cos(var1[14]);
  t7457 = Sin(var1[13]);
  t12512 = Sin(var1[14]);
  t13133 = t12447*t7456;
  t13144 = t7457*t12512;
  t13212 = t13133 + t13144;
  t13017 = Cos(var1[5]);
  t13286 = Sin(var1[12]);
  t13011 = Cos(var1[12]);
  t13290 = Sin(var1[5]);
  t12989 = Cos(var1[4]);
  t12361 = -1.*t7456*t7457;
  t12667 = t12447*t12512;
  t12679 = t12361 + t12667;
  t12699 = Sin(var1[4]);
  t13240 = t13011*t13017*t13212;
  t13309 = -1.*t13286*t13212*t13290;
  t13336 = t13240 + t13309;
  t13400 = Sin(var1[3]);
  t13352 = t13017*t13286*t13212;
  t13381 = t13011*t13212*t13290;
  t13386 = t13352 + t13381;
  t13342 = Cos(var1[3]);
  t13403 = t12989*t12679;
  t13414 = -1.*t12699*t13336;
  t13424 = t13403 + t13414;
  t13448 = t7456*t7457;
  t13449 = -1.*t12447*t12512;
  t13452 = t13448 + t13449;
  t13484 = -1.*t13011;
  t13488 = 1. + t13484;
  t13503 = -1.*t12447;
  t13504 = 1. + t13503;
  t13506 = 0.28121*t13504;
  t13569 = -1.*t7456;
  t13570 = 1. + t13569;
  t13598 = 0.50321*t13570;
  t13601 = 0.19821*t7456;
  t13603 = t13598 + t13601;
  t13613 = t12447*t13603;
  t13623 = -0.305*t7457*t12512;
  t13639 = t13506 + t13613 + t13623;
  t13662 = 0.15121*t13488;
  t13666 = t13011*t13639;
  t13675 = t13662 + t13666;
  t13490 = -0.15121*t13488;
  t13492 = -0.15121*t13011;
  t13502 = -0.15121*t13286;
  t13640 = t13286*t13639;
  t13654 = t13490 + t13492 + t13502 + t13640;
  t13713 = -1.*t13017*t13286;
  t13715 = -1.*t13011*t13290;
  t13717 = t13713 + t13715;
  t13718 = 0.28121*t7457;
  t13727 = -1.*t13603*t7457;
  t13728 = -0.305*t12447*t12512;
  t13779 = t13718 + t13727 + t13728;
  t13790 = t13017*t13675;
  t13797 = -1.*t13654*t13290;
  t13900 = t13790 + t13797;
  t13655 = t13017*t13654;
  t13676 = t13675*t13290;
  t13696 = t13655 + t13676;
  t13447 = t13212*t12699;
  t13455 = t13011*t13017*t13452;
  t13457 = -1.*t13286*t13452*t13290;
  t13459 = t13455 + t13457;
  t13461 = t12989*t13459;
  t13462 = t13447 + t13461;
  t13781 = t13779*t12699;
  t13922 = t12989*t13900;
  t13923 = t13781 + t13922;
  t13975 = t12989*t13779;
  t13977 = -1.*t12699*t13900;
  t13988 = t13975 + t13977;
  t14010 = t13017*t13286*t13452;
  t14015 = t13011*t13452*t13290;
  t14019 = t14010 + t14015;
  t13473 = t13011*t13017;
  t13479 = -1.*t13286*t13290;
  t13482 = t13473 + t13479;
  t13703 = -1.*t13482*t13696;
  t14021 = t14019*t13696;
  t12978 = t12679*t12699;
  t13337 = t12989*t13336;
  t13339 = t12978 + t13337;
  t14036 = t12989*t13212;
  t14045 = -1.*t12699*t13459;
  t14046 = t14036 + t14045;
  t14340 = -1.*t14019*t13696;
  t14373 = t13386*t13696;
  t14382 = -1.*t13779*t13212;
  t14390 = t13779*t12679;
  t14440 = t13482*t13696;
  t14449 = -1.*t13386*t13696;
  p_output1[0]=t13339;
  p_output1[1]=t13342*t13386 - 1.*t13400*t13424;
  p_output1[2]=t13386*t13400 + t13342*t13424;
  p_output1[3]=t13462*(t13703 - 1.*t12989*t13717*t13923 + t12699*t13717*t13988) + t12989*t13717*(t13462*t13923 + t14021 + t13988*t14046);
  p_output1[4]=(t13703 - 1.*t13717*t13900)*t14019 + t13482*(t13212*t13779 + t13459*t13900 + t14021);
  p_output1[5]=t13212*(-1.*t13011*t13654 + t13286*t13675);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t12512 - 1.*t12512*t13603 - 0.305*t12512*t7456;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t12989*t13717;
  p_output1[19]=t13342*t13482 + t12699*t13400*t13717;
  p_output1[20]=t13400*t13482 - 1.*t12699*t13342*t13717;
  p_output1[21]=t13339*(-1.*t13462*t13923 - 1.*t13988*t14046 + t14340) + t13462*(t13339*t13923 + t13424*t13988 + t14373);
  p_output1[22]=t13386*(-1.*t13459*t13900 + t14340 + t14382) + t14019*(t13336*t13900 + t14373 + t14390);
  p_output1[23]=t12679*(-1.*t13286*t13452*t13654 - 1.*t13011*t13452*t13675 + t14382) + t13212*(t13212*t13286*t13654 + t13011*t13212*t13675 + t14390);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t12679*(-1.*t13452*t13639 + t14382) + t13212*(t13212*t13639 + t14390);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t13462;
  p_output1[37]=t13342*t14019 - 1.*t13400*t14046;
  p_output1[38]=t13400*t14019 + t13342*t14046;
  p_output1[39]=t13339*(t12989*t13717*t13923 - 1.*t12699*t13717*t13988 + t14440) + t12989*t13717*(-1.*t13339*t13923 - 1.*t13424*t13988 + t14449);
  p_output1[40]=t13386*(t13717*t13900 + t14440) + t13482*(-1.*t12679*t13779 - 1.*t13336*t13900 + t14449);
  p_output1[41]=t12679*(t13011*t13654 - 1.*t13286*t13675);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t12679 - 0.15121*t13452;
  p_output1[49]=0.305*Power(t12512,2) + 0.28121*t7456 - 1.*t13603*t7456;
  p_output1[50]=-0.305;
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
