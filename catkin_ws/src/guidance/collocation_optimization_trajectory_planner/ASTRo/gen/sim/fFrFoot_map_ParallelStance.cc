/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:45 GMT+02:00
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
  double t3506;
  double t2692;
  double t2827;
  double t3519;
  double t3815;
  double t3871;
  double t3880;
  double t3805;
  double t3981;
  double t3730;
  double t4029;
  double t3715;
  double t2997;
  double t3520;
  double t3626;
  double t3664;
  double t3912;
  double t4036;
  double t4080;
  double t4329;
  double t4249;
  double t4276;
  double t4277;
  double t4173;
  double t4339;
  double t4429;
  double t4447;
  double t5301;
  double t5338;
  double t5392;
  double t8339;
  double t8411;
  double t15554;
  double t15739;
  double t19057;
  double t19071;
  double t19497;
  double t19751;
  double t19928;
  double t19980;
  double t20276;
  double t21300;
  double t21402;
  double t25737;
  double t26139;
  double t26187;
  double t8439;
  double t8443;
  double t8467;
  double t22583;
  double t25105;
  double t41266;
  double t41267;
  double t41268;
  double t41312;
  double t41313;
  double t41329;
  double t41337;
  double t41340;
  double t41353;
  double t41357;
  double t25726;
  double t26197;
  double t27617;
  double t5218;
  double t5426;
  double t5559;
  double t5709;
  double t5810;
  double t5818;
  double t41339;
  double t41358;
  double t41363;
  double t41376;
  double t41411;
  double t41412;
  double t41471;
  double t41473;
  double t41484;
  double t7475;
  double t7814;
  double t8015;
  double t41084;
  double t41590;
  double t3674;
  double t4099;
  double t4166;
  double t41598;
  double t41600;
  double t41627;
  double t43710;
  double t43934;
  double t44169;
  double t44198;
  double t51021;
  double t51049;
  t3506 = Cos(var1[13]);
  t2692 = Cos(var1[14]);
  t2827 = Sin(var1[13]);
  t3519 = Sin(var1[14]);
  t3815 = t3506*t2692;
  t3871 = t2827*t3519;
  t3880 = t3815 + t3871;
  t3805 = Cos(var1[5]);
  t3981 = Sin(var1[12]);
  t3730 = Cos(var1[12]);
  t4029 = Sin(var1[5]);
  t3715 = Cos(var1[4]);
  t2997 = -1.*t2692*t2827;
  t3520 = t3506*t3519;
  t3626 = t2997 + t3520;
  t3664 = Sin(var1[4]);
  t3912 = t3730*t3805*t3880;
  t4036 = -1.*t3981*t3880*t4029;
  t4080 = t3912 + t4036;
  t4329 = Sin(var1[3]);
  t4249 = t3805*t3981*t3880;
  t4276 = t3730*t3880*t4029;
  t4277 = t4249 + t4276;
  t4173 = Cos(var1[3]);
  t4339 = t3715*t3626;
  t4429 = -1.*t3664*t4080;
  t4447 = t4339 + t4429;
  t5301 = t2692*t2827;
  t5338 = -1.*t3506*t3519;
  t5392 = t5301 + t5338;
  t8339 = -1.*t3730;
  t8411 = 1. + t8339;
  t15554 = -1.*t3506;
  t15739 = 1. + t15554;
  t19057 = 0.28121*t15739;
  t19071 = -1.*t2692;
  t19497 = 1. + t19071;
  t19751 = 0.50321*t19497;
  t19928 = 0.23321*t2692;
  t19980 = t19751 + t19928;
  t20276 = t3506*t19980;
  t21300 = -0.27*t2827*t3519;
  t21402 = t19057 + t20276 + t21300;
  t25737 = 0.15121*t8411;
  t26139 = t3730*t21402;
  t26187 = t25737 + t26139;
  t8439 = -0.15121*t8411;
  t8443 = -0.15121*t3730;
  t8467 = -0.15121*t3981;
  t22583 = t3981*t21402;
  t25105 = t8439 + t8443 + t8467 + t22583;
  t41266 = -1.*t3805*t3981;
  t41267 = -1.*t3730*t4029;
  t41268 = t41266 + t41267;
  t41312 = 0.28121*t2827;
  t41313 = -1.*t19980*t2827;
  t41329 = -0.27*t3506*t3519;
  t41337 = t41312 + t41313 + t41329;
  t41340 = t3805*t26187;
  t41353 = -1.*t25105*t4029;
  t41357 = t41340 + t41353;
  t25726 = t3805*t25105;
  t26197 = t26187*t4029;
  t27617 = t25726 + t26197;
  t5218 = t3880*t3664;
  t5426 = t3730*t3805*t5392;
  t5559 = -1.*t3981*t5392*t4029;
  t5709 = t5426 + t5559;
  t5810 = t3715*t5709;
  t5818 = t5218 + t5810;
  t41339 = t41337*t3664;
  t41358 = t3715*t41357;
  t41363 = t41339 + t41358;
  t41376 = t3715*t41337;
  t41411 = -1.*t3664*t41357;
  t41412 = t41376 + t41411;
  t41471 = t3805*t3981*t5392;
  t41473 = t3730*t5392*t4029;
  t41484 = t41471 + t41473;
  t7475 = t3730*t3805;
  t7814 = -1.*t3981*t4029;
  t8015 = t7475 + t7814;
  t41084 = -1.*t8015*t27617;
  t41590 = t41484*t27617;
  t3674 = t3626*t3664;
  t4099 = t3715*t4080;
  t4166 = t3674 + t4099;
  t41598 = t3715*t3880;
  t41600 = -1.*t3664*t5709;
  t41627 = t41598 + t41600;
  t43710 = -1.*t41484*t27617;
  t43934 = t4277*t27617;
  t44169 = -1.*t41337*t3880;
  t44198 = t41337*t3626;
  t51021 = t8015*t27617;
  t51049 = -1.*t4277*t27617;
  p_output1[0]=t4166;
  p_output1[1]=t4173*t4277 - 1.*t4329*t4447;
  p_output1[2]=t4277*t4329 + t4173*t4447;
  p_output1[3]=(t41084 - 1.*t3715*t41268*t41363 + t3664*t41268*t41412)*t5818 + t3715*t41268*(t41590 + t41412*t41627 + t41363*t5818);
  p_output1[4]=(t41084 - 1.*t41268*t41357)*t41484 + (t3880*t41337 + t41590 + t41357*t5709)*t8015;
  p_output1[5]=t3880*(-1.*t25105*t3730 + t26187*t3981);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t3519 - 1.*t19980*t3519 - 0.27*t2692*t3519;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3715*t41268;
  p_output1[19]=t3664*t41268*t4329 + t4173*t8015;
  p_output1[20]=-1.*t3664*t41268*t4173 + t4329*t8015;
  p_output1[21]=(t41363*t4166 + t43934 + t41412*t4447)*t5818 + t4166*(-1.*t41412*t41627 + t43710 - 1.*t41363*t5818);
  p_output1[22]=t41484*(t4080*t41357 + t43934 + t44198) + t4277*(t43710 + t44169 - 1.*t41357*t5709);
  p_output1[23]=t3880*(t26187*t3730*t3880 + t25105*t3880*t3981 + t44198) + t3626*(t44169 - 1.*t26187*t3730*t5392 - 1.*t25105*t3981*t5392);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t3880*(t21402*t3880 + t44198) + t3626*(t44169 - 1.*t21402*t5392);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5818;
  p_output1[37]=t41484*t4173 - 1.*t41627*t4329;
  p_output1[38]=t41627*t4173 + t41484*t4329;
  p_output1[39]=t4166*(t3715*t41268*t41363 - 1.*t3664*t41268*t41412 + t51021) + t3715*t41268*(-1.*t41363*t4166 - 1.*t41412*t4447 + t51049);
  p_output1[40]=t4277*(t41268*t41357 + t51021) + (-1.*t3626*t41337 - 1.*t4080*t41357 + t51049)*t8015;
  p_output1[41]=t3626*(t25105*t3730 - 1.*t26187*t3981);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t3626 - 0.15121*t5392;
  p_output1[49]=0.28121*t2692 - 1.*t19980*t2692 + 0.27*Power(t3519,2);
  p_output1[50]=-0.27;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
