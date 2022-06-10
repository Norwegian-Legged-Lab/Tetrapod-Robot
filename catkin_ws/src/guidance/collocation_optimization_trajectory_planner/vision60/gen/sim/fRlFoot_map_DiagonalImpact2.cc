/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:33 GMT+02:00
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
  double t10748;
  double t7205;
  double t10661;
  double t10757;
  double t10667;
  double t10758;
  double t10759;
  double t10880;
  double t10907;
  double t10886;
  double t10898;
  double t10901;
  double t10910;
  double t550;
  double t10879;
  double t10858;
  double t10904;
  double t10913;
  double t10915;
  double t10937;
  double t10923;
  double t10926;
  double t10927;
  double t10922;
  double t10938;
  double t10939;
  double t10940;
  double t10986;
  double t10987;
  double t10988;
  double t10991;
  double t10992;
  double t10993;
  double t10995;
  double t10996;
  double t10997;
  double t10983;
  double t10989;
  double t10999;
  double t11001;
  double t11008;
  double t11009;
  double t11012;
  double t11015;
  double t11017;
  double t11018;
  double t10976;
  double t10977;
  double t10979;
  double t10980;
  double t11002;
  double t11003;
  double t11028;
  double t11029;
  double t11030;
  double t11034;
  double t11035;
  double t11036;
  double t11023;
  double t11024;
  double t11026;
  double t11004;
  double t11019;
  double t11020;
  double t10950;
  double t10952;
  double t10959;
  double t11031;
  double t11037;
  double t11039;
  double t10949;
  double t10960;
  double t10962;
  double t10965;
  double t10967;
  double t10969;
  double t11045;
  double t11047;
  double t11049;
  double t11056;
  double t11057;
  double t11060;
  double t11022;
  double t11061;
  double t11076;
  double t11080;
  double t11041;
  double t11042;
  double t11043;
  double t10878;
  double t10918;
  double t10920;
  double t11064;
  double t11066;
  double t11067;
  double t11119;
  double t11124;
  double t11140;
  double t11132;
  double t11154;
  double t11147;
  double t11175;
  double t11186;
  double t11195;
  double t11200;
  t10748 = Cos(var1[10]);
  t7205 = Cos(var1[11]);
  t10661 = Sin(var1[10]);
  t10757 = Sin(var1[11]);
  t10667 = t7205*t10661;
  t10758 = -1.*t10748*t10757;
  t10759 = t10667 + t10758;
  t10880 = Cos(var1[5]);
  t10907 = Sin(var1[9]);
  t10886 = t10748*t7205;
  t10898 = t10661*t10757;
  t10901 = t10886 + t10898;
  t10910 = Sin(var1[5]);
  t550 = Cos(var1[9]);
  t10879 = Cos(var1[4]);
  t10858 = Sin(var1[4]);
  t10904 = t10880*t10901;
  t10913 = t10907*t10759*t10910;
  t10915 = t10904 + t10913;
  t10937 = Sin(var1[3]);
  t10923 = -1.*t10880*t10907*t10759;
  t10926 = t10901*t10910;
  t10927 = t10923 + t10926;
  t10922 = Cos(var1[3]);
  t10938 = t550*t10879*t10759;
  t10939 = -1.*t10858*t10915;
  t10940 = t10938 + t10939;
  t10986 = -0.0641*t7205;
  t10987 = -0.28*t10757;
  t10988 = t10986 + t10987;
  t10991 = -1.*t7205;
  t10992 = 1. + t10991;
  t10993 = -0.575*t10992;
  t10995 = -0.295*t7205;
  t10996 = -0.0641*t10757;
  t10997 = t10993 + t10995 + t10996;
  t10983 = 0.325*t10661;
  t10989 = t10748*t10988;
  t10999 = t10661*t10997;
  t11001 = t10983 + t10989 + t10999;
  t11008 = -1.*t10748;
  t11009 = 1. + t11008;
  t11012 = -0.325*t11009;
  t11015 = -1.*t10661*t10988;
  t11017 = t10748*t10997;
  t11018 = t11012 + t11015 + t11017;
  t10976 = -1.*t550;
  t10977 = 1. + t10976;
  t10979 = 0.1575*t10977;
  t10980 = 0.2255*t550;
  t11002 = -1.*t10907*t11001;
  t11003 = t10979 + t10980 + t11002;
  t11028 = 0.068*t10907;
  t11029 = t550*t11001;
  t11030 = t11028 + t11029;
  t11034 = t10880*t11018;
  t11035 = -1.*t11003*t10910;
  t11036 = t11034 + t11035;
  t11023 = t10907*t10858;
  t11024 = -1.*t550*t10879*t10910;
  t11026 = t11023 + t11024;
  t11004 = t10880*t11003;
  t11019 = t11018*t10910;
  t11020 = t11004 + t11019;
  t10950 = -1.*t7205*t10661;
  t10952 = t10748*t10757;
  t10959 = t10950 + t10952;
  t11031 = t11030*t10858;
  t11037 = t10879*t11036;
  t11039 = t11031 + t11037;
  t10949 = t550*t10901*t10858;
  t10960 = t10880*t10959;
  t10962 = t10907*t10901*t10910;
  t10965 = t10960 + t10962;
  t10967 = t10879*t10965;
  t10969 = t10949 + t10967;
  t11045 = t10879*t11030;
  t11047 = -1.*t10858*t11036;
  t11049 = t11045 + t11047;
  t11056 = -1.*t10880*t10907*t10901;
  t11057 = t10959*t10910;
  t11060 = t11056 + t11057;
  t11022 = -1.*t550*t10880*t11020;
  t11061 = t11020*t11060;
  t11076 = -1.*t10907*t11030;
  t11080 = t550*t11030*t10901;
  t11041 = t10879*t10907;
  t11042 = t550*t10858*t10910;
  t11043 = t11041 + t11042;
  t10878 = t550*t10759*t10858;
  t10918 = t10879*t10915;
  t10920 = t10878 + t10918;
  t11064 = t550*t10879*t10901;
  t11066 = -1.*t10858*t10965;
  t11067 = t11064 + t11066;
  t11119 = t11020*t10927;
  t11124 = -1.*t11020*t11060;
  t11140 = -1.*t550*t11030*t10901;
  t11132 = t550*t11030*t10759;
  t11154 = t11018*t10901;
  t11147 = -1.*t11018*t10959;
  t11175 = t550*t10880*t11020;
  t11186 = -1.*t11020*t10927;
  t11195 = t10907*t11030;
  t11200 = -1.*t550*t11030*t10759;
  p_output1[0]=t10920;
  p_output1[1]=t10922*t10927 - 1.*t10937*t10940;
  p_output1[2]=t10927*t10937 + t10922*t10940;
  p_output1[3]=t10969*(t11022 - 1.*t11026*t11039 - 1.*t11043*t11049) + t11026*(t10969*t11039 + t11061 + t11049*t11067);
  p_output1[4]=t10880*(t10965*t11036 + t11061 + t11080)*t550 + t11060*(t11022 + t11076 + t10910*t11036*t550);
  p_output1[5]=t10907*(-1.*t10901*t10907*t11003 + t10959*t11018 + t11080) + t10901*t550*(t11076 - 1.*t11003*t550);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t10759 - 0.2255*t10959;
  p_output1[10]=-0.325*t10757 - 1.*t10757*t10997 - 1.*t10988*t7205;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t11026;
  p_output1[19]=-1.*t10937*t11043 + t10880*t10922*t550;
  p_output1[20]=t10922*t11043 + t10880*t10937*t550;
  p_output1[21]=t10969*(t10920*t11039 + t10940*t11049 + t11119) + t10920*(-1.*t10969*t11039 - 1.*t11049*t11067 + t11124);
  p_output1[22]=t11060*(t10915*t11036 + t11119 + t11132) + t10927*(-1.*t10965*t11036 + t11124 + t11140);
  p_output1[23]=t10759*(t10901*t10907*t11003 + t11140 + t11147)*t550 + t10901*(-1.*t10759*t10907*t11003 + t11132 + t11154)*t550;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t10901*(-1.*t10901*t11001 + t11147) + t10959*(t10759*t11001 + t11154);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t10969;
  p_output1[37]=t10922*t11060 - 1.*t10937*t11067;
  p_output1[38]=t10937*t11060 + t10922*t11067;
  p_output1[39]=t10920*(t11026*t11039 + t11043*t11049 + t11175) + t11026*(-1.*t10920*t11039 - 1.*t10940*t11049 + t11186);
  p_output1[40]=t10880*(-1.*t10915*t11036 + t11186 + t11200)*t550 + t10927*(t11175 + t11195 - 1.*t10910*t11036*t550);
  p_output1[41]=t10907*(t10759*t10907*t11003 - 1.*t10901*t11018 + t11200) + t10759*t550*(t11195 + t11003*t550);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t10901;
  p_output1[46]=-1.*t10757*t10988 + 0.325*t7205 + t10997*t7205;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
