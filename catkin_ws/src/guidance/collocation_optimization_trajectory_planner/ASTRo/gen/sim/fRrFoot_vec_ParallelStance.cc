/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:43 GMT+02:00
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
  double t3716;
  double t13983;
  double t13955;
  double t14054;
  double t14072;
  double t14050;
  double t14083;
  double t13980;
  double t14092;
  double t14094;
  double t14095;
  double t13999;
  double t14088;
  double t14165;
  double t14172;
  double t14518;
  double t13981;
  double t14000;
  double t14001;
  double t14660;
  double t14654;
  double t14059;
  double t14086;
  double t14087;
  double t14096;
  double t14098;
  double t14099;
  double t14646;
  double t14647;
  double t14648;
  double t14662;
  double t14664;
  double t14666;
  double t14682;
  double t14683;
  double t14684;
  double t14691;
  double t14692;
  double t14693;
  double t14701;
  double t14702;
  double t14703;
  double t14708;
  double t14709;
  double t14710;
  double t14090;
  double t14100;
  double t14102;
  double t14738;
  double t14741;
  double t14742;
  double t14773;
  double t14774;
  double t14792;
  double t14797;
  double t14800;
  double t14801;
  double t14803;
  double t14804;
  double t14805;
  double t14808;
  double t14811;
  double t14853;
  double t14858;
  double t14764;
  double t14765;
  double t14815;
  double t14820;
  double t14869;
  double t14870;
  double t14871;
  double t14873;
  double t14876;
  double t14881;
  double t14882;
  double t14849;
  double t14861;
  double t14862;
  double t14874;
  double t14883;
  double t14885;
  double t14887;
  double t14905;
  double t14907;
  double t14124;
  double t14650;
  double t14651;
  double t14864;
  double t14912;
  double t14919;
  double t14933;
  double t14998;
  double t15098;
  double t15164;
  double t15169;
  t3716 = Cos(var1[4]);
  t13983 = Cos(var1[15]);
  t13955 = Cos(var1[5]);
  t14054 = Cos(var1[17]);
  t14072 = Sin(var1[16]);
  t14050 = Cos(var1[16]);
  t14083 = Sin(var1[17]);
  t13980 = Sin(var1[15]);
  t14092 = -1.*t14054*t14072;
  t14094 = t14050*t14083;
  t14095 = t14092 + t14094;
  t13999 = Sin(var1[5]);
  t14088 = Sin(var1[4]);
  t14165 = -1.*t14050*t14054;
  t14172 = -1.*t14072*t14083;
  t14518 = t14165 + t14172;
  t13981 = t13955*t13980;
  t14000 = t13983*t13999;
  t14001 = t13981 + t14000;
  t14660 = Cos(var1[3]);
  t14654 = Sin(var1[3]);
  t14059 = t14050*t14054;
  t14086 = t14072*t14083;
  t14087 = t14059 + t14086;
  t14096 = t13983*t13955*t14095;
  t14098 = -1.*t13980*t14095*t13999;
  t14099 = t14096 + t14098;
  t14646 = t13983*t13955*t14518;
  t14647 = -1.*t13980*t14518*t13999;
  t14648 = t14646 + t14647;
  t14662 = -1.*t13983*t13955;
  t14664 = t13980*t13999;
  t14666 = t14662 + t14664;
  t14682 = t13955*t13980*t14095;
  t14683 = t13983*t14095*t13999;
  t14684 = t14682 + t14683;
  t14691 = t3716*t14087;
  t14692 = -1.*t14088*t14099;
  t14693 = t14691 + t14692;
  t14701 = t13955*t13980*t14518;
  t14702 = t13983*t14518*t13999;
  t14703 = t14701 + t14702;
  t14708 = t3716*t14095;
  t14709 = -1.*t14088*t14648;
  t14710 = t14708 + t14709;
  t14090 = t14087*t14088;
  t14100 = t3716*t14099;
  t14102 = t14090 + t14100;
  t14738 = -1.*t13983;
  t14741 = 1. + t14738;
  t14742 = -0.15121*t14741;
  t14773 = -1.*t14050;
  t14774 = 1. + t14773;
  t14792 = -0.28121*t14774;
  t14797 = -1.*t14054;
  t14800 = 1. + t14797;
  t14801 = -0.50321*t14800;
  t14803 = -0.19821*t14054;
  t14804 = t14801 + t14803;
  t14805 = t14050*t14804;
  t14808 = 0.305*t14072*t14083;
  t14811 = t14792 + t14805 + t14808;
  t14853 = t13983*t14811;
  t14858 = t14742 + t14853;
  t14764 = -0.15121*t13983;
  t14765 = 0.15121*t13980;
  t14815 = t13980*t14811;
  t14820 = t14742 + t14764 + t14765 + t14815;
  t14869 = 0.28121*t14072;
  t14870 = t14804*t14072;
  t14871 = -0.305*t14050*t14083;
  t14873 = t14869 + t14870 + t14871;
  t14876 = t13955*t14858;
  t14881 = -1.*t14820*t13999;
  t14882 = t14876 + t14881;
  t14849 = t13955*t14820;
  t14861 = t14858*t13999;
  t14862 = t14849 + t14861;
  t14874 = t14873*t14088;
  t14883 = t3716*t14882;
  t14885 = t14874 + t14883;
  t14887 = t3716*t14873;
  t14905 = -1.*t14088*t14882;
  t14907 = t14887 + t14905;
  t14124 = t14095*t14088;
  t14650 = t3716*t14648;
  t14651 = t14124 + t14650;
  t14864 = -1.*t14666*t14862;
  t14912 = t14684*t14862;
  t14919 = t14666*t14862;
  t14933 = -1.*t14703*t14862;
  t14998 = -1.*t14684*t14862;
  t15098 = t14703*t14862;
  t15164 = -1.*t14873*t14087;
  t15169 = t14873*t14095;
  p_output1[0]=t14651*var2[0] + t14001*t3716*var2[1] + t14102*var2[2];
  p_output1[1]=(t14660*t14703 - 1.*t14654*t14710)*var2[0] + (t14001*t14088*t14654 + t14660*t14666)*var2[1] + (t14660*t14684 - 1.*t14654*t14693)*var2[2];
  p_output1[2]=(t14654*t14703 + t14660*t14710)*var2[0] + (-1.*t14001*t14088*t14660 + t14654*t14666)*var2[1] + (t14654*t14684 + t14660*t14693)*var2[2];
  p_output1[3]=(t14001*(t14102*t14885 + t14693*t14907 + t14912)*t3716 + t14102*(t14864 + t14001*t14088*t14907 - 1.*t14001*t14885*t3716))*var2[0] + (t14651*(-1.*t14102*t14885 - 1.*t14693*t14907 + t14998) + t14102*(t14651*t14885 + t14710*t14907 + t15098))*var2[1] + (t14001*(-1.*t14651*t14885 - 1.*t14710*t14907 + t14933)*t3716 + t14651*(-1.*t14001*t14088*t14907 + t14919 + t14001*t14885*t3716))*var2[2];
  p_output1[4]=(t14684*(t14864 - 1.*t14001*t14882) + t14666*(t14087*t14873 + t14099*t14882 + t14912))*var2[0] + (t14703*(-1.*t14099*t14882 + t14998 + t15164) + t14684*(t14648*t14882 + t15098 + t15169))*var2[1] + (t14703*(t14001*t14882 + t14919) + t14666*(-1.*t14095*t14873 - 1.*t14648*t14882 + t14933))*var2[2];
  p_output1[5]=t14087*(t13983*t14820 - 1.*t13980*t14858)*var2[0] + (t14095*(-1.*t13980*t14095*t14820 - 1.*t13983*t14095*t14858 + t15164) + t14087*(t13980*t14518*t14820 + t13983*t14518*t14858 + t15169))*var2[1] + t14095*(-1.*t13983*t14820 + t13980*t14858)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t14087 - 0.15121*t14518)*var2[0] + (-0.15121 + t14095*(-1.*t14095*t14811 + t15164) + t14087*(t14518*t14811 + t15169))*var2[1];
  p_output1[16]=(0.28121*t14083 - 0.305*t14054*t14083 + t14083*t14804)*var2[0] + (0.28121*t14054 + 0.305*Power(t14083,2) + t14054*t14804)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
