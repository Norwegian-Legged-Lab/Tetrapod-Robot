/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:49 GMT+02:00
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
  double t25363;
  double t3855;
  double t25116;
  double t25402;
  double t25430;
  double t25354;
  double t25509;
  double t25328;
  double t25510;
  double t25511;
  double t25523;
  double t25573;
  double t25580;
  double t25582;
  double t25584;
  double t25611;
  double t25672;
  double t25673;
  double t25674;
  double t25425;
  double t25429;
  double t25339;
  double t25349;
  double t25640;
  double t25671;
  double t25714;
  double t25722;
  double t25726;
  double t25728;
  double t25729;
  double t25730;
  double t25775;
  double t25844;
  double t25849;
  double t25859;
  double t25874;
  double t25875;
  double t25928;
  double t25929;
  double t25937;
  double t25939;
  double t25940;
  double t25941;
  double t25993;
  double t25994;
  double t25995;
  double t26020;
  double t26027;
  double t26036;
  double t26041;
  double t26042;
  double t26026;
  double t26028;
  double t26029;
  double t26054;
  double t26055;
  double t26060;
  double t26062;
  double t26063;
  double t26064;
  double t26069;
  double t26074;
  double t26075;
  double t26107;
  double t26108;
  double t26111;
  double t26113;
  double t26114;
  double t26118;
  double t26146;
  double t26152;
  double t26153;
  double t26178;
  double t26186;
  double t26187;
  double t26191;
  double t26193;
  double t26198;
  double t26206;
  double t26213;
  double t26215;
  double t26228;
  double t26231;
  double t26235;
  double t26265;
  double t26266;
  double t26268;
  double t26297;
  double t26302;
  double t26305;
  double t26324;
  double t26326;
  double t26328;
  double t26337;
  double t26341;
  double t26342;
  double t26344;
  double t26345;
  double t26347;
  double t26364;
  double t26365;
  double t26367;
  double t26396;
  double t26398;
  double t26399;
  double t26358;
  double t26447;
  double t26449;
  double t26451;
  double t26453;
  double t26454;
  double t26455;
  double t26457;
  double t26458;
  double t26460;
  double t26483;
  double t26484;
  double t26485;
  double t26489;
  double t26491;
  double t26495;
  double t26501;
  double t26502;
  double t26503;
  double t26045;
  double t26524;
  double t26525;
  double t26533;
  double t26535;
  double t26536;
  double t26554;
  double t26555;
  double t26559;
  double t26562;
  double t26563;
  double t26564;
  double t26567;
  double t26570;
  double t26571;
  double t26591;
  double t26592;
  double t26593;
  t25363 = Sin(var1[4]);
  t3855 = Cos(var1[4]);
  t25116 = Sin(var1[12]);
  t25402 = Cos(var1[12]);
  t25430 = Sin(var1[5]);
  t25354 = Cos(var1[5]);
  t25509 = Sin(var1[13]);
  t25328 = Cos(var1[13]);
  t25510 = t25402*t3855;
  t25511 = -1.*t25116*t25363*t25430;
  t25523 = t25510 + t25511;
  t25573 = Sin(var1[14]);
  t25580 = t25354*t25509*t25363;
  t25582 = t25328*t25523;
  t25584 = t25580 + t25582;
  t25611 = Cos(var1[14]);
  t25672 = -1.*t25328*t25354*t25363;
  t25673 = t25509*t25523;
  t25674 = t25672 + t25673;
  t25425 = -1.*t25402;
  t25429 = 1. + t25425;
  t25339 = -1.*t25328;
  t25349 = 1. + t25339;
  t25640 = -1.*t25611;
  t25671 = 1. + t25640;
  t25714 = t3855*t25354*t25116*t25509;
  t25722 = -1.*t25328*t3855*t25430;
  t25726 = t25714 + t25722;
  t25728 = t25328*t3855*t25354*t25116;
  t25729 = t3855*t25509*t25430;
  t25730 = t25728 + t25729;
  t25775 = -1.*t25116*t25363;
  t25844 = t25402*t3855*t25430;
  t25849 = t25775 + t25844;
  t25859 = t25402*t25363;
  t25874 = t3855*t25116*t25430;
  t25875 = t25859 + t25874;
  t25928 = -1.*t3855*t25354*t25509;
  t25929 = t25328*t25875;
  t25937 = t25928 + t25929;
  t25939 = -1.*t25328*t3855*t25354;
  t25940 = -1.*t25509*t25875;
  t25941 = t25939 + t25940;
  t25993 = t25328*t3855*t25354;
  t25994 = t25509*t25875;
  t25995 = t25993 + t25994;
  t26020 = Cos(var1[3]);
  t26027 = Sin(var1[3]);
  t26036 = -1.*t25354*t26027;
  t26041 = -1.*t26020*t25363*t25430;
  t26042 = t26036 + t26041;
  t26026 = t26020*t25354*t25363;
  t26028 = -1.*t26027*t25430;
  t26029 = t26026 + t26028;
  t26054 = -1.*t25402*t26020*t3855;
  t26055 = -1.*t25116*t26042;
  t26060 = t26054 + t26055;
  t26062 = -1.*t25509*t26029;
  t26063 = t25328*t26060;
  t26064 = t26062 + t26063;
  t26069 = t25328*t26029;
  t26074 = t25509*t26060;
  t26075 = t26069 + t26074;
  t26107 = t25402*t26027*t25363;
  t26108 = t3855*t25116*t26027*t25430;
  t26111 = t26107 + t26108;
  t26113 = -1.*t3855*t25354*t25509*t26027;
  t26114 = t25328*t26111;
  t26118 = t26113 + t26114;
  t26146 = t25328*t3855*t25354*t26027;
  t26152 = t25509*t26111;
  t26153 = t26146 + t26152;
  t26178 = -1.*t25354*t26027*t25363;
  t26186 = -1.*t26020*t25430;
  t26187 = t26178 + t26186;
  t26191 = t26020*t25354;
  t26193 = -1.*t26027*t25363*t25430;
  t26198 = t26191 + t26193;
  t26206 = -1.*t25116*t25509*t26187;
  t26213 = t25328*t26198;
  t26215 = t26206 + t26213;
  t26228 = -1.*t25328*t25116*t26187;
  t26231 = -1.*t25509*t26198;
  t26235 = t26228 + t26231;
  t26265 = t3855*t25116*t26027;
  t26266 = -1.*t25402*t26198;
  t26268 = t26265 + t26266;
  t26297 = -1.*t25402*t3855*t26027;
  t26302 = -1.*t25116*t26198;
  t26305 = t26297 + t26302;
  t26324 = t25354*t26027*t25363;
  t26326 = t26020*t25430;
  t26328 = t26324 + t26326;
  t26337 = -1.*t25509*t26328;
  t26341 = t25328*t26305;
  t26342 = t26337 + t26341;
  t26344 = -1.*t25328*t26328;
  t26345 = -1.*t25509*t26305;
  t26347 = t26344 + t26345;
  t26364 = t25328*t26328;
  t26365 = t25509*t26305;
  t26367 = t26364 + t26365;
  t26396 = -1.*t25573*t26342;
  t26398 = t25611*t26367;
  t26399 = t26396 + t26398;
  t26358 = t25611*t26342;
  t26447 = -1.*t25402*t26020*t25363;
  t26449 = -1.*t26020*t3855*t25116*t25430;
  t26451 = t26447 + t26449;
  t26453 = t26020*t3855*t25354*t25509;
  t26454 = t25328*t26451;
  t26455 = t26453 + t26454;
  t26457 = -1.*t25328*t26020*t3855*t25354;
  t26458 = t25509*t26451;
  t26460 = t26457 + t26458;
  t26483 = t25354*t26027;
  t26484 = t26020*t25363*t25430;
  t26485 = t26483 + t26484;
  t26489 = -1.*t25116*t25509*t26029;
  t26491 = t25328*t26485;
  t26495 = t26489 + t26491;
  t26501 = -1.*t25328*t25116*t26029;
  t26502 = -1.*t25509*t26485;
  t26503 = t26501 + t26502;
  t26045 = -1.*t26020*t3855*t25116;
  t26524 = -1.*t25402*t26485;
  t26525 = t26045 + t26524;
  t26533 = t25402*t26020*t3855;
  t26535 = -1.*t25116*t26485;
  t26536 = t26533 + t26535;
  t26554 = -1.*t26020*t25354*t25363;
  t26555 = t26027*t25430;
  t26559 = t26554 + t26555;
  t26562 = -1.*t25509*t26559;
  t26563 = t25328*t26536;
  t26564 = t26562 + t26563;
  t26567 = -1.*t25328*t26559;
  t26570 = -1.*t25509*t26536;
  t26571 = t26567 + t26570;
  t26591 = t25328*t26559;
  t26592 = t25509*t26536;
  t26593 = t26591 + t26592;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t25349*t25354*t25363 - 0.1575*t25363*t25429*t25430 - 0.325*t25509*t25523 + 0.075*t25573*t25584 + 0.075*t25671*t25674 - 0.0641*(t25584*t25611 + t25573*t25674) + 0.355*(-1.*t25573*t25584 + t25611*t25674) + 0.1575*t25116*t3855 - 0.2255*(t25363*t25402*t25430 + t25116*t3855);
  p_output1[2]=0.075*t25671*t25726 + 0.075*t25573*t25730 + 0.355*(t25611*t25726 - 1.*t25573*t25730) - 0.0641*(t25573*t25726 + t25611*t25730) + 0.2255*t25354*t25402*t3855 + 0.1575*t25354*t25429*t3855 - 0.325*t25349*t25430*t3855 - 0.325*t25116*t25354*t25509*t3855;
  p_output1[3]=0.1575*t25363*t25402 - 0.325*t25509*t25849 + 0.075*t25328*t25573*t25849 + 0.075*t25509*t25671*t25849 - 0.0641*(t25509*t25573*t25849 + t25328*t25611*t25849) + 0.355*(-1.*t25328*t25573*t25849 + t25509*t25611*t25849) - 0.2255*t25875 + 0.1575*t25116*t25430*t3855;
  p_output1[4]=-0.325*t25328*t25875 + 0.075*t25671*t25937 + 0.075*t25573*t25941 + 0.355*(t25611*t25937 - 1.*t25573*t25941) - 0.0641*(t25573*t25937 + t25611*t25941) + 0.325*t25354*t25509*t3855;
  p_output1[5]=0.075*t25611*t25937 + 0.075*t25573*t25995 + 0.355*(-1.*t25611*t25937 - 1.*t25573*t25995) - 0.0641*(-1.*t25573*t25937 + t25611*t25995);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=0.325*t25349*t26029 - 0.1575*t25429*t26042 - 0.2255*(t25402*t26042 + t26045) - 0.325*t25509*t26060 + 0.075*t25573*t26064 + 0.075*t25671*t26075 - 0.0641*(t25611*t26064 + t25573*t26075) + 0.355*(-1.*t25573*t26064 + t25611*t26075) - 0.1575*t25116*t26020*t3855;
  p_output1[9]=0.1575*t25116*t25363*t26027 - 0.325*t25509*t26111 + 0.075*t25573*t26118 + 0.075*t25671*t26153 - 0.0641*(t25611*t26118 + t25573*t26153) + 0.355*(-1.*t25573*t26118 + t25611*t26153) + 0.325*t25349*t25354*t26027*t3855 + 0.1575*t25429*t25430*t26027*t3855 - 0.2255*(t25116*t25363*t26027 - 1.*t25402*t25430*t26027*t3855);
  p_output1[10]=-0.2255*t25402*t26187 - 0.1575*t25429*t26187 + 0.325*t25116*t25509*t26187 + 0.325*t25349*t26198 + 0.075*t25671*t26215 + 0.075*t25573*t26235 + 0.355*(t25611*t26215 - 1.*t25573*t26235) - 0.0641*(t25573*t26215 + t25611*t26235);
  p_output1[11]=-0.1575*t25116*t26198 - 0.325*t25509*t26268 + 0.075*t25328*t25573*t26268 + 0.075*t25509*t25671*t26268 - 0.0641*(t25509*t25573*t26268 + t25328*t25611*t26268) + 0.355*(-1.*t25328*t25573*t26268 + t25509*t25611*t26268) - 0.2255*t26305 - 0.1575*t25402*t26027*t3855;
  p_output1[12]=-0.325*t25328*t26305 + 0.325*t25509*t26328 + 0.075*t25671*t26342 + 0.075*t25573*t26347 - 0.0641*(t25573*t26342 + t25611*t26347) + 0.355*(-1.*t25573*t26347 + t26358);
  p_output1[13]=0.075*t25611*t26342 + 0.075*t25573*t26367 + 0.355*(-1.*t25611*t26342 - 1.*t25573*t26367) - 0.0641*t26399;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.1575*t25429*t26198 - 0.325*t25509*t26305 + 0.325*t25349*t26328 + 0.075*t25573*t26342 + 0.075*t25671*t26367 - 0.0641*(t26358 + t25573*t26367) + 0.355*t26399 - 0.1575*t25116*t26027*t3855 - 0.2255*(t25402*t26198 - 1.*t25116*t26027*t3855);
  p_output1[17]=-0.1575*t25116*t25363*t26020 - 0.325*t25509*t26451 + 0.075*t25573*t26455 + 0.075*t25671*t26460 - 0.0641*(t25611*t26455 + t25573*t26460) + 0.355*(-1.*t25573*t26455 + t25611*t26460) - 0.325*t25349*t25354*t26020*t3855 - 0.1575*t25429*t25430*t26020*t3855 - 0.2255*(-1.*t25116*t25363*t26020 + t25402*t25430*t26020*t3855);
  p_output1[18]=-0.2255*t25402*t26029 - 0.1575*t25429*t26029 + 0.325*t25116*t25509*t26029 + 0.325*t25349*t26485 + 0.075*t25671*t26495 + 0.075*t25573*t26503 + 0.355*(t25611*t26495 - 1.*t25573*t26503) - 0.0641*(t25573*t26495 + t25611*t26503);
  p_output1[19]=-0.1575*t25116*t26485 - 0.325*t25509*t26525 + 0.075*t25328*t25573*t26525 + 0.075*t25509*t25671*t26525 - 0.0641*(t25509*t25573*t26525 + t25328*t25611*t26525) + 0.355*(-1.*t25328*t25573*t26525 + t25509*t25611*t26525) - 0.2255*t26536 + 0.1575*t25402*t26020*t3855;
  p_output1[20]=-0.325*t25328*t26536 + 0.325*t25509*t26559 + 0.075*t25671*t26564 + 0.075*t25573*t26571 + 0.355*(t25611*t26564 - 1.*t25573*t26571) - 0.0641*(t25573*t26564 + t25611*t26571);
  p_output1[21]=0.075*t25611*t26564 + 0.075*t25573*t26593 + 0.355*(-1.*t25611*t26564 - 1.*t25573*t26593) - 0.0641*(-1.*t25573*t26564 + t25611*t26593);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
