/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:50:03 GMT+02:00
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
  double t9962;
  double t5798;
  double t9867;
  double t9963;
  double t9907;
  double t9966;
  double t9972;
  double t9983;
  double t9996;
  double t9984;
  double t9986;
  double t9991;
  double t9998;
  double t5792;
  double t9979;
  double t9973;
  double t9995;
  double t9999;
  double t10001;
  double t10011;
  double t10005;
  double t10007;
  double t10008;
  double t10004;
  double t10012;
  double t10013;
  double t10014;
  double t10082;
  double t10083;
  double t10085;
  double t10087;
  double t10088;
  double t10090;
  double t10091;
  double t10092;
  double t10093;
  double t10081;
  double t10086;
  double t10094;
  double t10095;
  double t10100;
  double t10102;
  double t10103;
  double t10104;
  double t10105;
  double t10106;
  double t10076;
  double t10078;
  double t10079;
  double t10080;
  double t10096;
  double t10098;
  double t10115;
  double t10116;
  double t10118;
  double t10120;
  double t10122;
  double t10123;
  double t10112;
  double t10113;
  double t10114;
  double t10099;
  double t10108;
  double t10109;
  double t10067;
  double t10068;
  double t10069;
  double t10119;
  double t10124;
  double t10125;
  double t10066;
  double t10070;
  double t10071;
  double t10073;
  double t10074;
  double t10075;
  double t10130;
  double t10131;
  double t10132;
  double t10136;
  double t10137;
  double t10138;
  double t10110;
  double t10139;
  double t10149;
  double t10154;
  double t10127;
  double t10128;
  double t10129;
  double t9974;
  double t10002;
  double t10003;
  double t10141;
  double t10142;
  double t10143;
  double t10180;
  double t10185;
  double t10195;
  double t10191;
  double t10205;
  double t10200;
  double t10222;
  double t10227;
  double t10233;
  double t10237;
  t9962 = Cos(var1[13]);
  t5798 = Cos(var1[14]);
  t9867 = Sin(var1[13]);
  t9963 = Sin(var1[14]);
  t9907 = t5798*t9867;
  t9966 = -1.*t9962*t9963;
  t9972 = t9907 + t9966;
  t9983 = Cos(var1[5]);
  t9996 = Sin(var1[12]);
  t9984 = t9962*t5798;
  t9986 = t9867*t9963;
  t9991 = t9984 + t9986;
  t9998 = Sin(var1[5]);
  t5792 = Cos(var1[12]);
  t9979 = Cos(var1[4]);
  t9973 = Sin(var1[4]);
  t9995 = t9983*t9991;
  t9999 = t9996*t9972*t9998;
  t10001 = t9995 + t9999;
  t10011 = Sin(var1[3]);
  t10005 = -1.*t9983*t9996*t9972;
  t10007 = t9991*t9998;
  t10008 = t10005 + t10007;
  t10004 = Cos(var1[3]);
  t10012 = t5792*t9979*t9972;
  t10013 = -1.*t9973*t10001;
  t10014 = t10012 + t10013;
  t10082 = -0.0641*t5798;
  t10083 = -0.28*t9963;
  t10085 = t10082 + t10083;
  t10087 = -1.*t5798;
  t10088 = 1. + t10087;
  t10090 = 0.075*t10088;
  t10091 = 0.355*t5798;
  t10092 = -0.0641*t9963;
  t10093 = t10090 + t10091 + t10092;
  t10081 = -0.325*t9867;
  t10086 = t9962*t10085;
  t10094 = t9867*t10093;
  t10095 = t10081 + t10086 + t10094;
  t10100 = -1.*t9962;
  t10102 = 1. + t10100;
  t10103 = 0.325*t10102;
  t10104 = -1.*t9867*t10085;
  t10105 = t9962*t10093;
  t10106 = t10103 + t10104 + t10105;
  t10076 = -1.*t5792;
  t10078 = 1. + t10076;
  t10079 = -0.1575*t10078;
  t10080 = -0.2255*t5792;
  t10096 = -1.*t9996*t10095;
  t10098 = t10079 + t10080 + t10096;
  t10115 = -0.068*t9996;
  t10116 = t5792*t10095;
  t10118 = t10115 + t10116;
  t10120 = t9983*t10106;
  t10122 = -1.*t10098*t9998;
  t10123 = t10120 + t10122;
  t10112 = t9996*t9973;
  t10113 = -1.*t5792*t9979*t9998;
  t10114 = t10112 + t10113;
  t10099 = t9983*t10098;
  t10108 = t10106*t9998;
  t10109 = t10099 + t10108;
  t10067 = -1.*t5798*t9867;
  t10068 = t9962*t9963;
  t10069 = t10067 + t10068;
  t10119 = t10118*t9973;
  t10124 = t9979*t10123;
  t10125 = t10119 + t10124;
  t10066 = t5792*t9991*t9973;
  t10070 = t9983*t10069;
  t10071 = t9996*t9991*t9998;
  t10073 = t10070 + t10071;
  t10074 = t9979*t10073;
  t10075 = t10066 + t10074;
  t10130 = t9979*t10118;
  t10131 = -1.*t9973*t10123;
  t10132 = t10130 + t10131;
  t10136 = -1.*t9983*t9996*t9991;
  t10137 = t10069*t9998;
  t10138 = t10136 + t10137;
  t10110 = -1.*t5792*t9983*t10109;
  t10139 = t10109*t10138;
  t10149 = -1.*t9996*t10118;
  t10154 = t5792*t10118*t9991;
  t10127 = t9979*t9996;
  t10128 = t5792*t9973*t9998;
  t10129 = t10127 + t10128;
  t9974 = t5792*t9972*t9973;
  t10002 = t9979*t10001;
  t10003 = t9974 + t10002;
  t10141 = t5792*t9979*t9991;
  t10142 = -1.*t9973*t10073;
  t10143 = t10141 + t10142;
  t10180 = t10109*t10008;
  t10185 = -1.*t10109*t10138;
  t10195 = -1.*t5792*t10118*t9991;
  t10191 = t5792*t10118*t9972;
  t10205 = t10106*t9991;
  t10200 = -1.*t10106*t10069;
  t10222 = t5792*t9983*t10109;
  t10227 = -1.*t10109*t10008;
  t10233 = t9996*t10118;
  t10237 = -1.*t5792*t10118*t9972;
  p_output1[0]=t10003;
  p_output1[1]=t10004*t10008 - 1.*t10011*t10014;
  p_output1[2]=t10008*t10011 + t10004*t10014;
  p_output1[3]=t10075*(t10110 - 1.*t10114*t10125 - 1.*t10129*t10132) + t10114*(t10075*t10125 + t10139 + t10132*t10143);
  p_output1[4]=(t10073*t10123 + t10139 + t10154)*t5792*t9983 + t10138*(t10110 + t10149 + t10123*t5792*t9998);
  p_output1[5]=t5792*(t10149 - 1.*t10098*t5792)*t9991 + t9996*(t10069*t10106 + t10154 - 1.*t10098*t9991*t9996);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0.2255*t10069 + 0.1575*t9972;
  p_output1[13]=-1.*t10085*t5798 + 0.325*t9963 - 1.*t10093*t9963;
  p_output1[14]=-0.0641;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t10114;
  p_output1[19]=-1.*t10011*t10129 + t10004*t5792*t9983;
  p_output1[20]=t10004*t10129 + t10011*t5792*t9983;
  p_output1[21]=t10075*(t10003*t10125 + t10014*t10132 + t10180) + t10003*(-1.*t10075*t10125 - 1.*t10132*t10143 + t10185);
  p_output1[22]=t10138*(t10001*t10123 + t10180 + t10191) + t10008*(-1.*t10073*t10123 + t10185 + t10195);
  p_output1[23]=t5792*t9991*(t10191 + t10205 - 1.*t10098*t9972*t9996) + t5792*t9972*(t10195 + t10200 + t10098*t9991*t9996);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=t10069*(t10205 + t10095*t9972) + t9991*(t10200 - 1.*t10095*t9991);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t10075;
  p_output1[37]=t10004*t10138 - 1.*t10011*t10143;
  p_output1[38]=t10011*t10138 + t10004*t10143;
  p_output1[39]=t10003*(t10114*t10125 + t10129*t10132 + t10222) + t10114*(-1.*t10003*t10125 - 1.*t10014*t10132 + t10227);
  p_output1[40]=(-1.*t10001*t10123 + t10227 + t10237)*t5792*t9983 + t10008*(t10222 + t10233 - 1.*t10123*t5792*t9998);
  p_output1[41]=t5792*(t10233 + t10098*t5792)*t9972 + t9996*(t10237 - 1.*t10106*t9991 + t10098*t9972*t9996);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.068*t9991;
  p_output1[49]=-0.325*t5798 + t10093*t5798 - 1.*t10085*t9963;
  p_output1[50]=-0.28;
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

#include "fFrFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
