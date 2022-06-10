/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:10:14 GMT+02:00
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
  double t10556;
  double t53056;
  double t53061;
  double t53059;
  double t53064;
  double t45564;
  double t53014;
  double t53069;
  double t53072;
  double t53074;
  double t53076;
  double t53084;
  double t53060;
  double t53065;
  double t53066;
  double t53033;
  double t53085;
  double t53086;
  double t53087;
  double t53090;
  double t53091;
  double t53092;
  double t53094;
  double t53096;
  double t53099;
  double t53100;
  double t53101;
  double t53049;
  double t53055;
  double t53070;
  double t53071;
  double t53131;
  double t53132;
  double t53137;
  double t53097;
  double t53098;
  double t53167;
  double t53172;
  double t53178;
  double t53187;
  double t53192;
  double t53209;
  double t57155;
  double t57157;
  double t57158;
  double t57126;
  double t57133;
  double t57138;
  double t57173;
  double t57182;
  double t57184;
  double t57192;
  double t57193;
  double t57204;
  double t57207;
  double t57256;
  double t57260;
  double t53114;
  double t53117;
  double t53118;
  double t53119;
  double t53126;
  double t53127;
  double t53128;
  double t53130;
  double t53141;
  double t53182;
  double t53214;
  double t53220;
  double t53224;
  double t54083;
  double t54096;
  double t54133;
  double t54348;
  double t54357;
  double t57006;
  double t57123;
  t10556 = Cos(var1[3]);
  t53056 = Cos(var1[5]);
  t53061 = Sin(var1[3]);
  t53059 = Sin(var1[4]);
  t53064 = Sin(var1[5]);
  t45564 = Cos(var1[4]);
  t53014 = Sin(var1[12]);
  t53069 = Cos(var1[12]);
  t53072 = t53056*t53061;
  t53074 = t10556*t53059*t53064;
  t53076 = t53072 + t53074;
  t53084 = Sin(var1[13]);
  t53060 = -1.*t10556*t53056*t53059;
  t53065 = t53061*t53064;
  t53066 = t53060 + t53065;
  t53033 = Cos(var1[13]);
  t53085 = t53069*t10556*t45564;
  t53086 = -1.*t53014*t53076;
  t53087 = t53085 + t53086;
  t53090 = Sin(var1[14]);
  t53091 = -1.*t53084*t53066;
  t53092 = t53033*t53087;
  t53094 = t53091 + t53092;
  t53096 = Cos(var1[14]);
  t53099 = t53033*t53066;
  t53100 = t53084*t53087;
  t53101 = t53099 + t53100;
  t53049 = -1.*t53033;
  t53055 = 1. + t53049;
  t53070 = -1.*t53069;
  t53071 = 1. + t53070;
  t53131 = t53069*t53059;
  t53132 = t45564*t53014*t53064;
  t53137 = t53131 + t53132;
  t53097 = -1.*t53096;
  t53098 = 1. + t53097;
  t53167 = -1.*t45564*t53056*t53084;
  t53172 = t53033*t53137;
  t53178 = t53167 + t53172;
  t53187 = t53033*t45564*t53056;
  t53192 = t53084*t53137;
  t53209 = t53187 + t53192;
  t57155 = t10556*t53056;
  t57157 = -1.*t53061*t53059*t53064;
  t57158 = t57155 + t57157;
  t57126 = t53056*t53061*t53059;
  t57133 = t10556*t53064;
  t57138 = t57126 + t57133;
  t57173 = -1.*t53069*t45564*t53061;
  t57182 = -1.*t53014*t57158;
  t57184 = t57173 + t57182;
  t57192 = -1.*t53084*t57138;
  t57193 = t53033*t57184;
  t57204 = t57192 + t57193;
  t57207 = t53033*t57138;
  t57256 = t53084*t57184;
  t57260 = t57207 + t57256;
  t53114 = -1.*var2[0];
  t53117 = 0.325*t53055*t45564*t53056;
  t53118 = 0.1575*t53014*t53059;
  t53119 = 0.1575*t53071*t45564*t53064;
  t53126 = t53014*t53059;
  t53127 = -1.*t53069*t45564*t53064;
  t53128 = t53126 + t53127;
  t53130 = -0.2255*t53128;
  t53141 = -0.325*t53084*t53137;
  t53182 = 0.075*t53090*t53178;
  t53214 = 0.075*t53098*t53209;
  t53220 = -1.*t53090*t53178;
  t53224 = t53096*t53209;
  t54083 = t53220 + t53224;
  t54096 = 0.355*t54083;
  t54133 = t53096*t53178;
  t54348 = t53090*t53209;
  t54357 = t54133 + t54348;
  t57006 = -0.0641*t54357;
  t57123 = t53114 + var1[0] + t53117 + t53118 + t53119 + t53130 + t53141 + t53182 + t53214 + t54096 + t57006;
  p_output1[0]=0.1575*t10556*t45564*t53014 + 0.325*t53055*t53066 - 0.1575*t53071*t53076 - 0.2255*(t10556*t45564*t53014 + t53069*t53076) - 0.325*t53084*t53087 + 0.075*t53090*t53094 + 0.075*t53098*t53101 - 0.0641*(t53094*t53096 + t53090*t53101) + 0.355*(-1.*t53090*t53094 + t53096*t53101) + var1[2] - 0.5*t57123*(-0.1575*t45564*t53014*t53061 + 0.325*t53055*t57138 - 0.1575*t53071*t57158 - 0.2255*(-1.*t45564*t53014*t53061 + t53069*t57158) - 0.325*t53084*t57184 + 0.075*t53090*t57204 + 0.075*t53098*t57260 - 0.0641*(t53096*t57204 + t53090*t57260) + 0.355*(-1.*t53090*t57204 + t53096*t57260) + var1[1])*var3[0]*(1. + Tanh(t57123*var4[0]));
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
