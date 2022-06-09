/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:59:59 GMT+02:00
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
  double t6666;
  double t6722;
  double t6704;
  double t6748;
  double t6753;
  double t6747;
  double t6757;
  double t6719;
  double t6765;
  double t6766;
  double t6767;
  double t6731;
  double t6760;
  double t6777;
  double t6779;
  double t6828;
  double t6720;
  double t6735;
  double t6736;
  double t6860;
  double t6854;
  double t6749;
  double t6758;
  double t6759;
  double t6768;
  double t6769;
  double t6770;
  double t6840;
  double t6841;
  double t6842;
  double t6861;
  double t6865;
  double t6866;
  double t6871;
  double t6872;
  double t6873;
  double t6877;
  double t6879;
  double t6881;
  double t6886;
  double t6887;
  double t6888;
  double t6890;
  double t6891;
  double t6892;
  double t6764;
  double t6772;
  double t6773;
  double t6914;
  double t6916;
  double t6917;
  double t6920;
  double t6921;
  double t6922;
  double t6923;
  double t6924;
  double t6925;
  double t6926;
  double t6927;
  double t6928;
  double t6929;
  double t6930;
  double t6934;
  double t6935;
  double t6918;
  double t6919;
  double t6931;
  double t6932;
  double t6939;
  double t6940;
  double t6941;
  double t6942;
  double t6944;
  double t6945;
  double t6947;
  double t6933;
  double t6936;
  double t6937;
  double t6943;
  double t6948;
  double t6949;
  double t6951;
  double t6953;
  double t6954;
  double t6775;
  double t6844;
  double t6848;
  double t6938;
  double t6958;
  double t6965;
  double t6970;
  double t6977;
  double t6982;
  double t7008;
  double t7012;
  t6666 = Cos(var1[4]);
  t6722 = Cos(var1[15]);
  t6704 = Cos(var1[5]);
  t6748 = Cos(var1[17]);
  t6753 = Sin(var1[16]);
  t6747 = Cos(var1[16]);
  t6757 = Sin(var1[17]);
  t6719 = Sin(var1[15]);
  t6765 = -1.*t6748*t6753;
  t6766 = t6747*t6757;
  t6767 = t6765 + t6766;
  t6731 = Sin(var1[5]);
  t6760 = Sin(var1[4]);
  t6777 = -1.*t6747*t6748;
  t6779 = -1.*t6753*t6757;
  t6828 = t6777 + t6779;
  t6720 = t6704*t6719;
  t6735 = t6722*t6731;
  t6736 = t6720 + t6735;
  t6860 = Cos(var1[3]);
  t6854 = Sin(var1[3]);
  t6749 = t6747*t6748;
  t6758 = t6753*t6757;
  t6759 = t6749 + t6758;
  t6768 = t6722*t6704*t6767;
  t6769 = -1.*t6719*t6767*t6731;
  t6770 = t6768 + t6769;
  t6840 = t6722*t6704*t6828;
  t6841 = -1.*t6719*t6828*t6731;
  t6842 = t6840 + t6841;
  t6861 = -1.*t6722*t6704;
  t6865 = t6719*t6731;
  t6866 = t6861 + t6865;
  t6871 = t6704*t6719*t6767;
  t6872 = t6722*t6767*t6731;
  t6873 = t6871 + t6872;
  t6877 = t6666*t6759;
  t6879 = -1.*t6760*t6770;
  t6881 = t6877 + t6879;
  t6886 = t6704*t6719*t6828;
  t6887 = t6722*t6828*t6731;
  t6888 = t6886 + t6887;
  t6890 = t6666*t6767;
  t6891 = -1.*t6760*t6842;
  t6892 = t6890 + t6891;
  t6764 = t6759*t6760;
  t6772 = t6666*t6770;
  t6773 = t6764 + t6772;
  t6914 = -1.*t6722;
  t6916 = 1. + t6914;
  t6917 = -0.15121*t6916;
  t6920 = -1.*t6747;
  t6921 = 1. + t6920;
  t6922 = -0.28121*t6921;
  t6923 = -1.*t6748;
  t6924 = 1. + t6923;
  t6925 = -0.50321*t6924;
  t6926 = -0.19821*t6748;
  t6927 = t6925 + t6926;
  t6928 = t6747*t6927;
  t6929 = 0.305*t6753*t6757;
  t6930 = t6922 + t6928 + t6929;
  t6934 = t6722*t6930;
  t6935 = t6917 + t6934;
  t6918 = -0.15121*t6722;
  t6919 = 0.15121*t6719;
  t6931 = t6719*t6930;
  t6932 = t6917 + t6918 + t6919 + t6931;
  t6939 = 0.28121*t6753;
  t6940 = t6927*t6753;
  t6941 = -0.305*t6747*t6757;
  t6942 = t6939 + t6940 + t6941;
  t6944 = t6704*t6935;
  t6945 = -1.*t6932*t6731;
  t6947 = t6944 + t6945;
  t6933 = t6704*t6932;
  t6936 = t6935*t6731;
  t6937 = t6933 + t6936;
  t6943 = t6942*t6760;
  t6948 = t6666*t6947;
  t6949 = t6943 + t6948;
  t6951 = t6666*t6942;
  t6953 = -1.*t6760*t6947;
  t6954 = t6951 + t6953;
  t6775 = t6767*t6760;
  t6844 = t6666*t6842;
  t6848 = t6775 + t6844;
  t6938 = -1.*t6866*t6937;
  t6958 = t6873*t6937;
  t6965 = t6866*t6937;
  t6970 = -1.*t6888*t6937;
  t6977 = -1.*t6873*t6937;
  t6982 = t6888*t6937;
  t7008 = -1.*t6942*t6759;
  t7012 = t6942*t6767;
  p_output1[0]=t6848*var2[0] + t6666*t6736*var2[1] + t6773*var2[2];
  p_output1[1]=(t6860*t6888 - 1.*t6854*t6892)*var2[0] + (t6736*t6760*t6854 + t6860*t6866)*var2[1] + (t6860*t6873 - 1.*t6854*t6881)*var2[2];
  p_output1[2]=(t6854*t6888 + t6860*t6892)*var2[0] + (-1.*t6736*t6760*t6860 + t6854*t6866)*var2[1] + (t6854*t6873 + t6860*t6881)*var2[2];
  p_output1[3]=(t6773*(t6938 - 1.*t6666*t6736*t6949 + t6736*t6760*t6954) + t6666*t6736*(t6773*t6949 + t6881*t6954 + t6958))*var2[0] + (t6848*(-1.*t6773*t6949 - 1.*t6881*t6954 + t6977) + t6773*(t6848*t6949 + t6892*t6954 + t6982))*var2[1] + (t6848*(t6666*t6736*t6949 - 1.*t6736*t6760*t6954 + t6965) + t6666*t6736*(-1.*t6848*t6949 - 1.*t6892*t6954 + t6970))*var2[2];
  p_output1[4]=(t6873*(t6938 - 1.*t6736*t6947) + t6866*(t6759*t6942 + t6770*t6947 + t6958))*var2[0] + (t6888*(-1.*t6770*t6947 + t6977 + t7008) + t6873*(t6842*t6947 + t6982 + t7012))*var2[1] + (t6888*(t6736*t6947 + t6965) + t6866*(-1.*t6767*t6942 - 1.*t6842*t6947 + t6970))*var2[2];
  p_output1[5]=t6759*(t6722*t6932 - 1.*t6719*t6935)*var2[0] + (t6767*(-1.*t6719*t6767*t6932 - 1.*t6722*t6767*t6935 + t7008) + t6759*(t6719*t6828*t6932 + t6722*t6828*t6935 + t7012))*var2[1] + t6767*(-1.*t6722*t6932 + t6719*t6935)*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=(-0.15121*t6759 - 0.15121*t6828)*var2[0] + (-0.15121 + t6767*(-1.*t6767*t6930 + t7008) + t6759*(t6828*t6930 + t7012))*var2[1];
  p_output1[16]=(0.28121*t6757 - 0.305*t6748*t6757 + t6757*t6927)*var2[0] + (0.28121*t6748 + 0.305*Power(t6757,2) + t6748*t6927)*var2[2];
  p_output1[17]=-0.305*var2[2];
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

#include "fRrFoot_vec_DiagonalStance2.hh"

namespace SymFunction
{

void fRrFoot_vec_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
