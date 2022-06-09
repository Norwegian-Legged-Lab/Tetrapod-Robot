/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 14:41:40 GMT+02:00
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
  double t3481;
  double t3236;
  double t3843;
  double t8681;
  double t8674;
  double t8679;
  double t8682;
  double t3145;
  double t8680;
  double t8685;
  double t8753;
  double t3851;
  double t8764;
  double t8772;
  double t8776;
  double t8763;
  double t8796;
  double t8798;
  double t8777;
  double t8778;
  double t8779;
  double t8786;
  double t8787;
  double t8788;
  double t8789;
  double t8790;
  double t8791;
  double t8799;
  double t8800;
  double t8801;
  double t8805;
  double t8806;
  double t8807;
  double t8809;
  double t8811;
  double t8812;
  double t8817;
  double t8818;
  double t8819;
  double t8822;
  double t8823;
  double t8824;
  double t8761;
  double t8781;
  double t8782;
  double t8850;
  double t8851;
  double t8853;
  double t8855;
  double t8856;
  double t8858;
  double t8859;
  double t8860;
  double t8861;
  double t3436;
  double t3979;
  double t3985;
  double t8849;
  double t8854;
  double t8862;
  double t8864;
  double t8869;
  double t8870;
  double t8871;
  double t8872;
  double t8873;
  double t8874;
  double t8845;
  double t8846;
  double t8847;
  double t8848;
  double t8865;
  double t8866;
  double t8878;
  double t8879;
  double t8880;
  double t8882;
  double t8883;
  double t8884;
  double t8868;
  double t8875;
  double t8876;
  double t8881;
  double t8885;
  double t8886;
  double t8888;
  double t8889;
  double t8890;
  double t8785;
  double t8792;
  double t8793;
  double t8877;
  double t8894;
  double t8901;
  double t8906;
  double t8913;
  double t8918;
  double t8946;
  double t8950;
  double t8926;
  double t8930;
  double t8940;
  double t8936;
  double t8980;
  double t8975;
  t3481 = Cos(var1[12]);
  t3236 = Sin(var1[4]);
  t3843 = Cos(var1[4]);
  t8681 = Cos(var1[13]);
  t8674 = Cos(var1[14]);
  t8679 = Sin(var1[13]);
  t8682 = Sin(var1[14]);
  t3145 = Sin(var1[12]);
  t8680 = t8674*t8679;
  t8685 = -1.*t8681*t8682;
  t8753 = t8680 + t8685;
  t3851 = Sin(var1[5]);
  t8764 = t8681*t8674;
  t8772 = t8679*t8682;
  t8776 = t8764 + t8772;
  t8763 = Cos(var1[5]);
  t8796 = Cos(var1[3]);
  t8798 = Sin(var1[3]);
  t8777 = t8763*t8776;
  t8778 = t3145*t8753*t3851;
  t8779 = t8777 + t8778;
  t8786 = -1.*t8674*t8679;
  t8787 = t8681*t8682;
  t8788 = t8786 + t8787;
  t8789 = t8763*t8788;
  t8790 = t3145*t8776*t3851;
  t8791 = t8789 + t8790;
  t8799 = t3843*t3145;
  t8800 = t3481*t3236*t3851;
  t8801 = t8799 + t8800;
  t8805 = -1.*t8763*t3145*t8753;
  t8806 = t8776*t3851;
  t8807 = t8805 + t8806;
  t8809 = t3481*t3843*t8753;
  t8811 = -1.*t3236*t8779;
  t8812 = t8809 + t8811;
  t8817 = -1.*t8763*t3145*t8776;
  t8818 = t8788*t3851;
  t8819 = t8817 + t8818;
  t8822 = t3481*t3843*t8776;
  t8823 = -1.*t3236*t8791;
  t8824 = t8822 + t8823;
  t8761 = t3481*t8753*t3236;
  t8781 = t3843*t8779;
  t8782 = t8761 + t8781;
  t8850 = -0.0641*t8674;
  t8851 = -0.28*t8682;
  t8853 = t8850 + t8851;
  t8855 = -1.*t8674;
  t8856 = 1. + t8855;
  t8858 = 0.075*t8856;
  t8859 = 0.355*t8674;
  t8860 = -0.0641*t8682;
  t8861 = t8858 + t8859 + t8860;
  t3436 = t3145*t3236;
  t3979 = -1.*t3481*t3843*t3851;
  t3985 = t3436 + t3979;
  t8849 = -0.325*t8679;
  t8854 = t8681*t8853;
  t8862 = t8679*t8861;
  t8864 = t8849 + t8854 + t8862;
  t8869 = -1.*t8681;
  t8870 = 1. + t8869;
  t8871 = 0.325*t8870;
  t8872 = -1.*t8679*t8853;
  t8873 = t8681*t8861;
  t8874 = t8871 + t8872 + t8873;
  t8845 = -1.*t3481;
  t8846 = 1. + t8845;
  t8847 = -0.1575*t8846;
  t8848 = -0.2255*t3481;
  t8865 = -1.*t3145*t8864;
  t8866 = t8847 + t8848 + t8865;
  t8878 = -0.068*t3145;
  t8879 = t3481*t8864;
  t8880 = t8878 + t8879;
  t8882 = t8763*t8874;
  t8883 = -1.*t8866*t3851;
  t8884 = t8882 + t8883;
  t8868 = t8763*t8866;
  t8875 = t8874*t3851;
  t8876 = t8868 + t8875;
  t8881 = t8880*t3236;
  t8885 = t3843*t8884;
  t8886 = t8881 + t8885;
  t8888 = t3843*t8880;
  t8889 = -1.*t3236*t8884;
  t8890 = t8888 + t8889;
  t8785 = t3481*t8776*t3236;
  t8792 = t3843*t8791;
  t8793 = t8785 + t8792;
  t8877 = t3481*t8763*t8876;
  t8894 = -1.*t8876*t8807;
  t8901 = t8876*t8807;
  t8906 = -1.*t8876*t8819;
  t8913 = -1.*t3481*t8763*t8876;
  t8918 = t8876*t8819;
  t8946 = -1.*t3145*t8880;
  t8950 = t3481*t8880*t8776;
  t8926 = t3145*t8880;
  t8930 = -1.*t3481*t8880*t8753;
  t8940 = -1.*t3481*t8880*t8776;
  t8936 = t3481*t8880*t8753;
  t8980 = t8874*t8776;
  t8975 = -1.*t8874*t8788;
  p_output1[0]=t8782*var2[0] + t3985*var2[1] + t8793*var2[2];
  p_output1[1]=(t8796*t8807 - 1.*t8798*t8812)*var2[0] + (t3481*t8763*t8796 - 1.*t8798*t8801)*var2[1] + (t8796*t8819 - 1.*t8798*t8824)*var2[2];
  p_output1[2]=(t8798*t8807 + t8796*t8812)*var2[0] + (t3481*t8763*t8798 + t8796*t8801)*var2[1] + (t8798*t8819 + t8796*t8824)*var2[2];
  p_output1[3]=(t8793*(-1.*t3985*t8886 - 1.*t8801*t8890 + t8913) + t3985*(t8793*t8886 + t8824*t8890 + t8918))*var2[0] + (t8793*(t8782*t8886 + t8812*t8890 + t8901) + t8782*(-1.*t8793*t8886 - 1.*t8824*t8890 + t8906))*var2[1] + (t8782*(t8877 + t3985*t8886 + t8801*t8890) + t3985*(-1.*t8782*t8886 - 1.*t8812*t8890 + t8894))*var2[2];
  p_output1[4]=(t8819*(t3481*t3851*t8884 + t8913 + t8946) + t3481*t8763*(t8791*t8884 + t8918 + t8950))*var2[0] + (t8819*(t8779*t8884 + t8901 + t8936) + t8807*(-1.*t8791*t8884 + t8906 + t8940))*var2[1] + (t8807*(t8877 - 1.*t3481*t3851*t8884 + t8926) + t3481*t8763*(-1.*t8779*t8884 + t8894 + t8930))*var2[2];
  p_output1[5]=(t3481*t8776*(-1.*t3481*t8866 + t8946) + t3145*(-1.*t3145*t8776*t8866 + t8788*t8874 + t8950))*var2[0] + (t3481*t8753*(t3145*t8776*t8866 + t8940 + t8975) + t3481*t8776*(-1.*t3145*t8753*t8866 + t8936 + t8980))*var2[1] + (t3481*t8753*(t3481*t8866 + t8926) + t3145*(t3145*t8753*t8866 - 1.*t8776*t8874 + t8930))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t8753 + 0.2255*t8788)*var2[0] + (t8776*(-1.*t8776*t8864 + t8975) + t8788*(t8753*t8864 + t8980))*var2[1] - 0.068*t8776*var2[2];
  p_output1[13]=(0.325*t8682 - 1.*t8674*t8853 - 1.*t8682*t8861)*var2[0] + (-0.325*t8674 - 1.*t8682*t8853 + t8674*t8861)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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
