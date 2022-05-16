/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:46 GMT+02:00
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
  double t1222;
  double t1275;
  double t1277;
  double t1293;
  double t1343;
  double t1349;
  double t1272;
  double t1461;
  double t1301;
  double t1362;
  double t1371;
  double t1412;
  double t1450;
  double t1457;
  double t1462;
  double t1463;
  double t1465;
  double t1466;
  double t1469;
  double t1474;
  double t1487;
  double t1445;
  double t1467;
  double t1493;
  double t1498;
  double t2504;
  double t2559;
  double t2547;
  double t2696;
  double t2704;
  double t2751;
  double t2755;
  double t2764;
  double t2714;
  double t2790;
  double t2848;
  double t2928;
  double t2936;
  double t2976;
  double t2992;
  double t2993;
  double t2544;
  double t2952;
  double t2999;
  double t3001;
  double t5103;
  double t5130;
  double t5144;
  double t5182;
  double t5191;
  double t5200;
  double t5178;
  double t5208;
  double t5214;
  double t5227;
  double t5230;
  double t5254;
  double t5264;
  double t5300;
  double t5090;
  double t5232;
  double t5307;
  double t5316;
  double t1503;
  double t1523;
  double t1539;
  double t1555;
  double t1565;
  double t1569;
  double t1575;
  double t1591;
  double t1610;
  double t1626;
  double t1644;
  double t1654;
  double t1766;
  double t2020;
  double t2166;
  double t2252;
  double t2305;
  double t2338;
  double t5580;
  double t5581;
  double t5582;
  double t3003;
  double t3113;
  double t3236;
  double t3325;
  double t3393;
  double t3465;
  double t3546;
  double t3579;
  double t3617;
  double t3687;
  double t3815;
  double t3845;
  double t3868;
  double t4083;
  double t4287;
  double t4385;
  double t4447;
  double t4655;
  double t5643;
  double t5644;
  double t5645;
  double t5323;
  double t5358;
  double t5374;
  double t5392;
  double t5443;
  double t5461;
  double t5482;
  double t5497;
  double t5503;
  double t5510;
  double t5518;
  double t5525;
  double t5531;
  double t5540;
  double t5548;
  double t5558;
  double t5566;
  double t5576;
  double t5704;
  double t5705;
  double t5706;
  t1222 = Cos(var1[4]);
  t1275 = Cos(var1[12]);
  t1277 = -1.*t1275;
  t1293 = 1. + t1277;
  t1343 = Sin(var1[12]);
  t1349 = -0.15121*t1343;
  t1272 = Cos(var1[5]);
  t1461 = Sin(var1[5]);
  t1301 = 0.15121*t1293;
  t1362 = t1301 + t1349;
  t1371 = t1222*t1272*t1362;
  t1412 = Sin(var1[4]);
  t1450 = -0.15121*t1293;
  t1457 = t1450 + t1349;
  t1462 = -1.*t1222*t1457*t1461;
  t1463 = -1.*t1222*t1272*t1343;
  t1465 = -1.*t1275*t1222*t1461;
  t1466 = t1463 + t1465;
  t1469 = t1275*t1222*t1272;
  t1474 = -1.*t1222*t1343*t1461;
  t1487 = t1469 + t1474;
  t1445 = -0.012524*t1412;
  t1467 = -0.159254*t1466;
  t1493 = 0.149354*t1487;
  t1498 = var1[0] + t1371 + t1445 + t1462 + t1467 + t1493;
  t2504 = Sin(var1[3]);
  t2559 = Cos(var1[3]);
  t2547 = t1272*t2504*t1412;
  t2696 = t2559*t1461;
  t2704 = t2547 + t2696;
  t2751 = t2559*t1272;
  t2755 = -1.*t2504*t1412*t1461;
  t2764 = t2751 + t2755;
  t2714 = t1362*t2704;
  t2790 = t1457*t2764;
  t2848 = -1.*t1343*t2704;
  t2928 = t1275*t2764;
  t2936 = t2848 + t2928;
  t2976 = t1275*t2704;
  t2992 = t1343*t2764;
  t2993 = t2976 + t2992;
  t2544 = 0.012524*t1222*t2504;
  t2952 = -0.159254*t2936;
  t2999 = 0.149354*t2993;
  t3001 = var1[1] + t2544 + t2714 + t2790 + t2952 + t2999;
  t5103 = -1.*t2559*t1272*t1412;
  t5130 = t2504*t1461;
  t5144 = t5103 + t5130;
  t5182 = t1272*t2504;
  t5191 = t2559*t1412*t1461;
  t5200 = t5182 + t5191;
  t5178 = t1362*t5144;
  t5208 = t1457*t5200;
  t5214 = -1.*t1343*t5144;
  t5227 = t1275*t5200;
  t5230 = t5214 + t5227;
  t5254 = t1275*t5144;
  t5264 = t1343*t5200;
  t5300 = t5254 + t5264;
  t5090 = -0.012524*t2559*t1222;
  t5232 = -0.159254*t5230;
  t5307 = 0.149354*t5300;
  t5316 = var1[2] + t5090 + t5178 + t5208 + t5232 + t5307;
  t1503 = -0.014526*t1412;
  t1523 = -0.014954*t1412;
  t1539 = -0.013761*t1412;
  t1555 = -0.011077*t1412;
  t1565 = -0.007193*t1412;
  t1569 = -0.002529*t1412;
  t1575 = 0.002409*t1412;
  t1591 = 0.007085*t1412;
  t1610 = 0.010994*t1412;
  t1626 = 0.013712*t1412;
  t1644 = 0.014944*t1412;
  t1654 = 0.014556*t1412;
  t1766 = 0.012591*t1412;
  t2020 = 0.009261*t1412;
  t2166 = 0.004928*t1412;
  t2252 = 0.000061*t1412;
  t2305 = -0.004813*t1412;
  t2338 = -0.009165*t1412;
  t5580 = -0.189254*t1466;
  t5581 = 0.279354*t1487;
  t5582 = var1[0] + t1371 + t1445 + t1462 + t5580 + t5581;
  t3003 = 0.014526*t1222*t2504;
  t3113 = 0.014954*t1222*t2504;
  t3236 = 0.013761*t1222*t2504;
  t3325 = 0.011077*t1222*t2504;
  t3393 = 0.007193*t1222*t2504;
  t3465 = 0.002529*t1222*t2504;
  t3546 = -0.002409*t1222*t2504;
  t3579 = -0.007085*t1222*t2504;
  t3617 = -0.010994*t1222*t2504;
  t3687 = -0.013712*t1222*t2504;
  t3815 = -0.014944*t1222*t2504;
  t3845 = -0.014556*t1222*t2504;
  t3868 = -0.012591*t1222*t2504;
  t4083 = -0.009261*t1222*t2504;
  t4287 = -0.004928*t1222*t2504;
  t4385 = -0.000061*t1222*t2504;
  t4447 = 0.004813*t1222*t2504;
  t4655 = 0.009165*t1222*t2504;
  t5643 = -0.189254*t2936;
  t5644 = 0.279354*t2993;
  t5645 = var1[1] + t2544 + t2714 + t2790 + t5643 + t5644;
  t5323 = -0.014526*t2559*t1222;
  t5358 = -0.014954*t2559*t1222;
  t5374 = -0.013761*t2559*t1222;
  t5392 = -0.011077*t2559*t1222;
  t5443 = -0.007193*t2559*t1222;
  t5461 = -0.002529*t2559*t1222;
  t5482 = 0.002409*t2559*t1222;
  t5497 = 0.007085*t2559*t1222;
  t5503 = 0.010994*t2559*t1222;
  t5510 = 0.013712*t2559*t1222;
  t5518 = 0.014944*t2559*t1222;
  t5525 = 0.014556*t2559*t1222;
  t5531 = 0.012591*t2559*t1222;
  t5540 = 0.009261*t2559*t1222;
  t5548 = 0.004928*t2559*t1222;
  t5558 = 0.000061*t2559*t1222;
  t5566 = -0.004813*t2559*t1222;
  t5576 = -0.009165*t2559*t1222;
  t5704 = -0.189254*t5230;
  t5705 = 0.279354*t5300;
  t5706 = var1[2] + t5090 + t5178 + t5208 + t5704 + t5705;
  p_output1[0]=t1498;
  p_output1[1]=t1371 + t1462 - 0.154856*t1466 + 0.150369*t1487 + t1503 + var1[0];
  p_output1[2]=t1371 + t1462 - 0.150062*t1466 + 0.151475*t1487 + t1523 + var1[0];
  p_output1[3]=t1371 + t1462 - 0.145394*t1466 + 0.152552*t1487 + t1539 + var1[0];
  p_output1[4]=t1371 + t1462 - 0.141355*t1466 + 0.153484*t1487 + t1555 + var1[0];
  p_output1[5]=t1371 + t1462 - 0.138384*t1466 + 0.15417*t1487 + t1565 + var1[0];
  p_output1[6]=t1371 + t1462 - 0.136803*t1466 + 0.154535*t1487 + t1569 + var1[0];
  p_output1[7]=t1371 + t1462 - 0.136784*t1466 + 0.154539*t1487 + t1575 + var1[0];
  p_output1[8]=t1371 + t1462 - 0.138327*t1466 + 0.154183*t1487 + t1591 + var1[0];
  p_output1[9]=t1371 + t1462 - 0.141267*t1466 + 0.153504*t1487 + t1610 + var1[0];
  p_output1[10]=t1371 + t1462 - 0.145284*t1466 + 0.152577*t1487 + t1626 + var1[0];
  p_output1[11]=t1371 + t1462 - 0.149944*t1466 + 0.151502*t1487 + t1644 + var1[0];
  p_output1[12]=t1371 + t1462 - 0.15474*t1466 + 0.150395*t1487 + t1654 + var1[0];
  p_output1[13]=t1371 + t1462 - 0.159154*t1466 + 0.149377*t1487 + t1766 + var1[0];
  p_output1[14]=t1371 + t1462 - 0.162707*t1466 + 0.148557*t1487 + t2020 + var1[0];
  p_output1[15]=t1371 + t1462 - 0.165014*t1466 + 0.148024*t1487 + t2166 + var1[0];
  p_output1[16]=t1371 + t1462 - 0.165826*t1466 + 0.147837*t1487 + t2252 + var1[0];
  p_output1[17]=t1371 + t1462 - 0.165053*t1466 + 0.148015*t1487 + t2305 + var1[0];
  p_output1[18]=t1371 + t1462 - 0.16278*t1466 + 0.14854*t1487 + t2338 + var1[0];
  p_output1[19]=t1498;
  p_output1[20]=t3001;
  p_output1[21]=t2714 + t2790 - 0.154856*t2936 + 0.150369*t2993 + t3003 + var1[1];
  p_output1[22]=t2714 + t2790 - 0.150062*t2936 + 0.151475*t2993 + t3113 + var1[1];
  p_output1[23]=t2714 + t2790 - 0.145394*t2936 + 0.152552*t2993 + t3236 + var1[1];
  p_output1[24]=t2714 + t2790 - 0.141355*t2936 + 0.153484*t2993 + t3325 + var1[1];
  p_output1[25]=t2714 + t2790 - 0.138384*t2936 + 0.15417*t2993 + t3393 + var1[1];
  p_output1[26]=t2714 + t2790 - 0.136803*t2936 + 0.154535*t2993 + t3465 + var1[1];
  p_output1[27]=t2714 + t2790 - 0.136784*t2936 + 0.154539*t2993 + t3546 + var1[1];
  p_output1[28]=t2714 + t2790 - 0.138327*t2936 + 0.154183*t2993 + t3579 + var1[1];
  p_output1[29]=t2714 + t2790 - 0.141267*t2936 + 0.153504*t2993 + t3617 + var1[1];
  p_output1[30]=t2714 + t2790 - 0.145284*t2936 + 0.152577*t2993 + t3687 + var1[1];
  p_output1[31]=t2714 + t2790 - 0.149944*t2936 + 0.151502*t2993 + t3815 + var1[1];
  p_output1[32]=t2714 + t2790 - 0.15474*t2936 + 0.150395*t2993 + t3845 + var1[1];
  p_output1[33]=t2714 + t2790 - 0.159154*t2936 + 0.149377*t2993 + t3868 + var1[1];
  p_output1[34]=t2714 + t2790 - 0.162707*t2936 + 0.148557*t2993 + t4083 + var1[1];
  p_output1[35]=t2714 + t2790 - 0.165014*t2936 + 0.148024*t2993 + t4287 + var1[1];
  p_output1[36]=t2714 + t2790 - 0.165826*t2936 + 0.147837*t2993 + t4385 + var1[1];
  p_output1[37]=t2714 + t2790 - 0.165053*t2936 + 0.148015*t2993 + t4447 + var1[1];
  p_output1[38]=t2714 + t2790 - 0.16278*t2936 + 0.14854*t2993 + t4655 + var1[1];
  p_output1[39]=t3001;
  p_output1[40]=t5316;
  p_output1[41]=t5178 + t5208 - 0.154856*t5230 + 0.150369*t5300 + t5323 + var1[2];
  p_output1[42]=t5178 + t5208 - 0.150062*t5230 + 0.151475*t5300 + t5358 + var1[2];
  p_output1[43]=t5178 + t5208 - 0.145394*t5230 + 0.152552*t5300 + t5374 + var1[2];
  p_output1[44]=t5178 + t5208 - 0.141355*t5230 + 0.153484*t5300 + t5392 + var1[2];
  p_output1[45]=t5178 + t5208 - 0.138384*t5230 + 0.15417*t5300 + t5443 + var1[2];
  p_output1[46]=t5178 + t5208 - 0.136803*t5230 + 0.154535*t5300 + t5461 + var1[2];
  p_output1[47]=t5178 + t5208 - 0.136784*t5230 + 0.154539*t5300 + t5482 + var1[2];
  p_output1[48]=t5178 + t5208 - 0.138327*t5230 + 0.154183*t5300 + t5497 + var1[2];
  p_output1[49]=t5178 + t5208 - 0.141267*t5230 + 0.153504*t5300 + t5503 + var1[2];
  p_output1[50]=t5178 + t5208 - 0.145284*t5230 + 0.152577*t5300 + t5510 + var1[2];
  p_output1[51]=t5178 + t5208 - 0.149944*t5230 + 0.151502*t5300 + t5518 + var1[2];
  p_output1[52]=t5178 + t5208 - 0.15474*t5230 + 0.150395*t5300 + t5525 + var1[2];
  p_output1[53]=t5178 + t5208 - 0.159154*t5230 + 0.149377*t5300 + t5531 + var1[2];
  p_output1[54]=t5178 + t5208 - 0.162707*t5230 + 0.148557*t5300 + t5540 + var1[2];
  p_output1[55]=t5178 + t5208 - 0.165014*t5230 + 0.148024*t5300 + t5548 + var1[2];
  p_output1[56]=t5178 + t5208 - 0.165826*t5230 + 0.147837*t5300 + t5558 + var1[2];
  p_output1[57]=t5178 + t5208 - 0.165053*t5230 + 0.148015*t5300 + t5566 + var1[2];
  p_output1[58]=t5178 + t5208 - 0.16278*t5230 + 0.14854*t5300 + t5576 + var1[2];
  p_output1[59]=t5316;
  p_output1[60]=t5582;
  p_output1[61]=t1371 + t1462 - 0.184856*t1466 + 0.280369*t1487 + t1503 + var1[0];
  p_output1[62]=t1371 + t1462 - 0.180062*t1466 + 0.281475*t1487 + t1523 + var1[0];
  p_output1[63]=t1371 + t1462 - 0.175394*t1466 + 0.282552*t1487 + t1539 + var1[0];
  p_output1[64]=t1371 + t1462 - 0.171355*t1466 + 0.283484*t1487 + t1555 + var1[0];
  p_output1[65]=t1371 + t1462 - 0.168384*t1466 + 0.28417*t1487 + t1565 + var1[0];
  p_output1[66]=t1371 + t1462 - 0.166803*t1466 + 0.284535*t1487 + t1569 + var1[0];
  p_output1[67]=t1371 + t1462 - 0.166784*t1466 + 0.284539*t1487 + t1575 + var1[0];
  p_output1[68]=t1371 + t1462 - 0.168327*t1466 + 0.284183*t1487 + t1591 + var1[0];
  p_output1[69]=t1371 + t1462 - 0.171267*t1466 + 0.283504*t1487 + t1610 + var1[0];
  p_output1[70]=t1371 + t1462 - 0.175284*t1466 + 0.282577*t1487 + t1626 + var1[0];
  p_output1[71]=t1371 + t1462 - 0.179944*t1466 + 0.281502*t1487 + t1644 + var1[0];
  p_output1[72]=t1371 + t1462 - 0.18474*t1466 + 0.280395*t1487 + t1654 + var1[0];
  p_output1[73]=t1371 + t1462 - 0.189154*t1466 + 0.279377*t1487 + t1766 + var1[0];
  p_output1[74]=t1371 + t1462 - 0.192707*t1466 + 0.278557*t1487 + t2020 + var1[0];
  p_output1[75]=t1371 + t1462 - 0.195014*t1466 + 0.278024*t1487 + t2166 + var1[0];
  p_output1[76]=t1371 + t1462 - 0.195826*t1466 + 0.277837*t1487 + t2252 + var1[0];
  p_output1[77]=t1371 + t1462 - 0.195053*t1466 + 0.278015*t1487 + t2305 + var1[0];
  p_output1[78]=t1371 + t1462 - 0.19278*t1466 + 0.27854*t1487 + t2338 + var1[0];
  p_output1[79]=t5582;
  p_output1[80]=t5645;
  p_output1[81]=t2714 + t2790 - 0.184856*t2936 + 0.280369*t2993 + t3003 + var1[1];
  p_output1[82]=t2714 + t2790 - 0.180062*t2936 + 0.281475*t2993 + t3113 + var1[1];
  p_output1[83]=t2714 + t2790 - 0.175394*t2936 + 0.282552*t2993 + t3236 + var1[1];
  p_output1[84]=t2714 + t2790 - 0.171355*t2936 + 0.283484*t2993 + t3325 + var1[1];
  p_output1[85]=t2714 + t2790 - 0.168384*t2936 + 0.28417*t2993 + t3393 + var1[1];
  p_output1[86]=t2714 + t2790 - 0.166803*t2936 + 0.284535*t2993 + t3465 + var1[1];
  p_output1[87]=t2714 + t2790 - 0.166784*t2936 + 0.284539*t2993 + t3546 + var1[1];
  p_output1[88]=t2714 + t2790 - 0.168327*t2936 + 0.284183*t2993 + t3579 + var1[1];
  p_output1[89]=t2714 + t2790 - 0.171267*t2936 + 0.283504*t2993 + t3617 + var1[1];
  p_output1[90]=t2714 + t2790 - 0.175284*t2936 + 0.282577*t2993 + t3687 + var1[1];
  p_output1[91]=t2714 + t2790 - 0.179944*t2936 + 0.281502*t2993 + t3815 + var1[1];
  p_output1[92]=t2714 + t2790 - 0.18474*t2936 + 0.280395*t2993 + t3845 + var1[1];
  p_output1[93]=t2714 + t2790 - 0.189154*t2936 + 0.279377*t2993 + t3868 + var1[1];
  p_output1[94]=t2714 + t2790 - 0.192707*t2936 + 0.278557*t2993 + t4083 + var1[1];
  p_output1[95]=t2714 + t2790 - 0.195014*t2936 + 0.278024*t2993 + t4287 + var1[1];
  p_output1[96]=t2714 + t2790 - 0.195826*t2936 + 0.277837*t2993 + t4385 + var1[1];
  p_output1[97]=t2714 + t2790 - 0.195053*t2936 + 0.278015*t2993 + t4447 + var1[1];
  p_output1[98]=t2714 + t2790 - 0.19278*t2936 + 0.27854*t2993 + t4655 + var1[1];
  p_output1[99]=t5645;
  p_output1[100]=t5706;
  p_output1[101]=t5178 + t5208 - 0.184856*t5230 + 0.280369*t5300 + t5323 + var1[2];
  p_output1[102]=t5178 + t5208 - 0.180062*t5230 + 0.281475*t5300 + t5358 + var1[2];
  p_output1[103]=t5178 + t5208 - 0.175394*t5230 + 0.282552*t5300 + t5374 + var1[2];
  p_output1[104]=t5178 + t5208 - 0.171355*t5230 + 0.283484*t5300 + t5392 + var1[2];
  p_output1[105]=t5178 + t5208 - 0.168384*t5230 + 0.28417*t5300 + t5443 + var1[2];
  p_output1[106]=t5178 + t5208 - 0.166803*t5230 + 0.284535*t5300 + t5461 + var1[2];
  p_output1[107]=t5178 + t5208 - 0.166784*t5230 + 0.284539*t5300 + t5482 + var1[2];
  p_output1[108]=t5178 + t5208 - 0.168327*t5230 + 0.284183*t5300 + t5497 + var1[2];
  p_output1[109]=t5178 + t5208 - 0.171267*t5230 + 0.283504*t5300 + t5503 + var1[2];
  p_output1[110]=t5178 + t5208 - 0.175284*t5230 + 0.282577*t5300 + t5510 + var1[2];
  p_output1[111]=t5178 + t5208 - 0.179944*t5230 + 0.281502*t5300 + t5518 + var1[2];
  p_output1[112]=t5178 + t5208 - 0.18474*t5230 + 0.280395*t5300 + t5525 + var1[2];
  p_output1[113]=t5178 + t5208 - 0.189154*t5230 + 0.279377*t5300 + t5531 + var1[2];
  p_output1[114]=t5178 + t5208 - 0.192707*t5230 + 0.278557*t5300 + t5540 + var1[2];
  p_output1[115]=t5178 + t5208 - 0.195014*t5230 + 0.278024*t5300 + t5548 + var1[2];
  p_output1[116]=t5178 + t5208 - 0.195826*t5230 + 0.277837*t5300 + t5558 + var1[2];
  p_output1[117]=t5178 + t5208 - 0.195053*t5230 + 0.278015*t5300 + t5566 + var1[2];
  p_output1[118]=t5178 + t5208 - 0.19278*t5230 + 0.27854*t5300 + t5576 + var1[2];
  p_output1[119]=t5706;
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

#include "Link_hip2_to_4_bar.hh"

namespace SymFunction
{

void Link_hip2_to_4_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
