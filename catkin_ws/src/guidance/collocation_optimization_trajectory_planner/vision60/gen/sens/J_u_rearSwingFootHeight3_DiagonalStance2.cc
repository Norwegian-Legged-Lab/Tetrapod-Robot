/*
 * Automatically Generated from Mathematica.
 * Wed 6 Apr 2022 13:11:21 GMT+02:00
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
  double t6700;
  double t10749;
  double t10743;
  double t10747;
  double t10922;
  double t6623;
  double t6644;
  double t11012;
  double t11044;
  double t11045;
  double t11536;
  double t11738;
  double t10748;
  double t10990;
  double t11003;
  double t6708;
  double t11740;
  double t11744;
  double t11749;
  double t11812;
  double t11813;
  double t11814;
  double t11876;
  double t11897;
  double t11903;
  double t12194;
  double t12228;
  double t6711;
  double t10738;
  double t11013;
  double t11036;
  double t12590;
  double t12591;
  double t12592;
  double t11898;
  double t11899;
  double t14325;
  double t14329;
  double t14360;
  double t14381;
  double t14382;
  double t14388;
  double t14548;
  double t14553;
  double t14613;
  double t14639;
  double t14640;
  double t14647;
  double t14652;
  double t14654;
  double t14658;
  double t14676;
  double t15746;
  double t15751;
  double t15861;
  double t15868;
  double t15872;
  double t15943;
  double t15944;
  double t15949;
  double t16410;
  double t16411;
  double t16414;
  double t16427;
  double t16434;
  double t16734;
  double t16783;
  double t16785;
  double t16805;
  double t17026;
  double t17028;
  double t17035;
  t6700 = Sin(var1[3]);
  t10749 = Cos(var1[3]);
  t10743 = Cos(var1[5]);
  t10747 = Sin(var1[4]);
  t10922 = Sin(var1[5]);
  t6623 = Cos(var1[4]);
  t6644 = Sin(var1[9]);
  t11012 = Cos(var1[9]);
  t11044 = t10749*t10743;
  t11045 = -1.*t6700*t10747*t10922;
  t11536 = t11044 + t11045;
  t11738 = Sin(var1[10]);
  t10748 = t10743*t6700*t10747;
  t10990 = t10749*t10922;
  t11003 = t10748 + t10990;
  t6708 = Cos(var1[10]);
  t11740 = -1.*t11012*t6623*t6700;
  t11744 = -1.*t6644*t11536;
  t11749 = t11740 + t11744;
  t11812 = Sin(var1[11]);
  t11813 = -1.*t11738*t11003;
  t11814 = t6708*t11749;
  t11876 = t11813 + t11814;
  t11897 = Cos(var1[11]);
  t11903 = t6708*t11003;
  t12194 = t11738*t11749;
  t12228 = t11903 + t12194;
  t6711 = -1.*t6708;
  t10738 = 1. + t6711;
  t11013 = -1.*t11012;
  t11036 = 1. + t11013;
  t12590 = -1.*t11012*t10749*t10747;
  t12591 = -1.*t10749*t6623*t6644*t10922;
  t12592 = t12590 + t12591;
  t11898 = -1.*t11897;
  t11899 = 1. + t11898;
  t14325 = t10749*t6623*t10743*t11738;
  t14329 = t6708*t12592;
  t14360 = t14325 + t14329;
  t14381 = -1.*t6708*t10749*t6623*t10743;
  t14382 = t11738*t12592;
  t14388 = t14381 + t14382;
  t14548 = t10749*t10743*t10747;
  t14553 = -1.*t6700*t10922;
  t14613 = t14548 + t14553;
  t14639 = t10743*t6700;
  t14640 = t10749*t10747*t10922;
  t14647 = t14639 + t14640;
  t14652 = -1.*t6644*t11738*t14613;
  t14654 = t6708*t14647;
  t14658 = t14652 + t14654;
  t14676 = -1.*t6708*t6644*t14613;
  t15746 = -1.*t11738*t14647;
  t15751 = t14676 + t15746;
  t15861 = -1.*t10749*t6623*t6644;
  t15868 = -1.*t11012*t14647;
  t15872 = t15861 + t15868;
  t15943 = t11012*t10749*t6623;
  t15944 = -1.*t6644*t14647;
  t15949 = t15943 + t15944;
  t16410 = -1.*t10749*t10743*t10747;
  t16411 = t6700*t10922;
  t16414 = t16410 + t16411;
  t16427 = -1.*t11738*t16414;
  t16434 = t6708*t15949;
  t16734 = t16427 + t16434;
  t16783 = -1.*t6708*t16414;
  t16785 = -1.*t11738*t15949;
  t16805 = t16783 + t16785;
  t17026 = t6708*t16414;
  t17028 = t11738*t15949;
  t17035 = t17026 + t17028;
  p_output1[0]=1.;
  p_output1[1]=-0.325*t10738*t11003 + 0.1575*t11036*t11536 + 0.325*t11738*t11749 - 0.575*t11812*t11876 - 0.575*t11899*t12228 - 0.0641*(t11876*t11897 + t11812*t12228) - 0.295*(-1.*t11812*t11876 + t11897*t12228) + 0.1575*t6623*t6644*t6700 + 0.2255*(t11012*t11536 - 1.*t6623*t6644*t6700);
  p_output1[2]=0.325*t11738*t12592 - 0.575*t11812*t14360 - 0.575*t11899*t14388 - 0.0641*(t11897*t14360 + t11812*t14388) - 0.295*(-1.*t11812*t14360 + t11897*t14388) + 0.325*t10738*t10743*t10749*t6623 + 0.1575*t10749*t10922*t11036*t6623 + 0.1575*t10747*t10749*t6644 + 0.2255*(t10749*t10922*t11012*t6623 - 1.*t10747*t10749*t6644);
  p_output1[3]=0.2255*t11012*t14613 + 0.1575*t11036*t14613 - 0.325*t10738*t14647 - 0.575*t11899*t14658 - 0.575*t11812*t15751 - 0.295*(t11897*t14658 - 1.*t11812*t15751) - 0.0641*(t11812*t14658 + t11897*t15751) - 0.325*t11738*t14613*t6644;
  p_output1[4]=0.325*t11738*t15872 - 0.575*t11738*t11899*t15872 + 0.2255*t15949 - 0.1575*t10749*t11012*t6623 + 0.1575*t14647*t6644 - 0.575*t11812*t15872*t6708 - 0.295*(t11738*t11897*t15872 - 1.*t11812*t15872*t6708) - 0.0641*(t11738*t11812*t15872 + t11897*t15872*t6708);
  p_output1[5]=-0.325*t11738*t16414 - 0.575*t11899*t16734 - 0.575*t11812*t16805 - 0.295*(t11897*t16734 - 1.*t11812*t16805) - 0.0641*(t11812*t16734 + t11897*t16805) + 0.325*t15949*t6708;
  p_output1[6]=-0.575*t11897*t16734 - 0.575*t11812*t17035 - 0.295*(-1.*t11897*t16734 - 1.*t11812*t17035) - 0.0641*(-1.*t11812*t16734 + t11897*t17035);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_rearSwingFootHeight3_DiagonalStance2.hh"

namespace SymFunction
{

void J_u_rearSwingFootHeight3_DiagonalStance2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
