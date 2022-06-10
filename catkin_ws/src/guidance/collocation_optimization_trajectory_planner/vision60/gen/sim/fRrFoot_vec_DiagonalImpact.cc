/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:27 GMT+02:00
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
  double t769;
  double t141;
  double t9558;
  double t9655;
  double t9645;
  double t9647;
  double t9662;
  double t119;
  double t9648;
  double t9671;
  double t9672;
  double t9607;
  double t9701;
  double t9702;
  double t9714;
  double t9700;
  double t9924;
  double t9933;
  double t9715;
  double t9719;
  double t9732;
  double t9744;
  double t9749;
  double t9750;
  double t9753;
  double t9759;
  double t9779;
  double t9934;
  double t9935;
  double t9942;
  double t9948;
  double t9950;
  double t9951;
  double t9955;
  double t9956;
  double t9959;
  double t9973;
  double t9981;
  double t9982;
  double t9984;
  double t9986;
  double t9987;
  double t9691;
  double t9733;
  double t9734;
  double t10031;
  double t10032;
  double t10034;
  double t10038;
  double t10039;
  double t10040;
  double t10041;
  double t10043;
  double t10045;
  double t768;
  double t9631;
  double t9633;
  double t10030;
  double t10035;
  double t10046;
  double t10047;
  double t10051;
  double t10052;
  double t10053;
  double t10054;
  double t10055;
  double t10057;
  double t10020;
  double t10025;
  double t10026;
  double t10028;
  double t10048;
  double t10049;
  double t10064;
  double t10066;
  double t10070;
  double t10073;
  double t10074;
  double t10075;
  double t10050;
  double t10058;
  double t10062;
  double t10071;
  double t10076;
  double t10077;
  double t10083;
  double t10084;
  double t10086;
  double t9738;
  double t9890;
  double t9896;
  double t10063;
  double t10094;
  double t10102;
  double t10107;
  double t10115;
  double t10120;
  double t10156;
  double t10160;
  double t10131;
  double t10135;
  double t10149;
  double t10145;
  double t10199;
  double t10194;
  t769 = Cos(var1[15]);
  t141 = Sin(var1[4]);
  t9558 = Cos(var1[4]);
  t9655 = Cos(var1[16]);
  t9645 = Cos(var1[17]);
  t9647 = Sin(var1[16]);
  t9662 = Sin(var1[17]);
  t119 = Sin(var1[15]);
  t9648 = t9645*t9647;
  t9671 = -1.*t9655*t9662;
  t9672 = t9648 + t9671;
  t9607 = Sin(var1[5]);
  t9701 = t9655*t9645;
  t9702 = t9647*t9662;
  t9714 = t9701 + t9702;
  t9700 = Cos(var1[5]);
  t9924 = Cos(var1[3]);
  t9933 = Sin(var1[3]);
  t9715 = t9700*t9714;
  t9719 = t119*t9672*t9607;
  t9732 = t9715 + t9719;
  t9744 = -1.*t9645*t9647;
  t9749 = t9655*t9662;
  t9750 = t9744 + t9749;
  t9753 = t9700*t9750;
  t9759 = t119*t9714*t9607;
  t9779 = t9753 + t9759;
  t9934 = t9558*t119;
  t9935 = t769*t141*t9607;
  t9942 = t9934 + t9935;
  t9948 = -1.*t9700*t119*t9672;
  t9950 = t9714*t9607;
  t9951 = t9948 + t9950;
  t9955 = t769*t9558*t9672;
  t9956 = -1.*t141*t9732;
  t9959 = t9955 + t9956;
  t9973 = -1.*t9700*t119*t9714;
  t9981 = t9750*t9607;
  t9982 = t9973 + t9981;
  t9984 = t769*t9558*t9714;
  t9986 = -1.*t141*t9779;
  t9987 = t9984 + t9986;
  t9691 = t769*t9672*t141;
  t9733 = t9558*t9732;
  t9734 = t9691 + t9733;
  t10031 = -0.0641*t9645;
  t10032 = -0.28*t9662;
  t10034 = t10031 + t10032;
  t10038 = -1.*t9645;
  t10039 = 1. + t10038;
  t10040 = -0.575*t10039;
  t10041 = -0.295*t9645;
  t10043 = -0.0641*t9662;
  t10045 = t10040 + t10041 + t10043;
  t768 = t119*t141;
  t9631 = -1.*t769*t9558*t9607;
  t9633 = t768 + t9631;
  t10030 = 0.325*t9647;
  t10035 = t9655*t10034;
  t10046 = t9647*t10045;
  t10047 = t10030 + t10035 + t10046;
  t10051 = -1.*t9655;
  t10052 = 1. + t10051;
  t10053 = -0.325*t10052;
  t10054 = -1.*t9647*t10034;
  t10055 = t9655*t10045;
  t10057 = t10053 + t10054 + t10055;
  t10020 = -1.*t769;
  t10025 = 1. + t10020;
  t10026 = -0.1575*t10025;
  t10028 = -0.2255*t769;
  t10048 = -1.*t119*t10047;
  t10049 = t10026 + t10028 + t10048;
  t10064 = -0.068*t119;
  t10066 = t769*t10047;
  t10070 = t10064 + t10066;
  t10073 = t9700*t10057;
  t10074 = -1.*t10049*t9607;
  t10075 = t10073 + t10074;
  t10050 = t9700*t10049;
  t10058 = t10057*t9607;
  t10062 = t10050 + t10058;
  t10071 = t10070*t141;
  t10076 = t9558*t10075;
  t10077 = t10071 + t10076;
  t10083 = t9558*t10070;
  t10084 = -1.*t141*t10075;
  t10086 = t10083 + t10084;
  t9738 = t769*t9714*t141;
  t9890 = t9558*t9779;
  t9896 = t9738 + t9890;
  t10063 = t769*t9700*t10062;
  t10094 = -1.*t10062*t9951;
  t10102 = t10062*t9951;
  t10107 = -1.*t10062*t9982;
  t10115 = -1.*t769*t9700*t10062;
  t10120 = t10062*t9982;
  t10156 = -1.*t119*t10070;
  t10160 = t769*t10070*t9714;
  t10131 = t119*t10070;
  t10135 = -1.*t769*t10070*t9672;
  t10149 = -1.*t769*t10070*t9714;
  t10145 = t769*t10070*t9672;
  t10199 = t10057*t9714;
  t10194 = -1.*t10057*t9750;
  p_output1[0]=t9734*var2[0] + t9633*var2[1] + t9896*var2[2];
  p_output1[1]=(t9924*t9951 - 1.*t9933*t9959)*var2[0] + (t769*t9700*t9924 - 1.*t9933*t9942)*var2[1] + (t9924*t9982 - 1.*t9933*t9987)*var2[2];
  p_output1[2]=(t9933*t9951 + t9924*t9959)*var2[0] + (t769*t9700*t9933 + t9924*t9942)*var2[1] + (t9933*t9982 + t9924*t9987)*var2[2];
  p_output1[3]=(t9896*(t10115 - 1.*t10077*t9633 - 1.*t10086*t9942) + t9633*(t10120 + t10077*t9896 + t10086*t9987))*var2[0] + (t9896*(t10102 + t10077*t9734 + t10086*t9959) + t9734*(t10107 - 1.*t10077*t9896 - 1.*t10086*t9987))*var2[1] + (t9734*(t10063 + t10077*t9633 + t10086*t9942) + t9633*(t10094 - 1.*t10077*t9734 - 1.*t10086*t9959))*var2[2];
  p_output1[4]=(t769*t9700*(t10120 + t10160 + t10075*t9779) + (t10115 + t10156 + t10075*t769*t9607)*t9982)*var2[0] + ((t10107 + t10149 - 1.*t10075*t9779)*t9951 + (t10102 + t10145 + t10075*t9732)*t9982)*var2[1] + (t769*t9700*(t10094 + t10135 - 1.*t10075*t9732) + (t10063 + t10131 - 1.*t10075*t769*t9607)*t9951)*var2[2];
  p_output1[5]=(t769*(t10156 - 1.*t10049*t769)*t9714 + t119*(t10160 - 1.*t10049*t119*t9714 + t10057*t9750))*var2[0] + (t769*(t10145 + t10199 - 1.*t10049*t119*t9672)*t9714 + t769*t9672*(t10149 + t10194 + t10049*t119*t9714))*var2[1] + (t769*(t10131 + t10049*t769)*t9672 + t119*(t10135 + t10049*t119*t9672 - 1.*t10057*t9714))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.1575*t9672 + 0.2255*t9750)*var2[0] + (t9714*(t10194 - 1.*t10047*t9714) + (t10199 + t10047*t9672)*t9750)*var2[1] - 0.068*t9714*var2[2];
  p_output1[16]=(-1.*t10034*t9645 - 0.325*t9662 - 1.*t10045*t9662)*var2[0] + (0.325*t9645 + t10045*t9645 - 1.*t10034*t9662)*var2[2];
  p_output1[17]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRrFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
