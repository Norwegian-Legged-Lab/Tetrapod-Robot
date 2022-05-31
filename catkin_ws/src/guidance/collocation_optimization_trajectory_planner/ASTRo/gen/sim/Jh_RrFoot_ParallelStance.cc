/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:46 GMT+02:00
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
  double t53742;
  double t8291;
  double t8393;
  double t53811;
  double t55691;
  double t55692;
  double t55693;
  double t55678;
  double t55686;
  double t55695;
  double t55680;
  double t55696;
  double t55670;
  double t10734;
  double t55560;
  double t55668;
  double t55694;
  double t55697;
  double t55698;
  double t55865;
  double t55722;
  double t55723;
  double t55728;
  double t55852;
  double t55733;
  double t55734;
  double t55735;
  double t55836;
  double t55838;
  double t55839;
  double t55856;
  double t55858;
  double t55859;
  double t55866;
  double t55867;
  double t55868;
  double t55875;
  double t55876;
  double t55877;
  double t55881;
  double t55886;
  double t55887;
  double t55889;
  double t55890;
  double t55891;
  double t55832;
  double t55850;
  double t55851;
  double t55908;
  double t55913;
  double t55914;
  double t55918;
  double t55919;
  double t55920;
  double t55925;
  double t55926;
  double t55927;
  double t55928;
  double t55948;
  double t55955;
  double t55957;
  double t55958;
  double t55972;
  double t55976;
  double t55915;
  double t55916;
  double t55965;
  double t55966;
  double t55983;
  double t55984;
  double t55987;
  double t55988;
  double t55991;
  double t55993;
  double t56005;
  double t55971;
  double t55978;
  double t55981;
  double t55990;
  double t56009;
  double t56010;
  double t56021;
  double t56022;
  double t56028;
  double t55671;
  double t55708;
  double t55721;
  double t55982;
  double t56035;
  double t56046;
  double t56068;
  double t56083;
  double t56090;
  double t56120;
  double t56126;
  t53742 = Cos(var1[16]);
  t8291 = Cos(var1[17]);
  t8393 = Sin(var1[16]);
  t53811 = Sin(var1[17]);
  t55691 = -1.*t53742*t8291;
  t55692 = -1.*t8393*t53811;
  t55693 = t55691 + t55692;
  t55678 = Cos(var1[4]);
  t55686 = Cos(var1[5]);
  t55695 = Sin(var1[15]);
  t55680 = Cos(var1[15]);
  t55696 = Sin(var1[5]);
  t55670 = Sin(var1[4]);
  t10734 = -1.*t8291*t8393;
  t55560 = t53742*t53811;
  t55668 = t10734 + t55560;
  t55694 = t55680*t55686*t55693;
  t55697 = -1.*t55695*t55693*t55696;
  t55698 = t55694 + t55697;
  t55865 = Sin(var1[3]);
  t55722 = t55686*t55695;
  t55723 = t55680*t55696;
  t55728 = t55722 + t55723;
  t55852 = Cos(var1[3]);
  t55733 = t53742*t8291;
  t55734 = t8393*t53811;
  t55735 = t55733 + t55734;
  t55836 = t55680*t55686*t55668;
  t55838 = -1.*t55695*t55668*t55696;
  t55839 = t55836 + t55838;
  t55856 = t55686*t55695*t55693;
  t55858 = t55680*t55693*t55696;
  t55859 = t55856 + t55858;
  t55866 = t55678*t55668;
  t55867 = -1.*t55670*t55698;
  t55868 = t55866 + t55867;
  t55875 = -1.*t55680*t55686;
  t55876 = t55695*t55696;
  t55877 = t55875 + t55876;
  t55881 = t55686*t55695*t55668;
  t55886 = t55680*t55668*t55696;
  t55887 = t55881 + t55886;
  t55889 = t55678*t55735;
  t55890 = -1.*t55670*t55839;
  t55891 = t55889 + t55890;
  t55832 = t55735*t55670;
  t55850 = t55678*t55839;
  t55851 = t55832 + t55850;
  t55908 = -1.*t55680;
  t55913 = 1. + t55908;
  t55914 = -0.15121*t55913;
  t55918 = -1.*t53742;
  t55919 = 1. + t55918;
  t55920 = -0.28121*t55919;
  t55925 = -1.*t8291;
  t55926 = 1. + t55925;
  t55927 = -0.50321*t55926;
  t55928 = -0.19821*t8291;
  t55948 = t55927 + t55928;
  t55955 = t53742*t55948;
  t55957 = 0.305*t8393*t53811;
  t55958 = t55920 + t55955 + t55957;
  t55972 = t55680*t55958;
  t55976 = t55914 + t55972;
  t55915 = -0.15121*t55680;
  t55916 = 0.15121*t55695;
  t55965 = t55695*t55958;
  t55966 = t55914 + t55915 + t55916 + t55965;
  t55983 = 0.28121*t8393;
  t55984 = t55948*t8393;
  t55987 = -0.305*t53742*t53811;
  t55988 = t55983 + t55984 + t55987;
  t55991 = t55686*t55976;
  t55993 = -1.*t55966*t55696;
  t56005 = t55991 + t55993;
  t55971 = t55686*t55966;
  t55978 = t55976*t55696;
  t55981 = t55971 + t55978;
  t55990 = t55988*t55670;
  t56009 = t55678*t56005;
  t56010 = t55990 + t56009;
  t56021 = t55678*t55988;
  t56022 = -1.*t55670*t56005;
  t56028 = t56021 + t56022;
  t55671 = t55668*t55670;
  t55708 = t55678*t55698;
  t55721 = t55671 + t55708;
  t55982 = -1.*t55877*t55981;
  t56035 = t55887*t55981;
  t56046 = -1.*t55887*t55981;
  t56068 = t55859*t55981;
  t56083 = t55877*t55981;
  t56090 = -1.*t55859*t55981;
  t56120 = -1.*t55988*t55735;
  t56126 = t55988*t55668;
  p_output1[0]=t55721;
  p_output1[1]=t55678*t55728;
  p_output1[2]=t55851;
  p_output1[3]=t55852*t55859 - 1.*t55865*t55868;
  p_output1[4]=t55670*t55728*t55865 + t55852*t55877;
  p_output1[5]=t55852*t55887 - 1.*t55865*t55891;
  p_output1[6]=t55859*t55865 + t55852*t55868;
  p_output1[7]=-1.*t55670*t55728*t55852 + t55865*t55877;
  p_output1[8]=t55865*t55887 + t55852*t55891;
  p_output1[9]=t55851*(t55982 - 1.*t55678*t55728*t56010 + t55670*t55728*t56028) + t55678*t55728*(t55851*t56010 + t55891*t56028 + t56035);
  p_output1[10]=t55721*(-1.*t55851*t56010 - 1.*t55891*t56028 + t56046) + t55851*(t55721*t56010 + t55868*t56028 + t56068);
  p_output1[11]=t55721*(t55678*t55728*t56010 - 1.*t55670*t55728*t56028 + t56083) + t55678*t55728*(-1.*t55721*t56010 - 1.*t55868*t56028 + t56090);
  p_output1[12]=t55887*(t55982 - 1.*t55728*t56005) + t55877*(t55735*t55988 + t55839*t56005 + t56035);
  p_output1[13]=t55859*(-1.*t55839*t56005 + t56046 + t56120) + t55887*(t55698*t56005 + t56068 + t56126);
  p_output1[14]=t55859*(t55728*t56005 + t56083) + t55877*(-1.*t55668*t55988 - 1.*t55698*t56005 + t56090);
  p_output1[15]=t55735*(t55680*t55966 - 1.*t55695*t55976);
  p_output1[16]=t55668*(-1.*t55668*t55695*t55966 - 1.*t55668*t55680*t55976 + t56120) + t55735*(t55693*t55695*t55966 + t55680*t55693*t55976 + t56126);
  p_output1[17]=t55668*(-1.*t55680*t55966 + t55695*t55976);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.15121*t55693 - 0.15121*t55735;
  p_output1[46]=-0.15121 + t55668*(-1.*t55668*t55958 + t56120) + t55735*(t55693*t55958 + t56126);
  p_output1[47]=0;
  p_output1[48]=0.28121*t53811 + t53811*t55948 - 0.305*t53811*t8291;
  p_output1[49]=0;
  p_output1[50]=0.305*Power(t53811,2) + 0.28121*t8291 + t55948*t8291;
  p_output1[51]=0;
  p_output1[52]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void Jh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
