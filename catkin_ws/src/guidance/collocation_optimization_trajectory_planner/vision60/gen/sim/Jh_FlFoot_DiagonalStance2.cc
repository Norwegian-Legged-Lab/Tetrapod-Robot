/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:01 GMT+02:00
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
  double t22619;
  double t22655;
  double t22673;
  double t22675;
  double t22676;
  double t22678;
  double t22681;
  double t22722;
  double t9546;
  double t22823;
  double t17955;
  double t22824;
  double t22827;
  double t22829;
  double t22832;
  double t22826;
  double t22825;
  double t22833;
  double t22834;
  double t22900;
  double t22920;
  double t22862;
  double t22863;
  double t22864;
  double t22872;
  double t22886;
  double t22896;
  double t22901;
  double t22902;
  double t22910;
  double t22931;
  double t22936;
  double t22951;
  double t22984;
  double t22988;
  double t22989;
  double t23017;
  double t23019;
  double t23021;
  double t23025;
  double t23027;
  double t23028;
  double t23052;
  double t23053;
  double t23055;
  double t23057;
  double t23058;
  double t23059;
  double t23060;
  double t23061;
  double t23062;
  double t23051;
  double t23056;
  double t23063;
  double t23064;
  double t22850;
  double t22857;
  double t22860;
  double t23044;
  double t23046;
  double t23047;
  double t23049;
  double t23065;
  double t23066;
  double t23067;
  double t23068;
  double t23069;
  double t23070;
  double t23071;
  double t23072;
  double t23074;
  double t23076;
  double t23078;
  double t23080;
  double t23081;
  double t23082;
  double t22861;
  double t22898;
  double t22899;
  double t23090;
  double t23091;
  double t23092;
  double t23086;
  double t23087;
  double t23088;
  double t23079;
  double t23083;
  double t23084;
  double t22708;
  double t22836;
  double t22839;
  double t23093;
  double t23100;
  double t23109;
  double t23118;
  double t23138;
  double t23151;
  double t23171;
  double t23174;
  double t23201;
  double t23197;
  double t23217;
  double t23221;
  double t23249;
  double t23240;
  t22619 = Cos(var1[8]);
  t22655 = Sin(var1[7]);
  t22673 = t22619*t22655;
  t22675 = Cos(var1[7]);
  t22676 = Sin(var1[8]);
  t22678 = -1.*t22675*t22676;
  t22681 = t22673 + t22678;
  t22722 = Cos(var1[4]);
  t9546 = Cos(var1[6]);
  t22823 = Sin(var1[5]);
  t17955 = Sin(var1[4]);
  t22824 = Sin(var1[6]);
  t22827 = t22675*t22619;
  t22829 = t22655*t22676;
  t22832 = t22827 + t22829;
  t22826 = Cos(var1[5]);
  t22825 = t22823*t22824*t22681;
  t22833 = t22826*t22832;
  t22834 = t22825 + t22833;
  t22900 = Cos(var1[3]);
  t22920 = Sin(var1[3]);
  t22862 = -1.*t22619*t22655;
  t22863 = t22675*t22676;
  t22864 = t22862 + t22863;
  t22872 = t22826*t22864;
  t22886 = t22823*t22824*t22832;
  t22896 = t22872 + t22886;
  t22901 = -1.*t22826*t22824*t22681;
  t22902 = t22823*t22832;
  t22910 = t22901 + t22902;
  t22931 = t22722*t9546*t22681;
  t22936 = -1.*t17955*t22834;
  t22951 = t22931 + t22936;
  t22984 = t9546*t17955*t22823;
  t22988 = t22722*t22824;
  t22989 = t22984 + t22988;
  t23017 = t22823*t22864;
  t23019 = -1.*t22826*t22824*t22832;
  t23021 = t23017 + t23019;
  t23025 = t22722*t9546*t22832;
  t23027 = -1.*t17955*t22896;
  t23028 = t23025 + t23027;
  t23052 = -0.0641*t22619;
  t23053 = -0.28*t22676;
  t23055 = t23052 + t23053;
  t23057 = -1.*t22619;
  t23058 = 1. + t23057;
  t23059 = 0.075*t23058;
  t23060 = 0.355*t22619;
  t23061 = -0.0641*t22676;
  t23062 = t23059 + t23060 + t23061;
  t23051 = -0.325*t22655;
  t23056 = t22675*t23055;
  t23063 = t22655*t23062;
  t23064 = t23051 + t23056 + t23063;
  t22850 = -1.*t22722*t9546*t22823;
  t22857 = t17955*t22824;
  t22860 = t22850 + t22857;
  t23044 = -1.*t9546;
  t23046 = 1. + t23044;
  t23047 = 0.1575*t23046;
  t23049 = 0.2255*t9546;
  t23065 = -1.*t22824*t23064;
  t23066 = t23047 + t23049 + t23065;
  t23067 = -1.*t22823*t23066;
  t23068 = -1.*t22675;
  t23069 = 1. + t23068;
  t23070 = 0.325*t23069;
  t23071 = -1.*t22655*t23055;
  t23072 = t22675*t23062;
  t23074 = t23070 + t23071 + t23072;
  t23076 = t22826*t23074;
  t23078 = t23067 + t23076;
  t23080 = 0.068*t22824;
  t23081 = t9546*t23064;
  t23082 = t23080 + t23081;
  t22861 = t9546*t17955*t22832;
  t22898 = t22722*t22896;
  t22899 = t22861 + t22898;
  t23090 = t22826*t23066;
  t23091 = t22823*t23074;
  t23092 = t23090 + t23091;
  t23086 = t22722*t23078;
  t23087 = t17955*t23082;
  t23088 = t23086 + t23087;
  t23079 = -1.*t17955*t23078;
  t23083 = t22722*t23082;
  t23084 = t23079 + t23083;
  t22708 = t9546*t17955*t22681;
  t22836 = t22722*t22834;
  t22839 = t22708 + t22836;
  t23093 = -1.*t22826*t9546*t23092;
  t23100 = t23092*t23021;
  t23109 = t23092*t22910;
  t23118 = -1.*t23092*t23021;
  t23138 = t22826*t9546*t23092;
  t23151 = -1.*t23092*t22910;
  t23171 = -1.*t22824*t23082;
  t23174 = t9546*t23082*t22832;
  t23201 = -1.*t9546*t23082*t22832;
  t23197 = t9546*t23082*t22681;
  t23217 = t22824*t23082;
  t23221 = -1.*t9546*t23082*t22681;
  t23249 = t23074*t22832;
  t23240 = -1.*t23074*t22864;
  p_output1[0]=t22839;
  p_output1[1]=t22860;
  p_output1[2]=t22899;
  p_output1[3]=t22900*t22910 - 1.*t22920*t22951;
  p_output1[4]=-1.*t22920*t22989 + t22826*t22900*t9546;
  p_output1[5]=t22900*t23021 - 1.*t22920*t23028;
  p_output1[6]=t22910*t22920 + t22900*t22951;
  p_output1[7]=t22900*t22989 + t22826*t22920*t9546;
  p_output1[8]=t22920*t23021 + t22900*t23028;
  p_output1[9]=t22899*(-1.*t22989*t23084 - 1.*t22860*t23088 + t23093) + t22860*(t23028*t23084 + t22899*t23088 + t23100);
  p_output1[10]=t22899*(t22951*t23084 + t22839*t23088 + t23109) + t22839*(-1.*t23028*t23084 - 1.*t22899*t23088 + t23118);
  p_output1[11]=t22839*(t22989*t23084 + t22860*t23088 + t23138) + t22860*(-1.*t22951*t23084 - 1.*t22839*t23088 + t23151);
  p_output1[12]=t22826*(t22896*t23078 + t23100 + t23174)*t9546 + t23021*(t23093 + t23171 + t22823*t23078*t9546);
  p_output1[13]=t23021*(t22834*t23078 + t23109 + t23197) + t22910*(-1.*t22896*t23078 + t23118 + t23201);
  p_output1[14]=t22826*(-1.*t22834*t23078 + t23151 + t23221)*t9546 + t22910*(t23138 + t23217 - 1.*t22823*t23078*t9546);
  p_output1[15]=t22824*(-1.*t22824*t22832*t23066 + t22864*t23074 + t23174) + t22832*t9546*(t23171 - 1.*t23066*t9546);
  p_output1[16]=t22681*(t22824*t22832*t23066 + t23201 + t23240)*t9546 + t22832*(-1.*t22681*t22824*t23066 + t23197 + t23249)*t9546;
  p_output1[17]=t22824*(t22681*t22824*t23066 - 1.*t22832*t23074 + t23221) + t22681*t9546*(t23217 + t23066*t9546);
  p_output1[18]=-0.1575*t22681 - 0.2255*t22864;
  p_output1[19]=t22832*(-1.*t22832*t23064 + t23240) + t22864*(t22681*t23064 + t23249);
  p_output1[20]=0.068*t22832;
  p_output1[21]=0.325*t22676 - 1.*t22619*t23055 - 1.*t22676*t23062;
  p_output1[22]=0;
  p_output1[23]=-0.325*t22619 - 1.*t22676*t23055 + t22619*t23062;
  p_output1[24]=-0.0641;
  p_output1[25]=0;
  p_output1[26]=-0.28;
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
