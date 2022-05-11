/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:20 GMT+02:00
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
  double t2957;
  double t3067;
  double t3072;
  double t3073;
  double t3093;
  double t3094;
  double t3098;
  double t3154;
  double t3146;
  double t3123;
  double t3234;
  double t3235;
  double t3253;
  double t3104;
  double t2941;
  double t2950;
  double t3153;
  double t3266;
  double t3269;
  double t3413;
  double t3367;
  double t3404;
  double t3407;
  double t3366;
  double t3430;
  double t3431;
  double t3464;
  double t3662;
  double t3663;
  double t3666;
  double t3673;
  double t3674;
  double t3683;
  double t3684;
  double t3687;
  double t3688;
  double t3658;
  double t3667;
  double t3691;
  double t3692;
  double t3625;
  double t3635;
  double t3636;
  double t3637;
  double t3698;
  double t3726;
  double t3733;
  double t3815;
  double t3826;
  double t3829;
  double t3830;
  double t3838;
  double t3839;
  double t3840;
  double t3842;
  double t3849;
  double t3850;
  double t3861;
  double t3878;
  double t3879;
  double t3882;
  double t4884;
  double t4889;
  double t4893;
  double t4938;
  double t4944;
  double t4951;
  double t4807;
  double t4819;
  double t4820;
  double t4910;
  double t4952;
  double t4953;
  double t4968;
  double t4976;
  double t4995;
  double t3846;
  double t3862;
  double t3865;
  double t4902;
  double t5007;
  double t5020;
  double t5023;
  double t5032;
  double t5080;
  double t5158;
  double t3479;
  double t3487;
  double t3562;
  double t3100;
  double t3280;
  double t3281;
  double t5035;
  double t5051;
  double t5052;
  double t5700;
  double t5742;
  double t5877;
  double t5856;
  double t6602;
  double t5898;
  double t6641;
  double t6647;
  double t6659;
  double t6671;
  t2957 = Cos(var1[8]);
  t3067 = Sin(var1[7]);
  t3072 = t2957*t3067;
  t3073 = Cos(var1[7]);
  t3093 = Sin(var1[8]);
  t3094 = -1.*t3073*t3093;
  t3098 = t3072 + t3094;
  t3154 = Cos(var1[5]);
  t3146 = Sin(var1[6]);
  t3123 = Sin(var1[5]);
  t3234 = t3073*t2957;
  t3235 = t3067*t3093;
  t3253 = t3234 + t3235;
  t3104 = Cos(var1[4]);
  t2941 = Cos(var1[6]);
  t2950 = Sin(var1[4]);
  t3153 = t3123*t3146*t3098;
  t3266 = t3154*t3253;
  t3269 = t3153 + t3266;
  t3413 = Sin(var1[3]);
  t3367 = -1.*t3154*t3146*t3098;
  t3404 = t3123*t3253;
  t3407 = t3367 + t3404;
  t3366 = Cos(var1[3]);
  t3430 = t3104*t2941*t3098;
  t3431 = -1.*t2950*t3269;
  t3464 = t3430 + t3431;
  t3662 = -0.0641*t2957;
  t3663 = -0.28*t3093;
  t3666 = t3662 + t3663;
  t3673 = -1.*t2957;
  t3674 = 1. + t3673;
  t3683 = 0.075*t3674;
  t3684 = 0.355*t2957;
  t3687 = -0.0641*t3093;
  t3688 = t3683 + t3684 + t3687;
  t3658 = -0.325*t3067;
  t3667 = t3073*t3666;
  t3691 = t3067*t3688;
  t3692 = t3658 + t3667 + t3691;
  t3625 = -1.*t2941;
  t3635 = 1. + t3625;
  t3636 = 0.1575*t3635;
  t3637 = 0.2255*t2941;
  t3698 = -1.*t3146*t3692;
  t3726 = t3636 + t3637 + t3698;
  t3733 = -1.*t3123*t3726;
  t3815 = -1.*t3073;
  t3826 = 1. + t3815;
  t3829 = 0.325*t3826;
  t3830 = -1.*t3067*t3666;
  t3838 = t3073*t3688;
  t3839 = t3829 + t3830 + t3838;
  t3840 = t3154*t3839;
  t3842 = t3733 + t3840;
  t3849 = 0.068*t3146;
  t3850 = t2941*t3692;
  t3861 = t3849 + t3850;
  t3878 = -1.*t3104*t2941*t3123;
  t3879 = t2950*t3146;
  t3882 = t3878 + t3879;
  t4884 = t3154*t3726;
  t4889 = t3123*t3839;
  t4893 = t4884 + t4889;
  t4938 = -1.*t2957*t3067;
  t4944 = t3073*t3093;
  t4951 = t4938 + t4944;
  t4807 = t3104*t3842;
  t4819 = t2950*t3861;
  t4820 = t4807 + t4819;
  t4910 = t2941*t2950*t3253;
  t4952 = t3154*t4951;
  t4953 = t3123*t3146*t3253;
  t4968 = t4952 + t4953;
  t4976 = t3104*t4968;
  t4995 = t4910 + t4976;
  t3846 = -1.*t2950*t3842;
  t3862 = t3104*t3861;
  t3865 = t3846 + t3862;
  t4902 = -1.*t3154*t2941*t4893;
  t5007 = t3123*t4951;
  t5020 = -1.*t3154*t3146*t3253;
  t5023 = t5007 + t5020;
  t5032 = t4893*t5023;
  t5080 = -1.*t3146*t3861;
  t5158 = t2941*t3861*t3253;
  t3479 = t2941*t2950*t3123;
  t3487 = t3104*t3146;
  t3562 = t3479 + t3487;
  t3100 = t2941*t2950*t3098;
  t3280 = t3104*t3269;
  t3281 = t3100 + t3280;
  t5035 = t3104*t2941*t3253;
  t5051 = -1.*t2950*t4968;
  t5052 = t5035 + t5051;
  t5700 = t4893*t3407;
  t5742 = -1.*t4893*t5023;
  t5877 = -1.*t2941*t3861*t3253;
  t5856 = t2941*t3861*t3098;
  t6602 = t3839*t3253;
  t5898 = -1.*t3839*t4951;
  t6641 = t3154*t2941*t4893;
  t6647 = -1.*t4893*t3407;
  t6659 = t3146*t3861;
  t6671 = -1.*t2941*t3861*t3098;
  p_output1[0]=t3281;
  p_output1[1]=t3366*t3407 - 1.*t3413*t3464;
  p_output1[2]=t3407*t3413 + t3366*t3464;
  p_output1[3]=(-1.*t3562*t3865 - 1.*t3882*t4820 + t4902)*t4995 + t3882*(t4820*t4995 + t5032 + t3865*t5052);
  p_output1[4]=t5023*(t2941*t3123*t3842 + t4902 + t5080) + t2941*t3154*(t3842*t4968 + t5032 + t5158);
  p_output1[5]=t2941*t3253*(-1.*t2941*t3726 + t5080) + t3146*(-1.*t3146*t3253*t3726 + t3839*t4951 + t5158);
  p_output1[6]=-0.1575*t3098 - 0.2255*t4951;
  p_output1[7]=0.325*t3093 - 1.*t2957*t3666 - 1.*t3093*t3688;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3882;
  p_output1[19]=t2941*t3154*t3366 - 1.*t3413*t3562;
  p_output1[20]=t2941*t3154*t3413 + t3366*t3562;
  p_output1[21]=t4995*(t3464*t3865 + t3281*t4820 + t5700) + t3281*(-1.*t4820*t4995 - 1.*t3865*t5052 + t5742);
  p_output1[22]=t5023*(t3269*t3842 + t5700 + t5856) + t3407*(-1.*t3842*t4968 + t5742 + t5877);
  p_output1[23]=t2941*t3098*(t3146*t3253*t3726 + t5877 + t5898) + t2941*t3253*(-1.*t3098*t3146*t3726 + t5856 + t6602);
  p_output1[24]=t3253*(-1.*t3253*t3692 + t5898) + t4951*(t3098*t3692 + t6602);
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
  p_output1[36]=t4995;
  p_output1[37]=t3366*t5023 - 1.*t3413*t5052;
  p_output1[38]=t3413*t5023 + t3366*t5052;
  p_output1[39]=t3281*(t3562*t3865 + t3882*t4820 + t6641) + t3882*(-1.*t3464*t3865 - 1.*t3281*t4820 + t6647);
  p_output1[40]=t3407*(-1.*t2941*t3123*t3842 + t6641 + t6659) + t2941*t3154*(-1.*t3269*t3842 + t6647 + t6671);
  p_output1[41]=t2941*t3098*(t2941*t3726 + t6659) + t3146*(t3098*t3146*t3726 - 1.*t3253*t3839 + t6671);
  p_output1[42]=0.068*t3253;
  p_output1[43]=-0.325*t2957 - 1.*t3093*t3666 + t2957*t3688;
  p_output1[44]=-0.28;
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

#include "fFlFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
