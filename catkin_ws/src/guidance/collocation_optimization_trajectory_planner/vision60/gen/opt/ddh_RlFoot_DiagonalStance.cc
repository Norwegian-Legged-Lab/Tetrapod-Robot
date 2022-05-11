/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:37 GMT+02:00
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
  double t1234;
  double t1264;
  double t1238;
  double t1512;
  double t1524;
  double t1576;
  double t1577;
  double t2320;
  double t2513;
  double t2870;
  double t2886;
  double t2934;
  double t3553;
  double t3736;
  double t3837;
  double t841;
  double t4023;
  double t4110;
  double t4518;
  double t4554;
  double t4835;
  double t5086;
  double t5087;
  double t5103;
  double t5371;
  double t5428;
  double t5602;
  double t5584;
  double t5628;
  double t5637;
  double t5838;
  double t5842;
  double t842;
  double t865;
  double t5607;
  double t5931;
  double t5950;
  double t6208;
  double t6245;
  double t6246;
  double t6011;
  double t6076;
  double t6114;
  double t6183;
  double t6185;
  double t6198;
  double t5992;
  double t6199;
  double t6206;
  double t6254;
  double t6256;
  double t6257;
  double t6262;
  double t6276;
  double t6290;
  double t6425;
  double t6454;
  double t6515;
  double t6549;
  double t6550;
  double t1078;
  double t6561;
  double t6631;
  double t1153;
  double t6724;
  double t6736;
  double t6742;
  double t6985;
  double t6989;
  double t6991;
  double t6993;
  double t7007;
  double t7008;
  double t6750;
  double t6751;
  double t6752;
  double t6918;
  double t6924;
  double t6934;
  double t7030;
  double t7031;
  double t7032;
  double t7033;
  double t7034;
  double t7038;
  double t7042;
  double t7043;
  double t7046;
  double t7050;
  double t7055;
  double t7058;
  double t7062;
  double t7063;
  double t7083;
  double t7085;
  double t7086;
  double t7069;
  double t7070;
  double t7074;
  double t7075;
  double t7080;
  double t7081;
  double t7082;
  double t7087;
  double t7088;
  double t7093;
  double t7094;
  double t7096;
  double t7098;
  double t7099;
  double t7104;
  double t7105;
  double t7106;
  double t7107;
  double t6651;
  double t6673;
  double t6695;
  double t7208;
  double t7209;
  double t7210;
  double t7201;
  double t7205;
  double t7206;
  double t7223;
  double t7226;
  double t7230;
  double t7211;
  double t7213;
  double t7215;
  double t7216;
  double t7234;
  double t7235;
  double t7237;
  double t7243;
  double t7262;
  double t7449;
  double t7450;
  double t7451;
  double t7452;
  double t7453;
  double t7454;
  double t7467;
  double t7468;
  double t7470;
  double t7614;
  double t7618;
  double t7619;
  double t7621;
  double t7631;
  double t7632;
  double t7633;
  double t7638;
  double t7640;
  double t7882;
  double t7891;
  double t7901;
  double t7908;
  double t7909;
  double t7958;
  double t7959;
  double t7960;
  double t7907;
  double t7910;
  double t7931;
  double t7933;
  double t7972;
  double t7973;
  double t8184;
  double t8202;
  double t8230;
  double t8267;
  double t8268;
  double t8269;
  double t8272;
  double t8273;
  double t8274;
  double t8286;
  double t8287;
  double t8288;
  double t8343;
  double t8344;
  double t8345;
  double t8349;
  double t8350;
  double t8353;
  double t8538;
  double t8539;
  double t8540;
  double t8571;
  double t8572;
  double t8554;
  double t8555;
  double t8557;
  double t8563;
  double t8552;
  double t8567;
  double t8573;
  double t8608;
  double t8609;
  double t8612;
  double t8594;
  double t8595;
  double t8596;
  double t8600;
  double t8601;
  double t8603;
  double t8626;
  double t8629;
  double t8630;
  double t8620;
  double t8623;
  double t8633;
  double t8648;
  double t8649;
  double t8651;
  double t8656;
  double t8660;
  double t8663;
  double t8669;
  double t8672;
  double t8673;
  double t8701;
  double t8708;
  double t8724;
  double t8574;
  double t8751;
  double t8755;
  double t8756;
  double t8767;
  double t8768;
  double t8841;
  double t8885;
  double t8890;
  double t8891;
  double t8895;
  double t8896;
  double t8900;
  double t8741;
  double t8742;
  double t8739;
  double t8758;
  double t9007;
  double t9008;
  double t9009;
  double t8924;
  double t8926;
  double t8927;
  double t9010;
  double t9017;
  double t9018;
  double t9044;
  double t9045;
  double t9046;
  double t9048;
  double t9049;
  double t9056;
  double t8740;
  double t8747;
  double t9160;
  double t9161;
  double t9163;
  double t9165;
  double t9166;
  double t9167;
  double t9168;
  double t9169;
  double t9175;
  double t9177;
  double t9179;
  double t9180;
  double t9181;
  double t9184;
  double t9186;
  double t9357;
  double t9359;
  double t9362;
  double t9369;
  double t9371;
  double t9372;
  double t9339;
  double t9340;
  double t9341;
  double t9016;
  double t9406;
  double t9409;
  double t9410;
  double t9411;
  double t9412;
  double t9413;
  double t9414;
  double t9191;
  double t9192;
  double t9194;
  double t9396;
  double t9398;
  double t9402;
  double t9137;
  double t9140;
  double t9447;
  double t9448;
  double t9449;
  double t9450;
  double t9451;
  double t9452;
  double t9454;
  double t9432;
  double t9433;
  double t9434;
  double t9440;
  double t9442;
  double t9445;
  double t8298;
  double t8299;
  double t8300;
  double t9468;
  double t9469;
  double t9531;
  double t9532;
  double t9726;
  double t9728;
  double t7945;
  double t7953;
  double t7954;
  double t9734;
  double t9735;
  double t8308;
  double t8312;
  double t8315;
  double t9847;
  double t9854;
  double t9867;
  double t9874;
  double t8357;
  double t8358;
  double t8359;
  double t8429;
  double t8431;
  double t8435;
  double t9962;
  double t9963;
  double t9970;
  double t9968;
  double t9960;
  double t9964;
  double t9993;
  double t9996;
  double t9998;
  double t8678;
  double t8679;
  double t8680;
  double t10051;
  double t10052;
  double t10083;
  double t10088;
  double t10084;
  double t10086;
  double t10048;
  double t10053;
  double t10107;
  double t10110;
  double t8766;
  double t8879;
  double t8882;
  double t10115;
  double t10116;
  double t10149;
  double t10150;
  double t10151;
  double t10152;
  double t10049;
  double t10155;
  double t10156;
  double t10157;
  double t10158;
  double t10160;
  double t10161;
  double t10162;
  double t8583;
  double t10169;
  double t10170;
  double t10172;
  double t10114;
  double t10187;
  double t10188;
  double t10189;
  double t10191;
  double t10195;
  double t10196;
  double t10197;
  double t8586;
  double t8587;
  double t8588;
  double t8589;
  double t8590;
  double t8591;
  double t8592;
  double t8593;
  double t10165;
  double t10166;
  double t10167;
  double t10181;
  double t10182;
  double t10184;
  double t10130;
  double t10131;
  double t10215;
  double t10218;
  double t10219;
  double t10222;
  double t10223;
  double t10228;
  double t10229;
  double t10206;
  double t10207;
  double t10209;
  double t10211;
  double t10212;
  double t10213;
  double t10309;
  double t10315;
  double t10317;
  double t10367;
  double t10368;
  double t7974;
  double t10373;
  double t10374;
  double t10391;
  double t10394;
  double t10399;
  double t10401;
  double t7010;
  double t7057;
  double t7068;
  double t10458;
  double t10460;
  double t10472;
  double t10476;
  double t10480;
  double t10514;
  double t10543;
  double t10548;
  t1234 = Cos(var1[11]);
  t1264 = Sin(var1[11]);
  t1238 = -0.0641*t1234;
  t1512 = -0.28*t1264;
  t1524 = t1238 + t1512;
  t1576 = -1.*t1234*t1524;
  t1577 = -0.325*t1264;
  t2320 = -1.*t1234;
  t2513 = 1. + t2320;
  t2870 = -0.575*t2513;
  t2886 = -0.295*t1234;
  t2934 = -0.0641*t1264;
  t3553 = t2870 + t2886 + t2934;
  t3736 = -1.*t3553*t1264;
  t3837 = t1576 + t1577 + t3736;
  t841 = Cos(var1[10]);
  t4023 = Sin(var1[10]);
  t4110 = t1234*t4023;
  t4518 = -1.*t841*t1264;
  t4554 = t4110 + t4518;
  t4835 = -0.1575*t4554;
  t5086 = -1.*t1234*t4023;
  t5087 = t841*t1264;
  t5103 = t5086 + t5087;
  t5371 = -0.2255*t5103;
  t5428 = t4835 + t5371;
  t5602 = Sin(var1[9]);
  t5584 = Cos(var1[9]);
  t5628 = 0.325*t4023;
  t5637 = t841*t1524;
  t5838 = t4023*t3553;
  t5842 = t5628 + t5637 + t5838;
  t842 = -1.*t841;
  t865 = 1. + t842;
  t5607 = 0.068*t5602;
  t5931 = t5584*t5842;
  t5950 = t5607 + t5931;
  t6208 = t841*t1234;
  t6245 = t4023*t1264;
  t6246 = t6208 + t6245;
  t6011 = -1.*t5584;
  t6076 = 1. + t6011;
  t6114 = 0.1575*t6076;
  t6183 = 0.2255*t5584;
  t6185 = -1.*t5602*t5842;
  t6198 = t6114 + t6183 + t6185;
  t5992 = -1.*t5602*t5950;
  t6199 = -1.*t5584*t6198;
  t6206 = t5992 + t6199;
  t6254 = t5584*t6206*t6246;
  t6256 = -0.325*t865;
  t6257 = -1.*t4023*t1524;
  t6262 = t841*t3553;
  t6276 = t6256 + t6257 + t6262;
  t6290 = t6276*t5103;
  t6425 = t5584*t5950*t6246;
  t6454 = -1.*t5602*t6198*t6246;
  t6515 = t6290 + t6425 + t6454;
  t6549 = t5602*t6515;
  t6550 = t6254 + t6549;
  t1078 = Cos(var1[4]);
  t6561 = Sin(var1[4]);
  t6631 = Sin(var1[5]);
  t1153 = Cos(var1[5]);
  t6724 = t5584*t6561;
  t6736 = t1078*t5602*t6631;
  t6742 = t6724 + t6736;
  t6985 = t5584*t4554*t6561;
  t6989 = t1153*t6246;
  t6991 = t5602*t4554*t6631;
  t6993 = t6989 + t6991;
  t7007 = t1078*t6993;
  t7008 = t6985 + t7007;
  t6750 = -1.*t1078*t1153*t4023;
  t6751 = t841*t6742;
  t6752 = t6750 + t6751;
  t6918 = t841*t1078*t1153;
  t6924 = t4023*t6742;
  t6934 = t6918 + t6924;
  t7030 = Sin(var1[3]);
  t7031 = -1.*t1153*t5602*t4554;
  t7032 = t6246*t6631;
  t7033 = t7031 + t7032;
  t7034 = t7030*t7033;
  t7038 = Cos(var1[3]);
  t7042 = t5584*t1078*t4554;
  t7043 = -1.*t6561*t6993;
  t7046 = t7042 + t7043;
  t7050 = t7038*t7046;
  t7055 = t7034 + t7050;
  t7058 = t7038*t7033;
  t7062 = -1.*t7030*t7046;
  t7063 = t7058 + t7062;
  t7083 = t1153*t6198;
  t7085 = t6276*t6631;
  t7086 = t7083 + t7085;
  t7069 = -1.*t1153*t5602*t6246;
  t7070 = t5103*t6631;
  t7074 = t7069 + t7070;
  t7075 = t1153*t6276;
  t7080 = -1.*t6198*t6631;
  t7081 = t7075 + t7080;
  t7082 = t5584*t6631*t7081;
  t7087 = -1.*t5584*t1153*t7086;
  t7088 = t5992 + t7082 + t7087;
  t7093 = t7074*t7088;
  t7094 = t7086*t7074;
  t7096 = t1153*t5103;
  t7098 = t5602*t6246*t6631;
  t7099 = t7096 + t7098;
  t7104 = t7081*t7099;
  t7105 = t6425 + t7094 + t7104;
  t7106 = t5584*t1153*t7105;
  t7107 = t7093 + t7106;
  t6651 = t5602*t6561;
  t6673 = -1.*t5584*t1078*t6631;
  t6695 = t6651 + t6673;
  t7208 = t5950*t6561;
  t7209 = t1078*t7081;
  t7210 = t7208 + t7209;
  t7201 = t5584*t6246*t6561;
  t7205 = t1078*t7099;
  t7206 = t7201 + t7205;
  t7223 = t1078*t5950;
  t7226 = -1.*t6561*t7081;
  t7230 = t7223 + t7226;
  t7211 = -1.*t6695*t7210;
  t7213 = t1078*t5602;
  t7215 = t5584*t6561*t6631;
  t7216 = t7213 + t7215;
  t7234 = -1.*t7216*t7230;
  t7235 = t7087 + t7211 + t7234;
  t7237 = t7206*t7235;
  t7243 = t7210*t7206;
  t7262 = t5584*t1078*t6246;
  t7449 = -1.*t6561*t7099;
  t7450 = t7262 + t7449;
  t7451 = t7230*t7450;
  t7452 = t7094 + t7243 + t7451;
  t7453 = t6695*t7452;
  t7454 = t7237 + t7453;
  t7467 = t1153*t5602*t4554;
  t7468 = -1.*t6246*t6631;
  t7470 = t7467 + t7468;
  t7614 = -1.*t1153*t6198;
  t7618 = -1.*t6276*t6631;
  t7619 = t7614 + t7618;
  t7621 = t5584*t6631*t7086;
  t7631 = t1153*t5602*t6246;
  t7632 = -1.*t5103*t6631;
  t7633 = t7631 + t7632;
  t7638 = t7081*t7074;
  t7640 = t7086*t7099;
  t7882 = -0.068*t5602;
  t7891 = -1.*t5584*t5842;
  t7901 = t7882 + t7891;
  t7908 = 0.068*t5584;
  t7909 = t7908 + t6185;
  t7958 = -1.*t1078*t5602*t4554;
  t7959 = -1.*t5584*t4554*t6561*t6631;
  t7960 = t7958 + t7959;
  t7907 = -1.*t5584*t5950;
  t7910 = -1.*t5602*t7909;
  t7931 = -1.*t5602*t5950*t6246;
  t7933 = t5584*t7909*t6246;
  t7972 = Power(t1153,2);
  t7973 = -1.*t5584*t7972*t7901;
  t8184 = t1153*t5602*t7086;
  t8202 = -1.*t5584*t1153*t6246*t7086;
  t8230 = t1153*t7901*t7074;
  t8267 = -1.*t5602*t6246*t6561;
  t8268 = t5584*t1078*t6246*t6631;
  t8269 = t8267 + t8268;
  t8272 = t7909*t6561;
  t8273 = -1.*t1078*t7901*t6631;
  t8274 = t8272 + t8273;
  t8286 = t1078*t7909;
  t8287 = t7901*t6561*t6631;
  t8288 = t8286 + t8287;
  t8343 = -1.*t5584*t4554*t6561;
  t8344 = -1.*t1078*t6993;
  t8345 = t8343 + t8344;
  t8349 = -1.*t5950*t6561;
  t8350 = -1.*t1078*t7081;
  t8353 = t8349 + t8350;
  t8538 = -1.*t841*t1234;
  t8539 = -1.*t4023*t1264;
  t8540 = t8538 + t8539;
  t8571 = 0.325*t841;
  t8572 = t8571 + t6257 + t6262;
  t8554 = -0.325*t4023;
  t8555 = -1.*t841*t1524;
  t8557 = -1.*t4023*t3553;
  t8563 = t8554 + t8555 + t8557;
  t8552 = t5584*t5950*t5103;
  t8567 = Power(t5584,2);
  t8573 = t8567*t8572*t6246;
  t8608 = -1.*t1153*t5602*t8572;
  t8609 = t8563*t6631;
  t8612 = t8608 + t8609;
  t8594 = -1.*t1153*t5602*t5103;
  t8595 = t8540*t6631;
  t8596 = t8594 + t8595;
  t8600 = t1153*t8563;
  t8601 = t5602*t8572*t6631;
  t8603 = t8600 + t8601;
  t8626 = t1153*t8540;
  t8629 = t5602*t5103*t6631;
  t8630 = t8626 + t8629;
  t8620 = -1.*t5584*t1153*t8612;
  t8623 = t8612*t7074;
  t8633 = t7086*t8596;
  t8648 = t5584*t5103*t6561;
  t8649 = t1078*t8630;
  t8651 = t8648 + t8649;
  t8656 = t5584*t8572*t6561;
  t8660 = t1078*t8603;
  t8663 = t8656 + t8660;
  t8669 = t5584*t1078*t8572;
  t8672 = -1.*t6561*t8603;
  t8673 = t8669 + t8672;
  t8701 = -0.28*t1234;
  t8708 = 0.0641*t1264;
  t8724 = t8701 + t8708;
  t8574 = Power(t5602,2);
  t8751 = t4023*t1524;
  t8755 = t841*t8724;
  t8756 = t8751 + t8755;
  t8767 = t1153*t4554;
  t8768 = t5602*t8540*t6631;
  t8841 = t8767 + t8768;
  t8885 = -1.*t1153*t5602*t8540;
  t8890 = t4554*t6631;
  t8891 = t8885 + t8890;
  t8895 = t5584*t1078*t8540;
  t8896 = -1.*t6561*t8841;
  t8900 = t8895 + t8896;
  t8741 = -1.*t4023*t8724;
  t8742 = t5637 + t8741;
  t8739 = t5584*t5950*t4554;
  t8758 = t8567*t8756*t6246;
  t9007 = -1.*t1153*t5602*t8756;
  t9008 = t8742*t6631;
  t9009 = t9007 + t9008;
  t8924 = t1153*t8742;
  t8926 = t5602*t8756*t6631;
  t8927 = t8924 + t8926;
  t9010 = -1.*t5584*t1153*t9009;
  t9017 = t9009*t7074;
  t9018 = t7086*t7033;
  t9044 = t5584*t8756*t6561;
  t9045 = t1078*t8927;
  t9046 = t9044 + t9045;
  t9048 = t5584*t1078*t8756;
  t9049 = -1.*t6561*t8927;
  t9056 = t9048 + t9049;
  t8740 = -1.*t5602*t6198*t4554;
  t8747 = t6276*t6246;
  t9160 = -1.*t6276*t5103;
  t9161 = -1.*t5584*t5950*t6246;
  t9163 = t5602*t6198*t6246;
  t9165 = t9160 + t9161 + t9163;
  t9166 = t5584*t4554*t9165;
  t9167 = t8739 + t8740 + t8747;
  t9168 = t5584*t6246*t9167;
  t9169 = t9166 + t9168;
  t9175 = t5842*t4554;
  t9177 = t9175 + t8747;
  t9179 = t5103*t9177;
  t9180 = -1.*t5842*t6246;
  t9181 = t9160 + t9180;
  t9184 = t6246*t9181;
  t9186 = t9179 + t9184;
  t9357 = t5584*t1153*t7030;
  t9359 = t7038*t7216;
  t9362 = t9357 + t9359;
  t9369 = t5584*t7038*t1153;
  t9371 = -1.*t7030*t7216;
  t9372 = t9369 + t9371;
  t9339 = t7038*t1153;
  t9340 = -1.*t7030*t6561*t6631;
  t9341 = t9339 + t9340;
  t9016 = t7081*t6993;
  t9406 = t8739 + t9016 + t9018;
  t9409 = t7074*t9406;
  t9410 = -1.*t7086*t7074;
  t9411 = -1.*t7081*t7099;
  t9412 = t9161 + t9410 + t9411;
  t9413 = t7033*t9412;
  t9414 = t9409 + t9413;
  t9191 = t1153*t7030*t6561;
  t9192 = t7038*t6631;
  t9194 = t9191 + t9192;
  t9396 = -1.*t5584*t1078*t7030;
  t9398 = -1.*t5602*t9341;
  t9402 = t9396 + t9398;
  t9137 = t7210*t7008;
  t9140 = t7230*t7046;
  t9447 = t9018 + t9137 + t9140;
  t9448 = t7206*t9447;
  t9449 = -1.*t7210*t7206;
  t9450 = -1.*t7230*t7450;
  t9451 = t9410 + t9449 + t9450;
  t9452 = t7008*t9451;
  t9454 = t9448 + t9452;
  t9432 = -1.*t4023*t9194;
  t9433 = t841*t9402;
  t9434 = t9432 + t9433;
  t9440 = t841*t9194;
  t9442 = t4023*t9402;
  t9445 = t9440 + t9442;
  t8298 = t5584*t1078;
  t8299 = -1.*t5602*t6561*t6631;
  t8300 = t8298 + t8299;
  t9468 = -1.*t5602*t5950*t4554;
  t9469 = t5584*t7909*t4554;
  t9531 = t5602*t5950*t6246;
  t9532 = -1.*t5584*t7909*t6246;
  t9726 = -1.*t5584*t1153*t4554*t7086;
  t9728 = t1153*t7901*t7033;
  t7945 = -1.*t5602*t4554*t6561;
  t7953 = t5584*t1078*t4554*t6631;
  t7954 = t7945 + t7953;
  t9734 = t5584*t1153*t6246*t7086;
  t9735 = -1.*t1153*t7901*t7074;
  t8308 = -1.*t1078*t5602*t6246;
  t8312 = -1.*t5584*t6246*t6561*t6631;
  t8315 = t8308 + t8312;
  t9847 = t7086*t6993;
  t9854 = t7081*t7033;
  t9867 = -1.*t7081*t7074;
  t9874 = -1.*t7086*t7099;
  t8357 = -1.*t5602*t6561;
  t8358 = t5584*t1078*t6631;
  t8359 = t8357 + t8358;
  t8429 = -1.*t5584*t6246*t6561;
  t8431 = -1.*t1078*t7099;
  t8435 = t8429 + t8431;
  t9962 = -1.*t8563*t5103;
  t9963 = -1.*t6276*t8540;
  t9970 = t8563*t6246;
  t9968 = t8567*t8572*t4554;
  t9960 = -1.*t5584*t5950*t5103;
  t9964 = -1.*t8567*t8572*t6246;
  t9993 = t8612*t7033;
  t9996 = -1.*t8612*t7074;
  t9998 = -1.*t7086*t8596;
  t8678 = t5584*t1078*t5103;
  t8679 = -1.*t6561*t8630;
  t8680 = t8678 + t8679;
  t10051 = -1.*t8742*t5103;
  t10052 = -1.*t6276*t6246;
  t10083 = t6276*t4554;
  t10088 = t8742*t6246;
  t10084 = t8567*t8756*t4554;
  t10086 = t5584*t5950*t8540;
  t10048 = -1.*t5584*t5950*t4554;
  t10053 = -1.*t8567*t8756*t6246;
  t10107 = t7086*t8891;
  t10110 = t9009*t7033;
  t8766 = t5584*t8540*t6561;
  t8879 = t1078*t8841;
  t8882 = t8766 + t8879;
  t10115 = -1.*t9009*t7074;
  t10116 = -1.*t7086*t7033;
  t10149 = 0.325*t1234;
  t10150 = t1234*t3553;
  t10151 = -1.*t1524*t1264;
  t10152 = t10149 + t10150 + t10151;
  t10049 = t5602*t6198*t4554;
  t10155 = t5602*t5950;
  t10156 = t5584*t6198;
  t10157 = t10155 + t10156;
  t10158 = t5584*t10157*t4554;
  t10160 = t10048 + t10049 + t10052;
  t10161 = t5602*t10160;
  t10162 = t10158 + t10161;
  t8583 = var2[0]*t7206;
  t10169 = t1153*t7030;
  t10170 = t7038*t6561*t6631;
  t10172 = t10169 + t10170;
  t10114 = -1.*t7081*t6993;
  t10187 = -1.*t5584*t6631*t7081;
  t10188 = t5584*t1153*t7086;
  t10189 = t10155 + t10187 + t10188;
  t10191 = t7033*t10189;
  t10195 = t10048 + t10114 + t10116;
  t10196 = t5584*t1153*t10195;
  t10197 = t10191 + t10196;
  t8586 = t7030*t7074;
  t8587 = t7038*t7450;
  t8588 = t8586 + t8587;
  t8589 = var2[2]*t8588;
  t8590 = t7038*t7074;
  t8591 = -1.*t7030*t7450;
  t8592 = t8590 + t8591;
  t8593 = var2[1]*t8592;
  t10165 = -1.*t7038*t1153*t6561;
  t10166 = t7030*t6631;
  t10167 = t10165 + t10166;
  t10181 = t5584*t7038*t1078;
  t10182 = -1.*t5602*t10172;
  t10184 = t10181 + t10182;
  t10130 = -1.*t7210*t7008;
  t10131 = -1.*t7230*t7046;
  t10215 = t6695*t7210;
  t10218 = t7216*t7230;
  t10219 = t10188 + t10215 + t10218;
  t10222 = t7008*t10219;
  t10223 = t10116 + t10130 + t10131;
  t10228 = t6695*t10223;
  t10229 = t10222 + t10228;
  t10206 = -1.*t4023*t10167;
  t10207 = t841*t10184;
  t10209 = t10206 + t10207;
  t10211 = t841*t10167;
  t10212 = t4023*t10184;
  t10213 = t10211 + t10212;
  t10309 = -1.*t5584*t6631*t7086;
  t10315 = -1.*t7086*t6993;
  t10317 = -1.*t7081*t7033;
  t10367 = t5584*t5950;
  t10368 = t5602*t7909;
  t7974 = Power(t6631,2);
  t10373 = t5602*t5950*t4554;
  t10374 = -1.*t5584*t7909*t4554;
  t10391 = t5584*t7972*t7901;
  t10394 = -1.*t1153*t5602*t7086;
  t10399 = t5584*t1153*t4554*t7086;
  t10401 = -1.*t1153*t7901*t7033;
  t7010 = var2[0]*t7008;
  t7057 = var2[2]*t7055;
  t7068 = var2[1]*t7063;
  t10458 = -1.*t8567*t8756*t4554;
  t10460 = -1.*t5584*t5950*t8540;
  t10472 = t5584*t1153*t9009;
  t10476 = -1.*t7086*t8891;
  t10480 = -1.*t9009*t7033;
  t10514 = -1.*t8567*t8572*t4554;
  t10543 = t5584*t1153*t8612;
  t10548 = -1.*t8612*t7033;
  p_output1[0]=-0.1575*t5602*t6561 - 0.1575*t1078*t6076*t6631 + 0.2255*t6695 + 0.325*t4023*t6742 - 0.575*t1264*t6752 - 0.575*t2513*t6934 - 0.295*(-1.*t1264*t6752 + t1234*t6934) - 0.0641*(t1234*t6752 + t1264*t6934) + t7010 + t7057 + t7068 - 0.325*t1078*t1153*t865 + var1[0] + t7454*var2[3] + ((-1.*t7030*t7033 - 1.*t7038*t7046)*var2[1] + t7063*var2[2])*var2[3] + t7107*var2[4] + (t7046*var2[0] - 1.*t7030*t8345*var2[1] + t7038*t8345*var2[2] + (t7235*t7450 + t7216*t7452 + t7206*(-1.*t7210*t7216 - 1.*t6695*t7230 - 1.*t7216*t8353 - 1.*t7230*t8359) + t6695*(t7206*t7230 + t7210*t7450 + t7450*t8353 + t7230*t8435))*var2[3])*var2[4] + t6550*var2[5] + (t1078*t7470*var2[0] + (t6993*t7038 + t6561*t7030*t7470)*var2[1] + (t6993*t7030 - 1.*t6561*t7038*t7470)*var2[2] + (-1.*t1078*t1153*t5584*t7452 + t7206*(-1.*t1153*t5584*t7081 + t1078*t1153*t5584*t7210 - 1.*t1153*t5584*t6561*t7230 - 1.*t1078*t6695*t7619 + t6561*t7216*t7619 + t7621) + t1078*t7235*t7633 + t6695*(t1078*t7206*t7619 - 1.*t6561*t7450*t7619 + t1078*t7210*t7633 - 1.*t6561*t7230*t7633 + t7638 + t7640))*var2[3] + (t7088*t7099 - 1.*t5584*t6631*t7105 + t7074*(t5584*t6631*t7619 + t7621) + t1153*t5584*(t7099*t7619 + t7081*t7633 + t7638 + t7640))*var2[4])*var2[5] + t5428*var2[9] + (t7954*var2[0] + (-1.*t1153*t4554*t5584*t7038 - 1.*t7030*t7960)*var2[1] + (-1.*t1153*t4554*t5584*t7030 + t7038*t7960)*var2[2] + (t6742*t7452 + t7235*t8269 + t7206*(-1.*t6742*t7210 + t7973 + t8184 - 1.*t6695*t8274 - 1.*t7216*t8288 - 1.*t7230*t8300) + t6695*(t8202 + t8230 + t7210*t8269 + t7206*t8274 + t7450*t8288 + t7230*t8315))*var2[3] + (-1.*t1153*t5584*t6246*t7088 - 1.*t1153*t5602*t7105 + t7074*(-1.*t5602*t6631*t7081 + t7907 + t7910 + t7973 - 1.*t5584*t7901*t7974 + t8184) + t1153*t5584*(t5584*t6246*t6631*t7081 - 1.*t6631*t7099*t7901 + t7931 + t7933 + t8202 + t8230))*var2[4] + (-1.*t5602*t6206*t6246 + t5584*t6515 + t5584*t6246*(t5602*t6198 - 1.*t5584*t7901 + t7907 + t7910) + t5602*(-1.*t5584*t6198*t6246 - 1.*t5602*t6246*t7901 + t7931 + t7933))*var2[5])*var2[9] + t3837*var2[10] + (t8583 + t8589 + t8593 + (t7235*t8651 + t7206*(t8620 - 1.*t6695*t8663 - 1.*t7216*t8673) + t6695*(t8623 + t8633 + t7210*t8651 + t7206*t8663 + t7450*t8673 + t7230*t8680))*var2[3] + (t7088*t8596 + t7074*(-1.*t5584*t5602*t8572 + t5584*t6631*t8603 + t8620) + t1153*t5584*(t8552 + t8573 + t7099*t8603 + t8623 + t7081*t8630 + t8633))*var2[4] + (t5103*t5584*t6206 + t5602*(-1.*t5103*t5602*t6198 + t6276*t8540 + t8552 + t5103*t8563 + t8573 + t6246*t8572*t8574))*var2[5] + (-0.1575*t6246 - 0.2255*t8540)*var2[9])*var2[10] - 0.0641*var2[11] + (t8882*var2[0] + (t7038*t8891 - 1.*t7030*t8900)*var2[1] + (t7030*t8891 + t7038*t8900)*var2[2] + (t7008*t7235 + t7206*(t9010 - 1.*t6695*t9046 - 1.*t7216*t9056) + t6695*(t9017 + t9018 + t7206*t9046 + t7450*t9056 + t9137 + t9140))*var2[3] + (t7033*t7088 + t7074*(-1.*t5584*t5602*t8756 + t5584*t6631*t8927 + t9010) + t1153*t5584*(t8739 + t8758 + t7099*t8927 + t9016 + t9017 + t9018))*var2[4] + (t4554*t5584*t6206 + t5602*(t8739 + t8740 + t5103*t8742 + t8747 + t6246*t8574*t8756 + t8758))*var2[5] + (-0.2255*t6246 - 0.1575*t8540)*var2[9] + (-0.325*t1234 - 1.*t1234*t3553 - 1.*t1234*t8724)*var2[10])*var2[11] + t7008*var3[0] + t7063*var3[1] + t7055*var3[2] + t7454*var3[3] + t7107*var3[4] + t6550*var3[5] + t5428*var3[9] + t3837*var3[10] - 0.0641*var3[11] - 1.*var4[0];
  p_output1[1]=0.1575*t1078*t5602*t7030 - 0.325*t865*t9194 + 0.1575*t6076*t9341 + 0.2255*(-1.*t1078*t5602*t7030 + t5584*t9341) + 0.325*t4023*t9402 - 0.575*t1264*t9434 - 0.575*t2513*t9445 - 0.295*(-1.*t1264*t9434 + t1234*t9445) - 0.0641*(t1234*t9434 + t1264*t9445) + var1[1] + t6695*var2[0] + t9372*var2[1] + t9362*var2[2] + t9454*var2[3] + ((-1.*t1153*t5584*t7030 - 1.*t7038*t7216)*var2[1] + t9372*var2[2])*var2[3] + t9414*var2[4] + (t7216*var2[0] - 1.*t7030*t8359*var2[1] + t7038*t8359*var2[2] + (t7206*(t7046*t7210 + t7008*t7230 + t7230*t8345 + t7046*t8353) + t7008*(-1.*t7206*t7230 - 1.*t7210*t7450 - 1.*t7450*t8353 - 1.*t7230*t8435) + t7450*t9447 + t7046*t9451)*var2[3])*var2[4] + t9169*var2[5] + (-1.*t1078*t1153*t5584*var2[0] + (-1.*t1153*t5584*t6561*t7030 - 1.*t5584*t6631*t7038)*var2[1] + (-1.*t5584*t6631*t7030 + t1153*t5584*t6561*t7038)*var2[2] + (t1078*t7633*t9447 + t1078*t7470*t9451 + t7206*(t1078*t7210*t7470 - 1.*t6561*t7230*t7470 + t1078*t7008*t7619 - 1.*t6561*t7046*t7619 + t9847 + t9854) + t7008*(-1.*t1078*t7206*t7619 + t6561*t7450*t7619 - 1.*t1078*t7210*t7633 + t6561*t7230*t7633 + t9867 + t9874))*var2[3] + (t7099*t9406 + t6993*t9412 + t7074*(t7081*t7470 + t6993*t7619 + t9847 + t9854) + t7033*(-1.*t7099*t7619 - 1.*t7081*t7633 + t9867 + t9874))*var2[4])*var2[5] + t9186*var2[9] + (t6742*var2[0] + (-1.*t1153*t5602*t7038 - 1.*t7030*t8300)*var2[1] + (-1.*t1153*t5602*t7030 + t7038*t8300)*var2[2] + (t8269*t9447 + t7954*t9451 + t7206*(t7210*t7954 + t7230*t7960 + t7008*t8274 + t7046*t8288 + t9726 + t9728) + t7008*(-1.*t7210*t8269 - 1.*t7206*t8274 - 1.*t7450*t8288 - 1.*t7230*t8315 + t9734 + t9735))*var2[3] + (-1.*t1153*t5584*t6246*t9406 - 1.*t1153*t4554*t5584*t9412 + t7074*(t4554*t5584*t6631*t7081 - 1.*t6631*t6993*t7901 + t9468 + t9469 + t9726 + t9728) + t7033*(-1.*t5584*t6246*t6631*t7081 + t6631*t7099*t7901 + t9531 + t9532 + t9734 + t9735))*var2[4] + (-1.*t4554*t5602*t9165 - 1.*t5602*t6246*t9167 + t5584*t6246*(-1.*t4554*t5584*t6198 - 1.*t4554*t5602*t7901 + t9468 + t9469) + t4554*t5584*(t5584*t6198*t6246 + t5602*t6246*t7901 + t9531 + t9532))*var2[5])*var2[9] + ((t8651*t9447 + t7206*t9451 + t7206*(t7094 + t7243 + t7451 + t7008*t8663 + t7046*t8673 + t9993) + t7008*(-1.*t7210*t8651 - 1.*t7206*t8663 - 1.*t7450*t8673 - 1.*t7230*t8680 + t9996 + t9998))*var2[3] + (t8596*t9406 + t7074*t9412 + t7074*(t6425 + t7094 + t7104 + t6993*t8603 + t9968 + t9993) + t7033*(-1.*t7099*t8603 - 1.*t7081*t8630 + t9960 + t9964 + t9996 + t9998))*var2[4] + (t5584*t6246*t9165 + t5103*t5584*t9167 + t4554*t5584*(t5103*t5602*t6198 - 1.*t6246*t8572*t8574 + t9960 + t9962 + t9963 + t9964) + t5584*t6246*(t6290 + t6425 + t6454 + t4554*t8572*t8574 + t9968 + t9970))*var2[5] + (t8540*t9177 + t5103*t9181 + t6246*(-1.*t5103*t5842 - 1.*t6246*t8572 + t9962 + t9963) + t5103*(t5842*t6246 + t6290 + t4554*t8572 + t9970))*var2[9])*var2[10] + ((t7206*(t10107 + t10110 + t7210*t8882 + t7230*t8900 + t7008*t9046 + t7046*t9056) + t7008*(t10115 + t10116 + t10130 + t10131 - 1.*t7206*t9046 - 1.*t7450*t9056) + t7008*t9447 + t8882*t9451)*var2[3] + (t7074*(t10084 + t10086 + t10107 + t10110 + t7081*t8841 + t6993*t8927) + t7033*(t10048 + t10053 + t10114 + t10115 + t10116 - 1.*t7099*t8927) + t7033*t9406 + t8891*t9412)*var2[4] + (t5584*t6246*(t10083 + t10084 + t10086 + t10088 - 1.*t5602*t6198*t8540 + t4554*t8574*t8756) + t4554*t5584*(t10048 + t10049 + t10051 + t10052 + t10053 - 1.*t6246*t8574*t8756) + t5584*t8540*t9165 + t4554*t5584*t9167)*var2[5] + (t5103*(t10083 + t10088 + t5842*t8540 + t4554*t8756) + t6246*(t10051 + t10052 - 1.*t4554*t5842 - 1.*t6246*t8756) + t6246*t9177 + t4554*t9181)*var2[9])*var2[11] + t6695*var3[0] + t9372*var3[1] + t9362*var3[2] + t9454*var3[3] + t9414*var3[4] + t9169*var3[5] + t9186*var3[9] - 1.*var4[1];
  p_output1[2]=-0.575*t10209*t1264 - 0.295*(t10213*t1234 - 1.*t10209*t1264) - 0.0641*(t10209*t1234 + t10213*t1264) - 0.575*t10213*t2513 + 0.325*t10184*t4023 + 0.1575*t10172*t6076 - 0.1575*t1078*t5602*t7038 + 0.2255*(t10172*t5584 + t1078*t5602*t7038) + t8583 + t8589 + t8593 - 0.325*t10167*t865 + var1[2] + t10229*var2[3] + ((-1.*t7030*t7074 - 1.*t7038*t7450)*var2[1] + t8592*var2[2])*var2[3] + t10197*var2[4] + (t7450*var2[0] - 1.*t7030*t8435*var2[1] + t7038*t8435*var2[2] + (t10219*t7046 + t10223*t7216 + t6695*(-1.*t7046*t7210 - 1.*t7008*t7230 - 1.*t7230*t8345 - 1.*t7046*t8353) + t7008*(t7210*t7216 + t6695*t7230 + t7216*t8353 + t7230*t8359))*var2[3])*var2[4] + t10162*var2[5] + (t1078*t7633*var2[0] + (t7038*t7099 + t6561*t7030*t7633)*var2[1] + (t7030*t7099 - 1.*t6561*t7038*t7633)*var2[2] + (-1.*t10223*t1078*t1153*t5584 + t10219*t1078*t7470 + t6695*(t10315 + t10317 - 1.*t1078*t7210*t7470 + t6561*t7230*t7470 - 1.*t1078*t7008*t7619 + t6561*t7046*t7619) + t7008*(t10309 + t1153*t5584*t7081 - 1.*t1078*t1153*t5584*t7210 + t1153*t5584*t6561*t7230 + t1078*t6695*t7619 - 1.*t6561*t7216*t7619))*var2[3] + (-1.*t10195*t5584*t6631 + t10189*t6993 + t7033*(t10309 - 1.*t5584*t6631*t7619) + t1153*t5584*(t10315 + t10317 - 1.*t7081*t7470 - 1.*t6993*t7619))*var2[4])*var2[5] + 0.068*t6246*var2[9] + (t8269*var2[0] + (-1.*t1153*t5584*t6246*t7038 - 1.*t7030*t8315)*var2[1] + (-1.*t1153*t5584*t6246*t7030 + t7038*t8315)*var2[2] + (t10223*t6742 + t10219*t7954 + t6695*(t10399 + t10401 - 1.*t7210*t7954 - 1.*t7230*t7960 - 1.*t7008*t8274 - 1.*t7046*t8288) + t7008*(t10391 + t10394 + t6742*t7210 + t6695*t8274 + t7216*t8288 + t7230*t8300))*var2[3] + (-1.*t10189*t1153*t4554*t5584 - 1.*t10195*t1153*t5602 + t1153*t5584*(t10373 + t10374 + t10399 + t10401 - 1.*t4554*t5584*t6631*t7081 + t6631*t6993*t7901) + t7033*(t10367 + t10368 + t10391 + t10394 + t5602*t6631*t7081 + t5584*t7901*t7974))*var2[4] + (t10160*t5584 - 1.*t10157*t4554*t5602 + t4554*t5584*(t10367 + t10368 - 1.*t5602*t6198 + t5584*t7901) + t5602*(t10373 + t10374 + t4554*t5584*t6198 + t4554*t5602*t7901))*var2[5])*var2[9] + t10152*var2[10] + (t8651*var2[0] + (t7038*t8596 - 1.*t7030*t8680)*var2[1] + (t7030*t8596 + t7038*t8680)*var2[2] + (t10219*t7206 + t7008*(t10543 + t6695*t8663 + t7216*t8673) + t6695*(t10548 - 1.*t7008*t8663 - 1.*t7046*t8673 + t9410 + t9449 + t9450))*var2[3] + (t10189*t7074 + t7033*(t10543 + t5584*t5602*t8572 - 1.*t5584*t6631*t8603) + t1153*t5584*(t10514 + t10548 - 1.*t6993*t8603 + t9161 + t9410 + t9411))*var2[4] + (t10157*t5584*t6246 + t5602*(t10514 - 1.*t6246*t8563 - 1.*t4554*t8572*t8574 + t9160 + t9161 + t9163))*var2[5] + 0.068*t5103*var2[9])*var2[10] - 0.28*var2[11] + (t7010 + t7057 + t7068 + (t10219*t8882 + t6695*(t10476 + t10480 - 1.*t7210*t8882 - 1.*t7230*t8900 - 1.*t7008*t9046 - 1.*t7046*t9056) + t7008*(t10472 + t6695*t9046 + t7216*t9056))*var2[3] + (t10189*t8891 + t7033*(t10472 + t5584*t5602*t8756 - 1.*t5584*t6631*t8927) + t1153*t5584*(t10458 + t10460 + t10476 + t10480 - 1.*t7081*t8841 - 1.*t6993*t8927))*var2[4] + (t10157*t5584*t8540 + t5602*(t10458 + t10460 - 1.*t4554*t6276 + t5602*t6198*t8540 - 1.*t6246*t8742 - 1.*t4554*t8574*t8756))*var2[5] + 0.068*t4554*var2[9] + (t1577 + t3736 - 1.*t1264*t8724)*var2[10])*var2[11] + t7206*var3[0] + t8592*var3[1] + t8588*var3[2] + t10229*var3[3] + t10197*var3[4] + t10162*var3[5] + 0.068*t6246*var3[9] + t10152*var3[10] - 0.28*var3[11] - 1.*var4[2];
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

#include "ddh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void ddh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
