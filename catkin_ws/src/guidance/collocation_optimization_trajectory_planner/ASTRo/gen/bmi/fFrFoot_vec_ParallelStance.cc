/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:15 GMT+02:00
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
  double t601;
  double t2319;
  double t2121;
  double t4442;
  double t4720;
  double t4425;
  double t4896;
  double t2287;
  double t4936;
  double t4962;
  double t4970;
  double t2342;
  double t4913;
  double t4469;
  double t4901;
  double t4906;
  double t2304;
  double t2345;
  double t2538;
  double t5506;
  double t5427;
  double t5102;
  double t5156;
  double t5219;
  double t5305;
  double t5326;
  double t5327;
  double t5336;
  double t5356;
  double t5361;
  double t5517;
  double t5520;
  double t5533;
  double t5572;
  double t5616;
  double t5631;
  double t5689;
  double t5724;
  double t5732;
  double t5796;
  double t5804;
  double t5805;
  double t5827;
  double t5884;
  double t5893;
  double t4914;
  double t5262;
  double t5272;
  double t15416;
  double t15494;
  double t17153;
  double t17924;
  double t17952;
  double t17959;
  double t18181;
  double t18220;
  double t18221;
  double t18423;
  double t18440;
  double t18455;
  double t18551;
  double t18789;
  double t18809;
  double t18812;
  double t15629;
  double t16076;
  double t16706;
  double t18574;
  double t18759;
  double t19074;
  double t19411;
  double t19425;
  double t19455;
  double t19460;
  double t19476;
  double t19535;
  double t18782;
  double t18822;
  double t19017;
  double t19456;
  double t19536;
  double t19579;
  double t19700;
  double t19908;
  double t19909;
  double t5334;
  double t5380;
  double t5398;
  double t19029;
  double t19991;
  double t20394;
  double t20612;
  double t22203;
  double t22669;
  double t23303;
  double t23335;
  t601 = Cos(var1[4]);
  t2319 = Cos(var1[12]);
  t2121 = Cos(var1[5]);
  t4442 = Cos(var1[14]);
  t4720 = Sin(var1[13]);
  t4425 = Cos(var1[13]);
  t4896 = Sin(var1[14]);
  t2287 = Sin(var1[12]);
  t4936 = t4442*t4720;
  t4962 = -1.*t4425*t4896;
  t4970 = t4936 + t4962;
  t2342 = Sin(var1[5]);
  t4913 = Sin(var1[4]);
  t4469 = t4425*t4442;
  t4901 = t4720*t4896;
  t4906 = t4469 + t4901;
  t2304 = -1.*t2121*t2287;
  t2345 = -1.*t2319*t2342;
  t2538 = t2304 + t2345;
  t5506 = Cos(var1[3]);
  t5427 = Sin(var1[3]);
  t5102 = t2319*t2121*t4970;
  t5156 = -1.*t2287*t4970*t2342;
  t5219 = t5102 + t5156;
  t5305 = -1.*t4442*t4720;
  t5326 = t4425*t4896;
  t5327 = t5305 + t5326;
  t5336 = t2319*t2121*t4906;
  t5356 = -1.*t2287*t4906*t2342;
  t5361 = t5336 + t5356;
  t5517 = t2319*t2121;
  t5520 = -1.*t2287*t2342;
  t5533 = t5517 + t5520;
  t5572 = t2121*t2287*t4970;
  t5616 = t2319*t4970*t2342;
  t5631 = t5572 + t5616;
  t5689 = t601*t4906;
  t5724 = -1.*t4913*t5219;
  t5732 = t5689 + t5724;
  t5796 = t2121*t2287*t4906;
  t5804 = t2319*t4906*t2342;
  t5805 = t5796 + t5804;
  t5827 = t601*t5327;
  t5884 = -1.*t4913*t5361;
  t5893 = t5827 + t5884;
  t4914 = t4906*t4913;
  t5262 = t601*t5219;
  t5272 = t4914 + t5262;
  t15416 = -1.*t2319;
  t15494 = 1. + t15416;
  t17153 = -1.*t4425;
  t17924 = 1. + t17153;
  t17952 = 0.28121*t17924;
  t17959 = -1.*t4442;
  t18181 = 1. + t17959;
  t18220 = 0.50321*t18181;
  t18221 = 0.23321*t4442;
  t18423 = t18220 + t18221;
  t18440 = t4425*t18423;
  t18455 = -0.27*t4720*t4896;
  t18551 = t17952 + t18440 + t18455;
  t18789 = 0.15121*t15494;
  t18809 = t2319*t18551;
  t18812 = t18789 + t18809;
  t15629 = -0.15121*t15494;
  t16076 = -0.15121*t2319;
  t16706 = -0.15121*t2287;
  t18574 = t2287*t18551;
  t18759 = t15629 + t16076 + t16706 + t18574;
  t19074 = 0.28121*t4720;
  t19411 = -1.*t18423*t4720;
  t19425 = -0.27*t4425*t4896;
  t19455 = t19074 + t19411 + t19425;
  t19460 = t2121*t18812;
  t19476 = -1.*t18759*t2342;
  t19535 = t19460 + t19476;
  t18782 = t2121*t18759;
  t18822 = t18812*t2342;
  t19017 = t18782 + t18822;
  t19456 = t19455*t4913;
  t19536 = t601*t19535;
  t19579 = t19456 + t19536;
  t19700 = t601*t19455;
  t19908 = -1.*t4913*t19535;
  t19909 = t19700 + t19908;
  t5334 = t5327*t4913;
  t5380 = t601*t5361;
  t5398 = t5334 + t5380;
  t19029 = -1.*t5533*t19017;
  t19991 = t5631*t19017;
  t20394 = t5533*t19017;
  t20612 = -1.*t5805*t19017;
  t22203 = -1.*t5631*t19017;
  t22669 = t5805*t19017;
  t23303 = -1.*t19455*t4906;
  t23335 = t19455*t5327;
  p_output1[0]=t5398*var2[0] + t2538*t601*var2[1] + t5272*var2[2];
  p_output1[1]=(t5506*t5805 - 1.*t5427*t5893)*var2[0] + (t2538*t4913*t5427 + t5506*t5533)*var2[1] + (t5506*t5631 - 1.*t5427*t5732)*var2[2];
  p_output1[2]=(t5427*t5805 + t5506*t5893)*var2[0] + (-1.*t2538*t4913*t5506 + t5427*t5533)*var2[1] + (t5427*t5631 + t5506*t5732)*var2[2];
  p_output1[3]=(t2538*(t19991 + t19579*t5272 + t19909*t5732)*t601 + t5272*(t19029 + t19909*t2538*t4913 - 1.*t19579*t2538*t601))*var2[0] + (t5398*(t22203 - 1.*t19579*t5272 - 1.*t19909*t5732) + t5272*(t22669 + t19579*t5398 + t19909*t5893))*var2[1] + (t2538*(t20612 - 1.*t19579*t5398 - 1.*t19909*t5893)*t601 + t5398*(t20394 - 1.*t19909*t2538*t4913 + t19579*t2538*t601))*var2[2];
  p_output1[4]=((t19991 + t19455*t4906 + t19535*t5219)*t5533 + (t19029 - 1.*t19535*t2538)*t5631)*var2[0] + ((t22669 + t23335 + t19535*t5361)*t5631 + (t22203 + t23303 - 1.*t19535*t5219)*t5805)*var2[1] + ((t20612 - 1.*t19455*t5327 - 1.*t19535*t5361)*t5533 + (t20394 + t19535*t2538)*t5805)*var2[2];
  p_output1[5]=(t18812*t2287 - 1.*t18759*t2319)*t4906*var2[0] + (t4906*(t23335 + t18759*t2287*t4906 + t18812*t2319*t4906) + (t23303 - 1.*t18759*t2287*t4970 - 1.*t18812*t2319*t4970)*t5327)*var2[1] + (-1.*t18812*t2287 + t18759*t2319)*t5327*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t4906*(t23335 + t18551*t4906) + (t23303 - 1.*t18551*t4970)*t5327)*var2[1] + (-0.15121*t4970 - 0.15121*t5327)*var2[2];
  p_output1[13]=(0.28121*t4896 - 1.*t18423*t4896 - 0.27*t4442*t4896)*var2[0] + (0.28121*t4442 - 1.*t18423*t4442 + 0.27*Power(t4896,2))*var2[2];
  p_output1[14]=-0.27*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
