/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:34 GMT+02:00
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
  double t72;
  double t8432;
  double t6626;
  double t22290;
  double t22705;
  double t22289;
  double t22741;
  double t7406;
  double t22844;
  double t22846;
  double t22853;
  double t8462;
  double t22807;
  double t22291;
  double t22745;
  double t22760;
  double t7963;
  double t22233;
  double t22282;
  double t22982;
  double t22968;
  double t22857;
  double t22858;
  double t22859;
  double t22880;
  double t22881;
  double t22899;
  double t22908;
  double t22913;
  double t22923;
  double t22985;
  double t22986;
  double t22989;
  double t23071;
  double t23076;
  double t23078;
  double t23089;
  double t23097;
  double t23125;
  double t23167;
  double t23170;
  double t23187;
  double t23224;
  double t23232;
  double t23243;
  double t22843;
  double t22860;
  double t22865;
  double t23353;
  double t23354;
  double t23396;
  double t23405;
  double t23412;
  double t23429;
  double t23435;
  double t23440;
  double t23442;
  double t23444;
  double t23449;
  double t23450;
  double t23455;
  double t23486;
  double t23488;
  double t23490;
  double t23366;
  double t23371;
  double t23381;
  double t23457;
  double t23459;
  double t23505;
  double t23513;
  double t23517;
  double t23525;
  double t23534;
  double t23547;
  double t23556;
  double t23469;
  double t23493;
  double t23496;
  double t23531;
  double t23565;
  double t23568;
  double t23576;
  double t23621;
  double t23622;
  double t22906;
  double t22954;
  double t22963;
  double t23497;
  double t23634;
  double t23684;
  double t23809;
  double t23901;
  double t23962;
  double t24206;
  double t24226;
  t72 = Cos(var1[4]);
  t8432 = Cos(var1[12]);
  t6626 = Cos(var1[5]);
  t22290 = Cos(var1[14]);
  t22705 = Sin(var1[13]);
  t22289 = Cos(var1[13]);
  t22741 = Sin(var1[14]);
  t7406 = Sin(var1[12]);
  t22844 = t22290*t22705;
  t22846 = -1.*t22289*t22741;
  t22853 = t22844 + t22846;
  t8462 = Sin(var1[5]);
  t22807 = Sin(var1[4]);
  t22291 = t22289*t22290;
  t22745 = t22705*t22741;
  t22760 = t22291 + t22745;
  t7963 = -1.*t6626*t7406;
  t22233 = -1.*t8432*t8462;
  t22282 = t7963 + t22233;
  t22982 = Cos(var1[3]);
  t22968 = Sin(var1[3]);
  t22857 = t8432*t6626*t22853;
  t22858 = -1.*t7406*t22853*t8462;
  t22859 = t22857 + t22858;
  t22880 = -1.*t22290*t22705;
  t22881 = t22289*t22741;
  t22899 = t22880 + t22881;
  t22908 = t8432*t6626*t22760;
  t22913 = -1.*t7406*t22760*t8462;
  t22923 = t22908 + t22913;
  t22985 = t8432*t6626;
  t22986 = -1.*t7406*t8462;
  t22989 = t22985 + t22986;
  t23071 = t6626*t7406*t22853;
  t23076 = t8432*t22853*t8462;
  t23078 = t23071 + t23076;
  t23089 = t72*t22760;
  t23097 = -1.*t22807*t22859;
  t23125 = t23089 + t23097;
  t23167 = t6626*t7406*t22760;
  t23170 = t8432*t22760*t8462;
  t23187 = t23167 + t23170;
  t23224 = t72*t22899;
  t23232 = -1.*t22807*t22923;
  t23243 = t23224 + t23232;
  t22843 = t22760*t22807;
  t22860 = t72*t22859;
  t22865 = t22843 + t22860;
  t23353 = -1.*t8432;
  t23354 = 1. + t23353;
  t23396 = -1.*t22289;
  t23405 = 1. + t23396;
  t23412 = 0.28121*t23405;
  t23429 = -1.*t22290;
  t23435 = 1. + t23429;
  t23440 = 0.50321*t23435;
  t23442 = 0.19821*t22290;
  t23444 = t23440 + t23442;
  t23449 = t22289*t23444;
  t23450 = -0.305*t22705*t22741;
  t23455 = t23412 + t23449 + t23450;
  t23486 = 0.15121*t23354;
  t23488 = t8432*t23455;
  t23490 = t23486 + t23488;
  t23366 = -0.15121*t23354;
  t23371 = -0.15121*t8432;
  t23381 = -0.15121*t7406;
  t23457 = t7406*t23455;
  t23459 = t23366 + t23371 + t23381 + t23457;
  t23505 = 0.28121*t22705;
  t23513 = -1.*t23444*t22705;
  t23517 = -0.305*t22289*t22741;
  t23525 = t23505 + t23513 + t23517;
  t23534 = t6626*t23490;
  t23547 = -1.*t23459*t8462;
  t23556 = t23534 + t23547;
  t23469 = t6626*t23459;
  t23493 = t23490*t8462;
  t23496 = t23469 + t23493;
  t23531 = t23525*t22807;
  t23565 = t72*t23556;
  t23568 = t23531 + t23565;
  t23576 = t72*t23525;
  t23621 = -1.*t22807*t23556;
  t23622 = t23576 + t23621;
  t22906 = t22899*t22807;
  t22954 = t72*t22923;
  t22963 = t22906 + t22954;
  t23497 = -1.*t22989*t23496;
  t23634 = t23078*t23496;
  t23684 = t22989*t23496;
  t23809 = -1.*t23187*t23496;
  t23901 = -1.*t23078*t23496;
  t23962 = t23187*t23496;
  t24206 = -1.*t23525*t22760;
  t24226 = t23525*t22899;
  p_output1[0]=t22963*var2[0] + t22282*t72*var2[1] + t22865*var2[2];
  p_output1[1]=(t22982*t23187 - 1.*t22968*t23243)*var2[0] + (t22282*t22807*t22968 + t22982*t22989)*var2[1] + (t22982*t23078 - 1.*t22968*t23125)*var2[2];
  p_output1[2]=(t22968*t23187 + t22982*t23243)*var2[0] + (-1.*t22282*t22807*t22982 + t22968*t22989)*var2[1] + (t22968*t23078 + t22982*t23125)*var2[2];
  p_output1[3]=(t22282*(t22865*t23568 + t23125*t23622 + t23634)*t72 + t22865*(t23497 + t22282*t22807*t23622 - 1.*t22282*t23568*t72))*var2[0] + (t22963*(-1.*t22865*t23568 - 1.*t23125*t23622 + t23901) + t22865*(t22963*t23568 + t23243*t23622 + t23962))*var2[1] + (t22282*(-1.*t22963*t23568 - 1.*t23243*t23622 + t23809)*t72 + t22963*(-1.*t22282*t22807*t23622 + t23684 + t22282*t23568*t72))*var2[2];
  p_output1[4]=(t23078*(t23497 - 1.*t22282*t23556) + t22989*(t22760*t23525 + t22859*t23556 + t23634))*var2[0] + (t23187*(-1.*t22859*t23556 + t23901 + t24206) + t23078*(t22923*t23556 + t23962 + t24226))*var2[1] + (t23187*(t22282*t23556 + t23684) + t22989*(-1.*t22899*t23525 - 1.*t22923*t23556 + t23809))*var2[2];
  p_output1[5]=t22760*(t23490*t7406 - 1.*t23459*t8432)*var2[0] + (t22760*(t24226 + t22760*t23459*t7406 + t22760*t23490*t8432) + t22899*(t24206 - 1.*t22853*t23459*t7406 - 1.*t22853*t23490*t8432))*var2[1] + t22899*(-1.*t23490*t7406 + t23459*t8432)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t22899*(-1.*t22853*t23455 + t24206) + t22760*(t22760*t23455 + t24226))*var2[1] + (-0.15121*t22853 - 0.15121*t22899)*var2[2];
  p_output1[13]=(0.28121*t22741 - 0.305*t22290*t22741 - 1.*t22741*t23444)*var2[0] + (0.28121*t22290 + 0.305*Power(t22741,2) - 1.*t22290*t23444)*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
