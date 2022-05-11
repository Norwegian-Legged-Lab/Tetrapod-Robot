/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:23 GMT+02:00
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
  double t6970;
  double t6990;
  double t6999;
  double t7005;
  double t7013;
  double t7017;
  double t7026;
  double t7102;
  double t2895;
  double t7106;
  double t6828;
  double t7107;
  double t7111;
  double t7112;
  double t7113;
  double t7110;
  double t7108;
  double t7114;
  double t7115;
  double t7171;
  double t7177;
  double t7138;
  double t7139;
  double t7143;
  double t7151;
  double t7157;
  double t7162;
  double t7173;
  double t7174;
  double t7175;
  double t7179;
  double t7194;
  double t7203;
  double t7213;
  double t7217;
  double t7224;
  double t7233;
  double t7239;
  double t7240;
  double t7243;
  double t7246;
  double t7247;
  double t7269;
  double t7270;
  double t7272;
  double t7275;
  double t7276;
  double t7277;
  double t7278;
  double t7279;
  double t7280;
  double t7267;
  double t7274;
  double t7281;
  double t7282;
  double t7133;
  double t7134;
  double t7135;
  double t7263;
  double t7264;
  double t7265;
  double t7266;
  double t7283;
  double t7284;
  double t7285;
  double t7286;
  double t7287;
  double t7288;
  double t7289;
  double t7290;
  double t7291;
  double t7292;
  double t7293;
  double t7295;
  double t7297;
  double t7298;
  double t7136;
  double t7169;
  double t7170;
  double t7306;
  double t7307;
  double t7308;
  double t7302;
  double t7303;
  double t7304;
  double t7294;
  double t7299;
  double t7300;
  double t7043;
  double t7118;
  double t7128;
  double t7309;
  double t7312;
  double t7320;
  double t7325;
  double t7333;
  double t7336;
  double t7346;
  double t7351;
  double t7376;
  double t7360;
  double t7382;
  double t7392;
  double t7417;
  double t7412;
  t6970 = Cos(var1[8]);
  t6990 = Sin(var1[7]);
  t6999 = t6970*t6990;
  t7005 = Cos(var1[7]);
  t7013 = Sin(var1[8]);
  t7017 = -1.*t7005*t7013;
  t7026 = t6999 + t7017;
  t7102 = Cos(var1[4]);
  t2895 = Cos(var1[6]);
  t7106 = Sin(var1[5]);
  t6828 = Sin(var1[4]);
  t7107 = Sin(var1[6]);
  t7111 = t7005*t6970;
  t7112 = t6990*t7013;
  t7113 = t7111 + t7112;
  t7110 = Cos(var1[5]);
  t7108 = t7106*t7107*t7026;
  t7114 = t7110*t7113;
  t7115 = t7108 + t7114;
  t7171 = Cos(var1[3]);
  t7177 = Sin(var1[3]);
  t7138 = -1.*t6970*t6990;
  t7139 = t7005*t7013;
  t7143 = t7138 + t7139;
  t7151 = t7110*t7143;
  t7157 = t7106*t7107*t7113;
  t7162 = t7151 + t7157;
  t7173 = -1.*t7110*t7107*t7026;
  t7174 = t7106*t7113;
  t7175 = t7173 + t7174;
  t7179 = t7102*t2895*t7026;
  t7194 = -1.*t6828*t7115;
  t7203 = t7179 + t7194;
  t7213 = t2895*t6828*t7106;
  t7217 = t7102*t7107;
  t7224 = t7213 + t7217;
  t7233 = t7106*t7143;
  t7239 = -1.*t7110*t7107*t7113;
  t7240 = t7233 + t7239;
  t7243 = t7102*t2895*t7113;
  t7246 = -1.*t6828*t7162;
  t7247 = t7243 + t7246;
  t7269 = -0.0641*t6970;
  t7270 = -0.28*t7013;
  t7272 = t7269 + t7270;
  t7275 = -1.*t6970;
  t7276 = 1. + t7275;
  t7277 = 0.075*t7276;
  t7278 = 0.355*t6970;
  t7279 = -0.0641*t7013;
  t7280 = t7277 + t7278 + t7279;
  t7267 = -0.325*t6990;
  t7274 = t7005*t7272;
  t7281 = t6990*t7280;
  t7282 = t7267 + t7274 + t7281;
  t7133 = -1.*t7102*t2895*t7106;
  t7134 = t6828*t7107;
  t7135 = t7133 + t7134;
  t7263 = -1.*t2895;
  t7264 = 1. + t7263;
  t7265 = 0.1575*t7264;
  t7266 = 0.2255*t2895;
  t7283 = -1.*t7107*t7282;
  t7284 = t7265 + t7266 + t7283;
  t7285 = -1.*t7106*t7284;
  t7286 = -1.*t7005;
  t7287 = 1. + t7286;
  t7288 = 0.325*t7287;
  t7289 = -1.*t6990*t7272;
  t7290 = t7005*t7280;
  t7291 = t7288 + t7289 + t7290;
  t7292 = t7110*t7291;
  t7293 = t7285 + t7292;
  t7295 = 0.068*t7107;
  t7297 = t2895*t7282;
  t7298 = t7295 + t7297;
  t7136 = t2895*t6828*t7113;
  t7169 = t7102*t7162;
  t7170 = t7136 + t7169;
  t7306 = t7110*t7284;
  t7307 = t7106*t7291;
  t7308 = t7306 + t7307;
  t7302 = t7102*t7293;
  t7303 = t6828*t7298;
  t7304 = t7302 + t7303;
  t7294 = -1.*t6828*t7293;
  t7299 = t7102*t7298;
  t7300 = t7294 + t7299;
  t7043 = t2895*t6828*t7026;
  t7118 = t7102*t7115;
  t7128 = t7043 + t7118;
  t7309 = -1.*t7110*t2895*t7308;
  t7312 = t7308*t7240;
  t7320 = t7308*t7175;
  t7325 = -1.*t7308*t7240;
  t7333 = t7110*t2895*t7308;
  t7336 = -1.*t7308*t7175;
  t7346 = -1.*t7107*t7298;
  t7351 = t2895*t7298*t7113;
  t7376 = -1.*t2895*t7298*t7113;
  t7360 = t2895*t7298*t7026;
  t7382 = t7107*t7298;
  t7392 = -1.*t2895*t7298*t7026;
  t7417 = t7291*t7113;
  t7412 = -1.*t7291*t7143;
  p_output1[0]=t7128;
  p_output1[1]=t7135;
  p_output1[2]=t7170;
  p_output1[3]=t7171*t7175 - 1.*t7177*t7203;
  p_output1[4]=t2895*t7110*t7171 - 1.*t7177*t7224;
  p_output1[5]=t7171*t7240 - 1.*t7177*t7247;
  p_output1[6]=t7175*t7177 + t7171*t7203;
  p_output1[7]=t2895*t7110*t7177 + t7171*t7224;
  p_output1[8]=t7177*t7240 + t7171*t7247;
  p_output1[9]=t7170*(-1.*t7224*t7300 - 1.*t7135*t7304 + t7309) + t7135*(t7247*t7300 + t7170*t7304 + t7312);
  p_output1[10]=t7170*(t7203*t7300 + t7128*t7304 + t7320) + t7128*(-1.*t7247*t7300 - 1.*t7170*t7304 + t7325);
  p_output1[11]=t7128*(t7224*t7300 + t7135*t7304 + t7333) + t7135*(-1.*t7203*t7300 - 1.*t7128*t7304 + t7336);
  p_output1[12]=t7240*(t2895*t7106*t7293 + t7309 + t7346) + t2895*t7110*(t7162*t7293 + t7312 + t7351);
  p_output1[13]=t7240*(t7115*t7293 + t7320 + t7360) + t7175*(-1.*t7162*t7293 + t7325 + t7376);
  p_output1[14]=t7175*(-1.*t2895*t7106*t7293 + t7333 + t7382) + t2895*t7110*(-1.*t7115*t7293 + t7336 + t7392);
  p_output1[15]=t2895*t7113*(-1.*t2895*t7284 + t7346) + t7107*(-1.*t7107*t7113*t7284 + t7143*t7291 + t7351);
  p_output1[16]=t2895*t7026*(t7107*t7113*t7284 + t7376 + t7412) + t2895*t7113*(-1.*t7026*t7107*t7284 + t7360 + t7417);
  p_output1[17]=t2895*t7026*(t2895*t7284 + t7382) + t7107*(t7026*t7107*t7284 - 1.*t7113*t7291 + t7392);
  p_output1[18]=-0.1575*t7026 - 0.2255*t7143;
  p_output1[19]=t7113*(-1.*t7113*t7282 + t7412) + t7143*(t7026*t7282 + t7417);
  p_output1[20]=0.068*t7113;
  p_output1[21]=0.325*t7013 - 1.*t6970*t7272 - 1.*t7013*t7280;
  p_output1[22]=0;
  p_output1[23]=-0.325*t6970 - 1.*t7013*t7272 + t6970*t7280;
  p_output1[24]=-0.0641;
  p_output1[25]=0;
  p_output1[26]=-0.28;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
