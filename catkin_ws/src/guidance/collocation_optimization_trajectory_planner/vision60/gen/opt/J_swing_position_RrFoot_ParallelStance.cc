/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:27 GMT+02:00
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
  double t26362;
  double t26522;
  double t26512;
  double t26520;
  double t26573;
  double t26359;
  double t26361;
  double t26652;
  double t26688;
  double t26689;
  double t26692;
  double t26702;
  double t26521;
  double t26588;
  double t26600;
  double t26474;
  double t26703;
  double t26708;
  double t26722;
  double t26724;
  double t26732;
  double t26741;
  double t26745;
  double t26750;
  double t26763;
  double t26768;
  double t26771;
  double t26477;
  double t26511;
  double t26684;
  double t26687;
  double t26841;
  double t26849;
  double t26850;
  double t26758;
  double t26759;
  double t26852;
  double t26854;
  double t26855;
  double t26859;
  double t26861;
  double t26862;
  double t26891;
  double t26892;
  double t26898;
  double t26920;
  double t26921;
  double t26922;
  double t26927;
  double t26931;
  double t26935;
  double t26943;
  double t26944;
  double t26948;
  double t26993;
  double t26994;
  double t26995;
  double t27004;
  double t27010;
  double t27013;
  double t27055;
  double t27060;
  double t27062;
  double t27068;
  double t27070;
  double t27071;
  double t27081;
  double t27085;
  double t27087;
  double t27138;
  double t27139;
  double t27140;
  t26362 = Sin(var1[3]);
  t26522 = Cos(var1[3]);
  t26512 = Cos(var1[5]);
  t26520 = Sin(var1[4]);
  t26573 = Sin(var1[5]);
  t26359 = Cos(var1[4]);
  t26361 = Sin(var1[15]);
  t26652 = Cos(var1[15]);
  t26688 = t26522*t26512;
  t26689 = -1.*t26362*t26520*t26573;
  t26692 = t26688 + t26689;
  t26702 = Sin(var1[16]);
  t26521 = t26512*t26362*t26520;
  t26588 = t26522*t26573;
  t26600 = t26521 + t26588;
  t26474 = Cos(var1[16]);
  t26703 = -1.*t26652*t26359*t26362;
  t26708 = -1.*t26361*t26692;
  t26722 = t26703 + t26708;
  t26724 = Sin(var1[17]);
  t26732 = -1.*t26702*t26600;
  t26741 = t26474*t26722;
  t26745 = t26732 + t26741;
  t26750 = Cos(var1[17]);
  t26763 = t26474*t26600;
  t26768 = t26702*t26722;
  t26771 = t26763 + t26768;
  t26477 = -1.*t26474;
  t26511 = 1. + t26477;
  t26684 = -1.*t26652;
  t26687 = 1. + t26684;
  t26841 = -1.*t26652*t26522*t26520;
  t26849 = -1.*t26522*t26359*t26361*t26573;
  t26850 = t26841 + t26849;
  t26758 = -1.*t26750;
  t26759 = 1. + t26758;
  t26852 = t26522*t26359*t26512*t26702;
  t26854 = t26474*t26850;
  t26855 = t26852 + t26854;
  t26859 = -1.*t26474*t26522*t26359*t26512;
  t26861 = t26702*t26850;
  t26862 = t26859 + t26861;
  t26891 = t26522*t26512*t26520;
  t26892 = -1.*t26362*t26573;
  t26898 = t26891 + t26892;
  t26920 = t26512*t26362;
  t26921 = t26522*t26520*t26573;
  t26922 = t26920 + t26921;
  t26927 = -1.*t26361*t26702*t26898;
  t26931 = t26474*t26922;
  t26935 = t26927 + t26931;
  t26943 = -1.*t26474*t26361*t26898;
  t26944 = -1.*t26702*t26922;
  t26948 = t26943 + t26944;
  t26993 = -1.*t26522*t26359*t26361;
  t26994 = -1.*t26652*t26922;
  t26995 = t26993 + t26994;
  t27004 = t26652*t26522*t26359;
  t27010 = -1.*t26361*t26922;
  t27013 = t27004 + t27010;
  t27055 = -1.*t26522*t26512*t26520;
  t27060 = t26362*t26573;
  t27062 = t27055 + t27060;
  t27068 = -1.*t26702*t27062;
  t27070 = t26474*t27013;
  t27071 = t27068 + t27070;
  t27081 = -1.*t26474*t27062;
  t27085 = -1.*t26702*t27013;
  t27087 = t27081 + t27085;
  t27138 = t26474*t27062;
  t27139 = t26702*t27013;
  t27140 = t27138 + t27139;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t26359*t26361*t26362 - 0.325*t26511*t26600 - 0.1575*t26687*t26692 - 0.2255*(-1.*t26359*t26361*t26362 + t26652*t26692) + 0.325*t26702*t26722 - 0.575*t26724*t26745 - 0.575*t26759*t26771 - 0.0641*(t26745*t26750 + t26724*t26771) - 0.295*(-1.*t26724*t26745 + t26750*t26771);
  p_output1[2]=0.325*t26359*t26511*t26512*t26522 - 0.1575*t26361*t26520*t26522 - 0.2255*(-1.*t26361*t26520*t26522 + t26359*t26522*t26573*t26652) - 0.1575*t26359*t26522*t26573*t26687 + 0.325*t26702*t26850 - 0.575*t26724*t26855 - 0.575*t26759*t26862 - 0.0641*(t26750*t26855 + t26724*t26862) - 0.295*(-1.*t26724*t26855 + t26750*t26862);
  p_output1[3]=-0.2255*t26652*t26898 - 0.1575*t26687*t26898 - 0.325*t26361*t26702*t26898 - 0.325*t26511*t26922 - 0.575*t26759*t26935 - 0.575*t26724*t26948 - 0.295*(t26750*t26935 - 1.*t26724*t26948) - 0.0641*(t26724*t26935 + t26750*t26948);
  p_output1[4]=0.1575*t26359*t26522*t26652 - 0.1575*t26361*t26922 + 0.325*t26702*t26995 - 0.575*t26474*t26724*t26995 - 0.575*t26702*t26759*t26995 - 0.0641*(t26702*t26724*t26995 + t26474*t26750*t26995) - 0.295*(-1.*t26474*t26724*t26995 + t26702*t26750*t26995) - 0.2255*t27013;
  p_output1[5]=0.325*t26474*t27013 - 0.325*t26702*t27062 - 0.575*t26759*t27071 - 0.575*t26724*t27087 - 0.295*(t26750*t27071 - 1.*t26724*t27087) - 0.0641*(t26724*t27071 + t26750*t27087);
  p_output1[6]=-0.575*t26750*t27071 - 0.575*t26724*t27140 - 0.295*(-1.*t26750*t27071 - 1.*t26724*t27140) - 0.0641*(-1.*t26724*t27071 + t26750*t27140);
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

#include "J_swing_position_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_swing_position_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
