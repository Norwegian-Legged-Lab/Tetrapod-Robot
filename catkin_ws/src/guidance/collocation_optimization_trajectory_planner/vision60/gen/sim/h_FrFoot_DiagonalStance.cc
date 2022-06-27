/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:25 GMT+02:00
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
  double t1799;
  double t1843;
  double t1926;
  double t2062;
  double t2076;
  double t1832;
  double t3006;
  double t1092;
  double t3746;
  double t3753;
  double t3755;
  double t3757;
  double t3885;
  double t3886;
  double t3889;
  double t3892;
  double t3940;
  double t3941;
  double t3942;
  double t1294;
  double t1622;
  double t4001;
  double t2069;
  double t2073;
  double t4004;
  double t4014;
  double t4019;
  double t4027;
  double t4003;
  double t4007;
  double t4008;
  double t4034;
  double t4051;
  double t4054;
  double t3921;
  double t3935;
  double t4057;
  double t4160;
  double t4171;
  double t4202;
  double t4495;
  double t4827;
  double t7166;
  double t7185;
  double t7242;
  double t6370;
  double t6391;
  double t6871;
  double t8861;
  double t8863;
  double t8864;
  double t8889;
  double t8892;
  double t8980;
  double t9130;
  double t9194;
  double t9348;
  t1799 = Cos(var1[4]);
  t1843 = Sin(var1[12]);
  t1926 = Sin(var1[4]);
  t2062 = Cos(var1[12]);
  t2076 = Sin(var1[5]);
  t1832 = Cos(var1[5]);
  t3006 = Sin(var1[13]);
  t1092 = Cos(var1[13]);
  t3746 = t2062*t1926;
  t3753 = t1799*t1843*t2076;
  t3755 = t3746 + t3753;
  t3757 = Sin(var1[14]);
  t3885 = -1.*t1799*t1832*t3006;
  t3886 = t1092*t3755;
  t3889 = t3885 + t3886;
  t3892 = Cos(var1[14]);
  t3940 = t1092*t1799*t1832;
  t3941 = t3006*t3755;
  t3942 = t3940 + t3941;
  t1294 = -1.*t1092;
  t1622 = 1. + t1294;
  t4001 = Sin(var1[3]);
  t2069 = -1.*t2062;
  t2073 = 1. + t2069;
  t4004 = Cos(var1[3]);
  t4014 = t4004*t1832;
  t4019 = -1.*t4001*t1926*t2076;
  t4027 = t4014 + t4019;
  t4003 = t1832*t4001*t1926;
  t4007 = t4004*t2076;
  t4008 = t4003 + t4007;
  t4034 = -1.*t2062*t1799*t4001;
  t4051 = -1.*t1843*t4027;
  t4054 = t4034 + t4051;
  t3921 = -1.*t3892;
  t3935 = 1. + t3921;
  t4057 = -1.*t3006*t4008;
  t4160 = t1092*t4054;
  t4171 = t4057 + t4160;
  t4202 = t1092*t4008;
  t4495 = t3006*t4054;
  t4827 = t4202 + t4495;
  t7166 = t1832*t4001;
  t7185 = t4004*t1926*t2076;
  t7242 = t7166 + t7185;
  t6370 = -1.*t4004*t1832*t1926;
  t6391 = t4001*t2076;
  t6871 = t6370 + t6391;
  t8861 = t2062*t4004*t1799;
  t8863 = -1.*t1843*t7242;
  t8864 = t8861 + t8863;
  t8889 = -1.*t3006*t6871;
  t8892 = t1092*t8864;
  t8980 = t8889 + t8892;
  t9130 = t1092*t6871;
  t9194 = t3006*t8864;
  t9348 = t9130 + t9194;
  p_output1[0]=0.325*t1622*t1799*t1832 + 0.1575*t1843*t1926 + 0.1575*t1799*t2073*t2076 - 0.2255*(t1843*t1926 - 1.*t1799*t2062*t2076) - 0.325*t3006*t3755 + 0.075*t3757*t3889 + 0.075*t3935*t3942 - 0.0641*(t3889*t3892 + t3757*t3942) + 0.355*(-1.*t3757*t3889 + t3892*t3942) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t1799*t1843*t4001 + 0.325*t1622*t4008 - 0.1575*t2073*t4027 - 0.2255*(-1.*t1799*t1843*t4001 + t2062*t4027) - 0.325*t3006*t4054 + 0.075*t3757*t4171 + 0.075*t3935*t4827 - 0.0641*(t3892*t4171 + t3757*t4827) + 0.355*(-1.*t3757*t4171 + t3892*t4827) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t1799*t1843*t4004 + 0.325*t1622*t6871 - 0.1575*t2073*t7242 - 0.2255*(t1799*t1843*t4004 + t2062*t7242) - 0.325*t3006*t8864 + 0.075*t3757*t8980 + 0.075*t3935*t9348 - 0.0641*(t3892*t8980 + t3757*t9348) + 0.355*(-1.*t3757*t8980 + t3892*t9348) + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
