/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:28 GMT+02:00
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
  double t3042;
  double t11945;
  double t10253;
  double t19033;
  double t19039;
  double t16336;
  double t19041;
  double t11555;
  double t19057;
  double t19058;
  double t19059;
  double t13120;
  double t19053;
  double t19038;
  double t19047;
  double t19052;
  double t11733;
  double t13136;
  double t14238;
  double t19080;
  double t19077;
  double t19060;
  double t19061;
  double t19062;
  double t19066;
  double t19067;
  double t19068;
  double t19070;
  double t19071;
  double t19072;
  double t19081;
  double t19082;
  double t19084;
  double t19091;
  double t19092;
  double t19094;
  double t19096;
  double t19097;
  double t19098;
  double t19106;
  double t19107;
  double t19108;
  double t19112;
  double t19113;
  double t19114;
  double t19056;
  double t19063;
  double t19064;
  double t19136;
  double t19137;
  double t19142;
  double t19145;
  double t19146;
  double t19147;
  double t19148;
  double t19151;
  double t19152;
  double t19153;
  double t19154;
  double t19155;
  double t19156;
  double t19161;
  double t19163;
  double t19165;
  double t19139;
  double t19140;
  double t19141;
  double t19158;
  double t19159;
  double t19169;
  double t19170;
  double t19172;
  double t19173;
  double t19175;
  double t19177;
  double t19181;
  double t19160;
  double t19166;
  double t19167;
  double t19174;
  double t19182;
  double t19184;
  double t19186;
  double t19188;
  double t19189;
  double t19069;
  double t19073;
  double t19074;
  double t19168;
  double t19197;
  double t19206;
  double t19211;
  double t19224;
  double t19229;
  double t19257;
  double t19261;
  t3042 = Cos(var1[4]);
  t11945 = Cos(var1[12]);
  t10253 = Cos(var1[5]);
  t19033 = Cos(var1[14]);
  t19039 = Sin(var1[13]);
  t16336 = Cos(var1[13]);
  t19041 = Sin(var1[14]);
  t11555 = Sin(var1[12]);
  t19057 = t19033*t19039;
  t19058 = -1.*t16336*t19041;
  t19059 = t19057 + t19058;
  t13120 = Sin(var1[5]);
  t19053 = Sin(var1[4]);
  t19038 = t16336*t19033;
  t19047 = t19039*t19041;
  t19052 = t19038 + t19047;
  t11733 = -1.*t10253*t11555;
  t13136 = -1.*t11945*t13120;
  t14238 = t11733 + t13136;
  t19080 = Cos(var1[3]);
  t19077 = Sin(var1[3]);
  t19060 = t11945*t10253*t19059;
  t19061 = -1.*t11555*t19059*t13120;
  t19062 = t19060 + t19061;
  t19066 = -1.*t19033*t19039;
  t19067 = t16336*t19041;
  t19068 = t19066 + t19067;
  t19070 = t11945*t10253*t19052;
  t19071 = -1.*t11555*t19052*t13120;
  t19072 = t19070 + t19071;
  t19081 = t11945*t10253;
  t19082 = -1.*t11555*t13120;
  t19084 = t19081 + t19082;
  t19091 = t10253*t11555*t19059;
  t19092 = t11945*t19059*t13120;
  t19094 = t19091 + t19092;
  t19096 = t3042*t19052;
  t19097 = -1.*t19053*t19062;
  t19098 = t19096 + t19097;
  t19106 = t10253*t11555*t19052;
  t19107 = t11945*t19052*t13120;
  t19108 = t19106 + t19107;
  t19112 = t3042*t19068;
  t19113 = -1.*t19053*t19072;
  t19114 = t19112 + t19113;
  t19056 = t19052*t19053;
  t19063 = t3042*t19062;
  t19064 = t19056 + t19063;
  t19136 = -1.*t11945;
  t19137 = 1. + t19136;
  t19142 = -1.*t16336;
  t19145 = 1. + t19142;
  t19146 = 0.28121*t19145;
  t19147 = -1.*t19033;
  t19148 = 1. + t19147;
  t19151 = 0.50321*t19148;
  t19152 = 0.19821*t19033;
  t19153 = t19151 + t19152;
  t19154 = t16336*t19153;
  t19155 = -0.305*t19039*t19041;
  t19156 = t19146 + t19154 + t19155;
  t19161 = 0.15121*t19137;
  t19163 = t11945*t19156;
  t19165 = t19161 + t19163;
  t19139 = -0.15121*t19137;
  t19140 = -0.15121*t11945;
  t19141 = -0.15121*t11555;
  t19158 = t11555*t19156;
  t19159 = t19139 + t19140 + t19141 + t19158;
  t19169 = 0.28121*t19039;
  t19170 = -1.*t19153*t19039;
  t19172 = -0.305*t16336*t19041;
  t19173 = t19169 + t19170 + t19172;
  t19175 = t10253*t19165;
  t19177 = -1.*t19159*t13120;
  t19181 = t19175 + t19177;
  t19160 = t10253*t19159;
  t19166 = t19165*t13120;
  t19167 = t19160 + t19166;
  t19174 = t19173*t19053;
  t19182 = t3042*t19181;
  t19184 = t19174 + t19182;
  t19186 = t3042*t19173;
  t19188 = -1.*t19053*t19181;
  t19189 = t19186 + t19188;
  t19069 = t19068*t19053;
  t19073 = t3042*t19072;
  t19074 = t19069 + t19073;
  t19168 = -1.*t19084*t19167;
  t19197 = t19094*t19167;
  t19206 = t19084*t19167;
  t19211 = -1.*t19108*t19167;
  t19224 = -1.*t19094*t19167;
  t19229 = t19108*t19167;
  t19257 = -1.*t19173*t19052;
  t19261 = t19173*t19068;
  p_output1[0]=t19074*var2[0] + t14238*t3042*var2[1] + t19064*var2[2];
  p_output1[1]=(t19080*t19108 - 1.*t19077*t19114)*var2[0] + (t14238*t19053*t19077 + t19080*t19084)*var2[1] + (t19080*t19094 - 1.*t19077*t19098)*var2[2];
  p_output1[2]=(t19077*t19108 + t19080*t19114)*var2[0] + (-1.*t14238*t19053*t19080 + t19077*t19084)*var2[1] + (t19077*t19094 + t19080*t19098)*var2[2];
  p_output1[3]=(t14238*(t19064*t19184 + t19098*t19189 + t19197)*t3042 + t19064*(t19168 + t14238*t19053*t19189 - 1.*t14238*t19184*t3042))*var2[0] + (t19074*(-1.*t19064*t19184 - 1.*t19098*t19189 + t19224) + t19064*(t19074*t19184 + t19114*t19189 + t19229))*var2[1] + (t14238*(-1.*t19074*t19184 - 1.*t19114*t19189 + t19211)*t3042 + t19074*(-1.*t14238*t19053*t19189 + t19206 + t14238*t19184*t3042))*var2[2];
  p_output1[4]=(t19094*(t19168 - 1.*t14238*t19181) + t19084*(t19052*t19173 + t19062*t19181 + t19197))*var2[0] + (t19108*(-1.*t19062*t19181 + t19224 + t19257) + t19094*(t19072*t19181 + t19229 + t19261))*var2[1] + (t19108*(t14238*t19181 + t19206) + t19084*(-1.*t19068*t19173 - 1.*t19072*t19181 + t19211))*var2[2];
  p_output1[5]=t19052*(-1.*t11945*t19159 + t11555*t19165)*var2[0] + (t19068*(-1.*t11555*t19059*t19159 - 1.*t11945*t19059*t19165 + t19257) + t19052*(t11555*t19052*t19159 + t11945*t19052*t19165 + t19261))*var2[1] + t19068*(t11945*t19159 - 1.*t11555*t19165)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t19068*(-1.*t19059*t19156 + t19257) + t19052*(t19052*t19156 + t19261))*var2[1] + (-0.15121*t19059 - 0.15121*t19068)*var2[2];
  p_output1[13]=(0.28121*t19041 - 0.305*t19033*t19041 - 1.*t19041*t19153)*var2[0] + (0.28121*t19033 + 0.305*Power(t19041,2) - 1.*t19033*t19153)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
