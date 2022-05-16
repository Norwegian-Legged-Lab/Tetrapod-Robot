/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:33 GMT+02:00
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
  double t54045;
  double t45947;
  double t54091;
  double t55371;
  double t54203;
  double t54216;
  double t56759;
  double t43355;
  double t54231;
  double t56760;
  double t56764;
  double t54102;
  double t56959;
  double t56960;
  double t56961;
  double t56957;
  double t57010;
  double t57014;
  double t56973;
  double t56974;
  double t56976;
  double t56993;
  double t56994;
  double t56995;
  double t56998;
  double t57000;
  double t57005;
  double t57194;
  double t57265;
  double t57294;
  double t57334;
  double t57379;
  double t57382;
  double t57388;
  double t57389;
  double t57390;
  double t57394;
  double t57402;
  double t57405;
  double t57407;
  double t57427;
  double t57434;
  double t56956;
  double t56977;
  double t56978;
  double t57974;
  double t57975;
  double t57976;
  double t57987;
  double t57988;
  double t57989;
  double t57997;
  double t58000;
  double t58001;
  double t53628;
  double t54115;
  double t54125;
  double t57972;
  double t57984;
  double t58002;
  double t58010;
  double t58017;
  double t58018;
  double t58020;
  double t58021;
  double t58022;
  double t58023;
  double t57718;
  double t57791;
  double t57792;
  double t57794;
  double t58012;
  double t58013;
  double t58027;
  double t58028;
  double t58031;
  double t58035;
  double t58036;
  double t58037;
  double t58016;
  double t58024;
  double t58025;
  double t58034;
  double t58038;
  double t58039;
  double t58041;
  double t58042;
  double t58043;
  double t56991;
  double t57006;
  double t57007;
  double t58026;
  double t58049;
  double t58061;
  double t58076;
  double t58086;
  double t58130;
  double t70212;
  double t71785;
  double t68763;
  double t68921;
  double t70139;
  double t69421;
  double t71951;
  double t71941;
  t54045 = Cos(var1[12]);
  t45947 = Sin(var1[4]);
  t54091 = Cos(var1[4]);
  t55371 = Cos(var1[13]);
  t54203 = Cos(var1[14]);
  t54216 = Sin(var1[13]);
  t56759 = Sin(var1[14]);
  t43355 = Sin(var1[12]);
  t54231 = t54203*t54216;
  t56760 = -1.*t55371*t56759;
  t56764 = t54231 + t56760;
  t54102 = Sin(var1[5]);
  t56959 = t55371*t54203;
  t56960 = t54216*t56759;
  t56961 = t56959 + t56960;
  t56957 = Cos(var1[5]);
  t57010 = Cos(var1[3]);
  t57014 = Sin(var1[3]);
  t56973 = t56957*t56961;
  t56974 = t43355*t56764*t54102;
  t56976 = t56973 + t56974;
  t56993 = -1.*t54203*t54216;
  t56994 = t55371*t56759;
  t56995 = t56993 + t56994;
  t56998 = t56957*t56995;
  t57000 = t43355*t56961*t54102;
  t57005 = t56998 + t57000;
  t57194 = t54091*t43355;
  t57265 = t54045*t45947*t54102;
  t57294 = t57194 + t57265;
  t57334 = -1.*t56957*t43355*t56764;
  t57379 = t56961*t54102;
  t57382 = t57334 + t57379;
  t57388 = t54045*t54091*t56764;
  t57389 = -1.*t45947*t56976;
  t57390 = t57388 + t57389;
  t57394 = -1.*t56957*t43355*t56961;
  t57402 = t56995*t54102;
  t57405 = t57394 + t57402;
  t57407 = t54045*t54091*t56961;
  t57427 = -1.*t45947*t57005;
  t57434 = t57407 + t57427;
  t56956 = t54045*t56764*t45947;
  t56977 = t54091*t56976;
  t56978 = t56956 + t56977;
  t57974 = -0.0641*t54203;
  t57975 = -0.28*t56759;
  t57976 = t57974 + t57975;
  t57987 = -1.*t54203;
  t57988 = 1. + t57987;
  t57989 = 0.075*t57988;
  t57997 = 0.355*t54203;
  t58000 = -0.0641*t56759;
  t58001 = t57989 + t57997 + t58000;
  t53628 = t43355*t45947;
  t54115 = -1.*t54045*t54091*t54102;
  t54125 = t53628 + t54115;
  t57972 = -0.325*t54216;
  t57984 = t55371*t57976;
  t58002 = t54216*t58001;
  t58010 = t57972 + t57984 + t58002;
  t58017 = -1.*t55371;
  t58018 = 1. + t58017;
  t58020 = 0.325*t58018;
  t58021 = -1.*t54216*t57976;
  t58022 = t55371*t58001;
  t58023 = t58020 + t58021 + t58022;
  t57718 = -1.*t54045;
  t57791 = 1. + t57718;
  t57792 = -0.1575*t57791;
  t57794 = -0.2255*t54045;
  t58012 = -1.*t43355*t58010;
  t58013 = t57792 + t57794 + t58012;
  t58027 = -0.068*t43355;
  t58028 = t54045*t58010;
  t58031 = t58027 + t58028;
  t58035 = t56957*t58023;
  t58036 = -1.*t58013*t54102;
  t58037 = t58035 + t58036;
  t58016 = t56957*t58013;
  t58024 = t58023*t54102;
  t58025 = t58016 + t58024;
  t58034 = t58031*t45947;
  t58038 = t54091*t58037;
  t58039 = t58034 + t58038;
  t58041 = t54091*t58031;
  t58042 = -1.*t45947*t58037;
  t58043 = t58041 + t58042;
  t56991 = t54045*t56961*t45947;
  t57006 = t54091*t57005;
  t57007 = t56991 + t57006;
  t58026 = t54045*t56957*t58025;
  t58049 = -1.*t58025*t57382;
  t58061 = t58025*t57382;
  t58076 = -1.*t58025*t57405;
  t58086 = -1.*t54045*t56957*t58025;
  t58130 = t58025*t57405;
  t70212 = -1.*t43355*t58031;
  t71785 = t54045*t58031*t56961;
  t68763 = t43355*t58031;
  t68921 = -1.*t54045*t58031*t56764;
  t70139 = -1.*t54045*t58031*t56961;
  t69421 = t54045*t58031*t56764;
  t71951 = t58023*t56961;
  t71941 = -1.*t58023*t56995;
  p_output1[0]=t56978*var2[0] + t54125*var2[1] + t57007*var2[2];
  p_output1[1]=(t57010*t57382 - 1.*t57014*t57390)*var2[0] + (t54045*t56957*t57010 - 1.*t57014*t57294)*var2[1] + (t57010*t57405 - 1.*t57014*t57434)*var2[2];
  p_output1[2]=(t57014*t57382 + t57010*t57390)*var2[0] + (t54045*t56957*t57014 + t57010*t57294)*var2[1] + (t57014*t57405 + t57010*t57434)*var2[2];
  p_output1[3]=(t57007*(-1.*t54125*t58039 - 1.*t57294*t58043 + t58086) + t54125*(t57007*t58039 + t57434*t58043 + t58130))*var2[0] + (t57007*(t56978*t58039 + t57390*t58043 + t58061) + t56978*(-1.*t57007*t58039 - 1.*t57434*t58043 + t58076))*var2[1] + (t56978*(t58026 + t54125*t58039 + t57294*t58043) + t54125*(-1.*t56978*t58039 - 1.*t57390*t58043 + t58049))*var2[2];
  p_output1[4]=(t57405*(t54045*t54102*t58037 + t58086 + t70212) + t54045*t56957*(t57005*t58037 + t58130 + t71785))*var2[0] + (t57405*(t56976*t58037 + t58061 + t69421) + t57382*(-1.*t57005*t58037 + t58076 + t70139))*var2[1] + (t57382*(t58026 - 1.*t54045*t54102*t58037 + t68763) + t54045*t56957*(-1.*t56976*t58037 + t58049 + t68921))*var2[2];
  p_output1[5]=(t54045*t56961*(-1.*t54045*t58013 + t70212) + t43355*(-1.*t43355*t56961*t58013 + t56995*t58023 + t71785))*var2[0] + (t54045*t56764*(t43355*t56961*t58013 + t70139 + t71941) + t54045*t56961*(-1.*t43355*t56764*t58013 + t69421 + t71951))*var2[1] + (t54045*t56764*(t54045*t58013 + t68763) + t43355*(t43355*t56764*t58013 - 1.*t56961*t58023 + t68921))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t56764 + 0.2255*t56995)*var2[0] + (t56961*(-1.*t56961*t58010 + t71941) + t56995*(t56764*t58010 + t71951))*var2[1] - 0.068*t56961*var2[2];
  p_output1[13]=(0.325*t56759 - 1.*t54203*t57976 - 1.*t56759*t58001)*var2[0] + (-0.325*t54203 - 1.*t56759*t57976 + t54203*t58001)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

namespace DiagonalStance
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
