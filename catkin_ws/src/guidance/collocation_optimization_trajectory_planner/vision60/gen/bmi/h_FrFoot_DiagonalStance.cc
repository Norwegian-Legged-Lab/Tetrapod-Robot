/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:36 GMT+02:00
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
  double t21025;
  double t42568;
  double t42570;
  double t42573;
  double t42586;
  double t21415;
  double t42605;
  double t6918;
  double t42618;
  double t42619;
  double t42621;
  double t42624;
  double t42836;
  double t42837;
  double t42839;
  double t42841;
  double t42852;
  double t42854;
  double t42855;
  double t19416;
  double t20916;
  double t42876;
  double t42582;
  double t42585;
  double t42882;
  double t42890;
  double t43061;
  double t43062;
  double t42880;
  double t42887;
  double t42888;
  double t43091;
  double t43092;
  double t43094;
  double t42845;
  double t42847;
  double t43096;
  double t43101;
  double t43102;
  double t43107;
  double t43108;
  double t43110;
  double t43153;
  double t43156;
  double t43157;
  double t43139;
  double t43141;
  double t43142;
  double t43369;
  double t43377;
  double t43389;
  double t43391;
  double t43402;
  double t43403;
  double t43449;
  double t43450;
  double t43451;
  t21025 = Cos(var1[4]);
  t42568 = Sin(var1[12]);
  t42570 = Sin(var1[4]);
  t42573 = Cos(var1[12]);
  t42586 = Sin(var1[5]);
  t21415 = Cos(var1[5]);
  t42605 = Sin(var1[13]);
  t6918 = Cos(var1[13]);
  t42618 = t42573*t42570;
  t42619 = t21025*t42568*t42586;
  t42621 = t42618 + t42619;
  t42624 = Sin(var1[14]);
  t42836 = -1.*t21025*t21415*t42605;
  t42837 = t6918*t42621;
  t42839 = t42836 + t42837;
  t42841 = Cos(var1[14]);
  t42852 = t6918*t21025*t21415;
  t42854 = t42605*t42621;
  t42855 = t42852 + t42854;
  t19416 = -1.*t6918;
  t20916 = 1. + t19416;
  t42876 = Sin(var1[3]);
  t42582 = -1.*t42573;
  t42585 = 1. + t42582;
  t42882 = Cos(var1[3]);
  t42890 = t42882*t21415;
  t43061 = -1.*t42876*t42570*t42586;
  t43062 = t42890 + t43061;
  t42880 = t21415*t42876*t42570;
  t42887 = t42882*t42586;
  t42888 = t42880 + t42887;
  t43091 = -1.*t42573*t21025*t42876;
  t43092 = -1.*t42568*t43062;
  t43094 = t43091 + t43092;
  t42845 = -1.*t42841;
  t42847 = 1. + t42845;
  t43096 = -1.*t42605*t42888;
  t43101 = t6918*t43094;
  t43102 = t43096 + t43101;
  t43107 = t6918*t42888;
  t43108 = t42605*t43094;
  t43110 = t43107 + t43108;
  t43153 = t21415*t42876;
  t43156 = t42882*t42570*t42586;
  t43157 = t43153 + t43156;
  t43139 = -1.*t42882*t21415*t42570;
  t43141 = t42876*t42586;
  t43142 = t43139 + t43141;
  t43369 = t42573*t42882*t21025;
  t43377 = -1.*t42568*t43157;
  t43389 = t43369 + t43377;
  t43391 = -1.*t42605*t43142;
  t43402 = t6918*t43389;
  t43403 = t43391 + t43402;
  t43449 = t6918*t43142;
  t43450 = t42605*t43389;
  t43451 = t43449 + t43450;
  p_output1[0]=0.325*t20916*t21025*t21415 + 0.1575*t42568*t42570 + 0.1575*t21025*t42585*t42586 - 0.2255*(t42568*t42570 - 1.*t21025*t42573*t42586) - 0.325*t42605*t42621 + 0.075*t42624*t42839 + 0.075*t42847*t42855 - 0.0641*(t42839*t42841 + t42624*t42855) + 0.355*(-1.*t42624*t42839 + t42841*t42855) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.1575*t21025*t42568*t42876 + 0.325*t20916*t42888 - 0.1575*t42585*t43062 - 0.2255*(-1.*t21025*t42568*t42876 + t42573*t43062) - 0.325*t42605*t43094 + 0.075*t42624*t43102 + 0.075*t42847*t43110 - 0.0641*(t42841*t43102 + t42624*t43110) + 0.355*(-1.*t42624*t43102 + t42841*t43110) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t21025*t42568*t42882 + 0.325*t20916*t43142 - 0.1575*t42585*t43157 - 0.2255*(t21025*t42568*t42882 + t42573*t43157) - 0.325*t42605*t43389 + 0.075*t42624*t43403 + 0.075*t42847*t43451 - 0.0641*(t42841*t43403 + t42624*t43451) + 0.355*(-1.*t42624*t43403 + t42841*t43451) + var1[2] - 1.*var2[2];
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
