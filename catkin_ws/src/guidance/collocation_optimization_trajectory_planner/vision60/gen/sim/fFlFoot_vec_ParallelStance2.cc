/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:37 GMT+02:00
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
  double t24916;
  double t24930;
  double t22889;
  double t24928;
  double t24931;
  double t25061;
  double t25062;
  double t25074;
  double t25089;
  double t25097;
  double t25103;
  double t25104;
  double t25115;
  double t25119;
  double t25123;
  double t25113;
  double t25150;
  double t25153;
  double t25112;
  double t25127;
  double t25128;
  double t25136;
  double t25137;
  double t25138;
  double t25139;
  double t25140;
  double t25141;
  double t25155;
  double t25161;
  double t25162;
  double t25172;
  double t25177;
  double t25179;
  double t25182;
  double t25185;
  double t25187;
  double t25192;
  double t25193;
  double t25194;
  double t25197;
  double t25198;
  double t25199;
  double t25254;
  double t25255;
  double t25257;
  double t25270;
  double t25275;
  double t25277;
  double t25278;
  double t25279;
  double t25289;
  double t25247;
  double t25259;
  double t25293;
  double t25304;
  double t24929;
  double t24932;
  double t25048;
  double t25242;
  double t25243;
  double t25244;
  double t25246;
  double t25309;
  double t25316;
  double t25320;
  double t25321;
  double t25322;
  double t25326;
  double t25327;
  double t25328;
  double t25329;
  double t25330;
  double t25331;
  double t25335;
  double t25336;
  double t25339;
  double t25111;
  double t25129;
  double t25130;
  double t25357;
  double t25362;
  double t25363;
  double t25348;
  double t25351;
  double t25352;
  double t25334;
  double t25345;
  double t25346;
  double t25135;
  double t25142;
  double t25143;
  double t25365;
  double t25369;
  double t25376;
  double t25383;
  double t25394;
  double t25397;
  double t25439;
  double t25442;
  double t25408;
  double t25413;
  double t25432;
  double t25426;
  double t25476;
  double t25471;
  t24916 = Cos(var1[6]);
  t24930 = Sin(var1[4]);
  t22889 = Cos(var1[4]);
  t24928 = Sin(var1[5]);
  t24931 = Sin(var1[6]);
  t25061 = Cos(var1[8]);
  t25062 = Sin(var1[7]);
  t25074 = t25061*t25062;
  t25089 = Cos(var1[7]);
  t25097 = Sin(var1[8]);
  t25103 = -1.*t25089*t25097;
  t25104 = t25074 + t25103;
  t25115 = t25089*t25061;
  t25119 = t25062*t25097;
  t25123 = t25115 + t25119;
  t25113 = Cos(var1[5]);
  t25150 = Cos(var1[3]);
  t25153 = Sin(var1[3]);
  t25112 = t24928*t24931*t25104;
  t25127 = t25113*t25123;
  t25128 = t25112 + t25127;
  t25136 = -1.*t25061*t25062;
  t25137 = t25089*t25097;
  t25138 = t25136 + t25137;
  t25139 = t25113*t25138;
  t25140 = t24928*t24931*t25123;
  t25141 = t25139 + t25140;
  t25155 = t24916*t24930*t24928;
  t25161 = t22889*t24931;
  t25162 = t25155 + t25161;
  t25172 = -1.*t25113*t24931*t25104;
  t25177 = t24928*t25123;
  t25179 = t25172 + t25177;
  t25182 = t22889*t24916*t25104;
  t25185 = -1.*t24930*t25128;
  t25187 = t25182 + t25185;
  t25192 = t24928*t25138;
  t25193 = -1.*t25113*t24931*t25123;
  t25194 = t25192 + t25193;
  t25197 = t22889*t24916*t25123;
  t25198 = -1.*t24930*t25141;
  t25199 = t25197 + t25198;
  t25254 = -0.0641*t25061;
  t25255 = -0.28*t25097;
  t25257 = t25254 + t25255;
  t25270 = -1.*t25061;
  t25275 = 1. + t25270;
  t25277 = 0.075*t25275;
  t25278 = 0.355*t25061;
  t25279 = -0.0641*t25097;
  t25289 = t25277 + t25278 + t25279;
  t25247 = -0.325*t25062;
  t25259 = t25089*t25257;
  t25293 = t25062*t25289;
  t25304 = t25247 + t25259 + t25293;
  t24929 = -1.*t22889*t24916*t24928;
  t24932 = t24930*t24931;
  t25048 = t24929 + t24932;
  t25242 = -1.*t24916;
  t25243 = 1. + t25242;
  t25244 = 0.1575*t25243;
  t25246 = 0.2255*t24916;
  t25309 = -1.*t24931*t25304;
  t25316 = t25244 + t25246 + t25309;
  t25320 = -1.*t24928*t25316;
  t25321 = -1.*t25089;
  t25322 = 1. + t25321;
  t25326 = 0.325*t25322;
  t25327 = -1.*t25062*t25257;
  t25328 = t25089*t25289;
  t25329 = t25326 + t25327 + t25328;
  t25330 = t25113*t25329;
  t25331 = t25320 + t25330;
  t25335 = 0.068*t24931;
  t25336 = t24916*t25304;
  t25339 = t25335 + t25336;
  t25111 = t24916*t24930*t25104;
  t25129 = t22889*t25128;
  t25130 = t25111 + t25129;
  t25357 = t25113*t25316;
  t25362 = t24928*t25329;
  t25363 = t25357 + t25362;
  t25348 = t22889*t25331;
  t25351 = t24930*t25339;
  t25352 = t25348 + t25351;
  t25334 = -1.*t24930*t25331;
  t25345 = t22889*t25339;
  t25346 = t25334 + t25345;
  t25135 = t24916*t24930*t25123;
  t25142 = t22889*t25141;
  t25143 = t25135 + t25142;
  t25365 = t25113*t24916*t25363;
  t25369 = -1.*t25363*t25179;
  t25376 = t25363*t25179;
  t25383 = -1.*t25363*t25194;
  t25394 = -1.*t25113*t24916*t25363;
  t25397 = t25363*t25194;
  t25439 = -1.*t24931*t25339;
  t25442 = t24916*t25339*t25123;
  t25408 = t24931*t25339;
  t25413 = -1.*t24916*t25339*t25104;
  t25432 = -1.*t24916*t25339*t25123;
  t25426 = t24916*t25339*t25104;
  t25476 = t25329*t25123;
  t25471 = -1.*t25329*t25138;
  p_output1[0]=t25130*var2[0] + t25048*var2[1] + t25143*var2[2];
  p_output1[1]=(t25150*t25179 - 1.*t25153*t25187)*var2[0] + (t24916*t25113*t25150 - 1.*t25153*t25162)*var2[1] + (t25150*t25194 - 1.*t25153*t25199)*var2[2];
  p_output1[2]=(t25153*t25179 + t25150*t25187)*var2[0] + (t24916*t25113*t25153 + t25150*t25162)*var2[1] + (t25153*t25194 + t25150*t25199)*var2[2];
  p_output1[3]=(t25143*(-1.*t25162*t25346 - 1.*t25048*t25352 + t25394) + t25048*(t25199*t25346 + t25143*t25352 + t25397))*var2[0] + (t25143*(t25187*t25346 + t25130*t25352 + t25376) + t25130*(-1.*t25199*t25346 - 1.*t25143*t25352 + t25383))*var2[1] + (t25130*(t25162*t25346 + t25048*t25352 + t25365) + t25048*(-1.*t25187*t25346 - 1.*t25130*t25352 + t25369))*var2[2];
  p_output1[4]=(t25194*(t24916*t24928*t25331 + t25394 + t25439) + t24916*t25113*(t25141*t25331 + t25397 + t25442))*var2[0] + (t25194*(t25128*t25331 + t25376 + t25426) + t25179*(-1.*t25141*t25331 + t25383 + t25432))*var2[1] + (t25179*(-1.*t24916*t24928*t25331 + t25365 + t25408) + t24916*t25113*(-1.*t25128*t25331 + t25369 + t25413))*var2[2];
  p_output1[5]=(t24916*t25123*(-1.*t24916*t25316 + t25439) + t24931*(-1.*t24931*t25123*t25316 + t25138*t25329 + t25442))*var2[0] + (t24916*t25104*(t24931*t25123*t25316 + t25432 + t25471) + t24916*t25123*(-1.*t24931*t25104*t25316 + t25426 + t25476))*var2[1] + (t24916*t25104*(t24916*t25316 + t25408) + t24931*(t24931*t25104*t25316 - 1.*t25123*t25329 + t25413))*var2[2];
  p_output1[6]=(-0.1575*t25104 - 0.2255*t25138)*var2[0] + (t25123*(-1.*t25123*t25304 + t25471) + t25138*(t25104*t25304 + t25476))*var2[1] + 0.068*t25123*var2[2];
  p_output1[7]=(0.325*t25097 - 1.*t25061*t25257 - 1.*t25097*t25289)*var2[0] + (-0.325*t25061 - 1.*t25097*t25257 + t25061*t25289)*var2[2];
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
