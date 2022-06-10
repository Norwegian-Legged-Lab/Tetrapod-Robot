/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:25 GMT+02:00
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
  double t79;
  double t148;
  double t123;
  double t341;
  double t372;
  double t337;
  double t406;
  double t140;
  double t426;
  double t430;
  double t433;
  double t149;
  double t411;
  double t344;
  double t407;
  double t408;
  double t141;
  double t156;
  double t223;
  double t524;
  double t521;
  double t440;
  double t445;
  double t462;
  double t480;
  double t481;
  double t488;
  double t500;
  double t501;
  double t506;
  double t527;
  double t530;
  double t531;
  double t566;
  double t578;
  double t579;
  double t584;
  double t587;
  double t610;
  double t632;
  double t634;
  double t636;
  double t650;
  double t654;
  double t664;
  double t412;
  double t470;
  double t471;
  double t807;
  double t808;
  double t876;
  double t910;
  double t915;
  double t918;
  double t920;
  double t924;
  double t929;
  double t948;
  double t952;
  double t958;
  double t959;
  double t976;
  double t980;
  double t985;
  double t816;
  double t817;
  double t875;
  double t962;
  double t966;
  double t998;
  double t999;
  double t1003;
  double t1005;
  double t1009;
  double t1011;
  double t1017;
  double t968;
  double t988;
  double t993;
  double t1008;
  double t1018;
  double t1019;
  double t1028;
  double t1033;
  double t1037;
  double t490;
  double t513;
  double t515;
  double t996;
  double t1061;
  double t1099;
  double t1126;
  double t1163;
  double t1172;
  double t1297;
  double t1316;
  t79 = Cos(var1[4]);
  t148 = Cos(var1[12]);
  t123 = Cos(var1[5]);
  t341 = Cos(var1[14]);
  t372 = Sin(var1[13]);
  t337 = Cos(var1[13]);
  t406 = Sin(var1[14]);
  t140 = Sin(var1[12]);
  t426 = t341*t372;
  t430 = -1.*t337*t406;
  t433 = t426 + t430;
  t149 = Sin(var1[5]);
  t411 = Sin(var1[4]);
  t344 = t337*t341;
  t407 = t372*t406;
  t408 = t344 + t407;
  t141 = -1.*t123*t140;
  t156 = -1.*t148*t149;
  t223 = t141 + t156;
  t524 = Cos(var1[3]);
  t521 = Sin(var1[3]);
  t440 = t148*t123*t433;
  t445 = -1.*t140*t433*t149;
  t462 = t440 + t445;
  t480 = -1.*t341*t372;
  t481 = t337*t406;
  t488 = t480 + t481;
  t500 = t148*t123*t408;
  t501 = -1.*t140*t408*t149;
  t506 = t500 + t501;
  t527 = t148*t123;
  t530 = -1.*t140*t149;
  t531 = t527 + t530;
  t566 = t123*t140*t433;
  t578 = t148*t433*t149;
  t579 = t566 + t578;
  t584 = t79*t408;
  t587 = -1.*t411*t462;
  t610 = t584 + t587;
  t632 = t123*t140*t408;
  t634 = t148*t408*t149;
  t636 = t632 + t634;
  t650 = t79*t488;
  t654 = -1.*t411*t506;
  t664 = t650 + t654;
  t412 = t408*t411;
  t470 = t79*t462;
  t471 = t412 + t470;
  t807 = -1.*t148;
  t808 = 1. + t807;
  t876 = -1.*t337;
  t910 = 1. + t876;
  t915 = 0.28121*t910;
  t918 = -1.*t341;
  t920 = 1. + t918;
  t924 = 0.50321*t920;
  t929 = 0.19821*t341;
  t948 = t924 + t929;
  t952 = t337*t948;
  t958 = -0.305*t372*t406;
  t959 = t915 + t952 + t958;
  t976 = 0.15121*t808;
  t980 = t148*t959;
  t985 = t976 + t980;
  t816 = -0.15121*t808;
  t817 = -0.15121*t148;
  t875 = -0.15121*t140;
  t962 = t140*t959;
  t966 = t816 + t817 + t875 + t962;
  t998 = 0.28121*t372;
  t999 = -1.*t948*t372;
  t1003 = -0.305*t337*t406;
  t1005 = t998 + t999 + t1003;
  t1009 = t123*t985;
  t1011 = -1.*t966*t149;
  t1017 = t1009 + t1011;
  t968 = t123*t966;
  t988 = t985*t149;
  t993 = t968 + t988;
  t1008 = t1005*t411;
  t1018 = t79*t1017;
  t1019 = t1008 + t1018;
  t1028 = t79*t1005;
  t1033 = -1.*t411*t1017;
  t1037 = t1028 + t1033;
  t490 = t488*t411;
  t513 = t79*t506;
  t515 = t490 + t513;
  t996 = -1.*t531*t993;
  t1061 = t579*t993;
  t1099 = t531*t993;
  t1126 = -1.*t636*t993;
  t1163 = -1.*t579*t993;
  t1172 = t636*t993;
  t1297 = -1.*t1005*t408;
  t1316 = t1005*t488;
  p_output1[0]=t515*var2[0] + t223*t79*var2[1] + t471*var2[2];
  p_output1[1]=(t524*t636 - 1.*t521*t664)*var2[0] + (t223*t411*t521 + t524*t531)*var2[1] + (t524*t579 - 1.*t521*t610)*var2[2];
  p_output1[2]=(t521*t636 + t524*t664)*var2[0] + (-1.*t223*t411*t524 + t521*t531)*var2[1] + (t521*t579 + t524*t610)*var2[2];
  p_output1[3]=(t223*(t1061 + t1019*t471 + t1037*t610)*t79 + t471*(t1037*t223*t411 - 1.*t1019*t223*t79 + t996))*var2[0] + (t515*(t1163 - 1.*t1019*t471 - 1.*t1037*t610) + t471*(t1172 + t1019*t515 + t1037*t664))*var2[1] + (t223*(t1126 - 1.*t1019*t515 - 1.*t1037*t664)*t79 + t515*(t1099 - 1.*t1037*t223*t411 + t1019*t223*t79))*var2[2];
  p_output1[4]=((t1061 + t1005*t408 + t1017*t462)*t531 + t579*(-1.*t1017*t223 + t996))*var2[0] + ((t1172 + t1316 + t1017*t506)*t579 + (t1163 + t1297 - 1.*t1017*t462)*t636)*var2[1] + ((t1126 - 1.*t1005*t488 - 1.*t1017*t506)*t531 + (t1099 + t1017*t223)*t636)*var2[2];
  p_output1[5]=t408*(-1.*t148*t966 + t140*t985)*var2[0] + (t408*(t1316 + t140*t408*t966 + t148*t408*t985) + t488*(t1297 - 1.*t140*t433*t966 - 1.*t148*t433*t985))*var2[1] + t488*(t148*t966 - 1.*t140*t985)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t408*(t1316 + t408*t959) + t488*(t1297 - 1.*t433*t959))*var2[1] + (-0.15121*t433 - 0.15121*t488)*var2[2];
  p_output1[13]=(0.28121*t406 - 0.305*t341*t406 - 1.*t406*t948)*var2[0] + (0.28121*t341 + 0.305*Power(t406,2) - 1.*t341*t948)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
