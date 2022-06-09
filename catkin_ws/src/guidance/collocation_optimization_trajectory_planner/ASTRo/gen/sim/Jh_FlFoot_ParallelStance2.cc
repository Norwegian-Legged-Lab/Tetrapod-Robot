/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:01 GMT+02:00
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
  double t16576;
  double t16547;
  double t16564;
  double t16581;
  double t16667;
  double t16668;
  double t16670;
  double t16657;
  double t16666;
  double t16672;
  double t16665;
  double t16681;
  double t3725;
  double t16708;
  double t16711;
  double t16712;
  double t16569;
  double t16583;
  double t16593;
  double t16671;
  double t16687;
  double t16688;
  double t16734;
  double t16694;
  double t16698;
  double t16699;
  double t16726;
  double t16713;
  double t16714;
  double t16715;
  double t16727;
  double t16728;
  double t16729;
  double t16738;
  double t16742;
  double t16743;
  double t16749;
  double t16750;
  double t16751;
  double t16756;
  double t16757;
  double t16758;
  double t16760;
  double t16762;
  double t16763;
  double t16707;
  double t16720;
  double t16725;
  double t16780;
  double t16781;
  double t16782;
  double t16783;
  double t16784;
  double t16785;
  double t16786;
  double t16787;
  double t16788;
  double t16789;
  double t16790;
  double t16791;
  double t16792;
  double t16793;
  double t16794;
  double t16795;
  double t16798;
  double t16799;
  double t16800;
  double t16802;
  double t16807;
  double t16808;
  double t16809;
  double t16810;
  double t16812;
  double t16813;
  double t16814;
  double t16797;
  double t16804;
  double t16805;
  double t16811;
  double t16816;
  double t16817;
  double t16819;
  double t16820;
  double t16821;
  double t16596;
  double t16690;
  double t16693;
  double t16806;
  double t16825;
  double t16833;
  double t16838;
  double t16848;
  double t16859;
  double t16877;
  double t16881;
  t16576 = Cos(var1[7]);
  t16547 = Cos(var1[8]);
  t16564 = Sin(var1[7]);
  t16581 = Sin(var1[8]);
  t16667 = t16576*t16547;
  t16668 = t16564*t16581;
  t16670 = t16667 + t16668;
  t16657 = Cos(var1[4]);
  t16666 = Cos(var1[6]);
  t16672 = Sin(var1[5]);
  t16665 = Cos(var1[5]);
  t16681 = Sin(var1[6]);
  t3725 = Sin(var1[4]);
  t16708 = t16547*t16564;
  t16711 = -1.*t16576*t16581;
  t16712 = t16708 + t16711;
  t16569 = -1.*t16547*t16564;
  t16583 = t16576*t16581;
  t16593 = t16569 + t16583;
  t16671 = t16665*t16666*t16670;
  t16687 = -1.*t16672*t16681*t16670;
  t16688 = t16671 + t16687;
  t16734 = Sin(var1[3]);
  t16694 = -1.*t16666*t16672;
  t16698 = -1.*t16665*t16681;
  t16699 = t16694 + t16698;
  t16726 = Cos(var1[3]);
  t16713 = t16665*t16666*t16712;
  t16714 = -1.*t16672*t16681*t16712;
  t16715 = t16713 + t16714;
  t16727 = t16666*t16672*t16670;
  t16728 = t16665*t16681*t16670;
  t16729 = t16727 + t16728;
  t16738 = t16657*t16593;
  t16742 = -1.*t3725*t16688;
  t16743 = t16738 + t16742;
  t16749 = t16665*t16666;
  t16750 = -1.*t16672*t16681;
  t16751 = t16749 + t16750;
  t16756 = t16666*t16672*t16712;
  t16757 = t16665*t16681*t16712;
  t16758 = t16756 + t16757;
  t16760 = t16657*t16670;
  t16762 = -1.*t3725*t16715;
  t16763 = t16760 + t16762;
  t16707 = t3725*t16670;
  t16720 = t16657*t16715;
  t16725 = t16707 + t16720;
  t16780 = -1.*t16666;
  t16781 = 1. + t16780;
  t16782 = 0.15121*t16781;
  t16783 = -1.*t16576;
  t16784 = 1. + t16783;
  t16785 = 0.28121*t16784;
  t16786 = -1.*t16547;
  t16787 = 1. + t16786;
  t16788 = 0.50321*t16787;
  t16789 = 0.19821*t16547;
  t16790 = t16788 + t16789;
  t16791 = t16576*t16790;
  t16792 = -0.305*t16564*t16581;
  t16793 = t16785 + t16791 + t16792;
  t16794 = t16666*t16793;
  t16795 = t16782 + t16794;
  t16798 = 0.15121*t16666;
  t16799 = -0.15121*t16681;
  t16800 = t16681*t16793;
  t16802 = t16782 + t16798 + t16799 + t16800;
  t16807 = 0.28121*t16564;
  t16808 = -1.*t16790*t16564;
  t16809 = -0.305*t16576*t16581;
  t16810 = t16807 + t16808 + t16809;
  t16812 = t16665*t16795;
  t16813 = -1.*t16672*t16802;
  t16814 = t16812 + t16813;
  t16797 = t16672*t16795;
  t16804 = t16665*t16802;
  t16805 = t16797 + t16804;
  t16811 = t3725*t16810;
  t16816 = t16657*t16814;
  t16817 = t16811 + t16816;
  t16819 = t16657*t16810;
  t16820 = -1.*t3725*t16814;
  t16821 = t16819 + t16820;
  t16596 = t3725*t16593;
  t16690 = t16657*t16688;
  t16693 = t16596 + t16690;
  t16806 = -1.*t16751*t16805;
  t16825 = t16758*t16805;
  t16833 = -1.*t16758*t16805;
  t16838 = t16729*t16805;
  t16848 = t16751*t16805;
  t16859 = -1.*t16729*t16805;
  t16877 = -1.*t16810*t16670;
  t16881 = t16810*t16593;
  p_output1[0]=t16693;
  p_output1[1]=t16657*t16699;
  p_output1[2]=t16725;
  p_output1[3]=t16726*t16729 - 1.*t16734*t16743;
  p_output1[4]=t16726*t16751 + t16699*t16734*t3725;
  p_output1[5]=t16726*t16758 - 1.*t16734*t16763;
  p_output1[6]=t16729*t16734 + t16726*t16743;
  p_output1[7]=t16734*t16751 - 1.*t16699*t16726*t3725;
  p_output1[8]=t16734*t16758 + t16726*t16763;
  p_output1[9]=t16657*t16699*(t16725*t16817 + t16763*t16821 + t16825) + t16725*(t16806 - 1.*t16657*t16699*t16817 + t16699*t16821*t3725);
  p_output1[10]=t16693*(-1.*t16725*t16817 - 1.*t16763*t16821 + t16833) + t16725*(t16693*t16817 + t16743*t16821 + t16838);
  p_output1[11]=t16657*t16699*(-1.*t16693*t16817 - 1.*t16743*t16821 + t16859) + t16693*(t16657*t16699*t16817 + t16848 - 1.*t16699*t16821*t3725);
  p_output1[12]=t16758*(t16806 - 1.*t16699*t16814) + t16751*(t16670*t16810 + t16715*t16814 + t16825);
  p_output1[13]=t16729*(-1.*t16715*t16814 + t16833 + t16877) + t16758*(t16688*t16814 + t16838 + t16881);
  p_output1[14]=t16729*(t16699*t16814 + t16848) + t16751*(-1.*t16593*t16810 - 1.*t16688*t16814 + t16859);
  p_output1[15]=t16670*(t16681*t16795 - 1.*t16666*t16802);
  p_output1[16]=t16593*(-1.*t16666*t16712*t16795 - 1.*t16681*t16712*t16802 + t16877) + t16670*(t16666*t16670*t16795 + t16670*t16681*t16802 + t16881);
  p_output1[17]=t16593*(-1.*t16681*t16795 + t16666*t16802);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t16593*(-1.*t16712*t16793 + t16877) + t16670*(t16670*t16793 + t16881);
  p_output1[20]=0.15121*t16593 + 0.15121*t16712;
  p_output1[21]=0.28121*t16581 - 0.305*t16547*t16581 - 1.*t16581*t16790;
  p_output1[22]=0;
  p_output1[23]=0.28121*t16547 + 0.305*Power(t16581,2) - 1.*t16547*t16790;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.305;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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

#include "Jh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
