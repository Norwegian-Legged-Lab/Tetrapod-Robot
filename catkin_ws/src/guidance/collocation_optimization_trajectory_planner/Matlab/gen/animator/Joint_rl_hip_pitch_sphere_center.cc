/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:20 GMT+01:00
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
  double t301;
  double t320;
  double t330;
  double t502;
  double t20;
  double t34;
  double t38;
  double t43;
  double t109;
  double t117;
  double t427;
  double t26;
  double t1007;
  double t669;
  double t1047;
  double t1121;
  double t791;
  double t1152;
  double t1090;
  double t1100;
  double t1102;
  double t1176;
  double t1192;
  double t1198;
  double t1037;
  double t1223;
  double t1049;
  double t1280;
  double t1296;
  double t515;
  double t1207;
  double t273;
  double t367;
  double t614;
  double t625;
  double t682;
  double t713;
  double t783;
  double t65;
  double t236;
  double t1410;
  double t998;
  double t1000;
  double t1463;
  double t1015;
  double t1023;
  double t1041;
  double t1042;
  double t1059;
  double t1075;
  double t1087;
  double t1419;
  double t1468;
  double t1491;
  double t1510;
  double t1543;
  double t1554;
  double t1107;
  double t1118;
  double t1124;
  double t1151;
  double t1162;
  double t1172;
  double t1174;
  double t1218;
  double t1225;
  double t1587;
  double t1618;
  double t1629;
  double t1242;
  double t1249;
  double t1647;
  double t1653;
  double t1655;
  double t1303;
  double t1330;
  double t1332;
  double t1348;
  double t1388;
  double t1389;
  double t1394;
  double t1401;
  double t2053;
  double t2070;
  double t2072;
  double t2092;
  double t2103;
  double t2114;
  double t2126;
  double t2131;
  double t2146;
  double t2167;
  double t2180;
  double t2192;
  t301 = Cos(var1[13]);
  t320 = -1.*t301;
  t330 = 1. + t320;
  t502 = Sin(var1[13]);
  t20 = Cos(var1[4]);
  t34 = Cos(var1[12]);
  t38 = -1.*t34;
  t43 = 1. + t38;
  t109 = Sin(var1[12]);
  t117 = 0.15121*t109;
  t427 = 4.e-6*t330;
  t26 = Cos(var1[5]);
  t1007 = Sin(var1[5]);
  t669 = -2.8e-11*t330;
  t1047 = 7.e-6*t330;
  t1121 = -1.*t502;
  t791 = Sin(var1[4]);
  t1152 = -4.e-6*t502;
  t1090 = -1.*t20*t26*t109;
  t1100 = -1.*t34*t20*t1007;
  t1102 = t1090 + t1100;
  t1176 = t34*t20*t26;
  t1192 = -1.*t20*t109*t1007;
  t1198 = t1176 + t1192;
  t1037 = -7.e-6*t502;
  t1223 = -7.e-6*t330;
  t1049 = 4.e-6*t502;
  t1280 = -1. + t301;
  t1296 = 4.e-6*t1280;
  t515 = 7.e-6*t502;
  t1207 = 2.8e-11*t330;
  t273 = 5.856279999999999e-13*var1[13];
  t367 = -0.0387489999948987*t330;
  t614 = t427 + t515;
  t625 = -2.123459e-6*t614;
  t682 = t669 + t502;
  t713 = -0.281209000004*t682;
  t783 = t273 + t367 + t625 + t713;
  t65 = -0.15121*t43;
  t236 = t65 + t117;
  t1410 = Sin(var1[3]);
  t998 = 0.15121*t43;
  t1000 = t998 + t117;
  t1463 = Cos(var1[3]);
  t1015 = -1.4640699999999997e-7*var1[13];
  t1023 = -1.38024835e-16*t330;
  t1041 = t427 + t1037;
  t1042 = -0.038748999993*t1041;
  t1059 = t1047 + t1049;
  t1075 = -0.281209000004*t1059;
  t1087 = t1015 + t1023 + t1042 + t1075;
  t1419 = t26*t1410*t791;
  t1468 = t1463*t1007;
  t1491 = t1419 + t1468;
  t1510 = t1463*t26;
  t1543 = -1.*t1410*t791*t1007;
  t1554 = t1510 + t1543;
  t1107 = 1.0248489999999998e-12*var1[13];
  t1118 = -0.28120900000849935*t330;
  t1124 = t669 + t1121;
  t1151 = -0.038748999993*t1124;
  t1162 = t1047 + t1152;
  t1172 = -2.123459e-6*t1162;
  t1174 = t1107 + t1118 + t1151 + t1172;
  t1218 = t1207 + t1121;
  t1225 = t1223 + t1152;
  t1587 = -1.*t109*t1491;
  t1618 = t34*t1554;
  t1629 = t1587 + t1618;
  t1242 = -1.000000000016*t330;
  t1249 = 1. + t1242;
  t1647 = t34*t1491;
  t1653 = t109*t1554;
  t1655 = t1647 + t1653;
  t1303 = t1296 + t1037;
  t1330 = -6.5e-11*t330;
  t1332 = 1. + t1330;
  t1348 = t1223 + t1049;
  t1388 = -1.000000000049*t330;
  t1389 = 1. + t1388;
  t1394 = t1296 + t515;
  t1401 = t1207 + t502;
  t2053 = -1.*t1463*t26*t791;
  t2070 = t1410*t1007;
  t2072 = t2053 + t2070;
  t2092 = t26*t1410;
  t2103 = t1463*t791*t1007;
  t2114 = t2092 + t2103;
  t2126 = -1.*t109*t2072;
  t2131 = t34*t2114;
  t2146 = t2126 + t2131;
  t2167 = t34*t2072;
  t2180 = t109*t2114;
  t2192 = t2167 + t2180;
  p_output1[0]=t1087*t1102 + t1174*t1198 - 1.*t1000*t1007*t20 + t20*t236*t26 + t783*t791 - 0.281211*(t1102*t1225 + t1198*t1249 + t1218*t791) + 0.226709*(t1102*t1332 + t1198*t1348 + t1303*t791) - 0.03875*(t1102*t1394 + t1198*t1401 + t1389*t791) + var1[0];
  p_output1[1]=t1000*t1554 + t1087*t1629 + t1174*t1655 - 0.281211*(t1225*t1629 + t1249*t1655 - 1.*t1218*t1410*t20) + 0.226709*(t1332*t1629 + t1348*t1655 - 1.*t1303*t1410*t20) - 0.03875*(t1394*t1629 + t1401*t1655 - 1.*t1389*t1410*t20) + t1491*t236 - 1.*t1410*t20*t783 + var1[1];
  p_output1[2]=t1000*t2114 + t1087*t2146 + t1174*t2192 - 0.281211*(t1218*t1463*t20 + t1225*t2146 + t1249*t2192) + 0.226709*(t1303*t1463*t20 + t1332*t2146 + t1348*t2192) - 0.03875*(t1389*t1463*t20 + t1394*t2146 + t1401*t2192) + t2072*t236 + t1463*t20*t783 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_rl_hip_pitch_sphere_center.hh"

namespace SymFunction
{

void Joint_rl_hip_pitch_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
