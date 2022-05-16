/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 15:42:25 GMT+02:00
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
  double t6771;
  double t6773;
  double t6774;
  double t6851;
  double t6865;
  double t6867;
  double t6767;
  double t6977;
  double t6678;
  double t6735;
  double t7473;
  double t8074;
  double t8080;
  double t8094;
  double t8112;
  double t8451;
  double t8458;
  double t8530;
  double t8557;
  double t8570;
  double t8602;
  double t8665;
  double t8731;
  double t8801;
  double t8834;
  double t8842;
  double t8845;
  double t10094;
  double t10152;
  double t10207;
  double t10212;
  double t10268;
  double t10291;
  double t10296;
  double t10300;
  double t10395;
  double t10447;
  double t10460;
  double t10468;
  double t10481;
  double t6880;
  double t6974;
  double t6823;
  double t6866;
  double t7892;
  double t8038;
  double t8123;
  double t8264;
  double t10592;
  double t10597;
  double t10640;
  double t8881;
  double t8883;
  double t9767;
  double t9778;
  double t10095;
  double t10145;
  double t10293;
  double t10295;
  double t10811;
  double t10846;
  double t10847;
  double t10851;
  double t10852;
  double t10855;
  double t10861;
  double t10870;
  double t10871;
  double t10891;
  double t10897;
  double t10916;
  double t10982;
  double t10983;
  double t11560;
  double t11584;
  double t11606;
  double t11978;
  double t12009;
  double t12026;
  double t12143;
  double t12225;
  double t12472;
  double t13049;
  double t13051;
  double t13059;
  double t13226;
  double t10652;
  double t10654;
  double t10667;
  double t10668;
  double t10669;
  double t10686;
  double t10726;
  double t10742;
  double t10770;
  double t10772;
  double t10778;
  double t14798;
  double t14801;
  double t14831;
  double t14835;
  double t14841;
  double t14858;
  double t14896;
  double t14945;
  double t15074;
  double t15445;
  double t15487;
  double t15505;
  double t15993;
  double t16705;
  double t16055;
  double t16707;
  double t16737;
  double t17210;
  double t17314;
  double t17389;
  double t17886;
  double t17907;
  double t17912;
  double t17931;
  double t17977;
  double t17986;
  double t18130;
  double t18243;
  double t18354;
  double t18634;
  double t18672;
  double t18754;
  double t18795;
  double t18806;
  double t18874;
  double t19496;
  double t20105;
  double t20110;
  double t20699;
  double t20713;
  double t20714;
  double t20717;
  double t20728;
  double t20741;
  double t20745;
  double t20747;
  double t20757;
  double t21675;
  double t21685;
  double t21836;
  double t22065;
  double t22068;
  double t22069;
  double t22159;
  double t22197;
  double t22322;
  double t22516;
  double t22523;
  double t22534;
  double t22568;
  double t22569;
  double t22613;
  double t22616;
  double t22626;
  double t22648;
  double t22773;
  double t22775;
  double t22783;
  double t11015;
  double t11016;
  double t11303;
  double t11324;
  double t23453;
  double t23471;
  double t23556;
  double t23637;
  double t23688;
  double t22812;
  double t24085;
  double t24090;
  double t24092;
  double t24217;
  double t24218;
  double t24219;
  double t24240;
  double t24261;
  double t24330;
  double t24350;
  double t24351;
  double t24353;
  double t13293;
  double t14754;
  double t14774;
  double t24397;
  double t24412;
  double t22729;
  double t24617;
  double t24619;
  double t24620;
  double t24624;
  double t24625;
  double t24628;
  double t24851;
  double t24901;
  double t24930;
  double t25127;
  double t25131;
  double t25158;
  t6771 = Cos(var1[12]);
  t6773 = -1.*t6771;
  t6774 = 1. + t6773;
  t6851 = Sin(var1[12]);
  t6865 = -0.15121*t6851;
  t6867 = Sin(var1[4]);
  t6767 = Cos(var1[5]);
  t6977 = Sin(var1[5]);
  t6678 = Cos(var1[4]);
  t6735 = Sin(var1[13]);
  t7473 = Cos(var1[13]);
  t8074 = -1.*t6771*t6767*t6867;
  t8080 = t6851*t6867*t6977;
  t8094 = t8074 + t8080;
  t8112 = Cos(var1[14]);
  t8451 = -1.*t6678*t6735;
  t8458 = t7473*t8094;
  t8530 = t8451 + t8458;
  t8557 = Sin(var1[14]);
  t8570 = t7473*t6678;
  t8602 = t6735*t8094;
  t8665 = t8570 + t8602;
  t8731 = Cos(var1[6]);
  t8801 = -1.*t8731;
  t8834 = 1. + t8801;
  t8842 = 0.15121*t8834;
  t8845 = Sin(var1[6]);
  t10094 = Cos(var1[7]);
  t10152 = -1.*t6767*t8731*t6867;
  t10207 = t6867*t6977*t8845;
  t10212 = t10152 + t10207;
  t10268 = Sin(var1[7]);
  t10291 = Cos(var1[8]);
  t10296 = t10094*t10212;
  t10300 = -1.*t6678*t10268;
  t10395 = t10296 + t10300;
  t10447 = t6678*t10094;
  t10460 = t10212*t10268;
  t10468 = t10447 + t10460;
  t10481 = Sin(var1[8]);
  t6880 = -0.15121*t6774;
  t6974 = t6880 + t6865;
  t6823 = 0.15121*t6774;
  t6866 = t6823 + t6865;
  t7892 = -1.*t7473;
  t8038 = 1. + t7892;
  t8123 = -1.*t8112;
  t8264 = 1. + t8123;
  t10592 = -1.*t6678*t6767*t6851;
  t10597 = -1.*t6771*t6678*t6977;
  t10640 = t10592 + t10597;
  t8881 = -0.15121*t8845;
  t8883 = t8842 + t8881;
  t9767 = 0.15121*t8845;
  t9778 = t8842 + t9767;
  t10095 = -1.*t10094;
  t10145 = 1. + t10095;
  t10293 = -1.*t10291;
  t10295 = 1. + t10293;
  t10811 = -1.*t6678*t8731*t6977;
  t10846 = -1.*t6678*t6767*t8845;
  t10847 = t10811 + t10846;
  t10851 = 0.28121*t10145*t10847;
  t10852 = 0.50321*t10094*t10295*t10847;
  t10855 = -1.*t6678*t6767*t8731;
  t10861 = t6678*t6977*t8845;
  t10870 = t10855 + t10861;
  t10871 = 0.15121*t10870;
  t10891 = -0.50321*t10847*t10268*t10481;
  t10897 = t10094*t10291*t10847;
  t10916 = t10847*t10268*t10481;
  t10982 = t10897 + t10916;
  t10983 = 0.23321*t10982;
  t11560 = t6678*t6767*t8731;
  t11584 = -1.*t6678*t6977*t8845;
  t11606 = t11560 + t11584;
  t11978 = -1.*t10094*t6867;
  t12009 = -1.*t11606*t10268;
  t12026 = t11978 + t12009;
  t12143 = t10094*t11606;
  t12225 = -1.*t6867*t10268;
  t12472 = t12143 + t12225;
  t13049 = t10094*t6867;
  t13051 = t11606*t10268;
  t13059 = t13049 + t13051;
  t13226 = -0.15121*t6771;
  t10652 = -0.28121*t8038*t10640;
  t10654 = -0.50321*t7473*t8264*t10640;
  t10667 = 0.50321*t6735*t8557*t10640;
  t10668 = -1.*t6771*t6678*t6767;
  t10669 = t6678*t6851*t6977;
  t10686 = t10668 + t10669;
  t10726 = 0.15121*t10686;
  t10742 = t7473*t8112*t10640;
  t10770 = t6735*t8557*t10640;
  t10772 = t10742 + t10770;
  t10778 = -0.23321*t10772;
  t14798 = t6771*t6678*t6767;
  t14801 = -1.*t6678*t6851*t6977;
  t14831 = t14798 + t14801;
  t14835 = -1.*t6735*t6867;
  t14841 = t7473*t14831;
  t14858 = t14835 + t14841;
  t14896 = -1.*t7473*t6867;
  t14945 = -1.*t6735*t14831;
  t15074 = t14896 + t14945;
  t15445 = t7473*t6867;
  t15487 = t6735*t14831;
  t15505 = t15445 + t15487;
  t15993 = Cos(var1[3]);
  t16705 = Sin(var1[3]);
  t16055 = t15993*t6767*t6867;
  t16707 = -1.*t16705*t6977;
  t16737 = t16055 + t16707;
  t17210 = -1.*t6767*t16705;
  t17314 = -1.*t15993*t6867*t6977;
  t17389 = t17210 + t17314;
  t17886 = t6771*t16737;
  t17907 = t6851*t17389;
  t17912 = t17886 + t17907;
  t17931 = t15993*t6678*t6735;
  t17977 = t7473*t17912;
  t17986 = t17931 + t17977;
  t18130 = -1.*t7473*t15993*t6678;
  t18243 = t6735*t17912;
  t18354 = t18130 + t18243;
  t18634 = t8731*t16737;
  t18672 = t17389*t8845;
  t18754 = t18634 + t18672;
  t18795 = t10094*t18754;
  t18806 = t15993*t6678*t10268;
  t18874 = t18795 + t18806;
  t19496 = -1.*t15993*t6678*t10094;
  t20105 = t18754*t10268;
  t20110 = t19496 + t20105;
  t20699 = t6771*t6678*t6767*t16705;
  t20713 = -1.*t6678*t6851*t16705*t6977;
  t20714 = t20699 + t20713;
  t20717 = -1.*t6735*t16705*t6867;
  t20728 = t7473*t20714;
  t20741 = t20717 + t20728;
  t20745 = t7473*t16705*t6867;
  t20747 = t6735*t20714;
  t20757 = t20745 + t20747;
  t21675 = t6678*t6767*t8731*t16705;
  t21685 = -1.*t6678*t16705*t6977*t8845;
  t21836 = t21675 + t21685;
  t22065 = t10094*t21836;
  t22068 = -1.*t16705*t6867*t10268;
  t22069 = t22065 + t22068;
  t22159 = t10094*t16705*t6867;
  t22197 = t21836*t10268;
  t22322 = t22159 + t22197;
  t22516 = -1.*t6767*t16705*t6867;
  t22523 = -1.*t15993*t6977;
  t22534 = t22516 + t22523;
  t22568 = t15993*t6767;
  t22569 = -1.*t16705*t6867*t6977;
  t22613 = t22568 + t22569;
  t22616 = t6851*t22534;
  t22626 = t6771*t22613;
  t22648 = t22616 + t22626;
  t22773 = t8731*t22613;
  t22775 = t22534*t8845;
  t22783 = t22773 + t22775;
  t11015 = -0.15121*t8731;
  t11016 = t11015 + t9767;
  t11303 = 0.15121*t8731;
  t11324 = t11303 + t9767;
  t23453 = t6767*t16705*t6867;
  t23471 = t15993*t6977;
  t23556 = t23453 + t23471;
  t23637 = -1.*t23556*t8845;
  t23688 = t22773 + t23637;
  t22812 = -1.*t22613*t8845;
  t24085 = t8731*t23556;
  t24090 = t22613*t8845;
  t24092 = t24085 + t24090;
  t24217 = t6678*t10094*t16705;
  t24218 = -1.*t24092*t10268;
  t24219 = t24217 + t24218;
  t24240 = t10094*t24092;
  t24261 = t6678*t16705*t10268;
  t24330 = t24240 + t24261;
  t24350 = -1.*t6678*t10094*t16705;
  t24351 = t24092*t10268;
  t24353 = t24350 + t24351;
  t13293 = 0.15121*t6851;
  t14754 = t13226 + t13293;
  t14774 = t13226 + t6865;
  t24397 = -1.*t6851*t23556;
  t24412 = t24397 + t22626;
  t22729 = -1.*t6851*t22613;
  t24617 = t6771*t23556;
  t24619 = t6851*t22613;
  t24620 = t24617 + t24619;
  t24624 = t6678*t6735*t16705;
  t24625 = t7473*t24620;
  t24628 = t24624 + t24625;
  t24851 = t7473*t6678*t16705;
  t24901 = -1.*t6735*t24620;
  t24930 = t24851 + t24901;
  t25127 = -1.*t7473*t6678*t16705;
  t25131 = t6735*t24620;
  t25158 = t25127 + t25131;
  p_output1[0]=0.28121*t10145*t10212 + 0.50321*t10295*t10395 - 0.50321*t10468*t10481 + 0.23321*(t10291*t10395 + t10468*t10481) + 0.28121*t10268*t6678 - 0.28121*t6678*t6735 + t6767*t6866*t6867 - 1.*t6867*t6974*t6977 + 0.15121*(t6767*t6851*t6867 + t6771*t6867*t6977) - 0.28121*t8038*t8094 - 0.50321*t8264*t8530 + 0.50321*t8557*t8665 - 0.23321*(t8112*t8530 + t8557*t8665) + 0.15121*(t6867*t6977*t8731 + t6767*t6867*t8845) + t6867*t6977*t8883 - 1.*t6767*t6867*t9778;
  p_output1[1]=t10652 + t10654 + t10667 + t10726 + t10778 + t10851 + t10852 + t10871 + t10891 + t10983 + t6678*t6767*t6974 + t6678*t6866*t6977 - 1.*t6678*t6767*t8883 - 1.*t6678*t6977*t9778;
  p_output1[2]=t10851 + t10852 + t10871 + t10891 + t10983 + t11324*t6678*t6767 - 1.*t11016*t6678*t6977;
  p_output1[3]=0.28121*t10268*t11606 + 0.50321*t10295*t12026 - 0.50321*t10481*t12472 + 0.23321*(t10291*t12026 + t10481*t12472) + 0.28121*t10094*t6867;
  p_output1[4]=0.50321*t10481*t12472 - 0.50321*t10291*t13059 + 0.23321*(-1.*t10481*t12472 + t10291*t13059);
  p_output1[5]=t10652 + t10654 + t10667 + t10726 + t10778 - 1.*t14754*t6678*t6767 + t14774*t6678*t6977;
  p_output1[6]=-0.28121*t14831*t6735 - 0.28121*t6867*t7473 - 0.50321*t15074*t8264 + 0.50321*t14858*t8557 - 0.23321*(t15074*t8112 + t14858*t8557);
  p_output1[7]=0.50321*t15505*t8112 - 0.50321*t14858*t8557 - 0.23321*(t15505*t8112 - 1.*t14858*t8557);
  p_output1[8]=0.28121*t10145*t18754 + 0.50321*t10295*t18874 - 0.50321*t10481*t20110 + 0.23321*(t10291*t18874 + t10481*t20110) - 0.28121*t10268*t15993*t6678 + 0.28121*t15993*t6678*t6735 + 0.15121*(t17389*t6771 - 1.*t16737*t6851) - 1.*t16737*t6866 - 1.*t17389*t6974 - 0.28121*t17912*t8038 - 0.50321*t17986*t8264 + 0.50321*t18354*t8557 - 0.23321*(t17986*t8112 + t18354*t8557) + 0.15121*(t17389*t8731 - 1.*t16737*t8845) + t17389*t8883 + t16737*t9778;
  p_output1[9]=0.28121*t10145*t21836 + 0.50321*t10295*t22069 - 0.50321*t10481*t22322 + 0.23321*(t10291*t22069 + t10481*t22322) - 1.*t16705*t6678*t6767*t6866 + 0.28121*t10268*t16705*t6867 - 0.28121*t16705*t6735*t6867 + t16705*t6678*t6974*t6977 + 0.15121*(-1.*t16705*t6678*t6767*t6851 - 1.*t16705*t6678*t6771*t6977) - 0.28121*t20714*t8038 - 0.50321*t20741*t8264 + 0.50321*t20757*t8557 - 0.23321*(t20741*t8112 + t20757*t8557) + 0.15121*(-1.*t16705*t6678*t6977*t8731 - 1.*t16705*t6678*t6767*t8845) - 1.*t16705*t6678*t6977*t8883 + t16705*t6678*t6767*t9778;
  p_output1[10]=0.28121*t10145*t22783 + 0.50321*t10094*t10295*t22783 - 0.50321*t10268*t10481*t22783 + 0.23321*(t10094*t10291*t22783 + t10268*t10481*t22783) + 0.15121*(t22729 + t22534*t6771) - 1.*t22613*t6866 - 1.*t22534*t6974 - 0.28121*t22648*t8038 - 0.50321*t22648*t7473*t8264 + 0.50321*t22648*t6735*t8557 - 0.23321*(t22648*t7473*t8112 + t22648*t6735*t8557) + 0.15121*(t22812 + t22534*t8731) + t22534*t8883 + t22613*t9778;
  p_output1[11]=t11016*t22613 + t11324*t23556 + 0.28121*t10145*t23688 + 0.50321*t10094*t10295*t23688 - 0.50321*t10268*t10481*t23688 + 0.23321*(t10094*t10291*t23688 + t10268*t10481*t23688) + 0.15121*(t22812 - 1.*t23556*t8731);
  p_output1[12]=0.28121*t10268*t24092 + 0.50321*t10295*t24219 - 0.50321*t10481*t24330 + 0.23321*(t10291*t24219 + t10481*t24330) - 0.28121*t10094*t16705*t6678;
  p_output1[13]=0.50321*t10481*t24330 - 0.50321*t10291*t24353 + 0.23321*(-1.*t10481*t24330 + t10291*t24353);
  p_output1[14]=-1.*t14774*t22613 - 1.*t14754*t23556 + 0.15121*(t22729 - 1.*t23556*t6771) - 0.28121*t24412*t8038 - 0.50321*t24412*t7473*t8264 + 0.50321*t24412*t6735*t8557 - 0.23321*(t24412*t7473*t8112 + t24412*t6735*t8557);
  p_output1[15]=-0.28121*t24620*t6735 + 0.28121*t16705*t6678*t7473 - 0.50321*t24930*t8264 + 0.50321*t24628*t8557 - 0.23321*(t24930*t8112 + t24628*t8557);
  p_output1[16]=0.50321*t25158*t8112 - 0.50321*t24628*t8557 - 0.23321*(t25158*t8112 - 1.*t24628*t8557);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_step_distance_front_DiagonalStance.hh"

namespace DiagonalStance
{

void J_step_distance_front_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
