/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:15 GMT+02:00
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
  double t3140;
  double t4040;
  double t4120;
  double t5098;
  double t5449;
  double t3569;
  double t5894;
  double t1415;
  double t5955;
  double t5956;
  double t5957;
  double t5980;
  double t5983;
  double t5994;
  double t6013;
  double t6156;
  double t6259;
  double t6425;
  double t6447;
  double t3067;
  double t3076;
  double t10556;
  double t5236;
  double t5336;
  double t12785;
  double t14646;
  double t15214;
  double t15215;
  double t12581;
  double t13343;
  double t13458;
  double t16207;
  double t16221;
  double t16228;
  double t6217;
  double t6258;
  double t16233;
  double t16243;
  double t16304;
  double t16995;
  double t18281;
  double t19092;
  double t31350;
  double t31550;
  double t32279;
  double t29411;
  double t29417;
  double t29424;
  double t33093;
  double t33095;
  double t33434;
  double t34399;
  double t34461;
  double t34542;
  double t34553;
  double t34555;
  double t34567;
  t3140 = Cos(var1[4]);
  t4040 = Sin(var1[9]);
  t4120 = Sin(var1[4]);
  t5098 = Cos(var1[9]);
  t5449 = Sin(var1[5]);
  t3569 = Cos(var1[5]);
  t5894 = Sin(var1[10]);
  t1415 = Cos(var1[10]);
  t5955 = t5098*t4120;
  t5956 = t3140*t4040*t5449;
  t5957 = t5955 + t5956;
  t5980 = Sin(var1[11]);
  t5983 = -1.*t3140*t3569*t5894;
  t5994 = t1415*t5957;
  t6013 = t5983 + t5994;
  t6156 = Cos(var1[11]);
  t6259 = t1415*t3140*t3569;
  t6425 = t5894*t5957;
  t6447 = t6259 + t6425;
  t3067 = -1.*t1415;
  t3076 = 1. + t3067;
  t10556 = Sin(var1[3]);
  t5236 = -1.*t5098;
  t5336 = 1. + t5236;
  t12785 = Cos(var1[3]);
  t14646 = t12785*t3569;
  t15214 = -1.*t10556*t4120*t5449;
  t15215 = t14646 + t15214;
  t12581 = t3569*t10556*t4120;
  t13343 = t12785*t5449;
  t13458 = t12581 + t13343;
  t16207 = -1.*t5098*t3140*t10556;
  t16221 = -1.*t4040*t15215;
  t16228 = t16207 + t16221;
  t6217 = -1.*t6156;
  t6258 = 1. + t6217;
  t16233 = -1.*t5894*t13458;
  t16243 = t1415*t16228;
  t16304 = t16233 + t16243;
  t16995 = t1415*t13458;
  t18281 = t5894*t16228;
  t19092 = t16995 + t18281;
  t31350 = t3569*t10556;
  t31550 = t12785*t4120*t5449;
  t32279 = t31350 + t31550;
  t29411 = -1.*t12785*t3569*t4120;
  t29417 = t10556*t5449;
  t29424 = t29411 + t29417;
  t33093 = t5098*t12785*t3140;
  t33095 = -1.*t4040*t32279;
  t33434 = t33093 + t33095;
  t34399 = -1.*t5894*t29424;
  t34461 = t1415*t33434;
  t34542 = t34399 + t34461;
  t34553 = t1415*t29424;
  t34555 = t5894*t33434;
  t34567 = t34553 + t34555;
  p_output1[0]=-0.325*t3076*t3140*t3569 - 0.1575*t4040*t4120 - 0.1575*t3140*t5336*t5449 + 0.2255*(t4040*t4120 - 1.*t3140*t5098*t5449) + 0.325*t5894*t5957 - 0.575*t5980*t6013 - 0.575*t6258*t6447 - 0.0641*(t6013*t6156 + t5980*t6447) - 0.295*(-1.*t5980*t6013 + t6156*t6447) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.325*t13458*t3076 + 0.1575*t10556*t3140*t4040 + 0.2255*(-1.*t10556*t3140*t4040 + t15215*t5098) + 0.1575*t15215*t5336 + 0.325*t16228*t5894 - 0.575*t16304*t5980 - 0.0641*(t19092*t5980 + t16304*t6156) - 0.295*(-1.*t16304*t5980 + t19092*t6156) - 0.575*t19092*t6258 + var1[1] - 1.*var2[1];
  p_output1[2]=-0.325*t29424*t3076 - 0.1575*t12785*t3140*t4040 + 0.2255*(t12785*t3140*t4040 + t32279*t5098) + 0.1575*t32279*t5336 + 0.325*t33434*t5894 - 0.575*t34542*t5980 - 0.0641*(t34567*t5980 + t34542*t6156) - 0.295*(-1.*t34542*t5980 + t34567*t6156) - 0.575*t34567*t6258 + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
