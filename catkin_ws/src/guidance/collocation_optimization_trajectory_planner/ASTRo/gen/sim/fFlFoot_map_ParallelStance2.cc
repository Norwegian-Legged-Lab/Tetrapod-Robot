/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:25 GMT+02:00
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
  double t16231;
  double t5105;
  double t10428;
  double t17097;
  double t17383;
  double t17828;
  double t17868;
  double t17374;
  double t20139;
  double t17370;
  double t20140;
  double t17323;
  double t12615;
  double t17098;
  double t17251;
  double t927;
  double t19673;
  double t20211;
  double t20225;
  double t20293;
  double t20272;
  double t20274;
  double t20278;
  double t20243;
  double t20298;
  double t20305;
  double t20307;
  double t20608;
  double t20610;
  double t20631;
  double t20683;
  double t20684;
  double t20737;
  double t20740;
  double t20741;
  double t20744;
  double t20753;
  double t20754;
  double t20767;
  double t20801;
  double t20817;
  double t20825;
  double t20828;
  double t20833;
  double t20844;
  double t20857;
  double t20859;
  double t20861;
  double t20862;
  double t20865;
  double t20874;
  double t20876;
  double t20884;
  double t20885;
  double t20888;
  double t20893;
  double t20906;
  double t20908;
  double t20920;
  double t20921;
  double t20858;
  double t20866;
  double t20867;
  double t20591;
  double t20636;
  double t20637;
  double t20638;
  double t20665;
  double t20670;
  double t20907;
  double t20922;
  double t20924;
  double t20964;
  double t20965;
  double t20968;
  double t21022;
  double t21030;
  double t21032;
  double t20676;
  double t20680;
  double t20682;
  double t20871;
  double t21054;
  double t17321;
  double t20230;
  double t20235;
  double t21064;
  double t21065;
  double t21078;
  double t21383;
  double t21428;
  double t21462;
  double t21479;
  double t21576;
  double t21581;
  t16231 = Cos(var1[7]);
  t5105 = Cos(var1[8]);
  t10428 = Sin(var1[7]);
  t17097 = Sin(var1[8]);
  t17383 = t16231*t5105;
  t17828 = t10428*t17097;
  t17868 = t17383 + t17828;
  t17374 = Cos(var1[6]);
  t20139 = Sin(var1[5]);
  t17370 = Cos(var1[5]);
  t20140 = Sin(var1[6]);
  t17323 = Cos(var1[4]);
  t12615 = -1.*t5105*t10428;
  t17098 = t16231*t17097;
  t17251 = t12615 + t17098;
  t927 = Sin(var1[4]);
  t19673 = t17370*t17374*t17868;
  t20211 = -1.*t20139*t20140*t17868;
  t20225 = t19673 + t20211;
  t20293 = Sin(var1[3]);
  t20272 = t17374*t20139*t17868;
  t20274 = t17370*t20140*t17868;
  t20278 = t20272 + t20274;
  t20243 = Cos(var1[3]);
  t20298 = t17323*t17251;
  t20305 = -1.*t927*t20225;
  t20307 = t20298 + t20305;
  t20608 = t5105*t10428;
  t20610 = -1.*t16231*t17097;
  t20631 = t20608 + t20610;
  t20683 = -1.*t17374;
  t20684 = 1. + t20683;
  t20737 = 0.15121*t20684;
  t20740 = -1.*t16231;
  t20741 = 1. + t20740;
  t20744 = 0.28121*t20741;
  t20753 = -1.*t5105;
  t20754 = 1. + t20753;
  t20767 = 0.50321*t20754;
  t20801 = 0.19821*t5105;
  t20817 = t20767 + t20801;
  t20825 = t16231*t20817;
  t20828 = -0.305*t10428*t17097;
  t20833 = t20744 + t20825 + t20828;
  t20844 = t17374*t20833;
  t20857 = t20737 + t20844;
  t20859 = 0.15121*t17374;
  t20861 = -0.15121*t20140;
  t20862 = t20140*t20833;
  t20865 = t20737 + t20859 + t20861 + t20862;
  t20874 = -1.*t17374*t20139;
  t20876 = -1.*t17370*t20140;
  t20884 = t20874 + t20876;
  t20885 = 0.28121*t10428;
  t20888 = -1.*t20817*t10428;
  t20893 = -0.305*t16231*t17097;
  t20906 = t20885 + t20888 + t20893;
  t20908 = t17370*t20857;
  t20920 = -1.*t20139*t20865;
  t20921 = t20908 + t20920;
  t20858 = t20139*t20857;
  t20866 = t17370*t20865;
  t20867 = t20858 + t20866;
  t20591 = t927*t17868;
  t20636 = t17370*t17374*t20631;
  t20637 = -1.*t20139*t20140*t20631;
  t20638 = t20636 + t20637;
  t20665 = t17323*t20638;
  t20670 = t20591 + t20665;
  t20907 = t927*t20906;
  t20922 = t17323*t20921;
  t20924 = t20907 + t20922;
  t20964 = t17323*t20906;
  t20965 = -1.*t927*t20921;
  t20968 = t20964 + t20965;
  t21022 = t17374*t20139*t20631;
  t21030 = t17370*t20140*t20631;
  t21032 = t21022 + t21030;
  t20676 = t17370*t17374;
  t20680 = -1.*t20139*t20140;
  t20682 = t20676 + t20680;
  t20871 = -1.*t20682*t20867;
  t21054 = t21032*t20867;
  t17321 = t927*t17251;
  t20230 = t17323*t20225;
  t20235 = t17321 + t20230;
  t21064 = t17323*t17868;
  t21065 = -1.*t927*t20638;
  t21078 = t21064 + t21065;
  t21383 = -1.*t21032*t20867;
  t21428 = t20278*t20867;
  t21462 = -1.*t20906*t17868;
  t21479 = t20906*t17251;
  t21576 = t20682*t20867;
  t21581 = -1.*t20278*t20867;
  p_output1[0]=t20235;
  p_output1[1]=t20243*t20278 - 1.*t20293*t20307;
  p_output1[2]=t20278*t20293 + t20243*t20307;
  p_output1[3]=t17323*t20884*(t20670*t20924 + t21054 + t20968*t21078) + t20670*(t20871 - 1.*t17323*t20884*t20924 + t20884*t20968*t927);
  p_output1[4]=(t20871 - 1.*t20884*t20921)*t21032 + t20682*(t17868*t20906 + t20638*t20921 + t21054);
  p_output1[5]=t17868*(t20140*t20857 - 1.*t17374*t20865);
  p_output1[6]=0;
  p_output1[7]=0.28121*t17097 - 1.*t17097*t20817 - 0.305*t17097*t5105;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t17323*t20884;
  p_output1[19]=t20243*t20682 + t20293*t20884*t927;
  p_output1[20]=t20293*t20682 - 1.*t20243*t20884*t927;
  p_output1[21]=t20235*(-1.*t20670*t20924 - 1.*t20968*t21078 + t21383) + t20670*(t20235*t20924 + t20307*t20968 + t21428);
  p_output1[22]=t20278*(-1.*t20638*t20921 + t21383 + t21462) + t21032*(t20225*t20921 + t21428 + t21479);
  p_output1[23]=t17251*(-1.*t17374*t20631*t20857 - 1.*t20140*t20631*t20865 + t21462) + t17868*(t17374*t17868*t20857 + t17868*t20140*t20865 + t21479);
  p_output1[24]=-0.15121 + t17251*(-1.*t20631*t20833 + t21462) + t17868*(t17868*t20833 + t21479);
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t20670;
  p_output1[37]=t20243*t21032 - 1.*t20293*t21078;
  p_output1[38]=t20293*t21032 + t20243*t21078;
  p_output1[39]=t17323*t20884*(-1.*t20235*t20924 - 1.*t20307*t20968 + t21581) + t20235*(t17323*t20884*t20924 + t21576 - 1.*t20884*t20968*t927);
  p_output1[40]=t20278*(t20884*t20921 + t21576) + t20682*(-1.*t17251*t20906 - 1.*t20225*t20921 + t21581);
  p_output1[41]=t17251*(-1.*t20140*t20857 + t17374*t20865);
  p_output1[42]=0.15121*t17251 + 0.15121*t20631;
  p_output1[43]=0.305*Power(t17097,2) + 0.28121*t5105 - 1.*t20817*t5105;
  p_output1[44]=-0.305;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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

#include "fFlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
