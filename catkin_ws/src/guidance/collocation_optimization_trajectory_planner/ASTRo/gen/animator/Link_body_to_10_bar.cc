/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:24:44 GMT+02:00
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
  double t599;
  double t829;
  double t1321;
  double t2204;
  double t851;
  double t1831;
  double t2208;
  double t2211;
  double t3693;
  double t3729;
  double t3716;
  double t3736;
  double t3739;
  double t3748;
  double t3751;
  double t3756;
  double t3714;
  double t3746;
  double t3774;
  double t3780;
  double t5406;
  double t5407;
  double t5411;
  double t5418;
  double t5423;
  double t5427;
  double t5396;
  double t5415;
  double t5428;
  double t5429;
  double t2215;
  double t2254;
  double t2279;
  double t2319;
  double t2342;
  double t2710;
  double t2889;
  double t2958;
  double t2996;
  double t3020;
  double t3179;
  double t3256;
  double t3335;
  double t3405;
  double t3543;
  double t3561;
  double t3607;
  double t3679;
  double t5570;
  double t5571;
  double t5572;
  double t3798;
  double t3821;
  double t3843;
  double t3862;
  double t4016;
  double t4272;
  double t4442;
  double t4674;
  double t5102;
  double t5175;
  double t5194;
  double t5219;
  double t5244;
  double t5305;
  double t5327;
  double t5356;
  double t5367;
  double t5379;
  double t5631;
  double t5632;
  double t5633;
  double t5432;
  double t5442;
  double t5450;
  double t5468;
  double t5483;
  double t5490;
  double t5501;
  double t5506;
  double t5511;
  double t5517;
  double t5522;
  double t5527;
  double t5533;
  double t5539;
  double t5545;
  double t5551;
  double t5559;
  double t5564;
  double t5689;
  double t5690;
  double t5692;
  t599 = Cos(var1[4]);
  t829 = Cos(var1[5]);
  t1321 = Sin(var1[4]);
  t2204 = Sin(var1[5]);
  t851 = 0.008449*t599*t829;
  t1831 = 0.009069*t1321;
  t2208 = -0.008449*t599*t2204;
  t2211 = var1[0] + t851 + t1831 + t2208;
  t3693 = Sin(var1[3]);
  t3729 = Cos(var1[3]);
  t3716 = t829*t3693*t1321;
  t3736 = t3729*t2204;
  t3739 = t3716 + t3736;
  t3748 = t3729*t829;
  t3751 = -1.*t3693*t1321*t2204;
  t3756 = t3748 + t3751;
  t3714 = -0.009069*t599*t3693;
  t3746 = 0.008449*t3739;
  t3774 = 0.008449*t3756;
  t3780 = var1[1] + t3714 + t3746 + t3774;
  t5406 = -1.*t3729*t829*t1321;
  t5407 = t3693*t2204;
  t5411 = t5406 + t5407;
  t5418 = t829*t3693;
  t5423 = t3729*t1321*t2204;
  t5427 = t5418 + t5423;
  t5396 = 0.009069*t3729*t599;
  t5415 = 0.008449*t5411;
  t5428 = 0.008449*t5427;
  t5429 = var1[2] + t5396 + t5415 + t5428;
  t2215 = 0.012457*t1321;
  t2254 = 0.014495*t1321;
  t2279 = 0.014963*t1321;
  t2319 = 0.013809*t1321;
  t2342 = 0.011159*t1321;
  t2710 = 0.007299*t1321;
  t2889 = 0.002649*t1321;
  t2958 = -0.002289*t1321;
  t2996 = -0.006978*t1321;
  t3020 = -0.010911*t1321;
  t3179 = -0.013662*t1321;
  t3256 = -0.014933*t1321;
  t3335 = -0.014585*t1321;
  t3405 = -0.012656*t1321;
  t3543 = -0.009356*t1321;
  t3561 = -0.005043*t1321;
  t3607 = -0.000182*t1321;
  t3679 = 0.004698*t1321;
  t5570 = 0.159659*t599*t829;
  t5571 = 0.142761*t599*t2204;
  t5572 = var1[0] + t5570 + t1831 + t5571;
  t3798 = -0.012457*t599*t3693;
  t3821 = -0.014495*t599*t3693;
  t3843 = -0.014963*t599*t3693;
  t3862 = -0.013809*t599*t3693;
  t4016 = -0.011159*t599*t3693;
  t4272 = -0.007299*t599*t3693;
  t4442 = -0.002649*t599*t3693;
  t4674 = 0.002289*t599*t3693;
  t5102 = 0.006978*t599*t3693;
  t5175 = 0.010911*t599*t3693;
  t5194 = 0.013662*t599*t3693;
  t5219 = 0.014933*t599*t3693;
  t5244 = 0.014585*t599*t3693;
  t5305 = 0.012656*t599*t3693;
  t5327 = 0.009356*t599*t3693;
  t5356 = 0.005043*t599*t3693;
  t5367 = 0.000182*t599*t3693;
  t5379 = -0.004698*t599*t3693;
  t5631 = 0.159659*t3739;
  t5632 = -0.142761*t3756;
  t5633 = var1[1] + t3714 + t5631 + t5632;
  t5432 = 0.012457*t3729*t599;
  t5442 = 0.014495*t3729*t599;
  t5450 = 0.014963*t3729*t599;
  t5468 = 0.013809*t3729*t599;
  t5483 = 0.011159*t3729*t599;
  t5490 = 0.007299*t3729*t599;
  t5501 = 0.002649*t3729*t599;
  t5506 = -0.002289*t3729*t599;
  t5511 = -0.006978*t3729*t599;
  t5517 = -0.010911*t3729*t599;
  t5522 = -0.013662*t3729*t599;
  t5527 = -0.014933*t3729*t599;
  t5533 = -0.014585*t3729*t599;
  t5539 = -0.012656*t3729*t599;
  t5545 = -0.009356*t3729*t599;
  t5551 = -0.005043*t3729*t599;
  t5559 = -0.000182*t3729*t599;
  t5564 = 0.004698*t3729*t599;
  t5689 = 0.159659*t5411;
  t5690 = -0.142761*t5427;
  t5692 = var1[2] + t5396 + t5689 + t5690;
  p_output1[0]=t2211;
  p_output1[1]=t2215 - 0.005909*t2204*t599 + 0.005909*t599*t829 + var1[0];
  p_output1[2]=t2254 - 0.002729*t2204*t599 + 0.002729*t599*t829 + var1[0];
  p_output1[3]=t2279 + 0.000747*t2204*t599 - 0.000747*t599*t829 + var1[0];
  p_output1[4]=t2319 + 0.004142*t2204*t599 - 0.004142*t599*t829 + var1[0];
  p_output1[5]=t2342 + 0.007088*t2204*t599 - 0.007088*t599*t829 + var1[0];
  p_output1[6]=t2710 + 0.009266*t2204*t599 - 0.009266*t599*t829 + var1[0];
  p_output1[7]=t2889 + 0.01044*t2204*t599 - 0.01044*t599*t829 + var1[0];
  p_output1[8]=t2958 + 0.010482*t2204*t599 - 0.010482*t599*t829 + var1[0];
  p_output1[9]=t2996 + 0.009389*t2204*t599 - 0.009389*t599*t829 + var1[0];
  p_output1[10]=t3020 + 0.007278*t2204*t599 - 0.007278*t599*t829 + var1[0];
  p_output1[11]=t3179 + 0.004378*t2204*t599 - 0.004378*t599*t829 + var1[0];
  p_output1[12]=t3256 + 0.001004*t2204*t599 - 0.001004*t599*t829 + var1[0];
  p_output1[13]=t3335 - 0.002479*t2204*t599 + 0.002479*t599*t829 + var1[0];
  p_output1[14]=t3405 - 0.005693*t2204*t599 + 0.005693*t599*t829 + var1[0];
  p_output1[15]=t3543 - 0.00829*t2204*t599 + 0.00829*t599*t829 + var1[0];
  p_output1[16]=t3561 - 0.009989*t2204*t599 + 0.009989*t599*t829 + var1[0];
  p_output1[17]=t3607 - 0.010606*t2204*t599 + 0.010606*t599*t829 + var1[0];
  p_output1[18]=t3679 - 0.010073*t2204*t599 + 0.010073*t599*t829 + var1[0];
  p_output1[19]=t2211;
  p_output1[20]=t3780;
  p_output1[21]=0.005909*t3739 + 0.005909*t3756 + t3798 + var1[1];
  p_output1[22]=0.002729*t3739 + 0.002729*t3756 + t3821 + var1[1];
  p_output1[23]=-0.000747*t3739 - 0.000747*t3756 + t3843 + var1[1];
  p_output1[24]=-0.004142*t3739 - 0.004142*t3756 + t3862 + var1[1];
  p_output1[25]=-0.007088*t3739 - 0.007088*t3756 + t4016 + var1[1];
  p_output1[26]=-0.009266*t3739 - 0.009266*t3756 + t4272 + var1[1];
  p_output1[27]=-0.01044*t3739 - 0.01044*t3756 + t4442 + var1[1];
  p_output1[28]=-0.010482*t3739 - 0.010482*t3756 + t4674 + var1[1];
  p_output1[29]=-0.009389*t3739 - 0.009389*t3756 + t5102 + var1[1];
  p_output1[30]=-0.007278*t3739 - 0.007278*t3756 + t5175 + var1[1];
  p_output1[31]=-0.004378*t3739 - 0.004378*t3756 + t5194 + var1[1];
  p_output1[32]=-0.001004*t3739 - 0.001004*t3756 + t5219 + var1[1];
  p_output1[33]=0.002479*t3739 + 0.002479*t3756 + t5244 + var1[1];
  p_output1[34]=0.005693*t3739 + 0.005693*t3756 + t5305 + var1[1];
  p_output1[35]=0.00829*t3739 + 0.00829*t3756 + t5327 + var1[1];
  p_output1[36]=0.009989*t3739 + 0.009989*t3756 + t5356 + var1[1];
  p_output1[37]=0.010606*t3739 + 0.010606*t3756 + t5367 + var1[1];
  p_output1[38]=0.010073*t3739 + 0.010073*t3756 + t5379 + var1[1];
  p_output1[39]=t3780;
  p_output1[40]=t5429;
  p_output1[41]=0.005909*t5411 + 0.005909*t5427 + t5432 + var1[2];
  p_output1[42]=0.002729*t5411 + 0.002729*t5427 + t5442 + var1[2];
  p_output1[43]=-0.000747*t5411 - 0.000747*t5427 + t5450 + var1[2];
  p_output1[44]=-0.004142*t5411 - 0.004142*t5427 + t5468 + var1[2];
  p_output1[45]=-0.007088*t5411 - 0.007088*t5427 + t5483 + var1[2];
  p_output1[46]=-0.009266*t5411 - 0.009266*t5427 + t5490 + var1[2];
  p_output1[47]=-0.01044*t5411 - 0.01044*t5427 + t5501 + var1[2];
  p_output1[48]=-0.010482*t5411 - 0.010482*t5427 + t5506 + var1[2];
  p_output1[49]=-0.009389*t5411 - 0.009389*t5427 + t5511 + var1[2];
  p_output1[50]=-0.007278*t5411 - 0.007278*t5427 + t5517 + var1[2];
  p_output1[51]=-0.004378*t5411 - 0.004378*t5427 + t5522 + var1[2];
  p_output1[52]=-0.001004*t5411 - 0.001004*t5427 + t5527 + var1[2];
  p_output1[53]=0.002479*t5411 + 0.002479*t5427 + t5533 + var1[2];
  p_output1[54]=0.005693*t5411 + 0.005693*t5427 + t5539 + var1[2];
  p_output1[55]=0.00829*t5411 + 0.00829*t5427 + t5545 + var1[2];
  p_output1[56]=0.009989*t5411 + 0.009989*t5427 + t5551 + var1[2];
  p_output1[57]=0.010606*t5411 + 0.010606*t5427 + t5559 + var1[2];
  p_output1[58]=0.010073*t5411 + 0.010073*t5427 + t5564 + var1[2];
  p_output1[59]=t5429;
  p_output1[60]=t5572;
  p_output1[61]=t2215 + 0.145301*t2204*t599 + 0.157119*t599*t829 + var1[0];
  p_output1[62]=t2254 + 0.148481*t2204*t599 + 0.153939*t599*t829 + var1[0];
  p_output1[63]=t2279 + 0.151957*t2204*t599 + 0.150463*t599*t829 + var1[0];
  p_output1[64]=t2319 + 0.155352*t2204*t599 + 0.147068*t599*t829 + var1[0];
  p_output1[65]=t2342 + 0.158298*t2204*t599 + 0.144122*t599*t829 + var1[0];
  p_output1[66]=t2710 + 0.160476*t2204*t599 + 0.141944*t599*t829 + var1[0];
  p_output1[67]=t2889 + 0.16165*t2204*t599 + 0.14077*t599*t829 + var1[0];
  p_output1[68]=t2958 + 0.161692*t2204*t599 + 0.140728*t599*t829 + var1[0];
  p_output1[69]=t2996 + 0.160599*t2204*t599 + 0.141821*t599*t829 + var1[0];
  p_output1[70]=t3020 + 0.158488*t2204*t599 + 0.143932*t599*t829 + var1[0];
  p_output1[71]=t3179 + 0.155588*t2204*t599 + 0.146832*t599*t829 + var1[0];
  p_output1[72]=t3256 + 0.152214*t2204*t599 + 0.150206*t599*t829 + var1[0];
  p_output1[73]=t3335 + 0.148731*t2204*t599 + 0.153689*t599*t829 + var1[0];
  p_output1[74]=t3405 + 0.145517*t2204*t599 + 0.156903*t599*t829 + var1[0];
  p_output1[75]=t3543 + 0.14292*t2204*t599 + 0.1595*t599*t829 + var1[0];
  p_output1[76]=t3561 + 0.141221*t2204*t599 + 0.161199*t599*t829 + var1[0];
  p_output1[77]=t3607 + 0.140604*t2204*t599 + 0.161816*t599*t829 + var1[0];
  p_output1[78]=t3679 + 0.141137*t2204*t599 + 0.161283*t599*t829 + var1[0];
  p_output1[79]=t5572;
  p_output1[80]=t5633;
  p_output1[81]=0.157119*t3739 - 0.145301*t3756 + t3798 + var1[1];
  p_output1[82]=0.153939*t3739 - 0.148481*t3756 + t3821 + var1[1];
  p_output1[83]=0.150463*t3739 - 0.151957*t3756 + t3843 + var1[1];
  p_output1[84]=0.147068*t3739 - 0.155352*t3756 + t3862 + var1[1];
  p_output1[85]=0.144122*t3739 - 0.158298*t3756 + t4016 + var1[1];
  p_output1[86]=0.141944*t3739 - 0.160476*t3756 + t4272 + var1[1];
  p_output1[87]=0.14077*t3739 - 0.16165*t3756 + t4442 + var1[1];
  p_output1[88]=0.140728*t3739 - 0.161692*t3756 + t4674 + var1[1];
  p_output1[89]=0.141821*t3739 - 0.160599*t3756 + t5102 + var1[1];
  p_output1[90]=0.143932*t3739 - 0.158488*t3756 + t5175 + var1[1];
  p_output1[91]=0.146832*t3739 - 0.155588*t3756 + t5194 + var1[1];
  p_output1[92]=0.150206*t3739 - 0.152214*t3756 + t5219 + var1[1];
  p_output1[93]=0.153689*t3739 - 0.148731*t3756 + t5244 + var1[1];
  p_output1[94]=0.156903*t3739 - 0.145517*t3756 + t5305 + var1[1];
  p_output1[95]=0.1595*t3739 - 0.14292*t3756 + t5327 + var1[1];
  p_output1[96]=0.161199*t3739 - 0.141221*t3756 + t5356 + var1[1];
  p_output1[97]=0.161816*t3739 - 0.140604*t3756 + t5367 + var1[1];
  p_output1[98]=0.161283*t3739 - 0.141137*t3756 + t5379 + var1[1];
  p_output1[99]=t5633;
  p_output1[100]=t5692;
  p_output1[101]=0.157119*t5411 - 0.145301*t5427 + t5432 + var1[2];
  p_output1[102]=0.153939*t5411 - 0.148481*t5427 + t5442 + var1[2];
  p_output1[103]=0.150463*t5411 - 0.151957*t5427 + t5450 + var1[2];
  p_output1[104]=0.147068*t5411 - 0.155352*t5427 + t5468 + var1[2];
  p_output1[105]=0.144122*t5411 - 0.158298*t5427 + t5483 + var1[2];
  p_output1[106]=0.141944*t5411 - 0.160476*t5427 + t5490 + var1[2];
  p_output1[107]=0.14077*t5411 - 0.16165*t5427 + t5501 + var1[2];
  p_output1[108]=0.140728*t5411 - 0.161692*t5427 + t5506 + var1[2];
  p_output1[109]=0.141821*t5411 - 0.160599*t5427 + t5511 + var1[2];
  p_output1[110]=0.143932*t5411 - 0.158488*t5427 + t5517 + var1[2];
  p_output1[111]=0.146832*t5411 - 0.155588*t5427 + t5522 + var1[2];
  p_output1[112]=0.150206*t5411 - 0.152214*t5427 + t5527 + var1[2];
  p_output1[113]=0.153689*t5411 - 0.148731*t5427 + t5533 + var1[2];
  p_output1[114]=0.156903*t5411 - 0.145517*t5427 + t5539 + var1[2];
  p_output1[115]=0.1595*t5411 - 0.14292*t5427 + t5545 + var1[2];
  p_output1[116]=0.161199*t5411 - 0.141221*t5427 + t5551 + var1[2];
  p_output1[117]=0.161816*t5411 - 0.140604*t5427 + t5559 + var1[2];
  p_output1[118]=0.161283*t5411 - 0.141137*t5427 + t5564 + var1[2];
  p_output1[119]=t5692;
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

#include "Link_body_to_10_bar.hh"

namespace SymFunction
{

void Link_body_to_10_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
