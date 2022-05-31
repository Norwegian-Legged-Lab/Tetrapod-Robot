/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:39 GMT+02:00
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
  double t3536;
  double t29596;
  double t4549;
  double t32065;
  double t33451;
  double t31974;
  double t33484;
  double t27534;
  double t33632;
  double t33641;
  double t33651;
  double t31626;
  double t33599;
  double t33405;
  double t33485;
  double t33542;
  double t27547;
  double t31856;
  double t31925;
  double t33972;
  double t33965;
  double t33662;
  double t33674;
  double t33683;
  double t33777;
  double t33786;
  double t33795;
  double t33836;
  double t33906;
  double t33909;
  double t33979;
  double t33988;
  double t34014;
  double t34054;
  double t34056;
  double t34069;
  double t34104;
  double t34112;
  double t34114;
  double t34157;
  double t34177;
  double t34179;
  double t34202;
  double t34204;
  double t34233;
  double t33604;
  double t33689;
  double t33692;
  double t34473;
  double t34480;
  double t34542;
  double t34545;
  double t34566;
  double t34581;
  double t34596;
  double t34606;
  double t34619;
  double t34629;
  double t34636;
  double t34647;
  double t34657;
  double t34690;
  double t34723;
  double t34730;
  double t34487;
  double t34505;
  double t34514;
  double t34668;
  double t34680;
  double t34752;
  double t34758;
  double t34766;
  double t34771;
  double t34800;
  double t34824;
  double t34855;
  double t34687;
  double t34737;
  double t34743;
  double t34778;
  double t34878;
  double t34884;
  double t34914;
  double t34925;
  double t34932;
  double t33804;
  double t33914;
  double t33931;
  double t34749;
  double t34982;
  double t35057;
  double t35095;
  double t35127;
  double t35136;
  double t35327;
  double t35338;
  t3536 = Cos(var1[4]);
  t29596 = Cos(var1[12]);
  t4549 = Cos(var1[5]);
  t32065 = Cos(var1[14]);
  t33451 = Sin(var1[13]);
  t31974 = Cos(var1[13]);
  t33484 = Sin(var1[14]);
  t27534 = Sin(var1[12]);
  t33632 = t32065*t33451;
  t33641 = -1.*t31974*t33484;
  t33651 = t33632 + t33641;
  t31626 = Sin(var1[5]);
  t33599 = Sin(var1[4]);
  t33405 = t31974*t32065;
  t33485 = t33451*t33484;
  t33542 = t33405 + t33485;
  t27547 = -1.*t4549*t27534;
  t31856 = -1.*t29596*t31626;
  t31925 = t27547 + t31856;
  t33972 = Cos(var1[3]);
  t33965 = Sin(var1[3]);
  t33662 = t29596*t4549*t33651;
  t33674 = -1.*t27534*t33651*t31626;
  t33683 = t33662 + t33674;
  t33777 = -1.*t32065*t33451;
  t33786 = t31974*t33484;
  t33795 = t33777 + t33786;
  t33836 = t29596*t4549*t33542;
  t33906 = -1.*t27534*t33542*t31626;
  t33909 = t33836 + t33906;
  t33979 = t29596*t4549;
  t33988 = -1.*t27534*t31626;
  t34014 = t33979 + t33988;
  t34054 = t4549*t27534*t33651;
  t34056 = t29596*t33651*t31626;
  t34069 = t34054 + t34056;
  t34104 = t3536*t33542;
  t34112 = -1.*t33599*t33683;
  t34114 = t34104 + t34112;
  t34157 = t4549*t27534*t33542;
  t34177 = t29596*t33542*t31626;
  t34179 = t34157 + t34177;
  t34202 = t3536*t33795;
  t34204 = -1.*t33599*t33909;
  t34233 = t34202 + t34204;
  t33604 = t33542*t33599;
  t33689 = t3536*t33683;
  t33692 = t33604 + t33689;
  t34473 = -1.*t29596;
  t34480 = 1. + t34473;
  t34542 = -1.*t31974;
  t34545 = 1. + t34542;
  t34566 = 0.28121*t34545;
  t34581 = -1.*t32065;
  t34596 = 1. + t34581;
  t34606 = 0.50321*t34596;
  t34619 = 0.19821*t32065;
  t34629 = t34606 + t34619;
  t34636 = t31974*t34629;
  t34647 = -0.305*t33451*t33484;
  t34657 = t34566 + t34636 + t34647;
  t34690 = 0.15121*t34480;
  t34723 = t29596*t34657;
  t34730 = t34690 + t34723;
  t34487 = -0.15121*t34480;
  t34505 = -0.15121*t29596;
  t34514 = -0.15121*t27534;
  t34668 = t27534*t34657;
  t34680 = t34487 + t34505 + t34514 + t34668;
  t34752 = 0.28121*t33451;
  t34758 = -1.*t34629*t33451;
  t34766 = -0.305*t31974*t33484;
  t34771 = t34752 + t34758 + t34766;
  t34800 = t4549*t34730;
  t34824 = -1.*t34680*t31626;
  t34855 = t34800 + t34824;
  t34687 = t4549*t34680;
  t34737 = t34730*t31626;
  t34743 = t34687 + t34737;
  t34778 = t34771*t33599;
  t34878 = t3536*t34855;
  t34884 = t34778 + t34878;
  t34914 = t3536*t34771;
  t34925 = -1.*t33599*t34855;
  t34932 = t34914 + t34925;
  t33804 = t33795*t33599;
  t33914 = t3536*t33909;
  t33931 = t33804 + t33914;
  t34749 = -1.*t34014*t34743;
  t34982 = t34069*t34743;
  t35057 = t34014*t34743;
  t35095 = -1.*t34179*t34743;
  t35127 = -1.*t34069*t34743;
  t35136 = t34179*t34743;
  t35327 = -1.*t34771*t33542;
  t35338 = t34771*t33795;
  p_output1[0]=t33931*var2[0] + t31925*t3536*var2[1] + t33692*var2[2];
  p_output1[1]=(t33972*t34179 - 1.*t33965*t34233)*var2[0] + (t31925*t33599*t33965 + t33972*t34014)*var2[1] + (t33972*t34069 - 1.*t33965*t34114)*var2[2];
  p_output1[2]=(t33965*t34179 + t33972*t34233)*var2[0] + (-1.*t31925*t33599*t33972 + t33965*t34014)*var2[1] + (t33965*t34069 + t33972*t34114)*var2[2];
  p_output1[3]=(t31925*(t33692*t34884 + t34114*t34932 + t34982)*t3536 + t33692*(t34749 + t31925*t33599*t34932 - 1.*t31925*t34884*t3536))*var2[0] + (t33931*(-1.*t33692*t34884 - 1.*t34114*t34932 + t35127) + t33692*(t33931*t34884 + t34233*t34932 + t35136))*var2[1] + (t31925*(-1.*t33931*t34884 - 1.*t34233*t34932 + t35095)*t3536 + t33931*(-1.*t31925*t33599*t34932 + t35057 + t31925*t34884*t3536))*var2[2];
  p_output1[4]=(t34069*(t34749 - 1.*t31925*t34855) + t34014*(t33542*t34771 + t33683*t34855 + t34982))*var2[0] + (t34179*(-1.*t33683*t34855 + t35127 + t35327) + t34069*(t33909*t34855 + t35136 + t35338))*var2[1] + (t34179*(t31925*t34855 + t35057) + t34014*(-1.*t33795*t34771 - 1.*t33909*t34855 + t35095))*var2[2];
  p_output1[5]=t33542*(-1.*t29596*t34680 + t27534*t34730)*var2[0] + (t33795*(-1.*t27534*t33651*t34680 - 1.*t29596*t33651*t34730 + t35327) + t33542*(t27534*t33542*t34680 + t29596*t33542*t34730 + t35338))*var2[1] + t33795*(t29596*t34680 - 1.*t27534*t34730)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t33795*(-1.*t33651*t34657 + t35327) + t33542*(t33542*t34657 + t35338))*var2[1] + (-0.15121*t33651 - 0.15121*t33795)*var2[2];
  p_output1[13]=(0.28121*t33484 - 0.305*t32065*t33484 - 1.*t33484*t34629)*var2[0] + (0.28121*t32065 + 0.305*Power(t33484,2) - 1.*t32065*t34629)*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
