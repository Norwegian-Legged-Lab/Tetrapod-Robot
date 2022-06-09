/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:52 GMT+02:00
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
  double t3184;
  double t174;
  double t3974;
  double t4149;
  double t4350;
  double t4434;
  double t4436;
  double t5749;
  double t3562;
  double t3621;
  double t3682;
  double t3698;
  double t3731;
  double t5899;
  double t5924;
  double t5475;
  double t5955;
  double t6000;
  double t6008;
  double t6019;
  double t6020;
  double t6022;
  double t3997;
  double t4190;
  double t4314;
  double t6797;
  double t6801;
  double t6796;
  double t6690;
  double t6697;
  double t6703;
  double t6788;
  double t6798;
  double t6804;
  double t6807;
  double t6932;
  double t6821;
  double t6822;
  double t6826;
  double t6819;
  double t6933;
  double t6935;
  double t6937;
  double t6571;
  double t6572;
  double t6587;
  double t6591;
  double t6600;
  double t5941;
  double t6546;
  double t6568;
  double t7049;
  double t7054;
  double t7056;
  double t7027;
  double t7030;
  double t7038;
  double t7058;
  double t7059;
  double t7060;
  double t7077;
  double t7078;
  double t7079;
  double t7143;
  double t7144;
  double t7149;
  double t7061;
  double t7065;
  double t7070;
  double t7075;
  double t7084;
  double t7085;
  double t7087;
  double t7103;
  double t7131;
  double t7161;
  double t7165;
  double t7167;
  double t7176;
  double t7272;
  double t7286;
  double t7298;
  double t7299;
  double t7301;
  double t7347;
  double t7335;
  double t6795;
  double t6813;
  double t6817;
  double t7442;
  double t7320;
  double t7321;
  double t7324;
  double t7446;
  double t7534;
  double t7543;
  t3184 = Cos(var1[11]);
  t174 = Sin(var1[11]);
  t3974 = Cos(var1[10]);
  t4149 = Sin(var1[10]);
  t4350 = t3974*t3184;
  t4434 = t4149*t174;
  t4436 = t4350 + t4434;
  t5749 = Cos(var1[9]);
  t3562 = -1.*t3184;
  t3621 = 1. + t3562;
  t3682 = -0.50321*t3621;
  t3698 = -0.19821*t3184;
  t3731 = t3682 + t3698;
  t5899 = -1.*t5749;
  t5924 = 1. + t5899;
  t5475 = Sin(var1[9]);
  t5955 = -1.*t3974;
  t6000 = 1. + t5955;
  t6008 = -0.28121*t6000;
  t6019 = t3974*t3731;
  t6020 = 0.305*t4149*t174;
  t6022 = t6008 + t6019 + t6020;
  t3997 = -1.*t3974*t3184;
  t4190 = -1.*t4149*t174;
  t4314 = t3997 + t4190;
  t6797 = Cos(var1[5]);
  t6801 = Sin(var1[5]);
  t6796 = Cos(var1[4]);
  t6690 = -1.*t3184*t4149;
  t6697 = t3974*t174;
  t6703 = t6690 + t6697;
  t6788 = Sin(var1[4]);
  t6798 = t5749*t6797*t4314;
  t6804 = -1.*t5475*t4314*t6801;
  t6807 = t6798 + t6804;
  t6932 = Cos(var1[3]);
  t6821 = t6797*t5475*t4314;
  t6822 = t5749*t4314*t6801;
  t6826 = t6821 + t6822;
  t6819 = Sin(var1[3]);
  t6933 = t6796*t6703;
  t6935 = -1.*t6788*t6807;
  t6937 = t6933 + t6935;
  t6571 = 0.15121*t5924;
  t6572 = 0.15121*t5749;
  t6587 = 0.15121*t5475;
  t6591 = t5475*t6022;
  t6600 = t6571 + t6572 + t6587 + t6591;
  t5941 = -0.15121*t5924;
  t6546 = t5749*t6022;
  t6568 = t5941 + t6546;
  t7049 = -1.*t5749*t6797;
  t7054 = t5475*t6801;
  t7056 = t7049 + t7054;
  t7027 = t6797*t5475*t6703;
  t7030 = t5749*t6703*t6801;
  t7038 = t7027 + t7030;
  t7058 = t6797*t6600;
  t7059 = t6568*t6801;
  t7060 = t7058 + t7059;
  t7077 = t6797*t6568;
  t7078 = -1.*t6600*t6801;
  t7079 = t7077 + t7078;
  t7143 = t5749*t6797*t6703;
  t7144 = -1.*t5475*t6703*t6801;
  t7149 = t7143 + t7144;
  t7061 = -1.*t7056*t7060;
  t7065 = t6797*t5475;
  t7070 = t5749*t6801;
  t7075 = t7065 + t7070;
  t7084 = 0.28121*t4149;
  t7085 = t3731*t4149;
  t7087 = -0.305*t3974*t174;
  t7103 = t7084 + t7085 + t7087;
  t7131 = t7038*t7060;
  t7161 = t4436*t6788;
  t7165 = t6796*t7149;
  t7167 = t7161 + t7165;
  t7176 = t7103*t6788;
  t7272 = t6796*t7079;
  t7286 = t7176 + t7272;
  t7298 = t6796*t7103;
  t7299 = -1.*t6788*t7079;
  t7301 = t7298 + t7299;
  t7347 = -1.*t7103*t4436;
  t7335 = t7103*t6703;
  t6795 = t6703*t6788;
  t6813 = t6796*t6807;
  t6817 = t6795 + t6813;
  t7442 = -1.*t7038*t7060;
  t7320 = t6796*t4436;
  t7321 = -1.*t6788*t7149;
  t7324 = t7320 + t7321;
  t7446 = t6826*t7060;
  t7534 = t7056*t7060;
  t7543 = -1.*t6826*t7060;
  p_output1[0]=t6817*var2[0] + (t6826*t6932 - 1.*t6819*t6937)*var2[1] + (t6819*t6826 + t6932*t6937)*var2[2] + (t7167*(t7061 - 1.*t6796*t7075*t7286 + t6788*t7075*t7301) + t6796*t7075*(t7131 + t7167*t7286 + t7301*t7324))*var2[3] + (t7038*(t7061 - 1.*t7075*t7079) + t7056*(t4436*t7103 + t7131 + t7079*t7149))*var2[4] + t4436*(-1.*t5475*t6568 + t5749*t6600)*var2[5] + (0.15121*t4314 + 0.15121*t4436)*var2[9] + (0.28121*t174 - 0.305*t174*t3184 + t174*t3731)*var2[10];
  p_output1[1]=t6796*t7075*var2[0] + (t6932*t7056 + t6788*t6819*t7075)*var2[1] + (t6819*t7056 - 1.*t6788*t6932*t7075)*var2[2] + (t6817*(-1.*t7167*t7286 - 1.*t7301*t7324 + t7442) + t7167*(t6817*t7286 + t6937*t7301 + t7446))*var2[3] + (t6826*(-1.*t7079*t7149 + t7347 + t7442) + t7038*(t6807*t7079 + t7335 + t7446))*var2[4] + (t4436*(t4314*t5749*t6568 + t4314*t5475*t6600 + t7335) + t6703*(-1.*t5749*t6568*t6703 - 1.*t5475*t6600*t6703 + t7347))*var2[5] + (-0.15121 + t4436*(t4314*t6022 + t7335) + t6703*(-1.*t6022*t6703 + t7347))*var2[9];
  p_output1[2]=t7167*var2[0] + (t6932*t7038 - 1.*t6819*t7324)*var2[1] + (t6819*t7038 + t6932*t7324)*var2[2] + (t6817*(t6796*t7075*t7286 - 1.*t6788*t7075*t7301 + t7534) + t6796*t7075*(-1.*t6817*t7286 - 1.*t6937*t7301 + t7543))*var2[3] + (t6826*(t7075*t7079 + t7534) + t7056*(-1.*t6807*t7079 - 1.*t6703*t7103 + t7543))*var2[4] + (t5475*t6568 - 1.*t5749*t6600)*t6703*var2[5] + (0.305*Power(t174,2) + 0.28121*t3184 + t3184*t3731)*var2[10] - 0.305*var2[11];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
