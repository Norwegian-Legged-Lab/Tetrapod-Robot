/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:25:23 GMT+02:00
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
  double t404;
  double t360;
  double t372;
  double t382;
  double t408;
  double t509;
  double t598;
  double t602;
  double t606;
  double t618;
  double t622;
  double t332;
  double t400;
  double t420;
  double t431;
  double t661;
  double t689;
  double t696;
  double t714;
  double t718;
  double t763;
  double t779;
  double t786;
  double t794;
  double t801;
  double t824;
  double t841;
  double t336;
  double t344;
  double t512;
  double t582;
  double t746;
  double t748;
  double t991;
  double t999;
  double t1007;
  double t1037;
  double t1039;
  double t1041;
  double t1043;
  double t1044;
  double t1047;
  double t1132;
  double t1135;
  double t1141;
  double t1158;
  double t1167;
  double t1174;
  double t1201;
  double t1207;
  double t1211;
  double t1223;
  double t1229;
  double t1253;
  double t1403;
  double t1408;
  double t1409;
  double t1369;
  double t1373;
  double t1379;
  double t1588;
  double t1600;
  double t1642;
  double t1679;
  double t1689;
  double t1693;
  double t1658;
  double t1662;
  double t1666;
  double t1764;
  double t1769;
  double t1775;
  t404 = Cos(var1[3]);
  t360 = Cos(var1[5]);
  t372 = Sin(var1[3]);
  t382 = Sin(var1[4]);
  t408 = Sin(var1[5]);
  t509 = Cos(var1[6]);
  t598 = t404*t360;
  t602 = -1.*t372*t382*t408;
  t606 = t598 + t602;
  t618 = Cos(var1[4]);
  t622 = Sin(var1[6]);
  t332 = Cos(var1[7]);
  t400 = t360*t372*t382;
  t420 = t404*t408;
  t431 = t400 + t420;
  t661 = -1.*t618*t509*t372;
  t689 = -1.*t606*t622;
  t696 = t661 + t689;
  t714 = Sin(var1[7]);
  t718 = Cos(var1[8]);
  t763 = t332*t431;
  t779 = t696*t714;
  t786 = t763 + t779;
  t794 = t332*t696;
  t801 = -1.*t431*t714;
  t824 = t794 + t801;
  t841 = Sin(var1[8]);
  t336 = -1.*t332;
  t344 = 1. + t336;
  t512 = -1.*t509;
  t582 = 1. + t512;
  t746 = -1.*t718;
  t748 = 1. + t746;
  t991 = -1.*t404*t509*t382;
  t999 = -1.*t404*t618*t408*t622;
  t1007 = t991 + t999;
  t1037 = -1.*t404*t618*t360*t332;
  t1039 = t1007*t714;
  t1041 = t1037 + t1039;
  t1043 = t332*t1007;
  t1044 = t404*t618*t360*t714;
  t1047 = t1043 + t1044;
  t1132 = t404*t360*t382;
  t1135 = -1.*t372*t408;
  t1141 = t1132 + t1135;
  t1158 = t360*t372;
  t1167 = t404*t382*t408;
  t1174 = t1158 + t1167;
  t1201 = t332*t1174;
  t1207 = -1.*t1141*t622*t714;
  t1211 = t1201 + t1207;
  t1223 = -1.*t332*t1141*t622;
  t1229 = -1.*t1174*t714;
  t1253 = t1223 + t1229;
  t1403 = -1.*t509*t1174;
  t1408 = -1.*t404*t618*t622;
  t1409 = t1403 + t1408;
  t1369 = t404*t618*t509;
  t1373 = -1.*t1174*t622;
  t1379 = t1369 + t1373;
  t1588 = -1.*t404*t360*t382;
  t1600 = t372*t408;
  t1642 = t1588 + t1600;
  t1679 = -1.*t332*t1642;
  t1689 = -1.*t1379*t714;
  t1693 = t1679 + t1689;
  t1658 = t332*t1379;
  t1662 = -1.*t1642*t714;
  t1666 = t1658 + t1662;
  t1764 = t332*t1642;
  t1769 = t1379*t714;
  t1775 = t1764 + t1769;
  p_output1[0]=1.;
  p_output1[1]=0.325*t344*t431 + 0.1575*t582*t606 + 0.1575*t372*t618*t622 + 0.2255*(t509*t606 - 1.*t372*t618*t622) - 0.325*t696*t714 + 0.075*t748*t786 + 0.075*t824*t841 - 0.0641*(t718*t824 + t786*t841) + 0.355*(t718*t786 - 1.*t824*t841);
  p_output1[2]=-0.325*t344*t360*t404*t618 + 0.1575*t404*t408*t582*t618 + 0.1575*t382*t404*t622 + 0.2255*(t404*t408*t509*t618 - 1.*t382*t404*t622) - 0.325*t1007*t714 + 0.075*t1041*t748 + 0.075*t1047*t841 - 0.0641*(t1047*t718 + t1041*t841) + 0.355*(t1041*t718 - 1.*t1047*t841);
  p_output1[3]=0.325*t1174*t344 + 0.2255*t1141*t509 + 0.1575*t1141*t582 + 0.325*t1141*t622*t714 + 0.075*t1211*t748 + 0.075*t1253*t841 - 0.0641*(t1253*t718 + t1211*t841) + 0.355*(t1211*t718 - 1.*t1253*t841);
  p_output1[4]=0.2255*t1379 - 0.1575*t404*t509*t618 + 0.1575*t1174*t622 - 0.325*t1409*t714 + 0.075*t1409*t714*t748 + 0.075*t1409*t332*t841 + 0.355*(t1409*t714*t718 - 1.*t1409*t332*t841) - 0.0641*(t1409*t332*t718 + t1409*t714*t841);
  p_output1[5]=-0.325*t1379*t332 + 0.325*t1642*t714 + 0.075*t1666*t748 + 0.075*t1693*t841 - 0.0641*(t1693*t718 + t1666*t841) + 0.355*(t1666*t718 - 1.*t1693*t841);
  p_output1[6]=0.075*t1666*t718 + 0.075*t1775*t841 - 0.0641*(t1775*t718 - 1.*t1666*t841) + 0.355*(-1.*t1666*t718 - 1.*t1775*t841);
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

#include "J_u_frontSwingFootHeight2_ParallelStance_ParallelStance.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight2_ParallelStance_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
