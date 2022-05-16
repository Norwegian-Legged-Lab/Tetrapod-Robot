/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:43:17 GMT+02:00
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
  double t45445;
  double t45446;
  double t45447;
  double t45448;
  double t45487;
  double t45594;
  double t45443;
  double t45789;
  double t4896;
  double t45207;
  double t46147;
  double t46157;
  double t46161;
  double t46167;
  double t46169;
  double t46333;
  double t46334;
  double t46335;
  double t46351;
  double t46352;
  double t46353;
  double t46355;
  double t45596;
  double t45597;
  double t45527;
  double t45591;
  double t46148;
  double t46149;
  double t46214;
  double t46221;
  double t46373;
  double t46445;
  double t46520;
  double t46521;
  double t46523;
  double t46529;
  double t46532;
  double t46536;
  double t46542;
  double t46547;
  double t46549;
  double t46550;
  double t46552;
  double t46553;
  double t46572;
  double t46574;
  double t46575;
  double t46577;
  double t46578;
  double t46579;
  double t46581;
  double t46582;
  double t46583;
  double t46591;
  double t46593;
  double t46594;
  double t46643;
  double t46656;
  double t46652;
  double t46660;
  double t46662;
  double t46664;
  double t46665;
  double t46670;
  double t46762;
  double t46770;
  double t46771;
  double t46776;
  double t46780;
  double t46782;
  double t46787;
  double t46788;
  double t46789;
  double t46817;
  double t46818;
  double t46819;
  double t46822;
  double t46823;
  double t46824;
  double t46833;
  double t46836;
  double t46840;
  double t46854;
  double t46860;
  double t46862;
  double t46869;
  double t46871;
  double t46877;
  double t46889;
  double t46890;
  double t46891;
  double t46561;
  double t46563;
  double t46565;
  double t46566;
  double t46915;
  double t46916;
  double t46917;
  double t46920;
  double t46921;
  double t46900;
  double t46935;
  double t46936;
  double t46937;
  double t46939;
  double t46940;
  double t46941;
  double t46943;
  double t46944;
  double t46945;
  double t46954;
  double t46955;
  double t46956;
  double t47011;
  double t47012;
  double t47013;
  double t47016;
  double t47017;
  double t47018;
  double t47029;
  double t47031;
  double t47035;
  double t47047;
  double t47048;
  double t47050;
  double t47054;
  double t47056;
  double t47057;
  double t47131;
  double t47173;
  double t47209;
  double t47233;
  double t47234;
  double t47064;
  double t47250;
  double t47251;
  double t47253;
  double t47256;
  double t47257;
  double t47259;
  double t47260;
  double t47261;
  double t47291;
  double t47292;
  double t47293;
  t45445 = Cos(var1[15]);
  t45446 = -1.*t45445;
  t45447 = 1. + t45446;
  t45448 = -0.15121*t45447;
  t45487 = Sin(var1[15]);
  t45594 = Sin(var1[4]);
  t45443 = Cos(var1[5]);
  t45789 = Sin(var1[5]);
  t4896 = Cos(var1[4]);
  t45207 = Sin(var1[16]);
  t46147 = Cos(var1[16]);
  t46157 = -1.*t45445*t45443*t45594;
  t46161 = t45487*t45594*t45789;
  t46167 = t46157 + t46161;
  t46169 = Cos(var1[17]);
  t46333 = t4896*t45207;
  t46334 = t46147*t46167;
  t46335 = t46333 + t46334;
  t46351 = Sin(var1[17]);
  t46352 = t46147*t4896;
  t46353 = -1.*t45207*t46167;
  t46355 = t46352 + t46353;
  t45596 = 0.15121*t45487;
  t45597 = t45448 + t45596;
  t45527 = -0.15121*t45487;
  t45591 = t45448 + t45527;
  t46148 = -1.*t46147;
  t46149 = 1. + t46148;
  t46214 = -1.*t46169;
  t46221 = 1. + t46214;
  t46373 = -1.*t4896*t45443*t45487;
  t46445 = -1.*t45445*t4896*t45789;
  t46520 = t46373 + t46445;
  t46521 = -0.28121*t46149*t46520;
  t46523 = -0.50321*t46147*t46221*t46520;
  t46529 = 0.50321*t45207*t46351*t46520;
  t46532 = -1.*t45445*t4896*t45443;
  t46536 = t4896*t45487*t45789;
  t46542 = t46532 + t46536;
  t46547 = -0.15121*t46542;
  t46549 = t46147*t46169*t46520;
  t46550 = t45207*t46351*t46520;
  t46552 = t46549 + t46550;
  t46553 = -0.23321*t46552;
  t46572 = t45445*t4896*t45443;
  t46574 = -1.*t4896*t45487*t45789;
  t46575 = t46572 + t46574;
  t46577 = -1.*t45207*t45594;
  t46578 = -1.*t46147*t46575;
  t46579 = t46577 + t46578;
  t46581 = t46147*t45594;
  t46582 = -1.*t45207*t46575;
  t46583 = t46581 + t46582;
  t46591 = t45207*t45594;
  t46593 = t46147*t46575;
  t46594 = t46591 + t46593;
  t46643 = Cos(var1[3]);
  t46656 = Sin(var1[3]);
  t46652 = t46643*t45443*t45594;
  t46660 = -1.*t46656*t45789;
  t46662 = t46652 + t46660;
  t46664 = -1.*t45443*t46656;
  t46665 = -1.*t46643*t45594*t45789;
  t46670 = t46664 + t46665;
  t46762 = t45445*t46662;
  t46770 = t45487*t46670;
  t46771 = t46762 + t46770;
  t46776 = -1.*t46643*t4896*t45207;
  t46780 = t46147*t46771;
  t46782 = t46776 + t46780;
  t46787 = -1.*t46147*t46643*t4896;
  t46788 = -1.*t45207*t46771;
  t46789 = t46787 + t46788;
  t46817 = t45445*t4896*t45443*t46656;
  t46818 = -1.*t4896*t45487*t46656*t45789;
  t46819 = t46817 + t46818;
  t46822 = t45207*t46656*t45594;
  t46823 = t46147*t46819;
  t46824 = t46822 + t46823;
  t46833 = t46147*t46656*t45594;
  t46836 = -1.*t45207*t46819;
  t46840 = t46833 + t46836;
  t46854 = -1.*t45443*t46656*t45594;
  t46860 = -1.*t46643*t45789;
  t46862 = t46854 + t46860;
  t46869 = t46643*t45443;
  t46871 = -1.*t46656*t45594*t45789;
  t46877 = t46869 + t46871;
  t46889 = t45487*t46862;
  t46890 = t45445*t46877;
  t46891 = t46889 + t46890;
  t46561 = -0.15121*t45445;
  t46563 = t46561 + t45527;
  t46565 = 0.15121*t45445;
  t46566 = t46565 + t45527;
  t46915 = t45443*t46656*t45594;
  t46916 = t46643*t45789;
  t46917 = t46915 + t46916;
  t46920 = -1.*t45487*t46917;
  t46921 = t46920 + t46890;
  t46900 = -1.*t45487*t46877;
  t46935 = t45445*t46917;
  t46936 = t45487*t46877;
  t46937 = t46935 + t46936;
  t46939 = t4896*t45207*t46656;
  t46940 = -1.*t46147*t46937;
  t46941 = t46939 + t46940;
  t46943 = -1.*t46147*t4896*t46656;
  t46944 = -1.*t45207*t46937;
  t46945 = t46943 + t46944;
  t46954 = -1.*t4896*t45207*t46656;
  t46955 = t46147*t46937;
  t46956 = t46954 + t46955;
  t47011 = -1.*t45445*t46643*t4896*t45443;
  t47012 = t46643*t4896*t45487*t45789;
  t47013 = t47011 + t47012;
  t47016 = -1.*t46643*t45207*t45594;
  t47017 = t46147*t47013;
  t47018 = t47016 + t47017;
  t47029 = -1.*t46147*t46643*t45594;
  t47031 = -1.*t45207*t47013;
  t47035 = t47029 + t47031;
  t47047 = t45443*t46656;
  t47048 = t46643*t45594*t45789;
  t47050 = t47047 + t47048;
  t47054 = t45487*t46662;
  t47056 = t45445*t47050;
  t47057 = t47054 + t47056;
  t47131 = -1.*t46643*t45443*t45594;
  t47173 = t46656*t45789;
  t47209 = t47131 + t47173;
  t47233 = -1.*t45487*t47209;
  t47234 = t47233 + t47056;
  t47064 = -1.*t45487*t47050;
  t47250 = t45445*t47209;
  t47251 = t45487*t47050;
  t47253 = t47250 + t47251;
  t47256 = -1.*t46147*t47253;
  t47257 = t46776 + t47256;
  t47259 = t46147*t46643*t4896;
  t47260 = -1.*t45207*t47253;
  t47261 = t47259 + t47260;
  t47291 = t46643*t4896*t45207;
  t47292 = t46147*t47253;
  t47293 = t47291 + t47292;
  p_output1[0]=1.;
  p_output1[1]=-1.*t45443*t45591*t45594 + t45594*t45597*t45789 - 0.15121*(t45443*t45487*t45594 + t45445*t45594*t45789) - 0.28121*t46149*t46167 - 0.50321*t46221*t46335 - 0.50321*t46351*t46355 - 0.23321*(t46169*t46335 - 1.*t46351*t46355) + 0.28121*t45207*t4896;
  p_output1[2]=t46521 + t46523 + t46529 + t46547 + t46553 - 1.*t45443*t45597*t4896 - 1.*t45591*t45789*t4896;
  p_output1[3]=t46521 + t46523 + t46529 + t46547 + t46553 + t45443*t46563*t4896 - 1.*t45789*t46566*t4896;
  p_output1[4]=0.28121*t45594*t46147 - 0.28121*t45207*t46575 - 0.50321*t46351*t46579 - 0.50321*t46221*t46583 - 0.23321*(-1.*t46351*t46579 + t46169*t46583);
  p_output1[5]=-0.50321*t46169*t46583 - 0.50321*t46351*t46594 - 0.23321*(-1.*t46169*t46583 - 1.*t46351*t46594);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=t45591*t46662 + t45597*t46670 - 0.15121*(-1.*t45487*t46662 + t45445*t46670) - 0.28121*t46149*t46771 - 0.50321*t46221*t46782 - 0.50321*t46351*t46789 - 0.23321*(t46169*t46782 - 1.*t46351*t46789) - 0.28121*t45207*t46643*t4896;
  p_output1[9]=0.28121*t45207*t45594*t46656 - 0.28121*t46149*t46819 - 0.50321*t46221*t46824 - 0.50321*t46351*t46840 - 0.23321*(t46169*t46824 - 1.*t46351*t46840) + t45443*t45591*t46656*t4896 - 1.*t45597*t45789*t46656*t4896 - 0.15121*(-1.*t45443*t45487*t46656*t4896 - 1.*t45445*t45789*t46656*t4896);
  p_output1[10]=t45597*t46862 + t45591*t46877 - 0.28121*t46149*t46891 - 0.50321*t46147*t46221*t46891 + 0.50321*t45207*t46351*t46891 - 0.23321*(t46147*t46169*t46891 + t45207*t46351*t46891) - 0.15121*(t45445*t46862 + t46900);
  p_output1[11]=t46566*t46877 + t46563*t46917 - 0.15121*(t46900 - 1.*t45445*t46917) - 0.28121*t46149*t46921 - 0.50321*t46147*t46221*t46921 + 0.50321*t45207*t46351*t46921 - 0.23321*(t46147*t46169*t46921 + t45207*t46351*t46921);
  p_output1[12]=-0.28121*t45207*t46937 - 0.50321*t46351*t46941 - 0.50321*t46221*t46945 - 0.23321*(-1.*t46351*t46941 + t46169*t46945) - 0.28121*t46147*t46656*t4896;
  p_output1[13]=-0.50321*t46169*t46945 - 0.50321*t46351*t46956 - 0.23321*(-1.*t46169*t46945 - 1.*t46351*t46956);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=t45597*t46877 + t45591*t46917 - 0.15121*t46921 - 0.28121*t46149*t46937 - 0.50321*t46351*t46945 - 0.50321*t46221*t46956 - 0.23321*(-1.*t46351*t46945 + t46169*t46956) - 0.28121*t45207*t46656*t4896;
  p_output1[17]=-0.28121*t45207*t45594*t46643 - 0.28121*t46149*t47013 - 0.50321*t46221*t47018 - 0.50321*t46351*t47035 - 0.23321*(t46169*t47018 - 1.*t46351*t47035) - 1.*t45443*t45591*t46643*t4896 + t45597*t45789*t46643*t4896 - 0.15121*(t45443*t45487*t46643*t4896 + t45445*t45789*t46643*t4896);
  p_output1[18]=t45597*t46662 + t45591*t47050 - 0.28121*t46149*t47057 - 0.50321*t46147*t46221*t47057 + 0.50321*t45207*t46351*t47057 - 0.23321*(t46147*t46169*t47057 + t45207*t46351*t47057) - 0.15121*(t46762 + t47064);
  p_output1[19]=t46566*t47050 + t46563*t47209 - 0.15121*(t47064 - 1.*t45445*t47209) - 0.28121*t46149*t47234 - 0.50321*t46147*t46221*t47234 + 0.50321*t45207*t46351*t47234 - 0.23321*(t46147*t46169*t47234 + t45207*t46351*t47234);
  p_output1[20]=-0.28121*t45207*t47253 - 0.50321*t46351*t47257 - 0.50321*t46221*t47261 - 0.23321*(-1.*t46351*t47257 + t46169*t47261) + 0.28121*t46147*t46643*t4896;
  p_output1[21]=-0.50321*t46169*t47261 - 0.50321*t46351*t47293 - 0.23321*(-1.*t46169*t47261 - 1.*t46351*t47293);
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
