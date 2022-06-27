/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:23 GMT+02:00
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
  double t101;
  double t405;
  double t218;
  double t3077;
  double t3089;
  double t2925;
  double t3090;
  double t285;
  double t3136;
  double t3141;
  double t3820;
  double t644;
  double t3121;
  double t5245;
  double t6402;
  double t6696;
  double t382;
  double t1096;
  double t1103;
  double t8875;
  double t8610;
  double t3082;
  double t3094;
  double t3095;
  double t4634;
  double t4878;
  double t4940;
  double t7702;
  double t7984;
  double t8401;
  double t9866;
  double t10272;
  double t10420;
  double t10676;
  double t11202;
  double t11227;
  double t11278;
  double t11434;
  double t11504;
  double t11608;
  double t11613;
  double t11652;
  double t11884;
  double t13403;
  double t13441;
  double t3131;
  double t4976;
  double t4989;
  double t14864;
  double t14870;
  double t15296;
  double t16185;
  double t16192;
  double t16194;
  double t16432;
  double t16458;
  double t16459;
  double t16477;
  double t16481;
  double t16935;
  double t16938;
  double t16945;
  double t16992;
  double t17066;
  double t15951;
  double t16096;
  double t16946;
  double t16973;
  double t17116;
  double t17171;
  double t17172;
  double t17189;
  double t17198;
  double t17201;
  double t17205;
  double t16977;
  double t17104;
  double t17105;
  double t17197;
  double t17208;
  double t17213;
  double t17220;
  double t17221;
  double t17222;
  double t5172;
  double t8551;
  double t8578;
  double t17112;
  double t17240;
  double t17255;
  double t17273;
  double t17387;
  double t17405;
  double t17570;
  double t17580;
  t101 = Cos(var1[4]);
  t405 = Cos(var1[15]);
  t218 = Cos(var1[5]);
  t3077 = Cos(var1[17]);
  t3089 = Sin(var1[16]);
  t2925 = Cos(var1[16]);
  t3090 = Sin(var1[17]);
  t285 = Sin(var1[15]);
  t3136 = -1.*t3077*t3089;
  t3141 = t2925*t3090;
  t3820 = t3136 + t3141;
  t644 = Sin(var1[5]);
  t3121 = Sin(var1[4]);
  t5245 = -1.*t2925*t3077;
  t6402 = -1.*t3089*t3090;
  t6696 = t5245 + t6402;
  t382 = t218*t285;
  t1096 = t405*t644;
  t1103 = t382 + t1096;
  t8875 = Cos(var1[3]);
  t8610 = Sin(var1[3]);
  t3082 = t2925*t3077;
  t3094 = t3089*t3090;
  t3095 = t3082 + t3094;
  t4634 = t405*t218*t3820;
  t4878 = -1.*t285*t3820*t644;
  t4940 = t4634 + t4878;
  t7702 = t405*t218*t6696;
  t7984 = -1.*t285*t6696*t644;
  t8401 = t7702 + t7984;
  t9866 = -1.*t405*t218;
  t10272 = t285*t644;
  t10420 = t9866 + t10272;
  t10676 = t218*t285*t3820;
  t11202 = t405*t3820*t644;
  t11227 = t10676 + t11202;
  t11278 = t101*t3095;
  t11434 = -1.*t3121*t4940;
  t11504 = t11278 + t11434;
  t11608 = t218*t285*t6696;
  t11613 = t405*t6696*t644;
  t11652 = t11608 + t11613;
  t11884 = t101*t3820;
  t13403 = -1.*t3121*t8401;
  t13441 = t11884 + t13403;
  t3131 = t3095*t3121;
  t4976 = t101*t4940;
  t4989 = t3131 + t4976;
  t14864 = -1.*t405;
  t14870 = 1. + t14864;
  t15296 = -0.15121*t14870;
  t16185 = -1.*t2925;
  t16192 = 1. + t16185;
  t16194 = -0.28121*t16192;
  t16432 = -1.*t3077;
  t16458 = 1. + t16432;
  t16459 = -0.50321*t16458;
  t16477 = -0.19821*t3077;
  t16481 = t16459 + t16477;
  t16935 = t2925*t16481;
  t16938 = 0.305*t3089*t3090;
  t16945 = t16194 + t16935 + t16938;
  t16992 = t405*t16945;
  t17066 = t15296 + t16992;
  t15951 = -0.15121*t405;
  t16096 = 0.15121*t285;
  t16946 = t285*t16945;
  t16973 = t15296 + t15951 + t16096 + t16946;
  t17116 = 0.28121*t3089;
  t17171 = t16481*t3089;
  t17172 = -0.305*t2925*t3090;
  t17189 = t17116 + t17171 + t17172;
  t17198 = t218*t17066;
  t17201 = -1.*t16973*t644;
  t17205 = t17198 + t17201;
  t16977 = t218*t16973;
  t17104 = t17066*t644;
  t17105 = t16977 + t17104;
  t17197 = t17189*t3121;
  t17208 = t101*t17205;
  t17213 = t17197 + t17208;
  t17220 = t101*t17189;
  t17221 = -1.*t3121*t17205;
  t17222 = t17220 + t17221;
  t5172 = t3820*t3121;
  t8551 = t101*t8401;
  t8578 = t5172 + t8551;
  t17112 = -1.*t10420*t17105;
  t17240 = t11227*t17105;
  t17255 = t10420*t17105;
  t17273 = -1.*t11652*t17105;
  t17387 = -1.*t11227*t17105;
  t17405 = t11652*t17105;
  t17570 = -1.*t17189*t3095;
  t17580 = t17189*t3820;
  p_output1[0]=t8578*var2[0] + t101*t1103*var2[1] + t4989*var2[2];
  p_output1[1]=(-1.*t13441*t8610 + t11652*t8875)*var2[0] + (t1103*t3121*t8610 + t10420*t8875)*var2[1] + (-1.*t11504*t8610 + t11227*t8875)*var2[2];
  p_output1[2]=(t11652*t8610 + t13441*t8875)*var2[0] + (t10420*t8610 - 1.*t1103*t3121*t8875)*var2[1] + (t11227*t8610 + t11504*t8875)*var2[2];
  p_output1[3]=((t17112 - 1.*t101*t1103*t17213 + t1103*t17222*t3121)*t4989 + t101*t1103*(t11504*t17222 + t17240 + t17213*t4989))*var2[0] + ((-1.*t11504*t17222 + t17387 - 1.*t17213*t4989)*t8578 + t4989*(t13441*t17222 + t17405 + t17213*t8578))*var2[1] + ((t101*t1103*t17213 + t17255 - 1.*t1103*t17222*t3121)*t8578 + t101*t1103*(-1.*t13441*t17222 + t17273 - 1.*t17213*t8578))*var2[2];
  p_output1[4]=(t11227*(t17112 - 1.*t1103*t17205) + t10420*(t17240 + t17189*t3095 + t17205*t4940))*var2[0] + (t11652*(t17387 + t17570 - 1.*t17205*t4940) + t11227*(t17405 + t17580 + t17205*t8401))*var2[1] + (t11652*(t1103*t17205 + t17255) + t10420*(t17273 - 1.*t17189*t3820 - 1.*t17205*t8401))*var2[2];
  p_output1[5]=t3095*(-1.*t17066*t285 + t16973*t405)*var2[0] + (t3820*(t17570 - 1.*t16973*t285*t3820 - 1.*t17066*t3820*t405) + t3095*(t17580 + t16973*t285*t6696 + t17066*t405*t6696))*var2[1] + t3820*(t17066*t285 - 1.*t16973*t405)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t3095 - 0.15121*t6696)*var2[0] + (-0.15121 + t3820*(t17570 - 1.*t16945*t3820) + t3095*(t17580 + t16945*t6696))*var2[1];
  p_output1[16]=(0.28121*t3090 + t16481*t3090 - 0.305*t3077*t3090)*var2[0] + (0.28121*t3077 + t16481*t3077 + 0.305*Power(t3090,2))*var2[2];
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

#include "fRrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
