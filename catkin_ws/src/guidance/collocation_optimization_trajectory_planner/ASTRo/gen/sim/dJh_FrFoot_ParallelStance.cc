/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 13:04:45 GMT+02:00
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
  double t55462;
  double t55464;
  double t55465;
  double t55487;
  double t55488;
  double t55524;
  double t55533;
  double t55546;
  double t55436;
  double t55454;
  double t55554;
  double t55561;
  double t55534;
  double t55556;
  double t55557;
  double t33089;
  double t55566;
  double t55577;
  double t55578;
  double t55649;
  double t55656;
  double t55657;
  double t55658;
  double t55663;
  double t55664;
  double t55666;
  double t55667;
  double t55681;
  double t55682;
  double t55685;
  double t55687;
  double t55688;
  double t55690;
  double t55699;
  double t55700;
  double t55701;
  double t55702;
  double t55706;
  double t55707;
  double t55715;
  double t55716;
  double t55717;
  double t55718;
  double t55719;
  double t55720;
  double t55730;
  double t55731;
  double t55732;
  double t55755;
  double t55756;
  double t55758;
  double t55759;
  double t55760;
  double t55765;
  double t55766;
  double t55769;
  double t55770;
  double t55783;
  double t55787;
  double t55801;
  double t55805;
  double t55754;
  double t55761;
  double t55762;
  double t55763;
  double t55768;
  double t55806;
  double t55821;
  double t55822;
  double t55823;
  double t55824;
  double t55825;
  double t55826;
  double t55827;
  double t55828;
  double t55829;
  double t55833;
  double t55834;
  double t55835;
  double t55764;
  double t55830;
  double t55831;
  double t55845;
  double t55846;
  double t55847;
  double t55748;
  double t55752;
  double t55753;
  double t55840;
  double t55841;
  double t55842;
  double t55853;
  double t55854;
  double t55855;
  double t55872;
  double t55873;
  double t55874;
  double t55929;
  double t55930;
  double t55931;
  double t55843;
  double t55945;
  double t55946;
  double t55947;
  double t55861;
  double t55960;
  double t55961;
  double t55962;
  double t55844;
  double t55848;
  double t55849;
  double t55949;
  double t55950;
  double t55951;
  double t55952;
  double t55953;
  double t55959;
  double t55964;
  double t55862;
  double t55863;
  double t55864;
  double t55882;
  double t55893;
  double t56006;
  double t56008;
  double t56018;
  double t56020;
  double t55883;
  double t55884;
  double t55885;
  double t55894;
  double t55895;
  double t55896;
  double t55909;
  double t55921;
  double t55910;
  double t55911;
  double t55912;
  double t55975;
  double t55977;
  double t56063;
  double t56064;
  double t56070;
  double t56072;
  double t55922;
  double t55923;
  double t55924;
  double t55932;
  double t55933;
  double t55935;
  double t55936;
  double t55937;
  double t55938;
  double t55939;
  double t55940;
  double t55941;
  double t55942;
  double t55943;
  double t55944;
  double t56103;
  double t56104;
  double t56105;
  double t56101;
  double t55954;
  double t56110;
  double t56111;
  double t56113;
  double t56115;
  double t56116;
  double t56117;
  double t55963;
  double t55967;
  double t55968;
  double t55969;
  double t55970;
  double t55973;
  double t56118;
  double t55979;
  double t55980;
  double t56123;
  double t55985;
  double t55986;
  double t55989;
  double t55995;
  double t55996;
  double t55997;
  double t55998;
  double t55999;
  double t56000;
  double t56002;
  double t56003;
  double t56004;
  double t56007;
  double t56011;
  double t56012;
  double t56015;
  double t56016;
  double t56019;
  double t56023;
  double t56024;
  double t56026;
  double t56027;
  double t56158;
  double t56032;
  double t56033;
  double t56162;
  double t56039;
  double t56040;
  double t56043;
  double t56045;
  double t56049;
  double t56050;
  double t56052;
  double t56053;
  double t56054;
  double t56055;
  double t56056;
  double t56057;
  double t56058;
  double t56059;
  double t56060;
  double t56061;
  double t56066;
  double t56071;
  double t56075;
  double t56076;
  double t56077;
  double t56078;
  double t56082;
  double t56186;
  double t56085;
  double t56086;
  double t56190;
  double t56091;
  double t56092;
  double t56096;
  double t56211;
  double t56212;
  double t56213;
  double t56215;
  double t56216;
  double t56217;
  double t56222;
  double t56223;
  double t56224;
  double t56226;
  double t56227;
  double t56228;
  double t56236;
  double t56237;
  double t56238;
  double t56240;
  double t56242;
  double t56243;
  double t56239;
  double t56248;
  double t56249;
  double t56250;
  double t56251;
  double t56253;
  double t56260;
  double t56261;
  double t56262;
  double t56264;
  double t56265;
  double t56266;
  double t56282;
  double t56284;
  double t56302;
  double t56304;
  double t56293;
  double t56214;
  double t56218;
  double t56220;
  double t56324;
  double t56327;
  double t56331;
  double t55672;
  double t55674;
  double t55676;
  double t56370;
  double t56377;
  double t56379;
  double t56207;
  double t56208;
  double t56209;
  double t55724;
  double t55725;
  double t55727;
  double t56415;
  double t56416;
  double t56417;
  double t56419;
  double t56420;
  double t56421;
  double t56423;
  double t56424;
  double t56425;
  double t56429;
  double t56430;
  double t56431;
  double t56422;
  double t56434;
  double t56436;
  double t56441;
  double t56442;
  double t56444;
  double t56438;
  double t56440;
  double t56451;
  double t56452;
  double t56453;
  double t56455;
  double t56456;
  double t56457;
  double t56461;
  double t56462;
  double t56463;
  double t56279;
  double t56280;
  double t56287;
  double t56288;
  double t56290;
  double t56298;
  double t56299;
  double t56300;
  double t56480;
  double t56488;
  double t56317;
  double t56318;
  double t56319;
  double t56511;
  double t56515;
  double t56517;
  double t56469;
  double t56470;
  double t56471;
  double t56354;
  double t56355;
  double t56356;
  double t56357;
  double t56358;
  double t56359;
  double t56360;
  double t56557;
  double t56563;
  t55462 = Cos(var1[13]);
  t55464 = Cos(var1[14]);
  t55465 = t55462*t55464;
  t55487 = Sin(var1[13]);
  t55488 = Sin(var1[14]);
  t55524 = t55487*t55488;
  t55533 = t55465 + t55524;
  t55546 = Cos(var1[12]);
  t55436 = Cos(var1[5]);
  t55454 = Sin(var1[12]);
  t55554 = Sin(var1[5]);
  t55561 = Cos(var1[3]);
  t55534 = t55436*t55454*t55533;
  t55556 = t55546*t55533*t55554;
  t55557 = t55534 + t55556;
  t33089 = Sin(var1[3]);
  t55566 = Cos(var1[4]);
  t55577 = -1.*t55464*t55487;
  t55578 = t55462*t55488;
  t55649 = t55577 + t55578;
  t55656 = t55566*t55649;
  t55657 = Sin(var1[4]);
  t55658 = t55546*t55436*t55533;
  t55663 = -1.*t55454*t55533*t55554;
  t55664 = t55658 + t55663;
  t55666 = -1.*t55657*t55664;
  t55667 = t55656 + t55666;
  t55681 = -1.*t55436*t55454;
  t55682 = -1.*t55546*t55554;
  t55685 = t55681 + t55682;
  t55687 = t55546*t55436;
  t55688 = -1.*t55454*t55554;
  t55690 = t55687 + t55688;
  t55699 = t55464*t55487;
  t55700 = -1.*t55462*t55488;
  t55701 = t55699 + t55700;
  t55702 = t55436*t55454*t55701;
  t55706 = t55546*t55701*t55554;
  t55707 = t55702 + t55706;
  t55715 = t55566*t55533;
  t55716 = t55546*t55436*t55701;
  t55717 = -1.*t55454*t55701*t55554;
  t55718 = t55716 + t55717;
  t55719 = -1.*t55657*t55718;
  t55720 = t55715 + t55719;
  t55730 = -1.*t55649*t55657;
  t55731 = -1.*t55566*t55664;
  t55732 = t55730 + t55731;
  t55755 = -1.*t55464;
  t55756 = 1. + t55755;
  t55758 = 0.50321*t55756;
  t55759 = 0.19821*t55464;
  t55760 = t55758 + t55759;
  t55765 = -1.*t55546;
  t55766 = 1. + t55765;
  t55769 = -1.*t55462;
  t55770 = 1. + t55769;
  t55783 = 0.28121*t55770;
  t55787 = t55462*t55760;
  t55801 = -0.305*t55487*t55488;
  t55805 = t55783 + t55787 + t55801;
  t55754 = 0.28121*t55487;
  t55761 = -1.*t55760*t55487;
  t55762 = -0.305*t55462*t55488;
  t55763 = t55754 + t55761 + t55762;
  t55768 = 0.15121*t55766;
  t55806 = t55546*t55805;
  t55821 = t55768 + t55806;
  t55822 = t55436*t55821;
  t55823 = -0.15121*t55766;
  t55824 = -0.15121*t55546;
  t55825 = -0.15121*t55454;
  t55826 = t55454*t55805;
  t55827 = t55823 + t55824 + t55825 + t55826;
  t55828 = -1.*t55827*t55554;
  t55829 = t55822 + t55828;
  t55833 = t55763*t55657;
  t55834 = t55566*t55829;
  t55835 = t55833 + t55834;
  t55764 = -1.*t55763*t55657;
  t55830 = -1.*t55566*t55829;
  t55831 = t55764 + t55830;
  t55845 = t55566*t55763;
  t55846 = -1.*t55657*t55829;
  t55847 = t55845 + t55846;
  t55748 = t55533*t55657;
  t55752 = t55566*t55718;
  t55753 = t55748 + t55752;
  t55840 = t55436*t55827;
  t55841 = t55821*t55554;
  t55842 = t55840 + t55841;
  t55853 = -1.*t55533*t55657;
  t55854 = -1.*t55566*t55718;
  t55855 = t55853 + t55854;
  t55872 = t55649*t55657;
  t55873 = t55566*t55664;
  t55874 = t55872 + t55873;
  t55929 = -1.*t55436*t55454*t55533;
  t55930 = -1.*t55546*t55533*t55554;
  t55931 = t55929 + t55930;
  t55843 = -1.*t55690*t55842;
  t55945 = -1.*t55436*t55827;
  t55946 = -1.*t55821*t55554;
  t55947 = t55945 + t55946;
  t55861 = t55707*t55842;
  t55960 = -1.*t55436*t55454*t55701;
  t55961 = -1.*t55546*t55701*t55554;
  t55962 = t55960 + t55961;
  t55844 = -1.*t55566*t55685*t55835;
  t55848 = t55657*t55685*t55847;
  t55849 = t55843 + t55844 + t55848;
  t55949 = -1.*t55685*t55842;
  t55950 = -1.*t55690*t55829;
  t55951 = -1.*t55546*t55436;
  t55952 = t55454*t55554;
  t55953 = t55951 + t55952;
  t55959 = t55718*t55842;
  t55964 = t55707*t55829;
  t55862 = t55753*t55835;
  t55863 = t55720*t55847;
  t55864 = t55861 + t55862 + t55863;
  t55882 = -1.*t55707*t55842;
  t55893 = t55557*t55842;
  t56006 = -1.*t55718*t55842;
  t56008 = -1.*t55707*t55829;
  t56018 = t55664*t55842;
  t56020 = t55557*t55829;
  t55883 = -1.*t55753*t55835;
  t55884 = -1.*t55720*t55847;
  t55885 = t55882 + t55883 + t55884;
  t55894 = t55874*t55835;
  t55895 = t55667*t55847;
  t55896 = t55893 + t55894 + t55895;
  t55909 = t55690*t55842;
  t55921 = -1.*t55557*t55842;
  t55910 = t55566*t55685*t55835;
  t55911 = -1.*t55657*t55685*t55847;
  t55912 = t55909 + t55910 + t55911;
  t55975 = Power(t55566,2);
  t55977 = Power(t55657,2);
  t56063 = t55685*t55842;
  t56064 = t55690*t55829;
  t56070 = -1.*t55664*t55842;
  t56072 = -1.*t55557*t55829;
  t55922 = -1.*t55874*t55835;
  t55923 = -1.*t55667*t55847;
  t55924 = t55921 + t55922 + t55923;
  t55932 = var2[0]*t55566*t55931;
  t55933 = t33089*t55657*t55931;
  t55935 = t55561*t55664;
  t55936 = t55933 + t55935;
  t55937 = var2[1]*t55936;
  t55938 = -1.*t55561*t55657*t55931;
  t55939 = t33089*t55664;
  t55940 = t55938 + t55939;
  t55941 = var2[2]*t55940;
  t55942 = -1.*t55685*t55829;
  t55943 = t55843 + t55942;
  t55944 = t55718*t55943;
  t56103 = 0.15121*t55454;
  t56104 = -1.*t55454*t55805;
  t56105 = t56103 + t56104;
  t56101 = t55824 + t55806;
  t55954 = -1.*t55953*t55829;
  t56110 = t55436*t56105;
  t56111 = -1.*t56101*t55554;
  t56113 = t56110 + t56111;
  t56115 = t55436*t56101;
  t56116 = t56105*t55554;
  t56117 = t56115 + t56116;
  t55963 = t55962*t55829;
  t55967 = t55763*t55533;
  t55968 = t55718*t55829;
  t55969 = t55967 + t55861 + t55968;
  t55970 = t55685*t55969;
  t55973 = t55566*t55962*t55849;
  t56118 = -1.*t55690*t56117;
  t55979 = -1.*t55566*t55953*t55835;
  t55980 = t55657*t55953*t55847;
  t56123 = t55707*t56117;
  t55985 = t55566*t55962*t55835;
  t55986 = -1.*t55657*t55962*t55847;
  t55989 = t55566*t55953*t55864;
  t55995 = var2[0]*t55566*t55953;
  t55996 = t33089*t55685;
  t55997 = -1.*t55561*t55657*t55953;
  t55998 = t55996 + t55997;
  t55999 = var2[2]*t55998;
  t56000 = t55561*t55685;
  t56002 = t33089*t55657*t55953;
  t56003 = t56000 + t56002;
  t56004 = var2[1]*t56003;
  t56007 = -1.*t55962*t55829;
  t56011 = -1.*t55763*t55533;
  t56012 = -1.*t55718*t55829;
  t56015 = t56011 + t55882 + t56012;
  t56016 = t55664*t56015;
  t56019 = t55931*t55829;
  t56023 = t55763*t55649;
  t56024 = t55664*t55829;
  t56026 = t56023 + t55893 + t56024;
  t56027 = t55718*t56026;
  t56158 = -1.*t55707*t56117;
  t56032 = -1.*t55566*t55962*t55835;
  t56033 = t55657*t55962*t55847;
  t56162 = t55557*t56117;
  t56039 = t55566*t55931*t55835;
  t56040 = -1.*t55657*t55931*t55847;
  t56043 = t55566*t55931*t55885;
  t56045 = t55566*t55962*t55896;
  t56049 = var2[0]*t55566*t55962;
  t56050 = t33089*t55657*t55962;
  t56052 = t55561*t55718;
  t56053 = t56050 + t56052;
  t56054 = var2[1]*t56053;
  t56055 = -1.*t55561*t55657*t55962;
  t56056 = t33089*t55718;
  t56057 = t56055 + t56056;
  t56058 = var2[2]*t56057;
  t56059 = t55685*t55829;
  t56060 = t55909 + t56059;
  t56061 = t55664*t56060;
  t56066 = t55953*t55829;
  t56071 = -1.*t55931*t55829;
  t56075 = -1.*t55763*t55649;
  t56076 = -1.*t55664*t55829;
  t56077 = t56075 + t55921 + t56076;
  t56078 = t55685*t56077;
  t56082 = t55566*t55931*t55912;
  t56186 = t55690*t56117;
  t56085 = t55566*t55953*t55835;
  t56086 = -1.*t55657*t55953*t55847;
  t56190 = -1.*t55557*t56117;
  t56091 = -1.*t55566*t55931*t55835;
  t56092 = t55657*t55931*t55847;
  t56096 = t55566*t55953*t55924;
  t56211 = -1.*t55462*t55464;
  t56212 = -1.*t55487*t55488;
  t56213 = t56211 + t56212;
  t56215 = t55546*t55436*t55649;
  t56216 = -1.*t55454*t55649*t55554;
  t56217 = t56215 + t56216;
  t56222 = t55436*t55454*t55649;
  t56223 = t55546*t55649*t55554;
  t56224 = t56222 + t56223;
  t56226 = t55566*t56213;
  t56227 = -1.*t55657*t56217;
  t56228 = t56226 + t56227;
  t56236 = t55436*t55454*t55763;
  t56237 = t55546*t55763*t55554;
  t56238 = t56236 + t56237;
  t56240 = t55546*t55436*t55763;
  t56242 = -1.*t55454*t55763*t55554;
  t56243 = t56240 + t56242;
  t56239 = -1.*t55690*t56238;
  t56248 = 0.28121*t55462;
  t56249 = -1.*t55462*t55760;
  t56250 = 0.305*t55487*t55488;
  t56251 = t56248 + t56249 + t56250;
  t56253 = t55707*t56238;
  t56260 = t56251*t55657;
  t56261 = t55566*t56243;
  t56262 = t56260 + t56261;
  t56264 = t55566*t56251;
  t56265 = -1.*t55657*t56243;
  t56266 = t56264 + t56265;
  t56282 = t55763*t56213;
  t56284 = t55649*t56251;
  t56302 = Power(t55546,2);
  t56304 = Power(t55454,2);
  t56293 = -1.*t56251*t55533;
  t56214 = t56213*t55657;
  t56218 = t55566*t56217;
  t56220 = t56214 + t56218;
  t56324 = t56238*t55557;
  t56327 = t56224*t55842;
  t56331 = -1.*t55707*t56238;
  t55672 = t55561*t55557;
  t55674 = -1.*t33089*t55667;
  t55676 = t55672 + t55674;
  t56370 = t55690*t56238;
  t56377 = -1.*t56238*t55557;
  t56379 = -1.*t56224*t55842;
  t56207 = t55454*t55821;
  t56208 = -1.*t55546*t55827;
  t56209 = t56207 + t56208;
  t55724 = t55561*t55707;
  t55725 = -1.*t33089*t55720;
  t55727 = t55724 + t55725;
  t56415 = -0.305*t55464*t55487;
  t56416 = 0.305*t55462*t55488;
  t56417 = t56415 + t56416;
  t56419 = t55436*t55454*t56417;
  t56420 = t55546*t56417*t55554;
  t56421 = t56419 + t56420;
  t56423 = t55546*t55436*t56417;
  t56424 = -1.*t55454*t56417*t55554;
  t56425 = t56423 + t56424;
  t56429 = t55436*t55454*t56213;
  t56430 = t55546*t56213*t55554;
  t56431 = t56429 + t56430;
  t56422 = -1.*t55690*t56421;
  t56434 = -0.305*t55462*t55464;
  t56436 = t56434 + t55801;
  t56441 = t55546*t55436*t56213;
  t56442 = -1.*t55454*t56213*t55554;
  t56444 = t56441 + t56442;
  t56438 = t55707*t56421;
  t56440 = t56431*t55842;
  t56451 = t56436*t55657;
  t56452 = t55566*t56425;
  t56453 = t56451 + t56452;
  t56455 = t55566*t56436;
  t56456 = -1.*t55657*t56425;
  t56457 = t56455 + t56456;
  t56461 = t55701*t55657;
  t56462 = t55566*t56444;
  t56463 = t56461 + t56462;
  t56279 = -1.*t55701*t55805;
  t56280 = t56279 + t56011;
  t56287 = t55805*t55533;
  t56288 = t56023 + t56287;
  t56290 = -1.*t55701*t55763;
  t56298 = -1.*t55546*t55701*t55821;
  t56299 = -1.*t55454*t55701*t55827;
  t56300 = t56011 + t56298 + t56299;
  t56480 = t55649*t56436;
  t56488 = -1.*t56436*t55533;
  t56317 = t55546*t55533*t55821;
  t56318 = t55454*t55533*t55827;
  t56319 = t56023 + t56317 + t56318;
  t56511 = t56421*t55557;
  t56515 = -1.*t55707*t56421;
  t56517 = -1.*t56431*t55842;
  t56469 = t55566*t55701;
  t56470 = -1.*t55657*t56444;
  t56471 = t56469 + t56470;
  t56354 = -0.15121*t56213;
  t56355 = -0.15121*t55533;
  t56356 = t56354 + t56355;
  t56357 = var2[12]*t56356;
  t56358 = -1.*t55454*t55821;
  t56359 = t55546*t55827;
  t56360 = t56358 + t56359;
  t56557 = t55690*t56421;
  t56563 = -1.*t56421*t55557;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t33089*t55557 - 1.*t55561*t55667)*var2[1] + t55676*var2[2];
  p_output1[10]=(t55561*t55657*t55685 - 1.*t33089*t55690)*var2[1] + (t33089*t55657*t55685 + t55561*t55690)*var2[2];
  p_output1[11]=(-1.*t33089*t55707 - 1.*t55561*t55720)*var2[1] + t55727*var2[2];
  p_output1[12]=t55667*var2[0] - 1.*t33089*t55732*var2[1] + t55561*t55732*var2[2] + (t55753*(t55657*t55685*t55831 + t55657*t55685*t55835) + t55720*t55849 + t55566*t55685*(t55720*t55831 + t55720*t55835 + t55753*t55847 + t55847*t55855) - 1.*t55657*t55685*t55864)*var2[3];
  p_output1[13]=-1.*t55657*t55685*var2[0] + t33089*t55566*t55685*var2[1] - 1.*t55561*t55566*t55685*var2[2] + ((-1.*t55720*t55831 - 1.*t55720*t55835 - 1.*t55753*t55847 - 1.*t55847*t55855)*t55874 + t55753*(t55667*t55831 + t55667*t55835 + t55732*t55847 + t55847*t55874) + t55667*t55885 + t55720*t55896)*var2[3];
  p_output1[14]=t55720*var2[0] - 1.*t33089*t55855*var2[1] + t55561*t55855*var2[2] + ((-1.*t55657*t55685*t55831 - 1.*t55657*t55685*t55835)*t55874 + t55566*t55685*(-1.*t55667*t55831 - 1.*t55667*t55835 - 1.*t55732*t55847 - 1.*t55847*t55874) + t55667*t55912 - 1.*t55657*t55685*t55924)*var2[3];
  p_output1[15]=t55932 + t55937 + t55941 + (t55973 + t55753*(t55949 + t55950 - 1.*t55685*t55947*t55975 - 1.*t55685*t55947*t55977 + t55979 + t55980) + t55566*t55685*(-1.*t55657*t55720*t55947 + t55566*t55753*t55947 + t55959 + t55964 + t55985 + t55986) + t55989)*var2[3] + (t55944 + t55707*(-1.*t55685*t55947 + t55949 + t55950 + t55954) + t55690*(t55718*t55947 + t55959 + t55963 + t55964) + t55970)*var2[4];
  p_output1[16]=t55995 + t55999 + t56004 + (t55874*(t55657*t55720*t55947 - 1.*t55566*t55753*t55947 + t56006 + t56008 + t56032 + t56033) + t55753*(-1.*t55657*t55667*t55947 + t55566*t55874*t55947 + t56018 + t56020 + t56039 + t56040) + t56043 + t56045)*var2[3] + (t55557*(-1.*t55718*t55947 + t56006 + t56007 + t56008) + t56016 + t55707*(t55664*t55947 + t56018 + t56019 + t56020) + t56027)*var2[4];
  p_output1[17]=t56049 + t56054 + t56058 + (t56082 + t55874*(t55685*t55947*t55975 + t55685*t55947*t55977 + t56063 + t56064 + t56085 + t56086) + t55566*t55685*(t55657*t55667*t55947 - 1.*t55566*t55874*t55947 + t56070 + t56072 + t56091 + t56092) + t56096)*var2[3] + (t56061 + t55557*(t55685*t55947 + t56063 + t56064 + t56066) + t55690*(-1.*t55664*t55947 + t56070 + t56071 + t56072) + t56078)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=t55932 + t55937 + t55941 + (t55973 + t55989 + t55753*(t55949 + t55979 + t55980 - 1.*t55685*t55975*t56113 - 1.*t55685*t55977*t56113 + t56118) + t55566*t55685*(t55959 + t55985 + t55986 - 1.*t55657*t55720*t56113 + t55566*t55753*t56113 + t56123))*var2[3] + (t55944 + t55970 + t55707*(t55949 + t55954 - 1.*t55685*t56113 + t56118) + t55690*(t55959 + t55963 + t55718*t56113 + t56123))*var2[4] + t55533*(t55546*t55821 + t55454*t55827 - 1.*t55546*t56101 + t55454*t56105)*var2[5];
  p_output1[37]=t55995 + t55999 + t56004 + (t56043 + t56045 + t55874*(t56006 + t56032 + t56033 + t55657*t55720*t56113 - 1.*t55566*t55753*t56113 + t56158) + t55753*(t56018 + t56039 + t56040 - 1.*t55657*t55667*t56113 + t55566*t55874*t56113 + t56162))*var2[3] + (t56016 + t56027 + t55557*(t56006 + t56007 - 1.*t55718*t56113 + t56158) + t55707*(t56018 + t56019 + t55664*t56113 + t56162))*var2[4] + (t55533*(-1.*t55454*t55533*t55821 + t55533*t55546*t55827 + t55454*t55533*t56101 + t55533*t55546*t56105) + t55649*(t55454*t55701*t55821 - 1.*t55546*t55701*t55827 - 1.*t55454*t55701*t56101 - 1.*t55546*t55701*t56105))*var2[5];
  p_output1[38]=t56049 + t56054 + t56058 + (t56082 + t56096 + t55874*(t56063 + t56085 + t56086 + t55685*t55975*t56113 + t55685*t55977*t56113 + t56186) + t55566*t55685*(t56070 + t56091 + t56092 + t55657*t55667*t56113 - 1.*t55566*t55874*t56113 + t56190))*var2[3] + (t56061 + t56078 + t55557*(t56063 + t56066 + t55685*t56113 + t56186) + t55690*(t56070 + t56071 - 1.*t55664*t56113 + t56190))*var2[4] + t55649*(-1.*t55546*t55821 - 1.*t55454*t55827 + t55546*t56101 - 1.*t55454*t56105)*var2[5];
  p_output1[39]=t56220*var2[0] + (t55561*t56224 - 1.*t33089*t56228)*var2[1] + (t33089*t56224 + t55561*t56228)*var2[2] + (t55849*t55874 + t55753*(t56239 - 1.*t55566*t55685*t56262 + t55657*t55685*t56266) + t55566*t55685*(t55893 + t55894 + t55895 + t56253 + t55753*t56262 + t55720*t56266))*var2[3] + (t55557*t55943 + t55707*(t56239 - 1.*t55685*t56243) + t55690*(t55893 + t56023 + t56024 + t55718*t56243 + t55533*t56251 + t56253))*var2[4] + t55649*t56209*var2[5];
  p_output1[40]=(t55874*t55896 + t55885*t56220 + t55753*(t55835*t56220 + t55847*t56228 + t55874*t56262 + t55667*t56266 + t56324 + t56327) + t55874*(t55921 + t55922 + t55923 - 1.*t55753*t56262 - 1.*t55720*t56266 + t56331))*var2[3] + (t55557*t56026 + t56015*t56224 + t55707*(t55829*t56217 + t55664*t56243 + t56282 + t56284 + t56324 + t56327) + t55557*(t55921 + t56075 + t56076 - 1.*t55718*t56243 + t56293 + t56331))*var2[4] + (t56213*t56300 + t55533*(t55546*t55649*t55821 + t55454*t55649*t55827 + t56282 + t56284 + t55533*t55763*t56302 + t55533*t55763*t56304) + t55649*(-1.*t55533*t55546*t55821 - 1.*t55454*t55533*t55827 + t56075 + t56293 - 1.*t55701*t55763*t56302 - 1.*t55701*t55763*t56304) + t55649*t56319)*var2[5] + (t56213*t56280 + t55533*(t55649*t55805 + t55967 + t56282 + t56284) + t55649*t56288 + t55649*(-1.*t55533*t55805 + t56075 + t56290 + t56293))*var2[12];
  p_output1[41]=t56357 + t55874*var2[0] + t55676*var2[1] + (t33089*t55557 + t55561*t55667)*var2[2] + (t55912*t56220 + t55874*(t55566*t55685*t56262 - 1.*t55657*t55685*t56266 + t56370) + t55566*t55685*(-1.*t55835*t56220 - 1.*t55847*t56228 - 1.*t55874*t56262 - 1.*t55667*t56266 + t56377 + t56379))*var2[3] + (t56060*t56224 + t55557*(t55685*t56243 + t56370) + t55690*(-1.*t55763*t56213 - 1.*t55829*t56217 - 1.*t55664*t56243 - 1.*t55649*t56251 + t56377 + t56379))*var2[4] + t56213*t56360*var2[5];
  p_output1[42]=t55753*var2[0] + t55727*var2[1] + (t33089*t55707 + t55561*t55720)*var2[2] + (t55753*(t56422 - 1.*t55566*t55685*t56453 + t55657*t55685*t56457) + t55849*t56463 + t55566*t55685*(t56438 + t56440 + t55753*t56453 + t55720*t56457 + t55835*t56463 + t55847*t56471))*var2[3] + (t55707*(t56422 - 1.*t55685*t56425) + t55943*t56431 + t55690*(t55701*t55763 + t55718*t56425 + t55533*t56436 + t56438 + t56440 + t55829*t56444))*var2[4] + t55701*t56209*var2[5] + (0.28121*t55464 - 0.305*Power(t55464,2) - 1.*t55464*t55760)*var2[13];
  p_output1[43]=(t55753*t55885 + t55896*t56463 + t55753*(t55861 + t55862 + t55863 + t55874*t56453 + t55667*t56457 + t56511) + t55874*(-1.*t55753*t56453 - 1.*t55720*t56457 - 1.*t55835*t56463 - 1.*t55847*t56471 + t56515 + t56517))*var2[3] + (t55707*t56015 + t56026*t56431 + t55707*(t55861 + t55967 + t55968 + t55664*t56425 + t56480 + t56511) + t55557*(t56290 - 1.*t55718*t56425 - 1.*t55829*t56444 + t56488 + t56515 + t56517))*var2[4] + (t55533*t56300 + t55701*t56319 + t55533*(t55546*t55701*t55821 + t55454*t55701*t55827 + t55967 + t55533*t56302*t56417 + t55533*t56304*t56417 + t56480) + t55649*(-1.*t55546*t55821*t56213 - 1.*t55454*t55827*t56213 + t56290 - 1.*t55701*t56302*t56417 - 1.*t55701*t56304*t56417 + t56488))*var2[5] + (t55533*t56280 + t55701*t56288 + t55533*(t55701*t55805 + t55967 + t55533*t56417 + t56480) + t55649*(-1.*t55805*t56213 + t56290 - 1.*t55701*t56417 + t56488))*var2[12];
  p_output1[44]=t56357 + t56463*var2[0] + (t55561*t56431 - 1.*t33089*t56471)*var2[1] + (t33089*t56431 + t55561*t56471)*var2[2] + (t55753*t55912 + t55874*(t55566*t55685*t56453 - 1.*t55657*t55685*t56457 + t56557) + t55566*t55685*(t55882 + t55883 + t55884 - 1.*t55874*t56453 - 1.*t55667*t56457 + t56563))*var2[3] + (t55707*t56060 + t55557*(t55685*t56425 + t56557) + t55690*(t55882 + t56011 + t56012 - 1.*t55664*t56425 - 1.*t55649*t56436 + t56563))*var2[4] + t55533*t56360*var2[5] + (-0.28121*t55488 + 0.305*t55464*t55488 + t55488*t55760)*var2[13];
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

#include "dJh_FrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_FrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
