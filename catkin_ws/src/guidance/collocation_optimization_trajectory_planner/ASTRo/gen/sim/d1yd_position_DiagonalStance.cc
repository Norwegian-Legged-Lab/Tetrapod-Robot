/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:22 GMT+02:00
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
  double t1494;
  double t3541;
  double t4297;
  double t5557;
  double t12723;
  double t28302;
  double t33958;
  double t35955;
  double t36088;
  double t36099;
  double t37135;
  double t37374;
  double t37454;
  double t37501;
  double t37505;
  double t37748;
  t1494 = -1.*var3[0];
  t3541 = t1494 + var3[1];
  t4297 = Power(t3541,-5);
  t5557 = t1494 + var1[0];
  t12723 = Power(t5557,4);
  t28302 = Power(t3541,-4);
  t33958 = Power(t5557,3);
  t35955 = 1/t3541;
  t36088 = -1.*t35955*t5557;
  t36099 = 1. + t36088;
  t37135 = Power(t3541,-3);
  t37374 = Power(t5557,2);
  t37454 = Power(t36099,2);
  t37501 = Power(t3541,-2);
  t37505 = Power(t36099,3);
  t37748 = Power(t36099,4);
  p_output1[0]=-5.*t35955*t37748*var2[0] + 5.*t35955*t37748*var2[11] - 20.*t37501*t37505*t5557*var2[11] - 30.*t37135*t37374*t37454*var2[22] + 20.*t37501*t37505*t5557*var2[22] - 20.*t28302*t33958*t36099*var2[33] + 30.*t37135*t37374*t37454*var2[33] + 20.*t28302*t33958*t36099*var2[44] - 5.*t12723*t4297*var2[44] + 5.*t12723*t4297*var2[55];
  p_output1[1]=-5.*t35955*t37748*var2[1] + 5.*t35955*t37748*var2[12] - 20.*t37501*t37505*t5557*var2[12] - 30.*t37135*t37374*t37454*var2[23] + 20.*t37501*t37505*t5557*var2[23] - 20.*t28302*t33958*t36099*var2[34] + 30.*t37135*t37374*t37454*var2[34] + 20.*t28302*t33958*t36099*var2[45] - 5.*t12723*t4297*var2[45] + 5.*t12723*t4297*var2[56];
  p_output1[2]=-5.*t35955*t37748*var2[2] + 5.*t35955*t37748*var2[13] - 20.*t37501*t37505*t5557*var2[13] - 30.*t37135*t37374*t37454*var2[24] + 20.*t37501*t37505*t5557*var2[24] - 20.*t28302*t33958*t36099*var2[35] + 30.*t37135*t37374*t37454*var2[35] + 20.*t28302*t33958*t36099*var2[46] - 5.*t12723*t4297*var2[46] + 5.*t12723*t4297*var2[57];
  p_output1[3]=-5.*t35955*t37748*var2[3] + 5.*t35955*t37748*var2[14] - 20.*t37501*t37505*t5557*var2[14] - 30.*t37135*t37374*t37454*var2[25] + 20.*t37501*t37505*t5557*var2[25] - 20.*t28302*t33958*t36099*var2[36] + 30.*t37135*t37374*t37454*var2[36] + 20.*t28302*t33958*t36099*var2[47] - 5.*t12723*t4297*var2[47] + 5.*t12723*t4297*var2[58];
  p_output1[4]=-5.*t35955*t37748*var2[4] + 5.*t35955*t37748*var2[15] - 20.*t37501*t37505*t5557*var2[15] - 30.*t37135*t37374*t37454*var2[26] + 20.*t37501*t37505*t5557*var2[26] - 20.*t28302*t33958*t36099*var2[37] + 30.*t37135*t37374*t37454*var2[37] + 20.*t28302*t33958*t36099*var2[48] - 5.*t12723*t4297*var2[48] + 5.*t12723*t4297*var2[59];
  p_output1[5]=-5.*t35955*t37748*var2[5] + 5.*t35955*t37748*var2[16] - 20.*t37501*t37505*t5557*var2[16] - 30.*t37135*t37374*t37454*var2[27] + 20.*t37501*t37505*t5557*var2[27] - 20.*t28302*t33958*t36099*var2[38] + 30.*t37135*t37374*t37454*var2[38] + 20.*t28302*t33958*t36099*var2[49] - 5.*t12723*t4297*var2[49] + 5.*t12723*t4297*var2[60];
  p_output1[6]=-5.*t35955*t37748*var2[6] + 5.*t35955*t37748*var2[17] - 20.*t37501*t37505*t5557*var2[17] - 30.*t37135*t37374*t37454*var2[28] + 20.*t37501*t37505*t5557*var2[28] - 20.*t28302*t33958*t36099*var2[39] + 30.*t37135*t37374*t37454*var2[39] + 20.*t28302*t33958*t36099*var2[50] - 5.*t12723*t4297*var2[50] + 5.*t12723*t4297*var2[61];
  p_output1[7]=-5.*t35955*t37748*var2[7] + 5.*t35955*t37748*var2[18] - 20.*t37501*t37505*t5557*var2[18] - 30.*t37135*t37374*t37454*var2[29] + 20.*t37501*t37505*t5557*var2[29] - 20.*t28302*t33958*t36099*var2[40] + 30.*t37135*t37374*t37454*var2[40] + 20.*t28302*t33958*t36099*var2[51] - 5.*t12723*t4297*var2[51] + 5.*t12723*t4297*var2[62];
  p_output1[8]=-5.*t35955*t37748*var2[8] + 5.*t35955*t37748*var2[19] - 20.*t37501*t37505*t5557*var2[19] - 30.*t37135*t37374*t37454*var2[30] + 20.*t37501*t37505*t5557*var2[30] - 20.*t28302*t33958*t36099*var2[41] + 30.*t37135*t37374*t37454*var2[41] + 20.*t28302*t33958*t36099*var2[52] - 5.*t12723*t4297*var2[52] + 5.*t12723*t4297*var2[63];
  p_output1[9]=-5.*t35955*t37748*var2[9] + 5.*t35955*t37748*var2[20] - 20.*t37501*t37505*t5557*var2[20] - 30.*t37135*t37374*t37454*var2[31] + 20.*t37501*t37505*t5557*var2[31] - 20.*t28302*t33958*t36099*var2[42] + 30.*t37135*t37374*t37454*var2[42] + 20.*t28302*t33958*t36099*var2[53] - 5.*t12723*t4297*var2[53] + 5.*t12723*t4297*var2[64];
  p_output1[10]=-5.*t35955*t37748*var2[10] + 5.*t35955*t37748*var2[21] - 20.*t37501*t37505*t5557*var2[21] - 30.*t37135*t37374*t37454*var2[32] + 20.*t37501*t37505*t5557*var2[32] - 20.*t28302*t33958*t36099*var2[43] + 30.*t37135*t37374*t37454*var2[43] + 20.*t28302*t33958*t36099*var2[54] - 5.*t12723*t4297*var2[54] + 5.*t12723*t4297*var2[65];
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
    ( !(mrows == 66 && ncols == 1) && 
      !(mrows == 1 && ncols == 66))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "d1yd_position_DiagonalStance.hh"

namespace SymFunction
{

void d1yd_position_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
