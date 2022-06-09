/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:20 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t6650;
  double t3270;
  double t6758;
  double t6795;
  double t6781;
  double t6782;
  double t6799;
  double t3127;
  double t6787;
  double t6803;
  double t6811;
  double t6771;
  double t6820;
  double t6821;
  double t6822;
  double t6819;
  double t6958;
  double t6960;
  double t6823;
  double t6824;
  double t6825;
  double t6830;
  double t6831;
  double t6832;
  double t6833;
  double t6837;
  double t6932;
  double t6961;
  double t6962;
  double t6967;
  double t6975;
  double t6976;
  double t6977;
  double t6979;
  double t6980;
  double t6986;
  double t7007;
  double t7008;
  double t7012;
  double t7014;
  double t7015;
  double t7016;
  double t6817;
  double t6826;
  double t6827;
  double t7057;
  double t7058;
  double t7059;
  double t7063;
  double t7064;
  double t7065;
  double t7066;
  double t7067;
  double t7068;
  double t5062;
  double t6772;
  double t6774;
  double t7056;
  double t7062;
  double t7069;
  double t7070;
  double t7074;
  double t7075;
  double t7076;
  double t7077;
  double t7078;
  double t7079;
  double t7049;
  double t7050;
  double t7052;
  double t7054;
  double t7071;
  double t7072;
  double t7084;
  double t7088;
  double t7090;
  double t7093;
  double t7094;
  double t7096;
  double t7073;
  double t7081;
  double t7082;
  double t7092;
  double t7098;
  double t7099;
  double t7103;
  double t7104;
  double t7105;
  double t6829;
  double t6939;
  double t6950;
  double t7083;
  double t7109;
  double t7117;
  double t7124;
  double t7132;
  double t7137;
  double t7178;
  double t7188;
  double t7145;
  double t7152;
  double t7172;
  double t7163;
  double t7245;
  double t7235;
  t6650 = Cos(var1[15]);
  t3270 = Sin(var1[4]);
  t6758 = Cos(var1[4]);
  t6795 = Cos(var1[16]);
  t6781 = Cos(var1[17]);
  t6782 = Sin(var1[16]);
  t6799 = Sin(var1[17]);
  t3127 = Sin(var1[15]);
  t6787 = t6781*t6782;
  t6803 = -1.*t6795*t6799;
  t6811 = t6787 + t6803;
  t6771 = Sin(var1[5]);
  t6820 = t6795*t6781;
  t6821 = t6782*t6799;
  t6822 = t6820 + t6821;
  t6819 = Cos(var1[5]);
  t6958 = Cos(var1[3]);
  t6960 = Sin(var1[3]);
  t6823 = t6819*t6822;
  t6824 = t3127*t6811*t6771;
  t6825 = t6823 + t6824;
  t6830 = -1.*t6781*t6782;
  t6831 = t6795*t6799;
  t6832 = t6830 + t6831;
  t6833 = t6819*t6832;
  t6837 = t3127*t6822*t6771;
  t6932 = t6833 + t6837;
  t6961 = t6758*t3127;
  t6962 = t6650*t3270*t6771;
  t6967 = t6961 + t6962;
  t6975 = -1.*t6819*t3127*t6811;
  t6976 = t6822*t6771;
  t6977 = t6975 + t6976;
  t6979 = t6650*t6758*t6811;
  t6980 = -1.*t3270*t6825;
  t6986 = t6979 + t6980;
  t7007 = -1.*t6819*t3127*t6822;
  t7008 = t6832*t6771;
  t7012 = t7007 + t7008;
  t7014 = t6650*t6758*t6822;
  t7015 = -1.*t3270*t6932;
  t7016 = t7014 + t7015;
  t6817 = t6650*t6811*t3270;
  t6826 = t6758*t6825;
  t6827 = t6817 + t6826;
  t7057 = -0.0641*t6781;
  t7058 = -0.28*t6799;
  t7059 = t7057 + t7058;
  t7063 = -1.*t6781;
  t7064 = 1. + t7063;
  t7065 = -0.575*t7064;
  t7066 = -0.295*t6781;
  t7067 = -0.0641*t6799;
  t7068 = t7065 + t7066 + t7067;
  t5062 = t3127*t3270;
  t6772 = -1.*t6650*t6758*t6771;
  t6774 = t5062 + t6772;
  t7056 = 0.325*t6782;
  t7062 = t6795*t7059;
  t7069 = t6782*t7068;
  t7070 = t7056 + t7062 + t7069;
  t7074 = -1.*t6795;
  t7075 = 1. + t7074;
  t7076 = -0.325*t7075;
  t7077 = -1.*t6782*t7059;
  t7078 = t6795*t7068;
  t7079 = t7076 + t7077 + t7078;
  t7049 = -1.*t6650;
  t7050 = 1. + t7049;
  t7052 = -0.1575*t7050;
  t7054 = -0.2255*t6650;
  t7071 = -1.*t3127*t7070;
  t7072 = t7052 + t7054 + t7071;
  t7084 = -0.068*t3127;
  t7088 = t6650*t7070;
  t7090 = t7084 + t7088;
  t7093 = t6819*t7079;
  t7094 = -1.*t7072*t6771;
  t7096 = t7093 + t7094;
  t7073 = t6819*t7072;
  t7081 = t7079*t6771;
  t7082 = t7073 + t7081;
  t7092 = t7090*t3270;
  t7098 = t6758*t7096;
  t7099 = t7092 + t7098;
  t7103 = t6758*t7090;
  t7104 = -1.*t3270*t7096;
  t7105 = t7103 + t7104;
  t6829 = t6650*t6822*t3270;
  t6939 = t6758*t6932;
  t6950 = t6829 + t6939;
  t7083 = t6650*t6819*t7082;
  t7109 = -1.*t7082*t6977;
  t7117 = t7082*t6977;
  t7124 = -1.*t7082*t7012;
  t7132 = -1.*t6650*t6819*t7082;
  t7137 = t7082*t7012;
  t7178 = -1.*t3127*t7090;
  t7188 = t6650*t7090*t6822;
  t7145 = t3127*t7090;
  t7152 = -1.*t6650*t7090*t6811;
  t7172 = -1.*t6650*t7090*t6822;
  t7163 = t6650*t7090*t6811;
  t7245 = t7079*t6822;
  t7235 = -1.*t7079*t6832;
  p_output1[0]=t6827*var2[0] + t6774*var2[1] + t6950*var2[2];
  p_output1[1]=(t6958*t6977 - 1.*t6960*t6986)*var2[0] + (t6650*t6819*t6958 - 1.*t6960*t6967)*var2[1] + (t6958*t7012 - 1.*t6960*t7016)*var2[2];
  p_output1[2]=(t6960*t6977 + t6958*t6986)*var2[0] + (t6650*t6819*t6960 + t6958*t6967)*var2[1] + (t6960*t7012 + t6958*t7016)*var2[2];
  p_output1[3]=(t6950*(-1.*t6774*t7099 - 1.*t6967*t7105 + t7132) + t6774*(t6950*t7099 + t7016*t7105 + t7137))*var2[0] + (t6950*(t6827*t7099 + t6986*t7105 + t7117) + t6827*(-1.*t6950*t7099 - 1.*t7016*t7105 + t7124))*var2[1] + (t6827*(t7083 + t6774*t7099 + t6967*t7105) + t6774*(-1.*t6827*t7099 - 1.*t6986*t7105 + t7109))*var2[2];
  p_output1[4]=(t7012*(t6650*t6771*t7096 + t7132 + t7178) + t6650*t6819*(t6932*t7096 + t7137 + t7188))*var2[0] + (t7012*(t6825*t7096 + t7117 + t7163) + t6977*(-1.*t6932*t7096 + t7124 + t7172))*var2[1] + (t6977*(t7083 - 1.*t6650*t6771*t7096 + t7145) + t6650*t6819*(-1.*t6825*t7096 + t7109 + t7152))*var2[2];
  p_output1[5]=(t6650*t6822*(-1.*t6650*t7072 + t7178) + t3127*(-1.*t3127*t6822*t7072 + t6832*t7079 + t7188))*var2[0] + (t6650*t6811*(t3127*t6822*t7072 + t7172 + t7235) + t6650*t6822*(-1.*t3127*t6811*t7072 + t7163 + t7245))*var2[1] + (t6650*t6811*(t6650*t7072 + t7145) + t3127*(t3127*t6811*t7072 - 1.*t6822*t7079 + t7152))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t6811 + 0.2255*t6832)*var2[0] + (t6822*(-1.*t6822*t7070 + t7235) + t6832*(t6811*t7070 + t7245))*var2[1] - 0.068*t6822*var2[2];
  p_output1[16]=(-0.325*t6799 - 1.*t6781*t7059 - 1.*t6799*t7068)*var2[0] + (0.325*t6781 - 1.*t6799*t7059 + t6781*t7068)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
