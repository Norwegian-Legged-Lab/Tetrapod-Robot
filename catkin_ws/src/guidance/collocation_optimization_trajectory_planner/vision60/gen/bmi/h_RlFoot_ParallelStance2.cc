/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:40 GMT+02:00
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
  double t7538;
  double t7545;
  double t7546;
  double t7553;
  double t7556;
  double t7539;
  double t7579;
  double t3346;
  double t7581;
  double t7582;
  double t7586;
  double t7591;
  double t7592;
  double t7594;
  double t7633;
  double t7641;
  double t7650;
  double t7658;
  double t7663;
  double t3352;
  double t7479;
  double t7678;
  double t7554;
  double t7555;
  double t7688;
  double t7692;
  double t7697;
  double t7698;
  double t7687;
  double t7689;
  double t7690;
  double t7704;
  double t7705;
  double t7706;
  double t7645;
  double t7646;
  double t7708;
  double t7709;
  double t7710;
  double t7712;
  double t7713;
  double t7714;
  double t7742;
  double t7743;
  double t7744;
  double t7738;
  double t7739;
  double t7740;
  double t7757;
  double t7761;
  double t7766;
  double t7769;
  double t7770;
  double t7771;
  double t7773;
  double t7774;
  double t7775;
  t7538 = Cos(var1[4]);
  t7545 = Sin(var1[9]);
  t7546 = Sin(var1[4]);
  t7553 = Cos(var1[9]);
  t7556 = Sin(var1[5]);
  t7539 = Cos(var1[5]);
  t7579 = Sin(var1[10]);
  t3346 = Cos(var1[10]);
  t7581 = t7553*t7546;
  t7582 = t7538*t7545*t7556;
  t7586 = t7581 + t7582;
  t7591 = Sin(var1[11]);
  t7592 = -1.*t7538*t7539*t7579;
  t7594 = t3346*t7586;
  t7633 = t7592 + t7594;
  t7641 = Cos(var1[11]);
  t7650 = t3346*t7538*t7539;
  t7658 = t7579*t7586;
  t7663 = t7650 + t7658;
  t3352 = -1.*t3346;
  t7479 = 1. + t3352;
  t7678 = Sin(var1[3]);
  t7554 = -1.*t7553;
  t7555 = 1. + t7554;
  t7688 = Cos(var1[3]);
  t7692 = t7688*t7539;
  t7697 = -1.*t7678*t7546*t7556;
  t7698 = t7692 + t7697;
  t7687 = t7539*t7678*t7546;
  t7689 = t7688*t7556;
  t7690 = t7687 + t7689;
  t7704 = -1.*t7553*t7538*t7678;
  t7705 = -1.*t7545*t7698;
  t7706 = t7704 + t7705;
  t7645 = -1.*t7641;
  t7646 = 1. + t7645;
  t7708 = -1.*t7579*t7690;
  t7709 = t3346*t7706;
  t7710 = t7708 + t7709;
  t7712 = t3346*t7690;
  t7713 = t7579*t7706;
  t7714 = t7712 + t7713;
  t7742 = t7539*t7678;
  t7743 = t7688*t7546*t7556;
  t7744 = t7742 + t7743;
  t7738 = -1.*t7688*t7539*t7546;
  t7739 = t7678*t7556;
  t7740 = t7738 + t7739;
  t7757 = t7553*t7688*t7538;
  t7761 = -1.*t7545*t7744;
  t7766 = t7757 + t7761;
  t7769 = -1.*t7579*t7740;
  t7770 = t3346*t7766;
  t7771 = t7769 + t7770;
  t7773 = t3346*t7740;
  t7774 = t7579*t7766;
  t7775 = t7773 + t7774;
  p_output1[0]=-0.325*t7479*t7538*t7539 - 0.1575*t7545*t7546 - 0.1575*t7538*t7555*t7556 + 0.2255*(t7545*t7546 - 1.*t7538*t7553*t7556) + 0.325*t7579*t7586 - 0.575*t7591*t7633 - 0.575*t7646*t7663 - 0.0641*(t7633*t7641 + t7591*t7663) - 0.295*(-1.*t7591*t7633 + t7641*t7663) + var1[0] - 1.*var2[0];
  p_output1[1]=0.1575*t7538*t7545*t7678 - 0.325*t7479*t7690 + 0.1575*t7555*t7698 + 0.2255*(-1.*t7538*t7545*t7678 + t7553*t7698) + 0.325*t7579*t7706 - 0.575*t7591*t7710 - 0.575*t7646*t7714 - 0.0641*(t7641*t7710 + t7591*t7714) - 0.295*(-1.*t7591*t7710 + t7641*t7714) + var1[1] - 1.*var2[1];
  p_output1[2]=-0.1575*t7538*t7545*t7688 - 0.325*t7479*t7740 + 0.1575*t7555*t7744 + 0.2255*(t7538*t7545*t7688 + t7553*t7744) + 0.325*t7579*t7766 - 0.575*t7591*t7771 - 0.575*t7646*t7775 - 0.0641*(t7641*t7771 + t7591*t7775) - 0.295*(-1.*t7591*t7771 + t7641*t7775) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void h_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
