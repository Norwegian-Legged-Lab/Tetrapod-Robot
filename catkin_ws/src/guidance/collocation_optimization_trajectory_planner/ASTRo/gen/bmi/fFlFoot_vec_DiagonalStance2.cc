/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:32 GMT+02:00
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
  double t1267;
  double t44631;
  double t1765;
  double t45479;
  double t45539;
  double t45474;
  double t45566;
  double t34188;
  double t44656;
  double t45574;
  double t45579;
  double t45585;
  double t45435;
  double t45507;
  double t45570;
  double t45571;
  double t44616;
  double t44657;
  double t44670;
  double t45651;
  double t45649;
  double t45586;
  double t45588;
  double t45589;
  double t45627;
  double t45628;
  double t45629;
  double t45637;
  double t45638;
  double t45639;
  double t45652;
  double t45653;
  double t45656;
  double t45663;
  double t45665;
  double t45667;
  double t45681;
  double t45688;
  double t45690;
  double t45705;
  double t45710;
  double t45715;
  double t45719;
  double t45734;
  double t45742;
  double t45573;
  double t45591;
  double t45596;
  double t45822;
  double t45828;
  double t45830;
  double t45833;
  double t45834;
  double t45837;
  double t45839;
  double t45840;
  double t45842;
  double t45843;
  double t45844;
  double t45845;
  double t45848;
  double t45849;
  double t45850;
  double t45851;
  double t45866;
  double t45871;
  double t45876;
  double t45884;
  double t45896;
  double t45897;
  double t45898;
  double t45901;
  double t45918;
  double t45919;
  double t45920;
  double t45853;
  double t45892;
  double t45894;
  double t45902;
  double t45921;
  double t45927;
  double t45932;
  double t45934;
  double t45935;
  double t45635;
  double t45640;
  double t45642;
  double t45895;
  double t45950;
  double t45957;
  double t45967;
  double t45980;
  double t45991;
  double t46038;
  double t46042;
  t1267 = Cos(var1[4]);
  t44631 = Cos(var1[5]);
  t1765 = Cos(var1[6]);
  t45479 = Cos(var1[8]);
  t45539 = Sin(var1[7]);
  t45474 = Cos(var1[7]);
  t45566 = Sin(var1[8]);
  t34188 = Sin(var1[5]);
  t44656 = Sin(var1[6]);
  t45574 = t45479*t45539;
  t45579 = -1.*t45474*t45566;
  t45585 = t45574 + t45579;
  t45435 = Sin(var1[4]);
  t45507 = t45474*t45479;
  t45570 = t45539*t45566;
  t45571 = t45507 + t45570;
  t44616 = -1.*t1765*t34188;
  t44657 = -1.*t44631*t44656;
  t44670 = t44616 + t44657;
  t45651 = Cos(var1[3]);
  t45649 = Sin(var1[3]);
  t45586 = t44631*t1765*t45585;
  t45588 = -1.*t34188*t44656*t45585;
  t45589 = t45586 + t45588;
  t45627 = -1.*t45479*t45539;
  t45628 = t45474*t45566;
  t45629 = t45627 + t45628;
  t45637 = t44631*t1765*t45571;
  t45638 = -1.*t34188*t44656*t45571;
  t45639 = t45637 + t45638;
  t45652 = t44631*t1765;
  t45653 = -1.*t34188*t44656;
  t45656 = t45652 + t45653;
  t45663 = t1765*t34188*t45585;
  t45665 = t44631*t44656*t45585;
  t45667 = t45663 + t45665;
  t45681 = t1267*t45571;
  t45688 = -1.*t45435*t45589;
  t45690 = t45681 + t45688;
  t45705 = t1765*t34188*t45571;
  t45710 = t44631*t44656*t45571;
  t45715 = t45705 + t45710;
  t45719 = t1267*t45629;
  t45734 = -1.*t45435*t45639;
  t45742 = t45719 + t45734;
  t45573 = t45435*t45571;
  t45591 = t1267*t45589;
  t45596 = t45573 + t45591;
  t45822 = -1.*t1765;
  t45828 = 1. + t45822;
  t45830 = 0.15121*t45828;
  t45833 = -1.*t45474;
  t45834 = 1. + t45833;
  t45837 = 0.28121*t45834;
  t45839 = -1.*t45479;
  t45840 = 1. + t45839;
  t45842 = 0.50321*t45840;
  t45843 = 0.23321*t45479;
  t45844 = t45842 + t45843;
  t45845 = t45474*t45844;
  t45848 = -0.27*t45539*t45566;
  t45849 = t45837 + t45845 + t45848;
  t45850 = t1765*t45849;
  t45851 = t45830 + t45850;
  t45866 = 0.15121*t1765;
  t45871 = -0.15121*t44656;
  t45876 = t44656*t45849;
  t45884 = t45830 + t45866 + t45871 + t45876;
  t45896 = 0.28121*t45539;
  t45897 = -1.*t45844*t45539;
  t45898 = -0.27*t45474*t45566;
  t45901 = t45896 + t45897 + t45898;
  t45918 = t44631*t45851;
  t45919 = -1.*t34188*t45884;
  t45920 = t45918 + t45919;
  t45853 = t34188*t45851;
  t45892 = t44631*t45884;
  t45894 = t45853 + t45892;
  t45902 = t45435*t45901;
  t45921 = t1267*t45920;
  t45927 = t45902 + t45921;
  t45932 = t1267*t45901;
  t45934 = -1.*t45435*t45920;
  t45935 = t45932 + t45934;
  t45635 = t45435*t45629;
  t45640 = t1267*t45639;
  t45642 = t45635 + t45640;
  t45895 = -1.*t45656*t45894;
  t45950 = t45667*t45894;
  t45957 = t45656*t45894;
  t45967 = -1.*t45715*t45894;
  t45980 = -1.*t45667*t45894;
  t45991 = t45715*t45894;
  t46038 = -1.*t45901*t45571;
  t46042 = t45901*t45629;
  p_output1[0]=t45642*var2[0] + t1267*t44670*var2[1] + t45596*var2[2];
  p_output1[1]=(t45651*t45715 - 1.*t45649*t45742)*var2[0] + (t44670*t45435*t45649 + t45651*t45656)*var2[1] + (t45651*t45667 - 1.*t45649*t45690)*var2[2];
  p_output1[2]=(t45649*t45715 + t45651*t45742)*var2[0] + (-1.*t44670*t45435*t45651 + t45649*t45656)*var2[1] + (t45649*t45667 + t45651*t45690)*var2[2];
  p_output1[3]=(t45596*(t45895 - 1.*t1267*t44670*t45927 + t44670*t45435*t45935) + t1267*t44670*(t45596*t45927 + t45690*t45935 + t45950))*var2[0] + (t45642*(-1.*t45596*t45927 - 1.*t45690*t45935 + t45980) + t45596*(t45642*t45927 + t45742*t45935 + t45991))*var2[1] + (t45642*(t1267*t44670*t45927 - 1.*t44670*t45435*t45935 + t45957) + t1267*t44670*(-1.*t45642*t45927 - 1.*t45742*t45935 + t45967))*var2[2];
  p_output1[4]=(t45667*(t45895 - 1.*t44670*t45920) + t45656*(t45571*t45901 + t45589*t45920 + t45950))*var2[0] + (t45715*(-1.*t45589*t45920 + t45980 + t46038) + t45667*(t45639*t45920 + t45991 + t46042))*var2[1] + (t45715*(t44670*t45920 + t45957) + t45656*(-1.*t45629*t45901 - 1.*t45639*t45920 + t45967))*var2[2];
  p_output1[5]=t45571*(t44656*t45851 - 1.*t1765*t45884)*var2[0] + (t45629*(-1.*t1765*t45585*t45851 - 1.*t44656*t45585*t45884 + t46038) + t45571*(t1765*t45571*t45851 + t44656*t45571*t45884 + t46042))*var2[1] + t45629*(-1.*t44656*t45851 + t1765*t45884)*var2[2];
  p_output1[6]=(-0.15121 + t45629*(-1.*t45585*t45849 + t46038) + t45571*(t45571*t45849 + t46042))*var2[1] + (0.15121*t45585 + 0.15121*t45629)*var2[2];
  p_output1[7]=(0.28121*t45566 - 0.27*t45479*t45566 - 1.*t45566*t45844)*var2[0] + (0.28121*t45479 + 0.27*Power(t45566,2) - 1.*t45479*t45844)*var2[2];
  p_output1[8]=-0.27*var2[2];
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

#include "fFlFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
