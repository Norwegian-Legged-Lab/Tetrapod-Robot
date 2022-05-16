/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:04 GMT+02:00
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
  double t571;
  double t19009;
  double t601;
  double t53413;
  double t53420;
  double t52292;
  double t53431;
  double t1762;
  double t53443;
  double t53445;
  double t53450;
  double t45098;
  double t53437;
  double t53465;
  double t53466;
  double t53467;
  double t5511;
  double t51545;
  double t51596;
  double t53578;
  double t53570;
  double t53414;
  double t53432;
  double t53433;
  double t53455;
  double t53457;
  double t53458;
  double t53469;
  double t53470;
  double t53471;
  double t53579;
  double t53581;
  double t53585;
  double t53589;
  double t53592;
  double t53596;
  double t53598;
  double t53602;
  double t53603;
  double t53609;
  double t53611;
  double t53612;
  double t53614;
  double t53616;
  double t53617;
  double t53442;
  double t53459;
  double t53460;
  double t53639;
  double t53641;
  double t53642;
  double t53646;
  double t53649;
  double t53651;
  double t53652;
  double t53654;
  double t53655;
  double t53656;
  double t53657;
  double t53658;
  double t53659;
  double t53660;
  double t53665;
  double t53666;
  double t53643;
  double t53645;
  double t53661;
  double t53663;
  double t53670;
  double t53671;
  double t53672;
  double t53673;
  double t53675;
  double t53676;
  double t53677;
  double t53664;
  double t53667;
  double t53668;
  double t53674;
  double t53678;
  double t53679;
  double t53681;
  double t53682;
  double t53683;
  double t53463;
  double t53472;
  double t53484;
  double t53669;
  double t53692;
  double t53706;
  double t53719;
  double t53732;
  double t53740;
  double t53772;
  double t53776;
  t571 = Cos(var1[4]);
  t19009 = Cos(var1[15]);
  t601 = Cos(var1[5]);
  t53413 = Cos(var1[17]);
  t53420 = Sin(var1[16]);
  t52292 = Cos(var1[16]);
  t53431 = Sin(var1[17]);
  t1762 = Sin(var1[15]);
  t53443 = -1.*t53413*t53420;
  t53445 = t52292*t53431;
  t53450 = t53443 + t53445;
  t45098 = Sin(var1[5]);
  t53437 = Sin(var1[4]);
  t53465 = -1.*t52292*t53413;
  t53466 = -1.*t53420*t53431;
  t53467 = t53465 + t53466;
  t5511 = t601*t1762;
  t51545 = t19009*t45098;
  t51596 = t5511 + t51545;
  t53578 = Cos(var1[3]);
  t53570 = Sin(var1[3]);
  t53414 = t52292*t53413;
  t53432 = t53420*t53431;
  t53433 = t53414 + t53432;
  t53455 = t19009*t601*t53450;
  t53457 = -1.*t1762*t53450*t45098;
  t53458 = t53455 + t53457;
  t53469 = t19009*t601*t53467;
  t53470 = -1.*t1762*t53467*t45098;
  t53471 = t53469 + t53470;
  t53579 = -1.*t19009*t601;
  t53581 = t1762*t45098;
  t53585 = t53579 + t53581;
  t53589 = t601*t1762*t53450;
  t53592 = t19009*t53450*t45098;
  t53596 = t53589 + t53592;
  t53598 = t571*t53433;
  t53602 = -1.*t53437*t53458;
  t53603 = t53598 + t53602;
  t53609 = t601*t1762*t53467;
  t53611 = t19009*t53467*t45098;
  t53612 = t53609 + t53611;
  t53614 = t571*t53450;
  t53616 = -1.*t53437*t53471;
  t53617 = t53614 + t53616;
  t53442 = t53433*t53437;
  t53459 = t571*t53458;
  t53460 = t53442 + t53459;
  t53639 = -1.*t19009;
  t53641 = 1. + t53639;
  t53642 = -0.15121*t53641;
  t53646 = -1.*t52292;
  t53649 = 1. + t53646;
  t53651 = -0.28121*t53649;
  t53652 = -1.*t53413;
  t53654 = 1. + t53652;
  t53655 = -0.50321*t53654;
  t53656 = -0.23321*t53413;
  t53657 = t53655 + t53656;
  t53658 = t52292*t53657;
  t53659 = 0.27*t53420*t53431;
  t53660 = t53651 + t53658 + t53659;
  t53665 = t19009*t53660;
  t53666 = t53642 + t53665;
  t53643 = -0.15121*t19009;
  t53645 = 0.15121*t1762;
  t53661 = t1762*t53660;
  t53663 = t53642 + t53643 + t53645 + t53661;
  t53670 = 0.28121*t53420;
  t53671 = t53657*t53420;
  t53672 = -0.27*t52292*t53431;
  t53673 = t53670 + t53671 + t53672;
  t53675 = t601*t53666;
  t53676 = -1.*t53663*t45098;
  t53677 = t53675 + t53676;
  t53664 = t601*t53663;
  t53667 = t53666*t45098;
  t53668 = t53664 + t53667;
  t53674 = t53673*t53437;
  t53678 = t571*t53677;
  t53679 = t53674 + t53678;
  t53681 = t571*t53673;
  t53682 = -1.*t53437*t53677;
  t53683 = t53681 + t53682;
  t53463 = t53450*t53437;
  t53472 = t571*t53471;
  t53484 = t53463 + t53472;
  t53669 = -1.*t53585*t53668;
  t53692 = t53596*t53668;
  t53706 = t53585*t53668;
  t53719 = -1.*t53612*t53668;
  t53732 = -1.*t53596*t53668;
  t53740 = t53612*t53668;
  t53772 = -1.*t53673*t53433;
  t53776 = t53673*t53450;
  p_output1[0]=t53484*var2[0] + t51596*t571*var2[1] + t53460*var2[2];
  p_output1[1]=(t53578*t53612 - 1.*t53570*t53617)*var2[0] + (t51596*t53437*t53570 + t53578*t53585)*var2[1] + (t53578*t53596 - 1.*t53570*t53603)*var2[2];
  p_output1[2]=(t53570*t53612 + t53578*t53617)*var2[0] + (-1.*t51596*t53437*t53578 + t53570*t53585)*var2[1] + (t53570*t53596 + t53578*t53603)*var2[2];
  p_output1[3]=(t51596*(t53460*t53679 + t53603*t53683 + t53692)*t571 + t53460*(t53669 + t51596*t53437*t53683 - 1.*t51596*t53679*t571))*var2[0] + (t53484*(-1.*t53460*t53679 - 1.*t53603*t53683 + t53732) + t53460*(t53484*t53679 + t53617*t53683 + t53740))*var2[1] + (t51596*(-1.*t53484*t53679 - 1.*t53617*t53683 + t53719)*t571 + t53484*(-1.*t51596*t53437*t53683 + t53706 + t51596*t53679*t571))*var2[2];
  p_output1[4]=(t53596*(t53669 - 1.*t51596*t53677) + t53585*(t53433*t53673 + t53458*t53677 + t53692))*var2[0] + (t53612*(-1.*t53458*t53677 + t53732 + t53772) + t53596*(t53471*t53677 + t53740 + t53776))*var2[1] + (t53612*(t51596*t53677 + t53706) + t53585*(-1.*t53450*t53673 - 1.*t53471*t53677 + t53719))*var2[2];
  p_output1[5]=t53433*(t19009*t53663 - 1.*t1762*t53666)*var2[0] + (t53450*(-1.*t1762*t53450*t53663 - 1.*t19009*t53450*t53666 + t53772) + t53433*(t1762*t53467*t53663 + t19009*t53467*t53666 + t53776))*var2[1] + t53450*(-1.*t19009*t53663 + t1762*t53666)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t53433 - 0.15121*t53467)*var2[0] + (-0.15121 + t53450*(-1.*t53450*t53660 + t53772) + t53433*(t53467*t53660 + t53776))*var2[1];
  p_output1[16]=(0.28121*t53431 - 0.27*t53413*t53431 + t53431*t53657)*var2[0] + (0.28121*t53413 + 0.27*Power(t53431,2) + t53413*t53657)*var2[2];
  p_output1[17]=-0.27*var2[2];
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
