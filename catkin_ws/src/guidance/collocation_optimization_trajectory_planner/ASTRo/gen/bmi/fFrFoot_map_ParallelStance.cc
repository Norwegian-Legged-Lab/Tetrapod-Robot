/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:29 GMT+02:00
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
  double t4844;
  double t4824;
  double t4825;
  double t4848;
  double t4919;
  double t4928;
  double t4932;
  double t4905;
  double t4940;
  double t4904;
  double t4957;
  double t4867;
  double t4830;
  double t4849;
  double t4861;
  double t4862;
  double t4933;
  double t4962;
  double t4967;
  double t4982;
  double t4976;
  double t4977;
  double t4980;
  double t4975;
  double t4983;
  double t4986;
  double t4987;
  double t5011;
  double t5015;
  double t5016;
  double t5034;
  double t5035;
  double t5040;
  double t5043;
  double t5047;
  double t5048;
  double t5049;
  double t5050;
  double t5054;
  double t5059;
  double t5060;
  double t5061;
  double t5063;
  double t5067;
  double t5068;
  double t5069;
  double t5037;
  double t5038;
  double t5039;
  double t5064;
  double t5065;
  double t5073;
  double t5074;
  double t5075;
  double t5076;
  double t5077;
  double t5078;
  double t5079;
  double t5081;
  double t5082;
  double t5083;
  double t5066;
  double t5070;
  double t5071;
  double t5010;
  double t5021;
  double t5022;
  double t5024;
  double t5025;
  double t5028;
  double t5080;
  double t5084;
  double t5085;
  double t5087;
  double t5088;
  double t5089;
  double t5094;
  double t5095;
  double t5096;
  double t5029;
  double t5030;
  double t5031;
  double t5072;
  double t5098;
  double t4863;
  double t4968;
  double t4974;
  double t5100;
  double t5101;
  double t5102;
  double t5132;
  double t5137;
  double t5165;
  double t5169;
  double t5219;
  double t5227;
  t4844 = Cos(var1[13]);
  t4824 = Cos(var1[14]);
  t4825 = Sin(var1[13]);
  t4848 = Sin(var1[14]);
  t4919 = t4844*t4824;
  t4928 = t4825*t4848;
  t4932 = t4919 + t4928;
  t4905 = Cos(var1[5]);
  t4940 = Sin(var1[12]);
  t4904 = Cos(var1[12]);
  t4957 = Sin(var1[5]);
  t4867 = Cos(var1[4]);
  t4830 = -1.*t4824*t4825;
  t4849 = t4844*t4848;
  t4861 = t4830 + t4849;
  t4862 = Sin(var1[4]);
  t4933 = t4904*t4905*t4932;
  t4962 = -1.*t4940*t4932*t4957;
  t4967 = t4933 + t4962;
  t4982 = Sin(var1[3]);
  t4976 = t4905*t4940*t4932;
  t4977 = t4904*t4932*t4957;
  t4980 = t4976 + t4977;
  t4975 = Cos(var1[3]);
  t4983 = t4867*t4861;
  t4986 = -1.*t4862*t4967;
  t4987 = t4983 + t4986;
  t5011 = t4824*t4825;
  t5015 = -1.*t4844*t4848;
  t5016 = t5011 + t5015;
  t5034 = -1.*t4904;
  t5035 = 1. + t5034;
  t5040 = -1.*t4844;
  t5043 = 1. + t5040;
  t5047 = 0.28121*t5043;
  t5048 = -1.*t4824;
  t5049 = 1. + t5048;
  t5050 = 0.50321*t5049;
  t5054 = 0.19821*t4824;
  t5059 = t5050 + t5054;
  t5060 = t4844*t5059;
  t5061 = -0.305*t4825*t4848;
  t5063 = t5047 + t5060 + t5061;
  t5067 = 0.15121*t5035;
  t5068 = t4904*t5063;
  t5069 = t5067 + t5068;
  t5037 = -0.15121*t5035;
  t5038 = -0.15121*t4904;
  t5039 = -0.15121*t4940;
  t5064 = t4940*t5063;
  t5065 = t5037 + t5038 + t5039 + t5064;
  t5073 = -1.*t4905*t4940;
  t5074 = -1.*t4904*t4957;
  t5075 = t5073 + t5074;
  t5076 = 0.28121*t4825;
  t5077 = -1.*t5059*t4825;
  t5078 = -0.305*t4844*t4848;
  t5079 = t5076 + t5077 + t5078;
  t5081 = t4905*t5069;
  t5082 = -1.*t5065*t4957;
  t5083 = t5081 + t5082;
  t5066 = t4905*t5065;
  t5070 = t5069*t4957;
  t5071 = t5066 + t5070;
  t5010 = t4932*t4862;
  t5021 = t4904*t4905*t5016;
  t5022 = -1.*t4940*t5016*t4957;
  t5024 = t5021 + t5022;
  t5025 = t4867*t5024;
  t5028 = t5010 + t5025;
  t5080 = t5079*t4862;
  t5084 = t4867*t5083;
  t5085 = t5080 + t5084;
  t5087 = t4867*t5079;
  t5088 = -1.*t4862*t5083;
  t5089 = t5087 + t5088;
  t5094 = t4905*t4940*t5016;
  t5095 = t4904*t5016*t4957;
  t5096 = t5094 + t5095;
  t5029 = t4904*t4905;
  t5030 = -1.*t4940*t4957;
  t5031 = t5029 + t5030;
  t5072 = -1.*t5031*t5071;
  t5098 = t5096*t5071;
  t4863 = t4861*t4862;
  t4968 = t4867*t4967;
  t4974 = t4863 + t4968;
  t5100 = t4867*t4932;
  t5101 = -1.*t4862*t5024;
  t5102 = t5100 + t5101;
  t5132 = -1.*t5096*t5071;
  t5137 = t4980*t5071;
  t5165 = -1.*t5079*t4932;
  t5169 = t5079*t4861;
  t5219 = t5031*t5071;
  t5227 = -1.*t4980*t5071;
  p_output1[0]=t4974;
  p_output1[1]=t4975*t4980 - 1.*t4982*t4987;
  p_output1[2]=t4980*t4982 + t4975*t4987;
  p_output1[3]=t5028*(t5072 - 1.*t4867*t5075*t5085 + t4862*t5075*t5089) + t4867*t5075*(t5028*t5085 + t5098 + t5089*t5102);
  p_output1[4]=(t5072 - 1.*t5075*t5083)*t5096 + t5031*(t4932*t5079 + t5024*t5083 + t5098);
  p_output1[5]=t4932*(-1.*t4904*t5065 + t4940*t5069);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t4848 - 0.305*t4824*t4848 - 1.*t4848*t5059;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4867*t5075;
  p_output1[19]=t4975*t5031 + t4862*t4982*t5075;
  p_output1[20]=t4982*t5031 - 1.*t4862*t4975*t5075;
  p_output1[21]=t4974*(-1.*t5028*t5085 - 1.*t5089*t5102 + t5132) + t5028*(t4974*t5085 + t4987*t5089 + t5137);
  p_output1[22]=t4980*(-1.*t5024*t5083 + t5132 + t5165) + t5096*(t4967*t5083 + t5137 + t5169);
  p_output1[23]=t4861*(-1.*t4940*t5016*t5065 - 1.*t4904*t5016*t5069 + t5165) + t4932*(t4932*t4940*t5065 + t4904*t4932*t5069 + t5169);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t4861*(-1.*t5016*t5063 + t5165) + t4932*(t4932*t5063 + t5169);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t5028;
  p_output1[37]=t4975*t5096 - 1.*t4982*t5102;
  p_output1[38]=t4982*t5096 + t4975*t5102;
  p_output1[39]=t4974*(t4867*t5075*t5085 - 1.*t4862*t5075*t5089 + t5219) + t4867*t5075*(-1.*t4974*t5085 - 1.*t4987*t5089 + t5227);
  p_output1[40]=t4980*(t5075*t5083 + t5219) + t5031*(-1.*t4861*t5079 - 1.*t4967*t5083 + t5227);
  p_output1[41]=t4861*(t4904*t5065 - 1.*t4940*t5069);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t4861 - 0.15121*t5016;
  p_output1[49]=0.28121*t4824 + 0.305*Power(t4848,2) - 1.*t4824*t5059;
  p_output1[50]=-0.305;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
