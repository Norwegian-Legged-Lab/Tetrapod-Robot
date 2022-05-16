/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:18 GMT+02:00
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
  double t4138;
  double t2970;
  double t3553;
  double t4144;
  double t4663;
  double t4805;
  double t4849;
  double t4605;
  double t5082;
  double t4575;
  double t5258;
  double t4538;
  double t4042;
  double t4489;
  double t4493;
  double t2207;
  double t4899;
  double t5281;
  double t5293;
  double t5605;
  double t5368;
  double t5370;
  double t5469;
  double t5364;
  double t5606;
  double t5611;
  double t5620;
  double t5685;
  double t5687;
  double t5722;
  double t5887;
  double t5920;
  double t6151;
  double t6192;
  double t6730;
  double t6732;
  double t6784;
  double t6845;
  double t6856;
  double t6858;
  double t6950;
  double t6955;
  double t7039;
  double t7285;
  double t7293;
  double t7309;
  double t7930;
  double t7963;
  double t8017;
  double t8019;
  double t8145;
  double t8157;
  double t8283;
  double t8290;
  double t8296;
  double t8631;
  double t8839;
  double t8870;
  double t8892;
  double t8937;
  double t7612;
  double t8025;
  double t8043;
  double t5682;
  double t5723;
  double t5780;
  double t5789;
  double t5802;
  double t5826;
  double t8857;
  double t8954;
  double t8964;
  double t8977;
  double t8978;
  double t8991;
  double t10521;
  double t11892;
  double t11962;
  double t5829;
  double t5860;
  double t5885;
  double t8072;
  double t12712;
  double t4513;
  double t5324;
  double t5339;
  double t12964;
  double t13011;
  double t13019;
  double t16455;
  double t16504;
  double t16738;
  double t16865;
  double t17813;
  double t17963;
  t4138 = Cos(var1[7]);
  t2970 = Cos(var1[8]);
  t3553 = Sin(var1[7]);
  t4144 = Sin(var1[8]);
  t4663 = t4138*t2970;
  t4805 = t3553*t4144;
  t4849 = t4663 + t4805;
  t4605 = Cos(var1[6]);
  t5082 = Sin(var1[5]);
  t4575 = Cos(var1[5]);
  t5258 = Sin(var1[6]);
  t4538 = Cos(var1[4]);
  t4042 = -1.*t2970*t3553;
  t4489 = t4138*t4144;
  t4493 = t4042 + t4489;
  t2207 = Sin(var1[4]);
  t4899 = t4575*t4605*t4849;
  t5281 = -1.*t5082*t5258*t4849;
  t5293 = t4899 + t5281;
  t5605 = Sin(var1[3]);
  t5368 = t4605*t5082*t4849;
  t5370 = t4575*t5258*t4849;
  t5469 = t5368 + t5370;
  t5364 = Cos(var1[3]);
  t5606 = t4538*t4493;
  t5611 = -1.*t2207*t5293;
  t5620 = t5606 + t5611;
  t5685 = t2970*t3553;
  t5687 = -1.*t4138*t4144;
  t5722 = t5685 + t5687;
  t5887 = -1.*t4605;
  t5920 = 1. + t5887;
  t6151 = 0.15121*t5920;
  t6192 = -1.*t4138;
  t6730 = 1. + t6192;
  t6732 = 0.28121*t6730;
  t6784 = -1.*t2970;
  t6845 = 1. + t6784;
  t6856 = 0.50321*t6845;
  t6858 = 0.23321*t2970;
  t6950 = t6856 + t6858;
  t6955 = t4138*t6950;
  t7039 = -0.27*t3553*t4144;
  t7285 = t6732 + t6955 + t7039;
  t7293 = t4605*t7285;
  t7309 = t6151 + t7293;
  t7930 = 0.15121*t4605;
  t7963 = -0.15121*t5258;
  t8017 = t5258*t7285;
  t8019 = t6151 + t7930 + t7963 + t8017;
  t8145 = -1.*t4605*t5082;
  t8157 = -1.*t4575*t5258;
  t8283 = t8145 + t8157;
  t8290 = 0.28121*t3553;
  t8296 = -1.*t6950*t3553;
  t8631 = -0.27*t4138*t4144;
  t8839 = t8290 + t8296 + t8631;
  t8870 = t4575*t7309;
  t8892 = -1.*t5082*t8019;
  t8937 = t8870 + t8892;
  t7612 = t5082*t7309;
  t8025 = t4575*t8019;
  t8043 = t7612 + t8025;
  t5682 = t2207*t4849;
  t5723 = t4575*t4605*t5722;
  t5780 = -1.*t5082*t5258*t5722;
  t5789 = t5723 + t5780;
  t5802 = t4538*t5789;
  t5826 = t5682 + t5802;
  t8857 = t2207*t8839;
  t8954 = t4538*t8937;
  t8964 = t8857 + t8954;
  t8977 = t4538*t8839;
  t8978 = -1.*t2207*t8937;
  t8991 = t8977 + t8978;
  t10521 = t4605*t5082*t5722;
  t11892 = t4575*t5258*t5722;
  t11962 = t10521 + t11892;
  t5829 = t4575*t4605;
  t5860 = -1.*t5082*t5258;
  t5885 = t5829 + t5860;
  t8072 = -1.*t5885*t8043;
  t12712 = t11962*t8043;
  t4513 = t2207*t4493;
  t5324 = t4538*t5293;
  t5339 = t4513 + t5324;
  t12964 = t4538*t4849;
  t13011 = -1.*t2207*t5789;
  t13019 = t12964 + t13011;
  t16455 = -1.*t11962*t8043;
  t16504 = t5469*t8043;
  t16738 = -1.*t8839*t4849;
  t16865 = t8839*t4493;
  t17813 = t5885*t8043;
  t17963 = -1.*t5469*t8043;
  p_output1[0]=t5339;
  p_output1[1]=t5364*t5469 - 1.*t5605*t5620;
  p_output1[2]=t5469*t5605 + t5364*t5620;
  p_output1[3]=t4538*t8283*(t12712 + t5826*t8964 + t13019*t8991) + t5826*(t8072 - 1.*t4538*t8283*t8964 + t2207*t8283*t8991);
  p_output1[4]=t5885*(t12712 + t4849*t8839 + t5789*t8937) + t11962*(t8072 - 1.*t8283*t8937);
  p_output1[5]=t4849*(t5258*t7309 - 1.*t4605*t8019);
  p_output1[6]=0;
  p_output1[7]=0.28121*t4144 - 0.27*t2970*t4144 - 1.*t4144*t6950;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4538*t8283;
  p_output1[19]=t5364*t5885 + t2207*t5605*t8283;
  p_output1[20]=t5605*t5885 - 1.*t2207*t5364*t8283;
  p_output1[21]=t5339*(t16455 - 1.*t5826*t8964 - 1.*t13019*t8991) + t5826*(t16504 + t5339*t8964 + t5620*t8991);
  p_output1[22]=t11962*(t16504 + t16865 + t5293*t8937) + t5469*(t16455 + t16738 - 1.*t5789*t8937);
  p_output1[23]=t4849*(t16865 + t4605*t4849*t7309 + t4849*t5258*t8019) + t4493*(t16738 - 1.*t4605*t5722*t7309 - 1.*t5258*t5722*t8019);
  p_output1[24]=-0.15121 + t4849*(t16865 + t4849*t7285) + t4493*(t16738 - 1.*t5722*t7285);
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
  p_output1[36]=t5826;
  p_output1[37]=t11962*t5364 - 1.*t13019*t5605;
  p_output1[38]=t13019*t5364 + t11962*t5605;
  p_output1[39]=t4538*t8283*(t17963 - 1.*t5339*t8964 - 1.*t5620*t8991) + t5339*(t17813 + t4538*t8283*t8964 - 1.*t2207*t8283*t8991);
  p_output1[40]=t5885*(t17963 - 1.*t4493*t8839 - 1.*t5293*t8937) + t5469*(t17813 + t8283*t8937);
  p_output1[41]=t4493*(-1.*t5258*t7309 + t4605*t8019);
  p_output1[42]=0.15121*t4493 + 0.15121*t5722;
  p_output1[43]=0.28121*t2970 + 0.27*Power(t4144,2) - 1.*t2970*t6950;
  p_output1[44]=-0.27;
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

#include "fFlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
