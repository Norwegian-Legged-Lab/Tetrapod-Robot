/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:51 GMT+02:00
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
  double t5050;
  double t237;
  double t4834;
  double t5100;
  double t31367;
  double t33855;
  double t36139;
  double t28180;
  double t29821;
  double t43022;
  double t29490;
  double t43052;
  double t5287;
  double t4859;
  double t5180;
  double t5263;
  double t41166;
  double t43655;
  double t51641;
  double t52693;
  double t52451;
  double t52551;
  double t52563;
  double t52676;
  double t52585;
  double t52587;
  double t52595;
  double t52605;
  double t52607;
  double t52611;
  double t52677;
  double t52678;
  double t52682;
  double t52697;
  double t52705;
  double t52706;
  double t52714;
  double t52715;
  double t52716;
  double t52719;
  double t52725;
  double t52727;
  double t52729;
  double t52730;
  double t52731;
  double t52604;
  double t52612;
  double t52657;
  double t52748;
  double t52753;
  double t52754;
  double t52778;
  double t52785;
  double t52786;
  double t52787;
  double t52794;
  double t52795;
  double t52801;
  double t52802;
  double t52805;
  double t52807;
  double t52811;
  double t52817;
  double t52818;
  double t52756;
  double t52757;
  double t52812;
  double t52813;
  double t52832;
  double t52838;
  double t52839;
  double t52844;
  double t52849;
  double t52854;
  double t52855;
  double t52814;
  double t52820;
  double t52821;
  double t52848;
  double t52856;
  double t52857;
  double t52861;
  double t52862;
  double t52863;
  double t19517;
  double t52055;
  double t52101;
  double t52822;
  double t52871;
  double t52895;
  double t52905;
  double t52915;
  double t52923;
  double t52948;
  double t52952;
  t5050 = Cos(var1[16]);
  t237 = Cos(var1[17]);
  t4834 = Sin(var1[16]);
  t5100 = Sin(var1[17]);
  t31367 = -1.*t5050*t237;
  t33855 = -1.*t4834*t5100;
  t36139 = t31367 + t33855;
  t28180 = Cos(var1[4]);
  t29821 = Cos(var1[5]);
  t43022 = Sin(var1[15]);
  t29490 = Cos(var1[15]);
  t43052 = Sin(var1[5]);
  t5287 = Sin(var1[4]);
  t4859 = -1.*t237*t4834;
  t5180 = t5050*t5100;
  t5263 = t4859 + t5180;
  t41166 = t29490*t29821*t36139;
  t43655 = -1.*t43022*t36139*t43052;
  t51641 = t41166 + t43655;
  t52693 = Sin(var1[3]);
  t52451 = t29821*t43022;
  t52551 = t29490*t43052;
  t52563 = t52451 + t52551;
  t52676 = Cos(var1[3]);
  t52585 = t5050*t237;
  t52587 = t4834*t5100;
  t52595 = t52585 + t52587;
  t52605 = t29490*t29821*t5263;
  t52607 = -1.*t43022*t5263*t43052;
  t52611 = t52605 + t52607;
  t52677 = t29821*t43022*t36139;
  t52678 = t29490*t36139*t43052;
  t52682 = t52677 + t52678;
  t52697 = t28180*t5263;
  t52705 = -1.*t5287*t51641;
  t52706 = t52697 + t52705;
  t52714 = -1.*t29490*t29821;
  t52715 = t43022*t43052;
  t52716 = t52714 + t52715;
  t52719 = t29821*t43022*t5263;
  t52725 = t29490*t5263*t43052;
  t52727 = t52719 + t52725;
  t52729 = t28180*t52595;
  t52730 = -1.*t5287*t52611;
  t52731 = t52729 + t52730;
  t52604 = t52595*t5287;
  t52612 = t28180*t52611;
  t52657 = t52604 + t52612;
  t52748 = -1.*t29490;
  t52753 = 1. + t52748;
  t52754 = -0.15121*t52753;
  t52778 = -1.*t5050;
  t52785 = 1. + t52778;
  t52786 = -0.28121*t52785;
  t52787 = -1.*t237;
  t52794 = 1. + t52787;
  t52795 = -0.50321*t52794;
  t52801 = -0.23321*t237;
  t52802 = t52795 + t52801;
  t52805 = t5050*t52802;
  t52807 = 0.27*t4834*t5100;
  t52811 = t52786 + t52805 + t52807;
  t52817 = t29490*t52811;
  t52818 = t52754 + t52817;
  t52756 = -0.15121*t29490;
  t52757 = 0.15121*t43022;
  t52812 = t43022*t52811;
  t52813 = t52754 + t52756 + t52757 + t52812;
  t52832 = 0.28121*t4834;
  t52838 = t52802*t4834;
  t52839 = -0.27*t5050*t5100;
  t52844 = t52832 + t52838 + t52839;
  t52849 = t29821*t52818;
  t52854 = -1.*t52813*t43052;
  t52855 = t52849 + t52854;
  t52814 = t29821*t52813;
  t52820 = t52818*t43052;
  t52821 = t52814 + t52820;
  t52848 = t52844*t5287;
  t52856 = t28180*t52855;
  t52857 = t52848 + t52856;
  t52861 = t28180*t52844;
  t52862 = -1.*t5287*t52855;
  t52863 = t52861 + t52862;
  t19517 = t5263*t5287;
  t52055 = t28180*t51641;
  t52101 = t19517 + t52055;
  t52822 = -1.*t52716*t52821;
  t52871 = t52727*t52821;
  t52895 = -1.*t52727*t52821;
  t52905 = t52682*t52821;
  t52915 = t52716*t52821;
  t52923 = -1.*t52682*t52821;
  t52948 = -1.*t52844*t52595;
  t52952 = t52844*t5263;
  p_output1[0]=t52101;
  p_output1[1]=t28180*t52563;
  p_output1[2]=t52657;
  p_output1[3]=t52676*t52682 - 1.*t52693*t52706;
  p_output1[4]=t52676*t52716 + t52563*t52693*t5287;
  p_output1[5]=t52676*t52727 - 1.*t52693*t52731;
  p_output1[6]=t52682*t52693 + t52676*t52706;
  p_output1[7]=t52693*t52716 - 1.*t52563*t52676*t5287;
  p_output1[8]=t52693*t52727 + t52676*t52731;
  p_output1[9]=t52657*(t52822 - 1.*t28180*t52563*t52857 + t52563*t52863*t5287) + t28180*t52563*(t52657*t52857 + t52731*t52863 + t52871);
  p_output1[10]=t52101*(-1.*t52657*t52857 - 1.*t52731*t52863 + t52895) + t52657*(t52101*t52857 + t52706*t52863 + t52905);
  p_output1[11]=t52101*(t28180*t52563*t52857 - 1.*t52563*t52863*t5287 + t52915) + t28180*t52563*(-1.*t52101*t52857 - 1.*t52706*t52863 + t52923);
  p_output1[12]=t52727*(t52822 - 1.*t52563*t52855) + t52716*(t52595*t52844 + t52611*t52855 + t52871);
  p_output1[13]=t52682*(-1.*t52611*t52855 + t52895 + t52948) + t52727*(t51641*t52855 + t52905 + t52952);
  p_output1[14]=t52682*(t52563*t52855 + t52915) + t52716*(-1.*t5263*t52844 - 1.*t51641*t52855 + t52923);
  p_output1[15]=t52595*(t29490*t52813 - 1.*t43022*t52818);
  p_output1[16]=t5263*(-1.*t43022*t5263*t52813 - 1.*t29490*t5263*t52818 + t52948) + t52595*(t36139*t43022*t52813 + t29490*t36139*t52818 + t52952);
  p_output1[17]=t5263*(-1.*t29490*t52813 + t43022*t52818);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t36139 - 0.15121*t52595;
  p_output1[46]=-0.15121 + t5263*(-1.*t5263*t52811 + t52948) + t52595*(t36139*t52811 + t52952);
  p_output1[47]=0;
  p_output1[48]=0.28121*t5100 - 0.27*t237*t5100 + t5100*t52802;
  p_output1[49]=0;
  p_output1[50]=0.28121*t237 + 0.27*Power(t5100,2) + t237*t52802;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.27;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
