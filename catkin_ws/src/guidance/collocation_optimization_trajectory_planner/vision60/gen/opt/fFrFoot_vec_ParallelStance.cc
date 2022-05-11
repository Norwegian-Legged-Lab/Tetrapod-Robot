/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:44 GMT+02:00
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
  double t3006;
  double t2264;
  double t3241;
  double t4957;
  double t3800;
  double t4482;
  double t5042;
  double t2243;
  double t4632;
  double t5242;
  double t5248;
  double t3255;
  double t11109;
  double t11182;
  double t11249;
  double t10828;
  double t14117;
  double t14141;
  double t11261;
  double t12522;
  double t12540;
  double t13148;
  double t13178;
  double t13319;
  double t13322;
  double t13334;
  double t13421;
  double t14142;
  double t14378;
  double t14384;
  double t17366;
  double t17604;
  double t17606;
  double t17874;
  double t18330;
  double t18474;
  double t18583;
  double t18640;
  double t18716;
  double t19122;
  double t19328;
  double t19582;
  double t10495;
  double t12807;
  double t12808;
  double t22279;
  double t22281;
  double t22283;
  double t22289;
  double t22299;
  double t22318;
  double t22320;
  double t22321;
  double t22322;
  double t2992;
  double t3573;
  double t3587;
  double t22275;
  double t22287;
  double t22754;
  double t23000;
  double t24008;
  double t24009;
  double t24021;
  double t24037;
  double t24044;
  double t24048;
  double t22246;
  double t22254;
  double t22267;
  double t22271;
  double t23563;
  double t24004;
  double t24133;
  double t24135;
  double t24137;
  double t24139;
  double t24141;
  double t24142;
  double t24006;
  double t24055;
  double t24096;
  double t24138;
  double t24144;
  double t24147;
  double t24150;
  double t24151;
  double t24153;
  double t13014;
  double t13569;
  double t13570;
  double t24131;
  double t24161;
  double t24174;
  double t24185;
  double t24287;
  double t24324;
  double t24428;
  double t24434;
  double t24394;
  double t24401;
  double t24417;
  double t24410;
  double t24625;
  double t24617;
  t3006 = Cos(var1[12]);
  t2264 = Sin(var1[4]);
  t3241 = Cos(var1[4]);
  t4957 = Cos(var1[13]);
  t3800 = Cos(var1[14]);
  t4482 = Sin(var1[13]);
  t5042 = Sin(var1[14]);
  t2243 = Sin(var1[12]);
  t4632 = t3800*t4482;
  t5242 = -1.*t4957*t5042;
  t5248 = t4632 + t5242;
  t3255 = Sin(var1[5]);
  t11109 = t4957*t3800;
  t11182 = t4482*t5042;
  t11249 = t11109 + t11182;
  t10828 = Cos(var1[5]);
  t14117 = Cos(var1[3]);
  t14141 = Sin(var1[3]);
  t11261 = t10828*t11249;
  t12522 = t2243*t5248*t3255;
  t12540 = t11261 + t12522;
  t13148 = -1.*t3800*t4482;
  t13178 = t4957*t5042;
  t13319 = t13148 + t13178;
  t13322 = t10828*t13319;
  t13334 = t2243*t11249*t3255;
  t13421 = t13322 + t13334;
  t14142 = t3241*t2243;
  t14378 = t3006*t2264*t3255;
  t14384 = t14142 + t14378;
  t17366 = -1.*t10828*t2243*t5248;
  t17604 = t11249*t3255;
  t17606 = t17366 + t17604;
  t17874 = t3006*t3241*t5248;
  t18330 = -1.*t2264*t12540;
  t18474 = t17874 + t18330;
  t18583 = -1.*t10828*t2243*t11249;
  t18640 = t13319*t3255;
  t18716 = t18583 + t18640;
  t19122 = t3006*t3241*t11249;
  t19328 = -1.*t2264*t13421;
  t19582 = t19122 + t19328;
  t10495 = t3006*t5248*t2264;
  t12807 = t3241*t12540;
  t12808 = t10495 + t12807;
  t22279 = -0.0641*t3800;
  t22281 = -0.28*t5042;
  t22283 = t22279 + t22281;
  t22289 = -1.*t3800;
  t22299 = 1. + t22289;
  t22318 = 0.075*t22299;
  t22320 = 0.355*t3800;
  t22321 = -0.0641*t5042;
  t22322 = t22318 + t22320 + t22321;
  t2992 = t2243*t2264;
  t3573 = -1.*t3006*t3241*t3255;
  t3587 = t2992 + t3573;
  t22275 = -0.325*t4482;
  t22287 = t4957*t22283;
  t22754 = t4482*t22322;
  t23000 = t22275 + t22287 + t22754;
  t24008 = -1.*t4957;
  t24009 = 1. + t24008;
  t24021 = 0.325*t24009;
  t24037 = -1.*t4482*t22283;
  t24044 = t4957*t22322;
  t24048 = t24021 + t24037 + t24044;
  t22246 = -1.*t3006;
  t22254 = 1. + t22246;
  t22267 = -0.1575*t22254;
  t22271 = -0.2255*t3006;
  t23563 = -1.*t2243*t23000;
  t24004 = t22267 + t22271 + t23563;
  t24133 = -0.068*t2243;
  t24135 = t3006*t23000;
  t24137 = t24133 + t24135;
  t24139 = t10828*t24048;
  t24141 = -1.*t24004*t3255;
  t24142 = t24139 + t24141;
  t24006 = t10828*t24004;
  t24055 = t24048*t3255;
  t24096 = t24006 + t24055;
  t24138 = t24137*t2264;
  t24144 = t3241*t24142;
  t24147 = t24138 + t24144;
  t24150 = t3241*t24137;
  t24151 = -1.*t2264*t24142;
  t24153 = t24150 + t24151;
  t13014 = t3006*t11249*t2264;
  t13569 = t3241*t13421;
  t13570 = t13014 + t13569;
  t24131 = t3006*t10828*t24096;
  t24161 = -1.*t24096*t17606;
  t24174 = t24096*t17606;
  t24185 = -1.*t24096*t18716;
  t24287 = -1.*t3006*t10828*t24096;
  t24324 = t24096*t18716;
  t24428 = -1.*t2243*t24137;
  t24434 = t3006*t24137*t11249;
  t24394 = t2243*t24137;
  t24401 = -1.*t3006*t24137*t5248;
  t24417 = -1.*t3006*t24137*t11249;
  t24410 = t3006*t24137*t5248;
  t24625 = t24048*t11249;
  t24617 = -1.*t24048*t13319;
  p_output1[0]=t12808*var2[0] + t3587*var2[1] + t13570*var2[2];
  p_output1[1]=(t14117*t17606 - 1.*t14141*t18474)*var2[0] + (-1.*t14141*t14384 + t10828*t14117*t3006)*var2[1] + (t14117*t18716 - 1.*t14141*t19582)*var2[2];
  p_output1[2]=(t14141*t17606 + t14117*t18474)*var2[0] + (t14117*t14384 + t10828*t14141*t3006)*var2[1] + (t14141*t18716 + t14117*t19582)*var2[2];
  p_output1[3]=((t13570*t24147 + t19582*t24153 + t24324)*t3587 + t13570*(-1.*t14384*t24153 + t24287 - 1.*t24147*t3587))*var2[0] + (t13570*(t12808*t24147 + t18474*t24153 + t24174) + t12808*(-1.*t13570*t24147 - 1.*t19582*t24153 + t24185))*var2[1] + ((-1.*t12808*t24147 - 1.*t18474*t24153 + t24161)*t3587 + t12808*(t24131 + t14384*t24153 + t24147*t3587))*var2[2];
  p_output1[4]=(t10828*(t13421*t24142 + t24324 + t24434)*t3006 + t18716*(t24287 + t24428 + t24142*t3006*t3255))*var2[0] + (t18716*(t12540*t24142 + t24174 + t24410) + t17606*(-1.*t13421*t24142 + t24185 + t24417))*var2[1] + (t10828*(-1.*t12540*t24142 + t24161 + t24401)*t3006 + t17606*(t24131 + t24394 - 1.*t24142*t3006*t3255))*var2[2];
  p_output1[5]=(t2243*(-1.*t11249*t2243*t24004 + t13319*t24048 + t24434) + t11249*t3006*(t24428 - 1.*t24004*t3006))*var2[0] + ((t11249*t2243*t24004 + t24417 + t24617)*t3006*t5248 + t11249*t3006*(t24410 + t24625 - 1.*t2243*t24004*t5248))*var2[1] + (t3006*(t24394 + t24004*t3006)*t5248 + t2243*(-1.*t11249*t24048 + t24401 + t2243*t24004*t5248))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.2255*t13319 + 0.1575*t5248)*var2[0] + (t11249*(-1.*t11249*t23000 + t24617) + t13319*(t24625 + t23000*t5248))*var2[1] - 0.068*t11249*var2[2];
  p_output1[13]=(-1.*t22283*t3800 + 0.325*t5042 - 1.*t22322*t5042)*var2[0] + (-0.325*t3800 + t22322*t3800 - 1.*t22283*t5042)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
