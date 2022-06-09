/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:55:01 GMT+02:00
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
  double t15046;
  double t15137;
  double t15235;
  double t15044;
  double t15248;
  double t15270;
  double t15278;
  double t15416;
  double t15445;
  double t15471;
  double t15048;
  double t15249;
  double t15268;
  double t15708;
  double t15734;
  double t15738;
  double t15773;
  double t15792;
  double t15794;
  double t15799;
  double t15837;
  double t15857;
  double t15900;
  double t15912;
  double t15920;
  double t15924;
  double t15936;
  double t15940;
  double t15944;
  double t15948;
  double t15650;
  double t15670;
  double t15740;
  double t15748;
  double t15777;
  double t15787;
  double t15904;
  double t15908;
  double t16155;
  double t16211;
  double t16261;
  double t16327;
  double t16365;
  double t16377;
  double t16442;
  double t16451;
  double t16481;
  double t16733;
  double t16777;
  double t16779;
  double t16641;
  double t16653;
  double t16698;
  double t16854;
  double t16855;
  double t16856;
  double t16922;
  double t16924;
  double t16928;
  double t16933;
  double t16935;
  double t16882;
  double t16984;
  double t16985;
  double t16988;
  double t16993;
  double t16996;
  double t16997;
  double t17000;
  double t17002;
  double t17003;
  double t17030;
  double t17031;
  double t17035;
  t15046 = Cos(var1[5]);
  t15137 = Sin(var1[3]);
  t15235 = Sin(var1[4]);
  t15044 = Cos(var1[3]);
  t15248 = Sin(var1[5]);
  t15270 = Cos(var1[6]);
  t15278 = -1.*t15270;
  t15416 = 1. + t15278;
  t15445 = 0.15121*t15416;
  t15471 = Sin(var1[6]);
  t15048 = t15044*t15046;
  t15249 = -1.*t15137*t15235*t15248;
  t15268 = t15048 + t15249;
  t15708 = t15046*t15137*t15235;
  t15734 = t15044*t15248;
  t15738 = t15708 + t15734;
  t15773 = Cos(var1[7]);
  t15792 = t15270*t15738;
  t15794 = t15268*t15471;
  t15799 = t15792 + t15794;
  t15837 = Cos(var1[4]);
  t15857 = Sin(var1[7]);
  t15900 = Cos(var1[8]);
  t15912 = t15773*t15799;
  t15920 = t15837*t15137*t15857;
  t15924 = t15912 + t15920;
  t15936 = -1.*t15837*t15773*t15137;
  t15940 = t15799*t15857;
  t15944 = t15936 + t15940;
  t15948 = Sin(var1[8]);
  t15650 = -0.15121*t15471;
  t15670 = t15445 + t15650;
  t15740 = 0.15121*t15471;
  t15748 = t15445 + t15740;
  t15777 = -1.*t15773;
  t15787 = 1. + t15777;
  t15904 = -1.*t15900;
  t15908 = 1. + t15904;
  t16155 = -1.*t15044*t15837*t15046*t15270;
  t16211 = t15044*t15837*t15248*t15471;
  t16261 = t16155 + t16211;
  t16327 = t15773*t16261;
  t16365 = t15044*t15235*t15857;
  t16377 = t16327 + t16365;
  t16442 = -1.*t15044*t15773*t15235;
  t16451 = t16261*t15857;
  t16481 = t16442 + t16451;
  t16733 = t15046*t15137;
  t16777 = t15044*t15235*t15248;
  t16779 = t16733 + t16777;
  t16641 = t15044*t15046*t15235;
  t16653 = -1.*t15137*t15248;
  t16698 = t16641 + t16653;
  t16854 = t15270*t16779;
  t16855 = t16698*t15471;
  t16856 = t16854 + t16855;
  t16922 = -1.*t15044*t15046*t15235;
  t16924 = t15137*t15248;
  t16928 = t16922 + t16924;
  t16933 = -1.*t16928*t15471;
  t16935 = t16854 + t16933;
  t16882 = -1.*t16779*t15471;
  t16984 = t15270*t16928;
  t16985 = t16779*t15471;
  t16988 = t16984 + t16985;
  t16993 = -1.*t15044*t15837*t15773;
  t16996 = -1.*t16988*t15857;
  t16997 = t16993 + t16996;
  t17000 = t15773*t16988;
  t17002 = -1.*t15044*t15837*t15857;
  t17003 = t17000 + t17002;
  t17030 = t15044*t15837*t15773;
  t17031 = t16988*t15857;
  t17035 = t17030 + t17031;
  p_output1[0]=1.;
  p_output1[1]=t15268*t15670 + 0.15121*(t15268*t15270 - 1.*t15471*t15738) + t15738*t15748 + 0.28121*t15787*t15799 - 0.28121*t15137*t15837*t15857 + 0.50321*t15908*t15924 - 0.50321*t15944*t15948 + 0.19821*(t15900*t15924 + t15944*t15948);
  p_output1[2]=t15044*t15248*t15670*t15837 - 1.*t15044*t15046*t15748*t15837 + 0.15121*(t15044*t15248*t15270*t15837 + t15044*t15046*t15471*t15837) - 0.28121*t15044*t15235*t15857 + 0.28121*t15787*t16261 + 0.50321*t15908*t16377 - 0.50321*t15948*t16481 + 0.19821*(t15900*t16377 + t15948*t16481);
  p_output1[3]=t15670*t16698 + t15748*t16779 + 0.28121*t15787*t16856 + 0.50321*t15773*t15908*t16856 - 0.50321*t15857*t15948*t16856 + 0.19821*(t15773*t15900*t16856 + t15857*t15948*t16856) + 0.15121*(t15270*t16698 + t16882);
  p_output1[4]=(-0.15121*t15270 + t15740)*t16779 + (0.15121*t15270 + t15740)*t16928 + 0.15121*(t16882 - 1.*t15270*t16928) + 0.28121*t15787*t16935 + 0.50321*t15773*t15908*t16935 - 0.50321*t15857*t15948*t16935 + 0.19821*(t15773*t15900*t16935 + t15857*t15948*t16935);
  p_output1[5]=0.28121*t15044*t15773*t15837 + 0.28121*t15857*t16988 + 0.50321*t15908*t16997 - 0.50321*t15948*t17003 + 0.19821*(t15900*t16997 + t15948*t17003);
  p_output1[6]=0.50321*t15948*t17003 - 0.50321*t15900*t17035 + 0.19821*(-1.*t15948*t17003 + t15900*t17035);
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

#include "J_foot_clearance_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_foot_clearance_FlFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
