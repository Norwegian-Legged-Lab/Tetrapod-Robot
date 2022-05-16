/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:13 GMT+02:00
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
  double t6780;
  double t6588;
  double t6790;
  double t6917;
  double t6892;
  double t6896;
  double t6941;
  double t5202;
  double t6899;
  double t6942;
  double t6947;
  double t6819;
  double t6970;
  double t6974;
  double t6975;
  double t6965;
  double t7334;
  double t7338;
  double t6979;
  double t6981;
  double t6995;
  double t7049;
  double t7050;
  double t7286;
  double t7304;
  double t7305;
  double t7306;
  double t7342;
  double t7344;
  double t7349;
  double t7373;
  double t7375;
  double t7400;
  double t7403;
  double t7409;
  double t7410;
  double t7436;
  double t7439;
  double t7441;
  double t7511;
  double t7514;
  double t7520;
  double t6953;
  double t6996;
  double t6997;
  double t7677;
  double t7692;
  double t7695;
  double t7702;
  double t7728;
  double t7749;
  double t7754;
  double t7782;
  double t7797;
  double t6768;
  double t6820;
  double t6829;
  double t7673;
  double t7699;
  double t7800;
  double t7804;
  double t7880;
  double t7887;
  double t7902;
  double t7930;
  double t7946;
  double t7962;
  double t7656;
  double t7660;
  double t7663;
  double t7670;
  double t7830;
  double t7847;
  double t7973;
  double t7974;
  double t7976;
  double t8029;
  double t8045;
  double t8058;
  double t7871;
  double t7964;
  double t7971;
  double t7979;
  double t8077;
  double t8096;
  double t8102;
  double t8108;
  double t8116;
  double t7028;
  double t7312;
  double t7314;
  double t7972;
  double t8128;
  double t8166;
  double t8191;
  double t8217;
  double t8290;
  double t8539;
  double t8600;
  double t8351;
  double t8364;
  double t8436;
  double t8409;
  double t8928;
  double t8806;
  t6780 = Cos(var1[15]);
  t6588 = Sin(var1[4]);
  t6790 = Cos(var1[4]);
  t6917 = Cos(var1[16]);
  t6892 = Cos(var1[17]);
  t6896 = Sin(var1[16]);
  t6941 = Sin(var1[17]);
  t5202 = Sin(var1[15]);
  t6899 = t6892*t6896;
  t6942 = -1.*t6917*t6941;
  t6947 = t6899 + t6942;
  t6819 = Sin(var1[5]);
  t6970 = t6917*t6892;
  t6974 = t6896*t6941;
  t6975 = t6970 + t6974;
  t6965 = Cos(var1[5]);
  t7334 = Cos(var1[3]);
  t7338 = Sin(var1[3]);
  t6979 = t6965*t6975;
  t6981 = t5202*t6947*t6819;
  t6995 = t6979 + t6981;
  t7049 = -1.*t6892*t6896;
  t7050 = t6917*t6941;
  t7286 = t7049 + t7050;
  t7304 = t6965*t7286;
  t7305 = t5202*t6975*t6819;
  t7306 = t7304 + t7305;
  t7342 = t6790*t5202;
  t7344 = t6780*t6588*t6819;
  t7349 = t7342 + t7344;
  t7373 = -1.*t6965*t5202*t6947;
  t7375 = t6975*t6819;
  t7400 = t7373 + t7375;
  t7403 = t6780*t6790*t6947;
  t7409 = -1.*t6588*t6995;
  t7410 = t7403 + t7409;
  t7436 = -1.*t6965*t5202*t6975;
  t7439 = t7286*t6819;
  t7441 = t7436 + t7439;
  t7511 = t6780*t6790*t6975;
  t7514 = -1.*t6588*t7306;
  t7520 = t7511 + t7514;
  t6953 = t6780*t6947*t6588;
  t6996 = t6790*t6995;
  t6997 = t6953 + t6996;
  t7677 = -0.0641*t6892;
  t7692 = -0.28*t6941;
  t7695 = t7677 + t7692;
  t7702 = -1.*t6892;
  t7728 = 1. + t7702;
  t7749 = -0.575*t7728;
  t7754 = -0.295*t6892;
  t7782 = -0.0641*t6941;
  t7797 = t7749 + t7754 + t7782;
  t6768 = t5202*t6588;
  t6820 = -1.*t6780*t6790*t6819;
  t6829 = t6768 + t6820;
  t7673 = 0.325*t6896;
  t7699 = t6917*t7695;
  t7800 = t6896*t7797;
  t7804 = t7673 + t7699 + t7800;
  t7880 = -1.*t6917;
  t7887 = 1. + t7880;
  t7902 = -0.325*t7887;
  t7930 = -1.*t6896*t7695;
  t7946 = t6917*t7797;
  t7962 = t7902 + t7930 + t7946;
  t7656 = -1.*t6780;
  t7660 = 1. + t7656;
  t7663 = -0.1575*t7660;
  t7670 = -0.2255*t6780;
  t7830 = -1.*t5202*t7804;
  t7847 = t7663 + t7670 + t7830;
  t7973 = -0.068*t5202;
  t7974 = t6780*t7804;
  t7976 = t7973 + t7974;
  t8029 = t6965*t7962;
  t8045 = -1.*t7847*t6819;
  t8058 = t8029 + t8045;
  t7871 = t6965*t7847;
  t7964 = t7962*t6819;
  t7971 = t7871 + t7964;
  t7979 = t7976*t6588;
  t8077 = t6790*t8058;
  t8096 = t7979 + t8077;
  t8102 = t6790*t7976;
  t8108 = -1.*t6588*t8058;
  t8116 = t8102 + t8108;
  t7028 = t6780*t6975*t6588;
  t7312 = t6790*t7306;
  t7314 = t7028 + t7312;
  t7972 = t6780*t6965*t7971;
  t8128 = -1.*t7971*t7400;
  t8166 = t7971*t7400;
  t8191 = -1.*t7971*t7441;
  t8217 = -1.*t6780*t6965*t7971;
  t8290 = t7971*t7441;
  t8539 = -1.*t5202*t7976;
  t8600 = t6780*t7976*t6975;
  t8351 = t5202*t7976;
  t8364 = -1.*t6780*t7976*t6947;
  t8436 = -1.*t6780*t7976*t6975;
  t8409 = t6780*t7976*t6947;
  t8928 = t7962*t6975;
  t8806 = -1.*t7962*t7286;
  p_output1[0]=t6997*var2[0] + t6829*var2[1] + t7314*var2[2];
  p_output1[1]=(t7334*t7400 - 1.*t7338*t7410)*var2[0] + (t6780*t6965*t7334 - 1.*t7338*t7349)*var2[1] + (t7334*t7441 - 1.*t7338*t7520)*var2[2];
  p_output1[2]=(t7338*t7400 + t7334*t7410)*var2[0] + (t6780*t6965*t7338 + t7334*t7349)*var2[1] + (t7338*t7441 + t7334*t7520)*var2[2];
  p_output1[3]=(t7314*(-1.*t6829*t8096 - 1.*t7349*t8116 + t8217) + t6829*(t7314*t8096 + t7520*t8116 + t8290))*var2[0] + (t7314*(t6997*t8096 + t7410*t8116 + t8166) + t6997*(-1.*t7314*t8096 - 1.*t7520*t8116 + t8191))*var2[1] + (t6997*(t7972 + t6829*t8096 + t7349*t8116) + t6829*(-1.*t6997*t8096 - 1.*t7410*t8116 + t8128))*var2[2];
  p_output1[4]=(t7441*(t6780*t6819*t8058 + t8217 + t8539) + t6780*t6965*(t7306*t8058 + t8290 + t8600))*var2[0] + (t7441*(t6995*t8058 + t8166 + t8409) + t7400*(-1.*t7306*t8058 + t8191 + t8436))*var2[1] + (t7400*(t7972 - 1.*t6780*t6819*t8058 + t8351) + t6780*t6965*(-1.*t6995*t8058 + t8128 + t8364))*var2[2];
  p_output1[5]=(t6780*t6975*(-1.*t6780*t7847 + t8539) + t5202*(-1.*t5202*t6975*t7847 + t7286*t7962 + t8600))*var2[0] + (t6780*t6947*(t5202*t6975*t7847 + t8436 + t8806) + t6780*t6975*(-1.*t5202*t6947*t7847 + t8409 + t8928))*var2[1] + (t6780*t6947*(t6780*t7847 + t8351) + t5202*(t5202*t6947*t7847 - 1.*t6975*t7962 + t8364))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t6947 + 0.2255*t7286)*var2[0] + (t6975*(-1.*t6975*t7804 + t8806) + t7286*(t6947*t7804 + t8928))*var2[1] - 0.068*t6975*var2[2];
  p_output1[16]=(-0.325*t6941 - 1.*t6892*t7695 - 1.*t6941*t7797)*var2[0] + (0.325*t6892 - 1.*t6941*t7695 + t6892*t7797)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
