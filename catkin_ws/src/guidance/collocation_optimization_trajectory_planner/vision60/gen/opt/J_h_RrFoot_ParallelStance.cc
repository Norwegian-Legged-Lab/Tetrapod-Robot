/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:25 GMT+02:00
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
  double t12692;
  double t4179;
  double t6093;
  double t13335;
  double t13362;
  double t12068;
  double t13397;
  double t11732;
  double t13398;
  double t13404;
  double t13413;
  double t13489;
  double t13493;
  double t13498;
  double t13502;
  double t13559;
  double t13626;
  double t13660;
  double t13663;
  double t13360;
  double t13361;
  double t11956;
  double t11964;
  double t13585;
  double t13608;
  double t13775;
  double t14395;
  double t15067;
  double t15255;
  double t15266;
  double t15276;
  double t15322;
  double t15323;
  double t15324;
  double t15331;
  double t15332;
  double t15333;
  double t15356;
  double t15357;
  double t15358;
  double t15360;
  double t15364;
  double t15366;
  double t15489;
  double t15490;
  double t15491;
  double t15515;
  double t15519;
  double t15527;
  double t15528;
  double t15529;
  double t15518;
  double t15521;
  double t15522;
  double t15535;
  double t15536;
  double t15537;
  double t15539;
  double t15540;
  double t15541;
  double t15543;
  double t15544;
  double t15545;
  double t15720;
  double t15721;
  double t15722;
  double t15727;
  double t15729;
  double t15736;
  double t15744;
  double t15746;
  double t15747;
  double t15769;
  double t15772;
  double t15773;
  double t15779;
  double t15780;
  double t15781;
  double t15783;
  double t15787;
  double t15788;
  double t15791;
  double t15792;
  double t15793;
  double t15816;
  double t15819;
  double t15820;
  double t15824;
  double t15827;
  double t15828;
  double t16010;
  double t16011;
  double t16015;
  double t16026;
  double t16030;
  double t16031;
  double t16034;
  double t16035;
  double t16036;
  double t16063;
  double t16073;
  double t16075;
  double t16080;
  double t16081;
  double t16082;
  double t16046;
  double t16218;
  double t16219;
  double t16224;
  double t16234;
  double t16236;
  double t16240;
  double t16243;
  double t16244;
  double t16245;
  double t16274;
  double t16279;
  double t16280;
  double t16282;
  double t16283;
  double t16284;
  double t16289;
  double t16290;
  double t16295;
  double t15531;
  double t16317;
  double t16318;
  double t16328;
  double t16329;
  double t16330;
  double t16341;
  double t16342;
  double t16343;
  double t16346;
  double t16347;
  double t16348;
  double t16350;
  double t16351;
  double t16352;
  double t16365;
  double t16366;
  double t16367;
  t12692 = Sin(var1[4]);
  t4179 = Cos(var1[4]);
  t6093 = Sin(var1[15]);
  t13335 = Cos(var1[15]);
  t13362 = Sin(var1[5]);
  t12068 = Cos(var1[5]);
  t13397 = Sin(var1[16]);
  t11732 = Cos(var1[16]);
  t13398 = t13335*t4179;
  t13404 = -1.*t6093*t12692*t13362;
  t13413 = t13398 + t13404;
  t13489 = Sin(var1[17]);
  t13493 = t12068*t13397*t12692;
  t13498 = t11732*t13413;
  t13502 = t13493 + t13498;
  t13559 = Cos(var1[17]);
  t13626 = -1.*t11732*t12068*t12692;
  t13660 = t13397*t13413;
  t13663 = t13626 + t13660;
  t13360 = -1.*t13335;
  t13361 = 1. + t13360;
  t11956 = -1.*t11732;
  t11964 = 1. + t11956;
  t13585 = -1.*t13559;
  t13608 = 1. + t13585;
  t13775 = t4179*t12068*t6093*t13397;
  t14395 = -1.*t11732*t4179*t13362;
  t15067 = t13775 + t14395;
  t15255 = t11732*t4179*t12068*t6093;
  t15266 = t4179*t13397*t13362;
  t15276 = t15255 + t15266;
  t15322 = -1.*t6093*t12692;
  t15323 = t13335*t4179*t13362;
  t15324 = t15322 + t15323;
  t15331 = t13335*t12692;
  t15332 = t4179*t6093*t13362;
  t15333 = t15331 + t15332;
  t15356 = -1.*t4179*t12068*t13397;
  t15357 = t11732*t15333;
  t15358 = t15356 + t15357;
  t15360 = -1.*t11732*t4179*t12068;
  t15364 = -1.*t13397*t15333;
  t15366 = t15360 + t15364;
  t15489 = t11732*t4179*t12068;
  t15490 = t13397*t15333;
  t15491 = t15489 + t15490;
  t15515 = Cos(var1[3]);
  t15519 = Sin(var1[3]);
  t15527 = -1.*t12068*t15519;
  t15528 = -1.*t15515*t12692*t13362;
  t15529 = t15527 + t15528;
  t15518 = t15515*t12068*t12692;
  t15521 = -1.*t15519*t13362;
  t15522 = t15518 + t15521;
  t15535 = -1.*t13335*t15515*t4179;
  t15536 = -1.*t6093*t15529;
  t15537 = t15535 + t15536;
  t15539 = -1.*t13397*t15522;
  t15540 = t11732*t15537;
  t15541 = t15539 + t15540;
  t15543 = t11732*t15522;
  t15544 = t13397*t15537;
  t15545 = t15543 + t15544;
  t15720 = t13335*t15519*t12692;
  t15721 = t4179*t6093*t15519*t13362;
  t15722 = t15720 + t15721;
  t15727 = -1.*t4179*t12068*t13397*t15519;
  t15729 = t11732*t15722;
  t15736 = t15727 + t15729;
  t15744 = t11732*t4179*t12068*t15519;
  t15746 = t13397*t15722;
  t15747 = t15744 + t15746;
  t15769 = -1.*t12068*t15519*t12692;
  t15772 = -1.*t15515*t13362;
  t15773 = t15769 + t15772;
  t15779 = t15515*t12068;
  t15780 = -1.*t15519*t12692*t13362;
  t15781 = t15779 + t15780;
  t15783 = -1.*t6093*t13397*t15773;
  t15787 = t11732*t15781;
  t15788 = t15783 + t15787;
  t15791 = -1.*t11732*t6093*t15773;
  t15792 = -1.*t13397*t15781;
  t15793 = t15791 + t15792;
  t15816 = t4179*t6093*t15519;
  t15819 = -1.*t13335*t15781;
  t15820 = t15816 + t15819;
  t15824 = -1.*t13335*t4179*t15519;
  t15827 = -1.*t6093*t15781;
  t15828 = t15824 + t15827;
  t16010 = t12068*t15519*t12692;
  t16011 = t15515*t13362;
  t16015 = t16010 + t16011;
  t16026 = -1.*t13397*t16015;
  t16030 = t11732*t15828;
  t16031 = t16026 + t16030;
  t16034 = -1.*t11732*t16015;
  t16035 = -1.*t13397*t15828;
  t16036 = t16034 + t16035;
  t16063 = t11732*t16015;
  t16073 = t13397*t15828;
  t16075 = t16063 + t16073;
  t16080 = -1.*t13489*t16031;
  t16081 = t13559*t16075;
  t16082 = t16080 + t16081;
  t16046 = t13559*t16031;
  t16218 = -1.*t13335*t15515*t12692;
  t16219 = -1.*t15515*t4179*t6093*t13362;
  t16224 = t16218 + t16219;
  t16234 = t15515*t4179*t12068*t13397;
  t16236 = t11732*t16224;
  t16240 = t16234 + t16236;
  t16243 = -1.*t11732*t15515*t4179*t12068;
  t16244 = t13397*t16224;
  t16245 = t16243 + t16244;
  t16274 = t12068*t15519;
  t16279 = t15515*t12692*t13362;
  t16280 = t16274 + t16279;
  t16282 = -1.*t6093*t13397*t15522;
  t16283 = t11732*t16280;
  t16284 = t16282 + t16283;
  t16289 = -1.*t11732*t6093*t15522;
  t16290 = -1.*t13397*t16280;
  t16295 = t16289 + t16290;
  t15531 = -1.*t15515*t4179*t6093;
  t16317 = -1.*t13335*t16280;
  t16318 = t15531 + t16317;
  t16328 = t13335*t15515*t4179;
  t16329 = -1.*t6093*t16280;
  t16330 = t16328 + t16329;
  t16341 = -1.*t15515*t12068*t12692;
  t16342 = t15519*t13362;
  t16343 = t16341 + t16342;
  t16346 = -1.*t13397*t16343;
  t16347 = t11732*t16330;
  t16348 = t16346 + t16347;
  t16350 = -1.*t11732*t16343;
  t16351 = -1.*t13397*t16330;
  t16352 = t16350 + t16351;
  t16365 = t11732*t16343;
  t16366 = t13397*t16330;
  t16367 = t16365 + t16366;
  p_output1[0]=1.;
  p_output1[1]=0.325*t11964*t12068*t12692 - 0.1575*t12692*t13361*t13362 + 0.325*t13397*t13413 - 0.575*t13489*t13502 - 0.575*t13608*t13663 - 0.0641*(t13502*t13559 + t13489*t13663) - 0.295*(-1.*t13489*t13502 + t13559*t13663) + 0.1575*t4179*t6093 - 0.2255*(t12692*t13335*t13362 + t4179*t6093);
  p_output1[2]=-0.575*t13608*t15067 - 0.575*t13489*t15276 - 0.295*(t13559*t15067 - 1.*t13489*t15276) - 0.0641*(t13489*t15067 + t13559*t15276) + 0.2255*t12068*t13335*t4179 + 0.1575*t12068*t13361*t4179 + 0.325*t11964*t13362*t4179 + 0.325*t12068*t13397*t4179*t6093;
  p_output1[3]=0.1575*t12692*t13335 + 0.325*t13397*t15324 - 0.575*t11732*t13489*t15324 - 0.575*t13397*t13608*t15324 - 0.0641*(t13397*t13489*t15324 + t11732*t13559*t15324) - 0.295*(-1.*t11732*t13489*t15324 + t13397*t13559*t15324) - 0.2255*t15333 + 0.1575*t13362*t4179*t6093;
  p_output1[4]=0.325*t11732*t15333 - 0.575*t13608*t15358 - 0.575*t13489*t15366 - 0.295*(t13559*t15358 - 1.*t13489*t15366) - 0.0641*(t13489*t15358 + t13559*t15366) - 0.325*t12068*t13397*t4179;
  p_output1[5]=-0.575*t13559*t15358 - 0.575*t13489*t15491 - 0.295*(-1.*t13559*t15358 - 1.*t13489*t15491) - 0.0641*(-1.*t13489*t15358 + t13559*t15491);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-0.325*t11964*t15522 - 0.1575*t13361*t15529 - 0.2255*(t13335*t15529 + t15531) + 0.325*t13397*t15537 - 0.575*t13489*t15541 - 0.575*t13608*t15545 - 0.0641*(t13559*t15541 + t13489*t15545) - 0.295*(-1.*t13489*t15541 + t13559*t15545) - 0.1575*t15515*t4179*t6093;
  p_output1[9]=0.325*t13397*t15722 - 0.575*t13489*t15736 - 0.575*t13608*t15747 - 0.0641*(t13559*t15736 + t13489*t15747) - 0.295*(-1.*t13489*t15736 + t13559*t15747) - 0.325*t11964*t12068*t15519*t4179 + 0.1575*t13361*t13362*t15519*t4179 + 0.1575*t12692*t15519*t6093 - 0.2255*(-1.*t13335*t13362*t15519*t4179 + t12692*t15519*t6093);
  p_output1[10]=-0.2255*t13335*t15773 - 0.1575*t13361*t15773 - 0.325*t11964*t15781 - 0.575*t13608*t15788 - 0.575*t13489*t15793 - 0.295*(t13559*t15788 - 1.*t13489*t15793) - 0.0641*(t13489*t15788 + t13559*t15793) - 0.325*t13397*t15773*t6093;
  p_output1[11]=0.325*t13397*t15820 - 0.575*t11732*t13489*t15820 - 0.575*t13397*t13608*t15820 - 0.0641*(t13397*t13489*t15820 + t11732*t13559*t15820) - 0.295*(-1.*t11732*t13489*t15820 + t13397*t13559*t15820) - 0.2255*t15828 - 0.1575*t13335*t15519*t4179 - 0.1575*t15781*t6093;
  p_output1[12]=0.325*t11732*t15828 - 0.325*t13397*t16015 - 0.575*t13608*t16031 - 0.575*t13489*t16036 - 0.0641*(t13489*t16031 + t13559*t16036) - 0.295*(-1.*t13489*t16036 + t16046);
  p_output1[13]=-0.575*t13559*t16031 - 0.575*t13489*t16075 - 0.295*(-1.*t13559*t16031 - 1.*t13489*t16075) - 0.0641*t16082;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.1575*t13361*t15781 + 0.325*t13397*t15828 - 0.325*t11964*t16015 - 0.575*t13489*t16031 - 0.575*t13608*t16075 - 0.0641*(t16046 + t13489*t16075) - 0.295*t16082 - 0.1575*t15519*t4179*t6093 - 0.2255*(t13335*t15781 - 1.*t15519*t4179*t6093);
  p_output1[17]=0.325*t13397*t16224 - 0.575*t13489*t16240 - 0.575*t13608*t16245 - 0.0641*(t13559*t16240 + t13489*t16245) - 0.295*(-1.*t13489*t16240 + t13559*t16245) + 0.325*t11964*t12068*t15515*t4179 - 0.1575*t13361*t13362*t15515*t4179 - 0.1575*t12692*t15515*t6093 - 0.2255*(t13335*t13362*t15515*t4179 - 1.*t12692*t15515*t6093);
  p_output1[18]=-0.2255*t13335*t15522 - 0.1575*t13361*t15522 - 0.325*t11964*t16280 - 0.575*t13608*t16284 - 0.575*t13489*t16295 - 0.295*(t13559*t16284 - 1.*t13489*t16295) - 0.0641*(t13489*t16284 + t13559*t16295) - 0.325*t13397*t15522*t6093;
  p_output1[19]=0.325*t13397*t16318 - 0.575*t11732*t13489*t16318 - 0.575*t13397*t13608*t16318 - 0.0641*(t13397*t13489*t16318 + t11732*t13559*t16318) - 0.295*(-1.*t11732*t13489*t16318 + t13397*t13559*t16318) - 0.2255*t16330 + 0.1575*t13335*t15515*t4179 - 0.1575*t16280*t6093;
  p_output1[20]=0.325*t11732*t16330 - 0.325*t13397*t16343 - 0.575*t13608*t16348 - 0.575*t13489*t16352 - 0.295*(t13559*t16348 - 1.*t13489*t16352) - 0.0641*(t13489*t16348 + t13559*t16352);
  p_output1[21]=-0.575*t13559*t16348 - 0.575*t13489*t16367 - 0.295*(-1.*t13559*t16348 - 1.*t13489*t16367) - 0.0641*(-1.*t13489*t16348 + t13559*t16367);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_h_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
