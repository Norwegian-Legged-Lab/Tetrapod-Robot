/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:43 GMT+02:00
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
  double t3137;
  double t25;
  double t2848;
  double t3190;
  double t6675;
  double t11468;
  double t12062;
  double t3278;
  double t4967;
  double t12875;
  double t4928;
  double t13551;
  double t3225;
  double t3114;
  double t3221;
  double t3222;
  double t12243;
  double t13552;
  double t13608;
  double t18053;
  double t13983;
  double t14211;
  double t14659;
  double t18022;
  double t16851;
  double t16906;
  double t17145;
  double t17979;
  double t18012;
  double t18017;
  double t18031;
  double t18039;
  double t18040;
  double t18096;
  double t18097;
  double t18109;
  double t18126;
  double t18133;
  double t18134;
  double t18137;
  double t18138;
  double t18143;
  double t18145;
  double t18146;
  double t18147;
  double t17709;
  double t18018;
  double t18021;
  double t18163;
  double t18164;
  double t18169;
  double t18172;
  double t18173;
  double t18174;
  double t18175;
  double t18180;
  double t18181;
  double t18182;
  double t18183;
  double t18203;
  double t18210;
  double t18211;
  double t18221;
  double t18226;
  double t18170;
  double t18171;
  double t18212;
  double t18213;
  double t18235;
  double t18236;
  double t18237;
  double t18238;
  double t18242;
  double t18244;
  double t18245;
  double t18220;
  double t18227;
  double t18230;
  double t18241;
  double t18246;
  double t18256;
  double t18261;
  double t18266;
  double t18270;
  double t3226;
  double t13620;
  double t13711;
  double t18232;
  double t18278;
  double t18289;
  double t18308;
  double t18324;
  double t18332;
  double t18358;
  double t18367;
  t3137 = Cos(var1[16]);
  t25 = Cos(var1[17]);
  t2848 = Sin(var1[16]);
  t3190 = Sin(var1[17]);
  t6675 = -1.*t3137*t25;
  t11468 = -1.*t2848*t3190;
  t12062 = t6675 + t11468;
  t3278 = Cos(var1[4]);
  t4967 = Cos(var1[5]);
  t12875 = Sin(var1[15]);
  t4928 = Cos(var1[15]);
  t13551 = Sin(var1[5]);
  t3225 = Sin(var1[4]);
  t3114 = -1.*t25*t2848;
  t3221 = t3137*t3190;
  t3222 = t3114 + t3221;
  t12243 = t4928*t4967*t12062;
  t13552 = -1.*t12875*t12062*t13551;
  t13608 = t12243 + t13552;
  t18053 = Sin(var1[3]);
  t13983 = t4967*t12875;
  t14211 = t4928*t13551;
  t14659 = t13983 + t14211;
  t18022 = Cos(var1[3]);
  t16851 = t3137*t25;
  t16906 = t2848*t3190;
  t17145 = t16851 + t16906;
  t17979 = t4928*t4967*t3222;
  t18012 = -1.*t12875*t3222*t13551;
  t18017 = t17979 + t18012;
  t18031 = t4967*t12875*t12062;
  t18039 = t4928*t12062*t13551;
  t18040 = t18031 + t18039;
  t18096 = t3278*t3222;
  t18097 = -1.*t3225*t13608;
  t18109 = t18096 + t18097;
  t18126 = -1.*t4928*t4967;
  t18133 = t12875*t13551;
  t18134 = t18126 + t18133;
  t18137 = t4967*t12875*t3222;
  t18138 = t4928*t3222*t13551;
  t18143 = t18137 + t18138;
  t18145 = t3278*t17145;
  t18146 = -1.*t3225*t18017;
  t18147 = t18145 + t18146;
  t17709 = t17145*t3225;
  t18018 = t3278*t18017;
  t18021 = t17709 + t18018;
  t18163 = -1.*t4928;
  t18164 = 1. + t18163;
  t18169 = -0.15121*t18164;
  t18172 = -1.*t3137;
  t18173 = 1. + t18172;
  t18174 = -0.28121*t18173;
  t18175 = -1.*t25;
  t18180 = 1. + t18175;
  t18181 = -0.50321*t18180;
  t18182 = -0.19821*t25;
  t18183 = t18181 + t18182;
  t18203 = t3137*t18183;
  t18210 = 0.305*t2848*t3190;
  t18211 = t18174 + t18203 + t18210;
  t18221 = t4928*t18211;
  t18226 = t18169 + t18221;
  t18170 = -0.15121*t4928;
  t18171 = 0.15121*t12875;
  t18212 = t12875*t18211;
  t18213 = t18169 + t18170 + t18171 + t18212;
  t18235 = 0.28121*t2848;
  t18236 = t18183*t2848;
  t18237 = -0.305*t3137*t3190;
  t18238 = t18235 + t18236 + t18237;
  t18242 = t4967*t18226;
  t18244 = -1.*t18213*t13551;
  t18245 = t18242 + t18244;
  t18220 = t4967*t18213;
  t18227 = t18226*t13551;
  t18230 = t18220 + t18227;
  t18241 = t18238*t3225;
  t18246 = t3278*t18245;
  t18256 = t18241 + t18246;
  t18261 = t3278*t18238;
  t18266 = -1.*t3225*t18245;
  t18270 = t18261 + t18266;
  t3226 = t3222*t3225;
  t13620 = t3278*t13608;
  t13711 = t3226 + t13620;
  t18232 = -1.*t18134*t18230;
  t18278 = t18143*t18230;
  t18289 = -1.*t18143*t18230;
  t18308 = t18040*t18230;
  t18324 = t18134*t18230;
  t18332 = -1.*t18040*t18230;
  t18358 = -1.*t18238*t17145;
  t18367 = t18238*t3222;
  p_output1[0]=t13711;
  p_output1[1]=t14659*t3278;
  p_output1[2]=t18021;
  p_output1[3]=t18022*t18040 - 1.*t18053*t18109;
  p_output1[4]=t18022*t18134 + t14659*t18053*t3225;
  p_output1[5]=t18022*t18143 - 1.*t18053*t18147;
  p_output1[6]=t18040*t18053 + t18022*t18109;
  p_output1[7]=t18053*t18134 - 1.*t14659*t18022*t3225;
  p_output1[8]=t18053*t18143 + t18022*t18147;
  p_output1[9]=t14659*(t18021*t18256 + t18147*t18270 + t18278)*t3278 + t18021*(t18232 + t14659*t18270*t3225 - 1.*t14659*t18256*t3278);
  p_output1[10]=t13711*(-1.*t18021*t18256 - 1.*t18147*t18270 + t18289) + t18021*(t13711*t18256 + t18109*t18270 + t18308);
  p_output1[11]=t14659*(-1.*t13711*t18256 - 1.*t18109*t18270 + t18332)*t3278 + t13711*(t18324 - 1.*t14659*t18270*t3225 + t14659*t18256*t3278);
  p_output1[12]=t18143*(t18232 - 1.*t14659*t18245) + t18134*(t17145*t18238 + t18017*t18245 + t18278);
  p_output1[13]=t18040*(-1.*t18017*t18245 + t18289 + t18358) + t18143*(t13608*t18245 + t18308 + t18367);
  p_output1[14]=t18040*(t14659*t18245 + t18324) + t18134*(-1.*t13608*t18245 + t18332 - 1.*t18238*t3222);
  p_output1[15]=t17145*(-1.*t12875*t18226 + t18213*t4928);
  p_output1[16]=t17145*(t12062*t12875*t18213 + t18367 + t12062*t18226*t4928) + t3222*(t18358 - 1.*t12875*t18213*t3222 - 1.*t18226*t3222*t4928);
  p_output1[17]=t3222*(t12875*t18226 - 1.*t18213*t4928);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t12062 - 0.15121*t17145;
  p_output1[46]=-0.15121 + t17145*(t12062*t18211 + t18367) + t3222*(t18358 - 1.*t18211*t3222);
  p_output1[47]=0;
  p_output1[48]=0.28121*t3190 + t18183*t3190 - 0.305*t25*t3190;
  p_output1[49]=0;
  p_output1[50]=0.28121*t25 + t18183*t25 + 0.305*Power(t3190,2);
  p_output1[51]=0;
  p_output1[52]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
