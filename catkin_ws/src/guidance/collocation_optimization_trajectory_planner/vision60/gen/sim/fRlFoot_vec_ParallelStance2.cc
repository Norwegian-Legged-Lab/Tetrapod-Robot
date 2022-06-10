/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:20 GMT+02:00
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
  double t3955;
  double t3422;
  double t3995;
  double t4241;
  double t4148;
  double t4203;
  double t4276;
  double t640;
  double t4234;
  double t4303;
  double t4309;
  double t3999;
  double t4317;
  double t4387;
  double t4400;
  double t4316;
  double t5278;
  double t5282;
  double t4401;
  double t4406;
  double t4414;
  double t4463;
  double t4466;
  double t4470;
  double t4776;
  double t5161;
  double t5187;
  double t5290;
  double t5301;
  double t5302;
  double t5314;
  double t5340;
  double t5353;
  double t5362;
  double t5453;
  double t5486;
  double t5531;
  double t5532;
  double t5547;
  double t5554;
  double t5556;
  double t5579;
  double t4312;
  double t4415;
  double t4416;
  double t5944;
  double t5946;
  double t5950;
  double t5967;
  double t5969;
  double t5996;
  double t6005;
  double t6007;
  double t6008;
  double t3726;
  double t4032;
  double t4035;
  double t5938;
  double t5951;
  double t6011;
  double t6014;
  double t6034;
  double t6050;
  double t6064;
  double t6065;
  double t6072;
  double t6079;
  double t5920;
  double t5922;
  double t5929;
  double t5937;
  double t6015;
  double t6024;
  double t6103;
  double t6104;
  double t6120;
  double t6123;
  double t6125;
  double t6137;
  double t6029;
  double t6087;
  double t6089;
  double t6121;
  double t6149;
  double t6171;
  double t6191;
  double t6196;
  double t6208;
  double t4449;
  double t5195;
  double t5228;
  double t6092;
  double t6239;
  double t6302;
  double t6361;
  double t6476;
  double t6605;
  double t6858;
  double t6890;
  double t6639;
  double t6719;
  double t6835;
  double t6823;
  double t7163;
  double t7120;
  t3955 = Cos(var1[9]);
  t3422 = Sin(var1[4]);
  t3995 = Cos(var1[4]);
  t4241 = Cos(var1[10]);
  t4148 = Cos(var1[11]);
  t4203 = Sin(var1[10]);
  t4276 = Sin(var1[11]);
  t640 = Sin(var1[9]);
  t4234 = t4148*t4203;
  t4303 = -1.*t4241*t4276;
  t4309 = t4234 + t4303;
  t3999 = Sin(var1[5]);
  t4317 = t4241*t4148;
  t4387 = t4203*t4276;
  t4400 = t4317 + t4387;
  t4316 = Cos(var1[5]);
  t5278 = Cos(var1[3]);
  t5282 = Sin(var1[3]);
  t4401 = t4316*t4400;
  t4406 = t640*t4309*t3999;
  t4414 = t4401 + t4406;
  t4463 = -1.*t4148*t4203;
  t4466 = t4241*t4276;
  t4470 = t4463 + t4466;
  t4776 = t4316*t4470;
  t5161 = t640*t4400*t3999;
  t5187 = t4776 + t5161;
  t5290 = t3995*t640;
  t5301 = t3955*t3422*t3999;
  t5302 = t5290 + t5301;
  t5314 = -1.*t4316*t640*t4309;
  t5340 = t4400*t3999;
  t5353 = t5314 + t5340;
  t5362 = t3955*t3995*t4309;
  t5453 = -1.*t3422*t4414;
  t5486 = t5362 + t5453;
  t5531 = -1.*t4316*t640*t4400;
  t5532 = t4470*t3999;
  t5547 = t5531 + t5532;
  t5554 = t3955*t3995*t4400;
  t5556 = -1.*t3422*t5187;
  t5579 = t5554 + t5556;
  t4312 = t3955*t4309*t3422;
  t4415 = t3995*t4414;
  t4416 = t4312 + t4415;
  t5944 = -0.0641*t4148;
  t5946 = -0.28*t4276;
  t5950 = t5944 + t5946;
  t5967 = -1.*t4148;
  t5969 = 1. + t5967;
  t5996 = -0.575*t5969;
  t6005 = -0.295*t4148;
  t6007 = -0.0641*t4276;
  t6008 = t5996 + t6005 + t6007;
  t3726 = t640*t3422;
  t4032 = -1.*t3955*t3995*t3999;
  t4035 = t3726 + t4032;
  t5938 = 0.325*t4203;
  t5951 = t4241*t5950;
  t6011 = t4203*t6008;
  t6014 = t5938 + t5951 + t6011;
  t6034 = -1.*t4241;
  t6050 = 1. + t6034;
  t6064 = -0.325*t6050;
  t6065 = -1.*t4203*t5950;
  t6072 = t4241*t6008;
  t6079 = t6064 + t6065 + t6072;
  t5920 = -1.*t3955;
  t5922 = 1. + t5920;
  t5929 = 0.1575*t5922;
  t5937 = 0.2255*t3955;
  t6015 = -1.*t640*t6014;
  t6024 = t5929 + t5937 + t6015;
  t6103 = 0.068*t640;
  t6104 = t3955*t6014;
  t6120 = t6103 + t6104;
  t6123 = t4316*t6079;
  t6125 = -1.*t6024*t3999;
  t6137 = t6123 + t6125;
  t6029 = t4316*t6024;
  t6087 = t6079*t3999;
  t6089 = t6029 + t6087;
  t6121 = t6120*t3422;
  t6149 = t3995*t6137;
  t6171 = t6121 + t6149;
  t6191 = t3995*t6120;
  t6196 = -1.*t3422*t6137;
  t6208 = t6191 + t6196;
  t4449 = t3955*t4400*t3422;
  t5195 = t3995*t5187;
  t5228 = t4449 + t5195;
  t6092 = t3955*t4316*t6089;
  t6239 = -1.*t6089*t5353;
  t6302 = t6089*t5353;
  t6361 = -1.*t6089*t5547;
  t6476 = -1.*t3955*t4316*t6089;
  t6605 = t6089*t5547;
  t6858 = -1.*t640*t6120;
  t6890 = t3955*t6120*t4400;
  t6639 = t640*t6120;
  t6719 = -1.*t3955*t6120*t4309;
  t6835 = -1.*t3955*t6120*t4400;
  t6823 = t3955*t6120*t4309;
  t7163 = t6079*t4400;
  t7120 = -1.*t6079*t4470;
  p_output1[0]=t4416*var2[0] + t4035*var2[1] + t5228*var2[2];
  p_output1[1]=(t5278*t5353 - 1.*t5282*t5486)*var2[0] + (t3955*t4316*t5278 - 1.*t5282*t5302)*var2[1] + (t5278*t5547 - 1.*t5282*t5579)*var2[2];
  p_output1[2]=(t5282*t5353 + t5278*t5486)*var2[0] + (t3955*t4316*t5282 + t5278*t5302)*var2[1] + (t5282*t5547 + t5278*t5579)*var2[2];
  p_output1[3]=(t5228*(-1.*t4035*t6171 - 1.*t5302*t6208 + t6476) + t4035*(t5228*t6171 + t5579*t6208 + t6605))*var2[0] + (t5228*(t4416*t6171 + t5486*t6208 + t6302) + t4416*(-1.*t5228*t6171 - 1.*t5579*t6208 + t6361))*var2[1] + (t4416*(t6092 + t4035*t6171 + t5302*t6208) + t4035*(-1.*t4416*t6171 - 1.*t5486*t6208 + t6239))*var2[2];
  p_output1[4]=(t5547*(t3955*t3999*t6137 + t6476 + t6858) + t3955*t4316*(t5187*t6137 + t6605 + t6890))*var2[0] + (t5547*(t4414*t6137 + t6302 + t6823) + t5353*(-1.*t5187*t6137 + t6361 + t6835))*var2[1] + (t5353*(t6092 - 1.*t3955*t3999*t6137 + t6639) + t3955*t4316*(-1.*t4414*t6137 + t6239 + t6719))*var2[2];
  p_output1[5]=(t3955*t4400*(-1.*t3955*t6024 + t6858) + t640*(t4470*t6079 - 1.*t4400*t6024*t640 + t6890))*var2[0] + (t3955*t4309*(t4400*t6024*t640 + t6835 + t7120) + t3955*t4400*(-1.*t4309*t6024*t640 + t6823 + t7163))*var2[1] + (t3955*t4309*(t3955*t6024 + t6639) + t640*(-1.*t4400*t6079 + t4309*t6024*t640 + t6719))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t4309 - 0.2255*t4470)*var2[0] + (t4400*(-1.*t4400*t6014 + t7120) + t4470*(t4309*t6014 + t7163))*var2[1] + 0.068*t4400*var2[2];
  p_output1[10]=(-0.325*t4276 - 1.*t4148*t5950 - 1.*t4276*t6008)*var2[0] + (0.325*t4148 - 1.*t4276*t5950 + t4148*t6008)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
