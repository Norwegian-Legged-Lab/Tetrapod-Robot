/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:22 GMT+02:00
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
  double t18060;
  double t4427;
  double t9937;
  double t18065;
  double t18176;
  double t18181;
  double t18185;
  double t18175;
  double t18187;
  double t18174;
  double t18188;
  double t18168;
  double t9948;
  double t18067;
  double t18068;
  double t18069;
  double t18186;
  double t18189;
  double t18190;
  double t18198;
  double t18194;
  double t18195;
  double t18196;
  double t18193;
  double t18199;
  double t18200;
  double t18201;
  double t18221;
  double t18222;
  double t18225;
  double t18230;
  double t18231;
  double t18232;
  double t18234;
  double t18235;
  double t18236;
  double t18237;
  double t18238;
  double t18239;
  double t18240;
  double t18241;
  double t18247;
  double t18250;
  double t18227;
  double t18228;
  double t18242;
  double t18244;
  double t18255;
  double t18256;
  double t18257;
  double t18258;
  double t18259;
  double t18260;
  double t18261;
  double t18264;
  double t18265;
  double t18266;
  double t18245;
  double t18251;
  double t18252;
  double t18207;
  double t18208;
  double t18209;
  double t18210;
  double t18211;
  double t18213;
  double t18214;
  double t18215;
  double t18216;
  double t18263;
  double t18268;
  double t18269;
  double t18271;
  double t18272;
  double t18274;
  double t18280;
  double t18281;
  double t18282;
  double t18218;
  double t18219;
  double t18220;
  double t18254;
  double t18283;
  double t18070;
  double t18191;
  double t18192;
  double t18289;
  double t18290;
  double t18291;
  double t18340;
  double t18347;
  double t18353;
  double t18358;
  double t18385;
  double t18391;
  t18060 = Cos(var1[16]);
  t4427 = Cos(var1[17]);
  t9937 = Sin(var1[16]);
  t18065 = Sin(var1[17]);
  t18176 = -1.*t18060*t4427;
  t18181 = -1.*t9937*t18065;
  t18185 = t18176 + t18181;
  t18175 = Cos(var1[5]);
  t18187 = Sin(var1[15]);
  t18174 = Cos(var1[15]);
  t18188 = Sin(var1[5]);
  t18168 = Cos(var1[4]);
  t9948 = -1.*t4427*t9937;
  t18067 = t18060*t18065;
  t18068 = t9948 + t18067;
  t18069 = Sin(var1[4]);
  t18186 = t18174*t18175*t18185;
  t18189 = -1.*t18187*t18185*t18188;
  t18190 = t18186 + t18189;
  t18198 = Sin(var1[3]);
  t18194 = t18175*t18187*t18185;
  t18195 = t18174*t18185*t18188;
  t18196 = t18194 + t18195;
  t18193 = Cos(var1[3]);
  t18199 = t18168*t18068;
  t18200 = -1.*t18069*t18190;
  t18201 = t18199 + t18200;
  t18221 = -1.*t18174;
  t18222 = 1. + t18221;
  t18225 = -0.15121*t18222;
  t18230 = -1.*t18060;
  t18231 = 1. + t18230;
  t18232 = -0.28121*t18231;
  t18234 = -1.*t4427;
  t18235 = 1. + t18234;
  t18236 = -0.50321*t18235;
  t18237 = -0.19821*t4427;
  t18238 = t18236 + t18237;
  t18239 = t18060*t18238;
  t18240 = 0.305*t9937*t18065;
  t18241 = t18232 + t18239 + t18240;
  t18247 = t18174*t18241;
  t18250 = t18225 + t18247;
  t18227 = -0.15121*t18174;
  t18228 = 0.15121*t18187;
  t18242 = t18187*t18241;
  t18244 = t18225 + t18227 + t18228 + t18242;
  t18255 = t18175*t18187;
  t18256 = t18174*t18188;
  t18257 = t18255 + t18256;
  t18258 = 0.28121*t9937;
  t18259 = t18238*t9937;
  t18260 = -0.305*t18060*t18065;
  t18261 = t18258 + t18259 + t18260;
  t18264 = t18175*t18250;
  t18265 = -1.*t18244*t18188;
  t18266 = t18264 + t18265;
  t18245 = t18175*t18244;
  t18251 = t18250*t18188;
  t18252 = t18245 + t18251;
  t18207 = t18060*t4427;
  t18208 = t9937*t18065;
  t18209 = t18207 + t18208;
  t18210 = t18209*t18069;
  t18211 = t18174*t18175*t18068;
  t18213 = -1.*t18187*t18068*t18188;
  t18214 = t18211 + t18213;
  t18215 = t18168*t18214;
  t18216 = t18210 + t18215;
  t18263 = t18261*t18069;
  t18268 = t18168*t18266;
  t18269 = t18263 + t18268;
  t18271 = t18168*t18261;
  t18272 = -1.*t18069*t18266;
  t18274 = t18271 + t18272;
  t18280 = t18175*t18187*t18068;
  t18281 = t18174*t18068*t18188;
  t18282 = t18280 + t18281;
  t18218 = -1.*t18174*t18175;
  t18219 = t18187*t18188;
  t18220 = t18218 + t18219;
  t18254 = -1.*t18220*t18252;
  t18283 = t18282*t18252;
  t18070 = t18068*t18069;
  t18191 = t18168*t18190;
  t18192 = t18070 + t18191;
  t18289 = t18168*t18209;
  t18290 = -1.*t18069*t18214;
  t18291 = t18289 + t18290;
  t18340 = -1.*t18282*t18252;
  t18347 = t18196*t18252;
  t18353 = -1.*t18261*t18209;
  t18358 = t18261*t18068;
  t18385 = t18220*t18252;
  t18391 = -1.*t18196*t18252;
  p_output1[0]=t18192;
  p_output1[1]=t18193*t18196 - 1.*t18198*t18201;
  p_output1[2]=t18196*t18198 + t18193*t18201;
  p_output1[3]=t18216*(t18254 - 1.*t18168*t18257*t18269 + t18069*t18257*t18274) + t18168*t18257*(t18216*t18269 + t18283 + t18274*t18291);
  p_output1[4]=(t18254 - 1.*t18257*t18266)*t18282 + t18220*(t18209*t18261 + t18214*t18266 + t18283);
  p_output1[5]=t18209*(t18174*t18244 - 1.*t18187*t18250);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t18185 - 0.15121*t18209;
  p_output1[16]=0.28121*t18065 + t18065*t18238 - 0.305*t18065*t4427;
  p_output1[17]=0;
  p_output1[18]=t18168*t18257;
  p_output1[19]=t18193*t18220 + t18069*t18198*t18257;
  p_output1[20]=t18198*t18220 - 1.*t18069*t18193*t18257;
  p_output1[21]=t18192*(-1.*t18216*t18269 - 1.*t18274*t18291 + t18340) + t18216*(t18192*t18269 + t18201*t18274 + t18347);
  p_output1[22]=t18196*(-1.*t18214*t18266 + t18340 + t18353) + t18282*(t18190*t18266 + t18347 + t18358);
  p_output1[23]=t18068*(-1.*t18068*t18187*t18244 - 1.*t18068*t18174*t18250 + t18353) + t18209*(t18185*t18187*t18244 + t18174*t18185*t18250 + t18358);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t18068*(-1.*t18068*t18241 + t18353) + t18209*(t18185*t18241 + t18358);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t18216;
  p_output1[37]=t18193*t18282 - 1.*t18198*t18291;
  p_output1[38]=t18198*t18282 + t18193*t18291;
  p_output1[39]=t18192*(t18168*t18257*t18269 - 1.*t18069*t18257*t18274 + t18385) + t18168*t18257*(-1.*t18192*t18269 - 1.*t18201*t18274 + t18391);
  p_output1[40]=t18196*(t18257*t18266 + t18385) + t18220*(-1.*t18068*t18261 - 1.*t18190*t18266 + t18391);
  p_output1[41]=t18068*(-1.*t18174*t18244 + t18187*t18250);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.305*Power(t18065,2) + 0.28121*t4427 + t18238*t4427;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
