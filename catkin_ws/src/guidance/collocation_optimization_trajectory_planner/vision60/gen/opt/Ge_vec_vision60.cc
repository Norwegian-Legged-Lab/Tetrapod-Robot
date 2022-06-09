/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:07 GMT+02:00
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
  double t175;
  double t1965;
  double t1945;
  double t1947;
  double t1984;
  double t29;
  double t61;
  double t2439;
  double t2893;
  double t2925;
  double t2939;
  double t1957;
  double t2179;
  double t2393;
  double t3166;
  double t3179;
  double t2400;
  double t3253;
  double t3261;
  double t244;
  double t2695;
  double t2889;
  double t2942;
  double t2955;
  double t2976;
  double t3033;
  double t3339;
  double t3351;
  double t3352;
  double t3353;
  double t3355;
  double t3176;
  double t3182;
  double t3188;
  double t3204;
  double t3217;
  double t3222;
  double t3234;
  double t3424;
  double t3559;
  double t3560;
  double t3572;
  double t3578;
  double t3260;
  double t3282;
  double t3286;
  double t3299;
  double t3302;
  double t3305;
  double t3321;
  double t3809;
  double t3936;
  double t3980;
  double t4008;
  double t4024;
  double t3340;
  double t3341;
  double t3344;
  double t3348;
  double t3358;
  double t3359;
  double t3361;
  double t3363;
  double t4152;
  double t4167;
  double t4176;
  double t4182;
  double t4208;
  double t3457;
  double t3481;
  double t3487;
  double t3558;
  double t3583;
  double t3584;
  double t3585;
  double t3592;
  double t4600;
  double t4605;
  double t4615;
  double t4620;
  double t4630;
  double t3823;
  double t3838;
  double t3858;
  double t3890;
  double t4075;
  double t4078;
  double t4091;
  double t4126;
  double t4700;
  double t4702;
  double t4713;
  double t4722;
  double t4750;
  double t3177;
  double t4922;
  double t4976;
  double t4927;
  double t4940;
  double t4961;
  double t4986;
  double t4992;
  double t5000;
  double t5017;
  double t5076;
  double t5126;
  double t5142;
  double t5148;
  double t5154;
  double t5087;
  double t5093;
  double t5104;
  double t5112;
  double t5176;
  double t5186;
  double t5197;
  double t5206;
  double t5258;
  double t5309;
  double t5318;
  double t5333;
  double t5356;
  double t5519;
  double t5617;
  double t5649;
  double t5650;
  double t5753;
  double t5767;
  double t5891;
  double t5892;
  double t5911;
  double t5794;
  double t5799;
  double t5816;
  double t5826;
  double t5827;
  double t6006;
  double t6249;
  double t6288;
  double t5851;
  double t5858;
  double t5866;
  double t5867;
  double t5868;
  double t6452;
  double t6464;
  double t6466;
  double t5888;
  double t5890;
  double t5913;
  double t4239;
  double t4282;
  double t5927;
  double t5955;
  double t5957;
  double t6694;
  double t6695;
  double t6703;
  double t5980;
  double t5985;
  double t6356;
  double t4637;
  double t4639;
  double t6417;
  double t6423;
  double t6424;
  double t6790;
  double t6796;
  double t6800;
  double t6442;
  double t6444;
  double t6470;
  double t4759;
  double t4783;
  double t6479;
  double t6495;
  double t6513;
  double t6816;
  double t6817;
  double t6818;
  double t5786;
  double t6839;
  double t6844;
  double t6846;
  double t6847;
  double t6848;
  double t6854;
  double t6855;
  double t6856;
  double t6852;
  double t6853;
  double t6857;
  double t5263;
  double t5293;
  double t6858;
  double t6859;
  double t6860;
  double t6868;
  double t6873;
  double t6875;
  double t6892;
  double t6895;
  double t6899;
  double t6908;
  double t6913;
  double t6917;
  double t6919;
  double t6954;
  double t6904;
  double t6944;
  double t6932;
  double t6977;
  double t6982;
  double t6988;
  double t6992;
  double t6996;
  double t7005;
  double t7188;
  double t7197;
  double t7222;
  double t7029;
  double t7033;
  double t7037;
  double t7040;
  double t7046;
  double t7054;
  double t7297;
  double t7305;
  double t7312;
  double t7072;
  double t7084;
  double t7087;
  double t7116;
  double t7117;
  double t7141;
  double t7437;
  double t7456;
  double t7461;
  double t6965;
  double t7519;
  double t7527;
  double t7528;
  double t7534;
  double t7543;
  double t7546;
  double t7598;
  double t7603;
  double t7606;
  double t7662;
  double t7671;
  double t7679;
  double t7684;
  double t7695;
  double t7723;
  double t7749;
  double t7768;
  double t7769;
  double t7936;
  double t7969;
  double t7975;
  double t7929;
  double t7983;
  double t7984;
  double t7985;
  double t7991;
  double t8039;
  double t8046;
  double t8060;
  double t8366;
  double t8390;
  double t8469;
  double t8602;
  double t8606;
  double t8610;
  double t8618;
  double t8647;
  double t9077;
  double t9101;
  double t9194;
  double t8852;
  double t9253;
  double t9255;
  double t9267;
  double t9271;
  double t9273;
  double t9301;
  double t9308;
  double t9333;
  double t9438;
  double t9440;
  double t9443;
  double t9766;
  double t9776;
  double t9778;
  double t9786;
  double t9789;
  double t9848;
  double t9882;
  double t9887;
  double t9801;
  double t10051;
  double t10059;
  double t10065;
  double t10089;
  double t10090;
  double t10135;
  double t10136;
  double t10153;
  double t10535;
  double t10536;
  double t10547;
  double t10836;
  double t10837;
  double t10863;
  double t10878;
  double t10932;
  double t11078;
  double t11087;
  double t11088;
  double t11025;
  double t11126;
  double t11138;
  double t11145;
  double t11146;
  double t11160;
  double t11214;
  double t11218;
  double t11222;
  double t11239;
  double t11240;
  double t11242;
  t175 = Sin(var1[3]);
  t1965 = Cos(var1[3]);
  t1945 = Cos(var1[5]);
  t1947 = Sin(var1[4]);
  t1984 = Sin(var1[5]);
  t29 = Cos(var1[4]);
  t61 = Sin(var1[9]);
  t2439 = Cos(var1[9]);
  t2893 = t1965*t1945;
  t2925 = -1.*t175*t1947*t1984;
  t2939 = t2893 + t2925;
  t1957 = t1945*t175*t1947;
  t2179 = t1965*t1984;
  t2393 = t1957 + t2179;
  t3166 = Sin(var1[12]);
  t3179 = Cos(var1[12]);
  t2400 = -0.325*t2393;
  t3253 = Sin(var1[15]);
  t3261 = Cos(var1[15]);
  t244 = 0.1575*t29*t61*t175;
  t2695 = -1.*t2439;
  t2889 = 1. + t2695;
  t2942 = 0.1575*t2889*t2939;
  t2955 = -1.*t29*t61*t175;
  t2976 = t2439*t2939;
  t3033 = t2955 + t2976;
  t3339 = Cos(var1[10]);
  t3351 = Sin(var1[10]);
  t3352 = -1.*t2439*t29*t175;
  t3353 = -1.*t61*t2939;
  t3355 = t3352 + t3353;
  t3176 = -0.1575*t29*t3166*t175;
  t3182 = -1.*t3179;
  t3188 = 1. + t3182;
  t3204 = -0.1575*t3188*t2939;
  t3217 = -1.*t29*t3166*t175;
  t3222 = t3179*t2939;
  t3234 = t3217 + t3222;
  t3424 = Cos(var1[13]);
  t3559 = Sin(var1[13]);
  t3560 = -1.*t3179*t29*t175;
  t3572 = -1.*t3166*t2939;
  t3578 = t3560 + t3572;
  t3260 = -0.1575*t29*t3253*t175;
  t3282 = -1.*t3261;
  t3286 = 1. + t3282;
  t3299 = -0.1575*t3286*t2939;
  t3302 = -1.*t29*t3253*t175;
  t3305 = t3261*t2939;
  t3321 = t3302 + t3305;
  t3809 = Cos(var1[16]);
  t3936 = Sin(var1[16]);
  t3980 = -1.*t3261*t29*t175;
  t4008 = -1.*t3253*t2939;
  t4024 = t3980 + t4008;
  t3340 = -1.*t3339;
  t3341 = 1. + t3340;
  t3344 = -0.325*t3341*t2393;
  t3348 = 0.2255*t3033;
  t3358 = 0.325*t3351*t3355;
  t3359 = t3339*t2393;
  t3361 = t3351*t3355;
  t3363 = t3359 + t3361;
  t4152 = Sin(var1[11]);
  t4167 = -1.*t3351*t2393;
  t4176 = t3339*t3355;
  t4182 = t4167 + t4176;
  t4208 = Cos(var1[11]);
  t3457 = -1.*t3424;
  t3481 = 1. + t3457;
  t3487 = 0.325*t3481*t2393;
  t3558 = -0.2255*t3234;
  t3583 = -0.325*t3559*t3578;
  t3584 = t3424*t2393;
  t3585 = t3559*t3578;
  t3592 = t3584 + t3585;
  t4600 = Sin(var1[14]);
  t4605 = -1.*t3559*t2393;
  t4615 = t3424*t3578;
  t4620 = t4605 + t4615;
  t4630 = Cos(var1[14]);
  t3823 = -1.*t3809;
  t3838 = 1. + t3823;
  t3858 = -0.325*t3838*t2393;
  t3890 = -0.2255*t3321;
  t4075 = 0.325*t3936*t4024;
  t4078 = t3809*t2393;
  t4091 = t3936*t4024;
  t4126 = t4078 + t4091;
  t4700 = Sin(var1[17]);
  t4702 = -1.*t3936*t2393;
  t4713 = t3809*t4024;
  t4722 = t4702 + t4713;
  t4750 = Cos(var1[17]);
  t3177 = 0.325*t2393;
  t4922 = Cos(var1[6]);
  t4976 = Sin(var1[6]);
  t4927 = -1.*t4922;
  t4940 = 1. + t4927;
  t4961 = 0.1575*t4940*t2939;
  t4986 = 0.1575*t29*t175*t4976;
  t4992 = t4922*t2939;
  t5000 = -1.*t29*t175*t4976;
  t5017 = t4992 + t5000;
  t5076 = Cos(var1[7]);
  t5126 = -1.*t29*t4922*t175;
  t5142 = -1.*t2939*t4976;
  t5148 = t5126 + t5142;
  t5154 = Sin(var1[7]);
  t5087 = -1.*t5076;
  t5093 = 1. + t5087;
  t5104 = 0.325*t5093*t2393;
  t5112 = 0.2255*t5017;
  t5176 = -0.325*t5148*t5154;
  t5186 = t5076*t2393;
  t5197 = t5148*t5154;
  t5206 = t5186 + t5197;
  t5258 = Cos(var1[8]);
  t5309 = t5076*t5148;
  t5318 = -1.*t2393*t5154;
  t5333 = t5309 + t5318;
  t5356 = Sin(var1[8]);
  t5519 = 0.325*t1965*t29*t1945;
  t5617 = 0.1575*t1965*t61*t1947;
  t5649 = 0.1575*t2889*t1965*t29*t1984;
  t5650 = -1.*t1965*t61*t1947;
  t5753 = t2439*t1965*t29*t1984;
  t5767 = t5650 + t5753;
  t5891 = -1.*t2439*t1965*t1947;
  t5892 = -1.*t1965*t29*t61*t1984;
  t5911 = t5891 + t5892;
  t5794 = -0.1575*t1965*t3166*t1947;
  t5799 = -0.1575*t3188*t1965*t29*t1984;
  t5816 = -1.*t1965*t3166*t1947;
  t5826 = t3179*t1965*t29*t1984;
  t5827 = t5816 + t5826;
  t6006 = -1.*t3179*t1965*t1947;
  t6249 = -1.*t1965*t29*t3166*t1984;
  t6288 = t6006 + t6249;
  t5851 = -0.1575*t1965*t3253*t1947;
  t5858 = -0.1575*t3286*t1965*t29*t1984;
  t5866 = -1.*t1965*t3253*t1947;
  t5867 = t3261*t1965*t29*t1984;
  t5868 = t5866 + t5867;
  t6452 = -1.*t3261*t1965*t1947;
  t6464 = -1.*t1965*t29*t3253*t1984;
  t6466 = t6452 + t6464;
  t5888 = 0.325*t3341*t1965*t29*t1945;
  t5890 = 0.2255*t5767;
  t5913 = 0.325*t3351*t5911;
  t4239 = -1.*t4208;
  t4282 = 1. + t4239;
  t5927 = -1.*t3339*t1965*t29*t1945;
  t5955 = t3351*t5911;
  t5957 = t5927 + t5955;
  t6694 = t1965*t29*t1945*t3351;
  t6695 = t3339*t5911;
  t6703 = t6694 + t6695;
  t5980 = -0.325*t3481*t1965*t29*t1945;
  t5985 = -0.2255*t5827;
  t6356 = -0.325*t3559*t6288;
  t4637 = -1.*t4630;
  t4639 = 1. + t4637;
  t6417 = -1.*t3424*t1965*t29*t1945;
  t6423 = t3559*t6288;
  t6424 = t6417 + t6423;
  t6790 = t1965*t29*t1945*t3559;
  t6796 = t3424*t6288;
  t6800 = t6790 + t6796;
  t6442 = 0.325*t3838*t1965*t29*t1945;
  t6444 = -0.2255*t5868;
  t6470 = 0.325*t3936*t6466;
  t4759 = -1.*t4750;
  t4783 = 1. + t4759;
  t6479 = -1.*t3809*t1965*t29*t1945;
  t6495 = t3936*t6466;
  t6513 = t6479 + t6495;
  t6816 = t1965*t29*t1945*t3936;
  t6817 = t3809*t6466;
  t6818 = t6816 + t6817;
  t5786 = -0.325*t1965*t29*t1945;
  t6839 = 0.1575*t1965*t29*t4940*t1984;
  t6844 = 0.1575*t1965*t1947*t4976;
  t6846 = t1965*t29*t4922*t1984;
  t6847 = -1.*t1965*t1947*t4976;
  t6848 = t6846 + t6847;
  t6854 = -1.*t1965*t4922*t1947;
  t6855 = -1.*t1965*t29*t1984*t4976;
  t6856 = t6854 + t6855;
  t6852 = -0.325*t1965*t29*t1945*t5093;
  t6853 = 0.2255*t6848;
  t6857 = -0.325*t6856*t5154;
  t5263 = -1.*t5258;
  t5293 = 1. + t5263;
  t6858 = -1.*t1965*t29*t1945*t5076;
  t6859 = t6856*t5154;
  t6860 = t6858 + t6859;
  t6868 = t5076*t6856;
  t6873 = t1965*t29*t1945*t5154;
  t6875 = t6868 + t6873;
  t6892 = t1965*t1945*t1947;
  t6895 = -1.*t175*t1984;
  t6899 = t6892 + t6895;
  t6908 = t1945*t175;
  t6913 = t1965*t1947*t1984;
  t6917 = t6908 + t6913;
  t6919 = -0.325*t6917;
  t6954 = 0.325*t6917;
  t6904 = 0.1575*t2889*t6899;
  t6944 = -0.1575*t3188*t6899;
  t6932 = -0.1575*t3286*t6899;
  t6977 = 0.2255*t2439*t6899;
  t6982 = -0.325*t61*t3351*t6899;
  t6988 = -0.325*t3341*t6917;
  t6992 = -1.*t61*t3351*t6899;
  t6996 = t3339*t6917;
  t7005 = t6992 + t6996;
  t7188 = -1.*t3339*t61*t6899;
  t7197 = -1.*t3351*t6917;
  t7222 = t7188 + t7197;
  t7029 = -0.2255*t3179*t6899;
  t7033 = 0.325*t3166*t3559*t6899;
  t7037 = 0.325*t3481*t6917;
  t7040 = -1.*t3166*t3559*t6899;
  t7046 = t3424*t6917;
  t7054 = t7040 + t7046;
  t7297 = -1.*t3424*t3166*t6899;
  t7305 = -1.*t3559*t6917;
  t7312 = t7297 + t7305;
  t7072 = -0.2255*t3261*t6899;
  t7084 = -0.325*t3253*t3936*t6899;
  t7087 = -0.325*t3838*t6917;
  t7116 = -1.*t3253*t3936*t6899;
  t7117 = t3809*t6917;
  t7141 = t7116 + t7117;
  t7437 = -1.*t3809*t3253*t6899;
  t7456 = -1.*t3936*t6917;
  t7461 = t7437 + t7456;
  t6965 = 0.1575*t4940*t6899;
  t7519 = 0.2255*t4922*t6899;
  t7527 = 0.325*t5093*t6917;
  t7528 = 0.325*t6899*t4976*t5154;
  t7534 = t5076*t6917;
  t7543 = -1.*t6899*t4976*t5154;
  t7546 = t7534 + t7543;
  t7598 = -1.*t5076*t6899*t4976;
  t7603 = -1.*t6917*t5154;
  t7606 = t7598 + t7603;
  t7662 = -0.1575*t1965*t29*t4922;
  t7671 = 0.1575*t6917*t4976;
  t7679 = t1965*t29*t4922;
  t7684 = -1.*t6917*t4976;
  t7695 = t7679 + t7684;
  t7723 = 0.2255*t7695;
  t7749 = -1.*t4922*t6917;
  t7768 = -1.*t1965*t29*t4976;
  t7769 = t7749 + t7768;
  t7936 = -1.*t1965*t1945*t1947;
  t7969 = t175*t1984;
  t7975 = t7936 + t7969;
  t7929 = -0.325*t5076*t7695;
  t7983 = 0.325*t7975*t5154;
  t7984 = t5076*t7695;
  t7985 = -1.*t7975*t5154;
  t7991 = t7984 + t7985;
  t8039 = -1.*t5076*t7975;
  t8046 = -1.*t7695*t5154;
  t8060 = t8039 + t8046;
  t8366 = t5076*t7975;
  t8390 = t7695*t5154;
  t8469 = t8366 + t8390;
  t8602 = -0.1575*t2439*t1965*t29;
  t8606 = 0.1575*t61*t6917;
  t8610 = t2439*t1965*t29;
  t8618 = -1.*t61*t6917;
  t8647 = t8610 + t8618;
  t9077 = -1.*t1965*t29*t61;
  t9101 = -1.*t2439*t6917;
  t9194 = t9077 + t9101;
  t8852 = 0.2255*t8647;
  t9253 = -0.325*t3351*t7975;
  t9255 = 0.325*t3339*t8647;
  t9267 = -1.*t3351*t7975;
  t9271 = t3339*t8647;
  t9273 = t9267 + t9271;
  t9301 = -1.*t3339*t7975;
  t9308 = -1.*t3351*t8647;
  t9333 = t9301 + t9308;
  t9438 = t3339*t7975;
  t9440 = t3351*t8647;
  t9443 = t9438 + t9440;
  t9766 = 0.1575*t3179*t1965*t29;
  t9776 = -0.1575*t3166*t6917;
  t9778 = t3179*t1965*t29;
  t9786 = -1.*t3166*t6917;
  t9789 = t9778 + t9786;
  t9848 = -1.*t1965*t29*t3166;
  t9882 = -1.*t3179*t6917;
  t9887 = t9848 + t9882;
  t9801 = -0.2255*t9789;
  t10051 = 0.325*t3559*t7975;
  t10059 = -0.325*t3424*t9789;
  t10065 = -1.*t3559*t7975;
  t10089 = t3424*t9789;
  t10090 = t10065 + t10089;
  t10135 = -1.*t3424*t7975;
  t10136 = -1.*t3559*t9789;
  t10153 = t10135 + t10136;
  t10535 = t3424*t7975;
  t10536 = t3559*t9789;
  t10547 = t10535 + t10536;
  t10836 = 0.1575*t3261*t1965*t29;
  t10837 = -0.1575*t3253*t6917;
  t10863 = t3261*t1965*t29;
  t10878 = -1.*t3253*t6917;
  t10932 = t10863 + t10878;
  t11078 = -1.*t1965*t29*t3253;
  t11087 = -1.*t3261*t6917;
  t11088 = t11078 + t11087;
  t11025 = -0.2255*t10932;
  t11126 = -0.325*t3936*t7975;
  t11138 = 0.325*t3809*t10932;
  t11145 = -1.*t3936*t7975;
  t11146 = t3809*t10932;
  t11160 = t11145 + t11146;
  t11214 = -1.*t3809*t7975;
  t11218 = -1.*t3936*t10932;
  t11222 = t11214 + t11218;
  t11239 = t3809*t7975;
  t11240 = t3936*t10932;
  t11242 = t11239 + t11240;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=-258.00300000000004;
  p_output1[3]=-26.977500000000003*(t2400 + t244 + t2942 + 0.1575*t3033) - 26.977500000000003*(t3176 + t3177 + t3204 - 0.1575*t3234) - 26.977500000000003*(t2400 + t3260 + t3299 - 0.1575*t3321) - 6.1312500000000005*(t244 + t2942 + t3344 + t3348 + t3358 - 0.325*t3363) - 6.1312500000000005*(t3176 + t3204 + t3487 + t3558 + t3583 + 0.325*t3592) - 6.1312500000000005*(t3260 + t3299 + t3858 + t3890 + t4075 - 0.325*t4126) - 1.9620000000000002*(t244 + t2942 + t3344 + t3348 + t3358 - 0.575*t4152*t4182 - 0.575*(-1.*t4152*t4182 + t3363*t4208) - 0.575*t3363*t4282) - 1.9620000000000002*(t3176 + t3204 + t3487 + t3558 + t3583 + 0.075*t4600*t4620 + 0.075*(-1.*t4600*t4620 + t3592*t4630) + 0.075*t3592*t4639) - 1.9620000000000002*(t3260 + t3299 + t3858 + t3890 + t4075 - 0.575*t4700*t4722 - 0.575*(-1.*t4700*t4722 + t4126*t4750) - 0.575*t4126*t4783) - 26.977500000000003*(t3177 + t4961 + t4986 + 0.1575*t5017) - 6.1312500000000005*(t4961 + t4986 + t5104 + t5112 + t5176 + 0.325*t5206) - 1.9620000000000002*(t4961 + t4986 + t5104 + t5112 + t5176 + 0.075*t5206*t5293 + 0.075*t5333*t5356 + 0.075*(t5206*t5258 - 1.*t5333*t5356));
  p_output1[4]=-26.977500000000003*(t5519 + t5617 + t5649 + 0.1575*t5767) - 26.977500000000003*(t5786 + t5794 + t5799 - 0.1575*t5827) - 26.977500000000003*(t5519 + t5851 + t5858 - 0.1575*t5868) - 6.1312500000000005*(t5617 + t5649 + t5888 + t5890 + t5913 - 0.325*t5957) - 6.1312500000000005*(t5794 + t5799 + t5980 + t5985 + t6356 + 0.325*t6424) - 6.1312500000000005*(t5851 + t5858 + t6442 + t6444 + t6470 - 0.325*t6513) - 1.9620000000000002*(t5617 + t5649 + t5888 + t5890 + t5913 - 0.575*t4282*t5957 - 0.575*t4152*t6703 - 0.575*(t4208*t5957 - 1.*t4152*t6703)) - 1.9620000000000002*(t5794 + t5799 + t5980 + t5985 + t6356 + 0.075*t4639*t6424 + 0.075*t4600*t6800 + 0.075*(t4630*t6424 - 1.*t4600*t6800)) - 1.9620000000000002*(t5851 + t5858 + t6442 + t6444 + t6470 - 0.575*t4783*t6513 - 0.575*t4700*t6818 - 0.575*(t4750*t6513 - 1.*t4700*t6818)) - 26.977500000000003*(t5786 + t6839 + t6844 + 0.1575*t6848) - 6.1312500000000005*(t6839 + t6844 + t6852 + t6853 + t6857 + 0.325*t6860) - 1.9620000000000002*(t6839 + t6844 + t6852 + t6853 + t6857 + 0.075*t5293*t6860 + 0.075*t5356*t6875 + 0.075*(t5258*t6860 - 1.*t5356*t6875));
  p_output1[5]=-26.977500000000003*(0.1575*t2439*t6899 + t6904 + t6919) - 26.977500000000003*(-0.1575*t3261*t6899 + t6919 + t6932) - 26.977500000000003*(-0.1575*t3179*t6899 + t6944 + t6954) - 26.977500000000003*(0.1575*t4922*t6899 + t6954 + t6965) - 6.1312500000000005*(t6904 + t6977 + t6982 + t6988 - 0.325*t7005) - 6.1312500000000005*(t6944 + t7029 + t7033 + t7037 + 0.325*t7054) - 6.1312500000000005*(t6932 + t7072 + t7084 + t7087 - 0.325*t7141) - 1.9620000000000002*(t6904 + t6977 + t6982 + t6988 - 0.575*t4282*t7005 - 0.575*t4152*t7222 - 0.575*(t4208*t7005 - 1.*t4152*t7222)) - 1.9620000000000002*(t6944 + t7029 + t7033 + t7037 + 0.075*t4639*t7054 + 0.075*t4600*t7312 + 0.075*(t4630*t7054 - 1.*t4600*t7312)) - 1.9620000000000002*(t6932 + t7072 + t7084 + t7087 - 0.575*t4783*t7141 - 0.575*t4700*t7461 - 0.575*(t4750*t7141 - 1.*t4700*t7461)) - 6.1312500000000005*(t6965 + t7519 + t7527 + t7528 + 0.325*t7546) - 1.9620000000000002*(t6965 + t7519 + t7527 + t7528 + 0.075*t5293*t7546 + 0.075*t5356*t7606 + 0.075*(t5258*t7546 - 1.*t5356*t7606));
  p_output1[6]=-26.977500000000003*(t7662 + t7671 + 0.1575*t7695) - 6.1312500000000005*(t7662 + t7671 + t7723) - 1.9620000000000002*(t7662 + t7671 + t7723 - 0.325*t5154*t7769 + 0.075*t5154*t5293*t7769 + 0.075*t5076*t5356*t7769 + 0.075*(t5154*t5258*t7769 - 1.*t5076*t5356*t7769));
  p_output1[7]=-6.1312500000000005*(t7929 + t7983 + 0.325*t7991) - 1.9620000000000002*(t7929 + t7983 + 0.075*t5293*t7991 + 0.075*t5356*t8060 + 0.075*(t5258*t7991 - 1.*t5356*t8060));
  p_output1[8]=-1.9620000000000002*(0.075*t5258*t7991 + 0.075*t5356*t8469 + 0.075*(-1.*t5258*t7991 - 1.*t5356*t8469));
  p_output1[9]=-26.977500000000003*(t8602 + t8606 + 0.1575*t8647) - 6.1312500000000005*(t8602 + t8606 + t8852) - 1.9620000000000002*(t8602 + t8606 + t8852 + 0.325*t3351*t9194 - 0.575*t3339*t4152*t9194 - 0.575*t3351*t4282*t9194 - 0.575*(-1.*t3339*t4152*t9194 + t3351*t4208*t9194));
  p_output1[10]=-6.1312500000000005*(t9253 + t9255 - 0.325*t9273) - 1.9620000000000002*(t9253 + t9255 - 0.575*t4282*t9273 - 0.575*t4152*t9333 - 0.575*(t4208*t9273 - 1.*t4152*t9333));
  p_output1[11]=-1.9620000000000002*(-0.575*t4208*t9273 - 0.575*t4152*t9443 - 0.575*(-1.*t4208*t9273 - 1.*t4152*t9443));
  p_output1[12]=-26.977500000000003*(t9766 + t9776 - 0.1575*t9789) - 6.1312500000000005*(t9766 + t9776 + t9801) - 1.9620000000000002*(t9766 + t9776 + t9801 - 0.325*t3559*t9887 + 0.075*t3424*t4600*t9887 + 0.075*t3559*t4639*t9887 + 0.075*(-1.*t3424*t4600*t9887 + t3559*t4630*t9887));
  p_output1[13]=-6.1312500000000005*(t10051 + t10059 + 0.325*t10090) - 1.9620000000000002*(t10051 + t10059 + 0.075*t10153*t4600 + 0.075*(-1.*t10153*t4600 + t10090*t4630) + 0.075*t10090*t4639);
  p_output1[14]=-1.9620000000000002*(0.075*t10547*t4600 + 0.075*t10090*t4630 + 0.075*(-1.*t10547*t4600 - 1.*t10090*t4630));
  p_output1[15]=-26.977500000000003*(t10836 + t10837 - 0.1575*t10932) - 6.1312500000000005*(t10836 + t10837 + t11025) - 1.9620000000000002*(t10836 + t10837 + t11025 + 0.325*t11088*t3936 - 0.575*t11088*t3809*t4700 - 0.575*(-1.*t11088*t3809*t4700 + t11088*t3936*t4750) - 0.575*t11088*t3936*t4783);
  p_output1[16]=-6.1312500000000005*(t11126 + t11138 - 0.325*t11160) - 1.9620000000000002*(t11126 + t11138 - 0.575*t11222*t4700 - 0.575*(-1.*t11222*t4700 + t11160*t4750) - 0.575*t11160*t4783);
  p_output1[17]=-1.9620000000000002*(-0.575*t11242*t4700 - 0.575*t11160*t4750 - 0.575*(-1.*t11242*t4700 - 1.*t11160*t4750));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_vision60.hh"

namespace DiagonalStance
{

void Ge_vec_vision60_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
