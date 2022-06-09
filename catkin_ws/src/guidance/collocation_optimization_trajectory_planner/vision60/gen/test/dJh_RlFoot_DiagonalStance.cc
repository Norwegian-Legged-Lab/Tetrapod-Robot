/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 10:40:14 GMT+02:00
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
  double t27581;
  double t27539;
  double t27543;
  double t27589;
  double t27574;
  double t27599;
  double t27601;
  double t27458;
  double t27606;
  double t27610;
  double t27612;
  double t27538;
  double t27614;
  double t27618;
  double t27602;
  double t27615;
  double t27616;
  double t22709;
  double t27667;
  double t27671;
  double t27672;
  double t27673;
  double t27675;
  double t27676;
  double t27677;
  double t27678;
  double t27679;
  double t27692;
  double t27696;
  double t27697;
  double t27716;
  double t27717;
  double t27718;
  double t27714;
  double t27719;
  double t27721;
  double t27723;
  double t27725;
  double t27726;
  double t27727;
  double t27728;
  double t27730;
  double t27753;
  double t27754;
  double t27755;
  double t27772;
  double t27776;
  double t27777;
  double t27780;
  double t27781;
  double t27784;
  double t27785;
  double t27786;
  double t27787;
  double t27771;
  double t27779;
  double t27788;
  double t27789;
  double t27769;
  double t27793;
  double t27797;
  double t27805;
  double t27809;
  double t27810;
  double t27811;
  double t27812;
  double t27816;
  double t27817;
  double t27818;
  double t27819;
  double t27820;
  double t27821;
  double t27822;
  double t27823;
  double t27824;
  double t27825;
  double t27846;
  double t27847;
  double t27848;
  double t27840;
  double t27844;
  double t27845;
  double t27834;
  double t27835;
  double t27837;
  double t27766;
  double t27767;
  double t27768;
  double t27801;
  double t27827;
  double t27829;
  double t27856;
  double t27858;
  double t27860;
  double t27850;
  double t27851;
  double t27852;
  double t27891;
  double t27892;
  double t27894;
  double t27868;
  double t27869;
  double t27870;
  double t27959;
  double t27961;
  double t27966;
  double t27861;
  double t27877;
  double t27988;
  double t27992;
  double t27997;
  double t28003;
  double t28017;
  double t28021;
  double t28022;
  double t27862;
  double t27863;
  double t27866;
  double t28024;
  double t28029;
  double t27878;
  double t27879;
  double t27880;
  double t27903;
  double t27916;
  double t28073;
  double t28076;
  double t27906;
  double t27907;
  double t27908;
  double t28089;
  double t28091;
  double t27917;
  double t27918;
  double t27919;
  double t27937;
  double t27948;
  double t28130;
  double t27938;
  double t27939;
  double t27940;
  double t28134;
  double t28136;
  double t27949;
  double t27950;
  double t27951;
  double t27981;
  double t28187;
  double t28191;
  double t28196;
  double t28200;
  double t28201;
  double t28007;
  double t28235;
  double t28236;
  double t28237;
  double t27982;
  double t27983;
  double t28199;
  double t28202;
  double t28213;
  double t28214;
  double t28008;
  double t28009;
  double t28246;
  double t28247;
  double t28251;
  double t28257;
  double t28258;
  double t28266;
  double t28267;
  double t28268;
  double t28270;
  double t28271;
  double t28272;
  double t28274;
  double t28275;
  double t28276;
  double t28278;
  double t28279;
  double t28280;
  double t28084;
  double t28080;
  double t28282;
  double t28283;
  double t28284;
  double t28304;
  double t28305;
  double t28081;
  double t28082;
  double t28313;
  double t28314;
  double t28085;
  double t28086;
  double t28338;
  double t28340;
  double t28226;
  double t28227;
  double t28228;
  double t28345;
  double t28346;
  double t28291;
  double t28292;
  double t28293;
  double t28125;
  double t28139;
  double t28126;
  double t28127;
  double t28374;
  double t28375;
  double t28248;
  double t28380;
  double t28381;
  double t28140;
  double t28141;
  double t28401;
  double t28404;
  double t28408;
  double t28410;
  double t28184;
  double t28185;
  double t28433;
  double t28434;
  double t28435;
  double t28450;
  double t28451;
  double t27744;
  double t27747;
  double t27748;
  double t28443;
  double t28444;
  double t28445;
  double t28446;
  double t28441;
  double t28449;
  double t28452;
  double t28474;
  double t28475;
  double t28476;
  double t28465;
  double t28466;
  double t28467;
  double t28470;
  double t28471;
  double t28472;
  double t28481;
  double t28482;
  double t28483;
  double t28477;
  double t28480;
  double t28485;
  double t28491;
  double t28492;
  double t28493;
  double t28495;
  double t28496;
  double t28497;
  double t28499;
  double t28500;
  double t28501;
  double t28318;
  double t28319;
  double t28320;
  double t28322;
  double t28323;
  double t28324;
  double t28453;
  double t28218;
  double t28219;
  double t28521;
  double t28522;
  double t28529;
  double t28527;
  double t28519;
  double t28523;
  double t28553;
  double t28556;
  double t28558;
  double t28506;
  double t28507;
  double t28508;
  double t28370;
  double t28371;
  double t28581;
  double t28600;
  double t28604;
  double t28623;
  double t28624;
  double t28625;
  double t28637;
  double t28638;
  double t28639;
  double t28647;
  double t28648;
  double t28649;
  double t28653;
  double t28654;
  double t28655;
  double t28657;
  double t28658;
  double t28659;
  double t28634;
  double t28635;
  double t28640;
  double t28673;
  double t28674;
  double t28675;
  double t28669;
  double t28670;
  double t28671;
  double t28676;
  double t28679;
  double t28686;
  double t28687;
  double t28688;
  double t28690;
  double t28691;
  double t28692;
  double t28385;
  double t28386;
  double t28534;
  double t28535;
  double t28541;
  double t28542;
  double t28705;
  double t28710;
  double t28715;
  double t28711;
  double t28713;
  double t28706;
  double t28733;
  double t28736;
  double t28646;
  double t28650;
  double t28651;
  double t28740;
  double t27684;
  double t27686;
  double t27687;
  double t28769;
  double t28771;
  double t28787;
  double t28790;
  double t28793;
  t27581 = Cos(var1[10]);
  t27539 = Cos(var1[11]);
  t27543 = Sin(var1[10]);
  t27589 = Sin(var1[11]);
  t27574 = t27539*t27543;
  t27599 = -1.*t27581*t27589;
  t27601 = t27574 + t27599;
  t27458 = Cos(var1[5]);
  t27606 = t27581*t27539;
  t27610 = t27543*t27589;
  t27612 = t27606 + t27610;
  t27538 = Sin(var1[9]);
  t27614 = Sin(var1[5]);
  t27618 = Cos(var1[3]);
  t27602 = -1.*t27458*t27538*t27601;
  t27615 = t27612*t27614;
  t27616 = t27602 + t27615;
  t22709 = Sin(var1[3]);
  t27667 = Cos(var1[9]);
  t27671 = Cos(var1[4]);
  t27672 = t27667*t27671*t27601;
  t27673 = Sin(var1[4]);
  t27675 = t27458*t27612;
  t27676 = t27538*t27601*t27614;
  t27677 = t27675 + t27676;
  t27678 = -1.*t27673*t27677;
  t27679 = t27672 + t27678;
  t27692 = t27671*t27538;
  t27696 = t27667*t27673*t27614;
  t27697 = t27692 + t27696;
  t27716 = -1.*t27539*t27543;
  t27717 = t27581*t27589;
  t27718 = t27716 + t27717;
  t27714 = -1.*t27458*t27538*t27612;
  t27719 = t27718*t27614;
  t27721 = t27714 + t27719;
  t27723 = t27667*t27671*t27612;
  t27725 = t27458*t27718;
  t27726 = t27538*t27612*t27614;
  t27727 = t27725 + t27726;
  t27728 = -1.*t27673*t27727;
  t27730 = t27723 + t27728;
  t27753 = -1.*t27667*t27601*t27673;
  t27754 = -1.*t27671*t27677;
  t27755 = t27753 + t27754;
  t27772 = -0.0641*t27539;
  t27776 = -0.28*t27589;
  t27777 = t27772 + t27776;
  t27780 = -1.*t27539;
  t27781 = 1. + t27780;
  t27784 = -0.575*t27781;
  t27785 = -0.295*t27539;
  t27786 = -0.0641*t27589;
  t27787 = t27784 + t27785 + t27786;
  t27771 = 0.325*t27543;
  t27779 = t27581*t27777;
  t27788 = t27543*t27787;
  t27789 = t27771 + t27779 + t27788;
  t27769 = 0.068*t27538;
  t27793 = t27667*t27789;
  t27797 = t27769 + t27793;
  t27805 = -1.*t27581;
  t27809 = 1. + t27805;
  t27810 = -0.325*t27809;
  t27811 = -1.*t27543*t27777;
  t27812 = t27581*t27787;
  t27816 = t27810 + t27811 + t27812;
  t27817 = t27458*t27816;
  t27818 = -1.*t27667;
  t27819 = 1. + t27818;
  t27820 = 0.1575*t27819;
  t27821 = 0.2255*t27667;
  t27822 = -1.*t27538*t27789;
  t27823 = t27820 + t27821 + t27822;
  t27824 = -1.*t27823*t27614;
  t27825 = t27817 + t27824;
  t27846 = t27671*t27797;
  t27847 = -1.*t27673*t27825;
  t27848 = t27846 + t27847;
  t27840 = t27538*t27673;
  t27844 = -1.*t27667*t27671*t27614;
  t27845 = t27840 + t27844;
  t27834 = t27797*t27673;
  t27835 = t27671*t27825;
  t27837 = t27834 + t27835;
  t27766 = t27667*t27612*t27673;
  t27767 = t27671*t27727;
  t27768 = t27766 + t27767;
  t27801 = -1.*t27797*t27673;
  t27827 = -1.*t27671*t27825;
  t27829 = t27801 + t27827;
  t27856 = t27458*t27823;
  t27858 = t27816*t27614;
  t27860 = t27856 + t27858;
  t27850 = -1.*t27538*t27673;
  t27851 = t27667*t27671*t27614;
  t27852 = t27850 + t27851;
  t27891 = t27667*t27601*t27673;
  t27892 = t27671*t27677;
  t27894 = t27891 + t27892;
  t27868 = -1.*t27667*t27612*t27673;
  t27869 = -1.*t27671*t27727;
  t27870 = t27868 + t27869;
  t27959 = t27458*t27538*t27601;
  t27961 = -1.*t27612*t27614;
  t27966 = t27959 + t27961;
  t27861 = -1.*t27667*t27458*t27860;
  t27877 = t27860*t27721;
  t27988 = -1.*t27458*t27823;
  t27992 = -1.*t27816*t27614;
  t27997 = t27988 + t27992;
  t28003 = t27667*t27614*t27860;
  t28017 = t27458*t27538*t27612;
  t28021 = -1.*t27718*t27614;
  t28022 = t28017 + t28021;
  t27862 = -1.*t27845*t27837;
  t27863 = -1.*t27697*t27848;
  t27866 = t27861 + t27862 + t27863;
  t28024 = t27825*t27721;
  t28029 = t27860*t27727;
  t27878 = t27837*t27768;
  t27879 = t27848*t27730;
  t27880 = t27877 + t27878 + t27879;
  t27903 = t27860*t27616;
  t27916 = -1.*t27860*t27721;
  t28073 = t27860*t27677;
  t28076 = t27825*t27616;
  t27906 = t27837*t27894;
  t27907 = t27848*t27679;
  t27908 = t27903 + t27906 + t27907;
  t28089 = -1.*t27825*t27721;
  t28091 = -1.*t27860*t27727;
  t27917 = -1.*t27837*t27768;
  t27918 = -1.*t27848*t27730;
  t27919 = t27916 + t27917 + t27918;
  t27937 = t27667*t27458*t27860;
  t27948 = -1.*t27860*t27616;
  t28130 = -1.*t27667*t27614*t27860;
  t27938 = t27845*t27837;
  t27939 = t27697*t27848;
  t27940 = t27937 + t27938 + t27939;
  t28134 = -1.*t27860*t27677;
  t28136 = -1.*t27825*t27616;
  t27949 = -1.*t27837*t27894;
  t27950 = -1.*t27848*t27679;
  t27951 = t27948 + t27949 + t27950;
  t27981 = -1.*t27538*t27797;
  t28187 = -0.068*t27538;
  t28191 = -1.*t27667*t27789;
  t28196 = t28187 + t28191;
  t28200 = 0.068*t27667;
  t28201 = t28200 + t27822;
  t28007 = t27667*t27797*t27612;
  t28235 = -1.*t27671*t27538*t27601;
  t28236 = -1.*t27667*t27601*t27673*t27614;
  t28237 = t28235 + t28236;
  t27982 = t27667*t27614*t27825;
  t27983 = t27981 + t27982 + t27861;
  t28199 = -1.*t27667*t27797;
  t28202 = -1.*t27538*t28201;
  t28213 = -1.*t27538*t27797*t27612;
  t28214 = t27667*t28201*t27612;
  t28008 = t27825*t27727;
  t28009 = t28007 + t27877 + t28008;
  t28246 = Power(t27458,2);
  t28247 = -1.*t27667*t28246*t28196;
  t28251 = t27458*t27538*t27860;
  t28257 = -1.*t27667*t27458*t27612*t27860;
  t28258 = t27458*t28196*t27721;
  t28266 = -1.*t27538*t27612*t27673;
  t28267 = t27667*t27671*t27612*t27614;
  t28268 = t28266 + t28267;
  t28270 = t28201*t27673;
  t28271 = -1.*t27671*t28196*t27614;
  t28272 = t28270 + t28271;
  t28274 = t27671*t28201;
  t28275 = t28196*t27673*t27614;
  t28276 = t28274 + t28275;
  t28278 = t27667*t27673;
  t28279 = t27671*t27538*t27614;
  t28280 = t28278 + t28279;
  t28084 = -1.*t27667*t27797*t27612;
  t28080 = t27667*t27797*t27601;
  t28282 = t27667*t27671;
  t28283 = -1.*t27538*t27673*t27614;
  t28284 = t28282 + t28283;
  t28304 = -1.*t27538*t27797*t27601;
  t28305 = t27667*t28201*t27601;
  t28081 = t27825*t27677;
  t28082 = t28080 + t28081 + t27903;
  t28313 = t27538*t27797*t27612;
  t28314 = -1.*t27667*t28201*t27612;
  t28085 = -1.*t27825*t27727;
  t28086 = t28084 + t27916 + t28085;
  t28338 = -1.*t27667*t27458*t27601*t27860;
  t28340 = t27458*t28196*t27616;
  t28226 = -1.*t27538*t27601*t27673;
  t28227 = t27667*t27671*t27601*t27614;
  t28228 = t28226 + t28227;
  t28345 = t27667*t27458*t27612*t27860;
  t28346 = -1.*t27458*t28196*t27721;
  t28291 = -1.*t27671*t27538*t27612;
  t28292 = -1.*t27667*t27612*t27673*t27614;
  t28293 = t28291 + t28292;
  t28125 = t27538*t27797;
  t28139 = -1.*t27667*t27797*t27601;
  t28126 = -1.*t27667*t27614*t27825;
  t28127 = t28125 + t28126 + t27937;
  t28374 = t27667*t27797;
  t28375 = t27538*t28201;
  t28248 = Power(t27614,2);
  t28380 = t27538*t27797*t27601;
  t28381 = -1.*t27667*t28201*t27601;
  t28140 = -1.*t27825*t27677;
  t28141 = t28139 + t28140 + t27948;
  t28401 = t27667*t28246*t28196;
  t28404 = -1.*t27458*t27538*t27860;
  t28408 = t27667*t27458*t27601*t27860;
  t28410 = -1.*t27458*t28196*t27616;
  t28184 = -1.*t27667*t27823;
  t28185 = t27981 + t28184;
  t28433 = -1.*t27581*t27539;
  t28434 = -1.*t27543*t27589;
  t28435 = t28433 + t28434;
  t28450 = 0.325*t27581;
  t28451 = t28450 + t27811 + t27812;
  t27744 = t27618*t27721;
  t27747 = -1.*t22709*t27730;
  t27748 = t27744 + t27747;
  t28443 = -0.325*t27543;
  t28444 = -1.*t27581*t27777;
  t28445 = -1.*t27543*t27787;
  t28446 = t28443 + t28444 + t28445;
  t28441 = t27667*t27797*t27718;
  t28449 = Power(t27667,2);
  t28452 = t28449*t28451*t27612;
  t28474 = -1.*t27458*t27538*t28451;
  t28475 = t28446*t27614;
  t28476 = t28474 + t28475;
  t28465 = -1.*t27458*t27538*t27718;
  t28466 = t28435*t27614;
  t28467 = t28465 + t28466;
  t28470 = t27458*t28446;
  t28471 = t27538*t28451*t27614;
  t28472 = t28470 + t28471;
  t28481 = t27458*t28435;
  t28482 = t27538*t27718*t27614;
  t28483 = t28481 + t28482;
  t28477 = -1.*t27667*t27458*t28476;
  t28480 = t28476*t27721;
  t28485 = t27860*t28467;
  t28491 = t27667*t27718*t27673;
  t28492 = t27671*t28483;
  t28493 = t28491 + t28492;
  t28495 = t27667*t28451*t27673;
  t28496 = t27671*t28472;
  t28497 = t28495 + t28496;
  t28499 = t27667*t27671*t28451;
  t28500 = -1.*t27673*t28472;
  t28501 = t28499 + t28500;
  t28318 = -1.*t27816*t27718;
  t28319 = t27538*t27823*t27612;
  t28320 = t28318 + t28084 + t28319;
  t28322 = -1.*t27538*t27823*t27601;
  t28323 = t27816*t27612;
  t28324 = t28080 + t28322 + t28323;
  t28453 = Power(t27538,2);
  t28218 = t27816*t27718;
  t28219 = -1.*t27538*t27823*t27612;
  t28521 = -1.*t28446*t27718;
  t28522 = -1.*t27816*t28435;
  t28529 = t28446*t27612;
  t28527 = t28449*t28451*t27601;
  t28519 = -1.*t27667*t27797*t27718;
  t28523 = -1.*t28449*t28451*t27612;
  t28553 = t28476*t27616;
  t28556 = -1.*t28476*t27721;
  t28558 = -1.*t27860*t28467;
  t28506 = t27667*t27671*t27718;
  t28507 = -1.*t27673*t28483;
  t28508 = t28506 + t28507;
  t28370 = t27667*t27823;
  t28371 = t28125 + t28370;
  t28581 = -1.*t28449*t28451*t27601;
  t28600 = t27667*t27458*t28476;
  t28604 = -1.*t28476*t27616;
  t28623 = -0.28*t27539;
  t28624 = 0.0641*t27589;
  t28625 = t28623 + t28624;
  t28637 = t27543*t27777;
  t28638 = t27581*t28625;
  t28639 = t28637 + t28638;
  t28647 = t27458*t27601;
  t28648 = t27538*t28435*t27614;
  t28649 = t28647 + t28648;
  t28653 = -1.*t27458*t27538*t28435;
  t28654 = t27601*t27614;
  t28655 = t28653 + t28654;
  t28657 = t27667*t27671*t28435;
  t28658 = -1.*t27673*t28649;
  t28659 = t28657 + t28658;
  t28634 = -1.*t27543*t28625;
  t28635 = t27779 + t28634;
  t28640 = t28449*t28639*t27612;
  t28673 = -1.*t27458*t27538*t28639;
  t28674 = t28635*t27614;
  t28675 = t28673 + t28674;
  t28669 = t27458*t28635;
  t28670 = t27538*t28639*t27614;
  t28671 = t28669 + t28670;
  t28676 = -1.*t27667*t27458*t28675;
  t28679 = t28675*t27721;
  t28686 = t27667*t28639*t27673;
  t28687 = t27671*t28671;
  t28688 = t28686 + t28687;
  t28690 = t27667*t27671*t28639;
  t28691 = -1.*t27673*t28671;
  t28692 = t28690 + t28691;
  t28385 = t27538*t27823*t27601;
  t28386 = -1.*t27816*t27612;
  t28534 = t27789*t27601;
  t28535 = t28534 + t28323;
  t28541 = -1.*t27789*t27612;
  t28542 = t28318 + t28541;
  t28705 = -1.*t28635*t27718;
  t28710 = t27816*t27601;
  t28715 = t28635*t27612;
  t28711 = t28449*t28639*t27601;
  t28713 = t27667*t27797*t28435;
  t28706 = -1.*t28449*t28639*t27612;
  t28733 = t27860*t28655;
  t28736 = t28675*t27616;
  t28646 = t27667*t28435*t27673;
  t28650 = t27671*t28649;
  t28651 = t28646 + t28650;
  t28740 = -1.*t28675*t27721;
  t27684 = t27618*t27616;
  t27686 = -1.*t22709*t27679;
  t27687 = t27684 + t27686;
  t28769 = -1.*t28449*t28639*t27601;
  t28771 = -1.*t27667*t27797*t28435;
  t28787 = t27667*t27458*t28675;
  t28790 = -1.*t27860*t28655;
  t28793 = -1.*t28675*t27616;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t22709*t27616 - 1.*t27618*t27679)*var2[1] + t27687*var2[2];
  p_output1[10]=(-1.*t22709*t27458*t27667 - 1.*t27618*t27697)*var2[1] + (t27458*t27618*t27667 - 1.*t22709*t27697)*var2[2];
  p_output1[11]=(-1.*t22709*t27721 - 1.*t27618*t27730)*var2[1] + t27748*var2[2];
  p_output1[12]=t27679*var2[0] - 1.*t22709*t27755*var2[1] + t27618*t27755*var2[2] + (t27768*(-1.*t27697*t27829 - 1.*t27697*t27837 - 1.*t27845*t27848 - 1.*t27848*t27852) + t27730*t27866 + t27845*(t27730*t27829 + t27730*t27837 + t27768*t27848 + t27848*t27870) + t27697*t27880)*var2[3];
  p_output1[13]=t27697*var2[0] - 1.*t22709*t27852*var2[1] + t27618*t27852*var2[2] + ((-1.*t27730*t27829 - 1.*t27730*t27837 - 1.*t27768*t27848 - 1.*t27848*t27870)*t27894 + t27768*(t27679*t27829 + t27679*t27837 + t27755*t27848 + t27848*t27894) + t27730*t27908 + t27679*t27919)*var2[3];
  p_output1[14]=t27730*var2[0] - 1.*t22709*t27870*var2[1] + t27618*t27870*var2[2] + ((t27697*t27829 + t27697*t27837 + t27845*t27848 + t27848*t27852)*t27894 + t27845*(-1.*t27679*t27829 - 1.*t27679*t27837 - 1.*t27755*t27848 - 1.*t27848*t27894) + t27679*t27940 + t27697*t27951)*var2[3];
  p_output1[15]=t27671*t27966*var2[0] + (t27618*t27677 + t22709*t27673*t27966)*var2[1] + (t22709*t27677 - 1.*t27618*t27673*t27966)*var2[2] + (-1.*t27458*t27667*t27671*t27880 + t27768*(-1.*t27458*t27667*t27825 + t27458*t27667*t27671*t27837 - 1.*t27458*t27667*t27673*t27848 + t27673*t27697*t27997 - 1.*t27671*t27845*t27997 + t28003) + t27671*t27866*t28022 + t27845*(-1.*t27673*t27730*t27997 + t27671*t27768*t27997 + t27671*t27837*t28022 - 1.*t27673*t27848*t28022 + t28024 + t28029))*var2[3] + (t27727*t27983 + t27721*(t27614*t27667*t27997 + t28003) - 1.*t27614*t27667*t28009 + t27458*t27667*(t27727*t27997 + t27825*t28022 + t28024 + t28029))*var2[4];
  p_output1[16]=-1.*t27458*t27667*t27671*var2[0] + (-1.*t27614*t27618*t27667 - 1.*t22709*t27458*t27667*t27673)*var2[1] + (-1.*t22709*t27614*t27667 + t27458*t27618*t27667*t27673)*var2[2] + (t27671*t27919*t27966 + t27671*t27908*t28022 + t27768*(t27671*t27837*t27966 - 1.*t27673*t27848*t27966 - 1.*t27673*t27679*t27997 + t27671*t27894*t27997 + t28073 + t28076) + t27894*(t27673*t27730*t27997 - 1.*t27671*t27768*t27997 - 1.*t27671*t27837*t28022 + t27673*t27848*t28022 + t28089 + t28091))*var2[3] + (t27721*(t27825*t27966 + t27677*t27997 + t28073 + t28076) + t27727*t28082 + t27677*t28086 + t27616*(-1.*t27727*t27997 - 1.*t27825*t28022 + t28089 + t28091))*var2[4];
  p_output1[17]=t27671*t28022*var2[0] + (t27618*t27727 + t22709*t27673*t28022)*var2[1] + (t22709*t27727 - 1.*t27618*t27673*t28022)*var2[2] + (-1.*t27458*t27667*t27671*t27951 + t27671*t27940*t27966 + t27894*(t27458*t27667*t27825 - 1.*t27458*t27667*t27671*t27837 + t27458*t27667*t27673*t27848 - 1.*t27673*t27697*t27997 + t27671*t27845*t27997 + t28130) + t27845*(-1.*t27671*t27837*t27966 + t27673*t27848*t27966 + t27673*t27679*t27997 - 1.*t27671*t27894*t27997 + t28134 + t28136))*var2[3] + (t27677*t28127 + t27616*(-1.*t27614*t27667*t27997 + t28130) + t27458*t27667*(-1.*t27825*t27966 - 1.*t27677*t27997 + t28134 + t28136) - 1.*t27614*t27667*t28141)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t28228*var2[0] + (-1.*t27458*t27601*t27618*t27667 - 1.*t22709*t28237)*var2[1] + (-1.*t22709*t27458*t27601*t27667 + t27618*t28237)*var2[2] + (t27866*t28268 + t27880*t28280 + t27768*(t28247 + t28251 - 1.*t27845*t28272 - 1.*t27697*t28276 - 1.*t27837*t28280 - 1.*t27848*t28284) + t27845*(t28257 + t28258 + t27837*t28268 + t27768*t28272 + t27730*t28276 + t27848*t28293))*var2[3] + (-1.*t27458*t27612*t27667*t27983 - 1.*t27458*t27538*t28009 + t27721*(-1.*t27538*t27614*t27825 + t28199 + t28202 + t28247 - 1.*t27667*t28196*t28248 + t28251) + t27458*t27667*(t27612*t27614*t27667*t27825 - 1.*t27614*t27727*t28196 + t28213 + t28214 + t28257 + t28258))*var2[4] + (-1.*t27538*t27612*t28185 + t27612*t27667*(t27538*t27823 - 1.*t27667*t28196 + t28199 + t28202) + t27538*(-1.*t27612*t27667*t27823 - 1.*t27538*t27612*t28196 + t28213 + t28214) + t27667*(t28007 + t28218 + t28219))*var2[5];
  p_output1[28]=t28280*var2[0] + (-1.*t27458*t27538*t27618 - 1.*t22709*t28284)*var2[1] + (-1.*t22709*t27458*t27538 + t27618*t28284)*var2[2] + (t27919*t28228 + t27908*t28268 + t27768*(t27837*t28228 + t27848*t28237 + t27894*t28272 + t27679*t28276 + t28338 + t28340) + t27894*(-1.*t27837*t28268 - 1.*t27768*t28272 - 1.*t27730*t28276 - 1.*t27848*t28293 + t28345 + t28346))*var2[3] + (-1.*t27458*t27612*t27667*t28082 - 1.*t27458*t27601*t27667*t28086 + t27721*(t27601*t27614*t27667*t27825 - 1.*t27614*t27677*t28196 + t28304 + t28305 + t28338 + t28340) + t27616*(-1.*t27612*t27614*t27667*t27825 + t27614*t27727*t28196 + t28313 + t28314 + t28345 + t28346))*var2[4] + (t27612*t27667*(-1.*t27601*t27667*t27823 - 1.*t27538*t27601*t28196 + t28304 + t28305) + t27601*t27667*(t27612*t27667*t27823 + t27538*t27612*t28196 + t28313 + t28314) - 1.*t27538*t27601*t28320 - 1.*t27538*t27612*t28324)*var2[5];
  p_output1[29]=t28268*var2[0] + (-1.*t27458*t27612*t27618*t27667 - 1.*t22709*t28293)*var2[1] + (-1.*t22709*t27458*t27612*t27667 + t27618*t28293)*var2[2] + (t27940*t28228 + t27951*t28280 + t27894*(t27845*t28272 + t27697*t28276 + t27837*t28280 + t27848*t28284 + t28401 + t28404) + t27845*(-1.*t27837*t28228 - 1.*t27848*t28237 - 1.*t27894*t28272 - 1.*t27679*t28276 + t28408 + t28410))*var2[3] + (-1.*t27458*t27601*t27667*t28127 - 1.*t27458*t27538*t28141 + t27616*(t27538*t27614*t27825 + t27667*t28196*t28248 + t28374 + t28375 + t28401 + t28404) + t27458*t27667*(-1.*t27601*t27614*t27667*t27825 + t27614*t27677*t28196 + t28380 + t28381 + t28408 + t28410))*var2[4] + (-1.*t27538*t27601*t28371 + t27601*t27667*(-1.*t27538*t27823 + t27667*t28196 + t28374 + t28375) + t27538*(t27601*t27667*t27823 + t27538*t27601*t28196 + t28380 + t28381) + t27667*(t28139 + t28385 + t28386))*var2[5];
  p_output1[30]=t27768*var2[0] + t27748*var2[1] + (t22709*t27721 + t27618*t27730)*var2[2] + (t27866*t28493 + t27768*(t28477 - 1.*t27845*t28497 - 1.*t27697*t28501) + t27845*(t28480 + t28485 + t27837*t28493 + t27768*t28497 + t27730*t28501 + t27848*t28508))*var2[3] + (t27983*t28467 + t27721*(-1.*t27538*t27667*t28451 + t27614*t27667*t28472 + t28477) + t27458*t27667*(t28441 + t28452 + t27727*t28472 + t28480 + t27825*t28483 + t28485))*var2[4] + (t27667*t27718*t28185 + t27538*(-1.*t27538*t27718*t27823 + t27816*t28435 + t28441 + t27718*t28446 + t28452 + t27612*t28451*t28453))*var2[5] + (-0.1575*t27612 - 0.2255*t28435)*var2[9];
  p_output1[31]=(t27768*t27919 + t27908*t28493 + t27768*(t27877 + t27878 + t27879 + t27894*t28497 + t27679*t28501 + t28553) + t27894*(-1.*t27837*t28493 - 1.*t27768*t28497 - 1.*t27730*t28501 - 1.*t27848*t28508 + t28556 + t28558))*var2[3] + (t27721*t28086 + t28082*t28467 + t27721*(t27877 + t28007 + t28008 + t27677*t28472 + t28527 + t28553) + t27616*(-1.*t27727*t28472 - 1.*t27825*t28483 + t28519 + t28523 + t28556 + t28558))*var2[4] + (t27612*t27667*t28320 + t27667*t27718*t28324 + t27601*t27667*(t27538*t27718*t27823 - 1.*t27612*t28451*t28453 + t28519 + t28521 + t28522 + t28523) + t27612*t27667*(t28007 + t28218 + t28219 + t27601*t28451*t28453 + t28527 + t28529))*var2[5] + (t27612*(-1.*t27718*t27789 - 1.*t27612*t28451 + t28521 + t28522) + t27718*(t27612*t27789 + t28218 + t27601*t28451 + t28529) + t28435*t28535 + t27718*t28542)*var2[9];
  p_output1[32]=t28493*var2[0] + (t27618*t28467 - 1.*t22709*t28508)*var2[1] + (t22709*t28467 + t27618*t28508)*var2[2] + (t27768*t27940 + t27894*(t27845*t28497 + t27697*t28501 + t28600) + t27845*(t27916 + t27917 + t27918 - 1.*t27894*t28497 - 1.*t27679*t28501 + t28604))*var2[3] + (t27721*t28127 + t27616*(t27538*t27667*t28451 - 1.*t27614*t27667*t28472 + t28600) + t27458*t27667*(t27916 + t28084 + t28085 - 1.*t27677*t28472 + t28581 + t28604))*var2[4] + (t27612*t27667*t28371 + t27538*(t28084 + t28318 + t28319 - 1.*t27612*t28446 - 1.*t27601*t28451*t28453 + t28581))*var2[5] + 0.068*t27718*var2[9];
  p_output1[33]=t28651*var2[0] + (t27618*t28655 - 1.*t22709*t28659)*var2[1] + (t22709*t28655 + t27618*t28659)*var2[2] + (t27866*t27894 + t27768*(t28676 - 1.*t27845*t28688 - 1.*t27697*t28692) + t27845*(t27903 + t27906 + t27907 + t28679 + t27768*t28688 + t27730*t28692))*var2[3] + (t27616*t27983 + t27721*(-1.*t27538*t27667*t28639 + t27614*t27667*t28671 + t28676) + t27458*t27667*(t27903 + t28080 + t28081 + t28640 + t27727*t28671 + t28679))*var2[4] + (t27601*t27667*t28185 + t27538*(t28080 + t28322 + t28323 + t27718*t28635 + t27612*t28453*t28639 + t28640))*var2[5] + (-0.2255*t27612 - 0.1575*t28435)*var2[9] + (-0.325*t27539 - 1.*t27539*t27787 - 1.*t27539*t28625)*var2[10];
  p_output1[34]=(t27894*t27908 + t27919*t28651 + t27768*(t27837*t28651 + t27848*t28659 + t27894*t28688 + t27679*t28692 + t28733 + t28736) + t27894*(t27948 + t27949 + t27950 - 1.*t27768*t28688 - 1.*t27730*t28692 + t28740))*var2[3] + (t27616*t28082 + t28086*t28655 + t27721*(t27825*t28649 + t27677*t28671 + t28711 + t28713 + t28733 + t28736) + t27616*(t27948 + t28139 + t28140 - 1.*t27727*t28671 + t28706 + t28740))*var2[4] + (t27601*t27667*t28324 + t27667*t28320*t28435 + t27601*t27667*(t28139 + t28385 + t28386 - 1.*t27612*t28453*t28639 + t28705 + t28706) + t27612*t27667*(-1.*t27538*t27823*t28435 + t27601*t28453*t28639 + t28710 + t28711 + t28713 + t28715))*var2[5] + (t27612*t28535 + t27601*t28542 + t27612*(-1.*t27601*t27789 + t28386 - 1.*t27612*t28639 + t28705) + t27718*(t27789*t28435 + t27601*t28639 + t28710 + t28715))*var2[9];
  p_output1[35]=t27894*var2[0] + t27687*var2[1] + (t22709*t27616 + t27618*t27679)*var2[2] + (t27940*t28651 + t27894*(t27845*t28688 + t27697*t28692 + t28787) + t27845*(-1.*t27837*t28651 - 1.*t27848*t28659 - 1.*t27894*t28688 - 1.*t27679*t28692 + t28790 + t28793))*var2[3] + (t28127*t28655 + t27616*(t27538*t27667*t28639 - 1.*t27614*t27667*t28671 + t28787) + t27458*t27667*(-1.*t27825*t28649 - 1.*t27677*t28671 + t28769 + t28771 + t28790 + t28793))*var2[4] + (t27667*t28371*t28435 + t27538*(-1.*t27601*t27816 + t27538*t27823*t28435 - 1.*t27612*t28635 - 1.*t27601*t28453*t28639 + t28769 + t28771))*var2[5] + 0.068*t27601*var2[9] + (-0.325*t27589 - 1.*t27589*t27787 - 1.*t27589*t28625)*var2[10];
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

#include "dJh_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void dJh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
