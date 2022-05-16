/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:52 GMT+02:00
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
  double t3380;
  double t50662;
  double t28554;
  double t51714;
  double t51911;
  double t51712;
  double t51912;
  double t28592;
  double t51927;
  double t51928;
  double t51929;
  double t51702;
  double t51924;
  double t51905;
  double t51913;
  double t51919;
  double t37390;
  double t51708;
  double t51709;
  double t52044;
  double t51952;
  double t51931;
  double t51932;
  double t51933;
  double t51939;
  double t51940;
  double t51941;
  double t51944;
  double t51945;
  double t51947;
  double t52047;
  double t52059;
  double t52061;
  double t52169;
  double t52171;
  double t52172;
  double t52175;
  double t52177;
  double t52178;
  double t52185;
  double t52191;
  double t52194;
  double t52196;
  double t52197;
  double t52198;
  double t51925;
  double t51935;
  double t51936;
  double t52216;
  double t52217;
  double t52222;
  double t52223;
  double t52226;
  double t52227;
  double t52228;
  double t52229;
  double t52230;
  double t52231;
  double t52232;
  double t52233;
  double t52235;
  double t52240;
  double t52241;
  double t52242;
  double t52218;
  double t52220;
  double t52221;
  double t52236;
  double t52237;
  double t52246;
  double t52247;
  double t52248;
  double t52249;
  double t52251;
  double t52252;
  double t52253;
  double t52239;
  double t52243;
  double t52244;
  double t52250;
  double t52254;
  double t52255;
  double t52257;
  double t52258;
  double t52259;
  double t51943;
  double t51948;
  double t51949;
  double t52245;
  double t52266;
  double t52273;
  double t52278;
  double t52300;
  double t52324;
  double t52399;
  double t52403;
  t3380 = Cos(var1[4]);
  t50662 = Cos(var1[12]);
  t28554 = Cos(var1[5]);
  t51714 = Cos(var1[14]);
  t51911 = Sin(var1[13]);
  t51712 = Cos(var1[13]);
  t51912 = Sin(var1[14]);
  t28592 = Sin(var1[12]);
  t51927 = t51714*t51911;
  t51928 = -1.*t51712*t51912;
  t51929 = t51927 + t51928;
  t51702 = Sin(var1[5]);
  t51924 = Sin(var1[4]);
  t51905 = t51712*t51714;
  t51913 = t51911*t51912;
  t51919 = t51905 + t51913;
  t37390 = -1.*t28554*t28592;
  t51708 = -1.*t50662*t51702;
  t51709 = t37390 + t51708;
  t52044 = Cos(var1[3]);
  t51952 = Sin(var1[3]);
  t51931 = t50662*t28554*t51929;
  t51932 = -1.*t28592*t51929*t51702;
  t51933 = t51931 + t51932;
  t51939 = -1.*t51714*t51911;
  t51940 = t51712*t51912;
  t51941 = t51939 + t51940;
  t51944 = t50662*t28554*t51919;
  t51945 = -1.*t28592*t51919*t51702;
  t51947 = t51944 + t51945;
  t52047 = t50662*t28554;
  t52059 = -1.*t28592*t51702;
  t52061 = t52047 + t52059;
  t52169 = t28554*t28592*t51929;
  t52171 = t50662*t51929*t51702;
  t52172 = t52169 + t52171;
  t52175 = t3380*t51919;
  t52177 = -1.*t51924*t51933;
  t52178 = t52175 + t52177;
  t52185 = t28554*t28592*t51919;
  t52191 = t50662*t51919*t51702;
  t52194 = t52185 + t52191;
  t52196 = t3380*t51941;
  t52197 = -1.*t51924*t51947;
  t52198 = t52196 + t52197;
  t51925 = t51919*t51924;
  t51935 = t3380*t51933;
  t51936 = t51925 + t51935;
  t52216 = -1.*t50662;
  t52217 = 1. + t52216;
  t52222 = -1.*t51712;
  t52223 = 1. + t52222;
  t52226 = 0.28121*t52223;
  t52227 = -1.*t51714;
  t52228 = 1. + t52227;
  t52229 = 0.50321*t52228;
  t52230 = 0.23321*t51714;
  t52231 = t52229 + t52230;
  t52232 = t51712*t52231;
  t52233 = -0.27*t51911*t51912;
  t52235 = t52226 + t52232 + t52233;
  t52240 = 0.15121*t52217;
  t52241 = t50662*t52235;
  t52242 = t52240 + t52241;
  t52218 = -0.15121*t52217;
  t52220 = -0.15121*t50662;
  t52221 = -0.15121*t28592;
  t52236 = t28592*t52235;
  t52237 = t52218 + t52220 + t52221 + t52236;
  t52246 = 0.28121*t51911;
  t52247 = -1.*t52231*t51911;
  t52248 = -0.27*t51712*t51912;
  t52249 = t52246 + t52247 + t52248;
  t52251 = t28554*t52242;
  t52252 = -1.*t52237*t51702;
  t52253 = t52251 + t52252;
  t52239 = t28554*t52237;
  t52243 = t52242*t51702;
  t52244 = t52239 + t52243;
  t52250 = t52249*t51924;
  t52254 = t3380*t52253;
  t52255 = t52250 + t52254;
  t52257 = t3380*t52249;
  t52258 = -1.*t51924*t52253;
  t52259 = t52257 + t52258;
  t51943 = t51941*t51924;
  t51948 = t3380*t51947;
  t51949 = t51943 + t51948;
  t52245 = -1.*t52061*t52244;
  t52266 = t52172*t52244;
  t52273 = t52061*t52244;
  t52278 = -1.*t52194*t52244;
  t52300 = -1.*t52172*t52244;
  t52324 = t52194*t52244;
  t52399 = -1.*t52249*t51919;
  t52403 = t52249*t51941;
  p_output1[0]=t51949*var2[0] + t3380*t51709*var2[1] + t51936*var2[2];
  p_output1[1]=(t52044*t52194 - 1.*t51952*t52198)*var2[0] + (t51709*t51924*t51952 + t52044*t52061)*var2[1] + (t52044*t52172 - 1.*t51952*t52178)*var2[2];
  p_output1[2]=(t51952*t52194 + t52044*t52198)*var2[0] + (-1.*t51709*t51924*t52044 + t51952*t52061)*var2[1] + (t51952*t52172 + t52044*t52178)*var2[2];
  p_output1[3]=(t51936*(t52245 - 1.*t3380*t51709*t52255 + t51709*t51924*t52259) + t3380*t51709*(t51936*t52255 + t52178*t52259 + t52266))*var2[0] + (t51949*(-1.*t51936*t52255 - 1.*t52178*t52259 + t52300) + t51936*(t51949*t52255 + t52198*t52259 + t52324))*var2[1] + (t51949*(t3380*t51709*t52255 - 1.*t51709*t51924*t52259 + t52273) + t3380*t51709*(-1.*t51949*t52255 - 1.*t52198*t52259 + t52278))*var2[2];
  p_output1[4]=(t52172*(t52245 - 1.*t51709*t52253) + t52061*(t51919*t52249 + t51933*t52253 + t52266))*var2[0] + (t52194*(-1.*t51933*t52253 + t52300 + t52399) + t52172*(t51947*t52253 + t52324 + t52403))*var2[1] + (t52194*(t51709*t52253 + t52273) + t52061*(-1.*t51941*t52249 - 1.*t51947*t52253 + t52278))*var2[2];
  p_output1[5]=t51919*(-1.*t50662*t52237 + t28592*t52242)*var2[0] + (t51941*(-1.*t28592*t51929*t52237 - 1.*t50662*t51929*t52242 + t52399) + t51919*(t28592*t51919*t52237 + t50662*t51919*t52242 + t52403))*var2[1] + t51941*(t50662*t52237 - 1.*t28592*t52242)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t51941*(-1.*t51929*t52235 + t52399) + t51919*(t51919*t52235 + t52403))*var2[1] + (-0.15121*t51929 - 0.15121*t51941)*var2[2];
  p_output1[13]=(0.28121*t51912 - 0.27*t51714*t51912 - 1.*t51912*t52231)*var2[0] + (0.28121*t51714 + 0.27*Power(t51912,2) - 1.*t51714*t52231)*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
