/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:58 GMT+02:00
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
  double t27357;
  double t28557;
  double t27358;
  double t35470;
  double t51379;
  double t32747;
  double t54314;
  double t27359;
  double t54845;
  double t54847;
  double t54854;
  double t28558;
  double t54832;
  double t54883;
  double t54885;
  double t54887;
  double t28161;
  double t28561;
  double t31347;
  double t54898;
  double t54896;
  double t45200;
  double t54364;
  double t54678;
  double t54855;
  double t54856;
  double t54861;
  double t54888;
  double t54889;
  double t54890;
  double t54900;
  double t54901;
  double t54902;
  double t54951;
  double t54952;
  double t54956;
  double t54958;
  double t54959;
  double t54960;
  double t54966;
  double t54967;
  double t54969;
  double t54971;
  double t54972;
  double t54973;
  double t54844;
  double t54867;
  double t54868;
  double t54993;
  double t54994;
  double t54998;
  double t54999;
  double t55000;
  double t55001;
  double t55003;
  double t55004;
  double t55005;
  double t55006;
  double t55008;
  double t55009;
  double t55010;
  double t55015;
  double t55016;
  double t55017;
  double t54995;
  double t54996;
  double t54997;
  double t55012;
  double t55013;
  double t55022;
  double t55023;
  double t55024;
  double t55025;
  double t55027;
  double t55028;
  double t55031;
  double t55014;
  double t55018;
  double t55020;
  double t55026;
  double t55032;
  double t55034;
  double t55036;
  double t55037;
  double t55038;
  double t54879;
  double t54891;
  double t54892;
  double t55021;
  double t55042;
  double t55049;
  double t55054;
  double t55062;
  double t55067;
  double t55094;
  double t55098;
  t27357 = Cos(var1[4]);
  t28557 = Cos(var1[9]);
  t27358 = Cos(var1[5]);
  t35470 = Cos(var1[11]);
  t51379 = Sin(var1[10]);
  t32747 = Cos(var1[10]);
  t54314 = Sin(var1[11]);
  t27359 = Sin(var1[9]);
  t54845 = -1.*t35470*t51379;
  t54847 = t32747*t54314;
  t54854 = t54845 + t54847;
  t28558 = Sin(var1[5]);
  t54832 = Sin(var1[4]);
  t54883 = -1.*t32747*t35470;
  t54885 = -1.*t51379*t54314;
  t54887 = t54883 + t54885;
  t28161 = t27358*t27359;
  t28561 = t28557*t28558;
  t31347 = t28161 + t28561;
  t54898 = Cos(var1[3]);
  t54896 = Sin(var1[3]);
  t45200 = t32747*t35470;
  t54364 = t51379*t54314;
  t54678 = t45200 + t54364;
  t54855 = t28557*t27358*t54854;
  t54856 = -1.*t27359*t54854*t28558;
  t54861 = t54855 + t54856;
  t54888 = t28557*t27358*t54887;
  t54889 = -1.*t27359*t54887*t28558;
  t54890 = t54888 + t54889;
  t54900 = -1.*t28557*t27358;
  t54901 = t27359*t28558;
  t54902 = t54900 + t54901;
  t54951 = t27358*t27359*t54854;
  t54952 = t28557*t54854*t28558;
  t54956 = t54951 + t54952;
  t54958 = t27357*t54678;
  t54959 = -1.*t54832*t54861;
  t54960 = t54958 + t54959;
  t54966 = t27358*t27359*t54887;
  t54967 = t28557*t54887*t28558;
  t54969 = t54966 + t54967;
  t54971 = t27357*t54854;
  t54972 = -1.*t54832*t54890;
  t54973 = t54971 + t54972;
  t54844 = t54678*t54832;
  t54867 = t27357*t54861;
  t54868 = t54844 + t54867;
  t54993 = -1.*t28557;
  t54994 = 1. + t54993;
  t54998 = -1.*t32747;
  t54999 = 1. + t54998;
  t55000 = -0.28121*t54999;
  t55001 = -1.*t35470;
  t55003 = 1. + t55001;
  t55004 = -0.50321*t55003;
  t55005 = -0.23321*t35470;
  t55006 = t55004 + t55005;
  t55008 = t32747*t55006;
  t55009 = 0.27*t51379*t54314;
  t55010 = t55000 + t55008 + t55009;
  t55015 = -0.15121*t54994;
  t55016 = t28557*t55010;
  t55017 = t55015 + t55016;
  t54995 = 0.15121*t54994;
  t54996 = 0.15121*t28557;
  t54997 = 0.15121*t27359;
  t55012 = t27359*t55010;
  t55013 = t54995 + t54996 + t54997 + t55012;
  t55022 = 0.28121*t51379;
  t55023 = t55006*t51379;
  t55024 = -0.27*t32747*t54314;
  t55025 = t55022 + t55023 + t55024;
  t55027 = t27358*t55017;
  t55028 = -1.*t55013*t28558;
  t55031 = t55027 + t55028;
  t55014 = t27358*t55013;
  t55018 = t55017*t28558;
  t55020 = t55014 + t55018;
  t55026 = t55025*t54832;
  t55032 = t27357*t55031;
  t55034 = t55026 + t55032;
  t55036 = t27357*t55025;
  t55037 = -1.*t54832*t55031;
  t55038 = t55036 + t55037;
  t54879 = t54854*t54832;
  t54891 = t27357*t54890;
  t54892 = t54879 + t54891;
  t55021 = -1.*t54902*t55020;
  t55042 = t54956*t55020;
  t55049 = t54902*t55020;
  t55054 = -1.*t54969*t55020;
  t55062 = -1.*t54956*t55020;
  t55067 = t54969*t55020;
  t55094 = -1.*t55025*t54678;
  t55098 = t55025*t54854;
  p_output1[0]=t54892*var2[0] + t27357*t31347*var2[1] + t54868*var2[2];
  p_output1[1]=(t54898*t54969 - 1.*t54896*t54973)*var2[0] + (t31347*t54832*t54896 + t54898*t54902)*var2[1] + (t54898*t54956 - 1.*t54896*t54960)*var2[2];
  p_output1[2]=(t54896*t54969 + t54898*t54973)*var2[0] + (-1.*t31347*t54832*t54898 + t54896*t54902)*var2[1] + (t54896*t54956 + t54898*t54960)*var2[2];
  p_output1[3]=(t54868*(t55021 - 1.*t27357*t31347*t55034 + t31347*t54832*t55038) + t27357*t31347*(t54868*t55034 + t54960*t55038 + t55042))*var2[0] + (t54892*(-1.*t54868*t55034 - 1.*t54960*t55038 + t55062) + t54868*(t54892*t55034 + t54973*t55038 + t55067))*var2[1] + (t54892*(t27357*t31347*t55034 - 1.*t31347*t54832*t55038 + t55049) + t27357*t31347*(-1.*t54892*t55034 - 1.*t54973*t55038 + t55054))*var2[2];
  p_output1[4]=(t54956*(t55021 - 1.*t31347*t55031) + t54902*(t54678*t55025 + t54861*t55031 + t55042))*var2[0] + (t54969*(-1.*t54861*t55031 + t55062 + t55094) + t54956*(t54890*t55031 + t55067 + t55098))*var2[1] + (t54969*(t31347*t55031 + t55049) + t54902*(-1.*t54854*t55025 - 1.*t54890*t55031 + t55054))*var2[2];
  p_output1[5]=t54678*(t28557*t55013 - 1.*t27359*t55017)*var2[0] + (t54854*(-1.*t27359*t54854*t55013 - 1.*t28557*t54854*t55017 + t55094) + t54678*(t27359*t54887*t55013 + t28557*t54887*t55017 + t55098))*var2[1] + t54854*(-1.*t28557*t55013 + t27359*t55017)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t54678 + 0.15121*t54887)*var2[0] + (-0.15121 + t54854*(-1.*t54854*t55010 + t55094) + t54678*(t54887*t55010 + t55098))*var2[1];
  p_output1[10]=(0.28121*t54314 - 0.27*t35470*t54314 + t54314*t55006)*var2[0] + (0.28121*t35470 + 0.27*Power(t54314,2) + t35470*t55006)*var2[2];
  p_output1[11]=-0.27*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
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

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
