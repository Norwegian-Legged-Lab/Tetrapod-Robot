/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:49 GMT+02:00
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
  double t15892;
  double t15911;
  double t18772;
  double t44831;
  double t51667;
  double t51840;
  double t52170;
  double t52444;
  double t4231;
  double t4235;
  double t52445;
  double t52457;
  double t52408;
  double t52446;
  double t52450;
  double t2943;
  double t52461;
  double t52462;
  double t52463;
  double t52464;
  double t52466;
  double t52467;
  double t52468;
  double t52481;
  double t52482;
  double t52488;
  double t52489;
  double t52564;
  double t52566;
  double t52568;
  double t52571;
  double t52573;
  double t52575;
  double t52588;
  double t52589;
  double t52590;
  double t52591;
  double t52592;
  double t52594;
  double t52596;
  double t52597;
  double t52598;
  double t52599;
  double t52600;
  double t52603;
  double t52613;
  double t52614;
  double t52617;
  double t52626;
  double t52627;
  double t52628;
  double t52629;
  double t52630;
  double t52636;
  double t52637;
  double t52638;
  double t52639;
  double t52640;
  double t52641;
  double t52642;
  double t52643;
  double t52644;
  double t52625;
  double t52631;
  double t52632;
  double t52634;
  double t52645;
  double t52646;
  double t52647;
  double t52649;
  double t52650;
  double t52651;
  double t52652;
  double t52653;
  double t52654;
  double t52658;
  double t52659;
  double t52660;
  double t52635;
  double t52655;
  double t52656;
  double t52670;
  double t52671;
  double t52672;
  double t52621;
  double t52623;
  double t52624;
  double t52664;
  double t52666;
  double t52667;
  double t52679;
  double t52680;
  double t52681;
  double t52699;
  double t52700;
  double t52701;
  double t52758;
  double t52759;
  double t52760;
  double t52668;
  double t52775;
  double t52776;
  double t52777;
  double t52687;
  double t52789;
  double t52790;
  double t52791;
  double t52669;
  double t52673;
  double t52675;
  double t52779;
  double t52780;
  double t52781;
  double t52782;
  double t52783;
  double t52788;
  double t52793;
  double t52688;
  double t52689;
  double t52690;
  double t52709;
  double t52720;
  double t52833;
  double t52835;
  double t52845;
  double t52847;
  double t52710;
  double t52711;
  double t52712;
  double t52721;
  double t52722;
  double t52724;
  double t52737;
  double t52749;
  double t52738;
  double t52740;
  double t52741;
  double t52804;
  double t52806;
  double t52886;
  double t52887;
  double t52892;
  double t52894;
  double t52750;
  double t52751;
  double t52752;
  double t52761;
  double t52762;
  double t52763;
  double t52764;
  double t52765;
  double t52767;
  double t52768;
  double t52769;
  double t52770;
  double t52771;
  double t52772;
  double t52773;
  double t52921;
  double t52922;
  double t52924;
  double t52925;
  double t52926;
  double t52784;
  double t52931;
  double t52932;
  double t52933;
  double t52935;
  double t52936;
  double t52937;
  double t52792;
  double t52797;
  double t52798;
  double t52799;
  double t52800;
  double t52803;
  double t52938;
  double t52808;
  double t52810;
  double t52942;
  double t52815;
  double t52816;
  double t52819;
  double t52823;
  double t52824;
  double t52825;
  double t52826;
  double t52827;
  double t52828;
  double t52829;
  double t52830;
  double t52831;
  double t52834;
  double t52840;
  double t52841;
  double t52842;
  double t52843;
  double t52846;
  double t52850;
  double t52851;
  double t52852;
  double t52853;
  double t52973;
  double t52858;
  double t52859;
  double t52977;
  double t52864;
  double t52865;
  double t52868;
  double t52869;
  double t52873;
  double t52874;
  double t52875;
  double t52876;
  double t52877;
  double t52878;
  double t52879;
  double t52880;
  double t52881;
  double t52882;
  double t52883;
  double t52884;
  double t52888;
  double t52893;
  double t52897;
  double t52898;
  double t52899;
  double t52900;
  double t52903;
  double t53000;
  double t52906;
  double t52907;
  double t53004;
  double t52912;
  double t52913;
  double t52916;
  double t53020;
  double t53021;
  double t53022;
  double t53024;
  double t53025;
  double t53026;
  double t53034;
  double t53035;
  double t53036;
  double t53038;
  double t53039;
  double t53040;
  double t53048;
  double t53049;
  double t53050;
  double t53052;
  double t53053;
  double t53054;
  double t53051;
  double t53059;
  double t53060;
  double t53061;
  double t53062;
  double t53064;
  double t53070;
  double t53071;
  double t53072;
  double t53074;
  double t53075;
  double t53076;
  double t53091;
  double t53093;
  double t53111;
  double t53113;
  double t53101;
  double t53023;
  double t53027;
  double t53028;
  double t53133;
  double t53135;
  double t53139;
  double t52558;
  double t52560;
  double t52561;
  double t53175;
  double t53183;
  double t53185;
  double t53030;
  double t53031;
  double t53032;
  double t52608;
  double t52609;
  double t52610;
  double t53220;
  double t53221;
  double t53222;
  double t53223;
  double t53224;
  double t53225;
  double t53227;
  double t53228;
  double t53230;
  double t53234;
  double t53235;
  double t53236;
  double t53226;
  double t53239;
  double t53240;
  double t53245;
  double t53246;
  double t53247;
  double t53242;
  double t53254;
  double t53255;
  double t53256;
  double t53258;
  double t53259;
  double t53260;
  double t53244;
  double t53264;
  double t53265;
  double t53267;
  double t53088;
  double t53089;
  double t53096;
  double t53097;
  double t53099;
  double t53106;
  double t53107;
  double t53109;
  double t53283;
  double t53291;
  double t53125;
  double t53126;
  double t53127;
  double t53314;
  double t53318;
  double t53320;
  double t53272;
  double t53273;
  double t53274;
  double t53161;
  double t53162;
  double t53163;
  double t53164;
  double t53165;
  double t53166;
  double t53167;
  double t53360;
  double t53366;
  t15892 = Cos(var1[7]);
  t15911 = Cos(var1[8]);
  t18772 = t15892*t15911;
  t44831 = Sin(var1[7]);
  t51667 = Sin(var1[8]);
  t51840 = t44831*t51667;
  t52170 = t18772 + t51840;
  t52444 = Cos(var1[5]);
  t4231 = Cos(var1[6]);
  t4235 = Sin(var1[5]);
  t52445 = Sin(var1[6]);
  t52457 = Cos(var1[3]);
  t52408 = t4231*t4235*t52170;
  t52446 = t52444*t52445*t52170;
  t52450 = t52408 + t52446;
  t2943 = Sin(var1[3]);
  t52461 = Cos(var1[4]);
  t52462 = -1.*t15911*t44831;
  t52463 = t15892*t51667;
  t52464 = t52462 + t52463;
  t52466 = t52461*t52464;
  t52467 = Sin(var1[4]);
  t52468 = t52444*t4231*t52170;
  t52481 = -1.*t4235*t52445*t52170;
  t52482 = t52468 + t52481;
  t52488 = -1.*t52467*t52482;
  t52489 = t52466 + t52488;
  t52564 = -1.*t4231*t4235;
  t52566 = -1.*t52444*t52445;
  t52568 = t52564 + t52566;
  t52571 = t52444*t4231;
  t52573 = -1.*t4235*t52445;
  t52575 = t52571 + t52573;
  t52588 = t15911*t44831;
  t52589 = -1.*t15892*t51667;
  t52590 = t52588 + t52589;
  t52591 = t4231*t4235*t52590;
  t52592 = t52444*t52445*t52590;
  t52594 = t52591 + t52592;
  t52596 = t52461*t52170;
  t52597 = t52444*t4231*t52590;
  t52598 = -1.*t4235*t52445*t52590;
  t52599 = t52597 + t52598;
  t52600 = -1.*t52467*t52599;
  t52603 = t52596 + t52600;
  t52613 = -1.*t52467*t52464;
  t52614 = -1.*t52461*t52482;
  t52617 = t52613 + t52614;
  t52626 = -1.*t15911;
  t52627 = 1. + t52626;
  t52628 = 0.50321*t52627;
  t52629 = 0.23321*t15911;
  t52630 = t52628 + t52629;
  t52636 = -1.*t4231;
  t52637 = 1. + t52636;
  t52638 = 0.15121*t52637;
  t52639 = -1.*t15892;
  t52640 = 1. + t52639;
  t52641 = 0.28121*t52640;
  t52642 = t15892*t52630;
  t52643 = -0.27*t44831*t51667;
  t52644 = t52641 + t52642 + t52643;
  t52625 = 0.28121*t44831;
  t52631 = -1.*t52630*t44831;
  t52632 = -0.27*t15892*t51667;
  t52634 = t52625 + t52631 + t52632;
  t52645 = t4231*t52644;
  t52646 = t52638 + t52645;
  t52647 = t52444*t52646;
  t52649 = 0.15121*t4231;
  t52650 = -0.15121*t52445;
  t52651 = t52445*t52644;
  t52652 = t52638 + t52649 + t52650 + t52651;
  t52653 = -1.*t4235*t52652;
  t52654 = t52647 + t52653;
  t52658 = t52467*t52634;
  t52659 = t52461*t52654;
  t52660 = t52658 + t52659;
  t52635 = -1.*t52467*t52634;
  t52655 = -1.*t52461*t52654;
  t52656 = t52635 + t52655;
  t52670 = t52461*t52634;
  t52671 = -1.*t52467*t52654;
  t52672 = t52670 + t52671;
  t52621 = t52467*t52170;
  t52623 = t52461*t52599;
  t52624 = t52621 + t52623;
  t52664 = t4235*t52646;
  t52666 = t52444*t52652;
  t52667 = t52664 + t52666;
  t52679 = -1.*t52467*t52170;
  t52680 = -1.*t52461*t52599;
  t52681 = t52679 + t52680;
  t52699 = t52467*t52464;
  t52700 = t52461*t52482;
  t52701 = t52699 + t52700;
  t52758 = -1.*t4231*t4235*t52170;
  t52759 = -1.*t52444*t52445*t52170;
  t52760 = t52758 + t52759;
  t52668 = -1.*t52575*t52667;
  t52775 = -1.*t4235*t52646;
  t52776 = -1.*t52444*t52652;
  t52777 = t52775 + t52776;
  t52687 = t52594*t52667;
  t52789 = -1.*t4231*t4235*t52590;
  t52790 = -1.*t52444*t52445*t52590;
  t52791 = t52789 + t52790;
  t52669 = -1.*t52461*t52568*t52660;
  t52673 = t52467*t52568*t52672;
  t52675 = t52668 + t52669 + t52673;
  t52779 = -1.*t52568*t52667;
  t52780 = -1.*t52575*t52654;
  t52781 = -1.*t52444*t4231;
  t52782 = t4235*t52445;
  t52783 = t52781 + t52782;
  t52788 = t52599*t52667;
  t52793 = t52594*t52654;
  t52688 = t52624*t52660;
  t52689 = t52603*t52672;
  t52690 = t52687 + t52688 + t52689;
  t52709 = -1.*t52594*t52667;
  t52720 = t52450*t52667;
  t52833 = -1.*t52599*t52667;
  t52835 = -1.*t52594*t52654;
  t52845 = t52482*t52667;
  t52847 = t52450*t52654;
  t52710 = -1.*t52624*t52660;
  t52711 = -1.*t52603*t52672;
  t52712 = t52709 + t52710 + t52711;
  t52721 = t52701*t52660;
  t52722 = t52489*t52672;
  t52724 = t52720 + t52721 + t52722;
  t52737 = t52575*t52667;
  t52749 = -1.*t52450*t52667;
  t52738 = t52461*t52568*t52660;
  t52740 = -1.*t52467*t52568*t52672;
  t52741 = t52737 + t52738 + t52740;
  t52804 = Power(t52461,2);
  t52806 = Power(t52467,2);
  t52886 = t52568*t52667;
  t52887 = t52575*t52654;
  t52892 = -1.*t52482*t52667;
  t52894 = -1.*t52450*t52654;
  t52750 = -1.*t52701*t52660;
  t52751 = -1.*t52489*t52672;
  t52752 = t52749 + t52750 + t52751;
  t52761 = var2[0]*t52461*t52760;
  t52762 = t2943*t52467*t52760;
  t52763 = t52457*t52482;
  t52764 = t52762 + t52763;
  t52765 = var2[1]*t52764;
  t52767 = -1.*t52457*t52467*t52760;
  t52768 = t2943*t52482;
  t52769 = t52767 + t52768;
  t52770 = var2[2]*t52769;
  t52771 = -1.*t52568*t52654;
  t52772 = t52668 + t52771;
  t52773 = t52599*t52772;
  t52921 = -0.15121*t4231;
  t52922 = t52921 + t52645;
  t52924 = 0.15121*t52445;
  t52925 = -1.*t52445*t52644;
  t52926 = t52924 + t52925;
  t52784 = -1.*t52783*t52654;
  t52931 = -1.*t4235*t52922;
  t52932 = t52444*t52926;
  t52933 = t52931 + t52932;
  t52935 = t52444*t52922;
  t52936 = t4235*t52926;
  t52937 = t52935 + t52936;
  t52792 = t52791*t52654;
  t52797 = t52634*t52170;
  t52798 = t52599*t52654;
  t52799 = t52797 + t52687 + t52798;
  t52800 = t52568*t52799;
  t52803 = t52461*t52791*t52675;
  t52938 = -1.*t52575*t52937;
  t52808 = -1.*t52461*t52783*t52660;
  t52810 = t52467*t52783*t52672;
  t52942 = t52594*t52937;
  t52815 = t52461*t52791*t52660;
  t52816 = -1.*t52467*t52791*t52672;
  t52819 = t52461*t52783*t52690;
  t52823 = var2[0]*t52461*t52783;
  t52824 = t2943*t52568;
  t52825 = -1.*t52457*t52467*t52783;
  t52826 = t52824 + t52825;
  t52827 = var2[2]*t52826;
  t52828 = t52457*t52568;
  t52829 = t2943*t52467*t52783;
  t52830 = t52828 + t52829;
  t52831 = var2[1]*t52830;
  t52834 = -1.*t52791*t52654;
  t52840 = -1.*t52634*t52170;
  t52841 = -1.*t52599*t52654;
  t52842 = t52840 + t52709 + t52841;
  t52843 = t52482*t52842;
  t52846 = t52760*t52654;
  t52850 = t52634*t52464;
  t52851 = t52482*t52654;
  t52852 = t52850 + t52720 + t52851;
  t52853 = t52599*t52852;
  t52973 = -1.*t52594*t52937;
  t52858 = -1.*t52461*t52791*t52660;
  t52859 = t52467*t52791*t52672;
  t52977 = t52450*t52937;
  t52864 = t52461*t52760*t52660;
  t52865 = -1.*t52467*t52760*t52672;
  t52868 = t52461*t52760*t52712;
  t52869 = t52461*t52791*t52724;
  t52873 = var2[0]*t52461*t52791;
  t52874 = t2943*t52467*t52791;
  t52875 = t52457*t52599;
  t52876 = t52874 + t52875;
  t52877 = var2[1]*t52876;
  t52878 = -1.*t52457*t52467*t52791;
  t52879 = t2943*t52599;
  t52880 = t52878 + t52879;
  t52881 = var2[2]*t52880;
  t52882 = t52568*t52654;
  t52883 = t52737 + t52882;
  t52884 = t52482*t52883;
  t52888 = t52783*t52654;
  t52893 = -1.*t52760*t52654;
  t52897 = -1.*t52634*t52464;
  t52898 = -1.*t52482*t52654;
  t52899 = t52897 + t52749 + t52898;
  t52900 = t52568*t52899;
  t52903 = t52461*t52760*t52741;
  t53000 = t52575*t52937;
  t52906 = t52461*t52783*t52660;
  t52907 = -1.*t52467*t52783*t52672;
  t53004 = -1.*t52450*t52937;
  t52912 = -1.*t52461*t52760*t52660;
  t52913 = t52467*t52760*t52672;
  t52916 = t52461*t52783*t52752;
  t53020 = -1.*t15892*t15911;
  t53021 = -1.*t44831*t51667;
  t53022 = t53020 + t53021;
  t53024 = t52444*t4231*t52464;
  t53025 = -1.*t4235*t52445*t52464;
  t53026 = t53024 + t53025;
  t53034 = t4231*t4235*t52464;
  t53035 = t52444*t52445*t52464;
  t53036 = t53034 + t53035;
  t53038 = t52461*t53022;
  t53039 = -1.*t52467*t53026;
  t53040 = t53038 + t53039;
  t53048 = t4231*t4235*t52634;
  t53049 = t52444*t52445*t52634;
  t53050 = t53048 + t53049;
  t53052 = t52444*t4231*t52634;
  t53053 = -1.*t4235*t52445*t52634;
  t53054 = t53052 + t53053;
  t53051 = -1.*t52575*t53050;
  t53059 = 0.28121*t15892;
  t53060 = -1.*t15892*t52630;
  t53061 = 0.27*t44831*t51667;
  t53062 = t53059 + t53060 + t53061;
  t53064 = t52594*t53050;
  t53070 = t52467*t53062;
  t53071 = t52461*t53054;
  t53072 = t53070 + t53071;
  t53074 = t52461*t53062;
  t53075 = -1.*t52467*t53054;
  t53076 = t53074 + t53075;
  t53091 = t52634*t53022;
  t53093 = t52464*t53062;
  t53111 = Power(t4231,2);
  t53113 = Power(t52445,2);
  t53101 = -1.*t53062*t52170;
  t53023 = t52467*t53022;
  t53027 = t52461*t53026;
  t53028 = t53023 + t53027;
  t53133 = t53050*t52450;
  t53135 = t53036*t52667;
  t53139 = -1.*t52594*t53050;
  t52558 = t52457*t52450;
  t52560 = -1.*t2943*t52489;
  t52561 = t52558 + t52560;
  t53175 = t52575*t53050;
  t53183 = -1.*t53050*t52450;
  t53185 = -1.*t53036*t52667;
  t53030 = t52445*t52646;
  t53031 = -1.*t4231*t52652;
  t53032 = t53030 + t53031;
  t52608 = t52457*t52594;
  t52609 = -1.*t2943*t52603;
  t52610 = t52608 + t52609;
  t53220 = -0.27*t15911*t44831;
  t53221 = 0.27*t15892*t51667;
  t53222 = t53220 + t53221;
  t53223 = t4231*t4235*t53222;
  t53224 = t52444*t52445*t53222;
  t53225 = t53223 + t53224;
  t53227 = t52444*t4231*t53222;
  t53228 = -1.*t4235*t52445*t53222;
  t53230 = t53227 + t53228;
  t53234 = t4231*t4235*t53022;
  t53235 = t52444*t52445*t53022;
  t53236 = t53234 + t53235;
  t53226 = -1.*t52575*t53225;
  t53239 = -0.27*t15892*t15911;
  t53240 = t53239 + t52643;
  t53245 = t52444*t4231*t53022;
  t53246 = -1.*t4235*t52445*t53022;
  t53247 = t53245 + t53246;
  t53242 = t52594*t53225;
  t53254 = t52467*t53240;
  t53255 = t52461*t53230;
  t53256 = t53254 + t53255;
  t53258 = t52461*t53240;
  t53259 = -1.*t52467*t53230;
  t53260 = t53258 + t53259;
  t53244 = t53236*t52667;
  t53264 = t52467*t52590;
  t53265 = t52461*t53247;
  t53267 = t53264 + t53265;
  t53088 = -1.*t52590*t52644;
  t53089 = t53088 + t52840;
  t53096 = t52644*t52170;
  t53097 = t52850 + t53096;
  t53099 = -1.*t52590*t52634;
  t53106 = -1.*t4231*t52590*t52646;
  t53107 = -1.*t52445*t52590*t52652;
  t53109 = t52840 + t53106 + t53107;
  t53283 = t52464*t53240;
  t53291 = -1.*t53240*t52170;
  t53125 = t4231*t52170*t52646;
  t53126 = t52445*t52170*t52652;
  t53127 = t52850 + t53125 + t53126;
  t53314 = t53225*t52450;
  t53318 = -1.*t52594*t53225;
  t53320 = -1.*t53236*t52667;
  t53272 = t52461*t52590;
  t53273 = -1.*t52467*t53247;
  t53274 = t53272 + t53273;
  t53161 = 0.15121*t53022;
  t53162 = 0.15121*t52170;
  t53163 = t53161 + t53162;
  t53164 = var2[6]*t53163;
  t53165 = -1.*t52445*t52646;
  t53166 = t4231*t52652;
  t53167 = t53165 + t53166;
  t53360 = t52575*t53225;
  t53366 = -1.*t53225*t52450;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2943*t52450 - 1.*t52457*t52489)*var2[1] + t52561*var2[2];
  p_output1[10]=(t52457*t52467*t52568 - 1.*t2943*t52575)*var2[1] + (t2943*t52467*t52568 + t52457*t52575)*var2[2];
  p_output1[11]=(-1.*t2943*t52594 - 1.*t52457*t52603)*var2[1] + t52610*var2[2];
  p_output1[12]=t52489*var2[0] - 1.*t2943*t52617*var2[1] + t52457*t52617*var2[2] + (t52624*(t52467*t52568*t52656 + t52467*t52568*t52660) + t52603*t52675 + t52461*t52568*(t52603*t52656 + t52603*t52660 + t52624*t52672 + t52672*t52681) - 1.*t52467*t52568*t52690)*var2[3];
  p_output1[13]=-1.*t52467*t52568*var2[0] + t2943*t52461*t52568*var2[1] - 1.*t52457*t52461*t52568*var2[2] + ((-1.*t52603*t52656 - 1.*t52603*t52660 - 1.*t52624*t52672 - 1.*t52672*t52681)*t52701 + t52624*(t52489*t52656 + t52489*t52660 + t52617*t52672 + t52672*t52701) + t52489*t52712 + t52603*t52724)*var2[3];
  p_output1[14]=t52603*var2[0] - 1.*t2943*t52681*var2[1] + t52457*t52681*var2[2] + ((-1.*t52467*t52568*t52656 - 1.*t52467*t52568*t52660)*t52701 + t52461*t52568*(-1.*t52489*t52656 - 1.*t52489*t52660 - 1.*t52617*t52672 - 1.*t52672*t52701) + t52489*t52741 - 1.*t52467*t52568*t52752)*var2[3];
  p_output1[15]=t52761 + t52765 + t52770 + (t52803 + t52624*(t52779 + t52780 - 1.*t52568*t52777*t52804 - 1.*t52568*t52777*t52806 + t52808 + t52810) + t52461*t52568*(-1.*t52467*t52603*t52777 + t52461*t52624*t52777 + t52788 + t52793 + t52815 + t52816) + t52819)*var2[3] + (t52773 + t52594*(-1.*t52568*t52777 + t52779 + t52780 + t52784) + t52575*(t52599*t52777 + t52788 + t52792 + t52793) + t52800)*var2[4];
  p_output1[16]=t52823 + t52827 + t52831 + (t52701*(t52467*t52603*t52777 - 1.*t52461*t52624*t52777 + t52833 + t52835 + t52858 + t52859) + t52624*(-1.*t52467*t52489*t52777 + t52461*t52701*t52777 + t52845 + t52847 + t52864 + t52865) + t52868 + t52869)*var2[3] + (t52450*(-1.*t52599*t52777 + t52833 + t52834 + t52835) + t52843 + t52594*(t52482*t52777 + t52845 + t52846 + t52847) + t52853)*var2[4];
  p_output1[17]=t52873 + t52877 + t52881 + (t52903 + t52701*(t52568*t52777*t52804 + t52568*t52777*t52806 + t52886 + t52887 + t52906 + t52907) + t52461*t52568*(t52467*t52489*t52777 - 1.*t52461*t52701*t52777 + t52892 + t52894 + t52912 + t52913) + t52916)*var2[3] + (t52884 + t52450*(t52568*t52777 + t52886 + t52887 + t52888) + t52575*(-1.*t52482*t52777 + t52892 + t52893 + t52894) + t52900)*var2[4];
  p_output1[18]=t52761 + t52765 + t52770 + (t52803 + t52819 + t52624*(t52779 + t52808 + t52810 - 1.*t52568*t52804*t52933 - 1.*t52568*t52806*t52933 + t52938) + t52461*t52568*(t52788 + t52815 + t52816 - 1.*t52467*t52603*t52933 + t52461*t52624*t52933 + t52942))*var2[3] + (t52773 + t52800 + t52594*(t52779 + t52784 - 1.*t52568*t52933 + t52938) + t52575*(t52788 + t52792 + t52599*t52933 + t52942))*var2[4] + t52170*(t4231*t52646 + t52445*t52652 - 1.*t4231*t52922 + t52445*t52926)*var2[5];
  p_output1[19]=t52823 + t52827 + t52831 + (t52868 + t52869 + t52701*(t52833 + t52858 + t52859 + t52467*t52603*t52933 - 1.*t52461*t52624*t52933 + t52973) + t52624*(t52845 + t52864 + t52865 - 1.*t52467*t52489*t52933 + t52461*t52701*t52933 + t52977))*var2[3] + (t52843 + t52853 + t52450*(t52833 + t52834 - 1.*t52599*t52933 + t52973) + t52594*(t52845 + t52846 + t52482*t52933 + t52977))*var2[4] + (t52170*(-1.*t52170*t52445*t52646 + t4231*t52170*t52652 + t52170*t52445*t52922 + t4231*t52170*t52926) + t52464*(t52445*t52590*t52646 - 1.*t4231*t52590*t52652 - 1.*t52445*t52590*t52922 - 1.*t4231*t52590*t52926))*var2[5];
  p_output1[20]=t52873 + t52877 + t52881 + (t52903 + t52916 + t52701*(t52886 + t52906 + t52907 + t52568*t52804*t52933 + t52568*t52806*t52933 + t53000) + t52461*t52568*(t52892 + t52912 + t52913 + t52467*t52489*t52933 - 1.*t52461*t52701*t52933 + t53004))*var2[3] + (t52884 + t52900 + t52450*(t52886 + t52888 + t52568*t52933 + t53000) + t52575*(t52892 + t52893 - 1.*t52482*t52933 + t53004))*var2[4] + t52464*(-1.*t4231*t52646 - 1.*t52445*t52652 + t4231*t52922 - 1.*t52445*t52926)*var2[5];
  p_output1[21]=t53028*var2[0] + (t52457*t53036 - 1.*t2943*t53040)*var2[1] + (t2943*t53036 + t52457*t53040)*var2[2] + (t52675*t52701 + t52624*(t53051 - 1.*t52461*t52568*t53072 + t52467*t52568*t53076) + t52461*t52568*(t52720 + t52721 + t52722 + t53064 + t52624*t53072 + t52603*t53076))*var2[3] + (t52450*t52772 + t52594*(t53051 - 1.*t52568*t53054) + t52575*(t52720 + t52850 + t52851 + t52599*t53054 + t52170*t53062 + t53064))*var2[4] + t52464*t53032*var2[5];
  p_output1[22]=(t52701*t52724 + t52712*t53028 + t52624*(t52660*t53028 + t52672*t53040 + t52701*t53072 + t52489*t53076 + t53133 + t53135) + t52701*(t52749 + t52750 + t52751 - 1.*t52624*t53072 - 1.*t52603*t53076 + t53139))*var2[3] + (t52450*t52852 + t52842*t53036 + t52594*(t52654*t53026 + t52482*t53054 + t53091 + t53093 + t53133 + t53135) + t52450*(t52749 + t52897 + t52898 - 1.*t52599*t53054 + t53101 + t53139))*var2[4] + (t53022*t53109 + t52170*(t4231*t52464*t52646 + t52445*t52464*t52652 + t53091 + t53093 + t52170*t52634*t53111 + t52170*t52634*t53113) + t52464*(-1.*t4231*t52170*t52646 - 1.*t52170*t52445*t52652 + t52897 + t53101 - 1.*t52590*t52634*t53111 - 1.*t52590*t52634*t53113) + t52464*t53127)*var2[5] + (t53022*t53089 + t52170*(t52464*t52644 + t52797 + t53091 + t53093) + t52464*t53097 + t52464*(-1.*t52170*t52644 + t52897 + t53099 + t53101))*var2[6];
  p_output1[23]=t53164 + t52701*var2[0] + t52561*var2[1] + (t2943*t52450 + t52457*t52489)*var2[2] + (t52741*t53028 + t52701*(t52461*t52568*t53072 - 1.*t52467*t52568*t53076 + t53175) + t52461*t52568*(-1.*t52660*t53028 - 1.*t52672*t53040 - 1.*t52701*t53072 - 1.*t52489*t53076 + t53183 + t53185))*var2[3] + (t52883*t53036 + t52450*(t52568*t53054 + t53175) + t52575*(-1.*t52634*t53022 - 1.*t52654*t53026 - 1.*t52482*t53054 - 1.*t52464*t53062 + t53183 + t53185))*var2[4] + t53022*t53167*var2[5];
  p_output1[24]=t52624*var2[0] + t52610*var2[1] + (t2943*t52594 + t52457*t52603)*var2[2] + (t52624*(t53226 - 1.*t52461*t52568*t53256 + t52467*t52568*t53260) + t52675*t53267 + t52461*t52568*(t53242 + t53244 + t52624*t53256 + t52603*t53260 + t52660*t53267 + t52672*t53274))*var2[3] + (t52594*(t53226 - 1.*t52568*t53230) + t52772*t53236 + t52575*(t52590*t52634 + t52599*t53230 + t52170*t53240 + t53242 + t53244 + t52654*t53247))*var2[4] + t52590*t53032*var2[5] + (0.28121*t15911 - 0.27*Power(t15911,2) - 1.*t15911*t52630)*var2[7];
  p_output1[25]=(t52624*t52712 + t52724*t53267 + t52624*(t52687 + t52688 + t52689 + t52701*t53256 + t52489*t53260 + t53314) + t52701*(-1.*t52624*t53256 - 1.*t52603*t53260 - 1.*t52660*t53267 - 1.*t52672*t53274 + t53318 + t53320))*var2[3] + (t52594*t52842 + t52852*t53236 + t52594*(t52687 + t52797 + t52798 + t52482*t53230 + t53283 + t53314) + t52450*(t53099 - 1.*t52599*t53230 - 1.*t52654*t53247 + t53291 + t53318 + t53320))*var2[4] + (t52170*t53109 + t52590*t53127 + t52170*(t4231*t52590*t52646 + t52445*t52590*t52652 + t52797 + t52170*t53111*t53222 + t52170*t53113*t53222 + t53283) + t52464*(-1.*t4231*t52646*t53022 - 1.*t52445*t52652*t53022 + t53099 - 1.*t52590*t53111*t53222 - 1.*t52590*t53113*t53222 + t53291))*var2[5] + (t52170*t53089 + t52590*t53097 + t52170*(t52590*t52644 + t52797 + t52170*t53222 + t53283) + t52464*(-1.*t52644*t53022 + t53099 - 1.*t52590*t53222 + t53291))*var2[6];
  p_output1[26]=t53164 + t53267*var2[0] + (t52457*t53236 - 1.*t2943*t53274)*var2[1] + (t2943*t53236 + t52457*t53274)*var2[2] + (t52624*t52741 + t52701*(t52461*t52568*t53256 - 1.*t52467*t52568*t53260 + t53360) + t52461*t52568*(t52709 + t52710 + t52711 - 1.*t52701*t53256 - 1.*t52489*t53260 + t53366))*var2[3] + (t52594*t52883 + t52450*(t52568*t53230 + t53360) + t52575*(t52709 + t52840 + t52841 - 1.*t52482*t53230 - 1.*t52464*t53240 + t53366))*var2[4] + t52170*t53167*var2[5] + (-0.28121*t51667 + 0.27*t15911*t51667 + t51667*t52630)*var2[7];
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
