/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:55 GMT+02:00
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
  double t598;
  double t923;
  double t904;
  double t915;
  double t963;
  double t519;
  double t565;
  double t1031;
  double t1052;
  double t1062;
  double t1063;
  double t1089;
  double t916;
  double t995;
  double t1004;
  double t827;
  double t1093;
  double t1096;
  double t1111;
  double t1116;
  double t1121;
  double t1122;
  double t1123;
  double t1135;
  double t1161;
  double t1163;
  double t1165;
  double t838;
  double t887;
  double t1037;
  double t1038;
  double t1195;
  double t1196;
  double t1199;
  double t1147;
  double t1148;
  double t1209;
  double t1210;
  double t1211;
  double t1215;
  double t1216;
  double t1217;
  double t1241;
  double t1242;
  double t1243;
  double t1261;
  double t1263;
  double t1268;
  double t1286;
  double t1288;
  double t1293;
  double t1329;
  double t1331;
  double t1337;
  double t1448;
  double t1452;
  double t1523;
  double t1568;
  double t1570;
  double t1571;
  double t1665;
  double t1667;
  double t1758;
  double t2386;
  double t2657;
  double t2899;
  double t3275;
  double t3292;
  double t3376;
  double t3654;
  double t3663;
  double t3711;
  t598 = Sin(var1[3]);
  t923 = Cos(var1[3]);
  t904 = Cos(var1[5]);
  t915 = Sin(var1[4]);
  t963 = Sin(var1[5]);
  t519 = Cos(var1[4]);
  t565 = Sin(var1[15]);
  t1031 = Cos(var1[15]);
  t1052 = t923*t904;
  t1062 = -1.*t598*t915*t963;
  t1063 = t1052 + t1062;
  t1089 = Sin(var1[16]);
  t916 = t904*t598*t915;
  t995 = t923*t963;
  t1004 = t916 + t995;
  t827 = Cos(var1[16]);
  t1093 = -1.*t1031*t519*t598;
  t1096 = -1.*t565*t1063;
  t1111 = t1093 + t1096;
  t1116 = Sin(var1[17]);
  t1121 = -1.*t1089*t1004;
  t1122 = t827*t1111;
  t1123 = t1121 + t1122;
  t1135 = Cos(var1[17]);
  t1161 = t827*t1004;
  t1163 = t1089*t1111;
  t1165 = t1161 + t1163;
  t838 = -1.*t827;
  t887 = 1. + t838;
  t1037 = -1.*t1031;
  t1038 = 1. + t1037;
  t1195 = -1.*t1031*t923*t915;
  t1196 = -1.*t923*t519*t565*t963;
  t1199 = t1195 + t1196;
  t1147 = -1.*t1135;
  t1148 = 1. + t1147;
  t1209 = t923*t519*t904*t1089;
  t1210 = t827*t1199;
  t1211 = t1209 + t1210;
  t1215 = -1.*t827*t923*t519*t904;
  t1216 = t1089*t1199;
  t1217 = t1215 + t1216;
  t1241 = t923*t904*t915;
  t1242 = -1.*t598*t963;
  t1243 = t1241 + t1242;
  t1261 = t904*t598;
  t1263 = t923*t915*t963;
  t1268 = t1261 + t1263;
  t1286 = -1.*t565*t1089*t1243;
  t1288 = t827*t1268;
  t1293 = t1286 + t1288;
  t1329 = -1.*t827*t565*t1243;
  t1331 = -1.*t1089*t1268;
  t1337 = t1329 + t1331;
  t1448 = -1.*t923*t519*t565;
  t1452 = -1.*t1031*t1268;
  t1523 = t1448 + t1452;
  t1568 = t1031*t923*t519;
  t1570 = -1.*t565*t1268;
  t1571 = t1568 + t1570;
  t1665 = -1.*t923*t904*t915;
  t1667 = t598*t963;
  t1758 = t1665 + t1667;
  t2386 = -1.*t1089*t1758;
  t2657 = t827*t1571;
  t2899 = t2386 + t2657;
  t3275 = -1.*t827*t1758;
  t3292 = -1.*t1089*t1571;
  t3376 = t3275 + t3292;
  t3654 = t827*t1758;
  t3663 = t1089*t1571;
  t3711 = t3654 + t3663;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t1038*t1063 + 0.325*t1089*t1111 - 0.575*t1116*t1123 - 0.575*t1148*t1165 - 0.0641*(t1123*t1135 + t1116*t1165) - 0.295*(-1.*t1116*t1123 + t1135*t1165) - 0.1575*t519*t565*t598 - 0.2255*(t1031*t1063 - 1.*t519*t565*t598) - 0.325*t1004*t887;
  p_output1[2]=0.325*t1089*t1199 - 0.575*t1116*t1211 - 0.575*t1148*t1217 - 0.0641*(t1135*t1211 + t1116*t1217) - 0.295*(-1.*t1116*t1211 + t1135*t1217) + 0.325*t519*t887*t904*t923 - 0.1575*t565*t915*t923 - 0.1575*t1038*t519*t923*t963 - 0.2255*(-1.*t565*t915*t923 + t1031*t519*t923*t963);
  p_output1[3]=-0.2255*t1031*t1243 - 0.1575*t1038*t1243 - 0.575*t1148*t1293 - 0.575*t1116*t1337 - 0.295*(t1135*t1293 - 1.*t1116*t1337) - 0.0641*(t1116*t1293 + t1135*t1337) - 0.325*t1089*t1243*t565 - 0.325*t1268*t887;
  p_output1[4]=0.325*t1089*t1523 - 0.575*t1089*t1148*t1523 - 0.2255*t1571 - 0.1575*t1268*t565 - 0.575*t1116*t1523*t827 - 0.295*(t1089*t1135*t1523 - 1.*t1116*t1523*t827) - 0.0641*(t1089*t1116*t1523 + t1135*t1523*t827) + 0.1575*t1031*t519*t923;
  p_output1[5]=-0.325*t1089*t1758 - 0.575*t1148*t2899 - 0.575*t1116*t3376 - 0.295*(t1135*t2899 - 1.*t1116*t3376) - 0.0641*(t1116*t2899 + t1135*t3376) + 0.325*t1571*t827;
  p_output1[6]=-0.575*t1135*t2899 - 0.575*t1116*t3711 - 0.295*(-1.*t1135*t2899 - 1.*t1116*t3711) - 0.0641*(-1.*t1116*t2899 + t1135*t3711);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
