/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:43 GMT+02:00
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
  double t12988;
  double t12618;
  double t12671;
  double t13052;
  double t13838;
  double t13839;
  double t13874;
  double t13794;
  double t13881;
  double t13786;
  double t13901;
  double t13782;
  double t12763;
  double t13492;
  double t13768;
  double t9716;
  double t13879;
  double t13919;
  double t13920;
  double t13936;
  double t13927;
  double t13928;
  double t13932;
  double t13926;
  double t13941;
  double t13942;
  double t13944;
  double t14007;
  double t14008;
  double t14027;
  double t14088;
  double t14090;
  double t14092;
  double t14093;
  double t14094;
  double t14136;
  double t14137;
  double t14138;
  double t14140;
  double t14141;
  double t14142;
  double t14144;
  double t14161;
  double t14185;
  double t14192;
  double t14196;
  double t14281;
  double t14285;
  double t14286;
  double t14288;
  double t14295;
  double t14296;
  double t14299;
  double t14309;
  double t14310;
  double t14313;
  double t14314;
  double t14331;
  double t14332;
  double t14335;
  double t14197;
  double t14289;
  double t14290;
  double t13973;
  double t14030;
  double t14031;
  double t14032;
  double t14035;
  double t14036;
  double t14322;
  double t14336;
  double t14349;
  double t14385;
  double t14386;
  double t14421;
  double t14479;
  double t14480;
  double t14483;
  double t14041;
  double t14048;
  double t14064;
  double t14292;
  double t14484;
  double t13774;
  double t13922;
  double t13924;
  double t14490;
  double t14500;
  double t14501;
  double t16276;
  double t16295;
  double t16306;
  double t16325;
  double t16396;
  double t16410;
  t12988 = Cos(var1[7]);
  t12618 = Cos(var1[8]);
  t12671 = Sin(var1[7]);
  t13052 = Sin(var1[8]);
  t13838 = t12988*t12618;
  t13839 = t12671*t13052;
  t13874 = t13838 + t13839;
  t13794 = Cos(var1[6]);
  t13881 = Sin(var1[5]);
  t13786 = Cos(var1[5]);
  t13901 = Sin(var1[6]);
  t13782 = Cos(var1[4]);
  t12763 = -1.*t12618*t12671;
  t13492 = t12988*t13052;
  t13768 = t12763 + t13492;
  t9716 = Sin(var1[4]);
  t13879 = t13786*t13794*t13874;
  t13919 = -1.*t13881*t13901*t13874;
  t13920 = t13879 + t13919;
  t13936 = Sin(var1[3]);
  t13927 = t13794*t13881*t13874;
  t13928 = t13786*t13901*t13874;
  t13932 = t13927 + t13928;
  t13926 = Cos(var1[3]);
  t13941 = t13782*t13768;
  t13942 = -1.*t9716*t13920;
  t13944 = t13941 + t13942;
  t14007 = t12618*t12671;
  t14008 = -1.*t12988*t13052;
  t14027 = t14007 + t14008;
  t14088 = -1.*t13794;
  t14090 = 1. + t14088;
  t14092 = 0.15121*t14090;
  t14093 = -1.*t12988;
  t14094 = 1. + t14093;
  t14136 = 0.28121*t14094;
  t14137 = -1.*t12618;
  t14138 = 1. + t14137;
  t14140 = 0.50321*t14138;
  t14141 = 0.23321*t12618;
  t14142 = t14140 + t14141;
  t14144 = t12988*t14142;
  t14161 = -0.27*t12671*t13052;
  t14185 = t14136 + t14144 + t14161;
  t14192 = t13794*t14185;
  t14196 = t14092 + t14192;
  t14281 = 0.15121*t13794;
  t14285 = -0.15121*t13901;
  t14286 = t13901*t14185;
  t14288 = t14092 + t14281 + t14285 + t14286;
  t14295 = -1.*t13794*t13881;
  t14296 = -1.*t13786*t13901;
  t14299 = t14295 + t14296;
  t14309 = 0.28121*t12671;
  t14310 = -1.*t14142*t12671;
  t14313 = -0.27*t12988*t13052;
  t14314 = t14309 + t14310 + t14313;
  t14331 = t13786*t14196;
  t14332 = -1.*t13881*t14288;
  t14335 = t14331 + t14332;
  t14197 = t13881*t14196;
  t14289 = t13786*t14288;
  t14290 = t14197 + t14289;
  t13973 = t9716*t13874;
  t14030 = t13786*t13794*t14027;
  t14031 = -1.*t13881*t13901*t14027;
  t14032 = t14030 + t14031;
  t14035 = t13782*t14032;
  t14036 = t13973 + t14035;
  t14322 = t9716*t14314;
  t14336 = t13782*t14335;
  t14349 = t14322 + t14336;
  t14385 = t13782*t14314;
  t14386 = -1.*t9716*t14335;
  t14421 = t14385 + t14386;
  t14479 = t13794*t13881*t14027;
  t14480 = t13786*t13901*t14027;
  t14483 = t14479 + t14480;
  t14041 = t13786*t13794;
  t14048 = -1.*t13881*t13901;
  t14064 = t14041 + t14048;
  t14292 = -1.*t14064*t14290;
  t14484 = t14483*t14290;
  t13774 = t9716*t13768;
  t13922 = t13782*t13920;
  t13924 = t13774 + t13922;
  t14490 = t13782*t13874;
  t14500 = -1.*t9716*t14032;
  t14501 = t14490 + t14500;
  t16276 = -1.*t14483*t14290;
  t16295 = t13932*t14290;
  t16306 = -1.*t14314*t13874;
  t16325 = t14314*t13768;
  t16396 = t14064*t14290;
  t16410 = -1.*t13932*t14290;
  p_output1[0]=t13924;
  p_output1[1]=t13926*t13932 - 1.*t13936*t13944;
  p_output1[2]=t13932*t13936 + t13926*t13944;
  p_output1[3]=t13782*t14299*(t14036*t14349 + t14484 + t14421*t14501) + t14036*(t14292 - 1.*t13782*t14299*t14349 + t14299*t14421*t9716);
  p_output1[4]=(t14292 - 1.*t14299*t14335)*t14483 + t14064*(t13874*t14314 + t14032*t14335 + t14484);
  p_output1[5]=t13874*(t13901*t14196 - 1.*t13794*t14288);
  p_output1[6]=0;
  p_output1[7]=0.28121*t13052 - 0.27*t12618*t13052 - 1.*t13052*t14142;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t13782*t14299;
  p_output1[19]=t13926*t14064 + t13936*t14299*t9716;
  p_output1[20]=t13936*t14064 - 1.*t13926*t14299*t9716;
  p_output1[21]=t13924*(-1.*t14036*t14349 - 1.*t14421*t14501 + t16276) + t14036*(t13924*t14349 + t13944*t14421 + t16295);
  p_output1[22]=t13932*(-1.*t14032*t14335 + t16276 + t16306) + t14483*(t13920*t14335 + t16295 + t16325);
  p_output1[23]=t13768*(-1.*t13794*t14027*t14196 - 1.*t13901*t14027*t14288 + t16306) + t13874*(t13794*t13874*t14196 + t13874*t13901*t14288 + t16325);
  p_output1[24]=-0.15121 + t13768*(-1.*t14027*t14185 + t16306) + t13874*(t13874*t14185 + t16325);
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
  p_output1[36]=t14036;
  p_output1[37]=t13926*t14483 - 1.*t13936*t14501;
  p_output1[38]=t13936*t14483 + t13926*t14501;
  p_output1[39]=t13782*t14299*(-1.*t13924*t14349 - 1.*t13944*t14421 + t16410) + t13924*(t13782*t14299*t14349 + t16396 - 1.*t14299*t14421*t9716);
  p_output1[40]=t13932*(t14299*t14335 + t16396) + t14064*(-1.*t13768*t14314 - 1.*t13920*t14335 + t16410);
  p_output1[41]=t13768*(-1.*t13901*t14196 + t13794*t14288);
  p_output1[42]=0.15121*t13768 + 0.15121*t14027;
  p_output1[43]=0.28121*t12618 + 0.27*Power(t13052,2) - 1.*t12618*t14142;
  p_output1[44]=-0.27;
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
