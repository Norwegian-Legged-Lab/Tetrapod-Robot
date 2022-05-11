/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:26:11 GMT+02:00
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
  double t80;
  double t57;
  double t58;
  double t64;
  double t84;
  double t102;
  double t114;
  double t122;
  double t129;
  double t208;
  double t222;
  double t24;
  double t76;
  double t85;
  double t95;
  double t427;
  double t440;
  double t457;
  double t540;
  double t547;
  double t564;
  double t565;
  double t574;
  double t587;
  double t589;
  double t592;
  double t595;
  double t41;
  double t43;
  double t103;
  double t108;
  double t548;
  double t557;
  double t871;
  double t889;
  double t893;
  double t908;
  double t911;
  double t930;
  double t957;
  double t962;
  double t963;
  double t1149;
  double t1157;
  double t1159;
  double t1214;
  double t1224;
  double t1278;
  double t1357;
  double t1394;
  double t1407;
  double t1499;
  double t1501;
  double t1546;
  double t1967;
  double t1972;
  double t1998;
  double t1736;
  double t1737;
  double t1744;
  double t3505;
  double t3754;
  double t3755;
  double t3802;
  double t3805;
  double t3830;
  double t3766;
  double t3768;
  double t3786;
  double t3895;
  double t3900;
  double t3919;
  t80 = Cos(var1[3]);
  t57 = Cos(var1[5]);
  t58 = Sin(var1[3]);
  t64 = Sin(var1[4]);
  t84 = Sin(var1[5]);
  t102 = Cos(var1[6]);
  t114 = t80*t57;
  t122 = -1.*t58*t64*t84;
  t129 = t114 + t122;
  t208 = Cos(var1[4]);
  t222 = Sin(var1[6]);
  t24 = Cos(var1[7]);
  t76 = t57*t58*t64;
  t85 = t80*t84;
  t95 = t76 + t85;
  t427 = -1.*t208*t102*t58;
  t440 = -1.*t129*t222;
  t457 = t427 + t440;
  t540 = Sin(var1[7]);
  t547 = Cos(var1[8]);
  t564 = t24*t95;
  t565 = t457*t540;
  t574 = t564 + t565;
  t587 = t24*t457;
  t589 = -1.*t95*t540;
  t592 = t587 + t589;
  t595 = Sin(var1[8]);
  t41 = -1.*t24;
  t43 = 1. + t41;
  t103 = -1.*t102;
  t108 = 1. + t103;
  t548 = -1.*t547;
  t557 = 1. + t548;
  t871 = -1.*t80*t102*t64;
  t889 = -1.*t80*t208*t84*t222;
  t893 = t871 + t889;
  t908 = -1.*t80*t208*t57*t24;
  t911 = t893*t540;
  t930 = t908 + t911;
  t957 = t24*t893;
  t962 = t80*t208*t57*t540;
  t963 = t957 + t962;
  t1149 = t80*t57*t64;
  t1157 = -1.*t58*t84;
  t1159 = t1149 + t1157;
  t1214 = t57*t58;
  t1224 = t80*t64*t84;
  t1278 = t1214 + t1224;
  t1357 = t24*t1278;
  t1394 = -1.*t1159*t222*t540;
  t1407 = t1357 + t1394;
  t1499 = -1.*t24*t1159*t222;
  t1501 = -1.*t1278*t540;
  t1546 = t1499 + t1501;
  t1967 = -1.*t102*t1278;
  t1972 = -1.*t80*t208*t222;
  t1998 = t1967 + t1972;
  t1736 = t80*t208*t102;
  t1737 = -1.*t1278*t222;
  t1744 = t1736 + t1737;
  t3505 = -1.*t80*t57*t64;
  t3754 = t58*t84;
  t3755 = t3505 + t3754;
  t3802 = -1.*t24*t3755;
  t3805 = -1.*t1744*t540;
  t3830 = t3802 + t3805;
  t3766 = t24*t1744;
  t3768 = -1.*t3755*t540;
  t3786 = t3766 + t3768;
  t3895 = t24*t3755;
  t3900 = t1744*t540;
  t3919 = t3895 + t3900;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t108*t129 - 0.325*t457*t540 + 0.075*t557*t574 + 0.1575*t208*t222*t58 + 0.2255*(t102*t129 - 1.*t208*t222*t58) + 0.075*t592*t595 - 0.0641*(t547*t592 + t574*t595) + 0.355*(t547*t574 - 1.*t592*t595) + 0.325*t43*t95;
  p_output1[2]=-0.325*t208*t43*t57*t80 + 0.1575*t222*t64*t80 + 0.1575*t108*t208*t80*t84 + 0.2255*(-1.*t222*t64*t80 + t102*t208*t80*t84) - 0.325*t540*t893 + 0.075*t557*t930 + 0.075*t595*t963 - 0.0641*(t595*t930 + t547*t963) + 0.355*(t547*t930 - 1.*t595*t963);
  p_output1[3]=0.2255*t102*t1159 + 0.1575*t108*t1159 + 0.325*t1278*t43 + 0.325*t1159*t222*t540 + 0.075*t1407*t557 + 0.075*t1546*t595 - 0.0641*(t1546*t547 + t1407*t595) + 0.355*(t1407*t547 - 1.*t1546*t595);
  p_output1[4]=0.2255*t1744 + 0.1575*t1278*t222 - 0.325*t1998*t540 + 0.075*t1998*t540*t557 + 0.075*t1998*t24*t595 + 0.355*(t1998*t540*t547 - 1.*t1998*t24*t595) - 0.0641*(t1998*t24*t547 + t1998*t540*t595) - 0.1575*t102*t208*t80;
  p_output1[5]=-0.325*t1744*t24 + 0.325*t3755*t540 + 0.075*t3786*t557 + 0.075*t3830*t595 - 0.0641*(t3830*t547 + t3786*t595) + 0.355*(t3786*t547 - 1.*t3830*t595);
  p_output1[6]=0.075*t3786*t547 + 0.075*t3919*t595 - 0.0641*(t3919*t547 - 1.*t3786*t595) + 0.355*(-1.*t3786*t547 - 1.*t3919*t595);
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
