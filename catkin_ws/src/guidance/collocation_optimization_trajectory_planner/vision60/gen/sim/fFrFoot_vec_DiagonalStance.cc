/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:24:41 GMT+02:00
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
  double t13410;
  double t12795;
  double t13413;
  double t13753;
  double t13642;
  double t13643;
  double t13763;
  double t8543;
  double t13671;
  double t13787;
  double t13821;
  double t13426;
  double t13865;
  double t14767;
  double t14775;
  double t13858;
  double t21648;
  double t21662;
  double t14787;
  double t14827;
  double t14834;
  double t14918;
  double t14941;
  double t17408;
  double t19673;
  double t21207;
  double t21238;
  double t21666;
  double t21671;
  double t21681;
  double t21706;
  double t21711;
  double t21716;
  double t21729;
  double t21730;
  double t21731;
  double t21745;
  double t21746;
  double t21747;
  double t21753;
  double t21754;
  double t21756;
  double t13852;
  double t14836;
  double t14844;
  double t21809;
  double t21811;
  double t21813;
  double t21815;
  double t21817;
  double t21818;
  double t21819;
  double t21820;
  double t21821;
  double t13389;
  double t13432;
  double t13509;
  double t21808;
  double t21814;
  double t21823;
  double t21825;
  double t21834;
  double t21836;
  double t21837;
  double t21838;
  double t21842;
  double t21844;
  double t21803;
  double t21804;
  double t21805;
  double t21806;
  double t21826;
  double t21828;
  double t21853;
  double t21854;
  double t21855;
  double t21858;
  double t21859;
  double t21860;
  double t21829;
  double t21849;
  double t21850;
  double t21857;
  double t21861;
  double t21862;
  double t21864;
  double t21865;
  double t21869;
  double t14908;
  double t21357;
  double t21365;
  double t21851;
  double t21875;
  double t21909;
  double t21924;
  double t21943;
  double t21955;
  double t22011;
  double t22019;
  double t21968;
  double t21984;
  double t22003;
  double t21999;
  double t22062;
  double t22057;
  t13410 = Cos(var1[12]);
  t12795 = Sin(var1[4]);
  t13413 = Cos(var1[4]);
  t13753 = Cos(var1[13]);
  t13642 = Cos(var1[14]);
  t13643 = Sin(var1[13]);
  t13763 = Sin(var1[14]);
  t8543 = Sin(var1[12]);
  t13671 = t13642*t13643;
  t13787 = -1.*t13753*t13763;
  t13821 = t13671 + t13787;
  t13426 = Sin(var1[5]);
  t13865 = t13753*t13642;
  t14767 = t13643*t13763;
  t14775 = t13865 + t14767;
  t13858 = Cos(var1[5]);
  t21648 = Cos(var1[3]);
  t21662 = Sin(var1[3]);
  t14787 = t13858*t14775;
  t14827 = t8543*t13821*t13426;
  t14834 = t14787 + t14827;
  t14918 = -1.*t13642*t13643;
  t14941 = t13753*t13763;
  t17408 = t14918 + t14941;
  t19673 = t13858*t17408;
  t21207 = t8543*t14775*t13426;
  t21238 = t19673 + t21207;
  t21666 = t13413*t8543;
  t21671 = t13410*t12795*t13426;
  t21681 = t21666 + t21671;
  t21706 = -1.*t13858*t8543*t13821;
  t21711 = t14775*t13426;
  t21716 = t21706 + t21711;
  t21729 = t13410*t13413*t13821;
  t21730 = -1.*t12795*t14834;
  t21731 = t21729 + t21730;
  t21745 = -1.*t13858*t8543*t14775;
  t21746 = t17408*t13426;
  t21747 = t21745 + t21746;
  t21753 = t13410*t13413*t14775;
  t21754 = -1.*t12795*t21238;
  t21756 = t21753 + t21754;
  t13852 = t13410*t13821*t12795;
  t14836 = t13413*t14834;
  t14844 = t13852 + t14836;
  t21809 = -0.0641*t13642;
  t21811 = -0.28*t13763;
  t21813 = t21809 + t21811;
  t21815 = -1.*t13642;
  t21817 = 1. + t21815;
  t21818 = 0.075*t21817;
  t21819 = 0.355*t13642;
  t21820 = -0.0641*t13763;
  t21821 = t21818 + t21819 + t21820;
  t13389 = t8543*t12795;
  t13432 = -1.*t13410*t13413*t13426;
  t13509 = t13389 + t13432;
  t21808 = -0.325*t13643;
  t21814 = t13753*t21813;
  t21823 = t13643*t21821;
  t21825 = t21808 + t21814 + t21823;
  t21834 = -1.*t13753;
  t21836 = 1. + t21834;
  t21837 = 0.325*t21836;
  t21838 = -1.*t13643*t21813;
  t21842 = t13753*t21821;
  t21844 = t21837 + t21838 + t21842;
  t21803 = -1.*t13410;
  t21804 = 1. + t21803;
  t21805 = -0.1575*t21804;
  t21806 = -0.2255*t13410;
  t21826 = -1.*t8543*t21825;
  t21828 = t21805 + t21806 + t21826;
  t21853 = -0.068*t8543;
  t21854 = t13410*t21825;
  t21855 = t21853 + t21854;
  t21858 = t13858*t21844;
  t21859 = -1.*t21828*t13426;
  t21860 = t21858 + t21859;
  t21829 = t13858*t21828;
  t21849 = t21844*t13426;
  t21850 = t21829 + t21849;
  t21857 = t21855*t12795;
  t21861 = t13413*t21860;
  t21862 = t21857 + t21861;
  t21864 = t13413*t21855;
  t21865 = -1.*t12795*t21860;
  t21869 = t21864 + t21865;
  t14908 = t13410*t14775*t12795;
  t21357 = t13413*t21238;
  t21365 = t14908 + t21357;
  t21851 = t13410*t13858*t21850;
  t21875 = -1.*t21850*t21716;
  t21909 = t21850*t21716;
  t21924 = -1.*t21850*t21747;
  t21943 = -1.*t13410*t13858*t21850;
  t21955 = t21850*t21747;
  t22011 = -1.*t8543*t21855;
  t22019 = t13410*t21855*t14775;
  t21968 = t8543*t21855;
  t21984 = -1.*t13410*t21855*t13821;
  t22003 = -1.*t13410*t21855*t14775;
  t21999 = t13410*t21855*t13821;
  t22062 = t21844*t14775;
  t22057 = -1.*t21844*t17408;
  p_output1[0]=t14844*var2[0] + t13509*var2[1] + t21365*var2[2];
  p_output1[1]=(t21648*t21716 - 1.*t21662*t21731)*var2[0] + (t13410*t13858*t21648 - 1.*t21662*t21681)*var2[1] + (t21648*t21747 - 1.*t21662*t21756)*var2[2];
  p_output1[2]=(t21662*t21716 + t21648*t21731)*var2[0] + (t13410*t13858*t21662 + t21648*t21681)*var2[1] + (t21662*t21747 + t21648*t21756)*var2[2];
  p_output1[3]=(t21365*(-1.*t13509*t21862 - 1.*t21681*t21869 + t21943) + t13509*(t21365*t21862 + t21756*t21869 + t21955))*var2[0] + (t21365*(t14844*t21862 + t21731*t21869 + t21909) + t14844*(-1.*t21365*t21862 - 1.*t21756*t21869 + t21924))*var2[1] + (t14844*(t21851 + t13509*t21862 + t21681*t21869) + t13509*(-1.*t14844*t21862 - 1.*t21731*t21869 + t21875))*var2[2];
  p_output1[4]=(t21747*(t13410*t13426*t21860 + t21943 + t22011) + t13410*t13858*(t21238*t21860 + t21955 + t22019))*var2[0] + (t21747*(t14834*t21860 + t21909 + t21999) + t21716*(-1.*t21238*t21860 + t21924 + t22003))*var2[1] + (t21716*(t21851 - 1.*t13410*t13426*t21860 + t21968) + t13410*t13858*(-1.*t14834*t21860 + t21875 + t21984))*var2[2];
  p_output1[5]=(t13410*t14775*(-1.*t13410*t21828 + t22011) + t8543*(t17408*t21844 + t22019 - 1.*t14775*t21828*t8543))*var2[0] + (t13410*t14775*(t21999 + t22062 - 1.*t13821*t21828*t8543) + t13410*t13821*(t22003 + t22057 + t14775*t21828*t8543))*var2[1] + (t13410*t13821*(t13410*t21828 + t21968) + t8543*(-1.*t14775*t21844 + t21984 + t13821*t21828*t8543))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t13821 + 0.2255*t17408)*var2[0] + (t14775*(-1.*t14775*t21825 + t22057) + t17408*(t13821*t21825 + t22062))*var2[1] - 0.068*t14775*var2[2];
  p_output1[13]=(0.325*t13763 - 1.*t13642*t21813 - 1.*t13763*t21821)*var2[0] + (-0.325*t13642 - 1.*t13763*t21813 + t13642*t21821)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fFrFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
