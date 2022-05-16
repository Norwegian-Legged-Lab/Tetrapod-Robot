/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:07 GMT+02:00
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
  double t2245;
  double t161;
  double t1195;
  double t2996;
  double t41144;
  double t41149;
  double t41250;
  double t41048;
  double t41130;
  double t41319;
  double t41082;
  double t41324;
  double t21525;
  double t2099;
  double t5196;
  double t21406;
  double t41292;
  double t41330;
  double t41331;
  double t41579;
  double t41377;
  double t41380;
  double t41382;
  double t41526;
  double t41417;
  double t41485;
  double t41489;
  double t41505;
  double t41507;
  double t41512;
  double t41527;
  double t41537;
  double t41545;
  double t41582;
  double t41591;
  double t41593;
  double t41612;
  double t41621;
  double t41622;
  double t41651;
  double t41653;
  double t44003;
  double t44158;
  double t45278;
  double t45852;
  double t41504;
  double t41522;
  double t41523;
  double t46663;
  double t46678;
  double t46809;
  double t46810;
  double t46813;
  double t46841;
  double t46851;
  double t46911;
  double t46913;
  double t46914;
  double t46918;
  double t46919;
  double t46922;
  double t46942;
  double t46947;
  double t46949;
  double t46797;
  double t46807;
  double t46808;
  double t46923;
  double t46924;
  double t46975;
  double t46996;
  double t47002;
  double t47039;
  double t47246;
  double t47258;
  double t47438;
  double t46929;
  double t46951;
  double t46952;
  double t47044;
  double t47443;
  double t49269;
  double t50153;
  double t50174;
  double t50191;
  double t35631;
  double t41369;
  double t41374;
  double t46967;
  double t50238;
  double t50740;
  double t51025;
  double t51071;
  double t51336;
  double t51592;
  double t51675;
  t2245 = Cos(var1[10]);
  t161 = Cos(var1[11]);
  t1195 = Sin(var1[10]);
  t2996 = Sin(var1[11]);
  t41144 = -1.*t2245*t161;
  t41149 = -1.*t1195*t2996;
  t41250 = t41144 + t41149;
  t41048 = Cos(var1[4]);
  t41130 = Cos(var1[5]);
  t41319 = Sin(var1[9]);
  t41082 = Cos(var1[9]);
  t41324 = Sin(var1[5]);
  t21525 = Sin(var1[4]);
  t2099 = -1.*t161*t1195;
  t5196 = t2245*t2996;
  t21406 = t2099 + t5196;
  t41292 = t41082*t41130*t41250;
  t41330 = -1.*t41319*t41250*t41324;
  t41331 = t41292 + t41330;
  t41579 = Sin(var1[3]);
  t41377 = t41130*t41319;
  t41380 = t41082*t41324;
  t41382 = t41377 + t41380;
  t41526 = Cos(var1[3]);
  t41417 = t2245*t161;
  t41485 = t1195*t2996;
  t41489 = t41417 + t41485;
  t41505 = t41082*t41130*t21406;
  t41507 = -1.*t41319*t21406*t41324;
  t41512 = t41505 + t41507;
  t41527 = t41130*t41319*t41250;
  t41537 = t41082*t41250*t41324;
  t41545 = t41527 + t41537;
  t41582 = t41048*t21406;
  t41591 = -1.*t21525*t41331;
  t41593 = t41582 + t41591;
  t41612 = -1.*t41082*t41130;
  t41621 = t41319*t41324;
  t41622 = t41612 + t41621;
  t41651 = t41130*t41319*t21406;
  t41653 = t41082*t21406*t41324;
  t44003 = t41651 + t41653;
  t44158 = t41048*t41489;
  t45278 = -1.*t21525*t41512;
  t45852 = t44158 + t45278;
  t41504 = t41489*t21525;
  t41522 = t41048*t41512;
  t41523 = t41504 + t41522;
  t46663 = -1.*t41082;
  t46678 = 1. + t46663;
  t46809 = -1.*t2245;
  t46810 = 1. + t46809;
  t46813 = -0.28121*t46810;
  t46841 = -1.*t161;
  t46851 = 1. + t46841;
  t46911 = -0.50321*t46851;
  t46913 = -0.23321*t161;
  t46914 = t46911 + t46913;
  t46918 = t2245*t46914;
  t46919 = 0.27*t1195*t2996;
  t46922 = t46813 + t46918 + t46919;
  t46942 = -0.15121*t46678;
  t46947 = t41082*t46922;
  t46949 = t46942 + t46947;
  t46797 = 0.15121*t46678;
  t46807 = 0.15121*t41082;
  t46808 = 0.15121*t41319;
  t46923 = t41319*t46922;
  t46924 = t46797 + t46807 + t46808 + t46923;
  t46975 = 0.28121*t1195;
  t46996 = t46914*t1195;
  t47002 = -0.27*t2245*t2996;
  t47039 = t46975 + t46996 + t47002;
  t47246 = t41130*t46949;
  t47258 = -1.*t46924*t41324;
  t47438 = t47246 + t47258;
  t46929 = t41130*t46924;
  t46951 = t46949*t41324;
  t46952 = t46929 + t46951;
  t47044 = t47039*t21525;
  t47443 = t41048*t47438;
  t49269 = t47044 + t47443;
  t50153 = t41048*t47039;
  t50174 = -1.*t21525*t47438;
  t50191 = t50153 + t50174;
  t35631 = t21406*t21525;
  t41369 = t41048*t41331;
  t41374 = t35631 + t41369;
  t46967 = -1.*t41622*t46952;
  t50238 = t44003*t46952;
  t50740 = -1.*t44003*t46952;
  t51025 = t41545*t46952;
  t51071 = t41622*t46952;
  t51336 = -1.*t41545*t46952;
  t51592 = -1.*t47039*t41489;
  t51675 = t47039*t21406;
  p_output1[0]=t41374;
  p_output1[1]=t41048*t41382;
  p_output1[2]=t41523;
  p_output1[3]=t41526*t41545 - 1.*t41579*t41593;
  p_output1[4]=t21525*t41382*t41579 + t41526*t41622;
  p_output1[5]=t41526*t44003 - 1.*t41579*t45852;
  p_output1[6]=t41545*t41579 + t41526*t41593;
  p_output1[7]=-1.*t21525*t41382*t41526 + t41579*t41622;
  p_output1[8]=t41579*t44003 + t41526*t45852;
  p_output1[9]=t41523*(t46967 - 1.*t41048*t41382*t49269 + t21525*t41382*t50191) + t41048*t41382*(t41523*t49269 + t45852*t50191 + t50238);
  p_output1[10]=t41374*(-1.*t41523*t49269 - 1.*t45852*t50191 + t50740) + t41523*(t41374*t49269 + t41593*t50191 + t51025);
  p_output1[11]=t41374*(t41048*t41382*t49269 - 1.*t21525*t41382*t50191 + t51071) + t41048*t41382*(-1.*t41374*t49269 - 1.*t41593*t50191 + t51336);
  p_output1[12]=t44003*(t46967 - 1.*t41382*t47438) + t41622*(t41489*t47039 + t41512*t47438 + t50238);
  p_output1[13]=t41545*(-1.*t41512*t47438 + t50740 + t51592) + t44003*(t41331*t47438 + t51025 + t51675);
  p_output1[14]=t41545*(t41382*t47438 + t51071) + t41622*(-1.*t21406*t47039 - 1.*t41331*t47438 + t51336);
  p_output1[15]=t41489*(t41082*t46924 - 1.*t41319*t46949);
  p_output1[16]=t21406*(-1.*t21406*t41319*t46924 - 1.*t21406*t41082*t46949 + t51592) + t41489*(t41250*t41319*t46924 + t41082*t41250*t46949 + t51675);
  p_output1[17]=t21406*(-1.*t41082*t46924 + t41319*t46949);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.15121*t41250 + 0.15121*t41489;
  p_output1[28]=-0.15121 + t21406*(-1.*t21406*t46922 + t51592) + t41489*(t41250*t46922 + t51675);
  p_output1[29]=0;
  p_output1[30]=0.28121*t2996 - 0.27*t161*t2996 + t2996*t46914;
  p_output1[31]=0;
  p_output1[32]=0.28121*t161 + 0.27*Power(t2996,2) + t161*t46914;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=-0.27;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "Jh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
