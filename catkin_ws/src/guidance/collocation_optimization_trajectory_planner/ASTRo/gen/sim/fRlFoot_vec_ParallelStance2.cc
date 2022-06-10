/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:29 GMT+02:00
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
  double t2032;
  double t8165;
  double t6957;
  double t10627;
  double t11821;
  double t8455;
  double t11844;
  double t7761;
  double t21273;
  double t21611;
  double t21618;
  double t8175;
  double t21207;
  double t21640;
  double t21642;
  double t21643;
  double t8134;
  double t8279;
  double t8305;
  double t21851;
  double t21843;
  double t11373;
  double t12413;
  double t15337;
  double t21625;
  double t21626;
  double t21629;
  double t21649;
  double t21653;
  double t21657;
  double t21852;
  double t21855;
  double t21858;
  double t21873;
  double t21876;
  double t21877;
  double t21883;
  double t21885;
  double t21888;
  double t21902;
  double t21906;
  double t21907;
  double t21917;
  double t21928;
  double t21930;
  double t21241;
  double t21633;
  double t21637;
  double t22009;
  double t22017;
  double t22024;
  double t22025;
  double t22027;
  double t22038;
  double t22041;
  double t22044;
  double t22048;
  double t22050;
  double t22060;
  double t22063;
  double t22069;
  double t22078;
  double t22083;
  double t22094;
  double t22018;
  double t22019;
  double t22023;
  double t22071;
  double t22072;
  double t22119;
  double t22126;
  double t22127;
  double t22129;
  double t22141;
  double t22143;
  double t22146;
  double t22077;
  double t22108;
  double t22110;
  double t22139;
  double t22147;
  double t22151;
  double t22154;
  double t22156;
  double t22157;
  double t21639;
  double t21659;
  double t21664;
  double t22114;
  double t22166;
  double t22206;
  double t22263;
  double t22416;
  double t22447;
  double t22687;
  double t22709;
  t2032 = Cos(var1[4]);
  t8165 = Cos(var1[9]);
  t6957 = Cos(var1[5]);
  t10627 = Cos(var1[11]);
  t11821 = Sin(var1[10]);
  t8455 = Cos(var1[10]);
  t11844 = Sin(var1[11]);
  t7761 = Sin(var1[9]);
  t21273 = -1.*t10627*t11821;
  t21611 = t8455*t11844;
  t21618 = t21273 + t21611;
  t8175 = Sin(var1[5]);
  t21207 = Sin(var1[4]);
  t21640 = -1.*t8455*t10627;
  t21642 = -1.*t11821*t11844;
  t21643 = t21640 + t21642;
  t8134 = t6957*t7761;
  t8279 = t8165*t8175;
  t8305 = t8134 + t8279;
  t21851 = Cos(var1[3]);
  t21843 = Sin(var1[3]);
  t11373 = t8455*t10627;
  t12413 = t11821*t11844;
  t15337 = t11373 + t12413;
  t21625 = t8165*t6957*t21618;
  t21626 = -1.*t7761*t21618*t8175;
  t21629 = t21625 + t21626;
  t21649 = t8165*t6957*t21643;
  t21653 = -1.*t7761*t21643*t8175;
  t21657 = t21649 + t21653;
  t21852 = -1.*t8165*t6957;
  t21855 = t7761*t8175;
  t21858 = t21852 + t21855;
  t21873 = t6957*t7761*t21618;
  t21876 = t8165*t21618*t8175;
  t21877 = t21873 + t21876;
  t21883 = t2032*t15337;
  t21885 = -1.*t21207*t21629;
  t21888 = t21883 + t21885;
  t21902 = t6957*t7761*t21643;
  t21906 = t8165*t21643*t8175;
  t21907 = t21902 + t21906;
  t21917 = t2032*t21618;
  t21928 = -1.*t21207*t21657;
  t21930 = t21917 + t21928;
  t21241 = t15337*t21207;
  t21633 = t2032*t21629;
  t21637 = t21241 + t21633;
  t22009 = -1.*t8165;
  t22017 = 1. + t22009;
  t22024 = -1.*t8455;
  t22025 = 1. + t22024;
  t22027 = -0.28121*t22025;
  t22038 = -1.*t10627;
  t22041 = 1. + t22038;
  t22044 = -0.50321*t22041;
  t22048 = -0.19821*t10627;
  t22050 = t22044 + t22048;
  t22060 = t8455*t22050;
  t22063 = 0.305*t11821*t11844;
  t22069 = t22027 + t22060 + t22063;
  t22078 = -0.15121*t22017;
  t22083 = t8165*t22069;
  t22094 = t22078 + t22083;
  t22018 = 0.15121*t22017;
  t22019 = 0.15121*t8165;
  t22023 = 0.15121*t7761;
  t22071 = t7761*t22069;
  t22072 = t22018 + t22019 + t22023 + t22071;
  t22119 = 0.28121*t11821;
  t22126 = t22050*t11821;
  t22127 = -0.305*t8455*t11844;
  t22129 = t22119 + t22126 + t22127;
  t22141 = t6957*t22094;
  t22143 = -1.*t22072*t8175;
  t22146 = t22141 + t22143;
  t22077 = t6957*t22072;
  t22108 = t22094*t8175;
  t22110 = t22077 + t22108;
  t22139 = t22129*t21207;
  t22147 = t2032*t22146;
  t22151 = t22139 + t22147;
  t22154 = t2032*t22129;
  t22156 = -1.*t21207*t22146;
  t22157 = t22154 + t22156;
  t21639 = t21618*t21207;
  t21659 = t2032*t21657;
  t21664 = t21639 + t21659;
  t22114 = -1.*t21858*t22110;
  t22166 = t21877*t22110;
  t22206 = t21858*t22110;
  t22263 = -1.*t21907*t22110;
  t22416 = -1.*t21877*t22110;
  t22447 = t21907*t22110;
  t22687 = -1.*t22129*t15337;
  t22709 = t22129*t21618;
  p_output1[0]=t21664*var2[0] + t2032*t8305*var2[1] + t21637*var2[2];
  p_output1[1]=(t21851*t21907 - 1.*t21843*t21930)*var2[0] + (t21851*t21858 + t21207*t21843*t8305)*var2[1] + (t21851*t21877 - 1.*t21843*t21888)*var2[2];
  p_output1[2]=(t21843*t21907 + t21851*t21930)*var2[0] + (t21843*t21858 - 1.*t21207*t21851*t8305)*var2[1] + (t21843*t21877 + t21851*t21888)*var2[2];
  p_output1[3]=(t2032*(t21637*t22151 + t21888*t22157 + t22166)*t8305 + t21637*(t22114 - 1.*t2032*t22151*t8305 + t21207*t22157*t8305))*var2[0] + (t21664*(-1.*t21637*t22151 - 1.*t21888*t22157 + t22416) + t21637*(t21664*t22151 + t21930*t22157 + t22447))*var2[1] + (t2032*(-1.*t21664*t22151 - 1.*t21930*t22157 + t22263)*t8305 + t21664*(t22206 + t2032*t22151*t8305 - 1.*t21207*t22157*t8305))*var2[2];
  p_output1[4]=(t21858*(t15337*t22129 + t21629*t22146 + t22166) + t21877*(t22114 - 1.*t22146*t8305))*var2[0] + (t21907*(-1.*t21629*t22146 + t22416 + t22687) + t21877*(t21657*t22146 + t22447 + t22709))*var2[1] + (t21858*(-1.*t21618*t22129 - 1.*t21657*t22146 + t22263) + t21907*(t22206 + t22146*t8305))*var2[2];
  p_output1[5]=t15337*(-1.*t22094*t7761 + t22072*t8165)*var2[0] + (t21618*(t22687 - 1.*t21618*t22072*t7761 - 1.*t21618*t22094*t8165) + t15337*(t22709 + t21643*t22072*t7761 + t21643*t22094*t8165))*var2[1] + t21618*(t22094*t7761 - 1.*t22072*t8165)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(0.15121*t15337 + 0.15121*t21643)*var2[0] + (-0.15121 + t21618*(-1.*t21618*t22069 + t22687) + t15337*(t21643*t22069 + t22709))*var2[1];
  p_output1[10]=(0.28121*t11844 - 0.305*t10627*t11844 + t11844*t22050)*var2[0] + (0.28121*t10627 + 0.305*Power(t11844,2) + t10627*t22050)*var2[2];
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

#include "fRlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
