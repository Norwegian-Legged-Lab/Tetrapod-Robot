/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:51:58 GMT+02:00
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
  double t1442;
  double t27445;
  double t2930;
  double t41606;
  double t50256;
  double t41513;
  double t51679;
  double t3341;
  double t52164;
  double t52167;
  double t52224;
  double t34330;
  double t52136;
  double t52389;
  double t52435;
  double t52437;
  double t15888;
  double t40744;
  double t40748;
  double t52537;
  double t52526;
  double t41648;
  double t52076;
  double t52129;
  double t52304;
  double t52327;
  double t52339;
  double t52441;
  double t52443;
  double t52448;
  double t52546;
  double t53413;
  double t53431;
  double t53642;
  double t53645;
  double t53646;
  double t53651;
  double t53652;
  double t53654;
  double t53659;
  double t53661;
  double t53665;
  double t53670;
  double t53671;
  double t53672;
  double t52162;
  double t52372;
  double t52379;
  double t54027;
  double t54039;
  double t54063;
  double t54067;
  double t54072;
  double t54096;
  double t54100;
  double t54104;
  double t54107;
  double t54108;
  double t54111;
  double t54112;
  double t54114;
  double t54122;
  double t54124;
  double t54144;
  double t54047;
  double t54056;
  double t54057;
  double t54117;
  double t54118;
  double t54174;
  double t54177;
  double t54178;
  double t54183;
  double t54187;
  double t54202;
  double t54207;
  double t54121;
  double t54148;
  double t54152;
  double t54184;
  double t54272;
  double t54297;
  double t54302;
  double t54304;
  double t54310;
  double t52383;
  double t52456;
  double t52460;
  double t54154;
  double t54448;
  double t54514;
  double t54557;
  double t54876;
  double t56415;
  double t56625;
  double t56629;
  t1442 = Cos(var1[4]);
  t27445 = Cos(var1[9]);
  t2930 = Cos(var1[5]);
  t41606 = Cos(var1[11]);
  t50256 = Sin(var1[10]);
  t41513 = Cos(var1[10]);
  t51679 = Sin(var1[11]);
  t3341 = Sin(var1[9]);
  t52164 = -1.*t41606*t50256;
  t52167 = t41513*t51679;
  t52224 = t52164 + t52167;
  t34330 = Sin(var1[5]);
  t52136 = Sin(var1[4]);
  t52389 = -1.*t41513*t41606;
  t52435 = -1.*t50256*t51679;
  t52437 = t52389 + t52435;
  t15888 = t2930*t3341;
  t40744 = t27445*t34330;
  t40748 = t15888 + t40744;
  t52537 = Cos(var1[3]);
  t52526 = Sin(var1[3]);
  t41648 = t41513*t41606;
  t52076 = t50256*t51679;
  t52129 = t41648 + t52076;
  t52304 = t27445*t2930*t52224;
  t52327 = -1.*t3341*t52224*t34330;
  t52339 = t52304 + t52327;
  t52441 = t27445*t2930*t52437;
  t52443 = -1.*t3341*t52437*t34330;
  t52448 = t52441 + t52443;
  t52546 = -1.*t27445*t2930;
  t53413 = t3341*t34330;
  t53431 = t52546 + t53413;
  t53642 = t2930*t3341*t52224;
  t53645 = t27445*t52224*t34330;
  t53646 = t53642 + t53645;
  t53651 = t1442*t52129;
  t53652 = -1.*t52136*t52339;
  t53654 = t53651 + t53652;
  t53659 = t2930*t3341*t52437;
  t53661 = t27445*t52437*t34330;
  t53665 = t53659 + t53661;
  t53670 = t1442*t52224;
  t53671 = -1.*t52136*t52448;
  t53672 = t53670 + t53671;
  t52162 = t52129*t52136;
  t52372 = t1442*t52339;
  t52379 = t52162 + t52372;
  t54027 = -1.*t27445;
  t54039 = 1. + t54027;
  t54063 = -1.*t41513;
  t54067 = 1. + t54063;
  t54072 = -0.28121*t54067;
  t54096 = -1.*t41606;
  t54100 = 1. + t54096;
  t54104 = -0.50321*t54100;
  t54107 = -0.23321*t41606;
  t54108 = t54104 + t54107;
  t54111 = t41513*t54108;
  t54112 = 0.27*t50256*t51679;
  t54114 = t54072 + t54111 + t54112;
  t54122 = -0.15121*t54039;
  t54124 = t27445*t54114;
  t54144 = t54122 + t54124;
  t54047 = 0.15121*t54039;
  t54056 = 0.15121*t27445;
  t54057 = 0.15121*t3341;
  t54117 = t3341*t54114;
  t54118 = t54047 + t54056 + t54057 + t54117;
  t54174 = 0.28121*t50256;
  t54177 = t54108*t50256;
  t54178 = -0.27*t41513*t51679;
  t54183 = t54174 + t54177 + t54178;
  t54187 = t2930*t54144;
  t54202 = -1.*t54118*t34330;
  t54207 = t54187 + t54202;
  t54121 = t2930*t54118;
  t54148 = t54144*t34330;
  t54152 = t54121 + t54148;
  t54184 = t54183*t52136;
  t54272 = t1442*t54207;
  t54297 = t54184 + t54272;
  t54302 = t1442*t54183;
  t54304 = -1.*t52136*t54207;
  t54310 = t54302 + t54304;
  t52383 = t52224*t52136;
  t52456 = t1442*t52448;
  t52460 = t52383 + t52456;
  t54154 = -1.*t53431*t54152;
  t54448 = t53646*t54152;
  t54514 = t53431*t54152;
  t54557 = -1.*t53665*t54152;
  t54876 = -1.*t53646*t54152;
  t56415 = t53665*t54152;
  t56625 = -1.*t54183*t52129;
  t56629 = t54183*t52224;
  p_output1[0]=t52460*var2[0] + t1442*t40748*var2[1] + t52379*var2[2];
  p_output1[1]=(t52537*t53665 - 1.*t52526*t53672)*var2[0] + (t40748*t52136*t52526 + t52537*t53431)*var2[1] + (t52537*t53646 - 1.*t52526*t53654)*var2[2];
  p_output1[2]=(t52526*t53665 + t52537*t53672)*var2[0] + (-1.*t40748*t52136*t52537 + t52526*t53431)*var2[1] + (t52526*t53646 + t52537*t53654)*var2[2];
  p_output1[3]=(t52379*(t54154 - 1.*t1442*t40748*t54297 + t40748*t52136*t54310) + t1442*t40748*(t52379*t54297 + t53654*t54310 + t54448))*var2[0] + (t52460*(-1.*t52379*t54297 - 1.*t53654*t54310 + t54876) + t52379*(t52460*t54297 + t53672*t54310 + t56415))*var2[1] + (t52460*(t1442*t40748*t54297 - 1.*t40748*t52136*t54310 + t54514) + t1442*t40748*(-1.*t52460*t54297 - 1.*t53672*t54310 + t54557))*var2[2];
  p_output1[4]=(t53646*(t54154 - 1.*t40748*t54207) + t53431*(t52129*t54183 + t52339*t54207 + t54448))*var2[0] + (t53665*(-1.*t52339*t54207 + t54876 + t56625) + t53646*(t52448*t54207 + t56415 + t56629))*var2[1] + (t53665*(t40748*t54207 + t54514) + t53431*(-1.*t52224*t54183 - 1.*t52448*t54207 + t54557))*var2[2];
  p_output1[5]=t52129*(t27445*t54118 - 1.*t3341*t54144)*var2[0] + (t52224*(-1.*t3341*t52224*t54118 - 1.*t27445*t52224*t54144 + t56625) + t52129*(t3341*t52437*t54118 + t27445*t52437*t54144 + t56629))*var2[1] + t52224*(-1.*t27445*t54118 + t3341*t54144)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t52129 + 0.15121*t52437)*var2[0] + (-0.15121 + t52224*(-1.*t52224*t54114 + t56625) + t52129*(t52437*t54114 + t56629))*var2[1];
  p_output1[10]=(0.28121*t51679 - 0.27*t41606*t51679 + t51679*t54108)*var2[0] + (0.28121*t41606 + 0.27*Power(t51679,2) + t41606*t54108)*var2[2];
  p_output1[11]=-0.27*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
