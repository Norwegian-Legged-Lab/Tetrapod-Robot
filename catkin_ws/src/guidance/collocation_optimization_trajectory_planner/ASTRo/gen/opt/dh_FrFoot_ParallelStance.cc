/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:37:06 GMT+02:00
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
  double t12262;
  double t9138;
  double t13507;
  double t13191;
  double t12270;
  double t12277;
  double t12701;
  double t12723;
  double t12725;
  double t13197;
  double t13527;
  double t13530;
  double t13228;
  double t13573;
  double t13608;
  double t13676;
  double t13896;
  double t13897;
  double t14147;
  double t13196;
  double t13219;
  double t13220;
  double t15418;
  double t15472;
  double t15399;
  double t15254;
  double t15283;
  double t15286;
  double t15297;
  double t15444;
  double t15473;
  double t15478;
  double t15515;
  double t15496;
  double t15497;
  double t15502;
  double t15483;
  double t15516;
  double t15539;
  double t15565;
  double t15645;
  double t15662;
  double t15663;
  double t14785;
  double t15009;
  double t15010;
  double t15104;
  double t15105;
  double t13572;
  double t14767;
  double t14774;
  double t15686;
  double t15688;
  double t15690;
  double t15678;
  double t15679;
  double t15684;
  double t15691;
  double t15693;
  double t15694;
  double t15711;
  double t15713;
  double t15715;
  double t15757;
  double t15758;
  double t15759;
  double t15703;
  double t15704;
  double t15709;
  double t15710;
  double t15721;
  double t15722;
  double t15723;
  double t15725;
  double t15743;
  double t15786;
  double t15789;
  double t15794;
  double t15795;
  double t15796;
  double t15797;
  double t15799;
  double t15800;
  double t15804;
  double t15866;
  double t15901;
  double t15391;
  double t15479;
  double t15480;
  double t15948;
  double t15815;
  double t15819;
  double t15823;
  double t15954;
  double t16035;
  double t16044;
  t12262 = Cos(var1[14]);
  t9138 = Sin(var1[14]);
  t13507 = Cos(var1[12]);
  t13191 = Cos(var1[13]);
  t12270 = -1.*t12262;
  t12277 = 1. + t12270;
  t12701 = 0.50321*t12277;
  t12723 = 0.19821*t12262;
  t12725 = t12701 + t12723;
  t13197 = Sin(var1[13]);
  t13527 = -1.*t13507;
  t13530 = 1. + t13527;
  t13228 = Sin(var1[12]);
  t13573 = -1.*t13191;
  t13608 = 1. + t13573;
  t13676 = 0.28121*t13608;
  t13896 = t13191*t12725;
  t13897 = -0.305*t13197*t9138;
  t14147 = t13676 + t13896 + t13897;
  t13196 = t13191*t12262;
  t13219 = t13197*t9138;
  t13220 = t13196 + t13219;
  t15418 = Cos(var1[5]);
  t15472 = Sin(var1[5]);
  t15399 = Cos(var1[4]);
  t15254 = -1.*t12262*t13197;
  t15283 = t13191*t9138;
  t15286 = t15254 + t15283;
  t15297 = Sin(var1[4]);
  t15444 = t13507*t15418*t13220;
  t15473 = -1.*t13228*t13220*t15472;
  t15478 = t15444 + t15473;
  t15515 = Cos(var1[3]);
  t15496 = t15418*t13228*t13220;
  t15497 = t13507*t13220*t15472;
  t15502 = t15496 + t15497;
  t15483 = Sin(var1[3]);
  t15516 = t15399*t15286;
  t15539 = -1.*t15297*t15478;
  t15565 = t15516 + t15539;
  t15645 = t12262*t13197;
  t15662 = -1.*t13191*t9138;
  t15663 = t15645 + t15662;
  t14785 = -0.15121*t13530;
  t15009 = -0.15121*t13507;
  t15010 = -0.15121*t13228;
  t15104 = t13228*t14147;
  t15105 = t14785 + t15009 + t15010 + t15104;
  t13572 = 0.15121*t13530;
  t14767 = t13507*t14147;
  t14774 = t13572 + t14767;
  t15686 = t13507*t15418;
  t15688 = -1.*t13228*t15472;
  t15690 = t15686 + t15688;
  t15678 = t15418*t13228*t15663;
  t15679 = t13507*t15663*t15472;
  t15684 = t15678 + t15679;
  t15691 = t15418*t15105;
  t15693 = t14774*t15472;
  t15694 = t15691 + t15693;
  t15711 = t15418*t14774;
  t15713 = -1.*t15105*t15472;
  t15715 = t15711 + t15713;
  t15757 = t13507*t15418*t15663;
  t15758 = -1.*t13228*t15663*t15472;
  t15759 = t15757 + t15758;
  t15703 = -1.*t15690*t15694;
  t15704 = -1.*t15418*t13228;
  t15709 = -1.*t13507*t15472;
  t15710 = t15704 + t15709;
  t15721 = 0.28121*t13197;
  t15722 = -1.*t12725*t13197;
  t15723 = -0.305*t13191*t9138;
  t15725 = t15721 + t15722 + t15723;
  t15743 = t15684*t15694;
  t15786 = t13220*t15297;
  t15789 = t15399*t15759;
  t15794 = t15786 + t15789;
  t15795 = t15725*t15297;
  t15796 = t15399*t15715;
  t15797 = t15795 + t15796;
  t15799 = t15399*t15725;
  t15800 = -1.*t15297*t15715;
  t15804 = t15799 + t15800;
  t15866 = -1.*t15725*t13220;
  t15901 = t15725*t15286;
  t15391 = t15286*t15297;
  t15479 = t15399*t15478;
  t15480 = t15391 + t15479;
  t15948 = -1.*t15684*t15694;
  t15815 = t15399*t13220;
  t15819 = -1.*t15297*t15759;
  t15823 = t15815 + t15819;
  t15954 = t15502*t15694;
  t16035 = t15690*t15694;
  t16044 = -1.*t15502*t15694;
  p_output1[0]=t15480*var2[0] + (t15502*t15515 - 1.*t15483*t15565)*var2[1] + (t15483*t15502 + t15515*t15565)*var2[2] + (t15794*(t15703 - 1.*t15399*t15710*t15797 + t15297*t15710*t15804) + t15399*t15710*(t15743 + t15794*t15797 + t15804*t15823))*var2[3] + (t15684*(t15703 - 1.*t15710*t15715) + t15690*(t13220*t15725 + t15743 + t15715*t15759))*var2[4] + t13220*(t13228*t14774 - 1.*t13507*t15105)*var2[5] + (0.28121*t9138 - 0.305*t12262*t9138 - 1.*t12725*t9138)*var2[13];
  p_output1[1]=t15399*t15710*var2[0] + (t15515*t15690 + t15297*t15483*t15710)*var2[1] + (t15483*t15690 - 1.*t15297*t15515*t15710)*var2[2] + (t15480*(-1.*t15794*t15797 - 1.*t15804*t15823 + t15948) + t15794*(t15480*t15797 + t15565*t15804 + t15954))*var2[3] + (t15502*(-1.*t15715*t15759 + t15866 + t15948) + t15684*(t15478*t15715 + t15901 + t15954))*var2[4] + (t15286*(-1.*t13507*t14774*t15663 - 1.*t13228*t15105*t15663 + t15866) + t13220*(t13220*t13507*t14774 + t13220*t13228*t15105 + t15901))*var2[5] + (-0.15121 + t15286*(-1.*t14147*t15663 + t15866) + t13220*(t13220*t14147 + t15901))*var2[12];
  p_output1[2]=t15794*var2[0] + (t15515*t15684 - 1.*t15483*t15823)*var2[1] + (t15483*t15684 + t15515*t15823)*var2[2] + (t15480*(t15399*t15710*t15797 - 1.*t15297*t15710*t15804 + t16035) + t15399*t15710*(-1.*t15480*t15797 - 1.*t15565*t15804 + t16044))*var2[3] + (t15502*(t15710*t15715 + t16035) + t15690*(-1.*t15478*t15715 - 1.*t15286*t15725 + t16044))*var2[4] + (-1.*t13228*t14774 + t13507*t15105)*t15286*var2[5] + (-0.15121*t15286 - 0.15121*t15663)*var2[12] + (0.28121*t12262 - 1.*t12262*t12725 + 0.305*Power(t9138,2))*var2[13] - 0.305*var2[14];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
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

#include "dh_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void dh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
