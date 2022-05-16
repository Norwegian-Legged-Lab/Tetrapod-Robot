/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:59 GMT+02:00
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
  double t38837;
  double t27181;
  double t27597;
  double t45286;
  double t54950;
  double t54957;
  double t54961;
  double t54945;
  double t54964;
  double t54903;
  double t54970;
  double t54897;
  double t32737;
  double t54562;
  double t54870;
  double t54893;
  double t54963;
  double t54974;
  double t54976;
  double t54985;
  double t54981;
  double t54982;
  double t54983;
  double t54979;
  double t54986;
  double t54987;
  double t54988;
  double t55040;
  double t55041;
  double t55043;
  double t55053;
  double t55055;
  double t55060;
  double t55061;
  double t55063;
  double t55064;
  double t55065;
  double t55066;
  double t55068;
  double t55069;
  double t55070;
  double t55071;
  double t55072;
  double t55076;
  double t55077;
  double t55078;
  double t55056;
  double t55058;
  double t55059;
  double t55073;
  double t55074;
  double t55082;
  double t55083;
  double t55084;
  double t55085;
  double t55086;
  double t55087;
  double t55088;
  double t55091;
  double t55092;
  double t55093;
  double t55075;
  double t55079;
  double t55080;
  double t55039;
  double t55044;
  double t55045;
  double t55046;
  double t55047;
  double t55048;
  double t55090;
  double t55095;
  double t55096;
  double t55099;
  double t55100;
  double t55101;
  double t55105;
  double t55106;
  double t55107;
  double t55050;
  double t55051;
  double t55052;
  double t55081;
  double t55108;
  double t54895;
  double t54977;
  double t54978;
  double t55110;
  double t55111;
  double t55112;
  double t55141;
  double t55146;
  double t55152;
  double t55156;
  double t55185;
  double t55190;
  t38837 = Cos(var1[13]);
  t27181 = Cos(var1[14]);
  t27597 = Sin(var1[13]);
  t45286 = Sin(var1[14]);
  t54950 = t38837*t27181;
  t54957 = t27597*t45286;
  t54961 = t54950 + t54957;
  t54945 = Cos(var1[5]);
  t54964 = Sin(var1[12]);
  t54903 = Cos(var1[12]);
  t54970 = Sin(var1[5]);
  t54897 = Cos(var1[4]);
  t32737 = -1.*t27181*t27597;
  t54562 = t38837*t45286;
  t54870 = t32737 + t54562;
  t54893 = Sin(var1[4]);
  t54963 = t54903*t54945*t54961;
  t54974 = -1.*t54964*t54961*t54970;
  t54976 = t54963 + t54974;
  t54985 = Sin(var1[3]);
  t54981 = t54945*t54964*t54961;
  t54982 = t54903*t54961*t54970;
  t54983 = t54981 + t54982;
  t54979 = Cos(var1[3]);
  t54986 = t54897*t54870;
  t54987 = -1.*t54893*t54976;
  t54988 = t54986 + t54987;
  t55040 = t27181*t27597;
  t55041 = -1.*t38837*t45286;
  t55043 = t55040 + t55041;
  t55053 = -1.*t54903;
  t55055 = 1. + t55053;
  t55060 = -1.*t38837;
  t55061 = 1. + t55060;
  t55063 = 0.28121*t55061;
  t55064 = -1.*t27181;
  t55065 = 1. + t55064;
  t55066 = 0.50321*t55065;
  t55068 = 0.23321*t27181;
  t55069 = t55066 + t55068;
  t55070 = t38837*t55069;
  t55071 = -0.27*t27597*t45286;
  t55072 = t55063 + t55070 + t55071;
  t55076 = 0.15121*t55055;
  t55077 = t54903*t55072;
  t55078 = t55076 + t55077;
  t55056 = -0.15121*t55055;
  t55058 = -0.15121*t54903;
  t55059 = -0.15121*t54964;
  t55073 = t54964*t55072;
  t55074 = t55056 + t55058 + t55059 + t55073;
  t55082 = -1.*t54945*t54964;
  t55083 = -1.*t54903*t54970;
  t55084 = t55082 + t55083;
  t55085 = 0.28121*t27597;
  t55086 = -1.*t55069*t27597;
  t55087 = -0.27*t38837*t45286;
  t55088 = t55085 + t55086 + t55087;
  t55091 = t54945*t55078;
  t55092 = -1.*t55074*t54970;
  t55093 = t55091 + t55092;
  t55075 = t54945*t55074;
  t55079 = t55078*t54970;
  t55080 = t55075 + t55079;
  t55039 = t54961*t54893;
  t55044 = t54903*t54945*t55043;
  t55045 = -1.*t54964*t55043*t54970;
  t55046 = t55044 + t55045;
  t55047 = t54897*t55046;
  t55048 = t55039 + t55047;
  t55090 = t55088*t54893;
  t55095 = t54897*t55093;
  t55096 = t55090 + t55095;
  t55099 = t54897*t55088;
  t55100 = -1.*t54893*t55093;
  t55101 = t55099 + t55100;
  t55105 = t54945*t54964*t55043;
  t55106 = t54903*t55043*t54970;
  t55107 = t55105 + t55106;
  t55050 = t54903*t54945;
  t55051 = -1.*t54964*t54970;
  t55052 = t55050 + t55051;
  t55081 = -1.*t55052*t55080;
  t55108 = t55107*t55080;
  t54895 = t54870*t54893;
  t54977 = t54897*t54976;
  t54978 = t54895 + t54977;
  t55110 = t54897*t54961;
  t55111 = -1.*t54893*t55046;
  t55112 = t55110 + t55111;
  t55141 = -1.*t55107*t55080;
  t55146 = t54983*t55080;
  t55152 = -1.*t55088*t54961;
  t55156 = t55088*t54870;
  t55185 = t55052*t55080;
  t55190 = -1.*t54983*t55080;
  p_output1[0]=t54978;
  p_output1[1]=t54979*t54983 - 1.*t54985*t54988;
  p_output1[2]=t54983*t54985 + t54979*t54988;
  p_output1[3]=t55048*(t55081 - 1.*t54897*t55084*t55096 + t54893*t55084*t55101) + t54897*t55084*(t55048*t55096 + t55108 + t55101*t55112);
  p_output1[4]=(t55081 - 1.*t55084*t55093)*t55107 + t55052*(t54961*t55088 + t55046*t55093 + t55108);
  p_output1[5]=t54961*(-1.*t54903*t55074 + t54964*t55078);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t45286 - 0.27*t27181*t45286 - 1.*t45286*t55069;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t54897*t55084;
  p_output1[19]=t54979*t55052 + t54893*t54985*t55084;
  p_output1[20]=t54985*t55052 - 1.*t54893*t54979*t55084;
  p_output1[21]=t54978*(-1.*t55048*t55096 - 1.*t55101*t55112 + t55141) + t55048*(t54978*t55096 + t54988*t55101 + t55146);
  p_output1[22]=t54983*(-1.*t55046*t55093 + t55141 + t55152) + t55107*(t54976*t55093 + t55146 + t55156);
  p_output1[23]=t54870*(-1.*t54964*t55043*t55074 - 1.*t54903*t55043*t55078 + t55152) + t54961*(t54961*t54964*t55074 + t54903*t54961*t55078 + t55156);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t54870*(-1.*t55043*t55072 + t55152) + t54961*(t54961*t55072 + t55156);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t55048;
  p_output1[37]=t54979*t55107 - 1.*t54985*t55112;
  p_output1[38]=t54985*t55107 + t54979*t55112;
  p_output1[39]=t54978*(t54897*t55084*t55096 - 1.*t54893*t55084*t55101 + t55185) + t54897*t55084*(-1.*t54978*t55096 - 1.*t54988*t55101 + t55190);
  p_output1[40]=t54983*(t55084*t55093 + t55185) + t55052*(-1.*t54870*t55088 - 1.*t54976*t55093 + t55190);
  p_output1[41]=t54870*(t54903*t55074 - 1.*t54964*t55078);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t54870 - 0.15121*t55043;
  p_output1[49]=0.28121*t27181 + 0.27*Power(t45286,2) - 1.*t27181*t55069;
  p_output1[50]=-0.27;
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
