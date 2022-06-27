/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:55 GMT+02:00
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
  double t6131;
  double t6061;
  double t6099;
  double t6132;
  double t6145;
  double t6182;
  double t6190;
  double t6142;
  double t6197;
  double t6140;
  double t6205;
  double t6139;
  double t6108;
  double t6133;
  double t6137;
  double t20;
  double t6194;
  double t6212;
  double t6217;
  double t6245;
  double t6222;
  double t6223;
  double t6242;
  double t6221;
  double t6246;
  double t6247;
  double t6248;
  double t6255;
  double t6256;
  double t6257;
  double t6266;
  double t6267;
  double t6268;
  double t6269;
  double t6270;
  double t6271;
  double t6272;
  double t6273;
  double t6274;
  double t6275;
  double t6276;
  double t6277;
  double t6279;
  double t6280;
  double t6281;
  double t6285;
  double t6297;
  double t6304;
  double t6309;
  double t6335;
  double t8430;
  double t8566;
  double t12015;
  double t13239;
  double t14333;
  double t14508;
  double t14509;
  double t15437;
  double t15784;
  double t15845;
  double t6292;
  double t6339;
  double t8362;
  double t6254;
  double t6258;
  double t6259;
  double t6260;
  double t6261;
  double t6262;
  double t14675;
  double t16274;
  double t16689;
  double t16971;
  double t17321;
  double t17344;
  double t18118;
  double t18161;
  double t18162;
  double t6263;
  double t6264;
  double t6265;
  double t8392;
  double t18260;
  double t6138;
  double t6218;
  double t6219;
  double t18282;
  double t18290;
  double t18312;
  double t18462;
  double t18470;
  double t18492;
  double t18506;
  double t18584;
  double t18610;
  t6131 = Cos(var1[7]);
  t6061 = Cos(var1[8]);
  t6099 = Sin(var1[7]);
  t6132 = Sin(var1[8]);
  t6145 = t6131*t6061;
  t6182 = t6099*t6132;
  t6190 = t6145 + t6182;
  t6142 = Cos(var1[6]);
  t6197 = Sin(var1[5]);
  t6140 = Cos(var1[5]);
  t6205 = Sin(var1[6]);
  t6139 = Cos(var1[4]);
  t6108 = -1.*t6061*t6099;
  t6133 = t6131*t6132;
  t6137 = t6108 + t6133;
  t20 = Sin(var1[4]);
  t6194 = t6140*t6142*t6190;
  t6212 = -1.*t6197*t6205*t6190;
  t6217 = t6194 + t6212;
  t6245 = Sin(var1[3]);
  t6222 = t6142*t6197*t6190;
  t6223 = t6140*t6205*t6190;
  t6242 = t6222 + t6223;
  t6221 = Cos(var1[3]);
  t6246 = t6139*t6137;
  t6247 = -1.*t20*t6217;
  t6248 = t6246 + t6247;
  t6255 = t6061*t6099;
  t6256 = -1.*t6131*t6132;
  t6257 = t6255 + t6256;
  t6266 = -1.*t6142;
  t6267 = 1. + t6266;
  t6268 = 0.15121*t6267;
  t6269 = -1.*t6131;
  t6270 = 1. + t6269;
  t6271 = 0.28121*t6270;
  t6272 = -1.*t6061;
  t6273 = 1. + t6272;
  t6274 = 0.50321*t6273;
  t6275 = 0.19821*t6061;
  t6276 = t6274 + t6275;
  t6277 = t6131*t6276;
  t6279 = -0.305*t6099*t6132;
  t6280 = t6271 + t6277 + t6279;
  t6281 = t6142*t6280;
  t6285 = t6268 + t6281;
  t6297 = 0.15121*t6142;
  t6304 = -0.15121*t6205;
  t6309 = t6205*t6280;
  t6335 = t6268 + t6297 + t6304 + t6309;
  t8430 = -1.*t6142*t6197;
  t8566 = -1.*t6140*t6205;
  t12015 = t8430 + t8566;
  t13239 = 0.28121*t6099;
  t14333 = -1.*t6276*t6099;
  t14508 = -0.305*t6131*t6132;
  t14509 = t13239 + t14333 + t14508;
  t15437 = t6140*t6285;
  t15784 = -1.*t6197*t6335;
  t15845 = t15437 + t15784;
  t6292 = t6197*t6285;
  t6339 = t6140*t6335;
  t8362 = t6292 + t6339;
  t6254 = t20*t6190;
  t6258 = t6140*t6142*t6257;
  t6259 = -1.*t6197*t6205*t6257;
  t6260 = t6258 + t6259;
  t6261 = t6139*t6260;
  t6262 = t6254 + t6261;
  t14675 = t20*t14509;
  t16274 = t6139*t15845;
  t16689 = t14675 + t16274;
  t16971 = t6139*t14509;
  t17321 = -1.*t20*t15845;
  t17344 = t16971 + t17321;
  t18118 = t6142*t6197*t6257;
  t18161 = t6140*t6205*t6257;
  t18162 = t18118 + t18161;
  t6263 = t6140*t6142;
  t6264 = -1.*t6197*t6205;
  t6265 = t6263 + t6264;
  t8392 = -1.*t6265*t8362;
  t18260 = t18162*t8362;
  t6138 = t20*t6137;
  t6218 = t6139*t6217;
  t6219 = t6138 + t6218;
  t18282 = t6139*t6190;
  t18290 = -1.*t20*t6260;
  t18312 = t18282 + t18290;
  t18462 = -1.*t18162*t8362;
  t18470 = t6242*t8362;
  t18492 = -1.*t14509*t6190;
  t18506 = t14509*t6137;
  t18584 = t6265*t8362;
  t18610 = -1.*t6242*t8362;
  p_output1[0]=t6219;
  p_output1[1]=t6221*t6242 - 1.*t6245*t6248;
  p_output1[2]=t6242*t6245 + t6221*t6248;
  p_output1[3]=t12015*t6139*(t18260 + t17344*t18312 + t16689*t6262) + t6262*(t12015*t17344*t20 - 1.*t12015*t16689*t6139 + t8392);
  p_output1[4]=(t18260 + t14509*t6190 + t15845*t6260)*t6265 + t18162*(-1.*t12015*t15845 + t8392);
  p_output1[5]=t6190*(t6205*t6285 - 1.*t6142*t6335);
  p_output1[6]=0;
  p_output1[7]=0.28121*t6132 - 0.305*t6061*t6132 - 1.*t6132*t6276;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t12015*t6139;
  p_output1[19]=t12015*t20*t6245 + t6221*t6265;
  p_output1[20]=-1.*t12015*t20*t6221 + t6245*t6265;
  p_output1[21]=(t18470 + t16689*t6219 + t17344*t6248)*t6262 + t6219*(-1.*t17344*t18312 + t18462 - 1.*t16689*t6262);
  p_output1[22]=t18162*(t18470 + t18506 + t15845*t6217) + t6242*(t18462 + t18492 - 1.*t15845*t6260);
  p_output1[23]=t6190*(t18506 + t6142*t6190*t6285 + t6190*t6205*t6335) + t6137*(t18492 - 1.*t6142*t6257*t6285 - 1.*t6205*t6257*t6335);
  p_output1[24]=-0.15121 + t6190*(t18506 + t6190*t6280) + t6137*(t18492 - 1.*t6257*t6280);
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
  p_output1[36]=t6262;
  p_output1[37]=t18162*t6221 - 1.*t18312*t6245;
  p_output1[38]=t18312*t6221 + t18162*t6245;
  p_output1[39]=(t18584 - 1.*t12015*t17344*t20 + t12015*t16689*t6139)*t6219 + t12015*t6139*(t18610 - 1.*t16689*t6219 - 1.*t17344*t6248);
  p_output1[40]=(t12015*t15845 + t18584)*t6242 + (t18610 - 1.*t14509*t6137 - 1.*t15845*t6217)*t6265;
  p_output1[41]=t6137*(-1.*t6205*t6285 + t6142*t6335);
  p_output1[42]=0.15121*t6137 + 0.15121*t6257;
  p_output1[43]=0.28121*t6061 + 0.305*Power(t6132,2) - 1.*t6061*t6276;
  p_output1[44]=-0.305;
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
