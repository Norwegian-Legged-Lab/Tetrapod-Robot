/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:26 GMT+02:00
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
  double t3936;
  double t4500;
  double t4502;
  double t4503;
  double t4520;
  double t4634;
  double t4484;
  double t5087;
  double t5097;
  double t5123;
  double t5141;
  double t5145;
  double t5230;
  double t5322;
  double t5323;
  double t5077;
  double t5105;
  double t5115;
  double t5149;
  double t5242;
  double t5284;
  double t5321;
  double t5324;
  double t5325;
  double t5326;
  double t5330;
  double t5334;
  double t5338;
  double t5339;
  double t5342;
  double t5347;
  double t5748;
  double t5785;
  double t5856;
  double t5874;
  double t5766;
  double t5891;
  double t5905;
  double t5944;
  double t5945;
  double t5956;
  double t6244;
  double t6260;
  double t6278;
  double t5083;
  double t4797;
  double t5035;
  double t6629;
  double t6648;
  double t6654;
  double t6687;
  double t6696;
  double t6716;
  double t6720;
  double t6722;
  double t6728;
  double t6840;
  double t6895;
  double t6922;
  double t6931;
  double t6957;
  double t6972;
  double t6978;
  double t6994;
  double t6998;
  double t7003;
  double t7093;
  double t7086;
  double t7112;
  double t7125;
  double t7141;
  double t7147;
  double t7156;
  double t7172;
  double t7188;
  double t7190;
  double t5352;
  double t5353;
  double t5395;
  double t5420;
  double t7313;
  double t7319;
  double t7327;
  double t7339;
  double t7355;
  double t7210;
  double t7504;
  double t7530;
  double t7533;
  double t7566;
  double t7571;
  double t7581;
  double t7618;
  double t7634;
  double t7655;
  double t7684;
  double t7686;
  double t7756;
  double t7769;
  double t7771;
  double t7775;
  double t7826;
  double t7830;
  double t7841;
  double t7824;
  double t7851;
  double t7855;
  double t7875;
  double t7880;
  double t7899;
  double t8027;
  double t8029;
  double t8047;
  double t8194;
  double t8199;
  double t8205;
  double t8216;
  double t8225;
  double t8230;
  double t8267;
  double t8282;
  double t8296;
  double t8435;
  double t8450;
  double t8466;
  double t8490;
  double t8491;
  double t8510;
  double t8708;
  double t8710;
  double t8724;
  double t8784;
  double t8793;
  double t8558;
  double t8913;
  double t8917;
  double t8935;
  double t8911;
  double t8954;
  double t8967;
  double t8983;
  double t8995;
  double t8998;
  double t9051;
  double t9053;
  t3936 = Cos(var1[4]);
  t4500 = Cos(var1[15]);
  t4502 = -1.*t4500;
  t4503 = 1. + t4502;
  t4520 = -0.15121*t4503;
  t4634 = Sin(var1[15]);
  t4484 = Cos(var1[5]);
  t5087 = Sin(var1[5]);
  t5097 = Cos(var1[16]);
  t5123 = -1.*t3936*t4484*t4634;
  t5141 = -1.*t4500*t3936*t5087;
  t5145 = t5123 + t5141;
  t5230 = Cos(var1[17]);
  t5322 = Sin(var1[16]);
  t5323 = Sin(var1[17]);
  t5077 = -0.15121*t4634;
  t5105 = -1.*t5097;
  t5115 = 1. + t5105;
  t5149 = -0.28121*t5115*t5145;
  t5242 = -1.*t5230;
  t5284 = 1. + t5242;
  t5321 = -0.50321*t5097*t5284*t5145;
  t5324 = 0.50321*t5322*t5323*t5145;
  t5325 = -1.*t4500*t3936*t4484;
  t5326 = t3936*t4634*t5087;
  t5330 = t5325 + t5326;
  t5334 = -0.15121*t5330;
  t5338 = t5097*t5230*t5145;
  t5339 = t5322*t5323*t5145;
  t5342 = t5338 + t5339;
  t5347 = -0.19821*t5342;
  t5748 = Sin(var1[4]);
  t5785 = t4500*t3936*t4484;
  t5856 = -1.*t3936*t4634*t5087;
  t5874 = t5785 + t5856;
  t5766 = t5322*t5748;
  t5891 = t5097*t5874;
  t5905 = t5766 + t5891;
  t5944 = t5097*t5748;
  t5945 = -1.*t5322*t5874;
  t5956 = t5944 + t5945;
  t6244 = -1.*t5322*t5748;
  t6260 = -1.*t5097*t5874;
  t6278 = t6244 + t6260;
  t5083 = t4520 + t5077;
  t4797 = 0.15121*t4634;
  t5035 = t4520 + t4797;
  t6629 = -1.*t4500*t4484*t5748;
  t6648 = t4634*t5748*t5087;
  t6654 = t6629 + t6648;
  t6687 = t3936*t5322;
  t6696 = t5097*t6654;
  t6716 = t6687 + t6696;
  t6720 = t5097*t3936;
  t6722 = -1.*t5322*t6654;
  t6728 = t6720 + t6722;
  t6840 = Sin(var1[3]);
  t6895 = t4500*t3936*t4484*t6840;
  t6922 = -1.*t3936*t4634*t6840*t5087;
  t6931 = t6895 + t6922;
  t6957 = t5322*t6840*t5748;
  t6972 = t5097*t6931;
  t6978 = t6957 + t6972;
  t6994 = t5097*t6840*t5748;
  t6998 = -1.*t5322*t6931;
  t7003 = t6994 + t6998;
  t7093 = Cos(var1[3]);
  t7086 = -1.*t4484*t6840*t5748;
  t7112 = -1.*t7093*t5087;
  t7125 = t7086 + t7112;
  t7141 = t7093*t4484;
  t7147 = -1.*t6840*t5748*t5087;
  t7156 = t7141 + t7147;
  t7172 = t4634*t7125;
  t7188 = t4500*t7156;
  t7190 = t7172 + t7188;
  t5352 = -0.15121*t4500;
  t5353 = t5352 + t5077;
  t5395 = 0.15121*t4500;
  t5420 = t5395 + t5077;
  t7313 = t4484*t6840*t5748;
  t7319 = t7093*t5087;
  t7327 = t7313 + t7319;
  t7339 = -1.*t4634*t7327;
  t7355 = t7339 + t7188;
  t7210 = -1.*t4634*t7156;
  t7504 = t7093*t4484*t5748;
  t7530 = -1.*t6840*t5087;
  t7533 = t7504 + t7530;
  t7566 = -1.*t4484*t6840;
  t7571 = -1.*t7093*t5748*t5087;
  t7581 = t7566 + t7571;
  t7618 = t4500*t7533;
  t7634 = t4634*t7581;
  t7655 = t7618 + t7634;
  t7684 = -1.*t7093*t3936*t5322;
  t7686 = t5097*t7655;
  t7756 = t7684 + t7686;
  t7769 = -1.*t5097*t7093*t3936;
  t7771 = -1.*t5322*t7655;
  t7775 = t7769 + t7771;
  t7826 = t4500*t7327;
  t7830 = t4634*t7156;
  t7841 = t7826 + t7830;
  t7824 = -1.*t3936*t5322*t6840;
  t7851 = t5097*t7841;
  t7855 = t7824 + t7851;
  t7875 = -1.*t5097*t3936*t6840;
  t7880 = -1.*t5322*t7841;
  t7899 = t7875 + t7880;
  t8027 = t3936*t5322*t6840;
  t8029 = -1.*t5097*t7841;
  t8047 = t8027 + t8029;
  t8194 = -1.*t4500*t7093*t3936*t4484;
  t8199 = t7093*t3936*t4634*t5087;
  t8205 = t8194 + t8199;
  t8216 = -1.*t7093*t5322*t5748;
  t8225 = t5097*t8205;
  t8230 = t8216 + t8225;
  t8267 = -1.*t5097*t7093*t5748;
  t8282 = -1.*t5322*t8205;
  t8296 = t8267 + t8282;
  t8435 = t4484*t6840;
  t8450 = t7093*t5748*t5087;
  t8466 = t8435 + t8450;
  t8490 = t4634*t7533;
  t8491 = t4500*t8466;
  t8510 = t8490 + t8491;
  t8708 = -1.*t7093*t4484*t5748;
  t8710 = t6840*t5087;
  t8724 = t8708 + t8710;
  t8784 = -1.*t4634*t8724;
  t8793 = t8784 + t8491;
  t8558 = -1.*t4634*t8466;
  t8913 = t4500*t8724;
  t8917 = t4634*t8466;
  t8935 = t8913 + t8917;
  t8911 = t7093*t3936*t5322;
  t8954 = t5097*t8935;
  t8967 = t8911 + t8954;
  t8983 = t5097*t7093*t3936;
  t8995 = -1.*t5322*t8935;
  t8998 = t8983 + t8995;
  t9051 = -1.*t5097*t8935;
  t9053 = t7684 + t9051;
  p_output1[0]=var2[0] + (0.28121*t3936*t5322 - 1.*t4484*t5083*t5748 + t5035*t5087*t5748 - 0.15121*(t4484*t4634*t5748 + t4500*t5087*t5748) - 0.28121*t5115*t6654 - 0.50321*t5284*t6716 - 0.50321*t5323*t6728 - 0.19821*(t5230*t6716 - 1.*t5323*t6728))*var2[4] + (-1.*t3936*t4484*t5035 - 1.*t3936*t5083*t5087 + t5149 + t5321 + t5324 + t5334 + t5347)*var2[5] + (t5149 + t5321 + t5324 + t5334 + t5347 + t3936*t4484*t5353 - 1.*t3936*t5087*t5420)*var2[15] + (0.28121*t5097*t5748 - 0.28121*t5322*t5874 - 0.50321*t5284*t5956 - 0.50321*t5323*t6278 - 0.19821*(t5230*t5956 - 1.*t5323*t6278))*var2[16] + (-0.50321*t5323*t5905 - 0.50321*t5230*t5956 - 0.19821*(-1.*t5323*t5905 - 1.*t5230*t5956))*var2[17];
  p_output1[1]=var2[1] + (-0.28121*t3936*t5322*t7093 + t5083*t7533 + t5035*t7581 - 0.15121*(-1.*t4634*t7533 + t4500*t7581) - 0.28121*t5115*t7655 - 0.50321*t5284*t7756 - 0.50321*t5323*t7775 - 0.19821*(t5230*t7756 - 1.*t5323*t7775))*var2[3] + (t3936*t4484*t5083*t6840 - 1.*t3936*t5035*t5087*t6840 + 0.28121*t5322*t5748*t6840 - 0.15121*(-1.*t3936*t4484*t4634*t6840 - 1.*t3936*t4500*t5087*t6840) - 0.28121*t5115*t6931 - 0.50321*t5284*t6978 - 0.50321*t5323*t7003 - 0.19821*(t5230*t6978 - 1.*t5323*t7003))*var2[4] + (t5035*t7125 + t5083*t7156 - 0.28121*t5115*t7190 - 0.50321*t5097*t5284*t7190 + 0.50321*t5322*t5323*t7190 - 0.19821*(t5097*t5230*t7190 + t5322*t5323*t7190) - 0.15121*(t4500*t7125 + t7210))*var2[5] + (t5420*t7156 + t5353*t7327 - 0.15121*(t7210 - 1.*t4500*t7327) - 0.28121*t5115*t7355 - 0.50321*t5097*t5284*t7355 + 0.50321*t5322*t5323*t7355 - 0.19821*(t5097*t5230*t7355 + t5322*t5323*t7355))*var2[15] + (-0.28121*t3936*t5097*t6840 - 0.28121*t5322*t7841 - 0.50321*t5284*t7899 - 0.50321*t5323*t8047 - 0.19821*(t5230*t7899 - 1.*t5323*t8047))*var2[16] + (-0.50321*t5323*t7855 - 0.50321*t5230*t7899 - 0.19821*(-1.*t5323*t7855 - 1.*t5230*t7899))*var2[17];
  p_output1[2]=var2[2] + (-0.28121*t3936*t5322*t6840 + t5035*t7156 + t5083*t7327 - 0.15121*t7355 - 0.28121*t5115*t7841 - 0.50321*t5284*t7855 - 0.50321*t5323*t7899 - 0.19821*(t5230*t7855 - 1.*t5323*t7899))*var2[3] + (-1.*t3936*t4484*t5083*t7093 + t3936*t5035*t5087*t7093 - 0.28121*t5322*t5748*t7093 - 0.15121*(t3936*t4484*t4634*t7093 + t3936*t4500*t5087*t7093) - 0.28121*t5115*t8205 - 0.50321*t5284*t8230 - 0.50321*t5323*t8296 - 0.19821*(t5230*t8230 - 1.*t5323*t8296))*var2[4] + (t5035*t7533 + t5083*t8466 - 0.28121*t5115*t8510 - 0.50321*t5097*t5284*t8510 + 0.50321*t5322*t5323*t8510 - 0.19821*(t5097*t5230*t8510 + t5322*t5323*t8510) - 0.15121*(t7618 + t8558))*var2[5] + (t5420*t8466 + t5353*t8724 - 0.15121*(t8558 - 1.*t4500*t8724) - 0.28121*t5115*t8793 - 0.50321*t5097*t5284*t8793 + 0.50321*t5322*t5323*t8793 - 0.19821*(t5097*t5230*t8793 + t5322*t5323*t8793))*var2[15] + (0.28121*t3936*t5097*t7093 - 0.28121*t5322*t8935 - 0.50321*t5284*t8998 - 0.50321*t5323*t9053 - 0.19821*(t5230*t8998 - 1.*t5323*t9053))*var2[16] + (-0.50321*t5323*t8967 - 0.50321*t5230*t8998 - 0.19821*(-1.*t5323*t8967 - 1.*t5230*t8998))*var2[17];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "impact_velocity_RrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void impact_velocity_RrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
