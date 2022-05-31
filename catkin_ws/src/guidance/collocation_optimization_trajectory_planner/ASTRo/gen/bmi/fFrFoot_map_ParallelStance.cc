/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:34 GMT+02:00
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
  double t16524;
  double t16512;
  double t16515;
  double t16532;
  double t16583;
  double t16596;
  double t16599;
  double t16566;
  double t16615;
  double t16565;
  double t16626;
  double t16563;
  double t16517;
  double t16533;
  double t16535;
  double t16538;
  double t16601;
  double t16627;
  double t16628;
  double t16645;
  double t16636;
  double t16637;
  double t16638;
  double t16634;
  double t16650;
  double t16664;
  double t16665;
  double t16686;
  double t16687;
  double t16688;
  double t16727;
  double t16728;
  double t16732;
  double t16733;
  double t16734;
  double t16735;
  double t16739;
  double t16740;
  double t16741;
  double t16742;
  double t16743;
  double t16744;
  double t16745;
  double t16751;
  double t16752;
  double t16760;
  double t16729;
  double t16730;
  double t16731;
  double t16746;
  double t16747;
  double t16786;
  double t16793;
  double t16814;
  double t16817;
  double t16818;
  double t16821;
  double t16822;
  double t16825;
  double t16826;
  double t16827;
  double t16750;
  double t16761;
  double t16762;
  double t16685;
  double t16689;
  double t16693;
  double t16697;
  double t16698;
  double t16700;
  double t16823;
  double t16828;
  double t16830;
  double t16832;
  double t16833;
  double t16835;
  double t16840;
  double t16841;
  double t16844;
  double t16721;
  double t16725;
  double t16726;
  double t16785;
  double t16845;
  double t16562;
  double t16629;
  double t16633;
  double t16851;
  double t16853;
  double t16854;
  double t16962;
  double t16968;
  double t16974;
  double t16978;
  double t17046;
  double t17051;
  t16524 = Cos(var1[13]);
  t16512 = Cos(var1[14]);
  t16515 = Sin(var1[13]);
  t16532 = Sin(var1[14]);
  t16583 = t16524*t16512;
  t16596 = t16515*t16532;
  t16599 = t16583 + t16596;
  t16566 = Cos(var1[5]);
  t16615 = Sin(var1[12]);
  t16565 = Cos(var1[12]);
  t16626 = Sin(var1[5]);
  t16563 = Cos(var1[4]);
  t16517 = -1.*t16512*t16515;
  t16533 = t16524*t16532;
  t16535 = t16517 + t16533;
  t16538 = Sin(var1[4]);
  t16601 = t16565*t16566*t16599;
  t16627 = -1.*t16615*t16599*t16626;
  t16628 = t16601 + t16627;
  t16645 = Sin(var1[3]);
  t16636 = t16566*t16615*t16599;
  t16637 = t16565*t16599*t16626;
  t16638 = t16636 + t16637;
  t16634 = Cos(var1[3]);
  t16650 = t16563*t16535;
  t16664 = -1.*t16538*t16628;
  t16665 = t16650 + t16664;
  t16686 = t16512*t16515;
  t16687 = -1.*t16524*t16532;
  t16688 = t16686 + t16687;
  t16727 = -1.*t16565;
  t16728 = 1. + t16727;
  t16732 = -1.*t16524;
  t16733 = 1. + t16732;
  t16734 = 0.28121*t16733;
  t16735 = -1.*t16512;
  t16739 = 1. + t16735;
  t16740 = 0.50321*t16739;
  t16741 = 0.19821*t16512;
  t16742 = t16740 + t16741;
  t16743 = t16524*t16742;
  t16744 = -0.305*t16515*t16532;
  t16745 = t16734 + t16743 + t16744;
  t16751 = 0.15121*t16728;
  t16752 = t16565*t16745;
  t16760 = t16751 + t16752;
  t16729 = -0.15121*t16728;
  t16730 = -0.15121*t16565;
  t16731 = -0.15121*t16615;
  t16746 = t16615*t16745;
  t16747 = t16729 + t16730 + t16731 + t16746;
  t16786 = -1.*t16566*t16615;
  t16793 = -1.*t16565*t16626;
  t16814 = t16786 + t16793;
  t16817 = 0.28121*t16515;
  t16818 = -1.*t16742*t16515;
  t16821 = -0.305*t16524*t16532;
  t16822 = t16817 + t16818 + t16821;
  t16825 = t16566*t16760;
  t16826 = -1.*t16747*t16626;
  t16827 = t16825 + t16826;
  t16750 = t16566*t16747;
  t16761 = t16760*t16626;
  t16762 = t16750 + t16761;
  t16685 = t16599*t16538;
  t16689 = t16565*t16566*t16688;
  t16693 = -1.*t16615*t16688*t16626;
  t16697 = t16689 + t16693;
  t16698 = t16563*t16697;
  t16700 = t16685 + t16698;
  t16823 = t16822*t16538;
  t16828 = t16563*t16827;
  t16830 = t16823 + t16828;
  t16832 = t16563*t16822;
  t16833 = -1.*t16538*t16827;
  t16835 = t16832 + t16833;
  t16840 = t16566*t16615*t16688;
  t16841 = t16565*t16688*t16626;
  t16844 = t16840 + t16841;
  t16721 = t16565*t16566;
  t16725 = -1.*t16615*t16626;
  t16726 = t16721 + t16725;
  t16785 = -1.*t16726*t16762;
  t16845 = t16844*t16762;
  t16562 = t16535*t16538;
  t16629 = t16563*t16628;
  t16633 = t16562 + t16629;
  t16851 = t16563*t16599;
  t16853 = -1.*t16538*t16697;
  t16854 = t16851 + t16853;
  t16962 = -1.*t16844*t16762;
  t16968 = t16638*t16762;
  t16974 = -1.*t16822*t16599;
  t16978 = t16822*t16535;
  t17046 = t16726*t16762;
  t17051 = -1.*t16638*t16762;
  p_output1[0]=t16633;
  p_output1[1]=t16634*t16638 - 1.*t16645*t16665;
  p_output1[2]=t16638*t16645 + t16634*t16665;
  p_output1[3]=t16700*(t16785 - 1.*t16563*t16814*t16830 + t16538*t16814*t16835) + t16563*t16814*(t16700*t16830 + t16845 + t16835*t16854);
  p_output1[4]=(t16785 - 1.*t16814*t16827)*t16844 + t16726*(t16599*t16822 + t16697*t16827 + t16845);
  p_output1[5]=t16599*(-1.*t16565*t16747 + t16615*t16760);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t16532 - 0.305*t16512*t16532 - 1.*t16532*t16742;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t16563*t16814;
  p_output1[19]=t16634*t16726 + t16538*t16645*t16814;
  p_output1[20]=t16645*t16726 - 1.*t16538*t16634*t16814;
  p_output1[21]=t16633*(-1.*t16700*t16830 - 1.*t16835*t16854 + t16962) + t16700*(t16633*t16830 + t16665*t16835 + t16968);
  p_output1[22]=t16638*(-1.*t16697*t16827 + t16962 + t16974) + t16844*(t16628*t16827 + t16968 + t16978);
  p_output1[23]=t16535*(-1.*t16615*t16688*t16747 - 1.*t16565*t16688*t16760 + t16974) + t16599*(t16599*t16615*t16747 + t16565*t16599*t16760 + t16978);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t16535*(-1.*t16688*t16745 + t16974) + t16599*(t16599*t16745 + t16978);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t16700;
  p_output1[37]=t16634*t16844 - 1.*t16645*t16854;
  p_output1[38]=t16645*t16844 + t16634*t16854;
  p_output1[39]=t16633*(t16563*t16814*t16830 - 1.*t16538*t16814*t16835 + t17046) + t16563*t16814*(-1.*t16633*t16830 - 1.*t16665*t16835 + t17051);
  p_output1[40]=t16638*(t16814*t16827 + t17046) + t16726*(-1.*t16535*t16822 - 1.*t16628*t16827 + t17051);
  p_output1[41]=t16535*(t16565*t16747 - 1.*t16615*t16760);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t16535 - 0.15121*t16688;
  p_output1[49]=0.28121*t16512 + 0.305*Power(t16532,2) - 1.*t16512*t16742;
  p_output1[50]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
