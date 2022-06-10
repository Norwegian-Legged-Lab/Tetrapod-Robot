/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:06 GMT+02:00
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
  double t6241;
  double t37;
  double t629;
  double t6630;
  double t14573;
  double t14604;
  double t14607;
  double t9559;
  double t14504;
  double t18099;
  double t10640;
  double t18172;
  double t6737;
  double t5696;
  double t6654;
  double t6683;
  double t18052;
  double t18699;
  double t18720;
  double t19378;
  double t18794;
  double t18795;
  double t18808;
  double t19277;
  double t18835;
  double t19014;
  double t19223;
  double t19227;
  double t19238;
  double t19239;
  double t19311;
  double t19357;
  double t19361;
  double t19392;
  double t19424;
  double t19470;
  double t19502;
  double t19507;
  double t19509;
  double t19526;
  double t19529;
  double t19544;
  double t19546;
  double t19547;
  double t19556;
  double t19225;
  double t19241;
  double t19251;
  double t19780;
  double t19798;
  double t19824;
  double t19837;
  double t19846;
  double t19856;
  double t19858;
  double t19859;
  double t19886;
  double t19905;
  double t19912;
  double t19938;
  double t19962;
  double t19992;
  double t19994;
  double t20002;
  double t19806;
  double t19821;
  double t19822;
  double t19965;
  double t19989;
  double t20014;
  double t20015;
  double t20019;
  double t20021;
  double t20044;
  double t20054;
  double t20057;
  double t19991;
  double t20006;
  double t20007;
  double t20022;
  double t20058;
  double t20073;
  double t20088;
  double t20092;
  double t20095;
  double t7104;
  double t18782;
  double t18792;
  double t20008;
  double t20104;
  double t20141;
  double t20163;
  double t20199;
  double t20213;
  double t20247;
  double t20255;
  t6241 = Cos(var1[10]);
  t37 = Cos(var1[11]);
  t629 = Sin(var1[10]);
  t6630 = Sin(var1[11]);
  t14573 = -1.*t6241*t37;
  t14604 = -1.*t629*t6630;
  t14607 = t14573 + t14604;
  t9559 = Cos(var1[4]);
  t14504 = Cos(var1[5]);
  t18099 = Sin(var1[9]);
  t10640 = Cos(var1[9]);
  t18172 = Sin(var1[5]);
  t6737 = Sin(var1[4]);
  t5696 = -1.*t37*t629;
  t6654 = t6241*t6630;
  t6683 = t5696 + t6654;
  t18052 = t10640*t14504*t14607;
  t18699 = -1.*t18099*t14607*t18172;
  t18720 = t18052 + t18699;
  t19378 = Sin(var1[3]);
  t18794 = t14504*t18099;
  t18795 = t10640*t18172;
  t18808 = t18794 + t18795;
  t19277 = Cos(var1[3]);
  t18835 = t6241*t37;
  t19014 = t629*t6630;
  t19223 = t18835 + t19014;
  t19227 = t10640*t14504*t6683;
  t19238 = -1.*t18099*t6683*t18172;
  t19239 = t19227 + t19238;
  t19311 = t14504*t18099*t14607;
  t19357 = t10640*t14607*t18172;
  t19361 = t19311 + t19357;
  t19392 = t9559*t6683;
  t19424 = -1.*t6737*t18720;
  t19470 = t19392 + t19424;
  t19502 = -1.*t10640*t14504;
  t19507 = t18099*t18172;
  t19509 = t19502 + t19507;
  t19526 = t14504*t18099*t6683;
  t19529 = t10640*t6683*t18172;
  t19544 = t19526 + t19529;
  t19546 = t9559*t19223;
  t19547 = -1.*t6737*t19239;
  t19556 = t19546 + t19547;
  t19225 = t19223*t6737;
  t19241 = t9559*t19239;
  t19251 = t19225 + t19241;
  t19780 = -1.*t10640;
  t19798 = 1. + t19780;
  t19824 = -1.*t6241;
  t19837 = 1. + t19824;
  t19846 = -0.28121*t19837;
  t19856 = -1.*t37;
  t19858 = 1. + t19856;
  t19859 = -0.50321*t19858;
  t19886 = -0.19821*t37;
  t19905 = t19859 + t19886;
  t19912 = t6241*t19905;
  t19938 = 0.305*t629*t6630;
  t19962 = t19846 + t19912 + t19938;
  t19992 = -0.15121*t19798;
  t19994 = t10640*t19962;
  t20002 = t19992 + t19994;
  t19806 = 0.15121*t19798;
  t19821 = 0.15121*t10640;
  t19822 = 0.15121*t18099;
  t19965 = t18099*t19962;
  t19989 = t19806 + t19821 + t19822 + t19965;
  t20014 = 0.28121*t629;
  t20015 = t19905*t629;
  t20019 = -0.305*t6241*t6630;
  t20021 = t20014 + t20015 + t20019;
  t20044 = t14504*t20002;
  t20054 = -1.*t19989*t18172;
  t20057 = t20044 + t20054;
  t19991 = t14504*t19989;
  t20006 = t20002*t18172;
  t20007 = t19991 + t20006;
  t20022 = t20021*t6737;
  t20058 = t9559*t20057;
  t20073 = t20022 + t20058;
  t20088 = t9559*t20021;
  t20092 = -1.*t6737*t20057;
  t20095 = t20088 + t20092;
  t7104 = t6683*t6737;
  t18782 = t9559*t18720;
  t18792 = t7104 + t18782;
  t20008 = -1.*t19509*t20007;
  t20104 = t19544*t20007;
  t20141 = -1.*t19544*t20007;
  t20163 = t19361*t20007;
  t20199 = t19509*t20007;
  t20213 = -1.*t19361*t20007;
  t20247 = -1.*t20021*t19223;
  t20255 = t20021*t6683;
  p_output1[0]=t18792;
  p_output1[1]=t18808*t9559;
  p_output1[2]=t19251;
  p_output1[3]=t19277*t19361 - 1.*t19378*t19470;
  p_output1[4]=t19277*t19509 + t18808*t19378*t6737;
  p_output1[5]=t19277*t19544 - 1.*t19378*t19556;
  p_output1[6]=t19361*t19378 + t19277*t19470;
  p_output1[7]=t19378*t19509 - 1.*t18808*t19277*t6737;
  p_output1[8]=t19378*t19544 + t19277*t19556;
  p_output1[9]=t18808*(t19251*t20073 + t19556*t20095 + t20104)*t9559 + t19251*(t20008 + t18808*t20095*t6737 - 1.*t18808*t20073*t9559);
  p_output1[10]=t18792*(-1.*t19251*t20073 - 1.*t19556*t20095 + t20141) + t19251*(t18792*t20073 + t19470*t20095 + t20163);
  p_output1[11]=t18808*(-1.*t18792*t20073 - 1.*t19470*t20095 + t20213)*t9559 + t18792*(t20199 - 1.*t18808*t20095*t6737 + t18808*t20073*t9559);
  p_output1[12]=t19544*(t20008 - 1.*t18808*t20057) + t19509*(t19223*t20021 + t19239*t20057 + t20104);
  p_output1[13]=t19361*(-1.*t19239*t20057 + t20141 + t20247) + t19544*(t18720*t20057 + t20163 + t20255);
  p_output1[14]=t19361*(t18808*t20057 + t20199) + t19509*(-1.*t18720*t20057 + t20213 - 1.*t20021*t6683);
  p_output1[15]=t19223*(t10640*t19989 - 1.*t18099*t20002);
  p_output1[16]=t19223*(t14607*t18099*t19989 + t10640*t14607*t20002 + t20255) + t6683*(t20247 - 1.*t18099*t19989*t6683 - 1.*t10640*t20002*t6683);
  p_output1[17]=(-1.*t10640*t19989 + t18099*t20002)*t6683;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t14607 + 0.15121*t19223;
  p_output1[28]=-0.15121 + t19223*(t14607*t19962 + t20255) + t6683*(t20247 - 1.*t19962*t6683);
  p_output1[29]=0;
  p_output1[30]=0.28121*t6630 + t19905*t6630 - 0.305*t37*t6630;
  p_output1[31]=0;
  p_output1[32]=0.28121*t37 + t19905*t37 + 0.305*Power(t6630,2);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.305;
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

#include "Jh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
