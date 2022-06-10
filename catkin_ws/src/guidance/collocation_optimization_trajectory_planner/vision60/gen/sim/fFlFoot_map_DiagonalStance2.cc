/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:55 GMT+02:00
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
  double t6889;
  double t6968;
  double t6971;
  double t6972;
  double t6987;
  double t6988;
  double t6992;
  double t7038;
  double t7033;
  double t7017;
  double t7059;
  double t7061;
  double t7070;
  double t6994;
  double t4532;
  double t6776;
  double t7035;
  double t7071;
  double t7073;
  double t7100;
  double t7085;
  double t7091;
  double t7098;
  double t7083;
  double t7101;
  double t7104;
  double t7106;
  double t7207;
  double t7208;
  double t7212;
  double t7214;
  double t7215;
  double t7216;
  double t7219;
  double t7220;
  double t7221;
  double t7206;
  double t7213;
  double t7222;
  double t7223;
  double t7188;
  double t7196;
  double t7200;
  double t7205;
  double t7225;
  double t7231;
  double t7234;
  double t7236;
  double t7240;
  double t7243;
  double t7244;
  double t7248;
  double t7249;
  double t7253;
  double t7254;
  double t7256;
  double t7257;
  double t7260;
  double t7267;
  double t7274;
  double t7281;
  double t7288;
  double t7290;
  double t7291;
  double t7302;
  double t7303;
  double t7312;
  double t7282;
  double t7284;
  double t7286;
  double t7300;
  double t7313;
  double t7314;
  double t7315;
  double t7317;
  double t7319;
  double t7255;
  double t7261;
  double t7263;
  double t7292;
  double t7322;
  double t7324;
  double t7325;
  double t7328;
  double t7347;
  double t7352;
  double t7148;
  double t7172;
  double t7186;
  double t6993;
  double t7078;
  double t7079;
  double t7333;
  double t7334;
  double t7335;
  double t7418;
  double t7454;
  double t7483;
  double t7472;
  double t7509;
  double t7490;
  double t7562;
  double t7566;
  double t7579;
  double t7590;
  t6889 = Cos(var1[8]);
  t6968 = Sin(var1[7]);
  t6971 = t6889*t6968;
  t6972 = Cos(var1[7]);
  t6987 = Sin(var1[8]);
  t6988 = -1.*t6972*t6987;
  t6992 = t6971 + t6988;
  t7038 = Cos(var1[5]);
  t7033 = Sin(var1[6]);
  t7017 = Sin(var1[5]);
  t7059 = t6972*t6889;
  t7061 = t6968*t6987;
  t7070 = t7059 + t7061;
  t6994 = Cos(var1[4]);
  t4532 = Cos(var1[6]);
  t6776 = Sin(var1[4]);
  t7035 = t7017*t7033*t6992;
  t7071 = t7038*t7070;
  t7073 = t7035 + t7071;
  t7100 = Sin(var1[3]);
  t7085 = -1.*t7038*t7033*t6992;
  t7091 = t7017*t7070;
  t7098 = t7085 + t7091;
  t7083 = Cos(var1[3]);
  t7101 = t6994*t4532*t6992;
  t7104 = -1.*t6776*t7073;
  t7106 = t7101 + t7104;
  t7207 = -0.0641*t6889;
  t7208 = -0.28*t6987;
  t7212 = t7207 + t7208;
  t7214 = -1.*t6889;
  t7215 = 1. + t7214;
  t7216 = 0.075*t7215;
  t7219 = 0.355*t6889;
  t7220 = -0.0641*t6987;
  t7221 = t7216 + t7219 + t7220;
  t7206 = -0.325*t6968;
  t7213 = t6972*t7212;
  t7222 = t6968*t7221;
  t7223 = t7206 + t7213 + t7222;
  t7188 = -1.*t4532;
  t7196 = 1. + t7188;
  t7200 = 0.1575*t7196;
  t7205 = 0.2255*t4532;
  t7225 = -1.*t7033*t7223;
  t7231 = t7200 + t7205 + t7225;
  t7234 = -1.*t7017*t7231;
  t7236 = -1.*t6972;
  t7240 = 1. + t7236;
  t7243 = 0.325*t7240;
  t7244 = -1.*t6968*t7212;
  t7248 = t6972*t7221;
  t7249 = t7243 + t7244 + t7248;
  t7253 = t7038*t7249;
  t7254 = t7234 + t7253;
  t7256 = 0.068*t7033;
  t7257 = t4532*t7223;
  t7260 = t7256 + t7257;
  t7267 = -1.*t6994*t4532*t7017;
  t7274 = t6776*t7033;
  t7281 = t7267 + t7274;
  t7288 = t7038*t7231;
  t7290 = t7017*t7249;
  t7291 = t7288 + t7290;
  t7302 = -1.*t6889*t6968;
  t7303 = t6972*t6987;
  t7312 = t7302 + t7303;
  t7282 = t6994*t7254;
  t7284 = t6776*t7260;
  t7286 = t7282 + t7284;
  t7300 = t4532*t6776*t7070;
  t7313 = t7038*t7312;
  t7314 = t7017*t7033*t7070;
  t7315 = t7313 + t7314;
  t7317 = t6994*t7315;
  t7319 = t7300 + t7317;
  t7255 = -1.*t6776*t7254;
  t7261 = t6994*t7260;
  t7263 = t7255 + t7261;
  t7292 = -1.*t7038*t4532*t7291;
  t7322 = t7017*t7312;
  t7324 = -1.*t7038*t7033*t7070;
  t7325 = t7322 + t7324;
  t7328 = t7291*t7325;
  t7347 = -1.*t7033*t7260;
  t7352 = t4532*t7260*t7070;
  t7148 = t4532*t6776*t7017;
  t7172 = t6994*t7033;
  t7186 = t7148 + t7172;
  t6993 = t4532*t6776*t6992;
  t7078 = t6994*t7073;
  t7079 = t6993 + t7078;
  t7333 = t6994*t4532*t7070;
  t7334 = -1.*t6776*t7315;
  t7335 = t7333 + t7334;
  t7418 = t7291*t7098;
  t7454 = -1.*t7291*t7325;
  t7483 = -1.*t4532*t7260*t7070;
  t7472 = t4532*t7260*t6992;
  t7509 = t7249*t7070;
  t7490 = -1.*t7249*t7312;
  t7562 = t7038*t4532*t7291;
  t7566 = -1.*t7291*t7098;
  t7579 = t7033*t7260;
  t7590 = -1.*t4532*t7260*t6992;
  p_output1[0]=t7079;
  p_output1[1]=t7083*t7098 - 1.*t7100*t7106;
  p_output1[2]=t7098*t7100 + t7083*t7106;
  p_output1[3]=(-1.*t7186*t7263 - 1.*t7281*t7286 + t7292)*t7319 + t7281*(t7286*t7319 + t7328 + t7263*t7335);
  p_output1[4]=t7325*(t4532*t7017*t7254 + t7292 + t7347) + t4532*t7038*(t7254*t7315 + t7328 + t7352);
  p_output1[5]=t4532*t7070*(-1.*t4532*t7231 + t7347) + t7033*(-1.*t7033*t7070*t7231 + t7249*t7312 + t7352);
  p_output1[6]=-0.1575*t6992 - 0.2255*t7312;
  p_output1[7]=0.325*t6987 - 1.*t6889*t7212 - 1.*t6987*t7221;
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
  p_output1[18]=t7281;
  p_output1[19]=t4532*t7038*t7083 - 1.*t7100*t7186;
  p_output1[20]=t4532*t7038*t7100 + t7083*t7186;
  p_output1[21]=t7319*(t7106*t7263 + t7079*t7286 + t7418) + t7079*(-1.*t7286*t7319 - 1.*t7263*t7335 + t7454);
  p_output1[22]=t7325*(t7073*t7254 + t7418 + t7472) + t7098*(-1.*t7254*t7315 + t7454 + t7483);
  p_output1[23]=t4532*t6992*(t7033*t7070*t7231 + t7483 + t7490) + t4532*t7070*(-1.*t6992*t7033*t7231 + t7472 + t7509);
  p_output1[24]=t7070*(-1.*t7070*t7223 + t7490) + t7312*(t6992*t7223 + t7509);
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
  p_output1[36]=t7319;
  p_output1[37]=t7083*t7325 - 1.*t7100*t7335;
  p_output1[38]=t7100*t7325 + t7083*t7335;
  p_output1[39]=t7079*(t7186*t7263 + t7281*t7286 + t7562) + t7281*(-1.*t7106*t7263 - 1.*t7079*t7286 + t7566);
  p_output1[40]=t7098*(-1.*t4532*t7017*t7254 + t7562 + t7579) + t4532*t7038*(-1.*t7073*t7254 + t7566 + t7590);
  p_output1[41]=t4532*t6992*(t4532*t7231 + t7579) + t7033*(t6992*t7033*t7231 - 1.*t7070*t7249 + t7590);
  p_output1[42]=0.068*t7070;
  p_output1[43]=-0.325*t6889 - 1.*t6987*t7212 + t6889*t7221;
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

#include "fFlFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
