/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 16:58:46 GMT+02:00
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
  double t97;
  double t1323;
  double t178;
  double t2721;
  double t4349;
  double t2219;
  double t4549;
  double t827;
  double t4868;
  double t4921;
  double t4963;
  double t1723;
  double t4717;
  double t5629;
  double t5630;
  double t5633;
  double t1106;
  double t1808;
  double t1897;
  double t5722;
  double t5713;
  double t4324;
  double t4586;
  double t4663;
  double t5274;
  double t5284;
  double t5338;
  double t5682;
  double t5684;
  double t5686;
  double t5728;
  double t5731;
  double t5739;
  double t6072;
  double t6074;
  double t6113;
  double t6374;
  double t6541;
  double t6569;
  double t6665;
  double t6672;
  double t6675;
  double t6768;
  double t6776;
  double t6780;
  double t4796;
  double t5611;
  double t5612;
  double t8152;
  double t8293;
  double t8868;
  double t9337;
  double t9705;
  double t9722;
  double t10767;
  double t10866;
  double t10917;
  double t11194;
  double t11382;
  double t11467;
  double t11575;
  double t11967;
  double t12077;
  double t12278;
  double t8305;
  double t8445;
  double t8782;
  double t11864;
  double t11865;
  double t12616;
  double t12662;
  double t12874;
  double t12907;
  double t13155;
  double t13661;
  double t14119;
  double t11880;
  double t12279;
  double t12495;
  double t13064;
  double t14131;
  double t14267;
  double t14451;
  double t14460;
  double t14660;
  double t5626;
  double t5688;
  double t5691;
  double t12614;
  double t15770;
  double t15905;
  double t16187;
  double t22155;
  double t22171;
  double t23185;
  double t23195;
  t97 = Cos(var1[4]);
  t1323 = Cos(var1[9]);
  t178 = Cos(var1[5]);
  t2721 = Cos(var1[11]);
  t4349 = Sin(var1[10]);
  t2219 = Cos(var1[10]);
  t4549 = Sin(var1[11]);
  t827 = Sin(var1[9]);
  t4868 = -1.*t2721*t4349;
  t4921 = t2219*t4549;
  t4963 = t4868 + t4921;
  t1723 = Sin(var1[5]);
  t4717 = Sin(var1[4]);
  t5629 = -1.*t2219*t2721;
  t5630 = -1.*t4349*t4549;
  t5633 = t5629 + t5630;
  t1106 = t178*t827;
  t1808 = t1323*t1723;
  t1897 = t1106 + t1808;
  t5722 = Cos(var1[3]);
  t5713 = Sin(var1[3]);
  t4324 = t2219*t2721;
  t4586 = t4349*t4549;
  t4663 = t4324 + t4586;
  t5274 = t1323*t178*t4963;
  t5284 = -1.*t827*t4963*t1723;
  t5338 = t5274 + t5284;
  t5682 = t1323*t178*t5633;
  t5684 = -1.*t827*t5633*t1723;
  t5686 = t5682 + t5684;
  t5728 = -1.*t1323*t178;
  t5731 = t827*t1723;
  t5739 = t5728 + t5731;
  t6072 = t178*t827*t4963;
  t6074 = t1323*t4963*t1723;
  t6113 = t6072 + t6074;
  t6374 = t97*t4663;
  t6541 = -1.*t4717*t5338;
  t6569 = t6374 + t6541;
  t6665 = t178*t827*t5633;
  t6672 = t1323*t5633*t1723;
  t6675 = t6665 + t6672;
  t6768 = t97*t4963;
  t6776 = -1.*t4717*t5686;
  t6780 = t6768 + t6776;
  t4796 = t4663*t4717;
  t5611 = t97*t5338;
  t5612 = t4796 + t5611;
  t8152 = -1.*t1323;
  t8293 = 1. + t8152;
  t8868 = -1.*t2219;
  t9337 = 1. + t8868;
  t9705 = -0.28121*t9337;
  t9722 = -1.*t2721;
  t10767 = 1. + t9722;
  t10866 = -0.50321*t10767;
  t10917 = -0.19821*t2721;
  t11194 = t10866 + t10917;
  t11382 = t2219*t11194;
  t11467 = 0.305*t4349*t4549;
  t11575 = t9705 + t11382 + t11467;
  t11967 = -0.15121*t8293;
  t12077 = t1323*t11575;
  t12278 = t11967 + t12077;
  t8305 = 0.15121*t8293;
  t8445 = 0.15121*t1323;
  t8782 = 0.15121*t827;
  t11864 = t827*t11575;
  t11865 = t8305 + t8445 + t8782 + t11864;
  t12616 = 0.28121*t4349;
  t12662 = t11194*t4349;
  t12874 = -0.305*t2219*t4549;
  t12907 = t12616 + t12662 + t12874;
  t13155 = t178*t12278;
  t13661 = -1.*t11865*t1723;
  t14119 = t13155 + t13661;
  t11880 = t178*t11865;
  t12279 = t12278*t1723;
  t12495 = t11880 + t12279;
  t13064 = t12907*t4717;
  t14131 = t97*t14119;
  t14267 = t13064 + t14131;
  t14451 = t97*t12907;
  t14460 = -1.*t4717*t14119;
  t14660 = t14451 + t14460;
  t5626 = t4963*t4717;
  t5688 = t97*t5686;
  t5691 = t5626 + t5688;
  t12614 = -1.*t5739*t12495;
  t15770 = t6113*t12495;
  t15905 = t5739*t12495;
  t16187 = -1.*t6675*t12495;
  t22155 = -1.*t6113*t12495;
  t22171 = t6675*t12495;
  t23185 = -1.*t12907*t4663;
  t23195 = t12907*t4963;
  p_output1[0]=t5691*var2[0] + t1897*t97*var2[1] + t5612*var2[2];
  p_output1[1]=(t5722*t6675 - 1.*t5713*t6780)*var2[0] + (t1897*t4717*t5713 + t5722*t5739)*var2[1] + (t5722*t6113 - 1.*t5713*t6569)*var2[2];
  p_output1[2]=(t5713*t6675 + t5722*t6780)*var2[0] + (-1.*t1897*t4717*t5722 + t5713*t5739)*var2[1] + (t5713*t6113 + t5722*t6569)*var2[2];
  p_output1[3]=(t1897*(t15770 + t14267*t5612 + t14660*t6569)*t97 + t5612*(t12614 + t14660*t1897*t4717 - 1.*t14267*t1897*t97))*var2[0] + (t5691*(t22155 - 1.*t14267*t5612 - 1.*t14660*t6569) + t5612*(t22171 + t14267*t5691 + t14660*t6780))*var2[1] + (t1897*(t16187 - 1.*t14267*t5691 - 1.*t14660*t6780)*t97 + t5691*(t15905 - 1.*t14660*t1897*t4717 + t14267*t1897*t97))*var2[2];
  p_output1[4]=((t15770 + t12907*t4663 + t14119*t5338)*t5739 + (t12614 - 1.*t14119*t1897)*t6113)*var2[0] + ((t22171 + t23195 + t14119*t5686)*t6113 + (t22155 + t23185 - 1.*t14119*t5338)*t6675)*var2[1] + ((t16187 - 1.*t12907*t4963 - 1.*t14119*t5686)*t5739 + (t15905 + t14119*t1897)*t6675)*var2[2];
  p_output1[5]=t4663*(t11865*t1323 - 1.*t12278*t827)*var2[0] + (t4963*(t23185 - 1.*t12278*t1323*t4963 - 1.*t11865*t4963*t827) + t4663*(t23195 + t12278*t1323*t5633 + t11865*t5633*t827))*var2[1] + t4963*(-1.*t11865*t1323 + t12278*t827)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t4663 + 0.15121*t5633)*var2[0] + (-0.15121 + t4963*(t23185 - 1.*t11575*t4963) + t4663*(t23195 + t11575*t5633))*var2[1];
  p_output1[10]=(0.28121*t4549 + t11194*t4549 - 0.305*t2721*t4549)*var2[0] + (0.28121*t2721 + t11194*t2721 + 0.305*Power(t4549,2))*var2[2];
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
