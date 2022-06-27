/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:35 GMT+02:00
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
  double t7938;
  double t8198;
  double t8214;
  double t8215;
  double t8232;
  double t8238;
  double t8249;
  double t8361;
  double t8350;
  double t8293;
  double t8365;
  double t8378;
  double t8382;
  double t8270;
  double t7892;
  double t7927;
  double t8359;
  double t8384;
  double t8399;
  double t8447;
  double t8414;
  double t8442;
  double t8443;
  double t8413;
  double t8448;
  double t8461;
  double t8472;
  double t9728;
  double t9729;
  double t20679;
  double t21197;
  double t21237;
  double t22457;
  double t22525;
  double t22542;
  double t22581;
  double t9387;
  double t20909;
  double t22583;
  double t22589;
  double t8919;
  double t8993;
  double t9046;
  double t9150;
  double t22631;
  double t22633;
  double t22636;
  double t22637;
  double t22640;
  double t22641;
  double t22644;
  double t22645;
  double t22651;
  double t22653;
  double t22665;
  double t22868;
  double t22869;
  double t22882;
  double t22912;
  double t22913;
  double t22921;
  double t22959;
  double t22962;
  double t22963;
  double t22986;
  double t23023;
  double t23033;
  double t22927;
  double t22933;
  double t22934;
  double t22985;
  double t23139;
  double t23167;
  double t23168;
  double t23176;
  double t23177;
  double t22788;
  double t22884;
  double t22904;
  double t22975;
  double t23182;
  double t23189;
  double t23190;
  double t23193;
  double t24754;
  double t24877;
  double t8837;
  double t8839;
  double t8901;
  double t8254;
  double t8402;
  double t8403;
  double t23205;
  double t23207;
  double t23211;
  double t24955;
  double t24969;
  double t24988;
  double t24981;
  double t25006;
  double t24993;
  double t25044;
  double t25047;
  double t25054;
  double t25057;
  t7938 = Cos(var1[8]);
  t8198 = Sin(var1[7]);
  t8214 = t7938*t8198;
  t8215 = Cos(var1[7]);
  t8232 = Sin(var1[8]);
  t8238 = -1.*t8215*t8232;
  t8249 = t8214 + t8238;
  t8361 = Cos(var1[5]);
  t8350 = Sin(var1[6]);
  t8293 = Sin(var1[5]);
  t8365 = t8215*t7938;
  t8378 = t8198*t8232;
  t8382 = t8365 + t8378;
  t8270 = Cos(var1[4]);
  t7892 = Cos(var1[6]);
  t7927 = Sin(var1[4]);
  t8359 = t8293*t8350*t8249;
  t8384 = t8361*t8382;
  t8399 = t8359 + t8384;
  t8447 = Sin(var1[3]);
  t8414 = -1.*t8361*t8350*t8249;
  t8442 = t8293*t8382;
  t8443 = t8414 + t8442;
  t8413 = Cos(var1[3]);
  t8448 = t8270*t7892*t8249;
  t8461 = -1.*t7927*t8399;
  t8472 = t8448 + t8461;
  t9728 = -0.0641*t7938;
  t9729 = -0.28*t8232;
  t20679 = t9728 + t9729;
  t21197 = -1.*t7938;
  t21237 = 1. + t21197;
  t22457 = 0.075*t21237;
  t22525 = 0.355*t7938;
  t22542 = -0.0641*t8232;
  t22581 = t22457 + t22525 + t22542;
  t9387 = -0.325*t8198;
  t20909 = t8215*t20679;
  t22583 = t8198*t22581;
  t22589 = t9387 + t20909 + t22583;
  t8919 = -1.*t7892;
  t8993 = 1. + t8919;
  t9046 = 0.1575*t8993;
  t9150 = 0.2255*t7892;
  t22631 = -1.*t8350*t22589;
  t22633 = t9046 + t9150 + t22631;
  t22636 = -1.*t8293*t22633;
  t22637 = -1.*t8215;
  t22640 = 1. + t22637;
  t22641 = 0.325*t22640;
  t22644 = -1.*t8198*t20679;
  t22645 = t8215*t22581;
  t22651 = t22641 + t22644 + t22645;
  t22653 = t8361*t22651;
  t22665 = t22636 + t22653;
  t22868 = 0.068*t8350;
  t22869 = t7892*t22589;
  t22882 = t22868 + t22869;
  t22912 = -1.*t8270*t7892*t8293;
  t22913 = t7927*t8350;
  t22921 = t22912 + t22913;
  t22959 = t8361*t22633;
  t22962 = t8293*t22651;
  t22963 = t22959 + t22962;
  t22986 = -1.*t7938*t8198;
  t23023 = t8215*t8232;
  t23033 = t22986 + t23023;
  t22927 = t8270*t22665;
  t22933 = t7927*t22882;
  t22934 = t22927 + t22933;
  t22985 = t7892*t7927*t8382;
  t23139 = t8361*t23033;
  t23167 = t8293*t8350*t8382;
  t23168 = t23139 + t23167;
  t23176 = t8270*t23168;
  t23177 = t22985 + t23176;
  t22788 = -1.*t7927*t22665;
  t22884 = t8270*t22882;
  t22904 = t22788 + t22884;
  t22975 = -1.*t8361*t7892*t22963;
  t23182 = t8293*t23033;
  t23189 = -1.*t8361*t8350*t8382;
  t23190 = t23182 + t23189;
  t23193 = t22963*t23190;
  t24754 = -1.*t8350*t22882;
  t24877 = t7892*t22882*t8382;
  t8837 = t7892*t7927*t8293;
  t8839 = t8270*t8350;
  t8901 = t8837 + t8839;
  t8254 = t7892*t7927*t8249;
  t8402 = t8270*t8399;
  t8403 = t8254 + t8402;
  t23205 = t8270*t7892*t8382;
  t23207 = -1.*t7927*t23168;
  t23211 = t23205 + t23207;
  t24955 = t22963*t8443;
  t24969 = -1.*t22963*t23190;
  t24988 = -1.*t7892*t22882*t8382;
  t24981 = t7892*t22882*t8249;
  t25006 = t22651*t8382;
  t24993 = -1.*t22651*t23033;
  t25044 = t8361*t7892*t22963;
  t25047 = -1.*t22963*t8443;
  t25054 = t8350*t22882;
  t25057 = -1.*t7892*t22882*t8249;
  p_output1[0]=t8403;
  p_output1[1]=t8413*t8443 - 1.*t8447*t8472;
  p_output1[2]=t8443*t8447 + t8413*t8472;
  p_output1[3]=t22921*(t22934*t23177 + t23193 + t22904*t23211) + t23177*(-1.*t22921*t22934 + t22975 - 1.*t22904*t8901);
  p_output1[4]=t23190*(t22975 + t24754 + t22665*t7892*t8293) + (t22665*t23168 + t23193 + t24877)*t7892*t8361;
  p_output1[5]=t7892*(t24754 - 1.*t22633*t7892)*t8382 + t8350*(t22651*t23033 + t24877 - 1.*t22633*t8350*t8382);
  p_output1[6]=-0.2255*t23033 - 0.1575*t8249;
  p_output1[7]=-1.*t20679*t7938 + 0.325*t8232 - 1.*t22581*t8232;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t22921;
  p_output1[19]=t7892*t8361*t8413 - 1.*t8447*t8901;
  p_output1[20]=t7892*t8361*t8447 + t8413*t8901;
  p_output1[21]=(-1.*t22934*t23177 - 1.*t22904*t23211 + t24969)*t8403 + t23177*(t24955 + t22934*t8403 + t22904*t8472);
  p_output1[22]=t23190*(t24955 + t24981 + t22665*t8399) + (-1.*t22665*t23168 + t24969 + t24988)*t8443;
  p_output1[23]=t7892*(t24981 + t25006 - 1.*t22633*t8249*t8350)*t8382 + t7892*t8249*(t24988 + t24993 + t22633*t8350*t8382);
  p_output1[24]=t23033*(t25006 + t22589*t8249) + t8382*(t24993 - 1.*t22589*t8382);
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
  p_output1[36]=t23177;
  p_output1[37]=t23190*t8413 - 1.*t23211*t8447;
  p_output1[38]=t23211*t8413 + t23190*t8447;
  p_output1[39]=t22921*(t25047 - 1.*t22934*t8403 - 1.*t22904*t8472) + t8403*(t22921*t22934 + t25044 + t22904*t8901);
  p_output1[40]=t7892*t8361*(t25047 + t25057 - 1.*t22665*t8399) + (t25044 + t25054 - 1.*t22665*t7892*t8293)*t8443;
  p_output1[41]=t7892*(t25054 + t22633*t7892)*t8249 + t8350*(t25057 + t22633*t8249*t8350 - 1.*t22651*t8382);
  p_output1[42]=0.068*t8382;
  p_output1[43]=-0.325*t7938 + t22581*t7938 - 1.*t20679*t8232;
  p_output1[44]=-0.28;
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
