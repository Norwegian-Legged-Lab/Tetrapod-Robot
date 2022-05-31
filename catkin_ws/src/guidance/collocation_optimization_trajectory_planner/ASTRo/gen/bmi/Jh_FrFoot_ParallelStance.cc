/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:22 GMT+02:00
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
  double t1053;
  double t892;
  double t1027;
  double t1062;
  double t1168;
  double t1169;
  double t1170;
  double t1146;
  double t1160;
  double t1173;
  double t1156;
  double t1178;
  double t1076;
  double t1268;
  double t1272;
  double t1277;
  double t1043;
  double t1074;
  double t1075;
  double t1171;
  double t1185;
  double t1217;
  double t27613;
  double t1220;
  double t1229;
  double t1250;
  double t2313;
  double t1281;
  double t1282;
  double t1284;
  double t2317;
  double t2428;
  double t2554;
  double t29703;
  double t29750;
  double t29817;
  double t31021;
  double t31033;
  double t31034;
  double t31100;
  double t31103;
  double t31116;
  double t31146;
  double t31179;
  double t31241;
  double t1267;
  double t1285;
  double t2310;
  double t32430;
  double t32469;
  double t32717;
  double t32775;
  double t32844;
  double t32948;
  double t32950;
  double t32991;
  double t32993;
  double t33046;
  double t33065;
  double t33306;
  double t33378;
  double t33746;
  double t34070;
  double t34191;
  double t32471;
  double t32487;
  double t32703;
  double t33538;
  double t33585;
  double t34357;
  double t34401;
  double t34451;
  double t34549;
  double t34658;
  double t34686;
  double t34691;
  double t33613;
  double t34258;
  double t34331;
  double t34575;
  double t34702;
  double t34731;
  double t34767;
  double t34768;
  double t34769;
  double t1134;
  double t1218;
  double t1219;
  double t34340;
  double t34775;
  double t34784;
  double t34790;
  double t34797;
  double t34803;
  double t34822;
  double t34826;
  t1053 = Cos(var1[13]);
  t892 = Cos(var1[14]);
  t1027 = Sin(var1[13]);
  t1062 = Sin(var1[14]);
  t1168 = t1053*t892;
  t1169 = t1027*t1062;
  t1170 = t1168 + t1169;
  t1146 = Cos(var1[4]);
  t1160 = Cos(var1[5]);
  t1173 = Sin(var1[12]);
  t1156 = Cos(var1[12]);
  t1178 = Sin(var1[5]);
  t1076 = Sin(var1[4]);
  t1268 = t892*t1027;
  t1272 = -1.*t1053*t1062;
  t1277 = t1268 + t1272;
  t1043 = -1.*t892*t1027;
  t1074 = t1053*t1062;
  t1075 = t1043 + t1074;
  t1171 = t1156*t1160*t1170;
  t1185 = -1.*t1173*t1170*t1178;
  t1217 = t1171 + t1185;
  t27613 = Sin(var1[3]);
  t1220 = -1.*t1160*t1173;
  t1229 = -1.*t1156*t1178;
  t1250 = t1220 + t1229;
  t2313 = Cos(var1[3]);
  t1281 = t1156*t1160*t1277;
  t1282 = -1.*t1173*t1277*t1178;
  t1284 = t1281 + t1282;
  t2317 = t1160*t1173*t1170;
  t2428 = t1156*t1170*t1178;
  t2554 = t2317 + t2428;
  t29703 = t1146*t1075;
  t29750 = -1.*t1076*t1217;
  t29817 = t29703 + t29750;
  t31021 = t1156*t1160;
  t31033 = -1.*t1173*t1178;
  t31034 = t31021 + t31033;
  t31100 = t1160*t1173*t1277;
  t31103 = t1156*t1277*t1178;
  t31116 = t31100 + t31103;
  t31146 = t1146*t1170;
  t31179 = -1.*t1076*t1284;
  t31241 = t31146 + t31179;
  t1267 = t1170*t1076;
  t1285 = t1146*t1284;
  t2310 = t1267 + t1285;
  t32430 = -1.*t1156;
  t32469 = 1. + t32430;
  t32717 = -1.*t1053;
  t32775 = 1. + t32717;
  t32844 = 0.28121*t32775;
  t32948 = -1.*t892;
  t32950 = 1. + t32948;
  t32991 = 0.50321*t32950;
  t32993 = 0.19821*t892;
  t33046 = t32991 + t32993;
  t33065 = t1053*t33046;
  t33306 = -0.305*t1027*t1062;
  t33378 = t32844 + t33065 + t33306;
  t33746 = 0.15121*t32469;
  t34070 = t1156*t33378;
  t34191 = t33746 + t34070;
  t32471 = -0.15121*t32469;
  t32487 = -0.15121*t1156;
  t32703 = -0.15121*t1173;
  t33538 = t1173*t33378;
  t33585 = t32471 + t32487 + t32703 + t33538;
  t34357 = 0.28121*t1027;
  t34401 = -1.*t33046*t1027;
  t34451 = -0.305*t1053*t1062;
  t34549 = t34357 + t34401 + t34451;
  t34658 = t1160*t34191;
  t34686 = -1.*t33585*t1178;
  t34691 = t34658 + t34686;
  t33613 = t1160*t33585;
  t34258 = t34191*t1178;
  t34331 = t33613 + t34258;
  t34575 = t34549*t1076;
  t34702 = t1146*t34691;
  t34731 = t34575 + t34702;
  t34767 = t1146*t34549;
  t34768 = -1.*t1076*t34691;
  t34769 = t34767 + t34768;
  t1134 = t1075*t1076;
  t1218 = t1146*t1217;
  t1219 = t1134 + t1218;
  t34340 = -1.*t31034*t34331;
  t34775 = t31116*t34331;
  t34784 = -1.*t31116*t34331;
  t34790 = t2554*t34331;
  t34797 = t31034*t34331;
  t34803 = -1.*t2554*t34331;
  t34822 = -1.*t34549*t1170;
  t34826 = t34549*t1075;
  p_output1[0]=t1219;
  p_output1[1]=t1146*t1250;
  p_output1[2]=t2310;
  p_output1[3]=t2313*t2554 - 1.*t27613*t29817;
  p_output1[4]=t1076*t1250*t27613 + t2313*t31034;
  p_output1[5]=t2313*t31116 - 1.*t27613*t31241;
  p_output1[6]=t2554*t27613 + t2313*t29817;
  p_output1[7]=-1.*t1076*t1250*t2313 + t27613*t31034;
  p_output1[8]=t27613*t31116 + t2313*t31241;
  p_output1[9]=t2310*(t34340 - 1.*t1146*t1250*t34731 + t1076*t1250*t34769) + t1146*t1250*(t2310*t34731 + t31241*t34769 + t34775);
  p_output1[10]=t1219*(-1.*t2310*t34731 - 1.*t31241*t34769 + t34784) + t2310*(t1219*t34731 + t29817*t34769 + t34790);
  p_output1[11]=t1219*(t1146*t1250*t34731 - 1.*t1076*t1250*t34769 + t34797) + t1146*t1250*(-1.*t1219*t34731 - 1.*t29817*t34769 + t34803);
  p_output1[12]=t31116*(t34340 - 1.*t1250*t34691) + t31034*(t1170*t34549 + t1284*t34691 + t34775);
  p_output1[13]=t2554*(-1.*t1284*t34691 + t34784 + t34822) + t31116*(t1217*t34691 + t34790 + t34826);
  p_output1[14]=t2554*(t1250*t34691 + t34797) + t31034*(-1.*t1075*t34549 - 1.*t1217*t34691 + t34803);
  p_output1[15]=t1170*(-1.*t1156*t33585 + t1173*t34191);
  p_output1[16]=t1075*(-1.*t1173*t1277*t33585 - 1.*t1156*t1277*t34191 + t34822) + t1170*(t1170*t1173*t33585 + t1156*t1170*t34191 + t34826);
  p_output1[17]=t1075*(t1156*t33585 - 1.*t1173*t34191);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=-0.15121 + t1075*(-1.*t1277*t33378 + t34822) + t1170*(t1170*t33378 + t34826);
  p_output1[38]=-0.15121*t1075 - 0.15121*t1277;
  p_output1[39]=0.28121*t1062 - 1.*t1062*t33046 - 0.305*t1062*t892;
  p_output1[40]=0;
  p_output1[41]=0.305*Power(t1062,2) + 0.28121*t892 - 1.*t33046*t892;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-0.305;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
