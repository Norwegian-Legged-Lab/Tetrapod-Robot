/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:14 GMT+02:00
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
  double t322;
  double t35;
  double t69;
  double t571;
  double t1548;
  double t1549;
  double t1552;
  double t1527;
  double t1773;
  double t1399;
  double t1778;
  double t1321;
  double t292;
  double t851;
  double t1139;
  double t1192;
  double t1735;
  double t1862;
  double t1887;
  double t2211;
  double t2004;
  double t2092;
  double t2110;
  double t1995;
  double t2215;
  double t2231;
  double t2234;
  double t2987;
  double t3000;
  double t3004;
  double t3135;
  double t3156;
  double t3256;
  double t3332;
  double t3335;
  double t3405;
  double t3568;
  double t3573;
  double t3607;
  double t3651;
  double t3686;
  double t3774;
  double t3798;
  double t3009;
  double t3119;
  double t3729;
  double t3746;
  double t3862;
  double t3864;
  double t3865;
  double t3898;
  double t3913;
  double t3979;
  double t4048;
  double t4232;
  double t4238;
  double t4258;
  double t3763;
  double t3839;
  double t3842;
  double t2542;
  double t2556;
  double t2558;
  double t2608;
  double t2673;
  double t2683;
  double t2724;
  double t2757;
  double t2774;
  double t4121;
  double t4272;
  double t4274;
  double t4357;
  double t4367;
  double t4397;
  double t4555;
  double t4606;
  double t4622;
  double t2863;
  double t2906;
  double t2958;
  double t3843;
  double t4639;
  double t1213;
  double t1906;
  double t1986;
  double t4785;
  double t4791;
  double t4890;
  double t5522;
  double t5570;
  double t5690;
  double t5746;
  double t15260;
  double t16521;
  t322 = Cos(var1[16]);
  t35 = Cos(var1[17]);
  t69 = Sin(var1[16]);
  t571 = Sin(var1[17]);
  t1548 = -1.*t322*t35;
  t1549 = -1.*t69*t571;
  t1552 = t1548 + t1549;
  t1527 = Cos(var1[5]);
  t1773 = Sin(var1[15]);
  t1399 = Cos(var1[15]);
  t1778 = Sin(var1[5]);
  t1321 = Cos(var1[4]);
  t292 = -1.*t35*t69;
  t851 = t322*t571;
  t1139 = t292 + t851;
  t1192 = Sin(var1[4]);
  t1735 = t1399*t1527*t1552;
  t1862 = -1.*t1773*t1552*t1778;
  t1887 = t1735 + t1862;
  t2211 = Sin(var1[3]);
  t2004 = t1527*t1773*t1552;
  t2092 = t1399*t1552*t1778;
  t2110 = t2004 + t2092;
  t1995 = Cos(var1[3]);
  t2215 = t1321*t1139;
  t2231 = -1.*t1192*t1887;
  t2234 = t2215 + t2231;
  t2987 = -1.*t1399;
  t3000 = 1. + t2987;
  t3004 = -0.15121*t3000;
  t3135 = -1.*t322;
  t3156 = 1. + t3135;
  t3256 = -0.28121*t3156;
  t3332 = -1.*t35;
  t3335 = 1. + t3332;
  t3405 = -0.50321*t3335;
  t3568 = -0.23321*t35;
  t3573 = t3405 + t3568;
  t3607 = t322*t3573;
  t3651 = 0.27*t69*t571;
  t3686 = t3256 + t3607 + t3651;
  t3774 = t1399*t3686;
  t3798 = t3004 + t3774;
  t3009 = -0.15121*t1399;
  t3119 = 0.15121*t1773;
  t3729 = t1773*t3686;
  t3746 = t3004 + t3009 + t3119 + t3729;
  t3862 = t1527*t1773;
  t3864 = t1399*t1778;
  t3865 = t3862 + t3864;
  t3898 = 0.28121*t69;
  t3913 = t3573*t69;
  t3979 = -0.27*t322*t571;
  t4048 = t3898 + t3913 + t3979;
  t4232 = t1527*t3798;
  t4238 = -1.*t3746*t1778;
  t4258 = t4232 + t4238;
  t3763 = t1527*t3746;
  t3839 = t3798*t1778;
  t3842 = t3763 + t3839;
  t2542 = t322*t35;
  t2556 = t69*t571;
  t2558 = t2542 + t2556;
  t2608 = t2558*t1192;
  t2673 = t1399*t1527*t1139;
  t2683 = -1.*t1773*t1139*t1778;
  t2724 = t2673 + t2683;
  t2757 = t1321*t2724;
  t2774 = t2608 + t2757;
  t4121 = t4048*t1192;
  t4272 = t1321*t4258;
  t4274 = t4121 + t4272;
  t4357 = t1321*t4048;
  t4367 = -1.*t1192*t4258;
  t4397 = t4357 + t4367;
  t4555 = t1527*t1773*t1139;
  t4606 = t1399*t1139*t1778;
  t4622 = t4555 + t4606;
  t2863 = -1.*t1399*t1527;
  t2906 = t1773*t1778;
  t2958 = t2863 + t2906;
  t3843 = -1.*t2958*t3842;
  t4639 = t4622*t3842;
  t1213 = t1139*t1192;
  t1906 = t1321*t1887;
  t1986 = t1213 + t1906;
  t4785 = t1321*t2558;
  t4791 = -1.*t1192*t2724;
  t4890 = t4785 + t4791;
  t5522 = -1.*t4622*t3842;
  t5570 = t2110*t3842;
  t5690 = -1.*t4048*t2558;
  t5746 = t4048*t1139;
  t15260 = t2958*t3842;
  t16521 = -1.*t2110*t3842;
  p_output1[0]=t1986;
  p_output1[1]=t1995*t2110 - 1.*t2211*t2234;
  p_output1[2]=t2110*t2211 + t1995*t2234;
  p_output1[3]=t2774*(t3843 - 1.*t1321*t3865*t4274 + t1192*t3865*t4397) + t1321*t3865*(t2774*t4274 + t4639 + t4397*t4890);
  p_output1[4]=(t3843 - 1.*t3865*t4258)*t4622 + t2958*(t2558*t4048 + t2724*t4258 + t4639);
  p_output1[5]=t2558*(t1399*t3746 - 1.*t1773*t3798);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t1552 - 0.15121*t2558;
  p_output1[16]=0.28121*t571 - 0.27*t35*t571 + t3573*t571;
  p_output1[17]=0;
  p_output1[18]=t1321*t3865;
  p_output1[19]=t1995*t2958 + t1192*t2211*t3865;
  p_output1[20]=t2211*t2958 - 1.*t1192*t1995*t3865;
  p_output1[21]=t1986*(-1.*t2774*t4274 - 1.*t4397*t4890 + t5522) + t2774*(t1986*t4274 + t2234*t4397 + t5570);
  p_output1[22]=t2110*(-1.*t2724*t4258 + t5522 + t5690) + t4622*(t1887*t4258 + t5570 + t5746);
  p_output1[23]=t1139*(-1.*t1139*t1773*t3746 - 1.*t1139*t1399*t3798 + t5690) + t2558*(t1552*t1773*t3746 + t1399*t1552*t3798 + t5746);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t1139*(-1.*t1139*t3686 + t5690) + t2558*(t1552*t3686 + t5746);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t2774;
  p_output1[37]=t1995*t4622 - 1.*t2211*t4890;
  p_output1[38]=t2211*t4622 + t1995*t4890;
  p_output1[39]=t1321*t3865*(t16521 - 1.*t1986*t4274 - 1.*t2234*t4397) + t1986*(t15260 + t1321*t3865*t4274 - 1.*t1192*t3865*t4397);
  p_output1[40]=t2958*(t16521 - 1.*t1139*t4048 - 1.*t1887*t4258) + t2110*(t15260 + t3865*t4258);
  p_output1[41]=t1139*(-1.*t1399*t3746 + t1773*t3798);
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
  p_output1[52]=0.28121*t35 + t35*t3573 + 0.27*Power(t571,2);
  p_output1[53]=-0.27;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
