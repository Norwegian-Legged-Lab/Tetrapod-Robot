/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:38 GMT+02:00
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
  double t698;
  double t760;
  double t737;
  double t14343;
  double t14648;
  double t10046;
  double t15837;
  double t739;
  double t16377;
  double t16383;
  double t16415;
  double t766;
  double t16370;
  double t14500;
  double t16190;
  double t16290;
  double t740;
  double t861;
  double t2771;
  double t17314;
  double t17312;
  double t16863;
  double t17247;
  double t17267;
  double t17290;
  double t17291;
  double t17295;
  double t17298;
  double t17299;
  double t17300;
  double t17319;
  double t17320;
  double t17322;
  double t17346;
  double t17347;
  double t17348;
  double t17350;
  double t17363;
  double t17364;
  double t17376;
  double t17389;
  double t17390;
  double t17425;
  double t17433;
  double t17434;
  double t16372;
  double t17269;
  double t17270;
  double t17503;
  double t17508;
  double t17520;
  double t17521;
  double t17522;
  double t17525;
  double t17526;
  double t17527;
  double t17528;
  double t17531;
  double t17543;
  double t17550;
  double t17553;
  double t17597;
  double t17598;
  double t17605;
  double t17512;
  double t17513;
  double t17519;
  double t17582;
  double t17590;
  double t17613;
  double t17614;
  double t17615;
  double t17616;
  double t17621;
  double t17624;
  double t17625;
  double t17592;
  double t17606;
  double t17609;
  double t17619;
  double t17626;
  double t17627;
  double t17639;
  double t17640;
  double t17641;
  double t17297;
  double t17308;
  double t17309;
  double t17610;
  double t17653;
  double t17661;
  double t17666;
  double t17673;
  double t17679;
  double t17713;
  double t17717;
  t698 = Cos(var1[4]);
  t760 = Cos(var1[12]);
  t737 = Cos(var1[5]);
  t14343 = Cos(var1[14]);
  t14648 = Sin(var1[13]);
  t10046 = Cos(var1[13]);
  t15837 = Sin(var1[14]);
  t739 = Sin(var1[12]);
  t16377 = t14343*t14648;
  t16383 = -1.*t10046*t15837;
  t16415 = t16377 + t16383;
  t766 = Sin(var1[5]);
  t16370 = Sin(var1[4]);
  t14500 = t10046*t14343;
  t16190 = t14648*t15837;
  t16290 = t14500 + t16190;
  t740 = -1.*t737*t739;
  t861 = -1.*t760*t766;
  t2771 = t740 + t861;
  t17314 = Cos(var1[3]);
  t17312 = Sin(var1[3]);
  t16863 = t760*t737*t16415;
  t17247 = -1.*t739*t16415*t766;
  t17267 = t16863 + t17247;
  t17290 = -1.*t14343*t14648;
  t17291 = t10046*t15837;
  t17295 = t17290 + t17291;
  t17298 = t760*t737*t16290;
  t17299 = -1.*t739*t16290*t766;
  t17300 = t17298 + t17299;
  t17319 = t760*t737;
  t17320 = -1.*t739*t766;
  t17322 = t17319 + t17320;
  t17346 = t737*t739*t16415;
  t17347 = t760*t16415*t766;
  t17348 = t17346 + t17347;
  t17350 = t698*t16290;
  t17363 = -1.*t16370*t17267;
  t17364 = t17350 + t17363;
  t17376 = t737*t739*t16290;
  t17389 = t760*t16290*t766;
  t17390 = t17376 + t17389;
  t17425 = t698*t17295;
  t17433 = -1.*t16370*t17300;
  t17434 = t17425 + t17433;
  t16372 = t16290*t16370;
  t17269 = t698*t17267;
  t17270 = t16372 + t17269;
  t17503 = -1.*t760;
  t17508 = 1. + t17503;
  t17520 = -1.*t10046;
  t17521 = 1. + t17520;
  t17522 = 0.28121*t17521;
  t17525 = -1.*t14343;
  t17526 = 1. + t17525;
  t17527 = 0.50321*t17526;
  t17528 = 0.19821*t14343;
  t17531 = t17527 + t17528;
  t17543 = t10046*t17531;
  t17550 = -0.305*t14648*t15837;
  t17553 = t17522 + t17543 + t17550;
  t17597 = 0.15121*t17508;
  t17598 = t760*t17553;
  t17605 = t17597 + t17598;
  t17512 = -0.15121*t17508;
  t17513 = -0.15121*t760;
  t17519 = -0.15121*t739;
  t17582 = t739*t17553;
  t17590 = t17512 + t17513 + t17519 + t17582;
  t17613 = 0.28121*t14648;
  t17614 = -1.*t17531*t14648;
  t17615 = -0.305*t10046*t15837;
  t17616 = t17613 + t17614 + t17615;
  t17621 = t737*t17605;
  t17624 = -1.*t17590*t766;
  t17625 = t17621 + t17624;
  t17592 = t737*t17590;
  t17606 = t17605*t766;
  t17609 = t17592 + t17606;
  t17619 = t17616*t16370;
  t17626 = t698*t17625;
  t17627 = t17619 + t17626;
  t17639 = t698*t17616;
  t17640 = -1.*t16370*t17625;
  t17641 = t17639 + t17640;
  t17297 = t17295*t16370;
  t17308 = t698*t17300;
  t17309 = t17297 + t17308;
  t17610 = -1.*t17322*t17609;
  t17653 = t17348*t17609;
  t17661 = t17322*t17609;
  t17666 = -1.*t17390*t17609;
  t17673 = -1.*t17348*t17609;
  t17679 = t17390*t17609;
  t17713 = -1.*t17616*t16290;
  t17717 = t17616*t17295;
  p_output1[0]=t17309*var2[0] + t2771*t698*var2[1] + t17270*var2[2];
  p_output1[1]=(t17314*t17390 - 1.*t17312*t17434)*var2[0] + (t17314*t17322 + t16370*t17312*t2771)*var2[1] + (t17314*t17348 - 1.*t17312*t17364)*var2[2];
  p_output1[2]=(t17312*t17390 + t17314*t17434)*var2[0] + (t17312*t17322 - 1.*t16370*t17314*t2771)*var2[1] + (t17312*t17348 + t17314*t17364)*var2[2];
  p_output1[3]=((t17270*t17627 + t17364*t17641 + t17653)*t2771*t698 + t17270*(t17610 + t16370*t17641*t2771 - 1.*t17627*t2771*t698))*var2[0] + (t17309*(-1.*t17270*t17627 - 1.*t17364*t17641 + t17673) + t17270*(t17309*t17627 + t17434*t17641 + t17679))*var2[1] + ((-1.*t17309*t17627 - 1.*t17434*t17641 + t17666)*t2771*t698 + t17309*(t17661 - 1.*t16370*t17641*t2771 + t17627*t2771*t698))*var2[2];
  p_output1[4]=(t17322*(t16290*t17616 + t17267*t17625 + t17653) + t17348*(t17610 - 1.*t17625*t2771))*var2[0] + (t17390*(-1.*t17267*t17625 + t17673 + t17713) + t17348*(t17300*t17625 + t17679 + t17717))*var2[1] + (t17322*(-1.*t17295*t17616 - 1.*t17300*t17625 + t17666) + t17390*(t17661 + t17625*t2771))*var2[2];
  p_output1[5]=t16290*(t17605*t739 - 1.*t17590*t760)*var2[0] + (t16290*(t17717 + t16290*t17590*t739 + t16290*t17605*t760) + t17295*(t17713 - 1.*t16415*t17590*t739 - 1.*t16415*t17605*t760))*var2[1] + t17295*(-1.*t17605*t739 + t17590*t760)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t17295*(-1.*t16415*t17553 + t17713) + t16290*(t16290*t17553 + t17717))*var2[1] + (-0.15121*t16415 - 0.15121*t17295)*var2[2];
  p_output1[13]=(0.28121*t15837 - 0.305*t14343*t15837 - 1.*t15837*t17531)*var2[0] + (0.28121*t14343 + 0.305*Power(t15837,2) - 1.*t14343*t17531)*var2[2];
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
