/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:35 GMT+02:00
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
  double t3325;
  double t3832;
  double t3868;
  double t3871;
  double t5502;
  double t5842;
  double t5899;
  double t7849;
  double t7841;
  double t7729;
  double t7859;
  double t7860;
  double t7861;
  double t7709;
  double t3194;
  double t3324;
  double t7848;
  double t7862;
  double t7863;
  double t7874;
  double t7870;
  double t7871;
  double t7872;
  double t7866;
  double t7879;
  double t7880;
  double t7881;
  double t7909;
  double t7910;
  double t7911;
  double t7919;
  double t7920;
  double t7921;
  double t7922;
  double t7923;
  double t7924;
  double t7908;
  double t7912;
  double t7925;
  double t7930;
  double t7902;
  double t7903;
  double t7904;
  double t7905;
  double t7931;
  double t7932;
  double t7933;
  double t7940;
  double t7941;
  double t7942;
  double t7943;
  double t7944;
  double t7945;
  double t7947;
  double t7952;
  double t7962;
  double t7966;
  double t7968;
  double t7994;
  double t8002;
  double t8006;
  double t8014;
  double t8015;
  double t8016;
  double t8020;
  double t8021;
  double t8022;
  double t8007;
  double t8008;
  double t8009;
  double t8019;
  double t8024;
  double t8028;
  double t8029;
  double t8030;
  double t8032;
  double t7953;
  double t7972;
  double t7983;
  double t8017;
  double t8035;
  double t8036;
  double t8037;
  double t8040;
  double t8054;
  double t8066;
  double t7897;
  double t7900;
  double t7901;
  double t7666;
  double t7864;
  double t7865;
  double t8042;
  double t8043;
  double t8044;
  double t8095;
  double t8100;
  double t8121;
  double t8113;
  double t8134;
  double t8126;
  double t8198;
  double t8201;
  double t8220;
  double t8223;
  t3325 = Cos(var1[8]);
  t3832 = Sin(var1[7]);
  t3868 = t3325*t3832;
  t3871 = Cos(var1[7]);
  t5502 = Sin(var1[8]);
  t5842 = -1.*t3871*t5502;
  t5899 = t3868 + t5842;
  t7849 = Cos(var1[5]);
  t7841 = Sin(var1[6]);
  t7729 = Sin(var1[5]);
  t7859 = t3871*t3325;
  t7860 = t3832*t5502;
  t7861 = t7859 + t7860;
  t7709 = Cos(var1[4]);
  t3194 = Cos(var1[6]);
  t3324 = Sin(var1[4]);
  t7848 = t7729*t7841*t5899;
  t7862 = t7849*t7861;
  t7863 = t7848 + t7862;
  t7874 = Sin(var1[3]);
  t7870 = -1.*t7849*t7841*t5899;
  t7871 = t7729*t7861;
  t7872 = t7870 + t7871;
  t7866 = Cos(var1[3]);
  t7879 = t7709*t3194*t5899;
  t7880 = -1.*t3324*t7863;
  t7881 = t7879 + t7880;
  t7909 = -0.0641*t3325;
  t7910 = -0.28*t5502;
  t7911 = t7909 + t7910;
  t7919 = -1.*t3325;
  t7920 = 1. + t7919;
  t7921 = 0.075*t7920;
  t7922 = 0.355*t3325;
  t7923 = -0.0641*t5502;
  t7924 = t7921 + t7922 + t7923;
  t7908 = -0.325*t3832;
  t7912 = t3871*t7911;
  t7925 = t3832*t7924;
  t7930 = t7908 + t7912 + t7925;
  t7902 = -1.*t3194;
  t7903 = 1. + t7902;
  t7904 = 0.1575*t7903;
  t7905 = 0.2255*t3194;
  t7931 = -1.*t7841*t7930;
  t7932 = t7904 + t7905 + t7931;
  t7933 = -1.*t7729*t7932;
  t7940 = -1.*t3871;
  t7941 = 1. + t7940;
  t7942 = 0.325*t7941;
  t7943 = -1.*t3832*t7911;
  t7944 = t3871*t7924;
  t7945 = t7942 + t7943 + t7944;
  t7947 = t7849*t7945;
  t7952 = t7933 + t7947;
  t7962 = 0.068*t7841;
  t7966 = t3194*t7930;
  t7968 = t7962 + t7966;
  t7994 = -1.*t7709*t3194*t7729;
  t8002 = t3324*t7841;
  t8006 = t7994 + t8002;
  t8014 = t7849*t7932;
  t8015 = t7729*t7945;
  t8016 = t8014 + t8015;
  t8020 = -1.*t3325*t3832;
  t8021 = t3871*t5502;
  t8022 = t8020 + t8021;
  t8007 = t7709*t7952;
  t8008 = t3324*t7968;
  t8009 = t8007 + t8008;
  t8019 = t3194*t3324*t7861;
  t8024 = t7849*t8022;
  t8028 = t7729*t7841*t7861;
  t8029 = t8024 + t8028;
  t8030 = t7709*t8029;
  t8032 = t8019 + t8030;
  t7953 = -1.*t3324*t7952;
  t7972 = t7709*t7968;
  t7983 = t7953 + t7972;
  t8017 = -1.*t7849*t3194*t8016;
  t8035 = t7729*t8022;
  t8036 = -1.*t7849*t7841*t7861;
  t8037 = t8035 + t8036;
  t8040 = t8016*t8037;
  t8054 = -1.*t7841*t7968;
  t8066 = t3194*t7968*t7861;
  t7897 = t3194*t3324*t7729;
  t7900 = t7709*t7841;
  t7901 = t7897 + t7900;
  t7666 = t3194*t3324*t5899;
  t7864 = t7709*t7863;
  t7865 = t7666 + t7864;
  t8042 = t7709*t3194*t7861;
  t8043 = -1.*t3324*t8029;
  t8044 = t8042 + t8043;
  t8095 = t8016*t7872;
  t8100 = -1.*t8016*t8037;
  t8121 = -1.*t3194*t7968*t7861;
  t8113 = t3194*t7968*t5899;
  t8134 = t7945*t7861;
  t8126 = -1.*t7945*t8022;
  t8198 = t7849*t3194*t8016;
  t8201 = -1.*t8016*t7872;
  t8220 = t7841*t7968;
  t8223 = -1.*t3194*t7968*t5899;
  p_output1[0]=t7865;
  p_output1[1]=t7866*t7872 - 1.*t7874*t7881;
  p_output1[2]=t7872*t7874 + t7866*t7881;
  p_output1[3]=(-1.*t7901*t7983 - 1.*t8006*t8009 + t8017)*t8032 + t8006*(t8009*t8032 + t8040 + t7983*t8044);
  p_output1[4]=t8037*(t3194*t7729*t7952 + t8017 + t8054) + t3194*t7849*(t7952*t8029 + t8040 + t8066);
  p_output1[5]=t3194*t7861*(-1.*t3194*t7932 + t8054) + t7841*(-1.*t7841*t7861*t7932 + t7945*t8022 + t8066);
  p_output1[6]=-0.1575*t5899 - 0.2255*t8022;
  p_output1[7]=0.325*t5502 - 1.*t3325*t7911 - 1.*t5502*t7924;
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
  p_output1[18]=t8006;
  p_output1[19]=t3194*t7849*t7866 - 1.*t7874*t7901;
  p_output1[20]=t3194*t7849*t7874 + t7866*t7901;
  p_output1[21]=t8032*(t7881*t7983 + t7865*t8009 + t8095) + t7865*(-1.*t8009*t8032 - 1.*t7983*t8044 + t8100);
  p_output1[22]=t8037*(t7863*t7952 + t8095 + t8113) + t7872*(-1.*t7952*t8029 + t8100 + t8121);
  p_output1[23]=t3194*t5899*(t7841*t7861*t7932 + t8121 + t8126) + t3194*t7861*(-1.*t5899*t7841*t7932 + t8113 + t8134);
  p_output1[24]=t7861*(-1.*t7861*t7930 + t8126) + t8022*(t5899*t7930 + t8134);
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
  p_output1[36]=t8032;
  p_output1[37]=t7866*t8037 - 1.*t7874*t8044;
  p_output1[38]=t7874*t8037 + t7866*t8044;
  p_output1[39]=t7865*(t7901*t7983 + t8006*t8009 + t8198) + t8006*(-1.*t7881*t7983 - 1.*t7865*t8009 + t8201);
  p_output1[40]=t7872*(-1.*t3194*t7729*t7952 + t8198 + t8220) + t3194*t7849*(-1.*t7863*t7952 + t8201 + t8223);
  p_output1[41]=t3194*t5899*(t3194*t7932 + t8220) + t7841*(t5899*t7841*t7932 - 1.*t7861*t7945 + t8223);
  p_output1[42]=0.068*t7861;
  p_output1[43]=-0.325*t3325 - 1.*t5502*t7911 + t3325*t7924;
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

#include "fFlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
