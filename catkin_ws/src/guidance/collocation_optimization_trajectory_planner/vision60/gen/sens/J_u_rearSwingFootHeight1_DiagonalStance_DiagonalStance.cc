/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:25:49 GMT+02:00
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
  double t9759;
  double t12673;
  double t11641;
  double t11644;
  double t12917;
  double t6409;
  double t9745;
  double t14565;
  double t14735;
  double t17220;
  double t17514;
  double t25555;
  double t11699;
  double t12936;
  double t12957;
  double t9775;
  double t25604;
  double t25605;
  double t25619;
  double t27089;
  double t27127;
  double t27242;
  double t27999;
  double t28177;
  double t30337;
  double t30853;
  double t30889;
  double t10574;
  double t11077;
  double t14697;
  double t14727;
  double t32183;
  double t32188;
  double t32234;
  double t29492;
  double t29512;
  double t32935;
  double t32961;
  double t33196;
  double t33309;
  double t33323;
  double t34737;
  double t35349;
  double t35352;
  double t35353;
  double t35357;
  double t35387;
  double t35388;
  double t35418;
  double t35432;
  double t35433;
  double t35456;
  double t35457;
  double t35459;
  double t35618;
  double t35653;
  double t35787;
  double t35934;
  double t36007;
  double t36014;
  double t36105;
  double t36108;
  double t36109;
  double t36119;
  double t36121;
  double t36122;
  double t36141;
  double t36149;
  double t36167;
  double t37106;
  double t37118;
  double t37120;
  t9759 = Sin(var1[3]);
  t12673 = Cos(var1[3]);
  t11641 = Cos(var1[5]);
  t11644 = Sin(var1[4]);
  t12917 = Sin(var1[5]);
  t6409 = Cos(var1[4]);
  t9745 = Sin(var1[15]);
  t14565 = Cos(var1[15]);
  t14735 = t12673*t11641;
  t17220 = -1.*t9759*t11644*t12917;
  t17514 = t14735 + t17220;
  t25555 = Sin(var1[16]);
  t11699 = t11641*t9759*t11644;
  t12936 = t12673*t12917;
  t12957 = t11699 + t12936;
  t9775 = Cos(var1[16]);
  t25604 = -1.*t14565*t6409*t9759;
  t25605 = -1.*t9745*t17514;
  t25619 = t25604 + t25605;
  t27089 = Sin(var1[17]);
  t27127 = -1.*t25555*t12957;
  t27242 = t9775*t25619;
  t27999 = t27127 + t27242;
  t28177 = Cos(var1[17]);
  t30337 = t9775*t12957;
  t30853 = t25555*t25619;
  t30889 = t30337 + t30853;
  t10574 = -1.*t9775;
  t11077 = 1. + t10574;
  t14697 = -1.*t14565;
  t14727 = 1. + t14697;
  t32183 = -1.*t14565*t12673*t11644;
  t32188 = -1.*t12673*t6409*t9745*t12917;
  t32234 = t32183 + t32188;
  t29492 = -1.*t28177;
  t29512 = 1. + t29492;
  t32935 = t12673*t6409*t11641*t25555;
  t32961 = t9775*t32234;
  t33196 = t32935 + t32961;
  t33309 = -1.*t9775*t12673*t6409*t11641;
  t33323 = t25555*t32234;
  t34737 = t33309 + t33323;
  t35349 = t12673*t11641*t11644;
  t35352 = -1.*t9759*t12917;
  t35353 = t35349 + t35352;
  t35357 = t11641*t9759;
  t35387 = t12673*t11644*t12917;
  t35388 = t35357 + t35387;
  t35418 = -1.*t9745*t25555*t35353;
  t35432 = t9775*t35388;
  t35433 = t35418 + t35432;
  t35456 = -1.*t9775*t9745*t35353;
  t35457 = -1.*t25555*t35388;
  t35459 = t35456 + t35457;
  t35618 = -1.*t12673*t6409*t9745;
  t35653 = -1.*t14565*t35388;
  t35787 = t35618 + t35653;
  t35934 = t14565*t12673*t6409;
  t36007 = -1.*t9745*t35388;
  t36014 = t35934 + t36007;
  t36105 = -1.*t12673*t11641*t11644;
  t36108 = t9759*t12917;
  t36109 = t36105 + t36108;
  t36119 = -1.*t25555*t36109;
  t36121 = t9775*t36014;
  t36122 = t36119 + t36121;
  t36141 = -1.*t9775*t36109;
  t36149 = -1.*t25555*t36014;
  t36167 = t36141 + t36149;
  t37106 = t9775*t36109;
  t37118 = t25555*t36014;
  t37120 = t37106 + t37118;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t11077*t12957 - 0.1575*t14727*t17514 + 0.325*t25555*t25619 - 0.575*t27089*t27999 - 0.575*t29512*t30889 - 0.0641*(t27999*t28177 + t27089*t30889) - 0.295*(-1.*t27089*t27999 + t28177*t30889) - 0.1575*t6409*t9745*t9759 - 0.2255*(t14565*t17514 - 1.*t6409*t9745*t9759);
  p_output1[2]=0.325*t25555*t32234 - 0.575*t27089*t33196 - 0.575*t29512*t34737 - 0.0641*(t28177*t33196 + t27089*t34737) - 0.295*(-1.*t27089*t33196 + t28177*t34737) + 0.325*t11077*t11641*t12673*t6409 - 0.1575*t12673*t12917*t14727*t6409 - 0.1575*t11644*t12673*t9745 - 0.2255*(t12673*t12917*t14565*t6409 - 1.*t11644*t12673*t9745);
  p_output1[3]=-0.2255*t14565*t35353 - 0.1575*t14727*t35353 - 0.325*t11077*t35388 - 0.575*t29512*t35433 - 0.575*t27089*t35459 - 0.295*(t28177*t35433 - 1.*t27089*t35459) - 0.0641*(t27089*t35433 + t28177*t35459) - 0.325*t25555*t35353*t9745;
  p_output1[4]=0.325*t25555*t35787 - 0.575*t25555*t29512*t35787 - 0.2255*t36014 + 0.1575*t12673*t14565*t6409 - 0.1575*t35388*t9745 - 0.575*t27089*t35787*t9775 - 0.295*(t25555*t28177*t35787 - 1.*t27089*t35787*t9775) - 0.0641*(t25555*t27089*t35787 + t28177*t35787*t9775);
  p_output1[5]=-0.325*t25555*t36109 - 0.575*t29512*t36122 - 0.575*t27089*t36167 - 0.295*(t28177*t36122 - 1.*t27089*t36167) - 0.0641*(t27089*t36122 + t28177*t36167) + 0.325*t36014*t9775;
  p_output1[6]=-0.575*t28177*t36122 - 0.575*t27089*t37120 - 0.295*(-1.*t28177*t36122 - 1.*t27089*t37120) - 0.0641*(-1.*t27089*t36122 + t28177*t37120);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
