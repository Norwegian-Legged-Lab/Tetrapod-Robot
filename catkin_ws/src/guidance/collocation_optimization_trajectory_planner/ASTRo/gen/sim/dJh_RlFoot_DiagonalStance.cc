/*
 * Automatically Generated from Mathematica.
 * Wed 8 Jun 2022 19:37:13 GMT+02:00
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
  double t3913;
  double t3933;
  double t3934;
  double t3935;
  double t3939;
  double t3941;
  double t3954;
  double t4006;
  double t2714;
  double t3831;
  double t4008;
  double t4082;
  double t4001;
  double t4045;
  double t4070;
  double t2131;
  double t4133;
  double t4137;
  double t4143;
  double t4195;
  double t4317;
  double t4339;
  double t4340;
  double t4348;
  double t4350;
  double t4383;
  double t4384;
  double t4487;
  double t4492;
  double t4495;
  double t4498;
  double t4502;
  double t4504;
  double t4598;
  double t4606;
  double t4611;
  double t4618;
  double t4622;
  double t4623;
  double t4625;
  double t4639;
  double t4643;
  double t4644;
  double t4645;
  double t4665;
  double t4693;
  double t4708;
  double t4710;
  double t4741;
  double t4743;
  double t4776;
  double t4777;
  double t4778;
  double t4835;
  double t4837;
  double t4839;
  double t4840;
  double t4841;
  double t4845;
  double t4846;
  double t4847;
  double t4737;
  double t4779;
  double t4784;
  double t4833;
  double t4838;
  double t4850;
  double t4851;
  double t4853;
  double t4855;
  double t4856;
  double t4857;
  double t4858;
  double t4864;
  double t4865;
  double t4866;
  double t4874;
  double t4875;
  double t4876;
  double t4834;
  double t4868;
  double t4869;
  double t4970;
  double t5125;
  double t5126;
  double t4724;
  double t4727;
  double t4729;
  double t4892;
  double t4899;
  double t4921;
  double t5262;
  double t5263;
  double t5265;
  double t5302;
  double t5304;
  double t5306;
  double t5426;
  double t5432;
  double t5441;
  double t4927;
  double t6228;
  double t7971;
  double t7982;
  double t5270;
  double t8625;
  double t8629;
  double t8644;
  double t4964;
  double t5127;
  double t5240;
  double t8189;
  double t8413;
  double t8223;
  double t8225;
  double t8369;
  double t8437;
  double t8685;
  double t5271;
  double t5272;
  double t5273;
  double t5320;
  double t5369;
  double t9196;
  double t9211;
  double t9260;
  double t9269;
  double t5321;
  double t5322;
  double t5325;
  double t5373;
  double t5377;
  double t5378;
  double t5396;
  double t5410;
  double t5397;
  double t5398;
  double t5400;
  double t8968;
  double t8970;
  double t9892;
  double t9946;
  double t9965;
  double t9973;
  double t5411;
  double t5412;
  double t5413;
  double t5446;
  double t5473;
  double t5478;
  double t5505;
  double t5691;
  double t5763;
  double t5766;
  double t5768;
  double t5772;
  double t5813;
  double t5818;
  double t5825;
  double t10171;
  double t10175;
  double t10177;
  double t10161;
  double t8372;
  double t10234;
  double t10246;
  double t10247;
  double t10250;
  double t10251;
  double t10290;
  double t8681;
  double t8815;
  double t8816;
  double t8823;
  double t8825;
  double t8962;
  double t10329;
  double t8988;
  double t8995;
  double t10340;
  double t9022;
  double t9030;
  double t9036;
  double t9141;
  double t9146;
  double t9147;
  double t9154;
  double t9178;
  double t9184;
  double t9188;
  double t9189;
  double t9194;
  double t9210;
  double t9236;
  double t9244;
  double t9245;
  double t9251;
  double t9262;
  double t9285;
  double t9290;
  double t9291;
  double t9293;
  double t10438;
  double t9306;
  double t9314;
  double t10464;
  double t9455;
  double t9473;
  double t9497;
  double t9606;
  double t9693;
  double t9698;
  double t9701;
  double t9712;
  double t9715;
  double t9716;
  double t9722;
  double t9725;
  double t9751;
  double t9760;
  double t9763;
  double t9764;
  double t9934;
  double t9970;
  double t9985;
  double t9986;
  double t9988;
  double t9990;
  double t10070;
  double t10516;
  double t10083;
  double t10085;
  double t10539;
  double t10103;
  double t10108;
  double t10116;
  double t10562;
  double t10563;
  double t10564;
  double t10581;
  double t10582;
  double t10583;
  double t10594;
  double t10595;
  double t10600;
  double t10608;
  double t10613;
  double t10618;
  double t10633;
  double t10635;
  double t10636;
  double t10637;
  double t10641;
  double t10646;
  double t10647;
  double t10649;
  double t10652;
  double t10655;
  double t10648;
  double t10679;
  double t10680;
  double t10684;
  double t10769;
  double t10770;
  double t10772;
  double t10774;
  double t10775;
  double t10776;
  double t10841;
  double t10879;
  double t10978;
  double t10982;
  double t10969;
  double t11380;
  double t11389;
  double t10580;
  double t10587;
  double t10589;
  double t11401;
  double t4445;
  double t4446;
  double t4454;
  double t11516;
  double t11535;
  double t11537;
  double t10566;
  double t10567;
  double t10568;
  double t10569;
  double t10570;
  double t10571;
  double t10573;
  double t4677;
  double t4678;
  double t4688;
  double t11586;
  double t11587;
  double t11588;
  double t11589;
  double t11590;
  double t11592;
  double t11593;
  double t11594;
  double t11600;
  double t11602;
  double t11603;
  double t11591;
  double t11607;
  double t11608;
  double t11609;
  double t11617;
  double t11619;
  double t11620;
  double t11611;
  double t11614;
  double t11627;
  double t11631;
  double t11633;
  double t11637;
  double t11641;
  double t11642;
  double t11647;
  double t11648;
  double t11649;
  double t10808;
  double t10819;
  double t10963;
  double t10964;
  double t11227;
  double t11232;
  double t11238;
  double t11686;
  double t11340;
  double t11353;
  double t11368;
  double t11697;
  double t11703;
  double t11792;
  double t11799;
  double t11802;
  double t11654;
  double t11655;
  double t11656;
  double t11492;
  double t11497;
  double t11501;
  double t11935;
  double t11946;
  t3913 = Cos(var1[10]);
  t3933 = Cos(var1[11]);
  t3934 = -1.*t3913*t3933;
  t3935 = Sin(var1[10]);
  t3939 = Sin(var1[11]);
  t3941 = -1.*t3935*t3939;
  t3954 = t3934 + t3941;
  t4006 = Cos(var1[9]);
  t2714 = Cos(var1[5]);
  t3831 = Sin(var1[9]);
  t4008 = Sin(var1[5]);
  t4082 = Cos(var1[3]);
  t4001 = t2714*t3831*t3954;
  t4045 = t4006*t3954*t4008;
  t4070 = t4001 + t4045;
  t2131 = Sin(var1[3]);
  t4133 = Cos(var1[4]);
  t4137 = -1.*t3933*t3935;
  t4143 = t3913*t3939;
  t4195 = t4137 + t4143;
  t4317 = t4133*t4195;
  t4339 = Sin(var1[4]);
  t4340 = t4006*t2714*t3954;
  t4348 = -1.*t3831*t3954*t4008;
  t4350 = t4340 + t4348;
  t4383 = -1.*t4339*t4350;
  t4384 = t4317 + t4383;
  t4487 = t2714*t3831;
  t4492 = t4006*t4008;
  t4495 = t4487 + t4492;
  t4498 = -1.*t4006*t2714;
  t4502 = t3831*t4008;
  t4504 = t4498 + t4502;
  t4598 = t2714*t3831*t4195;
  t4606 = t4006*t4195*t4008;
  t4611 = t4598 + t4606;
  t4618 = t3913*t3933;
  t4622 = t3935*t3939;
  t4623 = t4618 + t4622;
  t4625 = t4133*t4623;
  t4639 = t4006*t2714*t4195;
  t4643 = -1.*t3831*t4195*t4008;
  t4644 = t4639 + t4643;
  t4645 = -1.*t4339*t4644;
  t4665 = t4625 + t4645;
  t4693 = -1.*t4195*t4339;
  t4708 = -1.*t4133*t4350;
  t4710 = t4693 + t4708;
  t4741 = -1.*t3933;
  t4743 = 1. + t4741;
  t4776 = -0.50321*t4743;
  t4777 = -0.19821*t3933;
  t4778 = t4776 + t4777;
  t4835 = -1.*t4006;
  t4837 = 1. + t4835;
  t4839 = -1.*t3913;
  t4840 = 1. + t4839;
  t4841 = -0.28121*t4840;
  t4845 = t3913*t4778;
  t4846 = 0.305*t3935*t3939;
  t4847 = t4841 + t4845 + t4846;
  t4737 = 0.28121*t3935;
  t4779 = t4778*t3935;
  t4784 = -0.305*t3913*t3939;
  t4833 = t4737 + t4779 + t4784;
  t4838 = -0.15121*t4837;
  t4850 = t4006*t4847;
  t4851 = t4838 + t4850;
  t4853 = t2714*t4851;
  t4855 = 0.15121*t4837;
  t4856 = 0.15121*t4006;
  t4857 = 0.15121*t3831;
  t4858 = t3831*t4847;
  t4864 = t4855 + t4856 + t4857 + t4858;
  t4865 = -1.*t4864*t4008;
  t4866 = t4853 + t4865;
  t4874 = t4833*t4339;
  t4875 = t4133*t4866;
  t4876 = t4874 + t4875;
  t4834 = -1.*t4833*t4339;
  t4868 = -1.*t4133*t4866;
  t4869 = t4834 + t4868;
  t4970 = t4133*t4833;
  t5125 = -1.*t4339*t4866;
  t5126 = t4970 + t5125;
  t4724 = t4623*t4339;
  t4727 = t4133*t4644;
  t4729 = t4724 + t4727;
  t4892 = t2714*t4864;
  t4899 = t4851*t4008;
  t4921 = t4892 + t4899;
  t5262 = -1.*t4623*t4339;
  t5263 = -1.*t4133*t4644;
  t5265 = t5262 + t5263;
  t5302 = t4195*t4339;
  t5304 = t4133*t4350;
  t5306 = t5302 + t5304;
  t5426 = -1.*t2714*t3831*t3954;
  t5432 = -1.*t4006*t3954*t4008;
  t5441 = t5426 + t5432;
  t4927 = -1.*t4504*t4921;
  t6228 = -1.*t2714*t4864;
  t7971 = -1.*t4851*t4008;
  t7982 = t6228 + t7971;
  t5270 = t4611*t4921;
  t8625 = -1.*t2714*t3831*t4195;
  t8629 = -1.*t4006*t4195*t4008;
  t8644 = t8625 + t8629;
  t4964 = -1.*t4133*t4495*t4876;
  t5127 = t4339*t4495*t5126;
  t5240 = t4927 + t4964 + t5127;
  t8189 = -1.*t4495*t4921;
  t8413 = -1.*t4504*t4866;
  t8223 = t4006*t2714;
  t8225 = -1.*t3831*t4008;
  t8369 = t8223 + t8225;
  t8437 = t4644*t4921;
  t8685 = t4611*t4866;
  t5271 = t4729*t4876;
  t5272 = t4665*t5126;
  t5273 = t5270 + t5271 + t5272;
  t5320 = -1.*t4611*t4921;
  t5369 = t4070*t4921;
  t9196 = -1.*t4644*t4921;
  t9211 = -1.*t4611*t4866;
  t9260 = t4350*t4921;
  t9269 = t4070*t4866;
  t5321 = -1.*t4729*t4876;
  t5322 = -1.*t4665*t5126;
  t5325 = t5320 + t5321 + t5322;
  t5373 = t5306*t4876;
  t5377 = t4384*t5126;
  t5378 = t5369 + t5373 + t5377;
  t5396 = t4504*t4921;
  t5410 = -1.*t4070*t4921;
  t5397 = t4133*t4495*t4876;
  t5398 = -1.*t4339*t4495*t5126;
  t5400 = t5396 + t5397 + t5398;
  t8968 = Power(t4133,2);
  t8970 = Power(t4339,2);
  t9892 = t4495*t4921;
  t9946 = t4504*t4866;
  t9965 = -1.*t4350*t4921;
  t9973 = -1.*t4070*t4866;
  t5411 = -1.*t5306*t4876;
  t5412 = -1.*t4384*t5126;
  t5413 = t5410 + t5411 + t5412;
  t5446 = var2[0]*t4133*t5441;
  t5473 = t2131*t4339*t5441;
  t5478 = t4082*t4350;
  t5505 = t5473 + t5478;
  t5691 = var2[1]*t5505;
  t5763 = -1.*t4082*t4339*t5441;
  t5766 = t2131*t4350;
  t5768 = t5763 + t5766;
  t5772 = var2[2]*t5768;
  t5813 = -1.*t4495*t4866;
  t5818 = t4927 + t5813;
  t5825 = t4644*t5818;
  t10171 = -0.15121*t3831;
  t10175 = -1.*t3831*t4847;
  t10177 = t10171 + t10175;
  t10161 = t4856 + t4850;
  t8372 = -1.*t8369*t4866;
  t10234 = t2714*t10177;
  t10246 = -1.*t10161*t4008;
  t10247 = t10234 + t10246;
  t10250 = t2714*t10161;
  t10251 = t10177*t4008;
  t10290 = t10250 + t10251;
  t8681 = t8644*t4866;
  t8815 = t4833*t4623;
  t8816 = t4644*t4866;
  t8823 = t8815 + t5270 + t8816;
  t8825 = t4495*t8823;
  t8962 = t4133*t8644*t5240;
  t10329 = -1.*t4504*t10290;
  t8988 = -1.*t4133*t8369*t4876;
  t8995 = t4339*t8369*t5126;
  t10340 = t4611*t10290;
  t9022 = t4133*t8644*t4876;
  t9030 = -1.*t4339*t8644*t5126;
  t9036 = t4133*t8369*t5273;
  t9141 = var2[0]*t4133*t8369;
  t9146 = t2131*t4495;
  t9147 = -1.*t4082*t4339*t8369;
  t9154 = t9146 + t9147;
  t9178 = var2[2]*t9154;
  t9184 = t4082*t4495;
  t9188 = t2131*t4339*t8369;
  t9189 = t9184 + t9188;
  t9194 = var2[1]*t9189;
  t9210 = -1.*t8644*t4866;
  t9236 = -1.*t4833*t4623;
  t9244 = -1.*t4644*t4866;
  t9245 = t9236 + t5320 + t9244;
  t9251 = t4350*t9245;
  t9262 = t5441*t4866;
  t9285 = t4833*t4195;
  t9290 = t4350*t4866;
  t9291 = t9285 + t5369 + t9290;
  t9293 = t4644*t9291;
  t10438 = -1.*t4611*t10290;
  t9306 = -1.*t4133*t8644*t4876;
  t9314 = t4339*t8644*t5126;
  t10464 = t4070*t10290;
  t9455 = t4133*t5441*t4876;
  t9473 = -1.*t4339*t5441*t5126;
  t9497 = t4133*t5441*t5325;
  t9606 = t4133*t8644*t5378;
  t9693 = var2[0]*t4133*t8644;
  t9698 = t2131*t4339*t8644;
  t9701 = t4082*t4644;
  t9712 = t9698 + t9701;
  t9715 = var2[1]*t9712;
  t9716 = -1.*t4082*t4339*t8644;
  t9722 = t2131*t4644;
  t9725 = t9716 + t9722;
  t9751 = var2[2]*t9725;
  t9760 = t4495*t4866;
  t9763 = t5396 + t9760;
  t9764 = t4350*t9763;
  t9934 = t8369*t4866;
  t9970 = -1.*t5441*t4866;
  t9985 = -1.*t4833*t4195;
  t9986 = -1.*t4350*t4866;
  t9988 = t9985 + t5410 + t9986;
  t9990 = t4495*t9988;
  t10070 = t4133*t5441*t5400;
  t10516 = t4504*t10290;
  t10083 = t4133*t8369*t4876;
  t10085 = -1.*t4339*t8369*t5126;
  t10539 = -1.*t4070*t10290;
  t10103 = -1.*t4133*t5441*t4876;
  t10108 = t4339*t5441*t5126;
  t10116 = t4133*t8369*t5413;
  t10562 = t3933*t3935;
  t10563 = -1.*t3913*t3939;
  t10564 = t10562 + t10563;
  t10581 = t4006*t2714*t10564;
  t10582 = -1.*t3831*t10564*t4008;
  t10583 = t10581 + t10582;
  t10594 = t2714*t3831*t10564;
  t10595 = t4006*t10564*t4008;
  t10600 = t10594 + t10595;
  t10608 = t4133*t3954;
  t10613 = -1.*t4339*t10583;
  t10618 = t10608 + t10613;
  t10633 = -0.28121*t3935;
  t10635 = -1.*t4778*t3935;
  t10636 = 0.305*t3913*t3939;
  t10637 = t10633 + t10635 + t10636;
  t10641 = t2714*t3831*t10637;
  t10646 = t4006*t10637*t4008;
  t10647 = t10641 + t10646;
  t10649 = t4006*t2714*t10637;
  t10652 = -1.*t3831*t10637*t4008;
  t10655 = t10649 + t10652;
  t10648 = -1.*t4504*t10647;
  t10679 = 0.28121*t3913;
  t10680 = t10679 + t4845 + t4846;
  t10684 = t10647*t4611;
  t10769 = t10680*t4339;
  t10770 = t4133*t10655;
  t10772 = t10769 + t10770;
  t10774 = t4133*t10680;
  t10775 = -1.*t4339*t10655;
  t10776 = t10774 + t10775;
  t10841 = t4833*t3954;
  t10879 = t4195*t10680;
  t10978 = Power(t4006,2);
  t10982 = Power(t3831,2);
  t10969 = -1.*t10680*t4623;
  t11380 = t10647*t4070;
  t11389 = t10600*t4921;
  t10580 = t3954*t4339;
  t10587 = t4133*t10583;
  t10589 = t10580 + t10587;
  t11401 = -1.*t10647*t4611;
  t4445 = t4082*t4070;
  t4446 = -1.*t2131*t4384;
  t4454 = t4445 + t4446;
  t11516 = t4504*t10647;
  t11535 = -1.*t10647*t4070;
  t11537 = -1.*t10600*t4921;
  t10566 = 0.15121*t10564;
  t10567 = 0.15121*t4195;
  t10568 = t10566 + t10567;
  t10569 = var2[9]*t10568;
  t10570 = -1.*t3831*t4851;
  t10571 = t4006*t4864;
  t10573 = t10570 + t10571;
  t4677 = t4082*t4611;
  t4678 = -1.*t2131*t4665;
  t4688 = t4677 + t4678;
  t11586 = 0.305*t3933*t3935;
  t11587 = t11586 + t4784;
  t11588 = t2714*t3831*t11587;
  t11589 = t4006*t11587*t4008;
  t11590 = t11588 + t11589;
  t11592 = t4006*t2714*t11587;
  t11593 = -1.*t3831*t11587*t4008;
  t11594 = t11592 + t11593;
  t11600 = t2714*t3831*t4623;
  t11602 = t4006*t4623*t4008;
  t11603 = t11600 + t11602;
  t11591 = -1.*t4504*t11590;
  t11607 = -0.305*t3913*t3933;
  t11608 = -0.305*t3935*t3939;
  t11609 = t11607 + t11608;
  t11617 = t4006*t2714*t4623;
  t11619 = -1.*t3831*t4623*t4008;
  t11620 = t11617 + t11619;
  t11611 = t11590*t4611;
  t11614 = t11603*t4921;
  t11627 = t11609*t4339;
  t11631 = t4133*t11594;
  t11633 = t11627 + t11631;
  t11637 = t4133*t11609;
  t11641 = -1.*t4339*t11594;
  t11642 = t11637 + t11641;
  t11647 = t10564*t4339;
  t11648 = t4133*t11620;
  t11649 = t11647 + t11648;
  t10808 = t3954*t4847;
  t10819 = t9285 + t10808;
  t10963 = -1.*t4195*t4847;
  t10964 = t10963 + t9236;
  t11227 = -1.*t4006*t4195*t4851;
  t11232 = -1.*t3831*t4195*t4864;
  t11238 = t9236 + t11227 + t11232;
  t11686 = t4195*t11609;
  t11340 = t4006*t3954*t4851;
  t11353 = t3831*t3954*t4864;
  t11368 = t9285 + t11340 + t11353;
  t11697 = -1.*t10564*t4833;
  t11703 = -1.*t11609*t4623;
  t11792 = t11590*t4070;
  t11799 = -1.*t11590*t4611;
  t11802 = -1.*t11603*t4921;
  t11654 = t4133*t10564;
  t11655 = -1.*t4339*t11620;
  t11656 = t11654 + t11655;
  t11492 = t3831*t4851;
  t11497 = -1.*t4006*t4864;
  t11501 = t11492 + t11497;
  t11935 = t4504*t11590;
  t11946 = -1.*t11590*t4070;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t2131*t4070 - 1.*t4082*t4384)*var2[1] + t4454*var2[2];
  p_output1[10]=(t4082*t4339*t4495 - 1.*t2131*t4504)*var2[1] + (t2131*t4339*t4495 + t4082*t4504)*var2[2];
  p_output1[11]=(-1.*t2131*t4611 - 1.*t4082*t4665)*var2[1] + t4688*var2[2];
  p_output1[12]=t4384*var2[0] - 1.*t2131*t4710*var2[1] + t4082*t4710*var2[2] + (t4729*(t4339*t4495*t4869 + t4339*t4495*t4876) + t4665*t5240 + t4133*t4495*(t4665*t4869 + t4665*t4876 + t4729*t5126 + t5126*t5265) - 1.*t4339*t4495*t5273)*var2[3];
  p_output1[13]=-1.*t4339*t4495*var2[0] + t2131*t4133*t4495*var2[1] - 1.*t4082*t4133*t4495*var2[2] + ((-1.*t4665*t4869 - 1.*t4665*t4876 - 1.*t4729*t5126 - 1.*t5126*t5265)*t5306 + t4729*(t4384*t4869 + t4384*t4876 + t4710*t5126 + t5126*t5306) + t4384*t5325 + t4665*t5378)*var2[3];
  p_output1[14]=t4665*var2[0] - 1.*t2131*t5265*var2[1] + t4082*t5265*var2[2] + ((-1.*t4339*t4495*t4869 - 1.*t4339*t4495*t4876)*t5306 + t4133*t4495*(-1.*t4384*t4869 - 1.*t4384*t4876 - 1.*t4710*t5126 - 1.*t5126*t5306) + t4384*t5400 - 1.*t4339*t4495*t5413)*var2[3];
  p_output1[15]=t5446 + t5691 + t5772 + (t8962 + t4729*(t8189 + t8413 - 1.*t4495*t7982*t8968 - 1.*t4495*t7982*t8970 + t8988 + t8995) + t4133*t4495*(-1.*t4339*t4665*t7982 + t4133*t4729*t7982 + t8437 + t8685 + t9022 + t9030) + t9036)*var2[3] + (t5825 + t4611*(-1.*t4495*t7982 + t8189 + t8372 + t8413) + t4504*(t4644*t7982 + t8437 + t8681 + t8685) + t8825)*var2[4];
  p_output1[16]=t9141 + t9178 + t9194 + (t5306*(t4339*t4665*t7982 - 1.*t4133*t4729*t7982 + t9196 + t9211 + t9306 + t9314) + t4729*(-1.*t4339*t4384*t7982 + t4133*t5306*t7982 + t9260 + t9269 + t9455 + t9473) + t9497 + t9606)*var2[3] + (t4070*(-1.*t4644*t7982 + t9196 + t9210 + t9211) + t9251 + t4611*(t4350*t7982 + t9260 + t9262 + t9269) + t9293)*var2[4];
  p_output1[17]=t9693 + t9715 + t9751 + (t10070 + t10116 + t5306*(t10083 + t10085 + t4495*t7982*t8968 + t4495*t7982*t8970 + t9892 + t9946) + t4133*t4495*(t10103 + t10108 + t4339*t4384*t7982 - 1.*t4133*t5306*t7982 + t9965 + t9973))*var2[3] + (t9764 + t4070*(t4495*t7982 + t9892 + t9934 + t9946) + t4504*(-1.*t4350*t7982 + t9965 + t9970 + t9973) + t9990)*var2[4];
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t5446 + t5691 + t5772 + (t8962 + t4729*(t10329 + t8189 - 1.*t10247*t4495*t8968 - 1.*t10247*t4495*t8970 + t8988 + t8995) + t4133*t4495*(t10340 - 1.*t10247*t4339*t4665 + t10247*t4133*t4729 + t8437 + t9022 + t9030) + t9036)*var2[3] + (t5825 + t4611*(t10329 - 1.*t10247*t4495 + t8189 + t8372) + t4504*(t10340 + t10247*t4644 + t8437 + t8681) + t8825)*var2[4] + t4623*(-1.*t10177*t3831 + t10161*t4006 - 1.*t4006*t4851 - 1.*t3831*t4864)*var2[5];
  p_output1[28]=t9141 + t9178 + t9194 + (t5306*(t10438 + t10247*t4339*t4665 - 1.*t10247*t4133*t4729 + t9196 + t9306 + t9314) + t4729*(t10464 - 1.*t10247*t4339*t4384 + t10247*t4133*t5306 + t9260 + t9455 + t9473) + t9497 + t9606)*var2[3] + (t4070*(t10438 - 1.*t10247*t4644 + t9196 + t9210) + t9251 + t4611*(t10464 + t10247*t4350 + t9260 + t9262) + t9293)*var2[4] + (t4623*(t10161*t3831*t3954 + t10177*t3954*t4006 - 1.*t3831*t3954*t4851 + t3954*t4006*t4864) + t4195*(-1.*t10161*t3831*t4195 - 1.*t10177*t4006*t4195 + t3831*t4195*t4851 - 1.*t4006*t4195*t4864))*var2[5];
  p_output1[29]=t9693 + t9715 + t9751 + (t10070 + t10116 + t5306*(t10083 + t10085 + t10516 + t10247*t4495*t8968 + t10247*t4495*t8970 + t9892) + t4133*t4495*(t10103 + t10108 + t10539 + t10247*t4339*t4384 - 1.*t10247*t4133*t5306 + t9965))*var2[3] + (t9764 + t4070*(t10516 + t10247*t4495 + t9892 + t9934) + t4504*(t10539 - 1.*t10247*t4350 + t9965 + t9970) + t9990)*var2[4] + t4195*(t10177*t3831 - 1.*t10161*t4006 + t4006*t4851 + t3831*t4864)*var2[5];
  p_output1[30]=t10569 + t10589*var2[0] + (-1.*t10618*t2131 + t10600*t4082)*var2[1] + (t10600*t2131 + t10618*t4082)*var2[2] + ((t10648 - 1.*t10772*t4133*t4495 + t10776*t4339*t4495)*t4729 + t5240*t5306 + t4133*t4495*(t10684 + t10776*t4665 + t10772*t4729 + t5369 + t5373 + t5377))*var2[3] + ((t10648 - 1.*t10655*t4495)*t4611 + t4070*t5818 + t4504*(t10684 + t10680*t4623 + t10655*t4644 + t5369 + t9285 + t9290))*var2[4] + t10573*t4195*var2[5];
  p_output1[31]=(t4729*(t11380 + t11389 + t10776*t4384 + t10589*t4876 + t10618*t5126 + t10772*t5306) + t10589*t5325 + t5306*t5378 + t5306*(t11401 - 1.*t10776*t4665 - 1.*t10772*t4729 + t5410 + t5411 + t5412))*var2[3] + (t4611*(t10841 + t10879 + t11380 + t11389 + t10655*t4350 + t10583*t4866) + t10600*t9245 + t4070*t9291 + t4070*(t10969 + t11401 - 1.*t10655*t4644 + t5410 + t9985 + t9986))*var2[4] + (t11238*t3954 + t11368*t4195 + t4623*(t10841 + t10879 + t10637*t10978*t3954 + t10637*t10982*t3954 + t10564*t4006*t4851 + t10564*t3831*t4864) + t4195*(t10969 - 1.*t10637*t10978*t4195 - 1.*t10637*t10982*t4195 - 1.*t3954*t4006*t4851 - 1.*t3831*t3954*t4864 + t9985))*var2[5] + (t10964*t3954 + t10819*t4195 + t4623*(t10841 + t10879 + t10637*t3954 + t10564*t4847) + t4195*(t10969 - 1.*t10637*t4195 - 1.*t3954*t4847 + t9985))*var2[9];
  p_output1[32]=t5306*var2[0] + t4454*var2[1] + (t2131*t4070 + t4082*t4384)*var2[2] + ((t11516 + t10772*t4133*t4495 - 1.*t10776*t4339*t4495)*t5306 + t4133*t4495*(t11535 + t11537 - 1.*t10776*t4384 - 1.*t10589*t4876 - 1.*t10618*t5126 - 1.*t10772*t5306) + t10589*t5400)*var2[3] + (t4070*(t11516 + t10655*t4495) + t4504*(t11535 + t11537 - 1.*t10680*t4195 - 1.*t10655*t4350 - 1.*t3954*t4833 - 1.*t10583*t4866) + t10600*t9763)*var2[4] + t11501*t3954*var2[5];
  p_output1[33]=t10569 + t4729*var2[0] + t4688*var2[1] + (t2131*t4611 + t4082*t4665)*var2[2] + ((t11591 - 1.*t11633*t4133*t4495 + t11642*t4339*t4495)*t4729 + t4133*t4495*(t11611 + t11614 + t11642*t4665 + t11633*t4729 + t11649*t4876 + t11656*t5126) + t11649*t5240)*var2[3] + ((t11591 - 1.*t11594*t4495)*t4611 + t4504*(t11611 + t11614 + t11609*t4623 + t11594*t4644 + t10564*t4833 + t11620*t4866) + t11603*t5818)*var2[4] + t10564*t10573*var2[5] + (0.28121*t3933 - 0.305*Power(t3933,2) + t3933*t4778)*var2[10];
  p_output1[34]=((t11799 + t11802 - 1.*t11642*t4665 - 1.*t11633*t4729 - 1.*t11649*t4876 - 1.*t11656*t5126)*t5306 + t4729*(t11792 + t11642*t4384 + t5270 + t5271 + t5272 + t11633*t5306) + t4729*t5325 + t11649*t5378)*var2[3] + (t4070*(t11697 + t11703 + t11799 + t11802 - 1.*t11594*t4644 - 1.*t11620*t4866) + t4611*(t11686 + t11792 + t11594*t4350 + t5270 + t8815 + t8816) + t4611*t9245 + t11603*t9291)*var2[4] + (t10564*t11368 + t11238*t4623 + t4195*(t11697 + t11703 - 1.*t10978*t11587*t4195 - 1.*t10982*t11587*t4195 - 1.*t4006*t4623*t4851 - 1.*t3831*t4623*t4864) + t4623*(t11686 + t10978*t11587*t3954 + t10982*t11587*t3954 + t4006*t4195*t4851 + t3831*t4195*t4864 + t8815))*var2[5] + (t10564*t10819 + t10964*t4623 + t4195*(t11697 + t11703 - 1.*t11587*t4195 - 1.*t4623*t4847) + t4623*(t11686 + t11587*t3954 + t4195*t4847 + t8815))*var2[9];
  p_output1[35]=t11649*var2[0] + (-1.*t11656*t2131 + t11603*t4082)*var2[1] + (t11603*t2131 + t11656*t4082)*var2[2] + ((t11935 + t11633*t4133*t4495 - 1.*t11642*t4339*t4495)*t5306 + t4133*t4495*(t11946 - 1.*t11642*t4384 - 1.*t11633*t5306 + t5320 + t5321 + t5322) + t4729*t5400)*var2[3] + (t4070*(t11935 + t11594*t4495) + t4504*(t11946 - 1.*t11609*t4195 - 1.*t11594*t4350 + t5320 + t9236 + t9244) + t4611*t9763)*var2[4] + t11501*t4623*var2[5] + (-0.28121*t3939 + 0.305*t3933*t3939 - 1.*t3939*t4778)*var2[10];
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
