/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:42 GMT+02:00
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
  double t473;
  double t552;
  double t556;
  double t559;
  double t561;
  double t946;
  double t947;
  double t999;
  double t1037;
  double t1039;
  double t1058;
  double t1075;
  double t1094;
  double t1105;
  t473 = -1.*var3[0];
  t552 = t473 + var3[1];
  t556 = Power(t552,-5);
  t559 = t473 + var1[0];
  t561 = Power(t559,3);
  t946 = Power(t552,-4);
  t947 = Power(t559,2);
  t999 = 1/t552;
  t1037 = -1.*t999*t559;
  t1039 = 1. + t1037;
  t1058 = Power(t552,-3);
  t1075 = Power(t1039,2);
  t1094 = Power(t552,-2);
  t1105 = Power(t1039,3);
  p_output1[0]=20.*t1094*t1105*var2[0] - 40.*t1094*t1105*var2[14] + 60.*t1058*t1075*t559*var2[14] + 20.*t1094*t1105*var2[28] - 120.*t1058*t1075*t559*var2[28] + 60.*t1039*t946*t947*var2[28] + 60.*t1058*t1075*t559*var2[42] + 20.*t556*t561*var2[42] - 120.*t1039*t946*t947*var2[42] - 40.*t556*t561*var2[56] + 60.*t1039*t946*t947*var2[56] + 20.*t556*t561*var2[70];
  p_output1[1]=20.*t1094*t1105*var2[1] - 40.*t1094*t1105*var2[15] + 60.*t1058*t1075*t559*var2[15] + 20.*t1094*t1105*var2[29] - 120.*t1058*t1075*t559*var2[29] + 60.*t1039*t946*t947*var2[29] + 60.*t1058*t1075*t559*var2[43] + 20.*t556*t561*var2[43] - 120.*t1039*t946*t947*var2[43] - 40.*t556*t561*var2[57] + 60.*t1039*t946*t947*var2[57] + 20.*t556*t561*var2[71];
  p_output1[2]=20.*t1094*t1105*var2[2] - 40.*t1094*t1105*var2[16] + 60.*t1058*t1075*t559*var2[16] + 20.*t1094*t1105*var2[30] - 120.*t1058*t1075*t559*var2[30] + 60.*t1039*t946*t947*var2[30] + 60.*t1058*t1075*t559*var2[44] + 20.*t556*t561*var2[44] - 120.*t1039*t946*t947*var2[44] - 40.*t556*t561*var2[58] + 60.*t1039*t946*t947*var2[58] + 20.*t556*t561*var2[72];
  p_output1[3]=20.*t1094*t1105*var2[3] - 40.*t1094*t1105*var2[17] + 60.*t1058*t1075*t559*var2[17] + 20.*t1094*t1105*var2[31] - 120.*t1058*t1075*t559*var2[31] + 60.*t1039*t946*t947*var2[31] + 60.*t1058*t1075*t559*var2[45] + 20.*t556*t561*var2[45] - 120.*t1039*t946*t947*var2[45] - 40.*t556*t561*var2[59] + 60.*t1039*t946*t947*var2[59] + 20.*t556*t561*var2[73];
  p_output1[4]=20.*t1094*t1105*var2[4] - 40.*t1094*t1105*var2[18] + 60.*t1058*t1075*t559*var2[18] + 20.*t1094*t1105*var2[32] - 120.*t1058*t1075*t559*var2[32] + 60.*t1039*t946*t947*var2[32] + 60.*t1058*t1075*t559*var2[46] + 20.*t556*t561*var2[46] - 120.*t1039*t946*t947*var2[46] - 40.*t556*t561*var2[60] + 60.*t1039*t946*t947*var2[60] + 20.*t556*t561*var2[74];
  p_output1[5]=20.*t1094*t1105*var2[5] - 40.*t1094*t1105*var2[19] + 60.*t1058*t1075*t559*var2[19] + 20.*t1094*t1105*var2[33] - 120.*t1058*t1075*t559*var2[33] + 60.*t1039*t946*t947*var2[33] + 60.*t1058*t1075*t559*var2[47] + 20.*t556*t561*var2[47] - 120.*t1039*t946*t947*var2[47] - 40.*t556*t561*var2[61] + 60.*t1039*t946*t947*var2[61] + 20.*t556*t561*var2[75];
  p_output1[6]=20.*t1094*t1105*var2[6] - 40.*t1094*t1105*var2[20] + 60.*t1058*t1075*t559*var2[20] + 20.*t1094*t1105*var2[34] - 120.*t1058*t1075*t559*var2[34] + 60.*t1039*t946*t947*var2[34] + 60.*t1058*t1075*t559*var2[48] + 20.*t556*t561*var2[48] - 120.*t1039*t946*t947*var2[48] - 40.*t556*t561*var2[62] + 60.*t1039*t946*t947*var2[62] + 20.*t556*t561*var2[76];
  p_output1[7]=20.*t1094*t1105*var2[7] - 40.*t1094*t1105*var2[21] + 60.*t1058*t1075*t559*var2[21] + 20.*t1094*t1105*var2[35] - 120.*t1058*t1075*t559*var2[35] + 60.*t1039*t946*t947*var2[35] + 60.*t1058*t1075*t559*var2[49] + 20.*t556*t561*var2[49] - 120.*t1039*t946*t947*var2[49] - 40.*t556*t561*var2[63] + 60.*t1039*t946*t947*var2[63] + 20.*t556*t561*var2[77];
  p_output1[8]=20.*t1094*t1105*var2[8] - 40.*t1094*t1105*var2[22] + 60.*t1058*t1075*t559*var2[22] + 20.*t1094*t1105*var2[36] - 120.*t1058*t1075*t559*var2[36] + 60.*t1039*t946*t947*var2[36] + 60.*t1058*t1075*t559*var2[50] + 20.*t556*t561*var2[50] - 120.*t1039*t946*t947*var2[50] - 40.*t556*t561*var2[64] + 60.*t1039*t946*t947*var2[64] + 20.*t556*t561*var2[78];
  p_output1[9]=20.*t1094*t1105*var2[9] - 40.*t1094*t1105*var2[23] + 60.*t1058*t1075*t559*var2[23] + 20.*t1094*t1105*var2[37] - 120.*t1058*t1075*t559*var2[37] + 60.*t1039*t946*t947*var2[37] + 60.*t1058*t1075*t559*var2[51] + 20.*t556*t561*var2[51] - 120.*t1039*t946*t947*var2[51] - 40.*t556*t561*var2[65] + 60.*t1039*t946*t947*var2[65] + 20.*t556*t561*var2[79];
  p_output1[10]=20.*t1094*t1105*var2[10] - 40.*t1094*t1105*var2[24] + 60.*t1058*t1075*t559*var2[24] + 20.*t1094*t1105*var2[38] - 120.*t1058*t1075*t559*var2[38] + 60.*t1039*t946*t947*var2[38] + 60.*t1058*t1075*t559*var2[52] + 20.*t556*t561*var2[52] - 120.*t1039*t946*t947*var2[52] - 40.*t556*t561*var2[66] + 60.*t1039*t946*t947*var2[66] + 20.*t556*t561*var2[80];
  p_output1[11]=20.*t1094*t1105*var2[11] - 40.*t1094*t1105*var2[25] + 60.*t1058*t1075*t559*var2[25] + 20.*t1094*t1105*var2[39] - 120.*t1058*t1075*t559*var2[39] + 60.*t1039*t946*t947*var2[39] + 60.*t1058*t1075*t559*var2[53] + 20.*t556*t561*var2[53] - 120.*t1039*t946*t947*var2[53] - 40.*t556*t561*var2[67] + 60.*t1039*t946*t947*var2[67] + 20.*t556*t561*var2[81];
  p_output1[12]=20.*t1094*t1105*var2[12] - 40.*t1094*t1105*var2[26] + 60.*t1058*t1075*t559*var2[26] + 20.*t1094*t1105*var2[40] - 120.*t1058*t1075*t559*var2[40] + 60.*t1039*t946*t947*var2[40] + 60.*t1058*t1075*t559*var2[54] + 20.*t556*t561*var2[54] - 120.*t1039*t946*t947*var2[54] - 40.*t556*t561*var2[68] + 60.*t1039*t946*t947*var2[68] + 20.*t556*t561*var2[82];
  p_output1[13]=20.*t1094*t1105*var2[13] - 40.*t1094*t1105*var2[27] + 60.*t1058*t1075*t559*var2[27] + 20.*t1094*t1105*var2[41] - 120.*t1058*t1075*t559*var2[41] + 60.*t1039*t946*t947*var2[41] + 60.*t1058*t1075*t559*var2[55] + 20.*t556*t561*var2[55] - 120.*t1039*t946*t947*var2[55] - 40.*t556*t561*var2[69] + 60.*t1039*t946*t947*var2[69] + 20.*t556*t561*var2[83];
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

#include "Jd2yd_position_ParallelStance.hh"

namespace SymFunction
{

void Jd2yd_position_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
