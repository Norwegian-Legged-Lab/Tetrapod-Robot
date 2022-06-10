/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 13:09:28 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t37899;
  double t41030;
  double t41426;
  double t41199;
  double t42039;
  double t37906;
  double t38581;
  double t42773;
  double t44179;
  double t44194;
  double t44458;
  double t53588;
  double t41235;
  double t42708;
  double t42716;
  double t40227;
  double t53607;
  double t53609;
  double t53629;
  double t53645;
  double t53651;
  double t53654;
  double t53702;
  double t53713;
  double t53725;
  double t53740;
  double t53747;
  double t40964;
  double t41016;
  double t42835;
  double t42892;
  double t53796;
  double t53804;
  double t53805;
  double t53719;
  double t53723;
  double t53807;
  double t53808;
  double t53809;
  double t53820;
  double t53821;
  double t53823;
  double t53849;
  double t53852;
  double t53857;
  double t53844;
  double t53846;
  double t53847;
  double t53866;
  double t53867;
  double t53868;
  double t53870;
  double t53871;
  double t53872;
  double t53884;
  double t53888;
  double t53889;
  double t53770;
  double t53771;
  double t53772;
  double t53773;
  double t53783;
  double t53787;
  double t53791;
  double t53795;
  double t53806;
  double t53810;
  double t53825;
  double t53826;
  double t53830;
  double t53831;
  double t53832;
  double t53833;
  double t53834;
  double t53835;
  double t53836;
  double t53837;
  t37899 = Cos(var1[3]);
  t41030 = Cos(var1[5]);
  t41426 = Sin(var1[3]);
  t41199 = Sin(var1[4]);
  t42039 = Sin(var1[5]);
  t37906 = Cos(var1[4]);
  t38581 = Sin(var1[15]);
  t42773 = Cos(var1[15]);
  t44179 = t41030*t41426;
  t44194 = t37899*t41199*t42039;
  t44458 = t44179 + t44194;
  t53588 = Sin(var1[16]);
  t41235 = -1.*t37899*t41030*t41199;
  t42708 = t41426*t42039;
  t42716 = t41235 + t42708;
  t40227 = Cos(var1[16]);
  t53607 = t42773*t37899*t37906;
  t53609 = -1.*t38581*t44458;
  t53629 = t53607 + t53609;
  t53645 = Sin(var1[17]);
  t53651 = -1.*t53588*t42716;
  t53654 = t40227*t53629;
  t53702 = t53651 + t53654;
  t53713 = Cos(var1[17]);
  t53725 = t40227*t42716;
  t53740 = t53588*t53629;
  t53747 = t53725 + t53740;
  t40964 = -1.*t40227;
  t41016 = 1. + t40964;
  t42835 = -1.*t42773;
  t42892 = 1. + t42835;
  t53796 = t42773*t41199;
  t53804 = t37906*t38581*t42039;
  t53805 = t53796 + t53804;
  t53719 = -1.*t53713;
  t53723 = 1. + t53719;
  t53807 = -1.*t37906*t41030*t53588;
  t53808 = t40227*t53805;
  t53809 = t53807 + t53808;
  t53820 = t40227*t37906*t41030;
  t53821 = t53588*t53805;
  t53823 = t53820 + t53821;
  t53849 = t37899*t41030;
  t53852 = -1.*t41426*t41199*t42039;
  t53857 = t53849 + t53852;
  t53844 = t41030*t41426*t41199;
  t53846 = t37899*t42039;
  t53847 = t53844 + t53846;
  t53866 = -1.*t42773*t37906*t41426;
  t53867 = -1.*t38581*t53857;
  t53868 = t53866 + t53867;
  t53870 = -1.*t53588*t53847;
  t53871 = t40227*t53868;
  t53872 = t53870 + t53871;
  t53884 = t40227*t53847;
  t53888 = t53588*t53868;
  t53889 = t53884 + t53888;
  t53770 = -1.*var2[0];
  t53771 = -0.325*t41016*t37906*t41030;
  t53772 = 0.1575*t38581*t41199;
  t53773 = 0.1575*t42892*t37906*t42039;
  t53783 = t38581*t41199;
  t53787 = -1.*t42773*t37906*t42039;
  t53791 = t53783 + t53787;
  t53795 = -0.2255*t53791;
  t53806 = 0.325*t53588*t53805;
  t53810 = -0.575*t53645*t53809;
  t53825 = -0.575*t53723*t53823;
  t53826 = -1.*t53645*t53809;
  t53830 = t53713*t53823;
  t53831 = t53826 + t53830;
  t53832 = -0.295*t53831;
  t53833 = t53713*t53809;
  t53834 = t53645*t53823;
  t53835 = t53833 + t53834;
  t53836 = -0.0641*t53835;
  t53837 = t53770 + var1[0] + t53771 + t53772 + t53773 + t53795 + t53806 + t53810 + t53825 + t53832 + t53836;
  p_output1[0]=0.1575*t37899*t37906*t38581 - 0.325*t41016*t42716 - 0.1575*t42892*t44458 - 0.2255*(t37899*t37906*t38581 + t42773*t44458) + 0.325*t53588*t53629 - 0.575*t53645*t53702 - 0.575*t53723*t53747 - 0.0641*(t53702*t53713 + t53645*t53747) - 0.295*(-1.*t53645*t53702 + t53713*t53747) + var1[2] - 0.5*t53837*(-0.1575*t37906*t38581*t41426 - 0.325*t41016*t53847 - 0.1575*t42892*t53857 - 0.2255*(-1.*t37906*t38581*t41426 + t42773*t53857) + 0.325*t53588*t53868 - 0.575*t53645*t53872 - 0.575*t53723*t53889 - 0.0641*(t53713*t53872 + t53645*t53889) - 0.295*(-1.*t53645*t53872 + t53713*t53889) + var1[1])*var3[0]*(1. + Tanh(t53837*var4[0]));
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeighttwisted_DiagonalStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeighttwisted_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
