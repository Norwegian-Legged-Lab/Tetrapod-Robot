/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 18:38:06 GMT+02:00
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
  double t5367;
  double t15233;
  double t10268;
  double t10342;
  double t15261;
  double t3088;
  double t3217;
  double t18751;
  double t19187;
  double t19375;
  double t20205;
  double t20858;
  double t10784;
  double t15280;
  double t15825;
  double t5533;
  double t22691;
  double t25594;
  double t25613;
  double t25735;
  double t25742;
  double t26042;
  double t26043;
  double t26061;
  double t26453;
  double t26587;
  double t27844;
  double t10170;
  double t10220;
  double t19060;
  double t19109;
  double t28049;
  double t28053;
  double t28425;
  double t26062;
  double t26163;
  double t28738;
  double t28841;
  double t28854;
  double t28867;
  double t28892;
  double t28893;
  double t29705;
  double t29712;
  double t29713;
  double t29717;
  double t29718;
  double t29719;
  double t29733;
  double t29735;
  double t29739;
  double t29744;
  double t29932;
  double t29933;
  double t29987;
  double t29991;
  double t30010;
  double t30156;
  double t30160;
  double t30163;
  double t30225;
  double t30227;
  double t30230;
  double t30240;
  double t30245;
  double t30248;
  double t30253;
  double t30328;
  double t30474;
  double t30517;
  double t30521;
  double t30533;
  t5367 = Sin(var1[3]);
  t15233 = Cos(var1[3]);
  t10268 = Cos(var1[5]);
  t10342 = Sin(var1[4]);
  t15261 = Sin(var1[5]);
  t3088 = Cos(var1[4]);
  t3217 = Sin(var1[15]);
  t18751 = Cos(var1[15]);
  t19187 = t15233*t10268;
  t19375 = -1.*t5367*t10342*t15261;
  t20205 = t19187 + t19375;
  t20858 = Sin(var1[16]);
  t10784 = t10268*t5367*t10342;
  t15280 = t15233*t15261;
  t15825 = t10784 + t15280;
  t5533 = Cos(var1[16]);
  t22691 = -1.*t18751*t3088*t5367;
  t25594 = -1.*t3217*t20205;
  t25613 = t22691 + t25594;
  t25735 = Sin(var1[17]);
  t25742 = -1.*t20858*t15825;
  t26042 = t5533*t25613;
  t26043 = t25742 + t26042;
  t26061 = Cos(var1[17]);
  t26453 = t5533*t15825;
  t26587 = t20858*t25613;
  t27844 = t26453 + t26587;
  t10170 = -1.*t5533;
  t10220 = 1. + t10170;
  t19060 = -1.*t18751;
  t19109 = 1. + t19060;
  t28049 = -1.*t18751*t15233*t10342;
  t28053 = -1.*t15233*t3088*t3217*t15261;
  t28425 = t28049 + t28053;
  t26062 = -1.*t26061;
  t26163 = 1. + t26062;
  t28738 = t15233*t3088*t10268*t20858;
  t28841 = t5533*t28425;
  t28854 = t28738 + t28841;
  t28867 = -1.*t5533*t15233*t3088*t10268;
  t28892 = t20858*t28425;
  t28893 = t28867 + t28892;
  t29705 = t15233*t10268*t10342;
  t29712 = -1.*t5367*t15261;
  t29713 = t29705 + t29712;
  t29717 = t10268*t5367;
  t29718 = t15233*t10342*t15261;
  t29719 = t29717 + t29718;
  t29733 = -1.*t3217*t20858*t29713;
  t29735 = t5533*t29719;
  t29739 = t29733 + t29735;
  t29744 = -1.*t5533*t3217*t29713;
  t29932 = -1.*t20858*t29719;
  t29933 = t29744 + t29932;
  t29987 = -1.*t15233*t3088*t3217;
  t29991 = -1.*t18751*t29719;
  t30010 = t29987 + t29991;
  t30156 = t18751*t15233*t3088;
  t30160 = -1.*t3217*t29719;
  t30163 = t30156 + t30160;
  t30225 = -1.*t15233*t10268*t10342;
  t30227 = t5367*t15261;
  t30230 = t30225 + t30227;
  t30240 = -1.*t20858*t30230;
  t30245 = t5533*t30163;
  t30248 = t30240 + t30245;
  t30253 = -1.*t5533*t30230;
  t30328 = -1.*t20858*t30163;
  t30474 = t30253 + t30328;
  t30517 = t5533*t30230;
  t30521 = t20858*t30163;
  t30533 = t30517 + t30521;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t10220*t15825 - 0.1575*t19109*t20205 + 0.325*t20858*t25613 - 0.575*t25735*t26043 - 0.575*t26163*t27844 - 0.0641*(t26043*t26061 + t25735*t27844) - 0.295*(-1.*t25735*t26043 + t26061*t27844) - 0.1575*t3088*t3217*t5367 - 0.2255*(t18751*t20205 - 1.*t3088*t3217*t5367);
  p_output1[2]=0.325*t20858*t28425 - 0.575*t25735*t28854 - 0.575*t26163*t28893 - 0.0641*(t26061*t28854 + t25735*t28893) - 0.295*(-1.*t25735*t28854 + t26061*t28893) + 0.325*t10220*t10268*t15233*t3088 - 0.1575*t15233*t15261*t19109*t3088 - 0.1575*t10342*t15233*t3217 - 0.2255*(t15233*t15261*t18751*t3088 - 1.*t10342*t15233*t3217);
  p_output1[3]=-0.2255*t18751*t29713 - 0.1575*t19109*t29713 - 0.325*t10220*t29719 - 0.575*t26163*t29739 - 0.575*t25735*t29933 - 0.295*(t26061*t29739 - 1.*t25735*t29933) - 0.0641*(t25735*t29739 + t26061*t29933) - 0.325*t20858*t29713*t3217;
  p_output1[4]=0.325*t20858*t30010 - 0.575*t20858*t26163*t30010 - 0.2255*t30163 + 0.1575*t15233*t18751*t3088 - 0.1575*t29719*t3217 - 0.575*t25735*t30010*t5533 - 0.295*(t20858*t26061*t30010 - 1.*t25735*t30010*t5533) - 0.0641*(t20858*t25735*t30010 + t26061*t30010*t5533);
  p_output1[5]=-0.325*t20858*t30230 - 0.575*t26163*t30248 - 0.575*t25735*t30474 - 0.295*(t26061*t30248 - 1.*t25735*t30474) - 0.0641*(t25735*t30248 + t26061*t30474) + 0.325*t30163*t5533;
  p_output1[6]=-0.575*t26061*t30248 - 0.575*t25735*t30533 - 0.295*(-1.*t26061*t30248 - 1.*t25735*t30533) - 0.0641*(-1.*t25735*t30248 + t26061*t30533);
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

#include "J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight1_DiagonalStance_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
