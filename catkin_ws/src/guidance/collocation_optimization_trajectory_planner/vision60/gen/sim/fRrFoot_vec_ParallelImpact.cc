/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:24 GMT+02:00
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
  double t216;
  double t128;
  double t537;
  double t744;
  double t739;
  double t741;
  double t745;
  double t114;
  double t742;
  double t771;
  double t779;
  double t539;
  double t986;
  double t1018;
  double t1034;
  double t789;
  double t1178;
  double t1213;
  double t1037;
  double t1038;
  double t1039;
  double t1076;
  double t1077;
  double t1082;
  double t1093;
  double t1094;
  double t1139;
  double t1214;
  double t1219;
  double t1236;
  double t8123;
  double t8155;
  double t8168;
  double t8211;
  double t8220;
  double t8225;
  double t8336;
  double t8352;
  double t8382;
  double t8397;
  double t8398;
  double t8402;
  double t780;
  double t1062;
  double t1064;
  double t8750;
  double t8755;
  double t8756;
  double t8779;
  double t8799;
  double t8800;
  double t8807;
  double t8816;
  double t8819;
  double t133;
  double t728;
  double t734;
  double t8742;
  double t8758;
  double t8832;
  double t8839;
  double t8857;
  double t8858;
  double t8874;
  double t8876;
  double t8899;
  double t8905;
  double t8734;
  double t8736;
  double t8737;
  double t8740;
  double t8842;
  double t8849;
  double t8946;
  double t8949;
  double t8954;
  double t8957;
  double t8969;
  double t8972;
  double t8853;
  double t8913;
  double t8917;
  double t8956;
  double t8975;
  double t8991;
  double t8995;
  double t8998;
  double t9006;
  double t1075;
  double t1141;
  double t1143;
  double t8944;
  double t9042;
  double t9101;
  double t9115;
  double t9158;
  double t9173;
  double t9252;
  double t9260;
  double t9193;
  double t9200;
  double t9239;
  double t9220;
  double t9342;
  double t9337;
  t216 = Cos(var1[15]);
  t128 = Sin(var1[4]);
  t537 = Cos(var1[4]);
  t744 = Cos(var1[16]);
  t739 = Cos(var1[17]);
  t741 = Sin(var1[16]);
  t745 = Sin(var1[17]);
  t114 = Sin(var1[15]);
  t742 = t739*t741;
  t771 = -1.*t744*t745;
  t779 = t742 + t771;
  t539 = Sin(var1[5]);
  t986 = t744*t739;
  t1018 = t741*t745;
  t1034 = t986 + t1018;
  t789 = Cos(var1[5]);
  t1178 = Cos(var1[3]);
  t1213 = Sin(var1[3]);
  t1037 = t789*t1034;
  t1038 = t114*t779*t539;
  t1039 = t1037 + t1038;
  t1076 = -1.*t739*t741;
  t1077 = t744*t745;
  t1082 = t1076 + t1077;
  t1093 = t789*t1082;
  t1094 = t114*t1034*t539;
  t1139 = t1093 + t1094;
  t1214 = t537*t114;
  t1219 = t216*t128*t539;
  t1236 = t1214 + t1219;
  t8123 = -1.*t789*t114*t779;
  t8155 = t1034*t539;
  t8168 = t8123 + t8155;
  t8211 = t216*t537*t779;
  t8220 = -1.*t128*t1039;
  t8225 = t8211 + t8220;
  t8336 = -1.*t789*t114*t1034;
  t8352 = t1082*t539;
  t8382 = t8336 + t8352;
  t8397 = t216*t537*t1034;
  t8398 = -1.*t128*t1139;
  t8402 = t8397 + t8398;
  t780 = t216*t779*t128;
  t1062 = t537*t1039;
  t1064 = t780 + t1062;
  t8750 = -0.0641*t739;
  t8755 = -0.28*t745;
  t8756 = t8750 + t8755;
  t8779 = -1.*t739;
  t8799 = 1. + t8779;
  t8800 = -0.575*t8799;
  t8807 = -0.295*t739;
  t8816 = -0.0641*t745;
  t8819 = t8800 + t8807 + t8816;
  t133 = t114*t128;
  t728 = -1.*t216*t537*t539;
  t734 = t133 + t728;
  t8742 = 0.325*t741;
  t8758 = t744*t8756;
  t8832 = t741*t8819;
  t8839 = t8742 + t8758 + t8832;
  t8857 = -1.*t744;
  t8858 = 1. + t8857;
  t8874 = -0.325*t8858;
  t8876 = -1.*t741*t8756;
  t8899 = t744*t8819;
  t8905 = t8874 + t8876 + t8899;
  t8734 = -1.*t216;
  t8736 = 1. + t8734;
  t8737 = -0.1575*t8736;
  t8740 = -0.2255*t216;
  t8842 = -1.*t114*t8839;
  t8849 = t8737 + t8740 + t8842;
  t8946 = -0.068*t114;
  t8949 = t216*t8839;
  t8954 = t8946 + t8949;
  t8957 = t789*t8905;
  t8969 = -1.*t8849*t539;
  t8972 = t8957 + t8969;
  t8853 = t789*t8849;
  t8913 = t8905*t539;
  t8917 = t8853 + t8913;
  t8956 = t8954*t128;
  t8975 = t537*t8972;
  t8991 = t8956 + t8975;
  t8995 = t537*t8954;
  t8998 = -1.*t128*t8972;
  t9006 = t8995 + t8998;
  t1075 = t216*t1034*t128;
  t1141 = t537*t1139;
  t1143 = t1075 + t1141;
  t8944 = t216*t789*t8917;
  t9042 = -1.*t8917*t8168;
  t9101 = t8917*t8168;
  t9115 = -1.*t8917*t8382;
  t9158 = -1.*t216*t789*t8917;
  t9173 = t8917*t8382;
  t9252 = -1.*t114*t8954;
  t9260 = t216*t8954*t1034;
  t9193 = t114*t8954;
  t9200 = -1.*t216*t8954*t779;
  t9239 = -1.*t216*t8954*t1034;
  t9220 = t216*t8954*t779;
  t9342 = t8905*t1034;
  t9337 = -1.*t8905*t1082;
  p_output1[0]=t1064*var2[0] + t734*var2[1] + t1143*var2[2];
  p_output1[1]=(t1178*t8168 - 1.*t1213*t8225)*var2[0] + (-1.*t1213*t1236 + t1178*t216*t789)*var2[1] + (t1178*t8382 - 1.*t1213*t8402)*var2[2];
  p_output1[2]=(t1213*t8168 + t1178*t8225)*var2[0] + (t1178*t1236 + t1213*t216*t789)*var2[1] + (t1213*t8382 + t1178*t8402)*var2[2];
  p_output1[3]=(t1143*(-1.*t734*t8991 - 1.*t1236*t9006 + t9158) + t734*(t1143*t8991 + t8402*t9006 + t9173))*var2[0] + (t1143*(t1064*t8991 + t8225*t9006 + t9101) + t1064*(-1.*t1143*t8991 - 1.*t8402*t9006 + t9115))*var2[1] + (t1064*(t8944 + t734*t8991 + t1236*t9006) + t734*(-1.*t1064*t8991 - 1.*t8225*t9006 + t9042))*var2[2];
  p_output1[4]=(t8382*(t216*t539*t8972 + t9158 + t9252) + t216*t789*(t1139*t8972 + t9173 + t9260))*var2[0] + (t8382*(t1039*t8972 + t9101 + t9220) + t8168*(-1.*t1139*t8972 + t9115 + t9239))*var2[1] + (t8168*(t8944 - 1.*t216*t539*t8972 + t9193) + t216*t789*(-1.*t1039*t8972 + t9042 + t9200))*var2[2];
  p_output1[5]=(t1034*t216*(-1.*t216*t8849 + t9252) + t114*(-1.*t1034*t114*t8849 + t1082*t8905 + t9260))*var2[0] + (t216*t779*(t1034*t114*t8849 + t9239 + t9337) + t1034*t216*(-1.*t114*t779*t8849 + t9220 + t9342))*var2[1] + (t216*t779*(t216*t8849 + t9193) + t114*(t114*t779*t8849 - 1.*t1034*t8905 + t9200))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(0.2255*t1082 + 0.1575*t779)*var2[0] + (t1034*(-1.*t1034*t8839 + t9337) + t1082*(t779*t8839 + t9342))*var2[1] - 0.068*t1034*var2[2];
  p_output1[16]=(-0.325*t745 - 1.*t739*t8756 - 1.*t745*t8819)*var2[0] + (0.325*t739 - 1.*t745*t8756 + t739*t8819)*var2[2];
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

#include "fRrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
