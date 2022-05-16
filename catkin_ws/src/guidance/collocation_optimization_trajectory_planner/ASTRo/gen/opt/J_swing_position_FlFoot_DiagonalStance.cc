/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:19 GMT+02:00
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
  double t3965;
  double t4049;
  double t4054;
  double t3962;
  double t4058;
  double t4266;
  double t4302;
  double t4314;
  double t4319;
  double t4596;
  double t3975;
  double t4107;
  double t4186;
  double t5444;
  double t5643;
  double t5647;
  double t5871;
  double t5881;
  double t5902;
  double t5912;
  double t5953;
  double t5954;
  double t5976;
  double t6010;
  double t6011;
  double t6037;
  double t6039;
  double t6040;
  double t6041;
  double t6042;
  double t4950;
  double t5371;
  double t5717;
  double t5787;
  double t5872;
  double t5880;
  double t5977;
  double t5989;
  double t6076;
  double t6077;
  double t6078;
  double t6098;
  double t6101;
  double t6102;
  double t6104;
  double t6113;
  double t6119;
  double t6175;
  double t6186;
  double t6190;
  double t6155;
  double t6167;
  double t6173;
  double t6193;
  double t6197;
  double t6198;
  double t6249;
  double t6250;
  double t6251;
  double t6271;
  double t6275;
  double t6227;
  double t6303;
  double t6309;
  double t6310;
  double t6314;
  double t6315;
  double t6316;
  double t6321;
  double t6322;
  double t6323;
  double t6352;
  double t6356;
  double t6358;
  t3965 = Cos(var1[5]);
  t4049 = Sin(var1[3]);
  t4054 = Sin(var1[4]);
  t3962 = Cos(var1[3]);
  t4058 = Sin(var1[5]);
  t4266 = Cos(var1[6]);
  t4302 = -1.*t4266;
  t4314 = 1. + t4302;
  t4319 = 0.15121*t4314;
  t4596 = Sin(var1[6]);
  t3975 = t3962*t3965;
  t4107 = -1.*t4049*t4054*t4058;
  t4186 = t3975 + t4107;
  t5444 = t3965*t4049*t4054;
  t5643 = t3962*t4058;
  t5647 = t5444 + t5643;
  t5871 = Cos(var1[7]);
  t5881 = t4266*t5647;
  t5902 = t4186*t4596;
  t5912 = t5881 + t5902;
  t5953 = Cos(var1[4]);
  t5954 = Sin(var1[7]);
  t5976 = Cos(var1[8]);
  t6010 = t5871*t5912;
  t6011 = t5953*t4049*t5954;
  t6037 = t6010 + t6011;
  t6039 = -1.*t5953*t5871*t4049;
  t6040 = t5912*t5954;
  t6041 = t6039 + t6040;
  t6042 = Sin(var1[8]);
  t4950 = -0.15121*t4596;
  t5371 = t4319 + t4950;
  t5717 = 0.15121*t4596;
  t5787 = t4319 + t5717;
  t5872 = -1.*t5871;
  t5880 = 1. + t5872;
  t5977 = -1.*t5976;
  t5989 = 1. + t5977;
  t6076 = -1.*t3962*t5953*t3965*t4266;
  t6077 = t3962*t5953*t4058*t4596;
  t6078 = t6076 + t6077;
  t6098 = t5871*t6078;
  t6101 = t3962*t4054*t5954;
  t6102 = t6098 + t6101;
  t6104 = -1.*t3962*t5871*t4054;
  t6113 = t6078*t5954;
  t6119 = t6104 + t6113;
  t6175 = t3965*t4049;
  t6186 = t3962*t4054*t4058;
  t6190 = t6175 + t6186;
  t6155 = t3962*t3965*t4054;
  t6167 = -1.*t4049*t4058;
  t6173 = t6155 + t6167;
  t6193 = t4266*t6190;
  t6197 = t6173*t4596;
  t6198 = t6193 + t6197;
  t6249 = -1.*t3962*t3965*t4054;
  t6250 = t4049*t4058;
  t6251 = t6249 + t6250;
  t6271 = -1.*t6251*t4596;
  t6275 = t6193 + t6271;
  t6227 = -1.*t6190*t4596;
  t6303 = t4266*t6251;
  t6309 = t6190*t4596;
  t6310 = t6303 + t6309;
  t6314 = -1.*t3962*t5953*t5871;
  t6315 = -1.*t6310*t5954;
  t6316 = t6314 + t6315;
  t6321 = t5871*t6310;
  t6322 = -1.*t3962*t5953*t5954;
  t6323 = t6321 + t6322;
  t6352 = t3962*t5953*t5871;
  t6356 = t6310*t5954;
  t6358 = t6352 + t6356;
  p_output1[0]=1.;
  p_output1[1]=t4186*t5371 + 0.15121*(t4186*t4266 - 1.*t4596*t5647) + t5647*t5787 + 0.28121*t5880*t5912 - 0.28121*t4049*t5953*t5954 + 0.50321*t5989*t6037 - 0.50321*t6041*t6042 + 0.23321*(t5976*t6037 + t6041*t6042);
  p_output1[2]=t3962*t4058*t5371*t5953 - 1.*t3962*t3965*t5787*t5953 + 0.15121*(t3962*t4058*t4266*t5953 + t3962*t3965*t4596*t5953) - 0.28121*t3962*t4054*t5954 + 0.28121*t5880*t6078 + 0.50321*t5989*t6102 - 0.50321*t6042*t6119 + 0.23321*(t5976*t6102 + t6042*t6119);
  p_output1[3]=t5371*t6173 + t5787*t6190 + 0.28121*t5880*t6198 + 0.50321*t5871*t5989*t6198 - 0.50321*t5954*t6042*t6198 + 0.23321*(t5871*t5976*t6198 + t5954*t6042*t6198) + 0.15121*(t4266*t6173 + t6227);
  p_output1[4]=(-0.15121*t4266 + t5717)*t6190 + (0.15121*t4266 + t5717)*t6251 + 0.15121*(t6227 - 1.*t4266*t6251) + 0.28121*t5880*t6275 + 0.50321*t5871*t5989*t6275 - 0.50321*t5954*t6042*t6275 + 0.23321*(t5871*t5976*t6275 + t5954*t6042*t6275);
  p_output1[5]=0.28121*t3962*t5871*t5953 + 0.28121*t5954*t6310 + 0.50321*t5989*t6316 - 0.50321*t6042*t6323 + 0.23321*(t5976*t6316 + t6042*t6323);
  p_output1[6]=0.50321*t6042*t6323 - 0.50321*t5976*t6358 + 0.23321*(-1.*t6042*t6323 + t5976*t6358);
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
