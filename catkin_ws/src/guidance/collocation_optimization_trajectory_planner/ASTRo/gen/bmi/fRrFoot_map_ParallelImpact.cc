/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:51 GMT+02:00
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
  double t29595;
  double t23540;
  double t27167;
  double t29822;
  double t51670;
  double t51680;
  double t51687;
  double t51669;
  double t51690;
  double t51668;
  double t51692;
  double t51658;
  double t28654;
  double t29840;
  double t41345;
  double t51185;
  double t51688;
  double t51693;
  double t51694;
  double t51703;
  double t51698;
  double t51700;
  double t51701;
  double t51697;
  double t51704;
  double t51705;
  double t51706;
  double t51762;
  double t51764;
  double t51770;
  double t51785;
  double t51790;
  double t51795;
  double t51796;
  double t51802;
  double t51833;
  double t51838;
  double t51842;
  double t51844;
  double t51846;
  double t51848;
  double t51858;
  double t51860;
  double t51779;
  double t51782;
  double t51850;
  double t51852;
  double t51870;
  double t51876;
  double t51882;
  double t51884;
  double t51892;
  double t51893;
  double t51894;
  double t51897;
  double t51899;
  double t51900;
  double t51854;
  double t51862;
  double t51864;
  double t51717;
  double t51718;
  double t51719;
  double t51722;
  double t51730;
  double t51742;
  double t51743;
  double t51745;
  double t51746;
  double t51896;
  double t51903;
  double t51904;
  double t51907;
  double t51908;
  double t51909;
  double t51915;
  double t51916;
  double t51917;
  double t51751;
  double t51753;
  double t51756;
  double t51866;
  double t51918;
  double t51210;
  double t51695;
  double t51696;
  double t51920;
  double t51921;
  double t51923;
  double t52153;
  double t52173;
  double t52180;
  double t52190;
  double t52219;
  double t52225;
  t29595 = Cos(var1[16]);
  t23540 = Cos(var1[17]);
  t27167 = Sin(var1[16]);
  t29822 = Sin(var1[17]);
  t51670 = -1.*t29595*t23540;
  t51680 = -1.*t27167*t29822;
  t51687 = t51670 + t51680;
  t51669 = Cos(var1[5]);
  t51690 = Sin(var1[15]);
  t51668 = Cos(var1[15]);
  t51692 = Sin(var1[5]);
  t51658 = Cos(var1[4]);
  t28654 = -1.*t23540*t27167;
  t29840 = t29595*t29822;
  t41345 = t28654 + t29840;
  t51185 = Sin(var1[4]);
  t51688 = t51668*t51669*t51687;
  t51693 = -1.*t51690*t51687*t51692;
  t51694 = t51688 + t51693;
  t51703 = Sin(var1[3]);
  t51698 = t51669*t51690*t51687;
  t51700 = t51668*t51687*t51692;
  t51701 = t51698 + t51700;
  t51697 = Cos(var1[3]);
  t51704 = t51658*t41345;
  t51705 = -1.*t51185*t51694;
  t51706 = t51704 + t51705;
  t51762 = -1.*t51668;
  t51764 = 1. + t51762;
  t51770 = -0.15121*t51764;
  t51785 = -1.*t29595;
  t51790 = 1. + t51785;
  t51795 = -0.28121*t51790;
  t51796 = -1.*t23540;
  t51802 = 1. + t51796;
  t51833 = -0.50321*t51802;
  t51838 = -0.23321*t23540;
  t51842 = t51833 + t51838;
  t51844 = t29595*t51842;
  t51846 = 0.27*t27167*t29822;
  t51848 = t51795 + t51844 + t51846;
  t51858 = t51668*t51848;
  t51860 = t51770 + t51858;
  t51779 = -0.15121*t51668;
  t51782 = 0.15121*t51690;
  t51850 = t51690*t51848;
  t51852 = t51770 + t51779 + t51782 + t51850;
  t51870 = t51669*t51690;
  t51876 = t51668*t51692;
  t51882 = t51870 + t51876;
  t51884 = 0.28121*t27167;
  t51892 = t51842*t27167;
  t51893 = -0.27*t29595*t29822;
  t51894 = t51884 + t51892 + t51893;
  t51897 = t51669*t51860;
  t51899 = -1.*t51852*t51692;
  t51900 = t51897 + t51899;
  t51854 = t51669*t51852;
  t51862 = t51860*t51692;
  t51864 = t51854 + t51862;
  t51717 = t29595*t23540;
  t51718 = t27167*t29822;
  t51719 = t51717 + t51718;
  t51722 = t51719*t51185;
  t51730 = t51668*t51669*t41345;
  t51742 = -1.*t51690*t41345*t51692;
  t51743 = t51730 + t51742;
  t51745 = t51658*t51743;
  t51746 = t51722 + t51745;
  t51896 = t51894*t51185;
  t51903 = t51658*t51900;
  t51904 = t51896 + t51903;
  t51907 = t51658*t51894;
  t51908 = -1.*t51185*t51900;
  t51909 = t51907 + t51908;
  t51915 = t51669*t51690*t41345;
  t51916 = t51668*t41345*t51692;
  t51917 = t51915 + t51916;
  t51751 = -1.*t51668*t51669;
  t51753 = t51690*t51692;
  t51756 = t51751 + t51753;
  t51866 = -1.*t51756*t51864;
  t51918 = t51917*t51864;
  t51210 = t41345*t51185;
  t51695 = t51658*t51694;
  t51696 = t51210 + t51695;
  t51920 = t51658*t51719;
  t51921 = -1.*t51185*t51743;
  t51923 = t51920 + t51921;
  t52153 = -1.*t51917*t51864;
  t52173 = t51701*t51864;
  t52180 = -1.*t51894*t51719;
  t52190 = t51894*t41345;
  t52219 = t51756*t51864;
  t52225 = -1.*t51701*t51864;
  p_output1[0]=t51696;
  p_output1[1]=t51697*t51701 - 1.*t51703*t51706;
  p_output1[2]=t51701*t51703 + t51697*t51706;
  p_output1[3]=t51746*(t51866 - 1.*t51658*t51882*t51904 + t51185*t51882*t51909) + t51658*t51882*(t51746*t51904 + t51918 + t51909*t51923);
  p_output1[4]=(t51866 - 1.*t51882*t51900)*t51917 + t51756*(t51719*t51894 + t51743*t51900 + t51918);
  p_output1[5]=t51719*(t51668*t51852 - 1.*t51690*t51860);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t51687 - 0.15121*t51719;
  p_output1[16]=0.28121*t29822 - 0.27*t23540*t29822 + t29822*t51842;
  p_output1[17]=0;
  p_output1[18]=t51658*t51882;
  p_output1[19]=t51697*t51756 + t51185*t51703*t51882;
  p_output1[20]=t51703*t51756 - 1.*t51185*t51697*t51882;
  p_output1[21]=t51696*(-1.*t51746*t51904 - 1.*t51909*t51923 + t52153) + t51746*(t51696*t51904 + t51706*t51909 + t52173);
  p_output1[22]=t51701*(-1.*t51743*t51900 + t52153 + t52180) + t51917*(t51694*t51900 + t52173 + t52190);
  p_output1[23]=t41345*(-1.*t41345*t51690*t51852 - 1.*t41345*t51668*t51860 + t52180) + t51719*(t51687*t51690*t51852 + t51668*t51687*t51860 + t52190);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t41345*(-1.*t41345*t51848 + t52180) + t51719*(t51687*t51848 + t52190);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t51746;
  p_output1[37]=t51697*t51917 - 1.*t51703*t51923;
  p_output1[38]=t51703*t51917 + t51697*t51923;
  p_output1[39]=t51696*(t51658*t51882*t51904 - 1.*t51185*t51882*t51909 + t52219) + t51658*t51882*(-1.*t51696*t51904 - 1.*t51706*t51909 + t52225);
  p_output1[40]=t51701*(t51882*t51900 + t52219) + t51756*(-1.*t41345*t51894 - 1.*t51694*t51900 + t52225);
  p_output1[41]=t41345*(-1.*t51668*t51852 + t51690*t51860);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.28121*t23540 + 0.27*Power(t29822,2) + t23540*t51842;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
