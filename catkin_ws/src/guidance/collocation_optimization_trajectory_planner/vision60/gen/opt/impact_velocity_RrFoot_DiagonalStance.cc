/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:35 GMT+02:00
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
  double t4100;
  double t3086;
  double t154;
  double t3979;
  double t5349;
  double t11527;
  double t14761;
  double t17653;
  double t17678;
  double t17682;
  double t17732;
  double t17734;
  double t22293;
  double t17695;
  double t17720;
  double t22630;
  double t22649;
  double t22667;
  double t22965;
  double t23012;
  double t23132;
  double t18054;
  double t18566;
  double t18664;
  double t24506;
  double t24522;
  double t24525;
  double t24528;
  double t24529;
  double t24531;
  double t26343;
  double t26506;
  double t26513;
  double t22553;
  double t22566;
  double t21845;
  double t22244;
  double t27260;
  double t27266;
  double t27267;
  double t27271;
  double t27273;
  double t27276;
  double t27282;
  double t27391;
  double t27474;
  double t27558;
  double t27856;
  double t27876;
  double t27903;
  double t29091;
  double t29274;
  double t29505;
  double t29630;
  double t29646;
  double t29648;
  double t31492;
  double t31497;
  double t31552;
  double t31637;
  double t31835;
  double t31874;
  double t31920;
  double t32590;
  double t32599;
  double t32608;
  double t32762;
  double t32769;
  double t32783;
  double t32978;
  double t32979;
  double t32984;
  double t33982;
  double t33983;
  double t33986;
  double t33953;
  double t33972;
  double t33976;
  double t34063;
  double t34075;
  double t34082;
  double t34095;
  double t34114;
  double t34115;
  double t34126;
  double t34133;
  double t34141;
  double t32238;
  double t32266;
  double t32317;
  double t34419;
  double t34420;
  double t34423;
  double t34431;
  double t34435;
  double t34437;
  double t34462;
  double t34471;
  double t34473;
  double t34770;
  double t34797;
  double t34813;
  double t35438;
  double t35439;
  double t35440;
  double t35457;
  double t35482;
  double t35495;
  double t35587;
  double t35593;
  double t35600;
  double t34055;
  double t35830;
  double t36039;
  double t36065;
  double t36177;
  double t36188;
  double t36958;
  double t36960;
  double t36961;
  double t36964;
  double t36965;
  double t36967;
  double t36268;
  double t36315;
  double t36680;
  double t37323;
  double t37366;
  double t37368;
  double t37376;
  double t37770;
  double t38080;
  double t38170;
  double t38171;
  double t38228;
  double t38525;
  double t38677;
  double t38759;
  double t34833;
  double t35060;
  double t35220;
  double t34620;
  t4100 = Sin(var1[15]);
  t3086 = Sin(var1[4]);
  t154 = Cos(var1[15]);
  t3979 = Cos(var1[4]);
  t5349 = Sin(var1[5]);
  t11527 = Sin(var1[16]);
  t14761 = -1.*t4100*t3086;
  t17653 = t154*t3979*t5349;
  t17678 = t14761 + t17653;
  t17682 = Cos(var1[17]);
  t17732 = Cos(var1[16]);
  t17734 = Sin(var1[17]);
  t22293 = Cos(var1[5]);
  t17695 = -1.*t17682;
  t17720 = 1. + t17695;
  t22630 = t3979*t22293*t4100*t11527;
  t22649 = -1.*t17732*t3979*t5349;
  t22667 = t22630 + t22649;
  t22965 = t17732*t3979*t22293*t4100;
  t23012 = t3979*t11527*t5349;
  t23132 = t22965 + t23012;
  t18054 = t154*t3086;
  t18566 = t3979*t4100*t5349;
  t18664 = t18054 + t18566;
  t24506 = -1.*t3979*t22293*t11527;
  t24522 = t17732*t18664;
  t24525 = t24506 + t24522;
  t24528 = -1.*t17732*t3979*t22293;
  t24529 = -1.*t11527*t18664;
  t24531 = t24528 + t24529;
  t26343 = t17732*t3979*t22293;
  t26506 = t11527*t18664;
  t26513 = t26343 + t26506;
  t22553 = -1.*t17732;
  t22566 = 1. + t22553;
  t21845 = -1.*t154;
  t22244 = 1. + t21845;
  t27260 = t154*t3979;
  t27266 = -1.*t4100*t3086*t5349;
  t27267 = t27260 + t27266;
  t27271 = t22293*t11527*t3086;
  t27273 = t17732*t27267;
  t27276 = t27271 + t27273;
  t27282 = -1.*t17732*t22293*t3086;
  t27391 = t11527*t27267;
  t27474 = t27282 + t27391;
  t27558 = Sin(var1[3]);
  t27856 = t154*t27558*t3086;
  t27876 = t3979*t4100*t27558*t5349;
  t27903 = t27856 + t27876;
  t29091 = -1.*t3979*t22293*t11527*t27558;
  t29274 = t17732*t27903;
  t29505 = t29091 + t29274;
  t29630 = t17732*t3979*t22293*t27558;
  t29646 = t11527*t27903;
  t29648 = t29630 + t29646;
  t31492 = Cos(var1[3]);
  t31497 = t31492*t22293;
  t31552 = -1.*t27558*t3086*t5349;
  t31637 = t31497 + t31552;
  t31835 = t3979*t4100*t27558;
  t31874 = -1.*t154*t31637;
  t31920 = t31835 + t31874;
  t32590 = -1.*t22293*t27558*t3086;
  t32599 = -1.*t31492*t5349;
  t32608 = t32590 + t32599;
  t32762 = -1.*t4100*t11527*t32608;
  t32769 = t17732*t31637;
  t32783 = t32762 + t32769;
  t32978 = -1.*t17732*t4100*t32608;
  t32979 = -1.*t11527*t31637;
  t32984 = t32978 + t32979;
  t33982 = -1.*t22293*t27558;
  t33983 = -1.*t31492*t3086*t5349;
  t33986 = t33982 + t33983;
  t33953 = t31492*t22293*t3086;
  t33972 = -1.*t27558*t5349;
  t33976 = t33953 + t33972;
  t34063 = -1.*t154*t31492*t3979;
  t34075 = -1.*t4100*t33986;
  t34082 = t34063 + t34075;
  t34095 = -1.*t11527*t33976;
  t34114 = t17732*t34082;
  t34115 = t34095 + t34114;
  t34126 = t17732*t33976;
  t34133 = t11527*t34082;
  t34141 = t34126 + t34133;
  t32238 = -1.*t154*t3979*t27558;
  t32266 = -1.*t4100*t31637;
  t32317 = t32238 + t32266;
  t34419 = t22293*t27558*t3086;
  t34420 = t31492*t5349;
  t34423 = t34419 + t34420;
  t34431 = -1.*t11527*t34423;
  t34435 = t17732*t32317;
  t34437 = t34431 + t34435;
  t34462 = -1.*t17732*t34423;
  t34471 = -1.*t11527*t32317;
  t34473 = t34462 + t34471;
  t34770 = t17732*t34423;
  t34797 = t11527*t32317;
  t34813 = t34770 + t34797;
  t35438 = -1.*t154*t31492*t3086;
  t35439 = -1.*t31492*t3979*t4100*t5349;
  t35440 = t35438 + t35439;
  t35457 = t31492*t3979*t22293*t11527;
  t35482 = t17732*t35440;
  t35495 = t35457 + t35482;
  t35587 = -1.*t17732*t31492*t3979*t22293;
  t35593 = t11527*t35440;
  t35600 = t35587 + t35593;
  t34055 = -1.*t31492*t3979*t4100;
  t35830 = t22293*t27558;
  t36039 = t31492*t3086*t5349;
  t36065 = t35830 + t36039;
  t36177 = -1.*t154*t36065;
  t36188 = t34055 + t36177;
  t36958 = -1.*t4100*t11527*t33976;
  t36960 = t17732*t36065;
  t36961 = t36958 + t36960;
  t36964 = -1.*t17732*t4100*t33976;
  t36965 = -1.*t11527*t36065;
  t36967 = t36964 + t36965;
  t36268 = t154*t31492*t3979;
  t36315 = -1.*t4100*t36065;
  t36680 = t36268 + t36315;
  t37323 = -1.*t31492*t22293*t3086;
  t37366 = t27558*t5349;
  t37368 = t37323 + t37366;
  t37376 = -1.*t11527*t37368;
  t37770 = t17732*t36680;
  t38080 = t37376 + t37770;
  t38170 = -1.*t17732*t37368;
  t38171 = -1.*t11527*t36680;
  t38228 = t38170 + t38171;
  t38525 = t17732*t37368;
  t38677 = t11527*t36680;
  t38759 = t38525 + t38677;
  t34833 = -1.*t17734*t34437;
  t35060 = t17682*t34813;
  t35220 = t34833 + t35060;
  t34620 = t17682*t34437;
  p_output1[0]=var2[0] + (0.325*t11527*t27267 - 0.575*t17734*t27276 - 0.575*t17720*t27474 - 0.295*(-1.*t17734*t27276 + t17682*t27474) - 0.0641*(t17682*t27276 + t17734*t27474) + 0.325*t22293*t22566*t3086 + 0.1575*t3979*t4100 - 0.1575*t22244*t3086*t5349 - 0.2255*(t3979*t4100 + t154*t3086*t5349))*var2[4] + (-0.575*t17720*t22667 - 0.575*t17734*t23132 - 0.0641*(t17734*t22667 + t17682*t23132) - 0.295*(t17682*t22667 - 1.*t17734*t23132) + 0.2255*t154*t22293*t3979 + 0.1575*t22244*t22293*t3979 + 0.325*t11527*t22293*t3979*t4100 + 0.325*t22566*t3979*t5349)*var2[5] + (0.325*t11527*t17678 - 0.575*t11527*t17678*t17720 - 0.575*t17678*t17732*t17734 - 0.0641*(t17678*t17682*t17732 + t11527*t17678*t17734) - 0.295*(t11527*t17678*t17682 - 1.*t17678*t17732*t17734) - 0.2255*t18664 + 0.1575*t154*t3086 + 0.1575*t3979*t4100*t5349)*var2[15] + (0.325*t17732*t18664 - 0.575*t17720*t24525 - 0.575*t17734*t24531 - 0.0641*(t17734*t24525 + t17682*t24531) - 0.295*(t17682*t24525 - 1.*t17734*t24531) - 0.325*t11527*t22293*t3979)*var2[16] + (-0.575*t17682*t24525 - 0.575*t17734*t26513 - 0.0641*(-1.*t17734*t24525 + t17682*t26513) - 0.295*(-1.*t17682*t24525 - 1.*t17734*t26513))*var2[17];
  p_output1[1]=var2[1] + (-0.325*t22566*t33976 - 0.1575*t22244*t33986 - 0.2255*(t154*t33986 + t34055) + 0.325*t11527*t34082 - 0.575*t17734*t34115 - 0.575*t17720*t34141 - 0.295*(-1.*t17734*t34115 + t17682*t34141) - 0.0641*(t17682*t34115 + t17734*t34141) - 0.1575*t31492*t3979*t4100)*var2[3] + (0.325*t11527*t27903 - 0.575*t17734*t29505 - 0.575*t17720*t29648 - 0.295*(-1.*t17734*t29505 + t17682*t29648) - 0.0641*(t17682*t29505 + t17734*t29648) - 0.325*t22293*t22566*t27558*t3979 + 0.1575*t27558*t3086*t4100 + 0.1575*t22244*t27558*t3979*t5349 - 0.2255*(t27558*t3086*t4100 - 1.*t154*t27558*t3979*t5349))*var2[4] + (-0.325*t22566*t31637 - 0.2255*t154*t32608 - 0.1575*t22244*t32608 - 0.575*t17720*t32783 - 0.575*t17734*t32984 - 0.0641*(t17734*t32783 + t17682*t32984) - 0.295*(t17682*t32783 - 1.*t17734*t32984) - 0.325*t11527*t32608*t4100)*var2[5] + (0.325*t11527*t31920 - 0.575*t11527*t17720*t31920 - 0.575*t17732*t17734*t31920 - 0.0641*(t17682*t17732*t31920 + t11527*t17734*t31920) - 0.295*(t11527*t17682*t31920 - 1.*t17732*t17734*t31920) - 0.2255*t32317 - 0.1575*t154*t27558*t3979 - 0.1575*t31637*t4100)*var2[15] + (0.325*t17732*t32317 - 0.325*t11527*t34423 - 0.575*t17720*t34437 - 0.575*t17734*t34473 - 0.0641*(t17734*t34437 + t17682*t34473) - 0.295*(-1.*t17734*t34473 + t34620))*var2[16] + (-0.575*t17682*t34437 - 0.575*t17734*t34813 - 0.295*(-1.*t17682*t34437 - 1.*t17734*t34813) - 0.0641*t35220)*var2[17];
  p_output1[2]=var2[2] + (-0.1575*t22244*t31637 + 0.325*t11527*t32317 - 0.325*t22566*t34423 - 0.575*t17734*t34437 - 0.575*t17720*t34813 - 0.0641*(t34620 + t17734*t34813) - 0.295*t35220 - 0.1575*t27558*t3979*t4100 - 0.2255*(t154*t31637 - 1.*t27558*t3979*t4100))*var2[3] + (0.325*t11527*t35440 - 0.575*t17734*t35495 - 0.575*t17720*t35600 - 0.295*(-1.*t17734*t35495 + t17682*t35600) - 0.0641*(t17682*t35495 + t17734*t35600) + 0.325*t22293*t22566*t31492*t3979 - 0.1575*t3086*t31492*t4100 - 0.1575*t22244*t31492*t3979*t5349 - 0.2255*(-1.*t3086*t31492*t4100 + t154*t31492*t3979*t5349))*var2[4] + (-0.2255*t154*t33976 - 0.1575*t22244*t33976 - 0.325*t22566*t36065 - 0.575*t17720*t36961 - 0.575*t17734*t36967 - 0.0641*(t17734*t36961 + t17682*t36967) - 0.295*(t17682*t36961 - 1.*t17734*t36967) - 0.325*t11527*t33976*t4100)*var2[5] + (0.325*t11527*t36188 - 0.575*t11527*t17720*t36188 - 0.575*t17732*t17734*t36188 - 0.0641*(t17682*t17732*t36188 + t11527*t17734*t36188) - 0.295*(t11527*t17682*t36188 - 1.*t17732*t17734*t36188) - 0.2255*t36680 + 0.1575*t154*t31492*t3979 - 0.1575*t36065*t4100)*var2[15] + (0.325*t17732*t36680 - 0.325*t11527*t37368 - 0.575*t17720*t38080 - 0.575*t17734*t38228 - 0.0641*(t17734*t38080 + t17682*t38228) - 0.295*(t17682*t38080 - 1.*t17734*t38228))*var2[16] + (-0.575*t17682*t38080 - 0.575*t17734*t38759 - 0.0641*(-1.*t17734*t38080 + t17682*t38759) - 0.295*(-1.*t17682*t38080 - 1.*t17734*t38759))*var2[17];
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

#include "impact_velocity_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void impact_velocity_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
