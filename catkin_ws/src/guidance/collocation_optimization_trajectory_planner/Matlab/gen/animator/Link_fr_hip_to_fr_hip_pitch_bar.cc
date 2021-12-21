/*
 * Automatically Generated from Mathematica.
 * Fri 10 Dec 2021 23:17:01 GMT+01:00
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
  double t124;
  double t605;
  double t688;
  double t711;
  double t770;
  double t849;
  double t578;
  double t1160;
  double t729;
  double t879;
  double t890;
  double t909;
  double t959;
  double t1056;
  double t1182;
  double t1237;
  double t1286;
  double t1333;
  double t1380;
  double t1392;
  double t1396;
  double t918;
  double t1340;
  double t1432;
  double t1581;
  double t3331;
  double t3348;
  double t3345;
  double t3350;
  double t3355;
  double t3372;
  double t3373;
  double t3483;
  double t3371;
  double t3527;
  double t3635;
  double t3638;
  double t3659;
  double t3669;
  double t3694;
  double t3695;
  double t3344;
  double t3668;
  double t3696;
  double t3737;
  double t4319;
  double t4320;
  double t4323;
  double t4330;
  double t4333;
  double t4334;
  double t4328;
  double t4335;
  double t4338;
  double t4339;
  double t4340;
  double t4348;
  double t4350;
  double t4353;
  double t4317;
  double t4346;
  double t4356;
  double t4357;
  double t4516;
  double t4521;
  double t4525;
  double t4528;
  double t4661;
  double t4662;
  double t4663;
  double t4664;
  double t4795;
  double t4797;
  double t4798;
  double t4799;
  t124 = Cos(var1[4]);
  t605 = Cos(var1[9]);
  t688 = -1.*t605;
  t711 = 1. + t688;
  t770 = Sin(var1[9]);
  t849 = -0.15121*t770;
  t578 = Cos(var1[5]);
  t1160 = Sin(var1[5]);
  t729 = 0.15121*t711;
  t879 = t729 + t849;
  t890 = t124*t578*t879;
  t909 = Sin(var1[4]);
  t959 = -0.15121*t711;
  t1056 = t959 + t849;
  t1182 = -1.*t124*t1056*t1160;
  t1237 = -1.*t124*t578*t770;
  t1286 = -1.*t605*t124*t1160;
  t1333 = t1237 + t1286;
  t1380 = t605*t124*t578;
  t1392 = -1.*t124*t770*t1160;
  t1396 = t1380 + t1392;
  t918 = -0.003451*t909;
  t1340 = -0.163363*t1333;
  t1432 = 0.143123*t1396;
  t1581 = var1[0] + t890 + t918 + t1182 + t1340 + t1432;
  t3331 = Sin(var1[3]);
  t3348 = Cos(var1[3]);
  t3345 = t578*t3331*t909;
  t3350 = t3348*t1160;
  t3355 = t3345 + t3350;
  t3372 = t3348*t578;
  t3373 = -1.*t3331*t909*t1160;
  t3483 = t3372 + t3373;
  t3371 = t879*t3355;
  t3527 = t1056*t3483;
  t3635 = -1.*t770*t3355;
  t3638 = t605*t3483;
  t3659 = t3635 + t3638;
  t3669 = t605*t3355;
  t3694 = t770*t3483;
  t3695 = t3669 + t3694;
  t3344 = 0.003451*t124*t3331;
  t3668 = -0.163363*t3659;
  t3696 = 0.143123*t3695;
  t3737 = var1[1] + t3344 + t3371 + t3527 + t3668 + t3696;
  t4319 = -1.*t3348*t578*t909;
  t4320 = t3331*t1160;
  t4323 = t4319 + t4320;
  t4330 = t578*t3331;
  t4333 = t3348*t909*t1160;
  t4334 = t4330 + t4333;
  t4328 = t879*t4323;
  t4335 = t1056*t4334;
  t4338 = -1.*t770*t4323;
  t4339 = t605*t4334;
  t4340 = t4338 + t4339;
  t4348 = t605*t4323;
  t4350 = t770*t4334;
  t4353 = t4348 + t4350;
  t4317 = -0.003451*t3348*t124;
  t4346 = -0.163363*t4340;
  t4356 = 0.143123*t4353;
  t4357 = var1[2] + t4317 + t4328 + t4335 + t4346 + t4356;
  t4516 = -0.042201*t909;
  t4521 = -0.238863*t1333;
  t4525 = 0.273123*t1396;
  t4528 = var1[0] + t890 + t4516 + t1182 + t4521 + t4525;
  t4661 = 0.042201*t124*t3331;
  t4662 = -0.238863*t3659;
  t4663 = 0.273123*t3695;
  t4664 = var1[1] + t4661 + t3371 + t3527 + t4662 + t4663;
  t4795 = -0.042201*t3348*t124;
  t4797 = -0.238863*t4340;
  t4798 = 0.273123*t4353;
  t4799 = var1[2] + t4795 + t4328 + t4335 + t4797 + t4798;
  p_output1[0]=t1581;
  p_output1[1]=t1182 - 0.161111*t1333 + 0.143121*t1396 + t890 - 0.007845*t909 + var1[0];
  p_output1[2]=t1182 - 0.157786*t1333 + 0.143996*t1396 + t890 - 0.011389*t909 + var1[0];
  p_output1[3]=t1182 - 0.153748*t1333 + 0.145653*t1396 + t890 - 0.013699*t909 + var1[0];
  p_output1[4]=t1182 - 0.149435*t1333 + 0.147911*t1396 + t890 - 0.014525*t909 + var1[0];
  p_output1[5]=t1182 - 0.145315*t1333 + 0.150527*t1396 + t890 - 0.013776*t909 + var1[0];
  p_output1[6]=t1182 - 0.141833*t1333 + 0.153217*t1396 + t890 - 0.011535*t909 + var1[0];
  p_output1[7]=t1182 - 0.139368*t1333 + 0.15569*t1396 + t890 - 0.008043*t909 + var1[0];
  p_output1[8]=t1182 - 0.138186*t1333 + 0.157677*t1396 + t890 - 0.00368*t909 + var1[0];
  p_output1[9]=t1182 - 0.138415*t1333 + 0.158963*t1396 + t890 + 0.001082*t909 + var1[0];
  p_output1[10]=t1182 - 0.140031*t1333 + 0.159409*t1396 + t890 + 0.005726*t909 + var1[0];
  p_output1[11]=t1182 - 0.142858*t1333 + 0.158967*t1396 + t890 + 0.00975*t909 + var1[0];
  p_output1[12]=t1182 - 0.14659*t1333 + 0.157684*t1396 + t890 + 0.012718*t909 + var1[0];
  p_output1[13]=t1182 - 0.150823*t1333 + 0.155699*t1396 + t890 + 0.014307*t909 + var1[0];
  p_output1[14]=t1182 - 0.155098*t1333 + 0.153228*t1396 + t890 + 0.014346*t909 + var1[0];
  p_output1[15]=t1182 - 0.158951*t1333 + 0.150538*t1396 + t890 + 0.01283*t909 + var1[0];
  p_output1[16]=t1182 - 0.161966*t1333 + 0.147921*t1396 + t890 + 0.009924*t909 + var1[0];
  p_output1[17]=t1182 - 0.163815*t1333 + 0.145661*t1396 + t890 + 0.005943*t909 + var1[0];
  p_output1[18]=t1182 - 0.164298*t1333 + 0.144001*t1396 + t890 + 0.001317*t909 + var1[0];
  p_output1[19]=t1581;
  p_output1[20]=t3737;
  p_output1[21]=0.007845*t124*t3331 + t3371 + t3527 - 0.161111*t3659 + 0.143121*t3695 + var1[1];
  p_output1[22]=0.011389*t124*t3331 + t3371 + t3527 - 0.157786*t3659 + 0.143996*t3695 + var1[1];
  p_output1[23]=0.013699*t124*t3331 + t3371 + t3527 - 0.153748*t3659 + 0.145653*t3695 + var1[1];
  p_output1[24]=0.014525*t124*t3331 + t3371 + t3527 - 0.149435*t3659 + 0.147911*t3695 + var1[1];
  p_output1[25]=0.013776*t124*t3331 + t3371 + t3527 - 0.145315*t3659 + 0.150527*t3695 + var1[1];
  p_output1[26]=0.011535*t124*t3331 + t3371 + t3527 - 0.141833*t3659 + 0.153217*t3695 + var1[1];
  p_output1[27]=0.008043*t124*t3331 + t3371 + t3527 - 0.139368*t3659 + 0.15569*t3695 + var1[1];
  p_output1[28]=0.00368*t124*t3331 + t3371 + t3527 - 0.138186*t3659 + 0.157677*t3695 + var1[1];
  p_output1[29]=-0.001082*t124*t3331 + t3371 + t3527 - 0.138415*t3659 + 0.158963*t3695 + var1[1];
  p_output1[30]=-0.005726*t124*t3331 + t3371 + t3527 - 0.140031*t3659 + 0.159409*t3695 + var1[1];
  p_output1[31]=-0.00975*t124*t3331 + t3371 + t3527 - 0.142858*t3659 + 0.158967*t3695 + var1[1];
  p_output1[32]=-0.012718*t124*t3331 + t3371 + t3527 - 0.14659*t3659 + 0.157684*t3695 + var1[1];
  p_output1[33]=-0.014307*t124*t3331 + t3371 + t3527 - 0.150823*t3659 + 0.155699*t3695 + var1[1];
  p_output1[34]=-0.014346*t124*t3331 + t3371 + t3527 - 0.155098*t3659 + 0.153228*t3695 + var1[1];
  p_output1[35]=-0.01283*t124*t3331 + t3371 + t3527 - 0.158951*t3659 + 0.150538*t3695 + var1[1];
  p_output1[36]=-0.009924*t124*t3331 + t3371 + t3527 - 0.161966*t3659 + 0.147921*t3695 + var1[1];
  p_output1[37]=-0.005943*t124*t3331 + t3371 + t3527 - 0.163815*t3659 + 0.145661*t3695 + var1[1];
  p_output1[38]=-0.001317*t124*t3331 + t3371 + t3527 - 0.164298*t3659 + 0.144001*t3695 + var1[1];
  p_output1[39]=t3737;
  p_output1[40]=t4357;
  p_output1[41]=-0.007845*t124*t3348 + t4328 + t4335 - 0.161111*t4340 + 0.143121*t4353 + var1[2];
  p_output1[42]=-0.011389*t124*t3348 + t4328 + t4335 - 0.157786*t4340 + 0.143996*t4353 + var1[2];
  p_output1[43]=-0.013699*t124*t3348 + t4328 + t4335 - 0.153748*t4340 + 0.145653*t4353 + var1[2];
  p_output1[44]=-0.014525*t124*t3348 + t4328 + t4335 - 0.149435*t4340 + 0.147911*t4353 + var1[2];
  p_output1[45]=-0.013776*t124*t3348 + t4328 + t4335 - 0.145315*t4340 + 0.150527*t4353 + var1[2];
  p_output1[46]=-0.011535*t124*t3348 + t4328 + t4335 - 0.141833*t4340 + 0.153217*t4353 + var1[2];
  p_output1[47]=-0.008043*t124*t3348 + t4328 + t4335 - 0.139368*t4340 + 0.15569*t4353 + var1[2];
  p_output1[48]=-0.00368*t124*t3348 + t4328 + t4335 - 0.138186*t4340 + 0.157677*t4353 + var1[2];
  p_output1[49]=0.001082*t124*t3348 + t4328 + t4335 - 0.138415*t4340 + 0.158963*t4353 + var1[2];
  p_output1[50]=0.005726*t124*t3348 + t4328 + t4335 - 0.140031*t4340 + 0.159409*t4353 + var1[2];
  p_output1[51]=0.00975*t124*t3348 + t4328 + t4335 - 0.142858*t4340 + 0.158967*t4353 + var1[2];
  p_output1[52]=0.012718*t124*t3348 + t4328 + t4335 - 0.14659*t4340 + 0.157684*t4353 + var1[2];
  p_output1[53]=0.014307*t124*t3348 + t4328 + t4335 - 0.150823*t4340 + 0.155699*t4353 + var1[2];
  p_output1[54]=0.014346*t124*t3348 + t4328 + t4335 - 0.155098*t4340 + 0.153228*t4353 + var1[2];
  p_output1[55]=0.01283*t124*t3348 + t4328 + t4335 - 0.158951*t4340 + 0.150538*t4353 + var1[2];
  p_output1[56]=0.009924*t124*t3348 + t4328 + t4335 - 0.161966*t4340 + 0.147921*t4353 + var1[2];
  p_output1[57]=0.005943*t124*t3348 + t4328 + t4335 - 0.163815*t4340 + 0.145661*t4353 + var1[2];
  p_output1[58]=0.001317*t124*t3348 + t4328 + t4335 - 0.164298*t4340 + 0.144001*t4353 + var1[2];
  p_output1[59]=t4357;
  p_output1[60]=t4528;
  p_output1[61]=t1182 - 0.236611*t1333 + 0.273121*t1396 + t890 - 0.046595*t909 + var1[0];
  p_output1[62]=t1182 - 0.233286*t1333 + 0.273996*t1396 + t890 - 0.050139*t909 + var1[0];
  p_output1[63]=t1182 - 0.229248*t1333 + 0.275653*t1396 + t890 - 0.052449*t909 + var1[0];
  p_output1[64]=t1182 - 0.224935*t1333 + 0.277911*t1396 + t890 - 0.053275*t909 + var1[0];
  p_output1[65]=t1182 - 0.220815*t1333 + 0.280527*t1396 + t890 - 0.052526*t909 + var1[0];
  p_output1[66]=t1182 - 0.217333*t1333 + 0.283217*t1396 + t890 - 0.050285*t909 + var1[0];
  p_output1[67]=t1182 - 0.214868*t1333 + 0.28569*t1396 + t890 - 0.046793*t909 + var1[0];
  p_output1[68]=t1182 - 0.213686*t1333 + 0.287677*t1396 + t890 - 0.04243*t909 + var1[0];
  p_output1[69]=t1182 - 0.213915*t1333 + 0.288963*t1396 + t890 - 0.037668*t909 + var1[0];
  p_output1[70]=t1182 - 0.215531*t1333 + 0.289409*t1396 + t890 - 0.033024*t909 + var1[0];
  p_output1[71]=t1182 - 0.218358*t1333 + 0.288967*t1396 + t890 - 0.029*t909 + var1[0];
  p_output1[72]=t1182 - 0.22209*t1333 + 0.287684*t1396 + t890 - 0.026032*t909 + var1[0];
  p_output1[73]=t1182 - 0.226323*t1333 + 0.285699*t1396 + t890 - 0.024443*t909 + var1[0];
  p_output1[74]=t1182 - 0.230598*t1333 + 0.283228*t1396 + t890 - 0.024404*t909 + var1[0];
  p_output1[75]=t1182 - 0.234451*t1333 + 0.280538*t1396 + t890 - 0.02592*t909 + var1[0];
  p_output1[76]=t1182 - 0.237466*t1333 + 0.277921*t1396 + t890 - 0.028826*t909 + var1[0];
  p_output1[77]=t1182 - 0.239315*t1333 + 0.275661*t1396 + t890 - 0.032807*t909 + var1[0];
  p_output1[78]=t1182 - 0.239798*t1333 + 0.274001*t1396 + t890 - 0.037433*t909 + var1[0];
  p_output1[79]=t4528;
  p_output1[80]=t4664;
  p_output1[81]=0.046595*t124*t3331 + t3371 + t3527 - 0.236611*t3659 + 0.273121*t3695 + var1[1];
  p_output1[82]=0.050139*t124*t3331 + t3371 + t3527 - 0.233286*t3659 + 0.273996*t3695 + var1[1];
  p_output1[83]=0.052449*t124*t3331 + t3371 + t3527 - 0.229248*t3659 + 0.275653*t3695 + var1[1];
  p_output1[84]=0.053275*t124*t3331 + t3371 + t3527 - 0.224935*t3659 + 0.277911*t3695 + var1[1];
  p_output1[85]=0.052526*t124*t3331 + t3371 + t3527 - 0.220815*t3659 + 0.280527*t3695 + var1[1];
  p_output1[86]=0.050285*t124*t3331 + t3371 + t3527 - 0.217333*t3659 + 0.283217*t3695 + var1[1];
  p_output1[87]=0.046793*t124*t3331 + t3371 + t3527 - 0.214868*t3659 + 0.28569*t3695 + var1[1];
  p_output1[88]=0.04243*t124*t3331 + t3371 + t3527 - 0.213686*t3659 + 0.287677*t3695 + var1[1];
  p_output1[89]=0.037668*t124*t3331 + t3371 + t3527 - 0.213915*t3659 + 0.288963*t3695 + var1[1];
  p_output1[90]=0.033024*t124*t3331 + t3371 + t3527 - 0.215531*t3659 + 0.289409*t3695 + var1[1];
  p_output1[91]=0.029*t124*t3331 + t3371 + t3527 - 0.218358*t3659 + 0.288967*t3695 + var1[1];
  p_output1[92]=0.026032*t124*t3331 + t3371 + t3527 - 0.22209*t3659 + 0.287684*t3695 + var1[1];
  p_output1[93]=0.024443*t124*t3331 + t3371 + t3527 - 0.226323*t3659 + 0.285699*t3695 + var1[1];
  p_output1[94]=0.024404*t124*t3331 + t3371 + t3527 - 0.230598*t3659 + 0.283228*t3695 + var1[1];
  p_output1[95]=0.02592*t124*t3331 + t3371 + t3527 - 0.234451*t3659 + 0.280538*t3695 + var1[1];
  p_output1[96]=0.028826*t124*t3331 + t3371 + t3527 - 0.237466*t3659 + 0.277921*t3695 + var1[1];
  p_output1[97]=0.032807*t124*t3331 + t3371 + t3527 - 0.239315*t3659 + 0.275661*t3695 + var1[1];
  p_output1[98]=0.037433*t124*t3331 + t3371 + t3527 - 0.239798*t3659 + 0.274001*t3695 + var1[1];
  p_output1[99]=t4664;
  p_output1[100]=t4799;
  p_output1[101]=-0.046595*t124*t3348 + t4328 + t4335 - 0.236611*t4340 + 0.273121*t4353 + var1[2];
  p_output1[102]=-0.050139*t124*t3348 + t4328 + t4335 - 0.233286*t4340 + 0.273996*t4353 + var1[2];
  p_output1[103]=-0.052449*t124*t3348 + t4328 + t4335 - 0.229248*t4340 + 0.275653*t4353 + var1[2];
  p_output1[104]=-0.053275*t124*t3348 + t4328 + t4335 - 0.224935*t4340 + 0.277911*t4353 + var1[2];
  p_output1[105]=-0.052526*t124*t3348 + t4328 + t4335 - 0.220815*t4340 + 0.280527*t4353 + var1[2];
  p_output1[106]=-0.050285*t124*t3348 + t4328 + t4335 - 0.217333*t4340 + 0.283217*t4353 + var1[2];
  p_output1[107]=-0.046793*t124*t3348 + t4328 + t4335 - 0.214868*t4340 + 0.28569*t4353 + var1[2];
  p_output1[108]=-0.04243*t124*t3348 + t4328 + t4335 - 0.213686*t4340 + 0.287677*t4353 + var1[2];
  p_output1[109]=-0.037668*t124*t3348 + t4328 + t4335 - 0.213915*t4340 + 0.288963*t4353 + var1[2];
  p_output1[110]=-0.033024*t124*t3348 + t4328 + t4335 - 0.215531*t4340 + 0.289409*t4353 + var1[2];
  p_output1[111]=-0.029*t124*t3348 + t4328 + t4335 - 0.218358*t4340 + 0.288967*t4353 + var1[2];
  p_output1[112]=-0.026032*t124*t3348 + t4328 + t4335 - 0.22209*t4340 + 0.287684*t4353 + var1[2];
  p_output1[113]=-0.024443*t124*t3348 + t4328 + t4335 - 0.226323*t4340 + 0.285699*t4353 + var1[2];
  p_output1[114]=-0.024404*t124*t3348 + t4328 + t4335 - 0.230598*t4340 + 0.283228*t4353 + var1[2];
  p_output1[115]=-0.02592*t124*t3348 + t4328 + t4335 - 0.234451*t4340 + 0.280538*t4353 + var1[2];
  p_output1[116]=-0.028826*t124*t3348 + t4328 + t4335 - 0.237466*t4340 + 0.277921*t4353 + var1[2];
  p_output1[117]=-0.032807*t124*t3348 + t4328 + t4335 - 0.239315*t4340 + 0.275661*t4353 + var1[2];
  p_output1[118]=-0.037433*t124*t3348 + t4328 + t4335 - 0.239798*t4340 + 0.274001*t4353 + var1[2];
  p_output1[119]=t4799;
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
