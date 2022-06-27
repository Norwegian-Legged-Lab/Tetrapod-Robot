/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:14 GMT+02:00
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
  double t17067;
  double t3703;
  double t15928;
  double t19786;
  double t19994;
  double t19995;
  double t20004;
  double t19993;
  double t20017;
  double t19986;
  double t20018;
  double t19825;
  double t17054;
  double t19797;
  double t19798;
  double t19799;
  double t20015;
  double t20019;
  double t20020;
  double t20028;
  double t20024;
  double t20025;
  double t20026;
  double t20023;
  double t20029;
  double t20030;
  double t20031;
  double t20053;
  double t20054;
  double t20060;
  double t20062;
  double t20063;
  double t20064;
  double t20065;
  double t20066;
  double t20067;
  double t20068;
  double t20069;
  double t20070;
  double t20071;
  double t20076;
  double t20077;
  double t20078;
  double t20055;
  double t20057;
  double t20059;
  double t20072;
  double t20073;
  double t20083;
  double t20084;
  double t20085;
  double t20086;
  double t20087;
  double t20088;
  double t20089;
  double t20092;
  double t20093;
  double t20094;
  double t20074;
  double t20080;
  double t20081;
  double t20037;
  double t20038;
  double t20039;
  double t20040;
  double t20041;
  double t20042;
  double t20044;
  double t20045;
  double t20046;
  double t20091;
  double t20112;
  double t20116;
  double t20121;
  double t20122;
  double t20123;
  double t20138;
  double t20139;
  double t20140;
  double t20048;
  double t20050;
  double t20052;
  double t20082;
  double t20141;
  double t19818;
  double t20021;
  double t20022;
  double t20146;
  double t20147;
  double t20148;
  double t20194;
  double t20202;
  double t20211;
  double t20217;
  double t20248;
  double t20254;
  t17067 = Cos(var1[10]);
  t3703 = Cos(var1[11]);
  t15928 = Sin(var1[10]);
  t19786 = Sin(var1[11]);
  t19994 = -1.*t17067*t3703;
  t19995 = -1.*t15928*t19786;
  t20004 = t19994 + t19995;
  t19993 = Cos(var1[5]);
  t20017 = Sin(var1[9]);
  t19986 = Cos(var1[9]);
  t20018 = Sin(var1[5]);
  t19825 = Cos(var1[4]);
  t17054 = -1.*t3703*t15928;
  t19797 = t17067*t19786;
  t19798 = t17054 + t19797;
  t19799 = Sin(var1[4]);
  t20015 = t19986*t19993*t20004;
  t20019 = -1.*t20017*t20004*t20018;
  t20020 = t20015 + t20019;
  t20028 = Sin(var1[3]);
  t20024 = t19993*t20017*t20004;
  t20025 = t19986*t20004*t20018;
  t20026 = t20024 + t20025;
  t20023 = Cos(var1[3]);
  t20029 = t19825*t19798;
  t20030 = -1.*t19799*t20020;
  t20031 = t20029 + t20030;
  t20053 = -1.*t19986;
  t20054 = 1. + t20053;
  t20060 = -1.*t17067;
  t20062 = 1. + t20060;
  t20063 = -0.28121*t20062;
  t20064 = -1.*t3703;
  t20065 = 1. + t20064;
  t20066 = -0.50321*t20065;
  t20067 = -0.19821*t3703;
  t20068 = t20066 + t20067;
  t20069 = t17067*t20068;
  t20070 = 0.305*t15928*t19786;
  t20071 = t20063 + t20069 + t20070;
  t20076 = -0.15121*t20054;
  t20077 = t19986*t20071;
  t20078 = t20076 + t20077;
  t20055 = 0.15121*t20054;
  t20057 = 0.15121*t19986;
  t20059 = 0.15121*t20017;
  t20072 = t20017*t20071;
  t20073 = t20055 + t20057 + t20059 + t20072;
  t20083 = t19993*t20017;
  t20084 = t19986*t20018;
  t20085 = t20083 + t20084;
  t20086 = 0.28121*t15928;
  t20087 = t20068*t15928;
  t20088 = -0.305*t17067*t19786;
  t20089 = t20086 + t20087 + t20088;
  t20092 = t19993*t20078;
  t20093 = -1.*t20073*t20018;
  t20094 = t20092 + t20093;
  t20074 = t19993*t20073;
  t20080 = t20078*t20018;
  t20081 = t20074 + t20080;
  t20037 = t17067*t3703;
  t20038 = t15928*t19786;
  t20039 = t20037 + t20038;
  t20040 = t20039*t19799;
  t20041 = t19986*t19993*t19798;
  t20042 = -1.*t20017*t19798*t20018;
  t20044 = t20041 + t20042;
  t20045 = t19825*t20044;
  t20046 = t20040 + t20045;
  t20091 = t20089*t19799;
  t20112 = t19825*t20094;
  t20116 = t20091 + t20112;
  t20121 = t19825*t20089;
  t20122 = -1.*t19799*t20094;
  t20123 = t20121 + t20122;
  t20138 = t19993*t20017*t19798;
  t20139 = t19986*t19798*t20018;
  t20140 = t20138 + t20139;
  t20048 = -1.*t19986*t19993;
  t20050 = t20017*t20018;
  t20052 = t20048 + t20050;
  t20082 = -1.*t20052*t20081;
  t20141 = t20140*t20081;
  t19818 = t19798*t19799;
  t20021 = t19825*t20020;
  t20022 = t19818 + t20021;
  t20146 = t19825*t20039;
  t20147 = -1.*t19799*t20044;
  t20148 = t20146 + t20147;
  t20194 = -1.*t20140*t20081;
  t20202 = t20026*t20081;
  t20211 = -1.*t20089*t20039;
  t20217 = t20089*t19798;
  t20248 = t20052*t20081;
  t20254 = -1.*t20026*t20081;
  p_output1[0]=t20022;
  p_output1[1]=t20023*t20026 - 1.*t20028*t20031;
  p_output1[2]=t20026*t20028 + t20023*t20031;
  p_output1[3]=t20046*(t20082 - 1.*t19825*t20085*t20116 + t19799*t20085*t20123) + t19825*t20085*(t20046*t20116 + t20141 + t20123*t20148);
  p_output1[4]=(t20082 - 1.*t20085*t20094)*t20140 + t20052*(t20039*t20089 + t20044*t20094 + t20141);
  p_output1[5]=t20039*(t19986*t20073 - 1.*t20017*t20078);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.15121*t20004 + 0.15121*t20039;
  p_output1[10]=0.28121*t19786 + t19786*t20068 - 0.305*t19786*t3703;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t19825*t20085;
  p_output1[19]=t20023*t20052 + t19799*t20028*t20085;
  p_output1[20]=t20028*t20052 - 1.*t19799*t20023*t20085;
  p_output1[21]=t20022*(-1.*t20046*t20116 - 1.*t20123*t20148 + t20194) + t20046*(t20022*t20116 + t20031*t20123 + t20202);
  p_output1[22]=t20026*(-1.*t20044*t20094 + t20194 + t20211) + t20140*(t20020*t20094 + t20202 + t20217);
  p_output1[23]=t19798*(-1.*t19798*t20017*t20073 - 1.*t19798*t19986*t20078 + t20211) + t20039*(t20004*t20017*t20073 + t19986*t20004*t20078 + t20217);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.15121 + t19798*(-1.*t19798*t20071 + t20211) + t20039*(t20004*t20071 + t20217);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t20046;
  p_output1[37]=t20023*t20140 - 1.*t20028*t20148;
  p_output1[38]=t20028*t20140 + t20023*t20148;
  p_output1[39]=t20022*(t19825*t20085*t20116 - 1.*t19799*t20085*t20123 + t20248) + t19825*t20085*(-1.*t20022*t20116 - 1.*t20031*t20123 + t20254);
  p_output1[40]=t20026*(t20085*t20094 + t20248) + t20052*(-1.*t19798*t20089 - 1.*t20020*t20094 + t20254);
  p_output1[41]=t19798*(-1.*t19986*t20073 + t20017*t20078);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0.305*Power(t19786,2) + 0.28121*t3703 + t20068*t3703;
  p_output1[47]=-0.305;
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

#include "fRlFoot_map_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_map_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
