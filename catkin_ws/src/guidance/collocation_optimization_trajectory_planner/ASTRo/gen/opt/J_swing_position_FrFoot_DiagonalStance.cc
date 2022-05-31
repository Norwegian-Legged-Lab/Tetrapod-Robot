/*
 * Automatically Generated from Mathematica.
 * Thu 26 May 2022 14:47:30 GMT+02:00
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
  double t676;
  double t686;
  double t687;
  double t700;
  double t702;
  double t703;
  double t723;
  double t709;
  double t713;
  double t724;
  double t721;
  double t728;
  double t736;
  double t742;
  double t743;
  double t744;
  double t634;
  double t660;
  double t750;
  double t759;
  double t763;
  double t764;
  double t766;
  double t772;
  double t773;
  double t774;
  double t776;
  double t777;
  double t778;
  double t779;
  double t701;
  double t704;
  double t740;
  double t741;
  double t751;
  double t755;
  double t767;
  double t768;
  double t793;
  double t794;
  double t795;
  double t797;
  double t798;
  double t799;
  double t801;
  double t802;
  double t803;
  double t810;
  double t811;
  double t812;
  double t814;
  double t815;
  double t816;
  double t818;
  double t819;
  double t820;
  double t833;
  double t836;
  double t837;
  double t838;
  double t842;
  double t843;
  double t825;
  double t856;
  double t857;
  double t858;
  double t860;
  double t861;
  double t862;
  double t864;
  double t865;
  double t866;
  double t874;
  double t875;
  double t876;
  t676 = Sin(var1[3]);
  t686 = Cos(var1[12]);
  t687 = -1.*t686;
  t700 = 1. + t687;
  t702 = Sin(var1[12]);
  t703 = -0.15121*t702;
  t723 = Cos(var1[3]);
  t709 = Cos(var1[5]);
  t713 = Sin(var1[4]);
  t724 = Sin(var1[5]);
  t721 = t709*t676*t713;
  t728 = t723*t724;
  t736 = t721 + t728;
  t742 = t723*t709;
  t743 = -1.*t676*t713*t724;
  t744 = t742 + t743;
  t634 = Cos(var1[4]);
  t660 = Sin(var1[13]);
  t750 = Cos(var1[13]);
  t759 = t686*t736;
  t763 = t702*t744;
  t764 = t759 + t763;
  t766 = Cos(var1[14]);
  t772 = t634*t660*t676;
  t773 = t750*t764;
  t774 = t772 + t773;
  t776 = Sin(var1[14]);
  t777 = -1.*t750*t634*t676;
  t778 = t660*t764;
  t779 = t777 + t778;
  t701 = 0.15121*t700;
  t704 = t701 + t703;
  t740 = -0.15121*t700;
  t741 = t740 + t703;
  t751 = -1.*t750;
  t755 = 1. + t751;
  t767 = -1.*t766;
  t768 = 1. + t767;
  t793 = -1.*t686*t723*t634*t709;
  t794 = t723*t634*t702*t724;
  t795 = t793 + t794;
  t797 = t723*t660*t713;
  t798 = t750*t795;
  t799 = t797 + t798;
  t801 = -1.*t750*t723*t713;
  t802 = t660*t795;
  t803 = t801 + t802;
  t810 = t723*t709*t713;
  t811 = -1.*t676*t724;
  t812 = t810 + t811;
  t814 = t709*t676;
  t815 = t723*t713*t724;
  t816 = t814 + t815;
  t818 = t702*t812;
  t819 = t686*t816;
  t820 = t818 + t819;
  t833 = -0.15121*t686;
  t836 = -1.*t723*t709*t713;
  t837 = t676*t724;
  t838 = t836 + t837;
  t842 = -1.*t702*t838;
  t843 = t842 + t819;
  t825 = -1.*t702*t816;
  t856 = t686*t838;
  t857 = t702*t816;
  t858 = t856 + t857;
  t860 = -1.*t723*t634*t660;
  t861 = t750*t858;
  t862 = t860 + t861;
  t864 = -1.*t750*t723*t634;
  t865 = -1.*t660*t858;
  t866 = t864 + t865;
  t874 = t750*t723*t634;
  t875 = t660*t858;
  t876 = t874 + t875;
  p_output1[0]=1.;
  p_output1[1]=-0.28121*t634*t660*t676 + t704*t736 + t741*t744 - 0.15121*(-1.*t702*t736 + t686*t744) + 0.28121*t755*t764 + 0.50321*t768*t774 - 0.50321*t776*t779 + 0.19821*(t766*t774 + t776*t779);
  p_output1[2]=-1.*t634*t704*t709*t723 - 0.28121*t660*t713*t723 - 0.15121*(t634*t702*t709*t723 + t634*t686*t723*t724) + t634*t723*t724*t741 + 0.28121*t755*t795 + 0.50321*t768*t799 - 0.50321*t776*t803 + 0.19821*(t766*t799 + t776*t803);
  p_output1[3]=t741*t812 + t704*t816 + 0.28121*t755*t820 + 0.50321*t750*t768*t820 - 0.50321*t660*t776*t820 + 0.19821*(t750*t766*t820 + t660*t776*t820) - 0.15121*(t686*t812 + t825);
  p_output1[4]=t816*(t703 + t833) + (0.15121*t702 + t833)*t838 - 0.15121*(t825 - 1.*t686*t838) + 0.28121*t755*t843 + 0.50321*t750*t768*t843 - 0.50321*t660*t776*t843 + 0.19821*(t750*t766*t843 + t660*t776*t843);
  p_output1[5]=0.28121*t634*t723*t750 + 0.28121*t660*t858 - 0.50321*t776*t862 + 0.50321*t768*t866 + 0.19821*(t776*t862 + t766*t866);
  p_output1[6]=0.50321*t776*t862 - 0.50321*t766*t876 + 0.19821*(-1.*t776*t862 + t766*t876);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swing_position_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_swing_position_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
