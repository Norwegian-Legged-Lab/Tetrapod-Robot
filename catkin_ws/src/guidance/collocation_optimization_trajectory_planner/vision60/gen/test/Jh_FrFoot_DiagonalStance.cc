/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:11 GMT+02:00
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
  double t7588;
  double t3727;
  double t6454;
  double t7801;
  double t6998;
  double t7891;
  double t8484;
  double t17782;
  double t8663;
  double t2170;
  double t12116;
  double t17813;
  double t17711;
  double t17747;
  double t17772;
  double t13562;
  double t17776;
  double t17887;
  double t17981;
  double t21170;
  double t24704;
  double t18018;
  double t18043;
  double t18315;
  double t18415;
  double t18420;
  double t18431;
  double t22626;
  double t24548;
  double t24681;
  double t24720;
  double t24731;
  double t26420;
  double t26427;
  double t26428;
  double t26432;
  double t26448;
  double t26449;
  double t26450;
  double t26470;
  double t26657;
  double t26665;
  double t18007;
  double t18433;
  double t18468;
  double t26685;
  double t26686;
  double t26687;
  double t26689;
  double t26690;
  double t26691;
  double t26692;
  double t26693;
  double t26695;
  double t17994;
  double t17997;
  double t18006;
  double t26684;
  double t26688;
  double t26696;
  double t26697;
  double t26701;
  double t26702;
  double t26852;
  double t26855;
  double t26856;
  double t26857;
  double t26679;
  double t26680;
  double t26681;
  double t26682;
  double t26698;
  double t26699;
  double t26869;
  double t26870;
  double t26871;
  double t26874;
  double t26875;
  double t26876;
  double t26700;
  double t26865;
  double t26867;
  double t26872;
  double t26877;
  double t26878;
  double t26880;
  double t26881;
  double t26882;
  double t11153;
  double t17988;
  double t17989;
  double t26868;
  double t26891;
  double t26900;
  double t26910;
  double t26922;
  double t26932;
  double t26941;
  double t26948;
  double t27145;
  double t27138;
  double t27150;
  double t27159;
  double t27188;
  double t27179;
  t7588 = Cos(var1[13]);
  t3727 = Cos(var1[14]);
  t6454 = Sin(var1[13]);
  t7801 = Sin(var1[14]);
  t6998 = t3727*t6454;
  t7891 = -1.*t7588*t7801;
  t8484 = t6998 + t7891;
  t17782 = Sin(var1[12]);
  t8663 = Sin(var1[4]);
  t2170 = Cos(var1[12]);
  t12116 = Cos(var1[4]);
  t17813 = Sin(var1[5]);
  t17711 = t7588*t3727;
  t17747 = t6454*t7801;
  t17772 = t17711 + t17747;
  t13562 = Cos(var1[5]);
  t17776 = t13562*t17772;
  t17887 = t17782*t8484*t17813;
  t17981 = t17776 + t17887;
  t21170 = Cos(var1[3]);
  t24704 = Sin(var1[3]);
  t18018 = -1.*t3727*t6454;
  t18043 = t7588*t7801;
  t18315 = t18018 + t18043;
  t18415 = t13562*t18315;
  t18420 = t17782*t17772*t17813;
  t18431 = t18415 + t18420;
  t22626 = -1.*t13562*t17782*t8484;
  t24548 = t17772*t17813;
  t24681 = t22626 + t24548;
  t24720 = t2170*t12116*t8484;
  t24731 = -1.*t8663*t17981;
  t26420 = t24720 + t24731;
  t26427 = t12116*t17782;
  t26428 = t2170*t8663*t17813;
  t26432 = t26427 + t26428;
  t26448 = -1.*t13562*t17782*t17772;
  t26449 = t18315*t17813;
  t26450 = t26448 + t26449;
  t26470 = t2170*t12116*t17772;
  t26657 = -1.*t8663*t18431;
  t26665 = t26470 + t26657;
  t18007 = t2170*t17772*t8663;
  t18433 = t12116*t18431;
  t18468 = t18007 + t18433;
  t26685 = -0.0641*t3727;
  t26686 = -0.28*t7801;
  t26687 = t26685 + t26686;
  t26689 = -1.*t3727;
  t26690 = 1. + t26689;
  t26691 = 0.075*t26690;
  t26692 = 0.355*t3727;
  t26693 = -0.0641*t7801;
  t26695 = t26691 + t26692 + t26693;
  t17994 = t17782*t8663;
  t17997 = -1.*t2170*t12116*t17813;
  t18006 = t17994 + t17997;
  t26684 = -0.325*t6454;
  t26688 = t7588*t26687;
  t26696 = t6454*t26695;
  t26697 = t26684 + t26688 + t26696;
  t26701 = -1.*t7588;
  t26702 = 1. + t26701;
  t26852 = 0.325*t26702;
  t26855 = -1.*t6454*t26687;
  t26856 = t7588*t26695;
  t26857 = t26852 + t26855 + t26856;
  t26679 = -1.*t2170;
  t26680 = 1. + t26679;
  t26681 = -0.1575*t26680;
  t26682 = -0.2255*t2170;
  t26698 = -1.*t17782*t26697;
  t26699 = t26681 + t26682 + t26698;
  t26869 = -0.068*t17782;
  t26870 = t2170*t26697;
  t26871 = t26869 + t26870;
  t26874 = t13562*t26857;
  t26875 = -1.*t26699*t17813;
  t26876 = t26874 + t26875;
  t26700 = t13562*t26699;
  t26865 = t26857*t17813;
  t26867 = t26700 + t26865;
  t26872 = t26871*t8663;
  t26877 = t12116*t26876;
  t26878 = t26872 + t26877;
  t26880 = t12116*t26871;
  t26881 = -1.*t8663*t26876;
  t26882 = t26880 + t26881;
  t11153 = t2170*t8484*t8663;
  t17988 = t12116*t17981;
  t17989 = t11153 + t17988;
  t26868 = -1.*t2170*t13562*t26867;
  t26891 = t26867*t26450;
  t26900 = t26867*t24681;
  t26910 = -1.*t26867*t26450;
  t26922 = t2170*t13562*t26867;
  t26932 = -1.*t26867*t24681;
  t26941 = -1.*t17782*t26871;
  t26948 = t2170*t26871*t17772;
  t27145 = -1.*t2170*t26871*t17772;
  t27138 = t2170*t26871*t8484;
  t27150 = t17782*t26871;
  t27159 = -1.*t2170*t26871*t8484;
  t27188 = t26857*t17772;
  t27179 = -1.*t26857*t18315;
  p_output1[0]=t17989;
  p_output1[1]=t18006;
  p_output1[2]=t18468;
  p_output1[3]=t21170*t24681 - 1.*t24704*t26420;
  p_output1[4]=t13562*t21170*t2170 - 1.*t24704*t26432;
  p_output1[5]=t21170*t26450 - 1.*t24704*t26665;
  p_output1[6]=t24681*t24704 + t21170*t26420;
  p_output1[7]=t13562*t2170*t24704 + t21170*t26432;
  p_output1[8]=t24704*t26450 + t21170*t26665;
  p_output1[9]=t18468*(t26868 - 1.*t18006*t26878 - 1.*t26432*t26882) + t18006*(t18468*t26878 + t26665*t26882 + t26891);
  p_output1[10]=t18468*(t17989*t26878 + t26420*t26882 + t26900) + t17989*(-1.*t18468*t26878 - 1.*t26665*t26882 + t26910);
  p_output1[11]=t17989*(t18006*t26878 + t26432*t26882 + t26922) + t18006*(-1.*t17989*t26878 - 1.*t26420*t26882 + t26932);
  p_output1[12]=t26450*(t26868 + t17813*t2170*t26876 + t26941) + t13562*t2170*(t18431*t26876 + t26891 + t26948);
  p_output1[13]=t26450*(t17981*t26876 + t26900 + t27138) + t24681*(-1.*t18431*t26876 + t26910 + t27145);
  p_output1[14]=t24681*(-1.*t17813*t2170*t26876 + t26922 + t27150) + t13562*t2170*(-1.*t17981*t26876 + t26932 + t27159);
  p_output1[15]=t17772*t2170*(-1.*t2170*t26699 + t26941) + t17782*(-1.*t17772*t17782*t26699 + t18315*t26857 + t26948);
  p_output1[16]=t2170*(t17772*t17782*t26699 + t27145 + t27179)*t8484 + t17772*t2170*(t27138 + t27188 - 1.*t17782*t26699*t8484);
  p_output1[17]=t2170*(t2170*t26699 + t27150)*t8484 + t17782*(-1.*t17772*t26857 + t27159 + t17782*t26699*t8484);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.2255*t18315 + 0.1575*t8484;
  p_output1[37]=t17772*(-1.*t17772*t26697 + t27179) + t18315*(t27188 + t26697*t8484);
  p_output1[38]=-0.068*t17772;
  p_output1[39]=-1.*t26687*t3727 + 0.325*t7801 - 1.*t26695*t7801;
  p_output1[40]=0;
  p_output1[41]=-0.325*t3727 + t26695*t3727 - 1.*t26687*t7801;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
