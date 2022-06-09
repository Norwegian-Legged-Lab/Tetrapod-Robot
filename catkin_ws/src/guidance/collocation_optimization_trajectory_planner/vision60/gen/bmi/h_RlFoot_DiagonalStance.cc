/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:38 GMT+02:00
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
  double t6402;
  double t7987;
  double t7990;
  double t8165;
  double t10698;
  double t7608;
  double t10737;
  double t3318;
  double t10746;
  double t10748;
  double t10753;
  double t10771;
  double t10772;
  double t10773;
  double t10775;
  double t13974;
  double t25365;
  double t27380;
  double t27401;
  double t6394;
  double t6401;
  double t41811;
  double t10105;
  double t10607;
  double t43122;
  double t43174;
  double t43176;
  double t43177;
  double t42895;
  double t43129;
  double t43148;
  double t43240;
  double t43248;
  double t43249;
  double t21204;
  double t25364;
  double t43371;
  double t43379;
  double t43385;
  double t43399;
  double t43407;
  double t43413;
  double t43890;
  double t43891;
  double t43892;
  double t43802;
  double t43817;
  double t43888;
  double t43907;
  double t43908;
  double t43909;
  double t43923;
  double t43925;
  double t43926;
  double t43931;
  double t43936;
  double t43941;
  t6402 = Cos(var1[4]);
  t7987 = Sin(var1[9]);
  t7990 = Sin(var1[4]);
  t8165 = Cos(var1[9]);
  t10698 = Sin(var1[5]);
  t7608 = Cos(var1[5]);
  t10737 = Sin(var1[10]);
  t3318 = Cos(var1[10]);
  t10746 = t8165*t7990;
  t10748 = t6402*t7987*t10698;
  t10753 = t10746 + t10748;
  t10771 = Sin(var1[11]);
  t10772 = -1.*t6402*t7608*t10737;
  t10773 = t3318*t10753;
  t10775 = t10772 + t10773;
  t13974 = Cos(var1[11]);
  t25365 = t3318*t6402*t7608;
  t27380 = t10737*t10753;
  t27401 = t25365 + t27380;
  t6394 = -1.*t3318;
  t6401 = 1. + t6394;
  t41811 = Sin(var1[3]);
  t10105 = -1.*t8165;
  t10607 = 1. + t10105;
  t43122 = Cos(var1[3]);
  t43174 = t43122*t7608;
  t43176 = -1.*t41811*t7990*t10698;
  t43177 = t43174 + t43176;
  t42895 = t7608*t41811*t7990;
  t43129 = t43122*t10698;
  t43148 = t42895 + t43129;
  t43240 = -1.*t8165*t6402*t41811;
  t43248 = -1.*t7987*t43177;
  t43249 = t43240 + t43248;
  t21204 = -1.*t13974;
  t25364 = 1. + t21204;
  t43371 = -1.*t10737*t43148;
  t43379 = t3318*t43249;
  t43385 = t43371 + t43379;
  t43399 = t3318*t43148;
  t43407 = t10737*t43249;
  t43413 = t43399 + t43407;
  t43890 = t7608*t41811;
  t43891 = t43122*t7990*t10698;
  t43892 = t43890 + t43891;
  t43802 = -1.*t43122*t7608*t7990;
  t43817 = t41811*t10698;
  t43888 = t43802 + t43817;
  t43907 = t8165*t43122*t6402;
  t43908 = -1.*t7987*t43892;
  t43909 = t43907 + t43908;
  t43923 = -1.*t10737*t43888;
  t43925 = t3318*t43909;
  t43926 = t43923 + t43925;
  t43931 = t3318*t43888;
  t43936 = t10737*t43909;
  t43941 = t43931 + t43936;
  p_output1[0]=0.325*t10737*t10753 - 0.575*t10771*t10775 - 0.575*t25364*t27401 - 0.0641*(t10775*t13974 + t10771*t27401) - 0.295*(-1.*t10771*t10775 + t13974*t27401) - 0.1575*t10607*t10698*t6402 - 0.325*t6401*t6402*t7608 - 0.1575*t7987*t7990 + 0.2255*(t7987*t7990 - 1.*t10698*t6402*t8165) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t10607*t43177 + 0.325*t10737*t43249 - 0.575*t10771*t43385 - 0.575*t25364*t43413 - 0.0641*(t13974*t43385 + t10771*t43413) - 0.295*(-1.*t10771*t43385 + t13974*t43413) - 0.325*t43148*t6401 + 0.1575*t41811*t6402*t7987 + 0.2255*(-1.*t41811*t6402*t7987 + t43177*t8165) + var1[1] - 1.*var2[1];
  p_output1[2]=0.1575*t10607*t43892 + 0.325*t10737*t43909 - 0.575*t10771*t43926 - 0.575*t25364*t43941 - 0.0641*(t13974*t43926 + t10771*t43941) - 0.295*(-1.*t10771*t43926 + t13974*t43941) - 0.325*t43888*t6401 - 0.1575*t43122*t6402*t7987 + 0.2255*(t43122*t6402*t7987 + t43892*t8165) + var1[2] - 1.*var2[2];
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
