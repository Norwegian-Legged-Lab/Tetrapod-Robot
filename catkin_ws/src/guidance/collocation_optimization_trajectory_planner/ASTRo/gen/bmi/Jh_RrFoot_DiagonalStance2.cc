/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:45 GMT+02:00
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
  double t5718;
  double t5624;
  double t5697;
  double t5719;
  double t5805;
  double t5806;
  double t5807;
  double t5795;
  double t5801;
  double t5809;
  double t5800;
  double t5815;
  double t5728;
  double t5700;
  double t5723;
  double t5724;
  double t5808;
  double t5820;
  double t5828;
  double t5926;
  double t5831;
  double t5832;
  double t5836;
  double t5906;
  double t5852;
  double t5853;
  double t5854;
  double t5874;
  double t5881;
  double t5882;
  double t5907;
  double t5908;
  double t5911;
  double t5940;
  double t5948;
  double t5949;
  double t5955;
  double t5958;
  double t5959;
  double t5964;
  double t5977;
  double t5981;
  double t5983;
  double t5987;
  double t5988;
  double t5855;
  double t5883;
  double t5897;
  double t6010;
  double t6011;
  double t6012;
  double t6020;
  double t6021;
  double t6022;
  double t6026;
  double t6031;
  double t6032;
  double t6033;
  double t6035;
  double t6036;
  double t6037;
  double t6038;
  double t6042;
  double t6043;
  double t6015;
  double t6019;
  double t6039;
  double t6040;
  double t6047;
  double t6048;
  double t6049;
  double t6050;
  double t6052;
  double t6053;
  double t6054;
  double t6041;
  double t6044;
  double t6045;
  double t6051;
  double t6055;
  double t6056;
  double t6058;
  double t6059;
  double t6060;
  double t5781;
  double t5829;
  double t5830;
  double t6046;
  double t6064;
  double t6072;
  double t6077;
  double t6083;
  double t6088;
  double t6104;
  double t6108;
  t5718 = Cos(var1[16]);
  t5624 = Cos(var1[17]);
  t5697 = Sin(var1[16]);
  t5719 = Sin(var1[17]);
  t5805 = -1.*t5718*t5624;
  t5806 = -1.*t5697*t5719;
  t5807 = t5805 + t5806;
  t5795 = Cos(var1[4]);
  t5801 = Cos(var1[5]);
  t5809 = Sin(var1[15]);
  t5800 = Cos(var1[15]);
  t5815 = Sin(var1[5]);
  t5728 = Sin(var1[4]);
  t5700 = -1.*t5624*t5697;
  t5723 = t5718*t5719;
  t5724 = t5700 + t5723;
  t5808 = t5800*t5801*t5807;
  t5820 = -1.*t5809*t5807*t5815;
  t5828 = t5808 + t5820;
  t5926 = Sin(var1[3]);
  t5831 = t5801*t5809;
  t5832 = t5800*t5815;
  t5836 = t5831 + t5832;
  t5906 = Cos(var1[3]);
  t5852 = t5718*t5624;
  t5853 = t5697*t5719;
  t5854 = t5852 + t5853;
  t5874 = t5800*t5801*t5724;
  t5881 = -1.*t5809*t5724*t5815;
  t5882 = t5874 + t5881;
  t5907 = t5801*t5809*t5807;
  t5908 = t5800*t5807*t5815;
  t5911 = t5907 + t5908;
  t5940 = t5795*t5724;
  t5948 = -1.*t5728*t5828;
  t5949 = t5940 + t5948;
  t5955 = -1.*t5800*t5801;
  t5958 = t5809*t5815;
  t5959 = t5955 + t5958;
  t5964 = t5801*t5809*t5724;
  t5977 = t5800*t5724*t5815;
  t5981 = t5964 + t5977;
  t5983 = t5795*t5854;
  t5987 = -1.*t5728*t5882;
  t5988 = t5983 + t5987;
  t5855 = t5854*t5728;
  t5883 = t5795*t5882;
  t5897 = t5855 + t5883;
  t6010 = -1.*t5800;
  t6011 = 1. + t6010;
  t6012 = -0.15121*t6011;
  t6020 = -1.*t5718;
  t6021 = 1. + t6020;
  t6022 = -0.28121*t6021;
  t6026 = -1.*t5624;
  t6031 = 1. + t6026;
  t6032 = -0.50321*t6031;
  t6033 = -0.19821*t5624;
  t6035 = t6032 + t6033;
  t6036 = t5718*t6035;
  t6037 = 0.305*t5697*t5719;
  t6038 = t6022 + t6036 + t6037;
  t6042 = t5800*t6038;
  t6043 = t6012 + t6042;
  t6015 = -0.15121*t5800;
  t6019 = 0.15121*t5809;
  t6039 = t5809*t6038;
  t6040 = t6012 + t6015 + t6019 + t6039;
  t6047 = 0.28121*t5697;
  t6048 = t6035*t5697;
  t6049 = -0.305*t5718*t5719;
  t6050 = t6047 + t6048 + t6049;
  t6052 = t5801*t6043;
  t6053 = -1.*t6040*t5815;
  t6054 = t6052 + t6053;
  t6041 = t5801*t6040;
  t6044 = t6043*t5815;
  t6045 = t6041 + t6044;
  t6051 = t6050*t5728;
  t6055 = t5795*t6054;
  t6056 = t6051 + t6055;
  t6058 = t5795*t6050;
  t6059 = -1.*t5728*t6054;
  t6060 = t6058 + t6059;
  t5781 = t5724*t5728;
  t5829 = t5795*t5828;
  t5830 = t5781 + t5829;
  t6046 = -1.*t5959*t6045;
  t6064 = t5981*t6045;
  t6072 = -1.*t5981*t6045;
  t6077 = t5911*t6045;
  t6083 = t5959*t6045;
  t6088 = -1.*t5911*t6045;
  t6104 = -1.*t6050*t5854;
  t6108 = t6050*t5724;
  p_output1[0]=t5830;
  p_output1[1]=t5795*t5836;
  p_output1[2]=t5897;
  p_output1[3]=t5906*t5911 - 1.*t5926*t5949;
  p_output1[4]=t5728*t5836*t5926 + t5906*t5959;
  p_output1[5]=t5906*t5981 - 1.*t5926*t5988;
  p_output1[6]=t5911*t5926 + t5906*t5949;
  p_output1[7]=-1.*t5728*t5836*t5906 + t5926*t5959;
  p_output1[8]=t5926*t5981 + t5906*t5988;
  p_output1[9]=t5897*(t6046 - 1.*t5795*t5836*t6056 + t5728*t5836*t6060) + t5795*t5836*(t5897*t6056 + t5988*t6060 + t6064);
  p_output1[10]=t5830*(-1.*t5897*t6056 - 1.*t5988*t6060 + t6072) + t5897*(t5830*t6056 + t5949*t6060 + t6077);
  p_output1[11]=t5830*(t5795*t5836*t6056 - 1.*t5728*t5836*t6060 + t6083) + t5795*t5836*(-1.*t5830*t6056 - 1.*t5949*t6060 + t6088);
  p_output1[12]=t5981*(t6046 - 1.*t5836*t6054) + t5959*(t5854*t6050 + t5882*t6054 + t6064);
  p_output1[13]=t5911*(-1.*t5882*t6054 + t6072 + t6104) + t5981*(t5828*t6054 + t6077 + t6108);
  p_output1[14]=t5911*(t5836*t6054 + t6083) + t5959*(-1.*t5724*t6050 - 1.*t5828*t6054 + t6088);
  p_output1[15]=t5854*(t5800*t6040 - 1.*t5809*t6043);
  p_output1[16]=t5724*(-1.*t5724*t5809*t6040 - 1.*t5724*t5800*t6043 + t6104) + t5854*(t5807*t5809*t6040 + t5800*t5807*t6043 + t6108);
  p_output1[17]=t5724*(-1.*t5800*t6040 + t5809*t6043);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t5807 - 0.15121*t5854;
  p_output1[46]=-0.15121 + t5724*(-1.*t5724*t6038 + t6104) + t5854*(t5807*t6038 + t6108);
  p_output1[47]=0;
  p_output1[48]=0.28121*t5719 - 0.305*t5624*t5719 + t5719*t6035;
  p_output1[49]=0;
  p_output1[50]=0.28121*t5624 + 0.305*Power(t5719,2) + t5624*t6035;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
