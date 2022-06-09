/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 19:00:02 GMT+02:00
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
  double t7036;
  double t7037;
  double t7041;
  double t7042;
  double t7046;
  double t7050;
  double t7051;
  double t7053;
  double t7021;
  double t7035;
  double t7054;
  double t7058;
  double t7052;
  double t7055;
  double t7056;
  double t6993;
  double t7059;
  double t7060;
  double t7095;
  double t7099;
  double t7100;
  double t7101;
  double t7103;
  double t7104;
  double t7105;
  double t7106;
  double t7107;
  double t7118;
  double t7120;
  double t7121;
  double t7123;
  double t7125;
  double t7126;
  double t7135;
  double t7136;
  double t7137;
  double t7139;
  double t7140;
  double t7141;
  double t7144;
  double t7145;
  double t7146;
  double t7147;
  double t7148;
  double t7149;
  double t7158;
  double t7159;
  double t7160;
  double t7168;
  double t7169;
  double t7170;
  double t7171;
  double t7172;
  double t7177;
  double t7178;
  double t7179;
  double t7180;
  double t7181;
  double t7182;
  double t7183;
  double t7184;
  double t7185;
  double t7167;
  double t7173;
  double t7174;
  double t7175;
  double t7186;
  double t7187;
  double t7188;
  double t7189;
  double t7190;
  double t7191;
  double t7192;
  double t7193;
  double t7194;
  double t7198;
  double t7199;
  double t7200;
  double t7176;
  double t7195;
  double t7196;
  double t7209;
  double t7210;
  double t7211;
  double t7164;
  double t7165;
  double t7166;
  double t7204;
  double t7205;
  double t7206;
  double t7217;
  double t7218;
  double t7219;
  double t7235;
  double t7236;
  double t7237;
  double t7289;
  double t7290;
  double t7291;
  double t7207;
  double t7304;
  double t7305;
  double t7306;
  double t7224;
  double t7318;
  double t7319;
  double t7320;
  double t7208;
  double t7212;
  double t7213;
  double t7308;
  double t7309;
  double t7310;
  double t7311;
  double t7312;
  double t7317;
  double t7322;
  double t7225;
  double t7226;
  double t7227;
  double t7244;
  double t7255;
  double t7360;
  double t7362;
  double t7370;
  double t7372;
  double t7245;
  double t7246;
  double t7247;
  double t7256;
  double t7257;
  double t7258;
  double t7270;
  double t7281;
  double t7271;
  double t7272;
  double t7273;
  double t7332;
  double t7334;
  double t7411;
  double t7412;
  double t7417;
  double t7419;
  double t7282;
  double t7283;
  double t7284;
  double t7292;
  double t7293;
  double t7294;
  double t7295;
  double t7296;
  double t7297;
  double t7298;
  double t7299;
  double t7300;
  double t7301;
  double t7302;
  double t7303;
  double t7446;
  double t7447;
  double t7449;
  double t7450;
  double t7451;
  double t7313;
  double t7456;
  double t7457;
  double t7458;
  double t7460;
  double t7461;
  double t7462;
  double t7321;
  double t7325;
  double t7326;
  double t7327;
  double t7328;
  double t7331;
  double t7463;
  double t7336;
  double t7337;
  double t7467;
  double t7342;
  double t7343;
  double t7346;
  double t7350;
  double t7351;
  double t7352;
  double t7353;
  double t7354;
  double t7355;
  double t7356;
  double t7357;
  double t7358;
  double t7361;
  double t7365;
  double t7366;
  double t7367;
  double t7368;
  double t7371;
  double t7375;
  double t7376;
  double t7377;
  double t7378;
  double t7498;
  double t7383;
  double t7384;
  double t7502;
  double t7389;
  double t7390;
  double t7393;
  double t7394;
  double t7398;
  double t7399;
  double t7400;
  double t7401;
  double t7402;
  double t7403;
  double t7404;
  double t7405;
  double t7406;
  double t7407;
  double t7408;
  double t7409;
  double t7413;
  double t7418;
  double t7422;
  double t7423;
  double t7424;
  double t7425;
  double t7428;
  double t7525;
  double t7431;
  double t7432;
  double t7529;
  double t7437;
  double t7438;
  double t7441;
  double t7545;
  double t7546;
  double t7547;
  double t7549;
  double t7550;
  double t7551;
  double t7559;
  double t7560;
  double t7561;
  double t7563;
  double t7564;
  double t7565;
  double t7573;
  double t7574;
  double t7575;
  double t7577;
  double t7578;
  double t7579;
  double t7576;
  double t7584;
  double t7585;
  double t7586;
  double t7587;
  double t7589;
  double t7595;
  double t7596;
  double t7597;
  double t7599;
  double t7600;
  double t7601;
  double t7616;
  double t7618;
  double t7635;
  double t7637;
  double t7626;
  double t7548;
  double t7552;
  double t7553;
  double t7656;
  double t7658;
  double t7662;
  double t7112;
  double t7114;
  double t7115;
  double t7698;
  double t7705;
  double t7707;
  double t7555;
  double t7556;
  double t7557;
  double t7153;
  double t7154;
  double t7155;
  double t7740;
  double t7741;
  double t7742;
  double t7743;
  double t7744;
  double t7745;
  double t7747;
  double t7748;
  double t7749;
  double t7753;
  double t7754;
  double t7755;
  double t7746;
  double t7758;
  double t7759;
  double t7764;
  double t7765;
  double t7766;
  double t7761;
  double t7772;
  double t7773;
  double t7774;
  double t7776;
  double t7777;
  double t7778;
  double t7763;
  double t7782;
  double t7783;
  double t7784;
  double t7613;
  double t7614;
  double t7621;
  double t7622;
  double t7624;
  double t7631;
  double t7632;
  double t7633;
  double t7800;
  double t7807;
  double t7649;
  double t7650;
  double t7651;
  double t7829;
  double t7833;
  double t7835;
  double t7789;
  double t7790;
  double t7791;
  double t7684;
  double t7685;
  double t7686;
  double t7687;
  double t7688;
  double t7689;
  double t7690;
  double t7872;
  double t7878;
  t7036 = Cos(var1[7]);
  t7037 = Cos(var1[8]);
  t7041 = t7036*t7037;
  t7042 = Sin(var1[7]);
  t7046 = Sin(var1[8]);
  t7050 = t7042*t7046;
  t7051 = t7041 + t7050;
  t7053 = Cos(var1[5]);
  t7021 = Cos(var1[6]);
  t7035 = Sin(var1[5]);
  t7054 = Sin(var1[6]);
  t7058 = Cos(var1[3]);
  t7052 = t7021*t7035*t7051;
  t7055 = t7053*t7054*t7051;
  t7056 = t7052 + t7055;
  t6993 = Sin(var1[3]);
  t7059 = Cos(var1[4]);
  t7060 = -1.*t7037*t7042;
  t7095 = t7036*t7046;
  t7099 = t7060 + t7095;
  t7100 = t7059*t7099;
  t7101 = Sin(var1[4]);
  t7103 = t7053*t7021*t7051;
  t7104 = -1.*t7035*t7054*t7051;
  t7105 = t7103 + t7104;
  t7106 = -1.*t7101*t7105;
  t7107 = t7100 + t7106;
  t7118 = -1.*t7021*t7035;
  t7120 = -1.*t7053*t7054;
  t7121 = t7118 + t7120;
  t7123 = t7053*t7021;
  t7125 = -1.*t7035*t7054;
  t7126 = t7123 + t7125;
  t7135 = t7037*t7042;
  t7136 = -1.*t7036*t7046;
  t7137 = t7135 + t7136;
  t7139 = t7021*t7035*t7137;
  t7140 = t7053*t7054*t7137;
  t7141 = t7139 + t7140;
  t7144 = t7059*t7051;
  t7145 = t7053*t7021*t7137;
  t7146 = -1.*t7035*t7054*t7137;
  t7147 = t7145 + t7146;
  t7148 = -1.*t7101*t7147;
  t7149 = t7144 + t7148;
  t7158 = -1.*t7101*t7099;
  t7159 = -1.*t7059*t7105;
  t7160 = t7158 + t7159;
  t7168 = -1.*t7037;
  t7169 = 1. + t7168;
  t7170 = 0.50321*t7169;
  t7171 = 0.19821*t7037;
  t7172 = t7170 + t7171;
  t7177 = -1.*t7021;
  t7178 = 1. + t7177;
  t7179 = 0.15121*t7178;
  t7180 = -1.*t7036;
  t7181 = 1. + t7180;
  t7182 = 0.28121*t7181;
  t7183 = t7036*t7172;
  t7184 = -0.305*t7042*t7046;
  t7185 = t7182 + t7183 + t7184;
  t7167 = 0.28121*t7042;
  t7173 = -1.*t7172*t7042;
  t7174 = -0.305*t7036*t7046;
  t7175 = t7167 + t7173 + t7174;
  t7186 = t7021*t7185;
  t7187 = t7179 + t7186;
  t7188 = t7053*t7187;
  t7189 = 0.15121*t7021;
  t7190 = -0.15121*t7054;
  t7191 = t7054*t7185;
  t7192 = t7179 + t7189 + t7190 + t7191;
  t7193 = -1.*t7035*t7192;
  t7194 = t7188 + t7193;
  t7198 = t7101*t7175;
  t7199 = t7059*t7194;
  t7200 = t7198 + t7199;
  t7176 = -1.*t7101*t7175;
  t7195 = -1.*t7059*t7194;
  t7196 = t7176 + t7195;
  t7209 = t7059*t7175;
  t7210 = -1.*t7101*t7194;
  t7211 = t7209 + t7210;
  t7164 = t7101*t7051;
  t7165 = t7059*t7147;
  t7166 = t7164 + t7165;
  t7204 = t7035*t7187;
  t7205 = t7053*t7192;
  t7206 = t7204 + t7205;
  t7217 = -1.*t7101*t7051;
  t7218 = -1.*t7059*t7147;
  t7219 = t7217 + t7218;
  t7235 = t7101*t7099;
  t7236 = t7059*t7105;
  t7237 = t7235 + t7236;
  t7289 = -1.*t7021*t7035*t7051;
  t7290 = -1.*t7053*t7054*t7051;
  t7291 = t7289 + t7290;
  t7207 = -1.*t7126*t7206;
  t7304 = -1.*t7035*t7187;
  t7305 = -1.*t7053*t7192;
  t7306 = t7304 + t7305;
  t7224 = t7141*t7206;
  t7318 = -1.*t7021*t7035*t7137;
  t7319 = -1.*t7053*t7054*t7137;
  t7320 = t7318 + t7319;
  t7208 = -1.*t7059*t7121*t7200;
  t7212 = t7101*t7121*t7211;
  t7213 = t7207 + t7208 + t7212;
  t7308 = -1.*t7121*t7206;
  t7309 = -1.*t7126*t7194;
  t7310 = -1.*t7053*t7021;
  t7311 = t7035*t7054;
  t7312 = t7310 + t7311;
  t7317 = t7147*t7206;
  t7322 = t7141*t7194;
  t7225 = t7166*t7200;
  t7226 = t7149*t7211;
  t7227 = t7224 + t7225 + t7226;
  t7244 = -1.*t7141*t7206;
  t7255 = t7056*t7206;
  t7360 = -1.*t7147*t7206;
  t7362 = -1.*t7141*t7194;
  t7370 = t7105*t7206;
  t7372 = t7056*t7194;
  t7245 = -1.*t7166*t7200;
  t7246 = -1.*t7149*t7211;
  t7247 = t7244 + t7245 + t7246;
  t7256 = t7237*t7200;
  t7257 = t7107*t7211;
  t7258 = t7255 + t7256 + t7257;
  t7270 = t7126*t7206;
  t7281 = -1.*t7056*t7206;
  t7271 = t7059*t7121*t7200;
  t7272 = -1.*t7101*t7121*t7211;
  t7273 = t7270 + t7271 + t7272;
  t7332 = Power(t7059,2);
  t7334 = Power(t7101,2);
  t7411 = t7121*t7206;
  t7412 = t7126*t7194;
  t7417 = -1.*t7105*t7206;
  t7419 = -1.*t7056*t7194;
  t7282 = -1.*t7237*t7200;
  t7283 = -1.*t7107*t7211;
  t7284 = t7281 + t7282 + t7283;
  t7292 = var2[0]*t7059*t7291;
  t7293 = t6993*t7101*t7291;
  t7294 = t7058*t7105;
  t7295 = t7293 + t7294;
  t7296 = var2[1]*t7295;
  t7297 = -1.*t7058*t7101*t7291;
  t7298 = t6993*t7105;
  t7299 = t7297 + t7298;
  t7300 = var2[2]*t7299;
  t7301 = -1.*t7121*t7194;
  t7302 = t7207 + t7301;
  t7303 = t7147*t7302;
  t7446 = -0.15121*t7021;
  t7447 = t7446 + t7186;
  t7449 = 0.15121*t7054;
  t7450 = -1.*t7054*t7185;
  t7451 = t7449 + t7450;
  t7313 = -1.*t7312*t7194;
  t7456 = -1.*t7035*t7447;
  t7457 = t7053*t7451;
  t7458 = t7456 + t7457;
  t7460 = t7053*t7447;
  t7461 = t7035*t7451;
  t7462 = t7460 + t7461;
  t7321 = t7320*t7194;
  t7325 = t7175*t7051;
  t7326 = t7147*t7194;
  t7327 = t7325 + t7224 + t7326;
  t7328 = t7121*t7327;
  t7331 = t7059*t7320*t7213;
  t7463 = -1.*t7126*t7462;
  t7336 = -1.*t7059*t7312*t7200;
  t7337 = t7101*t7312*t7211;
  t7467 = t7141*t7462;
  t7342 = t7059*t7320*t7200;
  t7343 = -1.*t7101*t7320*t7211;
  t7346 = t7059*t7312*t7227;
  t7350 = var2[0]*t7059*t7312;
  t7351 = t6993*t7121;
  t7352 = -1.*t7058*t7101*t7312;
  t7353 = t7351 + t7352;
  t7354 = var2[2]*t7353;
  t7355 = t7058*t7121;
  t7356 = t6993*t7101*t7312;
  t7357 = t7355 + t7356;
  t7358 = var2[1]*t7357;
  t7361 = -1.*t7320*t7194;
  t7365 = -1.*t7175*t7051;
  t7366 = -1.*t7147*t7194;
  t7367 = t7365 + t7244 + t7366;
  t7368 = t7105*t7367;
  t7371 = t7291*t7194;
  t7375 = t7175*t7099;
  t7376 = t7105*t7194;
  t7377 = t7375 + t7255 + t7376;
  t7378 = t7147*t7377;
  t7498 = -1.*t7141*t7462;
  t7383 = -1.*t7059*t7320*t7200;
  t7384 = t7101*t7320*t7211;
  t7502 = t7056*t7462;
  t7389 = t7059*t7291*t7200;
  t7390 = -1.*t7101*t7291*t7211;
  t7393 = t7059*t7291*t7247;
  t7394 = t7059*t7320*t7258;
  t7398 = var2[0]*t7059*t7320;
  t7399 = t6993*t7101*t7320;
  t7400 = t7058*t7147;
  t7401 = t7399 + t7400;
  t7402 = var2[1]*t7401;
  t7403 = -1.*t7058*t7101*t7320;
  t7404 = t6993*t7147;
  t7405 = t7403 + t7404;
  t7406 = var2[2]*t7405;
  t7407 = t7121*t7194;
  t7408 = t7270 + t7407;
  t7409 = t7105*t7408;
  t7413 = t7312*t7194;
  t7418 = -1.*t7291*t7194;
  t7422 = -1.*t7175*t7099;
  t7423 = -1.*t7105*t7194;
  t7424 = t7422 + t7281 + t7423;
  t7425 = t7121*t7424;
  t7428 = t7059*t7291*t7273;
  t7525 = t7126*t7462;
  t7431 = t7059*t7312*t7200;
  t7432 = -1.*t7101*t7312*t7211;
  t7529 = -1.*t7056*t7462;
  t7437 = -1.*t7059*t7291*t7200;
  t7438 = t7101*t7291*t7211;
  t7441 = t7059*t7312*t7284;
  t7545 = -1.*t7036*t7037;
  t7546 = -1.*t7042*t7046;
  t7547 = t7545 + t7546;
  t7549 = t7053*t7021*t7099;
  t7550 = -1.*t7035*t7054*t7099;
  t7551 = t7549 + t7550;
  t7559 = t7021*t7035*t7099;
  t7560 = t7053*t7054*t7099;
  t7561 = t7559 + t7560;
  t7563 = t7059*t7547;
  t7564 = -1.*t7101*t7551;
  t7565 = t7563 + t7564;
  t7573 = t7021*t7035*t7175;
  t7574 = t7053*t7054*t7175;
  t7575 = t7573 + t7574;
  t7577 = t7053*t7021*t7175;
  t7578 = -1.*t7035*t7054*t7175;
  t7579 = t7577 + t7578;
  t7576 = -1.*t7126*t7575;
  t7584 = 0.28121*t7036;
  t7585 = -1.*t7036*t7172;
  t7586 = 0.305*t7042*t7046;
  t7587 = t7584 + t7585 + t7586;
  t7589 = t7141*t7575;
  t7595 = t7101*t7587;
  t7596 = t7059*t7579;
  t7597 = t7595 + t7596;
  t7599 = t7059*t7587;
  t7600 = -1.*t7101*t7579;
  t7601 = t7599 + t7600;
  t7616 = t7175*t7547;
  t7618 = t7099*t7587;
  t7635 = Power(t7021,2);
  t7637 = Power(t7054,2);
  t7626 = -1.*t7587*t7051;
  t7548 = t7101*t7547;
  t7552 = t7059*t7551;
  t7553 = t7548 + t7552;
  t7656 = t7575*t7056;
  t7658 = t7561*t7206;
  t7662 = -1.*t7141*t7575;
  t7112 = t7058*t7056;
  t7114 = -1.*t6993*t7107;
  t7115 = t7112 + t7114;
  t7698 = t7126*t7575;
  t7705 = -1.*t7575*t7056;
  t7707 = -1.*t7561*t7206;
  t7555 = t7054*t7187;
  t7556 = -1.*t7021*t7192;
  t7557 = t7555 + t7556;
  t7153 = t7058*t7141;
  t7154 = -1.*t6993*t7149;
  t7155 = t7153 + t7154;
  t7740 = -0.305*t7037*t7042;
  t7741 = 0.305*t7036*t7046;
  t7742 = t7740 + t7741;
  t7743 = t7021*t7035*t7742;
  t7744 = t7053*t7054*t7742;
  t7745 = t7743 + t7744;
  t7747 = t7053*t7021*t7742;
  t7748 = -1.*t7035*t7054*t7742;
  t7749 = t7747 + t7748;
  t7753 = t7021*t7035*t7547;
  t7754 = t7053*t7054*t7547;
  t7755 = t7753 + t7754;
  t7746 = -1.*t7126*t7745;
  t7758 = -0.305*t7036*t7037;
  t7759 = t7758 + t7184;
  t7764 = t7053*t7021*t7547;
  t7765 = -1.*t7035*t7054*t7547;
  t7766 = t7764 + t7765;
  t7761 = t7141*t7745;
  t7772 = t7101*t7759;
  t7773 = t7059*t7749;
  t7774 = t7772 + t7773;
  t7776 = t7059*t7759;
  t7777 = -1.*t7101*t7749;
  t7778 = t7776 + t7777;
  t7763 = t7755*t7206;
  t7782 = t7101*t7137;
  t7783 = t7059*t7766;
  t7784 = t7782 + t7783;
  t7613 = -1.*t7137*t7185;
  t7614 = t7613 + t7365;
  t7621 = t7185*t7051;
  t7622 = t7375 + t7621;
  t7624 = -1.*t7137*t7175;
  t7631 = -1.*t7021*t7137*t7187;
  t7632 = -1.*t7054*t7137*t7192;
  t7633 = t7365 + t7631 + t7632;
  t7800 = t7099*t7759;
  t7807 = -1.*t7759*t7051;
  t7649 = t7021*t7051*t7187;
  t7650 = t7054*t7051*t7192;
  t7651 = t7375 + t7649 + t7650;
  t7829 = t7745*t7056;
  t7833 = -1.*t7141*t7745;
  t7835 = -1.*t7755*t7206;
  t7789 = t7059*t7137;
  t7790 = -1.*t7101*t7766;
  t7791 = t7789 + t7790;
  t7684 = 0.15121*t7547;
  t7685 = 0.15121*t7051;
  t7686 = t7684 + t7685;
  t7687 = var2[6]*t7686;
  t7688 = -1.*t7054*t7187;
  t7689 = t7021*t7192;
  t7690 = t7688 + t7689;
  t7872 = t7126*t7745;
  t7878 = -1.*t7745*t7056;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t6993*t7056 - 1.*t7058*t7107)*var2[1] + t7115*var2[2];
  p_output1[10]=(t7058*t7101*t7121 - 1.*t6993*t7126)*var2[1] + (t6993*t7101*t7121 + t7058*t7126)*var2[2];
  p_output1[11]=(-1.*t6993*t7141 - 1.*t7058*t7149)*var2[1] + t7155*var2[2];
  p_output1[12]=t7107*var2[0] - 1.*t6993*t7160*var2[1] + t7058*t7160*var2[2] + (t7166*(t7101*t7121*t7196 + t7101*t7121*t7200) + t7149*t7213 + t7059*t7121*(t7149*t7196 + t7149*t7200 + t7166*t7211 + t7211*t7219) - 1.*t7101*t7121*t7227)*var2[3];
  p_output1[13]=-1.*t7101*t7121*var2[0] + t6993*t7059*t7121*var2[1] - 1.*t7058*t7059*t7121*var2[2] + ((-1.*t7149*t7196 - 1.*t7149*t7200 - 1.*t7166*t7211 - 1.*t7211*t7219)*t7237 + t7166*(t7107*t7196 + t7107*t7200 + t7160*t7211 + t7211*t7237) + t7107*t7247 + t7149*t7258)*var2[3];
  p_output1[14]=t7149*var2[0] - 1.*t6993*t7219*var2[1] + t7058*t7219*var2[2] + ((-1.*t7101*t7121*t7196 - 1.*t7101*t7121*t7200)*t7237 + t7059*t7121*(-1.*t7107*t7196 - 1.*t7107*t7200 - 1.*t7160*t7211 - 1.*t7211*t7237) + t7107*t7273 - 1.*t7101*t7121*t7284)*var2[3];
  p_output1[15]=t7292 + t7296 + t7300 + (t7331 + t7166*(t7308 + t7309 - 1.*t7121*t7306*t7332 - 1.*t7121*t7306*t7334 + t7336 + t7337) + t7059*t7121*(-1.*t7101*t7149*t7306 + t7059*t7166*t7306 + t7317 + t7322 + t7342 + t7343) + t7346)*var2[3] + (t7303 + t7141*(-1.*t7121*t7306 + t7308 + t7309 + t7313) + t7126*(t7147*t7306 + t7317 + t7321 + t7322) + t7328)*var2[4];
  p_output1[16]=t7350 + t7354 + t7358 + (t7237*(t7101*t7149*t7306 - 1.*t7059*t7166*t7306 + t7360 + t7362 + t7383 + t7384) + t7166*(-1.*t7101*t7107*t7306 + t7059*t7237*t7306 + t7370 + t7372 + t7389 + t7390) + t7393 + t7394)*var2[3] + (t7056*(-1.*t7147*t7306 + t7360 + t7361 + t7362) + t7368 + t7141*(t7105*t7306 + t7370 + t7371 + t7372) + t7378)*var2[4];
  p_output1[17]=t7398 + t7402 + t7406 + (t7428 + t7237*(t7121*t7306*t7332 + t7121*t7306*t7334 + t7411 + t7412 + t7431 + t7432) + t7059*t7121*(t7101*t7107*t7306 - 1.*t7059*t7237*t7306 + t7417 + t7419 + t7437 + t7438) + t7441)*var2[3] + (t7409 + t7056*(t7121*t7306 + t7411 + t7412 + t7413) + t7126*(-1.*t7105*t7306 + t7417 + t7418 + t7419) + t7425)*var2[4];
  p_output1[18]=t7292 + t7296 + t7300 + (t7331 + t7346 + t7166*(t7308 + t7336 + t7337 - 1.*t7121*t7332*t7458 - 1.*t7121*t7334*t7458 + t7463) + t7059*t7121*(t7317 + t7342 + t7343 - 1.*t7101*t7149*t7458 + t7059*t7166*t7458 + t7467))*var2[3] + (t7303 + t7328 + t7141*(t7308 + t7313 - 1.*t7121*t7458 + t7463) + t7126*(t7317 + t7321 + t7147*t7458 + t7467))*var2[4] + t7051*(t7021*t7187 + t7054*t7192 - 1.*t7021*t7447 + t7054*t7451)*var2[5];
  p_output1[19]=t7350 + t7354 + t7358 + (t7393 + t7394 + t7237*(t7360 + t7383 + t7384 + t7101*t7149*t7458 - 1.*t7059*t7166*t7458 + t7498) + t7166*(t7370 + t7389 + t7390 - 1.*t7101*t7107*t7458 + t7059*t7237*t7458 + t7502))*var2[3] + (t7368 + t7378 + t7056*(t7360 + t7361 - 1.*t7147*t7458 + t7498) + t7141*(t7370 + t7371 + t7105*t7458 + t7502))*var2[4] + (t7051*(-1.*t7051*t7054*t7187 + t7021*t7051*t7192 + t7051*t7054*t7447 + t7021*t7051*t7451) + t7099*(t7054*t7137*t7187 - 1.*t7021*t7137*t7192 - 1.*t7054*t7137*t7447 - 1.*t7021*t7137*t7451))*var2[5];
  p_output1[20]=t7398 + t7402 + t7406 + (t7428 + t7441 + t7237*(t7411 + t7431 + t7432 + t7121*t7332*t7458 + t7121*t7334*t7458 + t7525) + t7059*t7121*(t7417 + t7437 + t7438 + t7101*t7107*t7458 - 1.*t7059*t7237*t7458 + t7529))*var2[3] + (t7409 + t7425 + t7056*(t7411 + t7413 + t7121*t7458 + t7525) + t7126*(t7417 + t7418 - 1.*t7105*t7458 + t7529))*var2[4] + t7099*(-1.*t7021*t7187 - 1.*t7054*t7192 + t7021*t7447 - 1.*t7054*t7451)*var2[5];
  p_output1[21]=t7553*var2[0] + (t7058*t7561 - 1.*t6993*t7565)*var2[1] + (t6993*t7561 + t7058*t7565)*var2[2] + (t7213*t7237 + t7166*(t7576 - 1.*t7059*t7121*t7597 + t7101*t7121*t7601) + t7059*t7121*(t7255 + t7256 + t7257 + t7589 + t7166*t7597 + t7149*t7601))*var2[3] + (t7056*t7302 + t7141*(t7576 - 1.*t7121*t7579) + t7126*(t7255 + t7375 + t7376 + t7147*t7579 + t7051*t7587 + t7589))*var2[4] + t7099*t7557*var2[5];
  p_output1[22]=(t7237*t7258 + t7247*t7553 + t7166*(t7200*t7553 + t7211*t7565 + t7237*t7597 + t7107*t7601 + t7656 + t7658) + t7237*(t7281 + t7282 + t7283 - 1.*t7166*t7597 - 1.*t7149*t7601 + t7662))*var2[3] + (t7056*t7377 + t7367*t7561 + t7141*(t7194*t7551 + t7105*t7579 + t7616 + t7618 + t7656 + t7658) + t7056*(t7281 + t7422 + t7423 - 1.*t7147*t7579 + t7626 + t7662))*var2[4] + (t7547*t7633 + t7051*(t7021*t7099*t7187 + t7054*t7099*t7192 + t7616 + t7618 + t7051*t7175*t7635 + t7051*t7175*t7637) + t7099*(-1.*t7021*t7051*t7187 - 1.*t7051*t7054*t7192 + t7422 + t7626 - 1.*t7137*t7175*t7635 - 1.*t7137*t7175*t7637) + t7099*t7651)*var2[5] + (t7547*t7614 + t7051*(t7099*t7185 + t7325 + t7616 + t7618) + t7099*t7622 + t7099*(-1.*t7051*t7185 + t7422 + t7624 + t7626))*var2[6];
  p_output1[23]=t7687 + t7237*var2[0] + t7115*var2[1] + (t6993*t7056 + t7058*t7107)*var2[2] + (t7273*t7553 + t7237*(t7059*t7121*t7597 - 1.*t7101*t7121*t7601 + t7698) + t7059*t7121*(-1.*t7200*t7553 - 1.*t7211*t7565 - 1.*t7237*t7597 - 1.*t7107*t7601 + t7705 + t7707))*var2[3] + (t7408*t7561 + t7056*(t7121*t7579 + t7698) + t7126*(-1.*t7175*t7547 - 1.*t7194*t7551 - 1.*t7105*t7579 - 1.*t7099*t7587 + t7705 + t7707))*var2[4] + t7547*t7690*var2[5];
  p_output1[24]=t7166*var2[0] + t7155*var2[1] + (t6993*t7141 + t7058*t7149)*var2[2] + (t7166*(t7746 - 1.*t7059*t7121*t7774 + t7101*t7121*t7778) + t7213*t7784 + t7059*t7121*(t7761 + t7763 + t7166*t7774 + t7149*t7778 + t7200*t7784 + t7211*t7791))*var2[3] + (t7141*(t7746 - 1.*t7121*t7749) + t7302*t7755 + t7126*(t7137*t7175 + t7147*t7749 + t7051*t7759 + t7761 + t7763 + t7194*t7766))*var2[4] + t7137*t7557*var2[5] + (0.28121*t7037 - 0.305*Power(t7037,2) - 1.*t7037*t7172)*var2[7];
  p_output1[25]=(t7166*t7247 + t7258*t7784 + t7166*(t7224 + t7225 + t7226 + t7237*t7774 + t7107*t7778 + t7829) + t7237*(-1.*t7166*t7774 - 1.*t7149*t7778 - 1.*t7200*t7784 - 1.*t7211*t7791 + t7833 + t7835))*var2[3] + (t7141*t7367 + t7377*t7755 + t7141*(t7224 + t7325 + t7326 + t7105*t7749 + t7800 + t7829) + t7056*(t7624 - 1.*t7147*t7749 - 1.*t7194*t7766 + t7807 + t7833 + t7835))*var2[4] + (t7051*t7633 + t7137*t7651 + t7051*(t7021*t7137*t7187 + t7054*t7137*t7192 + t7325 + t7051*t7635*t7742 + t7051*t7637*t7742 + t7800) + t7099*(-1.*t7021*t7187*t7547 - 1.*t7054*t7192*t7547 + t7624 - 1.*t7137*t7635*t7742 - 1.*t7137*t7637*t7742 + t7807))*var2[5] + (t7051*t7614 + t7137*t7622 + t7051*(t7137*t7185 + t7325 + t7051*t7742 + t7800) + t7099*(-1.*t7185*t7547 + t7624 - 1.*t7137*t7742 + t7807))*var2[6];
  p_output1[26]=t7687 + t7784*var2[0] + (t7058*t7755 - 1.*t6993*t7791)*var2[1] + (t6993*t7755 + t7058*t7791)*var2[2] + (t7166*t7273 + t7237*(t7059*t7121*t7774 - 1.*t7101*t7121*t7778 + t7872) + t7059*t7121*(t7244 + t7245 + t7246 - 1.*t7237*t7774 - 1.*t7107*t7778 + t7878))*var2[3] + (t7141*t7408 + t7056*(t7121*t7749 + t7872) + t7126*(t7244 + t7365 + t7366 - 1.*t7105*t7749 - 1.*t7099*t7759 + t7878))*var2[4] + t7051*t7690*var2[5] + (-0.28121*t7046 + 0.305*t7037*t7046 + t7046*t7172)*var2[7];
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
