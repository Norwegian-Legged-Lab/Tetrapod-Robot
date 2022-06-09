/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:50:02 GMT+02:00
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
  double t5888;
  double t3265;
  double t9819;
  double t9880;
  double t9872;
  double t9874;
  double t9885;
  double t3190;
  double t9875;
  double t9886;
  double t9887;
  double t9854;
  double t9899;
  double t9900;
  double t9901;
  double t9897;
  double t9965;
  double t9967;
  double t9902;
  double t9903;
  double t9904;
  double t9909;
  double t9910;
  double t9911;
  double t9912;
  double t9913;
  double t9914;
  double t9968;
  double t9969;
  double t9970;
  double t9975;
  double t9977;
  double t9978;
  double t9980;
  double t9981;
  double t9982;
  double t9987;
  double t9989;
  double t9990;
  double t9992;
  double t9993;
  double t9994;
  double t9892;
  double t9905;
  double t9906;
  double t10023;
  double t10024;
  double t10025;
  double t10027;
  double t10028;
  double t10029;
  double t10030;
  double t10031;
  double t10032;
  double t3405;
  double t9864;
  double t9865;
  double t10022;
  double t10026;
  double t10033;
  double t10034;
  double t10038;
  double t10039;
  double t10040;
  double t10041;
  double t10042;
  double t10043;
  double t10016;
  double t10018;
  double t10019;
  double t10021;
  double t10035;
  double t10036;
  double t10048;
  double t10049;
  double t10051;
  double t10053;
  double t10054;
  double t10055;
  double t10037;
  double t10044;
  double t10046;
  double t10052;
  double t10056;
  double t10057;
  double t10059;
  double t10060;
  double t10061;
  double t9908;
  double t9953;
  double t9957;
  double t10047;
  double t10065;
  double t10072;
  double t10077;
  double t10084;
  double t10089;
  double t10117;
  double t10121;
  double t10097;
  double t10101;
  double t10111;
  double t10107;
  double t10151;
  double t10146;
  t5888 = Cos(var1[9]);
  t3265 = Sin(var1[4]);
  t9819 = Cos(var1[4]);
  t9880 = Cos(var1[10]);
  t9872 = Cos(var1[11]);
  t9874 = Sin(var1[10]);
  t9885 = Sin(var1[11]);
  t3190 = Sin(var1[9]);
  t9875 = t9872*t9874;
  t9886 = -1.*t9880*t9885;
  t9887 = t9875 + t9886;
  t9854 = Sin(var1[5]);
  t9899 = t9880*t9872;
  t9900 = t9874*t9885;
  t9901 = t9899 + t9900;
  t9897 = Cos(var1[5]);
  t9965 = Cos(var1[3]);
  t9967 = Sin(var1[3]);
  t9902 = t9897*t9901;
  t9903 = t3190*t9887*t9854;
  t9904 = t9902 + t9903;
  t9909 = -1.*t9872*t9874;
  t9910 = t9880*t9885;
  t9911 = t9909 + t9910;
  t9912 = t9897*t9911;
  t9913 = t3190*t9901*t9854;
  t9914 = t9912 + t9913;
  t9968 = t9819*t3190;
  t9969 = t5888*t3265*t9854;
  t9970 = t9968 + t9969;
  t9975 = -1.*t9897*t3190*t9887;
  t9977 = t9901*t9854;
  t9978 = t9975 + t9977;
  t9980 = t5888*t9819*t9887;
  t9981 = -1.*t3265*t9904;
  t9982 = t9980 + t9981;
  t9987 = -1.*t9897*t3190*t9901;
  t9989 = t9911*t9854;
  t9990 = t9987 + t9989;
  t9992 = t5888*t9819*t9901;
  t9993 = -1.*t3265*t9914;
  t9994 = t9992 + t9993;
  t9892 = t5888*t9887*t3265;
  t9905 = t9819*t9904;
  t9906 = t9892 + t9905;
  t10023 = -0.0641*t9872;
  t10024 = -0.28*t9885;
  t10025 = t10023 + t10024;
  t10027 = -1.*t9872;
  t10028 = 1. + t10027;
  t10029 = -0.575*t10028;
  t10030 = -0.295*t9872;
  t10031 = -0.0641*t9885;
  t10032 = t10029 + t10030 + t10031;
  t3405 = t3190*t3265;
  t9864 = -1.*t5888*t9819*t9854;
  t9865 = t3405 + t9864;
  t10022 = 0.325*t9874;
  t10026 = t9880*t10025;
  t10033 = t9874*t10032;
  t10034 = t10022 + t10026 + t10033;
  t10038 = -1.*t9880;
  t10039 = 1. + t10038;
  t10040 = -0.325*t10039;
  t10041 = -1.*t9874*t10025;
  t10042 = t9880*t10032;
  t10043 = t10040 + t10041 + t10042;
  t10016 = -1.*t5888;
  t10018 = 1. + t10016;
  t10019 = 0.1575*t10018;
  t10021 = 0.2255*t5888;
  t10035 = -1.*t3190*t10034;
  t10036 = t10019 + t10021 + t10035;
  t10048 = 0.068*t3190;
  t10049 = t5888*t10034;
  t10051 = t10048 + t10049;
  t10053 = t9897*t10043;
  t10054 = -1.*t10036*t9854;
  t10055 = t10053 + t10054;
  t10037 = t9897*t10036;
  t10044 = t10043*t9854;
  t10046 = t10037 + t10044;
  t10052 = t10051*t3265;
  t10056 = t9819*t10055;
  t10057 = t10052 + t10056;
  t10059 = t9819*t10051;
  t10060 = -1.*t3265*t10055;
  t10061 = t10059 + t10060;
  t9908 = t5888*t9901*t3265;
  t9953 = t9819*t9914;
  t9957 = t9908 + t9953;
  t10047 = t5888*t9897*t10046;
  t10065 = -1.*t10046*t9978;
  t10072 = t10046*t9978;
  t10077 = -1.*t10046*t9990;
  t10084 = -1.*t5888*t9897*t10046;
  t10089 = t10046*t9990;
  t10117 = -1.*t3190*t10051;
  t10121 = t5888*t10051*t9901;
  t10097 = t3190*t10051;
  t10101 = -1.*t5888*t10051*t9887;
  t10111 = -1.*t5888*t10051*t9901;
  t10107 = t5888*t10051*t9887;
  t10151 = t10043*t9901;
  t10146 = -1.*t10043*t9911;
  p_output1[0]=t9906*var2[0] + t9865*var2[1] + t9957*var2[2];
  p_output1[1]=(t9965*t9978 - 1.*t9967*t9982)*var2[0] + (t5888*t9897*t9965 - 1.*t9967*t9970)*var2[1] + (t9965*t9990 - 1.*t9967*t9994)*var2[2];
  p_output1[2]=(t9967*t9978 + t9965*t9982)*var2[0] + (t5888*t9897*t9967 + t9965*t9970)*var2[1] + (t9967*t9990 + t9965*t9994)*var2[2];
  p_output1[3]=(t9957*(t10084 - 1.*t10057*t9865 - 1.*t10061*t9970) + t9865*(t10089 + t10057*t9957 + t10061*t9994))*var2[0] + (t9957*(t10072 + t10057*t9906 + t10061*t9982) + t9906*(t10077 - 1.*t10057*t9957 - 1.*t10061*t9994))*var2[1] + (t9906*(t10047 + t10057*t9865 + t10061*t9970) + t9865*(t10065 - 1.*t10057*t9906 - 1.*t10061*t9982))*var2[2];
  p_output1[4]=(t5888*t9897*(t10089 + t10121 + t10055*t9914) + (t10084 + t10117 + t10055*t5888*t9854)*t9990)*var2[0] + ((t10077 + t10111 - 1.*t10055*t9914)*t9978 + (t10072 + t10107 + t10055*t9904)*t9990)*var2[1] + (t5888*t9897*(t10065 + t10101 - 1.*t10055*t9904) + (t10047 + t10097 - 1.*t10055*t5888*t9854)*t9978)*var2[2];
  p_output1[5]=(t5888*(t10117 - 1.*t10036*t5888)*t9901 + t3190*(t10121 - 1.*t10036*t3190*t9901 + t10043*t9911))*var2[0] + (t5888*(t10107 + t10151 - 1.*t10036*t3190*t9887)*t9901 + t5888*t9887*(t10111 + t10146 + t10036*t3190*t9901))*var2[1] + (t5888*(t10097 + t10036*t5888)*t9887 + t3190*(t10101 + t10036*t3190*t9887 - 1.*t10043*t9901))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t9887 - 0.2255*t9911)*var2[0] + (t9901*(t10146 - 1.*t10034*t9901) + (t10151 + t10034*t9887)*t9911)*var2[1] + 0.068*t9901*var2[2];
  p_output1[10]=(-1.*t10025*t9872 - 0.325*t9885 - 1.*t10032*t9885)*var2[0] + (0.325*t9872 + t10032*t9872 - 1.*t10025*t9885)*var2[2];
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
