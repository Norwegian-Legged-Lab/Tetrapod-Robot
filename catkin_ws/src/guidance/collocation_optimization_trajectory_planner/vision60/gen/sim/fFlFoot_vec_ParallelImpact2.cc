/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:47 GMT+02:00
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
  double t22800;
  double t26469;
  double t22294;
  double t26462;
  double t26470;
  double t26538;
  double t26540;
  double t26541;
  double t26547;
  double t26551;
  double t26552;
  double t26553;
  double t26558;
  double t26560;
  double t26561;
  double t26557;
  double t26578;
  double t26580;
  double t26556;
  double t26562;
  double t26563;
  double t26568;
  double t26569;
  double t26570;
  double t26571;
  double t26572;
  double t26573;
  double t26581;
  double t26582;
  double t26583;
  double t26588;
  double t26589;
  double t26591;
  double t26593;
  double t26594;
  double t26595;
  double t26601;
  double t26602;
  double t26603;
  double t26606;
  double t26607;
  double t26608;
  double t26634;
  double t26635;
  double t26636;
  double t26639;
  double t26640;
  double t26641;
  double t26643;
  double t26644;
  double t26645;
  double t26633;
  double t26637;
  double t26646;
  double t26647;
  double t26468;
  double t26471;
  double t26472;
  double t26628;
  double t26629;
  double t26630;
  double t26631;
  double t26648;
  double t26649;
  double t26650;
  double t26651;
  double t26652;
  double t26653;
  double t26654;
  double t26655;
  double t26656;
  double t26657;
  double t26658;
  double t26660;
  double t26661;
  double t26662;
  double t26554;
  double t26564;
  double t26565;
  double t26670;
  double t26671;
  double t26672;
  double t26666;
  double t26667;
  double t26668;
  double t26659;
  double t26663;
  double t26664;
  double t26567;
  double t26574;
  double t26575;
  double t26673;
  double t26676;
  double t26683;
  double t26688;
  double t26697;
  double t26700;
  double t26729;
  double t26732;
  double t26709;
  double t26712;
  double t26722;
  double t26718;
  double t26762;
  double t26757;
  t22800 = Cos(var1[6]);
  t26469 = Sin(var1[4]);
  t22294 = Cos(var1[4]);
  t26462 = Sin(var1[5]);
  t26470 = Sin(var1[6]);
  t26538 = Cos(var1[8]);
  t26540 = Sin(var1[7]);
  t26541 = t26538*t26540;
  t26547 = Cos(var1[7]);
  t26551 = Sin(var1[8]);
  t26552 = -1.*t26547*t26551;
  t26553 = t26541 + t26552;
  t26558 = t26547*t26538;
  t26560 = t26540*t26551;
  t26561 = t26558 + t26560;
  t26557 = Cos(var1[5]);
  t26578 = Cos(var1[3]);
  t26580 = Sin(var1[3]);
  t26556 = t26462*t26470*t26553;
  t26562 = t26557*t26561;
  t26563 = t26556 + t26562;
  t26568 = -1.*t26538*t26540;
  t26569 = t26547*t26551;
  t26570 = t26568 + t26569;
  t26571 = t26557*t26570;
  t26572 = t26462*t26470*t26561;
  t26573 = t26571 + t26572;
  t26581 = t22800*t26469*t26462;
  t26582 = t22294*t26470;
  t26583 = t26581 + t26582;
  t26588 = -1.*t26557*t26470*t26553;
  t26589 = t26462*t26561;
  t26591 = t26588 + t26589;
  t26593 = t22294*t22800*t26553;
  t26594 = -1.*t26469*t26563;
  t26595 = t26593 + t26594;
  t26601 = t26462*t26570;
  t26602 = -1.*t26557*t26470*t26561;
  t26603 = t26601 + t26602;
  t26606 = t22294*t22800*t26561;
  t26607 = -1.*t26469*t26573;
  t26608 = t26606 + t26607;
  t26634 = -0.0641*t26538;
  t26635 = -0.28*t26551;
  t26636 = t26634 + t26635;
  t26639 = -1.*t26538;
  t26640 = 1. + t26639;
  t26641 = 0.075*t26640;
  t26643 = 0.355*t26538;
  t26644 = -0.0641*t26551;
  t26645 = t26641 + t26643 + t26644;
  t26633 = -0.325*t26540;
  t26637 = t26547*t26636;
  t26646 = t26540*t26645;
  t26647 = t26633 + t26637 + t26646;
  t26468 = -1.*t22294*t22800*t26462;
  t26471 = t26469*t26470;
  t26472 = t26468 + t26471;
  t26628 = -1.*t22800;
  t26629 = 1. + t26628;
  t26630 = 0.1575*t26629;
  t26631 = 0.2255*t22800;
  t26648 = -1.*t26470*t26647;
  t26649 = t26630 + t26631 + t26648;
  t26650 = -1.*t26462*t26649;
  t26651 = -1.*t26547;
  t26652 = 1. + t26651;
  t26653 = 0.325*t26652;
  t26654 = -1.*t26540*t26636;
  t26655 = t26547*t26645;
  t26656 = t26653 + t26654 + t26655;
  t26657 = t26557*t26656;
  t26658 = t26650 + t26657;
  t26660 = 0.068*t26470;
  t26661 = t22800*t26647;
  t26662 = t26660 + t26661;
  t26554 = t22800*t26469*t26553;
  t26564 = t22294*t26563;
  t26565 = t26554 + t26564;
  t26670 = t26557*t26649;
  t26671 = t26462*t26656;
  t26672 = t26670 + t26671;
  t26666 = t22294*t26658;
  t26667 = t26469*t26662;
  t26668 = t26666 + t26667;
  t26659 = -1.*t26469*t26658;
  t26663 = t22294*t26662;
  t26664 = t26659 + t26663;
  t26567 = t22800*t26469*t26561;
  t26574 = t22294*t26573;
  t26575 = t26567 + t26574;
  t26673 = t26557*t22800*t26672;
  t26676 = -1.*t26672*t26591;
  t26683 = t26672*t26591;
  t26688 = -1.*t26672*t26603;
  t26697 = -1.*t26557*t22800*t26672;
  t26700 = t26672*t26603;
  t26729 = -1.*t26470*t26662;
  t26732 = t22800*t26662*t26561;
  t26709 = t26470*t26662;
  t26712 = -1.*t22800*t26662*t26553;
  t26722 = -1.*t22800*t26662*t26561;
  t26718 = t22800*t26662*t26553;
  t26762 = t26656*t26561;
  t26757 = -1.*t26656*t26570;
  p_output1[0]=t26565*var2[0] + t26472*var2[1] + t26575*var2[2];
  p_output1[1]=(t26578*t26591 - 1.*t26580*t26595)*var2[0] + (t22800*t26557*t26578 - 1.*t26580*t26583)*var2[1] + (t26578*t26603 - 1.*t26580*t26608)*var2[2];
  p_output1[2]=(t26580*t26591 + t26578*t26595)*var2[0] + (t22800*t26557*t26580 + t26578*t26583)*var2[1] + (t26580*t26603 + t26578*t26608)*var2[2];
  p_output1[3]=(t26575*(-1.*t26583*t26664 - 1.*t26472*t26668 + t26697) + t26472*(t26608*t26664 + t26575*t26668 + t26700))*var2[0] + (t26575*(t26595*t26664 + t26565*t26668 + t26683) + t26565*(-1.*t26608*t26664 - 1.*t26575*t26668 + t26688))*var2[1] + (t26565*(t26583*t26664 + t26472*t26668 + t26673) + t26472*(-1.*t26595*t26664 - 1.*t26565*t26668 + t26676))*var2[2];
  p_output1[4]=(t26603*(t22800*t26462*t26658 + t26697 + t26729) + t22800*t26557*(t26573*t26658 + t26700 + t26732))*var2[0] + (t26603*(t26563*t26658 + t26683 + t26718) + t26591*(-1.*t26573*t26658 + t26688 + t26722))*var2[1] + (t26591*(-1.*t22800*t26462*t26658 + t26673 + t26709) + t22800*t26557*(-1.*t26563*t26658 + t26676 + t26712))*var2[2];
  p_output1[5]=(t22800*t26561*(-1.*t22800*t26649 + t26729) + t26470*(-1.*t26470*t26561*t26649 + t26570*t26656 + t26732))*var2[0] + (t22800*t26553*(t26470*t26561*t26649 + t26722 + t26757) + t22800*t26561*(-1.*t26470*t26553*t26649 + t26718 + t26762))*var2[1] + (t22800*t26553*(t22800*t26649 + t26709) + t26470*(t26470*t26553*t26649 - 1.*t26561*t26656 + t26712))*var2[2];
  p_output1[6]=(-0.1575*t26553 - 0.2255*t26570)*var2[0] + (t26561*(-1.*t26561*t26647 + t26757) + t26570*(t26553*t26647 + t26762))*var2[1] + 0.068*t26561*var2[2];
  p_output1[7]=(0.325*t26551 - 1.*t26538*t26636 - 1.*t26551*t26645)*var2[0] + (-0.325*t26538 - 1.*t26551*t26636 + t26538*t26645)*var2[2];
  p_output1[8]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
