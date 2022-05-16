/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:41:32 GMT+02:00
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
  double t1775;
  double t41372;
  double t41154;
  double t51053;
  double t51397;
  double t50980;
  double t51603;
  double t41316;
  double t54432;
  double t54461;
  double t54462;
  double t43696;
  double t52144;
  double t54518;
  double t54530;
  double t54544;
  double t41361;
  double t43697;
  double t43708;
  double t54558;
  double t54555;
  double t51054;
  double t52097;
  double t52133;
  double t54465;
  double t54473;
  double t54475;
  double t54546;
  double t54547;
  double t54548;
  double t54559;
  double t54560;
  double t54561;
  double t54611;
  double t54615;
  double t54616;
  double t54619;
  double t54620;
  double t54621;
  double t54627;
  double t54629;
  double t54630;
  double t54642;
  double t54646;
  double t54647;
  double t52490;
  double t54476;
  double t54485;
  double t54687;
  double t54688;
  double t54693;
  double t54694;
  double t54695;
  double t54697;
  double t54699;
  double t54700;
  double t54701;
  double t54702;
  double t54703;
  double t54704;
  double t54706;
  double t54711;
  double t54712;
  double t54713;
  double t54689;
  double t54690;
  double t54691;
  double t54707;
  double t54708;
  double t54717;
  double t54718;
  double t54719;
  double t54720;
  double t54723;
  double t54724;
  double t54725;
  double t54710;
  double t54714;
  double t54715;
  double t54721;
  double t54726;
  double t54728;
  double t54731;
  double t54732;
  double t54733;
  double t54507;
  double t54549;
  double t54552;
  double t54716;
  double t54737;
  double t54744;
  double t54749;
  double t54756;
  double t54761;
  double t54789;
  double t54793;
  t1775 = Cos(var1[4]);
  t41372 = Cos(var1[9]);
  t41154 = Cos(var1[5]);
  t51053 = Cos(var1[11]);
  t51397 = Sin(var1[10]);
  t50980 = Cos(var1[10]);
  t51603 = Sin(var1[11]);
  t41316 = Sin(var1[9]);
  t54432 = -1.*t51053*t51397;
  t54461 = t50980*t51603;
  t54462 = t54432 + t54461;
  t43696 = Sin(var1[5]);
  t52144 = Sin(var1[4]);
  t54518 = -1.*t50980*t51053;
  t54530 = -1.*t51397*t51603;
  t54544 = t54518 + t54530;
  t41361 = t41154*t41316;
  t43697 = t41372*t43696;
  t43708 = t41361 + t43697;
  t54558 = Cos(var1[3]);
  t54555 = Sin(var1[3]);
  t51054 = t50980*t51053;
  t52097 = t51397*t51603;
  t52133 = t51054 + t52097;
  t54465 = t41372*t41154*t54462;
  t54473 = -1.*t41316*t54462*t43696;
  t54475 = t54465 + t54473;
  t54546 = t41372*t41154*t54544;
  t54547 = -1.*t41316*t54544*t43696;
  t54548 = t54546 + t54547;
  t54559 = -1.*t41372*t41154;
  t54560 = t41316*t43696;
  t54561 = t54559 + t54560;
  t54611 = t41154*t41316*t54462;
  t54615 = t41372*t54462*t43696;
  t54616 = t54611 + t54615;
  t54619 = t1775*t52133;
  t54620 = -1.*t52144*t54475;
  t54621 = t54619 + t54620;
  t54627 = t41154*t41316*t54544;
  t54629 = t41372*t54544*t43696;
  t54630 = t54627 + t54629;
  t54642 = t1775*t54462;
  t54646 = -1.*t52144*t54548;
  t54647 = t54642 + t54646;
  t52490 = t52133*t52144;
  t54476 = t1775*t54475;
  t54485 = t52490 + t54476;
  t54687 = -1.*t41372;
  t54688 = 1. + t54687;
  t54693 = -1.*t50980;
  t54694 = 1. + t54693;
  t54695 = -0.28121*t54694;
  t54697 = -1.*t51053;
  t54699 = 1. + t54697;
  t54700 = -0.50321*t54699;
  t54701 = -0.23321*t51053;
  t54702 = t54700 + t54701;
  t54703 = t50980*t54702;
  t54704 = 0.27*t51397*t51603;
  t54706 = t54695 + t54703 + t54704;
  t54711 = -0.15121*t54688;
  t54712 = t41372*t54706;
  t54713 = t54711 + t54712;
  t54689 = 0.15121*t54688;
  t54690 = 0.15121*t41372;
  t54691 = 0.15121*t41316;
  t54707 = t41316*t54706;
  t54708 = t54689 + t54690 + t54691 + t54707;
  t54717 = 0.28121*t51397;
  t54718 = t54702*t51397;
  t54719 = -0.27*t50980*t51603;
  t54720 = t54717 + t54718 + t54719;
  t54723 = t41154*t54713;
  t54724 = -1.*t54708*t43696;
  t54725 = t54723 + t54724;
  t54710 = t41154*t54708;
  t54714 = t54713*t43696;
  t54715 = t54710 + t54714;
  t54721 = t54720*t52144;
  t54726 = t1775*t54725;
  t54728 = t54721 + t54726;
  t54731 = t1775*t54720;
  t54732 = -1.*t52144*t54725;
  t54733 = t54731 + t54732;
  t54507 = t54462*t52144;
  t54549 = t1775*t54548;
  t54552 = t54507 + t54549;
  t54716 = -1.*t54561*t54715;
  t54737 = t54616*t54715;
  t54744 = t54561*t54715;
  t54749 = -1.*t54630*t54715;
  t54756 = -1.*t54616*t54715;
  t54761 = t54630*t54715;
  t54789 = -1.*t54720*t52133;
  t54793 = t54720*t54462;
  p_output1[0]=t54552*var2[0] + t1775*t43708*var2[1] + t54485*var2[2];
  p_output1[1]=(t54558*t54630 - 1.*t54555*t54647)*var2[0] + (t43708*t52144*t54555 + t54558*t54561)*var2[1] + (t54558*t54616 - 1.*t54555*t54621)*var2[2];
  p_output1[2]=(t54555*t54630 + t54558*t54647)*var2[0] + (-1.*t43708*t52144*t54558 + t54555*t54561)*var2[1] + (t54555*t54616 + t54558*t54621)*var2[2];
  p_output1[3]=(t54485*(t54716 - 1.*t1775*t43708*t54728 + t43708*t52144*t54733) + t1775*t43708*(t54485*t54728 + t54621*t54733 + t54737))*var2[0] + (t54552*(-1.*t54485*t54728 - 1.*t54621*t54733 + t54756) + t54485*(t54552*t54728 + t54647*t54733 + t54761))*var2[1] + (t54552*(t1775*t43708*t54728 - 1.*t43708*t52144*t54733 + t54744) + t1775*t43708*(-1.*t54552*t54728 - 1.*t54647*t54733 + t54749))*var2[2];
  p_output1[4]=(t54616*(t54716 - 1.*t43708*t54725) + t54561*(t52133*t54720 + t54475*t54725 + t54737))*var2[0] + (t54630*(-1.*t54475*t54725 + t54756 + t54789) + t54616*(t54548*t54725 + t54761 + t54793))*var2[1] + (t54630*(t43708*t54725 + t54744) + t54561*(-1.*t54462*t54720 - 1.*t54548*t54725 + t54749))*var2[2];
  p_output1[5]=t52133*(t41372*t54708 - 1.*t41316*t54713)*var2[0] + (t54462*(-1.*t41316*t54462*t54708 - 1.*t41372*t54462*t54713 + t54789) + t52133*(t41316*t54544*t54708 + t41372*t54544*t54713 + t54793))*var2[1] + t54462*(-1.*t41372*t54708 + t41316*t54713)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t52133 + 0.15121*t54544)*var2[0] + (-0.15121 + t54462*(-1.*t54462*t54706 + t54789) + t52133*(t54544*t54706 + t54793))*var2[1];
  p_output1[10]=(0.28121*t51603 - 0.27*t51053*t51603 + t51603*t54702)*var2[0] + (0.28121*t51053 + 0.27*Power(t51603,2) + t51053*t54702)*var2[2];
  p_output1[11]=-0.27*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
