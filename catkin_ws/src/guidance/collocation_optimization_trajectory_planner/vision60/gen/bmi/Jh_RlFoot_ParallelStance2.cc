/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:41 GMT+02:00
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
static void output1(double *p_output1,const double *var1)
{
  double t7558;
  double t7540;
  double t7547;
  double t7560;
  double t7557;
  double t7561;
  double t7570;
  double t7673;
  double t7587;
  double t3319;
  double t7667;
  double t7674;
  double t7669;
  double t7670;
  double t7671;
  double t7668;
  double t7672;
  double t7675;
  double t7676;
  double t7727;
  double t7732;
  double t7702;
  double t7703;
  double t7707;
  double t7711;
  double t7715;
  double t7720;
  double t7728;
  double t7729;
  double t7730;
  double t7733;
  double t7734;
  double t7741;
  double t7752;
  double t7753;
  double t7767;
  double t7777;
  double t7778;
  double t7779;
  double t7781;
  double t7782;
  double t7783;
  double t7701;
  double t7725;
  double t7726;
  double t7800;
  double t7802;
  double t7804;
  double t7809;
  double t7813;
  double t7815;
  double t7816;
  double t7818;
  double t7819;
  double t7691;
  double t7699;
  double t7700;
  double t7799;
  double t7805;
  double t7820;
  double t7821;
  double t7825;
  double t7826;
  double t7827;
  double t7828;
  double t7829;
  double t7830;
  double t7795;
  double t7796;
  double t7797;
  double t7798;
  double t7822;
  double t7823;
  double t7834;
  double t7835;
  double t7836;
  double t7838;
  double t7839;
  double t7840;
  double t7824;
  double t7831;
  double t7832;
  double t7837;
  double t7841;
  double t7842;
  double t7844;
  double t7845;
  double t7846;
  double t7637;
  double t7677;
  double t7686;
  double t7833;
  double t7854;
  double t7865;
  double t7870;
  double t7876;
  double t7881;
  double t7890;
  double t7897;
  double t7915;
  double t7907;
  double t7924;
  double t7928;
  double t7967;
  double t7956;
  t7558 = Cos(var1[10]);
  t7540 = Cos(var1[11]);
  t7547 = Sin(var1[10]);
  t7560 = Sin(var1[11]);
  t7557 = t7540*t7547;
  t7561 = -1.*t7558*t7560;
  t7570 = t7557 + t7561;
  t7673 = Sin(var1[9]);
  t7587 = Sin(var1[4]);
  t3319 = Cos(var1[9]);
  t7667 = Cos(var1[4]);
  t7674 = Sin(var1[5]);
  t7669 = t7558*t7540;
  t7670 = t7547*t7560;
  t7671 = t7669 + t7670;
  t7668 = Cos(var1[5]);
  t7672 = t7668*t7671;
  t7675 = t7673*t7570*t7674;
  t7676 = t7672 + t7675;
  t7727 = Cos(var1[3]);
  t7732 = Sin(var1[3]);
  t7702 = -1.*t7540*t7547;
  t7703 = t7558*t7560;
  t7707 = t7702 + t7703;
  t7711 = t7668*t7707;
  t7715 = t7673*t7671*t7674;
  t7720 = t7711 + t7715;
  t7728 = -1.*t7668*t7673*t7570;
  t7729 = t7671*t7674;
  t7730 = t7728 + t7729;
  t7733 = t3319*t7667*t7570;
  t7734 = -1.*t7587*t7676;
  t7741 = t7733 + t7734;
  t7752 = t7667*t7673;
  t7753 = t3319*t7587*t7674;
  t7767 = t7752 + t7753;
  t7777 = -1.*t7668*t7673*t7671;
  t7778 = t7707*t7674;
  t7779 = t7777 + t7778;
  t7781 = t3319*t7667*t7671;
  t7782 = -1.*t7587*t7720;
  t7783 = t7781 + t7782;
  t7701 = t3319*t7671*t7587;
  t7725 = t7667*t7720;
  t7726 = t7701 + t7725;
  t7800 = -0.0641*t7540;
  t7802 = -0.28*t7560;
  t7804 = t7800 + t7802;
  t7809 = -1.*t7540;
  t7813 = 1. + t7809;
  t7815 = -0.575*t7813;
  t7816 = -0.295*t7540;
  t7818 = -0.0641*t7560;
  t7819 = t7815 + t7816 + t7818;
  t7691 = t7673*t7587;
  t7699 = -1.*t3319*t7667*t7674;
  t7700 = t7691 + t7699;
  t7799 = 0.325*t7547;
  t7805 = t7558*t7804;
  t7820 = t7547*t7819;
  t7821 = t7799 + t7805 + t7820;
  t7825 = -1.*t7558;
  t7826 = 1. + t7825;
  t7827 = -0.325*t7826;
  t7828 = -1.*t7547*t7804;
  t7829 = t7558*t7819;
  t7830 = t7827 + t7828 + t7829;
  t7795 = -1.*t3319;
  t7796 = 1. + t7795;
  t7797 = 0.1575*t7796;
  t7798 = 0.2255*t3319;
  t7822 = -1.*t7673*t7821;
  t7823 = t7797 + t7798 + t7822;
  t7834 = 0.068*t7673;
  t7835 = t3319*t7821;
  t7836 = t7834 + t7835;
  t7838 = t7668*t7830;
  t7839 = -1.*t7823*t7674;
  t7840 = t7838 + t7839;
  t7824 = t7668*t7823;
  t7831 = t7830*t7674;
  t7832 = t7824 + t7831;
  t7837 = t7836*t7587;
  t7841 = t7667*t7840;
  t7842 = t7837 + t7841;
  t7844 = t7667*t7836;
  t7845 = -1.*t7587*t7840;
  t7846 = t7844 + t7845;
  t7637 = t3319*t7570*t7587;
  t7677 = t7667*t7676;
  t7686 = t7637 + t7677;
  t7833 = -1.*t3319*t7668*t7832;
  t7854 = t7832*t7779;
  t7865 = t7832*t7730;
  t7870 = -1.*t7832*t7779;
  t7876 = t3319*t7668*t7832;
  t7881 = -1.*t7832*t7730;
  t7890 = -1.*t7673*t7836;
  t7897 = t3319*t7836*t7671;
  t7915 = -1.*t3319*t7836*t7671;
  t7907 = t3319*t7836*t7570;
  t7924 = t7673*t7836;
  t7928 = -1.*t3319*t7836*t7570;
  t7967 = t7830*t7671;
  t7956 = -1.*t7830*t7707;
  p_output1[0]=t7686;
  p_output1[1]=t7700;
  p_output1[2]=t7726;
  p_output1[3]=t7727*t7730 - 1.*t7732*t7741;
  p_output1[4]=t3319*t7668*t7727 - 1.*t7732*t7767;
  p_output1[5]=t7727*t7779 - 1.*t7732*t7783;
  p_output1[6]=t7730*t7732 + t7727*t7741;
  p_output1[7]=t3319*t7668*t7732 + t7727*t7767;
  p_output1[8]=t7732*t7779 + t7727*t7783;
  p_output1[9]=t7726*(t7833 - 1.*t7700*t7842 - 1.*t7767*t7846) + t7700*(t7726*t7842 + t7783*t7846 + t7854);
  p_output1[10]=t7726*(t7686*t7842 + t7741*t7846 + t7865) + t7686*(-1.*t7726*t7842 - 1.*t7783*t7846 + t7870);
  p_output1[11]=t7686*(t7700*t7842 + t7767*t7846 + t7876) + t7700*(-1.*t7686*t7842 - 1.*t7741*t7846 + t7881);
  p_output1[12]=t7779*(t7833 + t3319*t7674*t7840 + t7890) + t3319*t7668*(t7720*t7840 + t7854 + t7897);
  p_output1[13]=t7779*(t7676*t7840 + t7865 + t7907) + t7730*(-1.*t7720*t7840 + t7870 + t7915);
  p_output1[14]=t7730*(-1.*t3319*t7674*t7840 + t7876 + t7924) + t3319*t7668*(-1.*t7676*t7840 + t7881 + t7928);
  p_output1[15]=t3319*t7671*(-1.*t3319*t7823 + t7890) + t7673*(-1.*t7671*t7673*t7823 + t7707*t7830 + t7897);
  p_output1[16]=t3319*t7570*(t7671*t7673*t7823 + t7915 + t7956) + t3319*t7671*(-1.*t7570*t7673*t7823 + t7907 + t7967);
  p_output1[17]=t3319*t7570*(t3319*t7823 + t7924) + t7673*(t7570*t7673*t7823 - 1.*t7671*t7830 + t7928);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.1575*t7570 - 0.2255*t7707;
  p_output1[28]=t7671*(-1.*t7671*t7821 + t7956) + t7707*(t7570*t7821 + t7967);
  p_output1[29]=0.068*t7671;
  p_output1[30]=-0.325*t7560 - 1.*t7540*t7804 - 1.*t7560*t7819;
  p_output1[31]=0;
  p_output1[32]=0.325*t7540 - 1.*t7560*t7804 + t7540*t7819;
  p_output1[33]=-0.0641;
  p_output1[34]=0;
  p_output1[35]=-0.28;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
