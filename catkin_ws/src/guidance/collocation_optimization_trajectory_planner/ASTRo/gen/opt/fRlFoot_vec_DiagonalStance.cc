/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 14:35:12 GMT+02:00
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
  double t3101;
  double t6055;
  double t5708;
  double t6102;
  double t6109;
  double t6088;
  double t6150;
  double t6018;
  double t7532;
  double t7604;
  double t7636;
  double t6057;
  double t7508;
  double t7884;
  double t7886;
  double t7907;
  double t6052;
  double t6071;
  double t6075;
  double t9235;
  double t9018;
  double t6104;
  double t7342;
  double t7471;
  double t7735;
  double t7740;
  double t7762;
  double t7908;
  double t8616;
  double t8681;
  double t9276;
  double t9336;
  double t9362;
  double t9501;
  double t9505;
  double t9552;
  double t9638;
  double t9731;
  double t9758;
  double t10226;
  double t11254;
  double t11526;
  double t12164;
  double t12379;
  double t12942;
  double t7526;
  double t7871;
  double t7873;
  double t22533;
  double t22537;
  double t22568;
  double t22572;
  double t22573;
  double t22584;
  double t22587;
  double t22594;
  double t22598;
  double t22608;
  double t22613;
  double t22615;
  double t22617;
  double t22638;
  double t22639;
  double t22642;
  double t22538;
  double t22553;
  double t22555;
  double t22618;
  double t22622;
  double t22678;
  double t22679;
  double t22680;
  double t22702;
  double t22714;
  double t22722;
  double t22723;
  double t22625;
  double t22673;
  double t22674;
  double t22707;
  double t22730;
  double t22734;
  double t22759;
  double t22771;
  double t22784;
  double t7883;
  double t8868;
  double t8893;
  double t22677;
  double t22808;
  double t22848;
  double t22870;
  double t22897;
  double t22928;
  double t23070;
  double t23079;
  t3101 = Cos(var1[4]);
  t6055 = Cos(var1[9]);
  t5708 = Cos(var1[5]);
  t6102 = Cos(var1[11]);
  t6109 = Sin(var1[10]);
  t6088 = Cos(var1[10]);
  t6150 = Sin(var1[11]);
  t6018 = Sin(var1[9]);
  t7532 = -1.*t6102*t6109;
  t7604 = t6088*t6150;
  t7636 = t7532 + t7604;
  t6057 = Sin(var1[5]);
  t7508 = Sin(var1[4]);
  t7884 = -1.*t6088*t6102;
  t7886 = -1.*t6109*t6150;
  t7907 = t7884 + t7886;
  t6052 = t5708*t6018;
  t6071 = t6055*t6057;
  t6075 = t6052 + t6071;
  t9235 = Cos(var1[3]);
  t9018 = Sin(var1[3]);
  t6104 = t6088*t6102;
  t7342 = t6109*t6150;
  t7471 = t6104 + t7342;
  t7735 = t6055*t5708*t7636;
  t7740 = -1.*t6018*t7636*t6057;
  t7762 = t7735 + t7740;
  t7908 = t6055*t5708*t7907;
  t8616 = -1.*t6018*t7907*t6057;
  t8681 = t7908 + t8616;
  t9276 = -1.*t6055*t5708;
  t9336 = t6018*t6057;
  t9362 = t9276 + t9336;
  t9501 = t5708*t6018*t7636;
  t9505 = t6055*t7636*t6057;
  t9552 = t9501 + t9505;
  t9638 = t3101*t7471;
  t9731 = -1.*t7508*t7762;
  t9758 = t9638 + t9731;
  t10226 = t5708*t6018*t7907;
  t11254 = t6055*t7907*t6057;
  t11526 = t10226 + t11254;
  t12164 = t3101*t7636;
  t12379 = -1.*t7508*t8681;
  t12942 = t12164 + t12379;
  t7526 = t7471*t7508;
  t7871 = t3101*t7762;
  t7873 = t7526 + t7871;
  t22533 = -1.*t6055;
  t22537 = 1. + t22533;
  t22568 = -1.*t6088;
  t22572 = 1. + t22568;
  t22573 = -0.28121*t22572;
  t22584 = -1.*t6102;
  t22587 = 1. + t22584;
  t22594 = -0.50321*t22587;
  t22598 = -0.19821*t6102;
  t22608 = t22594 + t22598;
  t22613 = t6088*t22608;
  t22615 = 0.305*t6109*t6150;
  t22617 = t22573 + t22613 + t22615;
  t22638 = -0.15121*t22537;
  t22639 = t6055*t22617;
  t22642 = t22638 + t22639;
  t22538 = 0.15121*t22537;
  t22553 = 0.15121*t6055;
  t22555 = 0.15121*t6018;
  t22618 = t6018*t22617;
  t22622 = t22538 + t22553 + t22555 + t22618;
  t22678 = 0.28121*t6109;
  t22679 = t22608*t6109;
  t22680 = -0.305*t6088*t6150;
  t22702 = t22678 + t22679 + t22680;
  t22714 = t5708*t22642;
  t22722 = -1.*t22622*t6057;
  t22723 = t22714 + t22722;
  t22625 = t5708*t22622;
  t22673 = t22642*t6057;
  t22674 = t22625 + t22673;
  t22707 = t22702*t7508;
  t22730 = t3101*t22723;
  t22734 = t22707 + t22730;
  t22759 = t3101*t22702;
  t22771 = -1.*t7508*t22723;
  t22784 = t22759 + t22771;
  t7883 = t7636*t7508;
  t8868 = t3101*t8681;
  t8893 = t7883 + t8868;
  t22677 = -1.*t9362*t22674;
  t22808 = t9552*t22674;
  t22848 = t9362*t22674;
  t22870 = -1.*t11526*t22674;
  t22897 = -1.*t9552*t22674;
  t22928 = t11526*t22674;
  t23070 = -1.*t22702*t7471;
  t23079 = t22702*t7636;
  p_output1[0]=t8893*var2[0] + t3101*t6075*var2[1] + t7873*var2[2];
  p_output1[1]=(-1.*t12942*t9018 + t11526*t9235)*var2[0] + (t6075*t7508*t9018 + t9235*t9362)*var2[1] + (t9235*t9552 - 1.*t9018*t9758)*var2[2];
  p_output1[2]=(t11526*t9018 + t12942*t9235)*var2[0] + (-1.*t6075*t7508*t9235 + t9018*t9362)*var2[1] + (t9018*t9552 + t9235*t9758)*var2[2];
  p_output1[3]=((t22677 - 1.*t22734*t3101*t6075 + t22784*t6075*t7508)*t7873 + t3101*t6075*(t22808 + t22734*t7873 + t22784*t9758))*var2[0] + (t7873*(t12942*t22784 + t22928 + t22734*t8893) + t8893*(t22897 - 1.*t22734*t7873 - 1.*t22784*t9758))*var2[1] + ((t22848 + t22734*t3101*t6075 - 1.*t22784*t6075*t7508)*t8893 + t3101*t6075*(-1.*t12942*t22784 + t22870 - 1.*t22734*t8893))*var2[2];
  p_output1[4]=((t22808 + t22702*t7471 + t22723*t7762)*t9362 + (t22677 - 1.*t22723*t6075)*t9552)*var2[0] + (t11526*(t22897 + t23070 - 1.*t22723*t7762) + (t22928 + t23079 + t22723*t8681)*t9552)*var2[1] + (t11526*(t22848 + t22723*t6075) + (t22870 - 1.*t22702*t7636 - 1.*t22723*t8681)*t9362)*var2[2];
  p_output1[5]=(-1.*t22642*t6018 + t22622*t6055)*t7471*var2[0] + (t7636*(t23070 - 1.*t22622*t6018*t7636 - 1.*t22642*t6055*t7636) + t7471*(t23079 + t22622*t6018*t7907 + t22642*t6055*t7907))*var2[1] + (t22642*t6018 - 1.*t22622*t6055)*t7636*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t7471 + 0.15121*t7907)*var2[0] + (-0.15121 + t7636*(t23070 - 1.*t22617*t7636) + t7471*(t23079 + t22617*t7907))*var2[1];
  p_output1[10]=(0.28121*t6150 + t22608*t6150 - 0.305*t6102*t6150)*var2[0] + (0.28121*t6102 + t22608*t6102 + 0.305*Power(t6150,2))*var2[2];
  p_output1[11]=-0.305*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace DiagonalStance
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
