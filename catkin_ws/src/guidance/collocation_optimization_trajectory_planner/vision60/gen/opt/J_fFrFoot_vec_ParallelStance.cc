/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:07:37 GMT+02:00
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
  double t1474;
  double t1350;
  double t1477;
  double t1511;
  double t1502;
  double t1503;
  double t1528;
  double t1406;
  double t1505;
  double t1529;
  double t1533;
  double t1488;
  double t1542;
  double t1565;
  double t1573;
  double t1540;
  double t1611;
  double t1614;
  double t1683;
  double t1687;
  double t1688;
  double t1689;
  double t1575;
  double t1578;
  double t1579;
  double t1724;
  double t1725;
  double t1727;
  double t1746;
  double t1748;
  double t1760;
  double t1738;
  double t1740;
  double t1741;
  double t1473;
  double t1489;
  double t1490;
  double t1814;
  double t1816;
  double t1537;
  double t1591;
  double t1592;
  double t1610;
  double t1691;
  double t1692;
  double t1701;
  double t1703;
  double t1704;
  double t1696;
  double t1698;
  double t1699;
  double t1728;
  double t1729;
  double t1731;
  double t1828;
  double t1829;
  double t1830;
  double t1820;
  double t1821;
  double t1822;
  double t1765;
  double t1769;
  double t1771;
  double t1901;
  double t1902;
  double t1903;
  double t1896;
  double t1897;
  double t1898;
  double t1916;
  double t1917;
  double t1918;
  double t1837;
  double t1838;
  double t1839;
  double t1841;
  double t1842;
  double t1843;
  double t1845;
  double t1846;
  double t1847;
  double t1864;
  double t1865;
  double t1866;
  double t1871;
  double t1872;
  double t1873;
  double t1878;
  double t1879;
  double t1880;
  double t1886;
  double t1887;
  double t1888;
  double t1890;
  double t1891;
  double t1892;
  double t1905;
  double t1906;
  double t1907;
  double t1909;
  double t1910;
  double t1911;
  double t2016;
  double t2017;
  double t2018;
  double t2011;
  double t2012;
  double t2013;
  double t2049;
  double t2050;
  double t2051;
  double t2054;
  double t2056;
  double t2057;
  double t2058;
  double t2059;
  double t2060;
  double t2048;
  double t2052;
  double t2062;
  double t2066;
  double t2047;
  double t2067;
  double t2068;
  double t2070;
  double t2071;
  double t2072;
  double t2078;
  double t2079;
  double t2080;
  double t2081;
  double t2087;
  double t2088;
  double t2091;
  double t2092;
  double t2101;
  double t2102;
  double t2103;
  double t2106;
  double t1778;
  double t1789;
  double t1790;
  double t2128;
  double t2129;
  double t2130;
  double t2116;
  double t2123;
  double t2124;
  double t2069;
  double t2111;
  double t2112;
  double t2154;
  double t2155;
  double t2156;
  double t2277;
  double t2278;
  double t2279;
  double t2157;
  double t2158;
  double t2159;
  double t2168;
  double t2220;
  double t2221;
  double t2222;
  double t2223;
  double t2233;
  double t2234;
  double t2235;
  double t2236;
  double t2244;
  double t2245;
  double t2246;
  double t2247;
  double t2257;
  double t2258;
  double t2259;
  double t2260;
  double t2268;
  double t2269;
  double t2270;
  double t2271;
  double t1712;
  double t1713;
  double t1715;
  double t2343;
  double t2344;
  double t2345;
  double t2347;
  double t2348;
  double t1707;
  double t1708;
  double t1710;
  double t2349;
  double t2350;
  double t2351;
  double t2354;
  double t2355;
  double t2356;
  double t1717;
  double t1718;
  double t1719;
  double t2342;
  double t2537;
  double t2538;
  double t2542;
  double t2543;
  double t2545;
  double t2551;
  double t2556;
  double t2557;
  double t2558;
  double t2540;
  double t2552;
  double t2553;
  double t2555;
  double t2559;
  double t2560;
  double t2564;
  double t2565;
  double t2567;
  double t1723;
  double t1732;
  double t1735;
  double t1764;
  double t1772;
  double t1773;
  double t2640;
  double t2641;
  double t2642;
  double t2639;
  double t2643;
  double t2644;
  double t2646;
  double t2651;
  double t2758;
  double t2759;
  double t2762;
  double t2645;
  double t2666;
  double t2703;
  double t2757;
  double t2763;
  double t2764;
  double t2766;
  double t2767;
  double t2768;
  double t2281;
  double t2288;
  double t2289;
  double t2300;
  double t2301;
  double t2309;
  double t2310;
  double t2322;
  double t2329;
  double t2330;
  double t2842;
  double t2844;
  double t2849;
  double t2346;
  double t2353;
  double t2384;
  double t2424;
  double t2867;
  double t2868;
  double t2876;
  double t2470;
  double t2471;
  double t2916;
  double t2968;
  double t2977;
  double t2483;
  double t2484;
  double t2980;
  double t2981;
  double t2982;
  double t3111;
  double t3183;
  double t3198;
  double t2508;
  double t3655;
  double t2511;
  double t2519;
  double t2521;
  double t3242;
  double t3392;
  double t3399;
  double t2554;
  double t2576;
  double t4526;
  double t2593;
  double t2611;
  double t2612;
  double t2622;
  double t2627;
  double t2628;
  double t2715;
  double t2772;
  double t2773;
  double t2783;
  double t2784;
  double t2794;
  double t2804;
  double t2811;
  double t4443;
  double t4453;
  double t4484;
  double t4498;
  double t3637;
  double t3643;
  double t3700;
  double t3706;
  double t3899;
  double t3979;
  double t4241;
  double t4258;
  double t6572;
  double t6604;
  double t4552;
  double t4553;
  double t6893;
  double t6933;
  double t4527;
  double t7302;
  double t7154;
  double t7158;
  double t7186;
  double t7263;
  double t7273;
  double t7275;
  double t4539;
  double t4540;
  double t4535;
  double t6638;
  double t6640;
  double t5918;
  double t4611;
  double t4616;
  double t7058;
  double t7064;
  double t5185;
  double t5008;
  double t5052;
  double t6715;
  double t7065;
  double t8051;
  double t8053;
  double t8183;
  double t9336;
  double t9338;
  double t9400;
  double t9402;
  double t9109;
  double t9130;
  double t9190;
  double t10285;
  double t10288;
  t1474 = Cos(var1[12]);
  t1350 = Cos(var1[4]);
  t1477 = Sin(var1[4]);
  t1511 = Cos(var1[13]);
  t1502 = Cos(var1[14]);
  t1503 = Sin(var1[13]);
  t1528 = Sin(var1[14]);
  t1406 = Sin(var1[12]);
  t1505 = t1502*t1503;
  t1529 = -1.*t1511*t1528;
  t1533 = t1505 + t1529;
  t1488 = Sin(var1[5]);
  t1542 = t1511*t1502;
  t1565 = t1503*t1528;
  t1573 = t1542 + t1565;
  t1540 = Cos(var1[5]);
  t1611 = -1.*t1502*t1503;
  t1614 = t1511*t1528;
  t1683 = t1611 + t1614;
  t1687 = t1540*t1683;
  t1688 = t1406*t1573*t1488;
  t1689 = t1687 + t1688;
  t1575 = t1540*t1573;
  t1578 = t1406*t1533*t1488;
  t1579 = t1575 + t1578;
  t1724 = -1.*t1511*t1502;
  t1725 = -1.*t1503*t1528;
  t1727 = t1724 + t1725;
  t1746 = t1474*t1533*t1477;
  t1748 = t1350*t1579;
  t1760 = t1746 + t1748;
  t1738 = t1474*t1573*t1477;
  t1740 = t1350*t1689;
  t1741 = t1738 + t1740;
  t1473 = t1350*t1406;
  t1489 = t1474*t1477*t1488;
  t1490 = t1473 + t1489;
  t1814 = Sin(var1[3]);
  t1816 = Cos(var1[3]);
  t1537 = t1474*t1350*t1533;
  t1591 = -1.*t1477*t1579;
  t1592 = t1537 + t1591;
  t1610 = t1474*t1350*t1573;
  t1691 = -1.*t1477*t1689;
  t1692 = t1610 + t1691;
  t1701 = t1540*t1406*t1533;
  t1703 = -1.*t1573*t1488;
  t1704 = t1701 + t1703;
  t1696 = t1540*t1406*t1573;
  t1698 = -1.*t1683*t1488;
  t1699 = t1696 + t1698;
  t1728 = t1540*t1727;
  t1729 = t1406*t1683*t1488;
  t1731 = t1728 + t1729;
  t1828 = -1.*t1540*t1406*t1573;
  t1829 = t1683*t1488;
  t1830 = t1828 + t1829;
  t1820 = -1.*t1540*t1406*t1533;
  t1821 = t1573*t1488;
  t1822 = t1820 + t1821;
  t1765 = t1540*t1533;
  t1769 = t1406*t1727*t1488;
  t1771 = t1765 + t1769;
  t1901 = t1816*t1822;
  t1902 = -1.*t1814*t1592;
  t1903 = t1901 + t1902;
  t1896 = t1816*t1830;
  t1897 = -1.*t1814*t1692;
  t1898 = t1896 + t1897;
  t1916 = t1474*t1816*t1540;
  t1917 = -1.*t1814*t1490;
  t1918 = t1916 + t1917;
  t1837 = -1.*t1406*t1477;
  t1838 = t1474*t1350*t1488;
  t1839 = t1837 + t1838;
  t1841 = -1.*t1474*t1533*t1477;
  t1842 = -1.*t1350*t1579;
  t1843 = t1841 + t1842;
  t1845 = -1.*t1474*t1573*t1477;
  t1846 = -1.*t1350*t1689;
  t1847 = t1845 + t1846;
  t1864 = t1474*t1350;
  t1865 = -1.*t1406*t1477*t1488;
  t1866 = t1864 + t1865;
  t1871 = -1.*t1350*t1406*t1533;
  t1872 = -1.*t1474*t1533*t1477*t1488;
  t1873 = t1871 + t1872;
  t1878 = -1.*t1350*t1406*t1573;
  t1879 = -1.*t1474*t1573*t1477*t1488;
  t1880 = t1878 + t1879;
  t1886 = -1.*t1540*t1406*t1683;
  t1887 = t1727*t1488;
  t1888 = t1886 + t1887;
  t1890 = t1474*t1350*t1683;
  t1891 = -1.*t1477*t1731;
  t1892 = t1890 + t1891;
  t1905 = -1.*t1540*t1406*t1727;
  t1906 = t1533*t1488;
  t1907 = t1905 + t1906;
  t1909 = t1474*t1350*t1727;
  t1910 = -1.*t1477*t1771;
  t1911 = t1909 + t1910;
  t2016 = t1814*t1822;
  t2017 = t1816*t1592;
  t2018 = t2016 + t2017;
  t2011 = t1814*t1830;
  t2012 = t1816*t1692;
  t2013 = t2011 + t2012;
  t2049 = -0.0641*t1502;
  t2050 = -0.28*t1528;
  t2051 = t2049 + t2050;
  t2054 = -1.*t1502;
  t2056 = 1. + t2054;
  t2057 = 0.075*t2056;
  t2058 = 0.355*t1502;
  t2059 = -0.0641*t1528;
  t2060 = t2057 + t2058 + t2059;
  t2048 = -0.325*t1503;
  t2052 = t1511*t2051;
  t2062 = t1503*t2060;
  t2066 = t2048 + t2052 + t2062;
  t2047 = -0.068*t1406;
  t2067 = t1474*t2066;
  t2068 = t2047 + t2067;
  t2070 = -1.*t1511;
  t2071 = 1. + t2070;
  t2072 = 0.325*t2071;
  t2078 = -1.*t1503*t2051;
  t2079 = t1511*t2060;
  t2080 = t2072 + t2078 + t2079;
  t2081 = t1540*t2080;
  t2087 = -1.*t1474;
  t2088 = 1. + t2087;
  t2091 = -0.1575*t2088;
  t2092 = -0.2255*t1474;
  t2101 = -1.*t1406*t2066;
  t2102 = t2091 + t2092 + t2101;
  t2103 = -1.*t2102*t1488;
  t2106 = t2081 + t2103;
  t1778 = t1406*t1477;
  t1789 = -1.*t1474*t1350*t1488;
  t1790 = t1778 + t1789;
  t2128 = t1350*t2068;
  t2129 = -1.*t1477*t2106;
  t2130 = t2128 + t2129;
  t2116 = t2068*t1477;
  t2123 = t1350*t2106;
  t2124 = t2116 + t2123;
  t2069 = -1.*t2068*t1477;
  t2111 = -1.*t1350*t2106;
  t2112 = t2069 + t2111;
  t2154 = t1540*t2102;
  t2155 = t2080*t1488;
  t2156 = t2154 + t2155;
  t2277 = -1.*t1540*t2102;
  t2278 = -1.*t2080*t1488;
  t2279 = t2277 + t2278;
  t2157 = t1474*t1540*t2156;
  t2158 = t1790*t2124;
  t2159 = t1490*t2130;
  t2168 = t2157 + t2158 + t2159;
  t2220 = -1.*t2156*t1822;
  t2221 = -1.*t2124*t1760;
  t2222 = -1.*t2130*t1592;
  t2223 = t2220 + t2221 + t2222;
  t2233 = t2156*t1822;
  t2234 = t2124*t1760;
  t2235 = t2130*t1592;
  t2236 = t2233 + t2234 + t2235;
  t2244 = -1.*t2156*t1830;
  t2245 = -1.*t2124*t1741;
  t2246 = -1.*t2130*t1692;
  t2247 = t2244 + t2245 + t2246;
  t2257 = -1.*t1474*t1540*t2156;
  t2258 = -1.*t1790*t2124;
  t2259 = -1.*t1490*t2130;
  t2260 = t2257 + t2258 + t2259;
  t2268 = t2156*t1830;
  t2269 = t2124*t1741;
  t2270 = t2130*t1692;
  t2271 = t2268 + t2269 + t2270;
  t1712 = -1.*t1406*t1533*t1477;
  t1713 = t1474*t1350*t1533*t1488;
  t1715 = t1712 + t1713;
  t2343 = 0.068*t1406;
  t2344 = -1.*t1474*t2066;
  t2345 = t2343 + t2344;
  t2347 = -0.068*t1474;
  t2348 = t2347 + t2101;
  t1707 = t1474*t1477;
  t1708 = t1350*t1406*t1488;
  t1710 = t1707 + t1708;
  t2349 = t2348*t1477;
  t2350 = -1.*t1350*t2345*t1488;
  t2351 = t2349 + t2350;
  t2354 = t1350*t2348;
  t2355 = t2345*t1477*t1488;
  t2356 = t2354 + t2355;
  t1717 = -1.*t1406*t1573*t1477;
  t1718 = t1474*t1350*t1573*t1488;
  t1719 = t1717 + t1718;
  t2342 = Power(t1540,2);
  t2537 = -0.325*t1511;
  t2538 = t2537 + t2078 + t2079;
  t2542 = 0.325*t1503;
  t2543 = -1.*t1511*t2051;
  t2545 = -1.*t1503*t2060;
  t2551 = t2542 + t2543 + t2545;
  t2556 = t1540*t2551;
  t2557 = t1406*t2538*t1488;
  t2558 = t2556 + t2557;
  t2540 = -1.*t1540*t1406*t2538;
  t2552 = t2551*t1488;
  t2553 = t2540 + t2552;
  t2555 = t1474*t2538*t1477;
  t2559 = t1350*t2558;
  t2560 = t2555 + t2559;
  t2564 = t1474*t1350*t2538;
  t2565 = -1.*t1477*t2558;
  t2567 = t2564 + t2565;
  t1723 = t1474*t1683*t1477;
  t1732 = t1350*t1731;
  t1735 = t1723 + t1732;
  t1764 = t1474*t1727*t1477;
  t1772 = t1350*t1771;
  t1773 = t1764 + t1772;
  t2640 = -0.28*t1502;
  t2641 = 0.0641*t1528;
  t2642 = t2640 + t2641;
  t2639 = t1503*t2051;
  t2643 = t1511*t2642;
  t2644 = t2639 + t2643;
  t2646 = -1.*t1503*t2642;
  t2651 = t2052 + t2646;
  t2758 = t1540*t2651;
  t2759 = t1406*t2644*t1488;
  t2762 = t2758 + t2759;
  t2645 = -1.*t1540*t1406*t2644;
  t2666 = t2651*t1488;
  t2703 = t2645 + t2666;
  t2757 = t1474*t2644*t1477;
  t2763 = t1350*t2762;
  t2764 = t2757 + t2763;
  t2766 = t1474*t1350*t2644;
  t2767 = -1.*t1477*t2762;
  t2768 = t2766 + t2767;
  t2281 = -1.*t1474*t1488*t2156;
  t2288 = -1.*t2156*t1579;
  t2289 = -1.*t2106*t1822;
  t2300 = t2156*t1579;
  t2301 = t2106*t1822;
  t2309 = -1.*t2106*t1830;
  t2310 = -1.*t2156*t1689;
  t2322 = t1474*t1488*t2156;
  t2329 = t2106*t1830;
  t2330 = t2156*t1689;
  t2842 = t1406*t2068;
  t2844 = -1.*t1474*t1488*t2106;
  t2849 = t2842 + t2844 + t2157;
  t2346 = t1474*t2342*t2345;
  t2353 = -1.*t1540*t1406*t2156;
  t2384 = t1474*t1540*t1533*t2156;
  t2424 = -1.*t1540*t2345*t1822;
  t2867 = -1.*t1474*t2068*t1533;
  t2868 = -1.*t2106*t1579;
  t2876 = t2867 + t2868 + t2220;
  t2470 = -1.*t1474*t1540*t1533*t2156;
  t2471 = t1540*t2345*t1822;
  t2916 = t1474*t2068*t1533;
  t2968 = t2106*t1579;
  t2977 = t2916 + t2968 + t2233;
  t2483 = t1474*t1540*t1573*t2156;
  t2484 = -1.*t1540*t2345*t1830;
  t2980 = -1.*t1474*t2068*t1573;
  t2981 = -1.*t2106*t1689;
  t2982 = t2980 + t2244 + t2981;
  t3111 = -1.*t1406*t2068;
  t3183 = t1474*t1488*t2106;
  t3198 = t3111 + t3183 + t2257;
  t2508 = -1.*t1474*t2342*t2345;
  t3655 = Power(t1488,2);
  t2511 = t1540*t1406*t2156;
  t2519 = -1.*t1474*t1540*t1573*t2156;
  t2521 = t1540*t2345*t1830;
  t3242 = t1474*t2068*t1573;
  t3392 = t2106*t1689;
  t3399 = t3242 + t2268 + t3392;
  t2554 = t1474*t1540*t2553;
  t2576 = -1.*t2553*t1822;
  t4526 = Power(t1474,2);
  t2593 = t2553*t1822;
  t2611 = -1.*t2553*t1830;
  t2612 = -1.*t2156*t1888;
  t2622 = -1.*t1474*t1540*t2553;
  t2627 = t2553*t1830;
  t2628 = t2156*t1888;
  t2715 = t1474*t1540*t2703;
  t2772 = -1.*t2156*t1907;
  t2773 = -1.*t2703*t1822;
  t2783 = t2156*t1907;
  t2784 = t2703*t1822;
  t2794 = -1.*t2703*t1830;
  t2804 = -1.*t1474*t1540*t2703;
  t2811 = t2703*t1830;
  t4443 = -1.*t1474*t2068;
  t4453 = -1.*t1406*t2348;
  t4484 = -1.*t1406*t2068*t1573;
  t4498 = t1474*t2348*t1573;
  t3637 = t1474*t2068;
  t3643 = t1406*t2348;
  t3700 = t1406*t2068*t1533;
  t3706 = -1.*t1474*t2348*t1533;
  t3899 = -1.*t1406*t2068*t1533;
  t3979 = t1474*t2348*t1533;
  t4241 = t1406*t2068*t1573;
  t4258 = -1.*t1474*t2348*t1573;
  t6572 = -1.*t1474*t2102;
  t6604 = t3111 + t6572;
  t4552 = t1474*t2068*t1683;
  t4553 = t4526*t2538*t1573;
  t6893 = t1474*t2102;
  t6933 = t2842 + t6893;
  t4527 = -1.*t4526*t2538*t1533;
  t7302 = Power(t1406,2);
  t7154 = -1.*t2080*t1683;
  t7158 = t1406*t2102*t1573;
  t7186 = t7154 + t2980 + t7158;
  t7263 = -1.*t1406*t2102*t1533;
  t7273 = t2080*t1573;
  t7275 = t2916 + t7263 + t7273;
  t4539 = -1.*t1474*t2068*t1683;
  t4540 = -1.*t4526*t2538*t1573;
  t4535 = t4526*t2538*t1533;
  t6638 = t2080*t1683;
  t6640 = -1.*t1406*t2102*t1573;
  t5918 = t4526*t2644*t1573;
  t4611 = -1.*t4526*t2644*t1533;
  t4616 = -1.*t1474*t2068*t1727;
  t7058 = t1406*t2102*t1533;
  t7064 = -1.*t2080*t1573;
  t5185 = -1.*t4526*t2644*t1573;
  t5008 = t4526*t2644*t1533;
  t5052 = t1474*t2068*t1727;
  t6715 = t6638 + t3242 + t6640;
  t7065 = t2867 + t7058 + t7064;
  t8051 = -1.*t2551*t1683;
  t8053 = -1.*t2080*t1727;
  t8183 = t2551*t1573;
  t9336 = t2066*t1533;
  t9338 = t9336 + t7273;
  t9400 = -1.*t2066*t1573;
  t9402 = t7154 + t9400;
  t9109 = -1.*t2651*t1683;
  t9130 = t2080*t1533;
  t9190 = t2651*t1573;
  t10285 = 0.325*t1528;
  t10288 = -1.*t2060*t1528;
  p_output1[0]=t1592*var2[0] + t1490*var2[1] + t1692*var2[2];
  p_output1[1]=t1350*t1704*var2[0] - 1.*t1350*t1474*t1540*var2[1] + t1350*t1699*var2[2];
  p_output1[2]=t1715*var2[0] + t1710*var2[1] + t1719*var2[2];
  p_output1[3]=t1741*var2[0] + t1735*var2[2];
  p_output1[4]=t1773*var2[0] + t1760*var2[2];
  p_output1[5]=t1760;
  p_output1[6]=t1790;
  p_output1[7]=t1741;
  p_output1[8]=(-1.*t1592*t1816 - 1.*t1814*t1822)*var2[0] + (-1.*t1474*t1540*t1814 - 1.*t1490*t1816)*var2[1] + (-1.*t1692*t1816 - 1.*t1814*t1830)*var2[2];
  p_output1[9]=-1.*t1814*t1843*var2[0] - 1.*t1814*t1839*var2[1] - 1.*t1814*t1847*var2[2];
  p_output1[10]=(t1477*t1704*t1814 + t1579*t1816)*var2[0] + (-1.*t1474*t1477*t1540*t1814 - 1.*t1474*t1488*t1816)*var2[1] + (t1477*t1699*t1814 + t1689*t1816)*var2[2];
  p_output1[11]=(-1.*t1474*t1533*t1540*t1816 - 1.*t1814*t1873)*var2[0] + (-1.*t1406*t1540*t1816 - 1.*t1814*t1866)*var2[1] + (-1.*t1474*t1540*t1573*t1816 - 1.*t1814*t1880)*var2[2];
  p_output1[12]=t1898*var2[0] + (t1816*t1888 - 1.*t1814*t1892)*var2[2];
  p_output1[13]=(t1816*t1907 - 1.*t1814*t1911)*var2[0] + t1903*var2[2];
  p_output1[14]=t1903;
  p_output1[15]=t1918;
  p_output1[16]=t1898;
  p_output1[17]=t1903*var2[0] + t1918*var2[1] + t1898*var2[2];
  p_output1[18]=t1816*t1843*var2[0] + t1816*t1839*var2[1] + t1816*t1847*var2[2];
  p_output1[19]=(t1579*t1814 - 1.*t1477*t1704*t1816)*var2[0] + (-1.*t1474*t1488*t1814 + t1474*t1477*t1540*t1816)*var2[1] + (t1689*t1814 - 1.*t1477*t1699*t1816)*var2[2];
  p_output1[20]=(-1.*t1474*t1533*t1540*t1814 + t1816*t1873)*var2[0] + (-1.*t1406*t1540*t1814 + t1816*t1866)*var2[1] + (-1.*t1474*t1540*t1573*t1814 + t1816*t1880)*var2[2];
  p_output1[21]=t2013*var2[0] + (t1814*t1888 + t1816*t1892)*var2[2];
  p_output1[22]=(t1814*t1907 + t1816*t1911)*var2[0] + t2018*var2[2];
  p_output1[23]=t2018;
  p_output1[24]=t1474*t1540*t1814 + t1490*t1816;
  p_output1[25]=t2013;
  p_output1[26]=(t1741*(-1.*t1490*t2112 - 1.*t1490*t2124 - 1.*t1790*t2130 - 1.*t1839*t2130) + t1790*(t1692*t2112 + t1692*t2124 + t1741*t2130 + t1847*t2130) + t1692*t2260 + t1490*t2271)*var2[0] + (t1741*(t1592*t2112 + t1592*t2124 + t1760*t2130 + t1843*t2130) + t1760*(-1.*t1692*t2112 - 1.*t1692*t2124 - 1.*t1741*t2130 - 1.*t1847*t2130) + t1692*t2236 + t1592*t2247)*var2[1] + (t1760*(t1490*t2112 + t1490*t2124 + t1790*t2130 + t1839*t2130) + t1790*(-1.*t1592*t2112 - 1.*t1592*t2124 - 1.*t1760*t2130 - 1.*t1843*t2130) + t1592*t2168 + t1490*t2223)*var2[2];
  p_output1[27]=(t1350*t1699*t2260 - 1.*t1350*t1474*t1540*t2271 + t1741*(-1.*t1474*t1540*t2106 + t1350*t1474*t1540*t2124 - 1.*t1474*t1477*t1540*t2130 + t1477*t1490*t2279 - 1.*t1350*t1790*t2279 + t2322) + t1790*(t1350*t1699*t2124 - 1.*t1477*t1699*t2130 - 1.*t1477*t1692*t2279 + t1350*t1741*t2279 + t2329 + t2330))*var2[0] + (t1350*t1699*t2236 + t1350*t1704*t2247 + t1741*(t1350*t1704*t2124 - 1.*t1477*t1704*t2130 - 1.*t1477*t1592*t2279 + t1350*t1760*t2279 + t2300 + t2301) + t1760*(-1.*t1350*t1699*t2124 + t1477*t1699*t2130 + t1477*t1692*t2279 - 1.*t1350*t1741*t2279 + t2309 + t2310))*var2[1] + (t1350*t1704*t2168 - 1.*t1350*t1474*t1540*t2223 + t1760*(t1474*t1540*t2106 - 1.*t1350*t1474*t1540*t2124 + t1474*t1477*t1540*t2130 - 1.*t1477*t1490*t2279 + t1350*t1790*t2279 + t2281) + t1790*(-1.*t1350*t1704*t2124 + t1477*t1704*t2130 + t1477*t1592*t2279 - 1.*t1350*t1760*t2279 + t2288 + t2289))*var2[2];
  p_output1[28]=(t1719*t2260 + t1710*t2271 + t1741*(-1.*t1710*t2124 - 1.*t1866*t2130 - 1.*t1790*t2351 - 1.*t1490*t2356 + t2508 + t2511) + t1790*(t1719*t2124 + t1880*t2130 + t1741*t2351 + t1692*t2356 + t2519 + t2521))*var2[0] + (t1719*t2236 + t1715*t2247 + t1741*(t1715*t2124 + t1873*t2130 + t1760*t2351 + t1592*t2356 + t2470 + t2471) + t1760*(-1.*t1719*t2124 - 1.*t1880*t2130 - 1.*t1741*t2351 - 1.*t1692*t2356 + t2483 + t2484))*var2[1] + (t1715*t2168 + t1710*t2223 + t1760*(t1710*t2124 + t1866*t2130 + t2346 + t1790*t2351 + t2353 + t1490*t2356) + t1790*(-1.*t1715*t2124 - 1.*t1873*t2130 - 1.*t1760*t2351 - 1.*t1592*t2356 + t2384 + t2424))*var2[2];
  p_output1[29]=(t1735*t2260 + t1741*(-1.*t1790*t2560 - 1.*t1490*t2567 + t2622) + t1790*(t1735*t2124 + t1892*t2130 + t1741*t2560 + t1692*t2567 + t2627 + t2628))*var2[0] + (t1735*t2236 + t1741*t2247 + t1741*(t2268 + t2269 + t2270 + t1760*t2560 + t1592*t2567 + t2593) + t1760*(-1.*t1735*t2124 - 1.*t1892*t2130 - 1.*t1741*t2560 - 1.*t1692*t2567 + t2611 + t2612))*var2[1] + (t1741*t2168 + t1760*(t2554 + t1790*t2560 + t1490*t2567) + t1790*(t2244 + t2245 + t2246 - 1.*t1760*t2560 - 1.*t1592*t2567 + t2576))*var2[2];
  p_output1[30]=(t1760*t2260 + t1741*(-1.*t1790*t2764 - 1.*t1490*t2768 + t2804) + t1790*(t2233 + t2234 + t2235 + t1741*t2764 + t1692*t2768 + t2811))*var2[0] + (t1760*t2236 + t1773*t2247 + t1741*(t1773*t2124 + t1911*t2130 + t1760*t2764 + t1592*t2768 + t2783 + t2784) + t1760*(t2220 + t2221 + t2222 - 1.*t1741*t2764 - 1.*t1692*t2768 + t2794))*var2[1] + (t1773*t2168 + t1760*(t2715 + t1790*t2764 + t1490*t2768) + t1790*(-1.*t1773*t2124 - 1.*t1911*t2130 - 1.*t1760*t2764 - 1.*t1592*t2768 + t2772 + t2773))*var2[2];
  p_output1[31]=t1741*t2260 + t1790*t2271;
  p_output1[32]=t1741*t2236 + t1760*t2247;
  p_output1[33]=t1760*t2168 + t1790*t2223;
  p_output1[34]=(t1830*(t1474*t1488*t2279 + t2322) + t1474*t1540*(t1699*t2106 + t1689*t2279 + t2329 + t2330) + t1689*t3198 - 1.*t1474*t1488*t3399)*var2[0] + (t1830*(t1704*t2106 + t1579*t2279 + t2300 + t2301) + t1822*(-1.*t1699*t2106 - 1.*t1689*t2279 + t2309 + t2310) + t1689*t2977 + t1579*t2982)*var2[1] + (t1822*(-1.*t1474*t1488*t2279 + t2281) + t1474*t1540*(-1.*t1704*t2106 - 1.*t1579*t2279 + t2288 + t2289) + t1579*t2849 - 1.*t1474*t1488*t2876)*var2[2];
  p_output1[35]=(-1.*t1474*t1540*t1573*t3198 - 1.*t1406*t1540*t3399 + t1830*(-1.*t1406*t1488*t2106 + t2508 + t2511 - 1.*t1474*t2345*t3655 + t4443 + t4453) + t1474*t1540*(t1474*t1488*t1573*t2106 - 1.*t1488*t1689*t2345 + t2519 + t2521 + t4484 + t4498))*var2[0] + (-1.*t1474*t1540*t1573*t2977 - 1.*t1474*t1533*t1540*t2982 + t1830*(t1474*t1488*t1533*t2106 - 1.*t1488*t1579*t2345 + t2470 + t2471 + t3899 + t3979) + t1822*(-1.*t1474*t1488*t1573*t2106 + t1488*t1689*t2345 + t2483 + t2484 + t4241 + t4258))*var2[1] + (-1.*t1474*t1533*t1540*t2849 - 1.*t1406*t1540*t2876 + t1822*(t1406*t1488*t2106 + t2346 + t2353 + t3637 + t3643 + t1474*t2345*t3655) + t1474*t1540*(-1.*t1474*t1488*t1533*t2106 + t1488*t1579*t2345 + t2384 + t2424 + t3700 + t3706))*var2[2];
  p_output1[36]=(t1830*(-1.*t1406*t1474*t2538 + t1474*t1488*t2558 + t2622) + t1888*t3198 + t1474*t1540*(t1731*t2106 + t1689*t2558 + t2627 + t2628 + t4552 + t4553))*var2[0] + (t1888*t2977 + t1830*t2982 + t1830*(t2268 + t1579*t2558 + t2593 + t3242 + t3392 + t4535) + t1822*(-1.*t1731*t2106 - 1.*t1689*t2558 + t2611 + t2612 + t4539 + t4540))*var2[1] + (t1822*(t1406*t1474*t2538 + t2554 - 1.*t1474*t1488*t2558) + t1830*t2849 + t1474*t1540*(t2244 - 1.*t1579*t2558 + t2576 + t2980 + t2981 + t4527))*var2[2];
  p_output1[37]=(t1830*(-1.*t1406*t1474*t2644 + t1474*t1488*t2762 + t2804) + t1822*t3198 + t1474*t1540*(t2233 + t1689*t2762 + t2811 + t2916 + t2968 + t5918))*var2[0] + (t1822*t2977 + t1907*t2982 + t1830*(t1771*t2106 + t1579*t2762 + t2783 + t2784 + t5008 + t5052) + t1822*(t2220 - 1.*t1689*t2762 + t2794 + t2867 + t2868 + t5185))*var2[1] + (t1822*(t1406*t1474*t2644 + t2715 - 1.*t1474*t1488*t2762) + t1907*t2849 + t1474*t1540*(-1.*t1771*t2106 - 1.*t1579*t2762 + t2772 + t2773 + t4611 + t4616))*var2[2];
  p_output1[38]=t1830*t3198 + t1474*t1540*t3399;
  p_output1[39]=t1830*t2977 + t1822*t2982;
  p_output1[40]=t1822*t2849 + t1474*t1540*t2876;
  p_output1[41]=(t1474*t1573*(t1406*t2102 - 1.*t1474*t2345 + t4443 + t4453) + t1406*(-1.*t1474*t1573*t2102 - 1.*t1406*t1573*t2345 + t4484 + t4498) - 1.*t1406*t1573*t6604 + t1474*t6715)*var2[0] + (t1474*t1573*(-1.*t1474*t1533*t2102 - 1.*t1406*t1533*t2345 + t3899 + t3979) + t1474*t1533*(t1474*t1573*t2102 + t1406*t1573*t2345 + t4241 + t4258) - 1.*t1406*t1533*t7186 - 1.*t1406*t1573*t7275)*var2[1] + (t1474*t1533*(-1.*t1406*t2102 + t1474*t2345 + t3637 + t3643) + t1406*(t1474*t1533*t2102 + t1406*t1533*t2345 + t3700 + t3706) - 1.*t1406*t1533*t6933 + t1474*t7065)*var2[2];
  p_output1[42]=(t1474*t1683*t6604 + t1406*(t1727*t2080 - 1.*t1406*t1683*t2102 + t1683*t2551 + t4552 + t4553 + t1573*t2538*t7302))*var2[0] + (t1474*t1573*t7186 + t1474*t1683*t7275 + t1474*t1533*(t1406*t1683*t2102 + t4539 + t4540 - 1.*t1573*t2538*t7302 + t8051 + t8053) + t1474*t1573*(t3242 + t4535 + t6638 + t6640 + t1533*t2538*t7302 + t8183))*var2[1] + (t1474*t1573*t6933 + t1406*(-1.*t1573*t2551 + t2980 + t4527 + t7154 + t7158 - 1.*t1533*t2538*t7302))*var2[2];
  p_output1[43]=(t1474*t1533*t6604 + t1406*(t1683*t2651 + t2916 + t5918 + t7263 + t7273 + t1573*t2644*t7302))*var2[0] + (t1474*t1727*t7186 + t1474*t1533*t7275 + t1474*t1533*(t2867 + t5185 + t7058 + t7064 - 1.*t1573*t2644*t7302 + t9109) + t1474*t1573*(-1.*t1406*t1727*t2102 + t5008 + t5052 + t1533*t2644*t7302 + t9130 + t9190))*var2[1] + (t1474*t1727*t6933 + t1406*(-1.*t1533*t2080 + t1406*t1727*t2102 - 1.*t1573*t2651 + t4611 + t4616 - 1.*t1533*t2644*t7302))*var2[2];
  p_output1[44]=t1474*t1573*t6604 + t1406*t6715;
  p_output1[45]=t1474*t1533*t7186 + t1474*t1573*t7275;
  p_output1[46]=t1474*t1533*t6933 + t1406*t7065;
  p_output1[47]=(0.1575*t1573 + 0.2255*t1727)*var2[0] + (t1573*(-1.*t1683*t2066 - 1.*t1573*t2538 + t8051 + t8053) + t1683*(t1573*t2066 + t1533*t2538 + t6638 + t8183) + t1727*t9338 + t1683*t9402)*var2[1] - 0.068*t1683*var2[2];
  p_output1[48]=(0.2255*t1573 + 0.1575*t1727)*var2[0] + (t1573*(-1.*t1533*t2066 - 1.*t1573*t2644 + t7064 + t9109) + t1683*(t1727*t2066 + t1533*t2644 + t9130 + t9190) + t1573*t9338 + t1533*t9402)*var2[1] - 0.068*t1533*var2[2];
  p_output1[49]=0.1575*t1533 + 0.2255*t1683;
  p_output1[50]=t1683*t9338 + t1573*t9402;
  p_output1[51]=-0.068*t1573;
  p_output1[52]=(0.325*t1502 - 1.*t1502*t2060 - 1.*t1502*t2642)*var2[0] + (t10285 + t10288 - 1.*t1528*t2642)*var2[2];
  p_output1[53]=t10285 + t10288 - 1.*t1502*t2051;
  p_output1[54]=-0.325*t1502 - 1.*t1528*t2051 + t1502*t2060;
  p_output1[55]=-0.0641;
  p_output1[56]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 57, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fFrFoot_vec_ParallelStance.hh"

namespace ParallelStance
{

void J_fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
