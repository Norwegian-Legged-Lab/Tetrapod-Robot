/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:48 GMT+02:00
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
  double t20923;
  double t14791;
  double t21175;
  double t26566;
  double t22866;
  double t23075;
  double t26576;
  double t8734;
  double t26530;
  double t26577;
  double t26579;
  double t21186;
  double t26587;
  double t26592;
  double t26597;
  double t26586;
  double t26624;
  double t26626;
  double t26598;
  double t26599;
  double t26604;
  double t26614;
  double t26615;
  double t26616;
  double t26617;
  double t26618;
  double t26619;
  double t26665;
  double t26669;
  double t26674;
  double t26679;
  double t26680;
  double t26681;
  double t26684;
  double t26685;
  double t26686;
  double t26691;
  double t26692;
  double t26693;
  double t26695;
  double t26696;
  double t26698;
  double t26584;
  double t26609;
  double t26611;
  double t26726;
  double t26727;
  double t26728;
  double t26731;
  double t26733;
  double t26734;
  double t26735;
  double t26736;
  double t26737;
  double t20686;
  double t21202;
  double t21208;
  double t26725;
  double t26730;
  double t26738;
  double t26739;
  double t26743;
  double t26744;
  double t26745;
  double t26746;
  double t26747;
  double t26748;
  double t26720;
  double t26721;
  double t26723;
  double t26724;
  double t26740;
  double t26741;
  double t26752;
  double t26753;
  double t26754;
  double t26756;
  double t26758;
  double t26759;
  double t26742;
  double t26749;
  double t26750;
  double t26755;
  double t26760;
  double t26761;
  double t26764;
  double t26765;
  double t26766;
  double t26613;
  double t26620;
  double t26621;
  double t26751;
  double t26770;
  double t26777;
  double t26782;
  double t26789;
  double t26794;
  double t26822;
  double t26826;
  double t26802;
  double t26806;
  double t26816;
  double t26812;
  double t26856;
  double t26851;
  t20923 = Cos(var1[9]);
  t14791 = Sin(var1[4]);
  t21175 = Cos(var1[4]);
  t26566 = Cos(var1[10]);
  t22866 = Cos(var1[11]);
  t23075 = Sin(var1[10]);
  t26576 = Sin(var1[11]);
  t8734 = Sin(var1[9]);
  t26530 = t22866*t23075;
  t26577 = -1.*t26566*t26576;
  t26579 = t26530 + t26577;
  t21186 = Sin(var1[5]);
  t26587 = t26566*t22866;
  t26592 = t23075*t26576;
  t26597 = t26587 + t26592;
  t26586 = Cos(var1[5]);
  t26624 = Cos(var1[3]);
  t26626 = Sin(var1[3]);
  t26598 = t26586*t26597;
  t26599 = t8734*t26579*t21186;
  t26604 = t26598 + t26599;
  t26614 = -1.*t22866*t23075;
  t26615 = t26566*t26576;
  t26616 = t26614 + t26615;
  t26617 = t26586*t26616;
  t26618 = t8734*t26597*t21186;
  t26619 = t26617 + t26618;
  t26665 = t21175*t8734;
  t26669 = t20923*t14791*t21186;
  t26674 = t26665 + t26669;
  t26679 = -1.*t26586*t8734*t26579;
  t26680 = t26597*t21186;
  t26681 = t26679 + t26680;
  t26684 = t20923*t21175*t26579;
  t26685 = -1.*t14791*t26604;
  t26686 = t26684 + t26685;
  t26691 = -1.*t26586*t8734*t26597;
  t26692 = t26616*t21186;
  t26693 = t26691 + t26692;
  t26695 = t20923*t21175*t26597;
  t26696 = -1.*t14791*t26619;
  t26698 = t26695 + t26696;
  t26584 = t20923*t26579*t14791;
  t26609 = t21175*t26604;
  t26611 = t26584 + t26609;
  t26726 = -0.0641*t22866;
  t26727 = -0.28*t26576;
  t26728 = t26726 + t26727;
  t26731 = -1.*t22866;
  t26733 = 1. + t26731;
  t26734 = -0.575*t26733;
  t26735 = -0.295*t22866;
  t26736 = -0.0641*t26576;
  t26737 = t26734 + t26735 + t26736;
  t20686 = t8734*t14791;
  t21202 = -1.*t20923*t21175*t21186;
  t21208 = t20686 + t21202;
  t26725 = 0.325*t23075;
  t26730 = t26566*t26728;
  t26738 = t23075*t26737;
  t26739 = t26725 + t26730 + t26738;
  t26743 = -1.*t26566;
  t26744 = 1. + t26743;
  t26745 = -0.325*t26744;
  t26746 = -1.*t23075*t26728;
  t26747 = t26566*t26737;
  t26748 = t26745 + t26746 + t26747;
  t26720 = -1.*t20923;
  t26721 = 1. + t26720;
  t26723 = 0.1575*t26721;
  t26724 = 0.2255*t20923;
  t26740 = -1.*t8734*t26739;
  t26741 = t26723 + t26724 + t26740;
  t26752 = 0.068*t8734;
  t26753 = t20923*t26739;
  t26754 = t26752 + t26753;
  t26756 = t26586*t26748;
  t26758 = -1.*t26741*t21186;
  t26759 = t26756 + t26758;
  t26742 = t26586*t26741;
  t26749 = t26748*t21186;
  t26750 = t26742 + t26749;
  t26755 = t26754*t14791;
  t26760 = t21175*t26759;
  t26761 = t26755 + t26760;
  t26764 = t21175*t26754;
  t26765 = -1.*t14791*t26759;
  t26766 = t26764 + t26765;
  t26613 = t20923*t26597*t14791;
  t26620 = t21175*t26619;
  t26621 = t26613 + t26620;
  t26751 = t20923*t26586*t26750;
  t26770 = -1.*t26750*t26681;
  t26777 = t26750*t26681;
  t26782 = -1.*t26750*t26693;
  t26789 = -1.*t20923*t26586*t26750;
  t26794 = t26750*t26693;
  t26822 = -1.*t8734*t26754;
  t26826 = t20923*t26754*t26597;
  t26802 = t8734*t26754;
  t26806 = -1.*t20923*t26754*t26579;
  t26816 = -1.*t20923*t26754*t26597;
  t26812 = t20923*t26754*t26579;
  t26856 = t26748*t26597;
  t26851 = -1.*t26748*t26616;
  p_output1[0]=t26611*var2[0] + t21208*var2[1] + t26621*var2[2];
  p_output1[1]=(t26624*t26681 - 1.*t26626*t26686)*var2[0] + (t20923*t26586*t26624 - 1.*t26626*t26674)*var2[1] + (t26624*t26693 - 1.*t26626*t26698)*var2[2];
  p_output1[2]=(t26626*t26681 + t26624*t26686)*var2[0] + (t20923*t26586*t26626 + t26624*t26674)*var2[1] + (t26626*t26693 + t26624*t26698)*var2[2];
  p_output1[3]=(t26621*(-1.*t21208*t26761 - 1.*t26674*t26766 + t26789) + t21208*(t26621*t26761 + t26698*t26766 + t26794))*var2[0] + (t26621*(t26611*t26761 + t26686*t26766 + t26777) + t26611*(-1.*t26621*t26761 - 1.*t26698*t26766 + t26782))*var2[1] + (t26611*(t26751 + t21208*t26761 + t26674*t26766) + t21208*(-1.*t26611*t26761 - 1.*t26686*t26766 + t26770))*var2[2];
  p_output1[4]=(t26693*(t20923*t21186*t26759 + t26789 + t26822) + t20923*t26586*(t26619*t26759 + t26794 + t26826))*var2[0] + (t26693*(t26604*t26759 + t26777 + t26812) + t26681*(-1.*t26619*t26759 + t26782 + t26816))*var2[1] + (t26681*(t26751 - 1.*t20923*t21186*t26759 + t26802) + t20923*t26586*(-1.*t26604*t26759 + t26770 + t26806))*var2[2];
  p_output1[5]=(t20923*t26597*(-1.*t20923*t26741 + t26822) + t8734*(t26616*t26748 + t26826 - 1.*t26597*t26741*t8734))*var2[0] + (t20923*t26597*(t26812 + t26856 - 1.*t26579*t26741*t8734) + t20923*t26579*(t26816 + t26851 + t26597*t26741*t8734))*var2[1] + (t20923*t26579*(t20923*t26741 + t26802) + t8734*(-1.*t26597*t26748 + t26806 + t26579*t26741*t8734))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t26579 - 0.2255*t26616)*var2[0] + (t26597*(-1.*t26597*t26739 + t26851) + t26616*(t26579*t26739 + t26856))*var2[1] + 0.068*t26597*var2[2];
  p_output1[10]=(-0.325*t26576 - 1.*t22866*t26728 - 1.*t26576*t26737)*var2[0] + (0.325*t22866 - 1.*t26576*t26728 + t22866*t26737)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fRlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
