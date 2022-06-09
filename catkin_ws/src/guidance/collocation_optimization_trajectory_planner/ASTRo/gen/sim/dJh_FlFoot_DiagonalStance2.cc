/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:46 GMT+02:00
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
  double t2367;
  double t2378;
  double t2387;
  double t2395;
  double t2397;
  double t2399;
  double t2450;
  double t2551;
  double t1753;
  double t2136;
  double t2555;
  double t2697;
  double t2456;
  double t2559;
  double t2611;
  double t1740;
  double t2707;
  double t2733;
  double t2749;
  double t2752;
  double t2774;
  double t2794;
  double t2824;
  double t2832;
  double t2852;
  double t2878;
  double t2889;
  double t2984;
  double t2994;
  double t2997;
  double t3037;
  double t3042;
  double t3044;
  double t3208;
  double t3250;
  double t3269;
  double t3274;
  double t3376;
  double t3490;
  double t3851;
  double t3949;
  double t3963;
  double t3981;
  double t4018;
  double t4049;
  double t4992;
  double t5005;
  double t5009;
  double t5105;
  double t5106;
  double t5107;
  double t5108;
  double t5109;
  double t5114;
  double t5115;
  double t5116;
  double t5117;
  double t5119;
  double t5121;
  double t5122;
  double t5123;
  double t5130;
  double t5104;
  double t5110;
  double t5111;
  double t5112;
  double t5131;
  double t5133;
  double t5135;
  double t5136;
  double t5138;
  double t5139;
  double t5150;
  double t5161;
  double t5166;
  double t5171;
  double t5183;
  double t5184;
  double t5113;
  double t5167;
  double t5168;
  double t5199;
  double t5203;
  double t5204;
  double t5092;
  double t5099;
  double t5103;
  double t5191;
  double t5192;
  double t5193;
  double t5216;
  double t5218;
  double t5221;
  double t5293;
  double t5319;
  double t5347;
  double t9902;
  double t9908;
  double t9914;
  double t5194;
  double t9954;
  double t9959;
  double t9960;
  double t5231;
  double t10048;
  double t10049;
  double t10053;
  double t5195;
  double t5205;
  double t5206;
  double t9982;
  double t9983;
  double t10012;
  double t10013;
  double t10023;
  double t10045;
  double t10055;
  double t5232;
  double t5237;
  double t5238;
  double t7989;
  double t8366;
  double t10179;
  double t10185;
  double t10198;
  double t10209;
  double t7997;
  double t8008;
  double t8188;
  double t8438;
  double t8620;
  double t8658;
  double t9307;
  double t9785;
  double t9362;
  double t9380;
  double t9385;
  double t10071;
  double t10074;
  double t10303;
  double t10304;
  double t10309;
  double t10311;
  double t9786;
  double t9807;
  double t9816;
  double t9915;
  double t9916;
  double t9920;
  double t9922;
  double t9923;
  double t9924;
  double t9931;
  double t9932;
  double t9936;
  double t9948;
  double t9950;
  double t9951;
  double t12158;
  double t12305;
  double t12516;
  double t13008;
  double t13015;
  double t10025;
  double t13163;
  double t13166;
  double t13170;
  double t13181;
  double t13183;
  double t13187;
  double t10054;
  double t10060;
  double t10061;
  double t10062;
  double t10066;
  double t10069;
  double t13190;
  double t10080;
  double t10084;
  double t13272;
  double t10099;
  double t10101;
  double t10107;
  double t10124;
  double t10125;
  double t10129;
  double t10131;
  double t10132;
  double t10133;
  double t10135;
  double t10137;
  double t10176;
  double t10180;
  double t10189;
  double t10190;
  double t10192;
  double t10195;
  double t10201;
  double t10212;
  double t10216;
  double t10218;
  double t10221;
  double t13635;
  double t10227;
  double t10232;
  double t13663;
  double t10254;
  double t10255;
  double t10258;
  double t10262;
  double t10268;
  double t10269;
  double t10271;
  double t10272;
  double t10285;
  double t10286;
  double t10287;
  double t10292;
  double t10295;
  double t10296;
  double t10297;
  double t10301;
  double t10305;
  double t10310;
  double t10314;
  double t10315;
  double t10317;
  double t10318;
  double t10349;
  double t14004;
  double t11036;
  double t11039;
  double t14017;
  double t11375;
  double t11531;
  double t11551;
  double t14056;
  double t14061;
  double t14066;
  double t14080;
  double t14081;
  double t14082;
  double t14112;
  double t14113;
  double t14114;
  double t14116;
  double t14118;
  double t14119;
  double t14152;
  double t14153;
  double t14154;
  double t14156;
  double t14157;
  double t14161;
  double t14155;
  double t14177;
  double t14178;
  double t14192;
  double t14200;
  double t14472;
  double t14566;
  double t14569;
  double t14570;
  double t14613;
  double t14617;
  double t14618;
  double t15207;
  double t15215;
  double t15565;
  double t15602;
  double t15280;
  double t14078;
  double t14104;
  double t14105;
  double t15705;
  double t15716;
  double t15739;
  double t2910;
  double t2915;
  double t2933;
  double t15802;
  double t15814;
  double t15817;
  double t14108;
  double t14109;
  double t14110;
  double t4234;
  double t4344;
  double t4981;
  double t15859;
  double t15860;
  double t15862;
  double t15863;
  double t15864;
  double t15865;
  double t15867;
  double t15868;
  double t15870;
  double t15875;
  double t15876;
  double t15877;
  double t15866;
  double t15880;
  double t15881;
  double t15886;
  double t15887;
  double t15888;
  double t15883;
  double t15895;
  double t15897;
  double t15898;
  double t15901;
  double t15902;
  double t15903;
  double t15885;
  double t15909;
  double t15910;
  double t15911;
  double t14964;
  double t15119;
  double t15225;
  double t15242;
  double t15254;
  double t15389;
  double t15404;
  double t15424;
  double t15944;
  double t15951;
  double t15694;
  double t15695;
  double t15696;
  double t15977;
  double t15981;
  double t15983;
  double t15917;
  double t15918;
  double t15920;
  double t15782;
  double t15784;
  double t15785;
  double t15788;
  double t15789;
  double t15790;
  double t15792;
  double t16033;
  double t16057;
  t2367 = Cos(var1[7]);
  t2378 = Cos(var1[8]);
  t2387 = t2367*t2378;
  t2395 = Sin(var1[7]);
  t2397 = Sin(var1[8]);
  t2399 = t2395*t2397;
  t2450 = t2387 + t2399;
  t2551 = Cos(var1[5]);
  t1753 = Cos(var1[6]);
  t2136 = Sin(var1[5]);
  t2555 = Sin(var1[6]);
  t2697 = Cos(var1[3]);
  t2456 = t1753*t2136*t2450;
  t2559 = t2551*t2555*t2450;
  t2611 = t2456 + t2559;
  t1740 = Sin(var1[3]);
  t2707 = Cos(var1[4]);
  t2733 = -1.*t2378*t2395;
  t2749 = t2367*t2397;
  t2752 = t2733 + t2749;
  t2774 = t2707*t2752;
  t2794 = Sin(var1[4]);
  t2824 = t2551*t1753*t2450;
  t2832 = -1.*t2136*t2555*t2450;
  t2852 = t2824 + t2832;
  t2878 = -1.*t2794*t2852;
  t2889 = t2774 + t2878;
  t2984 = -1.*t1753*t2136;
  t2994 = -1.*t2551*t2555;
  t2997 = t2984 + t2994;
  t3037 = t2551*t1753;
  t3042 = -1.*t2136*t2555;
  t3044 = t3037 + t3042;
  t3208 = t2378*t2395;
  t3250 = -1.*t2367*t2397;
  t3269 = t3208 + t3250;
  t3274 = t1753*t2136*t3269;
  t3376 = t2551*t2555*t3269;
  t3490 = t3274 + t3376;
  t3851 = t2707*t2450;
  t3949 = t2551*t1753*t3269;
  t3963 = -1.*t2136*t2555*t3269;
  t3981 = t3949 + t3963;
  t4018 = -1.*t2794*t3981;
  t4049 = t3851 + t4018;
  t4992 = -1.*t2794*t2752;
  t5005 = -1.*t2707*t2852;
  t5009 = t4992 + t5005;
  t5105 = -1.*t2378;
  t5106 = 1. + t5105;
  t5107 = 0.50321*t5106;
  t5108 = 0.19821*t2378;
  t5109 = t5107 + t5108;
  t5114 = -1.*t1753;
  t5115 = 1. + t5114;
  t5116 = 0.15121*t5115;
  t5117 = -1.*t2367;
  t5119 = 1. + t5117;
  t5121 = 0.28121*t5119;
  t5122 = t2367*t5109;
  t5123 = -0.305*t2395*t2397;
  t5130 = t5121 + t5122 + t5123;
  t5104 = 0.28121*t2395;
  t5110 = -1.*t5109*t2395;
  t5111 = -0.305*t2367*t2397;
  t5112 = t5104 + t5110 + t5111;
  t5131 = t1753*t5130;
  t5133 = t5116 + t5131;
  t5135 = t2551*t5133;
  t5136 = 0.15121*t1753;
  t5138 = -0.15121*t2555;
  t5139 = t2555*t5130;
  t5150 = t5116 + t5136 + t5138 + t5139;
  t5161 = -1.*t2136*t5150;
  t5166 = t5135 + t5161;
  t5171 = t2794*t5112;
  t5183 = t2707*t5166;
  t5184 = t5171 + t5183;
  t5113 = -1.*t2794*t5112;
  t5167 = -1.*t2707*t5166;
  t5168 = t5113 + t5167;
  t5199 = t2707*t5112;
  t5203 = -1.*t2794*t5166;
  t5204 = t5199 + t5203;
  t5092 = t2794*t2450;
  t5099 = t2707*t3981;
  t5103 = t5092 + t5099;
  t5191 = t2136*t5133;
  t5192 = t2551*t5150;
  t5193 = t5191 + t5192;
  t5216 = -1.*t2794*t2450;
  t5218 = -1.*t2707*t3981;
  t5221 = t5216 + t5218;
  t5293 = t2794*t2752;
  t5319 = t2707*t2852;
  t5347 = t5293 + t5319;
  t9902 = -1.*t1753*t2136*t2450;
  t9908 = -1.*t2551*t2555*t2450;
  t9914 = t9902 + t9908;
  t5194 = -1.*t3044*t5193;
  t9954 = -1.*t2136*t5133;
  t9959 = -1.*t2551*t5150;
  t9960 = t9954 + t9959;
  t5231 = t3490*t5193;
  t10048 = -1.*t1753*t2136*t3269;
  t10049 = -1.*t2551*t2555*t3269;
  t10053 = t10048 + t10049;
  t5195 = -1.*t2707*t2997*t5184;
  t5205 = t2794*t2997*t5204;
  t5206 = t5194 + t5195 + t5205;
  t9982 = -1.*t2997*t5193;
  t9983 = -1.*t3044*t5166;
  t10012 = -1.*t2551*t1753;
  t10013 = t2136*t2555;
  t10023 = t10012 + t10013;
  t10045 = t3981*t5193;
  t10055 = t3490*t5166;
  t5232 = t5103*t5184;
  t5237 = t4049*t5204;
  t5238 = t5231 + t5232 + t5237;
  t7989 = -1.*t3490*t5193;
  t8366 = t2611*t5193;
  t10179 = -1.*t3981*t5193;
  t10185 = -1.*t3490*t5166;
  t10198 = t2852*t5193;
  t10209 = t2611*t5166;
  t7997 = -1.*t5103*t5184;
  t8008 = -1.*t4049*t5204;
  t8188 = t7989 + t7997 + t8008;
  t8438 = t5347*t5184;
  t8620 = t2889*t5204;
  t8658 = t8366 + t8438 + t8620;
  t9307 = t3044*t5193;
  t9785 = -1.*t2611*t5193;
  t9362 = t2707*t2997*t5184;
  t9380 = -1.*t2794*t2997*t5204;
  t9385 = t9307 + t9362 + t9380;
  t10071 = Power(t2707,2);
  t10074 = Power(t2794,2);
  t10303 = t2997*t5193;
  t10304 = t3044*t5166;
  t10309 = -1.*t2852*t5193;
  t10311 = -1.*t2611*t5166;
  t9786 = -1.*t5347*t5184;
  t9807 = -1.*t2889*t5204;
  t9816 = t9785 + t9786 + t9807;
  t9915 = var2[0]*t2707*t9914;
  t9916 = t1740*t2794*t9914;
  t9920 = t2697*t2852;
  t9922 = t9916 + t9920;
  t9923 = var2[1]*t9922;
  t9924 = -1.*t2697*t2794*t9914;
  t9931 = t1740*t2852;
  t9932 = t9924 + t9931;
  t9936 = var2[2]*t9932;
  t9948 = -1.*t2997*t5166;
  t9950 = t5194 + t9948;
  t9951 = t3981*t9950;
  t12158 = -0.15121*t1753;
  t12305 = t12158 + t5131;
  t12516 = 0.15121*t2555;
  t13008 = -1.*t2555*t5130;
  t13015 = t12516 + t13008;
  t10025 = -1.*t10023*t5166;
  t13163 = -1.*t2136*t12305;
  t13166 = t2551*t13015;
  t13170 = t13163 + t13166;
  t13181 = t2551*t12305;
  t13183 = t2136*t13015;
  t13187 = t13181 + t13183;
  t10054 = t10053*t5166;
  t10060 = t5112*t2450;
  t10061 = t3981*t5166;
  t10062 = t10060 + t5231 + t10061;
  t10066 = t2997*t10062;
  t10069 = t2707*t10053*t5206;
  t13190 = -1.*t3044*t13187;
  t10080 = -1.*t2707*t10023*t5184;
  t10084 = t2794*t10023*t5204;
  t13272 = t3490*t13187;
  t10099 = t2707*t10053*t5184;
  t10101 = -1.*t2794*t10053*t5204;
  t10107 = t2707*t10023*t5238;
  t10124 = var2[0]*t2707*t10023;
  t10125 = t1740*t2997;
  t10129 = -1.*t2697*t2794*t10023;
  t10131 = t10125 + t10129;
  t10132 = var2[2]*t10131;
  t10133 = t2697*t2997;
  t10135 = t1740*t2794*t10023;
  t10137 = t10133 + t10135;
  t10176 = var2[1]*t10137;
  t10180 = -1.*t10053*t5166;
  t10189 = -1.*t5112*t2450;
  t10190 = -1.*t3981*t5166;
  t10192 = t10189 + t7989 + t10190;
  t10195 = t2852*t10192;
  t10201 = t9914*t5166;
  t10212 = t5112*t2752;
  t10216 = t2852*t5166;
  t10218 = t10212 + t8366 + t10216;
  t10221 = t3981*t10218;
  t13635 = -1.*t3490*t13187;
  t10227 = -1.*t2707*t10053*t5184;
  t10232 = t2794*t10053*t5204;
  t13663 = t2611*t13187;
  t10254 = t2707*t9914*t5184;
  t10255 = -1.*t2794*t9914*t5204;
  t10258 = t2707*t9914*t8188;
  t10262 = t2707*t10053*t8658;
  t10268 = var2[0]*t2707*t10053;
  t10269 = t1740*t2794*t10053;
  t10271 = t2697*t3981;
  t10272 = t10269 + t10271;
  t10285 = var2[1]*t10272;
  t10286 = -1.*t2697*t2794*t10053;
  t10287 = t1740*t3981;
  t10292 = t10286 + t10287;
  t10295 = var2[2]*t10292;
  t10296 = t2997*t5166;
  t10297 = t9307 + t10296;
  t10301 = t2852*t10297;
  t10305 = t10023*t5166;
  t10310 = -1.*t9914*t5166;
  t10314 = -1.*t5112*t2752;
  t10315 = -1.*t2852*t5166;
  t10317 = t10314 + t9785 + t10315;
  t10318 = t2997*t10317;
  t10349 = t2707*t9914*t9385;
  t14004 = t3044*t13187;
  t11036 = t2707*t10023*t5184;
  t11039 = -1.*t2794*t10023*t5204;
  t14017 = -1.*t2611*t13187;
  t11375 = -1.*t2707*t9914*t5184;
  t11531 = t2794*t9914*t5204;
  t11551 = t2707*t10023*t9816;
  t14056 = -1.*t2367*t2378;
  t14061 = -1.*t2395*t2397;
  t14066 = t14056 + t14061;
  t14080 = t2551*t1753*t2752;
  t14081 = -1.*t2136*t2555*t2752;
  t14082 = t14080 + t14081;
  t14112 = t1753*t2136*t2752;
  t14113 = t2551*t2555*t2752;
  t14114 = t14112 + t14113;
  t14116 = t2707*t14066;
  t14118 = -1.*t2794*t14082;
  t14119 = t14116 + t14118;
  t14152 = t1753*t2136*t5112;
  t14153 = t2551*t2555*t5112;
  t14154 = t14152 + t14153;
  t14156 = t2551*t1753*t5112;
  t14157 = -1.*t2136*t2555*t5112;
  t14161 = t14156 + t14157;
  t14155 = -1.*t3044*t14154;
  t14177 = 0.28121*t2367;
  t14178 = -1.*t2367*t5109;
  t14192 = 0.305*t2395*t2397;
  t14200 = t14177 + t14178 + t14192;
  t14472 = t3490*t14154;
  t14566 = t2794*t14200;
  t14569 = t2707*t14161;
  t14570 = t14566 + t14569;
  t14613 = t2707*t14200;
  t14617 = -1.*t2794*t14161;
  t14618 = t14613 + t14617;
  t15207 = t5112*t14066;
  t15215 = t2752*t14200;
  t15565 = Power(t1753,2);
  t15602 = Power(t2555,2);
  t15280 = -1.*t14200*t2450;
  t14078 = t2794*t14066;
  t14104 = t2707*t14082;
  t14105 = t14078 + t14104;
  t15705 = t14154*t2611;
  t15716 = t14114*t5193;
  t15739 = -1.*t3490*t14154;
  t2910 = t2697*t2611;
  t2915 = -1.*t1740*t2889;
  t2933 = t2910 + t2915;
  t15802 = t3044*t14154;
  t15814 = -1.*t14154*t2611;
  t15817 = -1.*t14114*t5193;
  t14108 = t2555*t5133;
  t14109 = -1.*t1753*t5150;
  t14110 = t14108 + t14109;
  t4234 = t2697*t3490;
  t4344 = -1.*t1740*t4049;
  t4981 = t4234 + t4344;
  t15859 = -0.305*t2378*t2395;
  t15860 = 0.305*t2367*t2397;
  t15862 = t15859 + t15860;
  t15863 = t1753*t2136*t15862;
  t15864 = t2551*t2555*t15862;
  t15865 = t15863 + t15864;
  t15867 = t2551*t1753*t15862;
  t15868 = -1.*t2136*t2555*t15862;
  t15870 = t15867 + t15868;
  t15875 = t1753*t2136*t14066;
  t15876 = t2551*t2555*t14066;
  t15877 = t15875 + t15876;
  t15866 = -1.*t3044*t15865;
  t15880 = -0.305*t2367*t2378;
  t15881 = t15880 + t5123;
  t15886 = t2551*t1753*t14066;
  t15887 = -1.*t2136*t2555*t14066;
  t15888 = t15886 + t15887;
  t15883 = t3490*t15865;
  t15895 = t2794*t15881;
  t15897 = t2707*t15870;
  t15898 = t15895 + t15897;
  t15901 = t2707*t15881;
  t15902 = -1.*t2794*t15870;
  t15903 = t15901 + t15902;
  t15885 = t15877*t5193;
  t15909 = t2794*t3269;
  t15910 = t2707*t15888;
  t15911 = t15909 + t15910;
  t14964 = -1.*t3269*t5130;
  t15119 = t14964 + t10189;
  t15225 = t5130*t2450;
  t15242 = t10212 + t15225;
  t15254 = -1.*t3269*t5112;
  t15389 = -1.*t1753*t3269*t5133;
  t15404 = -1.*t2555*t3269*t5150;
  t15424 = t10189 + t15389 + t15404;
  t15944 = t2752*t15881;
  t15951 = -1.*t15881*t2450;
  t15694 = t1753*t2450*t5133;
  t15695 = t2555*t2450*t5150;
  t15696 = t10212 + t15694 + t15695;
  t15977 = t15865*t2611;
  t15981 = -1.*t3490*t15865;
  t15983 = -1.*t15877*t5193;
  t15917 = t2707*t3269;
  t15918 = -1.*t2794*t15888;
  t15920 = t15917 + t15918;
  t15782 = 0.15121*t14066;
  t15784 = 0.15121*t2450;
  t15785 = t15782 + t15784;
  t15788 = var2[6]*t15785;
  t15789 = -1.*t2555*t5133;
  t15790 = t1753*t5150;
  t15792 = t15789 + t15790;
  t16033 = t3044*t15865;
  t16057 = -1.*t15865*t2611;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1740*t2611 - 1.*t2697*t2889)*var2[1] + t2933*var2[2];
  p_output1[10]=(t2697*t2794*t2997 - 1.*t1740*t3044)*var2[1] + (t1740*t2794*t2997 + t2697*t3044)*var2[2];
  p_output1[11]=(-1.*t1740*t3490 - 1.*t2697*t4049)*var2[1] + t4981*var2[2];
  p_output1[12]=t2889*var2[0] - 1.*t1740*t5009*var2[1] + t2697*t5009*var2[2] + (t5103*(t2794*t2997*t5168 + t2794*t2997*t5184) + t4049*t5206 + t2707*t2997*(t4049*t5168 + t4049*t5184 + t5103*t5204 + t5204*t5221) - 1.*t2794*t2997*t5238)*var2[3];
  p_output1[13]=-1.*t2794*t2997*var2[0] + t1740*t2707*t2997*var2[1] - 1.*t2697*t2707*t2997*var2[2] + ((-1.*t4049*t5168 - 1.*t4049*t5184 - 1.*t5103*t5204 - 1.*t5204*t5221)*t5347 + t5103*(t2889*t5168 + t2889*t5184 + t5009*t5204 + t5204*t5347) + t2889*t8188 + t4049*t8658)*var2[3];
  p_output1[14]=t4049*var2[0] - 1.*t1740*t5221*var2[1] + t2697*t5221*var2[2] + ((-1.*t2794*t2997*t5168 - 1.*t2794*t2997*t5184)*t5347 + t2707*t2997*(-1.*t2889*t5168 - 1.*t2889*t5184 - 1.*t5009*t5204 - 1.*t5204*t5347) + t2889*t9385 - 1.*t2794*t2997*t9816)*var2[3];
  p_output1[15]=t9915 + t9923 + t9936 + (t10069 + t10107 + t2707*t2997*(t10045 + t10055 + t10099 + t10101 - 1.*t2794*t4049*t9960 + t2707*t5103*t9960) + t5103*(t10080 + t10084 - 1.*t10071*t2997*t9960 - 1.*t10074*t2997*t9960 + t9982 + t9983))*var2[3] + (t10066 + t9951 + t3044*(t10045 + t10054 + t10055 + t3981*t9960) + t3490*(t10025 - 1.*t2997*t9960 + t9982 + t9983))*var2[4];
  p_output1[16]=t10124 + t10132 + t10176 + (t10258 + t10262 + t5347*(t10179 + t10185 + t10227 + t10232 + t2794*t4049*t9960 - 1.*t2707*t5103*t9960) + t5103*(t10198 + t10209 + t10254 + t10255 - 1.*t2794*t2889*t9960 + t2707*t5347*t9960))*var2[3] + (t10195 + t10221 + t3490*(t10198 + t10201 + t10209 + t2852*t9960) + t2611*(t10179 + t10180 + t10185 - 1.*t3981*t9960))*var2[4];
  p_output1[17]=t10268 + t10285 + t10295 + (t10349 + t11551 + t5347*(t10303 + t10304 + t11036 + t11039 + t10071*t2997*t9960 + t10074*t2997*t9960) + t2707*t2997*(t10309 + t10311 + t11375 + t11531 + t2794*t2889*t9960 - 1.*t2707*t5347*t9960))*var2[3] + (t10301 + t10318 + t3044*(t10309 + t10310 + t10311 - 1.*t2852*t9960) + t2611*(t10303 + t10304 + t10305 + t2997*t9960))*var2[4];
  p_output1[18]=t9915 + t9923 + t9936 + (t10069 + t10107 + t2707*t2997*(t10045 + t10099 + t10101 + t13272 - 1.*t13170*t2794*t4049 + t13170*t2707*t5103) + t5103*(t10080 + t10084 + t13190 - 1.*t10071*t13170*t2997 - 1.*t10074*t13170*t2997 + t9982))*var2[3] + (t10066 + t3044*(t10045 + t10054 + t13272 + t13170*t3981) + t9951 + t3490*(t10025 + t13190 - 1.*t13170*t2997 + t9982))*var2[4] + t2450*(-1.*t12305*t1753 + t13015*t2555 + t1753*t5133 + t2555*t5150)*var2[5];
  p_output1[19]=t10124 + t10132 + t10176 + (t10258 + t10262 + (t10179 + t10227 + t10232 + t13635 + t13170*t2794*t4049 - 1.*t13170*t2707*t5103)*t5347 + t5103*(t10198 + t10254 + t10255 + t13663 - 1.*t13170*t2794*t2889 + t13170*t2707*t5347))*var2[3] + (t10195 + t10221 + (t10198 + t10201 + t13663 + t13170*t2852)*t3490 + t2611*(t10179 + t10180 + t13635 - 1.*t13170*t3981))*var2[4] + (t2450*(t13015*t1753*t2450 + t12305*t2450*t2555 - 1.*t2450*t2555*t5133 + t1753*t2450*t5150) + t2752*(-1.*t13015*t1753*t3269 - 1.*t12305*t2555*t3269 + t2555*t3269*t5133 - 1.*t1753*t3269*t5150))*var2[5];
  p_output1[20]=t10268 + t10285 + t10295 + (t10349 + t11551 + (t10303 + t11036 + t11039 + t14004 + t10071*t13170*t2997 + t10074*t13170*t2997)*t5347 + t2707*t2997*(t10309 + t11375 + t11531 + t14017 + t13170*t2794*t2889 - 1.*t13170*t2707*t5347))*var2[3] + (t10301 + t10318 + t2611*(t10303 + t10305 + t14004 + t13170*t2997) + (t10309 + t10310 + t14017 - 1.*t13170*t2852)*t3044)*var2[4] + t2752*(t12305*t1753 - 1.*t13015*t2555 - 1.*t1753*t5133 - 1.*t2555*t5150)*var2[5];
  p_output1[21]=t14105*var2[0] + (-1.*t14119*t1740 + t14114*t2697)*var2[1] + (t14114*t1740 + t14119*t2697)*var2[2] + ((t14155 - 1.*t14570*t2707*t2997 + t14618*t2794*t2997)*t5103 + t5206*t5347 + t2707*t2997*(t14472 + t14618*t4049 + t14570*t5103 + t8366 + t8438 + t8620))*var2[3] + ((t14155 - 1.*t14161*t2997)*t3490 + t3044*(t10212 + t10216 + t14472 + t14200*t2450 + t14161*t3981 + t8366) + t2611*t9950)*var2[4] + t14110*t2752*var2[5];
  p_output1[22]=(t5103*(t15705 + t15716 + t14618*t2889 + t14105*t5184 + t14119*t5204 + t14570*t5347) + t14105*t8188 + t5347*t8658 + t5347*(t15739 - 1.*t14618*t4049 - 1.*t14570*t5103 + t9785 + t9786 + t9807))*var2[3] + (t10192*t14114 + t10218*t2611 + t3490*(t15207 + t15215 + t15705 + t15716 + t14161*t2852 + t14082*t5166) + t2611*(t10314 + t10315 + t15280 + t15739 - 1.*t14161*t3981 + t9785))*var2[4] + (t14066*t15424 + t15696*t2752 + t2752*(t10314 + t15280 - 1.*t15565*t3269*t5112 - 1.*t15602*t3269*t5112 - 1.*t1753*t2450*t5133 - 1.*t2450*t2555*t5150) + t2450*(t15207 + t15215 + t15565*t2450*t5112 + t15602*t2450*t5112 + t1753*t2752*t5133 + t2555*t2752*t5150))*var2[5] + (t14066*t15119 + t15242*t2752 + t2752*(t10314 + t15254 + t15280 - 1.*t2450*t5130) + t2450*(t10060 + t15207 + t15215 + t2752*t5130))*var2[6];
  p_output1[23]=t15788 + t5347*var2[0] + t2933*var2[1] + (t1740*t2611 + t2697*t2889)*var2[2] + ((t15802 + t14570*t2707*t2997 - 1.*t14618*t2794*t2997)*t5347 + t2707*t2997*(t15814 + t15817 - 1.*t14618*t2889 - 1.*t14105*t5184 - 1.*t14119*t5204 - 1.*t14570*t5347) + t14105*t9385)*var2[3] + (t10297*t14114 + t2611*(t15802 + t14161*t2997) + t3044*(t15814 + t15817 - 1.*t14200*t2752 - 1.*t14161*t2852 - 1.*t14066*t5112 - 1.*t14082*t5166))*var2[4] + t14066*t15792*var2[5];
  p_output1[24]=t5103*var2[0] + t4981*var2[1] + (t1740*t3490 + t2697*t4049)*var2[2] + ((t15866 - 1.*t15898*t2707*t2997 + t15903*t2794*t2997)*t5103 + t2707*t2997*(t15883 + t15885 + t15903*t4049 + t15898*t5103 + t15911*t5184 + t15920*t5204) + t15911*t5206)*var2[3] + ((t15866 - 1.*t15870*t2997)*t3490 + t3044*(t15883 + t15885 + t15881*t2450 + t15870*t3981 + t3269*t5112 + t15888*t5166) + t15877*t9950)*var2[4] + t14110*t3269*var2[5] + (0.28121*t2378 - 0.305*Power(t2378,2) - 1.*t2378*t5109)*var2[7];
  p_output1[25]=((t15981 + t15983 - 1.*t15903*t4049 - 1.*t15898*t5103 - 1.*t15911*t5184 - 1.*t15920*t5204)*t5347 + t5103*(t15977 + t15903*t2889 + t5231 + t5232 + t5237 + t15898*t5347) + t5103*t8188 + t15911*t8658)*var2[3] + (t10218*t15877 + t10192*t3490 + t2611*(t15254 + t15951 + t15981 + t15983 - 1.*t15870*t3981 - 1.*t15888*t5166) + t3490*(t10060 + t10061 + t15944 + t15977 + t15870*t2852 + t5231))*var2[4] + (t15424*t2450 + t15696*t3269 + t2752*(t15254 + t15951 - 1.*t15565*t15862*t3269 - 1.*t15602*t15862*t3269 - 1.*t14066*t1753*t5133 - 1.*t14066*t2555*t5150) + t2450*(t10060 + t15944 + t15565*t15862*t2450 + t15602*t15862*t2450 + t1753*t3269*t5133 + t2555*t3269*t5150))*var2[5] + (t15119*t2450 + t15242*t3269 + t2752*(t15254 + t15951 - 1.*t15862*t3269 - 1.*t14066*t5130) + t2450*(t10060 + t15944 + t15862*t2450 + t3269*t5130))*var2[6];
  p_output1[26]=t15788 + t15911*var2[0] + (-1.*t15920*t1740 + t15877*t2697)*var2[1] + (t15877*t1740 + t15920*t2697)*var2[2] + ((t16033 + t15898*t2707*t2997 - 1.*t15903*t2794*t2997)*t5347 + t2707*t2997*(t16057 - 1.*t15903*t2889 - 1.*t15898*t5347 + t7989 + t7997 + t8008) + t5103*t9385)*var2[3] + (t2611*(t16033 + t15870*t2997) + t10297*t3490 + t3044*(t10189 + t10190 + t16057 - 1.*t15881*t2752 - 1.*t15870*t2852 + t7989))*var2[4] + t15792*t2450*var2[5] + (-0.28121*t2397 + 0.305*t2378*t2397 + t2397*t5109)*var2[7];
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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

#include "dJh_FlFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
