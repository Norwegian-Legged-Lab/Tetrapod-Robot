/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:47 GMT+02:00
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
  double t3657;
  double t2434;
  double t3079;
  double t3895;
  double t5256;
  double t5281;
  double t5284;
  double t5226;
  double t5255;
  double t5508;
  double t5249;
  double t6412;
  double t4134;
  double t3193;
  double t4090;
  double t4124;
  double t5358;
  double t8204;
  double t8224;
  double t10106;
  double t8692;
  double t8820;
  double t9169;
  double t10068;
  double t9541;
  double t9566;
  double t9642;
  double t9823;
  double t9898;
  double t9899;
  double t10072;
  double t10078;
  double t10086;
  double t10130;
  double t10197;
  double t10210;
  double t10225;
  double t10226;
  double t10236;
  double t10253;
  double t10256;
  double t10257;
  double t10264;
  double t10267;
  double t10302;
  double t9780;
  double t9901;
  double t10044;
  double t11326;
  double t11339;
  double t11533;
  double t11688;
  double t11733;
  double t11945;
  double t12003;
  double t12176;
  double t12441;
  double t13120;
  double t13129;
  double t13136;
  double t13137;
  double t13175;
  double t13308;
  double t13324;
  double t11549;
  double t11555;
  double t13242;
  double t13243;
  double t13363;
  double t13370;
  double t13372;
  double t13373;
  double t13377;
  double t13378;
  double t13384;
  double t13261;
  double t13333;
  double t13334;
  double t13374;
  double t13389;
  double t13395;
  double t13413;
  double t13416;
  double t13420;
  double t5185;
  double t8423;
  double t8690;
  double t13350;
  double t13460;
  double t13559;
  double t13730;
  double t13793;
  double t13879;
  double t14018;
  double t14028;
  t3657 = Cos(var1[16]);
  t2434 = Cos(var1[17]);
  t3079 = Sin(var1[16]);
  t3895 = Sin(var1[17]);
  t5256 = -1.*t3657*t2434;
  t5281 = -1.*t3079*t3895;
  t5284 = t5256 + t5281;
  t5226 = Cos(var1[4]);
  t5255 = Cos(var1[5]);
  t5508 = Sin(var1[15]);
  t5249 = Cos(var1[15]);
  t6412 = Sin(var1[5]);
  t4134 = Sin(var1[4]);
  t3193 = -1.*t2434*t3079;
  t4090 = t3657*t3895;
  t4124 = t3193 + t4090;
  t5358 = t5249*t5255*t5284;
  t8204 = -1.*t5508*t5284*t6412;
  t8224 = t5358 + t8204;
  t10106 = Sin(var1[3]);
  t8692 = t5255*t5508;
  t8820 = t5249*t6412;
  t9169 = t8692 + t8820;
  t10068 = Cos(var1[3]);
  t9541 = t3657*t2434;
  t9566 = t3079*t3895;
  t9642 = t9541 + t9566;
  t9823 = t5249*t5255*t4124;
  t9898 = -1.*t5508*t4124*t6412;
  t9899 = t9823 + t9898;
  t10072 = t5255*t5508*t5284;
  t10078 = t5249*t5284*t6412;
  t10086 = t10072 + t10078;
  t10130 = t5226*t4124;
  t10197 = -1.*t4134*t8224;
  t10210 = t10130 + t10197;
  t10225 = -1.*t5249*t5255;
  t10226 = t5508*t6412;
  t10236 = t10225 + t10226;
  t10253 = t5255*t5508*t4124;
  t10256 = t5249*t4124*t6412;
  t10257 = t10253 + t10256;
  t10264 = t5226*t9642;
  t10267 = -1.*t4134*t9899;
  t10302 = t10264 + t10267;
  t9780 = t9642*t4134;
  t9901 = t5226*t9899;
  t10044 = t9780 + t9901;
  t11326 = -1.*t5249;
  t11339 = 1. + t11326;
  t11533 = -0.15121*t11339;
  t11688 = -1.*t3657;
  t11733 = 1. + t11688;
  t11945 = -0.28121*t11733;
  t12003 = -1.*t2434;
  t12176 = 1. + t12003;
  t12441 = -0.50321*t12176;
  t13120 = -0.19821*t2434;
  t13129 = t12441 + t13120;
  t13136 = t3657*t13129;
  t13137 = 0.305*t3079*t3895;
  t13175 = t11945 + t13136 + t13137;
  t13308 = t5249*t13175;
  t13324 = t11533 + t13308;
  t11549 = -0.15121*t5249;
  t11555 = 0.15121*t5508;
  t13242 = t5508*t13175;
  t13243 = t11533 + t11549 + t11555 + t13242;
  t13363 = 0.28121*t3079;
  t13370 = t13129*t3079;
  t13372 = -0.305*t3657*t3895;
  t13373 = t13363 + t13370 + t13372;
  t13377 = t5255*t13324;
  t13378 = -1.*t13243*t6412;
  t13384 = t13377 + t13378;
  t13261 = t5255*t13243;
  t13333 = t13324*t6412;
  t13334 = t13261 + t13333;
  t13374 = t13373*t4134;
  t13389 = t5226*t13384;
  t13395 = t13374 + t13389;
  t13413 = t5226*t13373;
  t13416 = -1.*t4134*t13384;
  t13420 = t13413 + t13416;
  t5185 = t4124*t4134;
  t8423 = t5226*t8224;
  t8690 = t5185 + t8423;
  t13350 = -1.*t10236*t13334;
  t13460 = t10257*t13334;
  t13559 = -1.*t10257*t13334;
  t13730 = t10086*t13334;
  t13793 = t10236*t13334;
  t13879 = -1.*t10086*t13334;
  t14018 = -1.*t13373*t9642;
  t14028 = t13373*t4124;
  p_output1[0]=t8690;
  p_output1[1]=t5226*t9169;
  p_output1[2]=t10044;
  p_output1[3]=t10068*t10086 - 1.*t10106*t10210;
  p_output1[4]=t10068*t10236 + t10106*t4134*t9169;
  p_output1[5]=t10068*t10257 - 1.*t10106*t10302;
  p_output1[6]=t10086*t10106 + t10068*t10210;
  p_output1[7]=t10106*t10236 - 1.*t10068*t4134*t9169;
  p_output1[8]=t10106*t10257 + t10068*t10302;
  p_output1[9]=(t10044*t13395 + t10302*t13420 + t13460)*t5226*t9169 + t10044*(t13350 + t13420*t4134*t9169 - 1.*t13395*t5226*t9169);
  p_output1[10]=(-1.*t10044*t13395 - 1.*t10302*t13420 + t13559)*t8690 + t10044*(t10210*t13420 + t13730 + t13395*t8690);
  p_output1[11]=t5226*(-1.*t10210*t13420 + t13879 - 1.*t13395*t8690)*t9169 + t8690*(t13793 - 1.*t13420*t4134*t9169 + t13395*t5226*t9169);
  p_output1[12]=t10257*(t13350 - 1.*t13384*t9169) + t10236*(t13460 + t13373*t9642 + t13384*t9899);
  p_output1[13]=t10257*(t13730 + t14028 + t13384*t8224) + t10086*(t13559 + t14018 - 1.*t13384*t9899);
  p_output1[14]=t10236*(t13879 - 1.*t13373*t4124 - 1.*t13384*t8224) + t10086*(t13793 + t13384*t9169);
  p_output1[15]=(t13243*t5249 - 1.*t13324*t5508)*t9642;
  p_output1[16]=t4124*(t14018 - 1.*t13324*t4124*t5249 - 1.*t13243*t4124*t5508) + (t14028 + t13324*t5249*t5284 + t13243*t5284*t5508)*t9642;
  p_output1[17]=t4124*(-1.*t13243*t5249 + t13324*t5508);
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
  p_output1[45]=-0.15121*t5284 - 0.15121*t9642;
  p_output1[46]=-0.15121 + t4124*(t14018 - 1.*t13175*t4124) + (t14028 + t13175*t5284)*t9642;
  p_output1[47]=0;
  p_output1[48]=0.28121*t3895 + t13129*t3895 - 0.305*t2434*t3895;
  p_output1[49]=0;
  p_output1[50]=0.28121*t2434 + t13129*t2434 + 0.305*Power(t3895,2);
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
