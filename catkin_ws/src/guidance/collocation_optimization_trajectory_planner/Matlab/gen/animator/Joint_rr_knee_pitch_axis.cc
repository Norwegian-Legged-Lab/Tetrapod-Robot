/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:45 GMT+01:00
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
  double t1015;
  double t1094;
  double t1127;
  double t1427;
  double t1742;
  double t1911;
  double t1753;
  double t1772;
  double t1918;
  double t132;
  double t414;
  double t452;
  double t573;
  double t1445;
  double t1881;
  double t2000;
  double t2098;
  double t1314;
  double t2313;
  double t2349;
  double t2355;
  double t2826;
  double t1465;
  double t1432;
  double t1446;
  double t1468;
  double t1666;
  double t2175;
  double t2196;
  double t2265;
  double t2502;
  double t2577;
  double t2714;
  double t2719;
  double t2814;
  double t2848;
  double t2895;
  double t2950;
  double t2958;
  double t3050;
  double t3063;
  double t3164;
  double t2587;
  double t3240;
  double t3249;
  double t3253;
  double t3264;
  double t3304;
  double t3320;
  double t3344;
  double t3345;
  double t3411;
  double t3446;
  double t3460;
  double t461;
  double t792;
  double t886;
  double t3640;
  double t3656;
  double t3655;
  double t3660;
  double t3662;
  double t3670;
  double t3674;
  double t3679;
  double t2603;
  double t2689;
  double t3668;
  double t3681;
  double t3687;
  double t3694;
  double t3698;
  double t3699;
  double t3217;
  double t3234;
  double t3466;
  double t3477;
  double t3649;
  double t3693;
  double t3700;
  double t3703;
  double t3508;
  double t3510;
  double t3714;
  double t3717;
  double t3720;
  double t3721;
  double t3528;
  double t3535;
  double t3730;
  double t3733;
  double t3736;
  double t3749;
  double t3564;
  double t3570;
  double t3606;
  double t3608;
  double t3614;
  double t3824;
  double t3826;
  double t3828;
  double t3835;
  double t3838;
  double t3846;
  double t3830;
  double t3851;
  double t3861;
  double t3870;
  double t3873;
  double t3875;
  double t3817;
  double t3869;
  double t3877;
  double t3879;
  double t3881;
  double t3882;
  double t3884;
  double t3891;
  double t3895;
  double t3896;
  double t3897;
  double t3898;
  t1015 = Cos(var1[16]);
  t1094 = -1.*t1015;
  t1127 = 1. + t1094;
  t1427 = Sin(var1[16]);
  t1742 = Cos(var1[4]);
  t1911 = Cos(var1[15]);
  t1753 = Cos(var1[5]);
  t1772 = Sin(var1[15]);
  t1918 = Sin(var1[5]);
  t132 = Cos(var1[17]);
  t414 = -1.*t132;
  t452 = 1. + t414;
  t573 = Sin(var1[17]);
  t1445 = Sin(var1[4]);
  t1881 = -1.*t1742*t1753*t1772;
  t2000 = -1.*t1911*t1742*t1918;
  t2098 = t1881 + t2000;
  t1314 = -2.7999999999999997e-11*t1127;
  t2313 = t1911*t1742*t1753;
  t2349 = -1.*t1742*t1772*t1918;
  t2355 = t2313 + t2349;
  t2826 = 4.e-6*t1127;
  t1465 = -7.e-6*t1127;
  t1432 = t1314 + t1427;
  t1446 = t1432*t1445;
  t1468 = -4.e-6*t1427;
  t1666 = t1465 + t1468;
  t2175 = t1666*t2098;
  t2196 = -1.000000000016*t1127;
  t2265 = 1. + t2196;
  t2502 = t2265*t2355;
  t2577 = t1446 + t2175 + t2502;
  t2714 = -1.000000000049*t1127;
  t2719 = 1. + t2714;
  t2814 = t2719*t1445;
  t2848 = -7.e-6*t1427;
  t2895 = t2826 + t2848;
  t2950 = t2895*t2098;
  t2958 = -1.*t1427;
  t3050 = t1314 + t2958;
  t3063 = t3050*t2355;
  t3164 = t2814 + t2950 + t3063;
  t2587 = 4.e-6*t452;
  t3240 = 7.e-6*t1427;
  t3249 = t2826 + t3240;
  t3253 = t3249*t1445;
  t3264 = -6.5e-11*t1127;
  t3304 = 1. + t3264;
  t3320 = t3304*t2098;
  t3344 = 4.e-6*t1427;
  t3345 = t1465 + t3344;
  t3411 = t3345*t2355;
  t3446 = t3253 + t3320 + t3411;
  t3460 = -2.7999999999999997e-11*t452;
  t461 = -7.e-6*t452;
  t792 = 4.e-6*t573;
  t886 = t461 + t792;
  t3640 = Sin(var1[3]);
  t3656 = Cos(var1[3]);
  t3655 = t1753*t3640*t1445;
  t3660 = t3656*t1918;
  t3662 = t3655 + t3660;
  t3670 = t3656*t1753;
  t3674 = -1.*t3640*t1445*t1918;
  t3679 = t3670 + t3674;
  t2603 = 7.e-6*t573;
  t2689 = t2587 + t2603;
  t3668 = -1.*t1772*t3662;
  t3681 = t1911*t3679;
  t3687 = t3668 + t3681;
  t3694 = t1911*t3662;
  t3698 = t1772*t3679;
  t3699 = t3694 + t3698;
  t3217 = -6.5e-11*t452;
  t3234 = 1. + t3217;
  t3466 = -1.*t573;
  t3477 = t3460 + t3466;
  t3649 = -1.*t1742*t1432*t3640;
  t3693 = t1666*t3687;
  t3700 = t2265*t3699;
  t3703 = t3649 + t3693 + t3700;
  t3508 = -1.000000000049*t452;
  t3510 = 1. + t3508;
  t3714 = -1.*t2719*t1742*t3640;
  t3717 = t2895*t3687;
  t3720 = t3050*t3699;
  t3721 = t3714 + t3717 + t3720;
  t3528 = -7.e-6*t573;
  t3535 = t2587 + t3528;
  t3730 = -1.*t1742*t3249*t3640;
  t3733 = t3304*t3687;
  t3736 = t3345*t3699;
  t3749 = t3730 + t3733 + t3736;
  t3564 = -1.000000000016*t452;
  t3570 = 1. + t3564;
  t3606 = t3460 + t573;
  t3608 = -4.e-6*t573;
  t3614 = t461 + t3608;
  t3824 = -1.*t3656*t1753*t1445;
  t3826 = t3640*t1918;
  t3828 = t3824 + t3826;
  t3835 = t1753*t3640;
  t3838 = t3656*t1445*t1918;
  t3846 = t3835 + t3838;
  t3830 = -1.*t1772*t3828;
  t3851 = t1911*t3846;
  t3861 = t3830 + t3851;
  t3870 = t1911*t3828;
  t3873 = t1772*t3846;
  t3875 = t3870 + t3873;
  t3817 = t3656*t1742*t1432;
  t3869 = t1666*t3861;
  t3877 = t2265*t3875;
  t3879 = t3817 + t3869 + t3877;
  t3881 = t2719*t3656*t1742;
  t3882 = t2895*t3861;
  t3884 = t3050*t3875;
  t3891 = t3881 + t3882 + t3884;
  t3895 = t3656*t1742*t3249;
  t3896 = t3304*t3861;
  t3897 = t3345*t3875;
  t3898 = t3895 + t3896 + t3897;
  p_output1[0]=-1.*t2689*t3164 - 1.*t3234*t3446 - 4.e-6*(t2577*t3477 + t3164*t3510 + t3446*t3535) + 7.e-6*(t2577*t3570 + t3164*t3606 + t3446*t3614) - 1.*t2577*t886;
  p_output1[1]=-1.*t2689*t3721 - 1.*t3234*t3749 - 4.e-6*(t3477*t3703 + t3510*t3721 + t3535*t3749) + 7.e-6*(t3570*t3703 + t3606*t3721 + t3614*t3749) - 1.*t3703*t886;
  p_output1[2]=-1.*t2689*t3891 - 1.*t3234*t3898 - 4.e-6*(t3477*t3879 + t3510*t3891 + t3535*t3898) + 7.e-6*(t3570*t3879 + t3606*t3891 + t3614*t3898) - 1.*t3879*t886;
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

#include "Joint_rr_knee_pitch_axis.hh"

namespace SymFunction
{

void Joint_rr_knee_pitch_axis_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
