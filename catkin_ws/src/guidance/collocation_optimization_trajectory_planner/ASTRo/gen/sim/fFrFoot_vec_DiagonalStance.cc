/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:21 GMT+02:00
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
  double t123;
  double t422;
  double t179;
  double t1049;
  double t2907;
  double t784;
  double t3498;
  double t417;
  double t3535;
  double t3916;
  double t4004;
  double t442;
  double t3521;
  double t1050;
  double t3507;
  double t3512;
  double t421;
  double t487;
  double t517;
  double t4323;
  double t4316;
  double t4201;
  double t4202;
  double t4220;
  double t4254;
  double t4255;
  double t4290;
  double t4295;
  double t4296;
  double t4308;
  double t4324;
  double t4325;
  double t4336;
  double t4345;
  double t4347;
  double t4352;
  double t4359;
  double t4360;
  double t4361;
  double t4372;
  double t4416;
  double t4417;
  double t4426;
  double t4428;
  double t4440;
  double t3534;
  double t4226;
  double t4235;
  double t5015;
  double t5016;
  double t5035;
  double t5039;
  double t5040;
  double t5043;
  double t5046;
  double t5049;
  double t5059;
  double t5060;
  double t5061;
  double t5072;
  double t5077;
  double t5098;
  double t5100;
  double t5101;
  double t5025;
  double t5028;
  double t5031;
  double t5082;
  double t5087;
  double t5169;
  double t5182;
  double t5219;
  double t5227;
  double t6386;
  double t6422;
  double t6607;
  double t5088;
  double t5102;
  double t5155;
  double t6143;
  double t6611;
  double t6671;
  double t6732;
  double t6745;
  double t6946;
  double t4294;
  double t4309;
  double t4313;
  double t5165;
  double t7510;
  double t8691;
  double t9083;
  double t10279;
  double t10650;
  double t12458;
  double t12648;
  t123 = Cos(var1[4]);
  t422 = Cos(var1[12]);
  t179 = Cos(var1[5]);
  t1049 = Cos(var1[14]);
  t2907 = Sin(var1[13]);
  t784 = Cos(var1[13]);
  t3498 = Sin(var1[14]);
  t417 = Sin(var1[12]);
  t3535 = t1049*t2907;
  t3916 = -1.*t784*t3498;
  t4004 = t3535 + t3916;
  t442 = Sin(var1[5]);
  t3521 = Sin(var1[4]);
  t1050 = t784*t1049;
  t3507 = t2907*t3498;
  t3512 = t1050 + t3507;
  t421 = -1.*t179*t417;
  t487 = -1.*t422*t442;
  t517 = t421 + t487;
  t4323 = Cos(var1[3]);
  t4316 = Sin(var1[3]);
  t4201 = t422*t179*t4004;
  t4202 = -1.*t417*t4004*t442;
  t4220 = t4201 + t4202;
  t4254 = -1.*t1049*t2907;
  t4255 = t784*t3498;
  t4290 = t4254 + t4255;
  t4295 = t422*t179*t3512;
  t4296 = -1.*t417*t3512*t442;
  t4308 = t4295 + t4296;
  t4324 = t422*t179;
  t4325 = -1.*t417*t442;
  t4336 = t4324 + t4325;
  t4345 = t179*t417*t4004;
  t4347 = t422*t4004*t442;
  t4352 = t4345 + t4347;
  t4359 = t123*t3512;
  t4360 = -1.*t3521*t4220;
  t4361 = t4359 + t4360;
  t4372 = t179*t417*t3512;
  t4416 = t422*t3512*t442;
  t4417 = t4372 + t4416;
  t4426 = t123*t4290;
  t4428 = -1.*t3521*t4308;
  t4440 = t4426 + t4428;
  t3534 = t3512*t3521;
  t4226 = t123*t4220;
  t4235 = t3534 + t4226;
  t5015 = -1.*t422;
  t5016 = 1. + t5015;
  t5035 = -1.*t784;
  t5039 = 1. + t5035;
  t5040 = 0.28121*t5039;
  t5043 = -1.*t1049;
  t5046 = 1. + t5043;
  t5049 = 0.50321*t5046;
  t5059 = 0.19821*t1049;
  t5060 = t5049 + t5059;
  t5061 = t784*t5060;
  t5072 = -0.305*t2907*t3498;
  t5077 = t5040 + t5061 + t5072;
  t5098 = 0.15121*t5016;
  t5100 = t422*t5077;
  t5101 = t5098 + t5100;
  t5025 = -0.15121*t5016;
  t5028 = -0.15121*t422;
  t5031 = -0.15121*t417;
  t5082 = t417*t5077;
  t5087 = t5025 + t5028 + t5031 + t5082;
  t5169 = 0.28121*t2907;
  t5182 = -1.*t5060*t2907;
  t5219 = -0.305*t784*t3498;
  t5227 = t5169 + t5182 + t5219;
  t6386 = t179*t5101;
  t6422 = -1.*t5087*t442;
  t6607 = t6386 + t6422;
  t5088 = t179*t5087;
  t5102 = t5101*t442;
  t5155 = t5088 + t5102;
  t6143 = t5227*t3521;
  t6611 = t123*t6607;
  t6671 = t6143 + t6611;
  t6732 = t123*t5227;
  t6745 = -1.*t3521*t6607;
  t6946 = t6732 + t6745;
  t4294 = t4290*t3521;
  t4309 = t123*t4308;
  t4313 = t4294 + t4309;
  t5165 = -1.*t4336*t5155;
  t7510 = t4352*t5155;
  t8691 = t4336*t5155;
  t9083 = -1.*t4417*t5155;
  t10279 = -1.*t4352*t5155;
  t10650 = t4417*t5155;
  t12458 = -1.*t5227*t3512;
  t12648 = t5227*t4290;
  p_output1[0]=t4313*var2[0] + t123*t517*var2[1] + t4235*var2[2];
  p_output1[1]=(t4323*t4417 - 1.*t4316*t4440)*var2[0] + (t4323*t4336 + t3521*t4316*t517)*var2[1] + (t4323*t4352 - 1.*t4316*t4361)*var2[2];
  p_output1[2]=(t4316*t4417 + t4323*t4440)*var2[0] + (t4316*t4336 - 1.*t3521*t4323*t517)*var2[1] + (t4316*t4352 + t4323*t4361)*var2[2];
  p_output1[3]=(t4235*(t5165 - 1.*t123*t517*t6671 + t3521*t517*t6946) + t123*t517*(t4235*t6671 + t4361*t6946 + t7510))*var2[0] + (t4313*(t10279 - 1.*t4235*t6671 - 1.*t4361*t6946) + t4235*(t10650 + t4313*t6671 + t4440*t6946))*var2[1] + (t4313*(t123*t517*t6671 - 1.*t3521*t517*t6946 + t8691) + t123*t517*(-1.*t4313*t6671 - 1.*t4440*t6946 + t9083))*var2[2];
  p_output1[4]=(t4352*(t5165 - 1.*t517*t6607) + t4336*(t3512*t5227 + t4220*t6607 + t7510))*var2[0] + (t4417*(t10279 + t12458 - 1.*t4220*t6607) + t4352*(t10650 + t12648 + t4308*t6607))*var2[1] + (t4417*(t517*t6607 + t8691) + t4336*(-1.*t4290*t5227 - 1.*t4308*t6607 + t9083))*var2[2];
  p_output1[5]=t3512*(-1.*t422*t5087 + t417*t5101)*var2[0] + (t3512*(t12648 + t3512*t417*t5087 + t3512*t422*t5101) + t4290*(t12458 - 1.*t4004*t417*t5087 - 1.*t4004*t422*t5101))*var2[1] + t4290*(t422*t5087 - 1.*t417*t5101)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t3512*(t12648 + t3512*t5077) + t4290*(t12458 - 1.*t4004*t5077))*var2[1] + (-0.15121*t4004 - 0.15121*t4290)*var2[2];
  p_output1[13]=(0.28121*t3498 - 0.305*t1049*t3498 - 1.*t3498*t5060)*var2[0] + (0.28121*t1049 + 0.305*Power(t3498,2) - 1.*t1049*t5060)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
