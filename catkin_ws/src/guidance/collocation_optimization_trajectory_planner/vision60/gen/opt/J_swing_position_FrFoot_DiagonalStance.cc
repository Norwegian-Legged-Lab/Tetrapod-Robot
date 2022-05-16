/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:27 GMT+02:00
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
  double t5318;
  double t6221;
  double t6199;
  double t6204;
  double t6223;
  double t545;
  double t4310;
  double t6404;
  double t6470;
  double t6483;
  double t6532;
  double t6580;
  double t6216;
  double t6233;
  double t6261;
  double t5539;
  double t6582;
  double t6601;
  double t6606;
  double t6608;
  double t6618;
  double t6619;
  double t6640;
  double t6676;
  double t6697;
  double t6699;
  double t6706;
  double t6186;
  double t6195;
  double t6405;
  double t6450;
  double t6790;
  double t6791;
  double t6803;
  double t6691;
  double t6692;
  double t6805;
  double t6807;
  double t6808;
  double t6813;
  double t6814;
  double t6815;
  double t6841;
  double t6842;
  double t6845;
  double t6851;
  double t6852;
  double t6857;
  double t6861;
  double t6873;
  double t6874;
  double t6886;
  double t6890;
  double t6891;
  double t6914;
  double t6915;
  double t6917;
  double t6936;
  double t6937;
  double t6938;
  double t6966;
  double t6969;
  double t6970;
  double t6974;
  double t6975;
  double t6979;
  double t6995;
  double t6996;
  double t6997;
  double t7141;
  double t7163;
  double t7165;
  t5318 = Sin(var1[3]);
  t6221 = Cos(var1[3]);
  t6199 = Cos(var1[5]);
  t6204 = Sin(var1[4]);
  t6223 = Sin(var1[5]);
  t545 = Cos(var1[4]);
  t4310 = Sin(var1[12]);
  t6404 = Cos(var1[12]);
  t6470 = t6221*t6199;
  t6483 = -1.*t5318*t6204*t6223;
  t6532 = t6470 + t6483;
  t6580 = Sin(var1[13]);
  t6216 = t6199*t5318*t6204;
  t6233 = t6221*t6223;
  t6261 = t6216 + t6233;
  t5539 = Cos(var1[13]);
  t6582 = -1.*t6404*t545*t5318;
  t6601 = -1.*t4310*t6532;
  t6606 = t6582 + t6601;
  t6608 = Sin(var1[14]);
  t6618 = -1.*t6580*t6261;
  t6619 = t5539*t6606;
  t6640 = t6618 + t6619;
  t6676 = Cos(var1[14]);
  t6697 = t5539*t6261;
  t6699 = t6580*t6606;
  t6706 = t6697 + t6699;
  t6186 = -1.*t5539;
  t6195 = 1. + t6186;
  t6405 = -1.*t6404;
  t6450 = 1. + t6405;
  t6790 = -1.*t6404*t6221*t6204;
  t6791 = -1.*t6221*t545*t4310*t6223;
  t6803 = t6790 + t6791;
  t6691 = -1.*t6676;
  t6692 = 1. + t6691;
  t6805 = t6221*t545*t6199*t6580;
  t6807 = t5539*t6803;
  t6808 = t6805 + t6807;
  t6813 = -1.*t5539*t6221*t545*t6199;
  t6814 = t6580*t6803;
  t6815 = t6813 + t6814;
  t6841 = t6221*t6199*t6204;
  t6842 = -1.*t5318*t6223;
  t6845 = t6841 + t6842;
  t6851 = t6199*t5318;
  t6852 = t6221*t6204*t6223;
  t6857 = t6851 + t6852;
  t6861 = -1.*t4310*t6580*t6845;
  t6873 = t5539*t6857;
  t6874 = t6861 + t6873;
  t6886 = -1.*t5539*t4310*t6845;
  t6890 = -1.*t6580*t6857;
  t6891 = t6886 + t6890;
  t6914 = -1.*t6221*t545*t4310;
  t6915 = -1.*t6404*t6857;
  t6917 = t6914 + t6915;
  t6936 = t6404*t6221*t545;
  t6937 = -1.*t4310*t6857;
  t6938 = t6936 + t6937;
  t6966 = -1.*t6221*t6199*t6204;
  t6969 = t5318*t6223;
  t6970 = t6966 + t6969;
  t6974 = -1.*t6580*t6970;
  t6975 = t5539*t6938;
  t6979 = t6974 + t6975;
  t6995 = -1.*t5539*t6970;
  t6996 = -1.*t6580*t6938;
  t6997 = t6995 + t6996;
  t7141 = t5539*t6970;
  t7163 = t6580*t6938;
  t7165 = t7141 + t7163;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t4310*t5318*t545 + 0.325*t6195*t6261 - 0.1575*t6450*t6532 - 0.2255*(-1.*t4310*t5318*t545 + t6404*t6532) - 0.325*t6580*t6606 + 0.075*t6608*t6640 + 0.075*t6692*t6706 - 0.0641*(t6640*t6676 + t6608*t6706) + 0.355*(-1.*t6608*t6640 + t6676*t6706);
  p_output1[2]=-0.325*t545*t6195*t6199*t6221 - 0.1575*t4310*t6204*t6221 - 0.2255*(-1.*t4310*t6204*t6221 + t545*t6221*t6223*t6404) - 0.1575*t545*t6221*t6223*t6450 - 0.325*t6580*t6803 + 0.075*t6608*t6808 + 0.075*t6692*t6815 - 0.0641*(t6676*t6808 + t6608*t6815) + 0.355*(-1.*t6608*t6808 + t6676*t6815);
  p_output1[3]=-0.2255*t6404*t6845 - 0.1575*t6450*t6845 + 0.325*t4310*t6580*t6845 + 0.325*t6195*t6857 + 0.075*t6692*t6874 + 0.075*t6608*t6891 + 0.355*(t6676*t6874 - 1.*t6608*t6891) - 0.0641*(t6608*t6874 + t6676*t6891);
  p_output1[4]=0.1575*t545*t6221*t6404 - 0.1575*t4310*t6857 - 0.325*t6580*t6917 + 0.075*t5539*t6608*t6917 + 0.075*t6580*t6692*t6917 - 0.0641*(t6580*t6608*t6917 + t5539*t6676*t6917) + 0.355*(-1.*t5539*t6608*t6917 + t6580*t6676*t6917) - 0.2255*t6938;
  p_output1[5]=-0.325*t5539*t6938 + 0.325*t6580*t6970 + 0.075*t6692*t6979 + 0.075*t6608*t6997 + 0.355*(t6676*t6979 - 1.*t6608*t6997) - 0.0641*(t6608*t6979 + t6676*t6997);
  p_output1[6]=0.075*t6676*t6979 + 0.075*t6608*t7165 + 0.355*(-1.*t6676*t6979 - 1.*t6608*t7165) - 0.0641*(-1.*t6608*t6979 + t6676*t7165);
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

#include "J_swing_position_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
