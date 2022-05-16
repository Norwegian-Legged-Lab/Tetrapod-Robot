/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:52:58 GMT+02:00
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
  double t26922;
  double t54671;
  double t27160;
  double t54803;
  double t54813;
  double t54802;
  double t54817;
  double t27879;
  double t54672;
  double t54823;
  double t54824;
  double t54825;
  double t54798;
  double t54804;
  double t54818;
  double t54820;
  double t54624;
  double t54676;
  double t54677;
  double t54848;
  double t54846;
  double t54826;
  double t54827;
  double t54828;
  double t54833;
  double t54834;
  double t54835;
  double t54838;
  double t54839;
  double t54841;
  double t54849;
  double t54850;
  double t54851;
  double t54857;
  double t54859;
  double t54860;
  double t54862;
  double t54863;
  double t54866;
  double t54872;
  double t54873;
  double t54878;
  double t54880;
  double t54881;
  double t54882;
  double t54821;
  double t54830;
  double t54831;
  double t54904;
  double t54906;
  double t54907;
  double t54908;
  double t54909;
  double t54912;
  double t54913;
  double t54915;
  double t54916;
  double t54917;
  double t54918;
  double t54919;
  double t54920;
  double t54921;
  double t54924;
  double t54925;
  double t54928;
  double t54929;
  double t54930;
  double t54931;
  double t54935;
  double t54936;
  double t54937;
  double t54938;
  double t54940;
  double t54941;
  double t54942;
  double t54926;
  double t54932;
  double t54933;
  double t54939;
  double t54943;
  double t54944;
  double t54946;
  double t54947;
  double t54949;
  double t54836;
  double t54842;
  double t54843;
  double t54934;
  double t54953;
  double t54962;
  double t54968;
  double t54975;
  double t54980;
  double t55007;
  double t55011;
  t26922 = Cos(var1[4]);
  t54671 = Cos(var1[5]);
  t27160 = Cos(var1[6]);
  t54803 = Cos(var1[8]);
  t54813 = Sin(var1[7]);
  t54802 = Cos(var1[7]);
  t54817 = Sin(var1[8]);
  t27879 = Sin(var1[5]);
  t54672 = Sin(var1[6]);
  t54823 = t54803*t54813;
  t54824 = -1.*t54802*t54817;
  t54825 = t54823 + t54824;
  t54798 = Sin(var1[4]);
  t54804 = t54802*t54803;
  t54818 = t54813*t54817;
  t54820 = t54804 + t54818;
  t54624 = -1.*t27160*t27879;
  t54676 = -1.*t54671*t54672;
  t54677 = t54624 + t54676;
  t54848 = Cos(var1[3]);
  t54846 = Sin(var1[3]);
  t54826 = t54671*t27160*t54825;
  t54827 = -1.*t27879*t54672*t54825;
  t54828 = t54826 + t54827;
  t54833 = -1.*t54803*t54813;
  t54834 = t54802*t54817;
  t54835 = t54833 + t54834;
  t54838 = t54671*t27160*t54820;
  t54839 = -1.*t27879*t54672*t54820;
  t54841 = t54838 + t54839;
  t54849 = t54671*t27160;
  t54850 = -1.*t27879*t54672;
  t54851 = t54849 + t54850;
  t54857 = t27160*t27879*t54825;
  t54859 = t54671*t54672*t54825;
  t54860 = t54857 + t54859;
  t54862 = t26922*t54820;
  t54863 = -1.*t54798*t54828;
  t54866 = t54862 + t54863;
  t54872 = t27160*t27879*t54820;
  t54873 = t54671*t54672*t54820;
  t54878 = t54872 + t54873;
  t54880 = t26922*t54835;
  t54881 = -1.*t54798*t54841;
  t54882 = t54880 + t54881;
  t54821 = t54798*t54820;
  t54830 = t26922*t54828;
  t54831 = t54821 + t54830;
  t54904 = -1.*t27160;
  t54906 = 1. + t54904;
  t54907 = 0.15121*t54906;
  t54908 = -1.*t54802;
  t54909 = 1. + t54908;
  t54912 = 0.28121*t54909;
  t54913 = -1.*t54803;
  t54915 = 1. + t54913;
  t54916 = 0.50321*t54915;
  t54917 = 0.23321*t54803;
  t54918 = t54916 + t54917;
  t54919 = t54802*t54918;
  t54920 = -0.27*t54813*t54817;
  t54921 = t54912 + t54919 + t54920;
  t54924 = t27160*t54921;
  t54925 = t54907 + t54924;
  t54928 = 0.15121*t27160;
  t54929 = -0.15121*t54672;
  t54930 = t54672*t54921;
  t54931 = t54907 + t54928 + t54929 + t54930;
  t54935 = 0.28121*t54813;
  t54936 = -1.*t54918*t54813;
  t54937 = -0.27*t54802*t54817;
  t54938 = t54935 + t54936 + t54937;
  t54940 = t54671*t54925;
  t54941 = -1.*t27879*t54931;
  t54942 = t54940 + t54941;
  t54926 = t27879*t54925;
  t54932 = t54671*t54931;
  t54933 = t54926 + t54932;
  t54939 = t54798*t54938;
  t54943 = t26922*t54942;
  t54944 = t54939 + t54943;
  t54946 = t26922*t54938;
  t54947 = -1.*t54798*t54942;
  t54949 = t54946 + t54947;
  t54836 = t54798*t54835;
  t54842 = t26922*t54841;
  t54843 = t54836 + t54842;
  t54934 = -1.*t54851*t54933;
  t54953 = t54860*t54933;
  t54962 = t54851*t54933;
  t54968 = -1.*t54878*t54933;
  t54975 = -1.*t54860*t54933;
  t54980 = t54878*t54933;
  t55007 = -1.*t54938*t54820;
  t55011 = t54938*t54835;
  p_output1[0]=t54843*var2[0] + t26922*t54677*var2[1] + t54831*var2[2];
  p_output1[1]=(t54848*t54878 - 1.*t54846*t54882)*var2[0] + (t54677*t54798*t54846 + t54848*t54851)*var2[1] + (t54848*t54860 - 1.*t54846*t54866)*var2[2];
  p_output1[2]=(t54846*t54878 + t54848*t54882)*var2[0] + (-1.*t54677*t54798*t54848 + t54846*t54851)*var2[1] + (t54846*t54860 + t54848*t54866)*var2[2];
  p_output1[3]=(t54831*(t54934 - 1.*t26922*t54677*t54944 + t54677*t54798*t54949) + t26922*t54677*(t54831*t54944 + t54866*t54949 + t54953))*var2[0] + (t54843*(-1.*t54831*t54944 - 1.*t54866*t54949 + t54975) + t54831*(t54843*t54944 + t54882*t54949 + t54980))*var2[1] + (t54843*(t26922*t54677*t54944 - 1.*t54677*t54798*t54949 + t54962) + t26922*t54677*(-1.*t54843*t54944 - 1.*t54882*t54949 + t54968))*var2[2];
  p_output1[4]=(t54860*(t54934 - 1.*t54677*t54942) + t54851*(t54820*t54938 + t54828*t54942 + t54953))*var2[0] + (t54878*(-1.*t54828*t54942 + t54975 + t55007) + t54860*(t54841*t54942 + t54980 + t55011))*var2[1] + (t54878*(t54677*t54942 + t54962) + t54851*(-1.*t54835*t54938 - 1.*t54841*t54942 + t54968))*var2[2];
  p_output1[5]=t54820*(t54672*t54925 - 1.*t27160*t54931)*var2[0] + (t54835*(-1.*t27160*t54825*t54925 - 1.*t54672*t54825*t54931 + t55007) + t54820*(t27160*t54820*t54925 + t54672*t54820*t54931 + t55011))*var2[1] + t54835*(-1.*t54672*t54925 + t27160*t54931)*var2[2];
  p_output1[6]=(-0.15121 + t54835*(-1.*t54825*t54921 + t55007) + t54820*(t54820*t54921 + t55011))*var2[1] + (0.15121*t54825 + 0.15121*t54835)*var2[2];
  p_output1[7]=(0.28121*t54817 - 0.27*t54803*t54817 - 1.*t54817*t54918)*var2[0] + (0.28121*t54803 + 0.27*Power(t54817,2) - 1.*t54803*t54918)*var2[2];
  p_output1[8]=-0.27*var2[2];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
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

#include "fFlFoot_vec_ParallelImpact2.hh"

namespace SymFunction
{

void fFlFoot_vec_ParallelImpact2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
