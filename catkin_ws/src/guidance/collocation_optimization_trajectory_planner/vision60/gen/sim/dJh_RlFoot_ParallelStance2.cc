/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:06:05 GMT+02:00
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
  double t8681;
  double t8626;
  double t8643;
  double t8722;
  double t8659;
  double t8732;
  double t8753;
  double t2961;
  double t8771;
  double t8777;
  double t8787;
  double t6261;
  double t8790;
  double t8797;
  double t8767;
  double t8793;
  double t8794;
  double t2171;
  double t8798;
  double t8801;
  double t8872;
  double t8878;
  double t8879;
  double t8880;
  double t8883;
  double t8884;
  double t8885;
  double t8901;
  double t8902;
  double t8909;
  double t8928;
  double t8929;
  double t8931;
  double t8927;
  double t8932;
  double t8933;
  double t8936;
  double t8937;
  double t8938;
  double t8941;
  double t8942;
  double t8943;
  double t8974;
  double t8978;
  double t8983;
  double t9007;
  double t9010;
  double t9011;
  double t9021;
  double t9026;
  double t9027;
  double t9028;
  double t9040;
  double t9041;
  double t9005;
  double t9020;
  double t9044;
  double t9045;
  double t9004;
  double t9046;
  double t9051;
  double t9060;
  double t9066;
  double t9070;
  double t9072;
  double t9074;
  double t9075;
  double t9081;
  double t9082;
  double t9083;
  double t9084;
  double t9085;
  double t9086;
  double t9087;
  double t9088;
  double t9089;
  double t9109;
  double t9113;
  double t9114;
  double t9103;
  double t9104;
  double t9106;
  double t9097;
  double t9098;
  double t9099;
  double t8994;
  double t8999;
  double t9001;
  double t9056;
  double t9091;
  double t9093;
  double t9134;
  double t9136;
  double t9137;
  double t9118;
  double t9119;
  double t9122;
  double t9190;
  double t9191;
  double t9192;
  double t9152;
  double t9153;
  double t9154;
  double t9305;
  double t9308;
  double t9309;
  double t9140;
  double t9164;
  double t9354;
  double t9358;
  double t9363;
  double t9365;
  double t9384;
  double t9390;
  double t9396;
  double t9144;
  double t9145;
  double t9146;
  double t9400;
  double t9406;
  double t9167;
  double t9168;
  double t9169;
  double t9203;
  double t9234;
  double t9491;
  double t9495;
  double t9204;
  double t9208;
  double t9209;
  double t9523;
  double t9527;
  double t9236;
  double t9237;
  double t9238;
  double t9268;
  double t9288;
  double t9637;
  double t9271;
  double t9274;
  double t9275;
  double t9657;
  double t9667;
  double t9289;
  double t9290;
  double t9292;
  double t9344;
  double t9760;
  double t9767;
  double t9778;
  double t9783;
  double t9785;
  double t9374;
  double t9846;
  double t9851;
  double t9854;
  double t9345;
  double t9347;
  double t9780;
  double t9790;
  double t9811;
  double t9818;
  double t9375;
  double t9376;
  double t9868;
  double t9869;
  double t9875;
  double t9883;
  double t9884;
  double t9905;
  double t9907;
  double t9908;
  double t9910;
  double t9911;
  double t9913;
  double t9915;
  double t9916;
  double t9918;
  double t9920;
  double t9921;
  double t9922;
  double t9512;
  double t9500;
  double t9927;
  double t9928;
  double t9930;
  double t9953;
  double t9954;
  double t9502;
  double t9507;
  double t9964;
  double t9969;
  double t9518;
  double t9520;
  double t10003;
  double t10007;
  double t9834;
  double t9835;
  double t9837;
  double t10015;
  double t10017;
  double t9936;
  double t9938;
  double t9939;
  double t9621;
  double t9677;
  double t9623;
  double t9625;
  double t10068;
  double t10069;
  double t9872;
  double t10079;
  double t10081;
  double t9678;
  double t9679;
  double t10123;
  double t10129;
  double t10136;
  double t10142;
  double t9755;
  double t9758;
  double t10181;
  double t10182;
  double t10184;
  double t10230;
  double t10245;
  double t8962;
  double t8964;
  double t8966;
  double t10206;
  double t10209;
  double t10214;
  double t10215;
  double t10202;
  double t10229;
  double t10246;
  double t10317;
  double t10322;
  double t10334;
  double t10300;
  double t10301;
  double t10305;
  double t10309;
  double t10312;
  double t10313;
  double t10362;
  double t10363;
  double t10366;
  double t10343;
  double t10358;
  double t10383;
  double t10408;
  double t10416;
  double t10419;
  double t10421;
  double t10424;
  double t10427;
  double t10431;
  double t10432;
  double t10433;
  double t9974;
  double t9975;
  double t9976;
  double t9978;
  double t9979;
  double t9980;
  double t10251;
  double t9822;
  double t9823;
  double t10488;
  double t10492;
  double t10512;
  double t10507;
  double t10473;
  double t10497;
  double t10630;
  double t10634;
  double t10639;
  double t10448;
  double t10450;
  double t10452;
  double t10060;
  double t10061;
  double t10701;
  double t10749;
  double t10755;
  double t10797;
  double t10798;
  double t10799;
  double t10826;
  double t10828;
  double t10830;
  double t10847;
  double t10850;
  double t10852;
  double t10857;
  double t10860;
  double t10861;
  double t10866;
  double t10867;
  double t10868;
  double t10815;
  double t10816;
  double t10831;
  double t10899;
  double t10902;
  double t10905;
  double t10887;
  double t10890;
  double t10892;
  double t10906;
  double t10909;
  double t10919;
  double t10921;
  double t10924;
  double t10929;
  double t10930;
  double t10932;
  double t10090;
  double t10091;
  double t10556;
  double t10559;
  double t10583;
  double t10587;
  double t10955;
  double t10963;
  double t10978;
  double t10964;
  double t10970;
  double t10958;
  double t11011;
  double t11021;
  double t10844;
  double t10853;
  double t10854;
  double t11027;
  double t8891;
  double t8892;
  double t8893;
  double t11072;
  double t11075;
  double t11093;
  double t11102;
  double t11108;
  t8681 = Cos(var1[10]);
  t8626 = Cos(var1[11]);
  t8643 = Sin(var1[10]);
  t8722 = Sin(var1[11]);
  t8659 = t8626*t8643;
  t8732 = -1.*t8681*t8722;
  t8753 = t8659 + t8732;
  t2961 = Cos(var1[5]);
  t8771 = t8681*t8626;
  t8777 = t8643*t8722;
  t8787 = t8771 + t8777;
  t6261 = Sin(var1[9]);
  t8790 = Sin(var1[5]);
  t8797 = Cos(var1[3]);
  t8767 = -1.*t2961*t6261*t8753;
  t8793 = t8787*t8790;
  t8794 = t8767 + t8793;
  t2171 = Sin(var1[3]);
  t8798 = Cos(var1[9]);
  t8801 = Cos(var1[4]);
  t8872 = t8798*t8801*t8753;
  t8878 = Sin(var1[4]);
  t8879 = t2961*t8787;
  t8880 = t6261*t8753*t8790;
  t8883 = t8879 + t8880;
  t8884 = -1.*t8878*t8883;
  t8885 = t8872 + t8884;
  t8901 = t8801*t6261;
  t8902 = t8798*t8878*t8790;
  t8909 = t8901 + t8902;
  t8928 = -1.*t8626*t8643;
  t8929 = t8681*t8722;
  t8931 = t8928 + t8929;
  t8927 = -1.*t2961*t6261*t8787;
  t8932 = t8931*t8790;
  t8933 = t8927 + t8932;
  t8936 = t8798*t8801*t8787;
  t8937 = t2961*t8931;
  t8938 = t6261*t8787*t8790;
  t8941 = t8937 + t8938;
  t8942 = -1.*t8878*t8941;
  t8943 = t8936 + t8942;
  t8974 = -1.*t8798*t8753*t8878;
  t8978 = -1.*t8801*t8883;
  t8983 = t8974 + t8978;
  t9007 = -0.0641*t8626;
  t9010 = -0.28*t8722;
  t9011 = t9007 + t9010;
  t9021 = -1.*t8626;
  t9026 = 1. + t9021;
  t9027 = -0.575*t9026;
  t9028 = -0.295*t8626;
  t9040 = -0.0641*t8722;
  t9041 = t9027 + t9028 + t9040;
  t9005 = 0.325*t8643;
  t9020 = t8681*t9011;
  t9044 = t8643*t9041;
  t9045 = t9005 + t9020 + t9044;
  t9004 = 0.068*t6261;
  t9046 = t8798*t9045;
  t9051 = t9004 + t9046;
  t9060 = -1.*t8681;
  t9066 = 1. + t9060;
  t9070 = -0.325*t9066;
  t9072 = -1.*t8643*t9011;
  t9074 = t8681*t9041;
  t9075 = t9070 + t9072 + t9074;
  t9081 = t2961*t9075;
  t9082 = -1.*t8798;
  t9083 = 1. + t9082;
  t9084 = 0.1575*t9083;
  t9085 = 0.2255*t8798;
  t9086 = -1.*t6261*t9045;
  t9087 = t9084 + t9085 + t9086;
  t9088 = -1.*t9087*t8790;
  t9089 = t9081 + t9088;
  t9109 = t8801*t9051;
  t9113 = -1.*t8878*t9089;
  t9114 = t9109 + t9113;
  t9103 = t6261*t8878;
  t9104 = -1.*t8798*t8801*t8790;
  t9106 = t9103 + t9104;
  t9097 = t9051*t8878;
  t9098 = t8801*t9089;
  t9099 = t9097 + t9098;
  t8994 = t8798*t8787*t8878;
  t8999 = t8801*t8941;
  t9001 = t8994 + t8999;
  t9056 = -1.*t9051*t8878;
  t9091 = -1.*t8801*t9089;
  t9093 = t9056 + t9091;
  t9134 = t2961*t9087;
  t9136 = t9075*t8790;
  t9137 = t9134 + t9136;
  t9118 = -1.*t6261*t8878;
  t9119 = t8798*t8801*t8790;
  t9122 = t9118 + t9119;
  t9190 = t8798*t8753*t8878;
  t9191 = t8801*t8883;
  t9192 = t9190 + t9191;
  t9152 = -1.*t8798*t8787*t8878;
  t9153 = -1.*t8801*t8941;
  t9154 = t9152 + t9153;
  t9305 = t2961*t6261*t8753;
  t9308 = -1.*t8787*t8790;
  t9309 = t9305 + t9308;
  t9140 = -1.*t8798*t2961*t9137;
  t9164 = t9137*t8933;
  t9354 = -1.*t2961*t9087;
  t9358 = -1.*t9075*t8790;
  t9363 = t9354 + t9358;
  t9365 = t8798*t8790*t9137;
  t9384 = t2961*t6261*t8787;
  t9390 = -1.*t8931*t8790;
  t9396 = t9384 + t9390;
  t9144 = -1.*t9106*t9099;
  t9145 = -1.*t8909*t9114;
  t9146 = t9140 + t9144 + t9145;
  t9400 = t9089*t8933;
  t9406 = t9137*t8941;
  t9167 = t9099*t9001;
  t9168 = t9114*t8943;
  t9169 = t9164 + t9167 + t9168;
  t9203 = t9137*t8794;
  t9234 = -1.*t9137*t8933;
  t9491 = t9137*t8883;
  t9495 = t9089*t8794;
  t9204 = t9099*t9192;
  t9208 = t9114*t8885;
  t9209 = t9203 + t9204 + t9208;
  t9523 = -1.*t9089*t8933;
  t9527 = -1.*t9137*t8941;
  t9236 = -1.*t9099*t9001;
  t9237 = -1.*t9114*t8943;
  t9238 = t9234 + t9236 + t9237;
  t9268 = t8798*t2961*t9137;
  t9288 = -1.*t9137*t8794;
  t9637 = -1.*t8798*t8790*t9137;
  t9271 = t9106*t9099;
  t9274 = t8909*t9114;
  t9275 = t9268 + t9271 + t9274;
  t9657 = -1.*t9137*t8883;
  t9667 = -1.*t9089*t8794;
  t9289 = -1.*t9099*t9192;
  t9290 = -1.*t9114*t8885;
  t9292 = t9288 + t9289 + t9290;
  t9344 = -1.*t6261*t9051;
  t9760 = -0.068*t6261;
  t9767 = -1.*t8798*t9045;
  t9778 = t9760 + t9767;
  t9783 = 0.068*t8798;
  t9785 = t9783 + t9086;
  t9374 = t8798*t9051*t8787;
  t9846 = -1.*t8801*t6261*t8753;
  t9851 = -1.*t8798*t8753*t8878*t8790;
  t9854 = t9846 + t9851;
  t9345 = t8798*t8790*t9089;
  t9347 = t9344 + t9345 + t9140;
  t9780 = -1.*t8798*t9051;
  t9790 = -1.*t6261*t9785;
  t9811 = -1.*t6261*t9051*t8787;
  t9818 = t8798*t9785*t8787;
  t9375 = t9089*t8941;
  t9376 = t9374 + t9164 + t9375;
  t9868 = Power(t2961,2);
  t9869 = -1.*t8798*t9868*t9778;
  t9875 = t2961*t6261*t9137;
  t9883 = -1.*t8798*t2961*t8787*t9137;
  t9884 = t2961*t9778*t8933;
  t9905 = -1.*t6261*t8787*t8878;
  t9907 = t8798*t8801*t8787*t8790;
  t9908 = t9905 + t9907;
  t9910 = t9785*t8878;
  t9911 = -1.*t8801*t9778*t8790;
  t9913 = t9910 + t9911;
  t9915 = t8801*t9785;
  t9916 = t9778*t8878*t8790;
  t9918 = t9915 + t9916;
  t9920 = t8798*t8878;
  t9921 = t8801*t6261*t8790;
  t9922 = t9920 + t9921;
  t9512 = -1.*t8798*t9051*t8787;
  t9500 = t8798*t9051*t8753;
  t9927 = t8798*t8801;
  t9928 = -1.*t6261*t8878*t8790;
  t9930 = t9927 + t9928;
  t9953 = -1.*t6261*t9051*t8753;
  t9954 = t8798*t9785*t8753;
  t9502 = t9089*t8883;
  t9507 = t9500 + t9502 + t9203;
  t9964 = t6261*t9051*t8787;
  t9969 = -1.*t8798*t9785*t8787;
  t9518 = -1.*t9089*t8941;
  t9520 = t9512 + t9234 + t9518;
  t10003 = -1.*t8798*t2961*t8753*t9137;
  t10007 = t2961*t9778*t8794;
  t9834 = -1.*t6261*t8753*t8878;
  t9835 = t8798*t8801*t8753*t8790;
  t9837 = t9834 + t9835;
  t10015 = t8798*t2961*t8787*t9137;
  t10017 = -1.*t2961*t9778*t8933;
  t9936 = -1.*t8801*t6261*t8787;
  t9938 = -1.*t8798*t8787*t8878*t8790;
  t9939 = t9936 + t9938;
  t9621 = t6261*t9051;
  t9677 = -1.*t8798*t9051*t8753;
  t9623 = -1.*t8798*t8790*t9089;
  t9625 = t9621 + t9623 + t9268;
  t10068 = t8798*t9051;
  t10069 = t6261*t9785;
  t9872 = Power(t8790,2);
  t10079 = t6261*t9051*t8753;
  t10081 = -1.*t8798*t9785*t8753;
  t9678 = -1.*t9089*t8883;
  t9679 = t9677 + t9678 + t9288;
  t10123 = t8798*t9868*t9778;
  t10129 = -1.*t2961*t6261*t9137;
  t10136 = t8798*t2961*t8753*t9137;
  t10142 = -1.*t2961*t9778*t8794;
  t9755 = -1.*t8798*t9087;
  t9758 = t9344 + t9755;
  t10181 = -1.*t8681*t8626;
  t10182 = -1.*t8643*t8722;
  t10184 = t10181 + t10182;
  t10230 = 0.325*t8681;
  t10245 = t10230 + t9072 + t9074;
  t8962 = t8797*t8933;
  t8964 = -1.*t2171*t8943;
  t8966 = t8962 + t8964;
  t10206 = -0.325*t8643;
  t10209 = -1.*t8681*t9011;
  t10214 = -1.*t8643*t9041;
  t10215 = t10206 + t10209 + t10214;
  t10202 = t8798*t9051*t8931;
  t10229 = Power(t8798,2);
  t10246 = t10229*t10245*t8787;
  t10317 = -1.*t2961*t6261*t10245;
  t10322 = t10215*t8790;
  t10334 = t10317 + t10322;
  t10300 = -1.*t2961*t6261*t8931;
  t10301 = t10184*t8790;
  t10305 = t10300 + t10301;
  t10309 = t2961*t10215;
  t10312 = t6261*t10245*t8790;
  t10313 = t10309 + t10312;
  t10362 = t2961*t10184;
  t10363 = t6261*t8931*t8790;
  t10366 = t10362 + t10363;
  t10343 = -1.*t8798*t2961*t10334;
  t10358 = t10334*t8933;
  t10383 = t9137*t10305;
  t10408 = t8798*t8931*t8878;
  t10416 = t8801*t10366;
  t10419 = t10408 + t10416;
  t10421 = t8798*t10245*t8878;
  t10424 = t8801*t10313;
  t10427 = t10421 + t10424;
  t10431 = t8798*t8801*t10245;
  t10432 = -1.*t8878*t10313;
  t10433 = t10431 + t10432;
  t9974 = -1.*t9075*t8931;
  t9975 = t6261*t9087*t8787;
  t9976 = t9974 + t9512 + t9975;
  t9978 = -1.*t6261*t9087*t8753;
  t9979 = t9075*t8787;
  t9980 = t9500 + t9978 + t9979;
  t10251 = Power(t6261,2);
  t9822 = t9075*t8931;
  t9823 = -1.*t6261*t9087*t8787;
  t10488 = -1.*t10215*t8931;
  t10492 = -1.*t9075*t10184;
  t10512 = t10215*t8787;
  t10507 = t10229*t10245*t8753;
  t10473 = -1.*t8798*t9051*t8931;
  t10497 = -1.*t10229*t10245*t8787;
  t10630 = t10334*t8794;
  t10634 = -1.*t10334*t8933;
  t10639 = -1.*t9137*t10305;
  t10448 = t8798*t8801*t8931;
  t10450 = -1.*t8878*t10366;
  t10452 = t10448 + t10450;
  t10060 = t8798*t9087;
  t10061 = t9621 + t10060;
  t10701 = -1.*t10229*t10245*t8753;
  t10749 = t8798*t2961*t10334;
  t10755 = -1.*t10334*t8794;
  t10797 = -0.28*t8626;
  t10798 = 0.0641*t8722;
  t10799 = t10797 + t10798;
  t10826 = t8643*t9011;
  t10828 = t8681*t10799;
  t10830 = t10826 + t10828;
  t10847 = t2961*t8753;
  t10850 = t6261*t10184*t8790;
  t10852 = t10847 + t10850;
  t10857 = -1.*t2961*t6261*t10184;
  t10860 = t8753*t8790;
  t10861 = t10857 + t10860;
  t10866 = t8798*t8801*t10184;
  t10867 = -1.*t8878*t10852;
  t10868 = t10866 + t10867;
  t10815 = -1.*t8643*t10799;
  t10816 = t9020 + t10815;
  t10831 = t10229*t10830*t8787;
  t10899 = -1.*t2961*t6261*t10830;
  t10902 = t10816*t8790;
  t10905 = t10899 + t10902;
  t10887 = t2961*t10816;
  t10890 = t6261*t10830*t8790;
  t10892 = t10887 + t10890;
  t10906 = -1.*t8798*t2961*t10905;
  t10909 = t10905*t8933;
  t10919 = t8798*t10830*t8878;
  t10921 = t8801*t10892;
  t10924 = t10919 + t10921;
  t10929 = t8798*t8801*t10830;
  t10930 = -1.*t8878*t10892;
  t10932 = t10929 + t10930;
  t10090 = t6261*t9087*t8753;
  t10091 = -1.*t9075*t8787;
  t10556 = t9045*t8753;
  t10559 = t10556 + t9979;
  t10583 = -1.*t9045*t8787;
  t10587 = t9974 + t10583;
  t10955 = -1.*t10816*t8931;
  t10963 = t9075*t8753;
  t10978 = t10816*t8787;
  t10964 = t10229*t10830*t8753;
  t10970 = t8798*t9051*t10184;
  t10958 = -1.*t10229*t10830*t8787;
  t11011 = t9137*t10861;
  t11021 = t10905*t8794;
  t10844 = t8798*t10184*t8878;
  t10853 = t8801*t10852;
  t10854 = t10844 + t10853;
  t11027 = -1.*t10905*t8933;
  t8891 = t8797*t8794;
  t8892 = -1.*t2171*t8885;
  t8893 = t8891 + t8892;
  t11072 = -1.*t10229*t10830*t8753;
  t11075 = -1.*t8798*t9051*t10184;
  t11093 = t8798*t2961*t10905;
  t11102 = -1.*t9137*t10861;
  t11108 = -1.*t10905*t8794;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2171*t8794 - 1.*t8797*t8885)*var2[1] + t8893*var2[2];
  p_output1[10]=(-1.*t2171*t2961*t8798 - 1.*t8797*t8909)*var2[1] + (t2961*t8797*t8798 - 1.*t2171*t8909)*var2[2];
  p_output1[11]=(-1.*t2171*t8933 - 1.*t8797*t8943)*var2[1] + t8966*var2[2];
  p_output1[12]=t8885*var2[0] - 1.*t2171*t8983*var2[1] + t8797*t8983*var2[2] + (t9001*(-1.*t8909*t9093 - 1.*t8909*t9099 - 1.*t9106*t9114 - 1.*t9114*t9122) + t8943*t9146 + t9106*(t8943*t9093 + t8943*t9099 + t9001*t9114 + t9114*t9154) + t8909*t9169)*var2[3];
  p_output1[13]=t8909*var2[0] - 1.*t2171*t9122*var2[1] + t8797*t9122*var2[2] + ((-1.*t8943*t9093 - 1.*t8943*t9099 - 1.*t9001*t9114 - 1.*t9114*t9154)*t9192 + t9001*(t8885*t9093 + t8885*t9099 + t8983*t9114 + t9114*t9192) + t8943*t9209 + t8885*t9238)*var2[3];
  p_output1[14]=t8943*var2[0] - 1.*t2171*t9154*var2[1] + t8797*t9154*var2[2] + ((t8909*t9093 + t8909*t9099 + t9106*t9114 + t9114*t9122)*t9192 + t9106*(-1.*t8885*t9093 - 1.*t8885*t9099 - 1.*t8983*t9114 - 1.*t9114*t9192) + t8885*t9275 + t8909*t9292)*var2[3];
  p_output1[15]=t8801*t9309*var2[0] + (t8797*t8883 + t2171*t8878*t9309)*var2[1] + (t2171*t8883 - 1.*t8797*t8878*t9309)*var2[2] + (-1.*t2961*t8798*t8801*t9169 + t9001*(-1.*t2961*t8798*t9089 + t2961*t8798*t8801*t9099 - 1.*t2961*t8798*t8878*t9114 + t8878*t8909*t9363 - 1.*t8801*t9106*t9363 + t9365) + t8801*t9146*t9396 + t9106*(-1.*t8878*t8943*t9363 + t8801*t9001*t9363 + t8801*t9099*t9396 - 1.*t8878*t9114*t9396 + t9400 + t9406))*var2[3] + (t8941*t9347 + t8933*(t8790*t8798*t9363 + t9365) - 1.*t8790*t8798*t9376 + t2961*t8798*(t8941*t9363 + t9089*t9396 + t9400 + t9406))*var2[4];
  p_output1[16]=-1.*t2961*t8798*t8801*var2[0] + (-1.*t8790*t8797*t8798 - 1.*t2171*t2961*t8798*t8878)*var2[1] + (-1.*t2171*t8790*t8798 + t2961*t8797*t8798*t8878)*var2[2] + (t8801*t9238*t9309 + t8801*t9209*t9396 + t9001*(t8801*t9099*t9309 - 1.*t8878*t9114*t9309 - 1.*t8878*t8885*t9363 + t8801*t9192*t9363 + t9491 + t9495) + t9192*(t8878*t8943*t9363 - 1.*t8801*t9001*t9363 - 1.*t8801*t9099*t9396 + t8878*t9114*t9396 + t9523 + t9527))*var2[3] + (t8933*(t9089*t9309 + t8883*t9363 + t9491 + t9495) + t8941*t9507 + t8883*t9520 + t8794*(-1.*t8941*t9363 - 1.*t9089*t9396 + t9523 + t9527))*var2[4];
  p_output1[17]=t8801*t9396*var2[0] + (t8797*t8941 + t2171*t8878*t9396)*var2[1] + (t2171*t8941 - 1.*t8797*t8878*t9396)*var2[2] + (-1.*t2961*t8798*t8801*t9292 + t8801*t9275*t9309 + t9192*(t2961*t8798*t9089 - 1.*t2961*t8798*t8801*t9099 + t2961*t8798*t8878*t9114 - 1.*t8878*t8909*t9363 + t8801*t9106*t9363 + t9637) + t9106*(-1.*t8801*t9099*t9309 + t8878*t9114*t9309 + t8878*t8885*t9363 - 1.*t8801*t9192*t9363 + t9657 + t9667))*var2[3] + (t8883*t9625 + t8794*(-1.*t8790*t8798*t9363 + t9637) + t2961*t8798*(-1.*t9089*t9309 - 1.*t8883*t9363 + t9657 + t9667) - 1.*t8790*t8798*t9679)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t9837*var2[0] + (-1.*t2961*t8753*t8797*t8798 - 1.*t2171*t9854)*var2[1] + (-1.*t2171*t2961*t8753*t8798 + t8797*t9854)*var2[2] + (t9146*t9908 + t9169*t9922 + t9001*(t9869 + t9875 - 1.*t9106*t9913 - 1.*t8909*t9918 - 1.*t9099*t9922 - 1.*t9114*t9930) + t9106*(t9883 + t9884 + t9099*t9908 + t9001*t9913 + t8943*t9918 + t9114*t9939))*var2[3] + (-1.*t2961*t8787*t8798*t9347 - 1.*t2961*t6261*t9376 + t8933*(-1.*t6261*t8790*t9089 + t9780 + t9790 + t9869 - 1.*t8798*t9778*t9872 + t9875) + t2961*t8798*(t8787*t8790*t8798*t9089 - 1.*t8790*t8941*t9778 + t9811 + t9818 + t9883 + t9884))*var2[4] + (-1.*t6261*t8787*t9758 + t8787*t8798*(t6261*t9087 - 1.*t8798*t9778 + t9780 + t9790) + t6261*(-1.*t8787*t8798*t9087 - 1.*t6261*t8787*t9778 + t9811 + t9818) + t8798*(t9374 + t9822 + t9823))*var2[5];
  p_output1[28]=t9922*var2[0] + (-1.*t2961*t6261*t8797 - 1.*t2171*t9930)*var2[1] + (-1.*t2171*t2961*t6261 + t8797*t9930)*var2[2] + (t9238*t9837 + t9209*t9908 + t9001*(t10003 + t10007 + t9099*t9837 + t9114*t9854 + t9192*t9913 + t8885*t9918) + t9192*(t10015 + t10017 - 1.*t9099*t9908 - 1.*t9001*t9913 - 1.*t8943*t9918 - 1.*t9114*t9939))*var2[3] + (-1.*t2961*t8787*t8798*t9507 - 1.*t2961*t8753*t8798*t9520 + t8933*(t10003 + t10007 + t8753*t8790*t8798*t9089 - 1.*t8790*t8883*t9778 + t9953 + t9954) + t8794*(t10015 + t10017 - 1.*t8787*t8790*t8798*t9089 + t8790*t8941*t9778 + t9964 + t9969))*var2[4] + (t8787*t8798*(-1.*t8753*t8798*t9087 - 1.*t6261*t8753*t9778 + t9953 + t9954) + t8753*t8798*(t8787*t8798*t9087 + t6261*t8787*t9778 + t9964 + t9969) - 1.*t6261*t8753*t9976 - 1.*t6261*t8787*t9980)*var2[5];
  p_output1[29]=t9908*var2[0] + (-1.*t2961*t8787*t8797*t8798 - 1.*t2171*t9939)*var2[1] + (-1.*t2171*t2961*t8787*t8798 + t8797*t9939)*var2[2] + (t9275*t9837 + t9106*(t10136 + t10142 - 1.*t9099*t9837 - 1.*t9114*t9854 - 1.*t9192*t9913 - 1.*t8885*t9918) + t9292*t9922 + t9192*(t10123 + t10129 + t9106*t9913 + t8909*t9918 + t9099*t9922 + t9114*t9930))*var2[3] + (-1.*t2961*t8753*t8798*t9625 - 1.*t2961*t6261*t9679 + t2961*t8798*(t10079 + t10081 + t10136 + t10142 - 1.*t8753*t8790*t8798*t9089 + t8790*t8883*t9778) + t8794*(t10068 + t10069 + t10123 + t10129 + t6261*t8790*t9089 + t8798*t9778*t9872))*var2[4] + (-1.*t10061*t6261*t8753 + t8798*(t10090 + t10091 + t9677) + t6261*(t10079 + t10081 + t8753*t8798*t9087 + t6261*t8753*t9778) + t8753*t8798*(t10068 + t10069 - 1.*t6261*t9087 + t8798*t9778))*var2[5];
  p_output1[30]=t9001*var2[0] + t8966*var2[1] + (t2171*t8933 + t8797*t8943)*var2[2] + (t9001*(t10343 - 1.*t10433*t8909 - 1.*t10427*t9106) + t9106*(t10358 + t10383 + t10433*t8943 + t10427*t9001 + t10419*t9099 + t10452*t9114) + t10419*t9146)*var2[3] + ((t10343 - 1.*t10245*t6261*t8798 + t10313*t8790*t8798)*t8933 + t2961*t8798*(t10202 + t10246 + t10358 + t10383 + t10313*t8941 + t10366*t9089) + t10305*t9347)*var2[4] + (t6261*(t10202 + t10246 + t10245*t10251*t8787 + t10215*t8931 + t10184*t9075 - 1.*t6261*t8931*t9087) + t8798*t8931*t9758)*var2[5] + (-0.2255*t10184 - 0.1575*t8787)*var2[9];
  p_output1[31]=((t10634 + t10639 - 1.*t10433*t8943 - 1.*t10427*t9001 - 1.*t10419*t9099 - 1.*t10452*t9114)*t9192 + t9001*(t10630 + t10433*t8885 + t9164 + t9167 + t9168 + t10427*t9192) + t10419*t9209 + t9001*t9238)*var2[3] + (t8794*(t10473 + t10497 + t10634 + t10639 - 1.*t10313*t8941 - 1.*t10366*t9089) + t8933*(t10507 + t10630 + t10313*t8883 + t9164 + t9374 + t9375) + t10305*t9507 + t8933*t9520)*var2[4] + (t8753*t8798*(t10473 + t10488 + t10492 + t10497 - 1.*t10245*t10251*t8787 + t6261*t8931*t9087) + t8787*t8798*(t10507 + t10512 + t10245*t10251*t8753 + t9374 + t9822 + t9823) + t8787*t8798*t9976 + t8798*t8931*t9980)*var2[5] + (t10184*t10559 + t10587*t8931 + t8787*(t10488 + t10492 - 1.*t10245*t8787 - 1.*t8931*t9045) + t8931*(t10512 + t10245*t8753 + t8787*t9045 + t9822))*var2[9];
  p_output1[32]=t10419*var2[0] + (-1.*t10452*t2171 + t10305*t8797)*var2[1] + (t10305*t2171 + t10452*t8797)*var2[2] + ((t10749 + t10433*t8909 + t10427*t9106)*t9192 + t9106*(t10755 - 1.*t10433*t8885 - 1.*t10427*t9192 + t9234 + t9236 + t9237) + t9001*t9275)*var2[3] + (t8794*(t10749 + t10245*t6261*t8798 - 1.*t10313*t8790*t8798) + t2961*t8798*(t10701 + t10755 - 1.*t10313*t8883 + t9234 + t9512 + t9518) + t8933*t9625)*var2[4] + (t10061*t8787*t8798 + t6261*(t10701 - 1.*t10245*t10251*t8753 - 1.*t10215*t8787 + t9512 + t9974 + t9975))*var2[5] + 0.068*t8931*var2[9];
  p_output1[33]=t10854*var2[0] + (-1.*t10868*t2171 + t10861*t8797)*var2[1] + (t10861*t2171 + t10868*t8797)*var2[2] + (t9001*(t10906 - 1.*t10932*t8909 - 1.*t10924*t9106) + t9146*t9192 + t9106*(t10909 + t10932*t8943 + t10924*t9001 + t9203 + t9204 + t9208))*var2[3] + ((t10906 - 1.*t10830*t6261*t8798 + t10892*t8790*t8798)*t8933 + t8794*t9347 + t2961*t8798*(t10831 + t10909 + t10892*t8941 + t9203 + t9500 + t9502))*var2[4] + (t8753*t8798*t9758 + t6261*(t10831 + t10251*t10830*t8787 + t10816*t8931 + t9500 + t9978 + t9979))*var2[5] + (-0.1575*t10184 - 0.2255*t8787)*var2[9] + (-0.325*t8626 - 1.*t10799*t8626 - 1.*t8626*t9041)*var2[10];
  p_output1[34]=(t9001*(t11011 + t11021 + t10932*t8885 + t10854*t9099 + t10868*t9114 + t10924*t9192) + t9192*t9209 + t10854*t9238 + t9192*(t11027 - 1.*t10932*t8943 - 1.*t10924*t9001 + t9288 + t9289 + t9290))*var2[3] + (t8933*(t10964 + t10970 + t11011 + t11021 + t10892*t8883 + t10852*t9089) + t8794*t9507 + t10861*t9520 + t8794*(t10958 + t11027 - 1.*t10892*t8941 + t9288 + t9677 + t9678))*var2[4] + (t8787*t8798*(t10963 + t10964 + t10970 + t10978 + t10251*t10830*t8753 - 1.*t10184*t6261*t9087) + t8753*t8798*(t10090 + t10091 + t10955 + t10958 - 1.*t10251*t10830*t8787 + t9677) + t10184*t8798*t9976 + t8753*t8798*t9980)*var2[5] + (t10587*t8753 + t10559*t8787 + t8931*(t10963 + t10978 + t10830*t8753 + t10184*t9045) + t8787*(t10091 + t10955 - 1.*t10830*t8787 - 1.*t8753*t9045))*var2[9];
  p_output1[35]=t9192*var2[0] + t8893*var2[1] + (t2171*t8794 + t8797*t8885)*var2[2] + ((t11093 + t10932*t8909 + t10924*t9106)*t9192 + t9106*(t11102 + t11108 - 1.*t10932*t8885 - 1.*t10854*t9099 - 1.*t10868*t9114 - 1.*t10924*t9192) + t10854*t9275)*var2[3] + (t8794*(t11093 + t10830*t6261*t8798 - 1.*t10892*t8790*t8798) + t2961*t8798*(t11072 + t11075 + t11102 + t11108 - 1.*t10892*t8883 - 1.*t10852*t9089) + t10861*t9625)*var2[4] + (t10061*t10184*t8798 + t6261*(t11072 + t11075 - 1.*t10251*t10830*t8753 - 1.*t10816*t8787 - 1.*t8753*t9075 + t10184*t6261*t9087))*var2[5] + 0.068*t8753*var2[9] + (-0.325*t8722 - 1.*t10799*t8722 - 1.*t8722*t9041)*var2[10];
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 18, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_RlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
