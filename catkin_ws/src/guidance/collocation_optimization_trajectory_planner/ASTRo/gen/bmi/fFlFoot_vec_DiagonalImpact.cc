/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:46 GMT+02:00
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
  double t15838;
  double t36871;
  double t22891;
  double t36995;
  double t36997;
  double t36991;
  double t37003;
  double t29693;
  double t36880;
  double t37011;
  double t37012;
  double t37013;
  double t36886;
  double t36996;
  double t37008;
  double t37009;
  double t31329;
  double t36883;
  double t36884;
  double t37036;
  double t37034;
  double t37014;
  double t37016;
  double t37017;
  double t37021;
  double t37022;
  double t37023;
  double t37025;
  double t37026;
  double t37027;
  double t37037;
  double t37038;
  double t37039;
  double t37044;
  double t37046;
  double t37048;
  double t37069;
  double t37073;
  double t37077;
  double t37083;
  double t37095;
  double t37096;
  double t37098;
  double t37101;
  double t37103;
  double t37010;
  double t37018;
  double t37019;
  double t37131;
  double t37132;
  double t37135;
  double t37138;
  double t37139;
  double t37140;
  double t37143;
  double t37144;
  double t37145;
  double t37147;
  double t37149;
  double t37150;
  double t37151;
  double t37152;
  double t37153;
  double t37157;
  double t37159;
  double t37160;
  double t37161;
  double t37162;
  double t37169;
  double t37171;
  double t37173;
  double t37174;
  double t37176;
  double t37178;
  double t37179;
  double t37158;
  double t37163;
  double t37167;
  double t37175;
  double t37180;
  double t37181;
  double t37183;
  double t37184;
  double t37185;
  double t37024;
  double t37029;
  double t37030;
  double t37168;
  double t37189;
  double t37196;
  double t37204;
  double t37212;
  double t37219;
  double t37245;
  double t37250;
  t15838 = Cos(var1[4]);
  t36871 = Cos(var1[5]);
  t22891 = Cos(var1[6]);
  t36995 = Cos(var1[8]);
  t36997 = Sin(var1[7]);
  t36991 = Cos(var1[7]);
  t37003 = Sin(var1[8]);
  t29693 = Sin(var1[5]);
  t36880 = Sin(var1[6]);
  t37011 = t36995*t36997;
  t37012 = -1.*t36991*t37003;
  t37013 = t37011 + t37012;
  t36886 = Sin(var1[4]);
  t36996 = t36991*t36995;
  t37008 = t36997*t37003;
  t37009 = t36996 + t37008;
  t31329 = -1.*t22891*t29693;
  t36883 = -1.*t36871*t36880;
  t36884 = t31329 + t36883;
  t37036 = Cos(var1[3]);
  t37034 = Sin(var1[3]);
  t37014 = t36871*t22891*t37013;
  t37016 = -1.*t29693*t36880*t37013;
  t37017 = t37014 + t37016;
  t37021 = -1.*t36995*t36997;
  t37022 = t36991*t37003;
  t37023 = t37021 + t37022;
  t37025 = t36871*t22891*t37009;
  t37026 = -1.*t29693*t36880*t37009;
  t37027 = t37025 + t37026;
  t37037 = t36871*t22891;
  t37038 = -1.*t29693*t36880;
  t37039 = t37037 + t37038;
  t37044 = t22891*t29693*t37013;
  t37046 = t36871*t36880*t37013;
  t37048 = t37044 + t37046;
  t37069 = t15838*t37009;
  t37073 = -1.*t36886*t37017;
  t37077 = t37069 + t37073;
  t37083 = t22891*t29693*t37009;
  t37095 = t36871*t36880*t37009;
  t37096 = t37083 + t37095;
  t37098 = t15838*t37023;
  t37101 = -1.*t36886*t37027;
  t37103 = t37098 + t37101;
  t37010 = t36886*t37009;
  t37018 = t15838*t37017;
  t37019 = t37010 + t37018;
  t37131 = -1.*t22891;
  t37132 = 1. + t37131;
  t37135 = 0.15121*t37132;
  t37138 = -1.*t36991;
  t37139 = 1. + t37138;
  t37140 = 0.28121*t37139;
  t37143 = -1.*t36995;
  t37144 = 1. + t37143;
  t37145 = 0.50321*t37144;
  t37147 = 0.19821*t36995;
  t37149 = t37145 + t37147;
  t37150 = t36991*t37149;
  t37151 = -0.305*t36997*t37003;
  t37152 = t37140 + t37150 + t37151;
  t37153 = t22891*t37152;
  t37157 = t37135 + t37153;
  t37159 = 0.15121*t22891;
  t37160 = -0.15121*t36880;
  t37161 = t36880*t37152;
  t37162 = t37135 + t37159 + t37160 + t37161;
  t37169 = 0.28121*t36997;
  t37171 = -1.*t37149*t36997;
  t37173 = -0.305*t36991*t37003;
  t37174 = t37169 + t37171 + t37173;
  t37176 = t36871*t37157;
  t37178 = -1.*t29693*t37162;
  t37179 = t37176 + t37178;
  t37158 = t29693*t37157;
  t37163 = t36871*t37162;
  t37167 = t37158 + t37163;
  t37175 = t36886*t37174;
  t37180 = t15838*t37179;
  t37181 = t37175 + t37180;
  t37183 = t15838*t37174;
  t37184 = -1.*t36886*t37179;
  t37185 = t37183 + t37184;
  t37024 = t36886*t37023;
  t37029 = t15838*t37027;
  t37030 = t37024 + t37029;
  t37168 = -1.*t37039*t37167;
  t37189 = t37048*t37167;
  t37196 = t37039*t37167;
  t37204 = -1.*t37096*t37167;
  t37212 = -1.*t37048*t37167;
  t37219 = t37096*t37167;
  t37245 = -1.*t37174*t37009;
  t37250 = t37174*t37023;
  p_output1[0]=t37030*var2[0] + t15838*t36884*var2[1] + t37019*var2[2];
  p_output1[1]=(t37036*t37096 - 1.*t37034*t37103)*var2[0] + (t36884*t36886*t37034 + t37036*t37039)*var2[1] + (t37036*t37048 - 1.*t37034*t37077)*var2[2];
  p_output1[2]=(t37034*t37096 + t37036*t37103)*var2[0] + (-1.*t36884*t36886*t37036 + t37034*t37039)*var2[1] + (t37034*t37048 + t37036*t37077)*var2[2];
  p_output1[3]=(t37019*(t37168 - 1.*t15838*t36884*t37181 + t36884*t36886*t37185) + t15838*t36884*(t37019*t37181 + t37077*t37185 + t37189))*var2[0] + (t37030*(-1.*t37019*t37181 - 1.*t37077*t37185 + t37212) + t37019*(t37030*t37181 + t37103*t37185 + t37219))*var2[1] + (t37030*(t15838*t36884*t37181 - 1.*t36884*t36886*t37185 + t37196) + t15838*t36884*(-1.*t37030*t37181 - 1.*t37103*t37185 + t37204))*var2[2];
  p_output1[4]=(t37048*(t37168 - 1.*t36884*t37179) + t37039*(t37009*t37174 + t37017*t37179 + t37189))*var2[0] + (t37096*(-1.*t37017*t37179 + t37212 + t37245) + t37048*(t37027*t37179 + t37219 + t37250))*var2[1] + (t37096*(t36884*t37179 + t37196) + t37039*(-1.*t37023*t37174 - 1.*t37027*t37179 + t37204))*var2[2];
  p_output1[5]=t37009*(t36880*t37157 - 1.*t22891*t37162)*var2[0] + (t37023*(-1.*t22891*t37013*t37157 - 1.*t36880*t37013*t37162 + t37245) + t37009*(t22891*t37009*t37157 + t36880*t37009*t37162 + t37250))*var2[1] + t37023*(-1.*t36880*t37157 + t22891*t37162)*var2[2];
  p_output1[6]=(-0.15121 + t37023*(-1.*t37013*t37152 + t37245) + t37009*(t37009*t37152 + t37250))*var2[1] + (0.15121*t37013 + 0.15121*t37023)*var2[2];
  p_output1[7]=(0.28121*t37003 - 0.305*t36995*t37003 - 1.*t37003*t37149)*var2[0] + (0.28121*t36995 + 0.305*Power(t37003,2) - 1.*t36995*t37149)*var2[2];
  p_output1[8]=-0.305*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
