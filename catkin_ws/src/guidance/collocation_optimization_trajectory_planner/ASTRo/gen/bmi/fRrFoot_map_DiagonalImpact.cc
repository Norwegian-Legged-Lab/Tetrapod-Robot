/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 18:51:45 GMT+02:00
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
  double t29784;
  double t1849;
  double t3078;
  double t36521;
  double t36793;
  double t36794;
  double t36823;
  double t36792;
  double t36833;
  double t36744;
  double t36836;
  double t36623;
  double t29771;
  double t36542;
  double t36549;
  double t36550;
  double t36832;
  double t36837;
  double t36839;
  double t36872;
  double t36858;
  double t36860;
  double t36867;
  double t36852;
  double t36877;
  double t36878;
  double t36879;
  double t36932;
  double t36935;
  double t36936;
  double t36942;
  double t36945;
  double t36946;
  double t36947;
  double t36950;
  double t36954;
  double t36955;
  double t36956;
  double t36957;
  double t36961;
  double t36966;
  double t36971;
  double t36972;
  double t36938;
  double t36941;
  double t36967;
  double t36968;
  double t36976;
  double t36977;
  double t36978;
  double t36979;
  double t36980;
  double t36981;
  double t36982;
  double t36985;
  double t36986;
  double t36987;
  double t36970;
  double t36973;
  double t36974;
  double t36889;
  double t36890;
  double t36893;
  double t36894;
  double t36895;
  double t36910;
  double t36915;
  double t36916;
  double t36921;
  double t36983;
  double t36988;
  double t36990;
  double t36992;
  double t36993;
  double t36994;
  double t36998;
  double t36999;
  double t37001;
  double t36922;
  double t36929;
  double t36931;
  double t36975;
  double t37002;
  double t36551;
  double t36841;
  double t36842;
  double t37005;
  double t37006;
  double t37007;
  double t37041;
  double t37047;
  double t37078;
  double t37082;
  double t37134;
  double t37142;
  t29784 = Cos(var1[16]);
  t1849 = Cos(var1[17]);
  t3078 = Sin(var1[16]);
  t36521 = Sin(var1[17]);
  t36793 = -1.*t29784*t1849;
  t36794 = -1.*t3078*t36521;
  t36823 = t36793 + t36794;
  t36792 = Cos(var1[5]);
  t36833 = Sin(var1[15]);
  t36744 = Cos(var1[15]);
  t36836 = Sin(var1[5]);
  t36623 = Cos(var1[4]);
  t29771 = -1.*t1849*t3078;
  t36542 = t29784*t36521;
  t36549 = t29771 + t36542;
  t36550 = Sin(var1[4]);
  t36832 = t36744*t36792*t36823;
  t36837 = -1.*t36833*t36823*t36836;
  t36839 = t36832 + t36837;
  t36872 = Sin(var1[3]);
  t36858 = t36792*t36833*t36823;
  t36860 = t36744*t36823*t36836;
  t36867 = t36858 + t36860;
  t36852 = Cos(var1[3]);
  t36877 = t36623*t36549;
  t36878 = -1.*t36550*t36839;
  t36879 = t36877 + t36878;
  t36932 = -1.*t36744;
  t36935 = 1. + t36932;
  t36936 = -0.15121*t36935;
  t36942 = -1.*t29784;
  t36945 = 1. + t36942;
  t36946 = -0.28121*t36945;
  t36947 = -1.*t1849;
  t36950 = 1. + t36947;
  t36954 = -0.50321*t36950;
  t36955 = -0.19821*t1849;
  t36956 = t36954 + t36955;
  t36957 = t29784*t36956;
  t36961 = 0.305*t3078*t36521;
  t36966 = t36946 + t36957 + t36961;
  t36971 = t36744*t36966;
  t36972 = t36936 + t36971;
  t36938 = -0.15121*t36744;
  t36941 = 0.15121*t36833;
  t36967 = t36833*t36966;
  t36968 = t36936 + t36938 + t36941 + t36967;
  t36976 = t36792*t36833;
  t36977 = t36744*t36836;
  t36978 = t36976 + t36977;
  t36979 = 0.28121*t3078;
  t36980 = t36956*t3078;
  t36981 = -0.305*t29784*t36521;
  t36982 = t36979 + t36980 + t36981;
  t36985 = t36792*t36972;
  t36986 = -1.*t36968*t36836;
  t36987 = t36985 + t36986;
  t36970 = t36792*t36968;
  t36973 = t36972*t36836;
  t36974 = t36970 + t36973;
  t36889 = t29784*t1849;
  t36890 = t3078*t36521;
  t36893 = t36889 + t36890;
  t36894 = t36893*t36550;
  t36895 = t36744*t36792*t36549;
  t36910 = -1.*t36833*t36549*t36836;
  t36915 = t36895 + t36910;
  t36916 = t36623*t36915;
  t36921 = t36894 + t36916;
  t36983 = t36982*t36550;
  t36988 = t36623*t36987;
  t36990 = t36983 + t36988;
  t36992 = t36623*t36982;
  t36993 = -1.*t36550*t36987;
  t36994 = t36992 + t36993;
  t36998 = t36792*t36833*t36549;
  t36999 = t36744*t36549*t36836;
  t37001 = t36998 + t36999;
  t36922 = -1.*t36744*t36792;
  t36929 = t36833*t36836;
  t36931 = t36922 + t36929;
  t36975 = -1.*t36931*t36974;
  t37002 = t37001*t36974;
  t36551 = t36549*t36550;
  t36841 = t36623*t36839;
  t36842 = t36551 + t36841;
  t37005 = t36623*t36893;
  t37006 = -1.*t36550*t36915;
  t37007 = t37005 + t37006;
  t37041 = -1.*t37001*t36974;
  t37047 = t36867*t36974;
  t37078 = -1.*t36982*t36893;
  t37082 = t36982*t36549;
  t37134 = t36931*t36974;
  t37142 = -1.*t36867*t36974;
  p_output1[0]=t36842;
  p_output1[1]=t36852*t36867 - 1.*t36872*t36879;
  p_output1[2]=t36867*t36872 + t36852*t36879;
  p_output1[3]=t36921*(t36975 - 1.*t36623*t36978*t36990 + t36550*t36978*t36994) + t36623*t36978*(t36921*t36990 + t37002 + t36994*t37007);
  p_output1[4]=(t36975 - 1.*t36978*t36987)*t37001 + t36931*(t36893*t36982 + t36915*t36987 + t37002);
  p_output1[5]=t36893*(t36744*t36968 - 1.*t36833*t36972);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.15121*t36823 - 0.15121*t36893;
  p_output1[16]=0.28121*t36521 - 0.305*t1849*t36521 + t36521*t36956;
  p_output1[17]=0;
  p_output1[18]=t36623*t36978;
  p_output1[19]=t36852*t36931 + t36550*t36872*t36978;
  p_output1[20]=t36872*t36931 - 1.*t36550*t36852*t36978;
  p_output1[21]=t36842*(-1.*t36921*t36990 - 1.*t36994*t37007 + t37041) + t36921*(t36842*t36990 + t36879*t36994 + t37047);
  p_output1[22]=t36867*(-1.*t36915*t36987 + t37041 + t37078) + t37001*(t36839*t36987 + t37047 + t37082);
  p_output1[23]=t36549*(-1.*t36549*t36833*t36968 - 1.*t36549*t36744*t36972 + t37078) + t36893*(t36823*t36833*t36968 + t36744*t36823*t36972 + t37082);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.15121 + t36549*(-1.*t36549*t36966 + t37078) + t36893*(t36823*t36966 + t37082);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t36921;
  p_output1[37]=t36852*t37001 - 1.*t36872*t37007;
  p_output1[38]=t36872*t37001 + t36852*t37007;
  p_output1[39]=t36842*(t36623*t36978*t36990 - 1.*t36550*t36978*t36994 + t37134) + t36623*t36978*(-1.*t36842*t36990 - 1.*t36879*t36994 + t37142);
  p_output1[40]=t36867*(t36978*t36987 + t37134) + t36931*(-1.*t36549*t36982 - 1.*t36839*t36987 + t37142);
  p_output1[41]=t36549*(-1.*t36744*t36968 + t36833*t36972);
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
  p_output1[52]=0.28121*t1849 + 0.305*Power(t36521,2) + t1849*t36956;
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
