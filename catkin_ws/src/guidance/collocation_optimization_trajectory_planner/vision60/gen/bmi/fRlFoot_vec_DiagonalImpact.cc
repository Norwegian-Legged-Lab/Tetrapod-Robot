/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:14 GMT+02:00
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
  double t3507;
  double t3479;
  double t3509;
  double t3629;
  double t3577;
  double t3581;
  double t3640;
  double t3421;
  double t3596;
  double t3641;
  double t3644;
  double t3519;
  double t3647;
  double t3648;
  double t3660;
  double t3646;
  double t3852;
  double t3864;
  double t3661;
  double t3662;
  double t3665;
  double t3672;
  double t3675;
  double t3833;
  double t3842;
  double t3843;
  double t3844;
  double t3865;
  double t3866;
  double t3868;
  double t3881;
  double t3882;
  double t3883;
  double t3887;
  double t3900;
  double t3901;
  double t3928;
  double t3931;
  double t3935;
  double t3966;
  double t3982;
  double t3985;
  double t3645;
  double t3666;
  double t3667;
  double t5188;
  double t5190;
  double t5196;
  double t5381;
  double t5650;
  double t5898;
  double t5910;
  double t5924;
  double t5926;
  double t3504;
  double t3520;
  double t3527;
  double t5187;
  double t5344;
  double t5928;
  double t5958;
  double t6232;
  double t6343;
  double t6479;
  double t6547;
  double t6568;
  double t6618;
  double t5115;
  double t5134;
  double t5135;
  double t5179;
  double t5959;
  double t6217;
  double t6691;
  double t6701;
  double t6717;
  double t6731;
  double t6912;
  double t6924;
  double t6222;
  double t6635;
  double t6685;
  double t6721;
  double t6926;
  double t6951;
  double t6963;
  double t6964;
  double t6968;
  double t3670;
  double t3846;
  double t3848;
  double t6687;
  double t7268;
  double t7395;
  double t7414;
  double t7514;
  double t7574;
  double t8168;
  double t8590;
  double t7646;
  double t7848;
  double t8040;
  double t7996;
  double t9842;
  double t9763;
  t3507 = Cos(var1[9]);
  t3479 = Sin(var1[4]);
  t3509 = Cos(var1[4]);
  t3629 = Cos(var1[10]);
  t3577 = Cos(var1[11]);
  t3581 = Sin(var1[10]);
  t3640 = Sin(var1[11]);
  t3421 = Sin(var1[9]);
  t3596 = t3577*t3581;
  t3641 = -1.*t3629*t3640;
  t3644 = t3596 + t3641;
  t3519 = Sin(var1[5]);
  t3647 = t3629*t3577;
  t3648 = t3581*t3640;
  t3660 = t3647 + t3648;
  t3646 = Cos(var1[5]);
  t3852 = Cos(var1[3]);
  t3864 = Sin(var1[3]);
  t3661 = t3646*t3660;
  t3662 = t3421*t3644*t3519;
  t3665 = t3661 + t3662;
  t3672 = -1.*t3577*t3581;
  t3675 = t3629*t3640;
  t3833 = t3672 + t3675;
  t3842 = t3646*t3833;
  t3843 = t3421*t3660*t3519;
  t3844 = t3842 + t3843;
  t3865 = t3509*t3421;
  t3866 = t3507*t3479*t3519;
  t3868 = t3865 + t3866;
  t3881 = -1.*t3646*t3421*t3644;
  t3882 = t3660*t3519;
  t3883 = t3881 + t3882;
  t3887 = t3507*t3509*t3644;
  t3900 = -1.*t3479*t3665;
  t3901 = t3887 + t3900;
  t3928 = -1.*t3646*t3421*t3660;
  t3931 = t3833*t3519;
  t3935 = t3928 + t3931;
  t3966 = t3507*t3509*t3660;
  t3982 = -1.*t3479*t3844;
  t3985 = t3966 + t3982;
  t3645 = t3507*t3644*t3479;
  t3666 = t3509*t3665;
  t3667 = t3645 + t3666;
  t5188 = -0.0641*t3577;
  t5190 = -0.28*t3640;
  t5196 = t5188 + t5190;
  t5381 = -1.*t3577;
  t5650 = 1. + t5381;
  t5898 = -0.575*t5650;
  t5910 = -0.295*t3577;
  t5924 = -0.0641*t3640;
  t5926 = t5898 + t5910 + t5924;
  t3504 = t3421*t3479;
  t3520 = -1.*t3507*t3509*t3519;
  t3527 = t3504 + t3520;
  t5187 = 0.325*t3581;
  t5344 = t3629*t5196;
  t5928 = t3581*t5926;
  t5958 = t5187 + t5344 + t5928;
  t6232 = -1.*t3629;
  t6343 = 1. + t6232;
  t6479 = -0.325*t6343;
  t6547 = -1.*t3581*t5196;
  t6568 = t3629*t5926;
  t6618 = t6479 + t6547 + t6568;
  t5115 = -1.*t3507;
  t5134 = 1. + t5115;
  t5135 = 0.1575*t5134;
  t5179 = 0.2255*t3507;
  t5959 = -1.*t3421*t5958;
  t6217 = t5135 + t5179 + t5959;
  t6691 = 0.068*t3421;
  t6701 = t3507*t5958;
  t6717 = t6691 + t6701;
  t6731 = t3646*t6618;
  t6912 = -1.*t6217*t3519;
  t6924 = t6731 + t6912;
  t6222 = t3646*t6217;
  t6635 = t6618*t3519;
  t6685 = t6222 + t6635;
  t6721 = t6717*t3479;
  t6926 = t3509*t6924;
  t6951 = t6721 + t6926;
  t6963 = t3509*t6717;
  t6964 = -1.*t3479*t6924;
  t6968 = t6963 + t6964;
  t3670 = t3507*t3660*t3479;
  t3846 = t3509*t3844;
  t3848 = t3670 + t3846;
  t6687 = t3507*t3646*t6685;
  t7268 = -1.*t6685*t3883;
  t7395 = t6685*t3883;
  t7414 = -1.*t6685*t3935;
  t7514 = -1.*t3507*t3646*t6685;
  t7574 = t6685*t3935;
  t8168 = -1.*t3421*t6717;
  t8590 = t3507*t6717*t3660;
  t7646 = t3421*t6717;
  t7848 = -1.*t3507*t6717*t3644;
  t8040 = -1.*t3507*t6717*t3660;
  t7996 = t3507*t6717*t3644;
  t9842 = t6618*t3660;
  t9763 = -1.*t6618*t3833;
  p_output1[0]=t3667*var2[0] + t3527*var2[1] + t3848*var2[2];
  p_output1[1]=(t3852*t3883 - 1.*t3864*t3901)*var2[0] + (t3507*t3646*t3852 - 1.*t3864*t3868)*var2[1] + (t3852*t3935 - 1.*t3864*t3985)*var2[2];
  p_output1[2]=(t3864*t3883 + t3852*t3901)*var2[0] + (t3507*t3646*t3864 + t3852*t3868)*var2[1] + (t3864*t3935 + t3852*t3985)*var2[2];
  p_output1[3]=(t3848*(-1.*t3527*t6951 - 1.*t3868*t6968 + t7514) + t3527*(t3848*t6951 + t3985*t6968 + t7574))*var2[0] + (t3848*(t3667*t6951 + t3901*t6968 + t7395) + t3667*(-1.*t3848*t6951 - 1.*t3985*t6968 + t7414))*var2[1] + (t3667*(t6687 + t3527*t6951 + t3868*t6968) + t3527*(-1.*t3667*t6951 - 1.*t3901*t6968 + t7268))*var2[2];
  p_output1[4]=(t3935*(t3507*t3519*t6924 + t7514 + t8168) + t3507*t3646*(t3844*t6924 + t7574 + t8590))*var2[0] + (t3935*(t3665*t6924 + t7395 + t7996) + t3883*(-1.*t3844*t6924 + t7414 + t8040))*var2[1] + (t3883*(t6687 - 1.*t3507*t3519*t6924 + t7646) + t3507*t3646*(-1.*t3665*t6924 + t7268 + t7848))*var2[2];
  p_output1[5]=(t3507*t3660*(-1.*t3507*t6217 + t8168) + t3421*(-1.*t3421*t3660*t6217 + t3833*t6618 + t8590))*var2[0] + (t3507*t3644*(t3421*t3660*t6217 + t8040 + t9763) + t3507*t3660*(-1.*t3421*t3644*t6217 + t7996 + t9842))*var2[1] + (t3507*t3644*(t3507*t6217 + t7646) + t3421*(t3421*t3644*t6217 - 1.*t3660*t6618 + t7848))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t3644 - 0.2255*t3833)*var2[0] + (t3660*(-1.*t3660*t5958 + t9763) + t3833*(t3644*t5958 + t9842))*var2[1] + 0.068*t3660*var2[2];
  p_output1[10]=(-0.325*t3640 - 1.*t3577*t5196 - 1.*t3640*t5926)*var2[0] + (0.325*t3577 - 1.*t3640*t5196 + t3577*t5926)*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
