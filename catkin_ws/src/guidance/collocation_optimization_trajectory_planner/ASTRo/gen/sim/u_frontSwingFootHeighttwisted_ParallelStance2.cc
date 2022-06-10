/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:07:26 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t66235;
  double t69915;
  double t69916;
  double t69933;
  double t69939;
  double t69946;
  double t69996;
  double t70008;
  double t70006;
  double t70031;
  double t70007;
  double t70032;
  double t70036;
  double t70046;
  double t70053;
  double t70055;
  double t66239;
  double t69880;
  double t70072;
  double t70077;
  double t70078;
  double t70079;
  double t70085;
  double t70091;
  double t70092;
  double t70093;
  double t70102;
  double t70103;
  double t70104;
  double t70105;
  double t69934;
  double t69947;
  double t70044;
  double t70045;
  double t70074;
  double t70076;
  double t70086;
  double t70090;
  double t70134;
  double t70135;
  double t70137;
  double t70159;
  double t70166;
  double t70167;
  double t70175;
  double t70176;
  double t70194;
  double t70225;
  double t70226;
  double t70231;
  double t70233;
  double t70244;
  double t70249;
  double t70266;
  double t70268;
  double t70269;
  double t70275;
  double t70276;
  double t70277;
  double t70281;
  double t70284;
  double t70285;
  double t70111;
  double t70116;
  double t70117;
  double t70118;
  double t70119;
  double t70120;
  double t70121;
  double t70129;
  double t70138;
  double t70168;
  double t70195;
  double t70205;
  double t70207;
  double t70213;
  double t70217;
  double t70218;
  t66235 = Cos(var1[3]);
  t69915 = Cos(var1[12]);
  t69916 = -1.*t69915;
  t69933 = 1. + t69916;
  t69939 = Sin(var1[12]);
  t69946 = -0.15121*t69939;
  t69996 = Cos(var1[5]);
  t70008 = Sin(var1[3]);
  t70006 = Sin(var1[4]);
  t70031 = Sin(var1[5]);
  t70007 = -1.*t66235*t69996*t70006;
  t70032 = t70008*t70031;
  t70036 = t70007 + t70032;
  t70046 = t69996*t70008;
  t70053 = t66235*t70006*t70031;
  t70055 = t70046 + t70053;
  t66239 = Cos(var1[4]);
  t69880 = Sin(var1[13]);
  t70072 = Cos(var1[13]);
  t70077 = t69915*t70036;
  t70078 = t69939*t70055;
  t70079 = t70077 + t70078;
  t70085 = Cos(var1[14]);
  t70091 = -1.*t66235*t66239*t69880;
  t70092 = t70072*t70079;
  t70093 = t70091 + t70092;
  t70102 = Sin(var1[14]);
  t70103 = t70072*t66235*t66239;
  t70104 = t69880*t70079;
  t70105 = t70103 + t70104;
  t69934 = 0.15121*t69933;
  t69947 = t69934 + t69946;
  t70044 = -0.15121*t69933;
  t70045 = t70044 + t69946;
  t70074 = -1.*t70072;
  t70076 = 1. + t70074;
  t70086 = -1.*t70085;
  t70090 = 1. + t70086;
  t70134 = t69915*t66239*t69996;
  t70135 = -1.*t66239*t69939*t70031;
  t70137 = t70134 + t70135;
  t70159 = -1.*t69880*t70006;
  t70166 = t70072*t70137;
  t70167 = t70159 + t70166;
  t70175 = t70072*t70006;
  t70176 = t69880*t70137;
  t70194 = t70175 + t70176;
  t70225 = t69996*t70008*t70006;
  t70226 = t66235*t70031;
  t70231 = t70225 + t70226;
  t70233 = t66235*t69996;
  t70244 = -1.*t70008*t70006*t70031;
  t70249 = t70233 + t70244;
  t70266 = t69915*t70231;
  t70268 = t69939*t70249;
  t70269 = t70266 + t70268;
  t70275 = t66239*t69880*t70008;
  t70276 = t70072*t70269;
  t70277 = t70275 + t70276;
  t70281 = -1.*t70072*t66239*t70008;
  t70284 = t69880*t70269;
  t70285 = t70281 + t70284;
  t70111 = -1.*var2[0];
  t70116 = t66239*t69996*t69947;
  t70117 = 0.28121*t69880*t70006;
  t70118 = -1.*t66239*t70045*t70031;
  t70119 = -1.*t66239*t69996*t69939;
  t70120 = -1.*t69915*t66239*t70031;
  t70121 = t70119 + t70120;
  t70129 = -0.15121*t70121;
  t70138 = 0.28121*t70076*t70137;
  t70168 = 0.50321*t70090*t70167;
  t70195 = -0.50321*t70102*t70194;
  t70205 = t70085*t70167;
  t70207 = t70102*t70194;
  t70213 = t70205 + t70207;
  t70217 = 0.19821*t70213;
  t70218 = t70111 + var1[0] + t70116 + t70117 + t70118 + t70129 + t70138 + t70168 + t70195 + t70217;
  p_output1[0]=0.28121*t66235*t66239*t69880 + t69947*t70036 + t70045*t70055 - 0.15121*(-1.*t69939*t70036 + t69915*t70055) + 0.28121*t70076*t70079 + 0.50321*t70090*t70093 - 0.50321*t70102*t70105 + 0.19821*(t70085*t70093 + t70102*t70105) + var1[2] - 0.5*t70218*(-0.28121*t66239*t69880*t70008 + t69947*t70231 + t70045*t70249 - 0.15121*(-1.*t69939*t70231 + t69915*t70249) + 0.28121*t70076*t70269 + 0.50321*t70090*t70277 - 0.50321*t70102*t70285 + 0.19821*(t70085*t70277 + t70102*t70285) + var1[1])*var3[0]*(1. + Tanh(t70218*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_frontSwingFootHeighttwisted_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeighttwisted_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
