/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:53:01 GMT+02:00
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
  double t1494;
  double t12723;
  double t3541;
  double t27362;
  double t28302;
  double t27324;
  double t28495;
  double t4297;
  double t35060;
  double t35582;
  double t35633;
  double t27216;
  double t33812;
  double t37505;
  double t37748;
  double t40982;
  double t5557;
  double t27218;
  double t27219;
  double t44360;
  double t43683;
  double t28017;
  double t28526;
  double t28556;
  double t35955;
  double t36088;
  double t36099;
  double t41032;
  double t41067;
  double t42896;
  double t44471;
  double t45098;
  double t45241;
  double t45760;
  double t45766;
  double t45780;
  double t54333;
  double t54347;
  double t54797;
  double t55218;
  double t55228;
  double t55229;
  double t55238;
  double t55239;
  double t55240;
  double t33958;
  double t37135;
  double t37374;
  double t55274;
  double t55275;
  double t55316;
  double t55320;
  double t55321;
  double t55322;
  double t55324;
  double t55325;
  double t55326;
  double t55327;
  double t55328;
  double t55329;
  double t55331;
  double t55336;
  double t55337;
  double t55338;
  double t55276;
  double t55277;
  double t55278;
  double t55332;
  double t55333;
  double t55343;
  double t55344;
  double t55345;
  double t55346;
  double t55349;
  double t55350;
  double t55351;
  double t55334;
  double t55339;
  double t55340;
  double t55348;
  double t55352;
  double t55353;
  double t55355;
  double t55356;
  double t55357;
  double t37501;
  double t43406;
  double t43421;
  double t55341;
  double t55362;
  double t55369;
  double t55375;
  double t55383;
  double t55388;
  double t55415;
  double t55419;
  t1494 = Cos(var1[4]);
  t12723 = Cos(var1[9]);
  t3541 = Cos(var1[5]);
  t27362 = Cos(var1[11]);
  t28302 = Sin(var1[10]);
  t27324 = Cos(var1[10]);
  t28495 = Sin(var1[11]);
  t4297 = Sin(var1[9]);
  t35060 = -1.*t27362*t28302;
  t35582 = t27324*t28495;
  t35633 = t35060 + t35582;
  t27216 = Sin(var1[5]);
  t33812 = Sin(var1[4]);
  t37505 = -1.*t27324*t27362;
  t37748 = -1.*t28302*t28495;
  t40982 = t37505 + t37748;
  t5557 = t3541*t4297;
  t27218 = t12723*t27216;
  t27219 = t5557 + t27218;
  t44360 = Cos(var1[3]);
  t43683 = Sin(var1[3]);
  t28017 = t27324*t27362;
  t28526 = t28302*t28495;
  t28556 = t28017 + t28526;
  t35955 = t12723*t3541*t35633;
  t36088 = -1.*t4297*t35633*t27216;
  t36099 = t35955 + t36088;
  t41032 = t12723*t3541*t40982;
  t41067 = -1.*t4297*t40982*t27216;
  t42896 = t41032 + t41067;
  t44471 = -1.*t12723*t3541;
  t45098 = t4297*t27216;
  t45241 = t44471 + t45098;
  t45760 = t3541*t4297*t35633;
  t45766 = t12723*t35633*t27216;
  t45780 = t45760 + t45766;
  t54333 = t1494*t28556;
  t54347 = -1.*t33812*t36099;
  t54797 = t54333 + t54347;
  t55218 = t3541*t4297*t40982;
  t55228 = t12723*t40982*t27216;
  t55229 = t55218 + t55228;
  t55238 = t1494*t35633;
  t55239 = -1.*t33812*t42896;
  t55240 = t55238 + t55239;
  t33958 = t28556*t33812;
  t37135 = t1494*t36099;
  t37374 = t33958 + t37135;
  t55274 = -1.*t12723;
  t55275 = 1. + t55274;
  t55316 = -1.*t27324;
  t55320 = 1. + t55316;
  t55321 = -0.28121*t55320;
  t55322 = -1.*t27362;
  t55324 = 1. + t55322;
  t55325 = -0.50321*t55324;
  t55326 = -0.23321*t27362;
  t55327 = t55325 + t55326;
  t55328 = t27324*t55327;
  t55329 = 0.27*t28302*t28495;
  t55331 = t55321 + t55328 + t55329;
  t55336 = -0.15121*t55275;
  t55337 = t12723*t55331;
  t55338 = t55336 + t55337;
  t55276 = 0.15121*t55275;
  t55277 = 0.15121*t12723;
  t55278 = 0.15121*t4297;
  t55332 = t4297*t55331;
  t55333 = t55276 + t55277 + t55278 + t55332;
  t55343 = 0.28121*t28302;
  t55344 = t55327*t28302;
  t55345 = -0.27*t27324*t28495;
  t55346 = t55343 + t55344 + t55345;
  t55349 = t3541*t55338;
  t55350 = -1.*t55333*t27216;
  t55351 = t55349 + t55350;
  t55334 = t3541*t55333;
  t55339 = t55338*t27216;
  t55340 = t55334 + t55339;
  t55348 = t55346*t33812;
  t55352 = t1494*t55351;
  t55353 = t55348 + t55352;
  t55355 = t1494*t55346;
  t55356 = -1.*t33812*t55351;
  t55357 = t55355 + t55356;
  t37501 = t35633*t33812;
  t43406 = t1494*t42896;
  t43421 = t37501 + t43406;
  t55341 = -1.*t45241*t55340;
  t55362 = t45780*t55340;
  t55369 = t45241*t55340;
  t55375 = -1.*t55229*t55340;
  t55383 = -1.*t45780*t55340;
  t55388 = t55229*t55340;
  t55415 = -1.*t55346*t28556;
  t55419 = t55346*t35633;
  p_output1[0]=t43421*var2[0] + t1494*t27219*var2[1] + t37374*var2[2];
  p_output1[1]=(t44360*t55229 - 1.*t43683*t55240)*var2[0] + (t27219*t33812*t43683 + t44360*t45241)*var2[1] + (t44360*t45780 - 1.*t43683*t54797)*var2[2];
  p_output1[2]=(t43683*t55229 + t44360*t55240)*var2[0] + (-1.*t27219*t33812*t44360 + t43683*t45241)*var2[1] + (t43683*t45780 + t44360*t54797)*var2[2];
  p_output1[3]=(t37374*(t55341 - 1.*t1494*t27219*t55353 + t27219*t33812*t55357) + t1494*t27219*(t37374*t55353 + t54797*t55357 + t55362))*var2[0] + (t43421*(-1.*t37374*t55353 - 1.*t54797*t55357 + t55383) + t37374*(t43421*t55353 + t55240*t55357 + t55388))*var2[1] + (t43421*(t1494*t27219*t55353 - 1.*t27219*t33812*t55357 + t55369) + t1494*t27219*(-1.*t43421*t55353 - 1.*t55240*t55357 + t55375))*var2[2];
  p_output1[4]=(t45780*(t55341 - 1.*t27219*t55351) + t45241*(t28556*t55346 + t36099*t55351 + t55362))*var2[0] + (t55229*(-1.*t36099*t55351 + t55383 + t55415) + t45780*(t42896*t55351 + t55388 + t55419))*var2[1] + (t55229*(t27219*t55351 + t55369) + t45241*(-1.*t35633*t55346 - 1.*t42896*t55351 + t55375))*var2[2];
  p_output1[5]=t28556*(t12723*t55333 - 1.*t4297*t55338)*var2[0] + (t35633*(-1.*t35633*t4297*t55333 - 1.*t12723*t35633*t55338 + t55415) + t28556*(t40982*t4297*t55333 + t12723*t40982*t55338 + t55419))*var2[1] + t35633*(-1.*t12723*t55333 + t4297*t55338)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t28556 + 0.15121*t40982)*var2[0] + (-0.15121 + t35633*(-1.*t35633*t55331 + t55415) + t28556*(t40982*t55331 + t55419))*var2[1];
  p_output1[10]=(0.28121*t28495 - 0.27*t27362*t28495 + t28495*t55327)*var2[0] + (0.28121*t27362 + 0.27*Power(t28495,2) + t27362*t55327)*var2[2];
  p_output1[11]=-0.27*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
