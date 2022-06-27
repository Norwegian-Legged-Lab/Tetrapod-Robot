/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:55 GMT+02:00
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
  double t1828;
  double t2691;
  double t1835;
  double t3389;
  double t3677;
  double t3079;
  double t3722;
  double t2490;
  double t4559;
  double t4571;
  double t4698;
  double t2703;
  double t4007;
  double t3390;
  double t3848;
  double t3877;
  double t2499;
  double t2869;
  double t2917;
  double t7033;
  double t6961;
  double t5024;
  double t5298;
  double t5322;
  double t5642;
  double t5680;
  double t5689;
  double t5856;
  double t5892;
  double t5940;
  double t7046;
  double t7236;
  double t7242;
  double t7363;
  double t7400;
  double t7410;
  double t7713;
  double t7792;
  double t7856;
  double t7977;
  double t8039;
  double t8054;
  double t8071;
  double t8126;
  double t8127;
  double t4027;
  double t5419;
  double t5482;
  double t8549;
  double t8724;
  double t8762;
  double t8771;
  double t8863;
  double t8876;
  double t8889;
  double t8892;
  double t8893;
  double t8915;
  double t8947;
  double t8949;
  double t8961;
  double t9027;
  double t9040;
  double t9087;
  double t8727;
  double t8752;
  double t8755;
  double t8966;
  double t9018;
  double t9148;
  double t9161;
  double t9172;
  double t9196;
  double t9215;
  double t9217;
  double t9220;
  double t9024;
  double t9130;
  double t9134;
  double t9199;
  double t9221;
  double t9231;
  double t9251;
  double t9252;
  double t9253;
  double t5824;
  double t6368;
  double t6388;
  double t9139;
  double t9263;
  double t9347;
  double t9505;
  double t9669;
  double t9722;
  double t10373;
  double t10547;
  t1828 = Cos(var1[4]);
  t2691 = Cos(var1[12]);
  t1835 = Cos(var1[5]);
  t3389 = Cos(var1[14]);
  t3677 = Sin(var1[13]);
  t3079 = Cos(var1[13]);
  t3722 = Sin(var1[14]);
  t2490 = Sin(var1[12]);
  t4559 = t3389*t3677;
  t4571 = -1.*t3079*t3722;
  t4698 = t4559 + t4571;
  t2703 = Sin(var1[5]);
  t4007 = Sin(var1[4]);
  t3390 = t3079*t3389;
  t3848 = t3677*t3722;
  t3877 = t3390 + t3848;
  t2499 = -1.*t1835*t2490;
  t2869 = -1.*t2691*t2703;
  t2917 = t2499 + t2869;
  t7033 = Cos(var1[3]);
  t6961 = Sin(var1[3]);
  t5024 = t2691*t1835*t4698;
  t5298 = -1.*t2490*t4698*t2703;
  t5322 = t5024 + t5298;
  t5642 = -1.*t3389*t3677;
  t5680 = t3079*t3722;
  t5689 = t5642 + t5680;
  t5856 = t2691*t1835*t3877;
  t5892 = -1.*t2490*t3877*t2703;
  t5940 = t5856 + t5892;
  t7046 = t2691*t1835;
  t7236 = -1.*t2490*t2703;
  t7242 = t7046 + t7236;
  t7363 = t1835*t2490*t4698;
  t7400 = t2691*t4698*t2703;
  t7410 = t7363 + t7400;
  t7713 = t1828*t3877;
  t7792 = -1.*t4007*t5322;
  t7856 = t7713 + t7792;
  t7977 = t1835*t2490*t3877;
  t8039 = t2691*t3877*t2703;
  t8054 = t7977 + t8039;
  t8071 = t1828*t5689;
  t8126 = -1.*t4007*t5940;
  t8127 = t8071 + t8126;
  t4027 = t3877*t4007;
  t5419 = t1828*t5322;
  t5482 = t4027 + t5419;
  t8549 = -1.*t2691;
  t8724 = 1. + t8549;
  t8762 = -1.*t3079;
  t8771 = 1. + t8762;
  t8863 = 0.28121*t8771;
  t8876 = -1.*t3389;
  t8889 = 1. + t8876;
  t8892 = 0.50321*t8889;
  t8893 = 0.19821*t3389;
  t8915 = t8892 + t8893;
  t8947 = t3079*t8915;
  t8949 = -0.305*t3677*t3722;
  t8961 = t8863 + t8947 + t8949;
  t9027 = 0.15121*t8724;
  t9040 = t2691*t8961;
  t9087 = t9027 + t9040;
  t8727 = -0.15121*t8724;
  t8752 = -0.15121*t2691;
  t8755 = -0.15121*t2490;
  t8966 = t2490*t8961;
  t9018 = t8727 + t8752 + t8755 + t8966;
  t9148 = 0.28121*t3677;
  t9161 = -1.*t8915*t3677;
  t9172 = -0.305*t3079*t3722;
  t9196 = t9148 + t9161 + t9172;
  t9215 = t1835*t9087;
  t9217 = -1.*t9018*t2703;
  t9220 = t9215 + t9217;
  t9024 = t1835*t9018;
  t9130 = t9087*t2703;
  t9134 = t9024 + t9130;
  t9199 = t9196*t4007;
  t9221 = t1828*t9220;
  t9231 = t9199 + t9221;
  t9251 = t1828*t9196;
  t9252 = -1.*t4007*t9220;
  t9253 = t9251 + t9252;
  t5824 = t5689*t4007;
  t6368 = t1828*t5940;
  t6388 = t5824 + t6368;
  t9139 = -1.*t7242*t9134;
  t9263 = t7410*t9134;
  t9347 = t7242*t9134;
  t9505 = -1.*t8054*t9134;
  t9669 = -1.*t7410*t9134;
  t9722 = t8054*t9134;
  t10373 = -1.*t9196*t3877;
  t10547 = t9196*t5689;
  p_output1[0]=t6388*var2[0] + t1828*t2917*var2[1] + t5482*var2[2];
  p_output1[1]=(t7033*t8054 - 1.*t6961*t8127)*var2[0] + (t2917*t4007*t6961 + t7033*t7242)*var2[1] + (t7033*t7410 - 1.*t6961*t7856)*var2[2];
  p_output1[2]=(t6961*t8054 + t7033*t8127)*var2[0] + (-1.*t2917*t4007*t7033 + t6961*t7242)*var2[1] + (t6961*t7410 + t7033*t7856)*var2[2];
  p_output1[3]=(t5482*(t9139 - 1.*t1828*t2917*t9231 + t2917*t4007*t9253) + t1828*t2917*(t5482*t9231 + t7856*t9253 + t9263))*var2[0] + (t6388*(-1.*t5482*t9231 - 1.*t7856*t9253 + t9669) + t5482*(t6388*t9231 + t8127*t9253 + t9722))*var2[1] + (t6388*(t1828*t2917*t9231 - 1.*t2917*t4007*t9253 + t9347) + t1828*t2917*(-1.*t6388*t9231 - 1.*t8127*t9253 + t9505))*var2[2];
  p_output1[4]=(t7410*(t9139 - 1.*t2917*t9220) + t7242*(t3877*t9196 + t5322*t9220 + t9263))*var2[0] + (t8054*(t10373 - 1.*t5322*t9220 + t9669) + t7410*(t10547 + t5940*t9220 + t9722))*var2[1] + (t8054*(t2917*t9220 + t9347) + t7242*(-1.*t5689*t9196 - 1.*t5940*t9220 + t9505))*var2[2];
  p_output1[5]=t3877*(-1.*t2691*t9018 + t2490*t9087)*var2[0] + (t3877*(t10547 + t2490*t3877*t9018 + t2691*t3877*t9087) + t5689*(t10373 - 1.*t2490*t4698*t9018 - 1.*t2691*t4698*t9087))*var2[1] + t5689*(t2691*t9018 - 1.*t2490*t9087)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t3877*(t10547 + t3877*t8961) + t5689*(t10373 - 1.*t4698*t8961))*var2[1] + (-0.15121*t4698 - 0.15121*t5689)*var2[2];
  p_output1[13]=(0.28121*t3722 - 0.305*t3389*t3722 - 1.*t3722*t8915)*var2[0] + (0.28121*t3389 + 0.305*Power(t3722,2) - 1.*t3389*t8915)*var2[2];
  p_output1[14]=-0.305*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
