/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:04 GMT+02:00
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
  double t10504;
  double t10884;
  double t10868;
  double t10870;
  double t11088;
  double t10495;
  double t10503;
  double t11182;
  double t11196;
  double t11197;
  double t11202;
  double t11216;
  double t10877;
  double t11107;
  double t11109;
  double t10828;
  double t11217;
  double t11234;
  double t11240;
  double t11248;
  double t11249;
  double t11253;
  double t11254;
  double t11261;
  double t11387;
  double t11393;
  double t11792;
  double t10842;
  double t10850;
  double t11190;
  double t11195;
  double t12505;
  double t12512;
  double t12516;
  double t11344;
  double t11372;
  double t12520;
  double t12521;
  double t12522;
  double t12540;
  double t12549;
  double t12550;
  double t12793;
  double t12807;
  double t12808;
  double t12841;
  double t12842;
  double t12847;
  double t12877;
  double t12995;
  double t13004;
  double t13014;
  double t13029;
  double t13053;
  double t13143;
  double t13144;
  double t13148;
  double t13165;
  double t13176;
  double t13178;
  double t13306;
  double t13313;
  double t13315;
  double t13319;
  double t13322;
  double t13323;
  double t13331;
  double t13333;
  double t13334;
  double t13421;
  double t13425;
  double t13431;
  t10504 = Sin(var1[3]);
  t10884 = Cos(var1[3]);
  t10868 = Cos(var1[5]);
  t10870 = Sin(var1[4]);
  t11088 = Sin(var1[5]);
  t10495 = Cos(var1[4]);
  t10503 = Sin(var1[9]);
  t11182 = Cos(var1[9]);
  t11196 = t10884*t10868;
  t11197 = -1.*t10504*t10870*t11088;
  t11202 = t11196 + t11197;
  t11216 = Sin(var1[10]);
  t10877 = t10868*t10504*t10870;
  t11107 = t10884*t11088;
  t11109 = t10877 + t11107;
  t10828 = Cos(var1[10]);
  t11217 = -1.*t11182*t10495*t10504;
  t11234 = -1.*t10503*t11202;
  t11240 = t11217 + t11234;
  t11248 = Sin(var1[11]);
  t11249 = -1.*t11216*t11109;
  t11253 = t10828*t11240;
  t11254 = t11249 + t11253;
  t11261 = Cos(var1[11]);
  t11387 = t10828*t11109;
  t11393 = t11216*t11240;
  t11792 = t11387 + t11393;
  t10842 = -1.*t10828;
  t10850 = 1. + t10842;
  t11190 = -1.*t11182;
  t11195 = 1. + t11190;
  t12505 = -1.*t11182*t10884*t10870;
  t12512 = -1.*t10884*t10495*t10503*t11088;
  t12516 = t12505 + t12512;
  t11344 = -1.*t11261;
  t11372 = 1. + t11344;
  t12520 = t10884*t10495*t10868*t11216;
  t12521 = t10828*t12516;
  t12522 = t12520 + t12521;
  t12540 = -1.*t10828*t10884*t10495*t10868;
  t12549 = t11216*t12516;
  t12550 = t12540 + t12549;
  t12793 = t10884*t10868*t10870;
  t12807 = -1.*t10504*t11088;
  t12808 = t12793 + t12807;
  t12841 = t10868*t10504;
  t12842 = t10884*t10870*t11088;
  t12847 = t12841 + t12842;
  t12877 = -1.*t10503*t11216*t12808;
  t12995 = t10828*t12847;
  t13004 = t12877 + t12995;
  t13014 = -1.*t10828*t10503*t12808;
  t13029 = -1.*t11216*t12847;
  t13053 = t13014 + t13029;
  t13143 = -1.*t10884*t10495*t10503;
  t13144 = -1.*t11182*t12847;
  t13148 = t13143 + t13144;
  t13165 = t11182*t10884*t10495;
  t13176 = -1.*t10503*t12847;
  t13178 = t13165 + t13176;
  t13306 = -1.*t10884*t10868*t10870;
  t13313 = t10504*t11088;
  t13315 = t13306 + t13313;
  t13319 = -1.*t11216*t13315;
  t13322 = t10828*t13178;
  t13323 = t13319 + t13322;
  t13331 = -1.*t10828*t13315;
  t13333 = -1.*t11216*t13178;
  t13334 = t13331 + t13333;
  t13421 = t10828*t13315;
  t13425 = t11216*t13178;
  t13431 = t13421 + t13425;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t10495*t10503*t10504 - 0.325*t10850*t11109 + 0.1575*t11195*t11202 + 0.2255*(-1.*t10495*t10503*t10504 + t11182*t11202) + 0.325*t11216*t11240 - 0.575*t11248*t11254 - 0.575*t11372*t11792 - 0.0641*(t11254*t11261 + t11248*t11792) - 0.295*(-1.*t11248*t11254 + t11261*t11792);
  p_output1[2]=0.325*t10495*t10850*t10868*t10884 + 0.1575*t10503*t10870*t10884 + 0.2255*(-1.*t10503*t10870*t10884 + t10495*t10884*t11088*t11182) + 0.1575*t10495*t10884*t11088*t11195 + 0.325*t11216*t12516 - 0.575*t11248*t12522 - 0.575*t11372*t12550 - 0.0641*(t11261*t12522 + t11248*t12550) - 0.295*(-1.*t11248*t12522 + t11261*t12550);
  p_output1[3]=0.2255*t11182*t12808 + 0.1575*t11195*t12808 - 0.325*t10503*t11216*t12808 - 0.325*t10850*t12847 - 0.575*t11372*t13004 - 0.575*t11248*t13053 - 0.295*(t11261*t13004 - 1.*t11248*t13053) - 0.0641*(t11248*t13004 + t11261*t13053);
  p_output1[4]=-0.1575*t10495*t10884*t11182 + 0.1575*t10503*t12847 + 0.325*t11216*t13148 - 0.575*t10828*t11248*t13148 - 0.575*t11216*t11372*t13148 - 0.0641*(t11216*t11248*t13148 + t10828*t11261*t13148) - 0.295*(-1.*t10828*t11248*t13148 + t11216*t11261*t13148) + 0.2255*t13178;
  p_output1[5]=0.325*t10828*t13178 - 0.325*t11216*t13315 - 0.575*t11372*t13323 - 0.575*t11248*t13334 - 0.295*(t11261*t13323 - 1.*t11248*t13334) - 0.0641*(t11248*t13323 + t11261*t13334);
  p_output1[6]=-0.575*t11261*t13323 - 0.575*t11248*t13431 - 0.295*(-1.*t11261*t13323 - 1.*t11248*t13431) - 0.0641*(-1.*t11248*t13323 + t11261*t13431);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_position_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
