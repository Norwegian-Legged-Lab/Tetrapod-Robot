/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:13 GMT+02:00
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
  double t4157;
  double t3553;
  double t4460;
  double t5543;
  double t5318;
  double t5426;
  double t5552;
  double t3279;
  double t5440;
  double t5872;
  double t5953;
  double t4592;
  double t6164;
  double t6166;
  double t6224;
  double t6073;
  double t6789;
  double t6804;
  double t6237;
  double t6450;
  double t6470;
  double t6625;
  double t6627;
  double t6672;
  double t6676;
  double t6699;
  double t6707;
  double t6805;
  double t6809;
  double t6814;
  double t6834;
  double t6845;
  double t6846;
  double t6860;
  double t6874;
  double t6875;
  double t6907;
  double t6910;
  double t6911;
  double t6921;
  double t6936;
  double t6937;
  double t6057;
  double t6574;
  double t6575;
  double t7113;
  double t7117;
  double t7125;
  double t7138;
  double t7140;
  double t7141;
  double t7165;
  double t7168;
  double t7170;
  double t4129;
  double t4871;
  double t4931;
  double t7112;
  double t7136;
  double t7171;
  double t7172;
  double t7206;
  double t7208;
  double t7212;
  double t7213;
  double t7214;
  double t7217;
  double t7057;
  double t7058;
  double t7089;
  double t7090;
  double t7176;
  double t7178;
  double t7237;
  double t7239;
  double t7245;
  double t7249;
  double t7250;
  double t7254;
  double t7179;
  double t7219;
  double t7222;
  double t7248;
  double t7262;
  double t7285;
  double t7288;
  double t7291;
  double t7299;
  double t6600;
  double t6716;
  double t6724;
  double t7235;
  double t7310;
  double t7337;
  double t7351;
  double t7401;
  double t7412;
  double t7604;
  double t7626;
  double t7505;
  double t7523;
  double t7583;
  double t7569;
  double t7970;
  double t7911;
  t4157 = Cos(var1[12]);
  t3553 = Sin(var1[4]);
  t4460 = Cos(var1[4]);
  t5543 = Cos(var1[13]);
  t5318 = Cos(var1[14]);
  t5426 = Sin(var1[13]);
  t5552 = Sin(var1[14]);
  t3279 = Sin(var1[12]);
  t5440 = t5318*t5426;
  t5872 = -1.*t5543*t5552;
  t5953 = t5440 + t5872;
  t4592 = Sin(var1[5]);
  t6164 = t5543*t5318;
  t6166 = t5426*t5552;
  t6224 = t6164 + t6166;
  t6073 = Cos(var1[5]);
  t6789 = Cos(var1[3]);
  t6804 = Sin(var1[3]);
  t6237 = t6073*t6224;
  t6450 = t3279*t5953*t4592;
  t6470 = t6237 + t6450;
  t6625 = -1.*t5318*t5426;
  t6627 = t5543*t5552;
  t6672 = t6625 + t6627;
  t6676 = t6073*t6672;
  t6699 = t3279*t6224*t4592;
  t6707 = t6676 + t6699;
  t6805 = t4460*t3279;
  t6809 = t4157*t3553*t4592;
  t6814 = t6805 + t6809;
  t6834 = -1.*t6073*t3279*t5953;
  t6845 = t6224*t4592;
  t6846 = t6834 + t6845;
  t6860 = t4157*t4460*t5953;
  t6874 = -1.*t3553*t6470;
  t6875 = t6860 + t6874;
  t6907 = -1.*t6073*t3279*t6224;
  t6910 = t6672*t4592;
  t6911 = t6907 + t6910;
  t6921 = t4157*t4460*t6224;
  t6936 = -1.*t3553*t6707;
  t6937 = t6921 + t6936;
  t6057 = t4157*t5953*t3553;
  t6574 = t4460*t6470;
  t6575 = t6057 + t6574;
  t7113 = -0.0641*t5318;
  t7117 = -0.28*t5552;
  t7125 = t7113 + t7117;
  t7138 = -1.*t5318;
  t7140 = 1. + t7138;
  t7141 = 0.075*t7140;
  t7165 = 0.355*t5318;
  t7168 = -0.0641*t5552;
  t7170 = t7141 + t7165 + t7168;
  t4129 = t3279*t3553;
  t4871 = -1.*t4157*t4460*t4592;
  t4931 = t4129 + t4871;
  t7112 = -0.325*t5426;
  t7136 = t5543*t7125;
  t7171 = t5426*t7170;
  t7172 = t7112 + t7136 + t7171;
  t7206 = -1.*t5543;
  t7208 = 1. + t7206;
  t7212 = 0.325*t7208;
  t7213 = -1.*t5426*t7125;
  t7214 = t5543*t7170;
  t7217 = t7212 + t7213 + t7214;
  t7057 = -1.*t4157;
  t7058 = 1. + t7057;
  t7089 = -0.1575*t7058;
  t7090 = -0.2255*t4157;
  t7176 = -1.*t3279*t7172;
  t7178 = t7089 + t7090 + t7176;
  t7237 = -0.068*t3279;
  t7239 = t4157*t7172;
  t7245 = t7237 + t7239;
  t7249 = t6073*t7217;
  t7250 = -1.*t7178*t4592;
  t7254 = t7249 + t7250;
  t7179 = t6073*t7178;
  t7219 = t7217*t4592;
  t7222 = t7179 + t7219;
  t7248 = t7245*t3553;
  t7262 = t4460*t7254;
  t7285 = t7248 + t7262;
  t7288 = t4460*t7245;
  t7291 = -1.*t3553*t7254;
  t7299 = t7288 + t7291;
  t6600 = t4157*t6224*t3553;
  t6716 = t4460*t6707;
  t6724 = t6600 + t6716;
  t7235 = t4157*t6073*t7222;
  t7310 = -1.*t7222*t6846;
  t7337 = t7222*t6846;
  t7351 = -1.*t7222*t6911;
  t7401 = -1.*t4157*t6073*t7222;
  t7412 = t7222*t6911;
  t7604 = -1.*t3279*t7245;
  t7626 = t4157*t7245*t6224;
  t7505 = t3279*t7245;
  t7523 = -1.*t4157*t7245*t5953;
  t7583 = -1.*t4157*t7245*t6224;
  t7569 = t4157*t7245*t5953;
  t7970 = t7217*t6224;
  t7911 = -1.*t7217*t6672;
  p_output1[0]=t6575*var2[0] + t4931*var2[1] + t6724*var2[2];
  p_output1[1]=(t6789*t6846 - 1.*t6804*t6875)*var2[0] + (t4157*t6073*t6789 - 1.*t6804*t6814)*var2[1] + (t6789*t6911 - 1.*t6804*t6937)*var2[2];
  p_output1[2]=(t6804*t6846 + t6789*t6875)*var2[0] + (t4157*t6073*t6804 + t6789*t6814)*var2[1] + (t6804*t6911 + t6789*t6937)*var2[2];
  p_output1[3]=(t6724*(-1.*t4931*t7285 - 1.*t6814*t7299 + t7401) + t4931*(t6724*t7285 + t6937*t7299 + t7412))*var2[0] + (t6724*(t6575*t7285 + t6875*t7299 + t7337) + t6575*(-1.*t6724*t7285 - 1.*t6937*t7299 + t7351))*var2[1] + (t6575*(t7235 + t4931*t7285 + t6814*t7299) + t4931*(-1.*t6575*t7285 - 1.*t6875*t7299 + t7310))*var2[2];
  p_output1[4]=(t6911*(t4157*t4592*t7254 + t7401 + t7604) + t4157*t6073*(t6707*t7254 + t7412 + t7626))*var2[0] + (t6911*(t6470*t7254 + t7337 + t7569) + t6846*(-1.*t6707*t7254 + t7351 + t7583))*var2[1] + (t6846*(t7235 - 1.*t4157*t4592*t7254 + t7505) + t4157*t6073*(-1.*t6470*t7254 + t7310 + t7523))*var2[2];
  p_output1[5]=(t4157*t6224*(-1.*t4157*t7178 + t7604) + t3279*(-1.*t3279*t6224*t7178 + t6672*t7217 + t7626))*var2[0] + (t4157*t5953*(t3279*t6224*t7178 + t7583 + t7911) + t4157*t6224*(-1.*t3279*t5953*t7178 + t7569 + t7970))*var2[1] + (t4157*t5953*(t4157*t7178 + t7505) + t3279*(t3279*t5953*t7178 - 1.*t6224*t7217 + t7523))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t5953 + 0.2255*t6672)*var2[0] + (t6224*(-1.*t6224*t7172 + t7911) + t6672*(t5953*t7172 + t7970))*var2[1] - 0.068*t6224*var2[2];
  p_output1[13]=(0.325*t5552 - 1.*t5318*t7125 - 1.*t5552*t7170)*var2[0] + (-0.325*t5318 - 1.*t5552*t7125 + t5318*t7170)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
