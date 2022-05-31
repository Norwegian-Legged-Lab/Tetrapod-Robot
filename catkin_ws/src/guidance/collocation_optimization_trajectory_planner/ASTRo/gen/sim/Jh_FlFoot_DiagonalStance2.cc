/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:10 GMT+02:00
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
  double t8277;
  double t8015;
  double t8165;
  double t8303;
  double t14869;
  double t14882;
  double t14885;
  double t14861;
  double t14863;
  double t14969;
  double t14862;
  double t14970;
  double t7740;
  double t14994;
  double t14996;
  double t15001;
  double t8274;
  double t8308;
  double t14840;
  double t14892;
  double t14972;
  double t14973;
  double t15027;
  double t14979;
  double t14986;
  double t14991;
  double t15015;
  double t15002;
  double t15008;
  double t15012;
  double t15016;
  double t15017;
  double t15018;
  double t15029;
  double t15030;
  double t15031;
  double t15041;
  double t15046;
  double t15047;
  double t15051;
  double t15052;
  double t15053;
  double t15055;
  double t15056;
  double t15057;
  double t14993;
  double t15013;
  double t15014;
  double t15069;
  double t15070;
  double t15071;
  double t15072;
  double t15073;
  double t15074;
  double t15075;
  double t15076;
  double t15077;
  double t15078;
  double t15079;
  double t15080;
  double t15081;
  double t15082;
  double t15083;
  double t15084;
  double t15086;
  double t15087;
  double t15088;
  double t15089;
  double t15093;
  double t15094;
  double t15095;
  double t15096;
  double t15098;
  double t15099;
  double t15100;
  double t15085;
  double t15090;
  double t15091;
  double t15097;
  double t15101;
  double t15102;
  double t15104;
  double t15105;
  double t15106;
  double t14853;
  double t14974;
  double t14976;
  double t15092;
  double t15110;
  double t15116;
  double t15121;
  double t15127;
  double t15132;
  double t15146;
  double t15150;
  t8277 = Cos(var1[7]);
  t8015 = Cos(var1[8]);
  t8165 = Sin(var1[7]);
  t8303 = Sin(var1[8]);
  t14869 = t8277*t8015;
  t14882 = t8165*t8303;
  t14885 = t14869 + t14882;
  t14861 = Cos(var1[4]);
  t14863 = Cos(var1[6]);
  t14969 = Sin(var1[5]);
  t14862 = Cos(var1[5]);
  t14970 = Sin(var1[6]);
  t7740 = Sin(var1[4]);
  t14994 = t8015*t8165;
  t14996 = -1.*t8277*t8303;
  t15001 = t14994 + t14996;
  t8274 = -1.*t8015*t8165;
  t8308 = t8277*t8303;
  t14840 = t8274 + t8308;
  t14892 = t14862*t14863*t14885;
  t14972 = -1.*t14969*t14970*t14885;
  t14973 = t14892 + t14972;
  t15027 = Sin(var1[3]);
  t14979 = -1.*t14863*t14969;
  t14986 = -1.*t14862*t14970;
  t14991 = t14979 + t14986;
  t15015 = Cos(var1[3]);
  t15002 = t14862*t14863*t15001;
  t15008 = -1.*t14969*t14970*t15001;
  t15012 = t15002 + t15008;
  t15016 = t14863*t14969*t14885;
  t15017 = t14862*t14970*t14885;
  t15018 = t15016 + t15017;
  t15029 = t14861*t14840;
  t15030 = -1.*t7740*t14973;
  t15031 = t15029 + t15030;
  t15041 = t14862*t14863;
  t15046 = -1.*t14969*t14970;
  t15047 = t15041 + t15046;
  t15051 = t14863*t14969*t15001;
  t15052 = t14862*t14970*t15001;
  t15053 = t15051 + t15052;
  t15055 = t14861*t14885;
  t15056 = -1.*t7740*t15012;
  t15057 = t15055 + t15056;
  t14993 = t7740*t14885;
  t15013 = t14861*t15012;
  t15014 = t14993 + t15013;
  t15069 = -1.*t14863;
  t15070 = 1. + t15069;
  t15071 = 0.15121*t15070;
  t15072 = -1.*t8277;
  t15073 = 1. + t15072;
  t15074 = 0.28121*t15073;
  t15075 = -1.*t8015;
  t15076 = 1. + t15075;
  t15077 = 0.50321*t15076;
  t15078 = 0.23321*t8015;
  t15079 = t15077 + t15078;
  t15080 = t8277*t15079;
  t15081 = -0.27*t8165*t8303;
  t15082 = t15074 + t15080 + t15081;
  t15083 = t14863*t15082;
  t15084 = t15071 + t15083;
  t15086 = 0.15121*t14863;
  t15087 = -0.15121*t14970;
  t15088 = t14970*t15082;
  t15089 = t15071 + t15086 + t15087 + t15088;
  t15093 = 0.28121*t8165;
  t15094 = -1.*t15079*t8165;
  t15095 = -0.27*t8277*t8303;
  t15096 = t15093 + t15094 + t15095;
  t15098 = t14862*t15084;
  t15099 = -1.*t14969*t15089;
  t15100 = t15098 + t15099;
  t15085 = t14969*t15084;
  t15090 = t14862*t15089;
  t15091 = t15085 + t15090;
  t15097 = t7740*t15096;
  t15101 = t14861*t15100;
  t15102 = t15097 + t15101;
  t15104 = t14861*t15096;
  t15105 = -1.*t7740*t15100;
  t15106 = t15104 + t15105;
  t14853 = t7740*t14840;
  t14974 = t14861*t14973;
  t14976 = t14853 + t14974;
  t15092 = -1.*t15047*t15091;
  t15110 = t15053*t15091;
  t15116 = -1.*t15053*t15091;
  t15121 = t15018*t15091;
  t15127 = t15047*t15091;
  t15132 = -1.*t15018*t15091;
  t15146 = -1.*t15096*t14885;
  t15150 = t15096*t14840;
  p_output1[0]=t14976;
  p_output1[1]=t14861*t14991;
  p_output1[2]=t15014;
  p_output1[3]=t15015*t15018 - 1.*t15027*t15031;
  p_output1[4]=t15015*t15047 + t14991*t15027*t7740;
  p_output1[5]=t15015*t15053 - 1.*t15027*t15057;
  p_output1[6]=t15018*t15027 + t15015*t15031;
  p_output1[7]=t15027*t15047 - 1.*t14991*t15015*t7740;
  p_output1[8]=t15027*t15053 + t15015*t15057;
  p_output1[9]=t14861*t14991*(t15014*t15102 + t15057*t15106 + t15110) + t15014*(t15092 - 1.*t14861*t14991*t15102 + t14991*t15106*t7740);
  p_output1[10]=t14976*(-1.*t15014*t15102 - 1.*t15057*t15106 + t15116) + t15014*(t14976*t15102 + t15031*t15106 + t15121);
  p_output1[11]=t14861*t14991*(-1.*t14976*t15102 - 1.*t15031*t15106 + t15132) + t14976*(t14861*t14991*t15102 + t15127 - 1.*t14991*t15106*t7740);
  p_output1[12]=t15053*(t15092 - 1.*t14991*t15100) + t15047*(t14885*t15096 + t15012*t15100 + t15110);
  p_output1[13]=t15018*(-1.*t15012*t15100 + t15116 + t15146) + t15053*(t14973*t15100 + t15121 + t15150);
  p_output1[14]=t15018*(t14991*t15100 + t15127) + t15047*(-1.*t14840*t15096 - 1.*t14973*t15100 + t15132);
  p_output1[15]=t14885*(t14970*t15084 - 1.*t14863*t15089);
  p_output1[16]=t14840*(-1.*t14863*t15001*t15084 - 1.*t14970*t15001*t15089 + t15146) + t14885*(t14863*t14885*t15084 + t14885*t14970*t15089 + t15150);
  p_output1[17]=t14840*(-1.*t14970*t15084 + t14863*t15089);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t14840*(-1.*t15001*t15082 + t15146) + t14885*(t14885*t15082 + t15150);
  p_output1[20]=0.15121*t14840 + 0.15121*t15001;
  p_output1[21]=0.28121*t8303 - 1.*t15079*t8303 - 0.27*t8015*t8303;
  p_output1[22]=0;
  p_output1[23]=0.28121*t8015 - 1.*t15079*t8015 + 0.27*Power(t8303,2);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.27;
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
