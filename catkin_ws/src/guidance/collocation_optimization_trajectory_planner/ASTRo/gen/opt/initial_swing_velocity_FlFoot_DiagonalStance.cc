/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:36:15 GMT+02:00
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
  double t615;
  double t947;
  double t990;
  double t1294;
  double t1347;
  double t1441;
  double t1832;
  double t767;
  double t1891;
  double t2008;
  double t2012;
  double t2024;
  double t2048;
  double t2485;
  double t2489;
  double t1843;
  double t1893;
  double t1926;
  double t2025;
  double t2050;
  double t2073;
  double t2076;
  double t2168;
  double t2212;
  double t2361;
  double t2466;
  double t2491;
  double t2528;
  double t2628;
  double t2653;
  double t2661;
  double t3356;
  double t3388;
  double t3461;
  double t3172;
  double t3177;
  double t3467;
  double t3636;
  double t3661;
  double t3663;
  double t3687;
  double t4057;
  double t4171;
  double t4202;
  double t1448;
  double t1721;
  double t1887;
  double t5488;
  double t5641;
  double t5673;
  double t5705;
  double t6045;
  double t6370;
  double t6906;
  double t6957;
  double t6971;
  double t7185;
  double t7064;
  double t7354;
  double t7356;
  double t7358;
  double t7166;
  double t7347;
  double t7352;
  double t7364;
  double t7379;
  double t7380;
  double t2794;
  double t2798;
  double t2801;
  double t2815;
  double t7695;
  double t7704;
  double t7709;
  double t7733;
  double t7734;
  double t7411;
  double t8019;
  double t8022;
  double t8035;
  double t8015;
  double t8042;
  double t8044;
  double t8049;
  double t8050;
  double t8057;
  double t8195;
  double t8198;
  double t8202;
  double t8288;
  double t8296;
  double t8306;
  double t8327;
  double t8328;
  double t8329;
  double t8332;
  double t8333;
  double t8337;
  double t8425;
  double t8442;
  double t8458;
  double t8465;
  double t8487;
  double t8492;
  double t8527;
  double t8538;
  double t8539;
  double t8548;
  double t8553;
  double t8556;
  double t8571;
  double t8576;
  double t8586;
  double t8688;
  double t8689;
  double t8699;
  double t8708;
  double t8723;
  double t8728;
  double t8885;
  double t8901;
  double t8904;
  double t8911;
  double t8916;
  double t8747;
  double t9031;
  double t9038;
  double t9039;
  double t9025;
  double t9043;
  double t9046;
  double t9058;
  double t9076;
  double t9077;
  double t9123;
  double t9127;
  double t9294;
  double t9296;
  double t9297;
  double t9303;
  double t9304;
  double t9305;
  double t9308;
  double t9309;
  double t9310;
  t615 = Cos(var1[4]);
  t947 = Cos(var1[6]);
  t990 = -1.*t947;
  t1294 = 1. + t990;
  t1347 = 0.15121*t1294;
  t1441 = Sin(var1[6]);
  t1832 = Sin(var1[5]);
  t767 = Cos(var1[5]);
  t1891 = Cos(var1[7]);
  t2008 = -1.*t615*t947*t1832;
  t2012 = -1.*t615*t767*t1441;
  t2024 = t2008 + t2012;
  t2048 = Cos(var1[8]);
  t2485 = Sin(var1[7]);
  t2489 = Sin(var1[8]);
  t1843 = 0.15121*t1441;
  t1893 = -1.*t1891;
  t1926 = 1. + t1893;
  t2025 = 0.28121*t1926*t2024;
  t2050 = -1.*t2048;
  t2073 = 1. + t2050;
  t2076 = 0.50321*t1891*t2073*t2024;
  t2168 = -1.*t615*t767*t947;
  t2212 = t615*t1832*t1441;
  t2361 = t2168 + t2212;
  t2466 = 0.15121*t2361;
  t2491 = -0.50321*t2024*t2485*t2489;
  t2528 = t1891*t2048*t2024;
  t2628 = t2024*t2485*t2489;
  t2653 = t2528 + t2628;
  t2661 = 0.19821*t2653;
  t3356 = t615*t767*t947;
  t3388 = -1.*t615*t1832*t1441;
  t3461 = t3356 + t3388;
  t3172 = Sin(var1[4]);
  t3177 = t1891*t3172;
  t3467 = t3461*t2485;
  t3636 = t3177 + t3467;
  t3661 = t1891*t3461;
  t3663 = -1.*t3172*t2485;
  t3687 = t3661 + t3663;
  t4057 = -1.*t1891*t3172;
  t4171 = -1.*t3461*t2485;
  t4202 = t4057 + t4171;
  t1448 = -0.15121*t1441;
  t1721 = t1347 + t1448;
  t1887 = t1347 + t1843;
  t5488 = -1.*t767*t947*t3172;
  t5641 = t3172*t1832*t1441;
  t5673 = t5488 + t5641;
  t5705 = t1891*t5673;
  t6045 = -1.*t615*t2485;
  t6370 = t5705 + t6045;
  t6906 = t615*t1891;
  t6957 = t5673*t2485;
  t6971 = t6906 + t6957;
  t7185 = Cos(var1[3]);
  t7064 = Sin(var1[3]);
  t7354 = t7185*t767;
  t7356 = -1.*t7064*t3172*t1832;
  t7358 = t7354 + t7356;
  t7166 = -1.*t767*t7064*t3172;
  t7347 = -1.*t7185*t1832;
  t7352 = t7166 + t7347;
  t7364 = t947*t7358;
  t7379 = t7352*t1441;
  t7380 = t7364 + t7379;
  t2794 = -0.15121*t947;
  t2798 = t2794 + t1843;
  t2801 = 0.15121*t947;
  t2815 = t2801 + t1843;
  t7695 = t767*t7064*t3172;
  t7704 = t7185*t1832;
  t7709 = t7695 + t7704;
  t7733 = -1.*t7709*t1441;
  t7734 = t7364 + t7733;
  t7411 = -1.*t7358*t1441;
  t8019 = t947*t7709;
  t8022 = t7358*t1441;
  t8035 = t8019 + t8022;
  t8015 = -1.*t615*t1891*t7064;
  t8042 = t8035*t2485;
  t8044 = t8015 + t8042;
  t8049 = t1891*t8035;
  t8050 = t615*t7064*t2485;
  t8057 = t8049 + t8050;
  t8195 = t615*t1891*t7064;
  t8198 = -1.*t8035*t2485;
  t8202 = t8195 + t8198;
  t8288 = t615*t767*t947*t7064;
  t8296 = -1.*t615*t7064*t1832*t1441;
  t8306 = t8288 + t8296;
  t8327 = t1891*t8306;
  t8328 = -1.*t7064*t3172*t2485;
  t8329 = t8327 + t8328;
  t8332 = t1891*t7064*t3172;
  t8333 = t8306*t2485;
  t8337 = t8332 + t8333;
  t8425 = -1.*t767*t7064;
  t8442 = -1.*t7185*t3172*t1832;
  t8458 = t8425 + t8442;
  t8465 = t7185*t767*t3172;
  t8487 = -1.*t7064*t1832;
  t8492 = t8465 + t8487;
  t8527 = t947*t8492;
  t8538 = t8458*t1441;
  t8539 = t8527 + t8538;
  t8548 = t1891*t8539;
  t8553 = t7185*t615*t2485;
  t8556 = t8548 + t8553;
  t8571 = -1.*t7185*t615*t1891;
  t8576 = t8539*t2485;
  t8586 = t8571 + t8576;
  t8688 = t767*t7064;
  t8689 = t7185*t3172*t1832;
  t8699 = t8688 + t8689;
  t8708 = t947*t8699;
  t8723 = t8492*t1441;
  t8728 = t8708 + t8723;
  t8885 = -1.*t7185*t767*t3172;
  t8901 = t7064*t1832;
  t8904 = t8885 + t8901;
  t8911 = -1.*t8904*t1441;
  t8916 = t8708 + t8911;
  t8747 = -1.*t8699*t1441;
  t9031 = t947*t8904;
  t9038 = t8699*t1441;
  t9039 = t9031 + t9038;
  t9025 = t7185*t615*t1891;
  t9043 = t9039*t2485;
  t9046 = t9025 + t9043;
  t9058 = t1891*t9039;
  t9076 = -1.*t7185*t615*t2485;
  t9077 = t9058 + t9076;
  t9123 = -1.*t9039*t2485;
  t9127 = t8571 + t9123;
  t9294 = -1.*t7185*t615*t767*t947;
  t9296 = t7185*t615*t1832*t1441;
  t9297 = t9294 + t9296;
  t9303 = t1891*t9297;
  t9304 = t7185*t3172*t2485;
  t9305 = t9303 + t9304;
  t9308 = -1.*t7185*t1891*t3172;
  t9309 = t9297*t2485;
  t9310 = t9308 + t9309;
  p_output1[0]=var2[0] + (t1721*t1832*t3172 + 0.28121*t1926*t5673 + 0.28121*t2485*t615 + 0.50321*t2073*t6370 - 0.50321*t2489*t6971 + 0.19821*(t2048*t6370 + t2489*t6971) - 1.*t1887*t3172*t767 + 0.15121*(t1441*t3172*t767 + t1832*t3172*t947))*var2[4] + (t2025 + t2076 + t2466 + t2491 + t2661 - 1.*t1832*t1887*t615 - 1.*t1721*t615*t767)*var2[5] + (t2025 + t2076 + t2466 + t2491 + t2661 - 1.*t1832*t2798*t615 + t2815*t615*t767)*var2[6] + (0.28121*t1891*t3172 + 0.28121*t2485*t3461 - 0.50321*t2489*t3687 + 0.50321*t2073*t4202 + 0.19821*(t2489*t3687 + t2048*t4202))*var2[7] + (-0.50321*t2048*t3636 + 0.50321*t2489*t3687 + 0.19821*(t2048*t3636 - 1.*t2489*t3687))*var2[8];
  p_output1[1]=var2[1] + (-0.28121*t2485*t615*t7185 + t1721*t8458 + t1887*t8492 + 0.28121*t1926*t8539 + 0.50321*t2073*t8556 - 0.50321*t2489*t8586 + 0.19821*(t2048*t8556 + t2489*t8586) + 0.15121*(-1.*t1441*t8492 + t8458*t947))*var2[3] + (0.28121*t2485*t3172*t7064 - 1.*t1721*t1832*t615*t7064 + t1887*t615*t7064*t767 + 0.28121*t1926*t8306 + 0.50321*t2073*t8329 - 0.50321*t2489*t8337 + 0.19821*(t2048*t8329 + t2489*t8337) + 0.15121*(-1.*t1441*t615*t7064*t767 - 1.*t1832*t615*t7064*t947))*var2[4] + (t1721*t7352 + t1887*t7358 + 0.28121*t1926*t7380 + 0.50321*t1891*t2073*t7380 - 0.50321*t2485*t2489*t7380 + 0.19821*(t1891*t2048*t7380 + t2485*t2489*t7380) + 0.15121*(t7411 + t7352*t947))*var2[5] + (t2798*t7358 + t2815*t7709 + 0.28121*t1926*t7734 + 0.50321*t1891*t2073*t7734 - 0.50321*t2485*t2489*t7734 + 0.19821*(t1891*t2048*t7734 + t2485*t2489*t7734) + 0.15121*(t7411 - 1.*t7709*t947))*var2[6] + (-0.28121*t1891*t615*t7064 + 0.28121*t2485*t8035 - 0.50321*t2489*t8057 + 0.50321*t2073*t8202 + 0.19821*(t2489*t8057 + t2048*t8202))*var2[7] + (-0.50321*t2048*t8044 + 0.50321*t2489*t8057 + 0.19821*(t2048*t8044 - 1.*t2489*t8057))*var2[8];
  p_output1[2]=var2[2] + (-0.28121*t2485*t615*t7064 + t1721*t7358 + t1887*t7709 + 0.15121*t7734 + 0.28121*t1926*t8035 - 0.50321*t2489*t8044 + 0.50321*t2073*t8057 + 0.19821*(t2489*t8044 + t2048*t8057))*var2[3] + (-0.28121*t2485*t3172*t7185 + t1721*t1832*t615*t7185 - 1.*t1887*t615*t7185*t767 + 0.28121*t1926*t9297 + 0.50321*t2073*t9305 - 0.50321*t2489*t9310 + 0.19821*(t2048*t9305 + t2489*t9310) + 0.15121*(t1441*t615*t7185*t767 + t1832*t615*t7185*t947))*var2[4] + (t1721*t8492 + t1887*t8699 + 0.28121*t1926*t8728 + 0.50321*t1891*t2073*t8728 - 0.50321*t2485*t2489*t8728 + 0.19821*(t1891*t2048*t8728 + t2485*t2489*t8728) + 0.15121*(t8527 + t8747))*var2[5] + (t2798*t8699 + t2815*t8904 + 0.28121*t1926*t8916 + 0.50321*t1891*t2073*t8916 - 0.50321*t2485*t2489*t8916 + 0.19821*(t1891*t2048*t8916 + t2485*t2489*t8916) + 0.15121*(t8747 - 1.*t8904*t947))*var2[6] + (0.28121*t1891*t615*t7185 + 0.28121*t2485*t9039 - 0.50321*t2489*t9077 + 0.50321*t2073*t9127 + 0.19821*(t2489*t9077 + t2048*t9127))*var2[7] + (-0.50321*t2048*t9046 + 0.50321*t2489*t9077 + 0.19821*(t2048*t9046 - 1.*t2489*t9077))*var2[8];
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
