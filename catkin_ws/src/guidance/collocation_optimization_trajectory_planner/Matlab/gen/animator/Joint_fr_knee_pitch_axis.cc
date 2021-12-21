/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:11 GMT+01:00
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
  double t390;
  double t624;
  double t833;
  double t707;
  double t768;
  double t866;
  double t1127;
  double t1146;
  double t1149;
  double t394;
  double t789;
  double t973;
  double t1018;
  double t1563;
  double t1572;
  double t1636;
  double t1738;
  double t1850;
  double t1870;
  double t196;
  double t391;
  double t399;
  double t435;
  double t486;
  double t1087;
  double t1284;
  double t1479;
  double t1643;
  double t1645;
  double t1912;
  double t1928;
  double t1946;
  double t1963;
  double t1974;
  double t1976;
  double t1977;
  double t1989;
  double t2015;
  double t2016;
  double t2019;
  double t2022;
  double t2028;
  double t2030;
  double t2033;
  double t2034;
  double t210;
  double t389;
  double t2077;
  double t2081;
  double t2079;
  double t2082;
  double t2088;
  double t2124;
  double t2141;
  double t2146;
  double t2120;
  double t2176;
  double t2192;
  double t2209;
  double t2212;
  double t2213;
  double t2004;
  double t2006;
  double t2037;
  double t2045;
  double t2078;
  double t2208;
  double t2216;
  double t2221;
  double t2057;
  double t2061;
  double t2269;
  double t2272;
  double t2282;
  double t2283;
  double t2289;
  double t2301;
  double t2303;
  double t2311;
  double t2440;
  double t2465;
  double t2467;
  double t2479;
  double t2501;
  double t2530;
  double t2478;
  double t2549;
  double t2554;
  double t2582;
  double t2644;
  double t2657;
  double t2350;
  double t2577;
  double t2740;
  double t2745;
  double t2761;
  double t2808;
  double t2835;
  double t2888;
  double t3085;
  double t3098;
  double t3112;
  double t3128;
  t390 = Sin(var1[10]);
  t624 = Cos(var1[4]);
  t833 = Cos(var1[9]);
  t707 = Cos(var1[5]);
  t768 = Sin(var1[9]);
  t866 = Sin(var1[5]);
  t1127 = Cos(var1[10]);
  t1146 = -1.*t1127;
  t1149 = 1. + t1146;
  t394 = Sin(var1[4]);
  t789 = -1.*t624*t707*t768;
  t973 = -1.*t833*t624*t866;
  t1018 = t789 + t973;
  t1563 = t833*t624*t707;
  t1572 = -1.*t624*t768*t866;
  t1636 = t1563 + t1572;
  t1738 = Cos(var1[11]);
  t1850 = -1.*t1738;
  t1870 = 1. + t1850;
  t196 = Sin(var1[11]);
  t391 = 0. + t390;
  t399 = t391*t394;
  t435 = -4.e-6*t390;
  t486 = 0. + t435;
  t1087 = t486*t1018;
  t1284 = -1.000000000016*t1149;
  t1479 = 1. + t1284;
  t1643 = t1479*t1636;
  t1645 = t399 + t1087 + t1643;
  t1912 = -1.*t1149;
  t1928 = 1. + t1912;
  t1946 = t1928*t394;
  t1963 = 4.e-6*t1149*t1018;
  t1974 = -1.*t390;
  t1976 = 0. + t1974;
  t1977 = t1976*t1636;
  t1989 = t1946 + t1963 + t1977;
  t2015 = 4.e-6*t1149*t394;
  t2016 = -1.6e-11*t1149;
  t2019 = 1. + t2016;
  t2022 = t2019*t1018;
  t2028 = 4.e-6*t390;
  t2030 = 0. + t2028;
  t2033 = t2030*t1636;
  t2034 = t2015 + t2022 + t2033;
  t210 = 4.e-6*t196;
  t389 = 0. + t210;
  t2077 = Sin(var1[3]);
  t2081 = Cos(var1[3]);
  t2079 = t707*t2077*t394;
  t2082 = t2081*t866;
  t2088 = t2079 + t2082;
  t2124 = t2081*t707;
  t2141 = -1.*t2077*t394*t866;
  t2146 = t2124 + t2141;
  t2120 = -1.*t768*t2088;
  t2176 = t833*t2146;
  t2192 = t2120 + t2176;
  t2209 = t833*t2088;
  t2212 = t768*t2146;
  t2213 = t2209 + t2212;
  t2004 = -1.6e-11*t1870;
  t2006 = 1. + t2004;
  t2037 = -1.*t196;
  t2045 = 0. + t2037;
  t2078 = -1.*t624*t391*t2077;
  t2208 = t486*t2192;
  t2216 = t1479*t2213;
  t2221 = t2078 + t2208 + t2216;
  t2057 = -1.*t1870;
  t2061 = 1. + t2057;
  t2269 = -1.*t1928*t624*t2077;
  t2272 = 4.e-6*t1149*t2192;
  t2282 = t1976*t2213;
  t2283 = t2269 + t2272 + t2282;
  t2289 = -4.e-6*t1149*t624*t2077;
  t2301 = t2019*t2192;
  t2303 = t2030*t2213;
  t2311 = t2289 + t2301 + t2303;
  t2440 = -1.*t2081*t707*t394;
  t2465 = t2077*t866;
  t2467 = t2440 + t2465;
  t2479 = t707*t2077;
  t2501 = t2081*t394*t866;
  t2530 = t2479 + t2501;
  t2478 = -1.*t768*t2467;
  t2549 = t833*t2530;
  t2554 = t2478 + t2549;
  t2582 = t833*t2467;
  t2644 = t768*t2530;
  t2657 = t2582 + t2644;
  t2350 = t2081*t624*t391;
  t2577 = t486*t2554;
  t2740 = t1479*t2657;
  t2745 = t2350 + t2577 + t2740;
  t2761 = t1928*t2081*t624;
  t2808 = 4.e-6*t1149*t2554;
  t2835 = t1976*t2657;
  t2888 = t2761 + t2808 + t2835;
  t3085 = 4.e-6*t1149*t2081*t624;
  t3098 = t2019*t2554;
  t3112 = t2030*t2657;
  t3128 = t3085 + t3098 + t3112;
  p_output1[0]=-4.e-6*t1870*t1989 - 1.*t2006*t2034 - 4.e-6*(4.e-6*t1870*t2034 + t1645*t2045 + t1989*t2061) - 1.*t1645*t389;
  p_output1[1]=-4.e-6*t1870*t2283 - 1.*t2006*t2311 - 4.e-6*(t2045*t2221 + t2061*t2283 + 4.e-6*t1870*t2311) - 1.*t2221*t389;
  p_output1[2]=-4.e-6*t1870*t2888 - 1.*t2006*t3128 - 4.e-6*(t2045*t2745 + t2061*t2888 + 4.e-6*t1870*t3128) - 1.*t2745*t389;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_fr_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_fr_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
