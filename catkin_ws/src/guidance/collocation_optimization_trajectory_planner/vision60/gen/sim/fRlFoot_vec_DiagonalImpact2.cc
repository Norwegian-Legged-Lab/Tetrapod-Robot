/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:52 GMT+02:00
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
  double t26952;
  double t22929;
  double t26962;
  double t26984;
  double t26973;
  double t26978;
  double t26986;
  double t20642;
  double t26983;
  double t26991;
  double t26996;
  double t26963;
  double t26999;
  double t27000;
  double t27001;
  double t26998;
  double t27065;
  double t27067;
  double t27002;
  double t27003;
  double t27004;
  double t27009;
  double t27010;
  double t27011;
  double t27013;
  double t27055;
  double t27059;
  double t27068;
  double t27070;
  double t27071;
  double t27076;
  double t27077;
  double t27078;
  double t27080;
  double t27082;
  double t27083;
  double t27088;
  double t27089;
  double t27090;
  double t27092;
  double t27093;
  double t27095;
  double t26997;
  double t27005;
  double t27006;
  double t27123;
  double t27124;
  double t27125;
  double t27127;
  double t27128;
  double t27129;
  double t27130;
  double t27131;
  double t27132;
  double t26923;
  double t26965;
  double t26971;
  double t27122;
  double t27126;
  double t27133;
  double t27134;
  double t27138;
  double t27139;
  double t27140;
  double t27141;
  double t27142;
  double t27144;
  double t27117;
  double t27119;
  double t27120;
  double t27121;
  double t27135;
  double t27136;
  double t27149;
  double t27150;
  double t27151;
  double t27153;
  double t27154;
  double t27155;
  double t27137;
  double t27145;
  double t27146;
  double t27152;
  double t27156;
  double t27157;
  double t27159;
  double t27160;
  double t27161;
  double t27008;
  double t27060;
  double t27061;
  double t27147;
  double t27165;
  double t27172;
  double t27177;
  double t27184;
  double t27189;
  double t27217;
  double t27221;
  double t27197;
  double t27201;
  double t27211;
  double t27207;
  double t27251;
  double t27246;
  t26952 = Cos(var1[9]);
  t22929 = Sin(var1[4]);
  t26962 = Cos(var1[4]);
  t26984 = Cos(var1[10]);
  t26973 = Cos(var1[11]);
  t26978 = Sin(var1[10]);
  t26986 = Sin(var1[11]);
  t20642 = Sin(var1[9]);
  t26983 = t26973*t26978;
  t26991 = -1.*t26984*t26986;
  t26996 = t26983 + t26991;
  t26963 = Sin(var1[5]);
  t26999 = t26984*t26973;
  t27000 = t26978*t26986;
  t27001 = t26999 + t27000;
  t26998 = Cos(var1[5]);
  t27065 = Cos(var1[3]);
  t27067 = Sin(var1[3]);
  t27002 = t26998*t27001;
  t27003 = t20642*t26996*t26963;
  t27004 = t27002 + t27003;
  t27009 = -1.*t26973*t26978;
  t27010 = t26984*t26986;
  t27011 = t27009 + t27010;
  t27013 = t26998*t27011;
  t27055 = t20642*t27001*t26963;
  t27059 = t27013 + t27055;
  t27068 = t26962*t20642;
  t27070 = t26952*t22929*t26963;
  t27071 = t27068 + t27070;
  t27076 = -1.*t26998*t20642*t26996;
  t27077 = t27001*t26963;
  t27078 = t27076 + t27077;
  t27080 = t26952*t26962*t26996;
  t27082 = -1.*t22929*t27004;
  t27083 = t27080 + t27082;
  t27088 = -1.*t26998*t20642*t27001;
  t27089 = t27011*t26963;
  t27090 = t27088 + t27089;
  t27092 = t26952*t26962*t27001;
  t27093 = -1.*t22929*t27059;
  t27095 = t27092 + t27093;
  t26997 = t26952*t26996*t22929;
  t27005 = t26962*t27004;
  t27006 = t26997 + t27005;
  t27123 = -0.0641*t26973;
  t27124 = -0.28*t26986;
  t27125 = t27123 + t27124;
  t27127 = -1.*t26973;
  t27128 = 1. + t27127;
  t27129 = -0.575*t27128;
  t27130 = -0.295*t26973;
  t27131 = -0.0641*t26986;
  t27132 = t27129 + t27130 + t27131;
  t26923 = t20642*t22929;
  t26965 = -1.*t26952*t26962*t26963;
  t26971 = t26923 + t26965;
  t27122 = 0.325*t26978;
  t27126 = t26984*t27125;
  t27133 = t26978*t27132;
  t27134 = t27122 + t27126 + t27133;
  t27138 = -1.*t26984;
  t27139 = 1. + t27138;
  t27140 = -0.325*t27139;
  t27141 = -1.*t26978*t27125;
  t27142 = t26984*t27132;
  t27144 = t27140 + t27141 + t27142;
  t27117 = -1.*t26952;
  t27119 = 1. + t27117;
  t27120 = 0.1575*t27119;
  t27121 = 0.2255*t26952;
  t27135 = -1.*t20642*t27134;
  t27136 = t27120 + t27121 + t27135;
  t27149 = 0.068*t20642;
  t27150 = t26952*t27134;
  t27151 = t27149 + t27150;
  t27153 = t26998*t27144;
  t27154 = -1.*t27136*t26963;
  t27155 = t27153 + t27154;
  t27137 = t26998*t27136;
  t27145 = t27144*t26963;
  t27146 = t27137 + t27145;
  t27152 = t27151*t22929;
  t27156 = t26962*t27155;
  t27157 = t27152 + t27156;
  t27159 = t26962*t27151;
  t27160 = -1.*t22929*t27155;
  t27161 = t27159 + t27160;
  t27008 = t26952*t27001*t22929;
  t27060 = t26962*t27059;
  t27061 = t27008 + t27060;
  t27147 = t26952*t26998*t27146;
  t27165 = -1.*t27146*t27078;
  t27172 = t27146*t27078;
  t27177 = -1.*t27146*t27090;
  t27184 = -1.*t26952*t26998*t27146;
  t27189 = t27146*t27090;
  t27217 = -1.*t20642*t27151;
  t27221 = t26952*t27151*t27001;
  t27197 = t20642*t27151;
  t27201 = -1.*t26952*t27151*t26996;
  t27211 = -1.*t26952*t27151*t27001;
  t27207 = t26952*t27151*t26996;
  t27251 = t27144*t27001;
  t27246 = -1.*t27144*t27011;
  p_output1[0]=t27006*var2[0] + t26971*var2[1] + t27061*var2[2];
  p_output1[1]=(t27065*t27078 - 1.*t27067*t27083)*var2[0] + (t26952*t26998*t27065 - 1.*t27067*t27071)*var2[1] + (t27065*t27090 - 1.*t27067*t27095)*var2[2];
  p_output1[2]=(t27067*t27078 + t27065*t27083)*var2[0] + (t26952*t26998*t27067 + t27065*t27071)*var2[1] + (t27067*t27090 + t27065*t27095)*var2[2];
  p_output1[3]=(t27061*(-1.*t26971*t27157 - 1.*t27071*t27161 + t27184) + t26971*(t27061*t27157 + t27095*t27161 + t27189))*var2[0] + (t27061*(t27006*t27157 + t27083*t27161 + t27172) + t27006*(-1.*t27061*t27157 - 1.*t27095*t27161 + t27177))*var2[1] + (t27006*(t27147 + t26971*t27157 + t27071*t27161) + t26971*(-1.*t27006*t27157 - 1.*t27083*t27161 + t27165))*var2[2];
  p_output1[4]=(t27090*(t26952*t26963*t27155 + t27184 + t27217) + t26952*t26998*(t27059*t27155 + t27189 + t27221))*var2[0] + (t27090*(t27004*t27155 + t27172 + t27207) + t27078*(-1.*t27059*t27155 + t27177 + t27211))*var2[1] + (t27078*(t27147 - 1.*t26952*t26963*t27155 + t27197) + t26952*t26998*(-1.*t27004*t27155 + t27165 + t27201))*var2[2];
  p_output1[5]=(t26952*t27001*(-1.*t26952*t27136 + t27217) + t20642*(-1.*t20642*t27001*t27136 + t27011*t27144 + t27221))*var2[0] + (t26952*t26996*(t20642*t27001*t27136 + t27211 + t27246) + t26952*t27001*(-1.*t20642*t26996*t27136 + t27207 + t27251))*var2[1] + (t26952*t26996*(t26952*t27136 + t27197) + t20642*(t20642*t26996*t27136 - 1.*t27001*t27144 + t27201))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t26996 - 0.2255*t27011)*var2[0] + (t27001*(-1.*t27001*t27134 + t27246) + t27011*(t26996*t27134 + t27251))*var2[1] + 0.068*t27001*var2[2];
  p_output1[10]=(-0.325*t26986 - 1.*t26973*t27125 - 1.*t26986*t27132)*var2[0] + (0.325*t26973 - 1.*t26986*t27125 + t26973*t27132)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
