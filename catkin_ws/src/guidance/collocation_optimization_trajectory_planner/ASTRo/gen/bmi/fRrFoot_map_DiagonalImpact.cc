/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:22 GMT+02:00
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
  double t8680;
  double t8634;
  double t8675;
  double t8681;
  double t8755;
  double t8756;
  double t8757;
  double t8754;
  double t8759;
  double t8750;
  double t8760;
  double t8745;
  double t8679;
  double t8683;
  double t8739;
  double t8743;
  double t8758;
  double t8761;
  double t8762;
  double t8770;
  double t8766;
  double t8767;
  double t8768;
  double t8765;
  double t8771;
  double t8772;
  double t8773;
  double t8794;
  double t8795;
  double t8797;
  double t8800;
  double t8801;
  double t8802;
  double t8803;
  double t8804;
  double t8805;
  double t8806;
  double t8807;
  double t8808;
  double t8809;
  double t8810;
  double t8814;
  double t8815;
  double t8798;
  double t8799;
  double t8811;
  double t8812;
  double t8819;
  double t8820;
  double t8821;
  double t8822;
  double t8824;
  double t8825;
  double t8826;
  double t8829;
  double t8830;
  double t8831;
  double t8813;
  double t8816;
  double t8817;
  double t8779;
  double t8780;
  double t8782;
  double t8783;
  double t8784;
  double t8785;
  double t8787;
  double t8788;
  double t8789;
  double t8827;
  double t8832;
  double t8833;
  double t8835;
  double t8836;
  double t8837;
  double t8841;
  double t8842;
  double t8843;
  double t8790;
  double t8791;
  double t8793;
  double t8818;
  double t8844;
  double t8744;
  double t8763;
  double t8764;
  double t8846;
  double t8847;
  double t8848;
  double t8879;
  double t8884;
  double t8890;
  double t8894;
  double t8921;
  double t8926;
  t8680 = Cos(var1[16]);
  t8634 = Cos(var1[17]);
  t8675 = Sin(var1[16]);
  t8681 = Sin(var1[17]);
  t8755 = -1.*t8680*t8634;
  t8756 = -1.*t8675*t8681;
  t8757 = t8755 + t8756;
  t8754 = Cos(var1[5]);
  t8759 = Sin(var1[15]);
  t8750 = Cos(var1[15]);
  t8760 = Sin(var1[5]);
  t8745 = Cos(var1[4]);
  t8679 = -1.*t8634*t8675;
  t8683 = t8680*t8681;
  t8739 = t8679 + t8683;
  t8743 = Sin(var1[4]);
  t8758 = t8750*t8754*t8757;
  t8761 = -1.*t8759*t8757*t8760;
  t8762 = t8758 + t8761;
  t8770 = Sin(var1[3]);
  t8766 = t8754*t8759*t8757;
  t8767 = t8750*t8757*t8760;
  t8768 = t8766 + t8767;
  t8765 = Cos(var1[3]);
  t8771 = t8745*t8739;
  t8772 = -1.*t8743*t8762;
  t8773 = t8771 + t8772;
  t8794 = -1.*t8750;
  t8795 = 1. + t8794;
  t8797 = -0.15121*t8795;
  t8800 = -1.*t8680;
  t8801 = 1. + t8800;
  t8802 = -0.28121*t8801;
  t8803 = -1.*t8634;
  t8804 = 1. + t8803;
  t8805 = -0.50321*t8804;
  t8806 = -0.19821*t8634;
  t8807 = t8805 + t8806;
  t8808 = t8680*t8807;
  t8809 = 0.305*t8675*t8681;
  t8810 = t8802 + t8808 + t8809;
  t8814 = t8750*t8810;
  t8815 = t8797 + t8814;
  t8798 = -0.15121*t8750;
  t8799 = 0.15121*t8759;
  t8811 = t8759*t8810;
  t8812 = t8797 + t8798 + t8799 + t8811;
  t8819 = t8754*t8759;
  t8820 = t8750*t8760;
  t8821 = t8819 + t8820;
  t8822 = 0.28121*t8675;
  t8824 = t8807*t8675;
  t8825 = -0.305*t8680*t8681;
  t8826 = t8822 + t8824 + t8825;
  t8829 = t8754*t8815;
  t8830 = -1.*t8812*t8760;
  t8831 = t8829 + t8830;
  t8813 = t8754*t8812;
  t8816 = t8815*t8760;
  t8817 = t8813 + t8816;
  t8779 = t8680*t8634;
  t8780 = t8675*t8681;
  t8782 = t8779 + t8780;
  t8783 = t8782*t8743;
  t8784 = t8750*t8754*t8739;
  t8785 = -1.*t8759*t8739*t8760;
  t8787 = t8784 + t8785;
  t8788 = t8745*t8787;
  t8789 = t8783 + t8788;
  t8827 = t8826*t8743;
  t8832 = t8745*t8831;
  t8833 = t8827 + t8832;
  t8835 = t8745*t8826;
  t8836 = -1.*t8743*t8831;
  t8837 = t8835 + t8836;
  t8841 = t8754*t8759*t8739;
  t8842 = t8750*t8739*t8760;
  t8843 = t8841 + t8842;
  t8790 = -1.*t8750*t8754;
  t8791 = t8759*t8760;
  t8793 = t8790 + t8791;
  t8818 = -1.*t8793*t8817;
  t8844 = t8843*t8817;
  t8744 = t8739*t8743;
  t8763 = t8745*t8762;
  t8764 = t8744 + t8763;
  t8846 = t8745*t8782;
  t8847 = -1.*t8743*t8787;
  t8848 = t8846 + t8847;
  t8879 = -1.*t8843*t8817;
  t8884 = t8768*t8817;
  t8890 = -1.*t8826*t8782;
  t8894 = t8826*t8739;
  t8921 = t8793*t8817;
  t8926 = -1.*t8768*t8817;
  p_output1[0]=t8764;
  p_output1[1]=t8765*t8768 - 1.*t8770*t8773;
  p_output1[2]=t8768*t8770 + t8765*t8773;
  p_output1[3]=t8789*(t8818 - 1.*t8745*t8821*t8833 + t8743*t8821*t8837) + t8745*t8821*(t8789*t8833 + t8844 + t8837*t8848);
  p_output1[4]=(t8818 - 1.*t8821*t8831)*t8843 + t8793*(t8782*t8826 + t8787*t8831 + t8844);
  p_output1[5]=t8782*(t8750*t8812 - 1.*t8759*t8815);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t8757 - 0.15121*t8782;
  p_output1[16]=0.28121*t8681 - 0.305*t8634*t8681 + t8681*t8807;
  p_output1[17]=0;
  p_output1[18]=t8745*t8821;
  p_output1[19]=t8765*t8793 + t8743*t8770*t8821;
  p_output1[20]=t8770*t8793 - 1.*t8743*t8765*t8821;
  p_output1[21]=t8764*(-1.*t8789*t8833 - 1.*t8837*t8848 + t8879) + t8789*(t8764*t8833 + t8773*t8837 + t8884);
  p_output1[22]=t8768*(-1.*t8787*t8831 + t8879 + t8890) + t8843*(t8762*t8831 + t8884 + t8894);
  p_output1[23]=t8739*(-1.*t8739*t8759*t8812 - 1.*t8739*t8750*t8815 + t8890) + t8782*(t8757*t8759*t8812 + t8750*t8757*t8815 + t8894);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t8739*(-1.*t8739*t8810 + t8890) + t8782*(t8757*t8810 + t8894);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8789;
  p_output1[37]=t8765*t8843 - 1.*t8770*t8848;
  p_output1[38]=t8770*t8843 + t8765*t8848;
  p_output1[39]=t8764*(t8745*t8821*t8833 - 1.*t8743*t8821*t8837 + t8921) + t8745*t8821*(-1.*t8764*t8833 - 1.*t8773*t8837 + t8926);
  p_output1[40]=t8768*(t8821*t8831 + t8921) + t8793*(-1.*t8739*t8826 - 1.*t8762*t8831 + t8926);
  p_output1[41]=t8739*(-1.*t8750*t8812 + t8759*t8815);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0.28121*t8634 + 0.305*Power(t8681,2) + t8634*t8807;
  p_output1[53]=-0.305;
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

#include "fRrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fRrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
