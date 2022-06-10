/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:04:47 GMT+02:00
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
  double t29630;
  double t9449;
  double t41717;
  double t28443;
  double t41961;
  double t46525;
  double t48683;
  double t48880;
  double t53397;
  double t53402;
  double t28448;
  double t41992;
  double t42433;
  double t53426;
  double t53427;
  double t53529;
  double t53605;
  double t53612;
  double t53613;
  double t53622;
  double t53624;
  double t53627;
  double t53633;
  double t53639;
  double t53640;
  double t53641;
  double t53643;
  double t53648;
  double t53649;
  double t53650;
  double t53403;
  double t53407;
  double t53590;
  double t53594;
  double t53606;
  double t53607;
  double t53637;
  double t53638;
  double t53798;
  double t53799;
  double t53804;
  double t53810;
  double t53813;
  double t53814;
  double t53816;
  double t53819;
  double t53820;
  double t53660;
  double t53661;
  double t53662;
  double t53782;
  double t53789;
  double t53790;
  double t53791;
  double t53805;
  double t53808;
  double t53815;
  double t53823;
  double t53824;
  double t53834;
  double t53848;
  double t53849;
  double t53854;
  t29630 = Cos(var1[3]);
  t9449 = Cos(var1[5]);
  t41717 = Sin(var1[4]);
  t28443 = Sin(var1[3]);
  t41961 = Sin(var1[5]);
  t46525 = Cos(var1[6]);
  t48683 = -1.*t46525;
  t48880 = 1. + t48683;
  t53397 = 0.15121*t48880;
  t53402 = Sin(var1[6]);
  t28448 = t9449*t28443;
  t41992 = t29630*t41717*t41961;
  t42433 = t28448 + t41992;
  t53426 = -1.*t29630*t9449*t41717;
  t53427 = t28443*t41961;
  t53529 = t53426 + t53427;
  t53605 = Cos(var1[7]);
  t53612 = t46525*t53529;
  t53613 = t42433*t53402;
  t53622 = t53612 + t53613;
  t53624 = Cos(var1[4]);
  t53627 = Sin(var1[7]);
  t53633 = Cos(var1[8]);
  t53639 = t53605*t53622;
  t53640 = -1.*t29630*t53624*t53627;
  t53641 = t53639 + t53640;
  t53643 = t29630*t53624*t53605;
  t53648 = t53622*t53627;
  t53649 = t53643 + t53648;
  t53650 = Sin(var1[8]);
  t53403 = -0.15121*t53402;
  t53407 = t53397 + t53403;
  t53590 = 0.15121*t53402;
  t53594 = t53397 + t53590;
  t53606 = -1.*t53605;
  t53607 = 1. + t53606;
  t53637 = -1.*t53633;
  t53638 = 1. + t53637;
  t53798 = t53624*t9449*t46525;
  t53799 = -1.*t53624*t41961*t53402;
  t53804 = t53798 + t53799;
  t53810 = t53605*t53804;
  t53813 = -1.*t41717*t53627;
  t53814 = t53810 + t53813;
  t53816 = t53605*t41717;
  t53819 = t53804*t53627;
  t53820 = t53816 + t53819;
  t53660 = -1.*var2[0];
  t53661 = -1.*t53624*t41961*t53407;
  t53662 = t53624*t9449*t53594;
  t53782 = -1.*t53624*t46525*t41961;
  t53789 = -1.*t53624*t9449*t53402;
  t53790 = t53782 + t53789;
  t53791 = 0.15121*t53790;
  t53805 = 0.28121*t53607*t53804;
  t53808 = 0.28121*t41717*t53627;
  t53815 = 0.50321*t53638*t53814;
  t53823 = -0.50321*t53820*t53650;
  t53824 = t53633*t53814;
  t53834 = t53820*t53650;
  t53848 = t53824 + t53834;
  t53849 = 0.19821*t53848;
  t53854 = t53660 + var1[0] + t53661 + t53662 + t53791 + t53805 + t53808 + t53815 + t53823 + t53849;
  p_output1[0]=t42433*t53407 + 0.15121*(t42433*t46525 - 1.*t53402*t53529) + t53529*t53594 + 0.28121*t53607*t53622 + 0.28121*t29630*t53624*t53627 + 0.50321*t53638*t53641 - 0.50321*t53649*t53650 + 0.19821*(t53633*t53641 + t53649*t53650) + var1[2] - 0.25*Power(t53854,2)*var3[0]*(1. + Tanh(t53854*var4[0]));
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

#include "u_frontSwingFootHeightcurved_ParallelStance.hh"

namespace SymFunction
{

void u_frontSwingFootHeightcurved_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
