/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:01 GMT+02:00
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
  double t4233;
  double t7133;
  double t8415;
  double t9125;
  double t9497;
  double t9644;
  double t7061;
  double t10486;
  double t10694;
  double t10831;
  double t10850;
  double t10870;
  double t11005;
  double t11062;
  double t11270;
  double t11441;
  double t16290;
  double t16418;
  double t16446;
  double t16495;
  double t16510;
  double t16516;
  double t10367;
  double t10432;
  double t17066;
  double t16929;
  double t10489;
  double t10505;
  double t17000;
  double t17090;
  double t17096;
  double t17134;
  double t17138;
  double t17142;
  double t10700;
  double t10813;
  double t11271;
  double t11410;
  double t17423;
  double t17433;
  double t17436;
  double t17552;
  double t17557;
  double t17562;
  double t17603;
  double t17604;
  double t17629;
  double t17760;
  double t17761;
  double t17788;
  double t17790;
  double t17800;
  double t17807;
  double t17823;
  double t17829;
  double t17845;
  double t17853;
  double t17854;
  double t17859;
  double t17863;
  double t17864;
  double t17865;
  t4233 = Cos(var1[4]);
  t7133 = Cos(var1[6]);
  t8415 = -1.*t7133;
  t9125 = 1. + t8415;
  t9497 = 0.15121*t9125;
  t9644 = Sin(var1[6]);
  t7061 = Sin(var1[5]);
  t10486 = Cos(var1[5]);
  t10694 = Cos(var1[7]);
  t10831 = t4233*t10486*t7133;
  t10850 = -1.*t4233*t7061*t9644;
  t10870 = t10831 + t10850;
  t11005 = Sin(var1[4]);
  t11062 = Sin(var1[7]);
  t11270 = Cos(var1[8]);
  t11441 = t10694*t10870;
  t16290 = -1.*t11005*t11062;
  t16418 = t11441 + t16290;
  t16446 = t10694*t11005;
  t16495 = t10870*t11062;
  t16510 = t16446 + t16495;
  t16516 = Sin(var1[8]);
  t10367 = -0.15121*t9644;
  t10432 = t9497 + t10367;
  t17066 = Sin(var1[3]);
  t16929 = Cos(var1[3]);
  t10489 = 0.15121*t9644;
  t10505 = t9497 + t10489;
  t17000 = t16929*t10486;
  t17090 = -1.*t17066*t11005*t7061;
  t17096 = t17000 + t17090;
  t17134 = t10486*t17066*t11005;
  t17138 = t16929*t7061;
  t17142 = t17134 + t17138;
  t10700 = -1.*t10694;
  t10813 = 1. + t10700;
  t11271 = -1.*t11270;
  t11410 = 1. + t11271;
  t17423 = t7133*t17142;
  t17433 = t17096*t9644;
  t17436 = t17423 + t17433;
  t17552 = t10694*t17436;
  t17557 = t4233*t17066*t11062;
  t17562 = t17552 + t17557;
  t17603 = -1.*t4233*t10694*t17066;
  t17604 = t17436*t11062;
  t17629 = t17603 + t17604;
  t17760 = t10486*t17066;
  t17761 = t16929*t11005*t7061;
  t17788 = t17760 + t17761;
  t17790 = -1.*t16929*t10486*t11005;
  t17800 = t17066*t7061;
  t17807 = t17790 + t17800;
  t17823 = t7133*t17807;
  t17829 = t17788*t9644;
  t17845 = t17823 + t17829;
  t17853 = t10694*t17845;
  t17854 = -1.*t16929*t4233*t11062;
  t17859 = t17853 + t17854;
  t17863 = t16929*t4233*t10694;
  t17864 = t17845*t11062;
  t17865 = t17863 + t17864;
  p_output1[0]=0.28121*t10813*t10870 + 0.28121*t11005*t11062 + 0.50321*t11410*t16418 - 0.50321*t16510*t16516 + 0.19821*(t11270*t16418 + t16510*t16516) + t10486*t10505*t4233 - 1.*t10432*t4233*t7061 + 0.15121*(-1.*t4233*t7061*t7133 - 1.*t10486*t4233*t9644) + var1[0] - 1.*var2[0];
  p_output1[1]=t10432*t17096 + t10505*t17142 + 0.28121*t10813*t17436 + 0.50321*t11410*t17562 - 0.50321*t16516*t17629 + 0.19821*(t11270*t17562 + t16516*t17629) - 0.28121*t11062*t17066*t4233 + 0.15121*(t17096*t7133 - 1.*t17142*t9644) + var1[1] - 1.*var2[1];
  p_output1[2]=t10432*t17788 + t10505*t17807 + 0.28121*t10813*t17845 + 0.50321*t11410*t17859 - 0.50321*t16516*t17865 + 0.19821*(t11270*t17859 + t16516*t17865) + 0.28121*t11062*t16929*t4233 + 0.15121*(t17788*t7133 - 1.*t17807*t9644) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
