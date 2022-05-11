/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:51 GMT+02:00
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
  double t20436;
  double t20467;
  double t25684;
  double t25686;
  double t25743;
  double t25727;
  double t20463;
  double t20470;
  double t20689;
  double t25431;
  double t25432;
  double t25433;
  double t25485;
  double t25491;
  double t25538;
  double t25756;
  double t25759;
  double t25764;
  double t25765;
  double t25696;
  double t25701;
  double t25702;
  double t25752;
  double t25766;
  double t25767;
  double t25882;
  double t25883;
  double t25886;
  double t25772;
  double t25773;
  double t25774;
  double t25854;
  double t25857;
  double t25858;
  double t25685;
  double t25688;
  double t25689;
  double t25985;
  double t25996;
  double t25984;
  double t25982;
  double t25987;
  double t25998;
  double t25999;
  double t26032;
  double t26008;
  double t26014;
  double t26018;
  double t26007;
  double t26043;
  double t26046;
  double t26047;
  double t25769;
  double t25895;
  double t25896;
  double t25897;
  double t25898;
  double t25923;
  double t25927;
  double t25944;
  double t26096;
  double t26097;
  double t26102;
  double t26084;
  double t26086;
  double t26087;
  double t26089;
  double t26093;
  double t26094;
  double t26133;
  double t26154;
  double t26158;
  double t26103;
  double t26188;
  double t26189;
  double t26190;
  double t26112;
  double t26202;
  double t26218;
  double t26236;
  double t26175;
  double t26176;
  double t26177;
  double t26253;
  double t26254;
  double t26257;
  double t26343;
  double t26313;
  double t26247;
  double t26248;
  double t26251;
  double t26334;
  double t26314;
  double t26420;
  double t25983;
  double t26000;
  double t26005;
  double t26423;
  double t26263;
  double t26269;
  double t26270;
  double t26474;
  double t26482;
  double t26514;
  double t26522;
  t20436 = Cos(var1[14]);
  t20467 = Sin(var1[14]);
  t25684 = Sin(var1[13]);
  t25686 = Cos(var1[13]);
  t25743 = Sin(var1[12]);
  t25727 = Cos(var1[12]);
  t20463 = -0.0641*t20436;
  t20470 = -0.28*t20467;
  t20689 = t20463 + t20470;
  t25431 = -1.*t20436;
  t25432 = 1. + t25431;
  t25433 = 0.075*t25432;
  t25485 = 0.355*t20436;
  t25491 = -0.0641*t20467;
  t25538 = t25433 + t25485 + t25491;
  t25756 = -0.325*t25684;
  t25759 = t25686*t20689;
  t25764 = t25684*t25538;
  t25765 = t25756 + t25759 + t25764;
  t25696 = -1.*t20436*t25684;
  t25701 = t25686*t20467;
  t25702 = t25696 + t25701;
  t25752 = -0.068*t25743;
  t25766 = t25727*t25765;
  t25767 = t25752 + t25766;
  t25882 = t25686*t20436;
  t25883 = t25684*t20467;
  t25886 = t25882 + t25883;
  t25772 = -1.*t25727;
  t25773 = 1. + t25772;
  t25774 = -0.1575*t25773;
  t25854 = -0.2255*t25727;
  t25857 = -1.*t25743*t25765;
  t25858 = t25774 + t25854 + t25857;
  t25685 = t20436*t25684;
  t25688 = -1.*t25686*t20467;
  t25689 = t25685 + t25688;
  t25985 = Cos(var1[5]);
  t25996 = Sin(var1[5]);
  t25984 = Cos(var1[4]);
  t25982 = Sin(var1[4]);
  t25987 = t25985*t25886;
  t25998 = t25743*t25689*t25996;
  t25999 = t25987 + t25998;
  t26032 = Cos(var1[3]);
  t26008 = -1.*t25985*t25743*t25689;
  t26014 = t25886*t25996;
  t26018 = t26008 + t26014;
  t26007 = Sin(var1[3]);
  t26043 = t25727*t25984*t25689;
  t26046 = -1.*t25982*t25999;
  t26047 = t26043 + t26046;
  t25769 = -1.*t25743*t25767;
  t25895 = -1.*t25686;
  t25896 = 1. + t25895;
  t25897 = 0.325*t25896;
  t25898 = -1.*t25684*t20689;
  t25923 = t25686*t25538;
  t25927 = t25897 + t25898 + t25923;
  t25944 = t25727*t25767*t25886;
  t26096 = t25985*t25858;
  t26097 = t25927*t25996;
  t26102 = t26096 + t26097;
  t26084 = -1.*t25985*t25743*t25886;
  t26086 = t25702*t25996;
  t26087 = t26084 + t26086;
  t26089 = t25985*t25927;
  t26093 = -1.*t25858*t25996;
  t26094 = t26089 + t26093;
  t26133 = t25985*t25702;
  t26154 = t25743*t25886*t25996;
  t26158 = t26133 + t26154;
  t26103 = -1.*t25727*t25985*t26102;
  t26188 = t25743*t25982;
  t26189 = -1.*t25727*t25984*t25996;
  t26190 = t26188 + t26189;
  t26112 = t26102*t26087;
  t26202 = t25767*t25982;
  t26218 = t25984*t26094;
  t26236 = t26202 + t26218;
  t26175 = t25727*t25886*t25982;
  t26176 = t25984*t26158;
  t26177 = t26175 + t26176;
  t26253 = t25984*t25767;
  t26254 = -1.*t25982*t26094;
  t26257 = t26253 + t26254;
  t26343 = t25927*t25886;
  t26313 = -1.*t25927*t25702;
  t26247 = t25984*t25743;
  t26248 = t25727*t25982*t25996;
  t26251 = t26247 + t26248;
  t26334 = t25727*t25767*t25689;
  t26314 = -1.*t25727*t25767*t25886;
  t26420 = t26102*t26018;
  t25983 = t25727*t25689*t25982;
  t26000 = t25984*t25999;
  t26005 = t25983 + t26000;
  t26423 = -1.*t26102*t26087;
  t26263 = t25727*t25984*t25886;
  t26269 = -1.*t25982*t26158;
  t26270 = t26263 + t26269;
  t26474 = t25743*t25767;
  t26482 = -1.*t25727*t25767*t25689;
  t26514 = t25727*t25985*t26102;
  t26522 = -1.*t26102*t26018;
  p_output1[0]=t26005*var2[0] + (t26018*t26032 - 1.*t26007*t26047)*var2[1] + (t26007*t26018 + t26032*t26047)*var2[2] + (t26177*(t26103 - 1.*t26190*t26236 - 1.*t26251*t26257) + t26190*(t26112 + t26177*t26236 + t26257*t26270))*var2[3] + (t26087*(t25769 + t25727*t25996*t26094 + t26103) + t25727*t25985*(t25944 + t26112 + t26094*t26158))*var2[4] + (t25727*(t25769 - 1.*t25727*t25858)*t25886 + t25743*(-1.*t25743*t25858*t25886 + t25702*t25927 + t25944))*var2[5] + (0.1575*t25689 + 0.2255*t25702)*var2[12] + (0.325*t20467 - 1.*t20436*t20689 - 1.*t20467*t25538)*var2[13] - 0.0641*var2[14];
  p_output1[1]=t26190*var2[0] + (t25727*t25985*t26032 - 1.*t26007*t26251)*var2[1] + (t25727*t25985*t26007 + t26032*t26251)*var2[2] + (t26177*(t26005*t26236 + t26047*t26257 + t26420) + t26005*(-1.*t26177*t26236 - 1.*t26257*t26270 + t26423))*var2[3] + (t26087*(t25999*t26094 + t26334 + t26420) + t26018*(-1.*t26094*t26158 + t26314 + t26423))*var2[4] + (t25689*t25727*(t25743*t25858*t25886 + t26313 + t26314) + t25727*t25886*(-1.*t25689*t25743*t25858 + t26334 + t26343))*var2[5] + (t25886*(-1.*t25765*t25886 + t26313) + t25702*(t25689*t25765 + t26343))*var2[12];
  p_output1[2]=t26177*var2[0] + (t26032*t26087 - 1.*t26007*t26270)*var2[1] + (t26007*t26087 + t26032*t26270)*var2[2] + (t26005*(t26190*t26236 + t26251*t26257 + t26514) + t26190*(-1.*t26005*t26236 - 1.*t26047*t26257 + t26522))*var2[3] + (t26018*(-1.*t25727*t25996*t26094 + t26474 + t26514) + t25727*t25985*(-1.*t25999*t26094 + t26482 + t26522))*var2[4] + (t25689*t25727*(t25727*t25858 + t26474) + t25743*(t25689*t25743*t25858 - 1.*t25886*t25927 + t26482))*var2[5] - 0.068*t25886*var2[12] + (-0.325*t20436 - 1.*t20467*t20689 + t20436*t25538)*var2[13] - 0.28*var2[14];
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
