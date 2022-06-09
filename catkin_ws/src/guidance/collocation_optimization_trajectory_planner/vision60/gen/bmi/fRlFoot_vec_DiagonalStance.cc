/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:55 GMT+02:00
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
  double t10588;
  double t10549;
  double t10595;
  double t44148;
  double t43378;
  double t44104;
  double t44159;
  double t6007;
  double t44147;
  double t44251;
  double t44252;
  double t10617;
  double t44305;
  double t44310;
  double t44312;
  double t44292;
  double t44367;
  double t44469;
  double t44327;
  double t44338;
  double t44339;
  double t44354;
  double t44355;
  double t44357;
  double t44358;
  double t44359;
  double t44361;
  double t44471;
  double t44479;
  double t44482;
  double t44487;
  double t44489;
  double t44491;
  double t44498;
  double t44499;
  double t44519;
  double t44540;
  double t44546;
  double t44550;
  double t44553;
  double t44554;
  double t44556;
  double t44278;
  double t44340;
  double t44341;
  double t44602;
  double t44604;
  double t44605;
  double t44613;
  double t44617;
  double t44618;
  double t44619;
  double t44620;
  double t44621;
  double t10586;
  double t10811;
  double t39317;
  double t44599;
  double t44612;
  double t44622;
  double t44623;
  double t44627;
  double t44628;
  double t44629;
  double t44630;
  double t44631;
  double t44633;
  double t44592;
  double t44593;
  double t44594;
  double t44595;
  double t44624;
  double t44625;
  double t44637;
  double t44638;
  double t44639;
  double t44645;
  double t44649;
  double t44654;
  double t44626;
  double t44634;
  double t44635;
  double t44642;
  double t44656;
  double t44657;
  double t44662;
  double t44663;
  double t44668;
  double t44346;
  double t44362;
  double t44363;
  double t44636;
  double t44675;
  double t44685;
  double t44697;
  double t44713;
  double t44735;
  double t44802;
  double t44814;
  double t44768;
  double t44776;
  double t44794;
  double t44784;
  double t44853;
  double t44846;
  t10588 = Cos(var1[9]);
  t10549 = Sin(var1[4]);
  t10595 = Cos(var1[4]);
  t44148 = Cos(var1[10]);
  t43378 = Cos(var1[11]);
  t44104 = Sin(var1[10]);
  t44159 = Sin(var1[11]);
  t6007 = Sin(var1[9]);
  t44147 = t43378*t44104;
  t44251 = -1.*t44148*t44159;
  t44252 = t44147 + t44251;
  t10617 = Sin(var1[5]);
  t44305 = t44148*t43378;
  t44310 = t44104*t44159;
  t44312 = t44305 + t44310;
  t44292 = Cos(var1[5]);
  t44367 = Cos(var1[3]);
  t44469 = Sin(var1[3]);
  t44327 = t44292*t44312;
  t44338 = t6007*t44252*t10617;
  t44339 = t44327 + t44338;
  t44354 = -1.*t43378*t44104;
  t44355 = t44148*t44159;
  t44357 = t44354 + t44355;
  t44358 = t44292*t44357;
  t44359 = t6007*t44312*t10617;
  t44361 = t44358 + t44359;
  t44471 = t10595*t6007;
  t44479 = t10588*t10549*t10617;
  t44482 = t44471 + t44479;
  t44487 = -1.*t44292*t6007*t44252;
  t44489 = t44312*t10617;
  t44491 = t44487 + t44489;
  t44498 = t10588*t10595*t44252;
  t44499 = -1.*t10549*t44339;
  t44519 = t44498 + t44499;
  t44540 = -1.*t44292*t6007*t44312;
  t44546 = t44357*t10617;
  t44550 = t44540 + t44546;
  t44553 = t10588*t10595*t44312;
  t44554 = -1.*t10549*t44361;
  t44556 = t44553 + t44554;
  t44278 = t10588*t44252*t10549;
  t44340 = t10595*t44339;
  t44341 = t44278 + t44340;
  t44602 = -0.0641*t43378;
  t44604 = -0.28*t44159;
  t44605 = t44602 + t44604;
  t44613 = -1.*t43378;
  t44617 = 1. + t44613;
  t44618 = -0.575*t44617;
  t44619 = -0.295*t43378;
  t44620 = -0.0641*t44159;
  t44621 = t44618 + t44619 + t44620;
  t10586 = t6007*t10549;
  t10811 = -1.*t10588*t10595*t10617;
  t39317 = t10586 + t10811;
  t44599 = 0.325*t44104;
  t44612 = t44148*t44605;
  t44622 = t44104*t44621;
  t44623 = t44599 + t44612 + t44622;
  t44627 = -1.*t44148;
  t44628 = 1. + t44627;
  t44629 = -0.325*t44628;
  t44630 = -1.*t44104*t44605;
  t44631 = t44148*t44621;
  t44633 = t44629 + t44630 + t44631;
  t44592 = -1.*t10588;
  t44593 = 1. + t44592;
  t44594 = 0.1575*t44593;
  t44595 = 0.2255*t10588;
  t44624 = -1.*t6007*t44623;
  t44625 = t44594 + t44595 + t44624;
  t44637 = 0.068*t6007;
  t44638 = t10588*t44623;
  t44639 = t44637 + t44638;
  t44645 = t44292*t44633;
  t44649 = -1.*t44625*t10617;
  t44654 = t44645 + t44649;
  t44626 = t44292*t44625;
  t44634 = t44633*t10617;
  t44635 = t44626 + t44634;
  t44642 = t44639*t10549;
  t44656 = t10595*t44654;
  t44657 = t44642 + t44656;
  t44662 = t10595*t44639;
  t44663 = -1.*t10549*t44654;
  t44668 = t44662 + t44663;
  t44346 = t10588*t44312*t10549;
  t44362 = t10595*t44361;
  t44363 = t44346 + t44362;
  t44636 = t10588*t44292*t44635;
  t44675 = -1.*t44635*t44491;
  t44685 = t44635*t44491;
  t44697 = -1.*t44635*t44550;
  t44713 = -1.*t10588*t44292*t44635;
  t44735 = t44635*t44550;
  t44802 = -1.*t6007*t44639;
  t44814 = t10588*t44639*t44312;
  t44768 = t6007*t44639;
  t44776 = -1.*t10588*t44639*t44252;
  t44794 = -1.*t10588*t44639*t44312;
  t44784 = t10588*t44639*t44252;
  t44853 = t44633*t44312;
  t44846 = -1.*t44633*t44357;
  p_output1[0]=t44341*var2[0] + t39317*var2[1] + t44363*var2[2];
  p_output1[1]=(t44367*t44491 - 1.*t44469*t44519)*var2[0] + (t10588*t44292*t44367 - 1.*t44469*t44482)*var2[1] + (t44367*t44550 - 1.*t44469*t44556)*var2[2];
  p_output1[2]=(t44469*t44491 + t44367*t44519)*var2[0] + (t10588*t44292*t44469 + t44367*t44482)*var2[1] + (t44469*t44550 + t44367*t44556)*var2[2];
  p_output1[3]=(t44363*(-1.*t39317*t44657 - 1.*t44482*t44668 + t44713) + t39317*(t44363*t44657 + t44556*t44668 + t44735))*var2[0] + (t44363*(t44341*t44657 + t44519*t44668 + t44685) + t44341*(-1.*t44363*t44657 - 1.*t44556*t44668 + t44697))*var2[1] + (t44341*(t44636 + t39317*t44657 + t44482*t44668) + t39317*(-1.*t44341*t44657 - 1.*t44519*t44668 + t44675))*var2[2];
  p_output1[4]=(t44550*(t10588*t10617*t44654 + t44713 + t44802) + t10588*t44292*(t44361*t44654 + t44735 + t44814))*var2[0] + (t44550*(t44339*t44654 + t44685 + t44784) + t44491*(-1.*t44361*t44654 + t44697 + t44794))*var2[1] + (t44491*(t44636 - 1.*t10588*t10617*t44654 + t44768) + t10588*t44292*(-1.*t44339*t44654 + t44675 + t44776))*var2[2];
  p_output1[5]=(t10588*t44312*(-1.*t10588*t44625 + t44802) + t6007*(t44357*t44633 + t44814 - 1.*t44312*t44625*t6007))*var2[0] + (t10588*t44312*(t44784 + t44853 - 1.*t44252*t44625*t6007) + t10588*t44252*(t44794 + t44846 + t44312*t44625*t6007))*var2[1] + (t10588*t44252*(t10588*t44625 + t44768) + t6007*(-1.*t44312*t44633 + t44776 + t44252*t44625*t6007))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t44252 - 0.2255*t44357)*var2[0] + (t44312*(-1.*t44312*t44623 + t44846) + t44357*(t44252*t44623 + t44853))*var2[1] + 0.068*t44312*var2[2];
  p_output1[10]=(-0.325*t44159 - 1.*t43378*t44605 - 1.*t44159*t44621)*var2[0] + (0.325*t43378 - 1.*t44159*t44605 + t43378*t44621)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
