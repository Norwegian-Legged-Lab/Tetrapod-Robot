/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:00 GMT+02:00
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
  double t41049;
  double t2513;
  double t12855;
  double t41326;
  double t53969;
  double t53970;
  double t53987;
  double t53614;
  double t53892;
  double t53989;
  double t53667;
  double t54013;
  double t52527;
  double t56404;
  double t56422;
  double t56423;
  double t18266;
  double t52504;
  double t52522;
  double t53988;
  double t54016;
  double t54434;
  double t56452;
  double t54522;
  double t54523;
  double t54550;
  double t56433;
  double t56424;
  double t56425;
  double t56426;
  double t56440;
  double t56447;
  double t56448;
  double t56453;
  double t56626;
  double t56631;
  double t56645;
  double t56646;
  double t56648;
  double t56651;
  double t56652;
  double t56656;
  double t56670;
  double t56674;
  double t56810;
  double t54791;
  double t56429;
  double t56432;
  double t56837;
  double t56841;
  double t56848;
  double t56849;
  double t56851;
  double t56852;
  double t56853;
  double t56854;
  double t56855;
  double t56858;
  double t56862;
  double t56866;
  double t56868;
  double t56873;
  double t56877;
  double t56879;
  double t56845;
  double t56846;
  double t56847;
  double t56870;
  double t56871;
  double t56884;
  double t56885;
  double t56886;
  double t56887;
  double t56889;
  double t56890;
  double t56891;
  double t56872;
  double t56881;
  double t56882;
  double t56888;
  double t56895;
  double t56896;
  double t56898;
  double t56900;
  double t56902;
  double t53602;
  double t54504;
  double t54516;
  double t56883;
  double t56907;
  double t57072;
  double t57097;
  double t57111;
  double t57119;
  double t57151;
  double t57163;
  t41049 = Cos(var1[13]);
  t2513 = Cos(var1[14]);
  t12855 = Sin(var1[13]);
  t41326 = Sin(var1[14]);
  t53969 = t41049*t2513;
  t53970 = t12855*t41326;
  t53987 = t53969 + t53970;
  t53614 = Cos(var1[4]);
  t53892 = Cos(var1[5]);
  t53989 = Sin(var1[12]);
  t53667 = Cos(var1[12]);
  t54013 = Sin(var1[5]);
  t52527 = Sin(var1[4]);
  t56404 = t2513*t12855;
  t56422 = -1.*t41049*t41326;
  t56423 = t56404 + t56422;
  t18266 = -1.*t2513*t12855;
  t52504 = t41049*t41326;
  t52522 = t18266 + t52504;
  t53988 = t53667*t53892*t53987;
  t54016 = -1.*t53989*t53987*t54013;
  t54434 = t53988 + t54016;
  t56452 = Sin(var1[3]);
  t54522 = -1.*t53892*t53989;
  t54523 = -1.*t53667*t54013;
  t54550 = t54522 + t54523;
  t56433 = Cos(var1[3]);
  t56424 = t53667*t53892*t56423;
  t56425 = -1.*t53989*t56423*t54013;
  t56426 = t56424 + t56425;
  t56440 = t53892*t53989*t53987;
  t56447 = t53667*t53987*t54013;
  t56448 = t56440 + t56447;
  t56453 = t53614*t52522;
  t56626 = -1.*t52527*t54434;
  t56631 = t56453 + t56626;
  t56645 = t53667*t53892;
  t56646 = -1.*t53989*t54013;
  t56648 = t56645 + t56646;
  t56651 = t53892*t53989*t56423;
  t56652 = t53667*t56423*t54013;
  t56656 = t56651 + t56652;
  t56670 = t53614*t53987;
  t56674 = -1.*t52527*t56426;
  t56810 = t56670 + t56674;
  t54791 = t53987*t52527;
  t56429 = t53614*t56426;
  t56432 = t54791 + t56429;
  t56837 = -1.*t53667;
  t56841 = 1. + t56837;
  t56848 = -1.*t41049;
  t56849 = 1. + t56848;
  t56851 = 0.28121*t56849;
  t56852 = -1.*t2513;
  t56853 = 1. + t56852;
  t56854 = 0.50321*t56853;
  t56855 = 0.23321*t2513;
  t56858 = t56854 + t56855;
  t56862 = t41049*t56858;
  t56866 = -0.27*t12855*t41326;
  t56868 = t56851 + t56862 + t56866;
  t56873 = 0.15121*t56841;
  t56877 = t53667*t56868;
  t56879 = t56873 + t56877;
  t56845 = -0.15121*t56841;
  t56846 = -0.15121*t53667;
  t56847 = -0.15121*t53989;
  t56870 = t53989*t56868;
  t56871 = t56845 + t56846 + t56847 + t56870;
  t56884 = 0.28121*t12855;
  t56885 = -1.*t56858*t12855;
  t56886 = -0.27*t41049*t41326;
  t56887 = t56884 + t56885 + t56886;
  t56889 = t53892*t56879;
  t56890 = -1.*t56871*t54013;
  t56891 = t56889 + t56890;
  t56872 = t53892*t56871;
  t56881 = t56879*t54013;
  t56882 = t56872 + t56881;
  t56888 = t56887*t52527;
  t56895 = t53614*t56891;
  t56896 = t56888 + t56895;
  t56898 = t53614*t56887;
  t56900 = -1.*t52527*t56891;
  t56902 = t56898 + t56900;
  t53602 = t52522*t52527;
  t54504 = t53614*t54434;
  t54516 = t53602 + t54504;
  t56883 = -1.*t56648*t56882;
  t56907 = t56656*t56882;
  t57072 = -1.*t56656*t56882;
  t57097 = t56448*t56882;
  t57111 = t56648*t56882;
  t57119 = -1.*t56448*t56882;
  t57151 = -1.*t56887*t53987;
  t57163 = t56887*t52522;
  p_output1[0]=t54516;
  p_output1[1]=t53614*t54550;
  p_output1[2]=t56432;
  p_output1[3]=t56433*t56448 - 1.*t56452*t56631;
  p_output1[4]=t52527*t54550*t56452 + t56433*t56648;
  p_output1[5]=t56433*t56656 - 1.*t56452*t56810;
  p_output1[6]=t56448*t56452 + t56433*t56631;
  p_output1[7]=-1.*t52527*t54550*t56433 + t56452*t56648;
  p_output1[8]=t56452*t56656 + t56433*t56810;
  p_output1[9]=t56432*(t56883 - 1.*t53614*t54550*t56896 + t52527*t54550*t56902) + t53614*t54550*(t56432*t56896 + t56810*t56902 + t56907);
  p_output1[10]=t54516*(-1.*t56432*t56896 - 1.*t56810*t56902 + t57072) + t56432*(t54516*t56896 + t56631*t56902 + t57097);
  p_output1[11]=t54516*(t53614*t54550*t56896 - 1.*t52527*t54550*t56902 + t57111) + t53614*t54550*(-1.*t54516*t56896 - 1.*t56631*t56902 + t57119);
  p_output1[12]=t56656*(t56883 - 1.*t54550*t56891) + t56648*(t53987*t56887 + t56426*t56891 + t56907);
  p_output1[13]=t56448*(-1.*t56426*t56891 + t57072 + t57151) + t56656*(t54434*t56891 + t57097 + t57163);
  p_output1[14]=t56448*(t54550*t56891 + t57111) + t56648*(-1.*t52522*t56887 - 1.*t54434*t56891 + t57119);
  p_output1[15]=t53987*(-1.*t53667*t56871 + t53989*t56879);
  p_output1[16]=t52522*(-1.*t53989*t56423*t56871 - 1.*t53667*t56423*t56879 + t57151) + t53987*(t53987*t53989*t56871 + t53667*t53987*t56879 + t57163);
  p_output1[17]=t52522*(t53667*t56871 - 1.*t53989*t56879);
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
  p_output1[37]=-0.15121 + t52522*(-1.*t56423*t56868 + t57151) + t53987*(t53987*t56868 + t57163);
  p_output1[38]=-0.15121*t52522 - 0.15121*t56423;
  p_output1[39]=0.28121*t41326 - 0.27*t2513*t41326 - 1.*t41326*t56858;
  p_output1[40]=0;
  p_output1[41]=0.28121*t2513 + 0.27*Power(t41326,2) - 1.*t2513*t56858;
  p_output1[42]=0;
  p_output1[43]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
