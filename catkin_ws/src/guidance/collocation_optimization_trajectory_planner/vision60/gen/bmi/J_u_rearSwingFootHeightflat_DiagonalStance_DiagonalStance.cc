/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:44 GMT+02:00
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
  double t3602;
  double t5013;
  double t4954;
  double t5002;
  double t5339;
  double t3404;
  double t3487;
  double t5422;
  double t6911;
  double t6912;
  double t6913;
  double t6953;
  double t5006;
  double t5344;
  double t5355;
  double t4653;
  double t6966;
  double t6982;
  double t6984;
  double t6990;
  double t6991;
  double t7037;
  double t7080;
  double t7253;
  double t7265;
  double t7270;
  double t7271;
  double t4654;
  double t4655;
  double t5423;
  double t5427;
  double t7369;
  double t7376;
  double t7383;
  double t7259;
  double t7262;
  double t7534;
  double t7537;
  double t7542;
  double t7549;
  double t7550;
  double t7589;
  double t7670;
  double t7671;
  double t7698;
  double t7722;
  double t7732;
  double t7739;
  double t7759;
  double t7767;
  double t7783;
  double t7801;
  double t7838;
  double t7862;
  double t7986;
  double t7990;
  double t7992;
  double t8001;
  double t8002;
  double t8003;
  double t8036;
  double t8060;
  double t8074;
  double t8218;
  double t8223;
  double t8231;
  double t8252;
  double t8256;
  double t8259;
  double t8299;
  double t8300;
  double t8301;
  t3602 = Sin(var1[3]);
  t5013 = Cos(var1[3]);
  t4954 = Cos(var1[5]);
  t5002 = Sin(var1[4]);
  t5339 = Sin(var1[5]);
  t3404 = Cos(var1[4]);
  t3487 = Sin(var1[15]);
  t5422 = Cos(var1[15]);
  t6911 = t5013*t4954;
  t6912 = -1.*t3602*t5002*t5339;
  t6913 = t6911 + t6912;
  t6953 = Sin(var1[16]);
  t5006 = t4954*t3602*t5002;
  t5344 = t5013*t5339;
  t5355 = t5006 + t5344;
  t4653 = Cos(var1[16]);
  t6966 = -1.*t5422*t3404*t3602;
  t6982 = -1.*t3487*t6913;
  t6984 = t6966 + t6982;
  t6990 = Sin(var1[17]);
  t6991 = -1.*t6953*t5355;
  t7037 = t4653*t6984;
  t7080 = t6991 + t7037;
  t7253 = Cos(var1[17]);
  t7265 = t4653*t5355;
  t7270 = t6953*t6984;
  t7271 = t7265 + t7270;
  t4654 = -1.*t4653;
  t4655 = 1. + t4654;
  t5423 = -1.*t5422;
  t5427 = 1. + t5423;
  t7369 = -1.*t5422*t5013*t5002;
  t7376 = -1.*t5013*t3404*t3487*t5339;
  t7383 = t7369 + t7376;
  t7259 = -1.*t7253;
  t7262 = 1. + t7259;
  t7534 = t5013*t3404*t4954*t6953;
  t7537 = t4653*t7383;
  t7542 = t7534 + t7537;
  t7549 = -1.*t4653*t5013*t3404*t4954;
  t7550 = t6953*t7383;
  t7589 = t7549 + t7550;
  t7670 = t5013*t4954*t5002;
  t7671 = -1.*t3602*t5339;
  t7698 = t7670 + t7671;
  t7722 = t4954*t3602;
  t7732 = t5013*t5002*t5339;
  t7739 = t7722 + t7732;
  t7759 = -1.*t3487*t6953*t7698;
  t7767 = t4653*t7739;
  t7783 = t7759 + t7767;
  t7801 = -1.*t4653*t3487*t7698;
  t7838 = -1.*t6953*t7739;
  t7862 = t7801 + t7838;
  t7986 = -1.*t5013*t3404*t3487;
  t7990 = -1.*t5422*t7739;
  t7992 = t7986 + t7990;
  t8001 = t5422*t5013*t3404;
  t8002 = -1.*t3487*t7739;
  t8003 = t8001 + t8002;
  t8036 = -1.*t5013*t4954*t5002;
  t8060 = t3602*t5339;
  t8074 = t8036 + t8060;
  t8218 = -1.*t6953*t8074;
  t8223 = t4653*t8003;
  t8231 = t8218 + t8223;
  t8252 = -1.*t4653*t8074;
  t8256 = -1.*t6953*t8003;
  t8259 = t8252 + t8256;
  t8299 = t4653*t8074;
  t8300 = t6953*t8003;
  t8301 = t8299 + t8300;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t3404*t3487*t3602 - 0.325*t4655*t5355 - 0.1575*t5427*t6913 - 0.2255*(-1.*t3404*t3487*t3602 + t5422*t6913) + 0.325*t6953*t6984 - 0.575*t6990*t7080 - 0.575*t7262*t7271 - 0.0641*(t7080*t7253 + t6990*t7271) - 0.295*(-1.*t6990*t7080 + t7253*t7271);
  p_output1[2]=0.325*t3404*t4655*t4954*t5013 - 0.1575*t3487*t5002*t5013 - 0.2255*(-1.*t3487*t5002*t5013 + t3404*t5013*t5339*t5422) - 0.1575*t3404*t5013*t5339*t5427 + 0.325*t6953*t7383 - 0.575*t6990*t7542 - 0.575*t7262*t7589 - 0.0641*(t7253*t7542 + t6990*t7589) - 0.295*(-1.*t6990*t7542 + t7253*t7589);
  p_output1[3]=-0.2255*t5422*t7698 - 0.1575*t5427*t7698 - 0.325*t3487*t6953*t7698 - 0.325*t4655*t7739 - 0.575*t7262*t7783 - 0.575*t6990*t7862 - 0.295*(t7253*t7783 - 1.*t6990*t7862) - 0.0641*(t6990*t7783 + t7253*t7862);
  p_output1[4]=0.1575*t3404*t5013*t5422 - 0.1575*t3487*t7739 + 0.325*t6953*t7992 - 0.575*t4653*t6990*t7992 - 0.575*t6953*t7262*t7992 - 0.0641*(t6953*t6990*t7992 + t4653*t7253*t7992) - 0.295*(-1.*t4653*t6990*t7992 + t6953*t7253*t7992) - 0.2255*t8003;
  p_output1[5]=0.325*t4653*t8003 - 0.325*t6953*t8074 - 0.575*t7262*t8231 - 0.575*t6990*t8259 - 0.295*(t7253*t8231 - 1.*t6990*t8259) - 0.0641*(t6990*t8231 + t7253*t8259);
  p_output1[6]=-0.575*t7253*t8231 - 0.575*t6990*t8301 - 0.295*(-1.*t7253*t8231 - 1.*t6990*t8301) - 0.0641*(-1.*t6990*t8231 + t7253*t8301);
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

#include "J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeightflat_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
