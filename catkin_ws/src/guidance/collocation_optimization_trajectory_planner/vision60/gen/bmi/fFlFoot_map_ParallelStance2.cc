/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:52 GMT+02:00
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
  double t7885;
  double t7952;
  double t8017;
  double t8023;
  double t8036;
  double t8044;
  double t8048;
  double t8080;
  double t8072;
  double t8065;
  double t8090;
  double t8091;
  double t8092;
  double t8050;
  double t5894;
  double t7869;
  double t8079;
  double t8093;
  double t8094;
  double t8106;
  double t8102;
  double t8103;
  double t8104;
  double t8101;
  double t8110;
  double t8111;
  double t8112;
  double t8157;
  double t8160;
  double t8164;
  double t8172;
  double t8176;
  double t8177;
  double t8178;
  double t8179;
  double t8183;
  double t8153;
  double t8168;
  double t8184;
  double t8188;
  double t8135;
  double t8136;
  double t8137;
  double t8152;
  double t8192;
  double t8198;
  double t8199;
  double t8205;
  double t8211;
  double t8213;
  double t8217;
  double t8218;
  double t8219;
  double t8220;
  double t8221;
  double t8223;
  double t8224;
  double t8225;
  double t8230;
  double t8233;
  double t8234;
  double t8239;
  double t8240;
  double t8241;
  double t8245;
  double t8246;
  double t8247;
  double t8235;
  double t8236;
  double t8237;
  double t8244;
  double t8248;
  double t8249;
  double t8250;
  double t8251;
  double t8253;
  double t8222;
  double t8226;
  double t8228;
  double t8242;
  double t8257;
  double t8261;
  double t8265;
  double t8266;
  double t8280;
  double t8283;
  double t8132;
  double t8133;
  double t8134;
  double t8049;
  double t8095;
  double t8096;
  double t8270;
  double t8271;
  double t8273;
  double t8336;
  double t8351;
  double t8368;
  double t8358;
  double t8393;
  double t8373;
  double t8425;
  double t8432;
  double t8441;
  double t8452;
  t7885 = Cos(var1[8]);
  t7952 = Sin(var1[7]);
  t8017 = t7885*t7952;
  t8023 = Cos(var1[7]);
  t8036 = Sin(var1[8]);
  t8044 = -1.*t8023*t8036;
  t8048 = t8017 + t8044;
  t8080 = Cos(var1[5]);
  t8072 = Sin(var1[6]);
  t8065 = Sin(var1[5]);
  t8090 = t8023*t7885;
  t8091 = t7952*t8036;
  t8092 = t8090 + t8091;
  t8050 = Cos(var1[4]);
  t5894 = Cos(var1[6]);
  t7869 = Sin(var1[4]);
  t8079 = t8065*t8072*t8048;
  t8093 = t8080*t8092;
  t8094 = t8079 + t8093;
  t8106 = Sin(var1[3]);
  t8102 = -1.*t8080*t8072*t8048;
  t8103 = t8065*t8092;
  t8104 = t8102 + t8103;
  t8101 = Cos(var1[3]);
  t8110 = t8050*t5894*t8048;
  t8111 = -1.*t7869*t8094;
  t8112 = t8110 + t8111;
  t8157 = -0.0641*t7885;
  t8160 = -0.28*t8036;
  t8164 = t8157 + t8160;
  t8172 = -1.*t7885;
  t8176 = 1. + t8172;
  t8177 = 0.075*t8176;
  t8178 = 0.355*t7885;
  t8179 = -0.0641*t8036;
  t8183 = t8177 + t8178 + t8179;
  t8153 = -0.325*t7952;
  t8168 = t8023*t8164;
  t8184 = t7952*t8183;
  t8188 = t8153 + t8168 + t8184;
  t8135 = -1.*t5894;
  t8136 = 1. + t8135;
  t8137 = 0.1575*t8136;
  t8152 = 0.2255*t5894;
  t8192 = -1.*t8072*t8188;
  t8198 = t8137 + t8152 + t8192;
  t8199 = -1.*t8065*t8198;
  t8205 = -1.*t8023;
  t8211 = 1. + t8205;
  t8213 = 0.325*t8211;
  t8217 = -1.*t7952*t8164;
  t8218 = t8023*t8183;
  t8219 = t8213 + t8217 + t8218;
  t8220 = t8080*t8219;
  t8221 = t8199 + t8220;
  t8223 = 0.068*t8072;
  t8224 = t5894*t8188;
  t8225 = t8223 + t8224;
  t8230 = -1.*t8050*t5894*t8065;
  t8233 = t7869*t8072;
  t8234 = t8230 + t8233;
  t8239 = t8080*t8198;
  t8240 = t8065*t8219;
  t8241 = t8239 + t8240;
  t8245 = -1.*t7885*t7952;
  t8246 = t8023*t8036;
  t8247 = t8245 + t8246;
  t8235 = t8050*t8221;
  t8236 = t7869*t8225;
  t8237 = t8235 + t8236;
  t8244 = t5894*t7869*t8092;
  t8248 = t8080*t8247;
  t8249 = t8065*t8072*t8092;
  t8250 = t8248 + t8249;
  t8251 = t8050*t8250;
  t8253 = t8244 + t8251;
  t8222 = -1.*t7869*t8221;
  t8226 = t8050*t8225;
  t8228 = t8222 + t8226;
  t8242 = -1.*t8080*t5894*t8241;
  t8257 = t8065*t8247;
  t8261 = -1.*t8080*t8072*t8092;
  t8265 = t8257 + t8261;
  t8266 = t8241*t8265;
  t8280 = -1.*t8072*t8225;
  t8283 = t5894*t8225*t8092;
  t8132 = t5894*t7869*t8065;
  t8133 = t8050*t8072;
  t8134 = t8132 + t8133;
  t8049 = t5894*t7869*t8048;
  t8095 = t8050*t8094;
  t8096 = t8049 + t8095;
  t8270 = t8050*t5894*t8092;
  t8271 = -1.*t7869*t8250;
  t8273 = t8270 + t8271;
  t8336 = t8241*t8104;
  t8351 = -1.*t8241*t8265;
  t8368 = -1.*t5894*t8225*t8092;
  t8358 = t5894*t8225*t8048;
  t8393 = t8219*t8092;
  t8373 = -1.*t8219*t8247;
  t8425 = t8080*t5894*t8241;
  t8432 = -1.*t8241*t8104;
  t8441 = t8072*t8225;
  t8452 = -1.*t5894*t8225*t8048;
  p_output1[0]=t8096;
  p_output1[1]=t8101*t8104 - 1.*t8106*t8112;
  p_output1[2]=t8104*t8106 + t8101*t8112;
  p_output1[3]=(-1.*t8134*t8228 - 1.*t8234*t8237 + t8242)*t8253 + t8234*(t8237*t8253 + t8266 + t8228*t8273);
  p_output1[4]=t8265*(t5894*t8065*t8221 + t8242 + t8280) + t5894*t8080*(t8221*t8250 + t8266 + t8283);
  p_output1[5]=t5894*t8092*(-1.*t5894*t8198 + t8280) + t8072*(-1.*t8072*t8092*t8198 + t8219*t8247 + t8283);
  p_output1[6]=-0.1575*t8048 - 0.2255*t8247;
  p_output1[7]=0.325*t8036 - 1.*t7885*t8164 - 1.*t8036*t8183;
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
  p_output1[18]=t8234;
  p_output1[19]=t5894*t8080*t8101 - 1.*t8106*t8134;
  p_output1[20]=t5894*t8080*t8106 + t8101*t8134;
  p_output1[21]=t8253*(t8112*t8228 + t8096*t8237 + t8336) + t8096*(-1.*t8237*t8253 - 1.*t8228*t8273 + t8351);
  p_output1[22]=t8265*(t8094*t8221 + t8336 + t8358) + t8104*(-1.*t8221*t8250 + t8351 + t8368);
  p_output1[23]=t5894*t8048*(t8072*t8092*t8198 + t8368 + t8373) + t5894*t8092*(-1.*t8048*t8072*t8198 + t8358 + t8393);
  p_output1[24]=t8092*(-1.*t8092*t8188 + t8373) + t8247*(t8048*t8188 + t8393);
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
  p_output1[36]=t8253;
  p_output1[37]=t8101*t8265 - 1.*t8106*t8273;
  p_output1[38]=t8106*t8265 + t8101*t8273;
  p_output1[39]=t8096*(t8134*t8228 + t8234*t8237 + t8425) + t8234*(-1.*t8112*t8228 - 1.*t8096*t8237 + t8432);
  p_output1[40]=t8104*(-1.*t5894*t8065*t8221 + t8425 + t8441) + t5894*t8080*(-1.*t8094*t8221 + t8432 + t8452);
  p_output1[41]=t5894*t8048*(t5894*t8198 + t8441) + t8072*(t8048*t8072*t8198 - 1.*t8092*t8219 + t8452);
  p_output1[42]=0.068*t8092;
  p_output1[43]=-0.325*t7885 - 1.*t8036*t8164 + t7885*t8183;
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
