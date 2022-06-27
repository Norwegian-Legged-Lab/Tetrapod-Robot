/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:20 GMT+02:00
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
  double t187;
  double t19;
  double t130;
  double t199;
  double t3282;
  double t3285;
  double t11060;
  double t748;
  double t20609;
  double t747;
  double t20642;
  double t744;
  double t142;
  double t210;
  double t734;
  double t5;
  double t14750;
  double t20693;
  double t20694;
  double t20717;
  double t20705;
  double t20709;
  double t20714;
  double t20704;
  double t20721;
  double t20725;
  double t20726;
  double t20733;
  double t20734;
  double t20735;
  double t20783;
  double t20784;
  double t20786;
  double t20787;
  double t20788;
  double t20789;
  double t20790;
  double t20791;
  double t20793;
  double t20794;
  double t20795;
  double t20796;
  double t20798;
  double t20799;
  double t20800;
  double t20801;
  double t20803;
  double t20806;
  double t20807;
  double t20808;
  double t20813;
  double t20814;
  double t20815;
  double t20816;
  double t20817;
  double t20818;
  double t20820;
  double t20822;
  double t20823;
  double t20824;
  double t20802;
  double t20809;
  double t20811;
  double t20732;
  double t20736;
  double t20737;
  double t20738;
  double t20739;
  double t20740;
  double t20821;
  double t20825;
  double t20826;
  double t20828;
  double t20829;
  double t20830;
  double t20834;
  double t20835;
  double t20836;
  double t20742;
  double t20778;
  double t20782;
  double t20812;
  double t20838;
  double t743;
  double t20696;
  double t20702;
  double t20840;
  double t20842;
  double t20843;
  double t20871;
  double t20876;
  double t20883;
  double t20887;
  double t20915;
  double t20920;
  t187 = Cos(var1[7]);
  t19 = Cos(var1[8]);
  t130 = Sin(var1[7]);
  t199 = Sin(var1[8]);
  t3282 = t187*t19;
  t3285 = t130*t199;
  t11060 = t3282 + t3285;
  t748 = Cos(var1[6]);
  t20609 = Sin(var1[5]);
  t747 = Cos(var1[5]);
  t20642 = Sin(var1[6]);
  t744 = Cos(var1[4]);
  t142 = -1.*t19*t130;
  t210 = t187*t199;
  t734 = t142 + t210;
  t5 = Sin(var1[4]);
  t14750 = t747*t748*t11060;
  t20693 = -1.*t20609*t20642*t11060;
  t20694 = t14750 + t20693;
  t20717 = Sin(var1[3]);
  t20705 = t748*t20609*t11060;
  t20709 = t747*t20642*t11060;
  t20714 = t20705 + t20709;
  t20704 = Cos(var1[3]);
  t20721 = t744*t734;
  t20725 = -1.*t5*t20694;
  t20726 = t20721 + t20725;
  t20733 = t19*t130;
  t20734 = -1.*t187*t199;
  t20735 = t20733 + t20734;
  t20783 = -1.*t748;
  t20784 = 1. + t20783;
  t20786 = 0.15121*t20784;
  t20787 = -1.*t187;
  t20788 = 1. + t20787;
  t20789 = 0.28121*t20788;
  t20790 = -1.*t19;
  t20791 = 1. + t20790;
  t20793 = 0.50321*t20791;
  t20794 = 0.19821*t19;
  t20795 = t20793 + t20794;
  t20796 = t187*t20795;
  t20798 = -0.305*t130*t199;
  t20799 = t20789 + t20796 + t20798;
  t20800 = t748*t20799;
  t20801 = t20786 + t20800;
  t20803 = 0.15121*t748;
  t20806 = -0.15121*t20642;
  t20807 = t20642*t20799;
  t20808 = t20786 + t20803 + t20806 + t20807;
  t20813 = -1.*t748*t20609;
  t20814 = -1.*t747*t20642;
  t20815 = t20813 + t20814;
  t20816 = 0.28121*t130;
  t20817 = -1.*t20795*t130;
  t20818 = -0.305*t187*t199;
  t20820 = t20816 + t20817 + t20818;
  t20822 = t747*t20801;
  t20823 = -1.*t20609*t20808;
  t20824 = t20822 + t20823;
  t20802 = t20609*t20801;
  t20809 = t747*t20808;
  t20811 = t20802 + t20809;
  t20732 = t5*t11060;
  t20736 = t747*t748*t20735;
  t20737 = -1.*t20609*t20642*t20735;
  t20738 = t20736 + t20737;
  t20739 = t744*t20738;
  t20740 = t20732 + t20739;
  t20821 = t5*t20820;
  t20825 = t744*t20824;
  t20826 = t20821 + t20825;
  t20828 = t744*t20820;
  t20829 = -1.*t5*t20824;
  t20830 = t20828 + t20829;
  t20834 = t748*t20609*t20735;
  t20835 = t747*t20642*t20735;
  t20836 = t20834 + t20835;
  t20742 = t747*t748;
  t20778 = -1.*t20609*t20642;
  t20782 = t20742 + t20778;
  t20812 = -1.*t20782*t20811;
  t20838 = t20836*t20811;
  t743 = t5*t734;
  t20696 = t744*t20694;
  t20702 = t743 + t20696;
  t20840 = t744*t11060;
  t20842 = -1.*t5*t20738;
  t20843 = t20840 + t20842;
  t20871 = -1.*t20836*t20811;
  t20876 = t20714*t20811;
  t20883 = -1.*t20820*t11060;
  t20887 = t20820*t734;
  t20915 = t20782*t20811;
  t20920 = -1.*t20714*t20811;
  p_output1[0]=t20702;
  p_output1[1]=t20704*t20714 - 1.*t20717*t20726;
  p_output1[2]=t20714*t20717 + t20704*t20726;
  p_output1[3]=t20815*(t20740*t20826 + t20838 + t20830*t20843)*t744 + t20740*(t20812 + t20815*t20830*t5 - 1.*t20815*t20826*t744);
  p_output1[4]=(t20812 - 1.*t20815*t20824)*t20836 + t20782*(t11060*t20820 + t20738*t20824 + t20838);
  p_output1[5]=t11060*(t20642*t20801 - 1.*t20808*t748);
  p_output1[6]=0;
  p_output1[7]=0.28121*t199 - 0.305*t19*t199 - 1.*t199*t20795;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t20815*t744;
  p_output1[19]=t20704*t20782 + t20717*t20815*t5;
  p_output1[20]=t20717*t20782 - 1.*t20704*t20815*t5;
  p_output1[21]=t20702*(-1.*t20740*t20826 - 1.*t20830*t20843 + t20871) + t20740*(t20702*t20826 + t20726*t20830 + t20876);
  p_output1[22]=t20714*(-1.*t20738*t20824 + t20871 + t20883) + t20836*(t20694*t20824 + t20876 + t20887);
  p_output1[23]=t11060*(t11060*t20642*t20808 + t20887 + t11060*t20801*t748) + t734*(-1.*t20642*t20735*t20808 + t20883 - 1.*t20735*t20801*t748);
  p_output1[24]=-0.15121 + t11060*(t11060*t20799 + t20887) + (-1.*t20735*t20799 + t20883)*t734;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t20740;
  p_output1[37]=t20704*t20836 - 1.*t20717*t20843;
  p_output1[38]=t20717*t20836 + t20704*t20843;
  p_output1[39]=t20815*(-1.*t20702*t20826 - 1.*t20726*t20830 + t20920)*t744 + t20702*(t20915 - 1.*t20815*t20830*t5 + t20815*t20826*t744);
  p_output1[40]=t20714*(t20815*t20824 + t20915) + t20782*(-1.*t20694*t20824 + t20920 - 1.*t20820*t734);
  p_output1[41]=t734*(-1.*t20642*t20801 + t20808*t748);
  p_output1[42]=0.15121*t20735 + 0.15121*t734;
  p_output1[43]=0.28121*t19 + 0.305*Power(t199,2) - 1.*t19*t20795;
  p_output1[44]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
