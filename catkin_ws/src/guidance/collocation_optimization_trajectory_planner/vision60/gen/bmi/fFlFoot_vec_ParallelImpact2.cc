/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:50:01 GMT+02:00
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
  double t5829;
  double t9757;
  double t5825;
  double t9751;
  double t9758;
  double t9828;
  double t9829;
  double t9830;
  double t9835;
  double t9839;
  double t9840;
  double t9841;
  double t9846;
  double t9848;
  double t9849;
  double t9845;
  double t9866;
  double t9868;
  double t9844;
  double t9850;
  double t9851;
  double t9856;
  double t9857;
  double t9858;
  double t9859;
  double t9860;
  double t9861;
  double t9869;
  double t9870;
  double t9871;
  double t9876;
  double t9877;
  double t9879;
  double t9881;
  double t9882;
  double t9883;
  double t9889;
  double t9890;
  double t9891;
  double t9894;
  double t9895;
  double t9896;
  double t9922;
  double t9923;
  double t9924;
  double t9927;
  double t9928;
  double t9929;
  double t9931;
  double t9932;
  double t9933;
  double t9921;
  double t9925;
  double t9934;
  double t9935;
  double t9756;
  double t9759;
  double t9760;
  double t9916;
  double t9917;
  double t9918;
  double t9919;
  double t9936;
  double t9937;
  double t9938;
  double t9939;
  double t9940;
  double t9941;
  double t9942;
  double t9943;
  double t9944;
  double t9945;
  double t9946;
  double t9948;
  double t9949;
  double t9950;
  double t9842;
  double t9852;
  double t9853;
  double t9958;
  double t9959;
  double t9960;
  double t9954;
  double t9955;
  double t9956;
  double t9947;
  double t9951;
  double t9952;
  double t9855;
  double t9862;
  double t9863;
  double t9961;
  double t9964;
  double t9971;
  double t9976;
  double t9985;
  double t9988;
  double t10017;
  double t10020;
  double t9997;
  double t10000;
  double t10010;
  double t10006;
  double t10050;
  double t10045;
  t5829 = Cos(var1[6]);
  t9757 = Sin(var1[4]);
  t5825 = Cos(var1[4]);
  t9751 = Sin(var1[5]);
  t9758 = Sin(var1[6]);
  t9828 = Cos(var1[8]);
  t9829 = Sin(var1[7]);
  t9830 = t9828*t9829;
  t9835 = Cos(var1[7]);
  t9839 = Sin(var1[8]);
  t9840 = -1.*t9835*t9839;
  t9841 = t9830 + t9840;
  t9846 = t9835*t9828;
  t9848 = t9829*t9839;
  t9849 = t9846 + t9848;
  t9845 = Cos(var1[5]);
  t9866 = Cos(var1[3]);
  t9868 = Sin(var1[3]);
  t9844 = t9751*t9758*t9841;
  t9850 = t9845*t9849;
  t9851 = t9844 + t9850;
  t9856 = -1.*t9828*t9829;
  t9857 = t9835*t9839;
  t9858 = t9856 + t9857;
  t9859 = t9845*t9858;
  t9860 = t9751*t9758*t9849;
  t9861 = t9859 + t9860;
  t9869 = t5829*t9757*t9751;
  t9870 = t5825*t9758;
  t9871 = t9869 + t9870;
  t9876 = -1.*t9845*t9758*t9841;
  t9877 = t9751*t9849;
  t9879 = t9876 + t9877;
  t9881 = t5825*t5829*t9841;
  t9882 = -1.*t9757*t9851;
  t9883 = t9881 + t9882;
  t9889 = t9751*t9858;
  t9890 = -1.*t9845*t9758*t9849;
  t9891 = t9889 + t9890;
  t9894 = t5825*t5829*t9849;
  t9895 = -1.*t9757*t9861;
  t9896 = t9894 + t9895;
  t9922 = -0.0641*t9828;
  t9923 = -0.28*t9839;
  t9924 = t9922 + t9923;
  t9927 = -1.*t9828;
  t9928 = 1. + t9927;
  t9929 = 0.075*t9928;
  t9931 = 0.355*t9828;
  t9932 = -0.0641*t9839;
  t9933 = t9929 + t9931 + t9932;
  t9921 = -0.325*t9829;
  t9925 = t9835*t9924;
  t9934 = t9829*t9933;
  t9935 = t9921 + t9925 + t9934;
  t9756 = -1.*t5825*t5829*t9751;
  t9759 = t9757*t9758;
  t9760 = t9756 + t9759;
  t9916 = -1.*t5829;
  t9917 = 1. + t9916;
  t9918 = 0.1575*t9917;
  t9919 = 0.2255*t5829;
  t9936 = -1.*t9758*t9935;
  t9937 = t9918 + t9919 + t9936;
  t9938 = -1.*t9751*t9937;
  t9939 = -1.*t9835;
  t9940 = 1. + t9939;
  t9941 = 0.325*t9940;
  t9942 = -1.*t9829*t9924;
  t9943 = t9835*t9933;
  t9944 = t9941 + t9942 + t9943;
  t9945 = t9845*t9944;
  t9946 = t9938 + t9945;
  t9948 = 0.068*t9758;
  t9949 = t5829*t9935;
  t9950 = t9948 + t9949;
  t9842 = t5829*t9757*t9841;
  t9852 = t5825*t9851;
  t9853 = t9842 + t9852;
  t9958 = t9845*t9937;
  t9959 = t9751*t9944;
  t9960 = t9958 + t9959;
  t9954 = t5825*t9946;
  t9955 = t9757*t9950;
  t9956 = t9954 + t9955;
  t9947 = -1.*t9757*t9946;
  t9951 = t5825*t9950;
  t9952 = t9947 + t9951;
  t9855 = t5829*t9757*t9849;
  t9862 = t5825*t9861;
  t9863 = t9855 + t9862;
  t9961 = t9845*t5829*t9960;
  t9964 = -1.*t9960*t9879;
  t9971 = t9960*t9879;
  t9976 = -1.*t9960*t9891;
  t9985 = -1.*t9845*t5829*t9960;
  t9988 = t9960*t9891;
  t10017 = -1.*t9758*t9950;
  t10020 = t5829*t9950*t9849;
  t9997 = t9758*t9950;
  t10000 = -1.*t5829*t9950*t9841;
  t10010 = -1.*t5829*t9950*t9849;
  t10006 = t5829*t9950*t9841;
  t10050 = t9944*t9849;
  t10045 = -1.*t9944*t9858;
  p_output1[0]=t9853*var2[0] + t9760*var2[1] + t9863*var2[2];
  p_output1[1]=(t9866*t9879 - 1.*t9868*t9883)*var2[0] + (t5829*t9845*t9866 - 1.*t9868*t9871)*var2[1] + (t9866*t9891 - 1.*t9868*t9896)*var2[2];
  p_output1[2]=(t9868*t9879 + t9866*t9883)*var2[0] + (t5829*t9845*t9868 + t9866*t9871)*var2[1] + (t9868*t9891 + t9866*t9896)*var2[2];
  p_output1[3]=(t9863*(-1.*t9871*t9952 - 1.*t9760*t9956 + t9985) + t9760*(t9896*t9952 + t9863*t9956 + t9988))*var2[0] + (t9863*(t9883*t9952 + t9853*t9956 + t9971) + t9853*(-1.*t9896*t9952 - 1.*t9863*t9956 + t9976))*var2[1] + (t9853*(t9871*t9952 + t9760*t9956 + t9961) + t9760*(-1.*t9883*t9952 - 1.*t9853*t9956 + t9964))*var2[2];
  p_output1[4]=(t9891*(t10017 + t5829*t9751*t9946 + t9985) + t5829*t9845*(t10020 + t9861*t9946 + t9988))*var2[0] + (t9891*(t10006 + t9851*t9946 + t9971) + t9879*(t10010 - 1.*t9861*t9946 + t9976))*var2[1] + (t5829*t9845*(t10000 - 1.*t9851*t9946 + t9964) + t9879*(-1.*t5829*t9751*t9946 + t9961 + t9997))*var2[2];
  p_output1[5]=(t5829*t9849*(t10017 - 1.*t5829*t9937) + t9758*(t10020 - 1.*t9758*t9849*t9937 + t9858*t9944))*var2[0] + (t5829*t9849*(t10006 + t10050 - 1.*t9758*t9841*t9937) + t5829*t9841*(t10010 + t10045 + t9758*t9849*t9937))*var2[1] + (t9758*(t10000 + t9758*t9841*t9937 - 1.*t9849*t9944) + t5829*t9841*(t5829*t9937 + t9997))*var2[2];
  p_output1[6]=(-0.1575*t9841 - 0.2255*t9858)*var2[0] + (t9858*(t10050 + t9841*t9935) + t9849*(t10045 - 1.*t9849*t9935))*var2[1] + 0.068*t9849*var2[2];
  p_output1[7]=(0.325*t9839 - 1.*t9828*t9924 - 1.*t9839*t9933)*var2[0] + (-0.325*t9828 - 1.*t9839*t9924 + t9828*t9933)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
