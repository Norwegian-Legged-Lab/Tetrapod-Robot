/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:17 GMT+02:00
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
  double t4143;
  double t4573;
  double t4561;
  double t7987;
  double t7992;
  double t7982;
  double t7993;
  double t4570;
  double t4576;
  double t7997;
  double t7999;
  double t8000;
  double t7981;
  double t7991;
  double t7994;
  double t7995;
  double t4571;
  double t4577;
  double t7974;
  double t8023;
  double t8021;
  double t8001;
  double t8003;
  double t8004;
  double t8008;
  double t8010;
  double t8011;
  double t8013;
  double t8015;
  double t8016;
  double t8024;
  double t8027;
  double t8028;
  double t8034;
  double t8035;
  double t8036;
  double t8039;
  double t8040;
  double t8041;
  double t8062;
  double t8066;
  double t8070;
  double t8072;
  double t8073;
  double t8074;
  double t7996;
  double t8005;
  double t8006;
  double t8113;
  double t8114;
  double t8115;
  double t8117;
  double t8118;
  double t8121;
  double t8123;
  double t8124;
  double t8126;
  double t8127;
  double t8130;
  double t8131;
  double t8132;
  double t8134;
  double t8135;
  double t8136;
  double t8139;
  double t8141;
  double t8142;
  double t8143;
  double t8150;
  double t8151;
  double t8152;
  double t8153;
  double t8155;
  double t8159;
  double t8160;
  double t8137;
  double t8144;
  double t8145;
  double t8154;
  double t8161;
  double t8163;
  double t8166;
  double t8167;
  double t8168;
  double t8012;
  double t8017;
  double t8018;
  double t8149;
  double t8173;
  double t8180;
  double t8185;
  double t8195;
  double t8200;
  double t8229;
  double t8233;
  t4143 = Cos(var1[4]);
  t4573 = Cos(var1[5]);
  t4561 = Cos(var1[6]);
  t7987 = Cos(var1[8]);
  t7992 = Sin(var1[7]);
  t7982 = Cos(var1[7]);
  t7993 = Sin(var1[8]);
  t4570 = Sin(var1[5]);
  t4576 = Sin(var1[6]);
  t7997 = t7987*t7992;
  t7999 = -1.*t7982*t7993;
  t8000 = t7997 + t7999;
  t7981 = Sin(var1[4]);
  t7991 = t7982*t7987;
  t7994 = t7992*t7993;
  t7995 = t7991 + t7994;
  t4571 = -1.*t4561*t4570;
  t4577 = -1.*t4573*t4576;
  t7974 = t4571 + t4577;
  t8023 = Cos(var1[3]);
  t8021 = Sin(var1[3]);
  t8001 = t4573*t4561*t8000;
  t8003 = -1.*t4570*t4576*t8000;
  t8004 = t8001 + t8003;
  t8008 = -1.*t7987*t7992;
  t8010 = t7982*t7993;
  t8011 = t8008 + t8010;
  t8013 = t4573*t4561*t7995;
  t8015 = -1.*t4570*t4576*t7995;
  t8016 = t8013 + t8015;
  t8024 = t4573*t4561;
  t8027 = -1.*t4570*t4576;
  t8028 = t8024 + t8027;
  t8034 = t4561*t4570*t8000;
  t8035 = t4573*t4576*t8000;
  t8036 = t8034 + t8035;
  t8039 = t4143*t7995;
  t8040 = -1.*t7981*t8004;
  t8041 = t8039 + t8040;
  t8062 = t4561*t4570*t7995;
  t8066 = t4573*t4576*t7995;
  t8070 = t8062 + t8066;
  t8072 = t4143*t8011;
  t8073 = -1.*t7981*t8016;
  t8074 = t8072 + t8073;
  t7996 = t7981*t7995;
  t8005 = t4143*t8004;
  t8006 = t7996 + t8005;
  t8113 = -1.*t4561;
  t8114 = 1. + t8113;
  t8115 = 0.15121*t8114;
  t8117 = -1.*t7982;
  t8118 = 1. + t8117;
  t8121 = 0.28121*t8118;
  t8123 = -1.*t7987;
  t8124 = 1. + t8123;
  t8126 = 0.50321*t8124;
  t8127 = 0.19821*t7987;
  t8130 = t8126 + t8127;
  t8131 = t7982*t8130;
  t8132 = -0.305*t7992*t7993;
  t8134 = t8121 + t8131 + t8132;
  t8135 = t4561*t8134;
  t8136 = t8115 + t8135;
  t8139 = 0.15121*t4561;
  t8141 = -0.15121*t4576;
  t8142 = t4576*t8134;
  t8143 = t8115 + t8139 + t8141 + t8142;
  t8150 = 0.28121*t7992;
  t8151 = -1.*t8130*t7992;
  t8152 = -0.305*t7982*t7993;
  t8153 = t8150 + t8151 + t8152;
  t8155 = t4573*t8136;
  t8159 = -1.*t4570*t8143;
  t8160 = t8155 + t8159;
  t8137 = t4570*t8136;
  t8144 = t4573*t8143;
  t8145 = t8137 + t8144;
  t8154 = t7981*t8153;
  t8161 = t4143*t8160;
  t8163 = t8154 + t8161;
  t8166 = t4143*t8153;
  t8167 = -1.*t7981*t8160;
  t8168 = t8166 + t8167;
  t8012 = t7981*t8011;
  t8017 = t4143*t8016;
  t8018 = t8012 + t8017;
  t8149 = -1.*t8028*t8145;
  t8173 = t8036*t8145;
  t8180 = t8028*t8145;
  t8185 = -1.*t8070*t8145;
  t8195 = -1.*t8036*t8145;
  t8200 = t8070*t8145;
  t8229 = -1.*t8153*t7995;
  t8233 = t8153*t8011;
  p_output1[0]=t8018*var2[0] + t4143*t7974*var2[1] + t8006*var2[2];
  p_output1[1]=(t8023*t8070 - 1.*t8021*t8074)*var2[0] + (t7974*t7981*t8021 + t8023*t8028)*var2[1] + (t8023*t8036 - 1.*t8021*t8041)*var2[2];
  p_output1[2]=(t8021*t8070 + t8023*t8074)*var2[0] + (-1.*t7974*t7981*t8023 + t8021*t8028)*var2[1] + (t8021*t8036 + t8023*t8041)*var2[2];
  p_output1[3]=(t8006*(t8149 - 1.*t4143*t7974*t8163 + t7974*t7981*t8168) + t4143*t7974*(t8006*t8163 + t8041*t8168 + t8173))*var2[0] + (t8018*(-1.*t8006*t8163 - 1.*t8041*t8168 + t8195) + t8006*(t8018*t8163 + t8074*t8168 + t8200))*var2[1] + (t8018*(t4143*t7974*t8163 - 1.*t7974*t7981*t8168 + t8180) + t4143*t7974*(-1.*t8018*t8163 - 1.*t8074*t8168 + t8185))*var2[2];
  p_output1[4]=(t8036*(t8149 - 1.*t7974*t8160) + t8028*(t7995*t8153 + t8004*t8160 + t8173))*var2[0] + (t8070*(-1.*t8004*t8160 + t8195 + t8229) + t8036*(t8016*t8160 + t8200 + t8233))*var2[1] + (t8070*(t7974*t8160 + t8180) + t8028*(-1.*t8011*t8153 - 1.*t8016*t8160 + t8185))*var2[2];
  p_output1[5]=t7995*(t4576*t8136 - 1.*t4561*t8143)*var2[0] + (t8011*(-1.*t4561*t8000*t8136 - 1.*t4576*t8000*t8143 + t8229) + t7995*(t4561*t7995*t8136 + t4576*t7995*t8143 + t8233))*var2[1] + t8011*(-1.*t4576*t8136 + t4561*t8143)*var2[2];
  p_output1[6]=(-0.15121 + t8011*(-1.*t8000*t8134 + t8229) + t7995*(t7995*t8134 + t8233))*var2[1] + (0.15121*t8000 + 0.15121*t8011)*var2[2];
  p_output1[7]=(0.28121*t7993 - 0.305*t7987*t7993 - 1.*t7993*t8130)*var2[0] + (0.28121*t7987 + 0.305*Power(t7993,2) - 1.*t7987*t8130)*var2[2];
  p_output1[8]=-0.305*var2[2];
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

#include "fFlFoot_vec_ParallelStance2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
