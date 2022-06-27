/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:11 GMT+02:00
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
  double t3772;
  double t3819;
  double t3803;
  double t3842;
  double t3847;
  double t3841;
  double t3851;
  double t3816;
  double t3856;
  double t3857;
  double t3858;
  double t3826;
  double t3854;
  double t3876;
  double t3880;
  double t3940;
  double t3817;
  double t3828;
  double t3829;
  double t3956;
  double t3952;
  double t3843;
  double t3852;
  double t3853;
  double t3859;
  double t3860;
  double t3861;
  double t3944;
  double t3945;
  double t3946;
  double t3957;
  double t3958;
  double t3959;
  double t3966;
  double t3967;
  double t3968;
  double t3971;
  double t3972;
  double t3973;
  double t3978;
  double t3979;
  double t3980;
  double t3982;
  double t3983;
  double t3984;
  double t3855;
  double t3862;
  double t3863;
  double t4005;
  double t4007;
  double t4011;
  double t4012;
  double t4013;
  double t4014;
  double t4015;
  double t4016;
  double t4017;
  double t4018;
  double t4019;
  double t4020;
  double t4021;
  double t4025;
  double t4026;
  double t4027;
  double t4008;
  double t4009;
  double t4010;
  double t4022;
  double t4023;
  double t4031;
  double t4032;
  double t4033;
  double t4034;
  double t4036;
  double t4037;
  double t4038;
  double t4024;
  double t4028;
  double t4029;
  double t4035;
  double t4039;
  double t4040;
  double t4042;
  double t4043;
  double t4044;
  double t3874;
  double t3948;
  double t3949;
  double t4030;
  double t4048;
  double t4055;
  double t4060;
  double t4067;
  double t4072;
  double t4098;
  double t4102;
  t3772 = Cos(var1[4]);
  t3819 = Cos(var1[9]);
  t3803 = Cos(var1[5]);
  t3842 = Cos(var1[11]);
  t3847 = Sin(var1[10]);
  t3841 = Cos(var1[10]);
  t3851 = Sin(var1[11]);
  t3816 = Sin(var1[9]);
  t3856 = -1.*t3842*t3847;
  t3857 = t3841*t3851;
  t3858 = t3856 + t3857;
  t3826 = Sin(var1[5]);
  t3854 = Sin(var1[4]);
  t3876 = -1.*t3841*t3842;
  t3880 = -1.*t3847*t3851;
  t3940 = t3876 + t3880;
  t3817 = t3803*t3816;
  t3828 = t3819*t3826;
  t3829 = t3817 + t3828;
  t3956 = Cos(var1[3]);
  t3952 = Sin(var1[3]);
  t3843 = t3841*t3842;
  t3852 = t3847*t3851;
  t3853 = t3843 + t3852;
  t3859 = t3819*t3803*t3858;
  t3860 = -1.*t3816*t3858*t3826;
  t3861 = t3859 + t3860;
  t3944 = t3819*t3803*t3940;
  t3945 = -1.*t3816*t3940*t3826;
  t3946 = t3944 + t3945;
  t3957 = -1.*t3819*t3803;
  t3958 = t3816*t3826;
  t3959 = t3957 + t3958;
  t3966 = t3803*t3816*t3858;
  t3967 = t3819*t3858*t3826;
  t3968 = t3966 + t3967;
  t3971 = t3772*t3853;
  t3972 = -1.*t3854*t3861;
  t3973 = t3971 + t3972;
  t3978 = t3803*t3816*t3940;
  t3979 = t3819*t3940*t3826;
  t3980 = t3978 + t3979;
  t3982 = t3772*t3858;
  t3983 = -1.*t3854*t3946;
  t3984 = t3982 + t3983;
  t3855 = t3853*t3854;
  t3862 = t3772*t3861;
  t3863 = t3855 + t3862;
  t4005 = -1.*t3819;
  t4007 = 1. + t4005;
  t4011 = -1.*t3841;
  t4012 = 1. + t4011;
  t4013 = -0.28121*t4012;
  t4014 = -1.*t3842;
  t4015 = 1. + t4014;
  t4016 = -0.50321*t4015;
  t4017 = -0.19821*t3842;
  t4018 = t4016 + t4017;
  t4019 = t3841*t4018;
  t4020 = 0.305*t3847*t3851;
  t4021 = t4013 + t4019 + t4020;
  t4025 = -0.15121*t4007;
  t4026 = t3819*t4021;
  t4027 = t4025 + t4026;
  t4008 = 0.15121*t4007;
  t4009 = 0.15121*t3819;
  t4010 = 0.15121*t3816;
  t4022 = t3816*t4021;
  t4023 = t4008 + t4009 + t4010 + t4022;
  t4031 = 0.28121*t3847;
  t4032 = t4018*t3847;
  t4033 = -0.305*t3841*t3851;
  t4034 = t4031 + t4032 + t4033;
  t4036 = t3803*t4027;
  t4037 = -1.*t4023*t3826;
  t4038 = t4036 + t4037;
  t4024 = t3803*t4023;
  t4028 = t4027*t3826;
  t4029 = t4024 + t4028;
  t4035 = t4034*t3854;
  t4039 = t3772*t4038;
  t4040 = t4035 + t4039;
  t4042 = t3772*t4034;
  t4043 = -1.*t3854*t4038;
  t4044 = t4042 + t4043;
  t3874 = t3858*t3854;
  t3948 = t3772*t3946;
  t3949 = t3874 + t3948;
  t4030 = -1.*t3959*t4029;
  t4048 = t3968*t4029;
  t4055 = t3959*t4029;
  t4060 = -1.*t3980*t4029;
  t4067 = -1.*t3968*t4029;
  t4072 = t3980*t4029;
  t4098 = -1.*t4034*t3853;
  t4102 = t4034*t3858;
  p_output1[0]=t3949*var2[0] + t3772*t3829*var2[1] + t3863*var2[2];
  p_output1[1]=(t3956*t3980 - 1.*t3952*t3984)*var2[0] + (t3829*t3854*t3952 + t3956*t3959)*var2[1] + (t3956*t3968 - 1.*t3952*t3973)*var2[2];
  p_output1[2]=(t3952*t3980 + t3956*t3984)*var2[0] + (-1.*t3829*t3854*t3956 + t3952*t3959)*var2[1] + (t3952*t3968 + t3956*t3973)*var2[2];
  p_output1[3]=(t3863*(t4030 - 1.*t3772*t3829*t4040 + t3829*t3854*t4044) + t3772*t3829*(t3863*t4040 + t3973*t4044 + t4048))*var2[0] + (t3949*(-1.*t3863*t4040 - 1.*t3973*t4044 + t4067) + t3863*(t3949*t4040 + t3984*t4044 + t4072))*var2[1] + (t3949*(t3772*t3829*t4040 - 1.*t3829*t3854*t4044 + t4055) + t3772*t3829*(-1.*t3949*t4040 - 1.*t3984*t4044 + t4060))*var2[2];
  p_output1[4]=(t3968*(t4030 - 1.*t3829*t4038) + t3959*(t3853*t4034 + t3861*t4038 + t4048))*var2[0] + (t3980*(-1.*t3861*t4038 + t4067 + t4098) + t3968*(t3946*t4038 + t4072 + t4102))*var2[1] + (t3980*(t3829*t4038 + t4055) + t3959*(-1.*t3858*t4034 - 1.*t3946*t4038 + t4060))*var2[2];
  p_output1[5]=t3853*(t3819*t4023 - 1.*t3816*t4027)*var2[0] + (t3858*(-1.*t3816*t3858*t4023 - 1.*t3819*t3858*t4027 + t4098) + t3853*(t3816*t3940*t4023 + t3819*t3940*t4027 + t4102))*var2[1] + t3858*(-1.*t3819*t4023 + t3816*t4027)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t3853 + 0.15121*t3940)*var2[0] + (-0.15121 + t3858*(-1.*t3858*t4021 + t4098) + t3853*(t3940*t4021 + t4102))*var2[1];
  p_output1[10]=(0.28121*t3851 - 0.305*t3842*t3851 + t3851*t4018)*var2[0] + (0.28121*t3842 + 0.305*Power(t3851,2) + t3842*t4018)*var2[2];
  p_output1[11]=-0.305*var2[2];
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

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
