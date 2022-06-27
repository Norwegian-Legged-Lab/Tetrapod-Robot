/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:39 GMT+02:00
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
  double t9614;
  double t8654;
  double t8656;
  double t13136;
  double t8934;
  double t22763;
  double t22773;
  double t25435;
  double t25609;
  double t25436;
  double t25437;
  double t25438;
  double t25610;
  double t8400;
  double t25434;
  double t22774;
  double t25599;
  double t25611;
  double t25616;
  double t25631;
  double t25623;
  double t25626;
  double t25627;
  double t25622;
  double t25632;
  double t25634;
  double t25635;
  double t25657;
  double t25658;
  double t25660;
  double t25662;
  double t25663;
  double t25665;
  double t25666;
  double t25670;
  double t25671;
  double t25656;
  double t25661;
  double t25672;
  double t25674;
  double t25685;
  double t25686;
  double t25687;
  double t25689;
  double t25696;
  double t25700;
  double t25652;
  double t25653;
  double t25654;
  double t25655;
  double t25675;
  double t25676;
  double t25711;
  double t25712;
  double t25716;
  double t25722;
  double t25724;
  double t25725;
  double t25708;
  double t25709;
  double t25710;
  double t25680;
  double t25704;
  double t25706;
  double t25642;
  double t25643;
  double t25645;
  double t25721;
  double t25726;
  double t25727;
  double t25641;
  double t25646;
  double t25647;
  double t25649;
  double t25650;
  double t25651;
  double t25739;
  double t25740;
  double t25742;
  double t25746;
  double t25748;
  double t25751;
  double t25707;
  double t25752;
  double t25766;
  double t25770;
  double t25729;
  double t25737;
  double t25738;
  double t25423;
  double t25620;
  double t25621;
  double t25758;
  double t25760;
  double t25761;
  double t25799;
  double t25804;
  double t25816;
  double t25810;
  double t25826;
  double t25821;
  double t25846;
  double t25851;
  double t25857;
  double t25861;
  t9614 = Cos(var1[16]);
  t8654 = Cos(var1[17]);
  t8656 = Sin(var1[16]);
  t13136 = Sin(var1[17]);
  t8934 = t8654*t8656;
  t22763 = -1.*t9614*t13136;
  t22773 = t8934 + t22763;
  t25435 = Cos(var1[5]);
  t25609 = Sin(var1[15]);
  t25436 = t9614*t8654;
  t25437 = t8656*t13136;
  t25438 = t25436 + t25437;
  t25610 = Sin(var1[5]);
  t8400 = Cos(var1[15]);
  t25434 = Cos(var1[4]);
  t22774 = Sin(var1[4]);
  t25599 = t25435*t25438;
  t25611 = t25609*t22773*t25610;
  t25616 = t25599 + t25611;
  t25631 = Sin(var1[3]);
  t25623 = -1.*t25435*t25609*t22773;
  t25626 = t25438*t25610;
  t25627 = t25623 + t25626;
  t25622 = Cos(var1[3]);
  t25632 = t8400*t25434*t22773;
  t25634 = -1.*t22774*t25616;
  t25635 = t25632 + t25634;
  t25657 = -0.0641*t8654;
  t25658 = -0.28*t13136;
  t25660 = t25657 + t25658;
  t25662 = -1.*t8654;
  t25663 = 1. + t25662;
  t25665 = -0.575*t25663;
  t25666 = -0.295*t8654;
  t25670 = -0.0641*t13136;
  t25671 = t25665 + t25666 + t25670;
  t25656 = 0.325*t8656;
  t25661 = t9614*t25660;
  t25672 = t8656*t25671;
  t25674 = t25656 + t25661 + t25672;
  t25685 = -1.*t9614;
  t25686 = 1. + t25685;
  t25687 = -0.325*t25686;
  t25689 = -1.*t8656*t25660;
  t25696 = t9614*t25671;
  t25700 = t25687 + t25689 + t25696;
  t25652 = -1.*t8400;
  t25653 = 1. + t25652;
  t25654 = -0.1575*t25653;
  t25655 = -0.2255*t8400;
  t25675 = -1.*t25609*t25674;
  t25676 = t25654 + t25655 + t25675;
  t25711 = -0.068*t25609;
  t25712 = t8400*t25674;
  t25716 = t25711 + t25712;
  t25722 = t25435*t25700;
  t25724 = -1.*t25676*t25610;
  t25725 = t25722 + t25724;
  t25708 = t25609*t22774;
  t25709 = -1.*t8400*t25434*t25610;
  t25710 = t25708 + t25709;
  t25680 = t25435*t25676;
  t25704 = t25700*t25610;
  t25706 = t25680 + t25704;
  t25642 = -1.*t8654*t8656;
  t25643 = t9614*t13136;
  t25645 = t25642 + t25643;
  t25721 = t25716*t22774;
  t25726 = t25434*t25725;
  t25727 = t25721 + t25726;
  t25641 = t8400*t25438*t22774;
  t25646 = t25435*t25645;
  t25647 = t25609*t25438*t25610;
  t25649 = t25646 + t25647;
  t25650 = t25434*t25649;
  t25651 = t25641 + t25650;
  t25739 = t25434*t25716;
  t25740 = -1.*t22774*t25725;
  t25742 = t25739 + t25740;
  t25746 = -1.*t25435*t25609*t25438;
  t25748 = t25645*t25610;
  t25751 = t25746 + t25748;
  t25707 = -1.*t8400*t25435*t25706;
  t25752 = t25706*t25751;
  t25766 = -1.*t25609*t25716;
  t25770 = t8400*t25716*t25438;
  t25729 = t25434*t25609;
  t25737 = t8400*t22774*t25610;
  t25738 = t25729 + t25737;
  t25423 = t8400*t22773*t22774;
  t25620 = t25434*t25616;
  t25621 = t25423 + t25620;
  t25758 = t8400*t25434*t25438;
  t25760 = -1.*t22774*t25649;
  t25761 = t25758 + t25760;
  t25799 = t25706*t25627;
  t25804 = -1.*t25706*t25751;
  t25816 = -1.*t8400*t25716*t25438;
  t25810 = t8400*t25716*t22773;
  t25826 = t25700*t25438;
  t25821 = -1.*t25700*t25645;
  t25846 = t8400*t25435*t25706;
  t25851 = -1.*t25706*t25627;
  t25857 = t25609*t25716;
  t25861 = -1.*t8400*t25716*t22773;
  p_output1[0]=t25621;
  p_output1[1]=t25622*t25627 - 1.*t25631*t25635;
  p_output1[2]=t25627*t25631 + t25622*t25635;
  p_output1[3]=t25651*(t25707 - 1.*t25710*t25727 - 1.*t25738*t25742) + t25710*(t25651*t25727 + t25752 + t25742*t25761);
  p_output1[4]=t25435*(t25649*t25725 + t25752 + t25770)*t8400 + t25751*(t25707 + t25766 + t25610*t25725*t8400);
  p_output1[5]=t25609*(-1.*t25438*t25609*t25676 + t25645*t25700 + t25770) + t25438*t8400*(t25766 - 1.*t25676*t8400);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t22773 + 0.2255*t25645;
  p_output1[16]=-0.325*t13136 - 1.*t13136*t25671 - 1.*t25660*t8654;
  p_output1[17]=-0.0641;
  p_output1[18]=t25710;
  p_output1[19]=-1.*t25631*t25738 + t25435*t25622*t8400;
  p_output1[20]=t25622*t25738 + t25435*t25631*t8400;
  p_output1[21]=t25651*(t25621*t25727 + t25635*t25742 + t25799) + t25621*(-1.*t25651*t25727 - 1.*t25742*t25761 + t25804);
  p_output1[22]=t25751*(t25616*t25725 + t25799 + t25810) + t25627*(-1.*t25649*t25725 + t25804 + t25816);
  p_output1[23]=t22773*(t25438*t25609*t25676 + t25816 + t25821)*t8400 + t25438*(-1.*t22773*t25609*t25676 + t25810 + t25826)*t8400;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t25438*(-1.*t25438*t25674 + t25821) + t25645*(t22773*t25674 + t25826);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t25651;
  p_output1[37]=t25622*t25751 - 1.*t25631*t25761;
  p_output1[38]=t25631*t25751 + t25622*t25761;
  p_output1[39]=t25621*(t25710*t25727 + t25738*t25742 + t25846) + t25710*(-1.*t25621*t25727 - 1.*t25635*t25742 + t25851);
  p_output1[40]=t25435*(-1.*t25616*t25725 + t25851 + t25861)*t8400 + t25627*(t25846 + t25857 - 1.*t25610*t25725*t8400);
  p_output1[41]=t25609*(t22773*t25609*t25676 - 1.*t25438*t25700 + t25861) + t22773*t8400*(t25857 + t25676*t8400);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t25438;
  p_output1[52]=-1.*t13136*t25660 + 0.325*t8654 + t25671*t8654;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
