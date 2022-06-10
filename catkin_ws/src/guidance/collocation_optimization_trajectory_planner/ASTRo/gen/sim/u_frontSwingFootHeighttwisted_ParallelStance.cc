/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:06:39 GMT+02:00
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
  double t34643;
  double t30173;
  double t35153;
  double t30184;
  double t38767;
  double t52110;
  double t60097;
  double t60231;
  double t60607;
  double t63223;
  double t31116;
  double t38783;
  double t40591;
  double t63988;
  double t64156;
  double t64501;
  double t67707;
  double t67716;
  double t67717;
  double t67724;
  double t67762;
  double t67763;
  double t67772;
  double t67793;
  double t67852;
  double t67856;
  double t67858;
  double t67869;
  double t67870;
  double t67871;
  double t63253;
  double t63319;
  double t65360;
  double t65406;
  double t67710;
  double t67712;
  double t67791;
  double t67792;
  double t67896;
  double t67897;
  double t67898;
  double t67907;
  double t67908;
  double t67909;
  double t67911;
  double t67912;
  double t67913;
  double t67942;
  double t67943;
  double t67944;
  double t67946;
  double t67958;
  double t67959;
  double t67980;
  double t67981;
  double t67982;
  double t68022;
  double t68023;
  double t68024;
  double t68037;
  double t68043;
  double t68044;
  double t67886;
  double t67887;
  double t67888;
  double t67889;
  double t67890;
  double t67891;
  double t67895;
  double t67899;
  double t67900;
  double t67910;
  double t67918;
  double t67919;
  double t67920;
  double t67924;
  double t67934;
  double t67938;
  t34643 = Cos(var1[3]);
  t30173 = Cos(var1[5]);
  t35153 = Sin(var1[4]);
  t30184 = Sin(var1[3]);
  t38767 = Sin(var1[5]);
  t52110 = Cos(var1[6]);
  t60097 = -1.*t52110;
  t60231 = 1. + t60097;
  t60607 = 0.15121*t60231;
  t63223 = Sin(var1[6]);
  t31116 = t30173*t30184;
  t38783 = t34643*t35153*t38767;
  t40591 = t31116 + t38783;
  t63988 = -1.*t34643*t30173*t35153;
  t64156 = t30184*t38767;
  t64501 = t63988 + t64156;
  t67707 = Cos(var1[7]);
  t67716 = t52110*t64501;
  t67717 = t40591*t63223;
  t67724 = t67716 + t67717;
  t67762 = Cos(var1[4]);
  t67763 = Sin(var1[7]);
  t67772 = Cos(var1[8]);
  t67793 = t67707*t67724;
  t67852 = -1.*t34643*t67762*t67763;
  t67856 = t67793 + t67852;
  t67858 = t34643*t67762*t67707;
  t67869 = t67724*t67763;
  t67870 = t67858 + t67869;
  t67871 = Sin(var1[8]);
  t63253 = -0.15121*t63223;
  t63319 = t60607 + t63253;
  t65360 = 0.15121*t63223;
  t65406 = t60607 + t65360;
  t67710 = -1.*t67707;
  t67712 = 1. + t67710;
  t67791 = -1.*t67772;
  t67792 = 1. + t67791;
  t67896 = t67762*t30173*t52110;
  t67897 = -1.*t67762*t38767*t63223;
  t67898 = t67896 + t67897;
  t67907 = t67707*t67898;
  t67908 = -1.*t35153*t67763;
  t67909 = t67907 + t67908;
  t67911 = t67707*t35153;
  t67912 = t67898*t67763;
  t67913 = t67911 + t67912;
  t67942 = t34643*t30173;
  t67943 = -1.*t30184*t35153*t38767;
  t67944 = t67942 + t67943;
  t67946 = t30173*t30184*t35153;
  t67958 = t34643*t38767;
  t67959 = t67946 + t67958;
  t67980 = t52110*t67959;
  t67981 = t67944*t63223;
  t67982 = t67980 + t67981;
  t68022 = t67707*t67982;
  t68023 = t67762*t30184*t67763;
  t68024 = t68022 + t68023;
  t68037 = -1.*t67762*t67707*t30184;
  t68043 = t67982*t67763;
  t68044 = t68037 + t68043;
  t67886 = -1.*var2[0];
  t67887 = -1.*t67762*t38767*t63319;
  t67888 = t67762*t30173*t65406;
  t67889 = -1.*t67762*t52110*t38767;
  t67890 = -1.*t67762*t30173*t63223;
  t67891 = t67889 + t67890;
  t67895 = 0.15121*t67891;
  t67899 = 0.28121*t67712*t67898;
  t67900 = 0.28121*t35153*t67763;
  t67910 = 0.50321*t67792*t67909;
  t67918 = -0.50321*t67913*t67871;
  t67919 = t67772*t67909;
  t67920 = t67913*t67871;
  t67924 = t67919 + t67920;
  t67934 = 0.19821*t67924;
  t67938 = t67886 + var1[0] + t67887 + t67888 + t67895 + t67899 + t67900 + t67910 + t67918 + t67934;
  p_output1[0]=t40591*t63319 + 0.15121*(t40591*t52110 - 1.*t63223*t64501) + t64501*t65406 + 0.28121*t67712*t67724 + 0.28121*t34643*t67762*t67763 + 0.50321*t67792*t67856 - 0.50321*t67870*t67871 + 0.19821*(t67772*t67856 + t67870*t67871) + var1[2] - 0.5*t67938*(-0.28121*t30184*t67762*t67763 + t63319*t67944 + t65406*t67959 + 0.15121*(t52110*t67944 - 1.*t63223*t67959) + 0.28121*t67712*t67982 + 0.50321*t67792*t68024 - 0.50321*t67871*t68044 + 0.19821*(t67772*t68024 + t67871*t68044) + var1[1])*var3[0]*(1. + Tanh(t67938*var4[0]));
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

#include "u_frontSwingFootHeighttwisted_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeighttwisted_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
