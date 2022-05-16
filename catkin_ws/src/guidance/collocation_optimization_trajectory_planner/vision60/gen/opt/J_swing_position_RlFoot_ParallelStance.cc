/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:53 GMT+02:00
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
  double t7349;
  double t8713;
  double t8690;
  double t8695;
  double t9034;
  double t7293;
  double t7313;
  double t9504;
  double t9639;
  double t9688;
  double t9742;
  double t9783;
  double t8701;
  double t9140;
  double t9149;
  double t8539;
  double t9794;
  double t9798;
  double t9800;
  double t9819;
  double t9894;
  double t9929;
  double t9933;
  double t9939;
  double t9948;
  double t9950;
  double t9969;
  double t8600;
  double t8682;
  double t9507;
  double t9631;
  double t11020;
  double t11022;
  double t11034;
  double t9942;
  double t9944;
  double t11041;
  double t11045;
  double t11052;
  double t11054;
  double t11059;
  double t11064;
  double t11105;
  double t11107;
  double t11110;
  double t11174;
  double t11176;
  double t11208;
  double t11262;
  double t11265;
  double t11276;
  double t11289;
  double t11363;
  double t11364;
  double t11453;
  double t11454;
  double t11456;
  double t11490;
  double t11491;
  double t11504;
  double t11597;
  double t11600;
  double t11602;
  double t11636;
  double t11659;
  double t11661;
  double t11707;
  double t11715;
  double t11717;
  double t11846;
  double t11864;
  double t11865;
  t7349 = Sin(var1[3]);
  t8713 = Cos(var1[3]);
  t8690 = Cos(var1[5]);
  t8695 = Sin(var1[4]);
  t9034 = Sin(var1[5]);
  t7293 = Cos(var1[4]);
  t7313 = Sin(var1[9]);
  t9504 = Cos(var1[9]);
  t9639 = t8713*t8690;
  t9688 = -1.*t7349*t8695*t9034;
  t9742 = t9639 + t9688;
  t9783 = Sin(var1[10]);
  t8701 = t8690*t7349*t8695;
  t9140 = t8713*t9034;
  t9149 = t8701 + t9140;
  t8539 = Cos(var1[10]);
  t9794 = -1.*t9504*t7293*t7349;
  t9798 = -1.*t7313*t9742;
  t9800 = t9794 + t9798;
  t9819 = Sin(var1[11]);
  t9894 = -1.*t9783*t9149;
  t9929 = t8539*t9800;
  t9933 = t9894 + t9929;
  t9939 = Cos(var1[11]);
  t9948 = t8539*t9149;
  t9950 = t9783*t9800;
  t9969 = t9948 + t9950;
  t8600 = -1.*t8539;
  t8682 = 1. + t8600;
  t9507 = -1.*t9504;
  t9631 = 1. + t9507;
  t11020 = -1.*t9504*t8713*t8695;
  t11022 = -1.*t8713*t7293*t7313*t9034;
  t11034 = t11020 + t11022;
  t9942 = -1.*t9939;
  t9944 = 1. + t9942;
  t11041 = t8713*t7293*t8690*t9783;
  t11045 = t8539*t11034;
  t11052 = t11041 + t11045;
  t11054 = -1.*t8539*t8713*t7293*t8690;
  t11059 = t9783*t11034;
  t11064 = t11054 + t11059;
  t11105 = t8713*t8690*t8695;
  t11107 = -1.*t7349*t9034;
  t11110 = t11105 + t11107;
  t11174 = t8690*t7349;
  t11176 = t8713*t8695*t9034;
  t11208 = t11174 + t11176;
  t11262 = -1.*t7313*t9783*t11110;
  t11265 = t8539*t11208;
  t11276 = t11262 + t11265;
  t11289 = -1.*t8539*t7313*t11110;
  t11363 = -1.*t9783*t11208;
  t11364 = t11289 + t11363;
  t11453 = -1.*t8713*t7293*t7313;
  t11454 = -1.*t9504*t11208;
  t11456 = t11453 + t11454;
  t11490 = t9504*t8713*t7293;
  t11491 = -1.*t7313*t11208;
  t11504 = t11490 + t11491;
  t11597 = -1.*t8713*t8690*t8695;
  t11600 = t7349*t9034;
  t11602 = t11597 + t11600;
  t11636 = -1.*t9783*t11602;
  t11659 = t8539*t11504;
  t11661 = t11636 + t11659;
  t11707 = -1.*t8539*t11602;
  t11715 = -1.*t9783*t11504;
  t11717 = t11707 + t11715;
  t11846 = t8539*t11602;
  t11864 = t9783*t11504;
  t11865 = t11846 + t11864;
  p_output1[0]=1.;
  p_output1[1]=0.1575*t7293*t7313*t7349 - 0.325*t8682*t9149 + 0.1575*t9631*t9742 + 0.2255*(-1.*t7293*t7313*t7349 + t9504*t9742) + 0.325*t9783*t9800 - 0.575*t9819*t9933 - 0.575*t9944*t9969 - 0.0641*(t9933*t9939 + t9819*t9969) - 0.295*(-1.*t9819*t9933 + t9939*t9969);
  p_output1[2]=0.325*t7293*t8682*t8690*t8713 + 0.1575*t7313*t8695*t8713 + 0.2255*(-1.*t7313*t8695*t8713 + t7293*t8713*t9034*t9504) + 0.1575*t7293*t8713*t9034*t9631 + 0.325*t11034*t9783 - 0.575*t11052*t9819 - 0.0641*(t11064*t9819 + t11052*t9939) - 0.295*(-1.*t11052*t9819 + t11064*t9939) - 0.575*t11064*t9944;
  p_output1[3]=-0.325*t11208*t8682 + 0.2255*t11110*t9504 + 0.1575*t11110*t9631 - 0.325*t11110*t7313*t9783 - 0.575*t11364*t9819 - 0.295*(-1.*t11364*t9819 + t11276*t9939) - 0.0641*(t11276*t9819 + t11364*t9939) - 0.575*t11276*t9944;
  p_output1[4]=0.2255*t11504 + 0.1575*t11208*t7313 - 0.1575*t7293*t8713*t9504 + 0.325*t11456*t9783 - 0.575*t11456*t8539*t9819 - 0.0641*(t11456*t9783*t9819 + t11456*t8539*t9939) - 0.295*(-1.*t11456*t8539*t9819 + t11456*t9783*t9939) - 0.575*t11456*t9783*t9944;
  p_output1[5]=0.325*t11504*t8539 - 0.325*t11602*t9783 - 0.575*t11717*t9819 - 0.295*(-1.*t11717*t9819 + t11661*t9939) - 0.0641*(t11661*t9819 + t11717*t9939) - 0.575*t11661*t9944;
  p_output1[6]=-0.575*t11865*t9819 - 0.575*t11661*t9939 - 0.295*(-1.*t11865*t9819 - 1.*t11661*t9939) - 0.0641*(-1.*t11661*t9819 + t11865*t9939);
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

#include "J_swing_position_RlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
