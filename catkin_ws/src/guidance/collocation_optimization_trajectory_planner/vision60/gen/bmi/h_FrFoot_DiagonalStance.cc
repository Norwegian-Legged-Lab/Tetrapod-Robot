/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 14:27:12 GMT+02:00
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
  double t1716;
  double t1844;
  double t2075;
  double t2098;
  double t2287;
  double t1741;
  double t3240;
  double t627;
  double t3302;
  double t3322;
  double t3336;
  double t3350;
  double t4851;
  double t4868;
  double t4929;
  double t5233;
  double t5464;
  double t5761;
  double t5865;
  double t1286;
  double t1647;
  double t6403;
  double t2104;
  double t2251;
  double t6568;
  double t6761;
  double t6768;
  double t6804;
  double t6474;
  double t6672;
  double t6696;
  double t6877;
  double t6883;
  double t7003;
  double t5328;
  double t5333;
  double t7117;
  double t7125;
  double t7134;
  double t7144;
  double t7154;
  double t7234;
  double t7661;
  double t7666;
  double t7787;
  double t7611;
  double t7614;
  double t7618;
  double t8080;
  double t8084;
  double t8107;
  double t8134;
  double t8155;
  double t8159;
  double t8163;
  double t8206;
  double t8230;
  t1716 = Cos(var1[4]);
  t1844 = Sin(var1[12]);
  t2075 = Sin(var1[4]);
  t2098 = Cos(var1[12]);
  t2287 = Sin(var1[5]);
  t1741 = Cos(var1[5]);
  t3240 = Sin(var1[13]);
  t627 = Cos(var1[13]);
  t3302 = t2098*t2075;
  t3322 = t1716*t1844*t2287;
  t3336 = t3302 + t3322;
  t3350 = Sin(var1[14]);
  t4851 = -1.*t1716*t1741*t3240;
  t4868 = t627*t3336;
  t4929 = t4851 + t4868;
  t5233 = Cos(var1[14]);
  t5464 = t627*t1716*t1741;
  t5761 = t3240*t3336;
  t5865 = t5464 + t5761;
  t1286 = -1.*t627;
  t1647 = 1. + t1286;
  t6403 = Sin(var1[3]);
  t2104 = -1.*t2098;
  t2251 = 1. + t2104;
  t6568 = Cos(var1[3]);
  t6761 = t6568*t1741;
  t6768 = -1.*t6403*t2075*t2287;
  t6804 = t6761 + t6768;
  t6474 = t1741*t6403*t2075;
  t6672 = t6568*t2287;
  t6696 = t6474 + t6672;
  t6877 = -1.*t2098*t1716*t6403;
  t6883 = -1.*t1844*t6804;
  t7003 = t6877 + t6883;
  t5328 = -1.*t5233;
  t5333 = 1. + t5328;
  t7117 = -1.*t3240*t6696;
  t7125 = t627*t7003;
  t7134 = t7117 + t7125;
  t7144 = t627*t6696;
  t7154 = t3240*t7003;
  t7234 = t7144 + t7154;
  t7661 = t1741*t6403;
  t7666 = t6568*t2075*t2287;
  t7787 = t7661 + t7666;
  t7611 = -1.*t6568*t1741*t2075;
  t7614 = t6403*t2287;
  t7618 = t7611 + t7614;
  t8080 = t2098*t6568*t1716;
  t8084 = -1.*t1844*t7787;
  t8107 = t8080 + t8084;
  t8134 = -1.*t3240*t7618;
  t8155 = t627*t8107;
  t8159 = t8134 + t8155;
  t8163 = t627*t7618;
  t8206 = t3240*t8107;
  t8230 = t8163 + t8206;
  p_output1[0]=0.325*t1647*t1716*t1741 + 0.1575*t1844*t2075 + 0.1575*t1716*t2251*t2287 - 0.2255*(t1844*t2075 - 1.*t1716*t2098*t2287) - 0.325*t3240*t3336 + 0.075*t3350*t4929 + 0.075*t5333*t5865 - 0.0641*(t4929*t5233 + t3350*t5865) + 0.355*(-1.*t3350*t4929 + t5233*t5865) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t1716*t1844*t6403 + 0.325*t1647*t6696 - 0.1575*t2251*t6804 - 0.2255*(-1.*t1716*t1844*t6403 + t2098*t6804) - 0.325*t3240*t7003 + 0.075*t3350*t7134 + 0.075*t5333*t7234 - 0.0641*(t5233*t7134 + t3350*t7234) + 0.355*(-1.*t3350*t7134 + t5233*t7234) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t1716*t1844*t6568 + 0.325*t1647*t7618 - 0.1575*t2251*t7787 - 0.2255*(t1716*t1844*t6568 + t2098*t7787) - 0.325*t3240*t8107 + 0.075*t3350*t8159 + 0.075*t5333*t8230 - 0.0641*(t5233*t8159 + t3350*t8230) + 0.355*(-1.*t3350*t8159 + t5233*t8230) + var1[2] - 1.*var2[2];
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
