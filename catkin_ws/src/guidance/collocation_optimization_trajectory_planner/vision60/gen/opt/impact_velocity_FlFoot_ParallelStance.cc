/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:34:04 GMT+02:00
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
  double t2425;
  double t3092;
  double t7234;
  double t7402;
  double t7494;
  double t8654;
  double t8803;
  double t8857;
  double t8949;
  double t9088;
  double t9281;
  double t9685;
  double t10283;
  double t9092;
  double t9176;
  double t10320;
  double t10321;
  double t10324;
  double t10352;
  double t10371;
  double t10396;
  double t8159;
  double t8160;
  double t8201;
  double t10924;
  double t10925;
  double t10926;
  double t10902;
  double t10909;
  double t10921;
  double t11076;
  double t11080;
  double t11082;
  double t10304;
  double t10306;
  double t10289;
  double t10297;
  double t11313;
  double t11314;
  double t11318;
  double t11328;
  double t11341;
  double t11366;
  double t11392;
  double t11413;
  double t11435;
  double t11519;
  double t11526;
  double t11535;
  double t11536;
  double t11542;
  double t11569;
  double t11574;
  double t11587;
  double t11628;
  double t11630;
  double t11639;
  double t11654;
  double t11660;
  double t11667;
  double t11705;
  double t11749;
  double t11752;
  double t11893;
  double t11894;
  double t11895;
  double t11897;
  double t11898;
  double t11903;
  double t11919;
  double t11920;
  double t11921;
  double t12037;
  double t12038;
  double t12042;
  double t12001;
  double t12007;
  double t12014;
  double t12359;
  double t12363;
  double t12364;
  double t12366;
  double t12370;
  double t12371;
  double t12374;
  double t12375;
  double t12378;
  double t11556;
  double t11558;
  double t11564;
  double t12511;
  double t12513;
  double t12543;
  double t12657;
  double t12658;
  double t12659;
  double t12650;
  double t12654;
  double t12655;
  double t12672;
  double t12673;
  double t12678;
  double t12888;
  double t12894;
  double t12899;
  double t12215;
  double t12916;
  double t12917;
  double t12964;
  double t12965;
  double t12971;
  double t12973;
  double t12974;
  double t12975;
  double t13118;
  double t13131;
  double t13132;
  double t13137;
  double t13138;
  double t13140;
  double t13144;
  double t13147;
  double t13148;
  double t12906;
  double t12909;
  double t12911;
  double t13182;
  double t13183;
  double t13184;
  double t13190;
  double t13191;
  double t13193;
  double t13186;
  double t13187;
  double t13188;
  double t13206;
  double t13207;
  double t13208;
  double t12711;
  double t12729;
  double t12769;
  double t12665;
  t2425 = Cos(var1[6]);
  t3092 = Sin(var1[4]);
  t7234 = Cos(var1[4]);
  t7402 = Sin(var1[5]);
  t7494 = Sin(var1[6]);
  t8654 = t7234*t2425*t7402;
  t8803 = -1.*t3092*t7494;
  t8857 = t8654 + t8803;
  t8949 = Sin(var1[7]);
  t9088 = Cos(var1[8]);
  t9281 = Cos(var1[7]);
  t9685 = Sin(var1[8]);
  t10283 = Cos(var1[5]);
  t9092 = -1.*t9088;
  t9176 = 1. + t9092;
  t10320 = -1.*t7234*t9281*t7402;
  t10321 = t7234*t10283*t7494*t8949;
  t10324 = t10320 + t10321;
  t10352 = t7234*t10283*t9281*t7494;
  t10371 = t7234*t7402*t8949;
  t10396 = t10352 + t10371;
  t8159 = t2425*t3092;
  t8160 = t7234*t7402*t7494;
  t8201 = t8159 + t8160;
  t10924 = -1.*t7234*t10283*t9281;
  t10925 = -1.*t8201*t8949;
  t10926 = t10924 + t10925;
  t10902 = t9281*t8201;
  t10909 = -1.*t7234*t10283*t8949;
  t10921 = t10902 + t10909;
  t11076 = t7234*t10283*t9281;
  t11080 = t8201*t8949;
  t11082 = t11076 + t11080;
  t10304 = -1.*t9281;
  t10306 = 1. + t10304;
  t10289 = -1.*t2425;
  t10297 = 1. + t10289;
  t11313 = t7234*t2425;
  t11314 = -1.*t3092*t7402*t7494;
  t11318 = t11313 + t11314;
  t11328 = -1.*t10283*t9281*t3092;
  t11341 = t11318*t8949;
  t11366 = t11328 + t11341;
  t11392 = t9281*t11318;
  t11413 = t10283*t3092*t8949;
  t11435 = t11392 + t11413;
  t11519 = Sin(var1[3]);
  t11526 = Cos(var1[3]);
  t11535 = t11526*t10283;
  t11536 = -1.*t11519*t3092*t7402;
  t11542 = t11535 + t11536;
  t11569 = -1.*t2425*t11542;
  t11574 = t7234*t11519*t7494;
  t11587 = t11569 + t11574;
  t11628 = -1.*t10283*t11519*t3092;
  t11630 = -1.*t11526*t7402;
  t11639 = t11628 + t11630;
  t11654 = t9281*t11542;
  t11660 = -1.*t11639*t7494*t8949;
  t11667 = t11654 + t11660;
  t11705 = -1.*t9281*t11639*t7494;
  t11749 = -1.*t11542*t8949;
  t11752 = t11705 + t11749;
  t11893 = t2425*t11519*t3092;
  t11894 = t7234*t11519*t7402*t7494;
  t11895 = t11893 + t11894;
  t11897 = t7234*t10283*t9281*t11519;
  t11898 = t11895*t8949;
  t11903 = t11897 + t11898;
  t11919 = t9281*t11895;
  t11920 = -1.*t7234*t10283*t11519*t8949;
  t11921 = t11919 + t11920;
  t12037 = -1.*t10283*t11519;
  t12038 = -1.*t11526*t3092*t7402;
  t12042 = t12037 + t12038;
  t12001 = t11526*t10283*t3092;
  t12007 = -1.*t11519*t7402;
  t12014 = t12001 + t12007;
  t12359 = -1.*t11526*t7234*t2425;
  t12363 = -1.*t12042*t7494;
  t12364 = t12359 + t12363;
  t12366 = t9281*t12014;
  t12370 = t12364*t8949;
  t12371 = t12366 + t12370;
  t12374 = t9281*t12364;
  t12375 = -1.*t12014*t8949;
  t12378 = t12374 + t12375;
  t11556 = -1.*t7234*t2425*t11519;
  t11558 = -1.*t11542*t7494;
  t11564 = t11556 + t11558;
  t12511 = t10283*t11519*t3092;
  t12513 = t11526*t7402;
  t12543 = t12511 + t12513;
  t12657 = -1.*t9281*t12543;
  t12658 = -1.*t11564*t8949;
  t12659 = t12657 + t12658;
  t12650 = t9281*t11564;
  t12654 = -1.*t12543*t8949;
  t12655 = t12650 + t12654;
  t12672 = t9281*t12543;
  t12673 = t11564*t8949;
  t12678 = t12672 + t12673;
  t12888 = t10283*t11519;
  t12894 = t11526*t3092*t7402;
  t12899 = t12888 + t12894;
  t12215 = -1.*t11526*t7234*t7494;
  t12916 = -1.*t2425*t12899;
  t12917 = t12916 + t12215;
  t12964 = t9281*t12899;
  t12965 = -1.*t12014*t7494*t8949;
  t12971 = t12964 + t12965;
  t12973 = -1.*t9281*t12014*t7494;
  t12974 = -1.*t12899*t8949;
  t12975 = t12973 + t12974;
  t13118 = -1.*t11526*t2425*t3092;
  t13131 = -1.*t11526*t7234*t7402*t7494;
  t13132 = t13118 + t13131;
  t13137 = -1.*t11526*t7234*t10283*t9281;
  t13138 = t13132*t8949;
  t13140 = t13137 + t13138;
  t13144 = t9281*t13132;
  t13147 = t11526*t7234*t10283*t8949;
  t13148 = t13144 + t13147;
  t12906 = t11526*t7234*t2425;
  t12909 = -1.*t12899*t7494;
  t12911 = t12906 + t12909;
  t13182 = -1.*t11526*t10283*t3092;
  t13183 = t11519*t7402;
  t13184 = t13182 + t13183;
  t13190 = -1.*t9281*t13184;
  t13191 = -1.*t12911*t8949;
  t13193 = t13190 + t13191;
  t13186 = t9281*t12911;
  t13187 = -1.*t13184*t8949;
  t13188 = t13186 + t13187;
  t13206 = t9281*t13184;
  t13207 = t12911*t8949;
  t13208 = t13206 + t13207;
  t12711 = t9088*t12678;
  t12729 = -1.*t12655*t9685;
  t12769 = t12711 + t12729;
  t12665 = t9088*t12655;
  p_output1[0]=var2[0] + (-0.325*t10283*t10306*t3092 + 0.1575*t10297*t3092*t7402 - 0.1575*t7234*t7494 + 0.2255*(t2425*t3092*t7402 + t7234*t7494) - 0.325*t11318*t8949 + 0.075*t11366*t9176 + 0.075*t11435*t9685 - 0.0641*(t11435*t9088 + t11366*t9685) + 0.355*(t11366*t9088 - 1.*t11435*t9685))*var2[4] + (-0.1575*t10283*t10297*t7234 - 0.2255*t10283*t2425*t7234 - 0.325*t10306*t7234*t7402 - 0.325*t10283*t7234*t7494*t8949 + 0.075*t10324*t9176 + 0.075*t10396*t9685 - 0.0641*(t10396*t9088 + t10324*t9685) + 0.355*(t10324*t9088 - 1.*t10396*t9685))*var2[5] + (-0.1575*t2425*t3092 - 0.1575*t7234*t7402*t7494 + 0.2255*t8201 - 0.325*t8857*t8949 + 0.075*t8857*t8949*t9176 + 0.075*t8857*t9281*t9685 - 0.0641*(t8857*t9088*t9281 + t8857*t8949*t9685) + 0.355*(t8857*t8949*t9088 - 1.*t8857*t9281*t9685))*var2[6] + (0.325*t10283*t7234*t8949 + 0.075*t10921*t9176 - 0.325*t8201*t9281 + 0.075*t10926*t9685 - 0.0641*(t10926*t9088 + t10921*t9685) + 0.355*(t10921*t9088 - 1.*t10926*t9685))*var2[7] + (0.075*t10921*t9088 + 0.075*t11082*t9685 - 0.0641*(t11082*t9088 - 1.*t10921*t9685) + 0.355*(-1.*t10921*t9088 - 1.*t11082*t9685))*var2[8];
  p_output1[1]=var2[1] + (0.325*t10306*t12014 + 0.1575*t10297*t12042 + 0.2255*(t12215 + t12042*t2425) + 0.1575*t11526*t7234*t7494 - 0.325*t12364*t8949 + 0.075*t12371*t9176 + 0.075*t12378*t9685 - 0.0641*(t12378*t9088 + t12371*t9685) + 0.355*(t12371*t9088 - 1.*t12378*t9685))*var2[3] + (0.325*t10283*t10306*t11519*t7234 - 0.1575*t10297*t11519*t7234*t7402 - 0.1575*t11519*t3092*t7494 + 0.2255*(-1.*t11519*t2425*t7234*t7402 + t11519*t3092*t7494) - 0.325*t11895*t8949 + 0.075*t11903*t9176 + 0.075*t11921*t9685 - 0.0641*(t11921*t9088 + t11903*t9685) + 0.355*(t11903*t9088 - 1.*t11921*t9685))*var2[4] + (0.325*t10306*t11542 + 0.1575*t10297*t11639 + 0.2255*t11639*t2425 + 0.325*t11639*t7494*t8949 + 0.075*t11667*t9176 + 0.075*t11752*t9685 - 0.0641*(t11752*t9088 + t11667*t9685) + 0.355*(t11667*t9088 - 1.*t11752*t9685))*var2[5] + (0.2255*t11564 + 0.1575*t11519*t2425*t7234 + 0.1575*t11542*t7494 - 0.325*t11587*t8949 + 0.075*t11587*t8949*t9176 + 0.075*t11587*t9281*t9685 - 0.0641*(t11587*t9088*t9281 + t11587*t8949*t9685) + 0.355*(t11587*t8949*t9088 - 1.*t11587*t9281*t9685))*var2[6] + (0.325*t12543*t8949 + 0.075*t12655*t9176 - 0.325*t11564*t9281 + 0.075*t12659*t9685 - 0.0641*(t12659*t9088 + t12655*t9685) + 0.355*(t12665 - 1.*t12659*t9685))*var2[7] + (-0.0641*t12769 + 0.075*t12655*t9088 + 0.075*t12678*t9685 + 0.355*(-1.*t12655*t9088 - 1.*t12678*t9685))*var2[8];
  p_output1[2]=var2[2] + (0.1575*t10297*t11542 + 0.325*t10306*t12543 + 0.355*t12769 + 0.1575*t11519*t7234*t7494 + 0.2255*(t11542*t2425 - 1.*t11519*t7234*t7494) - 0.325*t11564*t8949 + 0.075*t12678*t9176 + 0.075*t12655*t9685 - 0.0641*(t12665 + t12678*t9685))*var2[3] + (-0.325*t10283*t10306*t11526*t7234 + 0.1575*t10297*t11526*t7234*t7402 + 0.1575*t11526*t3092*t7494 + 0.2255*(t11526*t2425*t7234*t7402 - 1.*t11526*t3092*t7494) - 0.325*t13132*t8949 + 0.075*t13140*t9176 + 0.075*t13148*t9685 - 0.0641*(t13148*t9088 + t13140*t9685) + 0.355*(t13140*t9088 - 1.*t13148*t9685))*var2[4] + (0.1575*t10297*t12014 + 0.325*t10306*t12899 + 0.2255*t12014*t2425 + 0.325*t12014*t7494*t8949 + 0.075*t12971*t9176 + 0.075*t12975*t9685 - 0.0641*(t12975*t9088 + t12971*t9685) + 0.355*(t12971*t9088 - 1.*t12975*t9685))*var2[5] + (0.2255*t12911 - 0.1575*t11526*t2425*t7234 + 0.1575*t12899*t7494 - 0.325*t12917*t8949 + 0.075*t12917*t8949*t9176 + 0.075*t12917*t9281*t9685 - 0.0641*(t12917*t9088*t9281 + t12917*t8949*t9685) + 0.355*(t12917*t8949*t9088 - 1.*t12917*t9281*t9685))*var2[6] + (0.325*t13184*t8949 + 0.075*t13188*t9176 - 0.325*t12911*t9281 + 0.075*t13193*t9685 - 0.0641*(t13193*t9088 + t13188*t9685) + 0.355*(t13188*t9088 - 1.*t13193*t9685))*var2[7] + (0.075*t13188*t9088 + 0.075*t13208*t9685 - 0.0641*(t13208*t9088 - 1.*t13188*t9685) + 0.355*(-1.*t13188*t9088 - 1.*t13208*t9685))*var2[8];
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
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "impact_velocity_FlFoot_ParallelStance.hh"

namespace ParallelStance
{

void impact_velocity_FlFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
