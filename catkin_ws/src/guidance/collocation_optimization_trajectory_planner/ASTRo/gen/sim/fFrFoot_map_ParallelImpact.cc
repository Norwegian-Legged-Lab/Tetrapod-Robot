/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:21 GMT+02:00
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
  double t5141;
  double t1562;
  double t1640;
  double t8022;
  double t17394;
  double t18007;
  double t18416;
  double t15152;
  double t18584;
  double t14995;
  double t18790;
  double t12478;
  double t4541;
  double t10075;
  double t10359;
  double t10375;
  double t18434;
  double t18827;
  double t19004;
  double t19353;
  double t19314;
  double t19322;
  double t19323;
  double t19307;
  double t19359;
  double t19377;
  double t19421;
  double t19514;
  double t19516;
  double t19526;
  double t20164;
  double t20283;
  double t20787;
  double t20793;
  double t20795;
  double t20871;
  double t20890;
  double t20897;
  double t20903;
  double t20904;
  double t20978;
  double t20995;
  double t21019;
  double t21130;
  double t21149;
  double t21150;
  double t20287;
  double t20759;
  double t20781;
  double t21028;
  double t21031;
  double t21158;
  double t21166;
  double t21184;
  double t21187;
  double t21189;
  double t21190;
  double t21196;
  double t21202;
  double t21203;
  double t21204;
  double t21032;
  double t21151;
  double t21152;
  double t19503;
  double t19555;
  double t19765;
  double t19769;
  double t19786;
  double t19937;
  double t21199;
  double t21206;
  double t21209;
  double t21211;
  double t21212;
  double t21222;
  double t21385;
  double t21388;
  double t21490;
  double t19981;
  double t19986;
  double t20010;
  double t21155;
  double t21538;
  double t10431;
  double t19014;
  double t19036;
  double t21683;
  double t21727;
  double t21754;
  double t22763;
  double t23328;
  double t23698;
  double t23791;
  double t27515;
  double t27732;
  t5141 = Cos(var1[13]);
  t1562 = Cos(var1[14]);
  t1640 = Sin(var1[13]);
  t8022 = Sin(var1[14]);
  t17394 = t5141*t1562;
  t18007 = t1640*t8022;
  t18416 = t17394 + t18007;
  t15152 = Cos(var1[5]);
  t18584 = Sin(var1[12]);
  t14995 = Cos(var1[12]);
  t18790 = Sin(var1[5]);
  t12478 = Cos(var1[4]);
  t4541 = -1.*t1562*t1640;
  t10075 = t5141*t8022;
  t10359 = t4541 + t10075;
  t10375 = Sin(var1[4]);
  t18434 = t14995*t15152*t18416;
  t18827 = -1.*t18584*t18416*t18790;
  t19004 = t18434 + t18827;
  t19353 = Sin(var1[3]);
  t19314 = t15152*t18584*t18416;
  t19322 = t14995*t18416*t18790;
  t19323 = t19314 + t19322;
  t19307 = Cos(var1[3]);
  t19359 = t12478*t10359;
  t19377 = -1.*t10375*t19004;
  t19421 = t19359 + t19377;
  t19514 = t1562*t1640;
  t19516 = -1.*t5141*t8022;
  t19526 = t19514 + t19516;
  t20164 = -1.*t14995;
  t20283 = 1. + t20164;
  t20787 = -1.*t5141;
  t20793 = 1. + t20787;
  t20795 = 0.28121*t20793;
  t20871 = -1.*t1562;
  t20890 = 1. + t20871;
  t20897 = 0.50321*t20890;
  t20903 = 0.23321*t1562;
  t20904 = t20897 + t20903;
  t20978 = t5141*t20904;
  t20995 = -0.27*t1640*t8022;
  t21019 = t20795 + t20978 + t20995;
  t21130 = 0.15121*t20283;
  t21149 = t14995*t21019;
  t21150 = t21130 + t21149;
  t20287 = -0.15121*t20283;
  t20759 = -0.15121*t14995;
  t20781 = -0.15121*t18584;
  t21028 = t18584*t21019;
  t21031 = t20287 + t20759 + t20781 + t21028;
  t21158 = -1.*t15152*t18584;
  t21166 = -1.*t14995*t18790;
  t21184 = t21158 + t21166;
  t21187 = 0.28121*t1640;
  t21189 = -1.*t20904*t1640;
  t21190 = -0.27*t5141*t8022;
  t21196 = t21187 + t21189 + t21190;
  t21202 = t15152*t21150;
  t21203 = -1.*t21031*t18790;
  t21204 = t21202 + t21203;
  t21032 = t15152*t21031;
  t21151 = t21150*t18790;
  t21152 = t21032 + t21151;
  t19503 = t18416*t10375;
  t19555 = t14995*t15152*t19526;
  t19765 = -1.*t18584*t19526*t18790;
  t19769 = t19555 + t19765;
  t19786 = t12478*t19769;
  t19937 = t19503 + t19786;
  t21199 = t21196*t10375;
  t21206 = t12478*t21204;
  t21209 = t21199 + t21206;
  t21211 = t12478*t21196;
  t21212 = -1.*t10375*t21204;
  t21222 = t21211 + t21212;
  t21385 = t15152*t18584*t19526;
  t21388 = t14995*t19526*t18790;
  t21490 = t21385 + t21388;
  t19981 = t14995*t15152;
  t19986 = -1.*t18584*t18790;
  t20010 = t19981 + t19986;
  t21155 = -1.*t20010*t21152;
  t21538 = t21490*t21152;
  t10431 = t10359*t10375;
  t19014 = t12478*t19004;
  t19036 = t10431 + t19014;
  t21683 = t12478*t18416;
  t21727 = -1.*t10375*t19769;
  t21754 = t21683 + t21727;
  t22763 = -1.*t21490*t21152;
  t23328 = t19323*t21152;
  t23698 = -1.*t21196*t18416;
  t23791 = t21196*t10359;
  t27515 = t20010*t21152;
  t27732 = -1.*t19323*t21152;
  p_output1[0]=t19036;
  p_output1[1]=t19307*t19323 - 1.*t19353*t19421;
  p_output1[2]=t19323*t19353 + t19307*t19421;
  p_output1[3]=t19937*(t21155 - 1.*t12478*t21184*t21209 + t10375*t21184*t21222) + t12478*t21184*(t19937*t21209 + t21538 + t21222*t21754);
  p_output1[4]=(t21155 - 1.*t21184*t21204)*t21490 + t20010*(t18416*t21196 + t19769*t21204 + t21538);
  p_output1[5]=t18416*(-1.*t14995*t21031 + t18584*t21150);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t8022 - 0.27*t1562*t8022 - 1.*t20904*t8022;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t12478*t21184;
  p_output1[19]=t19307*t20010 + t10375*t19353*t21184;
  p_output1[20]=t19353*t20010 - 1.*t10375*t19307*t21184;
  p_output1[21]=t19036*(-1.*t19937*t21209 - 1.*t21222*t21754 + t22763) + t19937*(t19036*t21209 + t19421*t21222 + t23328);
  p_output1[22]=t19323*(-1.*t19769*t21204 + t22763 + t23698) + t21490*(t19004*t21204 + t23328 + t23791);
  p_output1[23]=t10359*(-1.*t18584*t19526*t21031 - 1.*t14995*t19526*t21150 + t23698) + t18416*(t18416*t18584*t21031 + t14995*t18416*t21150 + t23791);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t10359*(-1.*t19526*t21019 + t23698) + t18416*(t18416*t21019 + t23791);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t19937;
  p_output1[37]=t19307*t21490 - 1.*t19353*t21754;
  p_output1[38]=t19353*t21490 + t19307*t21754;
  p_output1[39]=t19036*(t12478*t21184*t21209 - 1.*t10375*t21184*t21222 + t27515) + t12478*t21184*(-1.*t19036*t21209 - 1.*t19421*t21222 + t27732);
  p_output1[40]=t19323*(t21184*t21204 + t27515) + t20010*(-1.*t10359*t21196 - 1.*t19004*t21204 + t27732);
  p_output1[41]=t10359*(t14995*t21031 - 1.*t18584*t21150);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t10359 - 0.15121*t19526;
  p_output1[49]=0.28121*t1562 - 1.*t1562*t20904 + 0.27*Power(t8022,2);
  p_output1[50]=-0.27;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
