/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:43:02 GMT+02:00
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
  double t1421;
  double t1475;
  double t1838;
  double t2209;
  double t1477;
  double t2165;
  double t2296;
  double t2313;
  double t4085;
  double t4103;
  double t4097;
  double t4105;
  double t4122;
  double t4131;
  double t4133;
  double t4145;
  double t4092;
  double t4125;
  double t4149;
  double t4152;
  double t4607;
  double t4611;
  double t4619;
  double t4624;
  double t4625;
  double t4629;
  double t4603;
  double t4623;
  double t4633;
  double t4636;
  double t2332;
  double t2571;
  double t2736;
  double t2978;
  double t3090;
  double t3395;
  double t3503;
  double t3601;
  double t3641;
  double t3663;
  double t3689;
  double t3749;
  double t3803;
  double t3916;
  double t3966;
  double t3992;
  double t4031;
  double t4051;
  double t5470;
  double t5476;
  double t5479;
  double t4156;
  double t4207;
  double t4248;
  double t4266;
  double t4308;
  double t4366;
  double t4389;
  double t4411;
  double t4427;
  double t4438;
  double t4456;
  double t4482;
  double t4500;
  double t4515;
  double t4533;
  double t4553;
  double t4568;
  double t4579;
  double t5624;
  double t5625;
  double t5626;
  double t4639;
  double t4645;
  double t4665;
  double t4692;
  double t4704;
  double t4758;
  double t4762;
  double t4819;
  double t4847;
  double t4943;
  double t5055;
  double t5095;
  double t5227;
  double t5255;
  double t5330;
  double t5369;
  double t5433;
  double t5448;
  double t5693;
  double t5694;
  double t5695;
  t1421 = Cos(var1[4]);
  t1475 = Cos(var1[5]);
  t1838 = Sin(var1[4]);
  t2209 = Sin(var1[5]);
  t1477 = 0.009555*t1421*t1475;
  t2165 = 0.006512*t1838;
  t2296 = -0.009555*t1421*t2209;
  t2313 = var1[0] + t1477 + t2165 + t2296;
  t4085 = Sin(var1[3]);
  t4103 = Cos(var1[3]);
  t4097 = t1475*t4085*t1838;
  t4105 = t4103*t2209;
  t4122 = t4097 + t4105;
  t4131 = t4103*t1475;
  t4133 = -1.*t4085*t1838*t2209;
  t4145 = t4131 + t4133;
  t4092 = -0.006512*t1421*t4085;
  t4125 = 0.009555*t4122;
  t4149 = 0.009555*t4145;
  t4152 = var1[1] + t4092 + t4125 + t4149;
  t4607 = -1.*t4103*t1475*t1838;
  t4611 = t4085*t2209;
  t4619 = t4607 + t4611;
  t4624 = t1475*t4085;
  t4625 = t4103*t1838*t2209;
  t4629 = t4624 + t4625;
  t4603 = 0.006512*t4103*t1421;
  t4623 = 0.009555*t4619;
  t4633 = 0.009555*t4629;
  t4636 = var1[2] + t4603 + t4623 + t4633;
  t2332 = 0.001772*t1838;
  t2571 = -0.00316*t1838;
  t2736 = -0.00775*t1838;
  t2978 = -0.0115*t1838;
  t3090 = -0.014004*t1838;
  t3395 = -0.01499*t1838;
  t3503 = -0.014352*t1838;
  t3601 = -0.012159*t1838;
  t3641 = -0.008648*t1838;
  t3663 = -0.004199*t1838;
  t3689 = 0.000704*t1838;
  t3749 = 0.005531*t1838;
  t3803 = 0.009758*t1838;
  t3916 = 0.012929*t1838;
  t3966 = 0.014698*t1838;
  t3992 = 0.014874*t1838;
  t4031 = 0.013439*t1838;
  t4051 = 0.010547*t1838;
  t5470 = -0.141655*t1421*t1475;
  t5476 = -0.160765*t1421*t2209;
  t5479 = var1[0] + t5470 + t2165 + t5476;
  t4156 = -0.001772*t1421*t4085;
  t4207 = 0.00316*t1421*t4085;
  t4248 = 0.00775*t1421*t4085;
  t4266 = 0.0115*t1421*t4085;
  t4308 = 0.014004*t1421*t4085;
  t4366 = 0.01499*t1421*t4085;
  t4389 = 0.014352*t1421*t4085;
  t4411 = 0.012159*t1421*t4085;
  t4427 = 0.008648*t1421*t4085;
  t4438 = 0.004199*t1421*t4085;
  t4456 = -0.000704*t1421*t4085;
  t4482 = -0.005531*t1421*t4085;
  t4500 = -0.009758*t1421*t4085;
  t4515 = -0.012929*t1421*t4085;
  t4533 = -0.014698*t1421*t4085;
  t4553 = -0.014874*t1421*t4085;
  t4568 = -0.013439*t1421*t4085;
  t4579 = -0.010547*t1421*t4085;
  t5624 = -0.141655*t4122;
  t5625 = 0.160765*t4145;
  t5626 = var1[1] + t4092 + t5624 + t5625;
  t4639 = 0.001772*t4103*t1421;
  t4645 = -0.00316*t4103*t1421;
  t4665 = -0.00775*t4103*t1421;
  t4692 = -0.0115*t4103*t1421;
  t4704 = -0.014004*t4103*t1421;
  t4758 = -0.01499*t4103*t1421;
  t4762 = -0.014352*t4103*t1421;
  t4819 = -0.012159*t4103*t1421;
  t4847 = -0.008648*t4103*t1421;
  t4943 = -0.004199*t4103*t1421;
  t5055 = 0.000704*t4103*t1421;
  t5095 = 0.005531*t4103*t1421;
  t5227 = 0.009758*t4103*t1421;
  t5255 = 0.012929*t4103*t1421;
  t5330 = 0.014698*t4103*t1421;
  t5369 = 0.014874*t4103*t1421;
  t5433 = 0.013439*t4103*t1421;
  t5448 = 0.010547*t4103*t1421;
  t5693 = -0.141655*t4619;
  t5694 = 0.160765*t4629;
  t5695 = var1[2] + t4603 + t5693 + t5694;
  p_output1[0]=t2313;
  p_output1[1]=0.010532*t1421*t1475 - 0.010532*t1421*t2209 + t2332 + var1[0];
  p_output1[2]=0.010369*t1421*t1475 - 0.010369*t1421*t2209 + t2571 + var1[0];
  p_output1[3]=0.009081*t1421*t1475 - 0.009081*t1421*t2209 + t2736 + var1[0];
  p_output1[4]=0.00681*t1421*t1475 - 0.00681*t1421*t2209 + t2978 + var1[0];
  p_output1[5]=0.0038*t1421*t1475 - 0.0038*t1421*t2209 + t3090 + var1[0];
  p_output1[6]=0.000379*t1421*t1475 - 0.000379*t1421*t2209 + t3395 + var1[0];
  p_output1[7]=-0.003083*t1421*t1475 + 0.003083*t1421*t2209 + t3503 + var1[0];
  p_output1[8]=-0.006212*t1421*t1475 + 0.006212*t1421*t2209 + t3601 + var1[0];
  p_output1[9]=-0.008667*t1421*t1475 + 0.008667*t1421*t2209 + t3641 + var1[0];
  p_output1[10]=-0.010182*t1421*t1475 + 0.010182*t1421*t2209 + t3663 + var1[0];
  p_output1[11]=-0.010595*t1421*t1475 + 0.010595*t1421*t2209 + t3689 + var1[0];
  p_output1[12]=-0.009859*t1421*t1475 + 0.009859*t1421*t2209 + t3749 + var1[0];
  p_output1[13]=-0.008055*t1421*t1475 + 0.008055*t1421*t2209 + t3803 + var1[0];
  p_output1[14]=-0.005378*t1421*t1475 + 0.005378*t1421*t2209 + t3916 + var1[0];
  p_output1[15]=-0.002118*t1421*t1475 + 0.002118*t1421*t2209 + t3966 + var1[0];
  p_output1[16]=0.001371*t1421*t1475 - 0.001371*t1421*t2209 + t3992 + var1[0];
  p_output1[17]=0.004712*t1421*t1475 - 0.004712*t1421*t2209 + t4031 + var1[0];
  p_output1[18]=0.007542*t1421*t1475 - 0.007542*t1421*t2209 + t4051 + var1[0];
  p_output1[19]=t2313;
  p_output1[20]=t4152;
  p_output1[21]=0.010532*t4122 + 0.010532*t4145 + t4156 + var1[1];
  p_output1[22]=0.010369*t4122 + 0.010369*t4145 + t4207 + var1[1];
  p_output1[23]=0.009081*t4122 + 0.009081*t4145 + t4248 + var1[1];
  p_output1[24]=0.00681*t4122 + 0.00681*t4145 + t4266 + var1[1];
  p_output1[25]=0.0038*t4122 + 0.0038*t4145 + t4308 + var1[1];
  p_output1[26]=0.000379*t4122 + 0.000379*t4145 + t4366 + var1[1];
  p_output1[27]=-0.003083*t4122 - 0.003083*t4145 + t4389 + var1[1];
  p_output1[28]=-0.006212*t4122 - 0.006212*t4145 + t4411 + var1[1];
  p_output1[29]=-0.008667*t4122 - 0.008667*t4145 + t4427 + var1[1];
  p_output1[30]=-0.010182*t4122 - 0.010182*t4145 + t4438 + var1[1];
  p_output1[31]=-0.010595*t4122 - 0.010595*t4145 + t4456 + var1[1];
  p_output1[32]=-0.009859*t4122 - 0.009859*t4145 + t4482 + var1[1];
  p_output1[33]=-0.008055*t4122 - 0.008055*t4145 + t4500 + var1[1];
  p_output1[34]=-0.005378*t4122 - 0.005378*t4145 + t4515 + var1[1];
  p_output1[35]=-0.002118*t4122 - 0.002118*t4145 + t4533 + var1[1];
  p_output1[36]=0.001371*t4122 + 0.001371*t4145 + t4553 + var1[1];
  p_output1[37]=0.004712*t4122 + 0.004712*t4145 + t4568 + var1[1];
  p_output1[38]=0.007542*t4122 + 0.007542*t4145 + t4579 + var1[1];
  p_output1[39]=t4152;
  p_output1[40]=t4636;
  p_output1[41]=0.010532*t4619 + 0.010532*t4629 + t4639 + var1[2];
  p_output1[42]=0.010369*t4619 + 0.010369*t4629 + t4645 + var1[2];
  p_output1[43]=0.009081*t4619 + 0.009081*t4629 + t4665 + var1[2];
  p_output1[44]=0.00681*t4619 + 0.00681*t4629 + t4692 + var1[2];
  p_output1[45]=0.0038*t4619 + 0.0038*t4629 + t4704 + var1[2];
  p_output1[46]=0.000379*t4619 + 0.000379*t4629 + t4758 + var1[2];
  p_output1[47]=-0.003083*t4619 - 0.003083*t4629 + t4762 + var1[2];
  p_output1[48]=-0.006212*t4619 - 0.006212*t4629 + t4819 + var1[2];
  p_output1[49]=-0.008667*t4619 - 0.008667*t4629 + t4847 + var1[2];
  p_output1[50]=-0.010182*t4619 - 0.010182*t4629 + t4943 + var1[2];
  p_output1[51]=-0.010595*t4619 - 0.010595*t4629 + t5055 + var1[2];
  p_output1[52]=-0.009859*t4619 - 0.009859*t4629 + t5095 + var1[2];
  p_output1[53]=-0.008055*t4619 - 0.008055*t4629 + t5227 + var1[2];
  p_output1[54]=-0.005378*t4619 - 0.005378*t4629 + t5255 + var1[2];
  p_output1[55]=-0.002118*t4619 - 0.002118*t4629 + t5330 + var1[2];
  p_output1[56]=0.001371*t4619 + 0.001371*t4629 + t5369 + var1[2];
  p_output1[57]=0.004712*t4619 + 0.004712*t4629 + t5433 + var1[2];
  p_output1[58]=0.007542*t4619 + 0.007542*t4629 + t5448 + var1[2];
  p_output1[59]=t4636;
  p_output1[60]=t5479;
  p_output1[61]=-0.140678*t1421*t1475 - 0.161742*t1421*t2209 + t2332 + var1[0];
  p_output1[62]=-0.140841*t1421*t1475 - 0.161579*t1421*t2209 + t2571 + var1[0];
  p_output1[63]=-0.142129*t1421*t1475 - 0.160291*t1421*t2209 + t2736 + var1[0];
  p_output1[64]=-0.1444*t1421*t1475 - 0.15802*t1421*t2209 + t2978 + var1[0];
  p_output1[65]=-0.14741*t1421*t1475 - 0.15501*t1421*t2209 + t3090 + var1[0];
  p_output1[66]=-0.150831*t1421*t1475 - 0.151589*t1421*t2209 + t3395 + var1[0];
  p_output1[67]=-0.154293*t1421*t1475 - 0.148127*t1421*t2209 + t3503 + var1[0];
  p_output1[68]=-0.157422*t1421*t1475 - 0.144998*t1421*t2209 + t3601 + var1[0];
  p_output1[69]=-0.159877*t1421*t1475 - 0.142543*t1421*t2209 + t3641 + var1[0];
  p_output1[70]=-0.161392*t1421*t1475 - 0.141028*t1421*t2209 + t3663 + var1[0];
  p_output1[71]=-0.161805*t1421*t1475 - 0.140615*t1421*t2209 + t3689 + var1[0];
  p_output1[72]=-0.161069*t1421*t1475 - 0.141351*t1421*t2209 + t3749 + var1[0];
  p_output1[73]=-0.159265*t1421*t1475 - 0.143155*t1421*t2209 + t3803 + var1[0];
  p_output1[74]=-0.156588*t1421*t1475 - 0.145832*t1421*t2209 + t3916 + var1[0];
  p_output1[75]=-0.153328*t1421*t1475 - 0.149092*t1421*t2209 + t3966 + var1[0];
  p_output1[76]=-0.149839*t1421*t1475 - 0.152581*t1421*t2209 + t3992 + var1[0];
  p_output1[77]=-0.146498*t1421*t1475 - 0.155922*t1421*t2209 + t4031 + var1[0];
  p_output1[78]=-0.143668*t1421*t1475 - 0.158752*t1421*t2209 + t4051 + var1[0];
  p_output1[79]=t5479;
  p_output1[80]=t5626;
  p_output1[81]=-0.140678*t4122 + 0.161742*t4145 + t4156 + var1[1];
  p_output1[82]=-0.140841*t4122 + 0.161579*t4145 + t4207 + var1[1];
  p_output1[83]=-0.142129*t4122 + 0.160291*t4145 + t4248 + var1[1];
  p_output1[84]=-0.1444*t4122 + 0.15802*t4145 + t4266 + var1[1];
  p_output1[85]=-0.14741*t4122 + 0.15501*t4145 + t4308 + var1[1];
  p_output1[86]=-0.150831*t4122 + 0.151589*t4145 + t4366 + var1[1];
  p_output1[87]=-0.154293*t4122 + 0.148127*t4145 + t4389 + var1[1];
  p_output1[88]=-0.157422*t4122 + 0.144998*t4145 + t4411 + var1[1];
  p_output1[89]=-0.159877*t4122 + 0.142543*t4145 + t4427 + var1[1];
  p_output1[90]=-0.161392*t4122 + 0.141028*t4145 + t4438 + var1[1];
  p_output1[91]=-0.161805*t4122 + 0.140615*t4145 + t4456 + var1[1];
  p_output1[92]=-0.161069*t4122 + 0.141351*t4145 + t4482 + var1[1];
  p_output1[93]=-0.159265*t4122 + 0.143155*t4145 + t4500 + var1[1];
  p_output1[94]=-0.156588*t4122 + 0.145832*t4145 + t4515 + var1[1];
  p_output1[95]=-0.153328*t4122 + 0.149092*t4145 + t4533 + var1[1];
  p_output1[96]=-0.149839*t4122 + 0.152581*t4145 + t4553 + var1[1];
  p_output1[97]=-0.146498*t4122 + 0.155922*t4145 + t4568 + var1[1];
  p_output1[98]=-0.143668*t4122 + 0.158752*t4145 + t4579 + var1[1];
  p_output1[99]=t5626;
  p_output1[100]=t5695;
  p_output1[101]=-0.140678*t4619 + 0.161742*t4629 + t4639 + var1[2];
  p_output1[102]=-0.140841*t4619 + 0.161579*t4629 + t4645 + var1[2];
  p_output1[103]=-0.142129*t4619 + 0.160291*t4629 + t4665 + var1[2];
  p_output1[104]=-0.1444*t4619 + 0.15802*t4629 + t4692 + var1[2];
  p_output1[105]=-0.14741*t4619 + 0.15501*t4629 + t4704 + var1[2];
  p_output1[106]=-0.150831*t4619 + 0.151589*t4629 + t4758 + var1[2];
  p_output1[107]=-0.154293*t4619 + 0.148127*t4629 + t4762 + var1[2];
  p_output1[108]=-0.157422*t4619 + 0.144998*t4629 + t4819 + var1[2];
  p_output1[109]=-0.159877*t4619 + 0.142543*t4629 + t4847 + var1[2];
  p_output1[110]=-0.161392*t4619 + 0.141028*t4629 + t4943 + var1[2];
  p_output1[111]=-0.161805*t4619 + 0.140615*t4629 + t5055 + var1[2];
  p_output1[112]=-0.161069*t4619 + 0.141351*t4629 + t5095 + var1[2];
  p_output1[113]=-0.159265*t4619 + 0.143155*t4629 + t5227 + var1[2];
  p_output1[114]=-0.156588*t4619 + 0.145832*t4629 + t5255 + var1[2];
  p_output1[115]=-0.153328*t4619 + 0.149092*t4629 + t5330 + var1[2];
  p_output1[116]=-0.149839*t4619 + 0.152581*t4629 + t5369 + var1[2];
  p_output1[117]=-0.146498*t4619 + 0.155922*t4629 + t5433 + var1[2];
  p_output1[118]=-0.143668*t4619 + 0.158752*t4629 + t5448 + var1[2];
  p_output1[119]=t5695;
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

#include "Link_body_to_9_bar.hh"

namespace SymFunction
{

void Link_body_to_9_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
