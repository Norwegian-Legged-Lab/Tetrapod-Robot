/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:55 GMT+02:00
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
  double t33351;
  double t24736;
  double t45555;
  double t50942;
  double t46340;
  double t46369;
  double t50946;
  double t5594;
  double t49505;
  double t50948;
  double t51000;
  double t46102;
  double t51081;
  double t51089;
  double t51094;
  double t51080;
  double t51327;
  double t51409;
  double t51099;
  double t51100;
  double t51109;
  double t51222;
  double t51232;
  double t51242;
  double t51255;
  double t51261;
  double t51290;
  double t51412;
  double t51457;
  double t51463;
  double t51697;
  double t51973;
  double t52111;
  double t52128;
  double t52150;
  double t52228;
  double t52522;
  double t52538;
  double t52541;
  double t53036;
  double t53041;
  double t53043;
  double t51062;
  double t51113;
  double t51122;
  double t53322;
  double t53330;
  double t53338;
  double t53493;
  double t53574;
  double t53596;
  double t53604;
  double t53605;
  double t53606;
  double t33343;
  double t46324;
  double t46325;
  double t53320;
  double t53339;
  double t53611;
  double t53620;
  double t53723;
  double t53783;
  double t53795;
  double t53804;
  double t53945;
  double t53992;
  double t53208;
  double t53277;
  double t53279;
  double t53318;
  double t53633;
  double t53644;
  double t54102;
  double t55749;
  double t55855;
  double t55960;
  double t56035;
  double t56069;
  double t53652;
  double t54060;
  double t54069;
  double t55941;
  double t56105;
  double t56114;
  double t56134;
  double t56135;
  double t56136;
  double t51151;
  double t51294;
  double t51304;
  double t54095;
  double t56325;
  double t56365;
  double t56384;
  double t56454;
  double t56477;
  double t56660;
  double t56712;
  double t56502;
  double t56507;
  double t56613;
  double t56567;
  double t59215;
  double t59055;
  t33351 = Cos(var1[12]);
  t24736 = Sin(var1[4]);
  t45555 = Cos(var1[4]);
  t50942 = Cos(var1[13]);
  t46340 = Cos(var1[14]);
  t46369 = Sin(var1[13]);
  t50946 = Sin(var1[14]);
  t5594 = Sin(var1[12]);
  t49505 = t46340*t46369;
  t50948 = -1.*t50942*t50946;
  t51000 = t49505 + t50948;
  t46102 = Sin(var1[5]);
  t51081 = t50942*t46340;
  t51089 = t46369*t50946;
  t51094 = t51081 + t51089;
  t51080 = Cos(var1[5]);
  t51327 = Cos(var1[3]);
  t51409 = Sin(var1[3]);
  t51099 = t51080*t51094;
  t51100 = t5594*t51000*t46102;
  t51109 = t51099 + t51100;
  t51222 = -1.*t46340*t46369;
  t51232 = t50942*t50946;
  t51242 = t51222 + t51232;
  t51255 = t51080*t51242;
  t51261 = t5594*t51094*t46102;
  t51290 = t51255 + t51261;
  t51412 = t45555*t5594;
  t51457 = t33351*t24736*t46102;
  t51463 = t51412 + t51457;
  t51697 = -1.*t51080*t5594*t51000;
  t51973 = t51094*t46102;
  t52111 = t51697 + t51973;
  t52128 = t33351*t45555*t51000;
  t52150 = -1.*t24736*t51109;
  t52228 = t52128 + t52150;
  t52522 = -1.*t51080*t5594*t51094;
  t52538 = t51242*t46102;
  t52541 = t52522 + t52538;
  t53036 = t33351*t45555*t51094;
  t53041 = -1.*t24736*t51290;
  t53043 = t53036 + t53041;
  t51062 = t33351*t51000*t24736;
  t51113 = t45555*t51109;
  t51122 = t51062 + t51113;
  t53322 = -0.0641*t46340;
  t53330 = -0.28*t50946;
  t53338 = t53322 + t53330;
  t53493 = -1.*t46340;
  t53574 = 1. + t53493;
  t53596 = 0.075*t53574;
  t53604 = 0.355*t46340;
  t53605 = -0.0641*t50946;
  t53606 = t53596 + t53604 + t53605;
  t33343 = t5594*t24736;
  t46324 = -1.*t33351*t45555*t46102;
  t46325 = t33343 + t46324;
  t53320 = -0.325*t46369;
  t53339 = t50942*t53338;
  t53611 = t46369*t53606;
  t53620 = t53320 + t53339 + t53611;
  t53723 = -1.*t50942;
  t53783 = 1. + t53723;
  t53795 = 0.325*t53783;
  t53804 = -1.*t46369*t53338;
  t53945 = t50942*t53606;
  t53992 = t53795 + t53804 + t53945;
  t53208 = -1.*t33351;
  t53277 = 1. + t53208;
  t53279 = -0.1575*t53277;
  t53318 = -0.2255*t33351;
  t53633 = -1.*t5594*t53620;
  t53644 = t53279 + t53318 + t53633;
  t54102 = -0.068*t5594;
  t55749 = t33351*t53620;
  t55855 = t54102 + t55749;
  t55960 = t51080*t53992;
  t56035 = -1.*t53644*t46102;
  t56069 = t55960 + t56035;
  t53652 = t51080*t53644;
  t54060 = t53992*t46102;
  t54069 = t53652 + t54060;
  t55941 = t55855*t24736;
  t56105 = t45555*t56069;
  t56114 = t55941 + t56105;
  t56134 = t45555*t55855;
  t56135 = -1.*t24736*t56069;
  t56136 = t56134 + t56135;
  t51151 = t33351*t51094*t24736;
  t51294 = t45555*t51290;
  t51304 = t51151 + t51294;
  t54095 = t33351*t51080*t54069;
  t56325 = -1.*t54069*t52111;
  t56365 = t54069*t52111;
  t56384 = -1.*t54069*t52541;
  t56454 = -1.*t33351*t51080*t54069;
  t56477 = t54069*t52541;
  t56660 = -1.*t5594*t55855;
  t56712 = t33351*t55855*t51094;
  t56502 = t5594*t55855;
  t56507 = -1.*t33351*t55855*t51000;
  t56613 = -1.*t33351*t55855*t51094;
  t56567 = t33351*t55855*t51000;
  t59215 = t53992*t51094;
  t59055 = -1.*t53992*t51242;
  p_output1[0]=t51122*var2[0] + t46325*var2[1] + t51304*var2[2];
  p_output1[1]=(t51327*t52111 - 1.*t51409*t52228)*var2[0] + (t33351*t51080*t51327 - 1.*t51409*t51463)*var2[1] + (t51327*t52541 - 1.*t51409*t53043)*var2[2];
  p_output1[2]=(t51409*t52111 + t51327*t52228)*var2[0] + (t33351*t51080*t51409 + t51327*t51463)*var2[1] + (t51409*t52541 + t51327*t53043)*var2[2];
  p_output1[3]=(t51304*(-1.*t46325*t56114 - 1.*t51463*t56136 + t56454) + t46325*(t51304*t56114 + t53043*t56136 + t56477))*var2[0] + (t51304*(t51122*t56114 + t52228*t56136 + t56365) + t51122*(-1.*t51304*t56114 - 1.*t53043*t56136 + t56384))*var2[1] + (t51122*(t54095 + t46325*t56114 + t51463*t56136) + t46325*(-1.*t51122*t56114 - 1.*t52228*t56136 + t56325))*var2[2];
  p_output1[4]=(t52541*(t33351*t46102*t56069 + t56454 + t56660) + t33351*t51080*(t51290*t56069 + t56477 + t56712))*var2[0] + (t52541*(t51109*t56069 + t56365 + t56567) + t52111*(-1.*t51290*t56069 + t56384 + t56613))*var2[1] + (t52111*(t54095 - 1.*t33351*t46102*t56069 + t56502) + t33351*t51080*(-1.*t51109*t56069 + t56325 + t56507))*var2[2];
  p_output1[5]=(t33351*t51094*(-1.*t33351*t53644 + t56660) + t5594*(t51242*t53992 - 1.*t51094*t53644*t5594 + t56712))*var2[0] + (t33351*t51000*(t51094*t53644*t5594 + t56613 + t59055) + t33351*t51094*(-1.*t51000*t53644*t5594 + t56567 + t59215))*var2[1] + (t33351*t51000*(t33351*t53644 + t56502) + t5594*(-1.*t51094*t53992 + t51000*t53644*t5594 + t56507))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t51000 + 0.2255*t51242)*var2[0] + (t51094*(-1.*t51094*t53620 + t59055) + t51242*(t51000*t53620 + t59215))*var2[1] - 0.068*t51094*var2[2];
  p_output1[13]=(0.325*t50946 - 1.*t46340*t53338 - 1.*t50946*t53606)*var2[0] + (-0.325*t46340 - 1.*t50946*t53338 + t46340*t53606)*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
