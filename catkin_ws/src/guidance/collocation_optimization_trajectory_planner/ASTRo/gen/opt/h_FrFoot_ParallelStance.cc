/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:08 GMT+02:00
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
  double t282;
  double t742;
  double t753;
  double t800;
  double t976;
  double t41009;
  double t454;
  double t43662;
  double t43229;
  double t43235;
  double t43696;
  double t43709;
  double t43710;
  double t43712;
  double t43724;
  double t43727;
  double t43728;
  double t43737;
  double t43754;
  double t43795;
  double t43806;
  double t43807;
  double t804;
  double t43008;
  double t43934;
  double t43491;
  double t43540;
  double t43941;
  double t43939;
  double t43942;
  double t43943;
  double t43947;
  double t43948;
  double t43949;
  double t43697;
  double t43708;
  double t43725;
  double t43726;
  double t43995;
  double t44000;
  double t44001;
  double t44003;
  double t44004;
  double t44005;
  double t44009;
  double t44010;
  double t44011;
  double t44156;
  double t44157;
  double t44158;
  double t44168;
  double t44169;
  double t44171;
  double t44195;
  double t44196;
  double t44198;
  double t44202;
  double t44217;
  double t44218;
  double t44220;
  double t44221;
  double t44222;
  t282 = Cos(var1[4]);
  t742 = Cos(var1[12]);
  t753 = -1.*t742;
  t800 = 1. + t753;
  t976 = Sin(var1[12]);
  t41009 = -0.15121*t976;
  t454 = Cos(var1[5]);
  t43662 = Sin(var1[5]);
  t43229 = Sin(var1[13]);
  t43235 = Sin(var1[4]);
  t43696 = Cos(var1[13]);
  t43709 = t742*t282*t454;
  t43710 = -1.*t282*t976*t43662;
  t43712 = t43709 + t43710;
  t43724 = Cos(var1[14]);
  t43727 = -1.*t43229*t43235;
  t43728 = t43696*t43712;
  t43737 = t43727 + t43728;
  t43754 = Sin(var1[14]);
  t43795 = t43696*t43235;
  t43806 = t43229*t43712;
  t43807 = t43795 + t43806;
  t804 = 0.15121*t800;
  t43008 = t804 + t41009;
  t43934 = Sin(var1[3]);
  t43491 = -0.15121*t800;
  t43540 = t43491 + t41009;
  t43941 = Cos(var1[3]);
  t43939 = t454*t43934*t43235;
  t43942 = t43941*t43662;
  t43943 = t43939 + t43942;
  t43947 = t43941*t454;
  t43948 = -1.*t43934*t43235*t43662;
  t43949 = t43947 + t43948;
  t43697 = -1.*t43696;
  t43708 = 1. + t43697;
  t43725 = -1.*t43724;
  t43726 = 1. + t43725;
  t43995 = t742*t43943;
  t44000 = t976*t43949;
  t44001 = t43995 + t44000;
  t44003 = t282*t43229*t43934;
  t44004 = t43696*t44001;
  t44005 = t44003 + t44004;
  t44009 = -1.*t43696*t282*t43934;
  t44010 = t43229*t44001;
  t44011 = t44009 + t44010;
  t44156 = -1.*t43941*t454*t43235;
  t44157 = t43934*t43662;
  t44158 = t44156 + t44157;
  t44168 = t454*t43934;
  t44169 = t43941*t43235*t43662;
  t44171 = t44168 + t44169;
  t44195 = t742*t44158;
  t44196 = t976*t44171;
  t44198 = t44195 + t44196;
  t44202 = -1.*t43941*t282*t43229;
  t44217 = t43696*t44198;
  t44218 = t44202 + t44217;
  t44220 = t43696*t43941*t282;
  t44221 = t43229*t44198;
  t44222 = t44220 + t44221;
  p_output1[0]=0.28121*t43229*t43235 - 1.*t282*t43540*t43662 + 0.28121*t43708*t43712 + 0.50321*t43726*t43737 - 0.50321*t43754*t43807 + 0.23321*(t43724*t43737 + t43754*t43807) + t282*t43008*t454 - 0.15121*(-1.*t282*t43662*t742 - 1.*t282*t454*t976) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t282*t43229*t43934 + t43008*t43943 + t43540*t43949 + 0.28121*t43708*t44001 + 0.50321*t43726*t44005 - 0.50321*t43754*t44011 + 0.23321*(t43724*t44005 + t43754*t44011) - 0.15121*(t43949*t742 - 1.*t43943*t976) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t282*t43229*t43941 + t43008*t44158 + t43540*t44171 + 0.28121*t43708*t44198 + 0.50321*t43726*t44218 - 0.50321*t43754*t44222 + 0.23321*(t43724*t44218 + t43754*t44222) - 0.15121*(t44171*t742 - 1.*t44158*t976) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
