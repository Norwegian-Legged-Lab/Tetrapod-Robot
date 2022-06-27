/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:25 GMT+02:00
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
  double t156;
  double t16769;
  double t4987;
  double t17753;
  double t18002;
  double t17494;
  double t18008;
  double t14448;
  double t17271;
  double t20974;
  double t20978;
  double t20980;
  double t17490;
  double t17992;
  double t18009;
  double t20959;
  double t16205;
  double t17469;
  double t17470;
  double t21050;
  double t21045;
  double t20981;
  double t20986;
  double t20991;
  double t20996;
  double t20997;
  double t20998;
  double t21000;
  double t21001;
  double t21002;
  double t21051;
  double t21053;
  double t21054;
  double t21060;
  double t21061;
  double t21062;
  double t21066;
  double t21068;
  double t21069;
  double t21075;
  double t21076;
  double t21079;
  double t21081;
  double t21082;
  double t21083;
  double t20969;
  double t20992;
  double t20993;
  double t21103;
  double t21104;
  double t21106;
  double t21107;
  double t21110;
  double t21111;
  double t21112;
  double t21113;
  double t21116;
  double t21117;
  double t21118;
  double t21119;
  double t21120;
  double t21121;
  double t21122;
  double t21123;
  double t21125;
  double t21126;
  double t21127;
  double t21128;
  double t21132;
  double t21133;
  double t21134;
  double t21135;
  double t21137;
  double t21138;
  double t21139;
  double t21124;
  double t21129;
  double t21130;
  double t21136;
  double t21140;
  double t21141;
  double t21143;
  double t21144;
  double t21145;
  double t20999;
  double t21003;
  double t21004;
  double t21131;
  double t21149;
  double t21157;
  double t21162;
  double t21169;
  double t21174;
  double t21200;
  double t21204;
  t156 = Cos(var1[4]);
  t16769 = Cos(var1[5]);
  t4987 = Cos(var1[6]);
  t17753 = Cos(var1[8]);
  t18002 = Sin(var1[7]);
  t17494 = Cos(var1[7]);
  t18008 = Sin(var1[8]);
  t14448 = Sin(var1[5]);
  t17271 = Sin(var1[6]);
  t20974 = t17753*t18002;
  t20978 = -1.*t17494*t18008;
  t20980 = t20974 + t20978;
  t17490 = Sin(var1[4]);
  t17992 = t17494*t17753;
  t18009 = t18002*t18008;
  t20959 = t17992 + t18009;
  t16205 = -1.*t4987*t14448;
  t17469 = -1.*t16769*t17271;
  t17470 = t16205 + t17469;
  t21050 = Cos(var1[3]);
  t21045 = Sin(var1[3]);
  t20981 = t16769*t4987*t20980;
  t20986 = -1.*t14448*t17271*t20980;
  t20991 = t20981 + t20986;
  t20996 = -1.*t17753*t18002;
  t20997 = t17494*t18008;
  t20998 = t20996 + t20997;
  t21000 = t16769*t4987*t20959;
  t21001 = -1.*t14448*t17271*t20959;
  t21002 = t21000 + t21001;
  t21051 = t16769*t4987;
  t21053 = -1.*t14448*t17271;
  t21054 = t21051 + t21053;
  t21060 = t4987*t14448*t20980;
  t21061 = t16769*t17271*t20980;
  t21062 = t21060 + t21061;
  t21066 = t156*t20959;
  t21068 = -1.*t17490*t20991;
  t21069 = t21066 + t21068;
  t21075 = t4987*t14448*t20959;
  t21076 = t16769*t17271*t20959;
  t21079 = t21075 + t21076;
  t21081 = t156*t20998;
  t21082 = -1.*t17490*t21002;
  t21083 = t21081 + t21082;
  t20969 = t17490*t20959;
  t20992 = t156*t20991;
  t20993 = t20969 + t20992;
  t21103 = -1.*t4987;
  t21104 = 1. + t21103;
  t21106 = 0.15121*t21104;
  t21107 = -1.*t17494;
  t21110 = 1. + t21107;
  t21111 = 0.28121*t21110;
  t21112 = -1.*t17753;
  t21113 = 1. + t21112;
  t21116 = 0.50321*t21113;
  t21117 = 0.19821*t17753;
  t21118 = t21116 + t21117;
  t21119 = t17494*t21118;
  t21120 = -0.305*t18002*t18008;
  t21121 = t21111 + t21119 + t21120;
  t21122 = t4987*t21121;
  t21123 = t21106 + t21122;
  t21125 = 0.15121*t4987;
  t21126 = -0.15121*t17271;
  t21127 = t17271*t21121;
  t21128 = t21106 + t21125 + t21126 + t21127;
  t21132 = 0.28121*t18002;
  t21133 = -1.*t21118*t18002;
  t21134 = -0.305*t17494*t18008;
  t21135 = t21132 + t21133 + t21134;
  t21137 = t16769*t21123;
  t21138 = -1.*t14448*t21128;
  t21139 = t21137 + t21138;
  t21124 = t14448*t21123;
  t21129 = t16769*t21128;
  t21130 = t21124 + t21129;
  t21136 = t17490*t21135;
  t21140 = t156*t21139;
  t21141 = t21136 + t21140;
  t21143 = t156*t21135;
  t21144 = -1.*t17490*t21139;
  t21145 = t21143 + t21144;
  t20999 = t17490*t20998;
  t21003 = t156*t21002;
  t21004 = t20999 + t21003;
  t21131 = -1.*t21054*t21130;
  t21149 = t21062*t21130;
  t21157 = t21054*t21130;
  t21162 = -1.*t21079*t21130;
  t21169 = -1.*t21062*t21130;
  t21174 = t21079*t21130;
  t21200 = -1.*t21135*t20959;
  t21204 = t21135*t20998;
  p_output1[0]=t21004*var2[0] + t156*t17470*var2[1] + t20993*var2[2];
  p_output1[1]=(t21050*t21079 - 1.*t21045*t21083)*var2[0] + (t17470*t17490*t21045 + t21050*t21054)*var2[1] + (t21050*t21062 - 1.*t21045*t21069)*var2[2];
  p_output1[2]=(t21045*t21079 + t21050*t21083)*var2[0] + (-1.*t17470*t17490*t21050 + t21045*t21054)*var2[1] + (t21045*t21062 + t21050*t21069)*var2[2];
  p_output1[3]=(t20993*(t21131 - 1.*t156*t17470*t21141 + t17470*t17490*t21145) + t156*t17470*(t20993*t21141 + t21069*t21145 + t21149))*var2[0] + (t21004*(-1.*t20993*t21141 - 1.*t21069*t21145 + t21169) + t20993*(t21004*t21141 + t21083*t21145 + t21174))*var2[1] + (t21004*(t156*t17470*t21141 - 1.*t17470*t17490*t21145 + t21157) + t156*t17470*(-1.*t21004*t21141 - 1.*t21083*t21145 + t21162))*var2[2];
  p_output1[4]=(t21062*(t21131 - 1.*t17470*t21139) + t21054*(t20959*t21135 + t20991*t21139 + t21149))*var2[0] + (t21079*(-1.*t20991*t21139 + t21169 + t21200) + t21062*(t21002*t21139 + t21174 + t21204))*var2[1] + (t21079*(t17470*t21139 + t21157) + t21054*(-1.*t20998*t21135 - 1.*t21002*t21139 + t21162))*var2[2];
  p_output1[5]=t20959*(t17271*t21123 - 1.*t21128*t4987)*var2[0] + (t20959*(t17271*t20959*t21128 + t21204 + t20959*t21123*t4987) + t20998*(-1.*t17271*t20980*t21128 + t21200 - 1.*t20980*t21123*t4987))*var2[1] + t20998*(-1.*t17271*t21123 + t21128*t4987)*var2[2];
  p_output1[6]=(-0.15121 + t20998*(-1.*t20980*t21121 + t21200) + t20959*(t20959*t21121 + t21204))*var2[1] + (0.15121*t20980 + 0.15121*t20998)*var2[2];
  p_output1[7]=(0.28121*t18008 - 0.305*t17753*t18008 - 1.*t18008*t21118)*var2[0] + (0.28121*t17753 + 0.305*Power(t18008,2) - 1.*t17753*t21118)*var2[2];
  p_output1[8]=-0.305*var2[2];
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

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
