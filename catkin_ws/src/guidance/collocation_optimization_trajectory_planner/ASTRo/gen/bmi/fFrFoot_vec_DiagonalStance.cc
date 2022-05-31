/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:19 GMT+02:00
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
  double t725;
  double t4296;
  double t787;
  double t7986;
  double t8232;
  double t7566;
  double t8745;
  double t3821;
  double t14722;
  double t14749;
  double t14754;
  double t5088;
  double t11413;
  double t8148;
  double t8755;
  double t11402;
  double t4034;
  double t6929;
  double t7446;
  double t19785;
  double t19675;
  double t14783;
  double t14953;
  double t14957;
  double t15040;
  double t15096;
  double t15117;
  double t15233;
  double t18931;
  double t19071;
  double t20000;
  double t20408;
  double t20413;
  double t20525;
  double t20589;
  double t20643;
  double t20995;
  double t21034;
  double t21039;
  double t21783;
  double t21787;
  double t21809;
  double t21818;
  double t21823;
  double t21824;
  double t11422;
  double t14993;
  double t15014;
  double t25862;
  double t26109;
  double t26974;
  double t26980;
  double t26981;
  double t26998;
  double t27565;
  double t27644;
  double t27785;
  double t27902;
  double t28066;
  double t28067;
  double t28068;
  double t28522;
  double t28553;
  double t28574;
  double t26123;
  double t26182;
  double t26510;
  double t28116;
  double t28280;
  double t28642;
  double t28847;
  double t28883;
  double t28895;
  double t29005;
  double t29186;
  double t29202;
  double t28515;
  double t28578;
  double t28596;
  double t28997;
  double t29508;
  double t29517;
  double t29626;
  double t29652;
  double t29685;
  double t15124;
  double t19087;
  double t19093;
  double t28598;
  double t29797;
  double t29968;
  double t30076;
  double t30408;
  double t30802;
  double t31374;
  double t31433;
  t725 = Cos(var1[4]);
  t4296 = Cos(var1[12]);
  t787 = Cos(var1[5]);
  t7986 = Cos(var1[14]);
  t8232 = Sin(var1[13]);
  t7566 = Cos(var1[13]);
  t8745 = Sin(var1[14]);
  t3821 = Sin(var1[12]);
  t14722 = t7986*t8232;
  t14749 = -1.*t7566*t8745;
  t14754 = t14722 + t14749;
  t5088 = Sin(var1[5]);
  t11413 = Sin(var1[4]);
  t8148 = t7566*t7986;
  t8755 = t8232*t8745;
  t11402 = t8148 + t8755;
  t4034 = -1.*t787*t3821;
  t6929 = -1.*t4296*t5088;
  t7446 = t4034 + t6929;
  t19785 = Cos(var1[3]);
  t19675 = Sin(var1[3]);
  t14783 = t4296*t787*t14754;
  t14953 = -1.*t3821*t14754*t5088;
  t14957 = t14783 + t14953;
  t15040 = -1.*t7986*t8232;
  t15096 = t7566*t8745;
  t15117 = t15040 + t15096;
  t15233 = t4296*t787*t11402;
  t18931 = -1.*t3821*t11402*t5088;
  t19071 = t15233 + t18931;
  t20000 = t4296*t787;
  t20408 = -1.*t3821*t5088;
  t20413 = t20000 + t20408;
  t20525 = t787*t3821*t14754;
  t20589 = t4296*t14754*t5088;
  t20643 = t20525 + t20589;
  t20995 = t725*t11402;
  t21034 = -1.*t11413*t14957;
  t21039 = t20995 + t21034;
  t21783 = t787*t3821*t11402;
  t21787 = t4296*t11402*t5088;
  t21809 = t21783 + t21787;
  t21818 = t725*t15117;
  t21823 = -1.*t11413*t19071;
  t21824 = t21818 + t21823;
  t11422 = t11402*t11413;
  t14993 = t725*t14957;
  t15014 = t11422 + t14993;
  t25862 = -1.*t4296;
  t26109 = 1. + t25862;
  t26974 = -1.*t7566;
  t26980 = 1. + t26974;
  t26981 = 0.28121*t26980;
  t26998 = -1.*t7986;
  t27565 = 1. + t26998;
  t27644 = 0.50321*t27565;
  t27785 = 0.19821*t7986;
  t27902 = t27644 + t27785;
  t28066 = t7566*t27902;
  t28067 = -0.305*t8232*t8745;
  t28068 = t26981 + t28066 + t28067;
  t28522 = 0.15121*t26109;
  t28553 = t4296*t28068;
  t28574 = t28522 + t28553;
  t26123 = -0.15121*t26109;
  t26182 = -0.15121*t4296;
  t26510 = -0.15121*t3821;
  t28116 = t3821*t28068;
  t28280 = t26123 + t26182 + t26510 + t28116;
  t28642 = 0.28121*t8232;
  t28847 = -1.*t27902*t8232;
  t28883 = -0.305*t7566*t8745;
  t28895 = t28642 + t28847 + t28883;
  t29005 = t787*t28574;
  t29186 = -1.*t28280*t5088;
  t29202 = t29005 + t29186;
  t28515 = t787*t28280;
  t28578 = t28574*t5088;
  t28596 = t28515 + t28578;
  t28997 = t28895*t11413;
  t29508 = t725*t29202;
  t29517 = t28997 + t29508;
  t29626 = t725*t28895;
  t29652 = -1.*t11413*t29202;
  t29685 = t29626 + t29652;
  t15124 = t15117*t11413;
  t19087 = t725*t19071;
  t19093 = t15124 + t19087;
  t28598 = -1.*t20413*t28596;
  t29797 = t20643*t28596;
  t29968 = t20413*t28596;
  t30076 = -1.*t21809*t28596;
  t30408 = -1.*t20643*t28596;
  t30802 = t21809*t28596;
  t31374 = -1.*t28895*t11402;
  t31433 = t28895*t15117;
  p_output1[0]=t19093*var2[0] + t725*t7446*var2[1] + t15014*var2[2];
  p_output1[1]=(t19785*t21809 - 1.*t19675*t21824)*var2[0] + (t19785*t20413 + t11413*t19675*t7446)*var2[1] + (t19785*t20643 - 1.*t19675*t21039)*var2[2];
  p_output1[2]=(t19675*t21809 + t19785*t21824)*var2[0] + (t19675*t20413 - 1.*t11413*t19785*t7446)*var2[1] + (t19675*t20643 + t19785*t21039)*var2[2];
  p_output1[3]=((t15014*t29517 + t21039*t29685 + t29797)*t725*t7446 + t15014*(t28598 + t11413*t29685*t7446 - 1.*t29517*t725*t7446))*var2[0] + (t19093*(-1.*t15014*t29517 - 1.*t21039*t29685 + t30408) + t15014*(t19093*t29517 + t21824*t29685 + t30802))*var2[1] + ((-1.*t19093*t29517 - 1.*t21824*t29685 + t30076)*t725*t7446 + t19093*(t29968 - 1.*t11413*t29685*t7446 + t29517*t725*t7446))*var2[2];
  p_output1[4]=(t20413*(t11402*t28895 + t14957*t29202 + t29797) + t20643*(t28598 - 1.*t29202*t7446))*var2[0] + (t21809*(-1.*t14957*t29202 + t30408 + t31374) + t20643*(t19071*t29202 + t30802 + t31433))*var2[1] + (t20413*(-1.*t15117*t28895 - 1.*t19071*t29202 + t30076) + t21809*(t29968 + t29202*t7446))*var2[2];
  p_output1[5]=t11402*(t28574*t3821 - 1.*t28280*t4296)*var2[0] + (t11402*(t31433 + t11402*t28280*t3821 + t11402*t28574*t4296) + t15117*(t31374 - 1.*t14754*t28280*t3821 - 1.*t14754*t28574*t4296))*var2[1] + t15117*(-1.*t28574*t3821 + t28280*t4296)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t15117*(-1.*t14754*t28068 + t31374) + t11402*(t11402*t28068 + t31433))*var2[1] + (-0.15121*t14754 - 0.15121*t15117)*var2[2];
  p_output1[13]=(0.28121*t8745 - 1.*t27902*t8745 - 0.305*t7986*t8745)*var2[0] + (0.28121*t7986 - 1.*t27902*t7986 + 0.305*Power(t8745,2))*var2[2];
  p_output1[14]=-0.305*var2[2];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
