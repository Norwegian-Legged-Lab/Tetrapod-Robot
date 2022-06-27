/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:13 GMT+02:00
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
  double t19706;
  double t19590;
  double t19601;
  double t19708;
  double t19737;
  double t19748;
  double t19750;
  double t19733;
  double t19759;
  double t19728;
  double t19764;
  double t19727;
  double t19703;
  double t19724;
  double t19725;
  double t16694;
  double t19751;
  double t19765;
  double t19766;
  double t19787;
  double t19781;
  double t19782;
  double t19785;
  double t19776;
  double t19788;
  double t19789;
  double t19796;
  double t19837;
  double t19854;
  double t19855;
  double t19888;
  double t19889;
  double t19891;
  double t19892;
  double t19894;
  double t19904;
  double t19908;
  double t19909;
  double t19914;
  double t19920;
  double t19922;
  double t19927;
  double t19928;
  double t19929;
  double t19930;
  double t19933;
  double t19935;
  double t19936;
  double t19939;
  double t19940;
  double t19959;
  double t19963;
  double t19965;
  double t19966;
  double t19970;
  double t19971;
  double t19976;
  double t19979;
  double t19980;
  double t19983;
  double t19934;
  double t19943;
  double t19944;
  double t19836;
  double t19866;
  double t19867;
  double t19873;
  double t19878;
  double t19881;
  double t19977;
  double t19984;
  double t19985;
  double t19989;
  double t19990;
  double t19992;
  double t19997;
  double t20001;
  double t20002;
  double t19882;
  double t19883;
  double t19884;
  double t19945;
  double t20003;
  double t19726;
  double t19767;
  double t19768;
  double t20008;
  double t20013;
  double t20014;
  double t20043;
  double t20049;
  double t20056;
  double t20061;
  double t20090;
  double t20105;
  t19706 = Cos(var1[7]);
  t19590 = Cos(var1[8]);
  t19601 = Sin(var1[7]);
  t19708 = Sin(var1[8]);
  t19737 = t19706*t19590;
  t19748 = t19601*t19708;
  t19750 = t19737 + t19748;
  t19733 = Cos(var1[6]);
  t19759 = Sin(var1[5]);
  t19728 = Cos(var1[5]);
  t19764 = Sin(var1[6]);
  t19727 = Cos(var1[4]);
  t19703 = -1.*t19590*t19601;
  t19724 = t19706*t19708;
  t19725 = t19703 + t19724;
  t16694 = Sin(var1[4]);
  t19751 = t19728*t19733*t19750;
  t19765 = -1.*t19759*t19764*t19750;
  t19766 = t19751 + t19765;
  t19787 = Sin(var1[3]);
  t19781 = t19733*t19759*t19750;
  t19782 = t19728*t19764*t19750;
  t19785 = t19781 + t19782;
  t19776 = Cos(var1[3]);
  t19788 = t19727*t19725;
  t19789 = -1.*t16694*t19766;
  t19796 = t19788 + t19789;
  t19837 = t19590*t19601;
  t19854 = -1.*t19706*t19708;
  t19855 = t19837 + t19854;
  t19888 = -1.*t19733;
  t19889 = 1. + t19888;
  t19891 = 0.15121*t19889;
  t19892 = -1.*t19706;
  t19894 = 1. + t19892;
  t19904 = 0.28121*t19894;
  t19908 = -1.*t19590;
  t19909 = 1. + t19908;
  t19914 = 0.50321*t19909;
  t19920 = 0.19821*t19590;
  t19922 = t19914 + t19920;
  t19927 = t19706*t19922;
  t19928 = -0.305*t19601*t19708;
  t19929 = t19904 + t19927 + t19928;
  t19930 = t19733*t19929;
  t19933 = t19891 + t19930;
  t19935 = 0.15121*t19733;
  t19936 = -0.15121*t19764;
  t19939 = t19764*t19929;
  t19940 = t19891 + t19935 + t19936 + t19939;
  t19959 = -1.*t19733*t19759;
  t19963 = -1.*t19728*t19764;
  t19965 = t19959 + t19963;
  t19966 = 0.28121*t19601;
  t19970 = -1.*t19922*t19601;
  t19971 = -0.305*t19706*t19708;
  t19976 = t19966 + t19970 + t19971;
  t19979 = t19728*t19933;
  t19980 = -1.*t19759*t19940;
  t19983 = t19979 + t19980;
  t19934 = t19759*t19933;
  t19943 = t19728*t19940;
  t19944 = t19934 + t19943;
  t19836 = t16694*t19750;
  t19866 = t19728*t19733*t19855;
  t19867 = -1.*t19759*t19764*t19855;
  t19873 = t19866 + t19867;
  t19878 = t19727*t19873;
  t19881 = t19836 + t19878;
  t19977 = t16694*t19976;
  t19984 = t19727*t19983;
  t19985 = t19977 + t19984;
  t19989 = t19727*t19976;
  t19990 = -1.*t16694*t19983;
  t19992 = t19989 + t19990;
  t19997 = t19733*t19759*t19855;
  t20001 = t19728*t19764*t19855;
  t20002 = t19997 + t20001;
  t19882 = t19728*t19733;
  t19883 = -1.*t19759*t19764;
  t19884 = t19882 + t19883;
  t19945 = -1.*t19884*t19944;
  t20003 = t20002*t19944;
  t19726 = t16694*t19725;
  t19767 = t19727*t19766;
  t19768 = t19726 + t19767;
  t20008 = t19727*t19750;
  t20013 = -1.*t16694*t19873;
  t20014 = t20008 + t20013;
  t20043 = -1.*t20002*t19944;
  t20049 = t19785*t19944;
  t20056 = -1.*t19976*t19750;
  t20061 = t19976*t19725;
  t20090 = t19884*t19944;
  t20105 = -1.*t19785*t19944;
  p_output1[0]=t19768;
  p_output1[1]=t19776*t19785 - 1.*t19787*t19796;
  p_output1[2]=t19785*t19787 + t19776*t19796;
  p_output1[3]=t19881*(t19945 - 1.*t19727*t19965*t19985 + t16694*t19965*t19992) + t19727*t19965*(t19881*t19985 + t20003 + t19992*t20014);
  p_output1[4]=(t19945 - 1.*t19965*t19983)*t20002 + t19884*(t19750*t19976 + t19873*t19983 + t20003);
  p_output1[5]=t19750*(t19764*t19933 - 1.*t19733*t19940);
  p_output1[6]=0;
  p_output1[7]=0.28121*t19708 - 0.305*t19590*t19708 - 1.*t19708*t19922;
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
  p_output1[18]=t19727*t19965;
  p_output1[19]=t19776*t19884 + t16694*t19787*t19965;
  p_output1[20]=t19787*t19884 - 1.*t16694*t19776*t19965;
  p_output1[21]=t19768*(-1.*t19881*t19985 - 1.*t19992*t20014 + t20043) + t19881*(t19768*t19985 + t19796*t19992 + t20049);
  p_output1[22]=t19785*(-1.*t19873*t19983 + t20043 + t20056) + t20002*(t19766*t19983 + t20049 + t20061);
  p_output1[23]=t19725*(-1.*t19733*t19855*t19933 - 1.*t19764*t19855*t19940 + t20056) + t19750*(t19733*t19750*t19933 + t19750*t19764*t19940 + t20061);
  p_output1[24]=-0.15121 + t19725*(-1.*t19855*t19929 + t20056) + t19750*(t19750*t19929 + t20061);
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
  p_output1[36]=t19881;
  p_output1[37]=t19776*t20002 - 1.*t19787*t20014;
  p_output1[38]=t19787*t20002 + t19776*t20014;
  p_output1[39]=t19768*(t19727*t19965*t19985 - 1.*t16694*t19965*t19992 + t20090) + t19727*t19965*(-1.*t19768*t19985 - 1.*t19796*t19992 + t20105);
  p_output1[40]=t19785*(t19965*t19983 + t20090) + t19884*(-1.*t19725*t19976 - 1.*t19766*t19983 + t20105);
  p_output1[41]=t19725*(-1.*t19764*t19933 + t19733*t19940);
  p_output1[42]=0.15121*t19725 + 0.15121*t19855;
  p_output1[43]=0.28121*t19590 + 0.305*Power(t19708,2) - 1.*t19590*t19922;
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
