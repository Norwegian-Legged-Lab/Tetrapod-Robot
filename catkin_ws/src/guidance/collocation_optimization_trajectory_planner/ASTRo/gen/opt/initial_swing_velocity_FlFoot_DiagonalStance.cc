/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:53:29 GMT+02:00
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
  double t69;
  double t105;
  double t3113;
  double t3656;
  double t3872;
  double t3962;
  double t6612;
  double t80;
  double t7040;
  double t7071;
  double t7076;
  double t7375;
  double t7586;
  double t8175;
  double t8178;
  double t6886;
  double t7055;
  double t7069;
  double t7545;
  double t8110;
  double t8113;
  double t8120;
  double t8143;
  double t8144;
  double t8152;
  double t8169;
  double t8209;
  double t8238;
  double t8298;
  double t8302;
  double t8441;
  double t8852;
  double t8861;
  double t8882;
  double t8840;
  double t8845;
  double t8897;
  double t9012;
  double t9024;
  double t9030;
  double t9038;
  double t9102;
  double t9116;
  double t9118;
  double t3968;
  double t6380;
  double t7011;
  double t9290;
  double t9293;
  double t9299;
  double t9308;
  double t9309;
  double t9310;
  double t9314;
  double t9319;
  double t9321;
  double t10237;
  double t10233;
  double t10242;
  double t10335;
  double t10370;
  double t10235;
  double t10239;
  double t10240;
  double t10444;
  double t10453;
  double t10461;
  double t8688;
  double t8698;
  double t8813;
  double t8819;
  double t10604;
  double t10615;
  double t10620;
  double t10707;
  double t10718;
  double t10465;
  double t10875;
  double t10876;
  double t10878;
  double t10857;
  double t10879;
  double t10880;
  double t10886;
  double t10887;
  double t10888;
  double t10921;
  double t10922;
  double t10985;
  double t11031;
  double t11038;
  double t11039;
  double t11042;
  double t11046;
  double t11050;
  double t11052;
  double t11122;
  double t11125;
  double t11199;
  double t11211;
  double t11212;
  double t11214;
  double t11215;
  double t11216;
  double t11241;
  double t11242;
  double t11243;
  double t11263;
  double t11268;
  double t11304;
  double t11337;
  double t11338;
  double t11343;
  double t11439;
  double t11465;
  double t11489;
  double t11497;
  double t11500;
  double t11505;
  double t11582;
  double t11603;
  double t11604;
  double t11608;
  double t11609;
  double t11530;
  double t11636;
  double t11644;
  double t11651;
  double t11634;
  double t11671;
  double t11683;
  double t11699;
  double t11723;
  double t11730;
  double t11770;
  double t11771;
  double t11808;
  double t11810;
  double t11811;
  double t11814;
  double t11815;
  double t11818;
  double t11821;
  double t11823;
  double t11824;
  t69 = Cos(var1[4]);
  t105 = Cos(var1[6]);
  t3113 = -1.*t105;
  t3656 = 1. + t3113;
  t3872 = 0.15121*t3656;
  t3962 = Sin(var1[6]);
  t6612 = Sin(var1[5]);
  t80 = Cos(var1[5]);
  t7040 = Cos(var1[7]);
  t7071 = -1.*t69*t105*t6612;
  t7076 = -1.*t69*t80*t3962;
  t7375 = t7071 + t7076;
  t7586 = Cos(var1[8]);
  t8175 = Sin(var1[7]);
  t8178 = Sin(var1[8]);
  t6886 = 0.15121*t3962;
  t7055 = -1.*t7040;
  t7069 = 1. + t7055;
  t7545 = 0.28121*t7069*t7375;
  t8110 = -1.*t7586;
  t8113 = 1. + t8110;
  t8120 = 0.50321*t7040*t8113*t7375;
  t8143 = -1.*t69*t80*t105;
  t8144 = t69*t6612*t3962;
  t8152 = t8143 + t8144;
  t8169 = 0.15121*t8152;
  t8209 = -0.50321*t7375*t8175*t8178;
  t8238 = t7040*t7586*t7375;
  t8298 = t7375*t8175*t8178;
  t8302 = t8238 + t8298;
  t8441 = 0.19821*t8302;
  t8852 = t69*t80*t105;
  t8861 = -1.*t69*t6612*t3962;
  t8882 = t8852 + t8861;
  t8840 = Sin(var1[4]);
  t8845 = t7040*t8840;
  t8897 = t8882*t8175;
  t9012 = t8845 + t8897;
  t9024 = t7040*t8882;
  t9030 = -1.*t8840*t8175;
  t9038 = t9024 + t9030;
  t9102 = -1.*t7040*t8840;
  t9116 = -1.*t8882*t8175;
  t9118 = t9102 + t9116;
  t3968 = -0.15121*t3962;
  t6380 = t3872 + t3968;
  t7011 = t3872 + t6886;
  t9290 = -1.*t80*t105*t8840;
  t9293 = t8840*t6612*t3962;
  t9299 = t9290 + t9293;
  t9308 = t7040*t9299;
  t9309 = -1.*t69*t8175;
  t9310 = t9308 + t9309;
  t9314 = t69*t7040;
  t9319 = t9299*t8175;
  t9321 = t9314 + t9319;
  t10237 = Cos(var1[3]);
  t10233 = Sin(var1[3]);
  t10242 = t10237*t80;
  t10335 = -1.*t10233*t8840*t6612;
  t10370 = t10242 + t10335;
  t10235 = -1.*t80*t10233*t8840;
  t10239 = -1.*t10237*t6612;
  t10240 = t10235 + t10239;
  t10444 = t105*t10370;
  t10453 = t10240*t3962;
  t10461 = t10444 + t10453;
  t8688 = -0.15121*t105;
  t8698 = t8688 + t6886;
  t8813 = 0.15121*t105;
  t8819 = t8813 + t6886;
  t10604 = t80*t10233*t8840;
  t10615 = t10237*t6612;
  t10620 = t10604 + t10615;
  t10707 = -1.*t10620*t3962;
  t10718 = t10444 + t10707;
  t10465 = -1.*t10370*t3962;
  t10875 = t105*t10620;
  t10876 = t10370*t3962;
  t10878 = t10875 + t10876;
  t10857 = -1.*t69*t7040*t10233;
  t10879 = t10878*t8175;
  t10880 = t10857 + t10879;
  t10886 = t7040*t10878;
  t10887 = t69*t10233*t8175;
  t10888 = t10886 + t10887;
  t10921 = t69*t7040*t10233;
  t10922 = -1.*t10878*t8175;
  t10985 = t10921 + t10922;
  t11031 = t69*t80*t105*t10233;
  t11038 = -1.*t69*t10233*t6612*t3962;
  t11039 = t11031 + t11038;
  t11042 = t7040*t11039;
  t11046 = -1.*t10233*t8840*t8175;
  t11050 = t11042 + t11046;
  t11052 = t7040*t10233*t8840;
  t11122 = t11039*t8175;
  t11125 = t11052 + t11122;
  t11199 = -1.*t80*t10233;
  t11211 = -1.*t10237*t8840*t6612;
  t11212 = t11199 + t11211;
  t11214 = t10237*t80*t8840;
  t11215 = -1.*t10233*t6612;
  t11216 = t11214 + t11215;
  t11241 = t105*t11216;
  t11242 = t11212*t3962;
  t11243 = t11241 + t11242;
  t11263 = t7040*t11243;
  t11268 = t10237*t69*t8175;
  t11304 = t11263 + t11268;
  t11337 = -1.*t10237*t69*t7040;
  t11338 = t11243*t8175;
  t11343 = t11337 + t11338;
  t11439 = t80*t10233;
  t11465 = t10237*t8840*t6612;
  t11489 = t11439 + t11465;
  t11497 = t105*t11489;
  t11500 = t11216*t3962;
  t11505 = t11497 + t11500;
  t11582 = -1.*t10237*t80*t8840;
  t11603 = t10233*t6612;
  t11604 = t11582 + t11603;
  t11608 = -1.*t11604*t3962;
  t11609 = t11497 + t11608;
  t11530 = -1.*t11489*t3962;
  t11636 = t105*t11604;
  t11644 = t11489*t3962;
  t11651 = t11636 + t11644;
  t11634 = t10237*t69*t7040;
  t11671 = t11651*t8175;
  t11683 = t11634 + t11671;
  t11699 = t7040*t11651;
  t11723 = -1.*t10237*t69*t8175;
  t11730 = t11699 + t11723;
  t11770 = -1.*t11651*t8175;
  t11771 = t11337 + t11770;
  t11808 = -1.*t10237*t69*t80*t105;
  t11810 = t10237*t69*t6612*t3962;
  t11811 = t11808 + t11810;
  t11814 = t7040*t11811;
  t11815 = t10237*t8840*t8175;
  t11818 = t11814 + t11815;
  t11821 = -1.*t10237*t7040*t8840;
  t11823 = t11811*t8175;
  t11824 = t11821 + t11823;
  p_output1[0]=var2[0] + (0.28121*t69*t8175 + t6380*t6612*t8840 - 1.*t7011*t80*t8840 + 0.15121*(t105*t6612*t8840 + t3962*t80*t8840) + 0.28121*t7069*t9299 + 0.50321*t8113*t9310 - 0.50321*t8178*t9321 + 0.19821*(t7586*t9310 + t8178*t9321))*var2[4] + (-1.*t6612*t69*t7011 + t7545 - 1.*t6380*t69*t80 + t8120 + t8169 + t8209 + t8441)*var2[5] + (t7545 + t8120 + t8169 + t8209 + t8441 - 1.*t6612*t69*t8698 + t69*t80*t8819)*var2[6] + (0.28121*t7040*t8840 + 0.28121*t8175*t8882 - 0.50321*t8178*t9038 + 0.50321*t8113*t9118 + 0.19821*(t8178*t9038 + t7586*t9118))*var2[7] + (-0.50321*t7586*t9012 + 0.50321*t8178*t9038 + 0.19821*(t7586*t9012 - 1.*t8178*t9038))*var2[8];
  p_output1[1]=var2[1] + (0.15121*(t105*t11212 - 1.*t11216*t3962) + t11212*t6380 + t11216*t7011 + 0.28121*t11243*t7069 + 0.50321*t11304*t8113 - 0.28121*t10237*t69*t8175 - 0.50321*t11343*t8178 + 0.19821*(t11304*t7586 + t11343*t8178))*var2[3] + (-1.*t10233*t6380*t6612*t69 + 0.28121*t11039*t7069 + t10233*t69*t7011*t80 + 0.15121*(-1.*t10233*t105*t6612*t69 - 1.*t10233*t3962*t69*t80) + 0.50321*t11050*t8113 - 0.50321*t11125*t8178 + 0.19821*(t11050*t7586 + t11125*t8178) + 0.28121*t10233*t8175*t8840)*var2[4] + (0.15121*(t10465 + t10240*t105) + t10240*t6380 + t10370*t7011 + 0.28121*t10461*t7069 + 0.50321*t10461*t7040*t8113 - 0.50321*t10461*t8175*t8178 + 0.19821*(t10461*t7040*t7586 + t10461*t8175*t8178))*var2[5] + (0.15121*(t10465 - 1.*t105*t10620) + 0.28121*t10718*t7069 + 0.50321*t10718*t7040*t8113 - 0.50321*t10718*t8175*t8178 + 0.19821*(t10718*t7040*t7586 + t10718*t8175*t8178) + t10370*t8698 + t10620*t8819)*var2[6] + (-0.28121*t10233*t69*t7040 + 0.50321*t10985*t8113 + 0.28121*t10878*t8175 - 0.50321*t10888*t8178 + 0.19821*(t10985*t7586 + t10888*t8178))*var2[7] + (-0.50321*t10880*t7586 + 0.50321*t10888*t8178 + 0.19821*(t10880*t7586 - 1.*t10888*t8178))*var2[8];
  p_output1[2]=var2[2] + (0.15121*t10718 + t10370*t6380 + t10620*t7011 + 0.28121*t10878*t7069 + 0.50321*t10888*t8113 - 0.28121*t10233*t69*t8175 - 0.50321*t10880*t8178 + 0.19821*(t10888*t7586 + t10880*t8178))*var2[3] + (t10237*t6380*t6612*t69 + 0.28121*t11811*t7069 - 1.*t10237*t69*t7011*t80 + 0.15121*(t10237*t105*t6612*t69 + t10237*t3962*t69*t80) + 0.50321*t11818*t8113 - 0.50321*t11824*t8178 + 0.19821*(t11818*t7586 + t11824*t8178) - 0.28121*t10237*t8175*t8840)*var2[4] + (0.15121*(t11241 + t11530) + t11216*t6380 + t11489*t7011 + 0.28121*t11505*t7069 + 0.50321*t11505*t7040*t8113 - 0.50321*t11505*t8175*t8178 + 0.19821*(t11505*t7040*t7586 + t11505*t8175*t8178))*var2[5] + (0.15121*(t11530 - 1.*t105*t11604) + 0.28121*t11609*t7069 + 0.50321*t11609*t7040*t8113 - 0.50321*t11609*t8175*t8178 + 0.19821*(t11609*t7040*t7586 + t11609*t8175*t8178) + t11489*t8698 + t11604*t8819)*var2[6] + (0.28121*t10237*t69*t7040 + 0.50321*t11771*t8113 + 0.28121*t11651*t8175 - 0.50321*t11730*t8178 + 0.19821*(t11771*t7586 + t11730*t8178))*var2[7] + (-0.50321*t11683*t7586 + 0.50321*t11730*t8178 + 0.19821*(t11683*t7586 - 1.*t11730*t8178))*var2[8];
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

#include "initial_swing_velocity_FlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void initial_swing_velocity_FlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
