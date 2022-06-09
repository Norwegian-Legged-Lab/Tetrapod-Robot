/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:50:04 GMT+02:00
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
  double t10063;
  double t10015;
  double t10058;
  double t10064;
  double t10062;
  double t10126;
  double t10133;
  double t10144;
  double t10152;
  double t10145;
  double t10147;
  double t10148;
  double t10153;
  double t10009;
  double t10140;
  double t10134;
  double t10150;
  double t10155;
  double t10156;
  double t10164;
  double t10160;
  double t10161;
  double t10162;
  double t10159;
  double t10165;
  double t10166;
  double t10167;
  double t10189;
  double t10190;
  double t10192;
  double t10194;
  double t10196;
  double t10197;
  double t10198;
  double t10199;
  double t10201;
  double t10188;
  double t10193;
  double t10202;
  double t10203;
  double t10208;
  double t10209;
  double t10210;
  double t10211;
  double t10212;
  double t10213;
  double t10183;
  double t10184;
  double t10186;
  double t10187;
  double t10204;
  double t10206;
  double t10220;
  double t10221;
  double t10223;
  double t10225;
  double t10226;
  double t10228;
  double t10217;
  double t10218;
  double t10219;
  double t10207;
  double t10214;
  double t10215;
  double t10174;
  double t10175;
  double t10176;
  double t10224;
  double t10229;
  double t10230;
  double t10173;
  double t10177;
  double t10178;
  double t10179;
  double t10181;
  double t10182;
  double t10236;
  double t10238;
  double t10239;
  double t10243;
  double t10244;
  double t10245;
  double t10216;
  double t10246;
  double t10255;
  double t10259;
  double t10232;
  double t10234;
  double t10235;
  double t10135;
  double t10157;
  double t10158;
  double t10248;
  double t10249;
  double t10250;
  double t10285;
  double t10290;
  double t10300;
  double t10296;
  double t10310;
  double t10305;
  double t10327;
  double t10332;
  double t10338;
  double t10342;
  t10063 = Cos(var1[10]);
  t10015 = Cos(var1[11]);
  t10058 = Sin(var1[10]);
  t10064 = Sin(var1[11]);
  t10062 = t10015*t10058;
  t10126 = -1.*t10063*t10064;
  t10133 = t10062 + t10126;
  t10144 = Cos(var1[5]);
  t10152 = Sin(var1[9]);
  t10145 = t10063*t10015;
  t10147 = t10058*t10064;
  t10148 = t10145 + t10147;
  t10153 = Sin(var1[5]);
  t10009 = Cos(var1[9]);
  t10140 = Cos(var1[4]);
  t10134 = Sin(var1[4]);
  t10150 = t10144*t10148;
  t10155 = t10152*t10133*t10153;
  t10156 = t10150 + t10155;
  t10164 = Sin(var1[3]);
  t10160 = -1.*t10144*t10152*t10133;
  t10161 = t10148*t10153;
  t10162 = t10160 + t10161;
  t10159 = Cos(var1[3]);
  t10165 = t10009*t10140*t10133;
  t10166 = -1.*t10134*t10156;
  t10167 = t10165 + t10166;
  t10189 = -0.0641*t10015;
  t10190 = -0.28*t10064;
  t10192 = t10189 + t10190;
  t10194 = -1.*t10015;
  t10196 = 1. + t10194;
  t10197 = -0.575*t10196;
  t10198 = -0.295*t10015;
  t10199 = -0.0641*t10064;
  t10201 = t10197 + t10198 + t10199;
  t10188 = 0.325*t10058;
  t10193 = t10063*t10192;
  t10202 = t10058*t10201;
  t10203 = t10188 + t10193 + t10202;
  t10208 = -1.*t10063;
  t10209 = 1. + t10208;
  t10210 = -0.325*t10209;
  t10211 = -1.*t10058*t10192;
  t10212 = t10063*t10201;
  t10213 = t10210 + t10211 + t10212;
  t10183 = -1.*t10009;
  t10184 = 1. + t10183;
  t10186 = 0.1575*t10184;
  t10187 = 0.2255*t10009;
  t10204 = -1.*t10152*t10203;
  t10206 = t10186 + t10187 + t10204;
  t10220 = 0.068*t10152;
  t10221 = t10009*t10203;
  t10223 = t10220 + t10221;
  t10225 = t10144*t10213;
  t10226 = -1.*t10206*t10153;
  t10228 = t10225 + t10226;
  t10217 = t10152*t10134;
  t10218 = -1.*t10009*t10140*t10153;
  t10219 = t10217 + t10218;
  t10207 = t10144*t10206;
  t10214 = t10213*t10153;
  t10215 = t10207 + t10214;
  t10174 = -1.*t10015*t10058;
  t10175 = t10063*t10064;
  t10176 = t10174 + t10175;
  t10224 = t10223*t10134;
  t10229 = t10140*t10228;
  t10230 = t10224 + t10229;
  t10173 = t10009*t10148*t10134;
  t10177 = t10144*t10176;
  t10178 = t10152*t10148*t10153;
  t10179 = t10177 + t10178;
  t10181 = t10140*t10179;
  t10182 = t10173 + t10181;
  t10236 = t10140*t10223;
  t10238 = -1.*t10134*t10228;
  t10239 = t10236 + t10238;
  t10243 = -1.*t10144*t10152*t10148;
  t10244 = t10176*t10153;
  t10245 = t10243 + t10244;
  t10216 = -1.*t10009*t10144*t10215;
  t10246 = t10215*t10245;
  t10255 = -1.*t10152*t10223;
  t10259 = t10009*t10223*t10148;
  t10232 = t10140*t10152;
  t10234 = t10009*t10134*t10153;
  t10235 = t10232 + t10234;
  t10135 = t10009*t10133*t10134;
  t10157 = t10140*t10156;
  t10158 = t10135 + t10157;
  t10248 = t10009*t10140*t10148;
  t10249 = -1.*t10134*t10179;
  t10250 = t10248 + t10249;
  t10285 = t10215*t10162;
  t10290 = -1.*t10215*t10245;
  t10300 = -1.*t10009*t10223*t10148;
  t10296 = t10009*t10223*t10133;
  t10310 = t10213*t10148;
  t10305 = -1.*t10213*t10176;
  t10327 = t10009*t10144*t10215;
  t10332 = -1.*t10215*t10162;
  t10338 = t10152*t10223;
  t10342 = -1.*t10009*t10223*t10133;
  p_output1[0]=t10158;
  p_output1[1]=t10159*t10162 - 1.*t10164*t10167;
  p_output1[2]=t10162*t10164 + t10159*t10167;
  p_output1[3]=t10182*(t10216 - 1.*t10219*t10230 - 1.*t10235*t10239) + t10219*(t10182*t10230 + t10246 + t10239*t10250);
  p_output1[4]=t10245*(t10216 + t10009*t10153*t10228 + t10255) + t10009*t10144*(t10179*t10228 + t10246 + t10259);
  p_output1[5]=t10009*t10148*(-1.*t10009*t10206 + t10255) + t10152*(-1.*t10148*t10152*t10206 + t10176*t10213 + t10259);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t10133 - 0.2255*t10176;
  p_output1[10]=-0.325*t10064 - 1.*t10015*t10192 - 1.*t10064*t10201;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10219;
  p_output1[19]=t10009*t10144*t10159 - 1.*t10164*t10235;
  p_output1[20]=t10009*t10144*t10164 + t10159*t10235;
  p_output1[21]=t10182*(t10158*t10230 + t10167*t10239 + t10285) + t10158*(-1.*t10182*t10230 - 1.*t10239*t10250 + t10290);
  p_output1[22]=t10245*(t10156*t10228 + t10285 + t10296) + t10162*(-1.*t10179*t10228 + t10290 + t10300);
  p_output1[23]=t10009*t10133*(t10148*t10152*t10206 + t10300 + t10305) + t10009*t10148*(-1.*t10133*t10152*t10206 + t10296 + t10310);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t10148*(-1.*t10148*t10203 + t10305) + t10176*(t10133*t10203 + t10310);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t10182;
  p_output1[37]=t10159*t10245 - 1.*t10164*t10250;
  p_output1[38]=t10164*t10245 + t10159*t10250;
  p_output1[39]=t10158*(t10219*t10230 + t10235*t10239 + t10327) + t10219*(-1.*t10158*t10230 - 1.*t10167*t10239 + t10332);
  p_output1[40]=t10162*(-1.*t10009*t10153*t10228 + t10327 + t10338) + t10009*t10144*(-1.*t10156*t10228 + t10332 + t10342);
  p_output1[41]=t10009*t10133*(t10009*t10206 + t10338) + t10152*(t10133*t10152*t10206 - 1.*t10148*t10213 + t10342);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t10148;
  p_output1[46]=0.325*t10015 - 1.*t10064*t10192 + t10015*t10201;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
