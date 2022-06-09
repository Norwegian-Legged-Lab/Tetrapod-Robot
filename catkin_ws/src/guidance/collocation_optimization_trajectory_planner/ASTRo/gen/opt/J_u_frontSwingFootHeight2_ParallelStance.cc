/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:55:15 GMT+02:00
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
  double t5081;
  double t16670;
  double t16678;
  double t165;
  double t16686;
  double t16714;
  double t16722;
  double t16730;
  double t16738;
  double t16746;
  double t16662;
  double t16695;
  double t16704;
  double t16790;
  double t16806;
  double t16815;
  double t18435;
  double t18488;
  double t18508;
  double t18525;
  double t18561;
  double t18580;
  double t18614;
  double t18669;
  double t18686;
  double t18705;
  double t18739;
  double t18759;
  double t18776;
  double t18794;
  double t16755;
  double t16764;
  double t16824;
  double t16842;
  double t18454;
  double t18472;
  double t18634;
  double t18651;
  double t22204;
  double t22246;
  double t22554;
  double t22558;
  double t22561;
  double t22855;
  double t23035;
  double t23222;
  double t23235;
  double t23425;
  double t23427;
  double t23430;
  double t23397;
  double t23399;
  double t23404;
  double t23432;
  double t23433;
  double t23448;
  double t23573;
  double t23574;
  double t23576;
  double t23581;
  double t23582;
  double t23511;
  double t23726;
  double t23740;
  double t23762;
  double t23769;
  double t23770;
  double t23771;
  double t23773;
  double t23774;
  double t23775;
  double t23846;
  double t23847;
  double t23848;
  t5081 = Cos(var1[5]);
  t16670 = Sin(var1[3]);
  t16678 = Sin(var1[4]);
  t165 = Cos(var1[3]);
  t16686 = Sin(var1[5]);
  t16714 = Cos(var1[6]);
  t16722 = -1.*t16714;
  t16730 = 1. + t16722;
  t16738 = 0.15121*t16730;
  t16746 = Sin(var1[6]);
  t16662 = t165*t5081;
  t16695 = -1.*t16670*t16678*t16686;
  t16704 = t16662 + t16695;
  t16790 = t5081*t16670*t16678;
  t16806 = t165*t16686;
  t16815 = t16790 + t16806;
  t18435 = Cos(var1[7]);
  t18488 = t16714*t16815;
  t18508 = t16704*t16746;
  t18525 = t18488 + t18508;
  t18561 = Cos(var1[4]);
  t18580 = Sin(var1[7]);
  t18614 = Cos(var1[8]);
  t18669 = t18435*t18525;
  t18686 = t18561*t16670*t18580;
  t18705 = t18669 + t18686;
  t18739 = -1.*t18561*t18435*t16670;
  t18759 = t18525*t18580;
  t18776 = t18739 + t18759;
  t18794 = Sin(var1[8]);
  t16755 = -0.15121*t16746;
  t16764 = t16738 + t16755;
  t16824 = 0.15121*t16746;
  t16842 = t16738 + t16824;
  t18454 = -1.*t18435;
  t18472 = 1. + t18454;
  t18634 = -1.*t18614;
  t18651 = 1. + t18634;
  t22204 = -1.*t165*t18561*t5081*t16714;
  t22246 = t165*t18561*t16686*t16746;
  t22554 = t22204 + t22246;
  t22558 = t18435*t22554;
  t22561 = t165*t16678*t18580;
  t22855 = t22558 + t22561;
  t23035 = -1.*t165*t18435*t16678;
  t23222 = t22554*t18580;
  t23235 = t23035 + t23222;
  t23425 = t5081*t16670;
  t23427 = t165*t16678*t16686;
  t23430 = t23425 + t23427;
  t23397 = t165*t5081*t16678;
  t23399 = -1.*t16670*t16686;
  t23404 = t23397 + t23399;
  t23432 = t16714*t23430;
  t23433 = t23404*t16746;
  t23448 = t23432 + t23433;
  t23573 = -1.*t165*t5081*t16678;
  t23574 = t16670*t16686;
  t23576 = t23573 + t23574;
  t23581 = -1.*t23576*t16746;
  t23582 = t23432 + t23581;
  t23511 = -1.*t23430*t16746;
  t23726 = t16714*t23576;
  t23740 = t23430*t16746;
  t23762 = t23726 + t23740;
  t23769 = -1.*t165*t18561*t18435;
  t23770 = -1.*t23762*t18580;
  t23771 = t23769 + t23770;
  t23773 = t18435*t23762;
  t23774 = -1.*t165*t18561*t18580;
  t23775 = t23773 + t23774;
  t23846 = t165*t18561*t18435;
  t23847 = t23762*t18580;
  t23848 = t23846 + t23847;
  p_output1[0]=1.;
  p_output1[1]=t16704*t16764 + 0.15121*(t16704*t16714 - 1.*t16746*t16815) + t16815*t16842 + 0.28121*t18472*t18525 - 0.28121*t16670*t18561*t18580 + 0.50321*t18651*t18705 - 0.50321*t18776*t18794 + 0.19821*(t18614*t18705 + t18776*t18794);
  p_output1[2]=t165*t16686*t16764*t18561 - 0.28121*t165*t16678*t18580 + 0.28121*t18472*t22554 + 0.50321*t18651*t22855 - 0.50321*t18794*t23235 + 0.19821*(t18614*t22855 + t18794*t23235) - 1.*t165*t16842*t18561*t5081 + 0.15121*(t165*t16686*t16714*t18561 + t165*t16746*t18561*t5081);
  p_output1[3]=t16764*t23404 + t16842*t23430 + 0.28121*t18472*t23448 + 0.50321*t18435*t18651*t23448 - 0.50321*t18580*t18794*t23448 + 0.19821*(t18435*t18614*t23448 + t18580*t18794*t23448) + 0.15121*(t16714*t23404 + t23511);
  p_output1[4]=(-0.15121*t16714 + t16824)*t23430 + (0.15121*t16714 + t16824)*t23576 + 0.15121*(t23511 - 1.*t16714*t23576) + 0.28121*t18472*t23582 + 0.50321*t18435*t18651*t23582 - 0.50321*t18580*t18794*t23582 + 0.19821*(t18435*t18614*t23582 + t18580*t18794*t23582);
  p_output1[5]=0.28121*t165*t18435*t18561 + 0.28121*t18580*t23762 + 0.50321*t18651*t23771 - 0.50321*t18794*t23775 + 0.19821*(t18614*t23771 + t18794*t23775);
  p_output1[6]=0.50321*t18794*t23775 - 0.50321*t18614*t23848 + 0.19821*(-1.*t18794*t23775 + t18614*t23848);
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

#include "J_u_frontSwingFootHeight2_ParallelStance.hh"

namespace ParallelStance
{

void J_u_frontSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
