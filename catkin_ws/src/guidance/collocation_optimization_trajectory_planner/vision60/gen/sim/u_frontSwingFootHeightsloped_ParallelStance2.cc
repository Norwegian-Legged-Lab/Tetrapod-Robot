/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:05:43 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4748;
  double t4805;
  double t15264;
  double t6525;
  double t15366;
  double t4749;
  double t4795;
  double t19479;
  double t31286;
  double t31553;
  double t31959;
  double t32490;
  double t6597;
  double t15525;
  double t15781;
  double t4798;
  double t32492;
  double t32526;
  double t32535;
  double t32719;
  double t32795;
  double t32849;
  double t32869;
  double t32931;
  double t33185;
  double t33190;
  double t33225;
  double t4802;
  double t4804;
  double t21319;
  double t31077;
  double t36858;
  double t36928;
  double t36929;
  double t33103;
  double t33183;
  double t36984;
  double t37129;
  double t37285;
  double t40542;
  double t40578;
  double t40580;
  double t34490;
  double t34513;
  double t34519;
  double t35532;
  double t35721;
  double t36688;
  double t36734;
  double t36839;
  double t36937;
  double t37877;
  double t40602;
  double t40603;
  double t40648;
  double t40681;
  double t40698;
  double t40717;
  double t40739;
  double t40746;
  double t40748;
  double t40749;
  t4748 = Cos(var1[3]);
  t4805 = Cos(var1[5]);
  t15264 = Sin(var1[3]);
  t6525 = Sin(var1[4]);
  t15366 = Sin(var1[5]);
  t4749 = Cos(var1[4]);
  t4795 = Sin(var1[12]);
  t19479 = Cos(var1[12]);
  t31286 = t4805*t15264;
  t31553 = t4748*t6525*t15366;
  t31959 = t31286 + t31553;
  t32490 = Sin(var1[13]);
  t6597 = -1.*t4748*t4805*t6525;
  t15525 = t15264*t15366;
  t15781 = t6597 + t15525;
  t4798 = Cos(var1[13]);
  t32492 = t19479*t4748*t4749;
  t32526 = -1.*t4795*t31959;
  t32535 = t32492 + t32526;
  t32719 = Sin(var1[14]);
  t32795 = -1.*t32490*t15781;
  t32849 = t4798*t32535;
  t32869 = t32795 + t32849;
  t32931 = Cos(var1[14]);
  t33185 = t4798*t15781;
  t33190 = t32490*t32535;
  t33225 = t33185 + t33190;
  t4802 = -1.*t4798;
  t4804 = 1. + t4802;
  t21319 = -1.*t19479;
  t31077 = 1. + t21319;
  t36858 = t19479*t6525;
  t36928 = t4749*t4795*t15366;
  t36929 = t36858 + t36928;
  t33103 = -1.*t32931;
  t33183 = 1. + t33103;
  t36984 = -1.*t4749*t4805*t32490;
  t37129 = t4798*t36929;
  t37285 = t36984 + t37129;
  t40542 = t4798*t4749*t4805;
  t40578 = t32490*t36929;
  t40580 = t40542 + t40578;
  t34490 = -1.*var2[0];
  t34513 = 0.325*t4804*t4749*t4805;
  t34519 = 0.1575*t4795*t6525;
  t35532 = 0.1575*t31077*t4749*t15366;
  t35721 = t4795*t6525;
  t36688 = -1.*t19479*t4749*t15366;
  t36734 = t35721 + t36688;
  t36839 = -0.2255*t36734;
  t36937 = -0.325*t32490*t36929;
  t37877 = 0.075*t32719*t37285;
  t40602 = 0.075*t33183*t40580;
  t40603 = -1.*t32719*t37285;
  t40648 = t32931*t40580;
  t40681 = t40603 + t40648;
  t40698 = 0.355*t40681;
  t40717 = t32931*t37285;
  t40739 = t32719*t40580;
  t40746 = t40717 + t40739;
  t40748 = -0.0641*t40746;
  t40749 = t34490 + var1[0] + t34513 + t34519 + t35532 + t36839 + t36937 + t37877 + t40602 + t40698 + t40748;
  p_output1[0]=-0.1575*t31077*t31959 - 0.325*t32490*t32535 + 0.075*t32719*t32869 + 0.075*t33183*t33225 - 0.0641*(t32869*t32931 + t32719*t33225) + 0.355*(-1.*t32719*t32869 + t32931*t33225) + 0.1575*t4748*t4749*t4795 - 0.2255*(t19479*t31959 + t4748*t4749*t4795) + 0.325*t15781*t4804 + var1[2] - 0.5*t40749*var3[0]*(1. + Tanh(t40749*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_frontSwingFootHeightsloped_ParallelStance2.hh"

namespace SymFunction
{

void u_frontSwingFootHeightsloped_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
