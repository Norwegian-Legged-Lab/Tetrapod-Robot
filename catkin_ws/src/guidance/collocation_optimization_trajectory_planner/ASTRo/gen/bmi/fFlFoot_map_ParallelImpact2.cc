/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:25 GMT+02:00
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
  double t8931;
  double t2991;
  double t8778;
  double t8932;
  double t8954;
  double t8955;
  double t8960;
  double t8952;
  double t8965;
  double t8948;
  double t8966;
  double t8943;
  double t8878;
  double t8935;
  double t8940;
  double t2791;
  double t8964;
  double t8967;
  double t8968;
  double t8976;
  double t8972;
  double t8973;
  double t8974;
  double t8971;
  double t8977;
  double t8978;
  double t8979;
  double t9026;
  double t9027;
  double t9028;
  double t9039;
  double t9040;
  double t9041;
  double t9042;
  double t9044;
  double t9045;
  double t9046;
  double t9047;
  double t9049;
  double t9050;
  double t9051;
  double t9052;
  double t9053;
  double t9054;
  double t9055;
  double t9056;
  double t9058;
  double t9059;
  double t9060;
  double t9061;
  double t9065;
  double t9066;
  double t9067;
  double t9068;
  double t9069;
  double t9070;
  double t9071;
  double t9073;
  double t9075;
  double t9076;
  double t9057;
  double t9062;
  double t9063;
  double t9025;
  double t9029;
  double t9030;
  double t9032;
  double t9033;
  double t9034;
  double t9072;
  double t9077;
  double t9079;
  double t9081;
  double t9082;
  double t9083;
  double t9087;
  double t9088;
  double t9089;
  double t9035;
  double t9037;
  double t9038;
  double t9064;
  double t9090;
  double t8942;
  double t8969;
  double t8970;
  double t9092;
  double t9093;
  double t9094;
  double t9122;
  double t9127;
  double t9133;
  double t9137;
  double t9164;
  double t9169;
  t8931 = Cos(var1[7]);
  t2991 = Cos(var1[8]);
  t8778 = Sin(var1[7]);
  t8932 = Sin(var1[8]);
  t8954 = t8931*t2991;
  t8955 = t8778*t8932;
  t8960 = t8954 + t8955;
  t8952 = Cos(var1[6]);
  t8965 = Sin(var1[5]);
  t8948 = Cos(var1[5]);
  t8966 = Sin(var1[6]);
  t8943 = Cos(var1[4]);
  t8878 = -1.*t2991*t8778;
  t8935 = t8931*t8932;
  t8940 = t8878 + t8935;
  t2791 = Sin(var1[4]);
  t8964 = t8948*t8952*t8960;
  t8967 = -1.*t8965*t8966*t8960;
  t8968 = t8964 + t8967;
  t8976 = Sin(var1[3]);
  t8972 = t8952*t8965*t8960;
  t8973 = t8948*t8966*t8960;
  t8974 = t8972 + t8973;
  t8971 = Cos(var1[3]);
  t8977 = t8943*t8940;
  t8978 = -1.*t2791*t8968;
  t8979 = t8977 + t8978;
  t9026 = t2991*t8778;
  t9027 = -1.*t8931*t8932;
  t9028 = t9026 + t9027;
  t9039 = -1.*t8952;
  t9040 = 1. + t9039;
  t9041 = 0.15121*t9040;
  t9042 = -1.*t8931;
  t9044 = 1. + t9042;
  t9045 = 0.28121*t9044;
  t9046 = -1.*t2991;
  t9047 = 1. + t9046;
  t9049 = 0.50321*t9047;
  t9050 = 0.19821*t2991;
  t9051 = t9049 + t9050;
  t9052 = t8931*t9051;
  t9053 = -0.305*t8778*t8932;
  t9054 = t9045 + t9052 + t9053;
  t9055 = t8952*t9054;
  t9056 = t9041 + t9055;
  t9058 = 0.15121*t8952;
  t9059 = -0.15121*t8966;
  t9060 = t8966*t9054;
  t9061 = t9041 + t9058 + t9059 + t9060;
  t9065 = -1.*t8952*t8965;
  t9066 = -1.*t8948*t8966;
  t9067 = t9065 + t9066;
  t9068 = 0.28121*t8778;
  t9069 = -1.*t9051*t8778;
  t9070 = -0.305*t8931*t8932;
  t9071 = t9068 + t9069 + t9070;
  t9073 = t8948*t9056;
  t9075 = -1.*t8965*t9061;
  t9076 = t9073 + t9075;
  t9057 = t8965*t9056;
  t9062 = t8948*t9061;
  t9063 = t9057 + t9062;
  t9025 = t2791*t8960;
  t9029 = t8948*t8952*t9028;
  t9030 = -1.*t8965*t8966*t9028;
  t9032 = t9029 + t9030;
  t9033 = t8943*t9032;
  t9034 = t9025 + t9033;
  t9072 = t2791*t9071;
  t9077 = t8943*t9076;
  t9079 = t9072 + t9077;
  t9081 = t8943*t9071;
  t9082 = -1.*t2791*t9076;
  t9083 = t9081 + t9082;
  t9087 = t8952*t8965*t9028;
  t9088 = t8948*t8966*t9028;
  t9089 = t9087 + t9088;
  t9035 = t8948*t8952;
  t9037 = -1.*t8965*t8966;
  t9038 = t9035 + t9037;
  t9064 = -1.*t9038*t9063;
  t9090 = t9089*t9063;
  t8942 = t2791*t8940;
  t8969 = t8943*t8968;
  t8970 = t8942 + t8969;
  t9092 = t8943*t8960;
  t9093 = -1.*t2791*t9032;
  t9094 = t9092 + t9093;
  t9122 = -1.*t9089*t9063;
  t9127 = t8974*t9063;
  t9133 = -1.*t9071*t8960;
  t9137 = t9071*t8940;
  t9164 = t9038*t9063;
  t9169 = -1.*t8974*t9063;
  p_output1[0]=t8970;
  p_output1[1]=t8971*t8974 - 1.*t8976*t8979;
  p_output1[2]=t8974*t8976 + t8971*t8979;
  p_output1[3]=t9034*(t9064 - 1.*t8943*t9067*t9079 + t2791*t9067*t9083) + t8943*t9067*(t9034*t9079 + t9090 + t9083*t9094);
  p_output1[4]=(t9064 - 1.*t9067*t9076)*t9089 + t9038*(t8960*t9071 + t9032*t9076 + t9090);
  p_output1[5]=t8960*(t8966*t9056 - 1.*t8952*t9061);
  p_output1[6]=0;
  p_output1[7]=0.28121*t8932 - 0.305*t2991*t8932 - 1.*t8932*t9051;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t8943*t9067;
  p_output1[19]=t8971*t9038 + t2791*t8976*t9067;
  p_output1[20]=t8976*t9038 - 1.*t2791*t8971*t9067;
  p_output1[21]=t8970*(-1.*t9034*t9079 - 1.*t9083*t9094 + t9122) + t9034*(t8970*t9079 + t8979*t9083 + t9127);
  p_output1[22]=t8974*(-1.*t9032*t9076 + t9122 + t9133) + t9089*(t8968*t9076 + t9127 + t9137);
  p_output1[23]=t8940*(-1.*t8952*t9028*t9056 - 1.*t8966*t9028*t9061 + t9133) + t8960*(t8952*t8960*t9056 + t8960*t8966*t9061 + t9137);
  p_output1[24]=-0.15121 + t8940*(-1.*t9028*t9054 + t9133) + t8960*(t8960*t9054 + t9137);
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
  p_output1[36]=t9034;
  p_output1[37]=t8971*t9089 - 1.*t8976*t9094;
  p_output1[38]=t8976*t9089 + t8971*t9094;
  p_output1[39]=t8970*(t8943*t9067*t9079 - 1.*t2791*t9067*t9083 + t9164) + t8943*t9067*(-1.*t8970*t9079 - 1.*t8979*t9083 + t9169);
  p_output1[40]=t8974*(t9067*t9076 + t9164) + t9038*(-1.*t8940*t9071 - 1.*t8968*t9076 + t9169);
  p_output1[41]=t8940*(-1.*t8966*t9056 + t8952*t9061);
  p_output1[42]=0.15121*t8940 + 0.15121*t9028;
  p_output1[43]=0.28121*t2991 + 0.305*Power(t8932,2) - 1.*t2991*t9051;
  p_output1[44]=-0.305;
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

#include "fFlFoot_map_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_map_ParallelImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
