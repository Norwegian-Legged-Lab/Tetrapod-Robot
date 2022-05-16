/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:16 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t2664;
  double t2676;
  double t2677;
  double t2678;
  double t2682;
  double t2906;
  double t2911;
  double t2917;
  double t2918;
  double t2946;
  double t2960;
  double t2961;
  double t3055;
  double t3056;
  t2664 = -1.*var3[0];
  t2676 = t2664 + var3[1];
  t2677 = Power(t2676,-5);
  t2678 = t2664 + var1[0];
  t2682 = Power(t2678,3);
  t2906 = Power(t2676,-4);
  t2911 = Power(t2678,2);
  t2917 = 1/t2676;
  t2918 = -1.*t2917*t2678;
  t2946 = 1. + t2918;
  t2960 = Power(t2676,-3);
  t2961 = Power(t2946,2);
  t3055 = Power(t2676,-2);
  t3056 = Power(t2946,3);
  p_output1[0]=20.*t3055*t3056*var2[0] + 60.*t2678*t2960*t2961*var2[14] - 40.*t3055*t3056*var2[14] + 60.*t2906*t2911*t2946*var2[28] - 120.*t2678*t2960*t2961*var2[28] + 20.*t3055*t3056*var2[28] + 20.*t2677*t2682*var2[42] - 120.*t2906*t2911*t2946*var2[42] + 60.*t2678*t2960*t2961*var2[42] - 40.*t2677*t2682*var2[56] + 60.*t2906*t2911*t2946*var2[56] + 20.*t2677*t2682*var2[70];
  p_output1[1]=20.*t3055*t3056*var2[1] + 60.*t2678*t2960*t2961*var2[15] - 40.*t3055*t3056*var2[15] + 60.*t2906*t2911*t2946*var2[29] - 120.*t2678*t2960*t2961*var2[29] + 20.*t3055*t3056*var2[29] + 20.*t2677*t2682*var2[43] - 120.*t2906*t2911*t2946*var2[43] + 60.*t2678*t2960*t2961*var2[43] - 40.*t2677*t2682*var2[57] + 60.*t2906*t2911*t2946*var2[57] + 20.*t2677*t2682*var2[71];
  p_output1[2]=20.*t3055*t3056*var2[2] + 60.*t2678*t2960*t2961*var2[16] - 40.*t3055*t3056*var2[16] + 60.*t2906*t2911*t2946*var2[30] - 120.*t2678*t2960*t2961*var2[30] + 20.*t3055*t3056*var2[30] + 20.*t2677*t2682*var2[44] - 120.*t2906*t2911*t2946*var2[44] + 60.*t2678*t2960*t2961*var2[44] - 40.*t2677*t2682*var2[58] + 60.*t2906*t2911*t2946*var2[58] + 20.*t2677*t2682*var2[72];
  p_output1[3]=20.*t3055*t3056*var2[3] + 60.*t2678*t2960*t2961*var2[17] - 40.*t3055*t3056*var2[17] + 60.*t2906*t2911*t2946*var2[31] - 120.*t2678*t2960*t2961*var2[31] + 20.*t3055*t3056*var2[31] + 20.*t2677*t2682*var2[45] - 120.*t2906*t2911*t2946*var2[45] + 60.*t2678*t2960*t2961*var2[45] - 40.*t2677*t2682*var2[59] + 60.*t2906*t2911*t2946*var2[59] + 20.*t2677*t2682*var2[73];
  p_output1[4]=20.*t3055*t3056*var2[4] + 60.*t2678*t2960*t2961*var2[18] - 40.*t3055*t3056*var2[18] + 60.*t2906*t2911*t2946*var2[32] - 120.*t2678*t2960*t2961*var2[32] + 20.*t3055*t3056*var2[32] + 20.*t2677*t2682*var2[46] - 120.*t2906*t2911*t2946*var2[46] + 60.*t2678*t2960*t2961*var2[46] - 40.*t2677*t2682*var2[60] + 60.*t2906*t2911*t2946*var2[60] + 20.*t2677*t2682*var2[74];
  p_output1[5]=20.*t3055*t3056*var2[5] + 60.*t2678*t2960*t2961*var2[19] - 40.*t3055*t3056*var2[19] + 60.*t2906*t2911*t2946*var2[33] - 120.*t2678*t2960*t2961*var2[33] + 20.*t3055*t3056*var2[33] + 20.*t2677*t2682*var2[47] - 120.*t2906*t2911*t2946*var2[47] + 60.*t2678*t2960*t2961*var2[47] - 40.*t2677*t2682*var2[61] + 60.*t2906*t2911*t2946*var2[61] + 20.*t2677*t2682*var2[75];
  p_output1[6]=20.*t3055*t3056*var2[6] + 60.*t2678*t2960*t2961*var2[20] - 40.*t3055*t3056*var2[20] + 60.*t2906*t2911*t2946*var2[34] - 120.*t2678*t2960*t2961*var2[34] + 20.*t3055*t3056*var2[34] + 20.*t2677*t2682*var2[48] - 120.*t2906*t2911*t2946*var2[48] + 60.*t2678*t2960*t2961*var2[48] - 40.*t2677*t2682*var2[62] + 60.*t2906*t2911*t2946*var2[62] + 20.*t2677*t2682*var2[76];
  p_output1[7]=20.*t3055*t3056*var2[7] + 60.*t2678*t2960*t2961*var2[21] - 40.*t3055*t3056*var2[21] + 60.*t2906*t2911*t2946*var2[35] - 120.*t2678*t2960*t2961*var2[35] + 20.*t3055*t3056*var2[35] + 20.*t2677*t2682*var2[49] - 120.*t2906*t2911*t2946*var2[49] + 60.*t2678*t2960*t2961*var2[49] - 40.*t2677*t2682*var2[63] + 60.*t2906*t2911*t2946*var2[63] + 20.*t2677*t2682*var2[77];
  p_output1[8]=20.*t3055*t3056*var2[8] + 60.*t2678*t2960*t2961*var2[22] - 40.*t3055*t3056*var2[22] + 60.*t2906*t2911*t2946*var2[36] - 120.*t2678*t2960*t2961*var2[36] + 20.*t3055*t3056*var2[36] + 20.*t2677*t2682*var2[50] - 120.*t2906*t2911*t2946*var2[50] + 60.*t2678*t2960*t2961*var2[50] - 40.*t2677*t2682*var2[64] + 60.*t2906*t2911*t2946*var2[64] + 20.*t2677*t2682*var2[78];
  p_output1[9]=20.*t3055*t3056*var2[9] + 60.*t2678*t2960*t2961*var2[23] - 40.*t3055*t3056*var2[23] + 60.*t2906*t2911*t2946*var2[37] - 120.*t2678*t2960*t2961*var2[37] + 20.*t3055*t3056*var2[37] + 20.*t2677*t2682*var2[51] - 120.*t2906*t2911*t2946*var2[51] + 60.*t2678*t2960*t2961*var2[51] - 40.*t2677*t2682*var2[65] + 60.*t2906*t2911*t2946*var2[65] + 20.*t2677*t2682*var2[79];
  p_output1[10]=20.*t3055*t3056*var2[10] + 60.*t2678*t2960*t2961*var2[24] - 40.*t3055*t3056*var2[24] + 60.*t2906*t2911*t2946*var2[38] - 120.*t2678*t2960*t2961*var2[38] + 20.*t3055*t3056*var2[38] + 20.*t2677*t2682*var2[52] - 120.*t2906*t2911*t2946*var2[52] + 60.*t2678*t2960*t2961*var2[52] - 40.*t2677*t2682*var2[66] + 60.*t2906*t2911*t2946*var2[66] + 20.*t2677*t2682*var2[80];
  p_output1[11]=20.*t3055*t3056*var2[11] + 60.*t2678*t2960*t2961*var2[25] - 40.*t3055*t3056*var2[25] + 60.*t2906*t2911*t2946*var2[39] - 120.*t2678*t2960*t2961*var2[39] + 20.*t3055*t3056*var2[39] + 20.*t2677*t2682*var2[53] - 120.*t2906*t2911*t2946*var2[53] + 60.*t2678*t2960*t2961*var2[53] - 40.*t2677*t2682*var2[67] + 60.*t2906*t2911*t2946*var2[67] + 20.*t2677*t2682*var2[81];
  p_output1[12]=20.*t3055*t3056*var2[12] + 60.*t2678*t2960*t2961*var2[26] - 40.*t3055*t3056*var2[26] + 60.*t2906*t2911*t2946*var2[40] - 120.*t2678*t2960*t2961*var2[40] + 20.*t3055*t3056*var2[40] + 20.*t2677*t2682*var2[54] - 120.*t2906*t2911*t2946*var2[54] + 60.*t2678*t2960*t2961*var2[54] - 40.*t2677*t2682*var2[68] + 60.*t2906*t2911*t2946*var2[68] + 20.*t2677*t2682*var2[82];
  p_output1[13]=20.*t3055*t3056*var2[13] + 60.*t2678*t2960*t2961*var2[27] - 40.*t3055*t3056*var2[27] + 60.*t2906*t2911*t2946*var2[41] - 120.*t2678*t2960*t2961*var2[41] + 20.*t3055*t3056*var2[41] + 20.*t2677*t2682*var2[55] - 120.*t2906*t2911*t2946*var2[55] + 60.*t2678*t2960*t2961*var2[55] - 40.*t2677*t2682*var2[69] + 60.*t2906*t2911*t2946*var2[69] + 20.*t2677*t2682*var2[83];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 84 && ncols == 1) && 
      !(mrows == 1 && ncols == 84))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "Jd2yd_position_DiagonalStance2.hh"

namespace SymFunction
{

void Jd2yd_position_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE