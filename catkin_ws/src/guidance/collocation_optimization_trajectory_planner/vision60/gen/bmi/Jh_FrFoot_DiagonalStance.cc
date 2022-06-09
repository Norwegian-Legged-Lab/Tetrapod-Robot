/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:10:36 GMT+02:00
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
  double t32448;
  double t9379;
  double t20956;
  double t42571;
  double t21664;
  double t42587;
  double t42600;
  double t42859;
  double t42601;
  double t1510;
  double t42604;
  double t42862;
  double t42840;
  double t42856;
  double t42857;
  double t42622;
  double t42858;
  double t42865;
  double t42869;
  double t43112;
  double t43123;
  double t43063;
  double t43071;
  double t43075;
  double t43076;
  double t43077;
  double t43095;
  double t43113;
  double t43114;
  double t43120;
  double t43124;
  double t43130;
  double t43132;
  double t43158;
  double t43171;
  double t43175;
  double t43390;
  double t43405;
  double t43453;
  double t43456;
  double t43457;
  double t43458;
  double t42889;
  double t43106;
  double t43111;
  double t43477;
  double t43478;
  double t43479;
  double t43483;
  double t43487;
  double t43488;
  double t43489;
  double t43498;
  double t43501;
  double t42872;
  double t42875;
  double t42877;
  double t43476;
  double t43480;
  double t43502;
  double t43504;
  double t43510;
  double t43512;
  double t43513;
  double t43514;
  double t43516;
  double t43517;
  double t43471;
  double t43473;
  double t43474;
  double t43475;
  double t43505;
  double t43506;
  double t43526;
  double t43527;
  double t43528;
  double t43534;
  double t43536;
  double t43538;
  double t43508;
  double t43518;
  double t43520;
  double t43532;
  double t43539;
  double t43542;
  double t43546;
  double t43548;
  double t43550;
  double t42603;
  double t42870;
  double t42871;
  double t43521;
  double t43562;
  double t43579;
  double t43588;
  double t43725;
  double t43738;
  double t43749;
  double t43754;
  double t43775;
  double t43767;
  double t43781;
  double t43791;
  double t43824;
  double t43814;
  t32448 = Cos(var1[13]);
  t9379 = Cos(var1[14]);
  t20956 = Sin(var1[13]);
  t42571 = Sin(var1[14]);
  t21664 = t9379*t20956;
  t42587 = -1.*t32448*t42571;
  t42600 = t21664 + t42587;
  t42859 = Sin(var1[12]);
  t42601 = Sin(var1[4]);
  t1510 = Cos(var1[12]);
  t42604 = Cos(var1[4]);
  t42862 = Sin(var1[5]);
  t42840 = t32448*t9379;
  t42856 = t20956*t42571;
  t42857 = t42840 + t42856;
  t42622 = Cos(var1[5]);
  t42858 = t42622*t42857;
  t42865 = t42859*t42600*t42862;
  t42869 = t42858 + t42865;
  t43112 = Cos(var1[3]);
  t43123 = Sin(var1[3]);
  t43063 = -1.*t9379*t20956;
  t43071 = t32448*t42571;
  t43075 = t43063 + t43071;
  t43076 = t42622*t43075;
  t43077 = t42859*t42857*t42862;
  t43095 = t43076 + t43077;
  t43113 = -1.*t42622*t42859*t42600;
  t43114 = t42857*t42862;
  t43120 = t43113 + t43114;
  t43124 = t1510*t42604*t42600;
  t43130 = -1.*t42601*t42869;
  t43132 = t43124 + t43130;
  t43158 = t42604*t42859;
  t43171 = t1510*t42601*t42862;
  t43175 = t43158 + t43171;
  t43390 = -1.*t42622*t42859*t42857;
  t43405 = t43075*t42862;
  t43453 = t43390 + t43405;
  t43456 = t1510*t42604*t42857;
  t43457 = -1.*t42601*t43095;
  t43458 = t43456 + t43457;
  t42889 = t1510*t42857*t42601;
  t43106 = t42604*t43095;
  t43111 = t42889 + t43106;
  t43477 = -0.0641*t9379;
  t43478 = -0.28*t42571;
  t43479 = t43477 + t43478;
  t43483 = -1.*t9379;
  t43487 = 1. + t43483;
  t43488 = 0.075*t43487;
  t43489 = 0.355*t9379;
  t43498 = -0.0641*t42571;
  t43501 = t43488 + t43489 + t43498;
  t42872 = t42859*t42601;
  t42875 = -1.*t1510*t42604*t42862;
  t42877 = t42872 + t42875;
  t43476 = -0.325*t20956;
  t43480 = t32448*t43479;
  t43502 = t20956*t43501;
  t43504 = t43476 + t43480 + t43502;
  t43510 = -1.*t32448;
  t43512 = 1. + t43510;
  t43513 = 0.325*t43512;
  t43514 = -1.*t20956*t43479;
  t43516 = t32448*t43501;
  t43517 = t43513 + t43514 + t43516;
  t43471 = -1.*t1510;
  t43473 = 1. + t43471;
  t43474 = -0.1575*t43473;
  t43475 = -0.2255*t1510;
  t43505 = -1.*t42859*t43504;
  t43506 = t43474 + t43475 + t43505;
  t43526 = -0.068*t42859;
  t43527 = t1510*t43504;
  t43528 = t43526 + t43527;
  t43534 = t42622*t43517;
  t43536 = -1.*t43506*t42862;
  t43538 = t43534 + t43536;
  t43508 = t42622*t43506;
  t43518 = t43517*t42862;
  t43520 = t43508 + t43518;
  t43532 = t43528*t42601;
  t43539 = t42604*t43538;
  t43542 = t43532 + t43539;
  t43546 = t42604*t43528;
  t43548 = -1.*t42601*t43538;
  t43550 = t43546 + t43548;
  t42603 = t1510*t42600*t42601;
  t42870 = t42604*t42869;
  t42871 = t42603 + t42870;
  t43521 = -1.*t1510*t42622*t43520;
  t43562 = t43520*t43453;
  t43579 = t43520*t43120;
  t43588 = -1.*t43520*t43453;
  t43725 = t1510*t42622*t43520;
  t43738 = -1.*t43520*t43120;
  t43749 = -1.*t42859*t43528;
  t43754 = t1510*t43528*t42857;
  t43775 = -1.*t1510*t43528*t42857;
  t43767 = t1510*t43528*t42600;
  t43781 = t42859*t43528;
  t43791 = -1.*t1510*t43528*t42600;
  t43824 = t43517*t42857;
  t43814 = -1.*t43517*t43075;
  p_output1[0]=t42871;
  p_output1[1]=t42877;
  p_output1[2]=t43111;
  p_output1[3]=t43112*t43120 - 1.*t43123*t43132;
  p_output1[4]=t1510*t42622*t43112 - 1.*t43123*t43175;
  p_output1[5]=t43112*t43453 - 1.*t43123*t43458;
  p_output1[6]=t43120*t43123 + t43112*t43132;
  p_output1[7]=t1510*t42622*t43123 + t43112*t43175;
  p_output1[8]=t43123*t43453 + t43112*t43458;
  p_output1[9]=t43111*(t43521 - 1.*t42877*t43542 - 1.*t43175*t43550) + t42877*(t43111*t43542 + t43458*t43550 + t43562);
  p_output1[10]=t43111*(t42871*t43542 + t43132*t43550 + t43579) + t42871*(-1.*t43111*t43542 - 1.*t43458*t43550 + t43588);
  p_output1[11]=t42871*(t42877*t43542 + t43175*t43550 + t43725) + t42877*(-1.*t42871*t43542 - 1.*t43132*t43550 + t43738);
  p_output1[12]=t43453*(t43521 + t1510*t42862*t43538 + t43749) + t1510*t42622*(t43095*t43538 + t43562 + t43754);
  p_output1[13]=t43453*(t42869*t43538 + t43579 + t43767) + t43120*(-1.*t43095*t43538 + t43588 + t43775);
  p_output1[14]=t43120*(-1.*t1510*t42862*t43538 + t43725 + t43781) + t1510*t42622*(-1.*t42869*t43538 + t43738 + t43791);
  p_output1[15]=t1510*t42857*(-1.*t1510*t43506 + t43749) + t42859*(-1.*t42857*t42859*t43506 + t43075*t43517 + t43754);
  p_output1[16]=t1510*t42600*(t42857*t42859*t43506 + t43775 + t43814) + t1510*t42857*(-1.*t42600*t42859*t43506 + t43767 + t43824);
  p_output1[17]=t1510*t42600*(t1510*t43506 + t43781) + t42859*(t42600*t42859*t43506 - 1.*t42857*t43517 + t43791);
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
  p_output1[36]=0.1575*t42600 + 0.2255*t43075;
  p_output1[37]=t42857*(-1.*t42857*t43504 + t43814) + t43075*(t42600*t43504 + t43824);
  p_output1[38]=-0.068*t42857;
  p_output1[39]=0.325*t42571 - 1.*t42571*t43501 - 1.*t43479*t9379;
  p_output1[40]=0;
  p_output1[41]=-1.*t42571*t43479 - 0.325*t9379 + t43501*t9379;
  p_output1[42]=-0.0641;
  p_output1[43]=0;
  p_output1[44]=-0.28;
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
