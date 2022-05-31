/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:45 GMT+02:00
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
  double t31008;
  double t26959;
  double t28048;
  double t32452;
  double t36488;
  double t36489;
  double t36490;
  double t36375;
  double t36497;
  double t35306;
  double t36501;
  double t34708;
  double t28855;
  double t32758;
  double t33095;
  double t26955;
  double t36495;
  double t36506;
  double t36508;
  double t36535;
  double t36512;
  double t36514;
  double t36515;
  double t36511;
  double t36536;
  double t36537;
  double t36541;
  double t36628;
  double t36629;
  double t36648;
  double t36670;
  double t36674;
  double t36675;
  double t36676;
  double t36677;
  double t36683;
  double t36685;
  double t36686;
  double t36687;
  double t36688;
  double t36689;
  double t36694;
  double t36695;
  double t36696;
  double t36697;
  double t36698;
  double t36700;
  double t36705;
  double t36714;
  double t36715;
  double t36719;
  double t36720;
  double t36722;
  double t36723;
  double t36724;
  double t36731;
  double t36732;
  double t36734;
  double t36735;
  double t36737;
  double t36699;
  double t36716;
  double t36717;
  double t36627;
  double t36649;
  double t36650;
  double t36660;
  double t36661;
  double t36662;
  double t36733;
  double t36738;
  double t36743;
  double t36745;
  double t36746;
  double t36775;
  double t36810;
  double t36811;
  double t36819;
  double t36663;
  double t36668;
  double t36669;
  double t36718;
  double t36820;
  double t34244;
  double t36509;
  double t36510;
  double t36826;
  double t36829;
  double t36830;
  double t36914;
  double t36928;
  double t36937;
  double t36944;
  double t36984;
  double t36989;
  t31008 = Cos(var1[7]);
  t26959 = Cos(var1[8]);
  t28048 = Sin(var1[7]);
  t32452 = Sin(var1[8]);
  t36488 = t31008*t26959;
  t36489 = t28048*t32452;
  t36490 = t36488 + t36489;
  t36375 = Cos(var1[6]);
  t36497 = Sin(var1[5]);
  t35306 = Cos(var1[5]);
  t36501 = Sin(var1[6]);
  t34708 = Cos(var1[4]);
  t28855 = -1.*t26959*t28048;
  t32758 = t31008*t32452;
  t33095 = t28855 + t32758;
  t26955 = Sin(var1[4]);
  t36495 = t35306*t36375*t36490;
  t36506 = -1.*t36497*t36501*t36490;
  t36508 = t36495 + t36506;
  t36535 = Sin(var1[3]);
  t36512 = t36375*t36497*t36490;
  t36514 = t35306*t36501*t36490;
  t36515 = t36512 + t36514;
  t36511 = Cos(var1[3]);
  t36536 = t34708*t33095;
  t36537 = -1.*t26955*t36508;
  t36541 = t36536 + t36537;
  t36628 = t26959*t28048;
  t36629 = -1.*t31008*t32452;
  t36648 = t36628 + t36629;
  t36670 = -1.*t36375;
  t36674 = 1. + t36670;
  t36675 = 0.15121*t36674;
  t36676 = -1.*t31008;
  t36677 = 1. + t36676;
  t36683 = 0.28121*t36677;
  t36685 = -1.*t26959;
  t36686 = 1. + t36685;
  t36687 = 0.50321*t36686;
  t36688 = 0.19821*t26959;
  t36689 = t36687 + t36688;
  t36694 = t31008*t36689;
  t36695 = -0.305*t28048*t32452;
  t36696 = t36683 + t36694 + t36695;
  t36697 = t36375*t36696;
  t36698 = t36675 + t36697;
  t36700 = 0.15121*t36375;
  t36705 = -0.15121*t36501;
  t36714 = t36501*t36696;
  t36715 = t36675 + t36700 + t36705 + t36714;
  t36719 = -1.*t36375*t36497;
  t36720 = -1.*t35306*t36501;
  t36722 = t36719 + t36720;
  t36723 = 0.28121*t28048;
  t36724 = -1.*t36689*t28048;
  t36731 = -0.305*t31008*t32452;
  t36732 = t36723 + t36724 + t36731;
  t36734 = t35306*t36698;
  t36735 = -1.*t36497*t36715;
  t36737 = t36734 + t36735;
  t36699 = t36497*t36698;
  t36716 = t35306*t36715;
  t36717 = t36699 + t36716;
  t36627 = t26955*t36490;
  t36649 = t35306*t36375*t36648;
  t36650 = -1.*t36497*t36501*t36648;
  t36660 = t36649 + t36650;
  t36661 = t34708*t36660;
  t36662 = t36627 + t36661;
  t36733 = t26955*t36732;
  t36738 = t34708*t36737;
  t36743 = t36733 + t36738;
  t36745 = t34708*t36732;
  t36746 = -1.*t26955*t36737;
  t36775 = t36745 + t36746;
  t36810 = t36375*t36497*t36648;
  t36811 = t35306*t36501*t36648;
  t36819 = t36810 + t36811;
  t36663 = t35306*t36375;
  t36668 = -1.*t36497*t36501;
  t36669 = t36663 + t36668;
  t36718 = -1.*t36669*t36717;
  t36820 = t36819*t36717;
  t34244 = t26955*t33095;
  t36509 = t34708*t36508;
  t36510 = t34244 + t36509;
  t36826 = t34708*t36490;
  t36829 = -1.*t26955*t36660;
  t36830 = t36826 + t36829;
  t36914 = -1.*t36819*t36717;
  t36928 = t36515*t36717;
  t36937 = -1.*t36732*t36490;
  t36944 = t36732*t33095;
  t36984 = t36669*t36717;
  t36989 = -1.*t36515*t36717;
  p_output1[0]=t36510;
  p_output1[1]=t36511*t36515 - 1.*t36535*t36541;
  p_output1[2]=t36515*t36535 + t36511*t36541;
  p_output1[3]=t36662*(t36718 - 1.*t34708*t36722*t36743 + t26955*t36722*t36775) + t34708*t36722*(t36662*t36743 + t36820 + t36775*t36830);
  p_output1[4]=(t36718 - 1.*t36722*t36737)*t36819 + t36669*(t36490*t36732 + t36660*t36737 + t36820);
  p_output1[5]=t36490*(t36501*t36698 - 1.*t36375*t36715);
  p_output1[6]=0;
  p_output1[7]=0.28121*t32452 - 0.305*t26959*t32452 - 1.*t32452*t36689;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t34708*t36722;
  p_output1[19]=t36511*t36669 + t26955*t36535*t36722;
  p_output1[20]=t36535*t36669 - 1.*t26955*t36511*t36722;
  p_output1[21]=t36510*(-1.*t36662*t36743 - 1.*t36775*t36830 + t36914) + t36662*(t36510*t36743 + t36541*t36775 + t36928);
  p_output1[22]=t36515*(-1.*t36660*t36737 + t36914 + t36937) + t36819*(t36508*t36737 + t36928 + t36944);
  p_output1[23]=t33095*(-1.*t36375*t36648*t36698 - 1.*t36501*t36648*t36715 + t36937) + t36490*(t36375*t36490*t36698 + t36490*t36501*t36715 + t36944);
  p_output1[24]=-0.15121 + t33095*(-1.*t36648*t36696 + t36937) + t36490*(t36490*t36696 + t36944);
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
  p_output1[36]=t36662;
  p_output1[37]=t36511*t36819 - 1.*t36535*t36830;
  p_output1[38]=t36535*t36819 + t36511*t36830;
  p_output1[39]=t36510*(t34708*t36722*t36743 - 1.*t26955*t36722*t36775 + t36984) + t34708*t36722*(-1.*t36510*t36743 - 1.*t36541*t36775 + t36989);
  p_output1[40]=t36515*(t36722*t36737 + t36984) + t36669*(-1.*t33095*t36732 - 1.*t36508*t36737 + t36989);
  p_output1[41]=t33095*(-1.*t36501*t36698 + t36375*t36715);
  p_output1[42]=0.15121*t33095 + 0.15121*t36648;
  p_output1[43]=0.28121*t26959 + 0.305*Power(t32452,2) - 1.*t26959*t36689;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
