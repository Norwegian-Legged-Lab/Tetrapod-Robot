/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:48 GMT+02:00
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
  double t13507;
  double t6918;
  double t12985;
  double t13627;
  double t14015;
  double t13492;
  double t18129;
  double t13485;
  double t18756;
  double t18815;
  double t18818;
  double t18893;
  double t18922;
  double t18923;
  double t18924;
  double t18936;
  double t19037;
  double t19056;
  double t19112;
  double t13692;
  double t13960;
  double t13486;
  double t13489;
  double t18942;
  double t19031;
  double t19408;
  double t19417;
  double t19430;
  double t19433;
  double t19434;
  double t19435;
  double t19451;
  double t19452;
  double t19453;
  double t19457;
  double t19458;
  double t19459;
  double t19642;
  double t19643;
  double t19648;
  double t19651;
  double t19652;
  double t19653;
  double t19683;
  double t19692;
  double t19693;
  double t19713;
  double t19716;
  double t19720;
  double t19724;
  double t19725;
  double t19715;
  double t19717;
  double t19718;
  double t19734;
  double t19738;
  double t19739;
  double t19741;
  double t19742;
  double t19743;
  double t19748;
  double t19752;
  double t19754;
  double t19777;
  double t19867;
  double t19958;
  double t19960;
  double t19964;
  double t19969;
  double t19975;
  double t19979;
  double t19980;
  double t20003;
  double t20005;
  double t20011;
  double t20025;
  double t20027;
  double t20030;
  double t20033;
  double t20034;
  double t20035;
  double t20048;
  double t20049;
  double t20058;
  double t20086;
  double t20087;
  double t20088;
  double t20094;
  double t20095;
  double t20096;
  double t20205;
  double t20206;
  double t20207;
  double t20210;
  double t20211;
  double t20212;
  double t20219;
  double t20225;
  double t20228;
  double t20250;
  double t20253;
  double t20254;
  double t20260;
  double t20261;
  double t20262;
  double t20243;
  double t20311;
  double t20312;
  double t20313;
  double t20316;
  double t20317;
  double t20318;
  double t20320;
  double t20321;
  double t20323;
  double t20340;
  double t20341;
  double t20343;
  double t20345;
  double t20347;
  double t20348;
  double t20351;
  double t20352;
  double t20353;
  double t19728;
  double t20378;
  double t20382;
  double t20407;
  double t20408;
  double t20409;
  double t20443;
  double t20445;
  double t20446;
  double t20449;
  double t20450;
  double t20451;
  double t20453;
  double t20455;
  double t20456;
  double t20482;
  double t20483;
  double t20485;
  t13507 = Sin(var1[4]);
  t6918 = Cos(var1[4]);
  t12985 = Sin(var1[15]);
  t13627 = Cos(var1[15]);
  t14015 = Sin(var1[5]);
  t13492 = Cos(var1[5]);
  t18129 = Sin(var1[16]);
  t13485 = Cos(var1[16]);
  t18756 = t13627*t6918;
  t18815 = -1.*t12985*t13507*t14015;
  t18818 = t18756 + t18815;
  t18893 = Sin(var1[17]);
  t18922 = t13492*t18129*t13507;
  t18923 = t13485*t18818;
  t18924 = t18922 + t18923;
  t18936 = Cos(var1[17]);
  t19037 = -1.*t13485*t13492*t13507;
  t19056 = t18129*t18818;
  t19112 = t19037 + t19056;
  t13692 = -1.*t13627;
  t13960 = 1. + t13692;
  t13486 = -1.*t13485;
  t13489 = 1. + t13486;
  t18942 = -1.*t18936;
  t19031 = 1. + t18942;
  t19408 = t6918*t13492*t12985*t18129;
  t19417 = -1.*t13485*t6918*t14015;
  t19430 = t19408 + t19417;
  t19433 = t13485*t6918*t13492*t12985;
  t19434 = t6918*t18129*t14015;
  t19435 = t19433 + t19434;
  t19451 = -1.*t12985*t13507;
  t19452 = t13627*t6918*t14015;
  t19453 = t19451 + t19452;
  t19457 = t13627*t13507;
  t19458 = t6918*t12985*t14015;
  t19459 = t19457 + t19458;
  t19642 = -1.*t6918*t13492*t18129;
  t19643 = t13485*t19459;
  t19648 = t19642 + t19643;
  t19651 = -1.*t13485*t6918*t13492;
  t19652 = -1.*t18129*t19459;
  t19653 = t19651 + t19652;
  t19683 = t13485*t6918*t13492;
  t19692 = t18129*t19459;
  t19693 = t19683 + t19692;
  t19713 = Cos(var1[3]);
  t19716 = Sin(var1[3]);
  t19720 = -1.*t13492*t19716;
  t19724 = -1.*t19713*t13507*t14015;
  t19725 = t19720 + t19724;
  t19715 = t19713*t13492*t13507;
  t19717 = -1.*t19716*t14015;
  t19718 = t19715 + t19717;
  t19734 = -1.*t13627*t19713*t6918;
  t19738 = -1.*t12985*t19725;
  t19739 = t19734 + t19738;
  t19741 = -1.*t18129*t19718;
  t19742 = t13485*t19739;
  t19743 = t19741 + t19742;
  t19748 = t13485*t19718;
  t19752 = t18129*t19739;
  t19754 = t19748 + t19752;
  t19777 = t13627*t19716*t13507;
  t19867 = t6918*t12985*t19716*t14015;
  t19958 = t19777 + t19867;
  t19960 = -1.*t6918*t13492*t18129*t19716;
  t19964 = t13485*t19958;
  t19969 = t19960 + t19964;
  t19975 = t13485*t6918*t13492*t19716;
  t19979 = t18129*t19958;
  t19980 = t19975 + t19979;
  t20003 = -1.*t13492*t19716*t13507;
  t20005 = -1.*t19713*t14015;
  t20011 = t20003 + t20005;
  t20025 = t19713*t13492;
  t20027 = -1.*t19716*t13507*t14015;
  t20030 = t20025 + t20027;
  t20033 = -1.*t12985*t18129*t20011;
  t20034 = t13485*t20030;
  t20035 = t20033 + t20034;
  t20048 = -1.*t13485*t12985*t20011;
  t20049 = -1.*t18129*t20030;
  t20058 = t20048 + t20049;
  t20086 = t6918*t12985*t19716;
  t20087 = -1.*t13627*t20030;
  t20088 = t20086 + t20087;
  t20094 = -1.*t13627*t6918*t19716;
  t20095 = -1.*t12985*t20030;
  t20096 = t20094 + t20095;
  t20205 = t13492*t19716*t13507;
  t20206 = t19713*t14015;
  t20207 = t20205 + t20206;
  t20210 = -1.*t18129*t20207;
  t20211 = t13485*t20096;
  t20212 = t20210 + t20211;
  t20219 = -1.*t13485*t20207;
  t20225 = -1.*t18129*t20096;
  t20228 = t20219 + t20225;
  t20250 = t13485*t20207;
  t20253 = t18129*t20096;
  t20254 = t20250 + t20253;
  t20260 = -1.*t18893*t20212;
  t20261 = t18936*t20254;
  t20262 = t20260 + t20261;
  t20243 = t18936*t20212;
  t20311 = -1.*t13627*t19713*t13507;
  t20312 = -1.*t19713*t6918*t12985*t14015;
  t20313 = t20311 + t20312;
  t20316 = t19713*t6918*t13492*t18129;
  t20317 = t13485*t20313;
  t20318 = t20316 + t20317;
  t20320 = -1.*t13485*t19713*t6918*t13492;
  t20321 = t18129*t20313;
  t20323 = t20320 + t20321;
  t20340 = t13492*t19716;
  t20341 = t19713*t13507*t14015;
  t20343 = t20340 + t20341;
  t20345 = -1.*t12985*t18129*t19718;
  t20347 = t13485*t20343;
  t20348 = t20345 + t20347;
  t20351 = -1.*t13485*t12985*t19718;
  t20352 = -1.*t18129*t20343;
  t20353 = t20351 + t20352;
  t19728 = -1.*t19713*t6918*t12985;
  t20378 = -1.*t13627*t20343;
  t20382 = t19728 + t20378;
  t20407 = t13627*t19713*t6918;
  t20408 = -1.*t12985*t20343;
  t20409 = t20407 + t20408;
  t20443 = -1.*t19713*t13492*t13507;
  t20445 = t19716*t14015;
  t20446 = t20443 + t20445;
  t20449 = -1.*t18129*t20446;
  t20450 = t13485*t20409;
  t20451 = t20449 + t20450;
  t20453 = -1.*t13485*t20446;
  t20455 = -1.*t18129*t20409;
  t20456 = t20453 + t20455;
  t20482 = t13485*t20446;
  t20483 = t18129*t20409;
  t20485 = t20482 + t20483;
  p_output1[0]=1.;
  p_output1[1]=0.325*t13489*t13492*t13507 - 0.1575*t13507*t13960*t14015 + 0.325*t18129*t18818 - 0.575*t18893*t18924 - 0.575*t19031*t19112 - 0.0641*(t18924*t18936 + t18893*t19112) - 0.295*(-1.*t18893*t18924 + t18936*t19112) + 0.1575*t12985*t6918 - 0.2255*(t13507*t13627*t14015 + t12985*t6918);
  p_output1[2]=-0.575*t19031*t19430 - 0.575*t18893*t19435 - 0.295*(t18936*t19430 - 1.*t18893*t19435) - 0.0641*(t18893*t19430 + t18936*t19435) + 0.2255*t13492*t13627*t6918 + 0.1575*t13492*t13960*t6918 + 0.325*t13489*t14015*t6918 + 0.325*t12985*t13492*t18129*t6918;
  p_output1[3]=0.1575*t13507*t13627 + 0.325*t18129*t19453 - 0.575*t13485*t18893*t19453 - 0.575*t18129*t19031*t19453 - 0.0641*(t18129*t18893*t19453 + t13485*t18936*t19453) - 0.295*(-1.*t13485*t18893*t19453 + t18129*t18936*t19453) - 0.2255*t19459 + 0.1575*t12985*t14015*t6918;
  p_output1[4]=0.325*t13485*t19459 - 0.575*t19031*t19648 - 0.575*t18893*t19653 - 0.295*(t18936*t19648 - 1.*t18893*t19653) - 0.0641*(t18893*t19648 + t18936*t19653) - 0.325*t13492*t18129*t6918;
  p_output1[5]=-0.575*t18936*t19648 - 0.575*t18893*t19693 - 0.295*(-1.*t18936*t19648 - 1.*t18893*t19693) - 0.0641*(-1.*t18893*t19648 + t18936*t19693);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=-0.325*t13489*t19718 - 0.1575*t13960*t19725 - 0.2255*(t13627*t19725 + t19728) + 0.325*t18129*t19739 - 0.575*t18893*t19743 - 0.575*t19031*t19754 - 0.0641*(t18936*t19743 + t18893*t19754) - 0.295*(-1.*t18893*t19743 + t18936*t19754) - 0.1575*t12985*t19713*t6918;
  p_output1[9]=0.1575*t12985*t13507*t19716 + 0.325*t18129*t19958 - 0.575*t18893*t19969 - 0.575*t19031*t19980 - 0.0641*(t18936*t19969 + t18893*t19980) - 0.295*(-1.*t18893*t19969 + t18936*t19980) - 0.325*t13489*t13492*t19716*t6918 + 0.1575*t13960*t14015*t19716*t6918 - 0.2255*(t12985*t13507*t19716 - 1.*t13627*t14015*t19716*t6918);
  p_output1[10]=-0.2255*t13627*t20011 - 0.1575*t13960*t20011 - 0.325*t12985*t18129*t20011 - 0.325*t13489*t20030 - 0.575*t19031*t20035 - 0.575*t18893*t20058 - 0.295*(t18936*t20035 - 1.*t18893*t20058) - 0.0641*(t18893*t20035 + t18936*t20058);
  p_output1[11]=-0.1575*t12985*t20030 + 0.325*t18129*t20088 - 0.575*t13485*t18893*t20088 - 0.575*t18129*t19031*t20088 - 0.0641*(t18129*t18893*t20088 + t13485*t18936*t20088) - 0.295*(-1.*t13485*t18893*t20088 + t18129*t18936*t20088) - 0.2255*t20096 - 0.1575*t13627*t19716*t6918;
  p_output1[12]=0.325*t13485*t20096 - 0.325*t18129*t20207 - 0.575*t19031*t20212 - 0.575*t18893*t20228 - 0.0641*(t18893*t20212 + t18936*t20228) - 0.295*(-1.*t18893*t20228 + t20243);
  p_output1[13]=-0.575*t18936*t20212 - 0.575*t18893*t20254 - 0.295*(-1.*t18936*t20212 - 1.*t18893*t20254) - 0.0641*t20262;
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=-0.1575*t13960*t20030 + 0.325*t18129*t20096 - 0.325*t13489*t20207 - 0.575*t18893*t20212 - 0.575*t19031*t20254 - 0.0641*(t20243 + t18893*t20254) - 0.295*t20262 - 0.1575*t12985*t19716*t6918 - 0.2255*(t13627*t20030 - 1.*t12985*t19716*t6918);
  p_output1[17]=-0.1575*t12985*t13507*t19713 + 0.325*t18129*t20313 - 0.575*t18893*t20318 - 0.575*t19031*t20323 - 0.0641*(t18936*t20318 + t18893*t20323) - 0.295*(-1.*t18893*t20318 + t18936*t20323) + 0.325*t13489*t13492*t19713*t6918 - 0.1575*t13960*t14015*t19713*t6918 - 0.2255*(-1.*t12985*t13507*t19713 + t13627*t14015*t19713*t6918);
  p_output1[18]=-0.2255*t13627*t19718 - 0.1575*t13960*t19718 - 0.325*t12985*t18129*t19718 - 0.325*t13489*t20343 - 0.575*t19031*t20348 - 0.575*t18893*t20353 - 0.295*(t18936*t20348 - 1.*t18893*t20353) - 0.0641*(t18893*t20348 + t18936*t20353);
  p_output1[19]=-0.1575*t12985*t20343 + 0.325*t18129*t20382 - 0.575*t13485*t18893*t20382 - 0.575*t18129*t19031*t20382 - 0.0641*(t18129*t18893*t20382 + t13485*t18936*t20382) - 0.295*(-1.*t13485*t18893*t20382 + t18129*t18936*t20382) - 0.2255*t20409 + 0.1575*t13627*t19713*t6918;
  p_output1[20]=0.325*t13485*t20409 - 0.325*t18129*t20446 - 0.575*t19031*t20451 - 0.575*t18893*t20456 - 0.295*(t18936*t20451 - 1.*t18893*t20456) - 0.0641*(t18893*t20451 + t18936*t20456);
  p_output1[21]=-0.575*t18936*t20451 - 0.575*t18893*t20485 - 0.295*(-1.*t18936*t20451 - 1.*t18893*t20485) - 0.0641*(-1.*t18893*t20451 + t18936*t20485);
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
