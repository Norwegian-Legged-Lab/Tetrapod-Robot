/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:49:45 GMT+02:00
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
  double t1574;
  double t82;
  double t475;
  double t2666;
  double t6216;
  double t6428;
  double t6495;
  double t6058;
  double t6501;
  double t5949;
  double t6511;
  double t5925;
  double t1072;
  double t2907;
  double t2908;
  double t5715;
  double t6497;
  double t6517;
  double t6603;
  double t6682;
  double t6646;
  double t6668;
  double t6679;
  double t6644;
  double t6684;
  double t6685;
  double t6686;
  double t6699;
  double t6700;
  double t6705;
  double t6829;
  double t6831;
  double t6859;
  double t6861;
  double t6867;
  double t6879;
  double t6885;
  double t6886;
  double t6887;
  double t6892;
  double t6895;
  double t6901;
  double t6903;
  double t6934;
  double t6940;
  double t6945;
  double t6836;
  double t6843;
  double t6855;
  double t6904;
  double t6908;
  double t6955;
  double t6956;
  double t6961;
  double t6962;
  double t6963;
  double t6964;
  double t6967;
  double t6970;
  double t6974;
  double t6975;
  double t6917;
  double t6950;
  double t6952;
  double t6698;
  double t6706;
  double t6708;
  double t6784;
  double t6798;
  double t6804;
  double t6969;
  double t6976;
  double t6980;
  double t6986;
  double t6990;
  double t6991;
  double t7000;
  double t7002;
  double t7005;
  double t6812;
  double t6817;
  double t6820;
  double t6953;
  double t7008;
  double t5905;
  double t6627;
  double t6643;
  double t7011;
  double t7015;
  double t7017;
  double t7082;
  double t7095;
  double t7109;
  double t7116;
  double t7181;
  double t7195;
  t1574 = Cos(var1[13]);
  t82 = Cos(var1[14]);
  t475 = Sin(var1[13]);
  t2666 = Sin(var1[14]);
  t6216 = t1574*t82;
  t6428 = t475*t2666;
  t6495 = t6216 + t6428;
  t6058 = Cos(var1[5]);
  t6501 = Sin(var1[12]);
  t5949 = Cos(var1[12]);
  t6511 = Sin(var1[5]);
  t5925 = Cos(var1[4]);
  t1072 = -1.*t82*t475;
  t2907 = t1574*t2666;
  t2908 = t1072 + t2907;
  t5715 = Sin(var1[4]);
  t6497 = t5949*t6058*t6495;
  t6517 = -1.*t6501*t6495*t6511;
  t6603 = t6497 + t6517;
  t6682 = Sin(var1[3]);
  t6646 = t6058*t6501*t6495;
  t6668 = t5949*t6495*t6511;
  t6679 = t6646 + t6668;
  t6644 = Cos(var1[3]);
  t6684 = t5925*t2908;
  t6685 = -1.*t5715*t6603;
  t6686 = t6684 + t6685;
  t6699 = t82*t475;
  t6700 = -1.*t1574*t2666;
  t6705 = t6699 + t6700;
  t6829 = -1.*t5949;
  t6831 = 1. + t6829;
  t6859 = -1.*t1574;
  t6861 = 1. + t6859;
  t6867 = 0.28121*t6861;
  t6879 = -1.*t82;
  t6885 = 1. + t6879;
  t6886 = 0.50321*t6885;
  t6887 = 0.19821*t82;
  t6892 = t6886 + t6887;
  t6895 = t1574*t6892;
  t6901 = -0.305*t475*t2666;
  t6903 = t6867 + t6895 + t6901;
  t6934 = 0.15121*t6831;
  t6940 = t5949*t6903;
  t6945 = t6934 + t6940;
  t6836 = -0.15121*t6831;
  t6843 = -0.15121*t5949;
  t6855 = -0.15121*t6501;
  t6904 = t6501*t6903;
  t6908 = t6836 + t6843 + t6855 + t6904;
  t6955 = -1.*t6058*t6501;
  t6956 = -1.*t5949*t6511;
  t6961 = t6955 + t6956;
  t6962 = 0.28121*t475;
  t6963 = -1.*t6892*t475;
  t6964 = -0.305*t1574*t2666;
  t6967 = t6962 + t6963 + t6964;
  t6970 = t6058*t6945;
  t6974 = -1.*t6908*t6511;
  t6975 = t6970 + t6974;
  t6917 = t6058*t6908;
  t6950 = t6945*t6511;
  t6952 = t6917 + t6950;
  t6698 = t6495*t5715;
  t6706 = t5949*t6058*t6705;
  t6708 = -1.*t6501*t6705*t6511;
  t6784 = t6706 + t6708;
  t6798 = t5925*t6784;
  t6804 = t6698 + t6798;
  t6969 = t6967*t5715;
  t6976 = t5925*t6975;
  t6980 = t6969 + t6976;
  t6986 = t5925*t6967;
  t6990 = -1.*t5715*t6975;
  t6991 = t6986 + t6990;
  t7000 = t6058*t6501*t6705;
  t7002 = t5949*t6705*t6511;
  t7005 = t7000 + t7002;
  t6812 = t5949*t6058;
  t6817 = -1.*t6501*t6511;
  t6820 = t6812 + t6817;
  t6953 = -1.*t6820*t6952;
  t7008 = t7005*t6952;
  t5905 = t2908*t5715;
  t6627 = t5925*t6603;
  t6643 = t5905 + t6627;
  t7011 = t5925*t6495;
  t7015 = -1.*t5715*t6784;
  t7017 = t7011 + t7015;
  t7082 = -1.*t7005*t6952;
  t7095 = t6679*t6952;
  t7109 = -1.*t6967*t6495;
  t7116 = t6967*t2908;
  t7181 = t6820*t6952;
  t7195 = -1.*t6679*t6952;
  p_output1[0]=t6643;
  p_output1[1]=t6644*t6679 - 1.*t6682*t6686;
  p_output1[2]=t6679*t6682 + t6644*t6686;
  p_output1[3]=t6804*(t6953 - 1.*t5925*t6961*t6980 + t5715*t6961*t6991) + t5925*t6961*(t6804*t6980 + t7008 + t6991*t7017);
  p_output1[4]=(t6953 - 1.*t6961*t6975)*t7005 + t6820*(t6495*t6967 + t6784*t6975 + t7008);
  p_output1[5]=t6495*(-1.*t5949*t6908 + t6501*t6945);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0.28121*t2666 - 1.*t2666*t6892 - 0.305*t2666*t82;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t5925*t6961;
  p_output1[19]=t6644*t6820 + t5715*t6682*t6961;
  p_output1[20]=t6682*t6820 - 1.*t5715*t6644*t6961;
  p_output1[21]=t6643*(-1.*t6804*t6980 - 1.*t6991*t7017 + t7082) + t6804*(t6643*t6980 + t6686*t6991 + t7095);
  p_output1[22]=t6679*(-1.*t6784*t6975 + t7082 + t7109) + t7005*(t6603*t6975 + t7095 + t7116);
  p_output1[23]=t2908*(-1.*t6501*t6705*t6908 - 1.*t5949*t6705*t6945 + t7109) + t6495*(t6495*t6501*t6908 + t5949*t6495*t6945 + t7116);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=-0.15121 + t2908*(-1.*t6705*t6903 + t7109) + t6495*(t6495*t6903 + t7116);
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t6804;
  p_output1[37]=t6644*t7005 - 1.*t6682*t7017;
  p_output1[38]=t6682*t7005 + t6644*t7017;
  p_output1[39]=t6643*(t5925*t6961*t6980 - 1.*t5715*t6961*t6991 + t7181) + t5925*t6961*(-1.*t6643*t6980 - 1.*t6686*t6991 + t7195);
  p_output1[40]=t6679*(t6961*t6975 + t7181) + t6820*(-1.*t2908*t6967 - 1.*t6603*t6975 + t7195);
  p_output1[41]=t2908*(t5949*t6908 - 1.*t6501*t6945);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=-0.15121*t2908 - 0.15121*t6705;
  p_output1[49]=0.305*Power(t2666,2) + 0.28121*t82 - 1.*t6892*t82;
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

#include "fFrFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFrFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
