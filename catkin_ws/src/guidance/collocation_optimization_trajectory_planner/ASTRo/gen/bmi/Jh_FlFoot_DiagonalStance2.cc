/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:17 GMT+02:00
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
  double t1496;
  double t20;
  double t393;
  double t3748;
  double t20032;
  double t20257;
  double t21125;
  double t15104;
  double t19932;
  double t22823;
  double t16054;
  double t22901;
  double t14;
  double t23334;
  double t23340;
  double t23367;
  double t1420;
  double t12448;
  double t15007;
  double t21135;
  double t22905;
  double t22908;
  double t24342;
  double t22941;
  double t23095;
  double t23261;
  double t23913;
  double t23407;
  double t23465;
  double t23770;
  double t23947;
  double t23954;
  double t23986;
  double t24347;
  double t24420;
  double t24425;
  double t24788;
  double t25118;
  double t25151;
  double t25354;
  double t25394;
  double t25566;
  double t25576;
  double t25594;
  double t25609;
  double t23321;
  double t23787;
  double t23824;
  double t26155;
  double t26160;
  double t26166;
  double t26168;
  double t26174;
  double t26230;
  double t26268;
  double t26432;
  double t26434;
  double t26450;
  double t26451;
  double t26471;
  double t26539;
  double t26574;
  double t26588;
  double t26594;
  double t26668;
  double t26702;
  double t26706;
  double t26724;
  double t26797;
  double t26807;
  double t26808;
  double t26810;
  double t27126;
  double t27134;
  double t27138;
  double t26605;
  double t26784;
  double t26785;
  double t26868;
  double t27142;
  double t27169;
  double t27183;
  double t27191;
  double t27199;
  double t15009;
  double t22931;
  double t22937;
  double t26794;
  double t27225;
  double t27242;
  double t27290;
  double t27356;
  double t27383;
  double t27586;
  double t27596;
  t1496 = Cos(var1[7]);
  t20 = Cos(var1[8]);
  t393 = Sin(var1[7]);
  t3748 = Sin(var1[8]);
  t20032 = t1496*t20;
  t20257 = t393*t3748;
  t21125 = t20032 + t20257;
  t15104 = Cos(var1[4]);
  t19932 = Cos(var1[6]);
  t22823 = Sin(var1[5]);
  t16054 = Cos(var1[5]);
  t22901 = Sin(var1[6]);
  t14 = Sin(var1[4]);
  t23334 = t20*t393;
  t23340 = -1.*t1496*t3748;
  t23367 = t23334 + t23340;
  t1420 = -1.*t20*t393;
  t12448 = t1496*t3748;
  t15007 = t1420 + t12448;
  t21135 = t16054*t19932*t21125;
  t22905 = -1.*t22823*t22901*t21125;
  t22908 = t21135 + t22905;
  t24342 = Sin(var1[3]);
  t22941 = -1.*t19932*t22823;
  t23095 = -1.*t16054*t22901;
  t23261 = t22941 + t23095;
  t23913 = Cos(var1[3]);
  t23407 = t16054*t19932*t23367;
  t23465 = -1.*t22823*t22901*t23367;
  t23770 = t23407 + t23465;
  t23947 = t19932*t22823*t21125;
  t23954 = t16054*t22901*t21125;
  t23986 = t23947 + t23954;
  t24347 = t15104*t15007;
  t24420 = -1.*t14*t22908;
  t24425 = t24347 + t24420;
  t24788 = t16054*t19932;
  t25118 = -1.*t22823*t22901;
  t25151 = t24788 + t25118;
  t25354 = t19932*t22823*t23367;
  t25394 = t16054*t22901*t23367;
  t25566 = t25354 + t25394;
  t25576 = t15104*t21125;
  t25594 = -1.*t14*t23770;
  t25609 = t25576 + t25594;
  t23321 = t14*t21125;
  t23787 = t15104*t23770;
  t23824 = t23321 + t23787;
  t26155 = -1.*t19932;
  t26160 = 1. + t26155;
  t26166 = 0.15121*t26160;
  t26168 = -1.*t1496;
  t26174 = 1. + t26168;
  t26230 = 0.28121*t26174;
  t26268 = -1.*t20;
  t26432 = 1. + t26268;
  t26434 = 0.50321*t26432;
  t26450 = 0.23321*t20;
  t26451 = t26434 + t26450;
  t26471 = t1496*t26451;
  t26539 = -0.27*t393*t3748;
  t26574 = t26230 + t26471 + t26539;
  t26588 = t19932*t26574;
  t26594 = t26166 + t26588;
  t26668 = 0.15121*t19932;
  t26702 = -0.15121*t22901;
  t26706 = t22901*t26574;
  t26724 = t26166 + t26668 + t26702 + t26706;
  t26797 = 0.28121*t393;
  t26807 = -1.*t26451*t393;
  t26808 = -0.27*t1496*t3748;
  t26810 = t26797 + t26807 + t26808;
  t27126 = t16054*t26594;
  t27134 = -1.*t22823*t26724;
  t27138 = t27126 + t27134;
  t26605 = t22823*t26594;
  t26784 = t16054*t26724;
  t26785 = t26605 + t26784;
  t26868 = t14*t26810;
  t27142 = t15104*t27138;
  t27169 = t26868 + t27142;
  t27183 = t15104*t26810;
  t27191 = -1.*t14*t27138;
  t27199 = t27183 + t27191;
  t15009 = t14*t15007;
  t22931 = t15104*t22908;
  t22937 = t15009 + t22931;
  t26794 = -1.*t25151*t26785;
  t27225 = t25566*t26785;
  t27242 = -1.*t25566*t26785;
  t27290 = t23986*t26785;
  t27356 = t25151*t26785;
  t27383 = -1.*t23986*t26785;
  t27586 = -1.*t26810*t21125;
  t27596 = t26810*t15007;
  p_output1[0]=t22937;
  p_output1[1]=t15104*t23261;
  p_output1[2]=t23824;
  p_output1[3]=t23913*t23986 - 1.*t24342*t24425;
  p_output1[4]=t14*t23261*t24342 + t23913*t25151;
  p_output1[5]=t23913*t25566 - 1.*t24342*t25609;
  p_output1[6]=t23986*t24342 + t23913*t24425;
  p_output1[7]=-1.*t14*t23261*t23913 + t24342*t25151;
  p_output1[8]=t24342*t25566 + t23913*t25609;
  p_output1[9]=t23824*(t26794 - 1.*t15104*t23261*t27169 + t14*t23261*t27199) + t15104*t23261*(t23824*t27169 + t25609*t27199 + t27225);
  p_output1[10]=t22937*(-1.*t23824*t27169 - 1.*t25609*t27199 + t27242) + t23824*(t22937*t27169 + t24425*t27199 + t27290);
  p_output1[11]=t22937*(t15104*t23261*t27169 - 1.*t14*t23261*t27199 + t27356) + t15104*t23261*(-1.*t22937*t27169 - 1.*t24425*t27199 + t27383);
  p_output1[12]=t25566*(t26794 - 1.*t23261*t27138) + t25151*(t21125*t26810 + t23770*t27138 + t27225);
  p_output1[13]=t23986*(-1.*t23770*t27138 + t27242 + t27586) + t25566*(t22908*t27138 + t27290 + t27596);
  p_output1[14]=t23986*(t23261*t27138 + t27356) + t25151*(-1.*t15007*t26810 - 1.*t22908*t27138 + t27383);
  p_output1[15]=t21125*(t22901*t26594 - 1.*t19932*t26724);
  p_output1[16]=t15007*(-1.*t19932*t23367*t26594 - 1.*t22901*t23367*t26724 + t27586) + t21125*(t19932*t21125*t26594 + t21125*t22901*t26724 + t27596);
  p_output1[17]=t15007*(-1.*t22901*t26594 + t19932*t26724);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t15007*(-1.*t23367*t26574 + t27586) + t21125*(t21125*t26574 + t27596);
  p_output1[20]=0.15121*t15007 + 0.15121*t23367;
  p_output1[21]=0.28121*t3748 - 0.27*t20*t3748 - 1.*t26451*t3748;
  p_output1[22]=0;
  p_output1[23]=0.28121*t20 - 1.*t20*t26451 + 0.27*Power(t3748,2);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.27;
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
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "Jh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void Jh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
