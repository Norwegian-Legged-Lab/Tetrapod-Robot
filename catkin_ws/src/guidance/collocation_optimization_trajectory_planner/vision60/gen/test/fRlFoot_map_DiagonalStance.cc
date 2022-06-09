/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:25 GMT+02:00
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
  double t10329;
  double t10325;
  double t10327;
  double t10333;
  double t10328;
  double t27887;
  double t27909;
  double t27926;
  double t27934;
  double t27928;
  double t27930;
  double t27931;
  double t27935;
  double t10320;
  double t27921;
  double t27910;
  double t27933;
  double t27941;
  double t27942;
  double t27957;
  double t27946;
  double t27947;
  double t27955;
  double t27945;
  double t27958;
  double t27967;
  double t27973;
  double t28037;
  double t28039;
  double t28044;
  double t28047;
  double t28050;
  double t28051;
  double t28052;
  double t28055;
  double t28057;
  double t28036;
  double t28045;
  double t28058;
  double t28059;
  double t28066;
  double t28067;
  double t28068;
  double t28069;
  double t28070;
  double t28071;
  double t28031;
  double t28032;
  double t28034;
  double t28035;
  double t28062;
  double t28064;
  double t28090;
  double t28092;
  double t28094;
  double t28096;
  double t28097;
  double t28099;
  double t28083;
  double t28087;
  double t28088;
  double t28065;
  double t28074;
  double t28078;
  double t27980;
  double t27987;
  double t27998;
  double t28095;
  double t28101;
  double t28102;
  double t27979;
  double t28005;
  double t28006;
  double t28013;
  double t28028;
  double t28030;
  double t28108;
  double t28110;
  double t28111;
  double t28115;
  double t28116;
  double t28117;
  double t28079;
  double t28118;
  double t28133;
  double t28145;
  double t28104;
  double t28106;
  double t28107;
  double t27911;
  double t27943;
  double t27944;
  double t28121;
  double t28122;
  double t28124;
  double t28212;
  double t28221;
  double t28243;
  double t28239;
  double t28262;
  double t28253;
  double t28299;
  double t28307;
  double t28317;
  double t28327;
  t10329 = Cos(var1[10]);
  t10325 = Cos(var1[11]);
  t10327 = Sin(var1[10]);
  t10333 = Sin(var1[11]);
  t10328 = t10325*t10327;
  t27887 = -1.*t10329*t10333;
  t27909 = t10328 + t27887;
  t27926 = Cos(var1[5]);
  t27934 = Sin(var1[9]);
  t27928 = t10329*t10325;
  t27930 = t10327*t10333;
  t27931 = t27928 + t27930;
  t27935 = Sin(var1[5]);
  t10320 = Cos(var1[9]);
  t27921 = Cos(var1[4]);
  t27910 = Sin(var1[4]);
  t27933 = t27926*t27931;
  t27941 = t27934*t27909*t27935;
  t27942 = t27933 + t27941;
  t27957 = Sin(var1[3]);
  t27946 = -1.*t27926*t27934*t27909;
  t27947 = t27931*t27935;
  t27955 = t27946 + t27947;
  t27945 = Cos(var1[3]);
  t27958 = t10320*t27921*t27909;
  t27967 = -1.*t27910*t27942;
  t27973 = t27958 + t27967;
  t28037 = -0.0641*t10325;
  t28039 = -0.28*t10333;
  t28044 = t28037 + t28039;
  t28047 = -1.*t10325;
  t28050 = 1. + t28047;
  t28051 = -0.575*t28050;
  t28052 = -0.295*t10325;
  t28055 = -0.0641*t10333;
  t28057 = t28051 + t28052 + t28055;
  t28036 = 0.325*t10327;
  t28045 = t10329*t28044;
  t28058 = t10327*t28057;
  t28059 = t28036 + t28045 + t28058;
  t28066 = -1.*t10329;
  t28067 = 1. + t28066;
  t28068 = -0.325*t28067;
  t28069 = -1.*t10327*t28044;
  t28070 = t10329*t28057;
  t28071 = t28068 + t28069 + t28070;
  t28031 = -1.*t10320;
  t28032 = 1. + t28031;
  t28034 = 0.1575*t28032;
  t28035 = 0.2255*t10320;
  t28062 = -1.*t27934*t28059;
  t28064 = t28034 + t28035 + t28062;
  t28090 = 0.068*t27934;
  t28092 = t10320*t28059;
  t28094 = t28090 + t28092;
  t28096 = t27926*t28071;
  t28097 = -1.*t28064*t27935;
  t28099 = t28096 + t28097;
  t28083 = t27934*t27910;
  t28087 = -1.*t10320*t27921*t27935;
  t28088 = t28083 + t28087;
  t28065 = t27926*t28064;
  t28074 = t28071*t27935;
  t28078 = t28065 + t28074;
  t27980 = -1.*t10325*t10327;
  t27987 = t10329*t10333;
  t27998 = t27980 + t27987;
  t28095 = t28094*t27910;
  t28101 = t27921*t28099;
  t28102 = t28095 + t28101;
  t27979 = t10320*t27931*t27910;
  t28005 = t27926*t27998;
  t28006 = t27934*t27931*t27935;
  t28013 = t28005 + t28006;
  t28028 = t27921*t28013;
  t28030 = t27979 + t28028;
  t28108 = t27921*t28094;
  t28110 = -1.*t27910*t28099;
  t28111 = t28108 + t28110;
  t28115 = -1.*t27926*t27934*t27931;
  t28116 = t27998*t27935;
  t28117 = t28115 + t28116;
  t28079 = -1.*t10320*t27926*t28078;
  t28118 = t28078*t28117;
  t28133 = -1.*t27934*t28094;
  t28145 = t10320*t28094*t27931;
  t28104 = t27921*t27934;
  t28106 = t10320*t27910*t27935;
  t28107 = t28104 + t28106;
  t27911 = t10320*t27909*t27910;
  t27943 = t27921*t27942;
  t27944 = t27911 + t27943;
  t28121 = t10320*t27921*t27931;
  t28122 = -1.*t27910*t28013;
  t28124 = t28121 + t28122;
  t28212 = t28078*t27955;
  t28221 = -1.*t28078*t28117;
  t28243 = -1.*t10320*t28094*t27931;
  t28239 = t10320*t28094*t27909;
  t28262 = t28071*t27931;
  t28253 = -1.*t28071*t27998;
  t28299 = t10320*t27926*t28078;
  t28307 = -1.*t28078*t27955;
  t28317 = t27934*t28094;
  t28327 = -1.*t10320*t28094*t27909;
  p_output1[0]=t27944;
  p_output1[1]=t27945*t27955 - 1.*t27957*t27973;
  p_output1[2]=t27955*t27957 + t27945*t27973;
  p_output1[3]=t28030*(t28079 - 1.*t28088*t28102 - 1.*t28107*t28111) + t28088*(t28030*t28102 + t28118 + t28111*t28124);
  p_output1[4]=t28117*(t28079 + t10320*t27935*t28099 + t28133) + t10320*t27926*(t28013*t28099 + t28118 + t28145);
  p_output1[5]=t10320*t27931*(-1.*t10320*t28064 + t28133) + t27934*(-1.*t27931*t27934*t28064 + t27998*t28071 + t28145);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t27909 - 0.2255*t27998;
  p_output1[10]=-0.325*t10333 - 1.*t10325*t28044 - 1.*t10333*t28057;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t28088;
  p_output1[19]=t10320*t27926*t27945 - 1.*t27957*t28107;
  p_output1[20]=t10320*t27926*t27957 + t27945*t28107;
  p_output1[21]=t28030*(t27944*t28102 + t27973*t28111 + t28212) + t27944*(-1.*t28030*t28102 - 1.*t28111*t28124 + t28221);
  p_output1[22]=t28117*(t27942*t28099 + t28212 + t28239) + t27955*(-1.*t28013*t28099 + t28221 + t28243);
  p_output1[23]=t10320*t27909*(t27931*t27934*t28064 + t28243 + t28253) + t10320*t27931*(-1.*t27909*t27934*t28064 + t28239 + t28262);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t27931*(-1.*t27931*t28059 + t28253) + t27998*(t27909*t28059 + t28262);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t28030;
  p_output1[37]=t27945*t28117 - 1.*t27957*t28124;
  p_output1[38]=t27957*t28117 + t27945*t28124;
  p_output1[39]=t27944*(t28088*t28102 + t28107*t28111 + t28299) + t28088*(-1.*t27944*t28102 - 1.*t27973*t28111 + t28307);
  p_output1[40]=t27955*(-1.*t10320*t27935*t28099 + t28299 + t28317) + t10320*t27926*(-1.*t27942*t28099 + t28307 + t28327);
  p_output1[41]=t10320*t27909*(t10320*t28064 + t28317) + t27934*(t27909*t27934*t28064 - 1.*t27931*t28071 + t28327);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t27931;
  p_output1[46]=0.325*t10325 - 1.*t10333*t28044 + t10325*t28057;
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

#include "fRlFoot_map_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
