/*
 * Automatically Generated from Mathematica.
 * Sat 28 May 2022 17:00:54 GMT+02:00
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
  double t23240;
  double t24998;
  double t25029;
  double t25060;
  double t25175;
  double t25668;
  double t25679;
  double t25773;
  double t1196;
  double t23238;
  double t25774;
  double t26007;
  double t25772;
  double t25986;
  double t25994;
  double t898;
  double t26224;
  double t26229;
  double t26234;
  double t26238;
  double t26242;
  double t26285;
  double t26286;
  double t26288;
  double t26291;
  double t26465;
  double t26472;
  double t26573;
  double t26574;
  double t26575;
  double t26618;
  double t26620;
  double t26621;
  double t26622;
  double t26623;
  double t26636;
  double t26637;
  double t26641;
  double t26642;
  double t26646;
  double t26647;
  double t26648;
  double t26649;
  double t26651;
  double t26604;
  double t26605;
  double t26610;
  double t26614;
  double t26625;
  double t26626;
  double t26630;
  double t26659;
  double t26662;
  double t26663;
  double t26671;
  double t26675;
  double t26679;
  double t26685;
  double t26687;
  double t26688;
  double t26591;
  double t26592;
  double t26593;
  double t26596;
  double t26598;
  double t26599;
  double t26698;
  double t26701;
  double t26720;
  double t26724;
  double t26725;
  double t26729;
  double t26635;
  double t26689;
  double t26690;
  double t26749;
  double t26754;
  double t26755;
  double t26594;
  double t26600;
  double t26602;
  double t26736;
  double t26737;
  double t26739;
  double t26980;
  double t26981;
  double t26982;
  double t26731;
  double t26733;
  double t26735;
  double t26743;
  double t26945;
  double t26961;
  double t26970;
  double t26995;
  double t26996;
  double t26997;
  double t26971;
  double t27096;
  double t27100;
  double t27102;
  double t26744;
  double t26756;
  double t26758;
  double t27003;
  double t27059;
  double t27027;
  double t27047;
  double t27057;
  double t27081;
  double t27105;
  double t26972;
  double t26973;
  double t26975;
  double t26983;
  double t26984;
  double t26985;
  double t26986;
  double t26987;
  double t26988;
  double t26989;
  double t26990;
  double t26991;
  double t26992;
  double t26993;
  double t26994;
  double t27271;
  double t27273;
  double t27274;
  double t27265;
  double t27268;
  double t27058;
  double t27536;
  double t27553;
  double t27555;
  double t27591;
  double t27593;
  double t27603;
  double t27104;
  double t27212;
  double t27213;
  double t27214;
  double t27221;
  double t27232;
  double t27233;
  double t27240;
  double t27604;
  double t27243;
  double t27245;
  double t27611;
  double t27254;
  double t27255;
  double t27259;
  double t27659;
  double t27660;
  double t27661;
  double t27682;
  double t27687;
  double t27691;
  double t27700;
  double t27703;
  double t27704;
  double t27706;
  double t27707;
  double t27708;
  double t27722;
  double t27723;
  double t27727;
  double t27728;
  double t27783;
  double t27858;
  double t27863;
  double t27885;
  double t27922;
  double t27924;
  double t27864;
  double t27965;
  double t27968;
  double t27971;
  double t27976;
  double t27991;
  double t27995;
  double t27999;
  double t28012;
  double t28017;
  double t28021;
  double t28044;
  double t28052;
  double t28054;
  double t27662;
  double t27664;
  double t27665;
  double t27670;
  double t27672;
  double t27677;
  double t27678;
  double t28123;
  double t28124;
  double t28128;
  double t28129;
  double t28130;
  double t28135;
  double t28136;
  double t28137;
  double t28148;
  double t28150;
  double t28151;
  double t28133;
  double t28196;
  double t28220;
  double t28247;
  double t28349;
  double t28366;
  double t28390;
  double t28321;
  double t28346;
  double t28432;
  double t28434;
  double t28435;
  double t28437;
  double t28439;
  double t28440;
  double t28449;
  double t28454;
  double t28457;
  double t26487;
  double t26497;
  double t26513;
  double t26820;
  double t26846;
  double t26848;
  double t28067;
  double t28069;
  double t28580;
  double t27963;
  double t27978;
  double t28662;
  double t28664;
  double t28677;
  double t28681;
  double t28584;
  double t28594;
  double t28595;
  double t28629;
  double t28642;
  double t28646;
  double t28648;
  double t28649;
  double t28650;
  double t28651;
  double t28652;
  double t28656;
  double t28658;
  double t28663;
  double t28670;
  double t28672;
  double t28673;
  double t28675;
  double t28679;
  double t28684;
  double t28685;
  double t28787;
  double t28696;
  double t28699;
  double t28792;
  double t28708;
  double t28710;
  double t28732;
  double t28733;
  double t28951;
  double t29122;
  double t29140;
  double t29154;
  double t29168;
  double t29146;
  double t29299;
  double t29301;
  double t27681;
  double t27692;
  double t27698;
  double t29622;
  double t29657;
  double t28851;
  double t28897;
  double t29135;
  double t29137;
  double t29177;
  double t29190;
  double t29191;
  double t30236;
  double t29221;
  double t29222;
  double t29247;
  double t30247;
  double t30251;
  double t30425;
  double t30445;
  double t30447;
  double t28481;
  double t28482;
  double t28484;
  double t28531;
  double t28533;
  double t28534;
  double t28112;
  double t28113;
  double t28120;
  double t30186;
  double t30190;
  double t30639;
  double t29768;
  double t30648;
  double t30650;
  double t30654;
  double t30772;
  double t30783;
  double t30804;
  double t30808;
  double t30692;
  double t30698;
  double t30700;
  double t30703;
  double t30706;
  double t30707;
  double t30708;
  double t30709;
  double t30710;
  double t30759;
  double t30761;
  double t30764;
  double t30765;
  double t30774;
  double t30807;
  double t30812;
  double t30813;
  double t30816;
  double t30860;
  double t30819;
  double t30820;
  double t30890;
  double t30829;
  double t30830;
  double t30839;
  double t28492;
  double t28497;
  double t28498;
  double t30958;
  double t30970;
  double t30973;
  double t30929;
  double t30938;
  double t30940;
  double t31022;
  double t31030;
  double t28106;
  double t28107;
  double t28108;
  double t28088;
  double t28091;
  t23240 = Cos(var1[16]);
  t24998 = Cos(var1[17]);
  t25029 = -1.*t23240*t24998;
  t25060 = Sin(var1[16]);
  t25175 = Sin(var1[17]);
  t25668 = -1.*t25060*t25175;
  t25679 = t25029 + t25668;
  t25773 = Cos(var1[15]);
  t1196 = Cos(var1[5]);
  t23238 = Sin(var1[15]);
  t25774 = Sin(var1[5]);
  t26007 = Cos(var1[3]);
  t25772 = t1196*t23238*t25679;
  t25986 = t25773*t25679*t25774;
  t25994 = t25772 + t25986;
  t898 = Sin(var1[3]);
  t26224 = Cos(var1[4]);
  t26229 = -1.*t24998*t25060;
  t26234 = t23240*t25175;
  t26238 = t26229 + t26234;
  t26242 = t26224*t26238;
  t26285 = Sin(var1[4]);
  t26286 = t25773*t1196*t25679;
  t26288 = -1.*t23238*t25679*t25774;
  t26291 = t26286 + t26288;
  t26465 = -1.*t26285*t26291;
  t26472 = t26242 + t26465;
  t26573 = -1.*t26238*t26285;
  t26574 = -1.*t26224*t26291;
  t26575 = t26573 + t26574;
  t26618 = -1.*t24998;
  t26620 = 1. + t26618;
  t26621 = -0.50321*t26620;
  t26622 = -0.19821*t24998;
  t26623 = t26621 + t26622;
  t26636 = -1.*t25773;
  t26637 = 1. + t26636;
  t26641 = -0.15121*t26637;
  t26642 = -1.*t23240;
  t26646 = 1. + t26642;
  t26647 = -0.28121*t26646;
  t26648 = t23240*t26623;
  t26649 = 0.305*t25060*t25175;
  t26651 = t26647 + t26648 + t26649;
  t26604 = t1196*t23238;
  t26605 = t25773*t25774;
  t26610 = t26604 + t26605;
  t26614 = 0.28121*t25060;
  t26625 = t26623*t25060;
  t26626 = -0.305*t23240*t25175;
  t26630 = t26614 + t26625 + t26626;
  t26659 = t25773*t26651;
  t26662 = t26641 + t26659;
  t26663 = t1196*t26662;
  t26671 = -0.15121*t25773;
  t26675 = 0.15121*t23238;
  t26679 = t23238*t26651;
  t26685 = t26641 + t26671 + t26675 + t26679;
  t26687 = -1.*t26685*t25774;
  t26688 = t26663 + t26687;
  t26591 = t23240*t24998;
  t26592 = t25060*t25175;
  t26593 = t26591 + t26592;
  t26596 = t25773*t1196*t26238;
  t26598 = -1.*t23238*t26238*t25774;
  t26599 = t26596 + t26598;
  t26698 = t26630*t26285;
  t26701 = t26224*t26688;
  t26720 = t26698 + t26701;
  t26724 = t26224*t26593;
  t26725 = -1.*t26285*t26599;
  t26729 = t26724 + t26725;
  t26635 = -1.*t26630*t26285;
  t26689 = -1.*t26224*t26688;
  t26690 = t26635 + t26689;
  t26749 = t26224*t26630;
  t26754 = -1.*t26285*t26688;
  t26755 = t26749 + t26754;
  t26594 = t26593*t26285;
  t26600 = t26224*t26599;
  t26602 = t26594 + t26600;
  t26736 = t1196*t26685;
  t26737 = t26662*t25774;
  t26739 = t26736 + t26737;
  t26980 = -1.*t1196*t23238*t25679;
  t26981 = -1.*t25773*t25679*t25774;
  t26982 = t26980 + t26981;
  t26731 = -1.*t25773*t1196;
  t26733 = t23238*t25774;
  t26735 = t26731 + t26733;
  t26743 = -1.*t26735*t26739;
  t26945 = t1196*t23238*t26238;
  t26961 = t25773*t26238*t25774;
  t26970 = t26945 + t26961;
  t26995 = -1.*t1196*t26685;
  t26996 = -1.*t26662*t25774;
  t26997 = t26995 + t26996;
  t26971 = t26970*t26739;
  t27096 = -1.*t1196*t23238*t26238;
  t27100 = -1.*t25773*t26238*t25774;
  t27102 = t27096 + t27100;
  t26744 = -1.*t26224*t26610*t26720;
  t26756 = t26285*t26610*t26755;
  t26758 = t26743 + t26744 + t26756;
  t27003 = -1.*t26610*t26739;
  t27059 = -1.*t26735*t26688;
  t27027 = t25773*t1196;
  t27047 = -1.*t23238*t25774;
  t27057 = t27027 + t27047;
  t27081 = t26599*t26739;
  t27105 = t26970*t26688;
  t26972 = t26602*t26720;
  t26973 = t26729*t26755;
  t26975 = t26971 + t26972 + t26973;
  t26983 = var2[0]*t26224*t26982;
  t26984 = t898*t26285*t26982;
  t26985 = t26007*t26291;
  t26986 = t26984 + t26985;
  t26987 = var2[1]*t26986;
  t26988 = -1.*t26007*t26285*t26982;
  t26989 = t898*t26291;
  t26990 = t26988 + t26989;
  t26991 = var2[2]*t26990;
  t26992 = -1.*t26610*t26688;
  t26993 = t26743 + t26992;
  t26994 = t26599*t26993;
  t27271 = -0.15121*t23238;
  t27273 = -1.*t23238*t26651;
  t27274 = t27271 + t27273;
  t27265 = 0.15121*t25773;
  t27268 = t27265 + t26659;
  t27058 = -1.*t27057*t26688;
  t27536 = t1196*t27274;
  t27553 = -1.*t27268*t25774;
  t27555 = t27536 + t27553;
  t27591 = t1196*t27268;
  t27593 = t27274*t25774;
  t27603 = t27591 + t27593;
  t27104 = t27102*t26688;
  t27212 = t26630*t26593;
  t27213 = t26599*t26688;
  t27214 = t27212 + t26971 + t27213;
  t27221 = t26610*t27214;
  t27232 = t26224*t27102*t26758;
  t27233 = Power(t26224,2);
  t27240 = Power(t26285,2);
  t27604 = -1.*t26735*t27603;
  t27243 = -1.*t26224*t27057*t26720;
  t27245 = t26285*t27057*t26755;
  t27611 = t26970*t27603;
  t27254 = t26224*t27102*t26720;
  t27255 = -1.*t26285*t27102*t26755;
  t27259 = t26224*t27057*t26975;
  t27659 = t24998*t25060;
  t27660 = -1.*t23240*t25175;
  t27661 = t27659 + t27660;
  t27682 = t25773*t1196*t27661;
  t27687 = -1.*t23238*t27661*t25774;
  t27691 = t27682 + t27687;
  t27700 = t1196*t23238*t27661;
  t27703 = t25773*t27661*t25774;
  t27704 = t27700 + t27703;
  t27706 = t26224*t25679;
  t27707 = -1.*t26285*t27691;
  t27708 = t27706 + t27707;
  t27722 = -0.28121*t25060;
  t27723 = -1.*t26623*t25060;
  t27727 = 0.305*t23240*t25175;
  t27728 = t27722 + t27723 + t27727;
  t27783 = t1196*t23238*t27728;
  t27858 = t25773*t27728*t25774;
  t27863 = t27783 + t27858;
  t27885 = t25773*t1196*t27728;
  t27922 = -1.*t23238*t27728*t25774;
  t27924 = t27885 + t27922;
  t27864 = -1.*t26735*t27863;
  t27965 = 0.28121*t23240;
  t27968 = t27965 + t26648 + t26649;
  t27971 = t27863*t26970;
  t27976 = t25994*t26739;
  t27991 = t27968*t26285;
  t27995 = t26224*t27924;
  t27999 = t27991 + t27995;
  t28012 = t26224*t27968;
  t28017 = -1.*t26285*t27924;
  t28021 = t28012 + t28017;
  t28044 = t26238*t26285;
  t28052 = t26224*t26291;
  t28054 = t28044 + t28052;
  t27662 = -0.15121*t27661;
  t27664 = -0.15121*t26238;
  t27665 = t27662 + t27664;
  t27670 = var2[15]*t27665;
  t27672 = -1.*t23238*t26662;
  t27677 = t25773*t26685;
  t27678 = t27672 + t27677;
  t28123 = 0.305*t24998*t25060;
  t28124 = t28123 + t26626;
  t28128 = t1196*t23238*t28124;
  t28129 = t25773*t28124*t25774;
  t28130 = t28128 + t28129;
  t28135 = t25773*t1196*t28124;
  t28136 = -1.*t23238*t28124*t25774;
  t28137 = t28135 + t28136;
  t28148 = t1196*t23238*t26593;
  t28150 = t25773*t26593*t25774;
  t28151 = t28148 + t28150;
  t28133 = -1.*t26735*t28130;
  t28196 = -0.305*t23240*t24998;
  t28220 = -0.305*t25060*t25175;
  t28247 = t28196 + t28220;
  t28349 = t25773*t1196*t26593;
  t28366 = -1.*t23238*t26593*t25774;
  t28390 = t28349 + t28366;
  t28321 = t28130*t26970;
  t28346 = t28151*t26739;
  t28432 = t28247*t26285;
  t28434 = t26224*t28137;
  t28435 = t28432 + t28434;
  t28437 = t26224*t28247;
  t28439 = -1.*t26285*t28137;
  t28440 = t28437 + t28439;
  t28449 = t27661*t26285;
  t28454 = t26224*t28390;
  t28457 = t28449 + t28454;
  t26487 = t26007*t25994;
  t26497 = -1.*t898*t26472;
  t26513 = t26487 + t26497;
  t26820 = -1.*t26593*t26285;
  t26846 = -1.*t26224*t26599;
  t26848 = t26820 + t26846;
  t28067 = t28054*t26720;
  t28069 = t26472*t26755;
  t28580 = -1.*t26970*t26739;
  t27963 = t26630*t26238;
  t27978 = t26291*t26688;
  t28662 = -1.*t26599*t26739;
  t28664 = -1.*t26970*t26688;
  t28677 = t26291*t26739;
  t28681 = t25994*t26688;
  t28584 = -1.*t26602*t26720;
  t28594 = -1.*t26729*t26755;
  t28595 = t28580 + t28584 + t28594;
  t28629 = t27976 + t28067 + t28069;
  t28642 = var2[0]*t26224*t27057;
  t28646 = t898*t26610;
  t28648 = -1.*t26007*t26285*t27057;
  t28649 = t28646 + t28648;
  t28650 = var2[2]*t28649;
  t28651 = t26007*t26610;
  t28652 = t898*t26285*t27057;
  t28656 = t28651 + t28652;
  t28658 = var2[1]*t28656;
  t28663 = -1.*t27102*t26688;
  t28670 = -1.*t26630*t26593;
  t28672 = -1.*t26599*t26688;
  t28673 = t28670 + t28580 + t28672;
  t28675 = t26291*t28673;
  t28679 = t26982*t26688;
  t28684 = t27963 + t27976 + t27978;
  t28685 = t26599*t28684;
  t28787 = -1.*t26970*t27603;
  t28696 = -1.*t26224*t27102*t26720;
  t28699 = t26285*t27102*t26755;
  t28792 = t25994*t27603;
  t28708 = t26224*t26982*t26720;
  t28710 = -1.*t26285*t26982*t26755;
  t28732 = t26224*t26982*t28595;
  t28733 = t26224*t27102*t28629;
  t28951 = t26630*t25679;
  t29122 = t26238*t27968;
  t29140 = -1.*t26630*t26238;
  t29154 = Power(t25773,2);
  t29168 = Power(t23238,2);
  t29146 = -1.*t27968*t26593;
  t29299 = t27863*t25994;
  t29301 = t27704*t26739;
  t27681 = t25679*t26285;
  t27692 = t26224*t27691;
  t27698 = t27681 + t27692;
  t29622 = -1.*t27863*t26970;
  t29657 = -1.*t25994*t26739;
  t28851 = t25679*t26651;
  t28897 = t27963 + t28851;
  t29135 = -1.*t26238*t26651;
  t29137 = t29135 + t28670;
  t29177 = -1.*t25773*t26238*t26662;
  t29190 = -1.*t23238*t26238*t26685;
  t29191 = t28670 + t29177 + t29190;
  t30236 = t26238*t28247;
  t29221 = t25773*t25679*t26662;
  t29222 = t23238*t25679*t26685;
  t29247 = t27963 + t29221 + t29222;
  t30247 = -1.*t27661*t26630;
  t30251 = -1.*t28247*t26593;
  t30425 = t28130*t25994;
  t30445 = -1.*t28130*t26970;
  t30447 = -1.*t28151*t26739;
  t28481 = t26224*t27661;
  t28482 = -1.*t26285*t28390;
  t28484 = t28481 + t28482;
  t28531 = t898*t26285*t26610;
  t28533 = t26007*t26735;
  t28534 = t28531 + t28533;
  t28112 = t26007*t26970;
  t28113 = -1.*t898*t26729;
  t28120 = t28112 + t28113;
  t30186 = -1.*t28054*t26720;
  t30190 = -1.*t26472*t26755;
  t30639 = t26735*t26739;
  t29768 = -1.*t26291*t26688;
  t30648 = t26224*t26610*t26720;
  t30650 = -1.*t26285*t26610*t26755;
  t30654 = t30639 + t30648 + t30650;
  t30772 = t26610*t26739;
  t30783 = t26735*t26688;
  t30804 = -1.*t26291*t26739;
  t30808 = -1.*t25994*t26688;
  t30692 = t29657 + t30186 + t30190;
  t30698 = var2[0]*t26224*t27102;
  t30700 = t898*t26285*t27102;
  t30703 = t26007*t26599;
  t30706 = t30700 + t30703;
  t30707 = var2[1]*t30706;
  t30708 = -1.*t26007*t26285*t27102;
  t30709 = t898*t26599;
  t30710 = t30708 + t30709;
  t30759 = var2[2]*t30710;
  t30761 = t26610*t26688;
  t30764 = t30639 + t30761;
  t30765 = t26291*t30764;
  t30774 = t27057*t26688;
  t30807 = -1.*t26982*t26688;
  t30812 = t29140 + t29657 + t29768;
  t30813 = t26610*t30812;
  t30816 = t26224*t26982*t30654;
  t30860 = t26735*t27603;
  t30819 = t26224*t27057*t26720;
  t30820 = -1.*t26285*t27057*t26755;
  t30890 = -1.*t25994*t27603;
  t30829 = -1.*t26224*t26982*t26720;
  t30830 = t26285*t26982*t26755;
  t30839 = t26224*t27057*t30692;
  t28492 = t898*t25994;
  t28497 = t26007*t26472;
  t28498 = t28492 + t28497;
  t30958 = t26735*t27863;
  t30970 = -1.*t27863*t25994;
  t30973 = -1.*t27704*t26739;
  t30929 = t23238*t26662;
  t30938 = -1.*t25773*t26685;
  t30940 = t30929 + t30938;
  t31022 = t26735*t28130;
  t31030 = -1.*t28130*t25994;
  t28106 = t898*t26970;
  t28107 = t26007*t26729;
  t28108 = t28106 + t28107;
  t28088 = 0.28121*t24998;
  t28091 = t26623*t24998;
  p_output1[0]=(-1.*t26007*t26472 - 1.*t25994*t898)*var2[1] + t26513*var2[2];
  p_output1[1]=t26472*var2[0] - 1.*t26575*t898*var2[1] + t26007*t26575*var2[2] + (t26602*(t26285*t26610*t26690 + t26285*t26610*t26720) + t26729*t26758 + t26224*t26610*(t26690*t26729 + t26720*t26729 + t26602*t26755 + t26755*t26848) - 1.*t26285*t26610*t26975)*var2[3];
  p_output1[2]=t26983 + t26987 + t26991 + (t27232 + t26602*(t27003 + t27059 - 1.*t26610*t26997*t27233 - 1.*t26610*t26997*t27240 + t27243 + t27245) + t26224*t26610*(t26224*t26602*t26997 - 1.*t26285*t26729*t26997 + t27081 + t27105 + t27254 + t27255) + t27259)*var2[3] + (t26994 + t26970*(-1.*t26610*t26997 + t27003 + t27058 + t27059) + t26735*(t26599*t26997 + t27081 + t27104 + t27105) + t27221)*var2[4];
  p_output1[3]=t26983 + t26987 + t26991 + (t27232 + t27259 + t26602*(t27003 + t27243 + t27245 - 1.*t26610*t27233*t27555 - 1.*t26610*t27240*t27555 + t27604) + t26224*t26610*(t27081 + t27254 + t27255 + t26224*t26602*t27555 - 1.*t26285*t26729*t27555 + t27611))*var2[3] + (t26994 + t27221 + t26970*(t27003 + t27058 - 1.*t26610*t27555 + t27604) + t26735*(t27081 + t27104 + t26599*t27555 + t27611))*var2[4] + t26593*(-1.*t25773*t26662 - 1.*t23238*t26685 + t25773*t27268 - 1.*t23238*t27274)*var2[5];
  p_output1[4]=t27670 + t27698*var2[0] + (t26007*t27704 - 1.*t27708*t898)*var2[1] + (t26007*t27708 + t27704*t898)*var2[2] + (t26602*(t27864 - 1.*t26224*t26610*t27999 + t26285*t26610*t28021) + t26758*t28054 + t26224*t26610*(t27971 + t27976 + t26602*t27999 + t26729*t28021 + t28067 + t28069))*var2[3] + (t25994*t26993 + t26970*(t27864 - 1.*t26610*t27924) + t26735*(t26599*t27924 + t27963 + t26593*t27968 + t27971 + t27976 + t27978))*var2[4] + t26238*t27678*var2[5];
  p_output1[5]=t27670 + t26602*var2[0] + t28120*var2[1] + t28108*var2[2] + (t26602*(t28133 - 1.*t26224*t26610*t28435 + t26285*t26610*t28440) + t26758*t28457 + t26224*t26610*(t28321 + t28346 + t26602*t28435 + t26729*t28440 + t26720*t28457 + t26755*t28484))*var2[3] + (t26970*(t28133 - 1.*t26610*t28137) + t26993*t28151 + t26735*(t26630*t27661 + t26599*t28137 + t26593*t28247 + t28321 + t28346 + t26688*t28390))*var2[4] + t27661*t27678*var2[5] + (-0.305*Power(t24998,2) + t28088 + t28091)*var2[16];
  p_output1[6]=t28054;
  p_output1[7]=t26513;
  p_output1[8]=t28498;
  p_output1[9]=t26602*t26758 + t26224*t26610*t26975;
  p_output1[10]=t26970*t26993 + t26735*t27214;
  p_output1[11]=t26593*t27678;
  p_output1[12]=-0.15121*t25679 - 0.15121*t26593;
  p_output1[13]=0.28121*t25175 - 0.305*t24998*t25175 + t25175*t26623;
  p_output1[14]=(t26007*t26285*t26610 - 1.*t26735*t898)*var2[1] + t28534*var2[2];
  p_output1[15]=-1.*t26285*t26610*var2[0] + t26224*t26610*t898*var2[1] - 1.*t26007*t26224*t26610*var2[2] + ((-1.*t26690*t26729 - 1.*t26720*t26729 - 1.*t26602*t26755 - 1.*t26755*t26848)*t28054 + t26602*(t26472*t26690 + t26472*t26720 + t26575*t26755 + t26755*t28054) + t26472*t28595 + t26729*t28629)*var2[3];
  p_output1[16]=t28642 + t28650 + t28658 + (t28054*(-1.*t26224*t26602*t26997 + t26285*t26729*t26997 + t28662 + t28664 + t28696 + t28699) + t26602*(-1.*t26285*t26472*t26997 + t26224*t26997*t28054 + t28677 + t28681 + t28708 + t28710) + t28732 + t28733)*var2[3] + (t25994*(-1.*t26599*t26997 + t28662 + t28663 + t28664) + t28675 + t26970*(t26291*t26997 + t28677 + t28679 + t28681) + t28685)*var2[4];
  p_output1[17]=t28642 + t28650 + t28658 + (t28732 + t28733 + t28054*(-1.*t26224*t26602*t27555 + t26285*t26729*t27555 + t28662 + t28696 + t28699 + t28787) + t26602*(-1.*t26285*t26472*t27555 + t26224*t27555*t28054 + t28677 + t28708 + t28710 + t28792))*var2[3] + (t28675 + t28685 + t25994*(-1.*t26599*t27555 + t28662 + t28663 + t28787) + t26970*(t26291*t27555 + t28677 + t28679 + t28792))*var2[4] + (t26593*(-1.*t23238*t25679*t26662 + t25679*t25773*t26685 + t23238*t25679*t27268 + t25679*t25773*t27274) + t26238*(t23238*t26238*t26662 - 1.*t25773*t26238*t26685 - 1.*t23238*t26238*t27268 - 1.*t25773*t26238*t27274))*var2[5];
  p_output1[18]=(t27698*t28595 + t28054*t28629 + t26602*(t26720*t27698 + t26755*t27708 + t26472*t28021 + t27999*t28054 + t29299 + t29301) + t28054*(-1.*t26602*t27999 - 1.*t26729*t28021 + t29622 + t29657 + t30186 + t30190))*var2[3] + (t27704*t28673 + t25994*t28684 + t26970*(t26688*t27691 + t26291*t27924 + t28951 + t29122 + t29299 + t29301) + t25994*(-1.*t26599*t27924 + t29140 + t29146 + t29622 + t29657 + t29768))*var2[4] + (t26593*(t25773*t26662*t27661 + t23238*t26685*t27661 + t28951 + t29122 + t25679*t27728*t29154 + t25679*t27728*t29168) + t26238*(-1.*t25679*t25773*t26662 - 1.*t23238*t25679*t26685 + t29140 + t29146 - 1.*t26238*t27728*t29154 - 1.*t26238*t27728*t29168) + t25679*t29191 + t26238*t29247)*var2[5] + (t26238*t28897 + t26593*(t26651*t27661 + t25679*t27728 + t28951 + t29122) + t25679*t29137 + t26238*(-1.*t25679*t26651 - 1.*t26238*t27728 + t29140 + t29146))*var2[15];
  p_output1[19]=(t26602*t28595 + t28457*t28629 + t26602*(t26971 + t26972 + t26973 + t28054*t28435 + t26472*t28440 + t30425) + t28054*(-1.*t26602*t28435 - 1.*t26729*t28440 - 1.*t26720*t28457 - 1.*t26755*t28484 + t30445 + t30447))*var2[3] + (t26970*t28673 + t28151*t28684 + t26970*(t26971 + t27212 + t27213 + t26291*t28137 + t30236 + t30425) + t25994*(-1.*t26599*t28137 - 1.*t26688*t28390 + t30247 + t30251 + t30445 + t30447))*var2[4] + (t26593*t29191 + t27661*t29247 + t26593*(t25773*t26238*t26662 + t23238*t26238*t26685 + t27212 + t25679*t28124*t29154 + t25679*t28124*t29168 + t30236) + t26238*(-1.*t25773*t26593*t26662 - 1.*t23238*t26593*t26685 - 1.*t26238*t28124*t29154 - 1.*t26238*t28124*t29168 + t30247 + t30251))*var2[5] + (t27661*t28897 + t26593*t29137 + t26593*(t26238*t26651 + t27212 + t25679*t28124 + t30236) + t26238*(-1.*t26593*t26651 - 1.*t26238*t28124 + t30247 + t30251))*var2[15];
  p_output1[20]=t26224*t26610;
  p_output1[21]=t28534;
  p_output1[22]=-1.*t26007*t26285*t26610 + t26735*t898;
  p_output1[23]=t28054*t28595 + t26602*t28629;
  p_output1[24]=t25994*t28673 + t26970*t28684;
  p_output1[25]=t26238*t29191 + t26593*t29247;
  p_output1[26]=-0.15121 + t26593*t28897 + t26238*t29137;
  p_output1[27]=(-1.*t26007*t26729 - 1.*t26970*t898)*var2[1] + t28120*var2[2];
  p_output1[28]=t26729*var2[0] - 1.*t26848*t898*var2[1] + t26007*t26848*var2[2] + ((-1.*t26285*t26610*t26690 - 1.*t26285*t26610*t26720)*t28054 + t26224*t26610*(-1.*t26472*t26690 - 1.*t26472*t26720 - 1.*t26575*t26755 - 1.*t26755*t28054) + t26472*t30654 - 1.*t26285*t26610*t30692)*var2[3];
  p_output1[29]=t30698 + t30707 + t30759 + (t30816 + t28054*(t26610*t26997*t27233 + t26610*t26997*t27240 + t30772 + t30783 + t30819 + t30820) + t26224*t26610*(t26285*t26472*t26997 - 1.*t26224*t26997*t28054 + t30804 + t30808 + t30829 + t30830) + t30839)*var2[3] + (t30765 + t25994*(t26610*t26997 + t30772 + t30774 + t30783) + t26735*(-1.*t26291*t26997 + t30804 + t30807 + t30808) + t30813)*var2[4];
  p_output1[30]=t30698 + t30707 + t30759 + (t30816 + t30839 + t28054*(t26610*t27233*t27555 + t26610*t27240*t27555 + t30772 + t30819 + t30820 + t30860) + t26224*t26610*(t26285*t26472*t27555 - 1.*t26224*t27555*t28054 + t30804 + t30829 + t30830 + t30890))*var2[3] + (t30765 + t30813 + t25994*(t26610*t27555 + t30772 + t30774 + t30860) + t26735*(-1.*t26291*t27555 + t30804 + t30807 + t30890))*var2[4] + t26238*(t25773*t26662 + t23238*t26685 - 1.*t25773*t27268 + t23238*t27274)*var2[5];
  p_output1[31]=t28054*var2[0] + t26513*var2[1] + t28498*var2[2] + (t27698*t30654 + t28054*(t26224*t26610*t27999 - 1.*t26285*t26610*t28021 + t30958) + t26224*t26610*(-1.*t26720*t27698 - 1.*t26755*t27708 - 1.*t26472*t28021 - 1.*t27999*t28054 + t30970 + t30973))*var2[3] + (t27704*t30764 + t25994*(t26610*t27924 + t30958) + t26735*(-1.*t25679*t26630 - 1.*t26688*t27691 - 1.*t26291*t27924 - 1.*t26238*t27968 + t30970 + t30973))*var2[4] + t25679*t30940*var2[5];
  p_output1[32]=t28457*var2[0] + (t26007*t28151 - 1.*t28484*t898)*var2[1] + (t26007*t28484 + t28151*t898)*var2[2] + (t26602*t30654 + t28054*(t26224*t26610*t28435 - 1.*t26285*t26610*t28440 + t31022) + t26224*t26610*(-1.*t28054*t28435 - 1.*t26472*t28440 + t28580 + t28584 + t28594 + t31030))*var2[3] + (t26970*t30764 + t25994*(t26610*t28137 + t31022) + t26735*(-1.*t26291*t28137 - 1.*t26238*t28247 + t28580 + t28670 + t28672 + t31030))*var2[4] + t26593*t30940*var2[5] + (-0.28121*t25175 + 0.305*t24998*t25175 - 1.*t25175*t26623)*var2[16];
  p_output1[33]=t26602;
  p_output1[34]=t28120;
  p_output1[35]=t28108;
  p_output1[36]=t28054*t30654 + t26224*t26610*t30692;
  p_output1[37]=t25994*t30764 + t26735*t30812;
  p_output1[38]=t26238*t30940;
  p_output1[39]=0.305*Power(t25175,2) + t28088 + t28091;
  p_output1[40]=-0.305;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 41, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RrFoot_ParallelStance.hh"

namespace ParallelStance
{

void J_dh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
