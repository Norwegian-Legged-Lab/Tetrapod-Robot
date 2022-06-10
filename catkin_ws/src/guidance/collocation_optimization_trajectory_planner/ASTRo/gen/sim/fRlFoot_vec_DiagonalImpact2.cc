/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:53 GMT+02:00
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
  double t1317;
  double t6029;
  double t3121;
  double t8430;
  double t8969;
  double t7368;
  double t10249;
  double t3490;
  double t12420;
  double t12812;
  double t12838;
  double t6092;
  double t11767;
  double t15811;
  double t15828;
  double t16139;
  double t5464;
  double t6347;
  double t7036;
  double t27098;
  double t26719;
  double t8925;
  double t10425;
  double t10591;
  double t12839;
  double t13348;
  double t14080;
  double t16220;
  double t16221;
  double t16271;
  double t27099;
  double t27104;
  double t27122;
  double t27136;
  double t27137;
  double t27140;
  double t27153;
  double t27154;
  double t27156;
  double t27161;
  double t27162;
  double t27163;
  double t27166;
  double t27167;
  double t27168;
  double t12237;
  double t15181;
  double t15204;
  double t27422;
  double t27425;
  double t27431;
  double t27432;
  double t27434;
  double t27435;
  double t27436;
  double t27438;
  double t27440;
  double t27441;
  double t27442;
  double t27443;
  double t27444;
  double t27448;
  double t27450;
  double t27451;
  double t27426;
  double t27428;
  double t27430;
  double t27445;
  double t27446;
  double t27455;
  double t27456;
  double t27458;
  double t27459;
  double t27466;
  double t27469;
  double t27473;
  double t27447;
  double t27452;
  double t27453;
  double t27460;
  double t27476;
  double t27479;
  double t27495;
  double t27497;
  double t27512;
  double t15778;
  double t16281;
  double t16286;
  double t27454;
  double t27528;
  double t27576;
  double t27595;
  double t27623;
  double t27647;
  double t27756;
  double t27807;
  t1317 = Cos(var1[4]);
  t6029 = Cos(var1[9]);
  t3121 = Cos(var1[5]);
  t8430 = Cos(var1[11]);
  t8969 = Sin(var1[10]);
  t7368 = Cos(var1[10]);
  t10249 = Sin(var1[11]);
  t3490 = Sin(var1[9]);
  t12420 = -1.*t8430*t8969;
  t12812 = t7368*t10249;
  t12838 = t12420 + t12812;
  t6092 = Sin(var1[5]);
  t11767 = Sin(var1[4]);
  t15811 = -1.*t7368*t8430;
  t15828 = -1.*t8969*t10249;
  t16139 = t15811 + t15828;
  t5464 = t3121*t3490;
  t6347 = t6029*t6092;
  t7036 = t5464 + t6347;
  t27098 = Cos(var1[3]);
  t26719 = Sin(var1[3]);
  t8925 = t7368*t8430;
  t10425 = t8969*t10249;
  t10591 = t8925 + t10425;
  t12839 = t6029*t3121*t12838;
  t13348 = -1.*t3490*t12838*t6092;
  t14080 = t12839 + t13348;
  t16220 = t6029*t3121*t16139;
  t16221 = -1.*t3490*t16139*t6092;
  t16271 = t16220 + t16221;
  t27099 = -1.*t6029*t3121;
  t27104 = t3490*t6092;
  t27122 = t27099 + t27104;
  t27136 = t3121*t3490*t12838;
  t27137 = t6029*t12838*t6092;
  t27140 = t27136 + t27137;
  t27153 = t1317*t10591;
  t27154 = -1.*t11767*t14080;
  t27156 = t27153 + t27154;
  t27161 = t3121*t3490*t16139;
  t27162 = t6029*t16139*t6092;
  t27163 = t27161 + t27162;
  t27166 = t1317*t12838;
  t27167 = -1.*t11767*t16271;
  t27168 = t27166 + t27167;
  t12237 = t10591*t11767;
  t15181 = t1317*t14080;
  t15204 = t12237 + t15181;
  t27422 = -1.*t6029;
  t27425 = 1. + t27422;
  t27431 = -1.*t7368;
  t27432 = 1. + t27431;
  t27434 = -0.28121*t27432;
  t27435 = -1.*t8430;
  t27436 = 1. + t27435;
  t27438 = -0.50321*t27436;
  t27440 = -0.19821*t8430;
  t27441 = t27438 + t27440;
  t27442 = t7368*t27441;
  t27443 = 0.305*t8969*t10249;
  t27444 = t27434 + t27442 + t27443;
  t27448 = -0.15121*t27425;
  t27450 = t6029*t27444;
  t27451 = t27448 + t27450;
  t27426 = 0.15121*t27425;
  t27428 = 0.15121*t6029;
  t27430 = 0.15121*t3490;
  t27445 = t3490*t27444;
  t27446 = t27426 + t27428 + t27430 + t27445;
  t27455 = 0.28121*t8969;
  t27456 = t27441*t8969;
  t27458 = -0.305*t7368*t10249;
  t27459 = t27455 + t27456 + t27458;
  t27466 = t3121*t27451;
  t27469 = -1.*t27446*t6092;
  t27473 = t27466 + t27469;
  t27447 = t3121*t27446;
  t27452 = t27451*t6092;
  t27453 = t27447 + t27452;
  t27460 = t27459*t11767;
  t27476 = t1317*t27473;
  t27479 = t27460 + t27476;
  t27495 = t1317*t27459;
  t27497 = -1.*t11767*t27473;
  t27512 = t27495 + t27497;
  t15778 = t12838*t11767;
  t16281 = t1317*t16271;
  t16286 = t15778 + t16281;
  t27454 = -1.*t27122*t27453;
  t27528 = t27140*t27453;
  t27576 = t27122*t27453;
  t27595 = -1.*t27163*t27453;
  t27623 = -1.*t27140*t27453;
  t27647 = t27163*t27453;
  t27756 = -1.*t27459*t10591;
  t27807 = t27459*t12838;
  p_output1[0]=t16286*var2[0] + t1317*t7036*var2[1] + t15204*var2[2];
  p_output1[1]=(t27098*t27163 - 1.*t26719*t27168)*var2[0] + (t27098*t27122 + t11767*t26719*t7036)*var2[1] + (t27098*t27140 - 1.*t26719*t27156)*var2[2];
  p_output1[2]=(t26719*t27163 + t27098*t27168)*var2[0] + (t26719*t27122 - 1.*t11767*t27098*t7036)*var2[1] + (t26719*t27140 + t27098*t27156)*var2[2];
  p_output1[3]=(t1317*(t15204*t27479 + t27156*t27512 + t27528)*t7036 + t15204*(t27454 - 1.*t1317*t27479*t7036 + t11767*t27512*t7036))*var2[0] + (t16286*(-1.*t15204*t27479 - 1.*t27156*t27512 + t27623) + t15204*(t16286*t27479 + t27168*t27512 + t27647))*var2[1] + (t1317*(-1.*t16286*t27479 - 1.*t27168*t27512 + t27595)*t7036 + t16286*(t27576 + t1317*t27479*t7036 - 1.*t11767*t27512*t7036))*var2[2];
  p_output1[4]=(t27122*(t10591*t27459 + t14080*t27473 + t27528) + t27140*(t27454 - 1.*t27473*t7036))*var2[0] + (t27163*(-1.*t14080*t27473 + t27623 + t27756) + t27140*(t16271*t27473 + t27647 + t27807))*var2[1] + (t27122*(-1.*t12838*t27459 - 1.*t16271*t27473 + t27595) + t27163*(t27576 + t27473*t7036))*var2[2];
  p_output1[5]=t10591*(-1.*t27451*t3490 + t27446*t6029)*var2[0] + (t12838*(t27756 - 1.*t12838*t27446*t3490 - 1.*t12838*t27451*t6029) + t10591*(t27807 + t16139*t27446*t3490 + t16139*t27451*t6029))*var2[1] + t12838*(t27451*t3490 - 1.*t27446*t6029)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t10591 + 0.15121*t16139)*var2[0] + (-0.15121 + t12838*(-1.*t12838*t27444 + t27756) + t10591*(t16139*t27444 + t27807))*var2[1];
  p_output1[10]=(0.28121*t10249 + t10249*t27441 - 0.305*t10249*t8430)*var2[0] + (0.305*Power(t10249,2) + 0.28121*t8430 + t27441*t8430)*var2[2];
  p_output1[11]=-0.305*var2[2];
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
