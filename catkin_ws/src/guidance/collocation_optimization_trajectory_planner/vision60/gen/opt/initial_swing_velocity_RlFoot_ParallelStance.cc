/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:08:20 GMT+02:00
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
  double t12993;
  double t12236;
  double t2590;
  double t12830;
  double t13013;
  double t13636;
  double t18816;
  double t18884;
  double t18892;
  double t19453;
  double t19969;
  double t19980;
  double t21381;
  double t19459;
  double t19500;
  double t23258;
  double t23841;
  double t23886;
  double t23888;
  double t23896;
  double t23916;
  double t20058;
  double t20320;
  double t20409;
  double t23965;
  double t24457;
  double t24785;
  double t24825;
  double t24845;
  double t24865;
  double t25500;
  double t25505;
  double t25512;
  double t21765;
  double t22195;
  double t21373;
  double t21377;
  double t25667;
  double t25670;
  double t25672;
  double t25685;
  double t25692;
  double t25694;
  double t25696;
  double t25697;
  double t25698;
  double t25716;
  double t25724;
  double t25725;
  double t25726;
  double t25728;
  double t25729;
  double t25731;
  double t25810;
  double t25882;
  double t25883;
  double t25917;
  double t25918;
  double t25919;
  double t25920;
  double t26035;
  double t26293;
  double t26361;
  double t26576;
  double t26614;
  double t26642;
  double t26698;
  double t26699;
  double t26700;
  double t26722;
  double t26735;
  double t26743;
  double t27034;
  double t27035;
  double t27038;
  double t26789;
  double t26983;
  double t27032;
  double t27046;
  double t27047;
  double t27052;
  double t27054;
  double t27055;
  double t27060;
  double t27066;
  double t27119;
  double t27205;
  double t26529;
  double t26538;
  double t26542;
  double t27226;
  double t27227;
  double t27228;
  double t27232;
  double t27235;
  double t27236;
  double t27238;
  double t27392;
  double t27402;
  double t27446;
  double t27450;
  double t27451;
  double t28046;
  double t28088;
  double t28828;
  double t28880;
  double t28882;
  double t28887;
  double t28914;
  double t28916;
  double t28920;
  double t27042;
  double t28947;
  double t28988;
  double t28993;
  double t29359;
  double t29540;
  double t29727;
  double t29750;
  double t29751;
  double t29753;
  double t29754;
  double t29756;
  double t29555;
  double t29557;
  double t29558;
  double t30211;
  double t30212;
  double t30242;
  double t30293;
  double t30299;
  double t30305;
  double t30323;
  double t30326;
  double t30339;
  double t30439;
  double t30443;
  double t30444;
  double t27456;
  double t27465;
  double t27473;
  double t27431;
  t12993 = Sin(var1[9]);
  t12236 = Sin(var1[4]);
  t2590 = Cos(var1[9]);
  t12830 = Cos(var1[4]);
  t13013 = Sin(var1[5]);
  t13636 = Sin(var1[10]);
  t18816 = -1.*t12993*t12236;
  t18884 = t2590*t12830*t13013;
  t18892 = t18816 + t18884;
  t19453 = Cos(var1[11]);
  t19969 = Cos(var1[10]);
  t19980 = Sin(var1[11]);
  t21381 = Cos(var1[5]);
  t19459 = -1.*t19453;
  t19500 = 1. + t19459;
  t23258 = t12830*t21381*t12993*t13636;
  t23841 = -1.*t19969*t12830*t13013;
  t23886 = t23258 + t23841;
  t23888 = t19969*t12830*t21381*t12993;
  t23896 = t12830*t13636*t13013;
  t23916 = t23888 + t23896;
  t20058 = t2590*t12236;
  t20320 = t12830*t12993*t13013;
  t20409 = t20058 + t20320;
  t23965 = -1.*t12830*t21381*t13636;
  t24457 = t19969*t20409;
  t24785 = t23965 + t24457;
  t24825 = -1.*t19969*t12830*t21381;
  t24845 = -1.*t13636*t20409;
  t24865 = t24825 + t24845;
  t25500 = t19969*t12830*t21381;
  t25505 = t13636*t20409;
  t25512 = t25500 + t25505;
  t21765 = -1.*t19969;
  t22195 = 1. + t21765;
  t21373 = -1.*t2590;
  t21377 = 1. + t21373;
  t25667 = t2590*t12830;
  t25670 = -1.*t12993*t12236*t13013;
  t25672 = t25667 + t25670;
  t25685 = t21381*t13636*t12236;
  t25692 = t19969*t25672;
  t25694 = t25685 + t25692;
  t25696 = -1.*t19969*t21381*t12236;
  t25697 = t13636*t25672;
  t25698 = t25696 + t25697;
  t25716 = Sin(var1[3]);
  t25724 = t2590*t25716*t12236;
  t25725 = t12830*t12993*t25716*t13013;
  t25726 = t25724 + t25725;
  t25728 = -1.*t12830*t21381*t13636*t25716;
  t25729 = t19969*t25726;
  t25731 = t25728 + t25729;
  t25810 = t19969*t12830*t21381*t25716;
  t25882 = t13636*t25726;
  t25883 = t25810 + t25882;
  t25917 = Cos(var1[3]);
  t25918 = t25917*t21381;
  t25919 = -1.*t25716*t12236*t13013;
  t25920 = t25918 + t25919;
  t26035 = t12830*t12993*t25716;
  t26293 = -1.*t2590*t25920;
  t26361 = t26035 + t26293;
  t26576 = -1.*t21381*t25716*t12236;
  t26614 = -1.*t25917*t13013;
  t26642 = t26576 + t26614;
  t26698 = -1.*t12993*t13636*t26642;
  t26699 = t19969*t25920;
  t26700 = t26698 + t26699;
  t26722 = -1.*t19969*t12993*t26642;
  t26735 = -1.*t13636*t25920;
  t26743 = t26722 + t26735;
  t27034 = -1.*t21381*t25716;
  t27035 = -1.*t25917*t12236*t13013;
  t27038 = t27034 + t27035;
  t26789 = t25917*t21381*t12236;
  t26983 = -1.*t25716*t13013;
  t27032 = t26789 + t26983;
  t27046 = -1.*t2590*t25917*t12830;
  t27047 = -1.*t12993*t27038;
  t27052 = t27046 + t27047;
  t27054 = -1.*t13636*t27032;
  t27055 = t19969*t27052;
  t27060 = t27054 + t27055;
  t27066 = t19969*t27032;
  t27119 = t13636*t27052;
  t27205 = t27066 + t27119;
  t26529 = -1.*t2590*t12830*t25716;
  t26538 = -1.*t12993*t25920;
  t26542 = t26529 + t26538;
  t27226 = t21381*t25716*t12236;
  t27227 = t25917*t13013;
  t27228 = t27226 + t27227;
  t27232 = -1.*t13636*t27228;
  t27235 = t19969*t26542;
  t27236 = t27232 + t27235;
  t27238 = -1.*t19969*t27228;
  t27392 = -1.*t13636*t26542;
  t27402 = t27238 + t27392;
  t27446 = t19969*t27228;
  t27450 = t13636*t26542;
  t27451 = t27446 + t27450;
  t28046 = -1.*t2590*t25917*t12236;
  t28088 = -1.*t25917*t12830*t12993*t13013;
  t28828 = t28046 + t28088;
  t28880 = t25917*t12830*t21381*t13636;
  t28882 = t19969*t28828;
  t28887 = t28880 + t28882;
  t28914 = -1.*t19969*t25917*t12830*t21381;
  t28916 = t13636*t28828;
  t28920 = t28914 + t28916;
  t27042 = -1.*t25917*t12830*t12993;
  t28947 = t21381*t25716;
  t28988 = t25917*t12236*t13013;
  t28993 = t28947 + t28988;
  t29359 = -1.*t2590*t28993;
  t29540 = t27042 + t29359;
  t29727 = -1.*t12993*t13636*t27032;
  t29750 = t19969*t28993;
  t29751 = t29727 + t29750;
  t29753 = -1.*t19969*t12993*t27032;
  t29754 = -1.*t13636*t28993;
  t29756 = t29753 + t29754;
  t29555 = t2590*t25917*t12830;
  t29557 = -1.*t12993*t28993;
  t29558 = t29555 + t29557;
  t30211 = -1.*t25917*t21381*t12236;
  t30212 = t25716*t13013;
  t30242 = t30211 + t30212;
  t30293 = -1.*t13636*t30242;
  t30299 = t19969*t29558;
  t30305 = t30293 + t30299;
  t30323 = -1.*t19969*t30242;
  t30326 = -1.*t13636*t29558;
  t30339 = t30323 + t30326;
  t30439 = t19969*t30242;
  t30443 = t13636*t29558;
  t30444 = t30439 + t30443;
  t27456 = -1.*t19980*t27236;
  t27465 = t19453*t27451;
  t27473 = t27456 + t27465;
  t27431 = t19453*t27236;
  p_output1[0]=var2[0] + (-0.1575*t12830*t12993 + 0.1575*t12236*t13013*t21377 + 0.325*t12236*t21381*t22195 + 0.325*t13636*t25672 - 0.575*t19980*t25694 - 0.575*t19500*t25698 - 0.295*(-1.*t19980*t25694 + t19453*t25698) - 0.0641*(t19453*t25694 + t19980*t25698) + 0.2255*(t12830*t12993 + t12236*t13013*t2590))*var2[4] + (0.325*t12830*t12993*t13636*t21381 - 0.1575*t12830*t21377*t21381 + 0.325*t12830*t13013*t22195 - 0.575*t19500*t23886 - 0.575*t19980*t23916 - 0.0641*(t19980*t23886 + t19453*t23916) - 0.295*(t19453*t23886 - 1.*t19980*t23916) - 0.2255*t12830*t21381*t2590)*var2[5] + (-0.1575*t12830*t12993*t13013 + 0.325*t13636*t18892 - 0.575*t13636*t18892*t19500 - 0.575*t18892*t19969*t19980 - 0.0641*(t18892*t19453*t19969 + t13636*t18892*t19980) - 0.295*(t13636*t18892*t19453 - 1.*t18892*t19969*t19980) + 0.2255*t20409 - 0.1575*t12236*t2590)*var2[9] + (0.325*t19969*t20409 - 0.325*t12830*t13636*t21381 - 0.575*t19500*t24785 - 0.575*t19980*t24865 - 0.0641*(t19980*t24785 + t19453*t24865) - 0.295*(t19453*t24785 - 1.*t19980*t24865))*var2[10] + (-0.575*t19453*t24785 - 0.575*t19980*t25512 - 0.0641*(-1.*t19980*t24785 + t19453*t25512) - 0.295*(-1.*t19453*t24785 - 1.*t19980*t25512))*var2[11];
  p_output1[1]=var2[1] + (0.1575*t12830*t12993*t25917 - 0.325*t22195*t27032 + 0.1575*t21377*t27038 + 0.2255*(t2590*t27038 + t27042) + 0.325*t13636*t27052 - 0.575*t19980*t27060 - 0.575*t19500*t27205 - 0.295*(-1.*t19980*t27060 + t19453*t27205) - 0.0641*(t19453*t27060 + t19980*t27205))*var2[3] + (-0.1575*t12236*t12993*t25716 - 0.1575*t12830*t13013*t21377*t25716 - 0.325*t12830*t21381*t22195*t25716 + 0.325*t13636*t25726 - 0.575*t19980*t25731 - 0.575*t19500*t25883 - 0.295*(-1.*t19980*t25731 + t19453*t25883) - 0.0641*(t19453*t25731 + t19980*t25883) + 0.2255*(t12236*t12993*t25716 - 1.*t12830*t13013*t25716*t2590))*var2[4] + (-0.325*t22195*t25920 - 0.325*t12993*t13636*t26642 + 0.1575*t21377*t26642 + 0.2255*t2590*t26642 - 0.575*t19500*t26700 - 0.575*t19980*t26743 - 0.0641*(t19980*t26700 + t19453*t26743) - 0.295*(t19453*t26700 - 1.*t19980*t26743))*var2[5] + (0.1575*t12830*t25716*t2590 + 0.1575*t12993*t25920 + 0.325*t13636*t26361 - 0.575*t13636*t19500*t26361 - 0.575*t19969*t19980*t26361 - 0.0641*(t19453*t19969*t26361 + t13636*t19980*t26361) - 0.295*(t13636*t19453*t26361 - 1.*t19969*t19980*t26361) + 0.2255*t26542)*var2[9] + (0.325*t19969*t26542 - 0.325*t13636*t27228 - 0.575*t19500*t27236 - 0.575*t19980*t27402 - 0.0641*(t19980*t27236 + t19453*t27402) - 0.295*(-1.*t19980*t27402 + t27431))*var2[10] + (-0.575*t19453*t27236 - 0.575*t19980*t27451 - 0.295*(-1.*t19453*t27236 - 1.*t19980*t27451) - 0.0641*t27473)*var2[11];
  p_output1[2]=var2[2] + (0.1575*t12830*t12993*t25716 + 0.1575*t21377*t25920 + 0.2255*(-1.*t12830*t12993*t25716 + t2590*t25920) + 0.325*t13636*t26542 - 0.325*t22195*t27228 - 0.575*t19980*t27236 - 0.575*t19500*t27451 - 0.0641*(t27431 + t19980*t27451) - 0.295*t27473)*var2[3] + (0.1575*t12236*t12993*t25917 + 0.1575*t12830*t13013*t21377*t25917 + 0.325*t12830*t21381*t22195*t25917 + 0.2255*(-1.*t12236*t12993*t25917 + t12830*t13013*t2590*t25917) + 0.325*t13636*t28828 - 0.575*t19980*t28887 - 0.575*t19500*t28920 - 0.295*(-1.*t19980*t28887 + t19453*t28920) - 0.0641*(t19453*t28887 + t19980*t28920))*var2[4] + (-0.325*t12993*t13636*t27032 + 0.1575*t21377*t27032 + 0.2255*t2590*t27032 - 0.325*t22195*t28993 - 0.575*t19500*t29751 - 0.575*t19980*t29756 - 0.0641*(t19980*t29751 + t19453*t29756) - 0.295*(t19453*t29751 - 1.*t19980*t29756))*var2[5] + (-0.1575*t12830*t2590*t25917 + 0.1575*t12993*t28993 + 0.325*t13636*t29540 - 0.575*t13636*t19500*t29540 - 0.575*t19969*t19980*t29540 - 0.0641*(t19453*t19969*t29540 + t13636*t19980*t29540) - 0.295*(t13636*t19453*t29540 - 1.*t19969*t19980*t29540) + 0.2255*t29558)*var2[9] + (0.325*t19969*t29558 - 0.325*t13636*t30242 - 0.575*t19500*t30305 - 0.575*t19980*t30339 - 0.0641*(t19980*t30305 + t19453*t30339) - 0.295*(t19453*t30305 - 1.*t19980*t30339))*var2[10] + (-0.575*t19453*t30305 - 0.575*t19980*t30444 - 0.0641*(-1.*t19980*t30305 + t19453*t30444) - 0.295*(-1.*t19453*t30305 - 1.*t19980*t30444))*var2[11];
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

#include "initial_swing_velocity_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void initial_swing_velocity_RlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
