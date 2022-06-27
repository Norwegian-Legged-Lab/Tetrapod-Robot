/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:59 GMT+02:00
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
  double t6685;
  double t3005;
  double t3277;
  double t10153;
  double t18871;
  double t18876;
  double t18905;
  double t18851;
  double t18870;
  double t18931;
  double t18869;
  double t18993;
  double t306;
  double t19029;
  double t19033;
  double t19035;
  double t3542;
  double t11489;
  double t11733;
  double t18925;
  double t19009;
  double t19010;
  double t19058;
  double t19013;
  double t19015;
  double t19016;
  double t19053;
  double t19036;
  double t19041;
  double t19042;
  double t19054;
  double t19055;
  double t19056;
  double t19063;
  double t19069;
  double t19070;
  double t19077;
  double t19078;
  double t19082;
  double t19100;
  double t19104;
  double t19106;
  double t19112;
  double t19113;
  double t19114;
  double t19028;
  double t19046;
  double t19052;
  double t19138;
  double t19139;
  double t19140;
  double t19141;
  double t19142;
  double t19143;
  double t19144;
  double t19146;
  double t19147;
  double t19148;
  double t19150;
  double t19152;
  double t19153;
  double t19154;
  double t19155;
  double t19156;
  double t19158;
  double t19159;
  double t19160;
  double t19161;
  double t19165;
  double t19166;
  double t19167;
  double t19168;
  double t19170;
  double t19171;
  double t19172;
  double t19157;
  double t19162;
  double t19163;
  double t19169;
  double t19174;
  double t19176;
  double t19178;
  double t19179;
  double t19181;
  double t15407;
  double t19011;
  double t19012;
  double t19164;
  double t19186;
  double t19192;
  double t19197;
  double t19203;
  double t19209;
  double t19224;
  double t19229;
  t6685 = Cos(var1[7]);
  t3005 = Cos(var1[8]);
  t3277 = Sin(var1[7]);
  t10153 = Sin(var1[8]);
  t18871 = t6685*t3005;
  t18876 = t3277*t10153;
  t18905 = t18871 + t18876;
  t18851 = Cos(var1[4]);
  t18870 = Cos(var1[6]);
  t18931 = Sin(var1[5]);
  t18869 = Cos(var1[5]);
  t18993 = Sin(var1[6]);
  t306 = Sin(var1[4]);
  t19029 = t3005*t3277;
  t19033 = -1.*t6685*t10153;
  t19035 = t19029 + t19033;
  t3542 = -1.*t3005*t3277;
  t11489 = t6685*t10153;
  t11733 = t3542 + t11489;
  t18925 = t18869*t18870*t18905;
  t19009 = -1.*t18931*t18993*t18905;
  t19010 = t18925 + t19009;
  t19058 = Sin(var1[3]);
  t19013 = -1.*t18870*t18931;
  t19015 = -1.*t18869*t18993;
  t19016 = t19013 + t19015;
  t19053 = Cos(var1[3]);
  t19036 = t18869*t18870*t19035;
  t19041 = -1.*t18931*t18993*t19035;
  t19042 = t19036 + t19041;
  t19054 = t18870*t18931*t18905;
  t19055 = t18869*t18993*t18905;
  t19056 = t19054 + t19055;
  t19063 = t18851*t11733;
  t19069 = -1.*t306*t19010;
  t19070 = t19063 + t19069;
  t19077 = t18869*t18870;
  t19078 = -1.*t18931*t18993;
  t19082 = t19077 + t19078;
  t19100 = t18870*t18931*t19035;
  t19104 = t18869*t18993*t19035;
  t19106 = t19100 + t19104;
  t19112 = t18851*t18905;
  t19113 = -1.*t306*t19042;
  t19114 = t19112 + t19113;
  t19028 = t306*t18905;
  t19046 = t18851*t19042;
  t19052 = t19028 + t19046;
  t19138 = -1.*t18870;
  t19139 = 1. + t19138;
  t19140 = 0.15121*t19139;
  t19141 = -1.*t6685;
  t19142 = 1. + t19141;
  t19143 = 0.28121*t19142;
  t19144 = -1.*t3005;
  t19146 = 1. + t19144;
  t19147 = 0.50321*t19146;
  t19148 = 0.19821*t3005;
  t19150 = t19147 + t19148;
  t19152 = t6685*t19150;
  t19153 = -0.305*t3277*t10153;
  t19154 = t19143 + t19152 + t19153;
  t19155 = t18870*t19154;
  t19156 = t19140 + t19155;
  t19158 = 0.15121*t18870;
  t19159 = -0.15121*t18993;
  t19160 = t18993*t19154;
  t19161 = t19140 + t19158 + t19159 + t19160;
  t19165 = 0.28121*t3277;
  t19166 = -1.*t19150*t3277;
  t19167 = -0.305*t6685*t10153;
  t19168 = t19165 + t19166 + t19167;
  t19170 = t18869*t19156;
  t19171 = -1.*t18931*t19161;
  t19172 = t19170 + t19171;
  t19157 = t18931*t19156;
  t19162 = t18869*t19161;
  t19163 = t19157 + t19162;
  t19169 = t306*t19168;
  t19174 = t18851*t19172;
  t19176 = t19169 + t19174;
  t19178 = t18851*t19168;
  t19179 = -1.*t306*t19172;
  t19181 = t19178 + t19179;
  t15407 = t306*t11733;
  t19011 = t18851*t19010;
  t19012 = t15407 + t19011;
  t19164 = -1.*t19082*t19163;
  t19186 = t19106*t19163;
  t19192 = -1.*t19106*t19163;
  t19197 = t19056*t19163;
  t19203 = t19082*t19163;
  t19209 = -1.*t19056*t19163;
  t19224 = -1.*t19168*t18905;
  t19229 = t19168*t11733;
  p_output1[0]=t19012;
  p_output1[1]=t18851*t19016;
  p_output1[2]=t19052;
  p_output1[3]=t19053*t19056 - 1.*t19058*t19070;
  p_output1[4]=t19053*t19082 + t19016*t19058*t306;
  p_output1[5]=t19053*t19106 - 1.*t19058*t19114;
  p_output1[6]=t19056*t19058 + t19053*t19070;
  p_output1[7]=t19058*t19082 - 1.*t19016*t19053*t306;
  p_output1[8]=t19058*t19106 + t19053*t19114;
  p_output1[9]=t18851*t19016*(t19052*t19176 + t19114*t19181 + t19186) + t19052*(t19164 - 1.*t18851*t19016*t19176 + t19016*t19181*t306);
  p_output1[10]=t19012*(-1.*t19052*t19176 - 1.*t19114*t19181 + t19192) + t19052*(t19012*t19176 + t19070*t19181 + t19197);
  p_output1[11]=t18851*t19016*(-1.*t19012*t19176 - 1.*t19070*t19181 + t19209) + t19012*(t18851*t19016*t19176 + t19203 - 1.*t19016*t19181*t306);
  p_output1[12]=t19106*(t19164 - 1.*t19016*t19172) + t19082*(t18905*t19168 + t19042*t19172 + t19186);
  p_output1[13]=t19056*(-1.*t19042*t19172 + t19192 + t19224) + t19106*(t19010*t19172 + t19197 + t19229);
  p_output1[14]=t19056*(t19016*t19172 + t19203) + t19082*(-1.*t11733*t19168 - 1.*t19010*t19172 + t19209);
  p_output1[15]=t18905*(t18993*t19156 - 1.*t18870*t19161);
  p_output1[16]=t11733*(-1.*t18870*t19035*t19156 - 1.*t18993*t19035*t19161 + t19224) + t18905*(t18870*t18905*t19156 + t18905*t18993*t19161 + t19229);
  p_output1[17]=t11733*(-1.*t18993*t19156 + t18870*t19161);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t11733*(-1.*t19035*t19154 + t19224) + t18905*(t18905*t19154 + t19229);
  p_output1[20]=0.15121*t11733 + 0.15121*t19035;
  p_output1[21]=0.28121*t10153 - 1.*t10153*t19150 - 0.305*t10153*t3005;
  p_output1[22]=0;
  p_output1[23]=0.305*Power(t10153,2) + 0.28121*t3005 - 1.*t19150*t3005;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.305;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
