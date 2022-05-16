/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:41:51 GMT+02:00
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
  double t1592;
  double t1609;
  double t1641;
  double t1950;
  double t2179;
  double t2669;
  double t1562;
  double t2717;
  double t72;
  double t982;
  double t3884;
  double t3927;
  double t4022;
  double t4102;
  double t4232;
  double t4266;
  double t4307;
  double t4327;
  double t4469;
  double t4524;
  double t4532;
  double t4541;
  double t2684;
  double t2691;
  double t1646;
  double t2620;
  double t3885;
  double t3900;
  double t4241;
  double t4258;
  double t5799;
  double t6989;
  double t7981;
  double t10511;
  double t8607;
  double t9497;
  double t10094;
  double t10207;
  double t10212;
  double t10359;
  double t10375;
  double t10395;
  double t10431;
  double t10447;
  double t10460;
  double t10726;
  double t10742;
  double t10764;
  double t10793;
  double t10811;
  double t10879;
  double t10891;
  double t10897;
  double t10918;
  double t12905;
  double t12945;
  double t12947;
  double t13047;
  double t13050;
  double t13049;
  double t13059;
  double t13060;
  double t13082;
  double t13094;
  double t13097;
  double t13175;
  double t13190;
  double t13202;
  double t13212;
  double t13213;
  double t13215;
  double t13217;
  double t13226;
  double t13227;
  double t14754;
  double t14756;
  double t14759;
  double t14774;
  double t14776;
  double t14778;
  double t14782;
  double t14798;
  double t14801;
  double t14831;
  double t14834;
  double t14835;
  double t14841;
  double t14858;
  double t14863;
  double t14890;
  double t14896;
  double t14945;
  double t10513;
  double t10520;
  double t10557;
  double t15181;
  double t15191;
  double t15195;
  double t15247;
  double t15252;
  double t14955;
  double t15990;
  double t15993;
  double t16005;
  double t17394;
  double t17810;
  double t18007;
  double t18584;
  double t18634;
  double t18779;
  double t20287;
  double t20288;
  double t20394;
  double t22612;
  double t22613;
  double t22614;
  double t22616;
  double t22626;
  double t22630;
  double t22644;
  double t22648;
  double t22654;
  double t22676;
  double t22679;
  double t22685;
  double t22694;
  double t22704;
  double t22706;
  double t22729;
  double t22739;
  double t22740;
  double t22744;
  double t22745;
  double t22713;
  double t22763;
  double t22764;
  double t22765;
  double t22767;
  double t22769;
  double t22771;
  double t22773;
  double t22775;
  double t22783;
  double t22785;
  double t22786;
  t1592 = Cos(var1[9]);
  t1609 = -1.*t1592;
  t1641 = 1. + t1609;
  t1950 = Sin(var1[9]);
  t2179 = 0.15121*t1950;
  t2669 = Sin(var1[4]);
  t1562 = Cos(var1[5]);
  t2717 = Sin(var1[5]);
  t72 = Cos(var1[4]);
  t982 = Sin(var1[10]);
  t3884 = Cos(var1[10]);
  t3927 = -1.*t1592*t1562*t2669;
  t4022 = t1950*t2669*t2717;
  t4102 = t3927 + t4022;
  t4232 = Cos(var1[11]);
  t4266 = t72*t982;
  t4307 = t3884*t4102;
  t4327 = t4266 + t4307;
  t4469 = Sin(var1[11]);
  t4524 = t3884*t72;
  t4532 = -1.*t982*t4102;
  t4541 = t4524 + t4532;
  t2684 = 0.15121*t1641;
  t2691 = t2684 + t2179;
  t1646 = -0.15121*t1641;
  t2620 = t1646 + t2179;
  t3885 = -1.*t3884;
  t3900 = 1. + t3885;
  t4241 = -1.*t4232;
  t4258 = 1. + t4241;
  t5799 = -1.*t72*t1562*t1950;
  t6989 = -1.*t1592*t72*t2717;
  t7981 = t5799 + t6989;
  t10511 = 0.15121*t1592;
  t8607 = -0.28121*t3900*t7981;
  t9497 = -0.50321*t3884*t4258*t7981;
  t10094 = 0.50321*t982*t4469*t7981;
  t10207 = -1.*t1592*t72*t1562;
  t10212 = t72*t1950*t2717;
  t10359 = t10207 + t10212;
  t10375 = 0.15121*t10359;
  t10395 = t3884*t4232*t7981;
  t10431 = t982*t4469*t7981;
  t10447 = t10395 + t10431;
  t10460 = -0.23321*t10447;
  t10726 = t1592*t72*t1562;
  t10742 = -1.*t72*t1950*t2717;
  t10764 = t10726 + t10742;
  t10793 = -1.*t982*t2669;
  t10811 = -1.*t3884*t10764;
  t10879 = t10793 + t10811;
  t10891 = t3884*t2669;
  t10897 = -1.*t982*t10764;
  t10918 = t10891 + t10897;
  t12905 = t982*t2669;
  t12945 = t3884*t10764;
  t12947 = t12905 + t12945;
  t13047 = Cos(var1[3]);
  t13050 = Sin(var1[3]);
  t13049 = t13047*t1562*t2669;
  t13059 = -1.*t13050*t2717;
  t13060 = t13049 + t13059;
  t13082 = -1.*t1562*t13050;
  t13094 = -1.*t13047*t2669*t2717;
  t13097 = t13082 + t13094;
  t13175 = t1592*t13060;
  t13190 = t1950*t13097;
  t13202 = t13175 + t13190;
  t13212 = -1.*t13047*t72*t982;
  t13213 = t3884*t13202;
  t13215 = t13212 + t13213;
  t13217 = -1.*t3884*t13047*t72;
  t13226 = -1.*t982*t13202;
  t13227 = t13217 + t13226;
  t14754 = t1592*t72*t1562*t13050;
  t14756 = -1.*t72*t1950*t13050*t2717;
  t14759 = t14754 + t14756;
  t14774 = t982*t13050*t2669;
  t14776 = t3884*t14759;
  t14778 = t14774 + t14776;
  t14782 = t3884*t13050*t2669;
  t14798 = -1.*t982*t14759;
  t14801 = t14782 + t14798;
  t14831 = -1.*t1562*t13050*t2669;
  t14834 = -1.*t13047*t2717;
  t14835 = t14831 + t14834;
  t14841 = t13047*t1562;
  t14858 = -1.*t13050*t2669*t2717;
  t14863 = t14841 + t14858;
  t14890 = t1950*t14835;
  t14896 = t1592*t14863;
  t14945 = t14890 + t14896;
  t10513 = -0.15121*t1950;
  t10520 = t10511 + t10513;
  t10557 = t10511 + t2179;
  t15181 = t1562*t13050*t2669;
  t15191 = t13047*t2717;
  t15195 = t15181 + t15191;
  t15247 = -1.*t1950*t15195;
  t15252 = t15247 + t14896;
  t14955 = -1.*t1950*t14863;
  t15990 = t1592*t15195;
  t15993 = t1950*t14863;
  t16005 = t15990 + t15993;
  t17394 = t72*t982*t13050;
  t17810 = -1.*t3884*t16005;
  t18007 = t17394 + t17810;
  t18584 = -1.*t3884*t72*t13050;
  t18634 = -1.*t982*t16005;
  t18779 = t18584 + t18634;
  t20287 = -1.*t72*t982*t13050;
  t20288 = t3884*t16005;
  t20394 = t20287 + t20288;
  t22612 = -1.*t1592*t13047*t72*t1562;
  t22613 = t13047*t72*t1950*t2717;
  t22614 = t22612 + t22613;
  t22616 = -1.*t13047*t982*t2669;
  t22626 = t3884*t22614;
  t22630 = t22616 + t22626;
  t22644 = -1.*t3884*t13047*t2669;
  t22648 = -1.*t982*t22614;
  t22654 = t22644 + t22648;
  t22676 = t1562*t13050;
  t22679 = t13047*t2669*t2717;
  t22685 = t22676 + t22679;
  t22694 = t1950*t13060;
  t22704 = t1592*t22685;
  t22706 = t22694 + t22704;
  t22729 = -1.*t13047*t1562*t2669;
  t22739 = t13050*t2717;
  t22740 = t22729 + t22739;
  t22744 = -1.*t1950*t22740;
  t22745 = t22744 + t22704;
  t22713 = -1.*t1950*t22685;
  t22763 = t1592*t22740;
  t22764 = t1950*t22685;
  t22765 = t22763 + t22764;
  t22767 = -1.*t3884*t22765;
  t22769 = t13212 + t22767;
  t22771 = t3884*t13047*t72;
  t22773 = -1.*t982*t22765;
  t22775 = t22771 + t22773;
  t22783 = t13047*t72*t982;
  t22785 = t3884*t22765;
  t22786 = t22783 + t22785;
  p_output1[0]=1.;
  p_output1[1]=-1.*t1562*t2620*t2669 + t2669*t2691*t2717 + 0.15121*(t1562*t1950*t2669 + t1592*t2669*t2717) - 0.28121*t3900*t4102 - 0.50321*t4258*t4327 - 0.50321*t4469*t4541 - 0.23321*(t4232*t4327 - 1.*t4469*t4541) + 0.28121*t72*t982;
  p_output1[2]=t10094 + t10375 + t10460 - 1.*t1562*t2691*t72 - 1.*t2620*t2717*t72 + t8607 + t9497;
  p_output1[3]=t10094 + t10375 + t10460 + t10520*t1562*t72 - 1.*t10557*t2717*t72 + t8607 + t9497;
  p_output1[4]=0.28121*t2669*t3884 - 0.50321*t10918*t4258 - 0.50321*t10879*t4469 - 0.23321*(t10918*t4232 - 1.*t10879*t4469) - 0.28121*t10764*t982;
  p_output1[5]=-0.50321*t10918*t4232 - 0.50321*t12947*t4469 - 0.23321*(-1.*t10918*t4232 - 1.*t12947*t4469);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=0.15121*(t13097*t1592 - 1.*t13060*t1950) + t13060*t2620 + t13097*t2691 - 0.28121*t13202*t3900 - 0.50321*t13215*t4258 - 0.50321*t13227*t4469 - 0.23321*(t13215*t4232 - 1.*t13227*t4469) - 0.28121*t13047*t72*t982;
  p_output1[9]=-0.28121*t14759*t3900 - 0.50321*t14778*t4258 - 0.50321*t14801*t4469 - 0.23321*(t14778*t4232 - 1.*t14801*t4469) + t13050*t1562*t2620*t72 - 1.*t13050*t2691*t2717*t72 + 0.15121*(-1.*t13050*t1562*t1950*t72 - 1.*t13050*t1592*t2717*t72) + 0.28121*t13050*t2669*t982;
  p_output1[10]=0.15121*(t14955 + t14835*t1592) + t14863*t2620 + t14835*t2691 - 0.28121*t14945*t3900 - 0.50321*t14945*t3884*t4258 + 0.50321*t14945*t4469*t982 - 0.23321*(t14945*t3884*t4232 + t14945*t4469*t982);
  p_output1[11]=t10557*t14863 + t10520*t15195 + 0.15121*(t14955 - 1.*t15195*t1592) - 0.28121*t15252*t3900 - 0.50321*t15252*t3884*t4258 + 0.50321*t15252*t4469*t982 - 0.23321*(t15252*t3884*t4232 + t15252*t4469*t982);
  p_output1[12]=-0.50321*t18779*t4258 - 0.50321*t18007*t4469 - 0.23321*(t18779*t4232 - 1.*t18007*t4469) - 0.28121*t13050*t3884*t72 - 0.28121*t16005*t982;
  p_output1[13]=-0.50321*t18779*t4232 - 0.50321*t20394*t4469 - 0.23321*(-1.*t18779*t4232 - 1.*t20394*t4469);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=0.15121*t15252 + t15195*t2620 + t14863*t2691 - 0.28121*t16005*t3900 - 0.50321*t20394*t4258 - 0.50321*t18779*t4469 - 0.23321*(t20394*t4232 - 1.*t18779*t4469) - 0.28121*t13050*t72*t982;
  p_output1[17]=-0.28121*t22614*t3900 - 0.50321*t22630*t4258 - 0.50321*t22654*t4469 - 0.23321*(t22630*t4232 - 1.*t22654*t4469) - 1.*t13047*t1562*t2620*t72 + t13047*t2691*t2717*t72 + 0.15121*(t13047*t1562*t1950*t72 + t13047*t1592*t2717*t72) - 0.28121*t13047*t2669*t982;
  p_output1[18]=0.15121*(t13175 + t22713) + t22685*t2620 + t13060*t2691 - 0.28121*t22706*t3900 - 0.50321*t22706*t3884*t4258 + 0.50321*t22706*t4469*t982 - 0.23321*(t22706*t3884*t4232 + t22706*t4469*t982);
  p_output1[19]=t10557*t22685 + t10520*t22740 + 0.15121*(t22713 - 1.*t1592*t22740) - 0.28121*t22745*t3900 - 0.50321*t22745*t3884*t4258 + 0.50321*t22745*t4469*t982 - 0.23321*(t22745*t3884*t4232 + t22745*t4469*t982);
  p_output1[20]=-0.50321*t22775*t4258 - 0.50321*t22769*t4469 - 0.23321*(t22775*t4232 - 1.*t22769*t4469) + 0.28121*t13047*t3884*t72 - 0.28121*t22765*t982;
  p_output1[21]=-0.50321*t22775*t4232 - 0.50321*t22786*t4469 - 0.23321*(-1.*t22775*t4232 - 1.*t22786*t4469);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
