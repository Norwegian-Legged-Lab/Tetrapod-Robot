/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:42 GMT+02:00
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
  double t17689;
  double t21797;
  double t21798;
  double t21899;
  double t21920;
  double t17927;
  double t21961;
  double t9073;
  double t21964;
  double t21965;
  double t21966;
  double t21969;
  double t21973;
  double t21978;
  double t21988;
  double t21993;
  double t22000;
  double t22001;
  double t22002;
  double t10892;
  double t15605;
  double t22085;
  double t21903;
  double t21904;
  double t22091;
  double t22097;
  double t22098;
  double t22100;
  double t22089;
  double t22094;
  double t22095;
  double t22107;
  double t22109;
  double t22110;
  double t21994;
  double t21995;
  double t22113;
  double t22116;
  double t22118;
  double t22121;
  double t22122;
  double t22123;
  double t22147;
  double t22149;
  double t22154;
  double t22139;
  double t22144;
  double t22145;
  double t22165;
  double t22166;
  double t22167;
  double t22169;
  double t22170;
  double t22171;
  double t22176;
  double t22180;
  double t22185;
  t17689 = Cos(var1[4]);
  t21797 = Sin(var1[12]);
  t21798 = Sin(var1[4]);
  t21899 = Cos(var1[12]);
  t21920 = Sin(var1[5]);
  t17927 = Cos(var1[5]);
  t21961 = Sin(var1[13]);
  t9073 = Cos(var1[13]);
  t21964 = t21899*t21798;
  t21965 = t17689*t21797*t21920;
  t21966 = t21964 + t21965;
  t21969 = Sin(var1[14]);
  t21973 = -1.*t17689*t17927*t21961;
  t21978 = t9073*t21966;
  t21988 = t21973 + t21978;
  t21993 = Cos(var1[14]);
  t22000 = t9073*t17689*t17927;
  t22001 = t21961*t21966;
  t22002 = t22000 + t22001;
  t10892 = -1.*t9073;
  t15605 = 1. + t10892;
  t22085 = Sin(var1[3]);
  t21903 = -1.*t21899;
  t21904 = 1. + t21903;
  t22091 = Cos(var1[3]);
  t22097 = t22091*t17927;
  t22098 = -1.*t22085*t21798*t21920;
  t22100 = t22097 + t22098;
  t22089 = t17927*t22085*t21798;
  t22094 = t22091*t21920;
  t22095 = t22089 + t22094;
  t22107 = -1.*t21899*t17689*t22085;
  t22109 = -1.*t21797*t22100;
  t22110 = t22107 + t22109;
  t21994 = -1.*t21993;
  t21995 = 1. + t21994;
  t22113 = -1.*t21961*t22095;
  t22116 = t9073*t22110;
  t22118 = t22113 + t22116;
  t22121 = t9073*t22095;
  t22122 = t21961*t22110;
  t22123 = t22121 + t22122;
  t22147 = t17927*t22085;
  t22149 = t22091*t21798*t21920;
  t22154 = t22147 + t22149;
  t22139 = -1.*t22091*t17927*t21798;
  t22144 = t22085*t21920;
  t22145 = t22139 + t22144;
  t22165 = t21899*t22091*t17689;
  t22166 = -1.*t21797*t22154;
  t22167 = t22165 + t22166;
  t22169 = -1.*t21961*t22145;
  t22170 = t9073*t22167;
  t22171 = t22169 + t22170;
  t22176 = t9073*t22145;
  t22180 = t21961*t22167;
  t22185 = t22176 + t22180;
  p_output1[0]=0.325*t15605*t17689*t17927 + 0.1575*t21797*t21798 + 0.1575*t17689*t21904*t21920 - 0.2255*(t21797*t21798 - 1.*t17689*t21899*t21920) - 0.325*t21961*t21966 + 0.075*t21969*t21988 + 0.075*t21995*t22002 - 0.0641*(t21988*t21993 + t21969*t22002) + 0.355*(-1.*t21969*t21988 + t21993*t22002) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t17689*t21797*t22085 + 0.325*t15605*t22095 - 0.1575*t21904*t22100 - 0.2255*(-1.*t17689*t21797*t22085 + t21899*t22100) - 0.325*t21961*t22110 + 0.075*t21969*t22118 + 0.075*t21995*t22123 - 0.0641*(t21993*t22118 + t21969*t22123) + 0.355*(-1.*t21969*t22118 + t21993*t22123) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t17689*t21797*t22091 + 0.325*t15605*t22145 - 0.1575*t21904*t22154 - 0.2255*(t17689*t21797*t22091 + t21899*t22154) - 0.325*t21961*t22167 + 0.075*t21969*t22171 + 0.075*t21995*t22185 - 0.0641*(t21993*t22171 + t21969*t22185) + 0.355*(-1.*t21969*t22171 + t21993*t22185) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
