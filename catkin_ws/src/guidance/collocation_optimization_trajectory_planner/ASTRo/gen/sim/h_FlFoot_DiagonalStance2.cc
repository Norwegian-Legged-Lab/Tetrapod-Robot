/*
 * Automatically Generated from Mathematica.
 * Sun 22 May 2022 16:55:09 GMT+02:00
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
  double t8228;
  double t8244;
  double t8254;
  double t8264;
  double t14677;
  double t14763;
  double t8231;
  double t14846;
  double t14874;
  double t14879;
  double t14880;
  double t14881;
  double t14883;
  double t14884;
  double t14886;
  double t14889;
  double t14890;
  double t14891;
  double t14958;
  double t14965;
  double t14966;
  double t14967;
  double t14779;
  double t14834;
  double t14982;
  double t14980;
  double t14847;
  double t14848;
  double t14981;
  double t14984;
  double t14985;
  double t14987;
  double t14988;
  double t14989;
  double t14876;
  double t14878;
  double t14887;
  double t14888;
  double t14997;
  double t14998;
  double t14999;
  double t15003;
  double t15004;
  double t15006;
  double t15009;
  double t15010;
  double t15011;
  double t15019;
  double t15020;
  double t15021;
  double t15023;
  double t15025;
  double t15026;
  double t15033;
  double t15034;
  double t15035;
  double t15038;
  double t15039;
  double t15040;
  double t15042;
  double t15044;
  double t15045;
  t8228 = Cos(var1[4]);
  t8244 = Cos(var1[6]);
  t8254 = -1.*t8244;
  t8264 = 1. + t8254;
  t14677 = 0.15121*t8264;
  t14763 = Sin(var1[6]);
  t8231 = Sin(var1[5]);
  t14846 = Cos(var1[5]);
  t14874 = Cos(var1[7]);
  t14879 = t8228*t14846*t8244;
  t14880 = -1.*t8228*t8231*t14763;
  t14881 = t14879 + t14880;
  t14883 = Sin(var1[4]);
  t14884 = Sin(var1[7]);
  t14886 = Cos(var1[8]);
  t14889 = t14874*t14881;
  t14890 = -1.*t14883*t14884;
  t14891 = t14889 + t14890;
  t14958 = t14874*t14883;
  t14965 = t14881*t14884;
  t14966 = t14958 + t14965;
  t14967 = Sin(var1[8]);
  t14779 = -0.15121*t14763;
  t14834 = t14677 + t14779;
  t14982 = Sin(var1[3]);
  t14980 = Cos(var1[3]);
  t14847 = 0.15121*t14763;
  t14848 = t14677 + t14847;
  t14981 = t14980*t14846;
  t14984 = -1.*t14982*t14883*t8231;
  t14985 = t14981 + t14984;
  t14987 = t14846*t14982*t14883;
  t14988 = t14980*t8231;
  t14989 = t14987 + t14988;
  t14876 = -1.*t14874;
  t14878 = 1. + t14876;
  t14887 = -1.*t14886;
  t14888 = 1. + t14887;
  t14997 = t8244*t14989;
  t14998 = t14985*t14763;
  t14999 = t14997 + t14998;
  t15003 = t14874*t14999;
  t15004 = t8228*t14982*t14884;
  t15006 = t15003 + t15004;
  t15009 = -1.*t8228*t14874*t14982;
  t15010 = t14999*t14884;
  t15011 = t15009 + t15010;
  t15019 = t14846*t14982;
  t15020 = t14980*t14883*t8231;
  t15021 = t15019 + t15020;
  t15023 = -1.*t14980*t14846*t14883;
  t15025 = t14982*t8231;
  t15026 = t15023 + t15025;
  t15033 = t8244*t15026;
  t15034 = t15021*t14763;
  t15035 = t15033 + t15034;
  t15038 = t14874*t15035;
  t15039 = -1.*t14980*t8228*t14884;
  t15040 = t15038 + t15039;
  t15042 = t14980*t8228*t14874;
  t15044 = t15035*t14884;
  t15045 = t15042 + t15044;
  p_output1[0]=0.28121*t14878*t14881 + 0.28121*t14883*t14884 + 0.50321*t14888*t14891 - 0.50321*t14966*t14967 + 0.23321*(t14886*t14891 + t14966*t14967) + t14846*t14848*t8228 - 1.*t14834*t8228*t8231 + 0.15121*(-1.*t14763*t14846*t8228 - 1.*t8228*t8231*t8244) + var1[0] - 1.*var2[0];
  p_output1[1]=t14834*t14985 + t14848*t14989 + 0.28121*t14878*t14999 + 0.50321*t14888*t15006 - 0.50321*t14967*t15011 + 0.23321*(t14886*t15006 + t14967*t15011) - 0.28121*t14884*t14982*t8228 + 0.15121*(-1.*t14763*t14989 + t14985*t8244) + var1[1] - 1.*var2[1];
  p_output1[2]=t14834*t15021 + t14848*t15026 + 0.28121*t14878*t15035 + 0.50321*t14888*t15040 - 0.50321*t14967*t15045 + 0.23321*(t14886*t15040 + t14967*t15045) + 0.28121*t14884*t14980*t8228 + 0.15121*(-1.*t14763*t15026 + t15021*t8244) + var1[2] - 1.*var2[2];
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

#include "h_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void h_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
