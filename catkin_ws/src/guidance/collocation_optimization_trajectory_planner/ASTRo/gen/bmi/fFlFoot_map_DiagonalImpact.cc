/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:21 GMT+02:00
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
  double t8591;
  double t8506;
  double t8539;
  double t8593;
  double t8614;
  double t8618;
  double t8622;
  double t8613;
  double t8624;
  double t8611;
  double t8625;
  double t8606;
  double t8590;
  double t8599;
  double t8601;
  double t4350;
  double t8623;
  double t8626;
  double t8627;
  double t8635;
  double t8631;
  double t8632;
  double t8633;
  double t8630;
  double t8636;
  double t8637;
  double t8639;
  double t8685;
  double t8686;
  double t8687;
  double t8698;
  double t8699;
  double t8700;
  double t8702;
  double t8703;
  double t8704;
  double t8705;
  double t8707;
  double t8708;
  double t8709;
  double t8710;
  double t8711;
  double t8712;
  double t8713;
  double t8714;
  double t8715;
  double t8717;
  double t8718;
  double t8719;
  double t8720;
  double t8724;
  double t8725;
  double t8726;
  double t8727;
  double t8728;
  double t8729;
  double t8730;
  double t8733;
  double t8734;
  double t8735;
  double t8716;
  double t8721;
  double t8722;
  double t8684;
  double t8688;
  double t8690;
  double t8691;
  double t8692;
  double t8693;
  double t8731;
  double t8737;
  double t8738;
  double t8740;
  double t8741;
  double t8742;
  double t8746;
  double t8747;
  double t8748;
  double t8695;
  double t8696;
  double t8697;
  double t8723;
  double t8749;
  double t8602;
  double t8628;
  double t8629;
  double t8751;
  double t8752;
  double t8753;
  double t8781;
  double t8786;
  double t8792;
  double t8796;
  double t8823;
  double t8828;
  t8591 = Cos(var1[7]);
  t8506 = Cos(var1[8]);
  t8539 = Sin(var1[7]);
  t8593 = Sin(var1[8]);
  t8614 = t8591*t8506;
  t8618 = t8539*t8593;
  t8622 = t8614 + t8618;
  t8613 = Cos(var1[6]);
  t8624 = Sin(var1[5]);
  t8611 = Cos(var1[5]);
  t8625 = Sin(var1[6]);
  t8606 = Cos(var1[4]);
  t8590 = -1.*t8506*t8539;
  t8599 = t8591*t8593;
  t8601 = t8590 + t8599;
  t4350 = Sin(var1[4]);
  t8623 = t8611*t8613*t8622;
  t8626 = -1.*t8624*t8625*t8622;
  t8627 = t8623 + t8626;
  t8635 = Sin(var1[3]);
  t8631 = t8613*t8624*t8622;
  t8632 = t8611*t8625*t8622;
  t8633 = t8631 + t8632;
  t8630 = Cos(var1[3]);
  t8636 = t8606*t8601;
  t8637 = -1.*t4350*t8627;
  t8639 = t8636 + t8637;
  t8685 = t8506*t8539;
  t8686 = -1.*t8591*t8593;
  t8687 = t8685 + t8686;
  t8698 = -1.*t8613;
  t8699 = 1. + t8698;
  t8700 = 0.15121*t8699;
  t8702 = -1.*t8591;
  t8703 = 1. + t8702;
  t8704 = 0.28121*t8703;
  t8705 = -1.*t8506;
  t8707 = 1. + t8705;
  t8708 = 0.50321*t8707;
  t8709 = 0.19821*t8506;
  t8710 = t8708 + t8709;
  t8711 = t8591*t8710;
  t8712 = -0.305*t8539*t8593;
  t8713 = t8704 + t8711 + t8712;
  t8714 = t8613*t8713;
  t8715 = t8700 + t8714;
  t8717 = 0.15121*t8613;
  t8718 = -0.15121*t8625;
  t8719 = t8625*t8713;
  t8720 = t8700 + t8717 + t8718 + t8719;
  t8724 = -1.*t8613*t8624;
  t8725 = -1.*t8611*t8625;
  t8726 = t8724 + t8725;
  t8727 = 0.28121*t8539;
  t8728 = -1.*t8710*t8539;
  t8729 = -0.305*t8591*t8593;
  t8730 = t8727 + t8728 + t8729;
  t8733 = t8611*t8715;
  t8734 = -1.*t8624*t8720;
  t8735 = t8733 + t8734;
  t8716 = t8624*t8715;
  t8721 = t8611*t8720;
  t8722 = t8716 + t8721;
  t8684 = t4350*t8622;
  t8688 = t8611*t8613*t8687;
  t8690 = -1.*t8624*t8625*t8687;
  t8691 = t8688 + t8690;
  t8692 = t8606*t8691;
  t8693 = t8684 + t8692;
  t8731 = t4350*t8730;
  t8737 = t8606*t8735;
  t8738 = t8731 + t8737;
  t8740 = t8606*t8730;
  t8741 = -1.*t4350*t8735;
  t8742 = t8740 + t8741;
  t8746 = t8613*t8624*t8687;
  t8747 = t8611*t8625*t8687;
  t8748 = t8746 + t8747;
  t8695 = t8611*t8613;
  t8696 = -1.*t8624*t8625;
  t8697 = t8695 + t8696;
  t8723 = -1.*t8697*t8722;
  t8749 = t8748*t8722;
  t8602 = t4350*t8601;
  t8628 = t8606*t8627;
  t8629 = t8602 + t8628;
  t8751 = t8606*t8622;
  t8752 = -1.*t4350*t8691;
  t8753 = t8751 + t8752;
  t8781 = -1.*t8748*t8722;
  t8786 = t8633*t8722;
  t8792 = -1.*t8730*t8622;
  t8796 = t8730*t8601;
  t8823 = t8697*t8722;
  t8828 = -1.*t8633*t8722;
  p_output1[0]=t8629;
  p_output1[1]=t8630*t8633 - 1.*t8635*t8639;
  p_output1[2]=t8633*t8635 + t8630*t8639;
  p_output1[3]=t8693*(t8723 - 1.*t8606*t8726*t8738 + t4350*t8726*t8742) + t8606*t8726*(t8693*t8738 + t8749 + t8742*t8753);
  p_output1[4]=(t8723 - 1.*t8726*t8735)*t8748 + t8697*(t8622*t8730 + t8691*t8735 + t8749);
  p_output1[5]=t8622*(t8625*t8715 - 1.*t8613*t8720);
  p_output1[6]=0;
  p_output1[7]=0.28121*t8593 - 0.305*t8506*t8593 - 1.*t8593*t8710;
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
  p_output1[18]=t8606*t8726;
  p_output1[19]=t8630*t8697 + t4350*t8635*t8726;
  p_output1[20]=t8635*t8697 - 1.*t4350*t8630*t8726;
  p_output1[21]=t8629*(-1.*t8693*t8738 - 1.*t8742*t8753 + t8781) + t8693*(t8629*t8738 + t8639*t8742 + t8786);
  p_output1[22]=t8633*(-1.*t8691*t8735 + t8781 + t8792) + t8748*(t8627*t8735 + t8786 + t8796);
  p_output1[23]=t8601*(-1.*t8613*t8687*t8715 - 1.*t8625*t8687*t8720 + t8792) + t8622*(t8613*t8622*t8715 + t8622*t8625*t8720 + t8796);
  p_output1[24]=-0.15121 + t8601*(-1.*t8687*t8713 + t8792) + t8622*(t8622*t8713 + t8796);
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
  p_output1[36]=t8693;
  p_output1[37]=t8630*t8748 - 1.*t8635*t8753;
  p_output1[38]=t8635*t8748 + t8630*t8753;
  p_output1[39]=t8629*(t8606*t8726*t8738 - 1.*t4350*t8726*t8742 + t8823) + t8606*t8726*(-1.*t8629*t8738 - 1.*t8639*t8742 + t8828);
  p_output1[40]=t8633*(t8726*t8735 + t8823) + t8697*(-1.*t8601*t8730 - 1.*t8627*t8735 + t8828);
  p_output1[41]=t8601*(-1.*t8625*t8715 + t8613*t8720);
  p_output1[42]=0.15121*t8601 + 0.15121*t8687;
  p_output1[43]=0.28121*t8506 + 0.305*Power(t8593,2) - 1.*t8506*t8710;
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
