/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:04:29 GMT+02:00
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
  double t14821;
  double t788;
  double t834;
  double t14867;
  double t15063;
  double t15093;
  double t15109;
  double t14880;
  double t14944;
  double t15117;
  double t14922;
  double t15119;
  double t298;
  double t15278;
  double t15293;
  double t15309;
  double t3607;
  double t14870;
  double t14874;
  double t15116;
  double t15130;
  double t15139;
  double t15388;
  double t15245;
  double t15256;
  double t15257;
  double t15347;
  double t15311;
  double t15312;
  double t15336;
  double t15366;
  double t15378;
  double t15385;
  double t15389;
  double t15393;
  double t15394;
  double t15426;
  double t15427;
  double t15428;
  double t15439;
  double t15440;
  double t15445;
  double t15453;
  double t15456;
  double t15457;
  double t15276;
  double t15341;
  double t15344;
  double t15507;
  double t15522;
  double t15527;
  double t15538;
  double t15540;
  double t15542;
  double t15543;
  double t15544;
  double t15545;
  double t15547;
  double t15552;
  double t15553;
  double t15555;
  double t15557;
  double t15562;
  double t15568;
  double t15588;
  double t15600;
  double t15601;
  double t15604;
  double t15619;
  double t15627;
  double t15628;
  double t15630;
  double t15635;
  double t15640;
  double t15641;
  double t15580;
  double t15612;
  double t15615;
  double t15632;
  double t15645;
  double t15655;
  double t15670;
  double t15672;
  double t15674;
  double t14876;
  double t15171;
  double t15244;
  double t15618;
  double t15702;
  double t15728;
  double t15751;
  double t15793;
  double t15832;
  double t15898;
  double t15917;
  t14821 = Cos(var1[7]);
  t788 = Cos(var1[8]);
  t834 = Sin(var1[7]);
  t14867 = Sin(var1[8]);
  t15063 = t14821*t788;
  t15093 = t834*t14867;
  t15109 = t15063 + t15093;
  t14880 = Cos(var1[4]);
  t14944 = Cos(var1[6]);
  t15117 = Sin(var1[5]);
  t14922 = Cos(var1[5]);
  t15119 = Sin(var1[6]);
  t298 = Sin(var1[4]);
  t15278 = t788*t834;
  t15293 = -1.*t14821*t14867;
  t15309 = t15278 + t15293;
  t3607 = -1.*t788*t834;
  t14870 = t14821*t14867;
  t14874 = t3607 + t14870;
  t15116 = t14922*t14944*t15109;
  t15130 = -1.*t15117*t15119*t15109;
  t15139 = t15116 + t15130;
  t15388 = Sin(var1[3]);
  t15245 = -1.*t14944*t15117;
  t15256 = -1.*t14922*t15119;
  t15257 = t15245 + t15256;
  t15347 = Cos(var1[3]);
  t15311 = t14922*t14944*t15309;
  t15312 = -1.*t15117*t15119*t15309;
  t15336 = t15311 + t15312;
  t15366 = t14944*t15117*t15109;
  t15378 = t14922*t15119*t15109;
  t15385 = t15366 + t15378;
  t15389 = t14880*t14874;
  t15393 = -1.*t298*t15139;
  t15394 = t15389 + t15393;
  t15426 = t14922*t14944;
  t15427 = -1.*t15117*t15119;
  t15428 = t15426 + t15427;
  t15439 = t14944*t15117*t15309;
  t15440 = t14922*t15119*t15309;
  t15445 = t15439 + t15440;
  t15453 = t14880*t15109;
  t15456 = -1.*t298*t15336;
  t15457 = t15453 + t15456;
  t15276 = t298*t15109;
  t15341 = t14880*t15336;
  t15344 = t15276 + t15341;
  t15507 = -1.*t14944;
  t15522 = 1. + t15507;
  t15527 = 0.15121*t15522;
  t15538 = -1.*t14821;
  t15540 = 1. + t15538;
  t15542 = 0.28121*t15540;
  t15543 = -1.*t788;
  t15544 = 1. + t15543;
  t15545 = 0.50321*t15544;
  t15547 = 0.19821*t788;
  t15552 = t15545 + t15547;
  t15553 = t14821*t15552;
  t15555 = -0.305*t834*t14867;
  t15557 = t15542 + t15553 + t15555;
  t15562 = t14944*t15557;
  t15568 = t15527 + t15562;
  t15588 = 0.15121*t14944;
  t15600 = -0.15121*t15119;
  t15601 = t15119*t15557;
  t15604 = t15527 + t15588 + t15600 + t15601;
  t15619 = 0.28121*t834;
  t15627 = -1.*t15552*t834;
  t15628 = -0.305*t14821*t14867;
  t15630 = t15619 + t15627 + t15628;
  t15635 = t14922*t15568;
  t15640 = -1.*t15117*t15604;
  t15641 = t15635 + t15640;
  t15580 = t15117*t15568;
  t15612 = t14922*t15604;
  t15615 = t15580 + t15612;
  t15632 = t298*t15630;
  t15645 = t14880*t15641;
  t15655 = t15632 + t15645;
  t15670 = t14880*t15630;
  t15672 = -1.*t298*t15641;
  t15674 = t15670 + t15672;
  t14876 = t298*t14874;
  t15171 = t14880*t15139;
  t15244 = t14876 + t15171;
  t15618 = -1.*t15428*t15615;
  t15702 = t15445*t15615;
  t15728 = -1.*t15445*t15615;
  t15751 = t15385*t15615;
  t15793 = t15428*t15615;
  t15832 = -1.*t15385*t15615;
  t15898 = -1.*t15630*t15109;
  t15917 = t15630*t14874;
  p_output1[0]=t15244;
  p_output1[1]=t14880*t15257;
  p_output1[2]=t15344;
  p_output1[3]=t15347*t15385 - 1.*t15388*t15394;
  p_output1[4]=t15347*t15428 + t15257*t15388*t298;
  p_output1[5]=t15347*t15445 - 1.*t15388*t15457;
  p_output1[6]=t15385*t15388 + t15347*t15394;
  p_output1[7]=t15388*t15428 - 1.*t15257*t15347*t298;
  p_output1[8]=t15388*t15445 + t15347*t15457;
  p_output1[9]=t14880*t15257*(t15344*t15655 + t15457*t15674 + t15702) + t15344*(t15618 - 1.*t14880*t15257*t15655 + t15257*t15674*t298);
  p_output1[10]=t15244*(-1.*t15344*t15655 - 1.*t15457*t15674 + t15728) + t15344*(t15244*t15655 + t15394*t15674 + t15751);
  p_output1[11]=t14880*t15257*(-1.*t15244*t15655 - 1.*t15394*t15674 + t15832) + t15244*(t14880*t15257*t15655 + t15793 - 1.*t15257*t15674*t298);
  p_output1[12]=t15445*(t15618 - 1.*t15257*t15641) + t15428*(t15109*t15630 + t15336*t15641 + t15702);
  p_output1[13]=t15385*(-1.*t15336*t15641 + t15728 + t15898) + t15445*(t15139*t15641 + t15751 + t15917);
  p_output1[14]=t15385*(t15257*t15641 + t15793) + t15428*(-1.*t14874*t15630 - 1.*t15139*t15641 + t15832);
  p_output1[15]=t15109*(t15119*t15568 - 1.*t14944*t15604);
  p_output1[16]=t14874*(-1.*t14944*t15309*t15568 - 1.*t15119*t15309*t15604 + t15898) + t15109*(t14944*t15109*t15568 + t15109*t15119*t15604 + t15917);
  p_output1[17]=t14874*(-1.*t15119*t15568 + t14944*t15604);
  p_output1[18]=0;
  p_output1[19]=-0.15121 + t14874*(-1.*t15309*t15557 + t15898) + t15109*(t15109*t15557 + t15917);
  p_output1[20]=0.15121*t14874 + 0.15121*t15309;
  p_output1[21]=0.28121*t14867 - 1.*t14867*t15552 - 0.305*t14867*t788;
  p_output1[22]=0;
  p_output1[23]=0.305*Power(t14867,2) + 0.28121*t788 - 1.*t15552*t788;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=-0.305;
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
