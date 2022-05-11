/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:28 GMT+02:00
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
  double t1205;
  double t1172;
  double t1173;
  double t1286;
  double t1175;
  double t1291;
  double t1292;
  double t920;
  double t1535;
  double t1551;
  double t1625;
  double t925;
  double t1627;
  double t1641;
  double t1529;
  double t1637;
  double t1638;
  double t231;
  double t1683;
  double t1729;
  double t1774;
  double t1784;
  double t1786;
  double t1787;
  double t1788;
  double t1789;
  double t1793;
  double t1920;
  double t1937;
  double t1938;
  double t2023;
  double t2027;
  double t2049;
  double t2054;
  double t2055;
  double t2059;
  double t2060;
  double t2061;
  double t2063;
  double t2019;
  double t2053;
  double t2064;
  double t2066;
  double t2013;
  double t2014;
  double t2015;
  double t2018;
  double t2067;
  double t2068;
  double t2072;
  double t2073;
  double t2075;
  double t2076;
  double t2078;
  double t2080;
  double t2081;
  double t2082;
  double t2083;
  double t2084;
  double t2087;
  double t2088;
  double t2095;
  double t2100;
  double t2104;
  double t2118;
  double t2119;
  double t2130;
  double t1977;
  double t1978;
  double t1979;
  double t1980;
  double t1998;
  double t2005;
  double t2112;
  double t2116;
  double t2117;
  double t2108;
  double t2109;
  double t2110;
  double t1975;
  double t2006;
  double t2008;
  double t2069;
  double t2105;
  double t2106;
  double t2153;
  double t2154;
  double t2155;
  double t2162;
  double t2163;
  double t2164;
  double t2229;
  double t2230;
  double t2231;
  double t2172;
  double t2208;
  double t2212;
  double t2213;
  double t2214;
  double t2250;
  double t2251;
  double t2252;
  double t2254;
  double t2265;
  double t2266;
  double t2267;
  double t2173;
  double t2174;
  double t2175;
  double t2269;
  double t2271;
  double t2216;
  double t2219;
  double t2220;
  double t2244;
  double t2257;
  double t2344;
  double t2345;
  double t2347;
  double t2352;
  double t2353;
  double t2376;
  double t2380;
  double t2381;
  double t2245;
  double t2248;
  double t2349;
  double t2354;
  double t2362;
  double t2364;
  double t2258;
  double t2263;
  double t2393;
  double t2394;
  double t2401;
  double t2405;
  double t2406;
  double t2419;
  double t2420;
  double t2421;
  double t2425;
  double t2428;
  double t2429;
  double t2431;
  double t2432;
  double t2433;
  double t2435;
  double t2436;
  double t2437;
  double t2341;
  double t2342;
  double t2466;
  double t2468;
  double t2469;
  double t2486;
  double t2488;
  double t2477;
  double t2478;
  double t2479;
  double t2481;
  double t2475;
  double t2485;
  double t2489;
  double t2541;
  double t2565;
  double t2566;
  double t2512;
  double t2515;
  double t2520;
  double t2534;
  double t2535;
  double t2536;
  double t2571;
  double t2572;
  double t2573;
  double t2567;
  double t2570;
  double t2575;
  double t2581;
  double t2582;
  double t2583;
  double t2585;
  double t2586;
  double t2587;
  double t2589;
  double t2590;
  double t2591;
  double t2612;
  double t2613;
  double t2614;
  double t2490;
  double t2629;
  double t2630;
  double t2631;
  double t2644;
  double t2645;
  double t2646;
  double t2651;
  double t2652;
  double t2653;
  double t2655;
  double t2656;
  double t2657;
  double t2625;
  double t2626;
  double t2623;
  double t2632;
  double t2673;
  double t2674;
  double t2675;
  double t2669;
  double t2670;
  double t2671;
  double t2677;
  double t2682;
  double t2683;
  double t2689;
  double t2690;
  double t2691;
  double t2695;
  double t2696;
  double t2697;
  double t2700;
  double t2701;
  double t2702;
  double t1882;
  double t1887;
  double t1888;
  double t2357;
  double t2358;
  double t2359;
  double t2143;
  double t2145;
  double t2146;
  double t2706;
  double t2707;
  double t2181;
  double t2183;
  double t2184;
  double t2680;
  double t2762;
  double t2783;
  double t2785;
  double t2754;
  double t2795;
  double t2797;
  double t2763;
  double t2764;
  double t2765;
  double t2790;
  double t2624;
  double t2628;
  double t2440;
  double t2441;
  double t2442;
  double t2820;
  double t2822;
  double t2788;
  double t2830;
  double t2832;
  double t2791;
  double t2792;
  double t2896;
  double t2904;
  double t2371;
  double t2372;
  double t2373;
  double t2924;
  double t2945;
  double t2451;
  double t2452;
  double t2454;
  double t2825;
  double t2826;
  double t2827;
  double t2835;
  double t2975;
  double t2976;
  double t2985;
  double t2983;
  double t2973;
  double t2978;
  double t3013;
  double t3016;
  double t3018;
  double t2596;
  double t2597;
  double t2598;
  double t2990;
  double t2991;
  double t2999;
  double t3000;
  double t3043;
  double t3044;
  double t3049;
  double t3054;
  double t3050;
  double t3052;
  double t3041;
  double t3045;
  double t3113;
  double t3127;
  double t2638;
  double t2647;
  double t2649;
  double t3190;
  double t3191;
  double t2740;
  double t2741;
  double t2742;
  double t2501;
  double t2502;
  double t2503;
  double t3208;
  double t3209;
  double t3258;
  double t3184;
  double t3377;
  double t3259;
  double t3261;
  double t3264;
  double t3396;
  double t3399;
  double t3301;
  double t3357;
  double t3042;
  double t3358;
  double t3359;
  double t3500;
  double t3515;
  double t2398;
  double t3537;
  double t3547;
  double t3402;
  double t3608;
  double t3616;
  double t3638;
  double t3643;
  double t3486;
  double t3487;
  double t3745;
  double t3803;
  double t3829;
  double t2733;
  double t2734;
  double t2717;
  double t2718;
  double t2719;
  double t3917;
  double t3921;
  double t4024;
  double t4037;
  double t4044;
  double t2497;
  double t2498;
  double t2499;
  double t3560;
  t1205 = Cos(var1[13]);
  t1172 = Cos(var1[14]);
  t1173 = Sin(var1[13]);
  t1286 = Sin(var1[14]);
  t1175 = t1172*t1173;
  t1291 = -1.*t1205*t1286;
  t1292 = t1175 + t1291;
  t920 = Cos(var1[5]);
  t1535 = t1205*t1172;
  t1551 = t1173*t1286;
  t1625 = t1535 + t1551;
  t925 = Sin(var1[12]);
  t1627 = Sin(var1[5]);
  t1641 = Cos(var1[3]);
  t1529 = -1.*t920*t925*t1292;
  t1637 = t1625*t1627;
  t1638 = t1529 + t1637;
  t231 = Sin(var1[3]);
  t1683 = Cos(var1[12]);
  t1729 = Cos(var1[4]);
  t1774 = t1683*t1729*t1292;
  t1784 = Sin(var1[4]);
  t1786 = t920*t1625;
  t1787 = t925*t1292*t1627;
  t1788 = t1786 + t1787;
  t1789 = -1.*t1784*t1788;
  t1793 = t1774 + t1789;
  t1920 = -1.*t1683*t1292*t1784;
  t1937 = -1.*t1729*t1788;
  t1938 = t1920 + t1937;
  t2023 = -0.0641*t1172;
  t2027 = -0.28*t1286;
  t2049 = t2023 + t2027;
  t2054 = -1.*t1172;
  t2055 = 1. + t2054;
  t2059 = 0.075*t2055;
  t2060 = 0.355*t1172;
  t2061 = -0.0641*t1286;
  t2063 = t2059 + t2060 + t2061;
  t2019 = -0.325*t1173;
  t2053 = t1205*t2049;
  t2064 = t1173*t2063;
  t2066 = t2019 + t2053 + t2064;
  t2013 = t1729*t925;
  t2014 = t1683*t1784*t1627;
  t2015 = t2013 + t2014;
  t2018 = -0.068*t925;
  t2067 = t1683*t2066;
  t2068 = t2018 + t2067;
  t2072 = -1.*t1205;
  t2073 = 1. + t2072;
  t2075 = 0.325*t2073;
  t2076 = -1.*t1173*t2049;
  t2078 = t1205*t2063;
  t2080 = t2075 + t2076 + t2078;
  t2081 = t920*t2080;
  t2082 = -1.*t1683;
  t2083 = 1. + t2082;
  t2084 = -0.1575*t2083;
  t2087 = -0.2255*t1683;
  t2088 = -1.*t925*t2066;
  t2095 = t2084 + t2087 + t2088;
  t2100 = -1.*t2095*t1627;
  t2104 = t2081 + t2100;
  t2118 = t1729*t2068;
  t2119 = -1.*t1784*t2104;
  t2130 = t2118 + t2119;
  t1977 = -1.*t1172*t1173;
  t1978 = t1205*t1286;
  t1979 = t1977 + t1978;
  t1980 = t920*t1979;
  t1998 = t925*t1625*t1627;
  t2005 = t1980 + t1998;
  t2112 = t925*t1784;
  t2116 = -1.*t1683*t1729*t1627;
  t2117 = t2112 + t2116;
  t2108 = t2068*t1784;
  t2109 = t1729*t2104;
  t2110 = t2108 + t2109;
  t1975 = t1683*t1625*t1784;
  t2006 = t1729*t2005;
  t2008 = t1975 + t2006;
  t2069 = -1.*t2068*t1784;
  t2105 = -1.*t1729*t2104;
  t2106 = t2069 + t2105;
  t2153 = t1683*t1729*t1625;
  t2154 = -1.*t1784*t2005;
  t2155 = t2153 + t2154;
  t2162 = t920*t2095;
  t2163 = t2080*t1627;
  t2164 = t2162 + t2163;
  t2229 = t920*t925*t1292;
  t2230 = -1.*t1625*t1627;
  t2231 = t2229 + t2230;
  t2172 = -1.*t1683*t920*t2164;
  t2208 = -1.*t920*t925*t1625;
  t2212 = t1979*t1627;
  t2213 = t2208 + t2212;
  t2214 = t2164*t2213;
  t2250 = -1.*t920*t2095;
  t2251 = -1.*t2080*t1627;
  t2252 = t2250 + t2251;
  t2254 = t1683*t1627*t2164;
  t2265 = t920*t925*t1625;
  t2266 = -1.*t1979*t1627;
  t2267 = t2265 + t2266;
  t2173 = -1.*t2117*t2110;
  t2174 = -1.*t2015*t2130;
  t2175 = t2172 + t2173 + t2174;
  t2269 = t2104*t2213;
  t2271 = t2164*t2005;
  t2216 = t2110*t2008;
  t2219 = t2130*t2155;
  t2220 = t2214 + t2216 + t2219;
  t2244 = -1.*t925*t2068;
  t2257 = t1683*t2068*t1625;
  t2344 = 0.068*t925;
  t2345 = -1.*t1683*t2066;
  t2347 = t2344 + t2345;
  t2352 = -0.068*t1683;
  t2353 = t2352 + t2088;
  t2376 = -1.*t1729*t925*t1292;
  t2380 = -1.*t1683*t1292*t1784*t1627;
  t2381 = t2376 + t2380;
  t2245 = t1683*t1627*t2104;
  t2248 = t2244 + t2245 + t2172;
  t2349 = -1.*t1683*t2068;
  t2354 = -1.*t925*t2353;
  t2362 = -1.*t925*t2068*t1625;
  t2364 = t1683*t2353*t1625;
  t2258 = t2104*t2005;
  t2263 = t2257 + t2214 + t2258;
  t2393 = Power(t920,2);
  t2394 = -1.*t1683*t2393*t2347;
  t2401 = t920*t925*t2164;
  t2405 = -1.*t1683*t920*t1625*t2164;
  t2406 = t920*t2347*t2213;
  t2419 = -1.*t925*t1625*t1784;
  t2420 = t1683*t1729*t1625*t1627;
  t2421 = t2419 + t2420;
  t2425 = t2353*t1784;
  t2428 = -1.*t1729*t2347*t1627;
  t2429 = t2425 + t2428;
  t2431 = t1729*t2353;
  t2432 = t2347*t1784*t1627;
  t2433 = t2431 + t2432;
  t2435 = t1683*t1784;
  t2436 = t1729*t925*t1627;
  t2437 = t2435 + t2436;
  t2341 = -1.*t1683*t2095;
  t2342 = t2244 + t2341;
  t2466 = -1.*t1205*t1172;
  t2468 = -1.*t1173*t1286;
  t2469 = t2466 + t2468;
  t2486 = -0.325*t1205;
  t2488 = t2486 + t2076 + t2078;
  t2477 = 0.325*t1173;
  t2478 = -1.*t1205*t2049;
  t2479 = -1.*t1173*t2063;
  t2481 = t2477 + t2478 + t2479;
  t2475 = t1683*t2068*t1979;
  t2485 = Power(t1683,2);
  t2489 = t2485*t2488*t1625;
  t2541 = -1.*t920*t925*t2488;
  t2565 = t2481*t1627;
  t2566 = t2541 + t2565;
  t2512 = -1.*t920*t925*t1979;
  t2515 = t2469*t1627;
  t2520 = t2512 + t2515;
  t2534 = t920*t2481;
  t2535 = t925*t2488*t1627;
  t2536 = t2534 + t2535;
  t2571 = t920*t2469;
  t2572 = t925*t1979*t1627;
  t2573 = t2571 + t2572;
  t2567 = -1.*t1683*t920*t2566;
  t2570 = t2566*t2213;
  t2575 = t2164*t2520;
  t2581 = t1683*t1979*t1784;
  t2582 = t1729*t2573;
  t2583 = t2581 + t2582;
  t2585 = t1683*t2488*t1784;
  t2586 = t1729*t2536;
  t2587 = t2585 + t2586;
  t2589 = t1683*t1729*t2488;
  t2590 = -1.*t1784*t2536;
  t2591 = t2589 + t2590;
  t2612 = -0.28*t1172;
  t2613 = 0.0641*t1286;
  t2614 = t2612 + t2613;
  t2490 = Power(t925,2);
  t2629 = t1173*t2049;
  t2630 = t1205*t2614;
  t2631 = t2629 + t2630;
  t2644 = t920*t1292;
  t2645 = t925*t2469*t1627;
  t2646 = t2644 + t2645;
  t2651 = -1.*t920*t925*t2469;
  t2652 = t1292*t1627;
  t2653 = t2651 + t2652;
  t2655 = t1683*t1729*t2469;
  t2656 = -1.*t1784*t2646;
  t2657 = t2655 + t2656;
  t2625 = -1.*t1173*t2614;
  t2626 = t2053 + t2625;
  t2623 = t1683*t2068*t1292;
  t2632 = t2485*t2631*t1625;
  t2673 = -1.*t920*t925*t2631;
  t2674 = t2626*t1627;
  t2675 = t2673 + t2674;
  t2669 = t920*t2626;
  t2670 = t925*t2631*t1627;
  t2671 = t2669 + t2670;
  t2677 = -1.*t1683*t920*t2675;
  t2682 = t2675*t2213;
  t2683 = t2164*t1638;
  t2689 = t1683*t1292*t1784;
  t2690 = t1729*t1788;
  t2691 = t2689 + t2690;
  t2695 = t1683*t2631*t1784;
  t2696 = t1729*t2671;
  t2697 = t2695 + t2696;
  t2700 = t1683*t1729*t2631;
  t2701 = -1.*t1784*t2671;
  t2702 = t2700 + t2701;
  t1882 = t1641*t1638;
  t1887 = -1.*t231*t1793;
  t1888 = t1882 + t1887;
  t2357 = t2080*t1979;
  t2358 = -1.*t925*t2095*t1625;
  t2359 = t2357 + t2257 + t2358;
  t2143 = -1.*t925*t1784;
  t2145 = t1683*t1729*t1627;
  t2146 = t2143 + t2145;
  t2706 = t2110*t2691;
  t2707 = t2130*t1793;
  t2181 = -1.*t1683*t1625*t1784;
  t2183 = -1.*t1729*t2005;
  t2184 = t2181 + t2183;
  t2680 = t2104*t1788;
  t2762 = -1.*t2164*t2213;
  t2783 = t2164*t1788;
  t2785 = t2104*t1638;
  t2754 = t2683 + t2706 + t2707;
  t2795 = -1.*t2104*t2213;
  t2797 = -1.*t2164*t2005;
  t2763 = -1.*t2110*t2008;
  t2764 = -1.*t2130*t2155;
  t2765 = t2762 + t2763 + t2764;
  t2790 = -1.*t1683*t2068*t1625;
  t2624 = -1.*t925*t2095*t1292;
  t2628 = t2080*t1625;
  t2440 = t1683*t1729;
  t2441 = -1.*t925*t1784*t1627;
  t2442 = t2440 + t2441;
  t2820 = -1.*t925*t2068*t1292;
  t2822 = t1683*t2353*t1292;
  t2788 = t2623 + t2680 + t2683;
  t2830 = t925*t2068*t1625;
  t2832 = -1.*t1683*t2353*t1625;
  t2791 = -1.*t2104*t2005;
  t2792 = t2790 + t2762 + t2791;
  t2896 = -1.*t1683*t920*t1292*t2164;
  t2904 = t920*t2347*t1638;
  t2371 = -1.*t925*t1292*t1784;
  t2372 = t1683*t1729*t1292*t1627;
  t2373 = t2371 + t2372;
  t2924 = t1683*t920*t1625*t2164;
  t2945 = -1.*t920*t2347*t2213;
  t2451 = -1.*t1729*t925*t1625;
  t2452 = -1.*t1683*t1625*t1784*t1627;
  t2454 = t2451 + t2452;
  t2825 = -1.*t2080*t1979;
  t2826 = t925*t2095*t1625;
  t2827 = t2825 + t2790 + t2826;
  t2835 = t2623 + t2624 + t2628;
  t2975 = -1.*t2481*t1979;
  t2976 = -1.*t2080*t2469;
  t2985 = t2481*t1625;
  t2983 = t2485*t2488*t1292;
  t2973 = -1.*t1683*t2068*t1979;
  t2978 = -1.*t2485*t2488*t1625;
  t3013 = t2566*t1638;
  t3016 = -1.*t2566*t2213;
  t3018 = -1.*t2164*t2520;
  t2596 = t1683*t1729*t1979;
  t2597 = -1.*t1784*t2573;
  t2598 = t2596 + t2597;
  t2990 = t2066*t1292;
  t2991 = t2990 + t2628;
  t2999 = -1.*t2066*t1625;
  t3000 = t2825 + t2999;
  t3043 = -1.*t2626*t1979;
  t3044 = -1.*t2080*t1625;
  t3049 = t2080*t1292;
  t3054 = t2626*t1625;
  t3050 = t2485*t2631*t1292;
  t3052 = t1683*t2068*t2469;
  t3041 = -1.*t1683*t2068*t1292;
  t3045 = -1.*t2485*t2631*t1625;
  t3113 = t2164*t2653;
  t3127 = t2675*t1638;
  t2638 = t1683*t2469*t1784;
  t2647 = t1729*t2646;
  t2649 = t2638 + t2647;
  t3190 = -1.*t2675*t2213;
  t3191 = -1.*t2164*t1638;
  t2740 = t1683*t1641*t920;
  t2741 = -1.*t231*t2015;
  t2742 = t2740 + t2741;
  t2501 = t1641*t2213;
  t2502 = -1.*t231*t2155;
  t2503 = t2501 + t2502;
  t3208 = -1.*t2110*t2691;
  t3209 = -1.*t2130*t1793;
  t3258 = t1683*t920*t2164;
  t3184 = -1.*t2104*t1788;
  t3377 = -1.*t1683*t1627*t2164;
  t3259 = t2117*t2110;
  t3261 = t2015*t2130;
  t3264 = t3258 + t3259 + t3261;
  t3396 = -1.*t2164*t1788;
  t3399 = -1.*t2104*t1638;
  t3301 = t3191 + t3208 + t3209;
  t3357 = t925*t2068;
  t3042 = t925*t2095*t1292;
  t3358 = -1.*t1683*t1627*t2104;
  t3359 = t3357 + t3358 + t3258;
  t3500 = t1683*t2068;
  t3515 = t925*t2353;
  t2398 = Power(t1627,2);
  t3537 = t925*t2068*t1292;
  t3547 = -1.*t1683*t2353*t1292;
  t3402 = t3041 + t3184 + t3191;
  t3608 = t1683*t2393*t2347;
  t3616 = -1.*t920*t925*t2164;
  t3638 = t1683*t920*t1292*t2164;
  t3643 = -1.*t920*t2347*t1638;
  t3486 = t1683*t2095;
  t3487 = t3357 + t3486;
  t3745 = -1.*t2485*t2488*t1292;
  t3803 = t1683*t920*t2566;
  t3829 = -1.*t2566*t1638;
  t2733 = 0.325*t1286;
  t2734 = -1.*t2063*t1286;
  t2717 = t231*t1638;
  t2718 = t1641*t1793;
  t2719 = t2717 + t2718;
  t3917 = -1.*t2485*t2631*t1292;
  t3921 = -1.*t1683*t2068*t2469;
  t4024 = t1683*t920*t2675;
  t4037 = -1.*t2164*t2653;
  t4044 = -1.*t2675*t1638;
  t2497 = t231*t2213;
  t2498 = t1641*t2155;
  t2499 = t2497 + t2498;
  t3560 = t3041 + t3042 + t3044;
  p_output1[0]=(-1.*t1641*t1793 - 1.*t1638*t231)*var2[1] + t1888*var2[2];
  p_output1[1]=t1793*var2[0] - 1.*t1938*t231*var2[1] + t1641*t1938*var2[2] + (t2008*(-1.*t2015*t2106 - 1.*t2015*t2110 - 1.*t2117*t2130 - 1.*t2130*t2146) + t2155*t2175 + t2117*(t2008*t2130 + t2106*t2155 + t2110*t2155 + t2130*t2184) + t2015*t2220)*var2[3];
  p_output1[2]=t1729*t2231*var2[0] + (t1641*t1788 + t1784*t2231*t231)*var2[1] + (-1.*t1641*t1784*t2231 + t1788*t231)*var2[2] + (t1729*t2175*t2267 + t2117*(t1729*t2008*t2252 - 1.*t1784*t2155*t2252 + t1729*t2110*t2267 - 1.*t1784*t2130*t2267 + t2269 + t2271) - 1.*t1683*t1729*t2220*t920 + t2008*(t1784*t2015*t2252 - 1.*t1729*t2117*t2252 + t2254 - 1.*t1683*t2104*t920 + t1683*t1729*t2110*t920 - 1.*t1683*t1784*t2130*t920))*var2[3] + (t2005*t2248 + t2213*(t1627*t1683*t2252 + t2254) - 1.*t1627*t1683*t2263 + t1683*(t2005*t2252 + t2104*t2267 + t2269 + t2271)*t920)*var2[4];
  p_output1[3]=t2373*var2[0] + (-1.*t231*t2381 - 1.*t1292*t1641*t1683*t920)*var2[1] + (t1641*t2381 - 1.*t1292*t1683*t231*t920)*var2[2] + (t2175*t2421 + t2220*t2437 + t2008*(t2394 + t2401 - 1.*t2117*t2429 - 1.*t2015*t2433 - 1.*t2110*t2437 - 1.*t2130*t2442) + t2117*(t2405 + t2406 + t2110*t2421 + t2008*t2429 + t2155*t2433 + t2130*t2454))*var2[3] + (-1.*t1625*t1683*t2248*t920 + t1683*(t1625*t1627*t1683*t2104 - 1.*t1627*t2005*t2347 + t2362 + t2364 + t2405 + t2406)*t920 - 1.*t2263*t920*t925 + t2213*(t2349 + t2354 + t2394 - 1.*t1683*t2347*t2398 + t2401 - 1.*t1627*t2104*t925))*var2[4] + (t1683*t2359 - 1.*t1625*t2342*t925 + t1625*t1683*(-1.*t1683*t2347 + t2349 + t2354 + t2095*t925) + t925*(-1.*t1625*t1683*t2095 + t2362 + t2364 - 1.*t1625*t2347*t925))*var2[5];
  p_output1[4]=t2008*var2[0] + t2503*var2[1] + t2499*var2[2] + (t2175*t2583 + t2008*(t2567 - 1.*t2117*t2587 - 1.*t2015*t2591) + t2117*(t2570 + t2575 + t2110*t2583 + t2008*t2587 + t2155*t2591 + t2130*t2598))*var2[3] + (t2248*t2520 + t1683*(t2475 + t2489 + t2005*t2536 + t2570 + t2104*t2573 + t2575)*t920 + t2213*(t1627*t1683*t2536 + t2567 - 1.*t1683*t2488*t925))*var2[4] + (t1683*t1979*t2342 + t925*(t2080*t2469 + t2475 + t1979*t2481 + t2489 + t1625*t2488*t2490 - 1.*t1979*t2095*t925))*var2[5] + (0.1575*t1625 + 0.2255*t2469)*var2[12];
  p_output1[5]=t2649*var2[0] + (t1641*t2653 - 1.*t231*t2657)*var2[1] + (t231*t2653 + t1641*t2657)*var2[2] + (t2175*t2691 + t2008*(t2677 - 1.*t2117*t2697 - 1.*t2015*t2702) + t2117*(t2682 + t2683 + t2008*t2697 + t2155*t2702 + t2706 + t2707))*var2[3] + (t1638*t2248 + t1683*(t2623 + t2632 + t2005*t2671 + t2680 + t2682 + t2683)*t920 + t2213*(t1627*t1683*t2671 + t2677 - 1.*t1683*t2631*t925))*var2[4] + (t1292*t1683*t2342 + (t2623 + t2624 + t1979*t2626 + t2628 + t1625*t2490*t2631 + t2632)*t925)*var2[5] + (0.2255*t1625 + 0.1575*t2469)*var2[12] + (0.325*t1172 - 1.*t1172*t2063 - 1.*t1172*t2614)*var2[13];
  p_output1[6]=t2691;
  p_output1[7]=t1888;
  p_output1[8]=t2719;
  p_output1[9]=t2008*t2175 + t2117*t2220;
  p_output1[10]=t2213*t2248 + t1683*t2263*t920;
  p_output1[11]=t1625*t1683*t2342 + t2359*t925;
  p_output1[12]=0.1575*t1292 + 0.2255*t1979;
  p_output1[13]=-1.*t1172*t2049 + t2733 + t2734;
  p_output1[14]=-0.0641;
  p_output1[15]=(-1.*t1641*t2015 - 1.*t1683*t231*t920)*var2[1] + t2742*var2[2];
  p_output1[16]=t2015*var2[0] - 1.*t2146*t231*var2[1] + t1641*t2146*var2[2] + ((-1.*t2008*t2130 - 1.*t2106*t2155 - 1.*t2110*t2155 - 1.*t2130*t2184)*t2691 + t2008*(t1793*t2106 + t1793*t2110 + t1938*t2130 + t2130*t2691) + t2155*t2754 + t1793*t2765)*var2[3];
  p_output1[17]=-1.*t1683*t1729*t920*var2[0] + (-1.*t1627*t1641*t1683 - 1.*t1683*t1784*t231*t920)*var2[1] + (-1.*t1627*t1683*t231 + t1641*t1683*t1784*t920)*var2[2] + (t1729*t2267*t2754 + t1729*t2231*t2765 + t2008*(t1729*t2110*t2231 - 1.*t1784*t2130*t2231 - 1.*t1784*t1793*t2252 + t1729*t2252*t2691 + t2783 + t2785) + t2691*(-1.*t1729*t2008*t2252 + t1784*t2155*t2252 - 1.*t1729*t2110*t2267 + t1784*t2130*t2267 + t2795 + t2797))*var2[3] + (t2213*(t2104*t2231 + t1788*t2252 + t2783 + t2785) + t2005*t2788 + t1788*t2792 + t1638*(-1.*t2005*t2252 - 1.*t2104*t2267 + t2795 + t2797))*var2[4];
  p_output1[18]=t2437*var2[0] + (-1.*t231*t2442 - 1.*t1641*t920*t925)*var2[1] + (t1641*t2442 - 1.*t231*t920*t925)*var2[2] + (t2421*t2754 + t2373*t2765 + t2008*(t2110*t2373 + t2130*t2381 + t1793*t2433 + t2429*t2691 + t2896 + t2904) + t2691*(-1.*t2110*t2421 - 1.*t2008*t2429 - 1.*t2155*t2433 - 1.*t2130*t2454 + t2924 + t2945))*var2[3] + (t2213*(t1292*t1627*t1683*t2104 - 1.*t1627*t1788*t2347 + t2820 + t2822 + t2896 + t2904) + t1638*(-1.*t1625*t1627*t1683*t2104 + t1627*t2005*t2347 + t2830 + t2832 + t2924 + t2945) - 1.*t1625*t1683*t2788*t920 - 1.*t1292*t1683*t2792*t920)*var2[4] + (-1.*t1292*t2827*t925 - 1.*t1625*t2835*t925 + t1625*t1683*(-1.*t1292*t1683*t2095 + t2820 + t2822 - 1.*t1292*t2347*t925) + t1292*t1683*(t1625*t1683*t2095 + t2830 + t2832 + t1625*t2347*t925))*var2[5];
  p_output1[19]=(t2583*t2754 + t2008*t2765 + t2008*(t2214 + t2216 + t2219 + t1793*t2591 + t2587*t2691 + t3013) + t2691*(-1.*t2110*t2583 - 1.*t2008*t2587 - 1.*t2155*t2591 - 1.*t2130*t2598 + t3016 + t3018))*var2[3] + (t2520*t2788 + t2213*t2792 + t2213*(t2214 + t2257 + t2258 + t1788*t2536 + t2983 + t3013) + t1638*(-1.*t2005*t2536 - 1.*t2104*t2573 + t2973 + t2978 + t3016 + t3018))*var2[4] + (t1625*t1683*t2827 + t1683*t1979*t2835 + t1625*t1683*(t2257 + t2357 + t2358 + t1292*t2488*t2490 + t2983 + t2985) + t1292*t1683*(-1.*t1625*t2488*t2490 + t2973 + t2975 + t2976 + t2978 + t1979*t2095*t925))*var2[5] + (t1625*(-1.*t1979*t2066 - 1.*t1625*t2488 + t2975 + t2976) + t1979*(t1625*t2066 + t2357 + t1292*t2488 + t2985) + t2469*t2991 + t1979*t3000)*var2[12];
  p_output1[20]=(t2691*t2754 + t2649*t2765 + t2008*(t2110*t2649 + t2130*t2657 + t2691*t2697 + t1793*t2702 + t3113 + t3127) + t2691*(-1.*t2008*t2697 - 1.*t2155*t2702 + t3190 + t3191 + t3208 + t3209))*var2[3] + (t1638*t2788 + t2653*t2792 + t2213*(t2104*t2646 + t1788*t2671 + t3050 + t3052 + t3113 + t3127) + t1638*(-1.*t2005*t2671 + t3041 + t3045 + t3184 + t3190 + t3191))*var2[4] + (t1683*t2469*t2827 + t1292*t1683*t2835 + t1292*t1683*(-1.*t1625*t2490*t2631 + t3041 + t3042 + t3043 + t3044 + t3045) + t1625*t1683*(t1292*t2490*t2631 + t3049 + t3050 + t3052 + t3054 - 1.*t2095*t2469*t925))*var2[5] + (t1625*t2991 + t1292*t3000 + t1625*(-1.*t1292*t2066 - 1.*t1625*t2631 + t3043 + t3044) + t1979*(t2066*t2469 + t1292*t2631 + t3049 + t3054))*var2[12];
  p_output1[21]=t2117;
  p_output1[22]=t2742;
  p_output1[23]=t1641*t2015 + t1683*t231*t920;
  p_output1[24]=t2008*t2754 + t2691*t2765;
  p_output1[25]=t2213*t2788 + t1638*t2792;
  p_output1[26]=t1292*t1683*t2827 + t1625*t1683*t2835;
  p_output1[27]=t1979*t2991 + t1625*t3000;
  p_output1[28]=(-1.*t1641*t2155 - 1.*t2213*t231)*var2[1] + t2503*var2[2];
  p_output1[29]=t2155*var2[0] - 1.*t2184*t231*var2[1] + t1641*t2184*var2[2] + ((t2015*t2106 + t2015*t2110 + t2117*t2130 + t2130*t2146)*t2691 + t2117*(-1.*t1793*t2106 - 1.*t1793*t2110 - 1.*t1938*t2130 - 1.*t2130*t2691) + t1793*t3264 + t2015*t3301)*var2[3];
  p_output1[30]=t1729*t2267*var2[0] + (t1641*t2005 + t1784*t2267*t231)*var2[1] + (-1.*t1641*t1784*t2267 + t2005*t231)*var2[2] + (t1729*t2231*t3264 + t2117*(-1.*t1729*t2110*t2231 + t1784*t2130*t2231 + t1784*t1793*t2252 - 1.*t1729*t2252*t2691 + t3396 + t3399) - 1.*t1683*t1729*t3301*t920 + t2691*(-1.*t1784*t2015*t2252 + t1729*t2117*t2252 + t3377 + t1683*t2104*t920 - 1.*t1683*t1729*t2110*t920 + t1683*t1784*t2130*t920))*var2[3] + (t1788*t3359 + t1638*(-1.*t1627*t1683*t2252 + t3377) - 1.*t1627*t1683*t3402 + t1683*(-1.*t2104*t2231 - 1.*t1788*t2252 + t3396 + t3399)*t920)*var2[4];
  p_output1[31]=t2421*var2[0] + (-1.*t231*t2454 - 1.*t1625*t1641*t1683*t920)*var2[1] + (t1641*t2454 - 1.*t1625*t1683*t231*t920)*var2[2] + (t2373*t3264 + t2437*t3301 + t2691*(t2117*t2429 + t2015*t2433 + t2110*t2437 + t2130*t2442 + t3608 + t3616) + t2117*(-1.*t2110*t2373 - 1.*t2130*t2381 - 1.*t1793*t2433 - 1.*t2429*t2691 + t3638 + t3643))*var2[3] + (-1.*t1292*t1683*t3359*t920 + t1683*(-1.*t1292*t1627*t1683*t2104 + t1627*t1788*t2347 + t3537 + t3547 + t3638 + t3643)*t920 - 1.*t3402*t920*t925 + t1638*(t1683*t2347*t2398 + t3500 + t3515 + t3608 + t3616 + t1627*t2104*t925))*var2[4] + (t1683*t3560 - 1.*t1292*t3487*t925 + t1292*t1683*(t1683*t2347 + t3500 + t3515 - 1.*t2095*t925) + t925*(t1292*t1683*t2095 + t3537 + t3547 + t1292*t2347*t925))*var2[5];
  p_output1[32]=t2583*var2[0] + (t1641*t2520 - 1.*t231*t2598)*var2[1] + (t231*t2520 + t1641*t2598)*var2[2] + (t2008*t3264 + t2691*(t2117*t2587 + t2015*t2591 + t3803) + t2117*(-1.*t1793*t2591 - 1.*t2587*t2691 + t2762 + t2763 + t2764 + t3829))*var2[3] + (t2213*t3359 + t1683*(-1.*t1788*t2536 + t2762 + t2790 + t2791 + t3745 + t3829)*t920 + t1638*(-1.*t1627*t1683*t2536 + t3803 + t1683*t2488*t925))*var2[4] + (t1625*t1683*t3487 + (-1.*t1625*t2481 - 1.*t1292*t2488*t2490 + t2790 + t2825 + t2826 + t3745)*t925)*var2[5] - 0.068*t1979*var2[12];
  p_output1[33]=t2691*var2[0] + t1888*var2[1] + t2719*var2[2] + (t2649*t3264 + t2691*(t2117*t2697 + t2015*t2702 + t4024) + t2117*(-1.*t2110*t2649 - 1.*t2130*t2657 - 1.*t2691*t2697 - 1.*t1793*t2702 + t4037 + t4044))*var2[3] + (t2653*t3359 + t1683*(-1.*t2104*t2646 - 1.*t1788*t2671 + t3917 + t3921 + t4037 + t4044)*t920 + t1638*(-1.*t1627*t1683*t2671 + t4024 + t1683*t2631*t925))*var2[4] + (t1683*t2469*t3487 + t925*(-1.*t1292*t2080 - 1.*t1625*t2626 - 1.*t1292*t2490*t2631 + t3917 + t3921 + t2095*t2469*t925))*var2[5] - 0.068*t1292*var2[12] + (-1.*t1286*t2614 + t2733 + t2734)*var2[13];
  p_output1[34]=t2008;
  p_output1[35]=t2503;
  p_output1[36]=t2499;
  p_output1[37]=t2691*t3264 + t2117*t3301;
  p_output1[38]=t1638*t3359 + t1683*t3402*t920;
  p_output1[39]=t1292*t1683*t3487 + t3560*t925;
  p_output1[40]=-0.068*t1625;
  p_output1[41]=-0.325*t1172 - 1.*t1286*t2049 + t1172*t2063;
  p_output1[42]=-0.28;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 43, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
