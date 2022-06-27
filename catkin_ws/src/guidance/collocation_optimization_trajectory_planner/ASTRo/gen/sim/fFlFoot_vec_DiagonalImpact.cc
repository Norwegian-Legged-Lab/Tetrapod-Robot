/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:21:22 GMT+02:00
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
  double t115;
  double t16460;
  double t3702;
  double t20923;
  double t20928;
  double t20865;
  double t20929;
  double t3902;
  double t20856;
  double t20940;
  double t20941;
  double t20942;
  double t20864;
  double t20927;
  double t20934;
  double t20938;
  double t13107;
  double t20861;
  double t20862;
  double t20962;
  double t20960;
  double t20943;
  double t20944;
  double t20945;
  double t20949;
  double t20950;
  double t20951;
  double t20953;
  double t20954;
  double t20955;
  double t20963;
  double t20964;
  double t20965;
  double t20970;
  double t20971;
  double t20972;
  double t20975;
  double t20976;
  double t20977;
  double t20982;
  double t20984;
  double t20985;
  double t20987;
  double t20988;
  double t20989;
  double t20939;
  double t20946;
  double t20947;
  double t21007;
  double t21008;
  double t21009;
  double t21011;
  double t21012;
  double t21013;
  double t21014;
  double t21017;
  double t21018;
  double t21019;
  double t21020;
  double t21021;
  double t21022;
  double t21023;
  double t21024;
  double t21025;
  double t21027;
  double t21028;
  double t21029;
  double t21030;
  double t21035;
  double t21036;
  double t21037;
  double t21038;
  double t21040;
  double t21041;
  double t21042;
  double t21026;
  double t21031;
  double t21032;
  double t21039;
  double t21043;
  double t21044;
  double t21046;
  double t21047;
  double t21048;
  double t20952;
  double t20956;
  double t20957;
  double t21034;
  double t21052;
  double t21059;
  double t21064;
  double t21072;
  double t21077;
  double t21105;
  double t21109;
  t115 = Cos(var1[4]);
  t16460 = Cos(var1[5]);
  t3702 = Cos(var1[6]);
  t20923 = Cos(var1[8]);
  t20928 = Sin(var1[7]);
  t20865 = Cos(var1[7]);
  t20929 = Sin(var1[8]);
  t3902 = Sin(var1[5]);
  t20856 = Sin(var1[6]);
  t20940 = t20923*t20928;
  t20941 = -1.*t20865*t20929;
  t20942 = t20940 + t20941;
  t20864 = Sin(var1[4]);
  t20927 = t20865*t20923;
  t20934 = t20928*t20929;
  t20938 = t20927 + t20934;
  t13107 = -1.*t3702*t3902;
  t20861 = -1.*t16460*t20856;
  t20862 = t13107 + t20861;
  t20962 = Cos(var1[3]);
  t20960 = Sin(var1[3]);
  t20943 = t16460*t3702*t20942;
  t20944 = -1.*t3902*t20856*t20942;
  t20945 = t20943 + t20944;
  t20949 = -1.*t20923*t20928;
  t20950 = t20865*t20929;
  t20951 = t20949 + t20950;
  t20953 = t16460*t3702*t20938;
  t20954 = -1.*t3902*t20856*t20938;
  t20955 = t20953 + t20954;
  t20963 = t16460*t3702;
  t20964 = -1.*t3902*t20856;
  t20965 = t20963 + t20964;
  t20970 = t3702*t3902*t20942;
  t20971 = t16460*t20856*t20942;
  t20972 = t20970 + t20971;
  t20975 = t115*t20938;
  t20976 = -1.*t20864*t20945;
  t20977 = t20975 + t20976;
  t20982 = t3702*t3902*t20938;
  t20984 = t16460*t20856*t20938;
  t20985 = t20982 + t20984;
  t20987 = t115*t20951;
  t20988 = -1.*t20864*t20955;
  t20989 = t20987 + t20988;
  t20939 = t20864*t20938;
  t20946 = t115*t20945;
  t20947 = t20939 + t20946;
  t21007 = -1.*t3702;
  t21008 = 1. + t21007;
  t21009 = 0.15121*t21008;
  t21011 = -1.*t20865;
  t21012 = 1. + t21011;
  t21013 = 0.28121*t21012;
  t21014 = -1.*t20923;
  t21017 = 1. + t21014;
  t21018 = 0.50321*t21017;
  t21019 = 0.19821*t20923;
  t21020 = t21018 + t21019;
  t21021 = t20865*t21020;
  t21022 = -0.305*t20928*t20929;
  t21023 = t21013 + t21021 + t21022;
  t21024 = t3702*t21023;
  t21025 = t21009 + t21024;
  t21027 = 0.15121*t3702;
  t21028 = -0.15121*t20856;
  t21029 = t20856*t21023;
  t21030 = t21009 + t21027 + t21028 + t21029;
  t21035 = 0.28121*t20928;
  t21036 = -1.*t21020*t20928;
  t21037 = -0.305*t20865*t20929;
  t21038 = t21035 + t21036 + t21037;
  t21040 = t16460*t21025;
  t21041 = -1.*t3902*t21030;
  t21042 = t21040 + t21041;
  t21026 = t3902*t21025;
  t21031 = t16460*t21030;
  t21032 = t21026 + t21031;
  t21039 = t20864*t21038;
  t21043 = t115*t21042;
  t21044 = t21039 + t21043;
  t21046 = t115*t21038;
  t21047 = -1.*t20864*t21042;
  t21048 = t21046 + t21047;
  t20952 = t20864*t20951;
  t20956 = t115*t20955;
  t20957 = t20952 + t20956;
  t21034 = -1.*t20965*t21032;
  t21052 = t20972*t21032;
  t21059 = t20965*t21032;
  t21064 = -1.*t20985*t21032;
  t21072 = -1.*t20972*t21032;
  t21077 = t20985*t21032;
  t21105 = -1.*t21038*t20938;
  t21109 = t21038*t20951;
  p_output1[0]=t20957*var2[0] + t115*t20862*var2[1] + t20947*var2[2];
  p_output1[1]=(t20962*t20985 - 1.*t20960*t20989)*var2[0] + (t20862*t20864*t20960 + t20962*t20965)*var2[1] + (t20962*t20972 - 1.*t20960*t20977)*var2[2];
  p_output1[2]=(t20960*t20985 + t20962*t20989)*var2[0] + (-1.*t20862*t20864*t20962 + t20960*t20965)*var2[1] + (t20960*t20972 + t20962*t20977)*var2[2];
  p_output1[3]=(t20947*(t21034 - 1.*t115*t20862*t21044 + t20862*t20864*t21048) + t115*t20862*(t20947*t21044 + t20977*t21048 + t21052))*var2[0] + (t20957*(-1.*t20947*t21044 - 1.*t20977*t21048 + t21072) + t20947*(t20957*t21044 + t20989*t21048 + t21077))*var2[1] + (t20957*(t115*t20862*t21044 - 1.*t20862*t20864*t21048 + t21059) + t115*t20862*(-1.*t20957*t21044 - 1.*t20989*t21048 + t21064))*var2[2];
  p_output1[4]=(t20972*(t21034 - 1.*t20862*t21042) + t20965*(t20938*t21038 + t20945*t21042 + t21052))*var2[0] + (t20985*(-1.*t20945*t21042 + t21072 + t21105) + t20972*(t20955*t21042 + t21077 + t21109))*var2[1] + (t20985*(t20862*t21042 + t21059) + t20965*(-1.*t20951*t21038 - 1.*t20955*t21042 + t21064))*var2[2];
  p_output1[5]=t20938*(t20856*t21025 - 1.*t21030*t3702)*var2[0] + (t20938*(t20856*t20938*t21030 + t21109 + t20938*t21025*t3702) + t20951*(-1.*t20856*t20942*t21030 + t21105 - 1.*t20942*t21025*t3702))*var2[1] + t20951*(-1.*t20856*t21025 + t21030*t3702)*var2[2];
  p_output1[6]=(-0.15121 + t20951*(-1.*t20942*t21023 + t21105) + t20938*(t20938*t21023 + t21109))*var2[1] + (0.15121*t20942 + 0.15121*t20951)*var2[2];
  p_output1[7]=(0.28121*t20929 - 0.305*t20923*t20929 - 1.*t20929*t21020)*var2[0] + (0.28121*t20923 + 0.305*Power(t20929,2) - 1.*t20923*t21020)*var2[2];
  p_output1[8]=-0.305*var2[2];
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

#include "fFlFoot_vec_DiagonalImpact.hh"

namespace SymFunction
{

void fFlFoot_vec_DiagonalImpact_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
