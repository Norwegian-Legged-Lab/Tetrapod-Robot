/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:27 GMT+02:00
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
  double t1602;
  double t5902;
  double t1638;
  double t7138;
  double t7168;
  double t7135;
  double t7172;
  double t1980;
  double t6715;
  double t7360;
  double t7405;
  double t7421;
  double t7083;
  double t7158;
  double t7327;
  double t7339;
  double t5786;
  double t6774;
  double t6933;
  double t8182;
  double t8166;
  double t7423;
  double t7435;
  double t7482;
  double t7959;
  double t7967;
  double t7970;
  double t8045;
  double t8046;
  double t8092;
  double t8185;
  double t8200;
  double t8206;
  double t8367;
  double t8422;
  double t8426;
  double t8459;
  double t9330;
  double t14471;
  double t21253;
  double t21265;
  double t21268;
  double t21593;
  double t21609;
  double t21610;
  double t7357;
  double t7527;
  double t7529;
  double t21671;
  double t21674;
  double t21676;
  double t21677;
  double t21678;
  double t21682;
  double t21683;
  double t21685;
  double t21687;
  double t21689;
  double t21691;
  double t21693;
  double t21694;
  double t21697;
  double t21700;
  double t21702;
  double t21737;
  double t21743;
  double t21757;
  double t21758;
  double t21796;
  double t21801;
  double t21802;
  double t21810;
  double t21817;
  double t21819;
  double t21822;
  double t21724;
  double t21759;
  double t21761;
  double t21816;
  double t21823;
  double t21829;
  double t21835;
  double t21839;
  double t21841;
  double t8040;
  double t8114;
  double t8115;
  double t21763;
  double t21850;
  double t21868;
  double t21881;
  double t21893;
  double t21915;
  double t22021;
  double t22026;
  t1602 = Cos(var1[4]);
  t5902 = Cos(var1[5]);
  t1638 = Cos(var1[6]);
  t7138 = Cos(var1[8]);
  t7168 = Sin(var1[7]);
  t7135 = Cos(var1[7]);
  t7172 = Sin(var1[8]);
  t1980 = Sin(var1[5]);
  t6715 = Sin(var1[6]);
  t7360 = t7138*t7168;
  t7405 = -1.*t7135*t7172;
  t7421 = t7360 + t7405;
  t7083 = Sin(var1[4]);
  t7158 = t7135*t7138;
  t7327 = t7168*t7172;
  t7339 = t7158 + t7327;
  t5786 = -1.*t1638*t1980;
  t6774 = -1.*t5902*t6715;
  t6933 = t5786 + t6774;
  t8182 = Cos(var1[3]);
  t8166 = Sin(var1[3]);
  t7423 = t5902*t1638*t7421;
  t7435 = -1.*t1980*t6715*t7421;
  t7482 = t7423 + t7435;
  t7959 = -1.*t7138*t7168;
  t7967 = t7135*t7172;
  t7970 = t7959 + t7967;
  t8045 = t5902*t1638*t7339;
  t8046 = -1.*t1980*t6715*t7339;
  t8092 = t8045 + t8046;
  t8185 = t5902*t1638;
  t8200 = -1.*t1980*t6715;
  t8206 = t8185 + t8200;
  t8367 = t1638*t1980*t7421;
  t8422 = t5902*t6715*t7421;
  t8426 = t8367 + t8422;
  t8459 = t1602*t7339;
  t9330 = -1.*t7083*t7482;
  t14471 = t8459 + t9330;
  t21253 = t1638*t1980*t7339;
  t21265 = t5902*t6715*t7339;
  t21268 = t21253 + t21265;
  t21593 = t1602*t7970;
  t21609 = -1.*t7083*t8092;
  t21610 = t21593 + t21609;
  t7357 = t7083*t7339;
  t7527 = t1602*t7482;
  t7529 = t7357 + t7527;
  t21671 = -1.*t1638;
  t21674 = 1. + t21671;
  t21676 = 0.15121*t21674;
  t21677 = -1.*t7135;
  t21678 = 1. + t21677;
  t21682 = 0.28121*t21678;
  t21683 = -1.*t7138;
  t21685 = 1. + t21683;
  t21687 = 0.50321*t21685;
  t21689 = 0.19821*t7138;
  t21691 = t21687 + t21689;
  t21693 = t7135*t21691;
  t21694 = -0.305*t7168*t7172;
  t21697 = t21682 + t21693 + t21694;
  t21700 = t1638*t21697;
  t21702 = t21676 + t21700;
  t21737 = 0.15121*t1638;
  t21743 = -0.15121*t6715;
  t21757 = t6715*t21697;
  t21758 = t21676 + t21737 + t21743 + t21757;
  t21796 = 0.28121*t7168;
  t21801 = -1.*t21691*t7168;
  t21802 = -0.305*t7135*t7172;
  t21810 = t21796 + t21801 + t21802;
  t21817 = t5902*t21702;
  t21819 = -1.*t1980*t21758;
  t21822 = t21817 + t21819;
  t21724 = t1980*t21702;
  t21759 = t5902*t21758;
  t21761 = t21724 + t21759;
  t21816 = t7083*t21810;
  t21823 = t1602*t21822;
  t21829 = t21816 + t21823;
  t21835 = t1602*t21810;
  t21839 = -1.*t7083*t21822;
  t21841 = t21835 + t21839;
  t8040 = t7083*t7970;
  t8114 = t1602*t8092;
  t8115 = t8040 + t8114;
  t21763 = -1.*t8206*t21761;
  t21850 = t8426*t21761;
  t21868 = t8206*t21761;
  t21881 = -1.*t21268*t21761;
  t21893 = -1.*t8426*t21761;
  t21915 = t21268*t21761;
  t22021 = -1.*t21810*t7339;
  t22026 = t21810*t7970;
  p_output1[0]=t8115*var2[0] + t1602*t6933*var2[1] + t7529*var2[2];
  p_output1[1]=(-1.*t21610*t8166 + t21268*t8182)*var2[0] + (t6933*t7083*t8166 + t8182*t8206)*var2[1] + (-1.*t14471*t8166 + t8182*t8426)*var2[2];
  p_output1[2]=(t21268*t8166 + t21610*t8182)*var2[0] + (-1.*t6933*t7083*t8182 + t8166*t8206)*var2[1] + (t14471*t8182 + t8166*t8426)*var2[2];
  p_output1[3]=((t21763 - 1.*t1602*t21829*t6933 + t21841*t6933*t7083)*t7529 + t1602*t6933*(t14471*t21841 + t21850 + t21829*t7529))*var2[0] + ((-1.*t14471*t21841 + t21893 - 1.*t21829*t7529)*t8115 + t7529*(t21610*t21841 + t21915 + t21829*t8115))*var2[1] + ((t21868 + t1602*t21829*t6933 - 1.*t21841*t6933*t7083)*t8115 + t1602*t6933*(-1.*t21610*t21841 + t21881 - 1.*t21829*t8115))*var2[2];
  p_output1[4]=((t21850 + t21810*t7339 + t21822*t7482)*t8206 + (t21763 - 1.*t21822*t6933)*t8426)*var2[0] + (t21268*(t21893 + t22021 - 1.*t21822*t7482) + (t21915 + t22026 + t21822*t8092)*t8426)*var2[1] + (t21268*(t21868 + t21822*t6933) + (t21881 - 1.*t21810*t7970 - 1.*t21822*t8092)*t8206)*var2[2];
  p_output1[5]=(-1.*t1638*t21758 + t21702*t6715)*t7339*var2[0] + (t7339*(t22026 + t1638*t21702*t7339 + t21758*t6715*t7339) + (t22021 - 1.*t1638*t21702*t7421 - 1.*t21758*t6715*t7421)*t7970)*var2[1] + (t1638*t21758 - 1.*t21702*t6715)*t7970*var2[2];
  p_output1[6]=(-0.15121 + t7339*(t22026 + t21697*t7339) + (t22021 - 1.*t21697*t7421)*t7970)*var2[1] + (0.15121*t7421 + 0.15121*t7970)*var2[2];
  p_output1[7]=(0.28121*t7172 - 1.*t21691*t7172 - 0.305*t7138*t7172)*var2[0] + (0.28121*t7138 - 1.*t21691*t7138 + 0.305*Power(t7172,2))*var2[2];
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
