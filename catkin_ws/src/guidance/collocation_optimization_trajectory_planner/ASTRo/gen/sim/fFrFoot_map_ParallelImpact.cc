/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:31 GMT+02:00
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
  double t8198;
  double t970;
  double t2486;
  double t8364;
  double t20656;
  double t20782;
  double t21047;
  double t20612;
  double t21343;
  double t20604;
  double t21438;
  double t20299;
  double t5663;
  double t12992;
  double t14276;
  double t16811;
  double t21313;
  double t21567;
  double t21638;
  double t21798;
  double t21766;
  double t21770;
  double t21771;
  double t21750;
  double t21811;
  double t21813;
  double t21820;
  double t21854;
  double t21860;
  double t21862;
  double t21882;
  double t21889;
  double t21904;
  double t21909;
  double t21910;
  double t21911;
  double t21916;
  double t21932;
  double t21939;
  double t21948;
  double t21952;
  double t21954;
  double t21956;
  double t21977;
  double t21980;
  double t21982;
  double t21891;
  double t21892;
  double t21901;
  double t21963;
  double t21969;
  double t22000;
  double t22003;
  double t22004;
  double t22007;
  double t22020;
  double t22031;
  double t22047;
  double t22081;
  double t22086;
  double t22091;
  double t21974;
  double t21983;
  double t21988;
  double t21849;
  double t21865;
  double t21866;
  double t21867;
  double t21869;
  double t21871;
  double t22056;
  double t22092;
  double t22152;
  double t22159;
  double t22160;
  double t22167;
  double t22191;
  double t22196;
  double t22199;
  double t21874;
  double t21875;
  double t21880;
  double t21991;
  double t22200;
  double t16812;
  double t21732;
  double t21749;
  double t22205;
  double t22209;
  double t22211;
  double t22305;
  double t22315;
  double t22327;
  double t22371;
  double t22581;
  double t22656;
  t8198 = Cos(var1[13]);
  t970 = Cos(var1[14]);
  t2486 = Sin(var1[13]);
  t8364 = Sin(var1[14]);
  t20656 = t8198*t970;
  t20782 = t2486*t8364;
  t21047 = t20656 + t20782;
  t20612 = Cos(var1[5]);
  t21343 = Sin(var1[12]);
  t20604 = Cos(var1[12]);
  t21438 = Sin(var1[5]);
  t20299 = Cos(var1[4]);
  t5663 = -1.*t970*t2486;
  t12992 = t8198*t8364;
  t14276 = t5663 + t12992;
  t16811 = Sin(var1[4]);
  t21313 = t20604*t20612*t21047;
  t21567 = -1.*t21343*t21047*t21438;
  t21638 = t21313 + t21567;
  t21798 = Sin(var1[3]);
  t21766 = t20612*t21343*t21047;
  t21770 = t20604*t21047*t21438;
  t21771 = t21766 + t21770;
  t21750 = Cos(var1[3]);
  t21811 = t20299*t14276;
  t21813 = -1.*t16811*t21638;
  t21820 = t21811 + t21813;
  t21854 = t970*t2486;
  t21860 = -1.*t8198*t8364;
  t21862 = t21854 + t21860;
  t21882 = -1.*t20604;
  t21889 = 1. + t21882;
  t21904 = -1.*t8198;
  t21909 = 1. + t21904;
  t21910 = 0.28121*t21909;
  t21911 = -1.*t970;
  t21916 = 1. + t21911;
  t21932 = 0.50321*t21916;
  t21939 = 0.19821*t970;
  t21948 = t21932 + t21939;
  t21952 = t8198*t21948;
  t21954 = -0.305*t2486*t8364;
  t21956 = t21910 + t21952 + t21954;
  t21977 = 0.15121*t21889;
  t21980 = t20604*t21956;
  t21982 = t21977 + t21980;
  t21891 = -0.15121*t21889;
  t21892 = -0.15121*t20604;
  t21901 = -0.15121*t21343;
  t21963 = t21343*t21956;
  t21969 = t21891 + t21892 + t21901 + t21963;
  t22000 = -1.*t20612*t21343;
  t22003 = -1.*t20604*t21438;
  t22004 = t22000 + t22003;
  t22007 = 0.28121*t2486;
  t22020 = -1.*t21948*t2486;
  t22031 = -0.305*t8198*t8364;
  t22047 = t22007 + t22020 + t22031;
  t22081 = t20612*t21982;
  t22086 = -1.*t21969*t21438;
  t22091 = t22081 + t22086;
  t21974 = t20612*t21969;
  t21983 = t21982*t21438;
  t21988 = t21974 + t21983;
  t21849 = t21047*t16811;
  t21865 = t20604*t20612*t21862;
  t21866 = -1.*t21343*t21862*t21438;
  t21867 = t21865 + t21866;
  t21869 = t20299*t21867;
  t21871 = t21849 + t21869;
  t22056 = t22047*t16811;
  t22092 = t20299*t22091;
  t22152 = t22056 + t22092;
  t22159 = t20299*t22047;
  t22160 = -1.*t16811*t22091;
  t22167 = t22159 + t22160;
  t22191 = t20612*t21343*t21862;
  t22196 = t20604*t21862*t21438;
  t22199 = t22191 + t22196;
  t21874 = t20604*t20612;
  t21875 = -1.*t21343*t21438;
  t21880 = t21874 + t21875;
  t21991 = -1.*t21880*t21988;
  t22200 = t22199*t21988;
  t16812 = t14276*t16811;
  t21732 = t20299*t21638;
  t21749 = t16812 + t21732;
  t22205 = t20299*t21047;
  t22209 = -1.*t16811*t21867;
  t22211 = t22205 + t22209;
  t22305 = -1.*t22199*t21988;
  t22315 = t21771*t21988;
  t22327 = -1.*t22047*t21047;
  t22371 = t22047*t14276;
  t22581 = t21880*t21988;
  t22656 = -1.*t21771*t21988;
  p_output1[0]=t21749;
  p_output1[1]=t21750*t21771 - 1.*t21798*t21820;
  p_output1[2]=t21771*t21798 + t21750*t21820;
  p_output1[3]=t21871*(t21991 - 1.*t20299*t22004*t22152 + t16811*t22004*t22167) + t20299*t22004*(t21871*t22152 + t22200 + t22167*t22211);
  p_output1[4]=(t21991 - 1.*t22004*t22091)*t22199 + t21880*(t21047*t22047 + t21867*t22091 + t22200);
  p_output1[5]=t21047*(-1.*t20604*t21969 + t21343*t21982);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t8364 - 1.*t21948*t8364 - 0.305*t8364*t970;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t20299*t22004;
  p_output1[19]=t21750*t21880 + t16811*t21798*t22004;
  p_output1[20]=t21798*t21880 - 1.*t16811*t21750*t22004;
  p_output1[21]=t21749*(-1.*t21871*t22152 - 1.*t22167*t22211 + t22305) + t21871*(t21749*t22152 + t21820*t22167 + t22315);
  p_output1[22]=t21771*(-1.*t21867*t22091 + t22305 + t22327) + t22199*(t21638*t22091 + t22315 + t22371);
  p_output1[23]=t14276*(-1.*t21343*t21862*t21969 - 1.*t20604*t21862*t21982 + t22327) + t21047*(t21047*t21343*t21969 + t20604*t21047*t21982 + t22371);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t14276*(-1.*t21862*t21956 + t22327) + t21047*(t21047*t21956 + t22371);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t21871;
  p_output1[37]=t21750*t22199 - 1.*t21798*t22211;
  p_output1[38]=t21798*t22199 + t21750*t22211;
  p_output1[39]=t21749*(t20299*t22004*t22152 - 1.*t16811*t22004*t22167 + t22581) + t20299*t22004*(-1.*t21749*t22152 - 1.*t21820*t22167 + t22656);
  p_output1[40]=t21771*(t22004*t22091 + t22581) + t21880*(-1.*t14276*t22047 - 1.*t21638*t22091 + t22656);
  p_output1[41]=t14276*(t20604*t21969 - 1.*t21343*t21982);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t14276 - 0.15121*t21862;
  p_output1[49]=0.305*Power(t8364,2) + 0.28121*t970 - 1.*t21948*t970;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
