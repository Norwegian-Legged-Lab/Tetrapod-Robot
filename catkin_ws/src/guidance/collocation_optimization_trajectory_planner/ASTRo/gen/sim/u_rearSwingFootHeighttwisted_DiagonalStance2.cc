/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:07:03 GMT+02:00
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
  double t15600;
  double t18184;
  double t18902;
  double t19814;
  double t20130;
  double t20832;
  double t24365;
  double t25374;
  double t24369;
  double t29343;
  double t24827;
  double t29697;
  double t29701;
  double t30638;
  double t30642;
  double t30661;
  double t15621;
  double t15628;
  double t30717;
  double t32997;
  double t33012;
  double t33016;
  double t33023;
  double t33030;
  double t33031;
  double t33032;
  double t33034;
  double t33231;
  double t33254;
  double t33258;
  double t20126;
  double t23931;
  double t30126;
  double t30633;
  double t30724;
  double t32995;
  double t33024;
  double t33026;
  double t33522;
  double t33523;
  double t33534;
  double t33571;
  double t33573;
  double t33584;
  double t33628;
  double t33649;
  double t33727;
  double t37099;
  double t38208;
  double t38351;
  double t38395;
  double t38399;
  double t38412;
  double t40780;
  double t40806;
  double t40814;
  double t40968;
  double t40970;
  double t40971;
  double t41250;
  double t41259;
  double t41307;
  double t33286;
  double t33404;
  double t33426;
  double t33429;
  double t33430;
  double t33460;
  double t33463;
  double t33519;
  double t33539;
  double t33627;
  double t34114;
  double t34840;
  double t35236;
  double t35288;
  double t35936;
  double t35952;
  t15600 = Cos(var1[3]);
  t18184 = Cos(var1[9]);
  t18902 = -1.*t18184;
  t19814 = 1. + t18902;
  t20130 = Sin(var1[9]);
  t20832 = 0.15121*t20130;
  t24365 = Cos(var1[5]);
  t25374 = Sin(var1[3]);
  t24369 = Sin(var1[4]);
  t29343 = Sin(var1[5]);
  t24827 = -1.*t15600*t24365*t24369;
  t29697 = t25374*t29343;
  t29701 = t24827 + t29697;
  t30638 = t24365*t25374;
  t30642 = t15600*t24369*t29343;
  t30661 = t30638 + t30642;
  t15621 = Cos(var1[4]);
  t15628 = Sin(var1[10]);
  t30717 = Cos(var1[10]);
  t32997 = t18184*t29701;
  t33012 = t20130*t30661;
  t33016 = t32997 + t33012;
  t33023 = Cos(var1[11]);
  t33030 = t15600*t15621*t15628;
  t33031 = t30717*t33016;
  t33032 = t33030 + t33031;
  t33034 = Sin(var1[11]);
  t33231 = t30717*t15600*t15621;
  t33254 = -1.*t15628*t33016;
  t33258 = t33231 + t33254;
  t20126 = -0.15121*t19814;
  t23931 = t20126 + t20832;
  t30126 = 0.15121*t19814;
  t30633 = t30126 + t20832;
  t30724 = -1.*t30717;
  t32995 = 1. + t30724;
  t33024 = -1.*t33023;
  t33026 = 1. + t33024;
  t33522 = t18184*t15621*t24365;
  t33523 = -1.*t15621*t20130*t29343;
  t33534 = t33522 + t33523;
  t33571 = t15628*t24369;
  t33573 = t30717*t33534;
  t33584 = t33571 + t33573;
  t33628 = t30717*t24369;
  t33649 = -1.*t15628*t33534;
  t33727 = t33628 + t33649;
  t37099 = t24365*t25374*t24369;
  t38208 = t15600*t29343;
  t38351 = t37099 + t38208;
  t38395 = t15600*t24365;
  t38399 = -1.*t25374*t24369*t29343;
  t38412 = t38395 + t38399;
  t40780 = t18184*t38351;
  t40806 = t20130*t38412;
  t40814 = t40780 + t40806;
  t40968 = -1.*t15621*t15628*t25374;
  t40970 = t30717*t40814;
  t40971 = t40968 + t40970;
  t41250 = -1.*t30717*t15621*t25374;
  t41259 = -1.*t15628*t40814;
  t41307 = t41250 + t41259;
  t33286 = -1.*var2[0];
  t33404 = t15621*t24365*t23931;
  t33426 = 0.28121*t15628*t24369;
  t33429 = -1.*t15621*t30633*t29343;
  t33430 = -1.*t15621*t24365*t20130;
  t33460 = -1.*t18184*t15621*t29343;
  t33463 = t33430 + t33460;
  t33519 = 0.15121*t33463;
  t33539 = -0.28121*t32995*t33534;
  t33627 = -0.50321*t33026*t33584;
  t34114 = -0.50321*t33034*t33727;
  t34840 = t33023*t33584;
  t35236 = -1.*t33034*t33727;
  t35288 = t34840 + t35236;
  t35936 = -0.19821*t35288;
  t35952 = t33286 + var1[0] + t33404 + t33426 + t33429 + t33519 + t33539 + t33627 + t34114 + t35936;
  p_output1[0]=0.28121*t15600*t15621*t15628 + t23931*t29701 + t30633*t30661 + 0.15121*(-1.*t20130*t29701 + t18184*t30661) - 0.28121*t32995*t33016 - 0.50321*t33026*t33032 - 0.50321*t33034*t33258 - 0.19821*(t33023*t33032 - 1.*t33034*t33258) + var1[2] - 0.5*t35952*(-0.28121*t15621*t15628*t25374 + t23931*t38351 + t30633*t38412 + 0.15121*(-1.*t20130*t38351 + t18184*t38412) - 0.28121*t32995*t40814 - 0.50321*t33026*t40971 - 0.50321*t33034*t41307 - 0.19821*(t33023*t40971 - 1.*t33034*t41307) + var1[1])*var3[0]*(1. + Tanh(t35952*var4[0]));
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

#include "u_rearSwingFootHeighttwisted_DiagonalStance2.hh"

namespace SymFunction
{

void u_rearSwingFootHeighttwisted_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
