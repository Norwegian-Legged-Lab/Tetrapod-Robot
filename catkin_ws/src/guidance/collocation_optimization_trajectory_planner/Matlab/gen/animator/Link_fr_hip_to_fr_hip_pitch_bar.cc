/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:54 GMT+01:00
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
static void output1(double *p_output1,const double *var1)
{
  double t282;
  double t1449;
  double t1454;
  double t1493;
  double t2004;
  double t2101;
  double t936;
  double t4197;
  double t1736;
  double t2503;
  double t2940;
  double t3347;
  double t3854;
  double t4071;
  double t4337;
  double t4360;
  double t4393;
  double t4423;
  double t4467;
  double t4483;
  double t4549;
  double t3349;
  double t4451;
  double t4701;
  double t4881;
  double t6810;
  double t6832;
  double t6825;
  double t6839;
  double t6859;
  double t6872;
  double t6928;
  double t6930;
  double t6868;
  double t6948;
  double t7069;
  double t7081;
  double t7083;
  double t7088;
  double t7091;
  double t7126;
  double t6811;
  double t7087;
  double t7156;
  double t7157;
  double t7945;
  double t7946;
  double t7947;
  double t7950;
  double t7967;
  double t8002;
  double t7949;
  double t8003;
  double t8005;
  double t8010;
  double t8011;
  double t8053;
  double t8059;
  double t8061;
  double t7942;
  double t8051;
  double t8067;
  double t8110;
  double t8396;
  double t8400;
  double t8402;
  double t8419;
  double t11879;
  double t11884;
  double t11889;
  double t11892;
  double t12260;
  double t12261;
  double t12262;
  double t12263;
  t282 = Cos(var1[4]);
  t1449 = Cos(var1[9]);
  t1454 = -1.*t1449;
  t1493 = 1. + t1454;
  t2004 = Sin(var1[9]);
  t2101 = -0.15121*t2004;
  t936 = Cos(var1[5]);
  t4197 = Sin(var1[5]);
  t1736 = 0.15121*t1493;
  t2503 = t1736 + t2101;
  t2940 = t282*t936*t2503;
  t3347 = Sin(var1[4]);
  t3854 = -0.15121*t1493;
  t4071 = t3854 + t2101;
  t4337 = -1.*t282*t4071*t4197;
  t4360 = -1.*t282*t936*t2004;
  t4393 = -1.*t1449*t282*t4197;
  t4423 = t4360 + t4393;
  t4467 = t1449*t282*t936;
  t4483 = -1.*t282*t2004*t4197;
  t4549 = t4467 + t4483;
  t3349 = -0.009947*t3347;
  t4451 = -0.159375*t4423;
  t4701 = 0.143503*t4549;
  t4881 = var1[0] + t2940 + t3349 + t4337 + t4451 + t4701;
  t6810 = Sin(var1[3]);
  t6832 = Cos(var1[3]);
  t6825 = t936*t6810*t3347;
  t6839 = t6832*t4197;
  t6859 = t6825 + t6839;
  t6872 = t6832*t936;
  t6928 = -1.*t6810*t3347*t4197;
  t6930 = t6872 + t6928;
  t6868 = t2503*t6859;
  t6948 = t4071*t6930;
  t7069 = -1.*t2004*t6859;
  t7081 = t1449*t6930;
  t7083 = t7069 + t7081;
  t7088 = t1449*t6859;
  t7091 = t2004*t6930;
  t7126 = t7088 + t7091;
  t6811 = 0.009947*t282*t6810;
  t7087 = -0.159375*t7083;
  t7156 = 0.143503*t7126;
  t7157 = var1[1] + t6811 + t6868 + t6948 + t7087 + t7156;
  t7945 = -1.*t6832*t936*t3347;
  t7946 = t6810*t4197;
  t7947 = t7945 + t7946;
  t7950 = t936*t6810;
  t7967 = t6832*t3347*t4197;
  t8002 = t7950 + t7967;
  t7949 = t2503*t7947;
  t8003 = t4071*t8002;
  t8005 = -1.*t2004*t7947;
  t8010 = t1449*t8002;
  t8011 = t8005 + t8010;
  t8053 = t1449*t7947;
  t8059 = t2004*t8002;
  t8061 = t8053 + t8059;
  t7942 = -0.009947*t6832*t282;
  t8051 = -0.159375*t8011;
  t8067 = 0.143503*t8061;
  t8110 = var1[2] + t7942 + t7949 + t8003 + t8051 + t8067;
  t8396 = -0.048697*t3347;
  t8400 = -0.234875*t4423;
  t8402 = 0.273503*t4549;
  t8419 = var1[0] + t2940 + t8396 + t4337 + t8400 + t8402;
  t11879 = 0.048697*t282*t6810;
  t11884 = -0.234875*t7083;
  t11889 = 0.273503*t7126;
  t11892 = var1[1] + t11879 + t6868 + t6948 + t11884 + t11889;
  t12260 = -0.048697*t6832*t282;
  t12261 = -0.234875*t8011;
  t12262 = 0.273503*t8061;
  t12263 = var1[2] + t12260 + t7949 + t8003 + t12261 + t12262;
  p_output1[0]=t4881;
  p_output1[1]=t2940 - 0.012845*t3347 + t4337 - 0.155604*t4423 + 0.14483*t4549 + var1[0];
  p_output1[2]=t2940 - 0.014351*t3347 + t4337 - 0.151356*t4423 + 0.146848*t4549 + var1[0];
  p_output1[3]=t2940 - 0.014302*t3347 + t4337 - 0.147093*t4423 + 0.149338*t4549 + var1[0];
  p_output1[4]=t2940 - 0.012703*t3347 + t4337 - 0.143275*t4423 + 0.152032*t4549 + var1[0];
  p_output1[5]=t2940 - 0.009728*t3347 + t4337 - 0.140318*t4423 + 0.154636*t4549 + var1[0];
  p_output1[6]=t2940 - 0.005698*t3347 + t4337 - 0.138541*t4423 + 0.156869*t4549 + var1[0];
  p_output1[7]=t2940 - 0.001051*t3347 + t4337 - 0.138137*t4423 + 0.158489*t4549 + var1[0];
  p_output1[8]=t2940 + 0.00371*t3347 + t4337 - 0.139149*t4423 + 0.15932*t4549 + var1[0];
  p_output1[9]=t2940 + 0.008069*t3347 + t4337 - 0.141469*t4423 + 0.159273*t4549 + var1[0];
  p_output1[10]=t2940 + 0.011553*t3347 + t4337 - 0.144844*t4423 + 0.158351*t4549 + var1[0];
  p_output1[11]=t2940 + 0.013786*t3347 + t4337 - 0.148909*t4423 + 0.156656*t4549 + var1[0];
  p_output1[12]=t2940 + 0.014524*t3347 + t4337 - 0.153223*t4423 + 0.15437*t4549 + var1[0];
  p_output1[13]=t2940 + 0.013689*t3347 + t4337 - 0.157319*t4423 + 0.151742*t4549 + var1[0];
  p_output1[14]=t2940 + 0.01137*t3347 + t4337 - 0.160753*t4423 + 0.149057*t4549 + var1[0];
  p_output1[15]=t2940 + 0.00782*t3347 + t4337 - 0.163153*t4423 + 0.146604*t4549 + var1[0];
  p_output1[16]=t2940 + 0.003421*t3347 + t4337 - 0.164259*t4423 + 0.144651*t4549 + var1[0];
  p_output1[17]=t2940 - 0.001348*t3347 + t4337 - 0.163951*t4423 + 0.143409*t4549 + var1[0];
  p_output1[18]=t2940 - 0.005971*t3347 + t4337 - 0.162262*t4423 + 0.143012*t4549 + var1[0];
  p_output1[19]=t4881;
  p_output1[20]=t7157;
  p_output1[21]=0.012845*t282*t6810 + t6868 + t6948 - 0.155604*t7083 + 0.14483*t7126 + var1[1];
  p_output1[22]=0.014351*t282*t6810 + t6868 + t6948 - 0.151356*t7083 + 0.146848*t7126 + var1[1];
  p_output1[23]=0.014302*t282*t6810 + t6868 + t6948 - 0.147093*t7083 + 0.149338*t7126 + var1[1];
  p_output1[24]=0.012703*t282*t6810 + t6868 + t6948 - 0.143275*t7083 + 0.152032*t7126 + var1[1];
  p_output1[25]=0.009728*t282*t6810 + t6868 + t6948 - 0.140318*t7083 + 0.154636*t7126 + var1[1];
  p_output1[26]=0.005698*t282*t6810 + t6868 + t6948 - 0.138541*t7083 + 0.156869*t7126 + var1[1];
  p_output1[27]=0.001051*t282*t6810 + t6868 + t6948 - 0.138137*t7083 + 0.158489*t7126 + var1[1];
  p_output1[28]=-0.00371*t282*t6810 + t6868 + t6948 - 0.139149*t7083 + 0.15932*t7126 + var1[1];
  p_output1[29]=-0.008069*t282*t6810 + t6868 + t6948 - 0.141469*t7083 + 0.159273*t7126 + var1[1];
  p_output1[30]=-0.011553*t282*t6810 + t6868 + t6948 - 0.144844*t7083 + 0.158351*t7126 + var1[1];
  p_output1[31]=-0.013786*t282*t6810 + t6868 + t6948 - 0.148909*t7083 + 0.156656*t7126 + var1[1];
  p_output1[32]=-0.014524*t282*t6810 + t6868 + t6948 - 0.153223*t7083 + 0.15437*t7126 + var1[1];
  p_output1[33]=-0.013689*t282*t6810 + t6868 + t6948 - 0.157319*t7083 + 0.151742*t7126 + var1[1];
  p_output1[34]=-0.01137*t282*t6810 + t6868 + t6948 - 0.160753*t7083 + 0.149057*t7126 + var1[1];
  p_output1[35]=-0.00782*t282*t6810 + t6868 + t6948 - 0.163153*t7083 + 0.146604*t7126 + var1[1];
  p_output1[36]=-0.003421*t282*t6810 + t6868 + t6948 - 0.164259*t7083 + 0.144651*t7126 + var1[1];
  p_output1[37]=0.001348*t282*t6810 + t6868 + t6948 - 0.163951*t7083 + 0.143409*t7126 + var1[1];
  p_output1[38]=0.005971*t282*t6810 + t6868 + t6948 - 0.162262*t7083 + 0.143012*t7126 + var1[1];
  p_output1[39]=t7157;
  p_output1[40]=t8110;
  p_output1[41]=-0.012845*t282*t6832 + t7949 + t8003 - 0.155604*t8011 + 0.14483*t8061 + var1[2];
  p_output1[42]=-0.014351*t282*t6832 + t7949 + t8003 - 0.151356*t8011 + 0.146848*t8061 + var1[2];
  p_output1[43]=-0.014302*t282*t6832 + t7949 + t8003 - 0.147093*t8011 + 0.149338*t8061 + var1[2];
  p_output1[44]=-0.012703*t282*t6832 + t7949 + t8003 - 0.143275*t8011 + 0.152032*t8061 + var1[2];
  p_output1[45]=-0.009728*t282*t6832 + t7949 + t8003 - 0.140318*t8011 + 0.154636*t8061 + var1[2];
  p_output1[46]=-0.005698*t282*t6832 + t7949 + t8003 - 0.138541*t8011 + 0.156869*t8061 + var1[2];
  p_output1[47]=-0.001051*t282*t6832 + t7949 + t8003 - 0.138137*t8011 + 0.158489*t8061 + var1[2];
  p_output1[48]=0.00371*t282*t6832 + t7949 + t8003 - 0.139149*t8011 + 0.15932*t8061 + var1[2];
  p_output1[49]=0.008069*t282*t6832 + t7949 + t8003 - 0.141469*t8011 + 0.159273*t8061 + var1[2];
  p_output1[50]=0.011553*t282*t6832 + t7949 + t8003 - 0.144844*t8011 + 0.158351*t8061 + var1[2];
  p_output1[51]=0.013786*t282*t6832 + t7949 + t8003 - 0.148909*t8011 + 0.156656*t8061 + var1[2];
  p_output1[52]=0.014524*t282*t6832 + t7949 + t8003 - 0.153223*t8011 + 0.15437*t8061 + var1[2];
  p_output1[53]=0.013689*t282*t6832 + t7949 + t8003 - 0.157319*t8011 + 0.151742*t8061 + var1[2];
  p_output1[54]=0.01137*t282*t6832 + t7949 + t8003 - 0.160753*t8011 + 0.149057*t8061 + var1[2];
  p_output1[55]=0.00782*t282*t6832 + t7949 + t8003 - 0.163153*t8011 + 0.146604*t8061 + var1[2];
  p_output1[56]=0.003421*t282*t6832 + t7949 + t8003 - 0.164259*t8011 + 0.144651*t8061 + var1[2];
  p_output1[57]=-0.001348*t282*t6832 + t7949 + t8003 - 0.163951*t8011 + 0.143409*t8061 + var1[2];
  p_output1[58]=-0.005971*t282*t6832 + t7949 + t8003 - 0.162262*t8011 + 0.143012*t8061 + var1[2];
  p_output1[59]=t8110;
  p_output1[60]=t8419;
  p_output1[61]=t2940 - 0.051595*t3347 + t4337 - 0.231104*t4423 + 0.27483*t4549 + var1[0];
  p_output1[62]=t2940 - 0.053101*t3347 + t4337 - 0.226856*t4423 + 0.276848*t4549 + var1[0];
  p_output1[63]=t2940 - 0.053052*t3347 + t4337 - 0.222593*t4423 + 0.279338*t4549 + var1[0];
  p_output1[64]=t2940 - 0.051453*t3347 + t4337 - 0.218775*t4423 + 0.282032*t4549 + var1[0];
  p_output1[65]=t2940 - 0.048478*t3347 + t4337 - 0.215818*t4423 + 0.284636*t4549 + var1[0];
  p_output1[66]=t2940 - 0.044448*t3347 + t4337 - 0.214041*t4423 + 0.286869*t4549 + var1[0];
  p_output1[67]=t2940 - 0.039801*t3347 + t4337 - 0.213637*t4423 + 0.288489*t4549 + var1[0];
  p_output1[68]=t2940 - 0.03504*t3347 + t4337 - 0.214649*t4423 + 0.28932*t4549 + var1[0];
  p_output1[69]=t2940 - 0.030681*t3347 + t4337 - 0.216969*t4423 + 0.289273*t4549 + var1[0];
  p_output1[70]=t2940 - 0.027197*t3347 + t4337 - 0.220344*t4423 + 0.288351*t4549 + var1[0];
  p_output1[71]=t2940 - 0.024964*t3347 + t4337 - 0.224409*t4423 + 0.286656*t4549 + var1[0];
  p_output1[72]=t2940 - 0.024226*t3347 + t4337 - 0.228723*t4423 + 0.28437*t4549 + var1[0];
  p_output1[73]=t2940 - 0.025061*t3347 + t4337 - 0.232819*t4423 + 0.281742*t4549 + var1[0];
  p_output1[74]=t2940 - 0.02738*t3347 + t4337 - 0.236253*t4423 + 0.279057*t4549 + var1[0];
  p_output1[75]=t2940 - 0.03093*t3347 + t4337 - 0.238653*t4423 + 0.276604*t4549 + var1[0];
  p_output1[76]=t2940 - 0.035329*t3347 + t4337 - 0.239759*t4423 + 0.274651*t4549 + var1[0];
  p_output1[77]=t2940 - 0.040098*t3347 + t4337 - 0.239451*t4423 + 0.273409*t4549 + var1[0];
  p_output1[78]=t2940 - 0.044721*t3347 + t4337 - 0.237762*t4423 + 0.273012*t4549 + var1[0];
  p_output1[79]=t8419;
  p_output1[80]=t11892;
  p_output1[81]=0.051595*t282*t6810 + t6868 + t6948 - 0.231104*t7083 + 0.27483*t7126 + var1[1];
  p_output1[82]=0.053101*t282*t6810 + t6868 + t6948 - 0.226856*t7083 + 0.276848*t7126 + var1[1];
  p_output1[83]=0.053052*t282*t6810 + t6868 + t6948 - 0.222593*t7083 + 0.279338*t7126 + var1[1];
  p_output1[84]=0.051453*t282*t6810 + t6868 + t6948 - 0.218775*t7083 + 0.282032*t7126 + var1[1];
  p_output1[85]=0.048478*t282*t6810 + t6868 + t6948 - 0.215818*t7083 + 0.284636*t7126 + var1[1];
  p_output1[86]=0.044448*t282*t6810 + t6868 + t6948 - 0.214041*t7083 + 0.286869*t7126 + var1[1];
  p_output1[87]=0.039801*t282*t6810 + t6868 + t6948 - 0.213637*t7083 + 0.288489*t7126 + var1[1];
  p_output1[88]=0.03504*t282*t6810 + t6868 + t6948 - 0.214649*t7083 + 0.28932*t7126 + var1[1];
  p_output1[89]=0.030681*t282*t6810 + t6868 + t6948 - 0.216969*t7083 + 0.289273*t7126 + var1[1];
  p_output1[90]=0.027197*t282*t6810 + t6868 + t6948 - 0.220344*t7083 + 0.288351*t7126 + var1[1];
  p_output1[91]=0.024964*t282*t6810 + t6868 + t6948 - 0.224409*t7083 + 0.286656*t7126 + var1[1];
  p_output1[92]=0.024226*t282*t6810 + t6868 + t6948 - 0.228723*t7083 + 0.28437*t7126 + var1[1];
  p_output1[93]=0.025061*t282*t6810 + t6868 + t6948 - 0.232819*t7083 + 0.281742*t7126 + var1[1];
  p_output1[94]=0.02738*t282*t6810 + t6868 + t6948 - 0.236253*t7083 + 0.279057*t7126 + var1[1];
  p_output1[95]=0.03093*t282*t6810 + t6868 + t6948 - 0.238653*t7083 + 0.276604*t7126 + var1[1];
  p_output1[96]=0.035329*t282*t6810 + t6868 + t6948 - 0.239759*t7083 + 0.274651*t7126 + var1[1];
  p_output1[97]=0.040098*t282*t6810 + t6868 + t6948 - 0.239451*t7083 + 0.273409*t7126 + var1[1];
  p_output1[98]=0.044721*t282*t6810 + t6868 + t6948 - 0.237762*t7083 + 0.273012*t7126 + var1[1];
  p_output1[99]=t11892;
  p_output1[100]=t12263;
  p_output1[101]=-0.051595*t282*t6832 + t7949 + t8003 - 0.231104*t8011 + 0.27483*t8061 + var1[2];
  p_output1[102]=-0.053101*t282*t6832 + t7949 + t8003 - 0.226856*t8011 + 0.276848*t8061 + var1[2];
  p_output1[103]=-0.053052*t282*t6832 + t7949 + t8003 - 0.222593*t8011 + 0.279338*t8061 + var1[2];
  p_output1[104]=-0.051453*t282*t6832 + t7949 + t8003 - 0.218775*t8011 + 0.282032*t8061 + var1[2];
  p_output1[105]=-0.048478*t282*t6832 + t7949 + t8003 - 0.215818*t8011 + 0.284636*t8061 + var1[2];
  p_output1[106]=-0.044448*t282*t6832 + t7949 + t8003 - 0.214041*t8011 + 0.286869*t8061 + var1[2];
  p_output1[107]=-0.039801*t282*t6832 + t7949 + t8003 - 0.213637*t8011 + 0.288489*t8061 + var1[2];
  p_output1[108]=-0.03504*t282*t6832 + t7949 + t8003 - 0.214649*t8011 + 0.28932*t8061 + var1[2];
  p_output1[109]=-0.030681*t282*t6832 + t7949 + t8003 - 0.216969*t8011 + 0.289273*t8061 + var1[2];
  p_output1[110]=-0.027197*t282*t6832 + t7949 + t8003 - 0.220344*t8011 + 0.288351*t8061 + var1[2];
  p_output1[111]=-0.024964*t282*t6832 + t7949 + t8003 - 0.224409*t8011 + 0.286656*t8061 + var1[2];
  p_output1[112]=-0.024226*t282*t6832 + t7949 + t8003 - 0.228723*t8011 + 0.28437*t8061 + var1[2];
  p_output1[113]=-0.025061*t282*t6832 + t7949 + t8003 - 0.232819*t8011 + 0.281742*t8061 + var1[2];
  p_output1[114]=-0.02738*t282*t6832 + t7949 + t8003 - 0.236253*t8011 + 0.279057*t8061 + var1[2];
  p_output1[115]=-0.03093*t282*t6832 + t7949 + t8003 - 0.238653*t8011 + 0.276604*t8061 + var1[2];
  p_output1[116]=-0.035329*t282*t6832 + t7949 + t8003 - 0.239759*t8011 + 0.274651*t8061 + var1[2];
  p_output1[117]=-0.040098*t282*t6832 + t7949 + t8003 - 0.239451*t8011 + 0.273409*t8061 + var1[2];
  p_output1[118]=-0.044721*t282*t6832 + t7949 + t8003 - 0.237762*t8011 + 0.273012*t8061 + var1[2];
  p_output1[119]=t12263;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_fr_hip_to_fr_hip_pitch_bar.hh"

namespace SymFunction
{

void Link_fr_hip_to_fr_hip_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
