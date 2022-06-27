/*
 * Automatically Generated from Mathematica.
 * Sun 12 Jun 2022 17:41:34 GMT+02:00
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
  double t5608;
  double t5616;
  double t5613;
  double t5684;
  double t5689;
  double t5679;
  double t5690;
  double t5614;
  double t5695;
  double t5696;
  double t5697;
  double t5617;
  double t5693;
  double t5688;
  double t5691;
  double t5692;
  double t5615;
  double t5673;
  double t5677;
  double t5717;
  double t5715;
  double t5698;
  double t5699;
  double t5700;
  double t5704;
  double t5705;
  double t5706;
  double t5708;
  double t5709;
  double t5710;
  double t5719;
  double t5720;
  double t5721;
  double t5726;
  double t5727;
  double t5728;
  double t5731;
  double t5732;
  double t5734;
  double t5738;
  double t5739;
  double t5740;
  double t5742;
  double t5743;
  double t5744;
  double t5694;
  double t5701;
  double t5702;
  double t5763;
  double t5764;
  double t5769;
  double t5770;
  double t5771;
  double t5772;
  double t5773;
  double t5774;
  double t5775;
  double t5776;
  double t5777;
  double t5778;
  double t5779;
  double t5783;
  double t5784;
  double t5785;
  double t5766;
  double t5767;
  double t5768;
  double t5780;
  double t5781;
  double t5789;
  double t5790;
  double t5791;
  double t5792;
  double t5794;
  double t5795;
  double t5796;
  double t5782;
  double t5786;
  double t5787;
  double t5793;
  double t5797;
  double t5798;
  double t5800;
  double t5801;
  double t5802;
  double t5707;
  double t5711;
  double t5712;
  double t5788;
  double t5806;
  double t5813;
  double t5818;
  double t5825;
  double t5830;
  double t5856;
  double t5860;
  t5608 = Cos(var1[4]);
  t5616 = Cos(var1[12]);
  t5613 = Cos(var1[5]);
  t5684 = Cos(var1[14]);
  t5689 = Sin(var1[13]);
  t5679 = Cos(var1[13]);
  t5690 = Sin(var1[14]);
  t5614 = Sin(var1[12]);
  t5695 = t5684*t5689;
  t5696 = -1.*t5679*t5690;
  t5697 = t5695 + t5696;
  t5617 = Sin(var1[5]);
  t5693 = Sin(var1[4]);
  t5688 = t5679*t5684;
  t5691 = t5689*t5690;
  t5692 = t5688 + t5691;
  t5615 = -1.*t5613*t5614;
  t5673 = -1.*t5616*t5617;
  t5677 = t5615 + t5673;
  t5717 = Cos(var1[3]);
  t5715 = Sin(var1[3]);
  t5698 = t5616*t5613*t5697;
  t5699 = -1.*t5614*t5697*t5617;
  t5700 = t5698 + t5699;
  t5704 = -1.*t5684*t5689;
  t5705 = t5679*t5690;
  t5706 = t5704 + t5705;
  t5708 = t5616*t5613*t5692;
  t5709 = -1.*t5614*t5692*t5617;
  t5710 = t5708 + t5709;
  t5719 = t5616*t5613;
  t5720 = -1.*t5614*t5617;
  t5721 = t5719 + t5720;
  t5726 = t5613*t5614*t5697;
  t5727 = t5616*t5697*t5617;
  t5728 = t5726 + t5727;
  t5731 = t5608*t5692;
  t5732 = -1.*t5693*t5700;
  t5734 = t5731 + t5732;
  t5738 = t5613*t5614*t5692;
  t5739 = t5616*t5692*t5617;
  t5740 = t5738 + t5739;
  t5742 = t5608*t5706;
  t5743 = -1.*t5693*t5710;
  t5744 = t5742 + t5743;
  t5694 = t5692*t5693;
  t5701 = t5608*t5700;
  t5702 = t5694 + t5701;
  t5763 = -1.*t5616;
  t5764 = 1. + t5763;
  t5769 = -1.*t5679;
  t5770 = 1. + t5769;
  t5771 = 0.28121*t5770;
  t5772 = -1.*t5684;
  t5773 = 1. + t5772;
  t5774 = 0.50321*t5773;
  t5775 = 0.19821*t5684;
  t5776 = t5774 + t5775;
  t5777 = t5679*t5776;
  t5778 = -0.305*t5689*t5690;
  t5779 = t5771 + t5777 + t5778;
  t5783 = 0.15121*t5764;
  t5784 = t5616*t5779;
  t5785 = t5783 + t5784;
  t5766 = -0.15121*t5764;
  t5767 = -0.15121*t5616;
  t5768 = -0.15121*t5614;
  t5780 = t5614*t5779;
  t5781 = t5766 + t5767 + t5768 + t5780;
  t5789 = 0.28121*t5689;
  t5790 = -1.*t5776*t5689;
  t5791 = -0.305*t5679*t5690;
  t5792 = t5789 + t5790 + t5791;
  t5794 = t5613*t5785;
  t5795 = -1.*t5781*t5617;
  t5796 = t5794 + t5795;
  t5782 = t5613*t5781;
  t5786 = t5785*t5617;
  t5787 = t5782 + t5786;
  t5793 = t5792*t5693;
  t5797 = t5608*t5796;
  t5798 = t5793 + t5797;
  t5800 = t5608*t5792;
  t5801 = -1.*t5693*t5796;
  t5802 = t5800 + t5801;
  t5707 = t5706*t5693;
  t5711 = t5608*t5710;
  t5712 = t5707 + t5711;
  t5788 = -1.*t5721*t5787;
  t5806 = t5728*t5787;
  t5813 = t5721*t5787;
  t5818 = -1.*t5740*t5787;
  t5825 = -1.*t5728*t5787;
  t5830 = t5740*t5787;
  t5856 = -1.*t5792*t5692;
  t5860 = t5792*t5706;
  p_output1[0]=t5712*var2[0] + t5608*t5677*var2[1] + t5702*var2[2];
  p_output1[1]=(t5717*t5740 - 1.*t5715*t5744)*var2[0] + (t5677*t5693*t5715 + t5717*t5721)*var2[1] + (t5717*t5728 - 1.*t5715*t5734)*var2[2];
  p_output1[2]=(t5715*t5740 + t5717*t5744)*var2[0] + (-1.*t5677*t5693*t5717 + t5715*t5721)*var2[1] + (t5715*t5728 + t5717*t5734)*var2[2];
  p_output1[3]=(t5702*(t5788 - 1.*t5608*t5677*t5798 + t5677*t5693*t5802) + t5608*t5677*(t5702*t5798 + t5734*t5802 + t5806))*var2[0] + (t5712*(-1.*t5702*t5798 - 1.*t5734*t5802 + t5825) + t5702*(t5712*t5798 + t5744*t5802 + t5830))*var2[1] + (t5712*(t5608*t5677*t5798 - 1.*t5677*t5693*t5802 + t5813) + t5608*t5677*(-1.*t5712*t5798 - 1.*t5744*t5802 + t5818))*var2[2];
  p_output1[4]=(t5728*(t5788 - 1.*t5677*t5796) + t5721*(t5692*t5792 + t5700*t5796 + t5806))*var2[0] + (t5740*(-1.*t5700*t5796 + t5825 + t5856) + t5728*(t5710*t5796 + t5830 + t5860))*var2[1] + (t5740*(t5677*t5796 + t5813) + t5721*(-1.*t5706*t5792 - 1.*t5710*t5796 + t5818))*var2[2];
  p_output1[5]=t5692*(-1.*t5616*t5781 + t5614*t5785)*var2[0] + (t5706*(-1.*t5614*t5697*t5781 - 1.*t5616*t5697*t5785 + t5856) + t5692*(t5614*t5692*t5781 + t5616*t5692*t5785 + t5860))*var2[1] + t5706*(t5616*t5781 - 1.*t5614*t5785)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(-0.15121 + t5706*(-1.*t5697*t5779 + t5856) + t5692*(t5692*t5779 + t5860))*var2[1] + (-0.15121*t5697 - 0.15121*t5706)*var2[2];
  p_output1[13]=(0.28121*t5690 - 0.305*t5684*t5690 - 1.*t5690*t5776)*var2[0] + (0.28121*t5684 + 0.305*Power(t5690,2) - 1.*t5684*t5776)*var2[2];
  p_output1[14]=-0.305*var2[2];
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

#include "fFrFoot_vec_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
