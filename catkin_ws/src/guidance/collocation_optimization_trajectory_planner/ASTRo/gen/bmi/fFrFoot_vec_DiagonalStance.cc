/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:58 GMT+02:00
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
  double t1539;
  double t40593;
  double t1951;
  double t41058;
  double t50350;
  double t40746;
  double t50357;
  double t36232;
  double t51575;
  double t51577;
  double t51578;
  double t40675;
  double t51567;
  double t45512;
  double t50359;
  double t51551;
  double t38366;
  double t40702;
  double t40722;
  double t52137;
  double t52132;
  double t51586;
  double t51610;
  double t51618;
  double t51942;
  double t51969;
  double t51973;
  double t52042;
  double t52045;
  double t52050;
  double t52138;
  double t52142;
  double t52145;
  double t52168;
  double t52176;
  double t52192;
  double t52290;
  double t52292;
  double t52299;
  double t52350;
  double t52359;
  double t52367;
  double t52374;
  double t52375;
  double t52376;
  double t51569;
  double t51623;
  double t51673;
  double t52547;
  double t52548;
  double t52569;
  double t52572;
  double t52581;
  double t52601;
  double t52606;
  double t52622;
  double t52661;
  double t52662;
  double t53414;
  double t53420;
  double t53432;
  double t53455;
  double t53458;
  double t53459;
  double t52557;
  double t52562;
  double t52565;
  double t53442;
  double t53443;
  double t53469;
  double t53470;
  double t53472;
  double t53570;
  double t53581;
  double t53589;
  double t53592;
  double t53445;
  double t53463;
  double t53465;
  double t53578;
  double t53596;
  double t53598;
  double t53609;
  double t53611;
  double t53612;
  double t52039;
  double t52053;
  double t52054;
  double t53466;
  double t53643;
  double t53655;
  double t53664;
  double t53675;
  double t53909;
  double t56414;
  double t56421;
  t1539 = Cos(var1[4]);
  t40593 = Cos(var1[12]);
  t1951 = Cos(var1[5]);
  t41058 = Cos(var1[14]);
  t50350 = Sin(var1[13]);
  t40746 = Cos(var1[13]);
  t50357 = Sin(var1[14]);
  t36232 = Sin(var1[12]);
  t51575 = t41058*t50350;
  t51577 = -1.*t40746*t50357;
  t51578 = t51575 + t51577;
  t40675 = Sin(var1[5]);
  t51567 = Sin(var1[4]);
  t45512 = t40746*t41058;
  t50359 = t50350*t50357;
  t51551 = t45512 + t50359;
  t38366 = -1.*t1951*t36232;
  t40702 = -1.*t40593*t40675;
  t40722 = t38366 + t40702;
  t52137 = Cos(var1[3]);
  t52132 = Sin(var1[3]);
  t51586 = t40593*t1951*t51578;
  t51610 = -1.*t36232*t51578*t40675;
  t51618 = t51586 + t51610;
  t51942 = -1.*t41058*t50350;
  t51969 = t40746*t50357;
  t51973 = t51942 + t51969;
  t52042 = t40593*t1951*t51551;
  t52045 = -1.*t36232*t51551*t40675;
  t52050 = t52042 + t52045;
  t52138 = t40593*t1951;
  t52142 = -1.*t36232*t40675;
  t52145 = t52138 + t52142;
  t52168 = t1951*t36232*t51578;
  t52176 = t40593*t51578*t40675;
  t52192 = t52168 + t52176;
  t52290 = t1539*t51551;
  t52292 = -1.*t51567*t51618;
  t52299 = t52290 + t52292;
  t52350 = t1951*t36232*t51551;
  t52359 = t40593*t51551*t40675;
  t52367 = t52350 + t52359;
  t52374 = t1539*t51973;
  t52375 = -1.*t51567*t52050;
  t52376 = t52374 + t52375;
  t51569 = t51551*t51567;
  t51623 = t1539*t51618;
  t51673 = t51569 + t51623;
  t52547 = -1.*t40593;
  t52548 = 1. + t52547;
  t52569 = -1.*t40746;
  t52572 = 1. + t52569;
  t52581 = 0.28121*t52572;
  t52601 = -1.*t41058;
  t52606 = 1. + t52601;
  t52622 = 0.50321*t52606;
  t52661 = 0.23321*t41058;
  t52662 = t52622 + t52661;
  t53414 = t40746*t52662;
  t53420 = -0.27*t50350*t50357;
  t53432 = t52581 + t53414 + t53420;
  t53455 = 0.15121*t52548;
  t53458 = t40593*t53432;
  t53459 = t53455 + t53458;
  t52557 = -0.15121*t52548;
  t52562 = -0.15121*t40593;
  t52565 = -0.15121*t36232;
  t53442 = t36232*t53432;
  t53443 = t52557 + t52562 + t52565 + t53442;
  t53469 = 0.28121*t50350;
  t53470 = -1.*t52662*t50350;
  t53472 = -0.27*t40746*t50357;
  t53570 = t53469 + t53470 + t53472;
  t53581 = t1951*t53459;
  t53589 = -1.*t53443*t40675;
  t53592 = t53581 + t53589;
  t53445 = t1951*t53443;
  t53463 = t53459*t40675;
  t53465 = t53445 + t53463;
  t53578 = t53570*t51567;
  t53596 = t1539*t53592;
  t53598 = t53578 + t53596;
  t53609 = t1539*t53570;
  t53611 = -1.*t51567*t53592;
  t53612 = t53609 + t53611;
  t52039 = t51973*t51567;
  t52053 = t1539*t52050;
  t52054 = t52039 + t52053;
  t53466 = -1.*t52145*t53465;
  t53643 = t52192*t53465;
  t53655 = t52145*t53465;
  t53664 = -1.*t52367*t53465;
  t53675 = -1.*t52192*t53465;
  t53909 = t52367*t53465;
  t56414 = -1.*t53570*t51551;
  t56421 = t53570*t51973;
  p_output1[0]=t52054*var2[0] + t1539*t40722*var2[1] + t51673*var2[2];
  p_output1[1]=(t52137*t52367 - 1.*t52132*t52376)*var2[0] + (t40722*t51567*t52132 + t52137*t52145)*var2[1] + (t52137*t52192 - 1.*t52132*t52299)*var2[2];
  p_output1[2]=(t52132*t52367 + t52137*t52376)*var2[0] + (-1.*t40722*t51567*t52137 + t52132*t52145)*var2[1] + (t52132*t52192 + t52137*t52299)*var2[2];
  p_output1[3]=(t51673*(t53466 - 1.*t1539*t40722*t53598 + t40722*t51567*t53612) + t1539*t40722*(t51673*t53598 + t52299*t53612 + t53643))*var2[0] + (t52054*(-1.*t51673*t53598 - 1.*t52299*t53612 + t53675) + t51673*(t52054*t53598 + t52376*t53612 + t53909))*var2[1] + (t52054*(t1539*t40722*t53598 - 1.*t40722*t51567*t53612 + t53655) + t1539*t40722*(-1.*t52054*t53598 - 1.*t52376*t53612 + t53664))*var2[2];
  p_output1[4]=(t52192*(t53466 - 1.*t40722*t53592) + t52145*(t51551*t53570 + t51618*t53592 + t53643))*var2[0] + (t52367*(-1.*t51618*t53592 + t53675 + t56414) + t52192*(t52050*t53592 + t53909 + t56421))*var2[1] + (t52367*(t40722*t53592 + t53655) + t52145*(-1.*t51973*t53570 - 1.*t52050*t53592 + t53664))*var2[2];
  p_output1[5]=t51551*(-1.*t40593*t53443 + t36232*t53459)*var2[0] + (t51973*(-1.*t36232*t51578*t53443 - 1.*t40593*t51578*t53459 + t56414) + t51551*(t36232*t51551*t53443 + t40593*t51551*t53459 + t56421))*var2[1] + t51973*(t40593*t53443 - 1.*t36232*t53459)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t51973*(-1.*t51578*t53432 + t56414) + t51551*(t51551*t53432 + t56421))*var2[1] + (-0.15121*t51578 - 0.15121*t51973)*var2[2];
  p_output1[13]=(0.28121*t50357 - 0.27*t41058*t50357 - 1.*t50357*t52662)*var2[0] + (0.28121*t41058 + 0.27*Power(t50357,2) - 1.*t41058*t52662)*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
