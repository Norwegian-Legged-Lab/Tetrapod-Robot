/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:46 GMT+02:00
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
  double t3057;
  double t2962;
  double t3151;
  double t4756;
  double t3693;
  double t3700;
  double t4757;
  double t2919;
  double t4683;
  double t5457;
  double t9702;
  double t3669;
  double t9806;
  double t9808;
  double t9813;
  double t9805;
  double t9849;
  double t9851;
  double t9814;
  double t9815;
  double t9820;
  double t9837;
  double t9839;
  double t9840;
  double t9841;
  double t9842;
  double t9844;
  double t9852;
  double t9853;
  double t9854;
  double t9903;
  double t9904;
  double t9906;
  double t9908;
  double t9909;
  double t9910;
  double t9915;
  double t9916;
  double t9918;
  double t9920;
  double t9921;
  double t9922;
  double t9795;
  double t9825;
  double t9826;
  double t9950;
  double t9952;
  double t9953;
  double t9955;
  double t9956;
  double t9958;
  double t9959;
  double t9960;
  double t9962;
  double t2970;
  double t3672;
  double t3677;
  double t9949;
  double t9954;
  double t9963;
  double t9964;
  double t9968;
  double t9969;
  double t9970;
  double t9971;
  double t9972;
  double t9973;
  double t9944;
  double t9945;
  double t9946;
  double t9948;
  double t9965;
  double t9966;
  double t9977;
  double t9978;
  double t9979;
  double t9981;
  double t9982;
  double t9983;
  double t9967;
  double t9974;
  double t9975;
  double t9980;
  double t9984;
  double t9985;
  double t9988;
  double t9989;
  double t9990;
  double t9832;
  double t9845;
  double t9846;
  double t9976;
  double t9995;
  double t10002;
  double t10007;
  double t10014;
  double t10019;
  double t10047;
  double t10051;
  double t10027;
  double t10031;
  double t10041;
  double t10037;
  double t10081;
  double t10076;
  t3057 = Cos(var1[9]);
  t2962 = Sin(var1[4]);
  t3151 = Cos(var1[4]);
  t4756 = Cos(var1[10]);
  t3693 = Cos(var1[11]);
  t3700 = Sin(var1[10]);
  t4757 = Sin(var1[11]);
  t2919 = Sin(var1[9]);
  t4683 = t3693*t3700;
  t5457 = -1.*t4756*t4757;
  t9702 = t4683 + t5457;
  t3669 = Sin(var1[5]);
  t9806 = t4756*t3693;
  t9808 = t3700*t4757;
  t9813 = t9806 + t9808;
  t9805 = Cos(var1[5]);
  t9849 = Cos(var1[3]);
  t9851 = Sin(var1[3]);
  t9814 = t9805*t9813;
  t9815 = t2919*t9702*t3669;
  t9820 = t9814 + t9815;
  t9837 = -1.*t3693*t3700;
  t9839 = t4756*t4757;
  t9840 = t9837 + t9839;
  t9841 = t9805*t9840;
  t9842 = t2919*t9813*t3669;
  t9844 = t9841 + t9842;
  t9852 = t3151*t2919;
  t9853 = t3057*t2962*t3669;
  t9854 = t9852 + t9853;
  t9903 = -1.*t9805*t2919*t9702;
  t9904 = t9813*t3669;
  t9906 = t9903 + t9904;
  t9908 = t3057*t3151*t9702;
  t9909 = -1.*t2962*t9820;
  t9910 = t9908 + t9909;
  t9915 = -1.*t9805*t2919*t9813;
  t9916 = t9840*t3669;
  t9918 = t9915 + t9916;
  t9920 = t3057*t3151*t9813;
  t9921 = -1.*t2962*t9844;
  t9922 = t9920 + t9921;
  t9795 = t3057*t9702*t2962;
  t9825 = t3151*t9820;
  t9826 = t9795 + t9825;
  t9950 = -0.0641*t3693;
  t9952 = -0.28*t4757;
  t9953 = t9950 + t9952;
  t9955 = -1.*t3693;
  t9956 = 1. + t9955;
  t9958 = -0.575*t9956;
  t9959 = -0.295*t3693;
  t9960 = -0.0641*t4757;
  t9962 = t9958 + t9959 + t9960;
  t2970 = t2919*t2962;
  t3672 = -1.*t3057*t3151*t3669;
  t3677 = t2970 + t3672;
  t9949 = 0.325*t3700;
  t9954 = t4756*t9953;
  t9963 = t3700*t9962;
  t9964 = t9949 + t9954 + t9963;
  t9968 = -1.*t4756;
  t9969 = 1. + t9968;
  t9970 = -0.325*t9969;
  t9971 = -1.*t3700*t9953;
  t9972 = t4756*t9962;
  t9973 = t9970 + t9971 + t9972;
  t9944 = -1.*t3057;
  t9945 = 1. + t9944;
  t9946 = 0.1575*t9945;
  t9948 = 0.2255*t3057;
  t9965 = -1.*t2919*t9964;
  t9966 = t9946 + t9948 + t9965;
  t9977 = 0.068*t2919;
  t9978 = t3057*t9964;
  t9979 = t9977 + t9978;
  t9981 = t9805*t9973;
  t9982 = -1.*t9966*t3669;
  t9983 = t9981 + t9982;
  t9967 = t9805*t9966;
  t9974 = t9973*t3669;
  t9975 = t9967 + t9974;
  t9980 = t9979*t2962;
  t9984 = t3151*t9983;
  t9985 = t9980 + t9984;
  t9988 = t3151*t9979;
  t9989 = -1.*t2962*t9983;
  t9990 = t9988 + t9989;
  t9832 = t3057*t9813*t2962;
  t9845 = t3151*t9844;
  t9846 = t9832 + t9845;
  t9976 = t3057*t9805*t9975;
  t9995 = -1.*t9975*t9906;
  t10002 = t9975*t9906;
  t10007 = -1.*t9975*t9918;
  t10014 = -1.*t3057*t9805*t9975;
  t10019 = t9975*t9918;
  t10047 = -1.*t2919*t9979;
  t10051 = t3057*t9979*t9813;
  t10027 = t2919*t9979;
  t10031 = -1.*t3057*t9979*t9702;
  t10041 = -1.*t3057*t9979*t9813;
  t10037 = t3057*t9979*t9702;
  t10081 = t9973*t9813;
  t10076 = -1.*t9973*t9840;
  p_output1[0]=t9826*var2[0] + t3677*var2[1] + t9846*var2[2];
  p_output1[1]=(t9849*t9906 - 1.*t9851*t9910)*var2[0] + (t3057*t9805*t9849 - 1.*t9851*t9854)*var2[1] + (t9849*t9918 - 1.*t9851*t9922)*var2[2];
  p_output1[2]=(t9851*t9906 + t9849*t9910)*var2[0] + (t3057*t9805*t9851 + t9849*t9854)*var2[1] + (t9851*t9918 + t9849*t9922)*var2[2];
  p_output1[3]=(t9846*(t10014 - 1.*t3677*t9985 - 1.*t9854*t9990) + t3677*(t10019 + t9846*t9985 + t9922*t9990))*var2[0] + (t9846*(t10002 + t9826*t9985 + t9910*t9990) + t9826*(t10007 - 1.*t9846*t9985 - 1.*t9922*t9990))*var2[1] + (t9826*(t9976 + t3677*t9985 + t9854*t9990) + t3677*(-1.*t9826*t9985 - 1.*t9910*t9990 + t9995))*var2[2];
  p_output1[4]=(t9918*(t10014 + t10047 + t3057*t3669*t9983) + t3057*t9805*(t10019 + t10051 + t9844*t9983))*var2[0] + (t9918*(t10002 + t10037 + t9820*t9983) + t9906*(t10007 + t10041 - 1.*t9844*t9983))*var2[1] + (t9906*(t10027 + t9976 - 1.*t3057*t3669*t9983) + t3057*t9805*(t10031 - 1.*t9820*t9983 + t9995))*var2[2];
  p_output1[5]=(t3057*t9813*(t10047 - 1.*t3057*t9966) + t2919*(t10051 - 1.*t2919*t9813*t9966 + t9840*t9973))*var2[0] + (t3057*t9813*(t10037 + t10081 - 1.*t2919*t9702*t9966) + t3057*t9702*(t10041 + t10076 + t2919*t9813*t9966))*var2[1] + (t3057*t9702*(t10027 + t3057*t9966) + t2919*(t10031 + t2919*t9702*t9966 - 1.*t9813*t9973))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t9702 - 0.2255*t9840)*var2[0] + (t9840*(t10081 + t9702*t9964) + t9813*(t10076 - 1.*t9813*t9964))*var2[1] + 0.068*t9813*var2[2];
  p_output1[10]=(-0.325*t4757 - 1.*t3693*t9953 - 1.*t4757*t9962)*var2[0] + (0.325*t3693 - 1.*t4757*t9953 + t3693*t9962)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
