/*
 * Automatically Generated from Mathematica.
 * Fri 27 May 2022 16:03:40 GMT+02:00
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
  double t5970;
  double t5890;
  double t5918;
  double t5972;
  double t5997;
  double t6001;
  double t6002;
  double t5993;
  double t6004;
  double t5992;
  double t6005;
  double t5991;
  double t5969;
  double t5979;
  double t5980;
  double t5981;
  double t6003;
  double t6006;
  double t6007;
  double t6015;
  double t6011;
  double t6012;
  double t6013;
  double t6010;
  double t6017;
  double t6018;
  double t6054;
  double t6065;
  double t6066;
  double t6067;
  double t6078;
  double t6079;
  double t6084;
  double t6086;
  double t6087;
  double t6088;
  double t6089;
  double t6090;
  double t6091;
  double t6092;
  double t6093;
  double t6094;
  double t6095;
  double t6099;
  double t6100;
  double t6101;
  double t6081;
  double t6082;
  double t6083;
  double t6096;
  double t6097;
  double t6105;
  double t6106;
  double t6107;
  double t6108;
  double t6109;
  double t6110;
  double t6112;
  double t6114;
  double t6116;
  double t6117;
  double t6098;
  double t6102;
  double t6103;
  double t6064;
  double t6069;
  double t6070;
  double t6071;
  double t6072;
  double t6074;
  double t6113;
  double t6118;
  double t6119;
  double t6121;
  double t6122;
  double t6123;
  double t6127;
  double t6128;
  double t6129;
  double t6075;
  double t6076;
  double t6077;
  double t6104;
  double t6130;
  double t5986;
  double t6008;
  double t6009;
  double t6132;
  double t6133;
  double t6134;
  double t6162;
  double t6167;
  double t6173;
  double t6177;
  double t6204;
  double t6209;
  t5970 = Cos(var1[13]);
  t5890 = Cos(var1[14]);
  t5918 = Sin(var1[13]);
  t5972 = Sin(var1[14]);
  t5997 = t5970*t5890;
  t6001 = t5918*t5972;
  t6002 = t5997 + t6001;
  t5993 = Cos(var1[5]);
  t6004 = Sin(var1[12]);
  t5992 = Cos(var1[12]);
  t6005 = Sin(var1[5]);
  t5991 = Cos(var1[4]);
  t5969 = -1.*t5890*t5918;
  t5979 = t5970*t5972;
  t5980 = t5969 + t5979;
  t5981 = Sin(var1[4]);
  t6003 = t5992*t5993*t6002;
  t6006 = -1.*t6004*t6002*t6005;
  t6007 = t6003 + t6006;
  t6015 = Sin(var1[3]);
  t6011 = t5993*t6004*t6002;
  t6012 = t5992*t6002*t6005;
  t6013 = t6011 + t6012;
  t6010 = Cos(var1[3]);
  t6017 = t5991*t5980;
  t6018 = -1.*t5981*t6007;
  t6054 = t6017 + t6018;
  t6065 = t5890*t5918;
  t6066 = -1.*t5970*t5972;
  t6067 = t6065 + t6066;
  t6078 = -1.*t5992;
  t6079 = 1. + t6078;
  t6084 = -1.*t5970;
  t6086 = 1. + t6084;
  t6087 = 0.28121*t6086;
  t6088 = -1.*t5890;
  t6089 = 1. + t6088;
  t6090 = 0.50321*t6089;
  t6091 = 0.19821*t5890;
  t6092 = t6090 + t6091;
  t6093 = t5970*t6092;
  t6094 = -0.305*t5918*t5972;
  t6095 = t6087 + t6093 + t6094;
  t6099 = 0.15121*t6079;
  t6100 = t5992*t6095;
  t6101 = t6099 + t6100;
  t6081 = -0.15121*t6079;
  t6082 = -0.15121*t5992;
  t6083 = -0.15121*t6004;
  t6096 = t6004*t6095;
  t6097 = t6081 + t6082 + t6083 + t6096;
  t6105 = -1.*t5993*t6004;
  t6106 = -1.*t5992*t6005;
  t6107 = t6105 + t6106;
  t6108 = 0.28121*t5918;
  t6109 = -1.*t6092*t5918;
  t6110 = -0.305*t5970*t5972;
  t6112 = t6108 + t6109 + t6110;
  t6114 = t5993*t6101;
  t6116 = -1.*t6097*t6005;
  t6117 = t6114 + t6116;
  t6098 = t5993*t6097;
  t6102 = t6101*t6005;
  t6103 = t6098 + t6102;
  t6064 = t6002*t5981;
  t6069 = t5992*t5993*t6067;
  t6070 = -1.*t6004*t6067*t6005;
  t6071 = t6069 + t6070;
  t6072 = t5991*t6071;
  t6074 = t6064 + t6072;
  t6113 = t6112*t5981;
  t6118 = t5991*t6117;
  t6119 = t6113 + t6118;
  t6121 = t5991*t6112;
  t6122 = -1.*t5981*t6117;
  t6123 = t6121 + t6122;
  t6127 = t5993*t6004*t6067;
  t6128 = t5992*t6067*t6005;
  t6129 = t6127 + t6128;
  t6075 = t5992*t5993;
  t6076 = -1.*t6004*t6005;
  t6077 = t6075 + t6076;
  t6104 = -1.*t6077*t6103;
  t6130 = t6129*t6103;
  t5986 = t5980*t5981;
  t6008 = t5991*t6007;
  t6009 = t5986 + t6008;
  t6132 = t5991*t6002;
  t6133 = -1.*t5981*t6071;
  t6134 = t6132 + t6133;
  t6162 = -1.*t6129*t6103;
  t6167 = t6013*t6103;
  t6173 = -1.*t6112*t6002;
  t6177 = t6112*t5980;
  t6204 = t6077*t6103;
  t6209 = -1.*t6013*t6103;
  p_output1[0]=t6009;
  p_output1[1]=t6010*t6013 - 1.*t6015*t6054;
  p_output1[2]=t6013*t6015 + t6010*t6054;
  p_output1[3]=t6074*(t6104 - 1.*t5991*t6107*t6119 + t5981*t6107*t6123) + t5991*t6107*(t6074*t6119 + t6130 + t6123*t6134);
  p_output1[4]=(t6104 - 1.*t6107*t6117)*t6129 + t6077*(t6002*t6112 + t6071*t6117 + t6130);
  p_output1[5]=t6002*(-1.*t5992*t6097 + t6004*t6101);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t5972 - 0.305*t5890*t5972 - 1.*t5972*t6092;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5991*t6107;
  p_output1[19]=t6010*t6077 + t5981*t6015*t6107;
  p_output1[20]=t6015*t6077 - 1.*t5981*t6010*t6107;
  p_output1[21]=t6009*(-1.*t6074*t6119 - 1.*t6123*t6134 + t6162) + t6074*(t6009*t6119 + t6054*t6123 + t6167);
  p_output1[22]=t6013*(-1.*t6071*t6117 + t6162 + t6173) + t6129*(t6007*t6117 + t6167 + t6177);
  p_output1[23]=t5980*(-1.*t6004*t6067*t6097 - 1.*t5992*t6067*t6101 + t6173) + t6002*(t6002*t6004*t6097 + t5992*t6002*t6101 + t6177);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t5980*(-1.*t6067*t6095 + t6173) + t6002*(t6002*t6095 + t6177);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6074;
  p_output1[37]=t6010*t6129 - 1.*t6015*t6134;
  p_output1[38]=t6015*t6129 + t6010*t6134;
  p_output1[39]=t6009*(t5991*t6107*t6119 - 1.*t5981*t6107*t6123 + t6204) + t5991*t6107*(-1.*t6009*t6119 - 1.*t6054*t6123 + t6209);
  p_output1[40]=t6013*(t6107*t6117 + t6204) + t6077*(-1.*t5980*t6112 - 1.*t6007*t6117 + t6209);
  p_output1[41]=t5980*(t5992*t6097 - 1.*t6004*t6101);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t5980 - 0.15121*t6067;
  p_output1[49]=0.28121*t5890 + 0.305*Power(t5972,2) - 1.*t5890*t6092;
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
