/*
 * Automatically Generated from Mathematica.
 * Thu 28 Apr 2022 15:24:24 GMT+02:00
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
  double t7209;
  double t7176;
  double t7204;
  double t7228;
  double t7205;
  double t7232;
  double t7241;
  double t7251;
  double t3596;
  double t3593;
  double t7252;
  double t7253;
  double t7254;
  double t7260;
  double t7248;
  double t7255;
  double t7258;
  double t3265;
  double t7261;
  double t7262;
  double t7301;
  double t7305;
  double t7310;
  double t7311;
  double t7313;
  double t7314;
  double t7316;
  double t7329;
  double t7330;
  double t7331;
  double t7345;
  double t7347;
  double t7348;
  double t7356;
  double t7357;
  double t7358;
  double t7367;
  double t7371;
  double t7375;
  double t7377;
  double t7378;
  double t7379;
  double t7398;
  double t7399;
  double t7400;
  double t7422;
  double t7423;
  double t7424;
  double t7429;
  double t7431;
  double t7432;
  double t7433;
  double t7434;
  double t7435;
  double t7419;
  double t7427;
  double t7436;
  double t7437;
  double t7414;
  double t7415;
  double t7416;
  double t7418;
  double t7438;
  double t7439;
  double t7440;
  double t7441;
  double t7442;
  double t7443;
  double t7444;
  double t7445;
  double t7446;
  double t7447;
  double t7449;
  double t7450;
  double t7452;
  double t7453;
  double t7454;
  double t7456;
  double t7457;
  double t7459;
  double t7460;
  double t7461;
  double t7467;
  double t7468;
  double t7469;
  double t7478;
  double t7479;
  double t7480;
  double t7472;
  double t7473;
  double t7474;
  double t7463;
  double t7464;
  double t7465;
  double t7410;
  double t7411;
  double t7413;
  double t7510;
  double t7511;
  double t7512;
  double t7491;
  double t7492;
  double t7493;
  double t7565;
  double t7566;
  double t7567;
  double t7481;
  double t7485;
  double t7577;
  double t7578;
  double t7579;
  double t7476;
  double t7477;
  double t7482;
  double t7593;
  double t7594;
  double t7595;
  double t7581;
  double t7487;
  double t7488;
  double t7489;
  double t7592;
  double t7598;
  double t7509;
  double t7523;
  double t7513;
  double t7514;
  double t7515;
  double t7631;
  double t7633;
  double t7524;
  double t7525;
  double t7526;
  double t7644;
  double t7647;
  double t7548;
  double t7551;
  double t7546;
  double t7547;
  double t7549;
  double t7683;
  double t7552;
  double t7553;
  double t7554;
  double t7687;
  double t7689;
  double t7721;
  double t7722;
  double t7723;
  double t7585;
  double t7734;
  double t7735;
  double t7736;
  double t7739;
  double t7740;
  double t7588;
  double t7584;
  double t7586;
  double t7738;
  double t7741;
  double t7589;
  double t7590;
  double t7746;
  double t7747;
  double t7759;
  double t7760;
  double t7761;
  double t7783;
  double t7784;
  double t7785;
  double t7768;
  double t7769;
  double t7775;
  double t7776;
  double t7777;
  double t7791;
  double t7792;
  double t7793;
  double t7787;
  double t7788;
  double t7789;
  double t7779;
  double t7780;
  double t7781;
  double t7640;
  double t7636;
  double t7637;
  double t7638;
  double t7820;
  double t7821;
  double t7641;
  double t7642;
  double t7826;
  double t7827;
  double t7843;
  double t7716;
  double t7717;
  double t7718;
  double t7845;
  double t7850;
  double t7798;
  double t7799;
  double t7800;
  double t7851;
  double t7679;
  double t7692;
  double t7678;
  double t7680;
  double t7762;
  double t7887;
  double t7888;
  double t7693;
  double t7694;
  double t7893;
  double t7894;
  double t7906;
  double t7907;
  double t7913;
  double t7915;
  double t7731;
  double t7732;
  double t7937;
  double t7938;
  double t7939;
  double t7955;
  double t7956;
  double t7387;
  double t7393;
  double t7395;
  double t7948;
  double t7949;
  double t7950;
  double t7951;
  double t7946;
  double t7954;
  double t7957;
  double t7969;
  double t7970;
  double t7971;
  double t7977;
  double t7978;
  double t7979;
  double t7973;
  double t7974;
  double t7975;
  double t7984;
  double t7985;
  double t7986;
  double t7980;
  double t7988;
  double t7989;
  double t7995;
  double t7996;
  double t7997;
  double t8003;
  double t8004;
  double t8005;
  double t7999;
  double t8000;
  double t8001;
  double t7831;
  double t7832;
  double t7833;
  double t7835;
  double t7836;
  double t7837;
  double t7958;
  double t7751;
  double t7752;
  double t8025;
  double t8026;
  double t8033;
  double t8031;
  double t8023;
  double t8027;
  double t8057;
  double t8061;
  double t8062;
  double t8010;
  double t8011;
  double t8012;
  double t7883;
  double t7884;
  double t8086;
  double t8102;
  double t8108;
  double t8127;
  double t8128;
  double t8129;
  double t8148;
  double t8149;
  double t8150;
  double t8138;
  double t8139;
  double t8140;
  double t8157;
  double t8158;
  double t8159;
  double t8161;
  double t8162;
  double t8163;
  double t8145;
  double t8146;
  double t8151;
  double t8176;
  double t8177;
  double t8178;
  double t8172;
  double t8173;
  double t8174;
  double t8179;
  double t8183;
  double t8194;
  double t8195;
  double t8196;
  double t8190;
  double t8191;
  double t8192;
  double t7898;
  double t7899;
  double t8038;
  double t8039;
  double t8045;
  double t8046;
  double t8209;
  double t8214;
  double t8219;
  double t8215;
  double t8217;
  double t8210;
  double t8237;
  double t8240;
  double t8137;
  double t8141;
  double t8142;
  double t8244;
  double t7322;
  double t7323;
  double t7324;
  double t8274;
  double t8276;
  double t8290;
  double t8294;
  double t8297;
  t7209 = Cos(var1[7]);
  t7176 = Cos(var1[8]);
  t7204 = Sin(var1[7]);
  t7228 = Sin(var1[8]);
  t7205 = t7176*t7204;
  t7232 = -1.*t7209*t7228;
  t7241 = t7205 + t7232;
  t7251 = Sin(var1[5]);
  t3596 = Sin(var1[6]);
  t3593 = Cos(var1[5]);
  t7252 = t7209*t7176;
  t7253 = t7204*t7228;
  t7254 = t7252 + t7253;
  t7260 = Cos(var1[3]);
  t7248 = -1.*t3593*t3596*t7241;
  t7255 = t7251*t7254;
  t7258 = t7248 + t7255;
  t3265 = Sin(var1[3]);
  t7261 = Cos(var1[4]);
  t7262 = Cos(var1[6]);
  t7301 = t7261*t7262*t7241;
  t7305 = Sin(var1[4]);
  t7310 = t7251*t3596*t7241;
  t7311 = t3593*t7254;
  t7313 = t7310 + t7311;
  t7314 = -1.*t7305*t7313;
  t7316 = t7301 + t7314;
  t7329 = t7262*t7305*t7251;
  t7330 = t7261*t3596;
  t7331 = t7329 + t7330;
  t7345 = -1.*t7176*t7204;
  t7347 = t7209*t7228;
  t7348 = t7345 + t7347;
  t7356 = t7251*t7348;
  t7357 = -1.*t3593*t3596*t7254;
  t7358 = t7356 + t7357;
  t7367 = t7261*t7262*t7254;
  t7371 = t3593*t7348;
  t7375 = t7251*t3596*t7254;
  t7377 = t7371 + t7375;
  t7378 = -1.*t7305*t7377;
  t7379 = t7367 + t7378;
  t7398 = -1.*t7262*t7305*t7241;
  t7399 = -1.*t7261*t7313;
  t7400 = t7398 + t7399;
  t7422 = -0.0641*t7176;
  t7423 = -0.28*t7228;
  t7424 = t7422 + t7423;
  t7429 = -1.*t7176;
  t7431 = 1. + t7429;
  t7432 = 0.075*t7431;
  t7433 = 0.355*t7176;
  t7434 = -0.0641*t7228;
  t7435 = t7432 + t7433 + t7434;
  t7419 = -0.325*t7204;
  t7427 = t7209*t7424;
  t7436 = t7204*t7435;
  t7437 = t7419 + t7427 + t7436;
  t7414 = -1.*t7262;
  t7415 = 1. + t7414;
  t7416 = 0.1575*t7415;
  t7418 = 0.2255*t7262;
  t7438 = -1.*t3596*t7437;
  t7439 = t7416 + t7418 + t7438;
  t7440 = -1.*t7251*t7439;
  t7441 = -1.*t7209;
  t7442 = 1. + t7441;
  t7443 = 0.325*t7442;
  t7444 = -1.*t7204*t7424;
  t7445 = t7209*t7435;
  t7446 = t7443 + t7444 + t7445;
  t7447 = t3593*t7446;
  t7449 = t7440 + t7447;
  t7450 = -1.*t7305*t7449;
  t7452 = 0.068*t3596;
  t7453 = t7262*t7437;
  t7454 = t7452 + t7453;
  t7456 = t7261*t7454;
  t7457 = t7450 + t7456;
  t7459 = -1.*t7261*t7262*t7251;
  t7460 = t7305*t3596;
  t7461 = t7459 + t7460;
  t7467 = t7261*t7449;
  t7468 = t7305*t7454;
  t7469 = t7467 + t7468;
  t7478 = t3593*t7439;
  t7479 = t7251*t7446;
  t7480 = t7478 + t7479;
  t7472 = t7262*t7305*t7254;
  t7473 = t7261*t7377;
  t7474 = t7472 + t7473;
  t7463 = -1.*t7261*t7449;
  t7464 = -1.*t7305*t7454;
  t7465 = t7463 + t7464;
  t7410 = t7261*t7262*t7251;
  t7411 = -1.*t7305*t3596;
  t7413 = t7410 + t7411;
  t7510 = t7262*t7305*t7241;
  t7511 = t7261*t7313;
  t7512 = t7510 + t7511;
  t7491 = -1.*t7262*t7305*t7254;
  t7492 = -1.*t7261*t7377;
  t7493 = t7491 + t7492;
  t7565 = t3593*t3596*t7241;
  t7566 = -1.*t7251*t7254;
  t7567 = t7565 + t7566;
  t7481 = -1.*t3593*t7262*t7480;
  t7485 = t7480*t7358;
  t7577 = -1.*t3593*t7439;
  t7578 = -1.*t7251*t7446;
  t7579 = t7577 + t7578;
  t7476 = -1.*t7331*t7457;
  t7477 = -1.*t7461*t7469;
  t7482 = t7476 + t7477 + t7481;
  t7593 = -1.*t7251*t7348;
  t7594 = t3593*t3596*t7254;
  t7595 = t7593 + t7594;
  t7581 = t7262*t7251*t7480;
  t7487 = t7469*t7474;
  t7488 = t7457*t7379;
  t7489 = t7485 + t7487 + t7488;
  t7592 = t7449*t7358;
  t7598 = t7480*t7377;
  t7509 = t7480*t7258;
  t7523 = -1.*t7480*t7358;
  t7513 = t7469*t7512;
  t7514 = t7457*t7316;
  t7515 = t7509 + t7513 + t7514;
  t7631 = t7480*t7313;
  t7633 = t7449*t7258;
  t7524 = -1.*t7469*t7474;
  t7525 = -1.*t7457*t7379;
  t7526 = t7523 + t7524 + t7525;
  t7644 = -1.*t7449*t7358;
  t7647 = -1.*t7480*t7377;
  t7548 = t3593*t7262*t7480;
  t7551 = -1.*t7480*t7258;
  t7546 = t7331*t7457;
  t7547 = t7461*t7469;
  t7549 = t7546 + t7547 + t7548;
  t7683 = -1.*t7262*t7251*t7480;
  t7552 = -1.*t7469*t7512;
  t7553 = -1.*t7457*t7316;
  t7554 = t7551 + t7552 + t7553;
  t7687 = -1.*t7480*t7313;
  t7689 = -1.*t7449*t7258;
  t7721 = -1.*t7262*t7305*t7251*t7241;
  t7722 = -1.*t7261*t3596*t7241;
  t7723 = t7721 + t7722;
  t7585 = -1.*t3596*t7454;
  t7734 = -0.068*t3596;
  t7735 = -1.*t7262*t7437;
  t7736 = t7734 + t7735;
  t7739 = 0.068*t7262;
  t7740 = t7739 + t7438;
  t7588 = t7262*t7454*t7254;
  t7584 = t7262*t7251*t7449;
  t7586 = t7584 + t7481 + t7585;
  t7738 = -1.*t7262*t7454;
  t7741 = -1.*t3596*t7740;
  t7589 = t7449*t7377;
  t7590 = t7588 + t7485 + t7589;
  t7746 = -1.*t3596*t7454*t7254;
  t7747 = t7262*t7740*t7254;
  t7759 = t3593*t3596*t7480;
  t7760 = Power(t3593,2);
  t7761 = -1.*t7760*t7262*t7736;
  t7783 = t7262*t7305;
  t7784 = t7261*t7251*t3596;
  t7785 = t7783 + t7784;
  t7768 = -1.*t3593*t7262*t7480*t7254;
  t7769 = t3593*t7736*t7358;
  t7775 = t7261*t7262*t7251*t7254;
  t7776 = -1.*t7305*t3596*t7254;
  t7777 = t7775 + t7776;
  t7791 = -1.*t7261*t7251*t7736;
  t7792 = t7305*t7740;
  t7793 = t7791 + t7792;
  t7787 = t7305*t7251*t7736;
  t7788 = t7261*t7740;
  t7789 = t7787 + t7788;
  t7779 = t7261*t7262;
  t7780 = -1.*t7305*t7251*t3596;
  t7781 = t7779 + t7780;
  t7640 = -1.*t7262*t7454*t7254;
  t7636 = t7262*t7454*t7241;
  t7637 = t7449*t7313;
  t7638 = t7636 + t7637 + t7509;
  t7820 = -1.*t3596*t7454*t7241;
  t7821 = t7262*t7740*t7241;
  t7641 = -1.*t7449*t7377;
  t7642 = t7640 + t7523 + t7641;
  t7826 = t3596*t7454*t7254;
  t7827 = -1.*t7262*t7740*t7254;
  t7843 = -1.*t3593*t7262*t7480*t7241;
  t7716 = t7261*t7262*t7251*t7241;
  t7717 = -1.*t7305*t3596*t7241;
  t7718 = t7716 + t7717;
  t7845 = t3593*t7736*t7258;
  t7850 = t3593*t7262*t7480*t7254;
  t7798 = -1.*t7262*t7305*t7251*t7254;
  t7799 = -1.*t7261*t3596*t7254;
  t7800 = t7798 + t7799;
  t7851 = -1.*t3593*t7736*t7358;
  t7679 = t3596*t7454;
  t7692 = -1.*t7262*t7454*t7241;
  t7678 = -1.*t7262*t7251*t7449;
  t7680 = t7678 + t7548 + t7679;
  t7762 = Power(t7251,2);
  t7887 = t7262*t7454;
  t7888 = t3596*t7740;
  t7693 = -1.*t7449*t7313;
  t7694 = t7692 + t7693 + t7551;
  t7893 = t3596*t7454*t7241;
  t7894 = -1.*t7262*t7740*t7241;
  t7906 = -1.*t3593*t3596*t7480;
  t7907 = t7760*t7262*t7736;
  t7913 = t3593*t7262*t7480*t7241;
  t7915 = -1.*t3593*t7736*t7258;
  t7731 = -1.*t7262*t7439;
  t7732 = t7585 + t7731;
  t7937 = -1.*t7209*t7176;
  t7938 = -1.*t7204*t7228;
  t7939 = t7937 + t7938;
  t7955 = -0.325*t7209;
  t7956 = t7955 + t7444 + t7445;
  t7387 = t7260*t7358;
  t7393 = -1.*t3265*t7379;
  t7395 = t7387 + t7393;
  t7948 = 0.325*t7204;
  t7949 = -1.*t7209*t7424;
  t7950 = -1.*t7204*t7435;
  t7951 = t7948 + t7949 + t7950;
  t7946 = t7262*t7454*t7348;
  t7954 = Power(t7262,2);
  t7957 = t7954*t7956*t7254;
  t7969 = -1.*t3593*t3596*t7348;
  t7970 = t7251*t7939;
  t7971 = t7969 + t7970;
  t7977 = -1.*t3593*t3596*t7956;
  t7978 = t7251*t7951;
  t7979 = t7977 + t7978;
  t7973 = t7251*t3596*t7956;
  t7974 = t3593*t7951;
  t7975 = t7973 + t7974;
  t7984 = t7251*t3596*t7348;
  t7985 = t3593*t7939;
  t7986 = t7984 + t7985;
  t7980 = -1.*t3593*t7262*t7979;
  t7988 = t7480*t7971;
  t7989 = t7979*t7358;
  t7995 = t7262*t7305*t7348;
  t7996 = t7261*t7986;
  t7997 = t7995 + t7996;
  t8003 = t7261*t7975;
  t8004 = t7262*t7305*t7956;
  t8005 = t8003 + t8004;
  t7999 = -1.*t7305*t7975;
  t8000 = t7261*t7262*t7956;
  t8001 = t7999 + t8000;
  t7831 = -1.*t7446*t7348;
  t7832 = t3596*t7439*t7254;
  t7833 = t7831 + t7640 + t7832;
  t7835 = -1.*t3596*t7439*t7241;
  t7836 = t7446*t7254;
  t7837 = t7636 + t7835 + t7836;
  t7958 = Power(t3596,2);
  t7751 = t7446*t7348;
  t7752 = -1.*t3596*t7439*t7254;
  t8025 = -1.*t7951*t7348;
  t8026 = -1.*t7446*t7939;
  t8033 = t7951*t7254;
  t8031 = t7954*t7956*t7241;
  t8023 = -1.*t7262*t7454*t7348;
  t8027 = -1.*t7954*t7956*t7254;
  t8057 = t7979*t7258;
  t8061 = -1.*t7480*t7971;
  t8062 = -1.*t7979*t7358;
  t8010 = t7261*t7262*t7348;
  t8011 = -1.*t7305*t7986;
  t8012 = t8010 + t8011;
  t7883 = t7262*t7439;
  t7884 = t7679 + t7883;
  t8086 = -1.*t7954*t7956*t7241;
  t8102 = t3593*t7262*t7979;
  t8108 = -1.*t7979*t7258;
  t8127 = -0.28*t7176;
  t8128 = 0.0641*t7228;
  t8129 = t8127 + t8128;
  t8148 = t7204*t7424;
  t8149 = t7209*t8129;
  t8150 = t8148 + t8149;
  t8138 = t3593*t7241;
  t8139 = t7251*t3596*t7939;
  t8140 = t8138 + t8139;
  t8157 = t7251*t7241;
  t8158 = -1.*t3593*t3596*t7939;
  t8159 = t8157 + t8158;
  t8161 = t7261*t7262*t7939;
  t8162 = -1.*t7305*t8140;
  t8163 = t8161 + t8162;
  t8145 = -1.*t7204*t8129;
  t8146 = t7427 + t8145;
  t8151 = t7954*t8150*t7254;
  t8176 = -1.*t3593*t3596*t8150;
  t8177 = t7251*t8146;
  t8178 = t8176 + t8177;
  t8172 = t7251*t3596*t8150;
  t8173 = t3593*t8146;
  t8174 = t8172 + t8173;
  t8179 = -1.*t3593*t7262*t8178;
  t8183 = t8178*t7358;
  t8194 = t7261*t8174;
  t8195 = t7262*t7305*t8150;
  t8196 = t8194 + t8195;
  t8190 = -1.*t7305*t8174;
  t8191 = t7261*t7262*t8150;
  t8192 = t8190 + t8191;
  t7898 = t3596*t7439*t7241;
  t7899 = -1.*t7446*t7254;
  t8038 = t7437*t7241;
  t8039 = t8038 + t7836;
  t8045 = -1.*t7437*t7254;
  t8046 = t7831 + t8045;
  t8209 = -1.*t8146*t7348;
  t8214 = t7446*t7241;
  t8219 = t8146*t7254;
  t8215 = t7954*t8150*t7241;
  t8217 = t7262*t7454*t7939;
  t8210 = -1.*t7954*t8150*t7254;
  t8237 = t7480*t8159;
  t8240 = t8178*t7258;
  t8137 = t7262*t7305*t7939;
  t8141 = t7261*t8140;
  t8142 = t8137 + t8141;
  t8244 = -1.*t8178*t7358;
  t7322 = t7260*t7258;
  t7323 = -1.*t3265*t7316;
  t7324 = t7322 + t7323;
  t8274 = -1.*t7954*t8150*t7241;
  t8276 = -1.*t7262*t7454*t7939;
  t8290 = t3593*t7262*t8178;
  t8294 = -1.*t7480*t8159;
  t8297 = -1.*t8178*t7258;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t3265*t7258 - 1.*t7260*t7316)*var2[1] + t7324*var2[2];
  p_output1[10]=(-1.*t3265*t3593*t7262 - 1.*t7260*t7331)*var2[1] + (t3593*t7260*t7262 - 1.*t3265*t7331)*var2[2];
  p_output1[11]=(-1.*t3265*t7358 - 1.*t7260*t7379)*var2[1] + t7395*var2[2];
  p_output1[12]=t7316*var2[0] - 1.*t3265*t7400*var2[1] + t7260*t7400*var2[2] + ((-1.*t7413*t7457 - 1.*t7457*t7461 - 1.*t7331*t7465 - 1.*t7331*t7469)*t7474 + t7379*t7482 + t7331*t7489 + t7461*(t7379*t7465 + t7379*t7469 + t7457*t7474 + t7457*t7493))*var2[3];
  p_output1[13]=t7331*var2[0] - 1.*t3265*t7413*var2[1] + t7260*t7413*var2[2] + ((-1.*t7379*t7465 - 1.*t7379*t7469 - 1.*t7457*t7474 - 1.*t7457*t7493)*t7512 + t7474*(t7400*t7457 + t7316*t7465 + t7316*t7469 + t7457*t7512) + t7379*t7515 + t7316*t7526)*var2[3];
  p_output1[14]=t7379*var2[0] - 1.*t3265*t7493*var2[1] + t7260*t7493*var2[2] + ((t7413*t7457 + t7457*t7461 + t7331*t7465 + t7331*t7469)*t7512 + t7461*(-1.*t7400*t7457 - 1.*t7316*t7465 - 1.*t7316*t7469 - 1.*t7457*t7512) + t7316*t7549 + t7331*t7554)*var2[3];
  p_output1[15]=t7261*t7567*var2[0] + (t7260*t7313 + t3265*t7305*t7567)*var2[1] + (t3265*t7313 - 1.*t7260*t7305*t7567)*var2[2] + (-1.*t3593*t7261*t7262*t7489 + t7474*(-1.*t3593*t7262*t7449 - 1.*t3593*t7262*t7305*t7457 + t3593*t7261*t7262*t7469 + t7305*t7331*t7579 - 1.*t7261*t7461*t7579 + t7581) + t7261*t7482*t7595 + t7461*(-1.*t7305*t7379*t7579 + t7261*t7474*t7579 + t7592 - 1.*t7305*t7457*t7595 + t7261*t7469*t7595 + t7598))*var2[3] + (t7358*(t7251*t7262*t7579 + t7581) + t7377*t7586 - 1.*t7251*t7262*t7590 + t3593*t7262*(t7377*t7579 + t7592 + t7449*t7595 + t7598))*var2[4];
  p_output1[16]=-1.*t3593*t7261*t7262*var2[0] + (-1.*t7251*t7260*t7262 - 1.*t3265*t3593*t7262*t7305)*var2[1] + (-1.*t3265*t7251*t7262 + t3593*t7260*t7262*t7305)*var2[2] + (t7261*t7526*t7567 + t7261*t7515*t7595 + t7474*(-1.*t7305*t7457*t7567 + t7261*t7469*t7567 - 1.*t7305*t7316*t7579 + t7261*t7512*t7579 + t7631 + t7633) + t7512*(t7305*t7379*t7579 - 1.*t7261*t7474*t7579 + t7305*t7457*t7595 - 1.*t7261*t7469*t7595 + t7644 + t7647))*var2[3] + (t7358*(t7449*t7567 + t7313*t7579 + t7631 + t7633) + t7377*t7638 + t7313*t7642 + t7258*(-1.*t7377*t7579 - 1.*t7449*t7595 + t7644 + t7647))*var2[4];
  p_output1[17]=t7261*t7595*var2[0] + (t7260*t7377 + t3265*t7305*t7595)*var2[1] + (t3265*t7377 - 1.*t7260*t7305*t7595)*var2[2] + (-1.*t3593*t7261*t7262*t7554 + t7261*t7549*t7567 + t7512*(t3593*t7262*t7449 + t3593*t7262*t7305*t7457 - 1.*t3593*t7261*t7262*t7469 - 1.*t7305*t7331*t7579 + t7261*t7461*t7579 + t7683) + t7461*(t7305*t7457*t7567 - 1.*t7261*t7469*t7567 + t7305*t7316*t7579 - 1.*t7261*t7512*t7579 + t7687 + t7689))*var2[3] + (t7313*t7680 + t7258*(-1.*t7251*t7262*t7579 + t7683) + t3593*t7262*(-1.*t7449*t7567 - 1.*t7313*t7579 + t7687 + t7689) - 1.*t7251*t7262*t7694)*var2[4];
  p_output1[18]=t7718*var2[0] + (-1.*t3593*t7241*t7260*t7262 - 1.*t3265*t7723)*var2[1] + (-1.*t3265*t3593*t7241*t7262 + t7260*t7723)*var2[2] + (t7482*t7777 + t7489*t7785 + t7474*(t7759 + t7761 - 1.*t7457*t7781 - 1.*t7469*t7785 - 1.*t7331*t7789 - 1.*t7461*t7793) + t7461*(t7768 + t7769 + t7469*t7777 + t7379*t7789 + t7474*t7793 + t7457*t7800))*var2[3] + (-1.*t3593*t7254*t7262*t7586 - 1.*t3593*t3596*t7590 + t7358*(-1.*t3596*t7251*t7449 + t7738 + t7741 + t7759 + t7761 - 1.*t7262*t7736*t7762) + t3593*t7262*(t7251*t7254*t7262*t7449 - 1.*t7251*t7377*t7736 + t7746 + t7747 + t7768 + t7769))*var2[4] + (-1.*t3596*t7254*t7732 + t7254*t7262*(t3596*t7439 - 1.*t7262*t7736 + t7738 + t7741) + t3596*(-1.*t7254*t7262*t7439 - 1.*t3596*t7254*t7736 + t7746 + t7747) + t7262*(t7588 + t7751 + t7752))*var2[5];
  p_output1[19]=t7785*var2[0] + (-1.*t3593*t3596*t7260 - 1.*t3265*t7781)*var2[1] + (-1.*t3265*t3593*t3596 + t7260*t7781)*var2[2] + (t7526*t7718 + t7515*t7777 + t7474*(t7469*t7718 + t7457*t7723 + t7316*t7789 + t7512*t7793 + t7843 + t7845) + t7512*(-1.*t7469*t7777 - 1.*t7379*t7789 - 1.*t7474*t7793 - 1.*t7457*t7800 + t7850 + t7851))*var2[3] + (-1.*t3593*t7254*t7262*t7638 - 1.*t3593*t7241*t7262*t7642 + t7358*(t7241*t7251*t7262*t7449 - 1.*t7251*t7313*t7736 + t7820 + t7821 + t7843 + t7845) + t7258*(-1.*t7251*t7254*t7262*t7449 + t7251*t7377*t7736 + t7826 + t7827 + t7850 + t7851))*var2[4] + (t7254*t7262*(-1.*t7241*t7262*t7439 - 1.*t3596*t7241*t7736 + t7820 + t7821) + t7241*t7262*(t7254*t7262*t7439 + t3596*t7254*t7736 + t7826 + t7827) - 1.*t3596*t7241*t7833 - 1.*t3596*t7254*t7837)*var2[5];
  p_output1[20]=t7777*var2[0] + (-1.*t3593*t7254*t7260*t7262 - 1.*t3265*t7800)*var2[1] + (-1.*t3265*t3593*t7254*t7262 + t7260*t7800)*var2[2] + (t7549*t7718 + t7554*t7785 + t7512*(t7457*t7781 + t7469*t7785 + t7331*t7789 + t7461*t7793 + t7906 + t7907) + t7461*(-1.*t7469*t7718 - 1.*t7457*t7723 - 1.*t7316*t7789 - 1.*t7512*t7793 + t7913 + t7915))*var2[3] + (-1.*t3593*t7241*t7262*t7680 - 1.*t3593*t3596*t7694 + t7258*(t3596*t7251*t7449 + t7262*t7736*t7762 + t7887 + t7888 + t7906 + t7907) + t3593*t7262*(-1.*t7241*t7251*t7262*t7449 + t7251*t7313*t7736 + t7893 + t7894 + t7913 + t7915))*var2[4] + (-1.*t3596*t7241*t7884 + t7241*t7262*(-1.*t3596*t7439 + t7262*t7736 + t7887 + t7888) + t3596*(t7241*t7262*t7439 + t3596*t7241*t7736 + t7893 + t7894) + t7262*(t7692 + t7898 + t7899))*var2[5];
  p_output1[21]=t7474*var2[0] + t7395*var2[1] + (t3265*t7358 + t7260*t7379)*var2[2] + (t7482*t7997 + t7474*(t7980 - 1.*t7331*t8001 - 1.*t7461*t8005) + t7461*(t7988 + t7989 + t7469*t7997 + t7379*t8001 + t7474*t8005 + t7457*t8012))*var2[3] + (t7586*t7971 + t7358*(-1.*t3596*t7262*t7956 + t7251*t7262*t7975 + t7980) + t3593*t7262*(t7946 + t7957 + t7377*t7975 + t7449*t7986 + t7988 + t7989))*var2[4] + (t7262*t7348*t7732 + t3596*(-1.*t3596*t7348*t7439 + t7446*t7939 + t7946 + t7348*t7951 + t7957 + t7254*t7956*t7958))*var2[5] + (-0.1575*t7254 - 0.2255*t7939)*var2[6];
  p_output1[22]=(t7474*t7526 + t7515*t7997 + t7474*(t7485 + t7487 + t7488 + t7316*t8001 + t7512*t8005 + t8057) + t7512*(-1.*t7469*t7997 - 1.*t7379*t8001 - 1.*t7474*t8005 - 1.*t7457*t8012 + t8061 + t8062))*var2[3] + (t7358*t7642 + t7638*t7971 + t7358*(t7485 + t7588 + t7589 + t7313*t7975 + t8031 + t8057) + t7258*(-1.*t7377*t7975 - 1.*t7449*t7986 + t8023 + t8027 + t8061 + t8062))*var2[4] + (t7254*t7262*t7833 + t7262*t7348*t7837 + t7241*t7262*(t3596*t7348*t7439 - 1.*t7254*t7956*t7958 + t8023 + t8025 + t8026 + t8027) + t7254*t7262*(t7588 + t7751 + t7752 + t7241*t7956*t7958 + t8031 + t8033))*var2[5] + (t7254*(-1.*t7348*t7437 - 1.*t7254*t7956 + t8025 + t8026) + t7348*(t7254*t7437 + t7751 + t7241*t7956 + t8033) + t7939*t8039 + t7348*t8046)*var2[6];
  p_output1[23]=t7997*var2[0] + (t7260*t7971 - 1.*t3265*t8012)*var2[1] + (t3265*t7971 + t7260*t8012)*var2[2] + (t7474*t7549 + t7512*(t7331*t8001 + t7461*t8005 + t8102) + t7461*(t7523 + t7524 + t7525 - 1.*t7316*t8001 - 1.*t7512*t8005 + t8108))*var2[3] + (t7358*t7680 + t7258*(t3596*t7262*t7956 - 1.*t7251*t7262*t7975 + t8102) + t3593*t7262*(t7523 + t7640 + t7641 - 1.*t7313*t7975 + t8086 + t8108))*var2[4] + (t7254*t7262*t7884 + t3596*(t7640 + t7831 + t7832 - 1.*t7254*t7951 - 1.*t7241*t7956*t7958 + t8086))*var2[5] + 0.068*t7348*var2[6];
  p_output1[24]=t8142*var2[0] + (t7260*t8159 - 1.*t3265*t8163)*var2[1] + (t3265*t8159 + t7260*t8163)*var2[2] + (t7482*t7512 + t7474*(t8179 - 1.*t7331*t8192 - 1.*t7461*t8196) + t7461*(t7509 + t7513 + t7514 + t8183 + t7379*t8192 + t7474*t8196))*var2[3] + (t7258*t7586 + t7358*(-1.*t3596*t7262*t8150 + t7251*t7262*t8174 + t8179) + t3593*t7262*(t7509 + t7636 + t7637 + t8151 + t7377*t8174 + t8183))*var2[4] + (t7241*t7262*t7732 + t3596*(t7636 + t7835 + t7836 + t7348*t8146 + t7254*t7958*t8150 + t8151))*var2[5] + (-0.2255*t7254 - 0.1575*t7939)*var2[6] + (0.325*t7176 - 1.*t7176*t7435 - 1.*t7176*t8129)*var2[7];
  p_output1[25]=(t7512*t7515 + t7526*t8142 + t7474*(t7469*t8142 + t7457*t8163 + t7316*t8192 + t7512*t8196 + t8237 + t8240) + t7512*(t7551 + t7552 + t7553 - 1.*t7379*t8192 - 1.*t7474*t8196 + t8244))*var2[3] + (t7258*t7638 + t7642*t8159 + t7358*(t7449*t8140 + t7313*t8174 + t8215 + t8217 + t8237 + t8240) + t7258*(t7551 + t7692 + t7693 - 1.*t7377*t8174 + t8210 + t8244))*var2[4] + (t7241*t7262*t7837 + t7262*t7833*t7939 + t7241*t7262*(t7692 + t7898 + t7899 - 1.*t7254*t7958*t8150 + t8209 + t8210) + t7254*t7262*(-1.*t3596*t7439*t7939 + t7241*t7958*t8150 + t8214 + t8215 + t8217 + t8219))*var2[5] + (t7254*t8039 + t7241*t8046 + t7254*(-1.*t7241*t7437 + t7899 - 1.*t7254*t8150 + t8209) + t7348*(t7437*t7939 + t7241*t8150 + t8214 + t8219))*var2[6];
  p_output1[26]=t7512*var2[0] + t7324*var2[1] + (t3265*t7258 + t7260*t7316)*var2[2] + (t7549*t8142 + t7512*(t7331*t8192 + t7461*t8196 + t8290) + t7461*(-1.*t7469*t8142 - 1.*t7457*t8163 - 1.*t7316*t8192 - 1.*t7512*t8196 + t8294 + t8297))*var2[3] + (t7680*t8159 + t7258*(t3596*t7262*t8150 - 1.*t7251*t7262*t8174 + t8290) + t3593*t7262*(-1.*t7449*t8140 - 1.*t7313*t8174 + t8274 + t8276 + t8294 + t8297))*var2[4] + (t7262*t7884*t7939 + t3596*(-1.*t7241*t7446 + t3596*t7439*t7939 - 1.*t7254*t8146 - 1.*t7241*t7958*t8150 + t8274 + t8276))*var2[5] + 0.068*t7241*var2[6] + (0.325*t7228 - 1.*t7228*t7435 - 1.*t7228*t8129)*var2[7];
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
