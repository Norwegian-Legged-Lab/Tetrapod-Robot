/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:58 GMT+02:00
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
  double t56778;
  double t29136;
  double t56763;
  double t56779;
  double t56886;
  double t56887;
  double t56888;
  double t56881;
  double t56890;
  double t56875;
  double t56891;
  double t56874;
  double t56777;
  double t56781;
  double t56782;
  double t56867;
  double t56889;
  double t56893;
  double t56894;
  double t56904;
  double t56899;
  double t56900;
  double t56901;
  double t56898;
  double t56905;
  double t56906;
  double t56908;
  double t56969;
  double t56970;
  double t56971;
  double t56975;
  double t56976;
  double t56977;
  double t56979;
  double t56980;
  double t56982;
  double t56984;
  double t56986;
  double t56987;
  double t56988;
  double t56989;
  double t56993;
  double t56994;
  double t56973;
  double t56974;
  double t56990;
  double t56991;
  double t57000;
  double t57001;
  double t57003;
  double t57004;
  double t57005;
  double t57007;
  double t57008;
  double t57010;
  double t57014;
  double t57015;
  double t56992;
  double t56996;
  double t56998;
  double t56934;
  double t56936;
  double t56942;
  double t56944;
  double t56945;
  double t56947;
  double t56951;
  double t56956;
  double t56957;
  double t57009;
  double t57016;
  double t57018;
  double t57022;
  double t57023;
  double t57024;
  double t57028;
  double t57029;
  double t57030;
  double t56961;
  double t56962;
  double t56963;
  double t56999;
  double t57031;
  double t56873;
  double t56895;
  double t56896;
  double t57033;
  double t57034;
  double t57035;
  double t57072;
  double t57078;
  double t57087;
  double t57091;
  double t57123;
  double t57129;
  t56778 = Cos(var1[16]);
  t29136 = Cos(var1[17]);
  t56763 = Sin(var1[16]);
  t56779 = Sin(var1[17]);
  t56886 = -1.*t56778*t29136;
  t56887 = -1.*t56763*t56779;
  t56888 = t56886 + t56887;
  t56881 = Cos(var1[5]);
  t56890 = Sin(var1[15]);
  t56875 = Cos(var1[15]);
  t56891 = Sin(var1[5]);
  t56874 = Cos(var1[4]);
  t56777 = -1.*t29136*t56763;
  t56781 = t56778*t56779;
  t56782 = t56777 + t56781;
  t56867 = Sin(var1[4]);
  t56889 = t56875*t56881*t56888;
  t56893 = -1.*t56890*t56888*t56891;
  t56894 = t56889 + t56893;
  t56904 = Sin(var1[3]);
  t56899 = t56881*t56890*t56888;
  t56900 = t56875*t56888*t56891;
  t56901 = t56899 + t56900;
  t56898 = Cos(var1[3]);
  t56905 = t56874*t56782;
  t56906 = -1.*t56867*t56894;
  t56908 = t56905 + t56906;
  t56969 = -1.*t56875;
  t56970 = 1. + t56969;
  t56971 = -0.15121*t56970;
  t56975 = -1.*t56778;
  t56976 = 1. + t56975;
  t56977 = -0.28121*t56976;
  t56979 = -1.*t29136;
  t56980 = 1. + t56979;
  t56982 = -0.50321*t56980;
  t56984 = -0.19821*t29136;
  t56986 = t56982 + t56984;
  t56987 = t56778*t56986;
  t56988 = 0.305*t56763*t56779;
  t56989 = t56977 + t56987 + t56988;
  t56993 = t56875*t56989;
  t56994 = t56971 + t56993;
  t56973 = -0.15121*t56875;
  t56974 = 0.15121*t56890;
  t56990 = t56890*t56989;
  t56991 = t56971 + t56973 + t56974 + t56990;
  t57000 = t56881*t56890;
  t57001 = t56875*t56891;
  t57003 = t57000 + t57001;
  t57004 = 0.28121*t56763;
  t57005 = t56986*t56763;
  t57007 = -0.305*t56778*t56779;
  t57008 = t57004 + t57005 + t57007;
  t57010 = t56881*t56994;
  t57014 = -1.*t56991*t56891;
  t57015 = t57010 + t57014;
  t56992 = t56881*t56991;
  t56996 = t56994*t56891;
  t56998 = t56992 + t56996;
  t56934 = t56778*t29136;
  t56936 = t56763*t56779;
  t56942 = t56934 + t56936;
  t56944 = t56942*t56867;
  t56945 = t56875*t56881*t56782;
  t56947 = -1.*t56890*t56782*t56891;
  t56951 = t56945 + t56947;
  t56956 = t56874*t56951;
  t56957 = t56944 + t56956;
  t57009 = t57008*t56867;
  t57016 = t56874*t57015;
  t57018 = t57009 + t57016;
  t57022 = t56874*t57008;
  t57023 = -1.*t56867*t57015;
  t57024 = t57022 + t57023;
  t57028 = t56881*t56890*t56782;
  t57029 = t56875*t56782*t56891;
  t57030 = t57028 + t57029;
  t56961 = -1.*t56875*t56881;
  t56962 = t56890*t56891;
  t56963 = t56961 + t56962;
  t56999 = -1.*t56963*t56998;
  t57031 = t57030*t56998;
  t56873 = t56782*t56867;
  t56895 = t56874*t56894;
  t56896 = t56873 + t56895;
  t57033 = t56874*t56942;
  t57034 = -1.*t56867*t56951;
  t57035 = t57033 + t57034;
  t57072 = -1.*t57030*t56998;
  t57078 = t56901*t56998;
  t57087 = -1.*t57008*t56942;
  t57091 = t57008*t56782;
  t57123 = t56963*t56998;
  t57129 = -1.*t56901*t56998;
  p_output1[0]=t56896;
  p_output1[1]=t56898*t56901 - 1.*t56904*t56908;
  p_output1[2]=t56901*t56904 + t56898*t56908;
  p_output1[3]=t56957*(t56999 - 1.*t56874*t57003*t57018 + t56867*t57003*t57024) + t56874*t57003*(t56957*t57018 + t57031 + t57024*t57035);
  p_output1[4]=(t56999 - 1.*t57003*t57015)*t57030 + t56963*(t56942*t57008 + t56951*t57015 + t57031);
  p_output1[5]=t56942*(t56875*t56991 - 1.*t56890*t56994);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t56888 - 0.15121*t56942;
  p_output1[16]=0.28121*t56779 - 0.305*t29136*t56779 + t56779*t56986;
  p_output1[17]=0;
  p_output1[18]=t56874*t57003;
  p_output1[19]=t56898*t56963 + t56867*t56904*t57003;
  p_output1[20]=t56904*t56963 - 1.*t56867*t56898*t57003;
  p_output1[21]=t56896*(-1.*t56957*t57018 - 1.*t57024*t57035 + t57072) + t56957*(t56896*t57018 + t56908*t57024 + t57078);
  p_output1[22]=t56901*(-1.*t56951*t57015 + t57072 + t57087) + t57030*(t56894*t57015 + t57078 + t57091);
  p_output1[23]=t56782*(-1.*t56782*t56890*t56991 - 1.*t56782*t56875*t56994 + t57087) + t56942*(t56888*t56890*t56991 + t56875*t56888*t56994 + t57091);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t56782*(-1.*t56782*t56989 + t57087) + t56942*(t56888*t56989 + t57091);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t56957;
  p_output1[37]=t56898*t57030 - 1.*t56904*t57035;
  p_output1[38]=t56904*t57030 + t56898*t57035;
  p_output1[39]=t56896*(t56874*t57003*t57018 - 1.*t56867*t57003*t57024 + t57123) + t56874*t57003*(-1.*t56896*t57018 - 1.*t56908*t57024 + t57129);
  p_output1[40]=t56901*(t57003*t57015 + t57123) + t56963*(-1.*t56782*t57008 - 1.*t56894*t57015 + t57129);
  p_output1[41]=t56782*(-1.*t56875*t56991 + t56890*t56994);
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
  p_output1[52]=0.28121*t29136 + 0.305*Power(t56779,2) + t29136*t56986;
  p_output1[53]=-0.305;
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
