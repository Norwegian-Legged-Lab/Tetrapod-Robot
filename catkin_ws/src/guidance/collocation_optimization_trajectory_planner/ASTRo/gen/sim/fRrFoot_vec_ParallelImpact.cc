/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:59 GMT+02:00
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
  double t982;
  double t1103;
  double t1062;
  double t1148;
  double t1153;
  double t1147;
  double t1157;
  double t1093;
  double t1162;
  double t1166;
  double t1167;
  double t1114;
  double t1160;
  double t2256;
  double t2267;
  double t20538;
  double t1094;
  double t1117;
  double t1119;
  double t57060;
  double t57057;
  double t1149;
  double t1158;
  double t1159;
  double t1168;
  double t1169;
  double t1172;
  double t55374;
  double t57046;
  double t57050;
  double t57061;
  double t57063;
  double t57066;
  double t57074;
  double t57075;
  double t57076;
  double t57079;
  double t57083;
  double t57084;
  double t57092;
  double t57093;
  double t57094;
  double t57096;
  double t57098;
  double t57100;
  double t1161;
  double t1173;
  double t1177;
  double t57121;
  double t57124;
  double t57125;
  double t57132;
  double t57133;
  double t57134;
  double t57136;
  double t57138;
  double t57139;
  double t57140;
  double t57142;
  double t57143;
  double t57144;
  double t57145;
  double t57149;
  double t57151;
  double t57127;
  double t57131;
  double t57146;
  double t57147;
  double t57155;
  double t57156;
  double t57157;
  double t57158;
  double t57161;
  double t57163;
  double t57164;
  double t57148;
  double t57152;
  double t57153;
  double t57159;
  double t57165;
  double t57167;
  double t57169;
  double t57170;
  double t57171;
  double t1741;
  double t57052;
  double t57053;
  double t57154;
  double t57176;
  double t57183;
  double t57190;
  double t57198;
  double t57203;
  double t57231;
  double t57236;
  t982 = Cos(var1[4]);
  t1103 = Cos(var1[15]);
  t1062 = Cos(var1[5]);
  t1148 = Cos(var1[17]);
  t1153 = Sin(var1[16]);
  t1147 = Cos(var1[16]);
  t1157 = Sin(var1[17]);
  t1093 = Sin(var1[15]);
  t1162 = -1.*t1148*t1153;
  t1166 = t1147*t1157;
  t1167 = t1162 + t1166;
  t1114 = Sin(var1[5]);
  t1160 = Sin(var1[4]);
  t2256 = -1.*t1147*t1148;
  t2267 = -1.*t1153*t1157;
  t20538 = t2256 + t2267;
  t1094 = t1062*t1093;
  t1117 = t1103*t1114;
  t1119 = t1094 + t1117;
  t57060 = Cos(var1[3]);
  t57057 = Sin(var1[3]);
  t1149 = t1147*t1148;
  t1158 = t1153*t1157;
  t1159 = t1149 + t1158;
  t1168 = t1103*t1062*t1167;
  t1169 = -1.*t1093*t1167*t1114;
  t1172 = t1168 + t1169;
  t55374 = t1103*t1062*t20538;
  t57046 = -1.*t1093*t20538*t1114;
  t57050 = t55374 + t57046;
  t57061 = -1.*t1103*t1062;
  t57063 = t1093*t1114;
  t57066 = t57061 + t57063;
  t57074 = t1062*t1093*t1167;
  t57075 = t1103*t1167*t1114;
  t57076 = t57074 + t57075;
  t57079 = t982*t1159;
  t57083 = -1.*t1160*t1172;
  t57084 = t57079 + t57083;
  t57092 = t1062*t1093*t20538;
  t57093 = t1103*t20538*t1114;
  t57094 = t57092 + t57093;
  t57096 = t982*t1167;
  t57098 = -1.*t1160*t57050;
  t57100 = t57096 + t57098;
  t1161 = t1159*t1160;
  t1173 = t982*t1172;
  t1177 = t1161 + t1173;
  t57121 = -1.*t1103;
  t57124 = 1. + t57121;
  t57125 = -0.15121*t57124;
  t57132 = -1.*t1147;
  t57133 = 1. + t57132;
  t57134 = -0.28121*t57133;
  t57136 = -1.*t1148;
  t57138 = 1. + t57136;
  t57139 = -0.50321*t57138;
  t57140 = -0.19821*t1148;
  t57142 = t57139 + t57140;
  t57143 = t1147*t57142;
  t57144 = 0.305*t1153*t1157;
  t57145 = t57134 + t57143 + t57144;
  t57149 = t1103*t57145;
  t57151 = t57125 + t57149;
  t57127 = -0.15121*t1103;
  t57131 = 0.15121*t1093;
  t57146 = t1093*t57145;
  t57147 = t57125 + t57127 + t57131 + t57146;
  t57155 = 0.28121*t1153;
  t57156 = t57142*t1153;
  t57157 = -0.305*t1147*t1157;
  t57158 = t57155 + t57156 + t57157;
  t57161 = t1062*t57151;
  t57163 = -1.*t57147*t1114;
  t57164 = t57161 + t57163;
  t57148 = t1062*t57147;
  t57152 = t57151*t1114;
  t57153 = t57148 + t57152;
  t57159 = t57158*t1160;
  t57165 = t982*t57164;
  t57167 = t57159 + t57165;
  t57169 = t982*t57158;
  t57170 = -1.*t1160*t57164;
  t57171 = t57169 + t57170;
  t1741 = t1167*t1160;
  t57052 = t982*t57050;
  t57053 = t1741 + t57052;
  t57154 = -1.*t57066*t57153;
  t57176 = t57076*t57153;
  t57183 = t57066*t57153;
  t57190 = -1.*t57094*t57153;
  t57198 = -1.*t57076*t57153;
  t57203 = t57094*t57153;
  t57231 = -1.*t57158*t1159;
  t57236 = t57158*t1167;
  p_output1[0]=t57053*var2[0] + t1119*t982*var2[1] + t1177*var2[2];
  p_output1[1]=(t57060*t57094 - 1.*t57057*t57100)*var2[0] + (t1119*t1160*t57057 + t57060*t57066)*var2[1] + (t57060*t57076 - 1.*t57057*t57084)*var2[2];
  p_output1[2]=(t57057*t57094 + t57060*t57100)*var2[0] + (-1.*t1119*t1160*t57060 + t57057*t57066)*var2[1] + (t57057*t57076 + t57060*t57084)*var2[2];
  p_output1[3]=(t1119*(t1177*t57167 + t57084*t57171 + t57176)*t982 + t1177*(t57154 + t1119*t1160*t57171 - 1.*t1119*t57167*t982))*var2[0] + (t57053*(-1.*t1177*t57167 - 1.*t57084*t57171 + t57198) + t1177*(t57053*t57167 + t57100*t57171 + t57203))*var2[1] + (t1119*(-1.*t57053*t57167 - 1.*t57100*t57171 + t57190)*t982 + t57053*(-1.*t1119*t1160*t57171 + t57183 + t1119*t57167*t982))*var2[2];
  p_output1[4]=(t57076*(t57154 - 1.*t1119*t57164) + t57066*(t1159*t57158 + t1172*t57164 + t57176))*var2[0] + (t57094*(-1.*t1172*t57164 + t57198 + t57231) + t57076*(t57050*t57164 + t57203 + t57236))*var2[1] + (t57094*(t1119*t57164 + t57183) + t57066*(-1.*t1167*t57158 - 1.*t57050*t57164 + t57190))*var2[2];
  p_output1[5]=t1159*(t1103*t57147 - 1.*t1093*t57151)*var2[0] + (t1167*(-1.*t1093*t1167*t57147 - 1.*t1103*t1167*t57151 + t57231) + t1159*(t1093*t20538*t57147 + t1103*t20538*t57151 + t57236))*var2[1] + t1167*(-1.*t1103*t57147 + t1093*t57151)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t1159 - 0.15121*t20538)*var2[0] + (-0.15121 + t1167*(-1.*t1167*t57145 + t57231) + t1159*(t20538*t57145 + t57236))*var2[1];
  p_output1[16]=(0.28121*t1157 - 0.305*t1148*t1157 + t1157*t57142)*var2[0] + (0.28121*t1148 + 0.305*Power(t1157,2) + t1148*t57142)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
