/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:38 GMT+02:00
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
  double t135;
  double t574;
  double t4106;
  double t5105;
  double t5113;
  double t12316;
  double t12320;
  double t12327;
  double t12552;
  double t12557;
  double t12772;
  double t12773;
  double t12809;
  double t12576;
  double t12767;
  double t13579;
  double t13580;
  double t13581;
  double t13619;
  double t13639;
  double t13677;
  double t12137;
  double t12256;
  double t12258;
  double t14058;
  double t14060;
  double t14073;
  double t14031;
  double t14032;
  double t14039;
  double t23461;
  double t23960;
  double t25761;
  double t13267;
  double t13268;
  double t13159;
  double t13259;
  double t27563;
  double t27567;
  double t27578;
  double t27594;
  double t27596;
  double t27598;
  double t27608;
  double t27615;
  double t27619;
  double t29420;
  double t29519;
  double t29567;
  double t29617;
  double t29704;
  double t33981;
  double t34228;
  double t34424;
  double t35601;
  double t35602;
  double t35626;
  double t36796;
  double t36962;
  double t37073;
  double t37245;
  double t37268;
  double t37309;
  double t43081;
  double t43083;
  double t43085;
  double t43093;
  double t43095;
  double t43099;
  double t43107;
  double t43118;
  double t43121;
  double t43437;
  double t43442;
  double t43466;
  double t43422;
  double t43429;
  double t43431;
  double t43495;
  double t43496;
  double t43498;
  double t43501;
  double t43502;
  double t43503;
  double t43687;
  double t43718;
  double t43747;
  double t30830;
  double t32183;
  double t32719;
  double t44066;
  double t44070;
  double t44072;
  double t44149;
  double t44151;
  double t44152;
  double t44088;
  double t44092;
  double t44122;
  double t45105;
  double t45112;
  double t45256;
  double t46243;
  double t46270;
  double t46285;
  double t43483;
  double t46295;
  double t46303;
  double t46723;
  double t46724;
  double t46727;
  double t46732;
  double t46733;
  double t46735;
  double t47106;
  double t47109;
  double t47110;
  double t47112;
  double t47117;
  double t47118;
  double t47122;
  double t47123;
  double t47126;
  double t46287;
  double t46290;
  double t46291;
  double t47384;
  double t47389;
  double t47390;
  double t47396;
  double t47397;
  double t47398;
  double t47392;
  double t47393;
  double t47394;
  double t47575;
  double t47576;
  double t47577;
  double t45393;
  double t45513;
  double t45637;
  double t44566;
  t135 = Cos(var1[6]);
  t574 = Sin(var1[4]);
  t4106 = Cos(var1[4]);
  t5105 = Sin(var1[5]);
  t5113 = Sin(var1[6]);
  t12316 = t4106*t135*t5105;
  t12320 = -1.*t574*t5113;
  t12327 = t12316 + t12320;
  t12552 = Sin(var1[7]);
  t12557 = Cos(var1[8]);
  t12772 = Cos(var1[7]);
  t12773 = Sin(var1[8]);
  t12809 = Cos(var1[5]);
  t12576 = -1.*t12557;
  t12767 = 1. + t12576;
  t13579 = -1.*t4106*t12772*t5105;
  t13580 = t4106*t12809*t5113*t12552;
  t13581 = t13579 + t13580;
  t13619 = t4106*t12809*t12772*t5113;
  t13639 = t4106*t5105*t12552;
  t13677 = t13619 + t13639;
  t12137 = t135*t574;
  t12256 = t4106*t5105*t5113;
  t12258 = t12137 + t12256;
  t14058 = -1.*t4106*t12809*t12772;
  t14060 = -1.*t12258*t12552;
  t14073 = t14058 + t14060;
  t14031 = t12772*t12258;
  t14032 = -1.*t4106*t12809*t12552;
  t14039 = t14031 + t14032;
  t23461 = t4106*t12809*t12772;
  t23960 = t12258*t12552;
  t25761 = t23461 + t23960;
  t13267 = -1.*t12772;
  t13268 = 1. + t13267;
  t13159 = -1.*t135;
  t13259 = 1. + t13159;
  t27563 = t4106*t135;
  t27567 = -1.*t574*t5105*t5113;
  t27578 = t27563 + t27567;
  t27594 = -1.*t12809*t12772*t574;
  t27596 = t27578*t12552;
  t27598 = t27594 + t27596;
  t27608 = t12772*t27578;
  t27615 = t12809*t574*t12552;
  t27619 = t27608 + t27615;
  t29420 = Sin(var1[3]);
  t29519 = Cos(var1[3]);
  t29567 = t29519*t12809;
  t29617 = -1.*t29420*t574*t5105;
  t29704 = t29567 + t29617;
  t33981 = -1.*t135*t29704;
  t34228 = t4106*t29420*t5113;
  t34424 = t33981 + t34228;
  t35601 = -1.*t12809*t29420*t574;
  t35602 = -1.*t29519*t5105;
  t35626 = t35601 + t35602;
  t36796 = t12772*t29704;
  t36962 = -1.*t35626*t5113*t12552;
  t37073 = t36796 + t36962;
  t37245 = -1.*t12772*t35626*t5113;
  t37268 = -1.*t29704*t12552;
  t37309 = t37245 + t37268;
  t43081 = t135*t29420*t574;
  t43083 = t4106*t29420*t5105*t5113;
  t43085 = t43081 + t43083;
  t43093 = t4106*t12809*t12772*t29420;
  t43095 = t43085*t12552;
  t43099 = t43093 + t43095;
  t43107 = t12772*t43085;
  t43118 = -1.*t4106*t12809*t29420*t12552;
  t43121 = t43107 + t43118;
  t43437 = -1.*t12809*t29420;
  t43442 = -1.*t29519*t574*t5105;
  t43466 = t43437 + t43442;
  t43422 = t29519*t12809*t574;
  t43429 = -1.*t29420*t5105;
  t43431 = t43422 + t43429;
  t43495 = -1.*t29519*t4106*t135;
  t43496 = -1.*t43466*t5113;
  t43498 = t43495 + t43496;
  t43501 = t12772*t43431;
  t43502 = t43498*t12552;
  t43503 = t43501 + t43502;
  t43687 = t12772*t43498;
  t43718 = -1.*t43431*t12552;
  t43747 = t43687 + t43718;
  t30830 = -1.*t4106*t135*t29420;
  t32183 = -1.*t29704*t5113;
  t32719 = t30830 + t32183;
  t44066 = t12809*t29420*t574;
  t44070 = t29519*t5105;
  t44072 = t44066 + t44070;
  t44149 = -1.*t12772*t44072;
  t44151 = -1.*t32719*t12552;
  t44152 = t44149 + t44151;
  t44088 = t12772*t32719;
  t44092 = -1.*t44072*t12552;
  t44122 = t44088 + t44092;
  t45105 = t12772*t44072;
  t45112 = t32719*t12552;
  t45256 = t45105 + t45112;
  t46243 = t12809*t29420;
  t46270 = t29519*t574*t5105;
  t46285 = t46243 + t46270;
  t43483 = -1.*t29519*t4106*t5113;
  t46295 = -1.*t135*t46285;
  t46303 = t46295 + t43483;
  t46723 = t12772*t46285;
  t46724 = -1.*t43431*t5113*t12552;
  t46727 = t46723 + t46724;
  t46732 = -1.*t12772*t43431*t5113;
  t46733 = -1.*t46285*t12552;
  t46735 = t46732 + t46733;
  t47106 = -1.*t29519*t135*t574;
  t47109 = -1.*t29519*t4106*t5105*t5113;
  t47110 = t47106 + t47109;
  t47112 = -1.*t29519*t4106*t12809*t12772;
  t47117 = t47110*t12552;
  t47118 = t47112 + t47117;
  t47122 = t12772*t47110;
  t47123 = t29519*t4106*t12809*t12552;
  t47126 = t47122 + t47123;
  t46287 = t29519*t4106*t135;
  t46290 = -1.*t46285*t5113;
  t46291 = t46287 + t46290;
  t47384 = -1.*t29519*t12809*t574;
  t47389 = t29420*t5105;
  t47390 = t47384 + t47389;
  t47396 = -1.*t12772*t47390;
  t47397 = -1.*t46291*t12552;
  t47398 = t47396 + t47397;
  t47392 = t12772*t46291;
  t47393 = -1.*t47390*t12552;
  t47394 = t47392 + t47393;
  t47575 = t12772*t47390;
  t47576 = t46291*t12552;
  t47577 = t47575 + t47576;
  t45393 = t12557*t45256;
  t45513 = -1.*t44122*t12773;
  t45637 = t45393 + t45513;
  t44566 = t12557*t44122;
  p_output1[0]=var2[0] + (-0.325*t12552*t27578 + 0.075*t12767*t27598 + 0.075*t12773*t27619 - 0.0641*(t12773*t27598 + t12557*t27619) + 0.355*(t12557*t27598 - 1.*t12773*t27619) - 0.1575*t4106*t5113 - 0.325*t12809*t13268*t574 + 0.1575*t13259*t5105*t574 + 0.2255*(t4106*t5113 + t135*t5105*t574))*var2[4] + (0.075*t12767*t13581 + 0.075*t12773*t13677 - 0.0641*(t12773*t13581 + t12557*t13677) + 0.355*(t12557*t13581 - 1.*t12773*t13677) - 0.1575*t12809*t13259*t4106 - 0.2255*t12809*t135*t4106 - 0.325*t13268*t4106*t5105 - 0.325*t12552*t12809*t4106*t5113)*var2[5] + (0.2255*t12258 - 0.325*t12327*t12552 + 0.075*t12327*t12552*t12767 + 0.075*t12327*t12772*t12773 - 0.0641*(t12327*t12557*t12772 + t12327*t12552*t12773) + 0.355*(t12327*t12552*t12557 - 1.*t12327*t12772*t12773) - 0.1575*t4106*t5105*t5113 - 0.1575*t135*t574)*var2[6] + (-0.325*t12258*t12772 + 0.075*t12767*t14039 + 0.075*t12773*t14073 - 0.0641*(t12773*t14039 + t12557*t14073) + 0.355*(t12557*t14039 - 1.*t12773*t14073) + 0.325*t12552*t12809*t4106)*var2[7] + (0.075*t12557*t14039 + 0.075*t12773*t25761 - 0.0641*(-1.*t12773*t14039 + t12557*t25761) + 0.355*(-1.*t12557*t14039 - 1.*t12773*t25761))*var2[8];
  p_output1[1]=var2[1] + (0.325*t13268*t43431 + 0.1575*t13259*t43466 + 0.2255*(t135*t43466 + t43483) - 0.325*t12552*t43498 + 0.075*t12767*t43503 + 0.075*t12773*t43747 - 0.0641*(t12773*t43503 + t12557*t43747) + 0.355*(t12557*t43503 - 1.*t12773*t43747) + 0.1575*t29519*t4106*t5113)*var2[3] + (0.325*t12809*t13268*t29420*t4106 - 0.325*t12552*t43085 + 0.075*t12767*t43099 + 0.075*t12773*t43121 - 0.0641*(t12773*t43099 + t12557*t43121) + 0.355*(t12557*t43099 - 1.*t12773*t43121) - 0.1575*t13259*t29420*t4106*t5105 - 0.1575*t29420*t5113*t574 + 0.2255*(-1.*t135*t29420*t4106*t5105 + t29420*t5113*t574))*var2[4] + (0.325*t13268*t29704 + 0.1575*t13259*t35626 + 0.2255*t135*t35626 + 0.075*t12767*t37073 + 0.075*t12773*t37309 - 0.0641*(t12773*t37073 + t12557*t37309) + 0.355*(t12557*t37073 - 1.*t12773*t37309) + 0.325*t12552*t35626*t5113)*var2[5] + (0.2255*t32719 - 0.325*t12552*t34424 + 0.075*t12552*t12767*t34424 + 0.075*t12772*t12773*t34424 - 0.0641*(t12557*t12772*t34424 + t12552*t12773*t34424) + 0.355*(t12552*t12557*t34424 - 1.*t12772*t12773*t34424) + 0.1575*t135*t29420*t4106 + 0.1575*t29704*t5113)*var2[6] + (-0.325*t12772*t32719 + 0.325*t12552*t44072 + 0.075*t12767*t44122 + 0.075*t12773*t44152 - 0.0641*(t12773*t44122 + t12557*t44152) + 0.355*(-1.*t12773*t44152 + t44566))*var2[7] + (0.075*t12557*t44122 + 0.075*t12773*t45256 + 0.355*(-1.*t12557*t44122 - 1.*t12773*t45256) - 0.0641*t45637)*var2[8];
  p_output1[2]=var2[2] + (0.1575*t13259*t29704 - 0.325*t12552*t32719 + 0.325*t13268*t44072 + 0.075*t12773*t44122 + 0.075*t12767*t45256 - 0.0641*(t44566 + t12773*t45256) + 0.355*t45637 + 0.1575*t29420*t4106*t5113 + 0.2255*(t135*t29704 - 1.*t29420*t4106*t5113))*var2[3] + (-0.325*t12809*t13268*t29519*t4106 - 0.325*t12552*t47110 + 0.075*t12767*t47118 + 0.075*t12773*t47126 - 0.0641*(t12773*t47118 + t12557*t47126) + 0.355*(t12557*t47118 - 1.*t12773*t47126) + 0.1575*t13259*t29519*t4106*t5105 + 0.1575*t29519*t5113*t574 + 0.2255*(t135*t29519*t4106*t5105 - 1.*t29519*t5113*t574))*var2[4] + (0.1575*t13259*t43431 + 0.2255*t135*t43431 + 0.325*t13268*t46285 + 0.075*t12767*t46727 + 0.075*t12773*t46735 - 0.0641*(t12773*t46727 + t12557*t46735) + 0.355*(t12557*t46727 - 1.*t12773*t46735) + 0.325*t12552*t43431*t5113)*var2[5] + (-0.1575*t135*t29519*t4106 + 0.2255*t46291 - 0.325*t12552*t46303 + 0.075*t12552*t12767*t46303 + 0.075*t12772*t12773*t46303 - 0.0641*(t12557*t12772*t46303 + t12552*t12773*t46303) + 0.355*(t12552*t12557*t46303 - 1.*t12772*t12773*t46303) + 0.1575*t46285*t5113)*var2[6] + (-0.325*t12772*t46291 + 0.325*t12552*t47390 + 0.075*t12767*t47394 + 0.075*t12773*t47398 - 0.0641*(t12773*t47394 + t12557*t47398) + 0.355*(t12557*t47394 - 1.*t12773*t47398))*var2[7] + (0.075*t12557*t47394 + 0.075*t12773*t47577 - 0.0641*(-1.*t12773*t47394 + t12557*t47577) + 0.355*(-1.*t12557*t47394 - 1.*t12773*t47577))*var2[8];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "initial_swing_velocity_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void initial_swing_velocity_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
