/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:28 GMT+02:00
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
  double t9737;
  double t9909;
  double t9914;
  double t9932;
  double t9945;
  double t9946;
  double t9947;
  double t9988;
  double t9972;
  double t9962;
  double t9989;
  double t9992;
  double t9993;
  double t9960;
  double t963;
  double t9635;
  double t9983;
  double t9997;
  double t9998;
  double t10013;
  double t10006;
  double t10008;
  double t10009;
  double t10004;
  double t10014;
  double t10018;
  double t10019;
  double t10106;
  double t10108;
  double t10109;
  double t10112;
  double t10113;
  double t10114;
  double t10116;
  double t10117;
  double t10118;
  double t10105;
  double t10111;
  double t10119;
  double t10121;
  double t10100;
  double t10101;
  double t10103;
  double t10104;
  double t10122;
  double t10124;
  double t10125;
  double t10127;
  double t10128;
  double t10130;
  double t10132;
  double t10133;
  double t10134;
  double t10137;
  double t10140;
  double t10143;
  double t10144;
  double t10146;
  double t10151;
  double t10152;
  double t10154;
  double t10161;
  double t10162;
  double t10163;
  double t10168;
  double t10169;
  double t10170;
  double t10155;
  double t10157;
  double t10158;
  double t10167;
  double t10172;
  double t10174;
  double t10175;
  double t10176;
  double t10177;
  double t10141;
  double t10147;
  double t10148;
  double t10165;
  double t10180;
  double t10183;
  double t10185;
  double t10187;
  double t10200;
  double t10205;
  double t10097;
  double t10098;
  double t10099;
  double t9952;
  double t9999;
  double t10002;
  double t10189;
  double t10190;
  double t10192;
  double t10256;
  double t10261;
  double t10277;
  double t10272;
  double t10295;
  double t10288;
  double t10342;
  double t10346;
  double t10356;
  double t10364;
  t9737 = Cos(var1[8]);
  t9909 = Sin(var1[7]);
  t9914 = t9737*t9909;
  t9932 = Cos(var1[7]);
  t9945 = Sin(var1[8]);
  t9946 = -1.*t9932*t9945;
  t9947 = t9914 + t9946;
  t9988 = Cos(var1[5]);
  t9972 = Sin(var1[6]);
  t9962 = Sin(var1[5]);
  t9989 = t9932*t9737;
  t9992 = t9909*t9945;
  t9993 = t9989 + t9992;
  t9960 = Cos(var1[4]);
  t963 = Cos(var1[6]);
  t9635 = Sin(var1[4]);
  t9983 = t9962*t9972*t9947;
  t9997 = t9988*t9993;
  t9998 = t9983 + t9997;
  t10013 = Sin(var1[3]);
  t10006 = -1.*t9988*t9972*t9947;
  t10008 = t9962*t9993;
  t10009 = t10006 + t10008;
  t10004 = Cos(var1[3]);
  t10014 = t9960*t963*t9947;
  t10018 = -1.*t9635*t9998;
  t10019 = t10014 + t10018;
  t10106 = -0.0641*t9737;
  t10108 = -0.28*t9945;
  t10109 = t10106 + t10108;
  t10112 = -1.*t9737;
  t10113 = 1. + t10112;
  t10114 = 0.075*t10113;
  t10116 = 0.355*t9737;
  t10117 = -0.0641*t9945;
  t10118 = t10114 + t10116 + t10117;
  t10105 = -0.325*t9909;
  t10111 = t9932*t10109;
  t10119 = t9909*t10118;
  t10121 = t10105 + t10111 + t10119;
  t10100 = -1.*t963;
  t10101 = 1. + t10100;
  t10103 = 0.1575*t10101;
  t10104 = 0.2255*t963;
  t10122 = -1.*t9972*t10121;
  t10124 = t10103 + t10104 + t10122;
  t10125 = -1.*t9962*t10124;
  t10127 = -1.*t9932;
  t10128 = 1. + t10127;
  t10130 = 0.325*t10128;
  t10132 = -1.*t9909*t10109;
  t10133 = t9932*t10118;
  t10134 = t10130 + t10132 + t10133;
  t10137 = t9988*t10134;
  t10140 = t10125 + t10137;
  t10143 = 0.068*t9972;
  t10144 = t963*t10121;
  t10146 = t10143 + t10144;
  t10151 = -1.*t9960*t963*t9962;
  t10152 = t9635*t9972;
  t10154 = t10151 + t10152;
  t10161 = t9988*t10124;
  t10162 = t9962*t10134;
  t10163 = t10161 + t10162;
  t10168 = -1.*t9737*t9909;
  t10169 = t9932*t9945;
  t10170 = t10168 + t10169;
  t10155 = t9960*t10140;
  t10157 = t9635*t10146;
  t10158 = t10155 + t10157;
  t10167 = t963*t9635*t9993;
  t10172 = t9988*t10170;
  t10174 = t9962*t9972*t9993;
  t10175 = t10172 + t10174;
  t10176 = t9960*t10175;
  t10177 = t10167 + t10176;
  t10141 = -1.*t9635*t10140;
  t10147 = t9960*t10146;
  t10148 = t10141 + t10147;
  t10165 = -1.*t9988*t963*t10163;
  t10180 = t9962*t10170;
  t10183 = -1.*t9988*t9972*t9993;
  t10185 = t10180 + t10183;
  t10187 = t10163*t10185;
  t10200 = -1.*t9972*t10146;
  t10205 = t963*t10146*t9993;
  t10097 = t963*t9635*t9962;
  t10098 = t9960*t9972;
  t10099 = t10097 + t10098;
  t9952 = t963*t9635*t9947;
  t9999 = t9960*t9998;
  t10002 = t9952 + t9999;
  t10189 = t9960*t963*t9993;
  t10190 = -1.*t9635*t10175;
  t10192 = t10189 + t10190;
  t10256 = t10163*t10009;
  t10261 = -1.*t10163*t10185;
  t10277 = -1.*t963*t10146*t9993;
  t10272 = t963*t10146*t9947;
  t10295 = t10134*t9993;
  t10288 = -1.*t10134*t10170;
  t10342 = t9988*t963*t10163;
  t10346 = -1.*t10163*t10009;
  t10356 = t9972*t10146;
  t10364 = -1.*t963*t10146*t9947;
  p_output1[0]=t10002;
  p_output1[1]=t10004*t10009 - 1.*t10013*t10019;
  p_output1[2]=t10009*t10013 + t10004*t10019;
  p_output1[3]=(-1.*t10099*t10148 - 1.*t10154*t10158 + t10165)*t10177 + t10154*(t10158*t10177 + t10187 + t10148*t10192);
  p_output1[4]=t10185*(t10165 + t10200 + t10140*t963*t9962) + (t10140*t10175 + t10187 + t10205)*t963*t9988;
  p_output1[5]=t963*(t10200 - 1.*t10124*t963)*t9993 + t9972*(t10134*t10170 + t10205 - 1.*t10124*t9972*t9993);
  p_output1[6]=-0.2255*t10170 - 0.1575*t9947;
  p_output1[7]=-1.*t10109*t9737 + 0.325*t9945 - 1.*t10118*t9945;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10154;
  p_output1[19]=-1.*t10013*t10099 + t10004*t963*t9988;
  p_output1[20]=t10004*t10099 + t10013*t963*t9988;
  p_output1[21]=t10177*(t10019*t10148 + t10002*t10158 + t10256) + t10002*(-1.*t10158*t10177 - 1.*t10148*t10192 + t10261);
  p_output1[22]=t10009*(-1.*t10140*t10175 + t10261 + t10277) + t10185*(t10256 + t10272 + t10140*t9998);
  p_output1[23]=t963*(t10272 + t10295 - 1.*t10124*t9947*t9972)*t9993 + t963*t9947*(t10277 + t10288 + t10124*t9972*t9993);
  p_output1[24]=t10170*(t10295 + t10121*t9947) + t9993*(t10288 - 1.*t10121*t9993);
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
  p_output1[36]=t10177;
  p_output1[37]=t10004*t10185 - 1.*t10013*t10192;
  p_output1[38]=t10013*t10185 + t10004*t10192;
  p_output1[39]=t10002*(t10099*t10148 + t10154*t10158 + t10342) + t10154*(-1.*t10019*t10148 - 1.*t10002*t10158 + t10346);
  p_output1[40]=t10009*(t10342 + t10356 - 1.*t10140*t963*t9962) + t963*t9988*(t10346 + t10364 - 1.*t10140*t9998);
  p_output1[41]=t963*(t10356 + t10124*t963)*t9947 + t9972*(t10364 + t10124*t9947*t9972 - 1.*t10134*t9993);
  p_output1[42]=0.068*t9993;
  p_output1[43]=-0.325*t9737 + t10118*t9737 - 1.*t10109*t9945;
  p_output1[44]=-0.28;
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

#include "fFlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
