/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:36 GMT+02:00
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
  double t6429;
  double t6496;
  double t6505;
  double t6559;
  double t6577;
  double t6578;
  double t6586;
  double t6621;
  double t6613;
  double t6606;
  double t6627;
  double t6632;
  double t6633;
  double t6591;
  double t6336;
  double t6425;
  double t6615;
  double t6634;
  double t6635;
  double t6650;
  double t6643;
  double t6644;
  double t6645;
  double t6638;
  double t6651;
  double t6652;
  double t6653;
  double t6700;
  double t6701;
  double t6702;
  double t6716;
  double t6717;
  double t6718;
  double t6719;
  double t6723;
  double t6724;
  double t6697;
  double t6712;
  double t6725;
  double t6726;
  double t6676;
  double t6677;
  double t6678;
  double t6682;
  double t6730;
  double t6738;
  double t6740;
  double t6742;
  double t6747;
  double t6753;
  double t6757;
  double t6759;
  double t6760;
  double t6761;
  double t6762;
  double t6764;
  double t6765;
  double t6766;
  double t6773;
  double t6774;
  double t6775;
  double t6780;
  double t6781;
  double t6782;
  double t6786;
  double t6787;
  double t6788;
  double t6776;
  double t6777;
  double t6778;
  double t6785;
  double t6789;
  double t6790;
  double t6791;
  double t6792;
  double t6793;
  double t6763;
  double t6768;
  double t6769;
  double t6783;
  double t6798;
  double t6799;
  double t6803;
  double t6807;
  double t6821;
  double t6824;
  double t6673;
  double t6674;
  double t6675;
  double t6590;
  double t6636;
  double t6637;
  double t6810;
  double t6813;
  double t6814;
  double t6877;
  double t6892;
  double t6909;
  double t6899;
  double t6931;
  double t6914;
  double t6966;
  double t6972;
  double t6982;
  double t6990;
  t6429 = Cos(var1[8]);
  t6496 = Sin(var1[7]);
  t6505 = t6429*t6496;
  t6559 = Cos(var1[7]);
  t6577 = Sin(var1[8]);
  t6578 = -1.*t6559*t6577;
  t6586 = t6505 + t6578;
  t6621 = Cos(var1[5]);
  t6613 = Sin(var1[6]);
  t6606 = Sin(var1[5]);
  t6627 = t6559*t6429;
  t6632 = t6496*t6577;
  t6633 = t6627 + t6632;
  t6591 = Cos(var1[4]);
  t6336 = Cos(var1[6]);
  t6425 = Sin(var1[4]);
  t6615 = t6606*t6613*t6586;
  t6634 = t6621*t6633;
  t6635 = t6615 + t6634;
  t6650 = Sin(var1[3]);
  t6643 = -1.*t6621*t6613*t6586;
  t6644 = t6606*t6633;
  t6645 = t6643 + t6644;
  t6638 = Cos(var1[3]);
  t6651 = t6591*t6336*t6586;
  t6652 = -1.*t6425*t6635;
  t6653 = t6651 + t6652;
  t6700 = -0.0641*t6429;
  t6701 = -0.28*t6577;
  t6702 = t6700 + t6701;
  t6716 = -1.*t6429;
  t6717 = 1. + t6716;
  t6718 = 0.075*t6717;
  t6719 = 0.355*t6429;
  t6723 = -0.0641*t6577;
  t6724 = t6718 + t6719 + t6723;
  t6697 = -0.325*t6496;
  t6712 = t6559*t6702;
  t6725 = t6496*t6724;
  t6726 = t6697 + t6712 + t6725;
  t6676 = -1.*t6336;
  t6677 = 1. + t6676;
  t6678 = 0.1575*t6677;
  t6682 = 0.2255*t6336;
  t6730 = -1.*t6613*t6726;
  t6738 = t6678 + t6682 + t6730;
  t6740 = -1.*t6606*t6738;
  t6742 = -1.*t6559;
  t6747 = 1. + t6742;
  t6753 = 0.325*t6747;
  t6757 = -1.*t6496*t6702;
  t6759 = t6559*t6724;
  t6760 = t6753 + t6757 + t6759;
  t6761 = t6621*t6760;
  t6762 = t6740 + t6761;
  t6764 = 0.068*t6613;
  t6765 = t6336*t6726;
  t6766 = t6764 + t6765;
  t6773 = -1.*t6591*t6336*t6606;
  t6774 = t6425*t6613;
  t6775 = t6773 + t6774;
  t6780 = t6621*t6738;
  t6781 = t6606*t6760;
  t6782 = t6780 + t6781;
  t6786 = -1.*t6429*t6496;
  t6787 = t6559*t6577;
  t6788 = t6786 + t6787;
  t6776 = t6591*t6762;
  t6777 = t6425*t6766;
  t6778 = t6776 + t6777;
  t6785 = t6336*t6425*t6633;
  t6789 = t6621*t6788;
  t6790 = t6606*t6613*t6633;
  t6791 = t6789 + t6790;
  t6792 = t6591*t6791;
  t6793 = t6785 + t6792;
  t6763 = -1.*t6425*t6762;
  t6768 = t6591*t6766;
  t6769 = t6763 + t6768;
  t6783 = -1.*t6621*t6336*t6782;
  t6798 = t6606*t6788;
  t6799 = -1.*t6621*t6613*t6633;
  t6803 = t6798 + t6799;
  t6807 = t6782*t6803;
  t6821 = -1.*t6613*t6766;
  t6824 = t6336*t6766*t6633;
  t6673 = t6336*t6425*t6606;
  t6674 = t6591*t6613;
  t6675 = t6673 + t6674;
  t6590 = t6336*t6425*t6586;
  t6636 = t6591*t6635;
  t6637 = t6590 + t6636;
  t6810 = t6591*t6336*t6633;
  t6813 = -1.*t6425*t6791;
  t6814 = t6810 + t6813;
  t6877 = t6782*t6645;
  t6892 = -1.*t6782*t6803;
  t6909 = -1.*t6336*t6766*t6633;
  t6899 = t6336*t6766*t6586;
  t6931 = t6760*t6633;
  t6914 = -1.*t6760*t6788;
  t6966 = t6621*t6336*t6782;
  t6972 = -1.*t6782*t6645;
  t6982 = t6613*t6766;
  t6990 = -1.*t6336*t6766*t6586;
  p_output1[0]=t6637;
  p_output1[1]=t6638*t6645 - 1.*t6650*t6653;
  p_output1[2]=t6645*t6650 + t6638*t6653;
  p_output1[3]=(-1.*t6675*t6769 - 1.*t6775*t6778 + t6783)*t6793 + t6775*(t6778*t6793 + t6807 + t6769*t6814);
  p_output1[4]=t6803*(t6336*t6606*t6762 + t6783 + t6821) + t6336*t6621*(t6762*t6791 + t6807 + t6824);
  p_output1[5]=t6336*t6633*(-1.*t6336*t6738 + t6821) + t6613*(-1.*t6613*t6633*t6738 + t6760*t6788 + t6824);
  p_output1[6]=-0.1575*t6586 - 0.2255*t6788;
  p_output1[7]=0.325*t6577 - 1.*t6429*t6702 - 1.*t6577*t6724;
  p_output1[8]=-0.0641;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t6775;
  p_output1[19]=t6336*t6621*t6638 - 1.*t6650*t6675;
  p_output1[20]=t6336*t6621*t6650 + t6638*t6675;
  p_output1[21]=t6793*(t6653*t6769 + t6637*t6778 + t6877) + t6637*(-1.*t6778*t6793 - 1.*t6769*t6814 + t6892);
  p_output1[22]=t6803*(t6635*t6762 + t6877 + t6899) + t6645*(-1.*t6762*t6791 + t6892 + t6909);
  p_output1[23]=t6336*t6586*(t6613*t6633*t6738 + t6909 + t6914) + t6336*t6633*(-1.*t6586*t6613*t6738 + t6899 + t6931);
  p_output1[24]=t6633*(-1.*t6633*t6726 + t6914) + t6788*(t6586*t6726 + t6931);
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
  p_output1[36]=t6793;
  p_output1[37]=t6638*t6803 - 1.*t6650*t6814;
  p_output1[38]=t6650*t6803 + t6638*t6814;
  p_output1[39]=t6637*(t6675*t6769 + t6775*t6778 + t6966) + t6775*(-1.*t6653*t6769 - 1.*t6637*t6778 + t6972);
  p_output1[40]=t6645*(-1.*t6336*t6606*t6762 + t6966 + t6982) + t6336*t6621*(-1.*t6635*t6762 + t6972 + t6990);
  p_output1[41]=t6336*t6586*(t6336*t6738 + t6982) + t6613*(t6586*t6613*t6738 - 1.*t6633*t6760 + t6990);
  p_output1[42]=0.068*t6633;
  p_output1[43]=-0.325*t6429 - 1.*t6577*t6702 + t6429*t6724;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fFlFoot_map_DiagonalStance2.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
