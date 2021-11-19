/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:48 GMT+01:00
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
  double t1088;
  double t69;
  double t404;
  double t405;
  double t608;
  double t637;
  double t736;
  double t1148;
  double t1185;
  double t1381;
  double t1400;
  double t236;
  double t1813;
  double t1699;
  double t2543;
  double t2611;
  double t2895;
  double t2997;
  double t3009;
  double t3042;
  double t3063;
  double t3072;
  double t3084;
  double t3091;
  double t3499;
  double t3253;
  double t3263;
  double t3266;
  double t3299;
  double t3345;
  double t3356;
  double t3620;
  double t3625;
  double t3632;
  double t3633;
  double t3674;
  double t3679;
  double t3681;
  double t3687;
  double t3693;
  double t3694;
  double t1058;
  double t1253;
  double t1399;
  double t1468;
  double t1532;
  double t617;
  double t771;
  double t3916;
  double t1796;
  double t1810;
  double t3920;
  double t2357;
  double t2361;
  double t2444;
  double t2510;
  double t2535;
  double t3918;
  double t3922;
  double t3923;
  double t3927;
  double t3931;
  double t3932;
  double t2950;
  double t2957;
  double t2989;
  double t3090;
  double t3195;
  double t3240;
  double t3935;
  double t3945;
  double t3948;
  double t3951;
  double t3954;
  double t3963;
  double t3443;
  double t3460;
  double t3517;
  double t3550;
  double t3594;
  double t3657;
  double t3659;
  double t3660;
  double t3669;
  double t3670;
  double t3971;
  double t3972;
  double t3974;
  double t3978;
  double t3980;
  double t3984;
  double t3985;
  double t3986;
  double t3754;
  double t3767;
  double t3988;
  double t3991;
  double t3992;
  double t3996;
  double t3899;
  double t3901;
  double t4038;
  double t4047;
  double t4075;
  double t4079;
  double t4080;
  double t4082;
  double t4084;
  double t4085;
  double t4087;
  double t4089;
  double t4090;
  double t4091;
  double t4099;
  double t4100;
  double t4104;
  double t4105;
  double t4109;
  double t4110;
  double t4111;
  double t4112;
  double t4129;
  double t4132;
  double t4134;
  double t4136;
  t1088 = Cos(var1[10]);
  t69 = Cos(var1[4]);
  t404 = Cos(var1[9]);
  t405 = -1.*t404;
  t608 = 1. + t405;
  t637 = Sin(var1[9]);
  t736 = -0.15121*t637;
  t1148 = -1.*t1088;
  t1185 = 1. + t1148;
  t1381 = -1. + t1088;
  t1400 = Sin(var1[10]);
  t236 = Cos(var1[5]);
  t1813 = Sin(var1[5]);
  t1699 = Sin(var1[4]);
  t2543 = -1.*t69*t236*t637;
  t2611 = -1.*t404*t69*t1813;
  t2895 = t2543 + t2611;
  t2997 = t404*t69*t236;
  t3009 = -1.*t69*t637*t1813;
  t3042 = t2997 + t3009;
  t3063 = Cos(var1[11]);
  t3072 = -1.*t3063;
  t3084 = 1. + t3072;
  t3091 = Sin(var1[11]);
  t3499 = -1. + t3063;
  t3253 = t1400*t1699;
  t3263 = -4.e-6*t1400*t2895;
  t3266 = -1.000000000016*t1185;
  t3299 = 1. + t3266;
  t3345 = t3299*t3042;
  t3356 = t3253 + t3263 + t3345;
  t3620 = t1088*t1699;
  t3625 = 4.e-6*t1185*t2895;
  t3632 = -1.*t1400*t3042;
  t3633 = t3620 + t3625 + t3632;
  t3674 = 4.e-6*t1185*t1699;
  t3679 = 1.6e-11*t1381;
  t3681 = 1. + t3679;
  t3687 = t3681*t2895;
  t3693 = 4.e-6*t1400*t3042;
  t3694 = t3674 + t3687 + t3693;
  t1058 = -4.9936e-13*var1[10];
  t1253 = -0.038749*t1185;
  t1399 = 6.19984e-13*t1381;
  t1468 = -0.281210000004*t1400;
  t1532 = t1058 + t1253 + t1399 + t1468;
  t617 = 0.15121*t608;
  t771 = t617 + t736;
  t3916 = Sin(var1[3]);
  t1796 = -0.15121*t608;
  t1810 = t1796 + t736;
  t3920 = Cos(var1[3]);
  t2357 = -1.2484e-7*var1[10];
  t2361 = 2.479936e-18*t1185;
  t2444 = -1.54996e-7*t1381;
  t2510 = 1.124840000016e-6*t1400;
  t2535 = t2357 + t2361 + t2444 + t2510;
  t3918 = t236*t3916*t1699;
  t3922 = t3920*t1813;
  t3923 = t3918 + t3922;
  t3927 = t3920*t236;
  t3931 = -1.*t3916*t1699*t1813;
  t3932 = t3927 + t3931;
  t2950 = 0.281210000008499*t1185;
  t2957 = -0.03874900000062*t1400;
  t2989 = t2950 + t2957;
  t3090 = 0.50315000001605*t3084;
  t3195 = -0.0398890000006382*t3091;
  t3240 = t3090 + t3195;
  t3935 = -1.*t637*t3923;
  t3945 = t404*t3932;
  t3948 = t3935 + t3945;
  t3951 = t404*t3923;
  t3954 = t637*t3932;
  t3963 = t3951 + t3954;
  t3443 = -5.04e-14*var1[11];
  t3460 = -0.039889*t3084;
  t3517 = 6.38224e-13*t3499;
  t3550 = -0.503150000008*t3091;
  t3594 = t3443 + t3460 + t3517 + t3550;
  t3657 = -1.26e-8*var1[11];
  t3659 = 2.552896e-18*t3084;
  t3660 = -1.59556e-7*t3499;
  t3669 = 2.012600000032e-6*t3091;
  t3670 = t3657 + t3659 + t3660 + t3669;
  t3971 = -1.*t69*t1400*t3916;
  t3972 = -4.e-6*t1400*t3948;
  t3974 = t3299*t3963;
  t3978 = t3971 + t3972 + t3974;
  t3980 = -1.*t1088*t69*t3916;
  t3984 = 4.e-6*t1185*t3948;
  t3985 = -1.*t1400*t3963;
  t3986 = t3980 + t3984 + t3985;
  t3754 = 1.6e-11*t3499;
  t3767 = 1. + t3754;
  t3988 = -4.e-6*t1185*t69*t3916;
  t3991 = t3681*t3948;
  t3992 = 4.e-6*t1400*t3963;
  t3996 = t3988 + t3991 + t3992;
  t3899 = -1.000000000016*t3084;
  t3901 = 1. + t3899;
  t4038 = -1.*t3920*t236*t1699;
  t4047 = t3916*t1813;
  t4075 = t4038 + t4047;
  t4079 = t236*t3916;
  t4080 = t3920*t1699*t1813;
  t4082 = t4079 + t4080;
  t4084 = -1.*t637*t4075;
  t4085 = t404*t4082;
  t4087 = t4084 + t4085;
  t4089 = t404*t4075;
  t4090 = t637*t4082;
  t4091 = t4089 + t4090;
  t4099 = t3920*t69*t1400;
  t4100 = -4.e-6*t1400*t4087;
  t4104 = t3299*t4091;
  t4105 = t4099 + t4100 + t4104;
  t4109 = t1088*t3920*t69;
  t4110 = 4.e-6*t1185*t4087;
  t4111 = -1.*t1400*t4091;
  t4112 = t4109 + t4110 + t4111;
  t4129 = 4.e-6*t1185*t3920*t69;
  t4132 = t3681*t4087;
  t4134 = 4.e-6*t1400*t4091;
  t4136 = t4129 + t4132 + t4134;
  p_output1[0]=t1532*t1699 + t2535*t2895 + t2989*t3042 + t3240*t3356 + t3594*t3633 + t3670*t3694 - 0.041195*(-1.*t3091*t3356 + t3063*t3633 + 4.e-6*t3084*t3694) - 0.14871*(4.e-6*t3091*t3356 + 4.e-6*t3084*t3633 + t3694*t3767) + 0.803147*(t3091*t3633 - 4.e-6*t3091*t3694 + t3356*t3901) - 1.*t1810*t1813*t69 + t236*t69*t771 + var1[0];
  p_output1[1]=t1810*t3932 + t2535*t3948 + t2989*t3963 + t3240*t3978 + t3594*t3986 + t3670*t3996 - 0.041195*(-1.*t3091*t3978 + t3063*t3986 + 4.e-6*t3084*t3996) + 0.803147*(t3901*t3978 + t3091*t3986 - 4.e-6*t3091*t3996) - 0.14871*(4.e-6*t3091*t3978 + 4.e-6*t3084*t3986 + t3767*t3996) - 1.*t1532*t3916*t69 + t3923*t771 + var1[1];
  p_output1[2]=t1810*t4082 + t2535*t4087 + t2989*t4091 + t3240*t4105 + t3594*t4112 + t3670*t4136 - 0.041195*(-1.*t3091*t4105 + t3063*t4112 + 4.e-6*t3084*t4136) + 0.803147*(t3901*t4105 + t3091*t4112 - 4.e-6*t3091*t4136) - 0.14871*(4.e-6*t3091*t4105 + 4.e-6*t3084*t4112 + t3767*t4136) + t1532*t3920*t69 + t4075*t771 + var1[2];
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

#include "FrFoot_sphere_center.hh"

namespace SymFunction
{

void FrFoot_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
