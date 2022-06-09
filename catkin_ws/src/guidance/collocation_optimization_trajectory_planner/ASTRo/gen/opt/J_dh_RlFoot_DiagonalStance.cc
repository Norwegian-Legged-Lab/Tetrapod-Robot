/*
 * Automatically Generated from Mathematica.
 * Thu 2 Jun 2022 14:52:53 GMT+02:00
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
  double t3732;
  double t3810;
  double t3823;
  double t3884;
  double t3929;
  double t4224;
  double t4343;
  double t5239;
  double t3372;
  double t3619;
  double t5458;
  double t6650;
  double t4635;
  double t5569;
  double t6254;
  double t3008;
  double t6658;
  double t6688;
  double t6818;
  double t6831;
  double t6938;
  double t7002;
  double t7004;
  double t7006;
  double t7013;
  double t7016;
  double t7021;
  double t7160;
  double t7171;
  double t7297;
  double t7354;
  double t7357;
  double t7358;
  double t7359;
  double t7360;
  double t7412;
  double t7414;
  double t7417;
  double t7418;
  double t7419;
  double t7424;
  double t7432;
  double t7436;
  double t7338;
  double t7345;
  double t7349;
  double t7353;
  double t7364;
  double t7366;
  double t7383;
  double t7416;
  double t7437;
  double t7438;
  double t7440;
  double t7443;
  double t7444;
  double t7445;
  double t7447;
  double t7452;
  double t7453;
  double t7456;
  double t7318;
  double t7326;
  double t7328;
  double t7330;
  double t7332;
  double t7334;
  double t7460;
  double t7462;
  double t7463;
  double t7467;
  double t7468;
  double t7474;
  double t7404;
  double t7457;
  double t7458;
  double t7501;
  double t7502;
  double t7503;
  double t7329;
  double t7336;
  double t7337;
  double t7486;
  double t7487;
  double t7490;
  double t7576;
  double t7577;
  double t7578;
  double t7477;
  double t7484;
  double t7485;
  double t7491;
  double t7542;
  double t7544;
  double t7546;
  double t7601;
  double t7602;
  double t7607;
  double t7547;
  double t7759;
  double t7770;
  double t7784;
  double t7500;
  double t7506;
  double t7507;
  double t7614;
  double t7636;
  double t7615;
  double t7616;
  double t7617;
  double t7722;
  double t7788;
  double t7548;
  double t7549;
  double t7560;
  double t7579;
  double t7580;
  double t7582;
  double t7583;
  double t7584;
  double t7585;
  double t7588;
  double t7590;
  double t7593;
  double t7594;
  double t7595;
  double t7596;
  double t7839;
  double t7853;
  double t7854;
  double t7832;
  double t7626;
  double t7878;
  double t7881;
  double t7882;
  double t7884;
  double t7885;
  double t7891;
  double t7787;
  double t7791;
  double t7792;
  double t7793;
  double t7794;
  double t7802;
  double t7804;
  double t7806;
  double t7893;
  double t7808;
  double t7809;
  double t7978;
  double t7815;
  double t7816;
  double t7821;
  double t8000;
  double t8001;
  double t8002;
  double t8013;
  double t8078;
  double t8094;
  double t8150;
  double t8153;
  double t8163;
  double t8170;
  double t8171;
  double t8185;
  double t8201;
  double t8202;
  double t8207;
  double t8210;
  double t8211;
  double t8212;
  double t8213;
  double t8215;
  double t8220;
  double t8223;
  double t8214;
  double t8234;
  double t8235;
  double t8239;
  double t8242;
  double t8252;
  double t8253;
  double t8254;
  double t8257;
  double t8259;
  double t8260;
  double t8264;
  double t8265;
  double t8266;
  double t8003;
  double t8004;
  double t8005;
  double t8006;
  double t8008;
  double t8009;
  double t8010;
  double t8434;
  double t8440;
  double t8447;
  double t8451;
  double t8454;
  double t8459;
  double t8467;
  double t8469;
  double t8475;
  double t8476;
  double t8477;
  double t8456;
  double t8481;
  double t8488;
  double t8492;
  double t8501;
  double t8502;
  double t8503;
  double t8495;
  double t8500;
  double t8514;
  double t8515;
  double t8516;
  double t8518;
  double t8519;
  double t8522;
  double t8528;
  double t8531;
  double t8533;
  double t7127;
  double t7153;
  double t7157;
  double t7523;
  double t7528;
  double t7531;
  double t8271;
  double t8272;
  double t8750;
  double t8233;
  double t8243;
  double t8783;
  double t8786;
  double t8799;
  double t8801;
  double t8751;
  double t8752;
  double t8753;
  double t8764;
  double t8773;
  double t8774;
  double t8775;
  double t8776;
  double t8777;
  double t8778;
  double t8779;
  double t8780;
  double t8781;
  double t8785;
  double t8789;
  double t8790;
  double t8792;
  double t8794;
  double t8800;
  double t8806;
  double t8807;
  double t8855;
  double t8814;
  double t8815;
  double t8859;
  double t8821;
  double t8822;
  double t8827;
  double t8828;
  double t8879;
  double t8883;
  double t8889;
  double t8907;
  double t8909;
  double t8895;
  double t8946;
  double t8955;
  double t8012;
  double t8111;
  double t8121;
  double t8960;
  double t8962;
  double t8876;
  double t8877;
  double t8886;
  double t8887;
  double t8918;
  double t8919;
  double t8927;
  double t9139;
  double t8937;
  double t8938;
  double t8939;
  double t9147;
  double t9149;
  double t9225;
  double t9271;
  double t9285;
  double t8543;
  double t8545;
  double t8547;
  double t8594;
  double t8629;
  double t8644;
  double t8400;
  double t8410;
  double t8411;
  double t9119;
  double t9121;
  double t9523;
  double t8963;
  double t9524;
  double t9525;
  double t9526;
  double t9619;
  double t9621;
  double t9625;
  double t9628;
  double t9547;
  double t9555;
  double t9557;
  double t9558;
  double t9559;
  double t9560;
  double t9564;
  double t9579;
  double t9584;
  double t9592;
  double t9607;
  double t9611;
  double t9613;
  double t9620;
  double t9627;
  double t9634;
  double t9635;
  double t9641;
  double t9667;
  double t9644;
  double t9645;
  double t9671;
  double t9652;
  double t9653;
  double t9656;
  double t8559;
  double t8561;
  double t8564;
  double t9726;
  double t9736;
  double t9738;
  double t9713;
  double t9714;
  double t9715;
  double t9826;
  double t9832;
  double t8375;
  double t8376;
  double t8384;
  double t8278;
  double t8279;
  t3732 = Cos(var1[10]);
  t3810 = Cos(var1[11]);
  t3823 = -1.*t3732*t3810;
  t3884 = Sin(var1[10]);
  t3929 = Sin(var1[11]);
  t4224 = -1.*t3884*t3929;
  t4343 = t3823 + t4224;
  t5239 = Cos(var1[9]);
  t3372 = Cos(var1[5]);
  t3619 = Sin(var1[9]);
  t5458 = Sin(var1[5]);
  t6650 = Cos(var1[3]);
  t4635 = t3372*t3619*t4343;
  t5569 = t5239*t4343*t5458;
  t6254 = t4635 + t5569;
  t3008 = Sin(var1[3]);
  t6658 = Cos(var1[4]);
  t6688 = -1.*t3810*t3884;
  t6818 = t3732*t3929;
  t6831 = t6688 + t6818;
  t6938 = t6658*t6831;
  t7002 = Sin(var1[4]);
  t7004 = t5239*t3372*t4343;
  t7006 = -1.*t3619*t4343*t5458;
  t7013 = t7004 + t7006;
  t7016 = -1.*t7002*t7013;
  t7021 = t6938 + t7016;
  t7160 = -1.*t6831*t7002;
  t7171 = -1.*t6658*t7013;
  t7297 = t7160 + t7171;
  t7354 = -1.*t3810;
  t7357 = 1. + t7354;
  t7358 = -0.50321*t7357;
  t7359 = -0.19821*t3810;
  t7360 = t7358 + t7359;
  t7412 = -1.*t5239;
  t7414 = 1. + t7412;
  t7417 = -1.*t3732;
  t7418 = 1. + t7417;
  t7419 = -0.28121*t7418;
  t7424 = t3732*t7360;
  t7432 = 0.305*t3884*t3929;
  t7436 = t7419 + t7424 + t7432;
  t7338 = t3372*t3619;
  t7345 = t5239*t5458;
  t7349 = t7338 + t7345;
  t7353 = 0.28121*t3884;
  t7364 = t7360*t3884;
  t7366 = -0.305*t3732*t3929;
  t7383 = t7353 + t7364 + t7366;
  t7416 = -0.15121*t7414;
  t7437 = t5239*t7436;
  t7438 = t7416 + t7437;
  t7440 = t3372*t7438;
  t7443 = 0.15121*t7414;
  t7444 = 0.15121*t5239;
  t7445 = 0.15121*t3619;
  t7447 = t3619*t7436;
  t7452 = t7443 + t7444 + t7445 + t7447;
  t7453 = -1.*t7452*t5458;
  t7456 = t7440 + t7453;
  t7318 = t3732*t3810;
  t7326 = t3884*t3929;
  t7328 = t7318 + t7326;
  t7330 = t5239*t3372*t6831;
  t7332 = -1.*t3619*t6831*t5458;
  t7334 = t7330 + t7332;
  t7460 = t7383*t7002;
  t7462 = t6658*t7456;
  t7463 = t7460 + t7462;
  t7467 = t6658*t7328;
  t7468 = -1.*t7002*t7334;
  t7474 = t7467 + t7468;
  t7404 = -1.*t7383*t7002;
  t7457 = -1.*t6658*t7456;
  t7458 = t7404 + t7457;
  t7501 = t6658*t7383;
  t7502 = -1.*t7002*t7456;
  t7503 = t7501 + t7502;
  t7329 = t7328*t7002;
  t7336 = t6658*t7334;
  t7337 = t7329 + t7336;
  t7486 = t3372*t7452;
  t7487 = t7438*t5458;
  t7490 = t7486 + t7487;
  t7576 = -1.*t3372*t3619*t4343;
  t7577 = -1.*t5239*t4343*t5458;
  t7578 = t7576 + t7577;
  t7477 = -1.*t5239*t3372;
  t7484 = t3619*t5458;
  t7485 = t7477 + t7484;
  t7491 = -1.*t7485*t7490;
  t7542 = t3372*t3619*t6831;
  t7544 = t5239*t6831*t5458;
  t7546 = t7542 + t7544;
  t7601 = -1.*t3372*t7452;
  t7602 = -1.*t7438*t5458;
  t7607 = t7601 + t7602;
  t7547 = t7546*t7490;
  t7759 = -1.*t3372*t3619*t6831;
  t7770 = -1.*t5239*t6831*t5458;
  t7784 = t7759 + t7770;
  t7500 = -1.*t6658*t7349*t7463;
  t7506 = t7002*t7349*t7503;
  t7507 = t7491 + t7500 + t7506;
  t7614 = -1.*t7349*t7490;
  t7636 = -1.*t7485*t7456;
  t7615 = t5239*t3372;
  t7616 = -1.*t3619*t5458;
  t7617 = t7615 + t7616;
  t7722 = t7334*t7490;
  t7788 = t7546*t7456;
  t7548 = t7337*t7463;
  t7549 = t7474*t7503;
  t7560 = t7547 + t7548 + t7549;
  t7579 = var2[0]*t6658*t7578;
  t7580 = t3008*t7002*t7578;
  t7582 = t6650*t7013;
  t7583 = t7580 + t7582;
  t7584 = var2[1]*t7583;
  t7585 = -1.*t6650*t7002*t7578;
  t7588 = t3008*t7013;
  t7590 = t7585 + t7588;
  t7593 = var2[2]*t7590;
  t7594 = -1.*t7349*t7456;
  t7595 = t7491 + t7594;
  t7596 = t7334*t7595;
  t7839 = -0.15121*t3619;
  t7853 = -1.*t3619*t7436;
  t7854 = t7839 + t7853;
  t7832 = t7444 + t7437;
  t7626 = -1.*t7617*t7456;
  t7878 = t3372*t7854;
  t7881 = -1.*t7832*t5458;
  t7882 = t7878 + t7881;
  t7884 = t3372*t7832;
  t7885 = t7854*t5458;
  t7891 = t7884 + t7885;
  t7787 = t7784*t7456;
  t7791 = t7383*t7328;
  t7792 = t7334*t7456;
  t7793 = t7791 + t7547 + t7792;
  t7794 = t7349*t7793;
  t7802 = t6658*t7784*t7507;
  t7804 = Power(t6658,2);
  t7806 = Power(t7002,2);
  t7893 = -1.*t7485*t7891;
  t7808 = -1.*t6658*t7617*t7463;
  t7809 = t7002*t7617*t7503;
  t7978 = t7546*t7891;
  t7815 = t6658*t7784*t7463;
  t7816 = -1.*t7002*t7784*t7503;
  t7821 = t6658*t7617*t7560;
  t8000 = t3810*t3884;
  t8001 = -1.*t3732*t3929;
  t8002 = t8000 + t8001;
  t8013 = t5239*t3372*t8002;
  t8078 = -1.*t3619*t8002*t5458;
  t8094 = t8013 + t8078;
  t8150 = t3372*t3619*t8002;
  t8153 = t5239*t8002*t5458;
  t8163 = t8150 + t8153;
  t8170 = t6658*t4343;
  t8171 = -1.*t7002*t8094;
  t8185 = t8170 + t8171;
  t8201 = -0.28121*t3884;
  t8202 = -1.*t7360*t3884;
  t8207 = 0.305*t3732*t3929;
  t8210 = t8201 + t8202 + t8207;
  t8211 = t3372*t3619*t8210;
  t8212 = t5239*t8210*t5458;
  t8213 = t8211 + t8212;
  t8215 = t5239*t3372*t8210;
  t8220 = -1.*t3619*t8210*t5458;
  t8223 = t8215 + t8220;
  t8214 = -1.*t7485*t8213;
  t8234 = 0.28121*t3732;
  t8235 = t8234 + t7424 + t7432;
  t8239 = t8213*t7546;
  t8242 = t6254*t7490;
  t8252 = t8235*t7002;
  t8253 = t6658*t8223;
  t8254 = t8252 + t8253;
  t8257 = t6658*t8235;
  t8259 = -1.*t7002*t8223;
  t8260 = t8257 + t8259;
  t8264 = t6831*t7002;
  t8265 = t6658*t7013;
  t8266 = t8264 + t8265;
  t8003 = 0.15121*t8002;
  t8004 = 0.15121*t6831;
  t8005 = t8003 + t8004;
  t8006 = var2[9]*t8005;
  t8008 = -1.*t3619*t7438;
  t8009 = t5239*t7452;
  t8010 = t8008 + t8009;
  t8434 = 0.305*t3810*t3884;
  t8440 = t8434 + t7366;
  t8447 = t3372*t3619*t8440;
  t8451 = t5239*t8440*t5458;
  t8454 = t8447 + t8451;
  t8459 = t5239*t3372*t8440;
  t8467 = -1.*t3619*t8440*t5458;
  t8469 = t8459 + t8467;
  t8475 = t3372*t3619*t7328;
  t8476 = t5239*t7328*t5458;
  t8477 = t8475 + t8476;
  t8456 = -1.*t7485*t8454;
  t8481 = -0.305*t3732*t3810;
  t8488 = -0.305*t3884*t3929;
  t8492 = t8481 + t8488;
  t8501 = t5239*t3372*t7328;
  t8502 = -1.*t3619*t7328*t5458;
  t8503 = t8501 + t8502;
  t8495 = t8454*t7546;
  t8500 = t8477*t7490;
  t8514 = t8492*t7002;
  t8515 = t6658*t8469;
  t8516 = t8514 + t8515;
  t8518 = t6658*t8492;
  t8519 = -1.*t7002*t8469;
  t8522 = t8518 + t8519;
  t8528 = t8002*t7002;
  t8531 = t6658*t8503;
  t8533 = t8528 + t8531;
  t7127 = t6650*t6254;
  t7153 = -1.*t3008*t7021;
  t7157 = t7127 + t7153;
  t7523 = -1.*t7328*t7002;
  t7528 = -1.*t6658*t7334;
  t7531 = t7523 + t7528;
  t8271 = t8266*t7463;
  t8272 = t7021*t7503;
  t8750 = -1.*t7546*t7490;
  t8233 = t7383*t6831;
  t8243 = t7013*t7456;
  t8783 = -1.*t7334*t7490;
  t8786 = -1.*t7546*t7456;
  t8799 = t7013*t7490;
  t8801 = t6254*t7456;
  t8751 = -1.*t7337*t7463;
  t8752 = -1.*t7474*t7503;
  t8753 = t8750 + t8751 + t8752;
  t8764 = t8242 + t8271 + t8272;
  t8773 = var2[0]*t6658*t7617;
  t8774 = t3008*t7349;
  t8775 = -1.*t6650*t7002*t7617;
  t8776 = t8774 + t8775;
  t8777 = var2[2]*t8776;
  t8778 = t6650*t7349;
  t8779 = t3008*t7002*t7617;
  t8780 = t8778 + t8779;
  t8781 = var2[1]*t8780;
  t8785 = -1.*t7784*t7456;
  t8789 = -1.*t7383*t7328;
  t8790 = -1.*t7334*t7456;
  t8792 = t8789 + t8750 + t8790;
  t8794 = t7013*t8792;
  t8800 = t7578*t7456;
  t8806 = t8233 + t8242 + t8243;
  t8807 = t7334*t8806;
  t8855 = -1.*t7546*t7891;
  t8814 = -1.*t6658*t7784*t7463;
  t8815 = t7002*t7784*t7503;
  t8859 = t6254*t7891;
  t8821 = t6658*t7578*t7463;
  t8822 = -1.*t7002*t7578*t7503;
  t8827 = t6658*t7578*t8753;
  t8828 = t6658*t7784*t8764;
  t8879 = t7383*t4343;
  t8883 = t6831*t8235;
  t8889 = -1.*t7383*t6831;
  t8907 = Power(t5239,2);
  t8909 = Power(t3619,2);
  t8895 = -1.*t8235*t7328;
  t8946 = t8213*t6254;
  t8955 = t8163*t7490;
  t8012 = t4343*t7002;
  t8111 = t6658*t8094;
  t8121 = t8012 + t8111;
  t8960 = -1.*t8213*t7546;
  t8962 = -1.*t6254*t7490;
  t8876 = t4343*t7436;
  t8877 = t8233 + t8876;
  t8886 = -1.*t6831*t7436;
  t8887 = t8886 + t8789;
  t8918 = -1.*t5239*t6831*t7438;
  t8919 = -1.*t3619*t6831*t7452;
  t8927 = t8789 + t8918 + t8919;
  t9139 = t6831*t8492;
  t8937 = t5239*t4343*t7438;
  t8938 = t3619*t4343*t7452;
  t8939 = t8233 + t8937 + t8938;
  t9147 = -1.*t8002*t7383;
  t9149 = -1.*t8492*t7328;
  t9225 = t8454*t6254;
  t9271 = -1.*t8454*t7546;
  t9285 = -1.*t8477*t7490;
  t8543 = t6658*t8002;
  t8545 = -1.*t7002*t8503;
  t8547 = t8543 + t8545;
  t8594 = t3008*t7002*t7349;
  t8629 = t6650*t7485;
  t8644 = t8594 + t8629;
  t8400 = t6650*t7546;
  t8410 = -1.*t3008*t7474;
  t8411 = t8400 + t8410;
  t9119 = -1.*t8266*t7463;
  t9121 = -1.*t7021*t7503;
  t9523 = t7485*t7490;
  t8963 = -1.*t7013*t7456;
  t9524 = t6658*t7349*t7463;
  t9525 = -1.*t7002*t7349*t7503;
  t9526 = t9523 + t9524 + t9525;
  t9619 = t7349*t7490;
  t9621 = t7485*t7456;
  t9625 = -1.*t7013*t7490;
  t9628 = -1.*t6254*t7456;
  t9547 = t8962 + t9119 + t9121;
  t9555 = var2[0]*t6658*t7784;
  t9557 = t3008*t7002*t7784;
  t9558 = t6650*t7334;
  t9559 = t9557 + t9558;
  t9560 = var2[1]*t9559;
  t9564 = -1.*t6650*t7002*t7784;
  t9579 = t3008*t7334;
  t9584 = t9564 + t9579;
  t9592 = var2[2]*t9584;
  t9607 = t7349*t7456;
  t9611 = t9523 + t9607;
  t9613 = t7013*t9611;
  t9620 = t7617*t7456;
  t9627 = -1.*t7578*t7456;
  t9634 = t8889 + t8962 + t8963;
  t9635 = t7349*t9634;
  t9641 = t6658*t7578*t9526;
  t9667 = t7485*t7891;
  t9644 = t6658*t7617*t7463;
  t9645 = -1.*t7002*t7617*t7503;
  t9671 = -1.*t6254*t7891;
  t9652 = -1.*t6658*t7578*t7463;
  t9653 = t7002*t7578*t7503;
  t9656 = t6658*t7617*t9547;
  t8559 = t3008*t6254;
  t8561 = t6650*t7021;
  t8564 = t8559 + t8561;
  t9726 = t7485*t8213;
  t9736 = -1.*t8213*t6254;
  t9738 = -1.*t8163*t7490;
  t9713 = t3619*t7438;
  t9714 = -1.*t5239*t7452;
  t9715 = t9713 + t9714;
  t9826 = t7485*t8454;
  t9832 = -1.*t8454*t6254;
  t8375 = t3008*t7546;
  t8376 = t6650*t7474;
  t8384 = t8375 + t8376;
  t8278 = 0.28121*t3810;
  t8279 = t7360*t3810;
  p_output1[0]=(-1.*t3008*t6254 - 1.*t6650*t7021)*var2[1] + t7157*var2[2];
  p_output1[1]=t7021*var2[0] - 1.*t3008*t7297*var2[1] + t6650*t7297*var2[2] + (t7337*(t7002*t7349*t7458 + t7002*t7349*t7463) + t7474*t7507 + t6658*t7349*(t7458*t7474 + t7463*t7474 + t7337*t7503 + t7503*t7531) - 1.*t7002*t7349*t7560)*var2[3];
  p_output1[2]=t7579 + t7584 + t7593 + (t7802 + t7337*(t7614 + t7636 - 1.*t7349*t7607*t7804 - 1.*t7349*t7607*t7806 + t7808 + t7809) + t6658*t7349*(t6658*t7337*t7607 - 1.*t7002*t7474*t7607 + t7722 + t7788 + t7815 + t7816) + t7821)*var2[3] + (t7596 + t7546*(-1.*t7349*t7607 + t7614 + t7626 + t7636) + t7485*(t7334*t7607 + t7722 + t7787 + t7788) + t7794)*var2[4];
  p_output1[3]=t7579 + t7584 + t7593 + (t7802 + t7821 + t7337*(t7614 + t7808 + t7809 - 1.*t7349*t7804*t7882 - 1.*t7349*t7806*t7882 + t7893) + t6658*t7349*(t7722 + t7815 + t7816 + t6658*t7337*t7882 - 1.*t7002*t7474*t7882 + t7978))*var2[3] + (t7596 + t7794 + t7546*(t7614 + t7626 - 1.*t7349*t7882 + t7893) + t7485*(t7722 + t7787 + t7334*t7882 + t7978))*var2[4] + t7328*(-1.*t5239*t7438 - 1.*t3619*t7452 + t5239*t7832 - 1.*t3619*t7854)*var2[5];
  p_output1[4]=t8006 + t8121*var2[0] + (t6650*t8163 - 1.*t3008*t8185)*var2[1] + (t3008*t8163 + t6650*t8185)*var2[2] + (t7337*(t8214 - 1.*t6658*t7349*t8254 + t7002*t7349*t8260) + t7507*t8266 + t6658*t7349*(t8239 + t8242 + t7337*t8254 + t7474*t8260 + t8271 + t8272))*var2[3] + (t6254*t7595 + t7546*(t8214 - 1.*t7349*t8223) + t7485*(t7334*t8223 + t8233 + t7328*t8235 + t8239 + t8242 + t8243))*var2[4] + t6831*t8010*var2[5];
  p_output1[5]=t8006 + t7337*var2[0] + t8411*var2[1] + t8384*var2[2] + (t7337*(t8456 - 1.*t6658*t7349*t8516 + t7002*t7349*t8522) + t7507*t8533 + t6658*t7349*(t8495 + t8500 + t7337*t8516 + t7474*t8522 + t7463*t8533 + t7503*t8547))*var2[3] + (t7546*(t8456 - 1.*t7349*t8469) + t7595*t8477 + t7485*(t7383*t8002 + t7334*t8469 + t7328*t8492 + t8495 + t8500 + t7456*t8503))*var2[4] + t8002*t8010*var2[5] + (-0.305*Power(t3810,2) + t8278 + t8279)*var2[10];
  p_output1[6]=t8266;
  p_output1[7]=t7157;
  p_output1[8]=t8564;
  p_output1[9]=t7337*t7507 + t6658*t7349*t7560;
  p_output1[10]=t7546*t7595 + t7485*t7793;
  p_output1[11]=t7328*t8010;
  p_output1[12]=0.15121*t4343 + 0.15121*t7328;
  p_output1[13]=0.28121*t3929 - 0.305*t3810*t3929 + t3929*t7360;
  p_output1[14]=(t6650*t7002*t7349 - 1.*t3008*t7485)*var2[1] + t8644*var2[2];
  p_output1[15]=-1.*t7002*t7349*var2[0] + t3008*t6658*t7349*var2[1] - 1.*t6650*t6658*t7349*var2[2] + ((-1.*t7458*t7474 - 1.*t7463*t7474 - 1.*t7337*t7503 - 1.*t7503*t7531)*t8266 + t7337*(t7021*t7458 + t7021*t7463 + t7297*t7503 + t7503*t8266) + t7021*t8753 + t7474*t8764)*var2[3];
  p_output1[16]=t8773 + t8777 + t8781 + (t8266*(-1.*t6658*t7337*t7607 + t7002*t7474*t7607 + t8783 + t8786 + t8814 + t8815) + t7337*(-1.*t7002*t7021*t7607 + t6658*t7607*t8266 + t8799 + t8801 + t8821 + t8822) + t8827 + t8828)*var2[3] + (t6254*(-1.*t7334*t7607 + t8783 + t8785 + t8786) + t8794 + t7546*(t7013*t7607 + t8799 + t8800 + t8801) + t8807)*var2[4];
  p_output1[17]=t8773 + t8777 + t8781 + (t8827 + t8828 + t8266*(-1.*t6658*t7337*t7882 + t7002*t7474*t7882 + t8783 + t8814 + t8815 + t8855) + t7337*(-1.*t7002*t7021*t7882 + t6658*t7882*t8266 + t8799 + t8821 + t8822 + t8859))*var2[3] + (t8794 + t8807 + t6254*(-1.*t7334*t7882 + t8783 + t8785 + t8855) + t7546*(t7013*t7882 + t8799 + t8800 + t8859))*var2[4] + (t7328*(-1.*t3619*t4343*t7438 + t4343*t5239*t7452 + t3619*t4343*t7832 + t4343*t5239*t7854) + t6831*(t3619*t6831*t7438 - 1.*t5239*t6831*t7452 - 1.*t3619*t6831*t7832 - 1.*t5239*t6831*t7854))*var2[5];
  p_output1[18]=(t8121*t8753 + t8266*t8764 + t7337*(t7463*t8121 + t7503*t8185 + t7021*t8260 + t8254*t8266 + t8946 + t8955) + t8266*(-1.*t7337*t8254 - 1.*t7474*t8260 + t8960 + t8962 + t9119 + t9121))*var2[3] + (t8163*t8792 + t6254*t8806 + t7546*(t7456*t8094 + t7013*t8223 + t8879 + t8883 + t8946 + t8955) + t6254*(-1.*t7334*t8223 + t8889 + t8895 + t8960 + t8962 + t8963))*var2[4] + (t7328*(t5239*t7438*t8002 + t3619*t7452*t8002 + t8879 + t8883 + t4343*t8210*t8907 + t4343*t8210*t8909) + t6831*(-1.*t4343*t5239*t7438 - 1.*t3619*t4343*t7452 + t8889 + t8895 - 1.*t6831*t8210*t8907 - 1.*t6831*t8210*t8909) + t4343*t8927 + t6831*t8939)*var2[5] + (t6831*t8877 + t7328*(t7436*t8002 + t4343*t8210 + t8879 + t8883) + t4343*t8887 + t6831*(-1.*t4343*t7436 - 1.*t6831*t8210 + t8889 + t8895))*var2[9];
  p_output1[19]=(t7337*t8753 + t8533*t8764 + t7337*(t7547 + t7548 + t7549 + t8266*t8516 + t7021*t8522 + t9225) + t8266*(-1.*t7337*t8516 - 1.*t7474*t8522 - 1.*t7463*t8533 - 1.*t7503*t8547 + t9271 + t9285))*var2[3] + (t7546*t8792 + t8477*t8806 + t7546*(t7547 + t7791 + t7792 + t7013*t8469 + t9139 + t9225) + t6254*(-1.*t7334*t8469 - 1.*t7456*t8503 + t9147 + t9149 + t9271 + t9285))*var2[4] + (t7328*t8927 + t8002*t8939 + t7328*(t5239*t6831*t7438 + t3619*t6831*t7452 + t7791 + t4343*t8440*t8907 + t4343*t8440*t8909 + t9139) + t6831*(-1.*t5239*t7328*t7438 - 1.*t3619*t7328*t7452 - 1.*t6831*t8440*t8907 - 1.*t6831*t8440*t8909 + t9147 + t9149))*var2[5] + (t8002*t8877 + t7328*t8887 + t7328*(t6831*t7436 + t7791 + t4343*t8440 + t9139) + t6831*(-1.*t7328*t7436 - 1.*t6831*t8440 + t9147 + t9149))*var2[9];
  p_output1[20]=t6658*t7349;
  p_output1[21]=t8644;
  p_output1[22]=-1.*t6650*t7002*t7349 + t3008*t7485;
  p_output1[23]=t8266*t8753 + t7337*t8764;
  p_output1[24]=t6254*t8792 + t7546*t8806;
  p_output1[25]=t6831*t8927 + t7328*t8939;
  p_output1[26]=-0.15121 + t7328*t8877 + t6831*t8887;
  p_output1[27]=(-1.*t6650*t7474 - 1.*t3008*t7546)*var2[1] + t8411*var2[2];
  p_output1[28]=t7474*var2[0] - 1.*t3008*t7531*var2[1] + t6650*t7531*var2[2] + ((-1.*t7002*t7349*t7458 - 1.*t7002*t7349*t7463)*t8266 + t6658*t7349*(-1.*t7021*t7458 - 1.*t7021*t7463 - 1.*t7297*t7503 - 1.*t7503*t8266) + t7021*t9526 - 1.*t7002*t7349*t9547)*var2[3];
  p_output1[29]=t9555 + t9560 + t9592 + (t9641 + t8266*(t7349*t7607*t7804 + t7349*t7607*t7806 + t9619 + t9621 + t9644 + t9645) + t6658*t7349*(t7002*t7021*t7607 - 1.*t6658*t7607*t8266 + t9625 + t9628 + t9652 + t9653) + t9656)*var2[3] + (t9613 + t6254*(t7349*t7607 + t9619 + t9620 + t9621) + t7485*(-1.*t7013*t7607 + t9625 + t9627 + t9628) + t9635)*var2[4];
  p_output1[30]=t9555 + t9560 + t9592 + (t9641 + t9656 + t8266*(t7349*t7804*t7882 + t7349*t7806*t7882 + t9619 + t9644 + t9645 + t9667) + t6658*t7349*(t7002*t7021*t7882 - 1.*t6658*t7882*t8266 + t9625 + t9652 + t9653 + t9671))*var2[3] + (t9613 + t9635 + t6254*(t7349*t7882 + t9619 + t9620 + t9667) + t7485*(-1.*t7013*t7882 + t9625 + t9627 + t9671))*var2[4] + t6831*(t5239*t7438 + t3619*t7452 - 1.*t5239*t7832 + t3619*t7854)*var2[5];
  p_output1[31]=t8266*var2[0] + t7157*var2[1] + t8564*var2[2] + (t8121*t9526 + t8266*(t6658*t7349*t8254 - 1.*t7002*t7349*t8260 + t9726) + t6658*t7349*(-1.*t7463*t8121 - 1.*t7503*t8185 - 1.*t7021*t8260 - 1.*t8254*t8266 + t9736 + t9738))*var2[3] + (t8163*t9611 + t6254*(t7349*t8223 + t9726) + t7485*(-1.*t4343*t7383 - 1.*t7456*t8094 - 1.*t7013*t8223 - 1.*t6831*t8235 + t9736 + t9738))*var2[4] + t4343*t9715*var2[5];
  p_output1[32]=t8533*var2[0] + (t6650*t8477 - 1.*t3008*t8547)*var2[1] + (t3008*t8477 + t6650*t8547)*var2[2] + (t7337*t9526 + t8266*(t6658*t7349*t8516 - 1.*t7002*t7349*t8522 + t9826) + t6658*t7349*(-1.*t8266*t8516 - 1.*t7021*t8522 + t8750 + t8751 + t8752 + t9832))*var2[3] + (t7546*t9611 + t6254*(t7349*t8469 + t9826) + t7485*(-1.*t7013*t8469 - 1.*t6831*t8492 + t8750 + t8789 + t8790 + t9832))*var2[4] + t7328*t9715*var2[5] + (-0.28121*t3929 + 0.305*t3810*t3929 - 1.*t3929*t7360)*var2[10];
  p_output1[33]=t7337;
  p_output1[34]=t8411;
  p_output1[35]=t8384;
  p_output1[36]=t8266*t9526 + t6658*t7349*t9547;
  p_output1[37]=t6254*t9611 + t7485*t9634;
  p_output1[38]=t6831*t9715;
  p_output1[39]=0.305*Power(t3929,2) + t8278 + t8279;
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

#include "J_dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
