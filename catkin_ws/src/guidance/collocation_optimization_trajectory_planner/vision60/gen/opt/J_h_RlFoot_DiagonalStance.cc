/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:31:55 GMT+02:00
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
  double t3421;
  double t302;
  double t2311;
  double t3698;
  double t3839;
  double t3407;
  double t3887;
  double t3091;
  double t3890;
  double t3891;
  double t3916;
  double t3994;
  double t3995;
  double t3997;
  double t4023;
  double t4062;
  double t4124;
  double t4147;
  double t4161;
  double t3740;
  double t3800;
  double t3115;
  double t3362;
  double t4091;
  double t4119;
  double t4424;
  double t4427;
  double t4457;
  double t4555;
  double t4561;
  double t4585;
  double t4656;
  double t4664;
  double t4666;
  double t4711;
  double t4730;
  double t4731;
  double t4845;
  double t4874;
  double t4883;
  double t4893;
  double t4894;
  double t4895;
  double t5049;
  double t5057;
  double t5061;
  double t5205;
  double t5244;
  double t5250;
  double t5253;
  double t5260;
  double t5243;
  double t5246;
  double t5248;
  double t5303;
  double t5304;
  double t5312;
  double t5331;
  double t5368;
  double t5374;
  double t5397;
  double t5415;
  double t5419;
  double t5646;
  double t5666;
  double t5723;
  double t5733;
  double t5749;
  double t5765;
  double t5807;
  double t5815;
  double t5827;
  double t6007;
  double t6012;
  double t6023;
  double t6060;
  double t6074;
  double t6077;
  double t6083;
  double t6144;
  double t6198;
  double t6210;
  double t6214;
  double t6238;
  double t6657;
  double t6677;
  double t6713;
  double t6990;
  double t7023;
  double t7070;
  double t7621;
  double t7625;
  double t7646;
  double t7672;
  double t7687;
  double t7751;
  double t7787;
  double t7794;
  double t7814;
  double t7863;
  double t7865;
  double t7873;
  double t7891;
  double t7904;
  double t7907;
  double t7843;
  double t8165;
  double t8174;
  double t8175;
  double t8193;
  double t8200;
  double t8213;
  double t8237;
  double t8238;
  double t8252;
  double t8446;
  double t8497;
  double t8507;
  double t8521;
  double t8535;
  double t8544;
  double t8588;
  double t8617;
  double t8658;
  double t5272;
  double t8999;
  double t9027;
  double t9073;
  double t9079;
  double t9161;
  double t9669;
  double t9671;
  double t9675;
  double t9762;
  double t9763;
  double t9834;
  double t10122;
  double t10123;
  double t10141;
  double t10856;
  double t10867;
  double t10946;
  t3421 = Sin(var1[4]);
  t302 = Cos(var1[4]);
  t2311 = Sin(var1[9]);
  t3698 = Cos(var1[9]);
  t3839 = Sin(var1[5]);
  t3407 = Cos(var1[5]);
  t3887 = Sin(var1[10]);
  t3091 = Cos(var1[10]);
  t3890 = t3698*t302;
  t3891 = -1.*t2311*t3421*t3839;
  t3916 = t3890 + t3891;
  t3994 = Sin(var1[11]);
  t3995 = t3407*t3887*t3421;
  t3997 = t3091*t3916;
  t4023 = t3995 + t3997;
  t4062 = Cos(var1[11]);
  t4124 = -1.*t3091*t3407*t3421;
  t4147 = t3887*t3916;
  t4161 = t4124 + t4147;
  t3740 = -1.*t3698;
  t3800 = 1. + t3740;
  t3115 = -1.*t3091;
  t3362 = 1. + t3115;
  t4091 = -1.*t4062;
  t4119 = 1. + t4091;
  t4424 = t302*t3407*t2311*t3887;
  t4427 = -1.*t3091*t302*t3839;
  t4457 = t4424 + t4427;
  t4555 = t3091*t302*t3407*t2311;
  t4561 = t302*t3887*t3839;
  t4585 = t4555 + t4561;
  t4656 = -1.*t2311*t3421;
  t4664 = t3698*t302*t3839;
  t4666 = t4656 + t4664;
  t4711 = t3698*t3421;
  t4730 = t302*t2311*t3839;
  t4731 = t4711 + t4730;
  t4845 = -1.*t302*t3407*t3887;
  t4874 = t3091*t4731;
  t4883 = t4845 + t4874;
  t4893 = -1.*t3091*t302*t3407;
  t4894 = -1.*t3887*t4731;
  t4895 = t4893 + t4894;
  t5049 = t3091*t302*t3407;
  t5057 = t3887*t4731;
  t5061 = t5049 + t5057;
  t5205 = Cos(var1[3]);
  t5244 = Sin(var1[3]);
  t5250 = -1.*t3407*t5244;
  t5253 = -1.*t5205*t3421*t3839;
  t5260 = t5250 + t5253;
  t5243 = t5205*t3407*t3421;
  t5246 = -1.*t5244*t3839;
  t5248 = t5243 + t5246;
  t5303 = -1.*t3698*t5205*t302;
  t5304 = -1.*t2311*t5260;
  t5312 = t5303 + t5304;
  t5331 = -1.*t3887*t5248;
  t5368 = t3091*t5312;
  t5374 = t5331 + t5368;
  t5397 = t3091*t5248;
  t5415 = t3887*t5312;
  t5419 = t5397 + t5415;
  t5646 = t3698*t5244*t3421;
  t5666 = t302*t2311*t5244*t3839;
  t5723 = t5646 + t5666;
  t5733 = -1.*t302*t3407*t3887*t5244;
  t5749 = t3091*t5723;
  t5765 = t5733 + t5749;
  t5807 = t3091*t302*t3407*t5244;
  t5815 = t3887*t5723;
  t5827 = t5807 + t5815;
  t6007 = -1.*t3407*t5244*t3421;
  t6012 = -1.*t5205*t3839;
  t6023 = t6007 + t6012;
  t6060 = t5205*t3407;
  t6074 = -1.*t5244*t3421*t3839;
  t6077 = t6060 + t6074;
  t6083 = -1.*t2311*t3887*t6023;
  t6144 = t3091*t6077;
  t6198 = t6083 + t6144;
  t6210 = -1.*t3091*t2311*t6023;
  t6214 = -1.*t3887*t6077;
  t6238 = t6210 + t6214;
  t6657 = t302*t2311*t5244;
  t6677 = -1.*t3698*t6077;
  t6713 = t6657 + t6677;
  t6990 = -1.*t3698*t302*t5244;
  t7023 = -1.*t2311*t6077;
  t7070 = t6990 + t7023;
  t7621 = t3407*t5244*t3421;
  t7625 = t5205*t3839;
  t7646 = t7621 + t7625;
  t7672 = -1.*t3887*t7646;
  t7687 = t3091*t7070;
  t7751 = t7672 + t7687;
  t7787 = -1.*t3091*t7646;
  t7794 = -1.*t3887*t7070;
  t7814 = t7787 + t7794;
  t7863 = t3091*t7646;
  t7865 = t3887*t7070;
  t7873 = t7863 + t7865;
  t7891 = -1.*t3994*t7751;
  t7904 = t4062*t7873;
  t7907 = t7891 + t7904;
  t7843 = t4062*t7751;
  t8165 = -1.*t3698*t5205*t3421;
  t8174 = -1.*t5205*t302*t2311*t3839;
  t8175 = t8165 + t8174;
  t8193 = t5205*t302*t3407*t3887;
  t8200 = t3091*t8175;
  t8213 = t8193 + t8200;
  t8237 = -1.*t3091*t5205*t302*t3407;
  t8238 = t3887*t8175;
  t8252 = t8237 + t8238;
  t8446 = t3407*t5244;
  t8497 = t5205*t3421*t3839;
  t8507 = t8446 + t8497;
  t8521 = -1.*t2311*t3887*t5248;
  t8535 = t3091*t8507;
  t8544 = t8521 + t8535;
  t8588 = -1.*t3091*t2311*t5248;
  t8617 = -1.*t3887*t8507;
  t8658 = t8588 + t8617;
  t5272 = -1.*t5205*t302*t2311;
  t8999 = -1.*t3698*t8507;
  t9027 = t5272 + t8999;
  t9073 = t3698*t5205*t302;
  t9079 = -1.*t2311*t8507;
  t9161 = t9073 + t9079;
  t9669 = -1.*t5205*t3407*t3421;
  t9671 = t5244*t3839;
  t9675 = t9669 + t9671;
  t9762 = -1.*t3887*t9675;
  t9763 = t3091*t9161;
  t9834 = t9762 + t9763;
  t10122 = -1.*t3091*t9675;
  t10123 = -1.*t3887*t9161;
  t10141 = t10122 + t10123;
  t10856 = t3091*t9675;
  t10867 = t3887*t9161;
  t10946 = t10856 + t10867;
  p_output1[0]=1.;
  p_output1[1]=-0.1575*t2311*t302 + 0.325*t3362*t3407*t3421 + 0.1575*t3421*t3800*t3839 + 0.2255*(t2311*t302 + t3421*t3698*t3839) + 0.325*t3887*t3916 - 0.575*t3994*t4023 - 0.575*t4119*t4161 - 0.0641*(t4023*t4062 + t3994*t4161) - 0.295*(-1.*t3994*t4023 + t4062*t4161);
  p_output1[2]=-0.2255*t302*t3407*t3698 - 0.1575*t302*t3407*t3800 + 0.325*t302*t3362*t3839 + 0.325*t2311*t302*t3407*t3887 - 0.575*t4119*t4457 - 0.575*t3994*t4585 - 0.295*(t4062*t4457 - 1.*t3994*t4585) - 0.0641*(t3994*t4457 + t4062*t4585);
  p_output1[3]=-0.1575*t3421*t3698 - 0.1575*t2311*t302*t3839 + 0.325*t3887*t4666 - 0.575*t3091*t3994*t4666 - 0.575*t3887*t4119*t4666 - 0.0641*(t3887*t3994*t4666 + t3091*t4062*t4666) - 0.295*(-1.*t3091*t3994*t4666 + t3887*t4062*t4666) + 0.2255*t4731;
  p_output1[4]=-0.325*t302*t3407*t3887 + 0.325*t3091*t4731 - 0.575*t4119*t4883 - 0.575*t3994*t4895 - 0.295*(t4062*t4883 - 1.*t3994*t4895) - 0.0641*(t3994*t4883 + t4062*t4895);
  p_output1[5]=-0.575*t4062*t4883 - 0.575*t3994*t5061 - 0.295*(-1.*t4062*t4883 - 1.*t3994*t5061) - 0.0641*(-1.*t3994*t4883 + t4062*t5061);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=0.1575*t2311*t302*t5205 - 0.325*t3362*t5248 + 0.1575*t3800*t5260 + 0.2255*(t3698*t5260 + t5272) + 0.325*t3887*t5312 - 0.575*t3994*t5374 - 0.575*t4119*t5419 - 0.0641*(t4062*t5374 + t3994*t5419) - 0.295*(-1.*t3994*t5374 + t4062*t5419);
  p_output1[9]=-0.325*t302*t3362*t3407*t5244 - 0.1575*t2311*t3421*t5244 - 0.1575*t302*t3800*t3839*t5244 + 0.2255*(t2311*t3421*t5244 - 1.*t302*t3698*t3839*t5244) + 0.325*t3887*t5723 - 0.575*t3994*t5765 - 0.575*t4119*t5827 - 0.0641*(t4062*t5765 + t3994*t5827) - 0.295*(-1.*t3994*t5765 + t4062*t5827);
  p_output1[10]=0.2255*t3698*t6023 + 0.1575*t3800*t6023 - 0.325*t2311*t3887*t6023 - 0.325*t3362*t6077 - 0.575*t4119*t6198 - 0.575*t3994*t6238 - 0.295*(t4062*t6198 - 1.*t3994*t6238) - 0.0641*(t3994*t6198 + t4062*t6238);
  p_output1[11]=0.1575*t302*t3698*t5244 + 0.1575*t2311*t6077 + 0.325*t3887*t6713 - 0.575*t3091*t3994*t6713 - 0.575*t3887*t4119*t6713 - 0.0641*(t3887*t3994*t6713 + t3091*t4062*t6713) - 0.295*(-1.*t3091*t3994*t6713 + t3887*t4062*t6713) + 0.2255*t7070;
  p_output1[12]=0.325*t3091*t7070 - 0.325*t3887*t7646 - 0.575*t4119*t7751 - 0.575*t3994*t7814 - 0.0641*(t3994*t7751 + t4062*t7814) - 0.295*(-1.*t3994*t7814 + t7843);
  p_output1[13]=-0.575*t4062*t7751 - 0.575*t3994*t7873 - 0.295*(-1.*t4062*t7751 - 1.*t3994*t7873) - 0.0641*t7907;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=0.1575*t2311*t302*t5244 + 0.1575*t3800*t6077 + 0.2255*(-1.*t2311*t302*t5244 + t3698*t6077) + 0.325*t3887*t7070 - 0.325*t3362*t7646 - 0.575*t3994*t7751 - 0.575*t4119*t7873 - 0.0641*(t7843 + t3994*t7873) - 0.295*t7907;
  p_output1[17]=0.325*t302*t3362*t3407*t5205 + 0.1575*t2311*t3421*t5205 + 0.1575*t302*t3800*t3839*t5205 + 0.2255*(-1.*t2311*t3421*t5205 + t302*t3698*t3839*t5205) + 0.325*t3887*t8175 - 0.575*t3994*t8213 - 0.575*t4119*t8252 - 0.0641*(t4062*t8213 + t3994*t8252) - 0.295*(-1.*t3994*t8213 + t4062*t8252);
  p_output1[18]=0.2255*t3698*t5248 + 0.1575*t3800*t5248 - 0.325*t2311*t3887*t5248 - 0.325*t3362*t8507 - 0.575*t4119*t8544 - 0.575*t3994*t8658 - 0.295*(t4062*t8544 - 1.*t3994*t8658) - 0.0641*(t3994*t8544 + t4062*t8658);
  p_output1[19]=-0.1575*t302*t3698*t5205 + 0.1575*t2311*t8507 + 0.325*t3887*t9027 - 0.575*t3091*t3994*t9027 - 0.575*t3887*t4119*t9027 - 0.0641*(t3887*t3994*t9027 + t3091*t4062*t9027) - 0.295*(-1.*t3091*t3994*t9027 + t3887*t4062*t9027) + 0.2255*t9161;
  p_output1[20]=-0.575*t10141*t3994 + 0.325*t3091*t9161 - 0.325*t3887*t9675 - 0.575*t4119*t9834 - 0.0641*(t10141*t4062 + t3994*t9834) - 0.295*(-1.*t10141*t3994 + t4062*t9834);
  p_output1[21]=-0.575*t10946*t3994 - 0.575*t4062*t9834 - 0.0641*(t10946*t4062 - 1.*t3994*t9834) - 0.295*(-1.*t10946*t3994 - 1.*t4062*t9834);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
