/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:52 GMT+02:00
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
  double t5505;
  double t8009;
  double t6467;
  double t13982;
  double t14011;
  double t13978;
  double t14044;
  double t6847;
  double t14179;
  double t14184;
  double t14188;
  double t8035;
  double t14061;
  double t14221;
  double t14223;
  double t14225;
  double t7497;
  double t8039;
  double t13662;
  double t14251;
  double t14249;
  double t13983;
  double t14051;
  double t14060;
  double t14191;
  double t14193;
  double t14195;
  double t14229;
  double t14230;
  double t14232;
  double t14252;
  double t14259;
  double t14260;
  double t14273;
  double t14275;
  double t14284;
  double t14329;
  double t14382;
  double t14383;
  double t14412;
  double t14413;
  double t14414;
  double t14416;
  double t14417;
  double t14418;
  double t14177;
  double t14200;
  double t14204;
  double t14563;
  double t14564;
  double t14567;
  double t14572;
  double t14589;
  double t14612;
  double t14616;
  double t14617;
  double t14623;
  double t14627;
  double t14628;
  double t14712;
  double t14713;
  double t14715;
  double t14724;
  double t14727;
  double t14568;
  double t14570;
  double t14717;
  double t14720;
  double t14735;
  double t14744;
  double t14745;
  double t14746;
  double t14749;
  double t14752;
  double t14768;
  double t14723;
  double t14730;
  double t14731;
  double t14748;
  double t14769;
  double t14772;
  double t14786;
  double t14813;
  double t14814;
  double t14216;
  double t14233;
  double t14236;
  double t14734;
  double t14859;
  double t14923;
  double t14942;
  double t14960;
  double t17368;
  double t17450;
  double t17458;
  t5505 = Cos(var1[4]);
  t8009 = Cos(var1[15]);
  t6467 = Cos(var1[5]);
  t13982 = Cos(var1[17]);
  t14011 = Sin(var1[16]);
  t13978 = Cos(var1[16]);
  t14044 = Sin(var1[17]);
  t6847 = Sin(var1[15]);
  t14179 = -1.*t13982*t14011;
  t14184 = t13978*t14044;
  t14188 = t14179 + t14184;
  t8035 = Sin(var1[5]);
  t14061 = Sin(var1[4]);
  t14221 = -1.*t13978*t13982;
  t14223 = -1.*t14011*t14044;
  t14225 = t14221 + t14223;
  t7497 = t6467*t6847;
  t8039 = t8009*t8035;
  t13662 = t7497 + t8039;
  t14251 = Cos(var1[3]);
  t14249 = Sin(var1[3]);
  t13983 = t13978*t13982;
  t14051 = t14011*t14044;
  t14060 = t13983 + t14051;
  t14191 = t8009*t6467*t14188;
  t14193 = -1.*t6847*t14188*t8035;
  t14195 = t14191 + t14193;
  t14229 = t8009*t6467*t14225;
  t14230 = -1.*t6847*t14225*t8035;
  t14232 = t14229 + t14230;
  t14252 = -1.*t8009*t6467;
  t14259 = t6847*t8035;
  t14260 = t14252 + t14259;
  t14273 = t6467*t6847*t14188;
  t14275 = t8009*t14188*t8035;
  t14284 = t14273 + t14275;
  t14329 = t5505*t14060;
  t14382 = -1.*t14061*t14195;
  t14383 = t14329 + t14382;
  t14412 = t6467*t6847*t14225;
  t14413 = t8009*t14225*t8035;
  t14414 = t14412 + t14413;
  t14416 = t5505*t14188;
  t14417 = -1.*t14061*t14232;
  t14418 = t14416 + t14417;
  t14177 = t14060*t14061;
  t14200 = t5505*t14195;
  t14204 = t14177 + t14200;
  t14563 = -1.*t8009;
  t14564 = 1. + t14563;
  t14567 = -0.15121*t14564;
  t14572 = -1.*t13978;
  t14589 = 1. + t14572;
  t14612 = -0.28121*t14589;
  t14616 = -1.*t13982;
  t14617 = 1. + t14616;
  t14623 = -0.50321*t14617;
  t14627 = -0.23321*t13982;
  t14628 = t14623 + t14627;
  t14712 = t13978*t14628;
  t14713 = 0.27*t14011*t14044;
  t14715 = t14612 + t14712 + t14713;
  t14724 = t8009*t14715;
  t14727 = t14567 + t14724;
  t14568 = -0.15121*t8009;
  t14570 = 0.15121*t6847;
  t14717 = t6847*t14715;
  t14720 = t14567 + t14568 + t14570 + t14717;
  t14735 = 0.28121*t14011;
  t14744 = t14628*t14011;
  t14745 = -0.27*t13978*t14044;
  t14746 = t14735 + t14744 + t14745;
  t14749 = t6467*t14727;
  t14752 = -1.*t14720*t8035;
  t14768 = t14749 + t14752;
  t14723 = t6467*t14720;
  t14730 = t14727*t8035;
  t14731 = t14723 + t14730;
  t14748 = t14746*t14061;
  t14769 = t5505*t14768;
  t14772 = t14748 + t14769;
  t14786 = t5505*t14746;
  t14813 = -1.*t14061*t14768;
  t14814 = t14786 + t14813;
  t14216 = t14188*t14061;
  t14233 = t5505*t14232;
  t14236 = t14216 + t14233;
  t14734 = -1.*t14260*t14731;
  t14859 = t14284*t14731;
  t14923 = t14260*t14731;
  t14942 = -1.*t14414*t14731;
  t14960 = -1.*t14284*t14731;
  t17368 = t14414*t14731;
  t17450 = -1.*t14746*t14060;
  t17458 = t14746*t14188;
  p_output1[0]=t14236*var2[0] + t13662*t5505*var2[1] + t14204*var2[2];
  p_output1[1]=(t14251*t14414 - 1.*t14249*t14418)*var2[0] + (t13662*t14061*t14249 + t14251*t14260)*var2[1] + (t14251*t14284 - 1.*t14249*t14383)*var2[2];
  p_output1[2]=(t14249*t14414 + t14251*t14418)*var2[0] + (-1.*t13662*t14061*t14251 + t14249*t14260)*var2[1] + (t14249*t14284 + t14251*t14383)*var2[2];
  p_output1[3]=(t13662*(t14204*t14772 + t14383*t14814 + t14859)*t5505 + t14204*(t14734 + t13662*t14061*t14814 - 1.*t13662*t14772*t5505))*var2[0] + (t14236*(-1.*t14204*t14772 - 1.*t14383*t14814 + t14960) + t14204*(t14236*t14772 + t14418*t14814 + t17368))*var2[1] + (t13662*(-1.*t14236*t14772 - 1.*t14418*t14814 + t14942)*t5505 + t14236*(-1.*t13662*t14061*t14814 + t14923 + t13662*t14772*t5505))*var2[2];
  p_output1[4]=(t14284*(t14734 - 1.*t13662*t14768) + t14260*(t14060*t14746 + t14195*t14768 + t14859))*var2[0] + (t14414*(-1.*t14195*t14768 + t14960 + t17450) + t14284*(t14232*t14768 + t17368 + t17458))*var2[1] + (t14414*(t13662*t14768 + t14923) + t14260*(-1.*t14188*t14746 - 1.*t14232*t14768 + t14942))*var2[2];
  p_output1[5]=t14060*(-1.*t14727*t6847 + t14720*t8009)*var2[0] + (t14188*(t17450 - 1.*t14188*t14720*t6847 - 1.*t14188*t14727*t8009) + t14060*(t17458 + t14225*t14720*t6847 + t14225*t14727*t8009))*var2[1] + t14188*(t14727*t6847 - 1.*t14720*t8009)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t14060 - 0.15121*t14225)*var2[0] + (-0.15121 + t14188*(-1.*t14188*t14715 + t17450) + t14060*(t14225*t14715 + t17458))*var2[1];
  p_output1[16]=(0.28121*t14044 - 0.27*t13982*t14044 + t14044*t14628)*var2[0] + (0.28121*t13982 + 0.27*Power(t14044,2) + t13982*t14628)*var2[2];
  p_output1[17]=-0.27*var2[2];
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
