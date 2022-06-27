/*
 * Automatically Generated from Mathematica.
 * Sat 11 Jun 2022 23:25:42 GMT+02:00
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
  double t11775;
  double t25798;
  double t25839;
  double t25895;
  double t25896;
  double t25898;
  double t25904;
  double t25919;
  double t25916;
  double t25911;
  double t25923;
  double t25928;
  double t25929;
  double t25907;
  double t9732;
  double t10593;
  double t25917;
  double t25931;
  double t25932;
  double t25942;
  double t25937;
  double t25938;
  double t25939;
  double t25935;
  double t25943;
  double t25944;
  double t25945;
  double t26006;
  double t26007;
  double t26008;
  double t26011;
  double t26012;
  double t26013;
  double t26014;
  double t26015;
  double t26017;
  double t26005;
  double t26010;
  double t26018;
  double t26019;
  double t26000;
  double t26001;
  double t26002;
  double t26003;
  double t26020;
  double t26022;
  double t26023;
  double t26024;
  double t26025;
  double t26026;
  double t26027;
  double t26028;
  double t26030;
  double t26031;
  double t26032;
  double t26035;
  double t26036;
  double t26037;
  double t26042;
  double t26044;
  double t26045;
  double t26051;
  double t26052;
  double t26054;
  double t26058;
  double t26059;
  double t26060;
  double t26046;
  double t26047;
  double t26048;
  double t26057;
  double t26061;
  double t26062;
  double t26063;
  double t26064;
  double t26065;
  double t26034;
  double t26038;
  double t26040;
  double t26055;
  double t26067;
  double t26068;
  double t26069;
  double t26070;
  double t26081;
  double t26085;
  double t25996;
  double t25998;
  double t25999;
  double t25905;
  double t25933;
  double t25934;
  double t26072;
  double t26073;
  double t26074;
  double t26111;
  double t26116;
  double t26126;
  double t26122;
  double t26136;
  double t26131;
  double t26155;
  double t26158;
  double t26165;
  double t26168;
  t11775 = Cos(var1[8]);
  t25798 = Sin(var1[7]);
  t25839 = t11775*t25798;
  t25895 = Cos(var1[7]);
  t25896 = Sin(var1[8]);
  t25898 = -1.*t25895*t25896;
  t25904 = t25839 + t25898;
  t25919 = Cos(var1[5]);
  t25916 = Sin(var1[6]);
  t25911 = Sin(var1[5]);
  t25923 = t25895*t11775;
  t25928 = t25798*t25896;
  t25929 = t25923 + t25928;
  t25907 = Cos(var1[4]);
  t9732 = Cos(var1[6]);
  t10593 = Sin(var1[4]);
  t25917 = t25911*t25916*t25904;
  t25931 = t25919*t25929;
  t25932 = t25917 + t25931;
  t25942 = Sin(var1[3]);
  t25937 = -1.*t25919*t25916*t25904;
  t25938 = t25911*t25929;
  t25939 = t25937 + t25938;
  t25935 = Cos(var1[3]);
  t25943 = t25907*t9732*t25904;
  t25944 = -1.*t10593*t25932;
  t25945 = t25943 + t25944;
  t26006 = -0.0641*t11775;
  t26007 = -0.28*t25896;
  t26008 = t26006 + t26007;
  t26011 = -1.*t11775;
  t26012 = 1. + t26011;
  t26013 = 0.075*t26012;
  t26014 = 0.355*t11775;
  t26015 = -0.0641*t25896;
  t26017 = t26013 + t26014 + t26015;
  t26005 = -0.325*t25798;
  t26010 = t25895*t26008;
  t26018 = t25798*t26017;
  t26019 = t26005 + t26010 + t26018;
  t26000 = -1.*t9732;
  t26001 = 1. + t26000;
  t26002 = 0.1575*t26001;
  t26003 = 0.2255*t9732;
  t26020 = -1.*t25916*t26019;
  t26022 = t26002 + t26003 + t26020;
  t26023 = -1.*t25911*t26022;
  t26024 = -1.*t25895;
  t26025 = 1. + t26024;
  t26026 = 0.325*t26025;
  t26027 = -1.*t25798*t26008;
  t26028 = t25895*t26017;
  t26030 = t26026 + t26027 + t26028;
  t26031 = t25919*t26030;
  t26032 = t26023 + t26031;
  t26035 = 0.068*t25916;
  t26036 = t9732*t26019;
  t26037 = t26035 + t26036;
  t26042 = -1.*t25907*t9732*t25911;
  t26044 = t10593*t25916;
  t26045 = t26042 + t26044;
  t26051 = t25919*t26022;
  t26052 = t25911*t26030;
  t26054 = t26051 + t26052;
  t26058 = -1.*t11775*t25798;
  t26059 = t25895*t25896;
  t26060 = t26058 + t26059;
  t26046 = t25907*t26032;
  t26047 = t10593*t26037;
  t26048 = t26046 + t26047;
  t26057 = t9732*t10593*t25929;
  t26061 = t25919*t26060;
  t26062 = t25911*t25916*t25929;
  t26063 = t26061 + t26062;
  t26064 = t25907*t26063;
  t26065 = t26057 + t26064;
  t26034 = -1.*t10593*t26032;
  t26038 = t25907*t26037;
  t26040 = t26034 + t26038;
  t26055 = -1.*t25919*t9732*t26054;
  t26067 = t25911*t26060;
  t26068 = -1.*t25919*t25916*t25929;
  t26069 = t26067 + t26068;
  t26070 = t26054*t26069;
  t26081 = -1.*t25916*t26037;
  t26085 = t9732*t26037*t25929;
  t25996 = t9732*t10593*t25911;
  t25998 = t25907*t25916;
  t25999 = t25996 + t25998;
  t25905 = t9732*t10593*t25904;
  t25933 = t25907*t25932;
  t25934 = t25905 + t25933;
  t26072 = t25907*t9732*t25929;
  t26073 = -1.*t10593*t26063;
  t26074 = t26072 + t26073;
  t26111 = t26054*t25939;
  t26116 = -1.*t26054*t26069;
  t26126 = -1.*t9732*t26037*t25929;
  t26122 = t9732*t26037*t25904;
  t26136 = t26030*t25929;
  t26131 = -1.*t26030*t26060;
  t26155 = t25919*t9732*t26054;
  t26158 = -1.*t26054*t25939;
  t26165 = t25916*t26037;
  t26168 = -1.*t9732*t26037*t25904;
  p_output1[0]=t25934;
  p_output1[1]=t25935*t25939 - 1.*t25942*t25945;
  p_output1[2]=t25939*t25942 + t25935*t25945;
  p_output1[3]=(-1.*t25999*t26040 - 1.*t26045*t26048 + t26055)*t26065 + t26045*(t26048*t26065 + t26070 + t26040*t26074);
  p_output1[4]=t25919*(t26032*t26063 + t26070 + t26085)*t9732 + t26069*(t26055 + t26081 + t25911*t26032*t9732);
  p_output1[5]=t25916*(-1.*t25916*t25929*t26022 + t26030*t26060 + t26085) + t25929*t9732*(t26081 - 1.*t26022*t9732);
  p_output1[6]=-0.1575*t25904 - 0.2255*t26060;
  p_output1[7]=0.325*t25896 - 1.*t11775*t26008 - 1.*t25896*t26017;
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
  p_output1[18]=t26045;
  p_output1[19]=-1.*t25942*t25999 + t25919*t25935*t9732;
  p_output1[20]=t25935*t25999 + t25919*t25942*t9732;
  p_output1[21]=t26065*(t25945*t26040 + t25934*t26048 + t26111) + t25934*(-1.*t26048*t26065 - 1.*t26040*t26074 + t26116);
  p_output1[22]=t26069*(t25932*t26032 + t26111 + t26122) + t25939*(-1.*t26032*t26063 + t26116 + t26126);
  p_output1[23]=t25904*(t25916*t25929*t26022 + t26126 + t26131)*t9732 + t25929*(-1.*t25904*t25916*t26022 + t26122 + t26136)*t9732;
  p_output1[24]=t25929*(-1.*t25929*t26019 + t26131) + t26060*(t25904*t26019 + t26136);
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
  p_output1[36]=t26065;
  p_output1[37]=t25935*t26069 - 1.*t25942*t26074;
  p_output1[38]=t25942*t26069 + t25935*t26074;
  p_output1[39]=t25934*(t25999*t26040 + t26045*t26048 + t26155) + t26045*(-1.*t25945*t26040 - 1.*t25934*t26048 + t26158);
  p_output1[40]=t25919*(-1.*t25932*t26032 + t26158 + t26168)*t9732 + t25939*(t26155 + t26165 - 1.*t25911*t26032*t9732);
  p_output1[41]=t25916*(t25904*t25916*t26022 - 1.*t25929*t26030 + t26168) + t25904*t9732*(t26165 + t26022*t9732);
  p_output1[42]=0.068*t25929;
  p_output1[43]=-0.325*t11775 - 1.*t25896*t26008 + t11775*t26017;
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

#include "fFlFoot_map_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_map_DiagonalImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
