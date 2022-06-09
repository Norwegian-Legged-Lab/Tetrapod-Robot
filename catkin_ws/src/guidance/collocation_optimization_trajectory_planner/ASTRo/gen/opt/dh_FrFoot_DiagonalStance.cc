/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:43 GMT+02:00
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
  double t3352;
  double t3122;
  double t4534;
  double t4188;
  double t3405;
  double t3651;
  double t3864;
  double t4009;
  double t4061;
  double t4457;
  double t4536;
  double t4539;
  double t4526;
  double t4554;
  double t4640;
  double t4657;
  double t4680;
  double t4697;
  double t4698;
  double t4303;
  double t4506;
  double t4516;
  double t4861;
  double t4869;
  double t4851;
  double t4808;
  double t4811;
  double t4812;
  double t4816;
  double t4865;
  double t4871;
  double t4873;
  double t4910;
  double t4902;
  double t4906;
  double t4907;
  double t4890;
  double t4911;
  double t4912;
  double t4913;
  double t5010;
  double t5012;
  double t5013;
  double t4762;
  double t4764;
  double t4774;
  double t4775;
  double t4780;
  double t4553;
  double t4710;
  double t4734;
  double t5022;
  double t5054;
  double t5063;
  double t5014;
  double t5015;
  double t5017;
  double t5064;
  double t5065;
  double t5067;
  double t5113;
  double t5114;
  double t5116;
  double t5152;
  double t5153;
  double t5154;
  double t5069;
  double t5070;
  double t5086;
  double t5108;
  double t5127;
  double t5137;
  double t5138;
  double t5139;
  double t5144;
  double t5187;
  double t5189;
  double t5190;
  double t5192;
  double t5193;
  double t5194;
  double t5201;
  double t5202;
  double t5203;
  double t5236;
  double t5246;
  double t4818;
  double t4877;
  double t4878;
  double t5317;
  double t5213;
  double t5215;
  double t5216;
  double t5349;
  double t5412;
  double t5418;
  t3352 = Cos(var1[14]);
  t3122 = Sin(var1[14]);
  t4534 = Cos(var1[12]);
  t4188 = Cos(var1[13]);
  t3405 = -1.*t3352;
  t3651 = 1. + t3405;
  t3864 = 0.50321*t3651;
  t4009 = 0.19821*t3352;
  t4061 = t3864 + t4009;
  t4457 = Sin(var1[13]);
  t4536 = -1.*t4534;
  t4539 = 1. + t4536;
  t4526 = Sin(var1[12]);
  t4554 = -1.*t4188;
  t4640 = 1. + t4554;
  t4657 = 0.28121*t4640;
  t4680 = t4188*t4061;
  t4697 = -0.305*t4457*t3122;
  t4698 = t4657 + t4680 + t4697;
  t4303 = t4188*t3352;
  t4506 = t4457*t3122;
  t4516 = t4303 + t4506;
  t4861 = Cos(var1[5]);
  t4869 = Sin(var1[5]);
  t4851 = Cos(var1[4]);
  t4808 = -1.*t3352*t4457;
  t4811 = t4188*t3122;
  t4812 = t4808 + t4811;
  t4816 = Sin(var1[4]);
  t4865 = t4534*t4861*t4516;
  t4871 = -1.*t4526*t4516*t4869;
  t4873 = t4865 + t4871;
  t4910 = Cos(var1[3]);
  t4902 = t4861*t4526*t4516;
  t4906 = t4534*t4516*t4869;
  t4907 = t4902 + t4906;
  t4890 = Sin(var1[3]);
  t4911 = t4851*t4812;
  t4912 = -1.*t4816*t4873;
  t4913 = t4911 + t4912;
  t5010 = t3352*t4457;
  t5012 = -1.*t4188*t3122;
  t5013 = t5010 + t5012;
  t4762 = -0.15121*t4539;
  t4764 = -0.15121*t4534;
  t4774 = -0.15121*t4526;
  t4775 = t4526*t4698;
  t4780 = t4762 + t4764 + t4774 + t4775;
  t4553 = 0.15121*t4539;
  t4710 = t4534*t4698;
  t4734 = t4553 + t4710;
  t5022 = t4534*t4861;
  t5054 = -1.*t4526*t4869;
  t5063 = t5022 + t5054;
  t5014 = t4861*t4526*t5013;
  t5015 = t4534*t5013*t4869;
  t5017 = t5014 + t5015;
  t5064 = t4861*t4780;
  t5065 = t4734*t4869;
  t5067 = t5064 + t5065;
  t5113 = t4861*t4734;
  t5114 = -1.*t4780*t4869;
  t5116 = t5113 + t5114;
  t5152 = t4534*t4861*t5013;
  t5153 = -1.*t4526*t5013*t4869;
  t5154 = t5152 + t5153;
  t5069 = -1.*t5063*t5067;
  t5070 = -1.*t4861*t4526;
  t5086 = -1.*t4534*t4869;
  t5108 = t5070 + t5086;
  t5127 = 0.28121*t4457;
  t5137 = -1.*t4061*t4457;
  t5138 = -0.305*t4188*t3122;
  t5139 = t5127 + t5137 + t5138;
  t5144 = t5017*t5067;
  t5187 = t4516*t4816;
  t5189 = t4851*t5154;
  t5190 = t5187 + t5189;
  t5192 = t5139*t4816;
  t5193 = t4851*t5116;
  t5194 = t5192 + t5193;
  t5201 = t4851*t5139;
  t5202 = -1.*t4816*t5116;
  t5203 = t5201 + t5202;
  t5236 = -1.*t5139*t4516;
  t5246 = t5139*t4812;
  t4818 = t4812*t4816;
  t4877 = t4851*t4873;
  t4878 = t4818 + t4877;
  t5317 = -1.*t5017*t5067;
  t5213 = t4851*t4516;
  t5215 = -1.*t4816*t5154;
  t5216 = t5213 + t5215;
  t5349 = t4907*t5067;
  t5412 = t5063*t5067;
  t5418 = -1.*t4907*t5067;
  p_output1[0]=t4878*var2[0] + (t4907*t4910 - 1.*t4890*t4913)*var2[1] + (t4890*t4907 + t4910*t4913)*var2[2] + (t5190*(t5069 - 1.*t4851*t5108*t5194 + t4816*t5108*t5203) + t4851*t5108*(t5144 + t5190*t5194 + t5203*t5216))*var2[3] + (t5017*(t5069 - 1.*t5108*t5116) + t5063*(t4516*t5139 + t5144 + t5116*t5154))*var2[4] + t4516*(t4526*t4734 - 1.*t4534*t4780)*var2[5] + (0.28121*t3122 - 0.305*t3122*t3352 - 1.*t3122*t4061)*var2[13];
  p_output1[1]=t4851*t5108*var2[0] + (t4910*t5063 + t4816*t4890*t5108)*var2[1] + (t4890*t5063 - 1.*t4816*t4910*t5108)*var2[2] + (t4878*(-1.*t5190*t5194 - 1.*t5203*t5216 + t5317) + t5190*(t4878*t5194 + t4913*t5203 + t5349))*var2[3] + (t4907*(-1.*t5116*t5154 + t5236 + t5317) + t5017*(t4873*t5116 + t5246 + t5349))*var2[4] + (t4812*(-1.*t4534*t4734*t5013 - 1.*t4526*t4780*t5013 + t5236) + t4516*(t4516*t4534*t4734 + t4516*t4526*t4780 + t5246))*var2[5] + (-0.15121 + t4812*(-1.*t4698*t5013 + t5236) + t4516*(t4516*t4698 + t5246))*var2[12];
  p_output1[2]=t5190*var2[0] + (t4910*t5017 - 1.*t4890*t5216)*var2[1] + (t4890*t5017 + t4910*t5216)*var2[2] + (t4878*(t4851*t5108*t5194 - 1.*t4816*t5108*t5203 + t5412) + t4851*t5108*(-1.*t4878*t5194 - 1.*t4913*t5203 + t5418))*var2[3] + (t4907*(t5108*t5116 + t5412) + t5063*(-1.*t4873*t5116 - 1.*t4812*t5139 + t5418))*var2[4] + (-1.*t4526*t4734 + t4534*t4780)*t4812*var2[5] + (-0.15121*t4812 - 0.15121*t5013)*var2[12] + (0.305*Power(t3122,2) + 0.28121*t3352 - 1.*t3352*t4061)*var2[13] - 0.305*var2[14];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
