/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:58 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t2318;
  double t4707;
  double t5384;
  double t4976;
  double t5184;
  double t5405;
  double t5552;
  double t5565;
  double t5593;
  double t3393;
  double t5359;
  double t5426;
  double t5501;
  double t5677;
  double t5702;
  double t5705;
  double t5725;
  double t5867;
  double t5924;
  double t120;
  double t2353;
  double t3818;
  double t4001;
  double t4088;
  double t5507;
  double t5598;
  double t5676;
  double t5711;
  double t5712;
  double t6068;
  double t6093;
  double t6347;
  double t6352;
  double t6377;
  double t6483;
  double t6767;
  double t6776;
  double t6867;
  double t6923;
  double t6926;
  double t6927;
  double t6932;
  double t6939;
  double t6974;
  double t7081;
  double t180;
  double t283;
  double t7539;
  double t7686;
  double t7675;
  double t7687;
  double t7696;
  double t7704;
  double t7708;
  double t7717;
  double t7701;
  double t7728;
  double t7734;
  double t7738;
  double t7739;
  double t7743;
  double t6820;
  double t6846;
  double t7189;
  double t7191;
  double t7568;
  double t7736;
  double t7748;
  double t7749;
  double t7196;
  double t7197;
  double t7777;
  double t7778;
  double t7779;
  double t7781;
  double t7785;
  double t7787;
  double t7788;
  double t7792;
  double t7897;
  double t7910;
  double t7911;
  double t7916;
  double t7917;
  double t7919;
  double t7913;
  double t7922;
  double t7923;
  double t7939;
  double t7941;
  double t7946;
  double t7894;
  double t7936;
  double t8002;
  double t8053;
  double t8114;
  double t8140;
  double t8142;
  double t8158;
  double t8176;
  double t8177;
  double t8184;
  double t8186;
  t2318 = Sin(var1[10]);
  t4707 = Cos(var1[4]);
  t5384 = Cos(var1[9]);
  t4976 = Cos(var1[5]);
  t5184 = Sin(var1[9]);
  t5405 = Sin(var1[5]);
  t5552 = Cos(var1[10]);
  t5565 = -1.*t5552;
  t5593 = 1. + t5565;
  t3393 = Sin(var1[4]);
  t5359 = -1.*t4707*t4976*t5184;
  t5426 = -1.*t5384*t4707*t5405;
  t5501 = t5359 + t5426;
  t5677 = t5384*t4707*t4976;
  t5702 = -1.*t4707*t5184*t5405;
  t5705 = t5677 + t5702;
  t5725 = Cos(var1[11]);
  t5867 = -1.*t5725;
  t5924 = 1. + t5867;
  t120 = Sin(var1[11]);
  t2353 = 0. + t2318;
  t3818 = t2353*t3393;
  t4001 = -4.e-6*t2318;
  t4088 = 0. + t4001;
  t5507 = t4088*t5501;
  t5598 = -1.000000000016*t5593;
  t5676 = 1. + t5598;
  t5711 = t5676*t5705;
  t5712 = t3818 + t5507 + t5711;
  t6068 = -1.*t5593;
  t6093 = 1. + t6068;
  t6347 = t6093*t3393;
  t6352 = 4.e-6*t5593*t5501;
  t6377 = -1.*t2318;
  t6483 = 0. + t6377;
  t6767 = t6483*t5705;
  t6776 = t6347 + t6352 + t6767;
  t6867 = 4.e-6*t5593*t3393;
  t6923 = -1.6e-11*t5593;
  t6926 = 1. + t6923;
  t6927 = t6926*t5501;
  t6932 = 4.e-6*t2318;
  t6939 = 0. + t6932;
  t6974 = t6939*t5705;
  t7081 = t6867 + t6927 + t6974;
  t180 = 4.e-6*t120;
  t283 = 0. + t180;
  t7539 = Sin(var1[3]);
  t7686 = Cos(var1[3]);
  t7675 = t4976*t7539*t3393;
  t7687 = t7686*t5405;
  t7696 = t7675 + t7687;
  t7704 = t7686*t4976;
  t7708 = -1.*t7539*t3393*t5405;
  t7717 = t7704 + t7708;
  t7701 = -1.*t5184*t7696;
  t7728 = t5384*t7717;
  t7734 = t7701 + t7728;
  t7738 = t5384*t7696;
  t7739 = t5184*t7717;
  t7743 = t7738 + t7739;
  t6820 = -1.6e-11*t5924;
  t6846 = 1. + t6820;
  t7189 = -1.*t120;
  t7191 = 0. + t7189;
  t7568 = -1.*t4707*t2353*t7539;
  t7736 = t4088*t7734;
  t7748 = t5676*t7743;
  t7749 = t7568 + t7736 + t7748;
  t7196 = -1.*t5924;
  t7197 = 1. + t7196;
  t7777 = -1.*t6093*t4707*t7539;
  t7778 = 4.e-6*t5593*t7734;
  t7779 = t6483*t7743;
  t7781 = t7777 + t7778 + t7779;
  t7785 = -4.e-6*t5593*t4707*t7539;
  t7787 = t6926*t7734;
  t7788 = t6939*t7743;
  t7792 = t7785 + t7787 + t7788;
  t7897 = -1.*t7686*t4976*t3393;
  t7910 = t7539*t5405;
  t7911 = t7897 + t7910;
  t7916 = t4976*t7539;
  t7917 = t7686*t3393*t5405;
  t7919 = t7916 + t7917;
  t7913 = -1.*t5184*t7911;
  t7922 = t5384*t7919;
  t7923 = t7913 + t7922;
  t7939 = t5384*t7911;
  t7941 = t5184*t7919;
  t7946 = t7939 + t7941;
  t7894 = t7686*t4707*t2353;
  t7936 = t4088*t7923;
  t8002 = t5676*t7946;
  t8053 = t7894 + t7936 + t8002;
  t8114 = t6093*t7686*t4707;
  t8140 = 4.e-6*t5593*t7923;
  t8142 = t6483*t7946;
  t8158 = t8114 + t8140 + t8142;
  t8176 = 4.e-6*t5593*t7686*t4707;
  t8177 = t6926*t7923;
  t8184 = t6939*t7946;
  t8186 = t8176 + t8177 + t8184;
  p_output1[0]=-1.*t283*t5712 - 4.e-6*t5924*t6776 - 1.*t6846*t7081 - 4.e-6*(4.e-6*t5924*t7081 + t5712*t7191 + t6776*t7197);
  p_output1[1]=-1.*t283*t7749 - 4.e-6*t5924*t7781 - 1.*t6846*t7792 - 4.e-6*(t7191*t7749 + t7197*t7781 + 4.e-6*t5924*t7792);
  p_output1[2]=-1.*t283*t8053 - 4.e-6*t5924*t8158 - 1.*t6846*t8186 - 4.e-6*(t7191*t8053 + t7197*t8158 + 4.e-6*t5924*t8186);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fr_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_fr_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
