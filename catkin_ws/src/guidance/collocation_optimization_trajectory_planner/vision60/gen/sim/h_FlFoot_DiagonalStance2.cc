/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:00 GMT+02:00
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
  double t9763;
  double t22620;
  double t22650;
  double t22657;
  double t22669;
  double t13235;
  double t22592;
  double t22687;
  double t22691;
  double t22697;
  double t22701;
  double t22709;
  double t22719;
  double t22720;
  double t22721;
  double t22812;
  double t22817;
  double t22820;
  double t22821;
  double t22593;
  double t22597;
  double t22621;
  double t22629;
  double t22842;
  double t22840;
  double t22851;
  double t22852;
  double t22854;
  double t22710;
  double t22715;
  double t22841;
  double t22845;
  double t22846;
  double t22865;
  double t22867;
  double t22871;
  double t22875;
  double t22876;
  double t22879;
  double t22887;
  double t22894;
  double t22895;
  double t22952;
  double t22961;
  double t22971;
  double t22941;
  double t22942;
  double t22946;
  double t22990;
  double t22991;
  double t22993;
  double t22998;
  double t22999;
  double t23001;
  double t23005;
  double t23012;
  double t23013;
  t9763 = Cos(var1[4]);
  t22620 = Cos(var1[6]);
  t22650 = Sin(var1[5]);
  t22657 = Sin(var1[4]);
  t22669 = Sin(var1[6]);
  t13235 = Cos(var1[5]);
  t22592 = Cos(var1[7]);
  t22687 = t22620*t22657;
  t22691 = t9763*t22650*t22669;
  t22697 = t22687 + t22691;
  t22701 = Sin(var1[7]);
  t22709 = Cos(var1[8]);
  t22719 = t9763*t13235*t22592;
  t22720 = t22697*t22701;
  t22721 = t22719 + t22720;
  t22812 = t22592*t22697;
  t22817 = -1.*t9763*t13235*t22701;
  t22820 = t22812 + t22817;
  t22821 = Sin(var1[8]);
  t22593 = -1.*t22592;
  t22597 = 1. + t22593;
  t22621 = -1.*t22620;
  t22629 = 1. + t22621;
  t22842 = Cos(var1[3]);
  t22840 = Sin(var1[3]);
  t22851 = t22842*t13235;
  t22852 = -1.*t22840*t22657*t22650;
  t22854 = t22851 + t22852;
  t22710 = -1.*t22709;
  t22715 = 1. + t22710;
  t22841 = t13235*t22840*t22657;
  t22845 = t22842*t22650;
  t22846 = t22841 + t22845;
  t22865 = -1.*t9763*t22620*t22840;
  t22867 = -1.*t22854*t22669;
  t22871 = t22865 + t22867;
  t22875 = t22592*t22846;
  t22876 = t22871*t22701;
  t22879 = t22875 + t22876;
  t22887 = t22592*t22871;
  t22894 = -1.*t22846*t22701;
  t22895 = t22887 + t22894;
  t22952 = t13235*t22840;
  t22961 = t22842*t22657*t22650;
  t22971 = t22952 + t22961;
  t22941 = -1.*t22842*t13235*t22657;
  t22942 = t22840*t22650;
  t22946 = t22941 + t22942;
  t22990 = t22842*t9763*t22620;
  t22991 = -1.*t22971*t22669;
  t22993 = t22990 + t22991;
  t22998 = t22592*t22946;
  t22999 = t22993*t22701;
  t23001 = t22998 + t22999;
  t23005 = t22592*t22993;
  t23012 = -1.*t22946*t22701;
  t23013 = t23005 + t23012;
  p_output1[0]=-0.1575*t22657*t22669 - 0.325*t22697*t22701 + 0.075*t22715*t22721 + 0.075*t22820*t22821 - 0.0641*(t22709*t22820 + t22721*t22821) + 0.355*(t22709*t22721 - 1.*t22820*t22821) + 0.325*t13235*t22597*t9763 - 0.1575*t22629*t22650*t9763 + 0.2255*(t22657*t22669 - 1.*t22620*t22650*t9763) + var1[0] - 1.*var2[0];
  p_output1[1]=0.325*t22597*t22846 + 0.1575*t22629*t22854 - 0.325*t22701*t22871 + 0.075*t22715*t22879 + 0.075*t22821*t22895 - 0.0641*(t22821*t22879 + t22709*t22895) + 0.355*(t22709*t22879 - 1.*t22821*t22895) + 0.1575*t22669*t22840*t9763 + 0.2255*(t22620*t22854 - 1.*t22669*t22840*t9763) + var1[1] - 1.*var2[1];
  p_output1[2]=0.325*t22597*t22946 + 0.1575*t22629*t22971 - 0.325*t22701*t22993 + 0.075*t22715*t23001 + 0.075*t22821*t23013 - 0.0641*(t22821*t23001 + t22709*t23013) + 0.355*(t22709*t23001 - 1.*t22821*t23013) - 0.1575*t22669*t22842*t9763 + 0.2255*(t22620*t22971 + t22669*t22842*t9763) + var1[2] - 1.*var2[2];
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
