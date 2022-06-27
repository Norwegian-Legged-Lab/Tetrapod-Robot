/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:40 GMT+02:00
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
  double t17459;
  double t12952;
  double t16802;
  double t17483;
  double t17701;
  double t17702;
  double t17703;
  double t17692;
  double t17699;
  double t17775;
  double t17698;
  double t17794;
  double t6;
  double t17842;
  double t17843;
  double t17844;
  double t16981;
  double t17496;
  double t17669;
  double t17756;
  double t17805;
  double t17806;
  double t17878;
  double t17816;
  double t17820;
  double t17823;
  double t17865;
  double t17847;
  double t17848;
  double t17850;
  double t17866;
  double t17867;
  double t17868;
  double t17885;
  double t17889;
  double t17890;
  double t17895;
  double t17896;
  double t17897;
  double t17900;
  double t17901;
  double t17902;
  double t17904;
  double t17905;
  double t17906;
  double t17838;
  double t17856;
  double t17864;
  double t17922;
  double t17923;
  double t17925;
  double t17927;
  double t17928;
  double t17929;
  double t17930;
  double t17931;
  double t17932;
  double t17933;
  double t17934;
  double t17935;
  double t17936;
  double t17937;
  double t17938;
  double t17939;
  double t17941;
  double t17942;
  double t17943;
  double t17944;
  double t17948;
  double t17949;
  double t17950;
  double t17951;
  double t17953;
  double t17954;
  double t17955;
  double t17940;
  double t17945;
  double t17946;
  double t17952;
  double t17956;
  double t17957;
  double t17968;
  double t17969;
  double t17970;
  double t17681;
  double t17807;
  double t17812;
  double t17947;
  double t17981;
  double t17994;
  double t18005;
  double t18014;
  double t18019;
  double t18036;
  double t18041;
  t17459 = Cos(var1[7]);
  t12952 = Cos(var1[8]);
  t16802 = Sin(var1[7]);
  t17483 = Sin(var1[8]);
  t17701 = t17459*t12952;
  t17702 = t16802*t17483;
  t17703 = t17701 + t17702;
  t17692 = Cos(var1[4]);
  t17699 = Cos(var1[6]);
  t17775 = Sin(var1[5]);
  t17698 = Cos(var1[5]);
  t17794 = Sin(var1[6]);
  t6 = Sin(var1[4]);
  t17842 = t12952*t16802;
  t17843 = -1.*t17459*t17483;
  t17844 = t17842 + t17843;
  t16981 = -1.*t12952*t16802;
  t17496 = t17459*t17483;
  t17669 = t16981 + t17496;
  t17756 = t17698*t17699*t17703;
  t17805 = -1.*t17775*t17794*t17703;
  t17806 = t17756 + t17805;
  t17878 = Sin(var1[3]);
  t17816 = -1.*t17699*t17775;
  t17820 = -1.*t17698*t17794;
  t17823 = t17816 + t17820;
  t17865 = Cos(var1[3]);
  t17847 = t17698*t17699*t17844;
  t17848 = -1.*t17775*t17794*t17844;
  t17850 = t17847 + t17848;
  t17866 = t17699*t17775*t17703;
  t17867 = t17698*t17794*t17703;
  t17868 = t17866 + t17867;
  t17885 = t17692*t17669;
  t17889 = -1.*t6*t17806;
  t17890 = t17885 + t17889;
  t17895 = t17698*t17699;
  t17896 = -1.*t17775*t17794;
  t17897 = t17895 + t17896;
  t17900 = t17699*t17775*t17844;
  t17901 = t17698*t17794*t17844;
  t17902 = t17900 + t17901;
  t17904 = t17692*t17703;
  t17905 = -1.*t6*t17850;
  t17906 = t17904 + t17905;
  t17838 = t6*t17703;
  t17856 = t17692*t17850;
  t17864 = t17838 + t17856;
  t17922 = -1.*t17699;
  t17923 = 1. + t17922;
  t17925 = 0.15121*t17923;
  t17927 = -1.*t17459;
  t17928 = 1. + t17927;
  t17929 = 0.28121*t17928;
  t17930 = -1.*t12952;
  t17931 = 1. + t17930;
  t17932 = 0.50321*t17931;
  t17933 = 0.19821*t12952;
  t17934 = t17932 + t17933;
  t17935 = t17459*t17934;
  t17936 = -0.305*t16802*t17483;
  t17937 = t17929 + t17935 + t17936;
  t17938 = t17699*t17937;
  t17939 = t17925 + t17938;
  t17941 = 0.15121*t17699;
  t17942 = -0.15121*t17794;
  t17943 = t17794*t17937;
  t17944 = t17925 + t17941 + t17942 + t17943;
  t17948 = 0.28121*t16802;
  t17949 = -1.*t17934*t16802;
  t17950 = -0.305*t17459*t17483;
  t17951 = t17948 + t17949 + t17950;
  t17953 = t17698*t17939;
  t17954 = -1.*t17775*t17944;
  t17955 = t17953 + t17954;
  t17940 = t17775*t17939;
  t17945 = t17698*t17944;
  t17946 = t17940 + t17945;
  t17952 = t6*t17951;
  t17956 = t17692*t17955;
  t17957 = t17952 + t17956;
  t17968 = t17692*t17951;
  t17969 = -1.*t6*t17955;
  t17970 = t17968 + t17969;
  t17681 = t6*t17669;
  t17807 = t17692*t17806;
  t17812 = t17681 + t17807;
  t17947 = -1.*t17897*t17946;
  t17981 = t17902*t17946;
  t17994 = -1.*t17902*t17946;
  t18005 = t17868*t17946;
  t18014 = t17897*t17946;
  t18019 = -1.*t17868*t17946;
  t18036 = -1.*t17951*t17703;
  t18041 = t17951*t17669;
  p_output1[0]=t17812;
  p_output1[1]=t17692*t17823;
  p_output1[2]=t17864;
  p_output1[3]=t17865*t17868 - 1.*t17878*t17890;
  p_output1[4]=t17865*t17897 + t17823*t17878*t6;
  p_output1[5]=t17865*t17902 - 1.*t17878*t17906;
  p_output1[6]=t17868*t17878 + t17865*t17890;
  p_output1[7]=t17878*t17897 - 1.*t17823*t17865*t6;
  p_output1[8]=t17878*t17902 + t17865*t17906;
  p_output1[9]=t17692*t17823*(t17864*t17957 + t17906*t17970 + t17981) + t17864*(t17947 - 1.*t17692*t17823*t17957 + t17823*t17970*t6);
  p_output1[10]=t17812*(-1.*t17864*t17957 - 1.*t17906*t17970 + t17994) + t17864*(t17812*t17957 + t17890*t17970 + t18005);
  p_output1[11]=t17692*t17823*(-1.*t17812*t17957 - 1.*t17890*t17970 + t18019) + t17812*(t17692*t17823*t17957 + t18014 - 1.*t17823*t17970*t6);
  p_output1[12]=t17902*(t17947 - 1.*t17823*t17955) + t17897*(t17703*t17951 + t17850*t17955 + t17981);
  p_output1[13]=t17868*(-1.*t17850*t17955 + t17994 + t18036) + t17902*(t17806*t17955 + t18005 + t18041);
  p_output1[14]=t17868*(t17823*t17955 + t18014) + t17897*(-1.*t17669*t17951 - 1.*t17806*t17955 + t18019);
  p_output1[15]=t17703*(t17794*t17939 - 1.*t17699*t17944);
  p_output1[16]=t17669*(-1.*t17699*t17844*t17939 - 1.*t17794*t17844*t17944 + t18036) + t17703*(t17699*t17703*t17939 + t17703*t17794*t17944 + t18041);
  p_output1[17]=t17669*(-1.*t17794*t17939 + t17699*t17944);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t17669*(-1.*t17844*t17937 + t18036) + t17703*(t17703*t17937 + t18041);
  p_output1[20]=0.15121*t17669 + 0.15121*t17844;
  p_output1[21]=0.28121*t17483 - 0.305*t12952*t17483 - 1.*t17483*t17934;
  p_output1[22]=0;
  p_output1[23]=0.28121*t12952 + 0.305*Power(t17483,2) - 1.*t12952*t17934;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.305;
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

#include "Jh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
