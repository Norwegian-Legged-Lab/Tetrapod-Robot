/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:05:03 GMT+02:00
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
  double t17542;
  double t17822;
  double t17881;
  double t17883;
  double t17884;
  double t17909;
  double t17917;
  double t18026;
  double t5777;
  double t10710;
  double t18028;
  double t18059;
  double t17958;
  double t18037;
  double t18042;
  double t1825;
  double t18080;
  double t18084;
  double t18085;
  double t18086;
  double t18092;
  double t18645;
  double t18660;
  double t18665;
  double t18667;
  double t18683;
  double t18692;
  double t18755;
  double t18756;
  double t18757;
  double t18762;
  double t18767;
  double t18770;
  double t18797;
  double t18799;
  double t18800;
  double t18802;
  double t18803;
  double t18806;
  double t18809;
  double t18810;
  double t18812;
  double t18813;
  double t18817;
  double t18818;
  double t18837;
  double t18838;
  double t18840;
  double t18854;
  double t18855;
  double t18856;
  double t18857;
  double t18858;
  double t18869;
  double t18871;
  double t18873;
  double t18877;
  double t18880;
  double t18883;
  double t18886;
  double t18887;
  double t18888;
  double t18853;
  double t18863;
  double t18865;
  double t18866;
  double t18889;
  double t18890;
  double t18897;
  double t18898;
  double t18901;
  double t18949;
  double t18964;
  double t18974;
  double t18995;
  double t19020;
  double t19041;
  double t19047;
  double t18868;
  double t18997;
  double t19000;
  double t19186;
  double t19190;
  double t19202;
  double t18848;
  double t18849;
  double t18852;
  double t19153;
  double t19174;
  double t19180;
  double t19233;
  double t19235;
  double t19236;
  double t19339;
  double t19344;
  double t19345;
  double t19575;
  double t19585;
  double t19590;
  double t19181;
  double t19650;
  double t19651;
  double t19652;
  double t19259;
  double t19681;
  double t19684;
  double t19685;
  double t19185;
  double t19220;
  double t19222;
  double t19654;
  double t19662;
  double t19665;
  double t19670;
  double t19671;
  double t19680;
  double t19688;
  double t19260;
  double t19263;
  double t19264;
  double t19398;
  double t19445;
  double t19887;
  double t19897;
  double t19939;
  double t19947;
  double t19400;
  double t19401;
  double t19402;
  double t19458;
  double t19463;
  double t19469;
  double t19511;
  double t19549;
  double t19517;
  double t19519;
  double t19520;
  double t19779;
  double t19781;
  double t20047;
  double t20051;
  double t20059;
  double t20065;
  double t19551;
  double t19552;
  double t19554;
  double t19595;
  double t19597;
  double t19605;
  double t19629;
  double t19632;
  double t19633;
  double t19635;
  double t19637;
  double t19642;
  double t19644;
  double t19645;
  double t19648;
  double t20143;
  double t20144;
  double t20149;
  double t20152;
  double t20154;
  double t19672;
  double t20165;
  double t20168;
  double t20170;
  double t20177;
  double t20179;
  double t20180;
  double t19687;
  double t19718;
  double t19724;
  double t19729;
  double t19746;
  double t19776;
  double t20186;
  double t19802;
  double t19805;
  double t20196;
  double t19825;
  double t19836;
  double t19854;
  double t19863;
  double t19864;
  double t19867;
  double t19868;
  double t19869;
  double t19873;
  double t19880;
  double t19881;
  double t19884;
  double t19889;
  double t19922;
  double t19932;
  double t19933;
  double t19935;
  double t19941;
  double t19971;
  double t19973;
  double t19975;
  double t19984;
  double t20277;
  double t19999;
  double t20001;
  double t20286;
  double t20011;
  double t20013;
  double t20016;
  double t20018;
  double t20024;
  double t20025;
  double t20026;
  double t20027;
  double t20028;
  double t20029;
  double t20033;
  double t20034;
  double t20035;
  double t20040;
  double t20041;
  double t20043;
  double t20052;
  double t20064;
  double t20077;
  double t20082;
  double t20084;
  double t20086;
  double t20094;
  double t20365;
  double t20099;
  double t20101;
  double t20373;
  double t20106;
  double t20107;
  double t20130;
  double t20417;
  double t20420;
  double t20422;
  double t20429;
  double t20433;
  double t20452;
  double t20470;
  double t20476;
  double t20477;
  double t20484;
  double t20485;
  double t20486;
  double t20513;
  double t20519;
  double t20523;
  double t20527;
  double t20529;
  double t20530;
  double t20526;
  double t20542;
  double t20543;
  double t20548;
  double t20553;
  double t20561;
  double t20571;
  double t20587;
  double t20589;
  double t20597;
  double t20602;
  double t20606;
  double t20657;
  double t20663;
  double t20703;
  double t20727;
  double t20681;
  double t20423;
  double t20455;
  double t20456;
  double t20829;
  double t20837;
  double t20851;
  double t18724;
  double t18725;
  double t18735;
  double t20919;
  double t20929;
  double t20931;
  double t20463;
  double t20464;
  double t20466;
  double t18825;
  double t18831;
  double t18832;
  double t20978;
  double t20979;
  double t20980;
  double t20981;
  double t20982;
  double t20983;
  double t20985;
  double t20986;
  double t20988;
  double t20999;
  double t21001;
  double t21002;
  double t20984;
  double t21013;
  double t21017;
  double t21024;
  double t21025;
  double t21026;
  double t21021;
  double t21033;
  double t21034;
  double t21037;
  double t21040;
  double t21042;
  double t21045;
  double t21023;
  double t21058;
  double t21059;
  double t21061;
  double t20647;
  double t20649;
  double t20672;
  double t20674;
  double t20678;
  double t20688;
  double t20690;
  double t20694;
  double t21098;
  double t21130;
  double t20794;
  double t20798;
  double t20800;
  double t21200;
  double t21210;
  double t21223;
  double t21068;
  double t21072;
  double t21076;
  double t20894;
  double t20895;
  double t20898;
  double t20899;
  double t20901;
  double t20902;
  double t20904;
  double t21364;
  double t21408;
  t17542 = Cos(var1[7]);
  t17822 = Cos(var1[8]);
  t17881 = t17542*t17822;
  t17883 = Sin(var1[7]);
  t17884 = Sin(var1[8]);
  t17909 = t17883*t17884;
  t17917 = t17881 + t17909;
  t18026 = Cos(var1[5]);
  t5777 = Cos(var1[6]);
  t10710 = Sin(var1[5]);
  t18028 = Sin(var1[6]);
  t18059 = Cos(var1[3]);
  t17958 = t5777*t10710*t17917;
  t18037 = t18026*t18028*t17917;
  t18042 = t17958 + t18037;
  t1825 = Sin(var1[3]);
  t18080 = Cos(var1[4]);
  t18084 = -1.*t17822*t17883;
  t18085 = t17542*t17884;
  t18086 = t18084 + t18085;
  t18092 = t18080*t18086;
  t18645 = Sin(var1[4]);
  t18660 = t18026*t5777*t17917;
  t18665 = -1.*t10710*t18028*t17917;
  t18667 = t18660 + t18665;
  t18683 = -1.*t18645*t18667;
  t18692 = t18092 + t18683;
  t18755 = -1.*t5777*t10710;
  t18756 = -1.*t18026*t18028;
  t18757 = t18755 + t18756;
  t18762 = t18026*t5777;
  t18767 = -1.*t10710*t18028;
  t18770 = t18762 + t18767;
  t18797 = t17822*t17883;
  t18799 = -1.*t17542*t17884;
  t18800 = t18797 + t18799;
  t18802 = t5777*t10710*t18800;
  t18803 = t18026*t18028*t18800;
  t18806 = t18802 + t18803;
  t18809 = t18080*t17917;
  t18810 = t18026*t5777*t18800;
  t18812 = -1.*t10710*t18028*t18800;
  t18813 = t18810 + t18812;
  t18817 = -1.*t18645*t18813;
  t18818 = t18809 + t18817;
  t18837 = -1.*t18645*t18086;
  t18838 = -1.*t18080*t18667;
  t18840 = t18837 + t18838;
  t18854 = -1.*t17822;
  t18855 = 1. + t18854;
  t18856 = 0.50321*t18855;
  t18857 = 0.19821*t17822;
  t18858 = t18856 + t18857;
  t18869 = -1.*t5777;
  t18871 = 1. + t18869;
  t18873 = 0.15121*t18871;
  t18877 = -1.*t17542;
  t18880 = 1. + t18877;
  t18883 = 0.28121*t18880;
  t18886 = t17542*t18858;
  t18887 = -0.305*t17883*t17884;
  t18888 = t18883 + t18886 + t18887;
  t18853 = 0.28121*t17883;
  t18863 = -1.*t18858*t17883;
  t18865 = -0.305*t17542*t17884;
  t18866 = t18853 + t18863 + t18865;
  t18889 = t5777*t18888;
  t18890 = t18873 + t18889;
  t18897 = t18026*t18890;
  t18898 = 0.15121*t5777;
  t18901 = -0.15121*t18028;
  t18949 = t18028*t18888;
  t18964 = t18873 + t18898 + t18901 + t18949;
  t18974 = -1.*t10710*t18964;
  t18995 = t18897 + t18974;
  t19020 = t18645*t18866;
  t19041 = t18080*t18995;
  t19047 = t19020 + t19041;
  t18868 = -1.*t18645*t18866;
  t18997 = -1.*t18080*t18995;
  t19000 = t18868 + t18997;
  t19186 = t18080*t18866;
  t19190 = -1.*t18645*t18995;
  t19202 = t19186 + t19190;
  t18848 = t18645*t17917;
  t18849 = t18080*t18813;
  t18852 = t18848 + t18849;
  t19153 = t10710*t18890;
  t19174 = t18026*t18964;
  t19180 = t19153 + t19174;
  t19233 = -1.*t18645*t17917;
  t19235 = -1.*t18080*t18813;
  t19236 = t19233 + t19235;
  t19339 = t18645*t18086;
  t19344 = t18080*t18667;
  t19345 = t19339 + t19344;
  t19575 = -1.*t5777*t10710*t17917;
  t19585 = -1.*t18026*t18028*t17917;
  t19590 = t19575 + t19585;
  t19181 = -1.*t18770*t19180;
  t19650 = -1.*t10710*t18890;
  t19651 = -1.*t18026*t18964;
  t19652 = t19650 + t19651;
  t19259 = t18806*t19180;
  t19681 = -1.*t5777*t10710*t18800;
  t19684 = -1.*t18026*t18028*t18800;
  t19685 = t19681 + t19684;
  t19185 = -1.*t18080*t18757*t19047;
  t19220 = t18645*t18757*t19202;
  t19222 = t19181 + t19185 + t19220;
  t19654 = -1.*t18757*t19180;
  t19662 = -1.*t18770*t18995;
  t19665 = -1.*t18026*t5777;
  t19670 = t10710*t18028;
  t19671 = t19665 + t19670;
  t19680 = t18813*t19180;
  t19688 = t18806*t18995;
  t19260 = t18852*t19047;
  t19263 = t18818*t19202;
  t19264 = t19259 + t19260 + t19263;
  t19398 = -1.*t18806*t19180;
  t19445 = t18042*t19180;
  t19887 = -1.*t18813*t19180;
  t19897 = -1.*t18806*t18995;
  t19939 = t18667*t19180;
  t19947 = t18042*t18995;
  t19400 = -1.*t18852*t19047;
  t19401 = -1.*t18818*t19202;
  t19402 = t19398 + t19400 + t19401;
  t19458 = t19345*t19047;
  t19463 = t18692*t19202;
  t19469 = t19445 + t19458 + t19463;
  t19511 = t18770*t19180;
  t19549 = -1.*t18042*t19180;
  t19517 = t18080*t18757*t19047;
  t19519 = -1.*t18645*t18757*t19202;
  t19520 = t19511 + t19517 + t19519;
  t19779 = Power(t18080,2);
  t19781 = Power(t18645,2);
  t20047 = t18757*t19180;
  t20051 = t18770*t18995;
  t20059 = -1.*t18667*t19180;
  t20065 = -1.*t18042*t18995;
  t19551 = -1.*t19345*t19047;
  t19552 = -1.*t18692*t19202;
  t19554 = t19549 + t19551 + t19552;
  t19595 = var2[0]*t18080*t19590;
  t19597 = t1825*t18645*t19590;
  t19605 = t18059*t18667;
  t19629 = t19597 + t19605;
  t19632 = var2[1]*t19629;
  t19633 = -1.*t18059*t18645*t19590;
  t19635 = t1825*t18667;
  t19637 = t19633 + t19635;
  t19642 = var2[2]*t19637;
  t19644 = -1.*t18757*t18995;
  t19645 = t19181 + t19644;
  t19648 = t18813*t19645;
  t20143 = -0.15121*t5777;
  t20144 = t20143 + t18889;
  t20149 = 0.15121*t18028;
  t20152 = -1.*t18028*t18888;
  t20154 = t20149 + t20152;
  t19672 = -1.*t19671*t18995;
  t20165 = -1.*t10710*t20144;
  t20168 = t18026*t20154;
  t20170 = t20165 + t20168;
  t20177 = t18026*t20144;
  t20179 = t10710*t20154;
  t20180 = t20177 + t20179;
  t19687 = t19685*t18995;
  t19718 = t18866*t17917;
  t19724 = t18813*t18995;
  t19729 = t19718 + t19259 + t19724;
  t19746 = t18757*t19729;
  t19776 = t18080*t19685*t19222;
  t20186 = -1.*t18770*t20180;
  t19802 = -1.*t18080*t19671*t19047;
  t19805 = t18645*t19671*t19202;
  t20196 = t18806*t20180;
  t19825 = t18080*t19685*t19047;
  t19836 = -1.*t18645*t19685*t19202;
  t19854 = t18080*t19671*t19264;
  t19863 = var2[0]*t18080*t19671;
  t19864 = t1825*t18757;
  t19867 = -1.*t18059*t18645*t19671;
  t19868 = t19864 + t19867;
  t19869 = var2[2]*t19868;
  t19873 = t18059*t18757;
  t19880 = t1825*t18645*t19671;
  t19881 = t19873 + t19880;
  t19884 = var2[1]*t19881;
  t19889 = -1.*t19685*t18995;
  t19922 = -1.*t18866*t17917;
  t19932 = -1.*t18813*t18995;
  t19933 = t19922 + t19398 + t19932;
  t19935 = t18667*t19933;
  t19941 = t19590*t18995;
  t19971 = t18866*t18086;
  t19973 = t18667*t18995;
  t19975 = t19971 + t19445 + t19973;
  t19984 = t18813*t19975;
  t20277 = -1.*t18806*t20180;
  t19999 = -1.*t18080*t19685*t19047;
  t20001 = t18645*t19685*t19202;
  t20286 = t18042*t20180;
  t20011 = t18080*t19590*t19047;
  t20013 = -1.*t18645*t19590*t19202;
  t20016 = t18080*t19590*t19402;
  t20018 = t18080*t19685*t19469;
  t20024 = var2[0]*t18080*t19685;
  t20025 = t1825*t18645*t19685;
  t20026 = t18059*t18813;
  t20027 = t20025 + t20026;
  t20028 = var2[1]*t20027;
  t20029 = -1.*t18059*t18645*t19685;
  t20033 = t1825*t18813;
  t20034 = t20029 + t20033;
  t20035 = var2[2]*t20034;
  t20040 = t18757*t18995;
  t20041 = t19511 + t20040;
  t20043 = t18667*t20041;
  t20052 = t19671*t18995;
  t20064 = -1.*t19590*t18995;
  t20077 = -1.*t18866*t18086;
  t20082 = -1.*t18667*t18995;
  t20084 = t20077 + t19549 + t20082;
  t20086 = t18757*t20084;
  t20094 = t18080*t19590*t19520;
  t20365 = t18770*t20180;
  t20099 = t18080*t19671*t19047;
  t20101 = -1.*t18645*t19671*t19202;
  t20373 = -1.*t18042*t20180;
  t20106 = -1.*t18080*t19590*t19047;
  t20107 = t18645*t19590*t19202;
  t20130 = t18080*t19671*t19554;
  t20417 = -1.*t17542*t17822;
  t20420 = -1.*t17883*t17884;
  t20422 = t20417 + t20420;
  t20429 = t18026*t5777*t18086;
  t20433 = -1.*t10710*t18028*t18086;
  t20452 = t20429 + t20433;
  t20470 = t5777*t10710*t18086;
  t20476 = t18026*t18028*t18086;
  t20477 = t20470 + t20476;
  t20484 = t18080*t20422;
  t20485 = -1.*t18645*t20452;
  t20486 = t20484 + t20485;
  t20513 = t5777*t10710*t18866;
  t20519 = t18026*t18028*t18866;
  t20523 = t20513 + t20519;
  t20527 = t18026*t5777*t18866;
  t20529 = -1.*t10710*t18028*t18866;
  t20530 = t20527 + t20529;
  t20526 = -1.*t18770*t20523;
  t20542 = 0.28121*t17542;
  t20543 = -1.*t17542*t18858;
  t20548 = 0.305*t17883*t17884;
  t20553 = t20542 + t20543 + t20548;
  t20561 = t18806*t20523;
  t20571 = t18645*t20553;
  t20587 = t18080*t20530;
  t20589 = t20571 + t20587;
  t20597 = t18080*t20553;
  t20602 = -1.*t18645*t20530;
  t20606 = t20597 + t20602;
  t20657 = t18866*t20422;
  t20663 = t18086*t20553;
  t20703 = Power(t5777,2);
  t20727 = Power(t18028,2);
  t20681 = -1.*t20553*t17917;
  t20423 = t18645*t20422;
  t20455 = t18080*t20452;
  t20456 = t20423 + t20455;
  t20829 = t20523*t18042;
  t20837 = t20477*t19180;
  t20851 = -1.*t18806*t20523;
  t18724 = t18059*t18042;
  t18725 = -1.*t1825*t18692;
  t18735 = t18724 + t18725;
  t20919 = t18770*t20523;
  t20929 = -1.*t20523*t18042;
  t20931 = -1.*t20477*t19180;
  t20463 = t18028*t18890;
  t20464 = -1.*t5777*t18964;
  t20466 = t20463 + t20464;
  t18825 = t18059*t18806;
  t18831 = -1.*t1825*t18818;
  t18832 = t18825 + t18831;
  t20978 = -0.305*t17822*t17883;
  t20979 = 0.305*t17542*t17884;
  t20980 = t20978 + t20979;
  t20981 = t5777*t10710*t20980;
  t20982 = t18026*t18028*t20980;
  t20983 = t20981 + t20982;
  t20985 = t18026*t5777*t20980;
  t20986 = -1.*t10710*t18028*t20980;
  t20988 = t20985 + t20986;
  t20999 = t5777*t10710*t20422;
  t21001 = t18026*t18028*t20422;
  t21002 = t20999 + t21001;
  t20984 = -1.*t18770*t20983;
  t21013 = -0.305*t17542*t17822;
  t21017 = t21013 + t18887;
  t21024 = t18026*t5777*t20422;
  t21025 = -1.*t10710*t18028*t20422;
  t21026 = t21024 + t21025;
  t21021 = t18806*t20983;
  t21033 = t18645*t21017;
  t21034 = t18080*t20988;
  t21037 = t21033 + t21034;
  t21040 = t18080*t21017;
  t21042 = -1.*t18645*t20988;
  t21045 = t21040 + t21042;
  t21023 = t21002*t19180;
  t21058 = t18645*t18800;
  t21059 = t18080*t21026;
  t21061 = t21058 + t21059;
  t20647 = -1.*t18800*t18888;
  t20649 = t20647 + t19922;
  t20672 = t18888*t17917;
  t20674 = t19971 + t20672;
  t20678 = -1.*t18800*t18866;
  t20688 = -1.*t5777*t18800*t18890;
  t20690 = -1.*t18028*t18800*t18964;
  t20694 = t19922 + t20688 + t20690;
  t21098 = t18086*t21017;
  t21130 = -1.*t21017*t17917;
  t20794 = t5777*t17917*t18890;
  t20798 = t18028*t17917*t18964;
  t20800 = t19971 + t20794 + t20798;
  t21200 = t20983*t18042;
  t21210 = -1.*t18806*t20983;
  t21223 = -1.*t21002*t19180;
  t21068 = t18080*t18800;
  t21072 = -1.*t18645*t21026;
  t21076 = t21068 + t21072;
  t20894 = 0.15121*t20422;
  t20895 = 0.15121*t17917;
  t20898 = t20894 + t20895;
  t20899 = var2[6]*t20898;
  t20901 = -1.*t18028*t18890;
  t20902 = t5777*t18964;
  t20904 = t20901 + t20902;
  t21364 = t18770*t20983;
  t21408 = -1.*t20983*t18042;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t18042*t1825 - 1.*t18059*t18692)*var2[1] + t18735*var2[2];
  p_output1[10]=(t18059*t18645*t18757 - 1.*t1825*t18770)*var2[1] + (t1825*t18645*t18757 + t18059*t18770)*var2[2];
  p_output1[11]=(-1.*t1825*t18806 - 1.*t18059*t18818)*var2[1] + t18832*var2[2];
  p_output1[12]=t18692*var2[0] - 1.*t1825*t18840*var2[1] + t18059*t18840*var2[2] + (t18852*(t18645*t18757*t19000 + t18645*t18757*t19047) + t18818*t19222 + t18080*t18757*(t18818*t19000 + t18818*t19047 + t18852*t19202 + t19202*t19236) - 1.*t18645*t18757*t19264)*var2[3];
  p_output1[13]=-1.*t18645*t18757*var2[0] + t18080*t1825*t18757*var2[1] - 1.*t18059*t18080*t18757*var2[2] + ((-1.*t18818*t19000 - 1.*t18818*t19047 - 1.*t18852*t19202 - 1.*t19202*t19236)*t19345 + t18852*(t18692*t19000 + t18692*t19047 + t18840*t19202 + t19202*t19345) + t18692*t19402 + t18818*t19469)*var2[3];
  p_output1[14]=t18818*var2[0] - 1.*t1825*t19236*var2[1] + t18059*t19236*var2[2] + ((-1.*t18645*t18757*t19000 - 1.*t18645*t18757*t19047)*t19345 + t18080*t18757*(-1.*t18692*t19000 - 1.*t18692*t19047 - 1.*t18840*t19202 - 1.*t19202*t19345) + t18692*t19520 - 1.*t18645*t18757*t19554)*var2[3];
  p_output1[15]=t19595 + t19632 + t19642 + (t19776 + t18852*(t19654 + t19662 - 1.*t18757*t19652*t19779 - 1.*t18757*t19652*t19781 + t19802 + t19805) + t18080*t18757*(-1.*t18645*t18818*t19652 + t18080*t18852*t19652 + t19680 + t19688 + t19825 + t19836) + t19854)*var2[3] + (t19648 + t18806*(-1.*t18757*t19652 + t19654 + t19662 + t19672) + t18770*(t18813*t19652 + t19680 + t19687 + t19688) + t19746)*var2[4];
  p_output1[16]=t19863 + t19869 + t19884 + (t19345*(t18645*t18818*t19652 - 1.*t18080*t18852*t19652 + t19887 + t19897 + t19999 + t20001) + t18852*(-1.*t18645*t18692*t19652 + t18080*t19345*t19652 + t19939 + t19947 + t20011 + t20013) + t20016 + t20018)*var2[3] + (t18042*(-1.*t18813*t19652 + t19887 + t19889 + t19897) + t19935 + t18806*(t18667*t19652 + t19939 + t19941 + t19947) + t19984)*var2[4];
  p_output1[17]=t20024 + t20028 + t20035 + (t20094 + t19345*(t18757*t19652*t19779 + t18757*t19652*t19781 + t20047 + t20051 + t20099 + t20101) + t18080*t18757*(t18645*t18692*t19652 - 1.*t18080*t19345*t19652 + t20059 + t20065 + t20106 + t20107) + t20130)*var2[3] + (t20043 + t18042*(t18757*t19652 + t20047 + t20051 + t20052) + t18770*(-1.*t18667*t19652 + t20059 + t20064 + t20065) + t20086)*var2[4];
  p_output1[18]=t19595 + t19632 + t19642 + (t19776 + t19854 + t18852*(t19654 + t19802 + t19805 - 1.*t18757*t19779*t20170 - 1.*t18757*t19781*t20170 + t20186) + t18080*t18757*(t19680 + t19825 + t19836 - 1.*t18645*t18818*t20170 + t18080*t18852*t20170 + t20196))*var2[3] + (t19648 + t19746 + t18806*(t19654 + t19672 - 1.*t18757*t20170 + t20186) + t18770*(t19680 + t19687 + t18813*t20170 + t20196))*var2[4] + t17917*(t18028*t18964 + t18028*t20154 + t18890*t5777 - 1.*t20144*t5777)*var2[5];
  p_output1[19]=t19863 + t19869 + t19884 + (t20016 + t20018 + t19345*(t19887 + t19999 + t20001 + t18645*t18818*t20170 - 1.*t18080*t18852*t20170 + t20277) + t18852*(t19939 + t20011 + t20013 - 1.*t18645*t18692*t20170 + t18080*t19345*t20170 + t20286))*var2[3] + (t19935 + t19984 + t18042*(t19887 + t19889 - 1.*t18813*t20170 + t20277) + t18806*(t19939 + t19941 + t18667*t20170 + t20286))*var2[4] + (t17917*(-1.*t17917*t18028*t18890 + t17917*t18028*t20144 + t17917*t18964*t5777 + t17917*t20154*t5777) + t18086*(t18028*t18800*t18890 - 1.*t18028*t18800*t20144 - 1.*t18800*t18964*t5777 - 1.*t18800*t20154*t5777))*var2[5];
  p_output1[20]=t20024 + t20028 + t20035 + (t20094 + t20130 + t19345*(t20047 + t20099 + t20101 + t18757*t19779*t20170 + t18757*t19781*t20170 + t20365) + t18080*t18757*(t20059 + t20106 + t20107 + t18645*t18692*t20170 - 1.*t18080*t19345*t20170 + t20373))*var2[3] + (t20043 + t20086 + t18042*(t20047 + t20052 + t18757*t20170 + t20365) + t18770*(t20059 + t20064 - 1.*t18667*t20170 + t20373))*var2[4] + t18086*(-1.*t18028*t18964 - 1.*t18028*t20154 - 1.*t18890*t5777 + t20144*t5777)*var2[5];
  p_output1[21]=t20456*var2[0] + (t18059*t20477 - 1.*t1825*t20486)*var2[1] + (t1825*t20477 + t18059*t20486)*var2[2] + (t19222*t19345 + t18852*(t20526 - 1.*t18080*t18757*t20589 + t18645*t18757*t20606) + t18080*t18757*(t19445 + t19458 + t19463 + t20561 + t18852*t20589 + t18818*t20606))*var2[3] + (t18042*t19645 + t18806*(t20526 - 1.*t18757*t20530) + t18770*(t19445 + t19971 + t19973 + t18813*t20530 + t17917*t20553 + t20561))*var2[4] + t18086*t20466*var2[5];
  p_output1[22]=(t19345*t19469 + t19402*t20456 + t18852*(t19047*t20456 + t19202*t20486 + t19345*t20589 + t18692*t20606 + t20829 + t20837) + t19345*(t19549 + t19551 + t19552 - 1.*t18852*t20589 - 1.*t18818*t20606 + t20851))*var2[3] + (t18042*t19975 + t19933*t20477 + t18806*(t18995*t20452 + t18667*t20530 + t20657 + t20663 + t20829 + t20837) + t18042*(t19549 + t20077 + t20082 - 1.*t18813*t20530 + t20681 + t20851))*var2[4] + (t20422*t20694 + t18086*t20800 + t18086*(-1.*t17917*t18028*t18964 + t20077 + t20681 - 1.*t18800*t18866*t20703 - 1.*t18800*t18866*t20727 - 1.*t17917*t18890*t5777) + t17917*(t18028*t18086*t18964 + t20657 + t20663 + t17917*t18866*t20703 + t17917*t18866*t20727 + t18086*t18890*t5777))*var2[5] + (t20422*t20649 + t17917*(t18086*t18888 + t19718 + t20657 + t20663) + t18086*t20674 + t18086*(-1.*t17917*t18888 + t20077 + t20678 + t20681))*var2[6];
  p_output1[23]=t20899 + t19345*var2[0] + t18735*var2[1] + (t18042*t1825 + t18059*t18692)*var2[2] + (t19520*t20456 + t19345*(t18080*t18757*t20589 - 1.*t18645*t18757*t20606 + t20919) + t18080*t18757*(-1.*t19047*t20456 - 1.*t19202*t20486 - 1.*t19345*t20589 - 1.*t18692*t20606 + t20929 + t20931))*var2[3] + (t20041*t20477 + t18042*(t18757*t20530 + t20919) + t18770*(-1.*t18866*t20422 - 1.*t18995*t20452 - 1.*t18667*t20530 - 1.*t18086*t20553 + t20929 + t20931))*var2[4] + t20422*t20904*var2[5];
  p_output1[24]=t18852*var2[0] + t18832*var2[1] + (t1825*t18806 + t18059*t18818)*var2[2] + (t18852*(t20984 - 1.*t18080*t18757*t21037 + t18645*t18757*t21045) + t19222*t21061 + t18080*t18757*(t21021 + t21023 + t18852*t21037 + t18818*t21045 + t19047*t21061 + t19202*t21076))*var2[3] + (t18806*(t20984 - 1.*t18757*t20988) + t19645*t21002 + t18770*(t18800*t18866 + t18813*t20988 + t17917*t21017 + t21021 + t21023 + t18995*t21026))*var2[4] + t18800*t20466*var2[5] + (0.28121*t17822 - 0.305*Power(t17822,2) - 1.*t17822*t18858)*var2[7];
  p_output1[25]=(t18852*t19402 + t19469*t21061 + t18852*(t19259 + t19260 + t19263 + t19345*t21037 + t18692*t21045 + t21200) + t19345*(-1.*t18852*t21037 - 1.*t18818*t21045 - 1.*t19047*t21061 - 1.*t19202*t21076 + t21210 + t21223))*var2[3] + (t18806*t19933 + t19975*t21002 + t18806*(t19259 + t19718 + t19724 + t18667*t20988 + t21098 + t21200) + t18042*(t20678 - 1.*t18813*t20988 - 1.*t18995*t21026 + t21130 + t21210 + t21223))*var2[4] + (t17917*t20694 + t18800*t20800 + t17917*(t18028*t18800*t18964 + t19718 + t17917*t20703*t20980 + t17917*t20727*t20980 + t21098 + t18800*t18890*t5777) + t18086*(-1.*t18028*t18964*t20422 + t20678 - 1.*t18800*t20703*t20980 - 1.*t18800*t20727*t20980 + t21130 - 1.*t18890*t20422*t5777))*var2[5] + (t17917*t20649 + t18800*t20674 + t17917*(t18800*t18888 + t19718 + t17917*t20980 + t21098) + t18086*(-1.*t18888*t20422 + t20678 - 1.*t18800*t20980 + t21130))*var2[6];
  p_output1[26]=t20899 + t21061*var2[0] + (t18059*t21002 - 1.*t1825*t21076)*var2[1] + (t1825*t21002 + t18059*t21076)*var2[2] + (t18852*t19520 + t19345*(t18080*t18757*t21037 - 1.*t18645*t18757*t21045 + t21364) + t18080*t18757*(t19398 + t19400 + t19401 - 1.*t19345*t21037 - 1.*t18692*t21045 + t21408))*var2[3] + (t18806*t20041 + t18042*(t18757*t20988 + t21364) + t18770*(t19398 + t19922 + t19932 - 1.*t18667*t20988 - 1.*t18086*t21017 + t21408))*var2[4] + t17917*t20904*var2[5] + (-0.28121*t17884 + 0.305*t17822*t17884 + t17884*t18858)*var2[7];
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

#include "dJh_FlFoot_ParallelStance2.hh"

namespace SymFunction
{

void dJh_FlFoot_ParallelStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
