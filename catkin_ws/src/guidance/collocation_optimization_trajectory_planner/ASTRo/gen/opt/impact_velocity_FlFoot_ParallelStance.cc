/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:55:05 GMT+02:00
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
  double t15237;
  double t16133;
  double t16919;
  double t16932;
  double t16959;
  double t16960;
  double t17013;
  double t15980;
  double t17068;
  double t17075;
  double t17077;
  double t17081;
  double t17083;
  double t17134;
  double t17136;
  double t17051;
  double t17070;
  double t17072;
  double t17082;
  double t17088;
  double t17089;
  double t17090;
  double t17105;
  double t17120;
  double t17129;
  double t17132;
  double t17150;
  double t17164;
  double t17183;
  double t17195;
  double t17209;
  double t17254;
  double t17255;
  double t17256;
  double t17243;
  double t17244;
  double t17267;
  double t17269;
  double t17272;
  double t17273;
  double t17274;
  double t17336;
  double t17338;
  double t17343;
  double t16962;
  double t16964;
  double t17065;
  double t17395;
  double t17396;
  double t17403;
  double t17407;
  double t17408;
  double t17409;
  double t17414;
  double t17415;
  double t17420;
  double t17474;
  double t17452;
  double t17491;
  double t17492;
  double t17493;
  double t17473;
  double t17481;
  double t17485;
  double t17495;
  double t17496;
  double t17497;
  double t17230;
  double t17232;
  double t17236;
  double t17237;
  double t17532;
  double t17537;
  double t17538;
  double t17542;
  double t17549;
  double t17501;
  double t17627;
  double t17628;
  double t17633;
  double t17625;
  double t17635;
  double t17640;
  double t17644;
  double t17645;
  double t17655;
  double t17715;
  double t17733;
  double t17748;
  double t17793;
  double t17794;
  double t17795;
  double t17799;
  double t17801;
  double t17802;
  double t17809;
  double t17812;
  double t17813;
  double t17831;
  double t17842;
  double t17846;
  double t17865;
  double t17866;
  double t17867;
  double t17884;
  double t17886;
  double t17895;
  double t17936;
  double t17945;
  double t17954;
  double t17985;
  double t18001;
  double t18017;
  double t19277;
  double t19482;
  double t19491;
  double t19513;
  double t19539;
  double t19559;
  double t19773;
  double t19777;
  double t19784;
  double t19793;
  double t19798;
  double t19615;
  double t19907;
  double t19920;
  double t19934;
  double t19896;
  double t19936;
  double t19942;
  double t19965;
  double t19990;
  double t19996;
  double t20102;
  double t20108;
  double t20208;
  double t20210;
  double t20226;
  double t20284;
  double t20289;
  double t20299;
  double t20333;
  double t20340;
  double t20352;
  t15237 = Cos(var1[4]);
  t16133 = Cos(var1[6]);
  t16919 = -1.*t16133;
  t16932 = 1. + t16919;
  t16959 = 0.15121*t16932;
  t16960 = Sin(var1[6]);
  t17013 = Sin(var1[5]);
  t15980 = Cos(var1[5]);
  t17068 = Cos(var1[7]);
  t17075 = -1.*t15237*t16133*t17013;
  t17077 = -1.*t15237*t15980*t16960;
  t17081 = t17075 + t17077;
  t17083 = Cos(var1[8]);
  t17134 = Sin(var1[7]);
  t17136 = Sin(var1[8]);
  t17051 = 0.15121*t16960;
  t17070 = -1.*t17068;
  t17072 = 1. + t17070;
  t17082 = 0.28121*t17072*t17081;
  t17088 = -1.*t17083;
  t17089 = 1. + t17088;
  t17090 = 0.50321*t17068*t17089*t17081;
  t17105 = -1.*t15237*t15980*t16133;
  t17120 = t15237*t17013*t16960;
  t17129 = t17105 + t17120;
  t17132 = 0.15121*t17129;
  t17150 = -0.50321*t17081*t17134*t17136;
  t17164 = t17068*t17083*t17081;
  t17183 = t17081*t17134*t17136;
  t17195 = t17164 + t17183;
  t17209 = 0.19821*t17195;
  t17254 = t15237*t15980*t16133;
  t17255 = -1.*t15237*t17013*t16960;
  t17256 = t17254 + t17255;
  t17243 = Sin(var1[4]);
  t17244 = t17068*t17243;
  t17267 = t17256*t17134;
  t17269 = t17244 + t17267;
  t17272 = t17068*t17256;
  t17273 = -1.*t17243*t17134;
  t17274 = t17272 + t17273;
  t17336 = -1.*t17068*t17243;
  t17338 = -1.*t17256*t17134;
  t17343 = t17336 + t17338;
  t16962 = -0.15121*t16960;
  t16964 = t16959 + t16962;
  t17065 = t16959 + t17051;
  t17395 = -1.*t15980*t16133*t17243;
  t17396 = t17243*t17013*t16960;
  t17403 = t17395 + t17396;
  t17407 = t17068*t17403;
  t17408 = -1.*t15237*t17134;
  t17409 = t17407 + t17408;
  t17414 = t15237*t17068;
  t17415 = t17403*t17134;
  t17420 = t17414 + t17415;
  t17474 = Cos(var1[3]);
  t17452 = Sin(var1[3]);
  t17491 = t17474*t15980;
  t17492 = -1.*t17452*t17243*t17013;
  t17493 = t17491 + t17492;
  t17473 = -1.*t15980*t17452*t17243;
  t17481 = -1.*t17474*t17013;
  t17485 = t17473 + t17481;
  t17495 = t16133*t17493;
  t17496 = t17485*t16960;
  t17497 = t17495 + t17496;
  t17230 = -0.15121*t16133;
  t17232 = t17230 + t17051;
  t17236 = 0.15121*t16133;
  t17237 = t17236 + t17051;
  t17532 = t15980*t17452*t17243;
  t17537 = t17474*t17013;
  t17538 = t17532 + t17537;
  t17542 = -1.*t17538*t16960;
  t17549 = t17495 + t17542;
  t17501 = -1.*t17493*t16960;
  t17627 = t16133*t17538;
  t17628 = t17493*t16960;
  t17633 = t17627 + t17628;
  t17625 = -1.*t15237*t17068*t17452;
  t17635 = t17633*t17134;
  t17640 = t17625 + t17635;
  t17644 = t17068*t17633;
  t17645 = t15237*t17452*t17134;
  t17655 = t17644 + t17645;
  t17715 = t15237*t17068*t17452;
  t17733 = -1.*t17633*t17134;
  t17748 = t17715 + t17733;
  t17793 = t15237*t15980*t16133*t17452;
  t17794 = -1.*t15237*t17452*t17013*t16960;
  t17795 = t17793 + t17794;
  t17799 = t17068*t17795;
  t17801 = -1.*t17452*t17243*t17134;
  t17802 = t17799 + t17801;
  t17809 = t17068*t17452*t17243;
  t17812 = t17795*t17134;
  t17813 = t17809 + t17812;
  t17831 = -1.*t15980*t17452;
  t17842 = -1.*t17474*t17243*t17013;
  t17846 = t17831 + t17842;
  t17865 = t17474*t15980*t17243;
  t17866 = -1.*t17452*t17013;
  t17867 = t17865 + t17866;
  t17884 = t16133*t17867;
  t17886 = t17846*t16960;
  t17895 = t17884 + t17886;
  t17936 = t17068*t17895;
  t17945 = t17474*t15237*t17134;
  t17954 = t17936 + t17945;
  t17985 = -1.*t17474*t15237*t17068;
  t18001 = t17895*t17134;
  t18017 = t17985 + t18001;
  t19277 = t15980*t17452;
  t19482 = t17474*t17243*t17013;
  t19491 = t19277 + t19482;
  t19513 = t16133*t19491;
  t19539 = t17867*t16960;
  t19559 = t19513 + t19539;
  t19773 = -1.*t17474*t15980*t17243;
  t19777 = t17452*t17013;
  t19784 = t19773 + t19777;
  t19793 = -1.*t19784*t16960;
  t19798 = t19513 + t19793;
  t19615 = -1.*t19491*t16960;
  t19907 = t16133*t19784;
  t19920 = t19491*t16960;
  t19934 = t19907 + t19920;
  t19896 = t17474*t15237*t17068;
  t19936 = t19934*t17134;
  t19942 = t19896 + t19936;
  t19965 = t17068*t19934;
  t19990 = -1.*t17474*t15237*t17134;
  t19996 = t19965 + t19990;
  t20102 = -1.*t19934*t17134;
  t20108 = t17985 + t20102;
  t20208 = -1.*t17474*t15237*t15980*t16133;
  t20210 = t17474*t15237*t17013*t16960;
  t20226 = t20208 + t20210;
  t20284 = t17068*t20226;
  t20289 = t17474*t17243*t17134;
  t20299 = t20284 + t20289;
  t20333 = -1.*t17474*t17068*t17243;
  t20340 = t20226*t17134;
  t20352 = t20333 + t20340;
  p_output1[0]=var2[0] + (0.28121*t15237*t17134 + t16964*t17013*t17243 - 1.*t15980*t17065*t17243 + 0.15121*(t15980*t16960*t17243 + t16133*t17013*t17243) + 0.28121*t17072*t17403 + 0.50321*t17089*t17409 - 0.50321*t17136*t17420 + 0.19821*(t17083*t17409 + t17136*t17420))*var2[4] + (-1.*t15237*t15980*t16964 - 1.*t15237*t17013*t17065 + t17082 + t17090 + t17132 + t17150 + t17209)*var2[5] + (t17082 + t17090 + t17132 + t17150 + t17209 - 1.*t15237*t17013*t17232 + t15237*t15980*t17237)*var2[6] + (0.28121*t17068*t17243 + 0.28121*t17134*t17256 - 0.50321*t17136*t17274 + 0.50321*t17089*t17343 + 0.19821*(t17136*t17274 + t17083*t17343))*var2[7] + (-0.50321*t17083*t17269 + 0.50321*t17136*t17274 + 0.19821*(t17083*t17269 - 1.*t17136*t17274))*var2[8];
  p_output1[1]=var2[1] + (-0.28121*t15237*t17134*t17474 + t16964*t17846 + t17065*t17867 + 0.15121*(t16133*t17846 - 1.*t16960*t17867) + 0.28121*t17072*t17895 + 0.50321*t17089*t17954 - 0.50321*t17136*t18017 + 0.19821*(t17083*t17954 + t17136*t18017))*var2[3] + (-1.*t15237*t16964*t17013*t17452 + t15237*t15980*t17065*t17452 + 0.28121*t17134*t17243*t17452 + 0.15121*(-1.*t15237*t15980*t16960*t17452 - 1.*t15237*t16133*t17013*t17452) + 0.28121*t17072*t17795 + 0.50321*t17089*t17802 - 0.50321*t17136*t17813 + 0.19821*(t17083*t17802 + t17136*t17813))*var2[4] + (t16964*t17485 + t17065*t17493 + 0.28121*t17072*t17497 + 0.50321*t17068*t17089*t17497 - 0.50321*t17134*t17136*t17497 + 0.19821*(t17068*t17083*t17497 + t17134*t17136*t17497) + 0.15121*(t16133*t17485 + t17501))*var2[5] + (t17232*t17493 + t17237*t17538 + 0.15121*(t17501 - 1.*t16133*t17538) + 0.28121*t17072*t17549 + 0.50321*t17068*t17089*t17549 - 0.50321*t17134*t17136*t17549 + 0.19821*(t17068*t17083*t17549 + t17134*t17136*t17549))*var2[6] + (-0.28121*t15237*t17068*t17452 + 0.28121*t17134*t17633 - 0.50321*t17136*t17655 + 0.50321*t17089*t17748 + 0.19821*(t17136*t17655 + t17083*t17748))*var2[7] + (-0.50321*t17083*t17640 + 0.50321*t17136*t17655 + 0.19821*(t17083*t17640 - 1.*t17136*t17655))*var2[8];
  p_output1[2]=var2[2] + (-0.28121*t15237*t17134*t17452 + t16964*t17493 + t17065*t17538 + 0.15121*t17549 + 0.28121*t17072*t17633 - 0.50321*t17136*t17640 + 0.50321*t17089*t17655 + 0.19821*(t17136*t17640 + t17083*t17655))*var2[3] + (t15237*t16964*t17013*t17474 - 1.*t15237*t15980*t17065*t17474 - 0.28121*t17134*t17243*t17474 + 0.15121*(t15237*t15980*t16960*t17474 + t15237*t16133*t17013*t17474) + 0.28121*t17072*t20226 + 0.50321*t17089*t20299 - 0.50321*t17136*t20352 + 0.19821*(t17083*t20299 + t17136*t20352))*var2[4] + (t16964*t17867 + t17065*t19491 + 0.28121*t17072*t19559 + 0.50321*t17068*t17089*t19559 - 0.50321*t17134*t17136*t19559 + 0.19821*(t17068*t17083*t19559 + t17134*t17136*t19559) + 0.15121*(t17884 + t19615))*var2[5] + (t17232*t19491 + t17237*t19784 + 0.15121*(t19615 - 1.*t16133*t19784) + 0.28121*t17072*t19798 + 0.50321*t17068*t17089*t19798 - 0.50321*t17134*t17136*t19798 + 0.19821*(t17068*t17083*t19798 + t17134*t17136*t19798))*var2[6] + (0.28121*t15237*t17068*t17474 + 0.28121*t17134*t19934 - 0.50321*t17136*t19996 + 0.50321*t17089*t20108 + 0.19821*(t17136*t19996 + t17083*t20108))*var2[7] + (-0.50321*t17083*t19942 + 0.50321*t17136*t19996 + 0.19821*(t17083*t19942 - 1.*t17136*t19996))*var2[8];
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

#include "impact_velocity_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void impact_velocity_FlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
