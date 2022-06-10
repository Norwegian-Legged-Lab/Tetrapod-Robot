/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:59 GMT+02:00
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
  double t7677;
  double t7899;
  double t7914;
  double t7918;
  double t7925;
  double t7749;
  double t7878;
  double t7941;
  double t7943;
  double t7944;
  double t7945;
  double t7950;
  double t7960;
  double t7961;
  double t7963;
  double t8039;
  double t8043;
  double t8049;
  double t8058;
  double t7879;
  double t7881;
  double t7900;
  double t7907;
  double t8100;
  double t8089;
  double t8108;
  double t8109;
  double t8110;
  double t7954;
  double t7959;
  double t8093;
  double t8101;
  double t8103;
  double t8133;
  double t8137;
  double t8139;
  double t8144;
  double t8146;
  double t8147;
  double t8157;
  double t8162;
  double t8163;
  double t8201;
  double t8203;
  double t8205;
  double t8192;
  double t8196;
  double t8199;
  double t8214;
  double t8215;
  double t8216;
  double t8219;
  double t8221;
  double t8222;
  double t8224;
  double t8227;
  double t8228;
  t7677 = Cos(var1[4]);
  t7899 = Cos(var1[6]);
  t7914 = Sin(var1[5]);
  t7918 = Sin(var1[4]);
  t7925 = Sin(var1[6]);
  t7749 = Cos(var1[5]);
  t7878 = Cos(var1[7]);
  t7941 = t7899*t7918;
  t7943 = t7677*t7914*t7925;
  t7944 = t7941 + t7943;
  t7945 = Sin(var1[7]);
  t7950 = Cos(var1[8]);
  t7960 = t7677*t7749*t7878;
  t7961 = t7944*t7945;
  t7963 = t7960 + t7961;
  t8039 = t7878*t7944;
  t8043 = -1.*t7677*t7749*t7945;
  t8049 = t8039 + t8043;
  t8058 = Sin(var1[8]);
  t7879 = -1.*t7878;
  t7881 = 1. + t7879;
  t7900 = -1.*t7899;
  t7907 = 1. + t7900;
  t8100 = Cos(var1[3]);
  t8089 = Sin(var1[3]);
  t8108 = t8100*t7749;
  t8109 = -1.*t8089*t7918*t7914;
  t8110 = t8108 + t8109;
  t7954 = -1.*t7950;
  t7959 = 1. + t7954;
  t8093 = t7749*t8089*t7918;
  t8101 = t8100*t7914;
  t8103 = t8093 + t8101;
  t8133 = -1.*t7677*t7899*t8089;
  t8137 = -1.*t8110*t7925;
  t8139 = t8133 + t8137;
  t8144 = t7878*t8103;
  t8146 = t8139*t7945;
  t8147 = t8144 + t8146;
  t8157 = t7878*t8139;
  t8162 = -1.*t8103*t7945;
  t8163 = t8157 + t8162;
  t8201 = t7749*t8089;
  t8203 = t8100*t7918*t7914;
  t8205 = t8201 + t8203;
  t8192 = -1.*t8100*t7749*t7918;
  t8196 = t8089*t7914;
  t8199 = t8192 + t8196;
  t8214 = t8100*t7677*t7899;
  t8215 = -1.*t8205*t7925;
  t8216 = t8214 + t8215;
  t8219 = t7878*t8199;
  t8221 = t8216*t7945;
  t8222 = t8219 + t8221;
  t8224 = t7878*t8216;
  t8227 = -1.*t8199*t7945;
  t8228 = t8224 + t8227;
  p_output1[0]=0.325*t7677*t7749*t7881 - 0.1575*t7677*t7907*t7914 - 0.1575*t7918*t7925 + 0.2255*(-1.*t7677*t7899*t7914 + t7918*t7925) - 0.325*t7944*t7945 + 0.075*t7959*t7963 + 0.075*t8049*t8058 - 0.0641*(t7950*t8049 + t7963*t8058) + 0.355*(t7950*t7963 - 1.*t8049*t8058) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t7677*t7925*t8089 + 0.325*t7881*t8103 + 0.1575*t7907*t8110 + 0.2255*(-1.*t7677*t7925*t8089 + t7899*t8110) - 0.325*t7945*t8139 + 0.075*t7959*t8147 + 0.075*t8058*t8163 - 0.0641*(t8058*t8147 + t7950*t8163) + 0.355*(t7950*t8147 - 1.*t8058*t8163) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t7677*t7925*t8100 + 0.325*t7881*t8199 + 0.1575*t7907*t8205 + 0.2255*(t7677*t7925*t8100 + t7899*t8205) - 0.325*t7945*t8216 + 0.075*t7959*t8222 + 0.075*t8058*t8228 - 0.0641*(t8058*t8222 + t7950*t8228) + 0.355*(t7950*t8222 - 1.*t8058*t8228) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
