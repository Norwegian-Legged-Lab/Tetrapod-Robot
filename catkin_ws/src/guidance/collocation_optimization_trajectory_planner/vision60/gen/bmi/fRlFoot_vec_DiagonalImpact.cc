/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:55:20 GMT+02:00
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
  double t6553;
  double t6542;
  double t6555;
  double t6581;
  double t6573;
  double t6575;
  double t6586;
  double t6515;
  double t6576;
  double t6587;
  double t6588;
  double t6561;
  double t6591;
  double t6592;
  double t6593;
  double t6590;
  double t6657;
  double t6660;
  double t6594;
  double t6595;
  double t6596;
  double t6602;
  double t6603;
  double t6645;
  double t6649;
  double t6650;
  double t6651;
  double t6661;
  double t6662;
  double t6663;
  double t6668;
  double t6669;
  double t6670;
  double t6673;
  double t6674;
  double t6675;
  double t6680;
  double t6681;
  double t6682;
  double t6685;
  double t6686;
  double t6687;
  double t6589;
  double t6597;
  double t6598;
  double t6715;
  double t6716;
  double t6717;
  double t6719;
  double t6720;
  double t6721;
  double t6722;
  double t6723;
  double t6724;
  double t6552;
  double t6562;
  double t6563;
  double t6714;
  double t6718;
  double t6725;
  double t6726;
  double t6730;
  double t6731;
  double t6732;
  double t6734;
  double t6735;
  double t6736;
  double t6710;
  double t6711;
  double t6712;
  double t6713;
  double t6727;
  double t6728;
  double t6741;
  double t6742;
  double t6743;
  double t6745;
  double t6746;
  double t6747;
  double t6729;
  double t6737;
  double t6739;
  double t6744;
  double t6748;
  double t6749;
  double t6751;
  double t6752;
  double t6753;
  double t6600;
  double t6653;
  double t6654;
  double t6740;
  double t6757;
  double t6764;
  double t6769;
  double t6776;
  double t6781;
  double t6809;
  double t6813;
  double t6789;
  double t6793;
  double t6803;
  double t6799;
  double t6843;
  double t6838;
  t6553 = Cos(var1[9]);
  t6542 = Sin(var1[4]);
  t6555 = Cos(var1[4]);
  t6581 = Cos(var1[10]);
  t6573 = Cos(var1[11]);
  t6575 = Sin(var1[10]);
  t6586 = Sin(var1[11]);
  t6515 = Sin(var1[9]);
  t6576 = t6573*t6575;
  t6587 = -1.*t6581*t6586;
  t6588 = t6576 + t6587;
  t6561 = Sin(var1[5]);
  t6591 = t6581*t6573;
  t6592 = t6575*t6586;
  t6593 = t6591 + t6592;
  t6590 = Cos(var1[5]);
  t6657 = Cos(var1[3]);
  t6660 = Sin(var1[3]);
  t6594 = t6590*t6593;
  t6595 = t6515*t6588*t6561;
  t6596 = t6594 + t6595;
  t6602 = -1.*t6573*t6575;
  t6603 = t6581*t6586;
  t6645 = t6602 + t6603;
  t6649 = t6590*t6645;
  t6650 = t6515*t6593*t6561;
  t6651 = t6649 + t6650;
  t6661 = t6555*t6515;
  t6662 = t6553*t6542*t6561;
  t6663 = t6661 + t6662;
  t6668 = -1.*t6590*t6515*t6588;
  t6669 = t6593*t6561;
  t6670 = t6668 + t6669;
  t6673 = t6553*t6555*t6588;
  t6674 = -1.*t6542*t6596;
  t6675 = t6673 + t6674;
  t6680 = -1.*t6590*t6515*t6593;
  t6681 = t6645*t6561;
  t6682 = t6680 + t6681;
  t6685 = t6553*t6555*t6593;
  t6686 = -1.*t6542*t6651;
  t6687 = t6685 + t6686;
  t6589 = t6553*t6588*t6542;
  t6597 = t6555*t6596;
  t6598 = t6589 + t6597;
  t6715 = -0.0641*t6573;
  t6716 = -0.28*t6586;
  t6717 = t6715 + t6716;
  t6719 = -1.*t6573;
  t6720 = 1. + t6719;
  t6721 = -0.575*t6720;
  t6722 = -0.295*t6573;
  t6723 = -0.0641*t6586;
  t6724 = t6721 + t6722 + t6723;
  t6552 = t6515*t6542;
  t6562 = -1.*t6553*t6555*t6561;
  t6563 = t6552 + t6562;
  t6714 = 0.325*t6575;
  t6718 = t6581*t6717;
  t6725 = t6575*t6724;
  t6726 = t6714 + t6718 + t6725;
  t6730 = -1.*t6581;
  t6731 = 1. + t6730;
  t6732 = -0.325*t6731;
  t6734 = -1.*t6575*t6717;
  t6735 = t6581*t6724;
  t6736 = t6732 + t6734 + t6735;
  t6710 = -1.*t6553;
  t6711 = 1. + t6710;
  t6712 = 0.1575*t6711;
  t6713 = 0.2255*t6553;
  t6727 = -1.*t6515*t6726;
  t6728 = t6712 + t6713 + t6727;
  t6741 = 0.068*t6515;
  t6742 = t6553*t6726;
  t6743 = t6741 + t6742;
  t6745 = t6590*t6736;
  t6746 = -1.*t6728*t6561;
  t6747 = t6745 + t6746;
  t6729 = t6590*t6728;
  t6737 = t6736*t6561;
  t6739 = t6729 + t6737;
  t6744 = t6743*t6542;
  t6748 = t6555*t6747;
  t6749 = t6744 + t6748;
  t6751 = t6555*t6743;
  t6752 = -1.*t6542*t6747;
  t6753 = t6751 + t6752;
  t6600 = t6553*t6593*t6542;
  t6653 = t6555*t6651;
  t6654 = t6600 + t6653;
  t6740 = t6553*t6590*t6739;
  t6757 = -1.*t6739*t6670;
  t6764 = t6739*t6670;
  t6769 = -1.*t6739*t6682;
  t6776 = -1.*t6553*t6590*t6739;
  t6781 = t6739*t6682;
  t6809 = -1.*t6515*t6743;
  t6813 = t6553*t6743*t6593;
  t6789 = t6515*t6743;
  t6793 = -1.*t6553*t6743*t6588;
  t6803 = -1.*t6553*t6743*t6593;
  t6799 = t6553*t6743*t6588;
  t6843 = t6736*t6593;
  t6838 = -1.*t6736*t6645;
  p_output1[0]=t6598*var2[0] + t6563*var2[1] + t6654*var2[2];
  p_output1[1]=(t6657*t6670 - 1.*t6660*t6675)*var2[0] + (t6553*t6590*t6657 - 1.*t6660*t6663)*var2[1] + (t6657*t6682 - 1.*t6660*t6687)*var2[2];
  p_output1[2]=(t6660*t6670 + t6657*t6675)*var2[0] + (t6553*t6590*t6660 + t6657*t6663)*var2[1] + (t6660*t6682 + t6657*t6687)*var2[2];
  p_output1[3]=(t6654*(-1.*t6563*t6749 - 1.*t6663*t6753 + t6776) + t6563*(t6654*t6749 + t6687*t6753 + t6781))*var2[0] + (t6654*(t6598*t6749 + t6675*t6753 + t6764) + t6598*(-1.*t6654*t6749 - 1.*t6687*t6753 + t6769))*var2[1] + (t6598*(t6740 + t6563*t6749 + t6663*t6753) + t6563*(-1.*t6598*t6749 - 1.*t6675*t6753 + t6757))*var2[2];
  p_output1[4]=(t6682*(t6553*t6561*t6747 + t6776 + t6809) + t6553*t6590*(t6651*t6747 + t6781 + t6813))*var2[0] + (t6682*(t6596*t6747 + t6764 + t6799) + t6670*(-1.*t6651*t6747 + t6769 + t6803))*var2[1] + (t6670*(t6740 - 1.*t6553*t6561*t6747 + t6789) + t6553*t6590*(-1.*t6596*t6747 + t6757 + t6793))*var2[2];
  p_output1[5]=(t6553*t6593*(-1.*t6553*t6728 + t6809) + t6515*(-1.*t6515*t6593*t6728 + t6645*t6736 + t6813))*var2[0] + (t6553*t6588*(t6515*t6593*t6728 + t6803 + t6838) + t6553*t6593*(-1.*t6515*t6588*t6728 + t6799 + t6843))*var2[1] + (t6553*t6588*(t6553*t6728 + t6789) + t6515*(t6515*t6588*t6728 - 1.*t6593*t6736 + t6793))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t6588 - 0.2255*t6645)*var2[0] + (t6593*(-1.*t6593*t6726 + t6838) + t6645*(t6588*t6726 + t6843))*var2[1] + 0.068*t6593*var2[2];
  p_output1[10]=(-0.325*t6586 - 1.*t6573*t6717 - 1.*t6586*t6724)*var2[0] + (0.325*t6573 - 1.*t6586*t6717 + t6573*t6724)*var2[2];
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

#include "fRlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
