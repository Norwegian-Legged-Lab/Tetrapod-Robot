/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:56 GMT+02:00
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
  double t25675;
  double t1611;
  double t2356;
  double t27549;
  double t36964;
  double t37099;
  double t37106;
  double t36963;
  double t37386;
  double t36736;
  double t37481;
  double t35556;
  double t2374;
  double t30723;
  double t31400;
  double t34067;
  double t37107;
  double t37483;
  double t37484;
  double t37720;
  double t37665;
  double t37705;
  double t37706;
  double t37664;
  double t37723;
  double t37724;
  double t37727;
  double t37759;
  double t37770;
  double t37771;
  double t37805;
  double t37806;
  double t37821;
  double t37822;
  double t37824;
  double t37826;
  double t37828;
  double t37830;
  double t37831;
  double t37832;
  double t37836;
  double t37850;
  double t37860;
  double t37864;
  double t37866;
  double t37874;
  double t37807;
  double t37812;
  double t37819;
  double t37861;
  double t37862;
  double t37911;
  double t37934;
  double t37935;
  double t37939;
  double t38022;
  double t38028;
  double t38060;
  double t38089;
  double t38096;
  double t38131;
  double t37863;
  double t37876;
  double t37877;
  double t37752;
  double t37777;
  double t37778;
  double t37781;
  double t37793;
  double t37798;
  double t38061;
  double t38159;
  double t38161;
  double t38167;
  double t38170;
  double t38172;
  double t38208;
  double t38210;
  double t38224;
  double t37800;
  double t37801;
  double t37804;
  double t37879;
  double t38229;
  double t34919;
  double t37585;
  double t37648;
  double t38344;
  double t38345;
  double t38346;
  double t41179;
  double t41232;
  double t41298;
  double t41323;
  double t43943;
  double t49029;
  t25675 = Cos(var1[13]);
  t1611 = Cos(var1[14]);
  t2356 = Sin(var1[13]);
  t27549 = Sin(var1[14]);
  t36964 = t25675*t1611;
  t37099 = t2356*t27549;
  t37106 = t36964 + t37099;
  t36963 = Cos(var1[5]);
  t37386 = Sin(var1[12]);
  t36736 = Cos(var1[12]);
  t37481 = Sin(var1[5]);
  t35556 = Cos(var1[4]);
  t2374 = -1.*t1611*t2356;
  t30723 = t25675*t27549;
  t31400 = t2374 + t30723;
  t34067 = Sin(var1[4]);
  t37107 = t36736*t36963*t37106;
  t37483 = -1.*t37386*t37106*t37481;
  t37484 = t37107 + t37483;
  t37720 = Sin(var1[3]);
  t37665 = t36963*t37386*t37106;
  t37705 = t36736*t37106*t37481;
  t37706 = t37665 + t37705;
  t37664 = Cos(var1[3]);
  t37723 = t35556*t31400;
  t37724 = -1.*t34067*t37484;
  t37727 = t37723 + t37724;
  t37759 = t1611*t2356;
  t37770 = -1.*t25675*t27549;
  t37771 = t37759 + t37770;
  t37805 = -1.*t36736;
  t37806 = 1. + t37805;
  t37821 = -1.*t25675;
  t37822 = 1. + t37821;
  t37824 = 0.28121*t37822;
  t37826 = -1.*t1611;
  t37828 = 1. + t37826;
  t37830 = 0.50321*t37828;
  t37831 = 0.23321*t1611;
  t37832 = t37830 + t37831;
  t37836 = t25675*t37832;
  t37850 = -0.27*t2356*t27549;
  t37860 = t37824 + t37836 + t37850;
  t37864 = 0.15121*t37806;
  t37866 = t36736*t37860;
  t37874 = t37864 + t37866;
  t37807 = -0.15121*t37806;
  t37812 = -0.15121*t36736;
  t37819 = -0.15121*t37386;
  t37861 = t37386*t37860;
  t37862 = t37807 + t37812 + t37819 + t37861;
  t37911 = -1.*t36963*t37386;
  t37934 = -1.*t36736*t37481;
  t37935 = t37911 + t37934;
  t37939 = 0.28121*t2356;
  t38022 = -1.*t37832*t2356;
  t38028 = -0.27*t25675*t27549;
  t38060 = t37939 + t38022 + t38028;
  t38089 = t36963*t37874;
  t38096 = -1.*t37862*t37481;
  t38131 = t38089 + t38096;
  t37863 = t36963*t37862;
  t37876 = t37874*t37481;
  t37877 = t37863 + t37876;
  t37752 = t37106*t34067;
  t37777 = t36736*t36963*t37771;
  t37778 = -1.*t37386*t37771*t37481;
  t37781 = t37777 + t37778;
  t37793 = t35556*t37781;
  t37798 = t37752 + t37793;
  t38061 = t38060*t34067;
  t38159 = t35556*t38131;
  t38161 = t38061 + t38159;
  t38167 = t35556*t38060;
  t38170 = -1.*t34067*t38131;
  t38172 = t38167 + t38170;
  t38208 = t36963*t37386*t37771;
  t38210 = t36736*t37771*t37481;
  t38224 = t38208 + t38210;
  t37800 = t36736*t36963;
  t37801 = -1.*t37386*t37481;
  t37804 = t37800 + t37801;
  t37879 = -1.*t37804*t37877;
  t38229 = t38224*t37877;
  t34919 = t31400*t34067;
  t37585 = t35556*t37484;
  t37648 = t34919 + t37585;
  t38344 = t35556*t37106;
  t38345 = -1.*t34067*t37781;
  t38346 = t38344 + t38345;
  t41179 = -1.*t38224*t37877;
  t41232 = t37706*t37877;
  t41298 = -1.*t38060*t37106;
  t41323 = t38060*t31400;
  t43943 = t37804*t37877;
  t49029 = -1.*t37706*t37877;
  p_output1[0]=t37648;
  p_output1[1]=t37664*t37706 - 1.*t37720*t37727;
  p_output1[2]=t37706*t37720 + t37664*t37727;
  p_output1[3]=t37798*(t37879 - 1.*t35556*t37935*t38161 + t34067*t37935*t38172) + t35556*t37935*(t37798*t38161 + t38229 + t38172*t38346);
  p_output1[4]=(t37879 - 1.*t37935*t38131)*t38224 + t37804*(t37106*t38060 + t37781*t38131 + t38229);
  p_output1[5]=t37106*(-1.*t36736*t37862 + t37386*t37874);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t27549 - 0.27*t1611*t27549 - 1.*t27549*t37832;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t35556*t37935;
  p_output1[19]=t37664*t37804 + t34067*t37720*t37935;
  p_output1[20]=t37720*t37804 - 1.*t34067*t37664*t37935;
  p_output1[21]=t37648*(-1.*t37798*t38161 - 1.*t38172*t38346 + t41179) + t37798*(t37648*t38161 + t37727*t38172 + t41232);
  p_output1[22]=t37706*(-1.*t37781*t38131 + t41179 + t41298) + t38224*(t37484*t38131 + t41232 + t41323);
  p_output1[23]=t31400*(-1.*t37386*t37771*t37862 - 1.*t36736*t37771*t37874 + t41298) + t37106*(t37106*t37386*t37862 + t36736*t37106*t37874 + t41323);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t31400*(-1.*t37771*t37860 + t41298) + t37106*(t37106*t37860 + t41323);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t37798;
  p_output1[37]=t37664*t38224 - 1.*t37720*t38346;
  p_output1[38]=t37720*t38224 + t37664*t38346;
  p_output1[39]=t37648*(t35556*t37935*t38161 - 1.*t34067*t37935*t38172 + t43943) + t35556*t37935*(-1.*t37648*t38161 - 1.*t37727*t38172 + t49029);
  p_output1[40]=t37706*(t37935*t38131 + t43943) + t37804*(-1.*t31400*t38060 - 1.*t37484*t38131 + t49029);
  p_output1[41]=t31400*(t36736*t37862 - 1.*t37386*t37874);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t31400 - 0.15121*t37771;
  p_output1[49]=0.28121*t1611 + 0.27*Power(t27549,2) - 1.*t1611*t37832;
  p_output1[50]=-0.27;
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

#include "fFrFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
