/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:08 GMT+02:00
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
  double t6307;
  double t6304;
  double t6305;
  double t6311;
  double t6306;
  double t8552;
  double t8639;
  double t8698;
  double t8731;
  double t8722;
  double t8723;
  double t8726;
  double t8736;
  double t6299;
  double t8676;
  double t8640;
  double t8730;
  double t8741;
  double t8744;
  double t8792;
  double t8756;
  double t8760;
  double t8786;
  double t8755;
  double t8797;
  double t8798;
  double t8799;
  double t8914;
  double t8915;
  double t8919;
  double t8921;
  double t8926;
  double t8930;
  double t8931;
  double t8932;
  double t8942;
  double t8913;
  double t8920;
  double t8948;
  double t8950;
  double t8957;
  double t8958;
  double t8962;
  double t8967;
  double t8983;
  double t8998;
  double t8893;
  double t8897;
  double t8900;
  double t8901;
  double t8951;
  double t8953;
  double t9010;
  double t9019;
  double t9022;
  double t9041;
  double t9042;
  double t9055;
  double t9006;
  double t9008;
  double t9009;
  double t8956;
  double t8999;
  double t9004;
  double t8857;
  double t8860;
  double t8861;
  double t9040;
  double t9056;
  double t9057;
  double t8827;
  double t8862;
  double t8878;
  double t8882;
  double t8889;
  double t8890;
  double t9069;
  double t9071;
  double t9072;
  double t9080;
  double t9081;
  double t9086;
  double t9005;
  double t9087;
  double t9146;
  double t9187;
  double t9060;
  double t9062;
  double t9063;
  double t8641;
  double t8745;
  double t8746;
  double t9100;
  double t9102;
  double t9103;
  double t9404;
  double t9416;
  double t9460;
  double t9455;
  double t9563;
  double t9497;
  double t10228;
  double t11033;
  double t11205;
  double t11454;
  t6307 = Cos(var1[16]);
  t6304 = Cos(var1[17]);
  t6305 = Sin(var1[16]);
  t6311 = Sin(var1[17]);
  t6306 = t6304*t6305;
  t8552 = -1.*t6307*t6311;
  t8639 = t6306 + t8552;
  t8698 = Cos(var1[5]);
  t8731 = Sin(var1[15]);
  t8722 = t6307*t6304;
  t8723 = t6305*t6311;
  t8726 = t8722 + t8723;
  t8736 = Sin(var1[5]);
  t6299 = Cos(var1[15]);
  t8676 = Cos(var1[4]);
  t8640 = Sin(var1[4]);
  t8730 = t8698*t8726;
  t8741 = t8731*t8639*t8736;
  t8744 = t8730 + t8741;
  t8792 = Sin(var1[3]);
  t8756 = -1.*t8698*t8731*t8639;
  t8760 = t8726*t8736;
  t8786 = t8756 + t8760;
  t8755 = Cos(var1[3]);
  t8797 = t6299*t8676*t8639;
  t8798 = -1.*t8640*t8744;
  t8799 = t8797 + t8798;
  t8914 = -0.0641*t6304;
  t8915 = -0.28*t6311;
  t8919 = t8914 + t8915;
  t8921 = -1.*t6304;
  t8926 = 1. + t8921;
  t8930 = -0.575*t8926;
  t8931 = -0.295*t6304;
  t8932 = -0.0641*t6311;
  t8942 = t8930 + t8931 + t8932;
  t8913 = 0.325*t6305;
  t8920 = t6307*t8919;
  t8948 = t6305*t8942;
  t8950 = t8913 + t8920 + t8948;
  t8957 = -1.*t6307;
  t8958 = 1. + t8957;
  t8962 = -0.325*t8958;
  t8967 = -1.*t6305*t8919;
  t8983 = t6307*t8942;
  t8998 = t8962 + t8967 + t8983;
  t8893 = -1.*t6299;
  t8897 = 1. + t8893;
  t8900 = -0.1575*t8897;
  t8901 = -0.2255*t6299;
  t8951 = -1.*t8731*t8950;
  t8953 = t8900 + t8901 + t8951;
  t9010 = -0.068*t8731;
  t9019 = t6299*t8950;
  t9022 = t9010 + t9019;
  t9041 = t8698*t8998;
  t9042 = -1.*t8953*t8736;
  t9055 = t9041 + t9042;
  t9006 = t8731*t8640;
  t9008 = -1.*t6299*t8676*t8736;
  t9009 = t9006 + t9008;
  t8956 = t8698*t8953;
  t8999 = t8998*t8736;
  t9004 = t8956 + t8999;
  t8857 = -1.*t6304*t6305;
  t8860 = t6307*t6311;
  t8861 = t8857 + t8860;
  t9040 = t9022*t8640;
  t9056 = t8676*t9055;
  t9057 = t9040 + t9056;
  t8827 = t6299*t8726*t8640;
  t8862 = t8698*t8861;
  t8878 = t8731*t8726*t8736;
  t8882 = t8862 + t8878;
  t8889 = t8676*t8882;
  t8890 = t8827 + t8889;
  t9069 = t8676*t9022;
  t9071 = -1.*t8640*t9055;
  t9072 = t9069 + t9071;
  t9080 = -1.*t8698*t8731*t8726;
  t9081 = t8861*t8736;
  t9086 = t9080 + t9081;
  t9005 = -1.*t6299*t8698*t9004;
  t9087 = t9004*t9086;
  t9146 = -1.*t8731*t9022;
  t9187 = t6299*t9022*t8726;
  t9060 = t8676*t8731;
  t9062 = t6299*t8640*t8736;
  t9063 = t9060 + t9062;
  t8641 = t6299*t8639*t8640;
  t8745 = t8676*t8744;
  t8746 = t8641 + t8745;
  t9100 = t6299*t8676*t8726;
  t9102 = -1.*t8640*t8882;
  t9103 = t9100 + t9102;
  t9404 = t9004*t8786;
  t9416 = -1.*t9004*t9086;
  t9460 = -1.*t6299*t9022*t8726;
  t9455 = t6299*t9022*t8639;
  t9563 = t8998*t8726;
  t9497 = -1.*t8998*t8861;
  t10228 = t6299*t8698*t9004;
  t11033 = -1.*t9004*t8786;
  t11205 = t8731*t9022;
  t11454 = -1.*t6299*t9022*t8639;
  p_output1[0]=t8746;
  p_output1[1]=t8755*t8786 - 1.*t8792*t8799;
  p_output1[2]=t8786*t8792 + t8755*t8799;
  p_output1[3]=t8890*(t9005 - 1.*t9009*t9057 - 1.*t9063*t9072) + t9009*(t8890*t9057 + t9087 + t9072*t9103);
  p_output1[4]=t9086*(t9005 + t6299*t8736*t9055 + t9146) + t6299*t8698*(t8882*t9055 + t9087 + t9187);
  p_output1[5]=t6299*t8726*(-1.*t6299*t8953 + t9146) + t8731*(-1.*t8726*t8731*t8953 + t8861*t8998 + t9187);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.1575*t8639 + 0.2255*t8861;
  p_output1[16]=-0.325*t6311 - 1.*t6304*t8919 - 1.*t6311*t8942;
  p_output1[17]=-0.0641;
  p_output1[18]=t9009;
  p_output1[19]=t6299*t8698*t8755 - 1.*t8792*t9063;
  p_output1[20]=t6299*t8698*t8792 + t8755*t9063;
  p_output1[21]=t8890*(t8746*t9057 + t8799*t9072 + t9404) + t8746*(-1.*t8890*t9057 - 1.*t9072*t9103 + t9416);
  p_output1[22]=t9086*(t8744*t9055 + t9404 + t9455) + t8786*(-1.*t8882*t9055 + t9416 + t9460);
  p_output1[23]=t6299*t8639*(t8726*t8731*t8953 + t9460 + t9497) + t6299*t8726*(-1.*t8639*t8731*t8953 + t9455 + t9563);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t8726*(-1.*t8726*t8950 + t9497) + t8861*(t8639*t8950 + t9563);
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t8890;
  p_output1[37]=t8755*t9086 - 1.*t8792*t9103;
  p_output1[38]=t8792*t9086 + t8755*t9103;
  p_output1[39]=t9009*(t11033 - 1.*t8746*t9057 - 1.*t8799*t9072) + t8746*(t10228 + t9009*t9057 + t9063*t9072);
  p_output1[40]=t8786*(t10228 + t11205 - 1.*t6299*t8736*t9055) + t6299*t8698*(t11033 + t11454 - 1.*t8744*t9055);
  p_output1[41]=t6299*t8639*(t11205 + t6299*t8953) + t8731*(t11454 + t8639*t8731*t8953 - 1.*t8726*t8998);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.068*t8726;
  p_output1[52]=0.325*t6304 - 1.*t6311*t8919 + t6304*t8942;
  p_output1[53]=-0.28;
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

#include "fRrFoot_map_ParallelStance.hh"

namespace SymFunction
{

void fRrFoot_map_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
