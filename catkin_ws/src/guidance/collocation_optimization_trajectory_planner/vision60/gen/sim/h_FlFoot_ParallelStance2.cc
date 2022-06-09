/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:21 GMT+02:00
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
  double t3089;
  double t6952;
  double t6968;
  double t6971;
  double t6978;
  double t3277;
  double t5003;
  double t7019;
  double t7020;
  double t7023;
  double t7025;
  double t7030;
  double t7036;
  double t7040;
  double t7042;
  double t7044;
  double t7045;
  double t7046;
  double t7047;
  double t5216;
  double t6779;
  double t6957;
  double t6959;
  double t7122;
  double t7120;
  double t7129;
  double t7130;
  double t7131;
  double t7031;
  double t7035;
  double t7121;
  double t7126;
  double t7127;
  double t7140;
  double t7141;
  double t7142;
  double t7144;
  double t7146;
  double t7147;
  double t7153;
  double t7154;
  double t7155;
  double t7199;
  double t7201;
  double t7202;
  double t7183;
  double t7184;
  double t7193;
  double t7218;
  double t7219;
  double t7220;
  double t7225;
  double t7226;
  double t7227;
  double t7229;
  double t7230;
  double t7231;
  t3089 = Cos(var1[4]);
  t6952 = Cos(var1[6]);
  t6968 = Sin(var1[5]);
  t6971 = Sin(var1[4]);
  t6978 = Sin(var1[6]);
  t3277 = Cos(var1[5]);
  t5003 = Cos(var1[7]);
  t7019 = t6952*t6971;
  t7020 = t3089*t6968*t6978;
  t7023 = t7019 + t7020;
  t7025 = Sin(var1[7]);
  t7030 = Cos(var1[8]);
  t7036 = t3089*t3277*t5003;
  t7040 = t7023*t7025;
  t7042 = t7036 + t7040;
  t7044 = t5003*t7023;
  t7045 = -1.*t3089*t3277*t7025;
  t7046 = t7044 + t7045;
  t7047 = Sin(var1[8]);
  t5216 = -1.*t5003;
  t6779 = 1. + t5216;
  t6957 = -1.*t6952;
  t6959 = 1. + t6957;
  t7122 = Cos(var1[3]);
  t7120 = Sin(var1[3]);
  t7129 = t7122*t3277;
  t7130 = -1.*t7120*t6971*t6968;
  t7131 = t7129 + t7130;
  t7031 = -1.*t7030;
  t7035 = 1. + t7031;
  t7121 = t3277*t7120*t6971;
  t7126 = t7122*t6968;
  t7127 = t7121 + t7126;
  t7140 = -1.*t3089*t6952*t7120;
  t7141 = -1.*t7131*t6978;
  t7142 = t7140 + t7141;
  t7144 = t5003*t7127;
  t7146 = t7142*t7025;
  t7147 = t7144 + t7146;
  t7153 = t5003*t7142;
  t7154 = -1.*t7127*t7025;
  t7155 = t7153 + t7154;
  t7199 = t3277*t7120;
  t7201 = t7122*t6971*t6968;
  t7202 = t7199 + t7201;
  t7183 = -1.*t7122*t3277*t6971;
  t7184 = t7120*t6968;
  t7193 = t7183 + t7184;
  t7218 = t7122*t3089*t6952;
  t7219 = -1.*t7202*t6978;
  t7220 = t7218 + t7219;
  t7225 = t5003*t7193;
  t7226 = t7220*t7025;
  t7227 = t7225 + t7226;
  t7229 = t5003*t7220;
  t7230 = -1.*t7193*t7025;
  t7231 = t7229 + t7230;
  p_output1[0]=0.325*t3089*t3277*t6779 - 0.1575*t3089*t6959*t6968 - 0.1575*t6971*t6978 + 0.2255*(-1.*t3089*t6952*t6968 + t6971*t6978) - 0.325*t7023*t7025 + 0.075*t7035*t7042 + 0.075*t7046*t7047 - 0.0641*(t7030*t7046 + t7042*t7047) + 0.355*(t7030*t7042 - 1.*t7046*t7047) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t3089*t6978*t7120 + 0.325*t6779*t7127 + 0.1575*t6959*t7131 + 0.2255*(-1.*t3089*t6978*t7120 + t6952*t7131) - 0.325*t7025*t7142 + 0.075*t7035*t7147 + 0.075*t7047*t7155 - 0.0641*(t7047*t7147 + t7030*t7155) + 0.355*(t7030*t7147 - 1.*t7047*t7155) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t3089*t6978*t7122 + 0.325*t6779*t7193 + 0.1575*t6959*t7202 + 0.2255*(t3089*t6978*t7122 + t6952*t7202) - 0.325*t7025*t7220 + 0.075*t7035*t7227 + 0.075*t7047*t7231 - 0.0641*(t7047*t7227 + t7030*t7231) + 0.355*(t7030*t7227 - 1.*t7047*t7231) + var1[2] - 1.*var2[2];
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
