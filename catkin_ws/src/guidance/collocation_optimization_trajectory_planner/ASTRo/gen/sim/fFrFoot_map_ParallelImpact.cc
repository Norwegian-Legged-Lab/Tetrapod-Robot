/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:38:18 GMT+02:00
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
  double t17281;
  double t3963;
  double t5114;
  double t17326;
  double t17551;
  double t17556;
  double t17557;
  double t17544;
  double t17568;
  double t17539;
  double t17581;
  double t17538;
  double t14964;
  double t17511;
  double t17519;
  double t17521;
  double t17561;
  double t17587;
  double t17588;
  double t17611;
  double t17601;
  double t17602;
  double t17603;
  double t17600;
  double t17612;
  double t17613;
  double t17617;
  double t17685;
  double t17686;
  double t17687;
  double t17708;
  double t17714;
  double t17734;
  double t17735;
  double t17736;
  double t17739;
  double t17752;
  double t17753;
  double t17754;
  double t17759;
  double t17760;
  double t17761;
  double t17762;
  double t17769;
  double t17770;
  double t17771;
  double t17716;
  double t17722;
  double t17725;
  double t17766;
  double t17767;
  double t17776;
  double t17777;
  double t17778;
  double t17780;
  double t17782;
  double t17783;
  double t17784;
  double t17786;
  double t17788;
  double t17789;
  double t17768;
  double t17772;
  double t17773;
  double t17683;
  double t17688;
  double t17689;
  double t17690;
  double t17693;
  double t17694;
  double t17785;
  double t17791;
  double t17793;
  double t17795;
  double t17796;
  double t17797;
  double t17801;
  double t17802;
  double t17803;
  double t17695;
  double t17696;
  double t17707;
  double t17774;
  double t17804;
  double t17532;
  double t17592;
  double t17594;
  double t17807;
  double t17808;
  double t17810;
  double t17841;
  double t17846;
  double t17853;
  double t17858;
  double t17885;
  double t17890;
  t17281 = Cos(var1[13]);
  t3963 = Cos(var1[14]);
  t5114 = Sin(var1[13]);
  t17326 = Sin(var1[14]);
  t17551 = t17281*t3963;
  t17556 = t5114*t17326;
  t17557 = t17551 + t17556;
  t17544 = Cos(var1[5]);
  t17568 = Sin(var1[12]);
  t17539 = Cos(var1[12]);
  t17581 = Sin(var1[5]);
  t17538 = Cos(var1[4]);
  t14964 = -1.*t3963*t5114;
  t17511 = t17281*t17326;
  t17519 = t14964 + t17511;
  t17521 = Sin(var1[4]);
  t17561 = t17539*t17544*t17557;
  t17587 = -1.*t17568*t17557*t17581;
  t17588 = t17561 + t17587;
  t17611 = Sin(var1[3]);
  t17601 = t17544*t17568*t17557;
  t17602 = t17539*t17557*t17581;
  t17603 = t17601 + t17602;
  t17600 = Cos(var1[3]);
  t17612 = t17538*t17519;
  t17613 = -1.*t17521*t17588;
  t17617 = t17612 + t17613;
  t17685 = t3963*t5114;
  t17686 = -1.*t17281*t17326;
  t17687 = t17685 + t17686;
  t17708 = -1.*t17539;
  t17714 = 1. + t17708;
  t17734 = -1.*t17281;
  t17735 = 1. + t17734;
  t17736 = 0.28121*t17735;
  t17739 = -1.*t3963;
  t17752 = 1. + t17739;
  t17753 = 0.50321*t17752;
  t17754 = 0.19821*t3963;
  t17759 = t17753 + t17754;
  t17760 = t17281*t17759;
  t17761 = -0.305*t5114*t17326;
  t17762 = t17736 + t17760 + t17761;
  t17769 = 0.15121*t17714;
  t17770 = t17539*t17762;
  t17771 = t17769 + t17770;
  t17716 = -0.15121*t17714;
  t17722 = -0.15121*t17539;
  t17725 = -0.15121*t17568;
  t17766 = t17568*t17762;
  t17767 = t17716 + t17722 + t17725 + t17766;
  t17776 = -1.*t17544*t17568;
  t17777 = -1.*t17539*t17581;
  t17778 = t17776 + t17777;
  t17780 = 0.28121*t5114;
  t17782 = -1.*t17759*t5114;
  t17783 = -0.305*t17281*t17326;
  t17784 = t17780 + t17782 + t17783;
  t17786 = t17544*t17771;
  t17788 = -1.*t17767*t17581;
  t17789 = t17786 + t17788;
  t17768 = t17544*t17767;
  t17772 = t17771*t17581;
  t17773 = t17768 + t17772;
  t17683 = t17557*t17521;
  t17688 = t17539*t17544*t17687;
  t17689 = -1.*t17568*t17687*t17581;
  t17690 = t17688 + t17689;
  t17693 = t17538*t17690;
  t17694 = t17683 + t17693;
  t17785 = t17784*t17521;
  t17791 = t17538*t17789;
  t17793 = t17785 + t17791;
  t17795 = t17538*t17784;
  t17796 = -1.*t17521*t17789;
  t17797 = t17795 + t17796;
  t17801 = t17544*t17568*t17687;
  t17802 = t17539*t17687*t17581;
  t17803 = t17801 + t17802;
  t17695 = t17539*t17544;
  t17696 = -1.*t17568*t17581;
  t17707 = t17695 + t17696;
  t17774 = -1.*t17707*t17773;
  t17804 = t17803*t17773;
  t17532 = t17519*t17521;
  t17592 = t17538*t17588;
  t17594 = t17532 + t17592;
  t17807 = t17538*t17557;
  t17808 = -1.*t17521*t17690;
  t17810 = t17807 + t17808;
  t17841 = -1.*t17803*t17773;
  t17846 = t17603*t17773;
  t17853 = -1.*t17784*t17557;
  t17858 = t17784*t17519;
  t17885 = t17707*t17773;
  t17890 = -1.*t17603*t17773;
  p_output1[0]=t17594;
  p_output1[1]=t17600*t17603 - 1.*t17611*t17617;
  p_output1[2]=t17603*t17611 + t17600*t17617;
  p_output1[3]=t17694*(t17774 - 1.*t17538*t17778*t17793 + t17521*t17778*t17797) + t17538*t17778*(t17694*t17793 + t17804 + t17797*t17810);
  p_output1[4]=(t17774 - 1.*t17778*t17789)*t17803 + t17707*(t17557*t17784 + t17690*t17789 + t17804);
  p_output1[5]=t17557*(-1.*t17539*t17767 + t17568*t17771);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t17326 - 1.*t17326*t17759 - 0.305*t17326*t3963;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t17538*t17778;
  p_output1[19]=t17600*t17707 + t17521*t17611*t17778;
  p_output1[20]=t17611*t17707 - 1.*t17521*t17600*t17778;
  p_output1[21]=t17594*(-1.*t17694*t17793 - 1.*t17797*t17810 + t17841) + t17694*(t17594*t17793 + t17617*t17797 + t17846);
  p_output1[22]=t17603*(-1.*t17690*t17789 + t17841 + t17853) + t17803*(t17588*t17789 + t17846 + t17858);
  p_output1[23]=t17519*(-1.*t17568*t17687*t17767 - 1.*t17539*t17687*t17771 + t17853) + t17557*(t17557*t17568*t17767 + t17539*t17557*t17771 + t17858);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t17519*(-1.*t17687*t17762 + t17853) + t17557*(t17557*t17762 + t17858);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t17694;
  p_output1[37]=t17600*t17803 - 1.*t17611*t17810;
  p_output1[38]=t17611*t17803 + t17600*t17810;
  p_output1[39]=t17594*(t17538*t17778*t17793 - 1.*t17521*t17778*t17797 + t17885) + t17538*t17778*(-1.*t17594*t17793 - 1.*t17617*t17797 + t17890);
  p_output1[40]=t17603*(t17778*t17789 + t17885) + t17707*(-1.*t17519*t17784 - 1.*t17588*t17789 + t17890);
  p_output1[41]=t17519*(t17539*t17767 - 1.*t17568*t17771);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t17519 - 0.15121*t17687;
  p_output1[49]=0.305*Power(t17326,2) + 0.28121*t3963 - 1.*t17759*t3963;
  p_output1[50]=-0.305;
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

#include "fFrFoot_map_ParallelImpact.hh"

namespace SymFunction
{

void fFrFoot_map_ParallelImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
