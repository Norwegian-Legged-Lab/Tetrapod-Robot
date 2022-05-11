/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:40 GMT+02:00
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
  double t3088;
  double t3101;
  double t3246;
  double t3247;
  double t3405;
  double t3411;
  double t3415;
  double t3932;
  double t3880;
  double t3792;
  double t5189;
  double t5476;
  double t5682;
  double t3425;
  double t2660;
  double t3074;
  double t3884;
  double t8803;
  double t8839;
  double t8916;
  double t8904;
  double t8905;
  double t8907;
  double t8898;
  double t8917;
  double t8919;
  double t8923;
  double t8944;
  double t8945;
  double t8947;
  double t8990;
  double t8994;
  double t8995;
  double t8996;
  double t8998;
  double t8999;
  double t8943;
  double t8948;
  double t9000;
  double t9001;
  double t8938;
  double t8939;
  double t8941;
  double t8942;
  double t9002;
  double t9003;
  double t9005;
  double t9006;
  double t9007;
  double t9008;
  double t9010;
  double t9011;
  double t9012;
  double t9013;
  double t9014;
  double t9017;
  double t9018;
  double t9019;
  double t9024;
  double t9025;
  double t9026;
  double t9032;
  double t9034;
  double t9035;
  double t9040;
  double t9041;
  double t9042;
  double t9027;
  double t9028;
  double t9030;
  double t9038;
  double t9044;
  double t9045;
  double t9046;
  double t9047;
  double t9048;
  double t9015;
  double t9020;
  double t9022;
  double t9036;
  double t9051;
  double t9052;
  double t9054;
  double t9055;
  double t9065;
  double t9068;
  double t8934;
  double t8935;
  double t8937;
  double t3423;
  double t8895;
  double t8896;
  double t9057;
  double t9058;
  double t9059;
  double t9096;
  double t9101;
  double t9111;
  double t9107;
  double t9121;
  double t9116;
  double t9140;
  double t9143;
  double t9150;
  double t9153;
  t3088 = Cos(var1[8]);
  t3101 = Sin(var1[7]);
  t3246 = t3088*t3101;
  t3247 = Cos(var1[7]);
  t3405 = Sin(var1[8]);
  t3411 = -1.*t3247*t3405;
  t3415 = t3246 + t3411;
  t3932 = Cos(var1[5]);
  t3880 = Sin(var1[6]);
  t3792 = Sin(var1[5]);
  t5189 = t3247*t3088;
  t5476 = t3101*t3405;
  t5682 = t5189 + t5476;
  t3425 = Cos(var1[4]);
  t2660 = Cos(var1[6]);
  t3074 = Sin(var1[4]);
  t3884 = t3792*t3880*t3415;
  t8803 = t3932*t5682;
  t8839 = t3884 + t8803;
  t8916 = Sin(var1[3]);
  t8904 = -1.*t3932*t3880*t3415;
  t8905 = t3792*t5682;
  t8907 = t8904 + t8905;
  t8898 = Cos(var1[3]);
  t8917 = t3425*t2660*t3415;
  t8919 = -1.*t3074*t8839;
  t8923 = t8917 + t8919;
  t8944 = -0.0641*t3088;
  t8945 = -0.28*t3405;
  t8947 = t8944 + t8945;
  t8990 = -1.*t3088;
  t8994 = 1. + t8990;
  t8995 = 0.075*t8994;
  t8996 = 0.355*t3088;
  t8998 = -0.0641*t3405;
  t8999 = t8995 + t8996 + t8998;
  t8943 = -0.325*t3101;
  t8948 = t3247*t8947;
  t9000 = t3101*t8999;
  t9001 = t8943 + t8948 + t9000;
  t8938 = -1.*t2660;
  t8939 = 1. + t8938;
  t8941 = 0.1575*t8939;
  t8942 = 0.2255*t2660;
  t9002 = -1.*t3880*t9001;
  t9003 = t8941 + t8942 + t9002;
  t9005 = -1.*t3792*t9003;
  t9006 = -1.*t3247;
  t9007 = 1. + t9006;
  t9008 = 0.325*t9007;
  t9010 = -1.*t3101*t8947;
  t9011 = t3247*t8999;
  t9012 = t9008 + t9010 + t9011;
  t9013 = t3932*t9012;
  t9014 = t9005 + t9013;
  t9017 = 0.068*t3880;
  t9018 = t2660*t9001;
  t9019 = t9017 + t9018;
  t9024 = -1.*t3425*t2660*t3792;
  t9025 = t3074*t3880;
  t9026 = t9024 + t9025;
  t9032 = t3932*t9003;
  t9034 = t3792*t9012;
  t9035 = t9032 + t9034;
  t9040 = -1.*t3088*t3101;
  t9041 = t3247*t3405;
  t9042 = t9040 + t9041;
  t9027 = t3425*t9014;
  t9028 = t3074*t9019;
  t9030 = t9027 + t9028;
  t9038 = t2660*t3074*t5682;
  t9044 = t3932*t9042;
  t9045 = t3792*t3880*t5682;
  t9046 = t9044 + t9045;
  t9047 = t3425*t9046;
  t9048 = t9038 + t9047;
  t9015 = -1.*t3074*t9014;
  t9020 = t3425*t9019;
  t9022 = t9015 + t9020;
  t9036 = -1.*t3932*t2660*t9035;
  t9051 = t3792*t9042;
  t9052 = -1.*t3932*t3880*t5682;
  t9054 = t9051 + t9052;
  t9055 = t9035*t9054;
  t9065 = -1.*t3880*t9019;
  t9068 = t2660*t9019*t5682;
  t8934 = t2660*t3074*t3792;
  t8935 = t3425*t3880;
  t8937 = t8934 + t8935;
  t3423 = t2660*t3074*t3415;
  t8895 = t3425*t8839;
  t8896 = t3423 + t8895;
  t9057 = t3425*t2660*t5682;
  t9058 = -1.*t3074*t9046;
  t9059 = t9057 + t9058;
  t9096 = t9035*t8907;
  t9101 = -1.*t9035*t9054;
  t9111 = -1.*t2660*t9019*t5682;
  t9107 = t2660*t9019*t3415;
  t9121 = t9012*t5682;
  t9116 = -1.*t9012*t9042;
  t9140 = t3932*t2660*t9035;
  t9143 = -1.*t9035*t8907;
  t9150 = t3880*t9019;
  t9153 = -1.*t2660*t9019*t3415;
  p_output1[0]=t8896;
  p_output1[1]=t8898*t8907 - 1.*t8916*t8923;
  p_output1[2]=t8907*t8916 + t8898*t8923;
  p_output1[3]=(-1.*t8937*t9022 - 1.*t9026*t9030 + t9036)*t9048 + t9026*(t9030*t9048 + t9055 + t9022*t9059);
  p_output1[4]=t9054*(t2660*t3792*t9014 + t9036 + t9065) + t2660*t3932*(t9014*t9046 + t9055 + t9068);
  p_output1[5]=t2660*t5682*(-1.*t2660*t9003 + t9065) + t3880*(-1.*t3880*t5682*t9003 + t9012*t9042 + t9068);
  p_output1[6]=-0.1575*t3415 - 0.2255*t9042;
  p_output1[7]=0.325*t3405 - 1.*t3088*t8947 - 1.*t3405*t8999;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t9026;
  p_output1[19]=t2660*t3932*t8898 - 1.*t8916*t8937;
  p_output1[20]=t2660*t3932*t8916 + t8898*t8937;
  p_output1[21]=t9048*(t8923*t9022 + t8896*t9030 + t9096) + t8896*(-1.*t9030*t9048 - 1.*t9022*t9059 + t9101);
  p_output1[22]=t9054*(t8839*t9014 + t9096 + t9107) + t8907*(-1.*t9014*t9046 + t9101 + t9111);
  p_output1[23]=t2660*t3415*(t3880*t5682*t9003 + t9111 + t9116) + t2660*t5682*(-1.*t3415*t3880*t9003 + t9107 + t9121);
  p_output1[24]=t5682*(-1.*t5682*t9001 + t9116) + t9042*(t3415*t9001 + t9121);
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
  p_output1[36]=t9048;
  p_output1[37]=t8898*t9054 - 1.*t8916*t9059;
  p_output1[38]=t8916*t9054 + t8898*t9059;
  p_output1[39]=t8896*(t8937*t9022 + t9026*t9030 + t9140) + t9026*(-1.*t8923*t9022 - 1.*t8896*t9030 + t9143);
  p_output1[40]=t8907*(-1.*t2660*t3792*t9014 + t9140 + t9150) + t2660*t3932*(-1.*t8839*t9014 + t9143 + t9153);
  p_output1[41]=t2660*t3415*(t2660*t9003 + t9150) + t3880*(t3415*t3880*t9003 - 1.*t5682*t9012 + t9153);
  p_output1[42]=0.068*t5682;
  p_output1[43]=-0.325*t3088 - 1.*t3405*t8947 + t3088*t8999;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
