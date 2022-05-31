/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:57 GMT+02:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t26022;
  double t25995;
  double t25998;
  double t26058;
  double t26108;
  double t26276;
  double t26301;
  double t26474;
  double t26481;
  double t26486;
  double t26521;
  double t26589;
  double t26597;
  double t26590;
  double t26683;
  double t26694;
  double t26721;
  double t26722;
  double t26723;
  double t26738;
  double t26759;
  double t26796;
  double t23175;
  double t7147;
  double t11278;
  double t13058;
  double t15154;
  double t26909;
  double t26922;
  double t26942;
  double t26976;
  double t26977;
  double t26978;
  double t26979;
  double t26998;
  double t27060;
  double t27064;
  double t27065;
  double t27114;
  double t27116;
  double t27228;
  double t27229;
  double t438;
  double t4376;
  double t27251;
  double t27246;
  double t27264;
  double t27269;
  double t27291;
  double t27620;
  double t27627;
  double t27628;
  double t27629;
  double t27630;
  double t27638;
  double t27644;
  double t27646;
  double t27649;
  double t27390;
  double t27454;
  double t27500;
  double t27605;
  double t27608;
  double t27610;
  double t27679;
  double t27699;
  double t27705;
  double t27712;
  double t27714;
  double t27715;
  double t27716;
  double t27718;
  double t27720;
  double t27721;
  double t27929;
  double t27952;
  double t27970;
  double t27972;
  double t28028;
  double t28034;
  double t28038;
  double t27988;
  double t27990;
  double t28004;
  double t28057;
  double t28058;
  double t28061;
  double t28087;
  double t28095;
  double t28098;
  double t28076;
  double t28077;
  double t28079;
  double t28080;
  double t28099;
  double t28100;
  double t28103;
  double t28104;
  double t28110;
  double t28122;
  double t28138;
  double t28142;
  double t28145;
  double t28153;
  double t28176;
  double t28307;
  double t28322;
  double t28394;
  double t28408;
  double t28427;
  double t28480;
  double t28485;
  double t28486;
  double t28487;
  double t28488;
  double t28489;
  double t28503;
  double t28504;
  double t28505;
  double t28490;
  double t28508;
  double t28509;
  double t28510;
  double t28511;
  double t28513;
  double t28518;
  double t28519;
  double t28520;
  double t28521;
  double t28526;
  double t28528;
  double t28538;
  double t28539;
  double t28540;
  double t28549;
  double t28556;
  double t28562;
  double t28682;
  double t28683;
  double t28689;
  double t28736;
  double t28741;
  double t28743;
  double t28779;
  double t28781;
  double t28783;
  double t28745;
  double t28756;
  double t28750;
  double t28752;
  double t28753;
  double t28777;
  double t28788;
  double t23270;
  double t28692;
  double t28693;
  double t28694;
  double t28703;
  double t28704;
  double t28706;
  double t28707;
  double t28717;
  double t28721;
  double t28734;
  double t29151;
  double t29153;
  double t29145;
  double t29148;
  double t28754;
  double t29174;
  double t29175;
  double t29193;
  double t29207;
  double t29208;
  double t29216;
  double t28784;
  double t28793;
  double t28798;
  double t28803;
  double t28812;
  double t29217;
  double t28815;
  double t28816;
  double t29298;
  double t28823;
  double t28944;
  double t29036;
  double t30181;
  double t30182;
  double t30183;
  double t30215;
  double t30228;
  double t30229;
  double t30245;
  double t30248;
  double t30252;
  double t30257;
  double t30266;
  double t30304;
  double t30341;
  double t30344;
  double t30347;
  double t30348;
  double t30350;
  double t30364;
  double t30390;
  double t30423;
  double t30424;
  double t30430;
  double t30422;
  double t30452;
  double t30456;
  double t30460;
  double t30463;
  double t30478;
  double t30479;
  double t30481;
  double t30483;
  double t30487;
  double t30488;
  double t30185;
  double t30192;
  double t30198;
  double t30201;
  double t30668;
  double t30669;
  double t30670;
  double t30685;
  double t30686;
  double t30690;
  double t30693;
  double t30694;
  double t30785;
  double t30789;
  double t30796;
  double t30687;
  double t30811;
  double t30814;
  double t30815;
  double t30823;
  double t30826;
  double t30827;
  double t30818;
  double t30822;
  double t30845;
  double t30847;
  double t30848;
  double t30851;
  double t30852;
  double t30857;
  double t30882;
  double t30897;
  double t30899;
  double t30449;
  double t30946;
  double t30959;
  double t30960;
  double t30962;
  double t30964;
  double t30966;
  double t30968;
  double t30972;
  double t30979;
  double t30980;
  double t30981;
  double t30982;
  double t30984;
  double t30985;
  double t30986;
  double t30987;
  double t30988;
  double t24956;
  double t27250;
  double t31008;
  double t31011;
  double t31014;
  double t31017;
  double t31018;
  double t31019;
  double t31000;
  double t31001;
  double t31002;
  double t31004;
  double t31005;
  double t31006;
  double t30464;
  double t31050;
  double t31051;
  double t31052;
  double t31053;
  double t31054;
  double t31055;
  double t31057;
  double t31029;
  double t31031;
  double t31032;
  double t30504;
  double t30506;
  double t31078;
  double t31082;
  double t31083;
  double t31084;
  double t31088;
  double t31089;
  double t31090;
  double t31063;
  double t31066;
  double t31067;
  double t31071;
  double t31072;
  double t31073;
  double t31140;
  double t31143;
  double t31150;
  double t31152;
  double t31128;
  double t31130;
  double t31131;
  double t31132;
  double t31133;
  double t31134;
  double t31135;
  double t31136;
  double t31137;
  double t31142;
  double t31148;
  double t31151;
  double t31156;
  double t31220;
  double t31162;
  double t31165;
  double t31231;
  double t31171;
  double t31172;
  double t31180;
  double t31181;
  double t28623;
  double t28624;
  double t28627;
  double t31340;
  double t31343;
  double t31353;
  double t31373;
  double t31375;
  double t31365;
  double t31417;
  double t31420;
  double t30211;
  double t30234;
  double t30237;
  double t31435;
  double t31439;
  double t31491;
  double t31500;
  double t31507;
  double t31551;
  double t31556;
  double t31559;
  double t30905;
  double t30907;
  double t30909;
  double t30558;
  double t30569;
  double t31624;
  double t31625;
  double t31627;
  double t31631;
  double t31632;
  double t31633;
  double t30607;
  double t31636;
  double t31637;
  double t31638;
  double t31641;
  double t31644;
  double t31647;
  double t30610;
  double t30611;
  double t30613;
  double t30614;
  double t30618;
  double t30634;
  double t30636;
  double t30637;
  double t31440;
  double t31669;
  double t31671;
  double t31672;
  double t31674;
  double t31681;
  double t31683;
  double t31684;
  double t31660;
  double t31661;
  double t31662;
  double t31462;
  double t31463;
  double t31716;
  double t31717;
  double t31718;
  double t31720;
  double t31721;
  double t31724;
  double t31725;
  double t31687;
  double t31688;
  double t31689;
  double t31691;
  double t31692;
  double t31696;
  double t27652;
  double t27945;
  double t27986;
  double t31742;
  double t31755;
  double t31758;
  double t31822;
  double t31833;
  double t31975;
  double t31978;
  double t31984;
  double t31989;
  double t31948;
  double t31949;
  double t31951;
  double t31952;
  double t31955;
  double t31956;
  double t31957;
  double t31958;
  double t31960;
  double t31971;
  double t31977;
  double t31987;
  double t31995;
  double t32001;
  double t32059;
  double t32008;
  double t32009;
  double t32073;
  double t32022;
  double t32024;
  double t32028;
  t26022 = Cos(var1[17]);
  t25995 = Sin(var1[17]);
  t25998 = 0.28121*t25995;
  t26058 = -1.*t26022;
  t26108 = 1. + t26058;
  t26276 = -0.50321*t26108;
  t26301 = -0.19821*t26022;
  t26474 = t26276 + t26301;
  t26481 = t26474*t25995;
  t26486 = -0.305*t26022*t25995;
  t26521 = t25998 + t26481 + t26486;
  t26589 = Cos(var1[16]);
  t26597 = Sin(var1[16]);
  t26590 = -1.*t26589*t26022;
  t26683 = -1.*t26597*t25995;
  t26694 = t26590 + t26683;
  t26721 = -0.15121*t26694;
  t26722 = t26589*t26022;
  t26723 = t26597*t25995;
  t26738 = t26722 + t26723;
  t26759 = -0.15121*t26738;
  t26796 = t26721 + t26759;
  t23175 = Sin(var1[15]);
  t7147 = Cos(var1[15]);
  t11278 = -1.*t7147;
  t13058 = 1. + t11278;
  t15154 = -0.15121*t13058;
  t26909 = -1.*t26589;
  t26922 = 1. + t26909;
  t26942 = -0.28121*t26922;
  t26976 = t26589*t26474;
  t26977 = 0.305*t26597*t25995;
  t26978 = t26942 + t26976 + t26977;
  t26979 = t7147*t26978;
  t26998 = t15154 + t26979;
  t27060 = -1.*t23175*t26998;
  t27064 = -0.15121*t7147;
  t27065 = 0.15121*t23175;
  t27114 = t23175*t26978;
  t27116 = t15154 + t27064 + t27065 + t27114;
  t27228 = t7147*t27116;
  t27229 = t27060 + t27228;
  t438 = Cos(var1[4]);
  t4376 = Cos(var1[5]);
  t27251 = Sin(var1[5]);
  t27246 = Sin(var1[4]);
  t27264 = t7147*t438*t4376;
  t27269 = -1.*t438*t23175*t27251;
  t27291 = t27264 + t27269;
  t27620 = -1.*t26022*t26597;
  t27627 = t26589*t25995;
  t27628 = t27620 + t27627;
  t27629 = t27628*t27246;
  t27630 = t7147*t4376*t26694;
  t27638 = -1.*t23175*t26694*t27251;
  t27644 = t27630 + t27638;
  t27646 = t438*t27644;
  t27649 = t27629 + t27646;
  t27390 = t26597*t27246;
  t27454 = t26589*t27291;
  t27500 = t27390 + t27454;
  t27605 = t26589*t27246;
  t27608 = -1.*t26597*t27291;
  t27610 = t27605 + t27608;
  t27679 = Sin(var1[3]);
  t27699 = t4376*t23175*t26694;
  t27705 = t7147*t26694*t27251;
  t27712 = t27699 + t27705;
  t27714 = t27679*t27712;
  t27715 = Cos(var1[3]);
  t27716 = t438*t27628;
  t27718 = -1.*t27246*t27644;
  t27720 = t27716 + t27718;
  t27721 = t27715*t27720;
  t27929 = t27714 + t27721;
  t27952 = t27715*t27712;
  t27970 = -1.*t27679*t27720;
  t27972 = t27952 + t27970;
  t28028 = -1.*t7147*t4376;
  t28034 = t23175*t27251;
  t28038 = t28028 + t28034;
  t27988 = t4376*t23175*t27628;
  t27990 = t7147*t27628*t27251;
  t28004 = t27988 + t27990;
  t28057 = t4376*t27116;
  t28058 = t26998*t27251;
  t28061 = t28057 + t28058;
  t28087 = t4376*t26998;
  t28095 = -1.*t27116*t27251;
  t28098 = t28087 + t28095;
  t28076 = -1.*t28038*t28061;
  t28077 = t4376*t23175;
  t28079 = t7147*t27251;
  t28080 = t28077 + t28079;
  t28099 = -1.*t28080*t28098;
  t28100 = t28076 + t28099;
  t28103 = t28004*t28100;
  t28104 = 0.28121*t26597;
  t28110 = t26474*t26597;
  t28122 = -0.305*t26589*t25995;
  t28138 = t28104 + t28110 + t28122;
  t28142 = t28138*t26738;
  t28145 = t28004*t28061;
  t28153 = t7147*t4376*t27628;
  t28176 = -1.*t23175*t27628*t27251;
  t28307 = t28153 + t28176;
  t28322 = t28307*t28098;
  t28394 = t28142 + t28145 + t28322;
  t28408 = t28038*t28394;
  t28427 = t28103 + t28408;
  t28480 = t26738*t27246;
  t28485 = t438*t28307;
  t28486 = t28480 + t28485;
  t28487 = t28138*t27246;
  t28488 = t438*t28098;
  t28489 = t28487 + t28488;
  t28503 = t438*t28138;
  t28504 = -1.*t27246*t28098;
  t28505 = t28503 + t28504;
  t28490 = -1.*t438*t28080*t28489;
  t28508 = t27246*t28080*t28505;
  t28509 = t28076 + t28490 + t28508;
  t28510 = t28486*t28509;
  t28511 = t28486*t28489;
  t28513 = t438*t26738;
  t28518 = -1.*t27246*t28307;
  t28519 = t28513 + t28518;
  t28520 = t28519*t28505;
  t28521 = t28145 + t28511 + t28520;
  t28526 = t438*t28080*t28521;
  t28528 = t28510 + t28526;
  t28538 = -1.*t27628*t27246;
  t28539 = -1.*t438*t27644;
  t28540 = t28538 + t28539;
  t28549 = -1.*t28138*t27246;
  t28556 = -1.*t438*t28098;
  t28562 = t28549 + t28556;
  t28682 = -1.*t4376*t23175*t26694;
  t28683 = -1.*t7147*t26694*t27251;
  t28689 = t28682 + t28683;
  t28736 = -1.*t4376*t27116;
  t28741 = -1.*t26998*t27251;
  t28743 = t28736 + t28741;
  t28779 = -1.*t4376*t23175*t27628;
  t28781 = -1.*t7147*t27628*t27251;
  t28783 = t28779 + t28781;
  t28745 = -1.*t28080*t28061;
  t28756 = -1.*t28038*t28098;
  t28750 = t7147*t4376;
  t28752 = -1.*t23175*t27251;
  t28753 = t28750 + t28752;
  t28777 = t28307*t28061;
  t28788 = t28004*t28098;
  t23270 = -0.15121*t23175;
  t28692 = var2[0]*t438*t28689;
  t28693 = t27679*t27246*t28689;
  t28694 = t27715*t27644;
  t28703 = t28693 + t28694;
  t28704 = var2[1]*t28703;
  t28706 = -1.*t27715*t27246*t28689;
  t28707 = t27679*t27644;
  t28717 = t28706 + t28707;
  t28721 = var2[2]*t28717;
  t28734 = t28307*t28100;
  t29151 = -1.*t23175*t26978;
  t29153 = t23270 + t29151;
  t29145 = 0.15121*t7147;
  t29148 = t29145 + t26979;
  t28754 = -1.*t28753*t28098;
  t29174 = t4376*t29153;
  t29175 = -1.*t29148*t27251;
  t29193 = t29174 + t29175;
  t29207 = t4376*t29148;
  t29208 = t29153*t27251;
  t29216 = t29207 + t29208;
  t28784 = t28783*t28098;
  t28793 = t28080*t28394;
  t28798 = t438*t28783*t28509;
  t28803 = Power(t438,2);
  t28812 = Power(t27246,2);
  t29217 = -1.*t28038*t29216;
  t28815 = -1.*t438*t28753*t28489;
  t28816 = t27246*t28753*t28505;
  t29298 = t28004*t29216;
  t28823 = t438*t28783*t28489;
  t28944 = -1.*t27246*t28783*t28505;
  t29036 = t438*t28753*t28521;
  t30181 = t26022*t26597;
  t30182 = -1.*t26589*t25995;
  t30183 = t30181 + t30182;
  t30215 = t7147*t4376*t30183;
  t30228 = -1.*t23175*t30183*t27251;
  t30229 = t30215 + t30228;
  t30245 = t4376*t23175*t30183;
  t30248 = t7147*t30183*t27251;
  t30252 = t30245 + t30248;
  t30257 = t438*t26694;
  t30266 = -1.*t27246*t30229;
  t30304 = t30257 + t30266;
  t30341 = -0.28121*t26597;
  t30344 = -1.*t26474*t26597;
  t30347 = 0.305*t26589*t25995;
  t30348 = t30341 + t30344 + t30347;
  t30350 = t4376*t23175*t30348;
  t30364 = t7147*t30348*t27251;
  t30390 = t30350 + t30364;
  t30423 = t7147*t4376*t30348;
  t30424 = -1.*t23175*t30348*t27251;
  t30430 = t30423 + t30424;
  t30422 = -1.*t28038*t30390;
  t30452 = 0.28121*t26589;
  t30456 = t30452 + t26976 + t26977;
  t30460 = t30390*t28004;
  t30463 = t27712*t28061;
  t30478 = t30456*t27246;
  t30479 = t438*t30430;
  t30481 = t30478 + t30479;
  t30483 = t438*t30456;
  t30487 = -1.*t27246*t30430;
  t30488 = t30483 + t30487;
  t30185 = -0.15121*t30183;
  t30192 = -0.15121*t27628;
  t30198 = t30185 + t30192;
  t30201 = var2[15]*t30198;
  t30668 = 0.305*t26022*t26597;
  t30669 = t30668 + t28122;
  t30670 = t4376*t23175*t30669;
  t30685 = t7147*t30669*t27251;
  t30686 = t30670 + t30685;
  t30690 = t7147*t4376*t30669;
  t30693 = -1.*t23175*t30669*t27251;
  t30694 = t30690 + t30693;
  t30785 = t4376*t23175*t26738;
  t30789 = t7147*t26738*t27251;
  t30796 = t30785 + t30789;
  t30687 = -1.*t28038*t30686;
  t30811 = -0.305*t26589*t26022;
  t30814 = -0.305*t26597*t25995;
  t30815 = t30811 + t30814;
  t30823 = t7147*t4376*t26738;
  t30826 = -1.*t23175*t26738*t27251;
  t30827 = t30823 + t30826;
  t30818 = t30686*t28004;
  t30822 = t30796*t28061;
  t30845 = t30815*t27246;
  t30847 = t438*t30694;
  t30848 = t30845 + t30847;
  t30851 = t438*t30815;
  t30852 = -1.*t27246*t30694;
  t30857 = t30851 + t30852;
  t30882 = t30183*t27246;
  t30897 = t438*t30827;
  t30899 = t30882 + t30897;
  t30449 = t28138*t27628;
  t30946 = t26694*t26978;
  t30959 = t30449 + t30946;
  t30960 = t26738*t30959;
  t30962 = -1.*t27628*t26978;
  t30964 = -1.*t28138*t26738;
  t30966 = t30962 + t30964;
  t30968 = t27628*t30966;
  t30972 = -0.15121 + t30960 + t30968;
  t30979 = -1.*t7147*t27628*t26998;
  t30980 = -1.*t23175*t27628*t27116;
  t30981 = t30964 + t30979 + t30980;
  t30982 = t27628*t30981;
  t30984 = t7147*t26694*t26998;
  t30985 = t23175*t26694*t27116;
  t30986 = t30449 + t30984 + t30985;
  t30987 = t26738*t30986;
  t30988 = t30982 + t30987;
  t24956 = t15154 + t23270;
  t27250 = t15154 + t27065;
  t31008 = t27679*t27246*t28080;
  t31011 = t27715*t28038;
  t31014 = t31008 + t31011;
  t31017 = -1.*t27715*t27246*t28080;
  t31018 = t27679*t28038;
  t31019 = t31017 + t31018;
  t31000 = t4376*t27679*t27246;
  t31001 = t27715*t27251;
  t31002 = t31000 + t31001;
  t31004 = t27715*t4376;
  t31005 = -1.*t27679*t27246*t27251;
  t31006 = t31004 + t31005;
  t30464 = t27644*t28098;
  t31050 = -1.*t28004*t28061;
  t31051 = -1.*t28307*t28098;
  t31052 = t30964 + t31050 + t31051;
  t31053 = t27712*t31052;
  t31054 = t30449 + t30463 + t30464;
  t31055 = t28004*t31054;
  t31057 = t31053 + t31055;
  t31029 = t7147*t31002;
  t31031 = t23175*t31006;
  t31032 = t31029 + t31031;
  t30504 = t27649*t28489;
  t30506 = t27720*t28505;
  t31078 = -1.*t28486*t28489;
  t31082 = -1.*t28519*t28505;
  t31083 = t31050 + t31078 + t31082;
  t31084 = t27649*t31083;
  t31088 = t30463 + t30504 + t30506;
  t31089 = t28486*t31088;
  t31090 = t31084 + t31089;
  t31063 = -1.*t438*t26597*t27679;
  t31066 = t26589*t31032;
  t31067 = t31063 + t31066;
  t31071 = -1.*t26589*t438*t27679;
  t31072 = -1.*t26597*t31032;
  t31073 = t31071 + t31072;
  t31140 = -1.*t28307*t28061;
  t31143 = -1.*t28004*t28098;
  t31150 = t27644*t28061;
  t31152 = t27712*t28098;
  t31128 = var2[0]*t438*t28753;
  t31130 = t27679*t28080;
  t31131 = -1.*t27715*t27246*t28753;
  t31132 = t31130 + t31131;
  t31133 = var2[2]*t31132;
  t31134 = t27715*t28080;
  t31135 = t27679*t27246*t28753;
  t31136 = t31134 + t31135;
  t31137 = var2[1]*t31136;
  t31142 = -1.*t28783*t28098;
  t31148 = t27644*t31052;
  t31151 = t28689*t28098;
  t31156 = t28307*t31054;
  t31220 = -1.*t28004*t29216;
  t31162 = -1.*t438*t28783*t28489;
  t31165 = t27246*t28783*t28505;
  t31231 = t27712*t29216;
  t31171 = t438*t28689*t28489;
  t31172 = -1.*t27246*t28689*t28505;
  t31180 = t438*t28689*t31083;
  t31181 = t438*t28783*t31088;
  t28623 = -1.*t26738*t27246;
  t28624 = -1.*t438*t28307;
  t28627 = t28623 + t28624;
  t31340 = t28138*t26694;
  t31343 = t27628*t30456;
  t31353 = -1.*t28138*t27628;
  t31373 = Power(t7147,2);
  t31375 = Power(t23175,2);
  t31365 = -1.*t30456*t26738;
  t31417 = t30390*t27712;
  t31420 = t30252*t28061;
  t30211 = t26694*t27246;
  t30234 = t438*t30229;
  t30237 = t30211 + t30234;
  t31435 = -1.*t30390*t28004;
  t31439 = -1.*t27712*t28061;
  t31491 = t27628*t30815;
  t31500 = -1.*t30183*t28138;
  t31507 = -1.*t30815*t26738;
  t31551 = t30686*t27712;
  t31556 = -1.*t30686*t28004;
  t31559 = -1.*t30796*t28061;
  t30905 = t438*t30183;
  t30907 = -1.*t27246*t30827;
  t30909 = t30905 + t30907;
  t30558 = 0.28121*t26022;
  t30569 = t26474*t26022;
  t31624 = Power(t25995,2);
  t31625 = 0.305*t31624;
  t31627 = t30558 + t30569 + t31625;
  t31631 = t23175*t26998;
  t31632 = -1.*t7147*t27116;
  t31633 = t31631 + t31632;
  t30607 = var2[0]*t28486;
  t31636 = -1.*t27715*t4376*t27246;
  t31637 = t27679*t27251;
  t31638 = t31636 + t31637;
  t31641 = t4376*t27679;
  t31644 = t27715*t27246*t27251;
  t31647 = t31641 + t31644;
  t30610 = t27679*t28004;
  t30611 = t27715*t28519;
  t30613 = t30610 + t30611;
  t30614 = var2[2]*t30613;
  t30618 = t27715*t28004;
  t30634 = -1.*t27679*t28519;
  t30636 = t30618 + t30634;
  t30637 = var2[1]*t30636;
  t31440 = -1.*t27644*t28098;
  t31669 = t28038*t28061;
  t31671 = t28080*t28098;
  t31672 = t31669 + t31671;
  t31674 = t27712*t31672;
  t31681 = t31353 + t31439 + t31440;
  t31683 = t28038*t31681;
  t31684 = t31674 + t31683;
  t31660 = t7147*t31638;
  t31661 = t23175*t31647;
  t31662 = t31660 + t31661;
  t31462 = -1.*t27649*t28489;
  t31463 = -1.*t27720*t28505;
  t31716 = t438*t28080*t28489;
  t31717 = -1.*t27246*t28080*t28505;
  t31718 = t31669 + t31716 + t31717;
  t31720 = t27649*t31718;
  t31721 = t31439 + t31462 + t31463;
  t31724 = t438*t28080*t31721;
  t31725 = t31720 + t31724;
  t31687 = t27715*t438*t26597;
  t31688 = t26589*t31662;
  t31689 = t31687 + t31688;
  t31691 = t26589*t27715*t438;
  t31692 = -1.*t26597*t31662;
  t31696 = t31691 + t31692;
  t27652 = var2[0]*t27649;
  t27945 = var2[2]*t27929;
  t27986 = var2[1]*t27972;
  t31742 = t28038*t30390;
  t31755 = -1.*t30390*t27712;
  t31758 = -1.*t30252*t28061;
  t31822 = t28038*t30686;
  t31833 = -1.*t30686*t27712;
  t31975 = t28080*t28061;
  t31978 = t28038*t28098;
  t31984 = -1.*t27644*t28061;
  t31989 = -1.*t27712*t28098;
  t31948 = var2[0]*t438*t28783;
  t31949 = t27679*t27246*t28783;
  t31951 = t27715*t28307;
  t31952 = t31949 + t31951;
  t31955 = var2[1]*t31952;
  t31956 = -1.*t27715*t27246*t28783;
  t31957 = t27679*t28307;
  t31958 = t31956 + t31957;
  t31960 = var2[2]*t31958;
  t31971 = t27644*t31672;
  t31977 = t28753*t28098;
  t31987 = -1.*t28689*t28098;
  t31995 = t28080*t31681;
  t32001 = t438*t28689*t31718;
  t32059 = t28038*t29216;
  t32008 = t438*t28753*t28489;
  t32009 = -1.*t27246*t28753*t28505;
  t32073 = -1.*t27712*t29216;
  t32022 = -1.*t438*t28689*t28489;
  t32024 = t27246*t28689*t28505;
  t32028 = t438*t28753*t31721;
  p_output1[0]=0.28121*t26597*t27246 - 0.28121*t26922*t27291 - 0.50321*t26108*t27500 - 0.50321*t25995*t27610 - 0.19821*(t26022*t27500 - 1.*t25995*t27610) + t27652 + t27945 + t27986 - 1.*t27250*t27251*t438 + t24956*t4376*t438 - 0.15121*(-1.*t23175*t4376*t438 - 1.*t27251*t438*t7147) + var1[0] + t28528*var2[3] + ((-1.*t27679*t27712 - 1.*t27715*t27720)*var2[1] + t27972*var2[2])*var2[3] + t28427*var2[4] + (t27720*var2[0] - 1.*t27679*t28540*var2[1] + t27715*t28540*var2[2] + (t28509*t28519 - 1.*t27246*t28080*t28521 + t28486*(t27246*t28080*t28489 + t27246*t28080*t28562) + t28080*(t28486*t28505 + t28489*t28519 + t28519*t28562 + t28505*t28627)*t438)*var2[3])*var2[4] + t26738*t27229*var2[5] + (t28692 + t28704 + t28721 + (t28798 + t28486*(t28745 + t28756 - 1.*t28080*t28743*t28803 - 1.*t28080*t28743*t28812 + t28815 + t28816) + t29036 + t28080*t438*(-1.*t27246*t28519*t28743 + t28777 + t28788 + t28823 + t28944 + t28486*t28743*t438))*var2[3] + (t28734 + t28004*(-1.*t28080*t28743 + t28745 + t28754 + t28756) + t28038*(t28307*t28743 + t28777 + t28784 + t28788) + t28793)*var2[4])*var2[5] + t26796*var2[15] + (t28692 + t28704 + t28721 + (t28798 + t29036 + t28486*(t28745 + t28815 + t28816 - 1.*t28080*t28803*t29193 - 1.*t28080*t28812*t29193 + t29217) + t28080*t438*(t28777 + t28823 + t28944 - 1.*t27246*t28519*t29193 + t29298 + t28486*t29193*t438))*var2[3] + (t28734 + t28793 + t28004*(t28745 + t28754 - 1.*t28080*t29193 + t29217) + t28038*(t28777 + t28784 + t28307*t29193 + t29298))*var2[4] + t26738*(-1.*t23175*t27116 - 1.*t23175*t29153 - 1.*t26998*t7147 + t29148*t7147)*var2[5])*var2[15] + t26521*var2[16] + (t30201 + t30237*var2[0] + (t27715*t30252 - 1.*t27679*t30304)*var2[1] + (t27679*t30252 + t27715*t30304)*var2[2] + (t27649*t28509 + t28080*(t30460 + t30463 + t28486*t30481 + t28519*t30488 + t30504 + t30506)*t438 + t28486*(t30422 + t27246*t28080*t30488 - 1.*t28080*t30481*t438))*var2[3] + (t27712*t28100 + t28004*(t30422 - 1.*t28080*t30430) + t28038*(t28307*t30430 + t30449 + t26738*t30456 + t30460 + t30463 + t30464))*var2[4] + t27229*t27628*var2[5])*var2[16] + (t30201 + t30607 + t30614 + t30637 + (t28509*t30899 + t28080*(t30818 + t30822 + t28486*t30848 + t28519*t30857 + t28489*t30899 + t28505*t30909)*t438 + t28486*(t30687 + t27246*t28080*t30857 - 1.*t28080*t30848*t438))*var2[3] + (t28004*(t30687 - 1.*t28080*t30694) + t28100*t30796 + t28038*(t28138*t30183 + t28307*t30694 + t26738*t30815 + t30818 + t30822 + t28098*t30827))*var2[4] + t27229*t30183*var2[5] + (-0.305*Power(t26022,2) + t30558 + t30569)*var2[16])*var2[17] + t27649*var3[0] + t27972*var3[1] + t27929*var3[2] + t28528*var3[3] + t28427*var3[4] + t26738*t27229*var3[5] + t26796*var3[15] + t26521*var3[16] - 1.*var4[0];
  p_output1[1]=t24956*t31002 + t27250*t31006 - 0.28121*t26922*t31032 - 0.50321*t26108*t31067 - 0.50321*t25995*t31073 - 0.19821*(t26022*t31067 - 1.*t25995*t31073) - 0.28121*t26597*t27679*t438 - 0.15121*(-1.*t23175*t31002 + t31006*t7147) + var1[1] + t28080*t438*var2[0] + t31014*var2[1] + t31019*var2[2] + t31090*var2[3] + ((-1.*t27679*t28038 + t27246*t27715*t28080)*var2[1] + t31014*var2[2])*var2[3] + t31057*var2[4] + (-1.*t27246*t28080*var2[0] + t27679*t28080*t438*var2[1] - 1.*t27715*t28080*t438*var2[2] + (t28486*(t27720*t28489 + t27649*t28505 + t28505*t28540 + t27720*t28562) + t27649*(-1.*t28486*t28505 - 1.*t28489*t28519 - 1.*t28519*t28562 - 1.*t28505*t28627) + t27720*t31083 + t28519*t31088)*var2[3])*var2[4] + t30988*var2[5] + (t31128 + t31133 + t31137 + (t31180 + t31181 + t28486*(-1.*t27246*t27720*t28743 + t31150 + t31152 + t31171 + t31172 + t27649*t28743*t438) + t27649*(t27246*t28519*t28743 + t31140 + t31143 + t31162 + t31165 - 1.*t28486*t28743*t438))*var2[3] + (t27712*(-1.*t28307*t28743 + t31140 + t31142 + t31143) + t31148 + t28004*(t27644*t28743 + t31150 + t31151 + t31152) + t31156)*var2[4])*var2[5] + t30972*var2[15] + (t31128 + t31133 + t31137 + (t31180 + t31181 + t28486*(-1.*t27246*t27720*t29193 + t31150 + t31171 + t31172 + t31231 + t27649*t29193*t438) + t27649*(t27246*t28519*t29193 + t31140 + t31162 + t31165 + t31220 - 1.*t28486*t29193*t438))*var2[3] + (t31148 + t31156 + t27712*(-1.*t28307*t29193 + t31140 + t31142 + t31220) + t28004*(t27644*t29193 + t31150 + t31151 + t31231))*var2[4] + (t26738*(-1.*t23175*t26694*t26998 + t23175*t26694*t29148 + t26694*t27116*t7147 + t26694*t29153*t7147) + t27628*(t23175*t26998*t27628 - 1.*t23175*t27628*t29148 - 1.*t27116*t27628*t7147 - 1.*t27628*t29153*t7147))*var2[5])*var2[15] + ((t30237*t31083 + t27649*t31088 + t28486*(t28489*t30237 + t28505*t30304 + t27649*t30481 + t27720*t30488 + t31417 + t31420) + t27649*(-1.*t28486*t30481 - 1.*t28519*t30488 + t31435 + t31439 + t31462 + t31463))*var2[3] + (t30252*t31052 + t27712*t31054 + t28004*(t28098*t30229 + t27644*t30430 + t31340 + t31343 + t31417 + t31420) + t27712*(-1.*t28307*t30430 + t31353 + t31365 + t31435 + t31439 + t31440))*var2[4] + (t26694*t30981 + t27628*t30986 + t27628*(-1.*t23175*t26694*t27116 + t31353 + t31365 - 1.*t27628*t30348*t31373 - 1.*t27628*t30348*t31375 - 1.*t26694*t26998*t7147) + t26738*(t23175*t27116*t30183 + t31340 + t31343 + t26694*t30348*t31373 + t26694*t30348*t31375 + t26998*t30183*t7147))*var2[5] + (t27628*t30959 + t26694*t30966 + t26738*(t26978*t30183 + t26694*t30348 + t31340 + t31343) + t27628*(-1.*t26694*t26978 - 1.*t27628*t30348 + t31353 + t31365))*var2[15])*var2[16] + ((t28486*t31083 + t30899*t31088 + t28486*(t28145 + t28511 + t28520 + t27649*t30848 + t27720*t30857 + t31551) + t27649*(-1.*t28486*t30848 - 1.*t28519*t30857 - 1.*t28489*t30899 - 1.*t28505*t30909 + t31556 + t31559))*var2[3] + (t28004*t31052 + t30796*t31054 + t28004*(t28142 + t28145 + t28322 + t27644*t30694 + t31491 + t31551) + t27712*(-1.*t28307*t30694 - 1.*t28098*t30827 + t31500 + t31507 + t31556 + t31559))*var2[4] + (t26738*t30981 + t30183*t30986 + t27628*(-1.*t23175*t26738*t27116 - 1.*t27628*t30669*t31373 - 1.*t27628*t30669*t31375 + t31500 + t31507 - 1.*t26738*t26998*t7147) + t26738*(t23175*t27116*t27628 + t28142 + t26694*t30669*t31373 + t26694*t30669*t31375 + t31491 + t26998*t27628*t7147))*var2[5] + (t30183*t30959 + t26738*t30966 + t26738*(t26978*t27628 + t28142 + t26694*t30669 + t31491) + t27628*(-1.*t26738*t26978 - 1.*t27628*t30669 + t31500 + t31507))*var2[15])*var2[17] + t28080*t438*var3[0] + t31014*var3[1] + t31019*var3[2] + t31090*var3[3] + t31057*var3[4] + t30988*var3[5] + t30972*var3[15] - 1.*var4[1];
  p_output1[2]=t30607 + t30614 + t30637 + t24956*t31638 + t27250*t31647 - 0.28121*t26922*t31662 - 0.50321*t26108*t31689 - 0.50321*t25995*t31696 - 0.19821*(t26022*t31689 - 1.*t25995*t31696) + 0.28121*t26597*t27715*t438 - 0.15121*(-1.*t23175*t31638 + t31647*t7147) + var1[2] + t31725*var2[3] + ((-1.*t27679*t28004 - 1.*t27715*t28519)*var2[1] + t30636*var2[2])*var2[3] + t31684*var2[4] + (t28519*var2[0] - 1.*t27679*t28627*var2[1] + t27715*t28627*var2[2] + (t27649*(-1.*t27246*t28080*t28489 - 1.*t27246*t28080*t28562) + t27720*t31718 - 1.*t27246*t28080*t31721 + t28080*(-1.*t27720*t28489 - 1.*t27649*t28505 - 1.*t28505*t28540 - 1.*t27720*t28562)*t438)*var2[3])*var2[4] + t27628*t31633*var2[5] + (t31948 + t31955 + t31960 + (t32001 + t27649*(t28080*t28743*t28803 + t28080*t28743*t28812 + t31975 + t31978 + t32008 + t32009) + t32028 + t28080*t438*(t27246*t27720*t28743 + t31984 + t31989 + t32022 + t32024 - 1.*t27649*t28743*t438))*var2[3] + (t31971 + t27712*(t28080*t28743 + t31975 + t31977 + t31978) + t28038*(-1.*t27644*t28743 + t31984 + t31987 + t31989) + t31995)*var2[4])*var2[5] + (t31948 + t31955 + t31960 + (t32001 + t32028 + t27649*(t28080*t28803*t29193 + t28080*t28812*t29193 + t31975 + t32008 + t32009 + t32059) + t28080*t438*(t27246*t27720*t29193 + t31984 + t32022 + t32024 + t32073 - 1.*t27649*t29193*t438))*var2[3] + (t31971 + t31995 + t27712*(t28080*t29193 + t31975 + t31977 + t32059) + t28038*(-1.*t27644*t29193 + t31984 + t31987 + t32073))*var2[4] + t27628*(t23175*t27116 + t23175*t29153 + t26998*t7147 - 1.*t29148*t7147)*var2[5])*var2[15] + t31627*var2[16] + (t27652 + t27945 + t27986 + (t30237*t31718 + t28080*(-1.*t28489*t30237 - 1.*t28505*t30304 - 1.*t27649*t30481 - 1.*t27720*t30488 + t31755 + t31758)*t438 + t27649*(-1.*t27246*t28080*t30488 + t31742 + t28080*t30481*t438))*var2[3] + (t30252*t31672 + t27712*(t28080*t30430 + t31742) + t28038*(-1.*t26694*t28138 - 1.*t28098*t30229 - 1.*t27644*t30430 - 1.*t27628*t30456 + t31755 + t31758))*var2[4] + t26694*t31633*var2[5])*var2[16] - 0.305*var2[17] + (t30899*var2[0] + (t27715*t30796 - 1.*t27679*t30909)*var2[1] + (t27679*t30796 + t27715*t30909)*var2[2] + (t28486*t31718 + t28080*(-1.*t27649*t30848 - 1.*t27720*t30857 + t31050 + t31078 + t31082 + t31833)*t438 + t27649*(-1.*t27246*t28080*t30857 + t31822 + t28080*t30848*t438))*var2[3] + (t28004*t31672 + t27712*(t28080*t30694 + t31822) + t28038*(-1.*t27644*t30694 - 1.*t27628*t30815 + t30964 + t31050 + t31051 + t31833))*var2[4] + t26738*t31633*var2[5] + (-0.28121*t25995 + 0.305*t25995*t26022 - 1.*t25995*t26474)*var2[16])*var2[17] + t28486*var3[0] + t30636*var3[1] + t30613*var3[2] + t31725*var3[3] + t31684*var3[4] + t27628*t31633*var3[5] + t31627*var3[16] - 0.305*var3[17] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 18 && ncols == 1) && 
      !(mrows == 1 && ncols == 18))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void ddh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
