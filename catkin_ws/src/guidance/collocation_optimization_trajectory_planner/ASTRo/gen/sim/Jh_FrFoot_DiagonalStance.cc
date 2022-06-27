/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:04 GMT+02:00
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
  double t132;
  double t46;
  double t92;
  double t151;
  double t307;
  double t316;
  double t317;
  double t250;
  double t289;
  double t330;
  double t279;
  double t334;
  double t170;
  double t600;
  double t601;
  double t602;
  double t124;
  double t155;
  double t167;
  double t329;
  double t359;
  double t365;
  double t757;
  double t380;
  double t388;
  double t430;
  double t713;
  double t681;
  double t682;
  double t684;
  double t714;
  double t716;
  double t732;
  double t781;
  double t814;
  double t929;
  double t1136;
  double t1149;
  double t1231;
  double t1315;
  double t1348;
  double t1351;
  double t1387;
  double t1413;
  double t1414;
  double t495;
  double t685;
  double t708;
  double t2943;
  double t3885;
  double t4599;
  double t4623;
  double t4661;
  double t4683;
  double t4698;
  double t4739;
  double t4752;
  double t4854;
  double t4880;
  double t4889;
  double t4951;
  double t5214;
  double t5215;
  double t5217;
  double t4519;
  double t4532;
  double t4588;
  double t4985;
  double t5143;
  double t5243;
  double t5287;
  double t5294;
  double t5305;
  double t5345;
  double t5351;
  double t5352;
  double t5180;
  double t5228;
  double t5241;
  double t5341;
  double t5374;
  double t5381;
  double t5813;
  double t6232;
  double t6320;
  double t216;
  double t366;
  double t367;
  double t5242;
  double t6558;
  double t6771;
  double t7669;
  double t8047;
  double t8372;
  double t9398;
  double t10010;
  t132 = Cos(var1[13]);
  t46 = Cos(var1[14]);
  t92 = Sin(var1[13]);
  t151 = Sin(var1[14]);
  t307 = t132*t46;
  t316 = t92*t151;
  t317 = t307 + t316;
  t250 = Cos(var1[4]);
  t289 = Cos(var1[5]);
  t330 = Sin(var1[12]);
  t279 = Cos(var1[12]);
  t334 = Sin(var1[5]);
  t170 = Sin(var1[4]);
  t600 = t46*t92;
  t601 = -1.*t132*t151;
  t602 = t600 + t601;
  t124 = -1.*t46*t92;
  t155 = t132*t151;
  t167 = t124 + t155;
  t329 = t279*t289*t317;
  t359 = -1.*t330*t317*t334;
  t365 = t329 + t359;
  t757 = Sin(var1[3]);
  t380 = -1.*t289*t330;
  t388 = -1.*t279*t334;
  t430 = t380 + t388;
  t713 = Cos(var1[3]);
  t681 = t279*t289*t602;
  t682 = -1.*t330*t602*t334;
  t684 = t681 + t682;
  t714 = t289*t330*t317;
  t716 = t279*t317*t334;
  t732 = t714 + t716;
  t781 = t250*t167;
  t814 = -1.*t170*t365;
  t929 = t781 + t814;
  t1136 = t279*t289;
  t1149 = -1.*t330*t334;
  t1231 = t1136 + t1149;
  t1315 = t289*t330*t602;
  t1348 = t279*t602*t334;
  t1351 = t1315 + t1348;
  t1387 = t250*t317;
  t1413 = -1.*t170*t684;
  t1414 = t1387 + t1413;
  t495 = t317*t170;
  t685 = t250*t684;
  t708 = t495 + t685;
  t2943 = -1.*t279;
  t3885 = 1. + t2943;
  t4599 = -1.*t132;
  t4623 = 1. + t4599;
  t4661 = 0.28121*t4623;
  t4683 = -1.*t46;
  t4698 = 1. + t4683;
  t4739 = 0.50321*t4698;
  t4752 = 0.19821*t46;
  t4854 = t4739 + t4752;
  t4880 = t132*t4854;
  t4889 = -0.305*t92*t151;
  t4951 = t4661 + t4880 + t4889;
  t5214 = 0.15121*t3885;
  t5215 = t279*t4951;
  t5217 = t5214 + t5215;
  t4519 = -0.15121*t3885;
  t4532 = -0.15121*t279;
  t4588 = -0.15121*t330;
  t4985 = t330*t4951;
  t5143 = t4519 + t4532 + t4588 + t4985;
  t5243 = 0.28121*t92;
  t5287 = -1.*t4854*t92;
  t5294 = -0.305*t132*t151;
  t5305 = t5243 + t5287 + t5294;
  t5345 = t289*t5217;
  t5351 = -1.*t5143*t334;
  t5352 = t5345 + t5351;
  t5180 = t289*t5143;
  t5228 = t5217*t334;
  t5241 = t5180 + t5228;
  t5341 = t5305*t170;
  t5374 = t250*t5352;
  t5381 = t5341 + t5374;
  t5813 = t250*t5305;
  t6232 = -1.*t170*t5352;
  t6320 = t5813 + t6232;
  t216 = t167*t170;
  t366 = t250*t365;
  t367 = t216 + t366;
  t5242 = -1.*t1231*t5241;
  t6558 = t1351*t5241;
  t6771 = -1.*t1351*t5241;
  t7669 = t732*t5241;
  t8047 = t1231*t5241;
  t8372 = -1.*t732*t5241;
  t9398 = -1.*t5305*t317;
  t10010 = t5305*t167;
  p_output1[0]=t367;
  p_output1[1]=t250*t430;
  p_output1[2]=t708;
  p_output1[3]=t713*t732 - 1.*t757*t929;
  p_output1[4]=t1231*t713 + t170*t430*t757;
  p_output1[5]=t1351*t713 - 1.*t1414*t757;
  p_output1[6]=t732*t757 + t713*t929;
  p_output1[7]=-1.*t170*t430*t713 + t1231*t757;
  p_output1[8]=t1414*t713 + t1351*t757;
  p_output1[9]=(t5242 - 1.*t250*t430*t5381 + t170*t430*t6320)*t708 + t250*t430*(t1414*t6320 + t6558 + t5381*t708);
  p_output1[10]=t367*(-1.*t1414*t6320 + t6771 - 1.*t5381*t708) + t708*(t367*t5381 + t7669 + t6320*t929);
  p_output1[11]=t367*(t250*t430*t5381 - 1.*t170*t430*t6320 + t8047) + t250*t430*(-1.*t367*t5381 + t8372 - 1.*t6320*t929);
  p_output1[12]=t1351*(t5242 - 1.*t430*t5352) + t1231*(t317*t5305 + t6558 + t5352*t684);
  p_output1[13]=t1351*(t10010 + t365*t5352 + t7669) + t732*(t6771 - 1.*t5352*t684 + t9398);
  p_output1[14]=t732*(t430*t5352 + t8047) + t1231*(-1.*t167*t5305 - 1.*t365*t5352 + t8372);
  p_output1[15]=t317*(-1.*t279*t5143 + t330*t5217);
  p_output1[16]=t317*(t10010 + t317*t330*t5143 + t279*t317*t5217) + t167*(-1.*t330*t5143*t602 - 1.*t279*t5217*t602 + t9398);
  p_output1[17]=t167*(t279*t5143 - 1.*t330*t5217);
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
  p_output1[37]=-0.15121 + t317*(t10010 + t317*t4951) + t167*(-1.*t4951*t602 + t9398);
  p_output1[38]=-0.15121*t167 - 0.15121*t602;
  p_output1[39]=0.28121*t151 - 0.305*t151*t46 - 1.*t151*t4854;
  p_output1[40]=0;
  p_output1[41]=0.305*Power(t151,2) + 0.28121*t46 - 1.*t46*t4854;
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

#include "Jh_FrFoot_DiagonalStance.hh"

namespace SymFunction
{

void Jh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
