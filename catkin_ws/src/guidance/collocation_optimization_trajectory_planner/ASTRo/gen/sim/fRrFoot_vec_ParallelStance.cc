/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:25 GMT+02:00
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
  double t3688;
  double t7092;
  double t6356;
  double t9054;
  double t9078;
  double t8845;
  double t9424;
  double t6835;
  double t10173;
  double t10208;
  double t10650;
  double t7142;
  double t10038;
  double t11296;
  double t11316;
  double t11357;
  double t6921;
  double t8297;
  double t8676;
  double t14694;
  double t14684;
  double t9075;
  double t9968;
  double t10012;
  double t11079;
  double t11114;
  double t11198;
  double t11857;
  double t14606;
  double t14613;
  double t14695;
  double t14718;
  double t14722;
  double t14749;
  double t14758;
  double t14768;
  double t14779;
  double t14793;
  double t14805;
  double t14837;
  double t14844;
  double t14854;
  double t14863;
  double t14864;
  double t14865;
  double t10044;
  double t11235;
  double t11255;
  double t14957;
  double t14958;
  double t14959;
  double t14965;
  double t14966;
  double t14967;
  double t14971;
  double t14975;
  double t14976;
  double t14977;
  double t14978;
  double t14981;
  double t14986;
  double t14987;
  double t15002;
  double t15003;
  double t14962;
  double t14963;
  double t14989;
  double t14996;
  double t15014;
  double t15018;
  double t15019;
  double t15020;
  double t15026;
  double t15027;
  double t15031;
  double t15001;
  double t15005;
  double t15006;
  double t15024;
  double t15033;
  double t15034;
  double t15038;
  double t15040;
  double t15041;
  double t11291;
  double t14646;
  double t14647;
  double t15008;
  double t15058;
  double t15106;
  double t15122;
  double t15165;
  double t15180;
  double t15348;
  double t15361;
  t3688 = Cos(var1[4]);
  t7092 = Cos(var1[15]);
  t6356 = Cos(var1[5]);
  t9054 = Cos(var1[17]);
  t9078 = Sin(var1[16]);
  t8845 = Cos(var1[16]);
  t9424 = Sin(var1[17]);
  t6835 = Sin(var1[15]);
  t10173 = -1.*t9054*t9078;
  t10208 = t8845*t9424;
  t10650 = t10173 + t10208;
  t7142 = Sin(var1[5]);
  t10038 = Sin(var1[4]);
  t11296 = -1.*t8845*t9054;
  t11316 = -1.*t9078*t9424;
  t11357 = t11296 + t11316;
  t6921 = t6356*t6835;
  t8297 = t7092*t7142;
  t8676 = t6921 + t8297;
  t14694 = Cos(var1[3]);
  t14684 = Sin(var1[3]);
  t9075 = t8845*t9054;
  t9968 = t9078*t9424;
  t10012 = t9075 + t9968;
  t11079 = t7092*t6356*t10650;
  t11114 = -1.*t6835*t10650*t7142;
  t11198 = t11079 + t11114;
  t11857 = t7092*t6356*t11357;
  t14606 = -1.*t6835*t11357*t7142;
  t14613 = t11857 + t14606;
  t14695 = -1.*t7092*t6356;
  t14718 = t6835*t7142;
  t14722 = t14695 + t14718;
  t14749 = t6356*t6835*t10650;
  t14758 = t7092*t10650*t7142;
  t14768 = t14749 + t14758;
  t14779 = t3688*t10012;
  t14793 = -1.*t10038*t11198;
  t14805 = t14779 + t14793;
  t14837 = t6356*t6835*t11357;
  t14844 = t7092*t11357*t7142;
  t14854 = t14837 + t14844;
  t14863 = t3688*t10650;
  t14864 = -1.*t10038*t14613;
  t14865 = t14863 + t14864;
  t10044 = t10012*t10038;
  t11235 = t3688*t11198;
  t11255 = t10044 + t11235;
  t14957 = -1.*t7092;
  t14958 = 1. + t14957;
  t14959 = -0.15121*t14958;
  t14965 = -1.*t8845;
  t14966 = 1. + t14965;
  t14967 = -0.28121*t14966;
  t14971 = -1.*t9054;
  t14975 = 1. + t14971;
  t14976 = -0.50321*t14975;
  t14977 = -0.19821*t9054;
  t14978 = t14976 + t14977;
  t14981 = t8845*t14978;
  t14986 = 0.305*t9078*t9424;
  t14987 = t14967 + t14981 + t14986;
  t15002 = t7092*t14987;
  t15003 = t14959 + t15002;
  t14962 = -0.15121*t7092;
  t14963 = 0.15121*t6835;
  t14989 = t6835*t14987;
  t14996 = t14959 + t14962 + t14963 + t14989;
  t15014 = 0.28121*t9078;
  t15018 = t14978*t9078;
  t15019 = -0.305*t8845*t9424;
  t15020 = t15014 + t15018 + t15019;
  t15026 = t6356*t15003;
  t15027 = -1.*t14996*t7142;
  t15031 = t15026 + t15027;
  t15001 = t6356*t14996;
  t15005 = t15003*t7142;
  t15006 = t15001 + t15005;
  t15024 = t15020*t10038;
  t15033 = t3688*t15031;
  t15034 = t15024 + t15033;
  t15038 = t3688*t15020;
  t15040 = -1.*t10038*t15031;
  t15041 = t15038 + t15040;
  t11291 = t10650*t10038;
  t14646 = t3688*t14613;
  t14647 = t11291 + t14646;
  t15008 = -1.*t14722*t15006;
  t15058 = t14768*t15006;
  t15106 = t14722*t15006;
  t15122 = -1.*t14854*t15006;
  t15165 = -1.*t14768*t15006;
  t15180 = t14854*t15006;
  t15348 = -1.*t15020*t10012;
  t15361 = t15020*t10650;
  p_output1[0]=t14647*var2[0] + t3688*t8676*var2[1] + t11255*var2[2];
  p_output1[1]=(t14694*t14854 - 1.*t14684*t14865)*var2[0] + (t14694*t14722 + t10038*t14684*t8676)*var2[1] + (t14694*t14768 - 1.*t14684*t14805)*var2[2];
  p_output1[2]=(t14684*t14854 + t14694*t14865)*var2[0] + (t14684*t14722 - 1.*t10038*t14694*t8676)*var2[1] + (t14684*t14768 + t14694*t14805)*var2[2];
  p_output1[3]=((t11255*t15034 + t14805*t15041 + t15058)*t3688*t8676 + t11255*(t15008 + t10038*t15041*t8676 - 1.*t15034*t3688*t8676))*var2[0] + (t14647*(-1.*t11255*t15034 - 1.*t14805*t15041 + t15165) + t11255*(t14647*t15034 + t14865*t15041 + t15180))*var2[1] + ((-1.*t14647*t15034 - 1.*t14865*t15041 + t15122)*t3688*t8676 + t14647*(t15106 - 1.*t10038*t15041*t8676 + t15034*t3688*t8676))*var2[2];
  p_output1[4]=(t14722*(t10012*t15020 + t11198*t15031 + t15058) + t14768*(t15008 - 1.*t15031*t8676))*var2[0] + (t14854*(-1.*t11198*t15031 + t15165 + t15348) + t14768*(t14613*t15031 + t15180 + t15361))*var2[1] + (t14722*(-1.*t10650*t15020 - 1.*t14613*t15031 + t15122) + t14854*(t15106 + t15031*t8676))*var2[2];
  p_output1[5]=t10012*(-1.*t15003*t6835 + t14996*t7092)*var2[0] + (t10650*(t15348 - 1.*t10650*t14996*t6835 - 1.*t10650*t15003*t7092) + t10012*(t15361 + t11357*t14996*t6835 + t11357*t15003*t7092))*var2[1] + t10650*(t15003*t6835 - 1.*t14996*t7092)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t10012 - 0.15121*t11357)*var2[0] + (-0.15121 + t10650*(-1.*t10650*t14987 + t15348) + t10012*(t11357*t14987 + t15361))*var2[1];
  p_output1[16]=(0.28121*t9424 + t14978*t9424 - 0.305*t9054*t9424)*var2[0] + (0.28121*t9054 + t14978*t9054 + 0.305*Power(t9424,2))*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
