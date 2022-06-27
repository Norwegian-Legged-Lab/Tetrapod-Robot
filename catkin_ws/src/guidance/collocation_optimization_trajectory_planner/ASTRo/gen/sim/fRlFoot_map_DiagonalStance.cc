/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:20 GMT+02:00
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
  double t493;
  double t15;
  double t86;
  double t497;
  double t957;
  double t960;
  double t973;
  double t956;
  double t1140;
  double t953;
  double t1144;
  double t949;
  double t222;
  double t586;
  double t587;
  double t738;
  double t1138;
  double t1150;
  double t1458;
  double t3499;
  double t2910;
  double t2945;
  double t3477;
  double t2786;
  double t3500;
  double t3501;
  double t3506;
  double t3717;
  double t3727;
  double t3755;
  double t3760;
  double t3762;
  double t3768;
  double t3770;
  double t3784;
  double t3786;
  double t3791;
  double t3806;
  double t3814;
  double t3834;
  double t3869;
  double t3870;
  double t3878;
  double t3728;
  double t3729;
  double t3741;
  double t3865;
  double t3867;
  double t3884;
  double t3886;
  double t3888;
  double t3889;
  double t3890;
  double t3891;
  double t3897;
  double t3907;
  double t3908;
  double t3909;
  double t3868;
  double t3879;
  double t3882;
  double t3536;
  double t3545;
  double t3546;
  double t3554;
  double t3555;
  double t3560;
  double t3685;
  double t3690;
  double t3691;
  double t3903;
  double t3914;
  double t3915;
  double t3960;
  double t3962;
  double t3998;
  double t4203;
  double t4208;
  double t4214;
  double t3699;
  double t3714;
  double t3715;
  double t3883;
  double t4219;
  double t932;
  double t2199;
  double t2693;
  double t4221;
  double t4223;
  double t4224;
  double t4367;
  double t4373;
  double t4431;
  double t4456;
  double t5050;
  double t5076;
  t493 = Cos(var1[10]);
  t15 = Cos(var1[11]);
  t86 = Sin(var1[10]);
  t497 = Sin(var1[11]);
  t957 = -1.*t493*t15;
  t960 = -1.*t86*t497;
  t973 = t957 + t960;
  t956 = Cos(var1[5]);
  t1140 = Sin(var1[9]);
  t953 = Cos(var1[9]);
  t1144 = Sin(var1[5]);
  t949 = Cos(var1[4]);
  t222 = -1.*t15*t86;
  t586 = t493*t497;
  t587 = t222 + t586;
  t738 = Sin(var1[4]);
  t1138 = t953*t956*t973;
  t1150 = -1.*t1140*t973*t1144;
  t1458 = t1138 + t1150;
  t3499 = Sin(var1[3]);
  t2910 = t956*t1140*t973;
  t2945 = t953*t973*t1144;
  t3477 = t2910 + t2945;
  t2786 = Cos(var1[3]);
  t3500 = t949*t587;
  t3501 = -1.*t738*t1458;
  t3506 = t3500 + t3501;
  t3717 = -1.*t953;
  t3727 = 1. + t3717;
  t3755 = -1.*t493;
  t3760 = 1. + t3755;
  t3762 = -0.28121*t3760;
  t3768 = -1.*t15;
  t3770 = 1. + t3768;
  t3784 = -0.50321*t3770;
  t3786 = -0.19821*t15;
  t3791 = t3784 + t3786;
  t3806 = t493*t3791;
  t3814 = 0.305*t86*t497;
  t3834 = t3762 + t3806 + t3814;
  t3869 = -0.15121*t3727;
  t3870 = t953*t3834;
  t3878 = t3869 + t3870;
  t3728 = 0.15121*t3727;
  t3729 = 0.15121*t953;
  t3741 = 0.15121*t1140;
  t3865 = t1140*t3834;
  t3867 = t3728 + t3729 + t3741 + t3865;
  t3884 = t956*t1140;
  t3886 = t953*t1144;
  t3888 = t3884 + t3886;
  t3889 = 0.28121*t86;
  t3890 = t3791*t86;
  t3891 = -0.305*t493*t497;
  t3897 = t3889 + t3890 + t3891;
  t3907 = t956*t3878;
  t3908 = -1.*t3867*t1144;
  t3909 = t3907 + t3908;
  t3868 = t956*t3867;
  t3879 = t3878*t1144;
  t3882 = t3868 + t3879;
  t3536 = t493*t15;
  t3545 = t86*t497;
  t3546 = t3536 + t3545;
  t3554 = t3546*t738;
  t3555 = t953*t956*t587;
  t3560 = -1.*t1140*t587*t1144;
  t3685 = t3555 + t3560;
  t3690 = t949*t3685;
  t3691 = t3554 + t3690;
  t3903 = t3897*t738;
  t3914 = t949*t3909;
  t3915 = t3903 + t3914;
  t3960 = t949*t3897;
  t3962 = -1.*t738*t3909;
  t3998 = t3960 + t3962;
  t4203 = t956*t1140*t587;
  t4208 = t953*t587*t1144;
  t4214 = t4203 + t4208;
  t3699 = -1.*t953*t956;
  t3714 = t1140*t1144;
  t3715 = t3699 + t3714;
  t3883 = -1.*t3715*t3882;
  t4219 = t4214*t3882;
  t932 = t587*t738;
  t2199 = t949*t1458;
  t2693 = t932 + t2199;
  t4221 = t949*t3546;
  t4223 = -1.*t738*t3685;
  t4224 = t4221 + t4223;
  t4367 = -1.*t4214*t3882;
  t4373 = t3477*t3882;
  t4431 = -1.*t3897*t3546;
  t4456 = t3897*t587;
  t5050 = t3715*t3882;
  t5076 = -1.*t3477*t3882;
  p_output1[0]=t2693;
  p_output1[1]=t2786*t3477 - 1.*t3499*t3506;
  p_output1[2]=t3477*t3499 + t2786*t3506;
  p_output1[3]=t3888*(t3691*t3915 + t4219 + t3998*t4224)*t949 + t3691*(t3883 + t3888*t3998*t738 - 1.*t3888*t3915*t949);
  p_output1[4]=(t3883 - 1.*t3888*t3909)*t4214 + t3715*(t3546*t3897 + t3685*t3909 + t4219);
  p_output1[5]=t3546*(-1.*t1140*t3878 + t3867*t953);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t3546 + 0.15121*t973;
  p_output1[10]=0.28121*t497 - 0.305*t15*t497 + t3791*t497;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3888*t949;
  p_output1[19]=t2786*t3715 + t3499*t3888*t738;
  p_output1[20]=t3499*t3715 - 1.*t2786*t3888*t738;
  p_output1[21]=t2693*(-1.*t3691*t3915 - 1.*t3998*t4224 + t4367) + t3691*(t2693*t3915 + t3506*t3998 + t4373);
  p_output1[22]=t3477*(-1.*t3685*t3909 + t4367 + t4431) + t4214*(t1458*t3909 + t4373 + t4456);
  p_output1[23]=t587*(t4431 - 1.*t1140*t3867*t587 - 1.*t3878*t587*t953) + t3546*(t4456 + t1140*t3867*t973 + t3878*t953*t973);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t587*(t4431 - 1.*t3834*t587) + t3546*(t4456 + t3834*t973);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t3691;
  p_output1[37]=t2786*t4214 - 1.*t3499*t4224;
  p_output1[38]=t3499*t4214 + t2786*t4224;
  p_output1[39]=t3888*(-1.*t2693*t3915 - 1.*t3506*t3998 + t5076)*t949 + t2693*(t5050 - 1.*t3888*t3998*t738 + t3888*t3915*t949);
  p_output1[40]=t3477*(t3888*t3909 + t5050) + t3715*(-1.*t1458*t3909 + t5076 - 1.*t3897*t587);
  p_output1[41]=t587*(t1140*t3878 - 1.*t3867*t953);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.28121*t15 + t15*t3791 + 0.305*Power(t497,2);
  p_output1[47]=-0.305;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
