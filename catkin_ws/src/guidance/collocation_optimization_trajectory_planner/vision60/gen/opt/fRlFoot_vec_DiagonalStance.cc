/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:34 GMT+02:00
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
  double t4369;
  double t3413;
  double t4975;
  double t57326;
  double t57011;
  double t57300;
  double t57384;
  double t3412;
  double t57322;
  double t57391;
  double t57392;
  double t54175;
  double t57448;
  double t57449;
  double t57450;
  double t57406;
  double t58048;
  double t58051;
  double t57455;
  double t57456;
  double t57460;
  double t57465;
  double t57466;
  double t57512;
  double t57586;
  double t57606;
  double t57612;
  double t58052;
  double t58053;
  double t58057;
  double t58074;
  double t58075;
  double t58078;
  double t58080;
  double t58082;
  double t58084;
  double t58095;
  double t58122;
  double t58214;
  double t58227;
  double t67246;
  double t67404;
  double t57393;
  double t57461;
  double t57462;
  double t71788;
  double t71789;
  double t71790;
  double t71825;
  double t71829;
  double t71836;
  double t71874;
  double t71904;
  double t71905;
  double t3425;
  double t56990;
  double t57008;
  double t71786;
  double t71792;
  double t71907;
  double t71910;
  double t71921;
  double t71922;
  double t71924;
  double t71925;
  double t71927;
  double t71929;
  double t70204;
  double t70214;
  double t70942;
  double t71374;
  double t71916;
  double t71918;
  double t71943;
  double t71948;
  double t71949;
  double t71955;
  double t71956;
  double t71957;
  double t71919;
  double t71934;
  double t71940;
  double t71953;
  double t71958;
  double t72036;
  double t72047;
  double t72054;
  double t72076;
  double t57464;
  double t57625;
  double t58040;
  double t71942;
  double t72131;
  double t72141;
  double t72325;
  double t72398;
  double t72466;
  double t72656;
  double t72667;
  double t72609;
  double t72619;
  double t72640;
  double t72633;
  double t72734;
  double t72726;
  t4369 = Cos(var1[9]);
  t3413 = Sin(var1[4]);
  t4975 = Cos(var1[4]);
  t57326 = Cos(var1[10]);
  t57011 = Cos(var1[11]);
  t57300 = Sin(var1[10]);
  t57384 = Sin(var1[11]);
  t3412 = Sin(var1[9]);
  t57322 = t57011*t57300;
  t57391 = -1.*t57326*t57384;
  t57392 = t57322 + t57391;
  t54175 = Sin(var1[5]);
  t57448 = t57326*t57011;
  t57449 = t57300*t57384;
  t57450 = t57448 + t57449;
  t57406 = Cos(var1[5]);
  t58048 = Cos(var1[3]);
  t58051 = Sin(var1[3]);
  t57455 = t57406*t57450;
  t57456 = t3412*t57392*t54175;
  t57460 = t57455 + t57456;
  t57465 = -1.*t57011*t57300;
  t57466 = t57326*t57384;
  t57512 = t57465 + t57466;
  t57586 = t57406*t57512;
  t57606 = t3412*t57450*t54175;
  t57612 = t57586 + t57606;
  t58052 = t4975*t3412;
  t58053 = t4369*t3413*t54175;
  t58057 = t58052 + t58053;
  t58074 = -1.*t57406*t3412*t57392;
  t58075 = t57450*t54175;
  t58078 = t58074 + t58075;
  t58080 = t4369*t4975*t57392;
  t58082 = -1.*t3413*t57460;
  t58084 = t58080 + t58082;
  t58095 = -1.*t57406*t3412*t57450;
  t58122 = t57512*t54175;
  t58214 = t58095 + t58122;
  t58227 = t4369*t4975*t57450;
  t67246 = -1.*t3413*t57612;
  t67404 = t58227 + t67246;
  t57393 = t4369*t57392*t3413;
  t57461 = t4975*t57460;
  t57462 = t57393 + t57461;
  t71788 = -0.0641*t57011;
  t71789 = -0.28*t57384;
  t71790 = t71788 + t71789;
  t71825 = -1.*t57011;
  t71829 = 1. + t71825;
  t71836 = -0.575*t71829;
  t71874 = -0.295*t57011;
  t71904 = -0.0641*t57384;
  t71905 = t71836 + t71874 + t71904;
  t3425 = t3412*t3413;
  t56990 = -1.*t4369*t4975*t54175;
  t57008 = t3425 + t56990;
  t71786 = 0.325*t57300;
  t71792 = t57326*t71790;
  t71907 = t57300*t71905;
  t71910 = t71786 + t71792 + t71907;
  t71921 = -1.*t57326;
  t71922 = 1. + t71921;
  t71924 = -0.325*t71922;
  t71925 = -1.*t57300*t71790;
  t71927 = t57326*t71905;
  t71929 = t71924 + t71925 + t71927;
  t70204 = -1.*t4369;
  t70214 = 1. + t70204;
  t70942 = 0.1575*t70214;
  t71374 = 0.2255*t4369;
  t71916 = -1.*t3412*t71910;
  t71918 = t70942 + t71374 + t71916;
  t71943 = 0.068*t3412;
  t71948 = t4369*t71910;
  t71949 = t71943 + t71948;
  t71955 = t57406*t71929;
  t71956 = -1.*t71918*t54175;
  t71957 = t71955 + t71956;
  t71919 = t57406*t71918;
  t71934 = t71929*t54175;
  t71940 = t71919 + t71934;
  t71953 = t71949*t3413;
  t71958 = t4975*t71957;
  t72036 = t71953 + t71958;
  t72047 = t4975*t71949;
  t72054 = -1.*t3413*t71957;
  t72076 = t72047 + t72054;
  t57464 = t4369*t57450*t3413;
  t57625 = t4975*t57612;
  t58040 = t57464 + t57625;
  t71942 = t4369*t57406*t71940;
  t72131 = -1.*t71940*t58078;
  t72141 = t71940*t58078;
  t72325 = -1.*t71940*t58214;
  t72398 = -1.*t4369*t57406*t71940;
  t72466 = t71940*t58214;
  t72656 = -1.*t3412*t71949;
  t72667 = t4369*t71949*t57450;
  t72609 = t3412*t71949;
  t72619 = -1.*t4369*t71949*t57392;
  t72640 = -1.*t4369*t71949*t57450;
  t72633 = t4369*t71949*t57392;
  t72734 = t71929*t57450;
  t72726 = -1.*t71929*t57512;
  p_output1[0]=t57462*var2[0] + t57008*var2[1] + t58040*var2[2];
  p_output1[1]=(t58048*t58078 - 1.*t58051*t58084)*var2[0] + (t4369*t57406*t58048 - 1.*t58051*t58057)*var2[1] + (t58048*t58214 - 1.*t58051*t67404)*var2[2];
  p_output1[2]=(t58051*t58078 + t58048*t58084)*var2[0] + (t4369*t57406*t58051 + t58048*t58057)*var2[1] + (t58051*t58214 + t58048*t67404)*var2[2];
  p_output1[3]=(t58040*(-1.*t57008*t72036 - 1.*t58057*t72076 + t72398) + t57008*(t58040*t72036 + t67404*t72076 + t72466))*var2[0] + (t58040*(t57462*t72036 + t58084*t72076 + t72141) + t57462*(-1.*t58040*t72036 - 1.*t67404*t72076 + t72325))*var2[1] + (t57462*(t71942 + t57008*t72036 + t58057*t72076) + t57008*(-1.*t57462*t72036 - 1.*t58084*t72076 + t72131))*var2[2];
  p_output1[4]=(t58214*(t4369*t54175*t71957 + t72398 + t72656) + t4369*t57406*(t57612*t71957 + t72466 + t72667))*var2[0] + (t58214*(t57460*t71957 + t72141 + t72633) + t58078*(-1.*t57612*t71957 + t72325 + t72640))*var2[1] + (t58078*(t71942 - 1.*t4369*t54175*t71957 + t72609) + t4369*t57406*(-1.*t57460*t71957 + t72131 + t72619))*var2[2];
  p_output1[5]=(t4369*t57450*(-1.*t4369*t71918 + t72656) + t3412*(-1.*t3412*t57450*t71918 + t57512*t71929 + t72667))*var2[0] + (t4369*t57392*(t3412*t57450*t71918 + t72640 + t72726) + t4369*t57450*(-1.*t3412*t57392*t71918 + t72633 + t72734))*var2[1] + (t4369*t57392*(t4369*t71918 + t72609) + t3412*(t3412*t57392*t71918 - 1.*t57450*t71929 + t72619))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t57392 - 0.2255*t57512)*var2[0] + (t57450*(-1.*t57450*t71910 + t72726) + t57512*(t57392*t71910 + t72734))*var2[1] + 0.068*t57450*var2[2];
  p_output1[10]=(-0.325*t57384 - 1.*t57011*t71790 - 1.*t57384*t71905)*var2[0] + (0.325*t57011 - 1.*t57384*t71790 + t57011*t71905)*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
