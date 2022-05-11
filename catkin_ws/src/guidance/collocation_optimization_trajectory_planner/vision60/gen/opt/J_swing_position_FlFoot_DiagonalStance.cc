/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:00 GMT+02:00
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
  double t5719;
  double t5585;
  double t5632;
  double t5692;
  double t5735;
  double t7824;
  double t8162;
  double t8270;
  double t8337;
  double t8341;
  double t8342;
  double t5294;
  double t5713;
  double t5746;
  double t5753;
  double t8363;
  double t8424;
  double t8448;
  double t8653;
  double t8776;
  double t9595;
  double t9660;
  double t9712;
  double t9866;
  double t9894;
  double t9908;
  double t9911;
  double t5395;
  double t5576;
  double t7855;
  double t7963;
  double t9384;
  double t9556;
  double t10203;
  double t10204;
  double t10210;
  double t10227;
  double t10230;
  double t10231;
  double t10236;
  double t10241;
  double t10257;
  double t10294;
  double t10299;
  double t10310;
  double t10416;
  double t10449;
  double t10450;
  double t10456;
  double t10457;
  double t10459;
  double t10463;
  double t10464;
  double t10465;
  double t10511;
  double t10515;
  double t10517;
  double t10507;
  double t10508;
  double t10509;
  double t10539;
  double t10542;
  double t10545;
  double t10632;
  double t10719;
  double t10741;
  double t10547;
  double t10549;
  double t10550;
  double t10858;
  double t10866;
  double t10867;
  t5719 = Cos(var1[3]);
  t5585 = Cos(var1[5]);
  t5632 = Sin(var1[3]);
  t5692 = Sin(var1[4]);
  t5735 = Sin(var1[5]);
  t7824 = Cos(var1[6]);
  t8162 = t5719*t5585;
  t8270 = -1.*t5632*t5692*t5735;
  t8337 = t8162 + t8270;
  t8341 = Cos(var1[4]);
  t8342 = Sin(var1[6]);
  t5294 = Cos(var1[7]);
  t5713 = t5585*t5632*t5692;
  t5746 = t5719*t5735;
  t5753 = t5713 + t5746;
  t8363 = -1.*t8341*t7824*t5632;
  t8424 = -1.*t8337*t8342;
  t8448 = t8363 + t8424;
  t8653 = Sin(var1[7]);
  t8776 = Cos(var1[8]);
  t9595 = t5294*t5753;
  t9660 = t8448*t8653;
  t9712 = t9595 + t9660;
  t9866 = t5294*t8448;
  t9894 = -1.*t5753*t8653;
  t9908 = t9866 + t9894;
  t9911 = Sin(var1[8]);
  t5395 = -1.*t5294;
  t5576 = 1. + t5395;
  t7855 = -1.*t7824;
  t7963 = 1. + t7855;
  t9384 = -1.*t8776;
  t9556 = 1. + t9384;
  t10203 = -1.*t5719*t7824*t5692;
  t10204 = -1.*t5719*t8341*t5735*t8342;
  t10210 = t10203 + t10204;
  t10227 = -1.*t5719*t8341*t5585*t5294;
  t10230 = t10210*t8653;
  t10231 = t10227 + t10230;
  t10236 = t5294*t10210;
  t10241 = t5719*t8341*t5585*t8653;
  t10257 = t10236 + t10241;
  t10294 = t5719*t5585*t5692;
  t10299 = -1.*t5632*t5735;
  t10310 = t10294 + t10299;
  t10416 = t5585*t5632;
  t10449 = t5719*t5692*t5735;
  t10450 = t10416 + t10449;
  t10456 = t5294*t10450;
  t10457 = -1.*t10310*t8342*t8653;
  t10459 = t10456 + t10457;
  t10463 = -1.*t5294*t10310*t8342;
  t10464 = -1.*t10450*t8653;
  t10465 = t10463 + t10464;
  t10511 = -1.*t7824*t10450;
  t10515 = -1.*t5719*t8341*t8342;
  t10517 = t10511 + t10515;
  t10507 = t5719*t8341*t7824;
  t10508 = -1.*t10450*t8342;
  t10509 = t10507 + t10508;
  t10539 = -1.*t5719*t5585*t5692;
  t10542 = t5632*t5735;
  t10545 = t10539 + t10542;
  t10632 = -1.*t5294*t10545;
  t10719 = -1.*t10509*t8653;
  t10741 = t10632 + t10719;
  t10547 = t5294*t10509;
  t10549 = -1.*t10545*t8653;
  t10550 = t10547 + t10549;
  t10858 = t5294*t10545;
  t10866 = t10509*t8653;
  t10867 = t10858 + t10866;
  p_output1[0]=1.;
  p_output1[1]=0.325*t5576*t5753 + 0.1575*t7963*t8337 + 0.1575*t5632*t8341*t8342 + 0.2255*(t7824*t8337 - 1.*t5632*t8341*t8342) - 0.325*t8448*t8653 + 0.075*t9556*t9712 + 0.075*t9908*t9911 - 0.0641*(t8776*t9908 + t9712*t9911) + 0.355*(t8776*t9712 - 1.*t9908*t9911);
  p_output1[2]=-0.325*t5576*t5585*t5719*t8341 + 0.1575*t5719*t5735*t7963*t8341 + 0.1575*t5692*t5719*t8342 + 0.2255*(t5719*t5735*t7824*t8341 - 1.*t5692*t5719*t8342) - 0.325*t10210*t8653 + 0.075*t10231*t9556 + 0.075*t10257*t9911 - 0.0641*(t10257*t8776 + t10231*t9911) + 0.355*(t10231*t8776 - 1.*t10257*t9911);
  p_output1[3]=0.325*t10450*t5576 + 0.2255*t10310*t7824 + 0.1575*t10310*t7963 + 0.325*t10310*t8342*t8653 + 0.075*t10459*t9556 + 0.075*t10465*t9911 - 0.0641*(t10465*t8776 + t10459*t9911) + 0.355*(t10459*t8776 - 1.*t10465*t9911);
  p_output1[4]=0.2255*t10509 - 0.1575*t5719*t7824*t8341 + 0.1575*t10450*t8342 - 0.325*t10517*t8653 + 0.075*t10517*t8653*t9556 + 0.075*t10517*t5294*t9911 + 0.355*(t10517*t8653*t8776 - 1.*t10517*t5294*t9911) - 0.0641*(t10517*t5294*t8776 + t10517*t8653*t9911);
  p_output1[5]=-0.325*t10509*t5294 + 0.325*t10545*t8653 + 0.075*t10550*t9556 + 0.075*t10741*t9911 - 0.0641*(t10741*t8776 + t10550*t9911) + 0.355*(t10550*t8776 - 1.*t10741*t9911);
  p_output1[6]=0.075*t10550*t8776 + 0.075*t10867*t9911 - 0.0641*(t10867*t8776 - 1.*t10550*t9911) + 0.355*(-1.*t10550*t8776 - 1.*t10867*t9911);
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

#include "J_swing_position_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
