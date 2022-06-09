/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:50 GMT+02:00
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
  double t221;
  double t226;
  double t231;
  double t3020;
  double t3566;
  double t3620;
  double t214;
  double t3789;
  double t53;
  double t143;
  double t4386;
  double t4730;
  double t5249;
  double t5447;
  double t5485;
  double t5560;
  double t5562;
  double t5703;
  double t5908;
  double t5913;
  double t5921;
  double t5922;
  double t3746;
  double t3758;
  double t236;
  double t3604;
  double t4391;
  double t4422;
  double t5542;
  double t5558;
  double t6025;
  double t6026;
  double t6027;
  double t6547;
  double t6155;
  double t6224;
  double t6323;
  double t6355;
  double t6441;
  double t6526;
  double t6531;
  double t6538;
  double t6539;
  double t6540;
  double t6545;
  double t6581;
  double t6585;
  double t6586;
  double t6588;
  double t6589;
  double t6590;
  double t6597;
  double t6598;
  double t6599;
  double t6784;
  double t6785;
  double t6786;
  double t6806;
  double t6809;
  double t6808;
  double t6811;
  double t6812;
  double t6814;
  double t6815;
  double t6816;
  double t6823;
  double t6824;
  double t6825;
  double t6827;
  double t6828;
  double t6829;
  double t6832;
  double t6871;
  double t6914;
  double t7033;
  double t7035;
  double t7036;
  double t7039;
  double t7044;
  double t7047;
  double t7050;
  double t7051;
  double t7052;
  double t7062;
  double t7063;
  double t7064;
  double t7066;
  double t7067;
  double t7068;
  double t7072;
  double t7073;
  double t7074;
  double t6555;
  double t6567;
  double t6569;
  double t7106;
  double t7116;
  double t7126;
  double t7133;
  double t7137;
  double t7080;
  double t7178;
  double t7183;
  double t7260;
  double t7280;
  double t7281;
  double t7282;
  double t7290;
  double t7292;
  double t7294;
  double t7311;
  double t7312;
  double t7315;
  double t7368;
  double t7374;
  double t7378;
  double t7385;
  double t7392;
  double t7403;
  double t7405;
  double t7406;
  double t7409;
  double t7428;
  double t7429;
  double t7430;
  double t7433;
  double t7434;
  double t7435;
  double t7448;
  double t7449;
  double t7450;
  double t7454;
  double t7455;
  double t7439;
  double t7469;
  double t7472;
  double t7473;
  double t7475;
  double t7476;
  double t7479;
  double t7480;
  double t7482;
  double t7492;
  double t7493;
  double t7495;
  t221 = Cos(var1[9]);
  t226 = -1.*t221;
  t231 = 1. + t226;
  t3020 = Sin(var1[9]);
  t3566 = 0.15121*t3020;
  t3620 = Sin(var1[4]);
  t214 = Cos(var1[5]);
  t3789 = Sin(var1[5]);
  t53 = Cos(var1[4]);
  t143 = Sin(var1[10]);
  t4386 = Cos(var1[10]);
  t4730 = -1.*t221*t214*t3620;
  t5249 = t3020*t3620*t3789;
  t5447 = t4730 + t5249;
  t5485 = Cos(var1[11]);
  t5560 = t53*t143;
  t5562 = t4386*t5447;
  t5703 = t5560 + t5562;
  t5908 = Sin(var1[11]);
  t5913 = t4386*t53;
  t5921 = -1.*t143*t5447;
  t5922 = t5913 + t5921;
  t3746 = 0.15121*t231;
  t3758 = t3746 + t3566;
  t236 = -0.15121*t231;
  t3604 = t236 + t3566;
  t4391 = -1.*t4386;
  t4422 = 1. + t4391;
  t5542 = -1.*t5485;
  t5558 = 1. + t5542;
  t6025 = -1.*t53*t214*t3020;
  t6026 = -1.*t221*t53*t3789;
  t6027 = t6025 + t6026;
  t6547 = 0.15121*t221;
  t6155 = -0.28121*t4422*t6027;
  t6224 = -0.50321*t4386*t5558*t6027;
  t6323 = 0.50321*t143*t5908*t6027;
  t6355 = -1.*t221*t53*t214;
  t6441 = t53*t3020*t3789;
  t6526 = t6355 + t6441;
  t6531 = 0.15121*t6526;
  t6538 = t4386*t5485*t6027;
  t6539 = t143*t5908*t6027;
  t6540 = t6538 + t6539;
  t6545 = -0.19821*t6540;
  t6581 = t221*t53*t214;
  t6585 = -1.*t53*t3020*t3789;
  t6586 = t6581 + t6585;
  t6588 = -1.*t143*t3620;
  t6589 = -1.*t4386*t6586;
  t6590 = t6588 + t6589;
  t6597 = t4386*t3620;
  t6598 = -1.*t143*t6586;
  t6599 = t6597 + t6598;
  t6784 = t143*t3620;
  t6785 = t4386*t6586;
  t6786 = t6784 + t6785;
  t6806 = Cos(var1[3]);
  t6809 = Sin(var1[3]);
  t6808 = t6806*t214*t3620;
  t6811 = -1.*t6809*t3789;
  t6812 = t6808 + t6811;
  t6814 = -1.*t214*t6809;
  t6815 = -1.*t6806*t3620*t3789;
  t6816 = t6814 + t6815;
  t6823 = t221*t6812;
  t6824 = t3020*t6816;
  t6825 = t6823 + t6824;
  t6827 = -1.*t6806*t53*t143;
  t6828 = t4386*t6825;
  t6829 = t6827 + t6828;
  t6832 = -1.*t4386*t6806*t53;
  t6871 = -1.*t143*t6825;
  t6914 = t6832 + t6871;
  t7033 = t221*t53*t214*t6809;
  t7035 = -1.*t53*t3020*t6809*t3789;
  t7036 = t7033 + t7035;
  t7039 = t143*t6809*t3620;
  t7044 = t4386*t7036;
  t7047 = t7039 + t7044;
  t7050 = t4386*t6809*t3620;
  t7051 = -1.*t143*t7036;
  t7052 = t7050 + t7051;
  t7062 = -1.*t214*t6809*t3620;
  t7063 = -1.*t6806*t3789;
  t7064 = t7062 + t7063;
  t7066 = t6806*t214;
  t7067 = -1.*t6809*t3620*t3789;
  t7068 = t7066 + t7067;
  t7072 = t3020*t7064;
  t7073 = t221*t7068;
  t7074 = t7072 + t7073;
  t6555 = -0.15121*t3020;
  t6567 = t6547 + t6555;
  t6569 = t6547 + t3566;
  t7106 = t214*t6809*t3620;
  t7116 = t6806*t3789;
  t7126 = t7106 + t7116;
  t7133 = -1.*t3020*t7126;
  t7137 = t7133 + t7073;
  t7080 = -1.*t3020*t7068;
  t7178 = t221*t7126;
  t7183 = t3020*t7068;
  t7260 = t7178 + t7183;
  t7280 = t53*t143*t6809;
  t7281 = -1.*t4386*t7260;
  t7282 = t7280 + t7281;
  t7290 = -1.*t4386*t53*t6809;
  t7292 = -1.*t143*t7260;
  t7294 = t7290 + t7292;
  t7311 = -1.*t53*t143*t6809;
  t7312 = t4386*t7260;
  t7315 = t7311 + t7312;
  t7368 = -1.*t221*t6806*t53*t214;
  t7374 = t6806*t53*t3020*t3789;
  t7378 = t7368 + t7374;
  t7385 = -1.*t6806*t143*t3620;
  t7392 = t4386*t7378;
  t7403 = t7385 + t7392;
  t7405 = -1.*t4386*t6806*t3620;
  t7406 = -1.*t143*t7378;
  t7409 = t7405 + t7406;
  t7428 = t214*t6809;
  t7429 = t6806*t3620*t3789;
  t7430 = t7428 + t7429;
  t7433 = t3020*t6812;
  t7434 = t221*t7430;
  t7435 = t7433 + t7434;
  t7448 = -1.*t6806*t214*t3620;
  t7449 = t6809*t3789;
  t7450 = t7448 + t7449;
  t7454 = -1.*t3020*t7450;
  t7455 = t7454 + t7434;
  t7439 = -1.*t3020*t7430;
  t7469 = t221*t7450;
  t7472 = t3020*t7430;
  t7473 = t7469 + t7472;
  t7475 = -1.*t4386*t7473;
  t7476 = t6827 + t7475;
  t7479 = t4386*t6806*t53;
  t7480 = -1.*t143*t7473;
  t7482 = t7479 + t7480;
  t7492 = t6806*t53*t143;
  t7493 = t4386*t7473;
  t7495 = t7492 + t7493;
  p_output1[0]=1.;
  p_output1[1]=-1.*t214*t3604*t3620 + t3620*t3758*t3789 + 0.15121*(t214*t3020*t3620 + t221*t3620*t3789) + 0.28121*t143*t53 - 0.28121*t4422*t5447 - 0.50321*t5558*t5703 - 0.50321*t5908*t5922 - 0.19821*(t5485*t5703 - 1.*t5908*t5922);
  p_output1[2]=-1.*t214*t3758*t53 - 1.*t3604*t3789*t53 + t6155 + t6224 + t6323 + t6531 + t6545;
  p_output1[3]=t6155 + t6224 + t6323 + t6531 + t6545 + t214*t53*t6567 - 1.*t3789*t53*t6569;
  p_output1[4]=0.28121*t3620*t4386 - 0.28121*t143*t6586 - 0.50321*t5908*t6590 - 0.50321*t5558*t6599 - 0.19821*(-1.*t5908*t6590 + t5485*t6599);
  p_output1[5]=-0.50321*t5485*t6599 - 0.50321*t5908*t6786 - 0.19821*(-1.*t5485*t6599 - 1.*t5908*t6786);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-0.28121*t143*t53*t6806 + t3604*t6812 + t3758*t6816 + 0.15121*(-1.*t3020*t6812 + t221*t6816) - 0.28121*t4422*t6825 - 0.50321*t5558*t6829 - 0.50321*t5908*t6914 - 0.19821*(t5485*t6829 - 1.*t5908*t6914);
  p_output1[9]=0.28121*t143*t3620*t6809 + t214*t3604*t53*t6809 - 1.*t3758*t3789*t53*t6809 + 0.15121*(-1.*t214*t3020*t53*t6809 - 1.*t221*t3789*t53*t6809) - 0.28121*t4422*t7036 - 0.50321*t5558*t7047 - 0.50321*t5908*t7052 - 0.19821*(t5485*t7047 - 1.*t5908*t7052);
  p_output1[10]=t3758*t7064 + t3604*t7068 - 0.28121*t4422*t7074 - 0.50321*t4386*t5558*t7074 + 0.50321*t143*t5908*t7074 - 0.19821*(t4386*t5485*t7074 + t143*t5908*t7074) + 0.15121*(t221*t7064 + t7080);
  p_output1[11]=t6569*t7068 + t6567*t7126 + 0.15121*(t7080 - 1.*t221*t7126) - 0.28121*t4422*t7137 - 0.50321*t4386*t5558*t7137 + 0.50321*t143*t5908*t7137 - 0.19821*(t4386*t5485*t7137 + t143*t5908*t7137);
  p_output1[12]=-0.28121*t4386*t53*t6809 - 0.28121*t143*t7260 - 0.50321*t5908*t7282 - 0.50321*t5558*t7294 - 0.19821*(-1.*t5908*t7282 + t5485*t7294);
  p_output1[13]=-0.50321*t5485*t7294 - 0.50321*t5908*t7315 - 0.19821*(-1.*t5485*t7294 - 1.*t5908*t7315);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.28121*t143*t53*t6809 + t3758*t7068 + t3604*t7126 + 0.15121*t7137 - 0.28121*t4422*t7260 - 0.50321*t5908*t7294 - 0.50321*t5558*t7315 - 0.19821*(-1.*t5908*t7294 + t5485*t7315);
  p_output1[17]=-0.28121*t143*t3620*t6806 - 1.*t214*t3604*t53*t6806 + t3758*t3789*t53*t6806 + 0.15121*(t214*t3020*t53*t6806 + t221*t3789*t53*t6806) - 0.28121*t4422*t7378 - 0.50321*t5558*t7403 - 0.50321*t5908*t7409 - 0.19821*(t5485*t7403 - 1.*t5908*t7409);
  p_output1[18]=t3758*t6812 + t3604*t7430 - 0.28121*t4422*t7435 - 0.50321*t4386*t5558*t7435 + 0.50321*t143*t5908*t7435 - 0.19821*(t4386*t5485*t7435 + t143*t5908*t7435) + 0.15121*(t6823 + t7439);
  p_output1[19]=t6569*t7430 + t6567*t7450 + 0.15121*(t7439 - 1.*t221*t7450) - 0.28121*t4422*t7455 - 0.50321*t4386*t5558*t7455 + 0.50321*t143*t5908*t7455 - 0.19821*(t4386*t5485*t7455 + t143*t5908*t7455);
  p_output1[20]=0.28121*t4386*t53*t6806 - 0.28121*t143*t7473 - 0.50321*t5908*t7476 - 0.50321*t5558*t7482 - 0.19821*(-1.*t5908*t7476 + t5485*t7482);
  p_output1[21]=-0.50321*t5485*t7482 - 0.50321*t5908*t7495 - 0.19821*(-1.*t5485*t7482 - 1.*t5908*t7495);
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
