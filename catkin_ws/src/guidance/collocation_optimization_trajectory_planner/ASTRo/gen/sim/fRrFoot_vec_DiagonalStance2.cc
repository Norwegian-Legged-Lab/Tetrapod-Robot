/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:00 GMT+02:00
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
  double t3671;
  double t16384;
  double t16295;
  double t16415;
  double t16418;
  double t16409;
  double t16423;
  double t16361;
  double t16432;
  double t16433;
  double t16437;
  double t16389;
  double t16429;
  double t16448;
  double t16450;
  double t16451;
  double t16383;
  double t16399;
  double t16400;
  double t16534;
  double t16529;
  double t16417;
  double t16427;
  double t16428;
  double t16438;
  double t16439;
  double t16440;
  double t16502;
  double t16513;
  double t16515;
  double t16539;
  double t16540;
  double t16541;
  double t16549;
  double t16550;
  double t16551;
  double t16554;
  double t16556;
  double t16557;
  double t16572;
  double t16573;
  double t16574;
  double t16577;
  double t16579;
  double t16580;
  double t16431;
  double t16441;
  double t16443;
  double t16616;
  double t16617;
  double t16619;
  double t16622;
  double t16623;
  double t16624;
  double t16625;
  double t16626;
  double t16627;
  double t16628;
  double t16629;
  double t16630;
  double t16631;
  double t16632;
  double t16636;
  double t16637;
  double t16620;
  double t16621;
  double t16633;
  double t16634;
  double t16641;
  double t16642;
  double t16643;
  double t16644;
  double t16646;
  double t16647;
  double t16649;
  double t16635;
  double t16638;
  double t16639;
  double t16645;
  double t16650;
  double t16651;
  double t16654;
  double t16655;
  double t16656;
  double t16447;
  double t16520;
  double t16522;
  double t16640;
  double t16662;
  double t16669;
  double t16675;
  double t16683;
  double t16689;
  double t16719;
  double t16723;
  t3671 = Cos(var1[4]);
  t16384 = Cos(var1[15]);
  t16295 = Cos(var1[5]);
  t16415 = Cos(var1[17]);
  t16418 = Sin(var1[16]);
  t16409 = Cos(var1[16]);
  t16423 = Sin(var1[17]);
  t16361 = Sin(var1[15]);
  t16432 = -1.*t16415*t16418;
  t16433 = t16409*t16423;
  t16437 = t16432 + t16433;
  t16389 = Sin(var1[5]);
  t16429 = Sin(var1[4]);
  t16448 = -1.*t16409*t16415;
  t16450 = -1.*t16418*t16423;
  t16451 = t16448 + t16450;
  t16383 = t16295*t16361;
  t16399 = t16384*t16389;
  t16400 = t16383 + t16399;
  t16534 = Cos(var1[3]);
  t16529 = Sin(var1[3]);
  t16417 = t16409*t16415;
  t16427 = t16418*t16423;
  t16428 = t16417 + t16427;
  t16438 = t16384*t16295*t16437;
  t16439 = -1.*t16361*t16437*t16389;
  t16440 = t16438 + t16439;
  t16502 = t16384*t16295*t16451;
  t16513 = -1.*t16361*t16451*t16389;
  t16515 = t16502 + t16513;
  t16539 = -1.*t16384*t16295;
  t16540 = t16361*t16389;
  t16541 = t16539 + t16540;
  t16549 = t16295*t16361*t16437;
  t16550 = t16384*t16437*t16389;
  t16551 = t16549 + t16550;
  t16554 = t3671*t16428;
  t16556 = -1.*t16429*t16440;
  t16557 = t16554 + t16556;
  t16572 = t16295*t16361*t16451;
  t16573 = t16384*t16451*t16389;
  t16574 = t16572 + t16573;
  t16577 = t3671*t16437;
  t16579 = -1.*t16429*t16515;
  t16580 = t16577 + t16579;
  t16431 = t16428*t16429;
  t16441 = t3671*t16440;
  t16443 = t16431 + t16441;
  t16616 = -1.*t16384;
  t16617 = 1. + t16616;
  t16619 = -0.15121*t16617;
  t16622 = -1.*t16409;
  t16623 = 1. + t16622;
  t16624 = -0.28121*t16623;
  t16625 = -1.*t16415;
  t16626 = 1. + t16625;
  t16627 = -0.50321*t16626;
  t16628 = -0.19821*t16415;
  t16629 = t16627 + t16628;
  t16630 = t16409*t16629;
  t16631 = 0.305*t16418*t16423;
  t16632 = t16624 + t16630 + t16631;
  t16636 = t16384*t16632;
  t16637 = t16619 + t16636;
  t16620 = -0.15121*t16384;
  t16621 = 0.15121*t16361;
  t16633 = t16361*t16632;
  t16634 = t16619 + t16620 + t16621 + t16633;
  t16641 = 0.28121*t16418;
  t16642 = t16629*t16418;
  t16643 = -0.305*t16409*t16423;
  t16644 = t16641 + t16642 + t16643;
  t16646 = t16295*t16637;
  t16647 = -1.*t16634*t16389;
  t16649 = t16646 + t16647;
  t16635 = t16295*t16634;
  t16638 = t16637*t16389;
  t16639 = t16635 + t16638;
  t16645 = t16644*t16429;
  t16650 = t3671*t16649;
  t16651 = t16645 + t16650;
  t16654 = t3671*t16644;
  t16655 = -1.*t16429*t16649;
  t16656 = t16654 + t16655;
  t16447 = t16437*t16429;
  t16520 = t3671*t16515;
  t16522 = t16447 + t16520;
  t16640 = -1.*t16541*t16639;
  t16662 = t16551*t16639;
  t16669 = t16541*t16639;
  t16675 = -1.*t16574*t16639;
  t16683 = -1.*t16551*t16639;
  t16689 = t16574*t16639;
  t16719 = -1.*t16644*t16428;
  t16723 = t16644*t16437;
  p_output1[0]=t16522*var2[0] + t16400*t3671*var2[1] + t16443*var2[2];
  p_output1[1]=(t16534*t16574 - 1.*t16529*t16580)*var2[0] + (t16400*t16429*t16529 + t16534*t16541)*var2[1] + (t16534*t16551 - 1.*t16529*t16557)*var2[2];
  p_output1[2]=(t16529*t16574 + t16534*t16580)*var2[0] + (-1.*t16400*t16429*t16534 + t16529*t16541)*var2[1] + (t16529*t16551 + t16534*t16557)*var2[2];
  p_output1[3]=(t16400*(t16443*t16651 + t16557*t16656 + t16662)*t3671 + t16443*(t16640 + t16400*t16429*t16656 - 1.*t16400*t16651*t3671))*var2[0] + (t16522*(-1.*t16443*t16651 - 1.*t16557*t16656 + t16683) + t16443*(t16522*t16651 + t16580*t16656 + t16689))*var2[1] + (t16400*(-1.*t16522*t16651 - 1.*t16580*t16656 + t16675)*t3671 + t16522*(-1.*t16400*t16429*t16656 + t16669 + t16400*t16651*t3671))*var2[2];
  p_output1[4]=(t16551*(t16640 - 1.*t16400*t16649) + t16541*(t16428*t16644 + t16440*t16649 + t16662))*var2[0] + (t16574*(-1.*t16440*t16649 + t16683 + t16719) + t16551*(t16515*t16649 + t16689 + t16723))*var2[1] + (t16574*(t16400*t16649 + t16669) + t16541*(-1.*t16437*t16644 - 1.*t16515*t16649 + t16675))*var2[2];
  p_output1[5]=t16428*(t16384*t16634 - 1.*t16361*t16637)*var2[0] + (t16437*(-1.*t16361*t16437*t16634 - 1.*t16384*t16437*t16637 + t16719) + t16428*(t16361*t16451*t16634 + t16384*t16451*t16637 + t16723))*var2[1] + t16437*(-1.*t16384*t16634 + t16361*t16637)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t16428 - 0.15121*t16451)*var2[0] + (-0.15121 + t16437*(-1.*t16437*t16632 + t16719) + t16428*(t16451*t16632 + t16723))*var2[1];
  p_output1[16]=(0.28121*t16423 - 0.305*t16415*t16423 + t16423*t16629)*var2[0] + (0.28121*t16415 + 0.305*Power(t16423,2) + t16415*t16629)*var2[2];
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

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
