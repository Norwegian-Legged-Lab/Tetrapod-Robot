/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 17:55:16 GMT+02:00
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
  double t103;
  double t264;
  double t327;
  double t378;
  double t507;
  double t761;
  double t1399;
  double t1000;
  double t1074;
  double t1478;
  double t1171;
  double t1479;
  double t1623;
  double t1797;
  double t1900;
  double t1931;
  double t61;
  double t85;
  double t2542;
  double t2683;
  double t2862;
  double t2863;
  double t3152;
  double t3167;
  double t3193;
  double t3199;
  double t3301;
  double t3322;
  double t3454;
  double t3507;
  double t410;
  double t854;
  double t1655;
  double t1770;
  double t2669;
  double t2682;
  double t3156;
  double t3157;
  double t4024;
  double t4027;
  double t4031;
  double t4044;
  double t4262;
  double t4359;
  double t4457;
  double t4512;
  double t4520;
  double t4555;
  double t4572;
  double t4583;
  double t4689;
  double t4782;
  double t4826;
  double t4911;
  double t4949;
  double t4983;
  double t5206;
  double t5454;
  double t5801;
  double t5819;
  double t5869;
  double t5874;
  double t5119;
  double t6142;
  double t6146;
  double t6147;
  double t6152;
  double t6154;
  double t6223;
  double t6320;
  double t6325;
  double t6326;
  double t6422;
  double t6430;
  double t6438;
  t103 = Sin(var1[3]);
  t264 = Cos(var1[12]);
  t327 = -1.*t264;
  t378 = 1. + t327;
  t507 = Sin(var1[12]);
  t761 = -0.15121*t507;
  t1399 = Cos(var1[3]);
  t1000 = Cos(var1[5]);
  t1074 = Sin(var1[4]);
  t1478 = Sin(var1[5]);
  t1171 = t1000*t103*t1074;
  t1479 = t1399*t1478;
  t1623 = t1171 + t1479;
  t1797 = t1399*t1000;
  t1900 = -1.*t103*t1074*t1478;
  t1931 = t1797 + t1900;
  t61 = Cos(var1[4]);
  t85 = Sin(var1[13]);
  t2542 = Cos(var1[13]);
  t2683 = t264*t1623;
  t2862 = t507*t1931;
  t2863 = t2683 + t2862;
  t3152 = Cos(var1[14]);
  t3167 = t61*t85*t103;
  t3193 = t2542*t2863;
  t3199 = t3167 + t3193;
  t3301 = Sin(var1[14]);
  t3322 = -1.*t2542*t61*t103;
  t3454 = t85*t2863;
  t3507 = t3322 + t3454;
  t410 = 0.15121*t378;
  t854 = t410 + t761;
  t1655 = -0.15121*t378;
  t1770 = t1655 + t761;
  t2669 = -1.*t2542;
  t2682 = 1. + t2669;
  t3156 = -1.*t3152;
  t3157 = 1. + t3156;
  t4024 = -1.*t264*t1399*t61*t1000;
  t4027 = t1399*t61*t507*t1478;
  t4031 = t4024 + t4027;
  t4044 = t1399*t85*t1074;
  t4262 = t2542*t4031;
  t4359 = t4044 + t4262;
  t4457 = -1.*t2542*t1399*t1074;
  t4512 = t85*t4031;
  t4520 = t4457 + t4512;
  t4555 = t1399*t1000*t1074;
  t4572 = -1.*t103*t1478;
  t4583 = t4555 + t4572;
  t4689 = t1000*t103;
  t4782 = t1399*t1074*t1478;
  t4826 = t4689 + t4782;
  t4911 = t507*t4583;
  t4949 = t264*t4826;
  t4983 = t4911 + t4949;
  t5206 = -0.15121*t264;
  t5454 = -1.*t1399*t1000*t1074;
  t5801 = t103*t1478;
  t5819 = t5454 + t5801;
  t5869 = -1.*t507*t5819;
  t5874 = t5869 + t4949;
  t5119 = -1.*t507*t4826;
  t6142 = t264*t5819;
  t6146 = t507*t4826;
  t6147 = t6142 + t6146;
  t6152 = -1.*t1399*t61*t85;
  t6154 = t2542*t6147;
  t6223 = t6152 + t6154;
  t6320 = -1.*t2542*t1399*t61;
  t6325 = -1.*t85*t6147;
  t6326 = t6320 + t6325;
  t6422 = t2542*t1399*t61;
  t6430 = t85*t6147;
  t6438 = t6422 + t6430;
  p_output1[0]=1.;
  p_output1[1]=t1770*t1931 + 0.28121*t2682*t2863 + 0.50321*t3157*t3199 - 0.50321*t3301*t3507 + 0.23321*(t3152*t3199 + t3301*t3507) - 0.15121*(t1931*t264 - 1.*t1623*t507) - 0.28121*t103*t61*t85 + t1623*t854;
  p_output1[2]=0.28121*t2682*t4031 + 0.50321*t3157*t4359 - 0.50321*t3301*t4520 + 0.23321*(t3152*t4359 + t3301*t4520) + t1399*t1478*t1770*t61 - 0.15121*(t1399*t1478*t264*t61 + t1000*t1399*t507*t61) - 0.28121*t1074*t1399*t85 - 1.*t1000*t1399*t61*t854;
  p_output1[3]=t1770*t4583 + 0.28121*t2682*t4983 + 0.50321*t2542*t3157*t4983 - 0.15121*(t264*t4583 + t5119) - 0.50321*t3301*t4983*t85 + 0.23321*(t2542*t3152*t4983 + t3301*t4983*t85) + t4826*t854;
  p_output1[4]=(0.15121*t507 + t5206)*t5819 - 0.15121*(t5119 - 1.*t264*t5819) + 0.28121*t2682*t5874 + 0.50321*t2542*t3157*t5874 + t4826*(t5206 + t761) - 0.50321*t3301*t5874*t85 + 0.23321*(t2542*t3152*t5874 + t3301*t5874*t85);
  p_output1[5]=0.28121*t1399*t2542*t61 - 0.50321*t3301*t6223 + 0.50321*t3157*t6326 + 0.23321*(t3301*t6223 + t3152*t6326) + 0.28121*t6147*t85;
  p_output1[6]=0.50321*t3301*t6223 - 0.50321*t3152*t6438 + 0.23321*(-1.*t3301*t6223 + t3152*t6438);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2.hh"

namespace SymFunction
{

void J_u_frontSwingFootHeight4_ParallelStance2_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
