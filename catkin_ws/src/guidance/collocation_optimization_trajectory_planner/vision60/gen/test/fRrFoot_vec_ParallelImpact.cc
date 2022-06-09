/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:44 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t8195;
  double t4420;
  double t8227;
  double t8277;
  double t8260;
  double t8270;
  double t8278;
  double t3494;
  double t8276;
  double t26918;
  double t29973;
  double t8229;
  double t30061;
  double t30062;
  double t30069;
  double t30059;
  double t30143;
  double t30145;
  double t30073;
  double t30074;
  double t30075;
  double t30083;
  double t30084;
  double t30086;
  double t30087;
  double t30089;
  double t30133;
  double t30146;
  double t30147;
  double t30149;
  double t30155;
  double t30156;
  double t30158;
  double t30160;
  double t30161;
  double t30164;
  double t30170;
  double t30171;
  double t30172;
  double t30174;
  double t30175;
  double t30176;
  double t30051;
  double t30076;
  double t30078;
  double t30205;
  double t30206;
  double t30207;
  double t30209;
  double t30210;
  double t30211;
  double t30212;
  double t30213;
  double t30214;
  double t6893;
  double t8232;
  double t8256;
  double t30204;
  double t30208;
  double t30215;
  double t30216;
  double t30220;
  double t30221;
  double t30222;
  double t30223;
  double t30224;
  double t30225;
  double t30199;
  double t30200;
  double t30202;
  double t30203;
  double t30217;
  double t30218;
  double t30230;
  double t30232;
  double t30233;
  double t30235;
  double t30236;
  double t30237;
  double t30219;
  double t30227;
  double t30228;
  double t30234;
  double t30238;
  double t30239;
  double t30241;
  double t30242;
  double t30243;
  double t30080;
  double t30138;
  double t30139;
  double t30229;
  double t30247;
  double t30254;
  double t30259;
  double t30266;
  double t30271;
  double t30299;
  double t30303;
  double t30279;
  double t30283;
  double t30293;
  double t30289;
  double t30333;
  double t30328;
  t8195 = Cos(var1[15]);
  t4420 = Sin(var1[4]);
  t8227 = Cos(var1[4]);
  t8277 = Cos(var1[16]);
  t8260 = Cos(var1[17]);
  t8270 = Sin(var1[16]);
  t8278 = Sin(var1[17]);
  t3494 = Sin(var1[15]);
  t8276 = t8260*t8270;
  t26918 = -1.*t8277*t8278;
  t29973 = t8276 + t26918;
  t8229 = Sin(var1[5]);
  t30061 = t8277*t8260;
  t30062 = t8270*t8278;
  t30069 = t30061 + t30062;
  t30059 = Cos(var1[5]);
  t30143 = Cos(var1[3]);
  t30145 = Sin(var1[3]);
  t30073 = t30059*t30069;
  t30074 = t3494*t29973*t8229;
  t30075 = t30073 + t30074;
  t30083 = -1.*t8260*t8270;
  t30084 = t8277*t8278;
  t30086 = t30083 + t30084;
  t30087 = t30059*t30086;
  t30089 = t3494*t30069*t8229;
  t30133 = t30087 + t30089;
  t30146 = t8227*t3494;
  t30147 = t8195*t4420*t8229;
  t30149 = t30146 + t30147;
  t30155 = -1.*t30059*t3494*t29973;
  t30156 = t30069*t8229;
  t30158 = t30155 + t30156;
  t30160 = t8195*t8227*t29973;
  t30161 = -1.*t4420*t30075;
  t30164 = t30160 + t30161;
  t30170 = -1.*t30059*t3494*t30069;
  t30171 = t30086*t8229;
  t30172 = t30170 + t30171;
  t30174 = t8195*t8227*t30069;
  t30175 = -1.*t4420*t30133;
  t30176 = t30174 + t30175;
  t30051 = t8195*t29973*t4420;
  t30076 = t8227*t30075;
  t30078 = t30051 + t30076;
  t30205 = -0.0641*t8260;
  t30206 = -0.28*t8278;
  t30207 = t30205 + t30206;
  t30209 = -1.*t8260;
  t30210 = 1. + t30209;
  t30211 = -0.575*t30210;
  t30212 = -0.295*t8260;
  t30213 = -0.0641*t8278;
  t30214 = t30211 + t30212 + t30213;
  t6893 = t3494*t4420;
  t8232 = -1.*t8195*t8227*t8229;
  t8256 = t6893 + t8232;
  t30204 = 0.325*t8270;
  t30208 = t8277*t30207;
  t30215 = t8270*t30214;
  t30216 = t30204 + t30208 + t30215;
  t30220 = -1.*t8277;
  t30221 = 1. + t30220;
  t30222 = -0.325*t30221;
  t30223 = -1.*t8270*t30207;
  t30224 = t8277*t30214;
  t30225 = t30222 + t30223 + t30224;
  t30199 = -1.*t8195;
  t30200 = 1. + t30199;
  t30202 = -0.1575*t30200;
  t30203 = -0.2255*t8195;
  t30217 = -1.*t3494*t30216;
  t30218 = t30202 + t30203 + t30217;
  t30230 = -0.068*t3494;
  t30232 = t8195*t30216;
  t30233 = t30230 + t30232;
  t30235 = t30059*t30225;
  t30236 = -1.*t30218*t8229;
  t30237 = t30235 + t30236;
  t30219 = t30059*t30218;
  t30227 = t30225*t8229;
  t30228 = t30219 + t30227;
  t30234 = t30233*t4420;
  t30238 = t8227*t30237;
  t30239 = t30234 + t30238;
  t30241 = t8227*t30233;
  t30242 = -1.*t4420*t30237;
  t30243 = t30241 + t30242;
  t30080 = t8195*t30069*t4420;
  t30138 = t8227*t30133;
  t30139 = t30080 + t30138;
  t30229 = t8195*t30059*t30228;
  t30247 = -1.*t30228*t30158;
  t30254 = t30228*t30158;
  t30259 = -1.*t30228*t30172;
  t30266 = -1.*t8195*t30059*t30228;
  t30271 = t30228*t30172;
  t30299 = -1.*t3494*t30233;
  t30303 = t8195*t30233*t30069;
  t30279 = t3494*t30233;
  t30283 = -1.*t8195*t30233*t29973;
  t30293 = -1.*t8195*t30233*t30069;
  t30289 = t8195*t30233*t29973;
  t30333 = t30225*t30069;
  t30328 = -1.*t30225*t30086;
  p_output1[0]=t30078*var2[0] + t8256*var2[1] + t30139*var2[2];
  p_output1[1]=(t30143*t30158 - 1.*t30145*t30164)*var2[0] + (-1.*t30145*t30149 + t30059*t30143*t8195)*var2[1] + (t30143*t30172 - 1.*t30145*t30176)*var2[2];
  p_output1[2]=(t30145*t30158 + t30143*t30164)*var2[0] + (t30143*t30149 + t30059*t30145*t8195)*var2[1] + (t30145*t30172 + t30143*t30176)*var2[2];
  p_output1[3]=((t30139*t30239 + t30176*t30243 + t30271)*t8256 + t30139*(-1.*t30149*t30243 + t30266 - 1.*t30239*t8256))*var2[0] + (t30139*(t30078*t30239 + t30164*t30243 + t30254) + t30078*(-1.*t30139*t30239 - 1.*t30176*t30243 + t30259))*var2[1] + ((-1.*t30078*t30239 - 1.*t30164*t30243 + t30247)*t8256 + t30078*(t30229 + t30149*t30243 + t30239*t8256))*var2[2];
  p_output1[4]=(t30059*(t30133*t30237 + t30271 + t30303)*t8195 + t30172*(t30266 + t30299 + t30237*t8195*t8229))*var2[0] + (t30172*(t30075*t30237 + t30254 + t30289) + t30158*(-1.*t30133*t30237 + t30259 + t30293))*var2[1] + (t30059*(-1.*t30075*t30237 + t30247 + t30283)*t8195 + t30158*(t30229 + t30279 - 1.*t30237*t8195*t8229))*var2[2];
  p_output1[5]=(t3494*(t30086*t30225 + t30303 - 1.*t30069*t30218*t3494) + t30069*t8195*(t30299 - 1.*t30218*t8195))*var2[0] + (t30069*(t30289 + t30333 - 1.*t29973*t30218*t3494)*t8195 + t29973*(t30293 + t30328 + t30069*t30218*t3494)*t8195)*var2[1] + (t3494*(-1.*t30069*t30225 + t30283 + t29973*t30218*t3494) + t29973*t8195*(t30279 + t30218*t8195))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t29973 + 0.2255*t30086)*var2[0] + (t30069*(-1.*t30069*t30216 + t30328) + t30086*(t29973*t30216 + t30333))*var2[1] - 0.068*t30069*var2[2];
  p_output1[16]=(-1.*t30207*t8260 - 0.325*t8278 - 1.*t30214*t8278)*var2[0] + (0.325*t8260 + t30214*t8260 - 1.*t30207*t8278)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
