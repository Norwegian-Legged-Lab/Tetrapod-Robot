/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:18 GMT+02:00
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
  double t9730;
  double t4184;
  double t9144;
  double t9829;
  double t10126;
  double t9729;
  double t10199;
  double t9663;
  double t10204;
  double t10208;
  double t10236;
  double t10327;
  double t10328;
  double t10341;
  double t10346;
  double t10454;
  double t10666;
  double t10688;
  double t10690;
  double t10124;
  double t10125;
  double t9679;
  double t9686;
  double t10493;
  double t10661;
  double t10908;
  double t10913;
  double t10980;
  double t10982;
  double t10985;
  double t10986;
  double t11123;
  double t11134;
  double t11136;
  double t11160;
  double t11161;
  double t11162;
  double t11377;
  double t11378;
  double t11381;
  double t11387;
  double t11391;
  double t11399;
  double t11448;
  double t11449;
  double t11450;
  double t11478;
  double t11489;
  double t11499;
  double t11500;
  double t11501;
  double t11487;
  double t11493;
  double t11494;
  double t11513;
  double t11514;
  double t11515;
  double t11521;
  double t11528;
  double t11529;
  double t11531;
  double t11532;
  double t11533;
  double t11578;
  double t11580;
  double t11582;
  double t11584;
  double t11603;
  double t11611;
  double t11617;
  double t11619;
  double t11620;
  double t11638;
  double t11641;
  double t11642;
  double t11663;
  double t11670;
  double t11679;
  double t11687;
  double t11696;
  double t11697;
  double t11699;
  double t11701;
  double t11706;
  double t11729;
  double t11730;
  double t11731;
  double t11798;
  double t11800;
  double t11814;
  double t11862;
  double t11866;
  double t11869;
  double t11878;
  double t11889;
  double t11899;
  double t11901;
  double t11914;
  double t11923;
  double t11950;
  double t11982;
  double t11991;
  double t11994;
  double t12011;
  double t12013;
  double t11940;
  double t12113;
  double t12115;
  double t12116;
  double t12120;
  double t12125;
  double t12126;
  double t12140;
  double t12148;
  double t12150;
  double t12204;
  double t12211;
  double t12220;
  double t12236;
  double t12247;
  double t12251;
  double t12253;
  double t12257;
  double t12264;
  double t11507;
  double t12311;
  double t12312;
  double t12333;
  double t12336;
  double t12337;
  double t12355;
  double t12356;
  double t12357;
  double t12362;
  double t12367;
  double t12373;
  double t12384;
  double t12387;
  double t12391;
  double t12430;
  double t12431;
  double t12434;
  t9730 = Sin(var1[4]);
  t4184 = Cos(var1[4]);
  t9144 = Sin(var1[12]);
  t9829 = Cos(var1[12]);
  t10126 = Sin(var1[5]);
  t9729 = Cos(var1[5]);
  t10199 = Sin(var1[13]);
  t9663 = Cos(var1[13]);
  t10204 = t9829*t4184;
  t10208 = -1.*t9144*t9730*t10126;
  t10236 = t10204 + t10208;
  t10327 = Sin(var1[14]);
  t10328 = t9729*t10199*t9730;
  t10341 = t9663*t10236;
  t10346 = t10328 + t10341;
  t10454 = Cos(var1[14]);
  t10666 = -1.*t9663*t9729*t9730;
  t10688 = t10199*t10236;
  t10690 = t10666 + t10688;
  t10124 = -1.*t9829;
  t10125 = 1. + t10124;
  t9679 = -1.*t9663;
  t9686 = 1. + t9679;
  t10493 = -1.*t10454;
  t10661 = 1. + t10493;
  t10908 = t4184*t9729*t9144*t10199;
  t10913 = -1.*t9663*t4184*t10126;
  t10980 = t10908 + t10913;
  t10982 = t9663*t4184*t9729*t9144;
  t10985 = t4184*t10199*t10126;
  t10986 = t10982 + t10985;
  t11123 = -1.*t9144*t9730;
  t11134 = t9829*t4184*t10126;
  t11136 = t11123 + t11134;
  t11160 = t9829*t9730;
  t11161 = t4184*t9144*t10126;
  t11162 = t11160 + t11161;
  t11377 = -1.*t4184*t9729*t10199;
  t11378 = t9663*t11162;
  t11381 = t11377 + t11378;
  t11387 = -1.*t9663*t4184*t9729;
  t11391 = -1.*t10199*t11162;
  t11399 = t11387 + t11391;
  t11448 = t9663*t4184*t9729;
  t11449 = t10199*t11162;
  t11450 = t11448 + t11449;
  t11478 = Cos(var1[3]);
  t11489 = Sin(var1[3]);
  t11499 = -1.*t9729*t11489;
  t11500 = -1.*t11478*t9730*t10126;
  t11501 = t11499 + t11500;
  t11487 = t11478*t9729*t9730;
  t11493 = -1.*t11489*t10126;
  t11494 = t11487 + t11493;
  t11513 = -1.*t9829*t11478*t4184;
  t11514 = -1.*t9144*t11501;
  t11515 = t11513 + t11514;
  t11521 = -1.*t10199*t11494;
  t11528 = t9663*t11515;
  t11529 = t11521 + t11528;
  t11531 = t9663*t11494;
  t11532 = t10199*t11515;
  t11533 = t11531 + t11532;
  t11578 = t9829*t11489*t9730;
  t11580 = t4184*t9144*t11489*t10126;
  t11582 = t11578 + t11580;
  t11584 = -1.*t4184*t9729*t10199*t11489;
  t11603 = t9663*t11582;
  t11611 = t11584 + t11603;
  t11617 = t9663*t4184*t9729*t11489;
  t11619 = t10199*t11582;
  t11620 = t11617 + t11619;
  t11638 = -1.*t9729*t11489*t9730;
  t11641 = -1.*t11478*t10126;
  t11642 = t11638 + t11641;
  t11663 = t11478*t9729;
  t11670 = -1.*t11489*t9730*t10126;
  t11679 = t11663 + t11670;
  t11687 = -1.*t9144*t10199*t11642;
  t11696 = t9663*t11679;
  t11697 = t11687 + t11696;
  t11699 = -1.*t9663*t9144*t11642;
  t11701 = -1.*t10199*t11679;
  t11706 = t11699 + t11701;
  t11729 = t4184*t9144*t11489;
  t11730 = -1.*t9829*t11679;
  t11731 = t11729 + t11730;
  t11798 = -1.*t9829*t4184*t11489;
  t11800 = -1.*t9144*t11679;
  t11814 = t11798 + t11800;
  t11862 = t9729*t11489*t9730;
  t11866 = t11478*t10126;
  t11869 = t11862 + t11866;
  t11878 = -1.*t10199*t11869;
  t11889 = t9663*t11814;
  t11899 = t11878 + t11889;
  t11901 = -1.*t9663*t11869;
  t11914 = -1.*t10199*t11814;
  t11923 = t11901 + t11914;
  t11950 = t9663*t11869;
  t11982 = t10199*t11814;
  t11991 = t11950 + t11982;
  t11994 = -1.*t10327*t11899;
  t12011 = t10454*t11991;
  t12013 = t11994 + t12011;
  t11940 = t10454*t11899;
  t12113 = -1.*t9829*t11478*t9730;
  t12115 = -1.*t11478*t4184*t9144*t10126;
  t12116 = t12113 + t12115;
  t12120 = t11478*t4184*t9729*t10199;
  t12125 = t9663*t12116;
  t12126 = t12120 + t12125;
  t12140 = -1.*t9663*t11478*t4184*t9729;
  t12148 = t10199*t12116;
  t12150 = t12140 + t12148;
  t12204 = t9729*t11489;
  t12211 = t11478*t9730*t10126;
  t12220 = t12204 + t12211;
  t12236 = -1.*t9144*t10199*t11494;
  t12247 = t9663*t12220;
  t12251 = t12236 + t12247;
  t12253 = -1.*t9663*t9144*t11494;
  t12257 = -1.*t10199*t12220;
  t12264 = t12253 + t12257;
  t11507 = -1.*t11478*t4184*t9144;
  t12311 = -1.*t9829*t12220;
  t12312 = t11507 + t12311;
  t12333 = t9829*t11478*t4184;
  t12336 = -1.*t9144*t12220;
  t12337 = t12333 + t12336;
  t12355 = -1.*t11478*t9729*t9730;
  t12356 = t11489*t10126;
  t12357 = t12355 + t12356;
  t12362 = -1.*t10199*t12357;
  t12367 = t9663*t12337;
  t12373 = t12362 + t12367;
  t12384 = -1.*t9663*t12357;
  t12387 = -1.*t10199*t12337;
  t12391 = t12384 + t12387;
  t12430 = t9663*t12357;
  t12431 = t10199*t12337;
  t12434 = t12430 + t12431;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t10199*t10236 + 0.075*t10327*t10346 + 0.075*t10661*t10690 - 0.0641*(t10346*t10454 + t10327*t10690) + 0.355*(-1.*t10327*t10346 + t10454*t10690) + 0.1575*t4184*t9144 - 0.1575*t10125*t10126*t9730 - 0.325*t9686*t9729*t9730 - 0.2255*(t4184*t9144 + t10126*t9730*t9829);
  p_output1[2]=0.075*t10661*t10980 + 0.075*t10327*t10986 + 0.355*(t10454*t10980 - 1.*t10327*t10986) - 0.0641*(t10327*t10980 + t10454*t10986) - 0.325*t10126*t4184*t9686 + 0.1575*t10125*t4184*t9729 - 0.325*t10199*t4184*t9144*t9729 + 0.2255*t4184*t9729*t9829;
  p_output1[3]=-0.325*t10199*t11136 + 0.075*t10199*t10661*t11136 - 0.2255*t11162 + 0.1575*t10126*t4184*t9144 + 0.075*t10327*t11136*t9663 + 0.355*(t10199*t10454*t11136 - 1.*t10327*t11136*t9663) - 0.0641*(t10199*t10327*t11136 + t10454*t11136*t9663) + 0.1575*t9730*t9829;
  p_output1[4]=0.075*t10661*t11381 + 0.075*t10327*t11399 + 0.355*(t10454*t11381 - 1.*t10327*t11399) - 0.0641*(t10327*t11381 + t10454*t11399) - 0.325*t11162*t9663 + 0.325*t10199*t4184*t9729;
  p_output1[5]=0.075*t10454*t11381 + 0.075*t10327*t11450 + 0.355*(-1.*t10454*t11381 - 1.*t10327*t11450) - 0.0641*(-1.*t10327*t11381 + t10454*t11450);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-0.1575*t10125*t11501 - 0.325*t10199*t11515 + 0.075*t10327*t11529 + 0.075*t10661*t11533 - 0.0641*(t10454*t11529 + t10327*t11533) + 0.355*(-1.*t10327*t11529 + t10454*t11533) - 0.1575*t11478*t4184*t9144 + 0.325*t11494*t9686 - 0.2255*(t11507 + t11501*t9829);
  p_output1[9]=-0.325*t10199*t11582 + 0.075*t10327*t11611 + 0.075*t10661*t11620 - 0.0641*(t10454*t11611 + t10327*t11620) + 0.355*(-1.*t10327*t11611 + t10454*t11620) + 0.1575*t10125*t10126*t11489*t4184 + 0.325*t11489*t4184*t9686*t9729 + 0.1575*t11489*t9144*t9730 - 0.2255*(t11489*t9144*t9730 - 1.*t10126*t11489*t4184*t9829);
  p_output1[10]=-0.1575*t10125*t11642 + 0.075*t10661*t11697 + 0.075*t10327*t11706 + 0.355*(t10454*t11697 - 1.*t10327*t11706) - 0.0641*(t10327*t11697 + t10454*t11706) + 0.325*t10199*t11642*t9144 + 0.325*t11679*t9686 - 0.2255*t11642*t9829;
  p_output1[11]=-0.325*t10199*t11731 + 0.075*t10199*t10661*t11731 - 0.2255*t11814 - 0.1575*t11679*t9144 + 0.075*t10327*t11731*t9663 + 0.355*(t10199*t10454*t11731 - 1.*t10327*t11731*t9663) - 0.0641*(t10199*t10327*t11731 + t10454*t11731*t9663) - 0.1575*t11489*t4184*t9829;
  p_output1[12]=0.325*t10199*t11869 + 0.075*t10661*t11899 + 0.075*t10327*t11923 - 0.0641*(t10327*t11899 + t10454*t11923) + 0.355*(-1.*t10327*t11923 + t11940) - 0.325*t11814*t9663;
  p_output1[13]=0.075*t10454*t11899 + 0.075*t10327*t11991 + 0.355*(-1.*t10454*t11899 - 1.*t10327*t11991) - 0.0641*t12013;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.1575*t10125*t11679 - 0.325*t10199*t11814 + 0.075*t10327*t11899 + 0.075*t10661*t11991 - 0.0641*(t11940 + t10327*t11991) + 0.355*t12013 - 0.1575*t11489*t4184*t9144 + 0.325*t11869*t9686 - 0.2255*(-1.*t11489*t4184*t9144 + t11679*t9829);
  p_output1[17]=-0.325*t10199*t12116 + 0.075*t10327*t12126 + 0.075*t10661*t12150 - 0.0641*(t10454*t12126 + t10327*t12150) + 0.355*(-1.*t10327*t12126 + t10454*t12150) - 0.1575*t10125*t10126*t11478*t4184 - 0.325*t11478*t4184*t9686*t9729 - 0.1575*t11478*t9144*t9730 - 0.2255*(-1.*t11478*t9144*t9730 + t10126*t11478*t4184*t9829);
  p_output1[18]=-0.1575*t10125*t11494 + 0.075*t10661*t12251 + 0.075*t10327*t12264 + 0.355*(t10454*t12251 - 1.*t10327*t12264) - 0.0641*(t10327*t12251 + t10454*t12264) + 0.325*t10199*t11494*t9144 + 0.325*t12220*t9686 - 0.2255*t11494*t9829;
  p_output1[19]=-0.325*t10199*t12312 + 0.075*t10199*t10661*t12312 - 0.2255*t12337 - 0.1575*t12220*t9144 + 0.075*t10327*t12312*t9663 + 0.355*(t10199*t10454*t12312 - 1.*t10327*t12312*t9663) - 0.0641*(t10199*t10327*t12312 + t10454*t12312*t9663) + 0.1575*t11478*t4184*t9829;
  p_output1[20]=0.325*t10199*t12357 + 0.075*t10661*t12373 + 0.075*t10327*t12391 + 0.355*(t10454*t12373 - 1.*t10327*t12391) - 0.0641*(t10327*t12373 + t10454*t12391) - 0.325*t12337*t9663;
  p_output1[21]=0.075*t10454*t12373 + 0.075*t10327*t12434 + 0.355*(-1.*t10454*t12373 - 1.*t10327*t12434) - 0.0641*(-1.*t10327*t12373 + t10454*t12434);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
