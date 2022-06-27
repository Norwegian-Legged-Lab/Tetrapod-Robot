/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:50 GMT+02:00
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
  double t20690;
  double t8319;
  double t14208;
  double t21172;
  double t14793;
  double t21373;
  double t23024;
  double t26706;
  double t26827;
  double t26707;
  double t26708;
  double t26710;
  double t26828;
  double t8233;
  double t26705;
  double t23034;
  double t26818;
  double t26829;
  double t26834;
  double t26847;
  double t26841;
  double t26843;
  double t26844;
  double t26840;
  double t26848;
  double t26849;
  double t26850;
  double t26872;
  double t26873;
  double t26875;
  double t26877;
  double t26878;
  double t26880;
  double t26881;
  double t26882;
  double t26883;
  double t26871;
  double t26876;
  double t26884;
  double t26886;
  double t26891;
  double t26892;
  double t26893;
  double t26895;
  double t26896;
  double t26897;
  double t26867;
  double t26868;
  double t26869;
  double t26870;
  double t26887;
  double t26888;
  double t26905;
  double t26906;
  double t26907;
  double t26909;
  double t26910;
  double t26911;
  double t26902;
  double t26903;
  double t26904;
  double t26890;
  double t26898;
  double t26900;
  double t26859;
  double t26860;
  double t26861;
  double t26908;
  double t26912;
  double t26913;
  double t26858;
  double t26862;
  double t26863;
  double t26864;
  double t26865;
  double t26866;
  double t26919;
  double t26920;
  double t26922;
  double t26926;
  double t26928;
  double t26929;
  double t26901;
  double t26930;
  double t26940;
  double t26944;
  double t26915;
  double t26917;
  double t26918;
  double t26699;
  double t26838;
  double t26839;
  double t26933;
  double t26934;
  double t26935;
  double t26970;
  double t26975;
  double t26985;
  double t26981;
  double t26995;
  double t26990;
  double t27012;
  double t27017;
  double t27023;
  double t27027;
  t20690 = Cos(var1[10]);
  t8319 = Cos(var1[11]);
  t14208 = Sin(var1[10]);
  t21172 = Sin(var1[11]);
  t14793 = t8319*t14208;
  t21373 = -1.*t20690*t21172;
  t23024 = t14793 + t21373;
  t26706 = Cos(var1[5]);
  t26827 = Sin(var1[9]);
  t26707 = t20690*t8319;
  t26708 = t14208*t21172;
  t26710 = t26707 + t26708;
  t26828 = Sin(var1[5]);
  t8233 = Cos(var1[9]);
  t26705 = Cos(var1[4]);
  t23034 = Sin(var1[4]);
  t26818 = t26706*t26710;
  t26829 = t26827*t23024*t26828;
  t26834 = t26818 + t26829;
  t26847 = Sin(var1[3]);
  t26841 = -1.*t26706*t26827*t23024;
  t26843 = t26710*t26828;
  t26844 = t26841 + t26843;
  t26840 = Cos(var1[3]);
  t26848 = t8233*t26705*t23024;
  t26849 = -1.*t23034*t26834;
  t26850 = t26848 + t26849;
  t26872 = -0.0641*t8319;
  t26873 = -0.28*t21172;
  t26875 = t26872 + t26873;
  t26877 = -1.*t8319;
  t26878 = 1. + t26877;
  t26880 = -0.575*t26878;
  t26881 = -0.295*t8319;
  t26882 = -0.0641*t21172;
  t26883 = t26880 + t26881 + t26882;
  t26871 = 0.325*t14208;
  t26876 = t20690*t26875;
  t26884 = t14208*t26883;
  t26886 = t26871 + t26876 + t26884;
  t26891 = -1.*t20690;
  t26892 = 1. + t26891;
  t26893 = -0.325*t26892;
  t26895 = -1.*t14208*t26875;
  t26896 = t20690*t26883;
  t26897 = t26893 + t26895 + t26896;
  t26867 = -1.*t8233;
  t26868 = 1. + t26867;
  t26869 = 0.1575*t26868;
  t26870 = 0.2255*t8233;
  t26887 = -1.*t26827*t26886;
  t26888 = t26869 + t26870 + t26887;
  t26905 = 0.068*t26827;
  t26906 = t8233*t26886;
  t26907 = t26905 + t26906;
  t26909 = t26706*t26897;
  t26910 = -1.*t26888*t26828;
  t26911 = t26909 + t26910;
  t26902 = t26827*t23034;
  t26903 = -1.*t8233*t26705*t26828;
  t26904 = t26902 + t26903;
  t26890 = t26706*t26888;
  t26898 = t26897*t26828;
  t26900 = t26890 + t26898;
  t26859 = -1.*t8319*t14208;
  t26860 = t20690*t21172;
  t26861 = t26859 + t26860;
  t26908 = t26907*t23034;
  t26912 = t26705*t26911;
  t26913 = t26908 + t26912;
  t26858 = t8233*t26710*t23034;
  t26862 = t26706*t26861;
  t26863 = t26827*t26710*t26828;
  t26864 = t26862 + t26863;
  t26865 = t26705*t26864;
  t26866 = t26858 + t26865;
  t26919 = t26705*t26907;
  t26920 = -1.*t23034*t26911;
  t26922 = t26919 + t26920;
  t26926 = -1.*t26706*t26827*t26710;
  t26928 = t26861*t26828;
  t26929 = t26926 + t26928;
  t26901 = -1.*t8233*t26706*t26900;
  t26930 = t26900*t26929;
  t26940 = -1.*t26827*t26907;
  t26944 = t8233*t26907*t26710;
  t26915 = t26705*t26827;
  t26917 = t8233*t23034*t26828;
  t26918 = t26915 + t26917;
  t26699 = t8233*t23024*t23034;
  t26838 = t26705*t26834;
  t26839 = t26699 + t26838;
  t26933 = t8233*t26705*t26710;
  t26934 = -1.*t23034*t26864;
  t26935 = t26933 + t26934;
  t26970 = t26900*t26844;
  t26975 = -1.*t26900*t26929;
  t26985 = -1.*t8233*t26907*t26710;
  t26981 = t8233*t26907*t23024;
  t26995 = t26897*t26710;
  t26990 = -1.*t26897*t26861;
  t27012 = t8233*t26706*t26900;
  t27017 = -1.*t26900*t26844;
  t27023 = t26827*t26907;
  t27027 = -1.*t8233*t26907*t23024;
  p_output1[0]=t26839;
  p_output1[1]=t26840*t26844 - 1.*t26847*t26850;
  p_output1[2]=t26844*t26847 + t26840*t26850;
  p_output1[3]=t26866*(t26901 - 1.*t26904*t26913 - 1.*t26918*t26922) + t26904*(t26866*t26913 + t26930 + t26922*t26935);
  p_output1[4]=t26706*(t26864*t26911 + t26930 + t26944)*t8233 + t26929*(t26901 + t26940 + t26828*t26911*t8233);
  p_output1[5]=t26827*(-1.*t26710*t26827*t26888 + t26861*t26897 + t26944) + t26710*t8233*(t26940 - 1.*t26888*t8233);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-0.1575*t23024 - 0.2255*t26861;
  p_output1[10]=-0.325*t21172 - 1.*t21172*t26883 - 1.*t26875*t8319;
  p_output1[11]=-0.0641;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t26904;
  p_output1[19]=-1.*t26847*t26918 + t26706*t26840*t8233;
  p_output1[20]=t26840*t26918 + t26706*t26847*t8233;
  p_output1[21]=t26866*(t26839*t26913 + t26850*t26922 + t26970) + t26839*(-1.*t26866*t26913 - 1.*t26922*t26935 + t26975);
  p_output1[22]=t26929*(t26834*t26911 + t26970 + t26981) + t26844*(-1.*t26864*t26911 + t26975 + t26985);
  p_output1[23]=t23024*(t26710*t26827*t26888 + t26985 + t26990)*t8233 + t26710*(-1.*t23024*t26827*t26888 + t26981 + t26995)*t8233;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t26710*(-1.*t26710*t26886 + t26990) + t26861*(t23024*t26886 + t26995);
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t26866;
  p_output1[37]=t26840*t26929 - 1.*t26847*t26935;
  p_output1[38]=t26847*t26929 + t26840*t26935;
  p_output1[39]=t26839*(t26904*t26913 + t26918*t26922 + t27012) + t26904*(-1.*t26839*t26913 - 1.*t26850*t26922 + t27017);
  p_output1[40]=t26706*(-1.*t26834*t26911 + t27017 + t27027)*t8233 + t26844*(t27012 + t27023 - 1.*t26828*t26911*t8233);
  p_output1[41]=t26827*(t23024*t26827*t26888 - 1.*t26710*t26897 + t27027) + t23024*t8233*(t27023 + t26888*t8233);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.068*t26710;
  p_output1[46]=-1.*t21172*t26875 + 0.325*t8319 + t26883*t8319;
  p_output1[47]=-0.28;
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

#include "fRlFoot_map_DiagonalImpact2.hh"

namespace SymFunction
{

void fRlFoot_map_DiagonalImpact2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
