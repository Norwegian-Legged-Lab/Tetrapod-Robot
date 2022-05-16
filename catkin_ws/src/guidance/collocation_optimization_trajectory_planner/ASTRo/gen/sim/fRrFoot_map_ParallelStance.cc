/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:46 GMT+02:00
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
  double t4746;
  double t4167;
  double t4183;
  double t5090;
  double t41463;
  double t41596;
  double t41628;
  double t41434;
  double t41634;
  double t41413;
  double t41635;
  double t41368;
  double t4300;
  double t5099;
  double t5124;
  double t5125;
  double t41630;
  double t41636;
  double t41637;
  double t41655;
  double t41645;
  double t41647;
  double t41649;
  double t41644;
  double t41657;
  double t41659;
  double t41663;
  double t44000;
  double t44001;
  double t44171;
  double t44202;
  double t44217;
  double t44597;
  double t44965;
  double t45349;
  double t45912;
  double t45946;
  double t47935;
  double t50251;
  double t50278;
  double t50282;
  double t50382;
  double t50386;
  double t44195;
  double t44196;
  double t50291;
  double t50368;
  double t50965;
  double t50969;
  double t50974;
  double t50982;
  double t50985;
  double t51018;
  double t51019;
  double t51038;
  double t51039;
  double t51045;
  double t50372;
  double t50395;
  double t50405;
  double t41715;
  double t41805;
  double t43229;
  double t43397;
  double t43662;
  double t43712;
  double t43795;
  double t43806;
  double t43807;
  double t51034;
  double t51052;
  double t51057;
  double t51059;
  double t51190;
  double t51253;
  double t51413;
  double t51437;
  double t51442;
  double t43947;
  double t43949;
  double t43995;
  double t50962;
  double t51495;
  double t20255;
  double t41642;
  double t41643;
  double t51538;
  double t51552;
  double t51563;
  double t51874;
  double t51902;
  double t51934;
  double t51954;
  double t51987;
  double t51992;
  t4746 = Cos(var1[16]);
  t4167 = Cos(var1[17]);
  t4183 = Sin(var1[16]);
  t5090 = Sin(var1[17]);
  t41463 = -1.*t4746*t4167;
  t41596 = -1.*t4183*t5090;
  t41628 = t41463 + t41596;
  t41434 = Cos(var1[5]);
  t41634 = Sin(var1[15]);
  t41413 = Cos(var1[15]);
  t41635 = Sin(var1[5]);
  t41368 = Cos(var1[4]);
  t4300 = -1.*t4167*t4183;
  t5099 = t4746*t5090;
  t5124 = t4300 + t5099;
  t5125 = Sin(var1[4]);
  t41630 = t41413*t41434*t41628;
  t41636 = -1.*t41634*t41628*t41635;
  t41637 = t41630 + t41636;
  t41655 = Sin(var1[3]);
  t41645 = t41434*t41634*t41628;
  t41647 = t41413*t41628*t41635;
  t41649 = t41645 + t41647;
  t41644 = Cos(var1[3]);
  t41657 = t41368*t5124;
  t41659 = -1.*t5125*t41637;
  t41663 = t41657 + t41659;
  t44000 = -1.*t41413;
  t44001 = 1. + t44000;
  t44171 = -0.15121*t44001;
  t44202 = -1.*t4746;
  t44217 = 1. + t44202;
  t44597 = -0.28121*t44217;
  t44965 = -1.*t4167;
  t45349 = 1. + t44965;
  t45912 = -0.50321*t45349;
  t45946 = -0.23321*t4167;
  t47935 = t45912 + t45946;
  t50251 = t4746*t47935;
  t50278 = 0.27*t4183*t5090;
  t50282 = t44597 + t50251 + t50278;
  t50382 = t41413*t50282;
  t50386 = t44171 + t50382;
  t44195 = -0.15121*t41413;
  t44196 = 0.15121*t41634;
  t50291 = t41634*t50282;
  t50368 = t44171 + t44195 + t44196 + t50291;
  t50965 = t41434*t41634;
  t50969 = t41413*t41635;
  t50974 = t50965 + t50969;
  t50982 = 0.28121*t4183;
  t50985 = t47935*t4183;
  t51018 = -0.27*t4746*t5090;
  t51019 = t50982 + t50985 + t51018;
  t51038 = t41434*t50386;
  t51039 = -1.*t50368*t41635;
  t51045 = t51038 + t51039;
  t50372 = t41434*t50368;
  t50395 = t50386*t41635;
  t50405 = t50372 + t50395;
  t41715 = t4746*t4167;
  t41805 = t4183*t5090;
  t43229 = t41715 + t41805;
  t43397 = t43229*t5125;
  t43662 = t41413*t41434*t5124;
  t43712 = -1.*t41634*t5124*t41635;
  t43795 = t43662 + t43712;
  t43806 = t41368*t43795;
  t43807 = t43397 + t43806;
  t51034 = t51019*t5125;
  t51052 = t41368*t51045;
  t51057 = t51034 + t51052;
  t51059 = t41368*t51019;
  t51190 = -1.*t5125*t51045;
  t51253 = t51059 + t51190;
  t51413 = t41434*t41634*t5124;
  t51437 = t41413*t5124*t41635;
  t51442 = t51413 + t51437;
  t43947 = -1.*t41413*t41434;
  t43949 = t41634*t41635;
  t43995 = t43947 + t43949;
  t50962 = -1.*t43995*t50405;
  t51495 = t51442*t50405;
  t20255 = t5124*t5125;
  t41642 = t41368*t41637;
  t41643 = t20255 + t41642;
  t51538 = t41368*t43229;
  t51552 = -1.*t5125*t43795;
  t51563 = t51538 + t51552;
  t51874 = -1.*t51442*t50405;
  t51902 = t41649*t50405;
  t51934 = -1.*t51019*t43229;
  t51954 = t51019*t5124;
  t51987 = t43995*t50405;
  t51992 = -1.*t41649*t50405;
  p_output1[0]=t41643;
  p_output1[1]=t41644*t41649 - 1.*t41655*t41663;
  p_output1[2]=t41649*t41655 + t41644*t41663;
  p_output1[3]=t43807*(t50962 - 1.*t41368*t50974*t51057 + t50974*t5125*t51253) + t41368*t50974*(t43807*t51057 + t51495 + t51253*t51563);
  p_output1[4]=(t50962 - 1.*t50974*t51045)*t51442 + t43995*(t43229*t51019 + t43795*t51045 + t51495);
  p_output1[5]=t43229*(t41413*t50368 - 1.*t41634*t50386);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t41628 - 0.15121*t43229;
  p_output1[16]=0.28121*t5090 - 0.27*t4167*t5090 + t47935*t5090;
  p_output1[17]=0;
  p_output1[18]=t41368*t50974;
  p_output1[19]=t41644*t43995 + t41655*t50974*t5125;
  p_output1[20]=t41655*t43995 - 1.*t41644*t50974*t5125;
  p_output1[21]=t41643*(-1.*t43807*t51057 - 1.*t51253*t51563 + t51874) + t43807*(t41643*t51057 + t41663*t51253 + t51902);
  p_output1[22]=t41649*(-1.*t43795*t51045 + t51874 + t51934) + t51442*(t41637*t51045 + t51902 + t51954);
  p_output1[23]=t5124*(-1.*t41634*t50368*t5124 - 1.*t41413*t50386*t5124 + t51934) + t43229*(t41628*t41634*t50368 + t41413*t41628*t50386 + t51954);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t5124*(-1.*t50282*t5124 + t51934) + t43229*(t41628*t50282 + t51954);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t43807;
  p_output1[37]=t41644*t51442 - 1.*t41655*t51563;
  p_output1[38]=t41655*t51442 + t41644*t51563;
  p_output1[39]=t41643*(t41368*t50974*t51057 - 1.*t50974*t5125*t51253 + t51987) + t41368*t50974*(-1.*t41643*t51057 - 1.*t41663*t51253 + t51992);
  p_output1[40]=t41649*(t50974*t51045 + t51987) + t43995*(-1.*t41637*t51045 - 1.*t51019*t5124 + t51992);
  p_output1[41]=(-1.*t41413*t50368 + t41634*t50386)*t5124;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.28121*t4167 + t4167*t47935 + 0.27*Power(t5090,2);
  p_output1[53]=-0.27;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
