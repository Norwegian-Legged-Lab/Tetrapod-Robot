/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:42 GMT+02:00
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
  double t78;
  double t1696;
  double t379;
  double t2209;
  double t2920;
  double t1755;
  double t2923;
  double t472;
  double t3945;
  double t3952;
  double t4427;
  double t1706;
  double t3233;
  double t5138;
  double t5162;
  double t5164;
  double t1175;
  double t1737;
  double t1746;
  double t5247;
  double t5229;
  double t2214;
  double t2929;
  double t2934;
  double t4981;
  double t5074;
  double t5078;
  double t5167;
  double t5189;
  double t5212;
  double t5249;
  double t5250;
  double t5251;
  double t5268;
  double t5310;
  double t5331;
  double t5555;
  double t5560;
  double t5565;
  double t5605;
  double t5608;
  double t5610;
  double t5625;
  double t5629;
  double t5631;
  double t3523;
  double t5083;
  double t5100;
  double t5719;
  double t5720;
  double t5729;
  double t5737;
  double t5738;
  double t5744;
  double t5746;
  double t5747;
  double t5749;
  double t5750;
  double t5753;
  double t5763;
  double t5774;
  double t5776;
  double t5807;
  double t5808;
  double t5731;
  double t5735;
  double t5779;
  double t5799;
  double t5821;
  double t5822;
  double t5824;
  double t5827;
  double t5833;
  double t5837;
  double t5843;
  double t5806;
  double t5810;
  double t5812;
  double t5831;
  double t5851;
  double t5852;
  double t5864;
  double t5865;
  double t5867;
  double t5123;
  double t5214;
  double t5219;
  double t5813;
  double t5881;
  double t5889;
  double t5899;
  double t5921;
  double t5935;
  double t6039;
  double t6059;
  t78 = Cos(var1[4]);
  t1696 = Cos(var1[15]);
  t379 = Cos(var1[5]);
  t2209 = Cos(var1[17]);
  t2920 = Sin(var1[16]);
  t1755 = Cos(var1[16]);
  t2923 = Sin(var1[17]);
  t472 = Sin(var1[15]);
  t3945 = -1.*t2209*t2920;
  t3952 = t1755*t2923;
  t4427 = t3945 + t3952;
  t1706 = Sin(var1[5]);
  t3233 = Sin(var1[4]);
  t5138 = -1.*t1755*t2209;
  t5162 = -1.*t2920*t2923;
  t5164 = t5138 + t5162;
  t1175 = t379*t472;
  t1737 = t1696*t1706;
  t1746 = t1175 + t1737;
  t5247 = Cos(var1[3]);
  t5229 = Sin(var1[3]);
  t2214 = t1755*t2209;
  t2929 = t2920*t2923;
  t2934 = t2214 + t2929;
  t4981 = t1696*t379*t4427;
  t5074 = -1.*t472*t4427*t1706;
  t5078 = t4981 + t5074;
  t5167 = t1696*t379*t5164;
  t5189 = -1.*t472*t5164*t1706;
  t5212 = t5167 + t5189;
  t5249 = -1.*t1696*t379;
  t5250 = t472*t1706;
  t5251 = t5249 + t5250;
  t5268 = t379*t472*t4427;
  t5310 = t1696*t4427*t1706;
  t5331 = t5268 + t5310;
  t5555 = t78*t2934;
  t5560 = -1.*t3233*t5078;
  t5565 = t5555 + t5560;
  t5605 = t379*t472*t5164;
  t5608 = t1696*t5164*t1706;
  t5610 = t5605 + t5608;
  t5625 = t78*t4427;
  t5629 = -1.*t3233*t5212;
  t5631 = t5625 + t5629;
  t3523 = t2934*t3233;
  t5083 = t78*t5078;
  t5100 = t3523 + t5083;
  t5719 = -1.*t1696;
  t5720 = 1. + t5719;
  t5729 = -0.15121*t5720;
  t5737 = -1.*t1755;
  t5738 = 1. + t5737;
  t5744 = -0.28121*t5738;
  t5746 = -1.*t2209;
  t5747 = 1. + t5746;
  t5749 = -0.50321*t5747;
  t5750 = -0.19821*t2209;
  t5753 = t5749 + t5750;
  t5763 = t1755*t5753;
  t5774 = 0.305*t2920*t2923;
  t5776 = t5744 + t5763 + t5774;
  t5807 = t1696*t5776;
  t5808 = t5729 + t5807;
  t5731 = -0.15121*t1696;
  t5735 = 0.15121*t472;
  t5779 = t472*t5776;
  t5799 = t5729 + t5731 + t5735 + t5779;
  t5821 = 0.28121*t2920;
  t5822 = t5753*t2920;
  t5824 = -0.305*t1755*t2923;
  t5827 = t5821 + t5822 + t5824;
  t5833 = t379*t5808;
  t5837 = -1.*t5799*t1706;
  t5843 = t5833 + t5837;
  t5806 = t379*t5799;
  t5810 = t5808*t1706;
  t5812 = t5806 + t5810;
  t5831 = t5827*t3233;
  t5851 = t78*t5843;
  t5852 = t5831 + t5851;
  t5864 = t78*t5827;
  t5865 = -1.*t3233*t5843;
  t5867 = t5864 + t5865;
  t5123 = t4427*t3233;
  t5214 = t78*t5212;
  t5219 = t5123 + t5214;
  t5813 = -1.*t5251*t5812;
  t5881 = t5331*t5812;
  t5889 = t5251*t5812;
  t5899 = -1.*t5610*t5812;
  t5921 = -1.*t5331*t5812;
  t5935 = t5610*t5812;
  t6039 = -1.*t5827*t2934;
  t6059 = t5827*t4427;
  p_output1[0]=t5219*var2[0] + t1746*t78*var2[1] + t5100*var2[2];
  p_output1[1]=(t5247*t5610 - 1.*t5229*t5631)*var2[0] + (t1746*t3233*t5229 + t5247*t5251)*var2[1] + (t5247*t5331 - 1.*t5229*t5565)*var2[2];
  p_output1[2]=(t5229*t5610 + t5247*t5631)*var2[0] + (-1.*t1746*t3233*t5247 + t5229*t5251)*var2[1] + (t5229*t5331 + t5247*t5565)*var2[2];
  p_output1[3]=(t1746*(t5100*t5852 + t5565*t5867 + t5881)*t78 + t5100*(t5813 + t1746*t3233*t5867 - 1.*t1746*t5852*t78))*var2[0] + (t5219*(-1.*t5100*t5852 - 1.*t5565*t5867 + t5921) + t5100*(t5219*t5852 + t5631*t5867 + t5935))*var2[1] + (t1746*(-1.*t5219*t5852 - 1.*t5631*t5867 + t5899)*t78 + t5219*(-1.*t1746*t3233*t5867 + t5889 + t1746*t5852*t78))*var2[2];
  p_output1[4]=(t5331*(t5813 - 1.*t1746*t5843) + t5251*(t2934*t5827 + t5078*t5843 + t5881))*var2[0] + (t5610*(-1.*t5078*t5843 + t5921 + t6039) + t5331*(t5212*t5843 + t5935 + t6059))*var2[1] + (t5610*(t1746*t5843 + t5889) + t5251*(-1.*t4427*t5827 - 1.*t5212*t5843 + t5899))*var2[2];
  p_output1[5]=t2934*(t1696*t5799 - 1.*t472*t5808)*var2[0] + (t4427*(-1.*t4427*t472*t5799 - 1.*t1696*t4427*t5808 + t6039) + t2934*(t472*t5164*t5799 + t1696*t5164*t5808 + t6059))*var2[1] + t4427*(-1.*t1696*t5799 + t472*t5808)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t2934 - 0.15121*t5164)*var2[0] + (-0.15121 + t4427*(-1.*t4427*t5776 + t6039) + t2934*(t5164*t5776 + t6059))*var2[1];
  p_output1[16]=(0.28121*t2923 - 0.305*t2209*t2923 + t2923*t5753)*var2[0] + (0.28121*t2209 + 0.305*Power(t2923,2) + t2209*t5753)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
