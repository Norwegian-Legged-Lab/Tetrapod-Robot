/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:14 GMT+02:00
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
  double t3717;
  double t3132;
  double t3737;
  double t3851;
  double t3808;
  double t3835;
  double t3877;
  double t2873;
  double t3848;
  double t3922;
  double t3926;
  double t3741;
  double t3972;
  double t3977;
  double t3980;
  double t3959;
  double t4497;
  double t4503;
  double t3986;
  double t3989;
  double t4006;
  double t4033;
  double t4046;
  double t4048;
  double t4056;
  double t4061;
  double t4231;
  double t4514;
  double t4515;
  double t4517;
  double t4558;
  double t4583;
  double t4592;
  double t4595;
  double t4607;
  double t4619;
  double t4633;
  double t4636;
  double t4637;
  double t4639;
  double t4640;
  double t4642;
  double t3958;
  double t4020;
  double t4021;
  double t4796;
  double t4798;
  double t4809;
  double t4815;
  double t4819;
  double t4822;
  double t4829;
  double t4830;
  double t4831;
  double t3563;
  double t3757;
  double t3769;
  double t4795;
  double t4814;
  double t4840;
  double t4851;
  double t4885;
  double t4886;
  double t4887;
  double t4893;
  double t4894;
  double t4900;
  double t4758;
  double t4759;
  double t4766;
  double t4792;
  double t4853;
  double t4854;
  double t4941;
  double t4942;
  double t4960;
  double t4979;
  double t4980;
  double t4985;
  double t4867;
  double t4931;
  double t4939;
  double t4977;
  double t5000;
  double t5001;
  double t5003;
  double t5009;
  double t5010;
  double t4032;
  double t4390;
  double t4440;
  double t4940;
  double t5026;
  double t5099;
  double t5135;
  double t5193;
  double t5218;
  double t5327;
  double t5333;
  double t5238;
  double t5254;
  double t5304;
  double t5277;
  double t5434;
  double t5422;
  t3717 = Cos(var1[9]);
  t3132 = Sin(var1[4]);
  t3737 = Cos(var1[4]);
  t3851 = Cos(var1[10]);
  t3808 = Cos(var1[11]);
  t3835 = Sin(var1[10]);
  t3877 = Sin(var1[11]);
  t2873 = Sin(var1[9]);
  t3848 = t3808*t3835;
  t3922 = -1.*t3851*t3877;
  t3926 = t3848 + t3922;
  t3741 = Sin(var1[5]);
  t3972 = t3851*t3808;
  t3977 = t3835*t3877;
  t3980 = t3972 + t3977;
  t3959 = Cos(var1[5]);
  t4497 = Cos(var1[3]);
  t4503 = Sin(var1[3]);
  t3986 = t3959*t3980;
  t3989 = t2873*t3926*t3741;
  t4006 = t3986 + t3989;
  t4033 = -1.*t3808*t3835;
  t4046 = t3851*t3877;
  t4048 = t4033 + t4046;
  t4056 = t3959*t4048;
  t4061 = t2873*t3980*t3741;
  t4231 = t4056 + t4061;
  t4514 = t3737*t2873;
  t4515 = t3717*t3132*t3741;
  t4517 = t4514 + t4515;
  t4558 = -1.*t3959*t2873*t3926;
  t4583 = t3980*t3741;
  t4592 = t4558 + t4583;
  t4595 = t3717*t3737*t3926;
  t4607 = -1.*t3132*t4006;
  t4619 = t4595 + t4607;
  t4633 = -1.*t3959*t2873*t3980;
  t4636 = t4048*t3741;
  t4637 = t4633 + t4636;
  t4639 = t3717*t3737*t3980;
  t4640 = -1.*t3132*t4231;
  t4642 = t4639 + t4640;
  t3958 = t3717*t3926*t3132;
  t4020 = t3737*t4006;
  t4021 = t3958 + t4020;
  t4796 = -0.0641*t3808;
  t4798 = -0.28*t3877;
  t4809 = t4796 + t4798;
  t4815 = -1.*t3808;
  t4819 = 1. + t4815;
  t4822 = -0.575*t4819;
  t4829 = -0.295*t3808;
  t4830 = -0.0641*t3877;
  t4831 = t4822 + t4829 + t4830;
  t3563 = t2873*t3132;
  t3757 = -1.*t3717*t3737*t3741;
  t3769 = t3563 + t3757;
  t4795 = 0.325*t3835;
  t4814 = t3851*t4809;
  t4840 = t3835*t4831;
  t4851 = t4795 + t4814 + t4840;
  t4885 = -1.*t3851;
  t4886 = 1. + t4885;
  t4887 = -0.325*t4886;
  t4893 = -1.*t3835*t4809;
  t4894 = t3851*t4831;
  t4900 = t4887 + t4893 + t4894;
  t4758 = -1.*t3717;
  t4759 = 1. + t4758;
  t4766 = 0.1575*t4759;
  t4792 = 0.2255*t3717;
  t4853 = -1.*t2873*t4851;
  t4854 = t4766 + t4792 + t4853;
  t4941 = 0.068*t2873;
  t4942 = t3717*t4851;
  t4960 = t4941 + t4942;
  t4979 = t3959*t4900;
  t4980 = -1.*t4854*t3741;
  t4985 = t4979 + t4980;
  t4867 = t3959*t4854;
  t4931 = t4900*t3741;
  t4939 = t4867 + t4931;
  t4977 = t4960*t3132;
  t5000 = t3737*t4985;
  t5001 = t4977 + t5000;
  t5003 = t3737*t4960;
  t5009 = -1.*t3132*t4985;
  t5010 = t5003 + t5009;
  t4032 = t3717*t3980*t3132;
  t4390 = t3737*t4231;
  t4440 = t4032 + t4390;
  t4940 = t3717*t3959*t4939;
  t5026 = -1.*t4939*t4592;
  t5099 = t4939*t4592;
  t5135 = -1.*t4939*t4637;
  t5193 = -1.*t3717*t3959*t4939;
  t5218 = t4939*t4637;
  t5327 = -1.*t2873*t4960;
  t5333 = t3717*t4960*t3980;
  t5238 = t2873*t4960;
  t5254 = -1.*t3717*t4960*t3926;
  t5304 = -1.*t3717*t4960*t3980;
  t5277 = t3717*t4960*t3926;
  t5434 = t4900*t3980;
  t5422 = -1.*t4900*t4048;
  p_output1[0]=t4021*var2[0] + t3769*var2[1] + t4440*var2[2];
  p_output1[1]=(t4497*t4592 - 1.*t4503*t4619)*var2[0] + (t3717*t3959*t4497 - 1.*t4503*t4517)*var2[1] + (t4497*t4637 - 1.*t4503*t4642)*var2[2];
  p_output1[2]=(t4503*t4592 + t4497*t4619)*var2[0] + (t3717*t3959*t4503 + t4497*t4517)*var2[1] + (t4503*t4637 + t4497*t4642)*var2[2];
  p_output1[3]=(t4440*(-1.*t3769*t5001 - 1.*t4517*t5010 + t5193) + t3769*(t4440*t5001 + t4642*t5010 + t5218))*var2[0] + (t4440*(t4021*t5001 + t4619*t5010 + t5099) + t4021*(-1.*t4440*t5001 - 1.*t4642*t5010 + t5135))*var2[1] + (t4021*(t4940 + t3769*t5001 + t4517*t5010) + t3769*(-1.*t4021*t5001 - 1.*t4619*t5010 + t5026))*var2[2];
  p_output1[4]=(t4637*(t3717*t3741*t4985 + t5193 + t5327) + t3717*t3959*(t4231*t4985 + t5218 + t5333))*var2[0] + (t4637*(t4006*t4985 + t5099 + t5277) + t4592*(-1.*t4231*t4985 + t5135 + t5304))*var2[1] + (t4592*(t4940 - 1.*t3717*t3741*t4985 + t5238) + t3717*t3959*(-1.*t4006*t4985 + t5026 + t5254))*var2[2];
  p_output1[5]=(t3717*t3980*(-1.*t3717*t4854 + t5327) + t2873*(-1.*t2873*t3980*t4854 + t4048*t4900 + t5333))*var2[0] + (t3717*t3926*(t2873*t3980*t4854 + t5304 + t5422) + t3717*t3980*(-1.*t2873*t3926*t4854 + t5277 + t5434))*var2[1] + (t3717*t3926*(t3717*t4854 + t5238) + t2873*(t2873*t3926*t4854 - 1.*t3980*t4900 + t5254))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t3926 - 0.2255*t4048)*var2[0] + (t3980*(-1.*t3980*t4851 + t5422) + t4048*(t3926*t4851 + t5434))*var2[1] + 0.068*t3980*var2[2];
  p_output1[10]=(-0.325*t3877 - 1.*t3808*t4809 - 1.*t3877*t4831)*var2[0] + (0.325*t3808 - 1.*t3877*t4809 + t3808*t4831)*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
