/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:41 GMT+02:00
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
  double t4570;
  double t4600;
  double t2965;
  double t4593;
  double t4601;
  double t4924;
  double t4936;
  double t4940;
  double t4973;
  double t4982;
  double t4985;
  double t4986;
  double t5126;
  double t5145;
  double t5147;
  double t5075;
  double t5236;
  double t5325;
  double t5072;
  double t5152;
  double t5167;
  double t5183;
  double t5184;
  double t5193;
  double t5194;
  double t5197;
  double t5198;
  double t5326;
  double t5336;
  double t5339;
  double t5352;
  double t5355;
  double t5356;
  double t5372;
  double t5376;
  double t5388;
  double t5641;
  double t8911;
  double t8928;
  double t8932;
  double t8933;
  double t9023;
  double t9085;
  double t9086;
  double t9087;
  double t9090;
  double t9091;
  double t9092;
  double t9093;
  double t9095;
  double t9097;
  double t9084;
  double t9089;
  double t9098;
  double t9100;
  double t4596;
  double t4602;
  double t4779;
  double t9077;
  double t9079;
  double t9080;
  double t9081;
  double t9102;
  double t9103;
  double t9104;
  double t9105;
  double t9106;
  double t9108;
  double t9109;
  double t9110;
  double t9112;
  double t9113;
  double t9114;
  double t9117;
  double t9118;
  double t9119;
  double t4989;
  double t5168;
  double t5172;
  double t9128;
  double t9129;
  double t9130;
  double t9124;
  double t9125;
  double t9126;
  double t9115;
  double t9120;
  double t9122;
  double t5177;
  double t5201;
  double t5202;
  double t9131;
  double t9134;
  double t9142;
  double t9148;
  double t9159;
  double t9162;
  double t9191;
  double t9194;
  double t9171;
  double t9174;
  double t9184;
  double t9180;
  double t9224;
  double t9219;
  t4570 = Cos(var1[6]);
  t4600 = Sin(var1[4]);
  t2965 = Cos(var1[4]);
  t4593 = Sin(var1[5]);
  t4601 = Sin(var1[6]);
  t4924 = Cos(var1[8]);
  t4936 = Sin(var1[7]);
  t4940 = t4924*t4936;
  t4973 = Cos(var1[7]);
  t4982 = Sin(var1[8]);
  t4985 = -1.*t4973*t4982;
  t4986 = t4940 + t4985;
  t5126 = t4973*t4924;
  t5145 = t4936*t4982;
  t5147 = t5126 + t5145;
  t5075 = Cos(var1[5]);
  t5236 = Cos(var1[3]);
  t5325 = Sin(var1[3]);
  t5072 = t4593*t4601*t4986;
  t5152 = t5075*t5147;
  t5167 = t5072 + t5152;
  t5183 = -1.*t4924*t4936;
  t5184 = t4973*t4982;
  t5193 = t5183 + t5184;
  t5194 = t5075*t5193;
  t5197 = t4593*t4601*t5147;
  t5198 = t5194 + t5197;
  t5326 = t4570*t4600*t4593;
  t5336 = t2965*t4601;
  t5339 = t5326 + t5336;
  t5352 = -1.*t5075*t4601*t4986;
  t5355 = t4593*t5147;
  t5356 = t5352 + t5355;
  t5372 = t2965*t4570*t4986;
  t5376 = -1.*t4600*t5167;
  t5388 = t5372 + t5376;
  t5641 = t4593*t5193;
  t8911 = -1.*t5075*t4601*t5147;
  t8928 = t5641 + t8911;
  t8932 = t2965*t4570*t5147;
  t8933 = -1.*t4600*t5198;
  t9023 = t8932 + t8933;
  t9085 = -0.0641*t4924;
  t9086 = -0.28*t4982;
  t9087 = t9085 + t9086;
  t9090 = -1.*t4924;
  t9091 = 1. + t9090;
  t9092 = 0.075*t9091;
  t9093 = 0.355*t4924;
  t9095 = -0.0641*t4982;
  t9097 = t9092 + t9093 + t9095;
  t9084 = -0.325*t4936;
  t9089 = t4973*t9087;
  t9098 = t4936*t9097;
  t9100 = t9084 + t9089 + t9098;
  t4596 = -1.*t2965*t4570*t4593;
  t4602 = t4600*t4601;
  t4779 = t4596 + t4602;
  t9077 = -1.*t4570;
  t9079 = 1. + t9077;
  t9080 = 0.1575*t9079;
  t9081 = 0.2255*t4570;
  t9102 = -1.*t4601*t9100;
  t9103 = t9080 + t9081 + t9102;
  t9104 = -1.*t4593*t9103;
  t9105 = -1.*t4973;
  t9106 = 1. + t9105;
  t9108 = 0.325*t9106;
  t9109 = -1.*t4936*t9087;
  t9110 = t4973*t9097;
  t9112 = t9108 + t9109 + t9110;
  t9113 = t5075*t9112;
  t9114 = t9104 + t9113;
  t9117 = 0.068*t4601;
  t9118 = t4570*t9100;
  t9119 = t9117 + t9118;
  t4989 = t4570*t4600*t4986;
  t5168 = t2965*t5167;
  t5172 = t4989 + t5168;
  t9128 = t5075*t9103;
  t9129 = t4593*t9112;
  t9130 = t9128 + t9129;
  t9124 = t2965*t9114;
  t9125 = t4600*t9119;
  t9126 = t9124 + t9125;
  t9115 = -1.*t4600*t9114;
  t9120 = t2965*t9119;
  t9122 = t9115 + t9120;
  t5177 = t4570*t4600*t5147;
  t5201 = t2965*t5198;
  t5202 = t5177 + t5201;
  t9131 = t5075*t4570*t9130;
  t9134 = -1.*t9130*t5356;
  t9142 = t9130*t5356;
  t9148 = -1.*t9130*t8928;
  t9159 = -1.*t5075*t4570*t9130;
  t9162 = t9130*t8928;
  t9191 = -1.*t4601*t9119;
  t9194 = t4570*t9119*t5147;
  t9171 = t4601*t9119;
  t9174 = -1.*t4570*t9119*t4986;
  t9184 = -1.*t4570*t9119*t5147;
  t9180 = t4570*t9119*t4986;
  t9224 = t9112*t5147;
  t9219 = -1.*t9112*t5193;
  p_output1[0]=t5172*var2[0] + t4779*var2[1] + t5202*var2[2];
  p_output1[1]=(t5236*t5356 - 1.*t5325*t5388)*var2[0] + (t4570*t5075*t5236 - 1.*t5325*t5339)*var2[1] + (t5236*t8928 - 1.*t5325*t9023)*var2[2];
  p_output1[2]=(t5325*t5356 + t5236*t5388)*var2[0] + (t4570*t5075*t5325 + t5236*t5339)*var2[1] + (t5325*t8928 + t5236*t9023)*var2[2];
  p_output1[3]=(t5202*(-1.*t5339*t9122 - 1.*t4779*t9126 + t9159) + t4779*(t9023*t9122 + t5202*t9126 + t9162))*var2[0] + (t5202*(t5388*t9122 + t5172*t9126 + t9142) + t5172*(-1.*t9023*t9122 - 1.*t5202*t9126 + t9148))*var2[1] + (t5172*(t5339*t9122 + t4779*t9126 + t9131) + t4779*(-1.*t5388*t9122 - 1.*t5172*t9126 + t9134))*var2[2];
  p_output1[4]=(t8928*(t4570*t4593*t9114 + t9159 + t9191) + t4570*t5075*(t5198*t9114 + t9162 + t9194))*var2[0] + (t8928*(t5167*t9114 + t9142 + t9180) + t5356*(-1.*t5198*t9114 + t9148 + t9184))*var2[1] + (t5356*(-1.*t4570*t4593*t9114 + t9131 + t9171) + t4570*t5075*(-1.*t5167*t9114 + t9134 + t9174))*var2[2];
  p_output1[5]=(t4570*t5147*(-1.*t4570*t9103 + t9191) + t4601*(-1.*t4601*t5147*t9103 + t5193*t9112 + t9194))*var2[0] + (t4570*t4986*(t4601*t5147*t9103 + t9184 + t9219) + t4570*t5147*(-1.*t4601*t4986*t9103 + t9180 + t9224))*var2[1] + (t4570*t4986*(t4570*t9103 + t9171) + t4601*(t4601*t4986*t9103 - 1.*t5147*t9112 + t9174))*var2[2];
  p_output1[6]=(-0.1575*t4986 - 0.2255*t5193)*var2[0] + (t5147*(-1.*t5147*t9100 + t9219) + t5193*(t4986*t9100 + t9224))*var2[1] + 0.068*t5147*var2[2];
  p_output1[7]=(0.325*t4982 - 1.*t4924*t9087 - 1.*t4982*t9097)*var2[0] + (-0.325*t4924 - 1.*t4982*t9087 + t4924*t9097)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
