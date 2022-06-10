/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:00 GMT+02:00
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
  double t232;
  double t2794;
  double t1144;
  double t8755;
  double t8808;
  double t8552;
  double t8924;
  double t2685;
  double t9006;
  double t9012;
  double t9030;
  double t3900;
  double t8974;
  double t9142;
  double t9212;
  double t9222;
  double t2691;
  double t6031;
  double t6268;
  double t9507;
  double t9474;
  double t8766;
  double t8935;
  double t8942;
  double t9076;
  double t9079;
  double t9099;
  double t9228;
  double t9231;
  double t9247;
  double t9515;
  double t9525;
  double t9532;
  double t9576;
  double t9601;
  double t9615;
  double t9637;
  double t9642;
  double t9643;
  double t9660;
  double t9668;
  double t9682;
  double t9722;
  double t9743;
  double t9745;
  double t9001;
  double t9102;
  double t9113;
  double t9961;
  double t9964;
  double t9996;
  double t10067;
  double t10068;
  double t10071;
  double t10082;
  double t10087;
  double t10088;
  double t10089;
  double t10096;
  double t10103;
  double t10107;
  double t10131;
  double t10132;
  double t10134;
  double t9966;
  double t9984;
  double t9989;
  double t10112;
  double t10118;
  double t10157;
  double t10161;
  double t10176;
  double t10178;
  double t10196;
  double t10199;
  double t10204;
  double t10129;
  double t10135;
  double t10138;
  double t10190;
  double t10212;
  double t10221;
  double t10241;
  double t10245;
  double t10258;
  double t9132;
  double t9249;
  double t9261;
  double t10139;
  double t10273;
  double t10301;
  double t10336;
  double t10364;
  double t10379;
  double t10497;
  double t10524;
  t232 = Cos(var1[4]);
  t2794 = Cos(var1[9]);
  t1144 = Cos(var1[5]);
  t8755 = Cos(var1[11]);
  t8808 = Sin(var1[10]);
  t8552 = Cos(var1[10]);
  t8924 = Sin(var1[11]);
  t2685 = Sin(var1[9]);
  t9006 = -1.*t8755*t8808;
  t9012 = t8552*t8924;
  t9030 = t9006 + t9012;
  t3900 = Sin(var1[5]);
  t8974 = Sin(var1[4]);
  t9142 = -1.*t8552*t8755;
  t9212 = -1.*t8808*t8924;
  t9222 = t9142 + t9212;
  t2691 = t1144*t2685;
  t6031 = t2794*t3900;
  t6268 = t2691 + t6031;
  t9507 = Cos(var1[3]);
  t9474 = Sin(var1[3]);
  t8766 = t8552*t8755;
  t8935 = t8808*t8924;
  t8942 = t8766 + t8935;
  t9076 = t2794*t1144*t9030;
  t9079 = -1.*t2685*t9030*t3900;
  t9099 = t9076 + t9079;
  t9228 = t2794*t1144*t9222;
  t9231 = -1.*t2685*t9222*t3900;
  t9247 = t9228 + t9231;
  t9515 = -1.*t2794*t1144;
  t9525 = t2685*t3900;
  t9532 = t9515 + t9525;
  t9576 = t1144*t2685*t9030;
  t9601 = t2794*t9030*t3900;
  t9615 = t9576 + t9601;
  t9637 = t232*t8942;
  t9642 = -1.*t8974*t9099;
  t9643 = t9637 + t9642;
  t9660 = t1144*t2685*t9222;
  t9668 = t2794*t9222*t3900;
  t9682 = t9660 + t9668;
  t9722 = t232*t9030;
  t9743 = -1.*t8974*t9247;
  t9745 = t9722 + t9743;
  t9001 = t8942*t8974;
  t9102 = t232*t9099;
  t9113 = t9001 + t9102;
  t9961 = -1.*t2794;
  t9964 = 1. + t9961;
  t9996 = -1.*t8552;
  t10067 = 1. + t9996;
  t10068 = -0.28121*t10067;
  t10071 = -1.*t8755;
  t10082 = 1. + t10071;
  t10087 = -0.50321*t10082;
  t10088 = -0.19821*t8755;
  t10089 = t10087 + t10088;
  t10096 = t8552*t10089;
  t10103 = 0.305*t8808*t8924;
  t10107 = t10068 + t10096 + t10103;
  t10131 = -0.15121*t9964;
  t10132 = t2794*t10107;
  t10134 = t10131 + t10132;
  t9966 = 0.15121*t9964;
  t9984 = 0.15121*t2794;
  t9989 = 0.15121*t2685;
  t10112 = t2685*t10107;
  t10118 = t9966 + t9984 + t9989 + t10112;
  t10157 = 0.28121*t8808;
  t10161 = t10089*t8808;
  t10176 = -0.305*t8552*t8924;
  t10178 = t10157 + t10161 + t10176;
  t10196 = t1144*t10134;
  t10199 = -1.*t10118*t3900;
  t10204 = t10196 + t10199;
  t10129 = t1144*t10118;
  t10135 = t10134*t3900;
  t10138 = t10129 + t10135;
  t10190 = t10178*t8974;
  t10212 = t232*t10204;
  t10221 = t10190 + t10212;
  t10241 = t232*t10178;
  t10245 = -1.*t8974*t10204;
  t10258 = t10241 + t10245;
  t9132 = t9030*t8974;
  t9249 = t232*t9247;
  t9261 = t9132 + t9249;
  t10139 = -1.*t9532*t10138;
  t10273 = t9615*t10138;
  t10301 = t9532*t10138;
  t10336 = -1.*t9682*t10138;
  t10364 = -1.*t9615*t10138;
  t10379 = t9682*t10138;
  t10497 = -1.*t10178*t8942;
  t10524 = t10178*t9030;
  p_output1[0]=t9261*var2[0] + t232*t6268*var2[1] + t9113*var2[2];
  p_output1[1]=(t9507*t9682 - 1.*t9474*t9745)*var2[0] + (t6268*t8974*t9474 + t9507*t9532)*var2[1] + (t9507*t9615 - 1.*t9474*t9643)*var2[2];
  p_output1[2]=(t9474*t9682 + t9507*t9745)*var2[0] + (-1.*t6268*t8974*t9507 + t9474*t9532)*var2[1] + (t9474*t9615 + t9507*t9643)*var2[2];
  p_output1[3]=((t10139 - 1.*t10221*t232*t6268 + t10258*t6268*t8974)*t9113 + t232*t6268*(t10273 + t10221*t9113 + t10258*t9643))*var2[0] + (t9261*(t10364 - 1.*t10221*t9113 - 1.*t10258*t9643) + t9113*(t10379 + t10221*t9261 + t10258*t9745))*var2[1] + ((t10301 + t10221*t232*t6268 - 1.*t10258*t6268*t8974)*t9261 + t232*t6268*(t10336 - 1.*t10221*t9261 - 1.*t10258*t9745))*var2[2];
  p_output1[4]=((t10273 + t10178*t8942 + t10204*t9099)*t9532 + (t10139 - 1.*t10204*t6268)*t9615)*var2[0] + ((t10379 + t10524 + t10204*t9247)*t9615 + (t10364 + t10497 - 1.*t10204*t9099)*t9682)*var2[1] + ((t10336 - 1.*t10178*t9030 - 1.*t10204*t9247)*t9532 + (t10301 + t10204*t6268)*t9682)*var2[2];
  p_output1[5]=(-1.*t10134*t2685 + t10118*t2794)*t8942*var2[0] + (t9030*(t10497 - 1.*t10118*t2685*t9030 - 1.*t10134*t2794*t9030) + t8942*(t10524 + t10118*t2685*t9222 + t10134*t2794*t9222))*var2[1] + (t10134*t2685 - 1.*t10118*t2794)*t9030*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t8942 + 0.15121*t9222)*var2[0] + (-0.15121 + t9030*(t10497 - 1.*t10107*t9030) + t8942*(t10524 + t10107*t9222))*var2[1];
  p_output1[10]=(0.28121*t8924 + t10089*t8924 - 0.305*t8755*t8924)*var2[0] + (0.28121*t8755 + t10089*t8755 + 0.305*Power(t8924,2))*var2[2];
  p_output1[11]=-0.305*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
