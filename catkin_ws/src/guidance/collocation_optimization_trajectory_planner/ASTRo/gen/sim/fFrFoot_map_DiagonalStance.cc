/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:19 GMT+02:00
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
  double t679;
  double t418;
  double t562;
  double t694;
  double t803;
  double t804;
  double t819;
  double t799;
  double t846;
  double t790;
  double t857;
  double t782;
  double t603;
  double t699;
  double t717;
  double t755;
  double t832;
  double t872;
  double t876;
  double t940;
  double t891;
  double t903;
  double t904;
  double t890;
  double t943;
  double t947;
  double t948;
  double t980;
  double t994;
  double t1002;
  double t1054;
  double t1057;
  double t1077;
  double t1083;
  double t1088;
  double t1097;
  double t1099;
  double t1107;
  double t1137;
  double t1163;
  double t1166;
  double t1185;
  double t1186;
  double t1203;
  double t1204;
  double t1232;
  double t1058;
  double t1068;
  double t1069;
  double t1188;
  double t1190;
  double t1300;
  double t1302;
  double t1316;
  double t1340;
  double t1342;
  double t1353;
  double t1379;
  double t1415;
  double t1419;
  double t1425;
  double t1194;
  double t1279;
  double t1280;
  double t979;
  double t1004;
  double t1008;
  double t1011;
  double t1012;
  double t1014;
  double t1389;
  double t1444;
  double t1456;
  double t1465;
  double t1971;
  double t2611;
  double t3340;
  double t3467;
  double t3471;
  double t1046;
  double t1051;
  double t1052;
  double t1298;
  double t3472;
  double t758;
  double t877;
  double t884;
  double t3479;
  double t3486;
  double t3493;
  double t3751;
  double t3769;
  double t3813;
  double t3866;
  double t4008;
  double t4209;
  t679 = Cos(var1[13]);
  t418 = Cos(var1[14]);
  t562 = Sin(var1[13]);
  t694 = Sin(var1[14]);
  t803 = t679*t418;
  t804 = t562*t694;
  t819 = t803 + t804;
  t799 = Cos(var1[5]);
  t846 = Sin(var1[12]);
  t790 = Cos(var1[12]);
  t857 = Sin(var1[5]);
  t782 = Cos(var1[4]);
  t603 = -1.*t418*t562;
  t699 = t679*t694;
  t717 = t603 + t699;
  t755 = Sin(var1[4]);
  t832 = t790*t799*t819;
  t872 = -1.*t846*t819*t857;
  t876 = t832 + t872;
  t940 = Sin(var1[3]);
  t891 = t799*t846*t819;
  t903 = t790*t819*t857;
  t904 = t891 + t903;
  t890 = Cos(var1[3]);
  t943 = t782*t717;
  t947 = -1.*t755*t876;
  t948 = t943 + t947;
  t980 = t418*t562;
  t994 = -1.*t679*t694;
  t1002 = t980 + t994;
  t1054 = -1.*t790;
  t1057 = 1. + t1054;
  t1077 = -1.*t679;
  t1083 = 1. + t1077;
  t1088 = 0.28121*t1083;
  t1097 = -1.*t418;
  t1099 = 1. + t1097;
  t1107 = 0.50321*t1099;
  t1137 = 0.19821*t418;
  t1163 = t1107 + t1137;
  t1166 = t679*t1163;
  t1185 = -0.305*t562*t694;
  t1186 = t1088 + t1166 + t1185;
  t1203 = 0.15121*t1057;
  t1204 = t790*t1186;
  t1232 = t1203 + t1204;
  t1058 = -0.15121*t1057;
  t1068 = -0.15121*t790;
  t1069 = -0.15121*t846;
  t1188 = t846*t1186;
  t1190 = t1058 + t1068 + t1069 + t1188;
  t1300 = -1.*t799*t846;
  t1302 = -1.*t790*t857;
  t1316 = t1300 + t1302;
  t1340 = 0.28121*t562;
  t1342 = -1.*t1163*t562;
  t1353 = -0.305*t679*t694;
  t1379 = t1340 + t1342 + t1353;
  t1415 = t799*t1232;
  t1419 = -1.*t1190*t857;
  t1425 = t1415 + t1419;
  t1194 = t799*t1190;
  t1279 = t1232*t857;
  t1280 = t1194 + t1279;
  t979 = t819*t755;
  t1004 = t790*t799*t1002;
  t1008 = -1.*t846*t1002*t857;
  t1011 = t1004 + t1008;
  t1012 = t782*t1011;
  t1014 = t979 + t1012;
  t1389 = t1379*t755;
  t1444 = t782*t1425;
  t1456 = t1389 + t1444;
  t1465 = t782*t1379;
  t1971 = -1.*t755*t1425;
  t2611 = t1465 + t1971;
  t3340 = t799*t846*t1002;
  t3467 = t790*t1002*t857;
  t3471 = t3340 + t3467;
  t1046 = t790*t799;
  t1051 = -1.*t846*t857;
  t1052 = t1046 + t1051;
  t1298 = -1.*t1052*t1280;
  t3472 = t3471*t1280;
  t758 = t717*t755;
  t877 = t782*t876;
  t884 = t758 + t877;
  t3479 = t782*t819;
  t3486 = -1.*t755*t1011;
  t3493 = t3479 + t3486;
  t3751 = -1.*t3471*t1280;
  t3769 = t904*t1280;
  t3813 = -1.*t1379*t819;
  t3866 = t1379*t717;
  t4008 = t1052*t1280;
  t4209 = -1.*t904*t1280;
  p_output1[0]=t884;
  p_output1[1]=t890*t904 - 1.*t940*t948;
  p_output1[2]=t904*t940 + t890*t948;
  p_output1[3]=t1316*(t1014*t1456 + t3472 + t2611*t3493)*t782 + t1014*(t1298 + t1316*t2611*t755 - 1.*t1316*t1456*t782);
  p_output1[4]=(t1298 - 1.*t1316*t1425)*t3471 + t1052*(t1011*t1425 + t3472 + t1379*t819);
  p_output1[5]=t819*(-1.*t1190*t790 + t1232*t846);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t694 - 1.*t1163*t694 - 0.305*t418*t694;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1316*t782;
  p_output1[19]=t1052*t890 + t1316*t755*t940;
  p_output1[20]=-1.*t1316*t755*t890 + t1052*t940;
  p_output1[21]=(-1.*t1014*t1456 - 1.*t2611*t3493 + t3751)*t884 + t1014*(t3769 + t1456*t884 + t2611*t948);
  p_output1[22]=t3471*(t3769 + t3866 + t1425*t876) + (-1.*t1011*t1425 + t3751 + t3813)*t904;
  p_output1[23]=t717*(t3813 - 1.*t1002*t1232*t790 - 1.*t1002*t1190*t846) + t819*(t3866 + t1232*t790*t819 + t1190*t819*t846);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + (-1.*t1002*t1186 + t3813)*t717 + t819*(t3866 + t1186*t819);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t1014;
  p_output1[37]=t3471*t890 - 1.*t3493*t940;
  p_output1[38]=t3493*t890 + t3471*t940;
  p_output1[39]=(t4008 - 1.*t1316*t2611*t755 + t1316*t1456*t782)*t884 + t1316*t782*(t4209 - 1.*t1456*t884 - 1.*t2611*t948);
  p_output1[40]=t1052*(t4209 - 1.*t1379*t717 - 1.*t1425*t876) + (t1316*t1425 + t4008)*t904;
  p_output1[41]=t717*(t1190*t790 - 1.*t1232*t846);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t1002 - 0.15121*t717;
  p_output1[49]=0.28121*t418 - 1.*t1163*t418 + 0.305*Power(t694,2);
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

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
