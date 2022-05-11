/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:58 GMT+02:00
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
  double t2850;
  double t5069;
  double t5014;
  double t5016;
  double t5165;
  double t1611;
  double t1736;
  double t5328;
  double t5352;
  double t5370;
  double t5389;
  double t5424;
  double t5052;
  double t5263;
  double t5284;
  double t4659;
  double t5437;
  double t5439;
  double t5451;
  double t5471;
  double t5480;
  double t5500;
  double t5502;
  double t5511;
  double t5526;
  double t5540;
  double t5546;
  double t4738;
  double t4993;
  double t5335;
  double t5345;
  double t5793;
  double t5824;
  double t5846;
  double t5520;
  double t5523;
  double t5876;
  double t6204;
  double t7501;
  double t7511;
  double t7526;
  double t7527;
  double t8001;
  double t8006;
  double t8024;
  double t8087;
  double t8094;
  double t8113;
  double t8196;
  double t8252;
  double t8258;
  double t8292;
  double t8307;
  double t8335;
  double t8457;
  double t8636;
  double t8639;
  double t8892;
  double t9209;
  double t9251;
  double t9924;
  double t9930;
  double t9982;
  double t10122;
  double t10123;
  double t10127;
  double t10129;
  double t10132;
  double t10133;
  double t10177;
  double t10180;
  double t10185;
  t2850 = Sin(var1[3]);
  t5069 = Cos(var1[3]);
  t5014 = Cos(var1[5]);
  t5016 = Sin(var1[4]);
  t5165 = Sin(var1[5]);
  t1611 = Cos(var1[4]);
  t1736 = Sin(var1[15]);
  t5328 = Cos(var1[15]);
  t5352 = t5069*t5014;
  t5370 = -1.*t2850*t5016*t5165;
  t5389 = t5352 + t5370;
  t5424 = Sin(var1[16]);
  t5052 = t5014*t2850*t5016;
  t5263 = t5069*t5165;
  t5284 = t5052 + t5263;
  t4659 = Cos(var1[16]);
  t5437 = -1.*t5328*t1611*t2850;
  t5439 = -1.*t1736*t5389;
  t5451 = t5437 + t5439;
  t5471 = Sin(var1[17]);
  t5480 = -1.*t5424*t5284;
  t5500 = t4659*t5451;
  t5502 = t5480 + t5500;
  t5511 = Cos(var1[17]);
  t5526 = t4659*t5284;
  t5540 = t5424*t5451;
  t5546 = t5526 + t5540;
  t4738 = -1.*t4659;
  t4993 = 1. + t4738;
  t5335 = -1.*t5328;
  t5345 = 1. + t5335;
  t5793 = -1.*t5328*t5069*t5016;
  t5824 = -1.*t5069*t1611*t1736*t5165;
  t5846 = t5793 + t5824;
  t5520 = -1.*t5511;
  t5523 = 1. + t5520;
  t5876 = t5069*t1611*t5014*t5424;
  t6204 = t4659*t5846;
  t7501 = t5876 + t6204;
  t7511 = -1.*t4659*t5069*t1611*t5014;
  t7526 = t5424*t5846;
  t7527 = t7511 + t7526;
  t8001 = t5069*t5014*t5016;
  t8006 = -1.*t2850*t5165;
  t8024 = t8001 + t8006;
  t8087 = t5014*t2850;
  t8094 = t5069*t5016*t5165;
  t8113 = t8087 + t8094;
  t8196 = -1.*t1736*t5424*t8024;
  t8252 = t4659*t8113;
  t8258 = t8196 + t8252;
  t8292 = -1.*t4659*t1736*t8024;
  t8307 = -1.*t5424*t8113;
  t8335 = t8292 + t8307;
  t8457 = -1.*t5069*t1611*t1736;
  t8636 = -1.*t5328*t8113;
  t8639 = t8457 + t8636;
  t8892 = t5328*t5069*t1611;
  t9209 = -1.*t1736*t8113;
  t9251 = t8892 + t9209;
  t9924 = -1.*t5069*t5014*t5016;
  t9930 = t2850*t5165;
  t9982 = t9924 + t9930;
  t10122 = -1.*t5424*t9982;
  t10123 = t4659*t9251;
  t10127 = t10122 + t10123;
  t10129 = -1.*t4659*t9982;
  t10132 = -1.*t5424*t9251;
  t10133 = t10129 + t10132;
  t10177 = t4659*t9982;
  t10180 = t5424*t9251;
  t10185 = t10177 + t10180;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t1611*t1736*t2850 - 0.325*t4993*t5284 - 0.1575*t5345*t5389 - 0.2255*(-1.*t1611*t1736*t2850 + t5328*t5389) + 0.325*t5424*t5451 - 0.575*t5471*t5502 - 0.575*t5523*t5546 - 0.0641*(t5502*t5511 + t5471*t5546) - 0.295*(-1.*t5471*t5502 + t5511*t5546);
  p_output1[2]=0.325*t1611*t4993*t5014*t5069 - 0.1575*t1736*t5016*t5069 - 0.2255*(-1.*t1736*t5016*t5069 + t1611*t5069*t5165*t5328) - 0.1575*t1611*t5069*t5165*t5345 + 0.325*t5424*t5846 - 0.575*t5471*t7501 - 0.575*t5523*t7527 - 0.0641*(t5511*t7501 + t5471*t7527) - 0.295*(-1.*t5471*t7501 + t5511*t7527);
  p_output1[3]=-0.2255*t5328*t8024 - 0.1575*t5345*t8024 - 0.325*t1736*t5424*t8024 - 0.325*t4993*t8113 - 0.575*t5523*t8258 - 0.575*t5471*t8335 - 0.295*(t5511*t8258 - 1.*t5471*t8335) - 0.0641*(t5471*t8258 + t5511*t8335);
  p_output1[4]=0.1575*t1611*t5069*t5328 - 0.1575*t1736*t8113 + 0.325*t5424*t8639 - 0.575*t4659*t5471*t8639 - 0.575*t5424*t5523*t8639 - 0.0641*(t5424*t5471*t8639 + t4659*t5511*t8639) - 0.295*(-1.*t4659*t5471*t8639 + t5424*t5511*t8639) - 0.2255*t9251;
  p_output1[5]=-0.575*t10133*t5471 - 0.295*(-1.*t10133*t5471 + t10127*t5511) - 0.0641*(t10127*t5471 + t10133*t5511) - 0.575*t10127*t5523 + 0.325*t4659*t9251 - 0.325*t5424*t9982;
  p_output1[6]=-0.575*t10185*t5471 - 0.575*t10127*t5511 - 0.295*(-1.*t10185*t5471 - 1.*t10127*t5511) - 0.0641*(-1.*t10127*t5471 + t10185*t5511);
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

#include "J_foot_clearance_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_foot_clearance_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
